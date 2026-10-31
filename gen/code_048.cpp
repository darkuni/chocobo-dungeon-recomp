#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801CF63C
void f_801CF63C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF63C
  c->r[0]=c->lr; // 801CF640
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF644
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF648
  c->r[31]=c->r[3]|c->r[3]; // 801CF64C
  c->lr=0x801CF654u; f_80156FF0(c); // 801CF650
  cmps(c,0,(int32_t)c->r[3],0); // 801CF654
  if (crb(c,2)) { goto L_801CF694; } // 801CF658
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF65C
  c->r[4]=0u+0x00000000u; // 801CF660
  c->lr=0x801CF668u; f_801CA55C(c); // 801CF664
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801CF668
  cmps(c,0,(int32_t)c->r[0],0); // 801CF66C
  if (!crb(c,2)) { goto L_801CF688; } // 801CF670
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF674
  c->r[4]=0u+0x00000000u; // 801CF678
  c->lr=0x801CF680u; f_801CB2D0(c); // 801CF67C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF680
  c->lr=0x801CF688u; f_801C9A90(c); // 801CF684
L_801CF688:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF688
  c->r[4]=R32(c->r[31]+0x000000ECu); // 801CF68C
  c->lr=0x801CF694u; f_8013114C(c); // 801CF690
L_801CF694:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF694
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF698
  c->lr=c->r[0]; // 801CF69C
  c->r[1]=c->r[1]+0x00000010u; // 801CF6A0
  return; // 801CF6A4
}

// fn_801CF6A8
void f_801CF6A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF6A8
  c->r[0]=c->lr; // 801CF6AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF6B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF6B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF6B8
  c->r[30]=c->r[3]|c->r[3]; // 801CF6BC
  c->r[3]=0u+0x00000009u; // 801CF6C0
  c->lr=0x801CF6C8u; f_801F1364(c); // 801CF6C4
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801CF6C8
  cmps(c,0,(int32_t)c->r[3],0); // 801CF6CC
  if (crb(c,2)) { goto L_801CF6D8; } // 801CF6D0
  c->lr=0x801CF6D8u; f_801CA8D4(c); // 801CF6D4
L_801CF6D8:;
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801CF6D8
  cmps(c,0,(int32_t)c->r[0],0); // 801CF6DC
  if (crb(c,2)) { goto L_801CF710; } // 801CF6E0
  c->lr=0x801CF6E8u; f_80056B5C(c); // 801CF6E4
  c->r[31]=c->r[3]|c->r[3]; // 801CF6E8
  c->lr=0x801CF6F0u; f_801F1340(c); // 801CF6EC
  c->lr=0x801CF6F4u; f_80056B54(c); // 801CF6F0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF6F4
  c->r[4]=0u+0x00000001u; // 801CF6F8
  c->lr=0x801CF700u; f_801C99D4(c); // 801CF6FC
  c->r[3]=c->r[31]|c->r[31]; // 801CF700
  c->lr=0x801CF708u; f_80056B54(c); // 801CF704
  c->r[0]=0u+0x00000000u; // 801CF708
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801CF70C
L_801CF710:;
  c->r[0]=R32(c->r[30]+0x000000F0u); // 801CF710
  cmps(c,0,(int32_t)c->r[0],0); // 801CF714
  if (crb(c,2)) { goto L_801CF75C; } // 801CF718
  c->lr=0x801CF720u; f_80056B5C(c); // 801CF71C
  c->r[31]=c->r[3]|c->r[3]; // 801CF720
  c->lr=0x801CF728u; f_801F1340(c); // 801CF724
  c->lr=0x801CF72Cu; f_80056B54(c); // 801CF728
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801CF72C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF730
  if (crb(c,2)) { goto L_801CF74C; } // 801CF734
  c->r[4]=0u+0x00000001u; // 801CF738
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CF73C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CF740
  c->ctr=c->r[12]; // 801CF744
  if (true) { c->lr=0x801CF74Cu; dispatch(c,c->ctr); } // 801CF748
L_801CF74C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF74C
  c->lr=0x801CF754u; f_80056B54(c); // 801CF750
  c->r[0]=0u+0x00000000u; // 801CF754
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801CF758
L_801CF75C:;
  c->r[3]=c->r[30]|c->r[30]; // 801CF75C
  c->r[4]=0u+0x0000001Bu; // 801CF760
  c->lr=0x801CF768u; f_8013114C(c); // 801CF764
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF768
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF76C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF770
  c->lr=c->r[0]; // 801CF774
  c->r[1]=c->r[1]+0x00000010u; // 801CF778
  return; // 801CF77C
}

// fn_801CF780
void f_801CF780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF780
  c->r[0]=c->lr; // 801CF784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF78C
  c->r[31]=c->r[3]|c->r[3]; // 801CF790
  c->r[4]=0u+0x00000001u; // 801CF794
  c->lr=0x801CF79Cu; f_80131168(c); // 801CF798
  c->r[3]=c->r[31]|c->r[31]; // 801CF79C
  c->r[4]=0u+0x00000001u; // 801CF7A0
  c->lr=0x801CF7A8u; f_80131184(c); // 801CF7A4
  c->r[3]=c->r[31]|c->r[31]; // 801CF7A8
  c->r[4]=0u+0x00000000u; // 801CF7AC
  c->lr=0x801CF7B4u; f_8013114C(c); // 801CF7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF7B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF7B8
  c->lr=c->r[0]; // 801CF7BC
  c->r[1]=c->r[1]+0x00000010u; // 801CF7C0
  return; // 801CF7C4
}

// fn_801CF7C8
void f_801CF7C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF7C8
  c->r[0]=c->lr; // 801CF7CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF7D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF7D4
  c->r[31]=c->r[3]|c->r[3]; // 801CF7D8
  c->r[4]=0u+0x00000000u; // 801CF7DC
  c->lr=0x801CF7E4u; f_801311BC(c); // 801CF7E0
  c->r[3]=c->r[31]|c->r[31]; // 801CF7E4
  c->r[4]=0u+0x00000001u; // 801CF7E8
  c->lr=0x801CF7F0u; f_8013114C(c); // 801CF7EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF7F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF7F4
  c->lr=c->r[0]; // 801CF7F8
  c->r[1]=c->r[1]+0x00000010u; // 801CF7FC
  return; // 801CF800
}

// fn_801CF804
void f_801CF804(Ctx* __restrict c) {
  c->r[4]=0u+0x0000001Au; // 801CF804
  f_8013114C(c); return; // 801CF808
}

// fn_801CF80C
void f_801CF80C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF80C
  c->r[0]=c->lr; // 801CF810
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF818
  c->r[31]=c->r[3]|c->r[3]; // 801CF81C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CF820
  cmps(c,0,(int32_t)c->r[3],0); // 801CF824
  if (crb(c,2)) { goto L_801CF830; } // 801CF828
  c->lr=0x801CF830u; f_801CA600(c); // 801CF82C
L_801CF830:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF830
  c->r[4]=0u+0x00000002u; // 801CF834
  c->lr=0x801CF83Cu; f_8013114C(c); // 801CF838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF83C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF840
  c->lr=c->r[0]; // 801CF844
  c->r[1]=c->r[1]+0x00000010u; // 801CF848
  return; // 801CF84C
}

// fn_801CF850
void f_801CF850(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CF850
  cmps(c,0,(int32_t)c->r[3],0); // 801CF854
  if (crb(c,2)) { goto L_801CF860; } // 801CF858
  f_801C9A98(c); return; // 801CF85C
L_801CF860:;
  c->r[3]=0u+0x00000001u; // 801CF860
  return; // 801CF864
}

// fn_801CF868
void f_801CF868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF868
  c->r[0]=c->lr; // 801CF86C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF870
  c->lr=0x801CF878u; f_8011C12C(c); // 801CF874
  c->r[4]=0u+0x00000009u; // 801CF878
  c->lr=0x801CF880u; f_8011CFF4(c); // 801CF87C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CF880
  c->r[12]=R32(c->r[12]+0x00000048u); // 801CF884
  c->ctr=c->r[12]; // 801CF888
  if (true) { c->lr=0x801CF890u; dispatch(c,c->ctr); } // 801CF88C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF890
  c->lr=c->r[0]; // 801CF894
  c->r[1]=c->r[1]+0x00000010u; // 801CF898
  return; // 801CF89C
}

// fn_801CF8A0
void f_801CF8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF8A0
  c->r[0]=c->lr; // 801CF8A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF8A8
  c->lr=0x801CF8B0u; f_8011C12C(c); // 801CF8AC
  c->r[4]=0u+0x00000009u; // 801CF8B0
  c->lr=0x801CF8B8u; f_8011CFF4(c); // 801CF8B4
  c->lr=0x801CF8BCu; f_801CF850(c); // 801CF8B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF8BC
  c->lr=c->r[0]; // 801CF8C0
  c->r[1]=c->r[1]+0x00000010u; // 801CF8C4
  return; // 801CF8C8
}

// fn_801CF8CC
void f_801CF8CC(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801CF8CC
  c->r[5]=c->r[3]+0x000026A0u; // 801CF8D0
  c->r[3]=0u+0x80440000u; // 801CF8D4
  c->r[4]=c->r[3]+0xFFFFD898u; // 801CF8D8
  c->r[3]=R32(c->r[4]+0x00000000u); // 801CF8DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CF8E0
  W32(c->r[5]+0x00000150u,c->r[3]); // 801CF8E4
  W32(c->r[5]+0x00000154u,c->r[0]); // 801CF8E8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801CF8EC
  W32(c->r[5]+0x00000158u,c->r[0]); // 801CF8F0
  return; // 801CF8F4
}

// fn_801CF8F8
void f_801CF8F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF8F8
  c->r[0]=c->lr; // 801CF8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF904
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF908
  c->r[30]=c->r[3]|c->r[3]; // 801CF90C
  c->r[31]=c->r[4]|c->r[4]; // 801CF910
  cmps(c,0,(int32_t)c->r[3],0); // 801CF914
  if (crb(c,2)) { goto L_801CF938; } // 801CF918
  c->r[4]=0u+0x00000000u; // 801CF91C
  c->lr=0x801CF924u; f_80130F88(c); // 801CF920
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CF924
  cmps(c,0,(int32_t)c->r[0],0); // 801CF928
  if (!crb(c,1)) { goto L_801CF938; } // 801CF92C
  c->r[3]=c->r[30]|c->r[30]; // 801CF930
  c->lr=0x801CF938u; f_80047B20(c); // 801CF934
L_801CF938:;
  c->r[3]=c->r[30]|c->r[30]; // 801CF938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF93C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF940
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF944
  c->lr=c->r[0]; // 801CF948
  c->r[1]=c->r[1]+0x00000010u; // 801CF94C
  return; // 801CF950
}

// fn_801CF954
void f_801CF954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF954
  c->r[0]=c->lr; // 801CF958
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF95C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF960
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF964
  c->r[0]=R32(c->r[13]+0xFFFFBB00u); // 801CF968
  cmps(c,0,(int32_t)c->r[0],0); // 801CF96C
  if (!crb(c,2)) { goto L_801CF9A8; } // 801CF970
  c->lr=0x801CF978u; f_80056B5C(c); // 801CF974
  c->r[30]=c->r[3]|c->r[3]; // 801CF978
  c->lr=0x801CF980u; f_8005DEE8(c); // 801CF97C
  c->lr=0x801CF984u; f_80056B54(c); // 801CF980
  c->r[3]=0u+0x00000004u; // 801CF984
  c->lr=0x801CF98Cu; f_80047B64(c); // 801CF988
  c->r[31]=c->r[3]|c->r[3]; // 801CF98C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF990
  if (crb(c,2)) { goto L_801CF99C; } // 801CF994
  c->lr=0x801CF99Cu; f_801CF9C4(c); // 801CF998
L_801CF99C:;
  W32(c->r[13]+0xFFFFBB00u,c->r[31]); // 801CF99C
  c->r[3]=c->r[30]|c->r[30]; // 801CF9A0
  c->lr=0x801CF9A8u; f_80056B54(c); // 801CF9A4
L_801CF9A8:;
  c->r[3]=R32(c->r[13]+0xFFFFBB00u); // 801CF9A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF9AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF9B4
  c->lr=c->r[0]; // 801CF9B8
  c->r[1]=c->r[1]+0x00000010u; // 801CF9BC
  return; // 801CF9C0
}

// fn_801CF9C4
void f_801CF9C4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801CF9C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CF9C8
  return; // 801CF9CC
}

// fn_801CF9D0
void f_801CF9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF9D0
  c->r[0]=c->lr; // 801CF9D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF9D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF9DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF9E0
  c->r[30]=c->r[3]|c->r[3]; // 801CF9E4
  c->r[31]=c->r[4]|c->r[4]; // 801CF9E8
  c->lr=0x801CF9F0u; f_801CFA88(c); // 801CF9EC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF9F0
  if (!crb(c,2)) { goto L_801CFA14; } // 801CF9F4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CF9F8
  c->r[3]=c->r[0]+c->r[31]; // 801CF9FC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801CFA00
  c->r[4]=0u+0x00000000u; // 801CFA04
  c->r[5]=0u+0x000F0000u; // 801CFA08
  c->r[5]=c->r[5]+0x0000423Fu; // 801CFA0C
  c->lr=0x801CFA14u; f_800592BC(c); // 801CFA10
L_801CFA14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFA14
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFA1C
  c->lr=c->r[0]; // 801CFA20
  c->r[1]=c->r[1]+0x00000010u; // 801CFA24
  return; // 801CFA28
}

// fn_801CFA2C
void f_801CFA2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA2C
  c->r[0]=c->lr; // 801CFA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFA38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFA3C
  c->r[30]=c->r[3]|c->r[3]; // 801CFA40
  c->r[31]=c->r[4]|c->r[4]; // 801CFA44
  c->lr=0x801CFA4Cu; f_801CFAB0(c); // 801CFA48
  cmps(c,0,(int32_t)c->r[3],0); // 801CFA4C
  if (!crb(c,2)) { goto L_801CFA70; } // 801CFA50
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CFA54
  c->r[3]=c->r[0]-c->r[31]; // 801CFA58
  W32(c->r[30]+0x00000000u,c->r[3]); // 801CFA5C
  c->r[4]=0u+0x00000000u; // 801CFA60
  c->r[5]=0u+0x000F0000u; // 801CFA64
  c->r[5]=c->r[5]+0x0000423Fu; // 801CFA68
  c->lr=0x801CFA70u; f_800592BC(c); // 801CFA6C
L_801CFA70:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFA70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFA74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFA78
  c->lr=c->r[0]; // 801CFA7C
  c->r[1]=c->r[1]+0x00000010u; // 801CFA80
  return; // 801CFA84
}

// fn_801CFA88
void f_801CFA88(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CFA88
  c->r[4]=c->r[4]+c->r[0]; // 801CFA8C
  c->r[3]=0u+0x000F0000u; // 801CFA90
  c->r[0]=c->r[3]+0x0000423Fu; // 801CFA94
  c->r[0]=c->r[4]^c->r[0]; // 801CFA98
  c->r[3]=sraw(c,c->r[0],1); // 801CFA9C
  c->r[0]=c->r[0]&c->r[4]; // 801CFAA0
  c->r[0]=c->r[3]-c->r[0]; // 801CFAA4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CFAA8
  return; // 801CFAAC
}

// fn_801CFAB0
void f_801CFAB0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CFAB0
  cmps(c,0,(int32_t)c->r[0],0); // 801CFAB4
  if (crb(c,1)) { goto L_801CFAC4; } // 801CFAB8
  c->r[3]=0u+0x00000001u; // 801CFABC
  return; // 801CFAC0
L_801CFAC4:;
  c->r[0]=c->r[0]-c->r[4]; // 801CFAC4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CFAC8
  return; // 801CFACC
}

// fn_801CFAD0
void f_801CFAD0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CFAD0
  c->r[0]=c->r[4]^c->r[0]; // 801CFAD4
  c->r[3]=sraw(c,c->r[0],1); // 801CFAD8
  c->r[0]=c->r[0]&c->r[4]; // 801CFADC
  c->r[0]=c->r[3]-c->r[0]; // 801CFAE0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CFAE4
  return; // 801CFAE8
}

// fn_801CFAEC
void f_801CFAEC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CFAEC
  return; // 801CFAF0
}

// fn_801CFAF4
void f_801CFAF4(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CFAF4
  return; // 801CFAF8
}

// fn_801CFAFC
void f_801CFAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFAFC
  c->r[0]=c->lr; // 801CFB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFB08
  c->r[31]=c->r[3]|c->r[3]; // 801CFB0C
  c->lr=0x801CFB14u; f_801CF954(c); // 801CFB10
  c->r[4]=c->r[31]|c->r[31]; // 801CFB14
  c->lr=0x801CFB1Cu; f_801CF9D0(c); // 801CFB18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFB1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFB20
  c->lr=c->r[0]; // 801CFB24
  c->r[1]=c->r[1]+0x00000010u; // 801CFB28
  return; // 801CFB2C
}

// fn_801CFB30
void f_801CFB30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB30
  c->r[0]=c->lr; // 801CFB34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFB3C
  c->r[31]=c->r[3]|c->r[3]; // 801CFB40
  c->lr=0x801CFB48u; f_801CF954(c); // 801CFB44
  c->r[4]=c->r[31]|c->r[31]; // 801CFB48
  c->lr=0x801CFB50u; f_801CFA2C(c); // 801CFB4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFB50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFB54
  c->lr=c->r[0]; // 801CFB58
  c->r[1]=c->r[1]+0x00000010u; // 801CFB5C
  return; // 801CFB60
}

// fn_801CFB64
void f_801CFB64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB64
  c->r[0]=c->lr; // 801CFB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFB70
  c->r[31]=c->r[3]|c->r[3]; // 801CFB74
  c->lr=0x801CFB7Cu; f_801CF954(c); // 801CFB78
  c->r[4]=c->r[31]|c->r[31]; // 801CFB7C
  c->lr=0x801CFB84u; f_801CFA88(c); // 801CFB80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFB88
  c->lr=c->r[0]; // 801CFB8C
  c->r[1]=c->r[1]+0x00000010u; // 801CFB90
  return; // 801CFB94
}

// fn_801CFB98
void f_801CFB98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB98
  c->r[0]=c->lr; // 801CFB9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFBA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFBA4
  c->r[31]=c->r[3]|c->r[3]; // 801CFBA8
  c->lr=0x801CFBB0u; f_801CF954(c); // 801CFBAC
  c->r[4]=c->r[31]|c->r[31]; // 801CFBB0
  c->lr=0x801CFBB8u; f_801CFAB0(c); // 801CFBB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFBB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFBBC
  c->lr=c->r[0]; // 801CFBC0
  c->r[1]=c->r[1]+0x00000010u; // 801CFBC4
  return; // 801CFBC8
}

// fn_801CFBCC
void f_801CFBCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFBCC
  c->r[0]=c->lr; // 801CFBD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFBD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFBD8
  c->r[31]=c->r[3]|c->r[3]; // 801CFBDC
  c->lr=0x801CFBE4u; f_801CF954(c); // 801CFBE0
  c->r[4]=c->r[31]|c->r[31]; // 801CFBE4
  c->lr=0x801CFBECu; f_801CFAD0(c); // 801CFBE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFBEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFBF0
  c->lr=c->r[0]; // 801CFBF4
  c->r[1]=c->r[1]+0x00000010u; // 801CFBF8
  return; // 801CFBFC
}

// fn_801CFC00
void f_801CFC00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC00
  c->r[0]=c->lr; // 801CFC04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC08
  c->lr=0x801CFC10u; f_801CF954(c); // 801CFC0C
  c->lr=0x801CFC14u; f_801CFAEC(c); // 801CFC10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFC14
  c->lr=c->r[0]; // 801CFC18
  c->r[1]=c->r[1]+0x00000010u; // 801CFC1C
  return; // 801CFC20
}

// fn_801CFC24
void f_801CFC24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC24
  c->r[0]=c->lr; // 801CFC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFC30
  c->r[31]=c->r[3]|c->r[3]; // 801CFC34
  c->lr=0x801CFC3Cu; f_801CF954(c); // 801CFC38
  c->r[4]=c->r[31]|c->r[31]; // 801CFC3C
  c->lr=0x801CFC44u; f_801CFAF4(c); // 801CFC40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFC44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFC48
  c->lr=c->r[0]; // 801CFC4C
  c->r[1]=c->r[1]+0x00000010u; // 801CFC50
  return; // 801CFC54
}

// fn_801CFC58
void f_801CFC58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC58
  c->r[0]=c->lr; // 801CFC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFC64
  c->r[31]=c->r[3]|c->r[3]; // 801CFC68
  c->lr=0x801CFC70u; f_80078B74(c); // 801CFC6C
  c->r[3]=0u+0x80470000u; // 801CFC70
  c->r[0]=c->r[3]+0x00002954u; // 801CFC74
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CFC78
  c->r[3]=c->r[31]+0x000000C4u; // 801CFC7C
  c->r[4]=0u+0x801D0000u; // 801CFC80
  c->r[4]=c->r[4]+0x00001420u; // 801CFC84
  c->r[5]=0u+0x801D0000u; // 801CFC88
  c->r[5]=c->r[5]+0x000013C0u; // 801CFC8C
  c->r[6]=0u+0x000008FCu; // 801CFC90
  c->r[7]=0u+0x00000014u; // 801CFC94
  c->lr=0x801CFC9Cu; f_802F07B0(c); // 801CFC98
  c->r[3]=c->r[31]+0x00010000u; // 801CFC9C
  c->r[3]=c->r[3]+0xFFFFB624u; // 801CFCA0
  c->r[4]=0u+0x800F0000u; // 801CFCA4
  c->r[4]=c->r[4]+0x000019A4u; // 801CFCA8
  c->r[5]=0u+0x800F0000u; // 801CFCAC
  c->r[5]=c->r[5]+0x00001A14u; // 801CFCB0
  c->r[6]=0u+0x000008C4u; // 801CFCB4
  c->r[7]=0u+0x00000001u; // 801CFCB8
  c->lr=0x801CFCC0u; f_802F07B0(c); // 801CFCBC
  c->r[3]=c->r[31]+0x00010000u; // 801CFCC0
  c->r[3]=c->r[3]+0xFFFFBEE8u; // 801CFCC4
  c->lr=0x801CFCCCu; f_800F1B48(c); // 801CFCC8
  c->r[0]=0u+0x00000000u; // 801CFCCC
  W32(c->r[31]+0x000000B8u,c->r[0]); // 801CFCD0
  c->r[3]=c->r[31]|c->r[31]; // 801CFCD4
  c->r[4]=0u+0x80470000u; // 801CFCD8
  c->r[4]=c->r[4]+0x000028A0u; // 801CFCDC
  c->lr=0x801CFCE4u; f_80078E9C(c); // 801CFCE0
  c->lr=0x801CFCE8u; f_8007B524(c); // 801CFCE4
  c->lr=0x801CFCECu; f_8006E224(c); // 801CFCE8
  c->r[4]=c->r[3]|c->r[3]; // 801CFCEC
  c->r[3]=c->r[31]|c->r[31]; // 801CFCF0
  c->r[5]=0u+0x00000000u; // 801CFCF4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CFCF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CFCFC
  c->ctr=c->r[12]; // 801CFD00
  if (true) { c->lr=0x801CFD08u; dispatch(c,c->ctr); } // 801CFD04
  c->r[3]=c->r[31]|c->r[31]; // 801CFD08
  c->r[4]=0u+0x00000000u; // 801CFD0C
  c->lr=0x801CFD14u; f_801D13B0(c); // 801CFD10
  c->r[3]=c->r[31]|c->r[31]; // 801CFD14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFD18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFD1C
  c->lr=c->r[0]; // 801CFD20
  c->r[1]=c->r[1]+0x00000010u; // 801CFD24
  return; // 801CFD28
}

// fn_801CFD2C
void f_801CFD2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFD2C
  c->r[0]=c->lr; // 801CFD30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFD34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFD38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFD3C
  c->r[30]=c->r[3]|c->r[3]; // 801CFD40
  c->r[31]=c->r[4]|c->r[4]; // 801CFD44
  cmps(c,0,(int32_t)c->r[3],0); // 801CFD48
  if (crb(c,2)) { goto L_801CFDE0; } // 801CFD4C
  c->r[4]=0u+0x80470000u; // 801CFD50
  c->r[0]=c->r[4]+0x00002954u; // 801CFD54
  W32(c->r[3]+0x00000058u,c->r[0]); // 801CFD58
  c->lr=0x801CFD60u; f_8007B524(c); // 801CFD5C
  c->lr=0x801CFD64u; f_8006E224(c); // 801CFD60
  c->r[4]=c->r[3]|c->r[3]; // 801CFD64
  c->r[3]=c->r[30]|c->r[30]; // 801CFD68
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CFD6C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CFD70
  c->ctr=c->r[12]; // 801CFD74
  if (true) { c->lr=0x801CFD7Cu; dispatch(c,c->ctr); } // 801CFD78
  c->r[3]=c->r[30]+0x00010000u; // 801CFD7C
  c->r[3]=c->r[3]+0xFFFFBEE8u; // 801CFD80
  c->r[4]=0u+0xFFFFFFFFu; // 801CFD84
  c->lr=0x801CFD8Cu; f_800F1B94(c); // 801CFD88
  c->r[3]=c->r[30]+0x00010000u; // 801CFD8C
  c->r[3]=c->r[3]+0xFFFFB624u; // 801CFD90
  c->r[4]=0u+0x800F0000u; // 801CFD94
  c->r[4]=c->r[4]+0x00001A14u; // 801CFD98
  c->r[5]=0u+0x000008C4u; // 801CFD9C
  c->r[6]=0u+0x00000001u; // 801CFDA0
  c->lr=0x801CFDA8u; f_802F08A8(c); // 801CFDA4
  c->r[3]=c->r[30]+0x000000C4u; // 801CFDA8
  c->r[4]=0u+0x801D0000u; // 801CFDAC
  c->r[4]=c->r[4]+0x000013C0u; // 801CFDB0
  c->r[5]=0u+0x000008FCu; // 801CFDB4
  c->r[6]=0u+0x00000014u; // 801CFDB8
  c->lr=0x801CFDC0u; f_802F08A8(c); // 801CFDBC
  c->r[3]=c->r[30]|c->r[30]; // 801CFDC0
  c->r[4]=0u+0x00000000u; // 801CFDC4
  c->lr=0x801CFDCCu; f_80078BF0(c); // 801CFDC8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CFDCC
  cmps(c,0,(int32_t)c->r[0],0); // 801CFDD0
  if (!crb(c,1)) { goto L_801CFDE0; } // 801CFDD4
  c->r[3]=c->r[30]|c->r[30]; // 801CFDD8
  c->lr=0x801CFDE0u; f_80047B20(c); // 801CFDDC
L_801CFDE0:;
  c->r[3]=c->r[30]|c->r[30]; // 801CFDE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFDE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFDE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFDEC
  c->lr=c->r[0]; // 801CFDF0
  c->r[1]=c->r[1]+0x00000010u; // 801CFDF4
  return; // 801CFDF8
}

// fn_801CFDFC
void f_801CFDFC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801CFDFC
  f_801D13B0(c); return; // 801CFE00
}

// fn_801CFE04
void f_801CFE04(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 801CFE04
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801CFE08
  c->r[0]=0u-c->r[3]; // 801CFE0C
  c->r[0]=c->r[0]|c->r[3]; // 801CFE10
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CFE14
  return; // 801CFE18
}

// fn_801CFE1C
void f_801CFE1C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000006u; // 801CFE1C
  f_801D13B0(c); return; // 801CFE20
}

// fn_801CFE24
void f_801CFE24(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801CFE24
  return; // 801CFE28
}

// fn_801CFE2C
void f_801CFE2C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000006u; // 801CFE2C
  f_801D13B0(c); return; // 801CFE30
}

// fn_801CFE34
void f_801CFE34(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 801CFE34
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 801CFE38
  c->r[0]=0u-c->r[3]; // 801CFE3C
  c->r[0]=c->r[0]|c->r[3]; // 801CFE40
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CFE44
  return; // 801CFE48
}

// fn_801CFE4C
void f_801CFE4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFE4C
  c->r[0]=c->lr; // 801CFE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFE54
  c->r[0]=R32(c->r[3]+0x000000B0u); // 801CFE58
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801CFE5C
  c->r[4]=0u+0x80430000u; // 801CFE60
  c->r[0]=c->r[4]+0x00000D78u; // 801CFE64
  c->r[12]=c->r[0]+c->r[5]; // 801CFE68
  c->lr=0x801CFE70u; f_802F09D0(c); // 801CFE6C
  c->r[0]=c->r[0]|0x00000000u; // 801CFE70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFE74
  c->lr=c->r[0]; // 801CFE78
  c->r[1]=c->r[1]+0x00000010u; // 801CFE7C
  return; // 801CFE80
}

// fn_801CFE84
void f_801CFE84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFE84
  c->r[0]=c->lr; // 801CFE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFE8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFE90
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFE94
  c->r[30]=c->r[3]|c->r[3]; // 801CFE98
  c->r[31]=c->r[4]|c->r[4]; // 801CFE9C
  c->lr=0x801CFEA4u; f_801D13B8(c); // 801CFEA0
  cmps(c,0,(int32_t)c->r[3],3); // 801CFEA4
  if (!crb(c,2)) { goto L_801CFF4C; } // 801CFEA8
  c->r[0]=c->r[31]+0xFFFFFFFAu; // 801CFEAC
  cmpu(c,0,c->r[0],0x00000029u); // 801CFEB0
  if (crb(c,1)) { goto L_801CFF4C; } // 801CFEB4
  c->r[3]=0u+0x80470000u; // 801CFEB8
  c->r[3]=c->r[3]+0x000028ACu; // 801CFEBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CFEC0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CFEC4
  c->ctr=c->r[3]; // 801CFEC8
  if (true) { switch (c->ctr) { case 0x801CFED0u: goto L_801CFED0; case 0x801CFF4Cu: goto L_801CFF4C; default: break; } dispatch(c,c->ctr); return; } // 801CFECC
L_801CFED0:;
  c->r[3]=c->r[30]|c->r[30]; // 801CFED0
  c->r[4]=c->r[31]|c->r[31]; // 801CFED4
  c->lr=0x801CFEDCu; f_801D0A6C(c); // 801CFED8
  c->r[3]=c->r[30]+0x00010000u; // 801CFEDC
  c->r[0]=R32(c->r[3]+0xFFFFB474u); // 801CFEE0
  cmps(c,0,(int32_t)c->r[0],0); // 801CFEE4
  if (!crb(c,2)) { goto L_801CFF08; } // 801CFEE8
  c->r[0]=R32(c->r[3]+0xFFFFB4CCu); // 801CFEEC
  cmps(c,0,(int32_t)c->r[0],0); // 801CFEF0
  if (!crb(c,2)) { goto L_801CFF08; } // 801CFEF4
  c->lr=0x801CFEFCu; f_8006E268(c); // 801CFEF8
  c->r[4]=0u+0x00000037u; // 801CFEFC
  c->lr=0x801CFF04u; f_80073960(c); // 801CFF00
  goto L_801CFF4C; // 801CFF04
L_801CFF08:;
  c->r[3]=c->r[30]|c->r[30]; // 801CFF08
  c->lr=0x801CFF10u; f_801D0D5C(c); // 801CFF0C
  c->r[3]=c->r[30]+0x00010000u; // 801CFF10
  c->r[0]=R32(c->r[3]+0xFFFFB4CCu); // 801CFF14
  cmps(c,0,(int32_t)c->r[0],0); // 801CFF18
  if (!crb(c,2)) { goto L_801CFF30; } // 801CFF1C
  c->lr=0x801CFF24u; f_8006E268(c); // 801CFF20
  c->r[4]=0u+0x00000037u; // 801CFF24
  c->lr=0x801CFF2Cu; f_80073960(c); // 801CFF28
  goto L_801CFF4C; // 801CFF2C
L_801CFF30:;
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF30
  {uint32_t ea=c->r[3]+0xFFFFB528u; WF32(ea,c->f[0]);} // 801CFF34
  c->r[0]=0u+0x00000000u; // 801CFF38
  W32(c->r[3]+0xFFFFB524u,c->r[0]); // 801CFF3C
  c->r[3]=c->r[30]|c->r[30]; // 801CFF40
  c->r[4]=0u+0x00000004u; // 801CFF44
  c->lr=0x801CFF4Cu; f_801D13B0(c); // 801CFF48
L_801CFF4C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFF4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFF50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFF54
  c->lr=c->r[0]; // 801CFF58
  c->r[1]=c->r[1]+0x00000010u; // 801CFF5C
  return; // 801CFF60
}

// fn_801CFF64
void f_801CFF64(Ctx* __restrict c) {
  return; // 801CFF64
}

// fn_801CFF68
void f_801CFF68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFF68
  c->r[0]=c->lr; // 801CFF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFF70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFF74
  c->r[31]=c->r[3]|c->r[3]; // 801CFF78
  c->lr=0x801CFF80u; f_8007B524(c); // 801CFF7C
  c->lr=0x801CFF84u; f_8006E224(c); // 801CFF80
  c->lr=0x801CFF88u; f_8006E3DC(c); // 801CFF84
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CFF88
  c->r[12]=R32(c->r[12]+0x00000020u); // 801CFF8C
  c->ctr=c->r[12]; // 801CFF90
  if (true) { c->lr=0x801CFF98u; dispatch(c,c->ctr); } // 801CFF94
  cmps(c,0,(int32_t)c->r[3],0); // 801CFF98
  if (crb(c,2)) { goto L_801D00C0; } // 801CFF9C
  c->r[5]=0u+0x00000000u; // 801CFFA0
  W32(c->r[31]+0x000000BCu,c->r[5]); // 801CFFA4
  W32(c->r[31]+0x000000C0u,c->r[5]); // 801CFFA8
  c->r[7]=0u+0x00000000u; // 801CFFAC
  c->r[6]=c->r[31]+0x000000C4u; // 801CFFB0
  c->r[4]=0u+0x00000004u; // 801CFFB4
  c->r[3]=0u+0xFFFFFFFFu; // 801CFFB8
  c->ctr=c->r[4]; // 801CFFBC
L_801CFFC0:;
  W32(c->r[6]+0x00000000u,c->r[5]); // 801CFFC0
  W32(c->r[6]+0x00000004u,c->r[7]); // 801CFFC4
  W32(c->r[6]+0x00000008u,c->r[4]); // 801CFFC8
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 801CFFCC
  W32(c->r[6]+0x00000010u,c->r[3]); // 801CFFD0
  W32(c->r[6]+0x00000028u,c->r[5]); // 801CFFD4
  W32(c->r[6]+0x0000002Cu,c->r[5]); // 801CFFD8
  W32(c->r[6]+0x00000030u,c->r[3]); // 801CFFDC
  W32(c->r[6]+0x000008F8u,c->r[5]); // 801CFFE0
  W32(c->r[6]+0x00000024u,c->r[5]); // 801CFFE4
  W32(c->r[6]+0x000008FCu,c->r[5]); // 801CFFE8
  c->r[0]=c->r[7]+0x00000001u; // 801CFFEC
  W32(c->r[6]+0x00000900u,c->r[0]); // 801CFFF0
  W32(c->r[6]+0x00000904u,c->r[4]); // 801CFFF4
  W32(c->r[6]+0x00000908u,c->r[3]); // 801CFFF8
  W32(c->r[6]+0x0000090Cu,c->r[3]); // 801CFFFC
  W32(c->r[6]+0x00000924u,c->r[5]); // 801D0000
  W32(c->r[6]+0x00000928u,c->r[5]); // 801D0004
  W32(c->r[6]+0x0000092Cu,c->r[3]); // 801D0008
  W32(c->r[6]+0x000011F4u,c->r[5]); // 801D000C
  W32(c->r[6]+0x00000920u,c->r[5]); // 801D0010
  W32(c->r[6]+0x000011F8u,c->r[5]); // 801D0014
  c->r[0]=c->r[7]+0x00000002u; // 801D0018
  W32(c->r[6]+0x000011FCu,c->r[0]); // 801D001C
  W32(c->r[6]+0x00001200u,c->r[4]); // 801D0020
  W32(c->r[6]+0x00001204u,c->r[3]); // 801D0024
  W32(c->r[6]+0x00001208u,c->r[3]); // 801D0028
  W32(c->r[6]+0x00001220u,c->r[5]); // 801D002C
  W32(c->r[6]+0x00001224u,c->r[5]); // 801D0030
  W32(c->r[6]+0x00001228u,c->r[3]); // 801D0034
  W32(c->r[6]+0x00001AF0u,c->r[5]); // 801D0038
  W32(c->r[6]+0x0000121Cu,c->r[5]); // 801D003C
  W32(c->r[6]+0x00001AF4u,c->r[5]); // 801D0040
  c->r[0]=c->r[7]+0x00000003u; // 801D0044
  W32(c->r[6]+0x00001AF8u,c->r[0]); // 801D0048
  W32(c->r[6]+0x00001AFCu,c->r[4]); // 801D004C
  W32(c->r[6]+0x00001B00u,c->r[3]); // 801D0050
  W32(c->r[6]+0x00001B04u,c->r[3]); // 801D0054
  W32(c->r[6]+0x00001B1Cu,c->r[5]); // 801D0058
  W32(c->r[6]+0x00001B20u,c->r[5]); // 801D005C
  W32(c->r[6]+0x00001B24u,c->r[3]); // 801D0060
  W32(c->r[6]+0x000023ECu,c->r[5]); // 801D0064
  W32(c->r[6]+0x00001B18u,c->r[5]); // 801D0068
  W32(c->r[6]+0x000023F0u,c->r[5]); // 801D006C
  c->r[0]=c->r[7]+0x00000004u; // 801D0070
  W32(c->r[6]+0x000023F4u,c->r[0]); // 801D0074
  W32(c->r[6]+0x000023F8u,c->r[4]); // 801D0078
  W32(c->r[6]+0x000023FCu,c->r[3]); // 801D007C
  W32(c->r[6]+0x00002400u,c->r[3]); // 801D0080
  W32(c->r[6]+0x00002418u,c->r[5]); // 801D0084
  W32(c->r[6]+0x0000241Cu,c->r[5]); // 801D0088
  W32(c->r[6]+0x00002420u,c->r[3]); // 801D008C
  W32(c->r[6]+0x00002CE8u,c->r[5]); // 801D0090
  W32(c->r[6]+0x00002414u,c->r[5]); // 801D0094
  c->r[6]=c->r[6]+0x00002CECu; // 801D0098
  c->r[7]=c->r[7]+0x00000005u; // 801D009C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CFFC0; } // 801D00A0
  c->r[0]=0u+0x00000000u; // 801D00A4
  c->r[3]=c->r[31]+0x00010000u; // 801D00A8
  W32(c->r[3]+0xFFFFB474u,c->r[0]); // 801D00AC
  W32(c->r[3]+0xFFFFB52Cu,c->r[0]); // 801D00B0
  c->r[3]=c->r[31]|c->r[31]; // 801D00B4
  c->r[4]=0u+0x00000002u; // 801D00B8
  c->lr=0x801D00C0u; f_801D13B0(c); // 801D00BC
L_801D00C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D00C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D00C4
  c->lr=c->r[0]; // 801D00C8
  c->r[1]=c->r[1]+0x00000010u; // 801D00CC
  return; // 801D00D0
}

// fn_801D00D4
void f_801D00D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D00D4
  c->r[0]=c->lr; // 801D00D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D00DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D00E0
  c->r[31]=c->r[3]|c->r[3]; // 801D00E4
  c->lr=0x801D00ECu; f_801D0378(c); // 801D00E8
  c->r[3]=c->r[31]|c->r[31]; // 801D00EC
  c->lr=0x801D00F4u; f_801D0964(c); // 801D00F0
  c->r[0]=R32(c->r[31]+0x000000B8u); // 801D00F4
  c->r[0]=c->r[0]|0x00000001u; // 801D00F8
  W32(c->r[31]+0x000000B8u,c->r[0]); // 801D00FC
  c->lr=0x801D0104u; f_8007B524(c); // 801D0100
  c->lr=0x801D0108u; f_800A15A0(c); // 801D0104
  c->r[3]=c->r[31]|c->r[31]; // 801D0108
  c->r[4]=0u+0x00000003u; // 801D010C
  c->lr=0x801D0114u; f_801D13B0(c); // 801D0110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0114
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0118
  c->lr=c->r[0]; // 801D011C
  c->r[1]=c->r[1]+0x00000010u; // 801D0120
  return; // 801D0124
}

// fn_801D0128
void f_801D0128(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0128
  c->r[0]=c->lr; // 801D012C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0134
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0138
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D013C
  c->r[29]=0u+0x00000000u; // 801D0140
  c->r[30]=c->r[3]+0x000000C4u; // 801D0144
  c->r[31]=0u+0x00000000u; // 801D0148
L_801D014C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D014C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D0150
  cmps(c,0,(int32_t)c->r[0],0); // 801D0154
  if (crb(c,2)) { goto L_801D01E4; } // 801D0158
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D015C
  cmps(c,0,(int32_t)c->r[0],2); // 801D0160
  if (crb(c,2)) { goto L_801D01E4; } // 801D0164
  if (!crb(c,0)) { goto L_801D0178; } // 801D0168
  cmps(c,0,(int32_t)c->r[0],0); // 801D016C
  if (!crb(c,0)) { goto L_801D0180; } // 801D0170
  goto L_801D01E4; // 801D0174
L_801D0178:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D0178
  if (!crb(c,0)) { goto L_801D01E4; } // 801D017C
L_801D0180:;
  c->r[0]=R32(c->r[30]+0x00000024u); // 801D0180
  cmps(c,0,(int32_t)c->r[0],0); // 801D0184
  if (crb(c,2)) { goto L_801D01E4; } // 801D0188
  c->r[3]=c->r[30]+0x00000058u; // 801D018C
  c->r[4]=0u+0x00000000u; // 801D0190
  c->lr=0x801D0198u; f_800532BC(c); // 801D0194
  cmps(c,0,(int32_t)c->r[3],0); // 801D0198
  if (crb(c,2)) { goto L_801D01E4; } // 801D019C
  W32(c->r[30]+0x00000024u,c->r[31]); // 801D01A0
  c->r[0]=R32(c->r[30]+0x00000020u); // 801D01A4
  cmps(c,0,(int32_t)c->r[0],1); // 801D01A8
  if (crb(c,2)) { goto L_801D01D8; } // 801D01AC
  if (!crb(c,0)) { goto L_801D01E4; } // 801D01B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D01B4
  if (!crb(c,0)) { goto L_801D01C0; } // 801D01B8
  goto L_801D01E4; // 801D01BC
L_801D01C0:;
  c->r[3]=c->r[30]+0x00000058u; // 801D01C0
  c->r[4]=0u+0x00000001u; // 801D01C4
  c->r[5]=0u+0x00000000u; // 801D01C8
  c->r[6]=0u+0x00000000u; // 801D01CC
  c->lr=0x801D01D4u; f_8005302C(c); // 801D01D0
  goto L_801D01E4; // 801D01D4
L_801D01D8:;
  c->r[3]=c->r[30]+0x00000058u; // 801D01D8
  c->r[4]=0u+0x00000000u; // 801D01DC
  c->lr=0x801D01E4u; f_800534E4(c); // 801D01E0
L_801D01E4:;
  c->r[30]=c->r[30]+0x000008FCu; // 801D01E4
  c->r[29]=c->r[29]+0x00000001u; // 801D01E8
  cmpu(c,0,c->r[29],0x00000014u); // 801D01EC
  if (crb(c,0)) { IRQCHK(c); goto L_801D014C; } // 801D01F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D01F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D01F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D01FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0200
  c->lr=c->r[0]; // 801D0204
  c->r[1]=c->r[1]+0x00000020u; // 801D0208
  return; // 801D020C
}

// fn_801D0210
void f_801D0210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0210
  c->r[0]=c->lr; // 801D0214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D021C
  c->r[31]=c->r[3]|c->r[3]; // 801D0220
  c->r[3]=c->r[3]+0x00010000u; // 801D0224
  c->r[0]=R32(c->r[3]+0xFFFFB524u); // 801D0228
  cmps(c,0,(int32_t)c->r[0],1); // 801D022C
  if (crb(c,2)) { goto L_801D028C; } // 801D0230
  if (!crb(c,0)) { goto L_801D02CC; } // 801D0234
  cmps(c,0,(int32_t)c->r[0],0); // 801D0238
  if (!crb(c,0)) { goto L_801D0244; } // 801D023C
  goto L_801D02CC; // 801D0240
L_801D0244:;
  c->r[3]=0u+0x00000001u; // 801D0244
  c->lr=0x801D024Cu; f_8005D714(c); // 801D0248
  c->r[3]=c->r[31]+0x00010000u; // 801D024C
  {uint32_t ea=c->r[3]+0xFFFFB528u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0250
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D0254
  {uint32_t ea=c->r[3]+0xFFFFB528u; WF32(ea,c->f[1]);} // 801D0258
  {uint32_t ea=c->r[2]+0xFFFF93A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D025C
  fcmp(c,0,c->f[1],c->f[0]); // 801D0260
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D0264
  if (!crb(c,2)) { goto L_801D02CC; } // 801D0268
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D026C
  {uint32_t ea=c->r[3]+0xFFFFB528u; WF32(ea,c->f[0]);} // 801D0270
  c->r[3]=c->r[31]|c->r[31]; // 801D0274
  c->lr=0x801D027Cu; f_801D0E0C(c); // 801D0278
  c->r[0]=0u+0x00000001u; // 801D027C
  c->r[3]=c->r[31]+0x00010000u; // 801D0280
  W32(c->r[3]+0xFFFFB524u,c->r[0]); // 801D0284
  goto L_801D02CC; // 801D0288
L_801D028C:;
  c->r[3]=0u+0x00000001u; // 801D028C
  c->lr=0x801D0294u; f_8005D714(c); // 801D0290
  c->r[3]=c->r[31]+0x00010000u; // 801D0294
  {uint32_t ea=c->r[3]+0xFFFFB528u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0298
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D029C
  {uint32_t ea=c->r[3]+0xFFFFB528u; WF32(ea,c->f[1]);} // 801D02A0
  {uint32_t ea=c->r[2]+0xFFFF93A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D02A4
  fcmp(c,0,c->f[1],c->f[0]); // 801D02A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D02AC
  if (!crb(c,2)) { goto L_801D02CC; } // 801D02B0
  c->r[3]=c->r[31]|c->r[31]; // 801D02B4
  c->r[4]=0u+0x00000003u; // 801D02B8
  c->lr=0x801D02C0u; f_801D13B0(c); // 801D02BC
  c->lr=0x801D02C4u; f_8006E268(c); // 801D02C0
  c->r[4]=0u+0x00000037u; // 801D02C4
  c->lr=0x801D02CCu; f_80073960(c); // 801D02C8
L_801D02CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D02CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D02D0
  c->lr=c->r[0]; // 801D02D4
  c->r[1]=c->r[1]+0x00000010u; // 801D02D8
  return; // 801D02DC
}

// fn_801D02E0
void f_801D02E0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000006u; // 801D02E0
  f_801D13B0(c); return; // 801D02E4
}

// fn_801D02E8
void f_801D02E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D02E8
  c->r[0]=c->lr; // 801D02EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D02F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D02F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D02F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D02FC
  c->r[29]=c->r[3]|c->r[3]; // 801D0300
  c->r[30]=0u+0x00000000u; // 801D0304
  c->r[31]=c->r[3]+0x000000C4u; // 801D0308
L_801D030C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D030C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D0310
  cmps(c,0,(int32_t)c->r[0],0); // 801D0314
  if (crb(c,2)) { goto L_801D032C; } // 801D0318
  c->r[3]=c->r[29]|c->r[29]; // 801D031C
  c->r[4]=R32(c->r[31]+0x00000004u); // 801D0320
  c->r[5]=0u+0x00000000u; // 801D0324
  c->lr=0x801D032Cu; f_801D0780(c); // 801D0328
L_801D032C:;
  c->r[31]=c->r[31]+0x000008FCu; // 801D032C
  c->r[30]=c->r[30]+0x00000001u; // 801D0330
  cmpu(c,0,c->r[30],0x00000014u); // 801D0334
  if (crb(c,0)) { IRQCHK(c); goto L_801D030C; } // 801D0338
  c->r[0]=R32(c->r[29]+0x000000B8u); // 801D033C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801D0340
  W32(c->r[29]+0x000000B8u,c->r[0]); // 801D0344
  c->r[0]=c->r[0]|0x00000002u; // 801D0348
  W32(c->r[29]+0x000000B8u,c->r[0]); // 801D034C
  c->r[3]=c->r[29]|c->r[29]; // 801D0350
  c->r[4]=0u+0x00000000u; // 801D0354
  c->lr=0x801D035Cu; f_801D13B0(c); // 801D0358
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D035C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0360
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0364
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0368
  c->lr=c->r[0]; // 801D036C
  c->r[1]=c->r[1]+0x00000020u; // 801D0370
  return; // 801D0374
}

// fn_801D0378
void f_801D0378(Ctx* __restrict c) {
  return; // 801D0378
}

// fn_801D037C
void f_801D037C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D037C
  c->r[0]=c->lr; // 801D0380
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0384
  c->r[11]=c->r[1]+0x00000030u; // 801D0388
  c->lr=0x801D0390u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D038C
  c->r[28]=c->r[3]|c->r[3]; // 801D0390
  c->r[30]=c->r[4]|c->r[4]; // 801D0394
  c->r[26]=c->r[5]|c->r[5]; // 801D0398
  c->r[29]=c->r[6]|c->r[6]; // 801D039C
  c->lr=0x801D03A4u; f_8007B524(c); // 801D03A0
  c->lr=0x801D03A8u; f_8006E224(c); // 801D03A4
  c->lr=0x801D03ACu; f_800897A8(c); // 801D03A8
  c->r[27]=c->r[3]|c->r[3]; // 801D03AC
  c->r[31]=0u+0x00000000u; // 801D03B0
  c->r[4]=0u+0x00000000u; // 801D03B4
  c->r[3]=c->r[28]|c->r[28]; // 801D03B8
  c->r[0]=0u+0x00000014u; // 801D03BC
  c->ctr=c->r[0]; // 801D03C0
L_801D03C4:;
  c->r[0]=R32(c->r[3]+0x000000C4u); // 801D03C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D03C8
  cmps(c,0,(int32_t)c->r[0],0); // 801D03CC
  if (!crb(c,2)) { goto L_801D03E4; } // 801D03D0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)2300); // 801D03D4
  c->r[3]=c->r[28]+c->r[0]; // 801D03D8
  c->r[31]=c->r[3]+0x000000C4u; // 801D03DC
  goto L_801D03F0; // 801D03E0
L_801D03E4:;
  c->r[3]=c->r[3]+0x000008FCu; // 801D03E4
  c->r[4]=c->r[4]+0x00000001u; // 801D03E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D03C4; } // 801D03EC
L_801D03F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D03F0
  if (!crb(c,2)) { goto L_801D0400; } // 801D03F4
  c->r[3]=0u+0xFFFFFFFFu; // 801D03F8
  goto L_801D0768; // 801D03FC
L_801D0400:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D0400
  c->r[0]=c->r[0]|0x00000001u; // 801D0404
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D0408
  W32(c->r[31]+0x00000008u,c->r[30]); // 801D040C
  c->r[3]=c->r[31]+0x0000000Cu; // 801D0410
  c->r[4]=c->r[26]|c->r[26]; // 801D0414
  c->lr=0x801D041Cu; f_800670A8(c); // 801D0418
  c->r[3]=c->r[27]|c->r[27]; // 801D041C
  c->r[4]=c->r[31]+0x00000014u; // 801D0420
  c->r[5]=c->r[31]+0x0000000Cu; // 801D0424
  c->lr=0x801D042Cu; f_8006838C(c); // 801D0428
  c->r[3]=c->r[27]|c->r[27]; // 801D042C
  c->r[4]=c->r[31]+0x0000000Cu; // 801D0430
  c->r[5]=0u+0x00000000u; // 801D0434
  c->lr=0x801D043Cu; f_80067A38(c); // 801D0438
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D043C
  cmps(c,0,(int32_t)c->r[0],2); // 801D0440
  if (crb(c,2)) { goto L_801D06E4; } // 801D0444
  if (!crb(c,0)) { goto L_801D0458; } // 801D0448
  cmps(c,0,(int32_t)c->r[0],0); // 801D044C
  if (!crb(c,0)) { goto L_801D0460; } // 801D0450
  goto L_801D0758; // 801D0454
L_801D0458:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D0458
  if (!crb(c,0)) { goto L_801D0758; } // 801D045C
L_801D0460:;
  c->r[30]=c->r[31]+0x00000034u; // 801D0460
  c->r[3]=c->r[28]|c->r[28]; // 801D0464
  c->lr=0x801D046Cu; f_80065DB4(c); // 801D0468
  c->r[4]=c->r[3]|c->r[3]; // 801D046C
  c->r[3]=c->r[30]|c->r[30]; // 801D0470
  c->lr=0x801D0478u; f_80077A90(c); // 801D0474
  c->r[3]=c->r[30]|c->r[30]; // 801D0478
  c->r[4]=c->r[28]+0x00010000u; // 801D047C
  c->r[4]=c->r[4]+0xFFFFB624u; // 801D0480
  c->lr=0x801D0488u; f_80078028(c); // 801D0484
  c->r[3]=c->r[30]|c->r[30]; // 801D0488
  c->r[4]=0u+0x00000000u; // 801D048C
  c->r[5]=0u+0x00000001u; // 801D0490
  c->r[6]=0u+0x00000000u; // 801D0494
  c->r[7]=0u+0x00000001u; // 801D0498
  c->r[8]=0u+0x00000000u; // 801D049C
  c->lr=0x801D04A4u; f_80077B88(c); // 801D04A0
  c->r[3]=c->r[30]+0x00000024u; // 801D04A4
  c->r[4]=0u+0x00000000u; // 801D04A8
  c->r[5]=0u+0x00000000u; // 801D04AC
  c->r[6]=0u+0x00000000u; // 801D04B0
  c->lr=0x801D04B8u; f_8005302C(c); // 801D04B4
  c->r[3]=c->r[30]|c->r[30]; // 801D04B8
  c->lr=0x801D04C0u; f_800F1A78(c); // 801D04BC
  c->r[3]=c->r[30]+0x000002B4u; // 801D04C0
  c->r[4]=0u+0x00000001u; // 801D04C4
  c->lr=0x801D04CCu; f_8004C6D4(c); // 801D04C8
  c->r[3]=c->r[30]+0x00000024u; // 801D04CC
  c->r[4]=c->r[31]+0x00000014u; // 801D04D0
  c->lr=0x801D04D8u; f_8005658C(c); // 801D04D4
  c->r[4]=c->r[30]|c->r[30]; // 801D04D8
  cmps(c,0,(int32_t)c->r[30],0); // 801D04DC
  if (crb(c,2)) { goto L_801D04E8; } // 801D04E0
  c->r[4]=c->r[30]+0x000002B4u; // 801D04E4
L_801D04E8:;
  c->r[3]=c->r[28]+0x00010000u; // 801D04E8
  c->r[3]=c->r[3]+0xFFFFBEE8u; // 801D04EC
  c->lr=0x801D04F4u; f_800F1C90(c); // 801D04F0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D04F4
  c->r[0]=c->r[0]|0x00000004u; // 801D04F8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D04FC
  c->r[26]=0u+0xFFFFFFFFu; // 801D0500
  c->r[3]=c->r[27]|c->r[27]; // 801D0504
  c->r[4]=c->r[31]+0x0000000Cu; // 801D0508
  c->r[5]=0u+0x00000001u; // 801D050C
  c->lr=0x801D0514u; f_80067AC4(c); // 801D0510
  cmps(c,0,(int32_t)c->r[3],1); // 801D0514
  if (!crb(c,2)) { goto L_801D0538; } // 801D0518
  c->r[3]=c->r[27]|c->r[27]; // 801D051C
  c->r[4]=c->r[31]+0x0000000Cu; // 801D0520
  c->r[5]=0u+0x00000005u; // 801D0524
  c->lr=0x801D052Cu; f_80067AC4(c); // 801D0528
  cmps(c,0,(int32_t)c->r[3],1); // 801D052C
  if (!crb(c,2)) { goto L_801D0538; } // 801D0530
  c->r[26]=0u+0x00000000u; // 801D0534
L_801D0538:;
  c->r[3]=c->r[27]|c->r[27]; // 801D0538
  c->r[4]=c->r[31]+0x0000000Cu; // 801D053C
  c->r[5]=0u+0x00000003u; // 801D0540
  c->lr=0x801D0548u; f_80067AC4(c); // 801D0544
  cmps(c,0,(int32_t)c->r[3],1); // 801D0548
  if (!crb(c,2)) { goto L_801D056C; } // 801D054C
  c->r[3]=c->r[27]|c->r[27]; // 801D0550
  c->r[4]=c->r[31]+0x0000000Cu; // 801D0554
  c->r[5]=0u+0x00000007u; // 801D0558
  c->lr=0x801D0560u; f_80067AC4(c); // 801D055C
  cmps(c,0,(int32_t)c->r[3],1); // 801D0560
  if (!crb(c,2)) { goto L_801D056C; } // 801D0564
  c->r[26]=0u+0x00000001u; // 801D0568
L_801D056C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D056C
  if (crb(c,2)) { goto L_801D0588; } // 801D0570
  if (!crb(c,0)) { goto L_801D057C; } // 801D0574
  goto L_801D05C0; // 801D0578
L_801D057C:;
  cmps(c,0,(int32_t)c->r[26],2); // 801D057C
  if (!crb(c,0)) { goto L_801D05C0; } // 801D0580
  goto L_801D05A4; // 801D0584
L_801D0588:;
  {uint32_t ea=c->r[2]+0xFFFF93A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0588
  c->r[3]=0u+0x804C0000u; // 801D058C
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 801D0590
  c->r[3]=c->r[3]+0x000025D0u; // 801D0594
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D0598
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801D059C
  goto L_801D05C0; // 801D05A0
L_801D05A4:;
  {uint32_t ea=c->r[2]+0xFFFF93A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D05A4
  c->r[3]=0u+0x804C0000u; // 801D05A8
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[1]);} // 801D05AC
  {uint32_t ea=c->r[2]+0xFFFF93ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D05B0
  c->r[3]=c->r[3]+0x000025D0u; // 801D05B4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D05B8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801D05BC
L_801D05C0:;
  c->r[3]=c->r[30]+0x00000024u; // 801D05C0
  c->r[4]=0u+0x804C0000u; // 801D05C4
  c->r[4]=c->r[4]+0x000025D0u; // 801D05C8
  c->lr=0x801D05D0u; f_80056594(c); // 801D05CC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D05D0
  cmps(c,0,(int32_t)c->r[0],2); // 801D05D4
  if (crb(c,2)) { goto L_801D061C; } // 801D05D8
  if (!crb(c,0)) { goto L_801D05F0; } // 801D05DC
  cmps(c,0,(int32_t)c->r[0],0); // 801D05E0
  if (crb(c,2)) { goto L_801D05F8; } // 801D05E4
  if (!crb(c,0)) { goto L_801D0604; } // 801D05E8
  goto L_801D061C; // 801D05EC
L_801D05F0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D05F0
  if (!crb(c,0)) { goto L_801D061C; } // 801D05F4
L_801D05F8:;
  c->r[0]=0u+0x00000000u; // 801D05F8
  W32(c->r[31]+0x00000020u,c->r[0]); // 801D05FC
  goto L_801D061C; // 801D0600
L_801D0604:;
  c->lr=0x801D0608u; f_8005C538(c); // 801D0604
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801D0608
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801D060C
  c->r[0]=c->r[0]^c->r[4]; // 801D0610
  c->r[0]=c->r[0]-c->r[4]; // 801D0614
  W32(c->r[31]+0x00000020u,c->r[0]); // 801D0618
L_801D061C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D061C
  cmps(c,0,(int32_t)c->r[0],2); // 801D0620
  if (crb(c,2)) { goto L_801D0694; } // 801D0624
  if (!crb(c,0)) { goto L_801D0638; } // 801D0628
  cmps(c,0,(int32_t)c->r[0],1); // 801D062C
  if (!crb(c,0)) { goto L_801D0644; } // 801D0630
  goto L_801D0694; // 801D0634
L_801D0638:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D0638
  if (!crb(c,0)) { goto L_801D0694; } // 801D063C
  goto L_801D0690; // 801D0640
L_801D0644:;
  cmps(c,0,(int32_t)c->r[29],-1); // 801D0644
  if (!crb(c,2)) { goto L_801D0658; } // 801D0648
  c->r[0]=0u+0x00000002u; // 801D064C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801D0650
  goto L_801D0670; // 801D0654
L_801D0658:;
  W32(c->r[31]+0x0000002Cu,c->r[29]); // 801D0658
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801D065C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0660
  if (!crb(c,2)) { goto L_801D0670; } // 801D0664
  c->r[0]=0u+0x00000002u; // 801D0668
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801D066C
L_801D0670:;
  c->lr=0x801D0674u; f_8005C538(c); // 801D0670
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 801D0674
  c->r[4]=c->r[4]+0x00000001u; // 801D0678
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 801D067C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801D0680
  c->r[0]=c->r[3]-c->r[0]; // 801D0684
  W32(c->r[31]+0x00000028u,c->r[0]); // 801D0688
  goto L_801D0694; // 801D068C
L_801D0690:;
  W32(c->r[31]+0x00000030u,c->r[29]); // 801D0690
L_801D0694:;
  c->r[3]=c->r[28]|c->r[28]; // 801D0694
  c->r[4]=R32(c->r[31]+0x00000004u); // 801D0698
  c->lr=0x801D06A0u; f_801D0894(c); // 801D069C
  c->r[0]=R32(c->r[31]+0x00000020u); // 801D06A0
  cmps(c,0,(int32_t)c->r[0],1); // 801D06A4
  if (crb(c,2)) { goto L_801D06D4; } // 801D06A8
  if (!crb(c,0)) { goto L_801D0758; } // 801D06AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D06B0
  if (!crb(c,0)) { goto L_801D06BC; } // 801D06B4
  goto L_801D0758; // 801D06B8
L_801D06BC:;
  c->r[3]=c->r[30]+0x00000024u; // 801D06BC
  c->r[4]=0u+0x00000001u; // 801D06C0
  c->r[5]=0u+0x00000000u; // 801D06C4
  c->r[6]=0u+0x00000000u; // 801D06C8
  c->lr=0x801D06D0u; f_8005302C(c); // 801D06CC
  goto L_801D0758; // 801D06D0
L_801D06D4:;
  c->r[3]=c->r[30]+0x00000024u; // 801D06D4
  c->r[4]=0u+0x00000000u; // 801D06D8
  c->lr=0x801D06E0u; f_800534E4(c); // 801D06DC
  goto L_801D0758; // 801D06E0
L_801D06E4:;
  cmps(c,0,(int32_t)c->r[29],-1); // 801D06E4
  if (!crb(c,2)) { goto L_801D06F8; } // 801D06E8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D06EC
  c->r[0]=c->r[0]|0x00000002u; // 801D06F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D06F4
L_801D06F8:;
  W32(c->r[31]+0x0000002Cu,c->r[29]); // 801D06F8
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801D06FC
  W32(c->r[31]+0x00000028u,c->r[0]); // 801D0700
  c->lr=0x801D0708u; f_8007B524(c); // 801D0704
  c->lr=0x801D070Cu; f_800A1124(c); // 801D0708
  W32(c->r[31]+0x000008F8u,c->r[3]); // 801D070C
  c->lr=0x801D0714u; f_8006E5AC(c); // 801D0710
  c->r[0]=0u+0x00000000u; // 801D0714
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D0718
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D071C
  c->r[4]=0u+0x0000011Cu; // 801D0720
  c->r[5]=0u+0x00000001u; // 801D0724
  c->r[6]=0u+0x00000000u; // 801D0728
  c->r[7]=0u+0x00000000u; // 801D072C
  c->r[8]=0u+0x00000000u; // 801D0730
  c->r[9]=0u+0x00000000u; // 801D0734
  c->r[10]=0u+0x00000000u; // 801D0738
  c->lr=0x801D0740u; f_8010AA7C(c); // 801D073C
  c->r[4]=R32(c->r[31]+0x000008F8u); // 801D0740
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D0744
  c->r[3]=R32(c->r[31]+0x000008F8u); // 801D0748
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D074C
  c->r[4]=c->r[31]+0x00000014u; // 801D0750
  c->lr=0x801D0758u; f_8006E5B4(c); // 801D0754
L_801D0758:;
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D0758
  c->r[0]=c->r[3]+0x00000001u; // 801D075C
  W32(c->r[28]+0x000000C0u,c->r[0]); // 801D0760
  c->r[3]=R32(c->r[31]+0x00000004u); // 801D0764
L_801D0768:;
  c->r[11]=c->r[1]+0x00000030u; // 801D0768
  c->lr=0x801D0770u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D076C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0770
  c->lr=c->r[0]; // 801D0774
  c->r[1]=c->r[1]+0x00000030u; // 801D0778
  return; // 801D077C
}

// fn_801D0780
void f_801D0780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0780
  c->r[0]=c->lr; // 801D0784
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0788
  c->r[11]=c->r[1]+0x00000030u; // 801D078C
  c->lr=0x801D0794u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0790
  c->r[27]=c->r[3]|c->r[3]; // 801D0794
  c->r[30]=c->r[4]|c->r[4]; // 801D0798
  c->r[28]=c->r[5]|c->r[5]; // 801D079C
  c->lr=0x801D07A4u; f_8007B524(c); // 801D07A0
  c->lr=0x801D07A8u; f_8006E224(c); // 801D07A4
  c->lr=0x801D07ACu; f_800897A8(c); // 801D07A8
  c->r[29]=c->r[3]|c->r[3]; // 801D07AC
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)2300); // 801D07B0
  c->r[31]=c->r[27]+c->r[0]; // 801D07B4
  c->r[30]=R32(c->r[31]+0x000009BCu); // 801D07B8
  cmps(c,0,(int32_t)c->r[30],0); // 801D07BC
  if (crb(c,2)) { goto L_801D07D8; } // 801D07C0
  c->lr=0x801D07C8u; f_8007B524(c); // 801D07C4
  c->r[4]=c->r[30]|c->r[30]; // 801D07C8
  c->lr=0x801D07D0u; f_800A114C(c); // 801D07CC
  c->r[0]=0u+0x00000000u; // 801D07D0
  W32(c->r[31]+0x000009BCu,c->r[0]); // 801D07D4
L_801D07D8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D07D8
  if (crb(c,2)) { goto L_801D0828; } // 801D07DC
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801D07E0
  cmps(c,0,(int32_t)c->r[0],2); // 801D07E4
  if (crb(c,2)) { goto L_801D07F0; } // 801D07E8
  goto L_801D0828; // 801D07EC
L_801D07F0:;
  c->lr=0x801D07F4u; f_8006E5AC(c); // 801D07F0
  c->r[0]=0u+0x00000000u; // 801D07F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D07F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D07FC
  c->r[4]=0u+0x0000011Du; // 801D0800
  c->r[5]=0u+0x00000001u; // 801D0804
  c->r[6]=0u+0x00000000u; // 801D0808
  c->r[7]=0u+0x00000000u; // 801D080C
  c->r[8]=0u+0x00000000u; // 801D0810
  c->r[9]=0u+0x00000000u; // 801D0814
  c->r[10]=0u+0x00000000u; // 801D0818
  c->lr=0x801D0820u; f_8010AA7C(c); // 801D081C
  c->r[4]=c->r[31]+0x000000D8u; // 801D0820
  c->lr=0x801D0828u; f_8006E5B4(c); // 801D0824
L_801D0828:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 801D0828
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 801D082C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0830
  if (crb(c,2)) { goto L_801D0850; } // 801D0834
  c->r[3]=c->r[27]+0x00010000u; // 801D0838
  c->r[3]=c->r[3]+0xFFFFBEE8u; // 801D083C
  c->r[4]=c->r[31]+0x000003ACu; // 801D0840
  c->lr=0x801D0848u; f_800F1CF4(c); // 801D0844
  c->r[3]=c->r[31]+0x000000F8u; // 801D0848
  c->lr=0x801D0850u; f_800780CC(c); // 801D084C
L_801D0850:;
  c->r[0]=0u+0x00000000u; // 801D0850
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801D0854
  c->r[3]=c->r[29]|c->r[29]; // 801D0858
  c->r[4]=c->r[31]+0x000000D0u; // 801D085C
  c->r[5]=0u+0x00000000u; // 801D0860
  c->lr=0x801D0868u; f_80067A38(c); // 801D0864
  c->r[0]=0u+0xFFFFFFFFu; // 801D0868
  W32(c->r[3]+0x00000038u,c->r[0]); // 801D086C
  c->r[3]=R32(c->r[27]+0x000000C0u); // 801D0870
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D0874
  W32(c->r[27]+0x000000C0u,c->r[0]); // 801D0878
  c->r[11]=c->r[1]+0x00000030u; // 801D087C
  c->lr=0x801D0884u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0880
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0884
  c->lr=c->r[0]; // 801D0888
  c->r[1]=c->r[1]+0x00000030u; // 801D088C
  return; // 801D0890
}

// fn_801D0894
void f_801D0894(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0894
  c->r[0]=c->lr; // 801D0898
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D089C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D08A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D08A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D08A8
  c->r[30]=c->r[3]|c->r[3]; // 801D08AC
  c->r[29]=c->r[4]|c->r[4]; // 801D08B0
  c->lr=0x801D08B8u; f_8007B524(c); // 801D08B4
  c->lr=0x801D08BCu; f_8006E224(c); // 801D08B8
  c->lr=0x801D08C0u; f_800897A8(c); // 801D08BC
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)2300); // 801D08C0
  c->r[30]=c->r[30]+c->r[0]; // 801D08C4
  c->r[29]=c->r[30]+0x000000F8u; // 801D08C8
  c->r[4]=c->r[30]+0x000000D0u; // 801D08CC
  c->r[5]=0u+0x00000000u; // 801D08D0
  c->lr=0x801D08D8u; f_80067A38(c); // 801D08D4
  c->r[31]=c->r[3]|c->r[3]; // 801D08D8
  c->r[3]=c->r[29]+0x00000024u; // 801D08DC
  c->r[4]=0u+0x00000001u; // 801D08E0
  c->lr=0x801D08E8u; f_800534E4(c); // 801D08E4
  c->r[0]=R32(c->r[30]+0x000000E4u); // 801D08E8
  cmps(c,0,(int32_t)c->r[0],1); // 801D08EC
  if (crb(c,2)) { goto L_801D0924; } // 801D08F0
  if (!crb(c,0)) { goto L_801D0940; } // 801D08F4
  cmps(c,0,(int32_t)c->r[0],0); // 801D08F8
  if (!crb(c,0)) { goto L_801D0904; } // 801D08FC
  goto L_801D0940; // 801D0900
L_801D0904:;
  c->r[3]=c->r[29]+0x00000024u; // 801D0904
  c->r[4]=0u+0x00000000u; // 801D0908
  c->r[5]=0u+0x00000000u; // 801D090C
  c->r[6]=0u+0x00000000u; // 801D0910
  c->lr=0x801D0918u; f_8005302C(c); // 801D0914
  c->r[0]=0u+0x00000002u; // 801D0918
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D091C
  goto L_801D0940; // 801D0920
L_801D0924:;
  c->r[3]=c->r[29]+0x00000024u; // 801D0924
  c->r[4]=0u+0x00000002u; // 801D0928
  c->r[5]=0u+0x00000000u; // 801D092C
  c->r[6]=0u+0x00000000u; // 801D0930
  c->lr=0x801D0938u; f_8005302C(c); // 801D0934
  c->r[0]=0u+0x00000001u; // 801D0938
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D093C
L_801D0940:;
  c->r[0]=0u+0x00000001u; // 801D0940
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801D0944
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0948
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D094C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0950
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0954
  c->lr=c->r[0]; // 801D0958
  c->r[1]=c->r[1]+0x00000020u; // 801D095C
  return; // 801D0960
}

// fn_801D0964
void f_801D0964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0964
  c->r[0]=c->lr; // 801D0968
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D096C
  c->r[11]=c->r[1]+0x00000040u; // 801D0970
  c->lr=0x801D0978u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0974
  c->r[22]=c->r[3]|c->r[3]; // 801D0978
  c->lr=0x801D0980u; f_8007B524(c); // 801D097C
  c->lr=0x801D0984u; f_8006E224(c); // 801D0980
  c->lr=0x801D0988u; f_800897A8(c); // 801D0984
  c->r[27]=c->r[3]|c->r[3]; // 801D0988
  c->lr=0x801D0990u; f_8007B524(c); // 801D098C
  c->lr=0x801D0994u; f_800A104C(c); // 801D0990
  cmps(c,0,(int32_t)c->r[3],0); // 801D0994
  if (crb(c,2)) { goto L_801D0A54; } // 801D0998
  c->r[3]=R32(c->r[27]+0x000000D0u); // 801D099C
  c->r[24]=R32(c->r[3]+0x0000004Cu); // 801D09A0
  c->r[26]=0u+0x00000000u; // 801D09A4
  c->r[23]=c->r[24]+0x00002D40u; // 801D09A8
  c->r[31]=0u+0x804C0000u; // 801D09AC
  c->r[29]=0u+0x80470000u; // 801D09B0
  goto L_801D0A48; // 801D09B4
L_801D09B8:;
  c->r[25]=0u+0x00000000u; // 801D09B8
  c->r[28]=c->r[29]+0x00002890u; // 801D09BC
L_801D09C0:;
  c->r[3]=c->r[23]|c->r[23]; // 801D09C0
  c->r[4]=R32(c->r[28]+0x00000000u); // 801D09C4
  c->lr=0x801D09CCu; f_802EBEB4(c); // 801D09C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D09CC
  if (!crb(c,2)) { goto L_801D0A30; } // 801D09D0
  c->r[3]=c->r[1]+0x00000008u; // 801D09D4
  c->r[4]=c->r[23]+0x00000024u; // 801D09D8
  c->lr=0x801D09E0u; f_800670A8(c); // 801D09DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D09E0
  c->r[0]=c->r[3]+0x00000001u; // 801D09E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D09E8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801D09EC
  c->r[0]=c->r[3]+0x00000001u; // 801D09F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D09F4
  c->r[3]=c->r[27]|c->r[27]; // 801D09F8
  c->r[4]=c->r[1]+0x00000008u; // 801D09FC
  c->lr=0x801D0A04u; f_800678B8(c); // 801D0A00
  c->r[30]=c->r[3]|c->r[3]; // 801D0A04
  c->r[3]=c->r[27]|c->r[27]; // 801D0A08
  c->r[4]=c->r[31]+0x000025D0u; // 801D0A0C
  c->r[5]=c->r[1]+0x00000008u; // 801D0A10
  c->lr=0x801D0A18u; f_8006838C(c); // 801D0A14
  c->r[3]=c->r[22]|c->r[22]; // 801D0A18
  c->r[4]=c->r[25]|c->r[25]; // 801D0A1C
  c->r[5]=c->r[30]+0x0000000Cu; // 801D0A20
  c->r[6]=R32(c->r[23]+0x00000020u); // 801D0A24
  c->lr=0x801D0A2Cu; f_801D037C(c); // 801D0A28
  W32(c->r[30]+0x00000038u,c->r[3]); // 801D0A2C
L_801D0A30:;
  c->r[28]=c->r[28]+0x00000004u; // 801D0A30
  c->r[25]=c->r[25]+0x00000001u; // 801D0A34
  cmpu(c,0,c->r[25],0x00000004u); // 801D0A38
  if (crb(c,0)) { IRQCHK(c); goto L_801D09C0; } // 801D0A3C
  c->r[23]=c->r[23]+0x0000002Cu; // 801D0A40
  c->r[26]=c->r[26]+0x00000001u; // 801D0A44
L_801D0A48:;
  c->r[0]=R32(c->r[24]+0x00002D3Cu); // 801D0A48
  cmpu(c,0,c->r[26],c->r[0]); // 801D0A4C
  if (crb(c,0)) { IRQCHK(c); goto L_801D09B8; } // 801D0A50
L_801D0A54:;
  c->r[11]=c->r[1]+0x00000040u; // 801D0A54
  c->lr=0x801D0A5Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0A58
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D0A5C
  c->lr=c->r[0]; // 801D0A60
  c->r[1]=c->r[1]+0x00000040u; // 801D0A64
  return; // 801D0A68
}

// fn_801D0A6C
void f_801D0A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0A6C
  c->r[0]=c->lr; // 801D0A70
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0A74
  c->r[11]=c->r[1]+0x00000030u; // 801D0A78
  c->lr=0x801D0A80u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0A7C
  c->r[25]=c->r[3]|c->r[3]; // 801D0A80
  c->r[26]=c->r[4]|c->r[4]; // 801D0A84
  c->r[31]=0u+0x00000000u; // 801D0A88
  c->r[4]=c->r[3]+0x00010000u; // 801D0A8C
  W32(c->r[4]+0xFFFFB474u,c->r[31]); // 801D0A90
  W32(c->r[4]+0xFFFFB4CCu,c->r[31]); // 801D0A94
  c->r[29]=0u+0x00000000u; // 801D0A98
  c->r[30]=c->r[3]+0x000000C4u; // 801D0A9C
L_801D0AA0:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D0AA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D0AA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D0AA8
  if (crb(c,2)) { goto L_801D0D34; } // 801D0AAC
  c->r[28]=0u+0x00000000u; // 801D0AB0
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D0AB4
  cmps(c,0,(int32_t)c->r[0],3); // 801D0AB8
  if (crb(c,2)) { goto L_801D0AC4; } // 801D0ABC
  goto L_801D0BFC; // 801D0AC0
L_801D0AC4:;
  c->r[22]=0u+0x00000000u; // 801D0AC4
  c->r[24]=0u+0x00000000u; // 801D0AC8
L_801D0ACC:;
  c->lr=0x801D0AD0u; f_8007B524(c); // 801D0ACC
  c->lr=0x801D0AD4u; f_8006E224(c); // 801D0AD0
  c->lr=0x801D0AD8u; f_8006E3D0(c); // 801D0AD4
  c->r[4]=c->r[24]|c->r[24]; // 801D0AD8
  c->lr=0x801D0AE0u; f_80175D40(c); // 801D0ADC
  c->r[23]=c->r[3]|c->r[3]; // 801D0AE0
  c->lr=0x801D0AE8u; f_8007B524(c); // 801D0AE4
  c->lr=0x801D0AECu; f_8006E224(c); // 801D0AE8
  c->lr=0x801D0AF0u; f_8006E3D0(c); // 801D0AEC
  c->r[4]=c->r[23]|c->r[23]; // 801D0AF0
  c->lr=0x801D0AF8u; f_80175D50(c); // 801D0AF4
  cmps(c,0,(int32_t)c->r[3],0); // 801D0AF8
  if (crb(c,2)) { goto L_801D0B2C; } // 801D0AFC
  c->r[0]=R32(c->r[23]+0x000008FCu); // 801D0B00
  cmps(c,0,(int32_t)c->r[0],44); // 801D0B04
  if (!crb(c,0)) { goto L_801D0B2C; } // 801D0B08
  cmps(c,0,(int32_t)c->r[0],42); // 801D0B0C
  if (!crb(c,0)) { goto L_801D0B18; } // 801D0B10
  goto L_801D0B2C; // 801D0B14
L_801D0B18:;
  c->r[3]=R32(c->r[23]+0x0000096Cu); // 801D0B18
  c->r[0]=R32(c->r[30]+0x00000030u); // 801D0B1C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0B20
  if (!crb(c,2)) { goto L_801D0B2C; } // 801D0B24
  c->r[22]=c->r[23]|c->r[23]; // 801D0B28
L_801D0B2C:;
  c->r[24]=c->r[24]+0x00000001u; // 801D0B2C
  cmpu(c,0,c->r[24],0x00000020u); // 801D0B30
  if (crb(c,0)) { IRQCHK(c); goto L_801D0ACC; } // 801D0B34
  cmps(c,0,(int32_t)c->r[22],0); // 801D0B38
  if (crb(c,2)) { goto L_801D0BFC; } // 801D0B3C
  c->lr=0x801D0B44u; f_8007B524(c); // 801D0B40
  c->lr=0x801D0B48u; f_8006E224(c); // 801D0B44
  c->lr=0x801D0B4Cu; f_800897A8(c); // 801D0B48
  c->r[4]=c->r[22]+0x00000014u; // 801D0B4C
  c->lr=0x801D0B54u; f_8006DD5C(c); // 801D0B50
  cmps(c,0,(int32_t)c->r[3],1); // 801D0B54
  if (crb(c,2)) { goto L_801D0BCC; } // 801D0B58
  if (!crb(c,0)) { goto L_801D0BFC; } // 801D0B5C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B60
  if (!crb(c,0)) { goto L_801D0B6C; } // 801D0B64
  goto L_801D0BFC; // 801D0B68
L_801D0B6C:;
  c->r[0]=R32(c->r[22]+0x000008FCu); // 801D0B6C
  cmps(c,0,(int32_t)c->r[0],43); // 801D0B70
  if (crb(c,2)) { goto L_801D0B7C; } // 801D0B74
  goto L_801D0BFC; // 801D0B78
L_801D0B7C:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 801D0B7C
  cmps(c,0,(int32_t)c->r[0],1); // 801D0B80
  if (!crb(c,2)) { goto L_801D0BFC; } // 801D0B84
  c->lr=0x801D0B8Cu; f_8007B524(c); // 801D0B88
  c->lr=0x801D0B90u; f_8006E224(c); // 801D0B8C
  c->lr=0x801D0B94u; f_800897A8(c); // 801D0B90
  c->r[4]=c->r[30]+0x0000000Cu; // 801D0B94
  c->lr=0x801D0B9Cu; f_8006DD5C(c); // 801D0B98
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B9C
  if (!crb(c,2)) { goto L_801D0BFC; } // 801D0BA0
  c->r[4]=c->r[25]+0x00010000u; // 801D0BA4
  c->r[0]=R32(c->r[4]+0xFFFFB474u); // 801D0BA8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D0BAC
  c->r[3]=c->r[3]+0x00010000u; // 801D0BB0
  c->r[0]=c->r[3]+0xFFFFB47Cu; // 801D0BB4
  W32(c->r[25]+c->r[0],c->r[30]); // 801D0BB8
  c->r[3]=R32(c->r[4]+0xFFFFB474u); // 801D0BBC
  c->r[0]=c->r[3]+0x00000001u; // 801D0BC0
  W32(c->r[4]+0xFFFFB474u,c->r[0]); // 801D0BC4
  goto L_801D0BFC; // 801D0BC8
L_801D0BCC:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 801D0BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801D0BD0
  if (!crb(c,2)) { goto L_801D0BFC; } // 801D0BD4
  c->r[4]=c->r[25]+0x00010000u; // 801D0BD8
  c->r[0]=R32(c->r[4]+0xFFFFB474u); // 801D0BDC
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D0BE0
  c->r[3]=c->r[3]+0x00010000u; // 801D0BE4
  c->r[0]=c->r[3]+0xFFFFB47Cu; // 801D0BE8
  W32(c->r[25]+c->r[0],c->r[30]); // 801D0BEC
  c->r[3]=R32(c->r[4]+0xFFFFB474u); // 801D0BF0
  c->r[0]=c->r[3]+0x00000001u; // 801D0BF4
  W32(c->r[4]+0xFFFFB474u,c->r[0]); // 801D0BF8
L_801D0BFC:;
  cmps(c,0,(int32_t)c->r[26],47); // 801D0BFC
  if (crb(c,2)) { goto L_801D0C14; } // 801D0C00
  if (!crb(c,0)) { goto L_801D0D34; } // 801D0C04
  cmps(c,0,(int32_t)c->r[26],22); // 801D0C08
  if (crb(c,2)) { goto L_801D0C14; } // 801D0C0C
  goto L_801D0D34; // 801D0C10
L_801D0C14:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D0C14
  cmps(c,0,(int32_t)c->r[0],3); // 801D0C18
  if (!crb(c,0)) { goto L_801D0C78; } // 801D0C1C
  cmps(c,0,(int32_t)c->r[0],1); // 801D0C20
  if (!crb(c,0)) { goto L_801D0C2C; } // 801D0C24
  goto L_801D0C78; // 801D0C28
L_801D0C2C:;
  c->lr=0x801D0C30u; f_8007B524(c); // 801D0C2C
  c->lr=0x801D0C34u; f_8006E224(c); // 801D0C30
  c->lr=0x801D0C38u; f_800897A8(c); // 801D0C34
  c->r[4]=c->r[30]+0x0000000Cu; // 801D0C38
  c->lr=0x801D0C40u; f_8006DD5C(c); // 801D0C3C
  c->r[28]=c->r[3]|c->r[3]; // 801D0C40
  c->lr=0x801D0C48u; f_8007B524(c); // 801D0C44
  c->lr=0x801D0C4Cu; f_8006E224(c); // 801D0C48
  c->lr=0x801D0C50u; f_800897A8(c); // 801D0C4C
  c->r[4]=c->r[30]+0x0000000Cu; // 801D0C50
  c->lr=0x801D0C58u; f_8006DC0C(c); // 801D0C54
  c->r[27]=c->r[3]|c->r[3]; // 801D0C58
  c->r[3]=R32(c->r[30]+0x00000028u); // 801D0C5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D0C60
  W32(c->r[30]+0x00000028u,c->r[0]); // 801D0C64
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D0C68
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C6C
  if (crb(c,1)) { goto L_801D0C78; } // 801D0C70
  W32(c->r[30]+0x00000028u,c->r[31]); // 801D0C74
L_801D0C78:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D0C78
  cmps(c,0,(int32_t)c->r[0],2); // 801D0C7C
  if (crb(c,2)) { goto L_801D0CD0; } // 801D0C80
  if (!crb(c,0)) { goto L_801D0D34; } // 801D0C84
  cmps(c,0,(int32_t)c->r[0],1); // 801D0C88
  if (!crb(c,0)) { goto L_801D0C94; } // 801D0C8C
  goto L_801D0D34; // 801D0C90
L_801D0C94:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D0C94
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C98
  if (crb(c,1)) { goto L_801D0D34; } // 801D0C9C
  cmps(c,0,(int32_t)c->r[28],0); // 801D0CA0
  if (!crb(c,2)) { goto L_801D0D34; } // 801D0CA4
  c->r[4]=c->r[25]+0x00010000u; // 801D0CA8
  c->r[0]=R32(c->r[4]+0xFFFFB474u); // 801D0CAC
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D0CB0
  c->r[3]=c->r[3]+0x00010000u; // 801D0CB4
  c->r[0]=c->r[3]+0xFFFFB47Cu; // 801D0CB8
  W32(c->r[25]+c->r[0],c->r[30]); // 801D0CBC
  c->r[3]=R32(c->r[4]+0xFFFFB474u); // 801D0CC0
  c->r[0]=c->r[3]+0x00000001u; // 801D0CC4
  W32(c->r[4]+0xFFFFB474u,c->r[0]); // 801D0CC8
  goto L_801D0D34; // 801D0CCC
L_801D0CD0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D0CD0
  if (crb(c,2)) { goto L_801D0D08; } // 801D0CD4
  cmps(c,0,(int32_t)c->r[27],0); // 801D0CD8
  if (crb(c,2)) { goto L_801D0D34; } // 801D0CDC
  c->r[4]=c->r[25]+0x00010000u; // 801D0CE0
  c->r[0]=R32(c->r[4]+0xFFFFB4CCu); // 801D0CE4
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D0CE8
  c->r[3]=c->r[3]+0x00010000u; // 801D0CEC
  c->r[0]=c->r[3]+0xFFFFB4D4u; // 801D0CF0
  W32(c->r[25]+c->r[0],c->r[30]); // 801D0CF4
  c->r[3]=R32(c->r[4]+0xFFFFB4CCu); // 801D0CF8
  c->r[0]=c->r[3]+0x00000001u; // 801D0CFC
  W32(c->r[4]+0xFFFFB4CCu,c->r[0]); // 801D0D00
  goto L_801D0D34; // 801D0D04
L_801D0D08:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D0D08
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0D0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0D10
  if (!crb(c,2)) { goto L_801D0D34; } // 801D0D14
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D0D18
  cmps(c,0,(int32_t)c->r[0],0); // 801D0D1C
  if (crb(c,1)) { goto L_801D0D34; } // 801D0D20
  c->r[3]=c->r[25]|c->r[25]; // 801D0D24
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D0D28
  c->r[5]=0u+0x00000001u; // 801D0D2C
  c->lr=0x801D0D34u; f_801D0780(c); // 801D0D30
L_801D0D34:;
  c->r[30]=c->r[30]+0x000008FCu; // 801D0D34
  c->r[29]=c->r[29]+0x00000001u; // 801D0D38
  cmpu(c,0,c->r[29],0x00000014u); // 801D0D3C
  if (crb(c,0)) { IRQCHK(c); goto L_801D0AA0; } // 801D0D40
  c->r[11]=c->r[1]+0x00000030u; // 801D0D44
  c->lr=0x801D0D4Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0D48
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0D4C
  c->lr=c->r[0]; // 801D0D50
  c->r[1]=c->r[1]+0x00000030u; // 801D0D54
  return; // 801D0D58
}

// fn_801D0D5C
void f_801D0D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0D5C
  c->r[0]=c->lr; // 801D0D60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0D64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0D68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0D6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0D70
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0D74
  c->r[28]=c->r[3]|c->r[3]; // 801D0D78
  c->r[29]=0u+0x00000000u; // 801D0D7C
  c->r[30]=c->r[28]|c->r[28]; // 801D0D80
  c->r[31]=c->r[3]+0x00010000u; // 801D0D84
  goto L_801D0DE0; // 801D0D88
L_801D0D8C:;
  c->r[3]=c->r[30]+0x00010000u; // 801D0D8C
  c->r[4]=R32(c->r[3]+0xFFFFB47Cu); // 801D0D90
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D0D94
  cmps(c,0,(int32_t)c->r[0],2); // 801D0D98
  if (crb(c,2)) { goto L_801D0DD8; } // 801D0D9C
  if (!crb(c,0)) { goto L_801D0DB0; } // 801D0DA0
  cmps(c,0,(int32_t)c->r[0],1); // 801D0DA4
  if (!crb(c,0)) { goto L_801D0DB8; } // 801D0DA8
  goto L_801D0DD8; // 801D0DAC
L_801D0DB0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D0DB0
  if (!crb(c,0)) { goto L_801D0DD8; } // 801D0DB4
L_801D0DB8:;
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 801D0DB8
  W32(c->r[4]+0x00000028u,c->r[0]); // 801D0DBC
  c->r[0]=R32(c->r[4]+0x00000020u); // 801D0DC0
  c->r[0]=c->r[0]^0x00000001u; // 801D0DC4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801D0DC8
  c->r[3]=c->r[28]|c->r[28]; // 801D0DCC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801D0DD0
  c->lr=0x801D0DD8u; f_801D0894(c); // 801D0DD4
L_801D0DD8:;
  c->r[30]=c->r[30]+0x00000004u; // 801D0DD8
  c->r[29]=c->r[29]+0x00000001u; // 801D0DDC
L_801D0DE0:;
  c->r[0]=R32(c->r[31]+0xFFFFB474u); // 801D0DE0
  cmpu(c,0,c->r[29],c->r[0]); // 801D0DE4
  if (crb(c,0)) { IRQCHK(c); goto L_801D0D8C; } // 801D0DE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0DEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0DF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0DF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D0DF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0DFC
  c->lr=c->r[0]; // 801D0E00
  c->r[1]=c->r[1]+0x00000020u; // 801D0E04
  return; // 801D0E08
}

// fn_801D0E0C
void f_801D0E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFA50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0E0C
  c->r[0]=c->lr; // 801D0E10
  W32(c->r[1]+0x000005B4u,c->r[0]); // 801D0E14
  {uint32_t ea=c->r[1]+0x000005A0u; WF64(ea,c->f[31]);} // 801D0E18
  {uint32_t ea=c->r[1]+0x000005A8u; psq_store(c,31,ea,0,0);} // 801D0E1C
  {uint32_t ea=c->r[1]+0x00000590u; WF64(ea,c->f[30]);} // 801D0E20
  {uint32_t ea=c->r[1]+0x00000598u; psq_store(c,30,ea,0,0);} // 801D0E24
  c->r[11]=c->r[1]+0x00000590u; // 801D0E28
  c->lr=0x801D0E30u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0E2C
  c->r[26]=c->r[3]|c->r[3]; // 801D0E30
  c->r[28]=0u+0x00000000u; // 801D0E34
  c->r[29]=c->r[26]|c->r[26]; // 801D0E38
  {uint32_t ea=c->r[2]+0xFFFF93B8u; c->f[30]=RF64(ea);} // 801D0E3C
  c->r[23]=0u+0x43300000u; // 801D0E40
  {uint32_t ea=c->r[2]+0xFFFF93B0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D0E44
  c->r[24]=0u+0x00000000u; // 801D0E48
  c->r[30]=0u+0x00000002u; // 801D0E4C
  c->r[31]=0u+0x000003E7u; // 801D0E50
  c->r[25]=c->r[3]+0x00010000u; // 801D0E54
  goto L_801D100C; // 801D0E58
L_801D0E5C:;
  c->r[3]=c->r[29]+0x00010000u; // 801D0E5C
  c->r[27]=R32(c->r[3]+0xFFFFB4D4u); // 801D0E60
  c->lr=0x801D0E68u; f_8007B524(c); // 801D0E64
  c->r[4]=c->r[27]+0x0000000Cu; // 801D0E68
  c->lr=0x801D0E70u; f_8009E8FC(c); // 801D0E6C
  c->r[22]=c->r[3]|c->r[3]; // 801D0E70
  c->r[3]=c->r[1]+0x00000218u; // 801D0E74
  c->lr=0x801D0E7Cu; f_8009F53C(c); // 801D0E78
  W32(c->r[1]+0x00000218u,c->r[30]); // 801D0E7C
  W32(c->r[1]+0x0000021Cu,c->r[24]); // 801D0E80
  W32(c->r[1]+0x00000220u,c->r[24]); // 801D0E84
  W32(c->r[1]+0x00000224u,c->r[24]); // 801D0E88
  W32(c->r[1]+0x00000228u,c->r[31]); // 801D0E8C
  W32(c->r[1]+0x0000022Cu,c->r[24]); // 801D0E90
  W32(c->r[1]+0x00000230u,c->r[24]); // 801D0E94
  W32(c->r[1]+0x00000238u,c->r[24]); // 801D0E98
  cmps(c,0,(int32_t)c->r[22],0); // 801D0E9C
  if (!crb(c,2)) { goto L_801D0F34; } // 801D0EA0
  c->lr=0x801D0EA8u; f_8007B524(c); // 801D0EA4
  c->r[4]=c->r[1]+0x00000348u; // 801D0EA8
  c->lr=0x801D0EB0u; f_8009DB58(c); // 801D0EAC
  c->r[0]=R32(c->r[1]+0x00000360u); // 801D0EB0
  c->r[0]=c->r[0]^0x80000000u; // 801D0EB4
  W32(c->r[1]+0x0000055Cu,c->r[0]); // 801D0EB8
  W32(c->r[1]+0x00000558u,c->r[23]); // 801D0EBC
  {uint32_t ea=c->r[1]+0x00000558u; c->f[0]=RF64(ea);} // 801D0EC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801D0EC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801D0EC8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0ECC
  {uint32_t ea=c->r[1]+0x00000560u; WF64(ea,c->f[0]);} // 801D0ED0
  c->r[0]=R32(c->r[1]+0x00000564u); // 801D0ED4
  W32(c->r[1]+0x00000220u,c->r[0]); // 801D0ED8
  c->lr=0x801D0EE0u; f_8007B524(c); // 801D0EDC
  c->r[4]=c->r[1]+0x000000E8u; // 801D0EE0
  c->r[5]=0u+0x00000000u; // 801D0EE4
  c->lr=0x801D0EECu; f_8009D530(c); // 801D0EE8
  W32(c->r[1]+0x000000F4u,c->r[24]); // 801D0EEC
  W32(c->r[1]+0x000000FCu,c->r[24]); // 801D0EF0
  c->lr=0x801D0EF8u; f_8007B524(c); // 801D0EF4
  c->r[4]=c->r[1]+0x00000008u; // 801D0EF8
  c->r[5]=c->r[1]+0x00000218u; // 801D0EFC
  c->r[6]=c->r[1]+0x000000E8u; // 801D0F00
  c->r[7]=0u+0x00000000u; // 801D0F04
  c->r[8]=0u+0x00000001u; // 801D0F08
  c->lr=0x801D0F10u; f_8009F858(c); // 801D0F0C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F10
  if (crb(c,2)) { goto L_801D0FC8; } // 801D0F14
  c->lr=0x801D0F1Cu; f_8007B524(c); // 801D0F18
  c->r[4]=0u+0x00000000u; // 801D0F1C
  c->r[5]=c->r[1]+0x00000008u; // 801D0F20
  c->r[6]=0u+0x00000001u; // 801D0F24
  c->r[7]=0u+0x00000001u; // 801D0F28
  c->lr=0x801D0F30u; f_8009D5B4(c); // 801D0F2C
  goto L_801D0FC8; // 801D0F30
L_801D0F34:;
  c->r[3]=c->r[22]|c->r[22]; // 801D0F34
  c->lr=0x801D0F3Cu; f_8006E4B8(c); // 801D0F38
  c->lr=0x801D0F40u; f_80089BE4(c); // 801D0F3C
  c->r[0]=c->r[3]^0x80000000u; // 801D0F40
  W32(c->r[1]+0x00000564u,c->r[0]); // 801D0F44
  W32(c->r[1]+0x00000560u,c->r[23]); // 801D0F48
  {uint32_t ea=c->r[1]+0x00000560u; c->f[0]=RF64(ea);} // 801D0F4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801D0F50
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801D0F54
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0F58
  {uint32_t ea=c->r[1]+0x00000558u; WF64(ea,c->f[0]);} // 801D0F5C
  c->r[0]=R32(c->r[1]+0x0000055Cu); // 801D0F60
  W32(c->r[1]+0x00000220u,c->r[0]); // 801D0F64
  c->lr=0x801D0F6Cu; f_8007B524(c); // 801D0F68
  c->r[4]=c->r[22]|c->r[22]; // 801D0F6C
  c->r[5]=c->r[1]+0x000000E8u; // 801D0F70
  c->r[6]=0u+0x00000000u; // 801D0F74
  c->lr=0x801D0F7Cu; f_8009EA0C(c); // 801D0F78
  W32(c->r[1]+0x000000F4u,c->r[24]); // 801D0F7C
  W32(c->r[1]+0x000000FCu,c->r[24]); // 801D0F80
  c->lr=0x801D0F88u; f_8007B524(c); // 801D0F84
  c->r[4]=c->r[1]+0x00000008u; // 801D0F88
  c->r[5]=c->r[1]+0x00000218u; // 801D0F8C
  c->r[6]=c->r[1]+0x000000E8u; // 801D0F90
  c->r[7]=0u+0x00000000u; // 801D0F94
  c->r[8]=0u+0x00000001u; // 801D0F98
  c->lr=0x801D0FA0u; f_8009F858(c); // 801D0F9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0FA0
  if (crb(c,2)) { goto L_801D0FC8; } // 801D0FA4
  c->lr=0x801D0FACu; f_8007B524(c); // 801D0FA8
  c->r[4]=c->r[22]|c->r[22]; // 801D0FAC
  c->r[5]=c->r[1]+0x00000008u; // 801D0FB0
  c->r[6]=0u+0x00000000u; // 801D0FB4
  c->r[7]=0u+0x00000000u; // 801D0FB8
  c->r[8]=0u+0xFFFFFFFFu; // 801D0FBC
  c->r[9]=0u+0xFFFFFFFFu; // 801D0FC0
  c->lr=0x801D0FC8u; f_8009EE94(c); // 801D0FC4
L_801D0FC8:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 801D0FC8
  cmps(c,0,(int32_t)c->r[0],2); // 801D0FCC
  if (crb(c,2)) { goto L_801D0FD8; } // 801D0FD0
  goto L_801D1004; // 801D0FD4
L_801D0FD8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801D0FD8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0FDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D0FE0
  if (!crb(c,2)) { goto L_801D1004; } // 801D0FE4
  c->r[0]=R32(c->r[27]+0x00000028u); // 801D0FE8
  cmps(c,0,(int32_t)c->r[0],0); // 801D0FEC
  if (crb(c,1)) { goto L_801D1004; } // 801D0FF0
  c->r[3]=c->r[26]|c->r[26]; // 801D0FF4
  c->r[4]=R32(c->r[27]+0x00000004u); // 801D0FF8
  c->r[5]=0u+0x00000001u; // 801D0FFC
  c->lr=0x801D1004u; f_801D0780(c); // 801D1000
L_801D1004:;
  c->r[29]=c->r[29]+0x00000004u; // 801D1004
  c->r[28]=c->r[28]+0x00000001u; // 801D1008
L_801D100C:;
  c->r[0]=R32(c->r[25]+0xFFFFB4CCu); // 801D100C
  cmpu(c,0,c->r[28],c->r[0]); // 801D1010
  if (crb(c,0)) { IRQCHK(c); goto L_801D0E5C; } // 801D1014
  c->r[0]=0u+0x000005A8u; // 801D1018
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D101C
  {uint32_t ea=c->r[1]+0x000005A0u; c->f[31]=RF64(ea);} // 801D1020
  c->r[0]=0u+0x00000598u; // 801D1024
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801D1028
  {uint32_t ea=c->r[1]+0x00000590u; c->f[30]=RF64(ea);} // 801D102C
  c->r[11]=c->r[1]+0x00000590u; // 801D1030
  c->lr=0x801D1038u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1034
  c->r[0]=R32(c->r[1]+0x000005B4u); // 801D1038
  c->lr=c->r[0]; // 801D103C
  c->r[1]=c->r[1]+0x000005B0u; // 801D1040
  return; // 801D1044
}

// fn_801D1048
void f_801D1048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1048
  c->r[0]=c->lr; // 801D104C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1050
  cmps(c,0,(int32_t)c->r[5],1); // 801D1054
  if (crb(c,2)) { goto L_801D1090; } // 801D1058
  if (!crb(c,0)) { goto L_801D10B4; } // 801D105C
  cmps(c,0,(int32_t)c->r[5],0); // 801D1060
  if (!crb(c,0)) { goto L_801D106C; } // 801D1064
  goto L_801D10B4; // 801D1068
L_801D106C:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 801D106C
  cmps(c,0,(int32_t)c->r[0],1); // 801D1070
  if (!crb(c,2)) { goto L_801D10B4; } // 801D1074
  c->r[0]=0u+0x00000000u; // 801D1078
  W32(c->r[4]+0x00000020u,c->r[0]); // 801D107C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801D1080
  c->lr=0x801D1088u; f_801D0894(c); // 801D1084
  c->r[3]=0u+0x00000001u; // 801D1088
  goto L_801D10B8; // 801D108C
L_801D1090:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 801D1090
  cmps(c,0,(int32_t)c->r[0],0); // 801D1094
  if (!crb(c,2)) { goto L_801D10B4; } // 801D1098
  c->r[0]=0u+0x00000001u; // 801D109C
  W32(c->r[4]+0x00000020u,c->r[0]); // 801D10A0
  c->r[4]=R32(c->r[4]+0x00000004u); // 801D10A4
  c->lr=0x801D10ACu; f_801D0894(c); // 801D10A8
  c->r[3]=0u+0x00000001u; // 801D10AC
  goto L_801D10B8; // 801D10B0
L_801D10B4:;
  c->r[3]=0u+0x00000000u; // 801D10B4
L_801D10B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D10B8
  c->lr=c->r[0]; // 801D10BC
  c->r[1]=c->r[1]+0x00000010u; // 801D10C0
  return; // 801D10C4
}

// fn_801D10C8
void f_801D10C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D10C8
  c->r[0]=c->lr; // 801D10CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D10D0
  c->r[11]=c->r[1]+0x00000020u; // 801D10D4
  c->lr=0x801D10DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D10D8
  c->r[26]=c->r[3]|c->r[3]; // 801D10DC
  c->r[27]=c->r[4]|c->r[4]; // 801D10E0
  c->r[28]=c->r[5]|c->r[5]; // 801D10E4
  c->r[29]=0u+0x00000000u; // 801D10E8
  c->r[30]=0u+0x00000000u; // 801D10EC
  c->r[31]=c->r[3]+0x000000C4u; // 801D10F0
L_801D10F4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D10F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D10F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D10FC
  if (crb(c,2)) { goto L_801D113C; } // 801D1100
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D1104
  cmps(c,0,(int32_t)c->r[0],3); // 801D1108
  if (crb(c,2)) { goto L_801D1114; } // 801D110C
  goto L_801D113C; // 801D1110
L_801D1114:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 801D1114
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D1118
  if (!crb(c,2)) { goto L_801D113C; } // 801D111C
  c->r[3]=c->r[26]|c->r[26]; // 801D1120
  c->r[4]=c->r[31]|c->r[31]; // 801D1124
  c->r[5]=c->r[28]|c->r[28]; // 801D1128
  c->lr=0x801D1130u; f_801D1048(c); // 801D112C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1130
  if (crb(c,2)) { goto L_801D113C; } // 801D1134
  c->r[29]=0u+0x00000001u; // 801D1138
L_801D113C:;
  c->r[31]=c->r[31]+0x000008FCu; // 801D113C
  c->r[30]=c->r[30]+0x00000001u; // 801D1140
  cmpu(c,0,c->r[30],0x00000014u); // 801D1144
  if (crb(c,0)) { IRQCHK(c); goto L_801D10F4; } // 801D1148
  c->r[3]=c->r[29]|c->r[29]; // 801D114C
  c->r[11]=c->r[1]+0x00000020u; // 801D1150
  c->lr=0x801D1158u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1154
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1158
  c->lr=c->r[0]; // 801D115C
  c->r[1]=c->r[1]+0x00000020u; // 801D1160
  return; // 801D1164
}

// fn_801D1168
void f_801D1168(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 801D1168
  c->r[3]=c->r[3]+0x000000C4u; // 801D116C
  c->r[0]=0u+0x00000004u; // 801D1170
  c->ctr=c->r[0]; // 801D1174
L_801D1178:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1178
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D117C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1180
  if (crb(c,2)) { goto L_801D11AC; } // 801D1184
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D1188
  cmps(c,0,(int32_t)c->r[0],3); // 801D118C
  if (crb(c,2)) { goto L_801D1198; } // 801D1190
  goto L_801D11AC; // 801D1194
L_801D1198:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 801D1198
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D119C
  if (!crb(c,2)) { goto L_801D11AC; } // 801D11A0
  c->r[3]=R32(c->r[3]+0x00000020u); // 801D11A4
  return; // 801D11A8
L_801D11AC:;
  c->r[0]=R32(c->r[3]+0x000008FCu); // 801D11AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D11B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D11B4
  if (crb(c,2)) { goto L_801D11E0; } // 801D11B8
  c->r[0]=R32(c->r[3]+0x00000904u); // 801D11BC
  cmps(c,0,(int32_t)c->r[0],3); // 801D11C0
  if (crb(c,2)) { goto L_801D11CC; } // 801D11C4
  goto L_801D11E0; // 801D11C8
L_801D11CC:;
  c->r[0]=R32(c->r[3]+0x0000092Cu); // 801D11CC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D11D0
  if (!crb(c,2)) { goto L_801D11E0; } // 801D11D4
  c->r[3]=R32(c->r[3]+0x0000091Cu); // 801D11D8
  return; // 801D11DC
L_801D11E0:;
  c->r[0]=R32(c->r[3]+0x000011F8u); // 801D11E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D11E4
  cmps(c,0,(int32_t)c->r[0],0); // 801D11E8
  if (crb(c,2)) { goto L_801D1214; } // 801D11EC
  c->r[0]=R32(c->r[3]+0x00001200u); // 801D11F0
  cmps(c,0,(int32_t)c->r[0],3); // 801D11F4
  if (crb(c,2)) { goto L_801D1200; } // 801D11F8
  goto L_801D1214; // 801D11FC
L_801D1200:;
  c->r[0]=R32(c->r[3]+0x00001228u); // 801D1200
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D1204
  if (!crb(c,2)) { goto L_801D1214; } // 801D1208
  c->r[3]=R32(c->r[3]+0x00001218u); // 801D120C
  return; // 801D1210
L_801D1214:;
  c->r[0]=R32(c->r[3]+0x00001AF4u); // 801D1214
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D1218
  cmps(c,0,(int32_t)c->r[0],0); // 801D121C
  if (crb(c,2)) { goto L_801D1248; } // 801D1220
  c->r[0]=R32(c->r[3]+0x00001AFCu); // 801D1224
  cmps(c,0,(int32_t)c->r[0],3); // 801D1228
  if (crb(c,2)) { goto L_801D1234; } // 801D122C
  goto L_801D1248; // 801D1230
L_801D1234:;
  c->r[0]=R32(c->r[3]+0x00001B24u); // 801D1234
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D1238
  if (!crb(c,2)) { goto L_801D1248; } // 801D123C
  c->r[3]=R32(c->r[3]+0x00001B14u); // 801D1240
  return; // 801D1244
L_801D1248:;
  c->r[0]=R32(c->r[3]+0x000023F0u); // 801D1248
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D124C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1250
  if (crb(c,2)) { goto L_801D127C; } // 801D1254
  c->r[0]=R32(c->r[3]+0x000023F8u); // 801D1258
  cmps(c,0,(int32_t)c->r[0],3); // 801D125C
  if (crb(c,2)) { goto L_801D1268; } // 801D1260
  goto L_801D127C; // 801D1264
L_801D1268:;
  c->r[0]=R32(c->r[3]+0x00002420u); // 801D1268
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D126C
  if (!crb(c,2)) { goto L_801D127C; } // 801D1270
  c->r[3]=R32(c->r[3]+0x00002410u); // 801D1274
  return; // 801D1278
L_801D127C:;
  c->r[3]=c->r[3]+0x00002CECu; // 801D127C
  c->r[5]=c->r[5]+0x00000004u; // 801D1280
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1178; } // 801D1284
  c->r[3]=0u+0x00000000u; // 801D1288
  return; // 801D128C
}

// fn_801D1290
void f_801D1290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1290
  c->r[0]=c->lr; // 801D1294
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1298
  c->r[11]=c->r[1]+0x00000020u; // 801D129C
  c->lr=0x801D12A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D12A0
  c->r[27]=c->r[3]|c->r[3]; // 801D12A4
  c->r[28]=c->r[4]|c->r[4]; // 801D12A8
  c->r[29]=c->r[5]|c->r[5]; // 801D12AC
  c->r[30]=c->r[6]|c->r[6]; // 801D12B0
  cmps(c,0,(int32_t)c->r[4],2); // 801D12B4
  if (crb(c,2)) { goto L_801D12C0; } // 801D12B8
  goto L_801D130C; // 801D12BC
L_801D12C0:;
  c->lr=0x801D12C4u; f_8007B524(c); // 801D12C0
  c->lr=0x801D12C8u; f_8006E224(c); // 801D12C4
  c->lr=0x801D12CCu; f_800897A8(c); // 801D12C8
  c->r[31]=c->r[3]|c->r[3]; // 801D12CC
  c->r[3]=c->r[27]|c->r[27]; // 801D12D0
  c->r[4]=c->r[28]|c->r[28]; // 801D12D4
  c->r[5]=c->r[29]|c->r[29]; // 801D12D8
  c->r[6]=c->r[30]|c->r[30]; // 801D12DC
  c->lr=0x801D12E4u; f_801D037C(c); // 801D12E0
  c->r[30]=c->r[3]|c->r[3]; // 801D12E4
  c->r[3]=c->r[31]|c->r[31]; // 801D12E8
  c->r[4]=c->r[29]|c->r[29]; // 801D12EC
  c->r[5]=0u+0x00000000u; // 801D12F0
  c->lr=0x801D12F8u; f_80067A38(c); // 801D12F4
  cmps(c,0,(int32_t)c->r[3],0); // 801D12F8
  if (crb(c,2)) { goto L_801D1304; } // 801D12FC
  W32(c->r[3]+0x00000038u,c->r[30]); // 801D1300
L_801D1304:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1304
  goto L_801D1310; // 801D1308
L_801D130C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801D130C
L_801D1310:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1310
  c->lr=0x801D1318u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1314
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1318
  c->lr=c->r[0]; // 801D131C
  c->r[1]=c->r[1]+0x00000020u; // 801D1320
  return; // 801D1324
}

// fn_801D1328
void f_801D1328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1328
  c->r[0]=c->lr; // 801D132C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1334
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1338
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D133C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D1340
  c->r[28]=c->r[3]|c->r[3]; // 801D1344
  c->r[29]=c->r[4]|c->r[4]; // 801D1348
  c->r[30]=0u+0x00000000u; // 801D134C
  c->r[31]=c->r[3]+0x000000C4u; // 801D1350
L_801D1354:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D1354
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D1358
  cmps(c,0,(int32_t)c->r[0],0); // 801D135C
  if (crb(c,2)) { goto L_801D1380; } // 801D1360
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D1364
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801D1368
  if (!crb(c,2)) { goto L_801D1380; } // 801D136C
  c->r[3]=c->r[28]|c->r[28]; // 801D1370
  c->r[4]=c->r[30]|c->r[30]; // 801D1374
  c->r[5]=0u+0x00000001u; // 801D1378
  c->lr=0x801D1380u; f_801D0780(c); // 801D137C
L_801D1380:;
  c->r[31]=c->r[31]+0x000008FCu; // 801D1380
  c->r[30]=c->r[30]+0x00000001u; // 801D1384
  cmpu(c,0,c->r[30],0x00000014u); // 801D1388
  if (crb(c,0)) { IRQCHK(c); goto L_801D1354; } // 801D138C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1390
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1394
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1398
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D139C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D13A0
  c->lr=c->r[0]; // 801D13A4
  c->r[1]=c->r[1]+0x00000020u; // 801D13A8
  return; // 801D13AC
}

// fn_801D13B0
void f_801D13B0(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 801D13B0
  return; // 801D13B4
}

// fn_801D13B8
void f_801D13B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000B0u); // 801D13B8
  return; // 801D13BC
}

// dtor_801D13C0
void f_801D13C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D13C0
  c->r[0]=c->lr; // 801D13C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D13C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D13CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D13D0
  c->r[30]=c->r[3]|c->r[3]; // 801D13D4
  c->r[31]=c->r[4]|c->r[4]; // 801D13D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D13DC
  if (crb(c,2)) { goto L_801D1404; } // 801D13E0
  c->r[3]=c->r[3]+0x00000034u; // 801D13E4
  c->r[4]=0u+0xFFFFFFFFu; // 801D13E8
  c->lr=0x801D13F0u; f_800F1A14(c); // 801D13EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D13F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D13F4
  if (!crb(c,1)) { goto L_801D1404; } // 801D13F8
  c->r[3]=c->r[30]|c->r[30]; // 801D13FC
  c->lr=0x801D1404u; f_80047B20(c); // 801D1400
L_801D1404:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1408
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D140C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1410
  c->lr=c->r[0]; // 801D1414
  c->r[1]=c->r[1]+0x00000010u; // 801D1418
  return; // 801D141C
}

// fn_801D1420
void f_801D1420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1420
  c->r[0]=c->lr; // 801D1424
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D142C
  c->r[31]=c->r[3]|c->r[3]; // 801D1430
  c->r[3]=c->r[3]+0x00000014u; // 801D1434
  c->lr=0x801D143Cu; f_8004B0A4(c); // 801D1438
  c->r[3]=c->r[31]+0x00000034u; // 801D143C
  c->lr=0x801D1444u; f_800F19A4(c); // 801D1440
  c->r[3]=c->r[31]|c->r[31]; // 801D1444
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1448
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D144C
  c->lr=c->r[0]; // 801D1450
  c->r[1]=c->r[1]+0x00000010u; // 801D1454
  return; // 801D1458
}

// fn_801D145C
void f_801D145C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D145C
  c->r[0]=c->lr; // 801D1460
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1468
  c->r[31]=c->r[3]|c->r[3]; // 801D146C
  c->lr=0x801D1474u; f_801D1B80(c); // 801D1470
  c->r[3]=c->r[31]|c->r[31]; // 801D1474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1478
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D147C
  c->lr=c->r[0]; // 801D1480
  c->r[1]=c->r[1]+0x00000010u; // 801D1484
  return; // 801D1488
}

// fn_801D148C
void f_801D148C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D148C
  c->r[0]=c->lr; // 801D1490
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1498
  c->r[31]=c->r[3]|c->r[3]; // 801D149C
  cmps(c,0,(int32_t)c->r[3],0); // 801D14A0
  if (crb(c,2)) { goto L_801D14B8; } // 801D14A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801D14A8
  cmps(c,0,(int32_t)c->r[0],0); // 801D14AC
  if (!crb(c,1)) { goto L_801D14B8; } // 801D14B0
  c->lr=0x801D14B8u; f_80047B20(c); // 801D14B4
L_801D14B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D14B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D14BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D14C0
  c->lr=c->r[0]; // 801D14C4
  c->r[1]=c->r[1]+0x00000010u; // 801D14C8
  return; // 801D14CC
}

// fn_801D14D0
void f_801D14D0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801D14D0
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D14D4
  c->r[6]=R32(c->r[3]+c->r[7]); // 801D14D8
  c->r[5]=0u+0x00000001u; // 801D14DC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801D14E0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801D14E4
  c->r[0]=c->r[6]|c->r[0]; // 801D14E8
  W32(c->r[3]+c->r[7],c->r[0]); // 801D14EC
  return; // 801D14F0
}

// fn_801D14F4
void f_801D14F4(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801D14F4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801D14F8
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801D14FC
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801D1500
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D1504
  c->r[0]=R32(c->r[3]+c->r[0]); // 801D1508
  c->r[3]=c->r[5]&c->r[0]; // 801D150C
  c->r[0]=0u-c->r[3]; // 801D1510
  c->r[0]=c->r[0]|c->r[3]; // 801D1514
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D1518
  return; // 801D151C
}

// fn_801D1520
void f_801D1520(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801D1520
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D1524
  c->r[6]=R32(c->r[3]+c->r[7]); // 801D1528
  c->r[5]=0u+0x00000001u; // 801D152C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801D1530
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801D1534
  c->r[0]=~(c->r[0]|c->r[0]); // 801D1538
  c->r[0]=c->r[6]&c->r[0]; // 801D153C
  W32(c->r[3]+c->r[7],c->r[0]); // 801D1540
  return; // 801D1544
}

// fn_801D1548
void f_801D1548(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801D1548
  f_801D14D0(c); return; // 801D154C
}

// fn_801D1550
void f_801D1550(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801D1550
  f_801D14F4(c); return; // 801D1554
}

// fn_801D1558
void f_801D1558(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801D1558
  f_801D14D0(c); return; // 801D155C
}

// fn_801D1560
void f_801D1560(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801D1560
  f_801D1520(c); return; // 801D1564
}

// fn_801D1568
void f_801D1568(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801D1568
  f_801D14F4(c); return; // 801D156C
}

// fn_801D1570
void f_801D1570(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801D1570
  c->r[5]=sraw(c,c->r[0],31); // 801D1574
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801D1578
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 801D157C
  c->r[3]=addc(c,c->r[5],c->r[3],c->xer_ca); // 801D1580
  return; // 801D1584
}

// fn_801D1588
void f_801D1588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1588
  c->r[0]=c->lr; // 801D158C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1590
  c->lr=0x801D1598u; f_8006592C(c); // 801D1594
  c->r[4]=0u+0x00000006u; // 801D1598
  c->r[5]=0u+0x00000000u; // 801D159C
  c->r[6]=0u+0xFFFFFFFFu; // 801D15A0
  c->r[7]=0u+0xFFFFFFFFu; // 801D15A4
  c->lr=0x801D15ACu; f_80048F20(c); // 801D15A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D15AC
  c->lr=c->r[0]; // 801D15B0
  c->r[1]=c->r[1]+0x00000010u; // 801D15B4
  return; // 801D15B8
}

// fn_801D15BC
void f_801D15BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D15BC
  c->r[0]=c->lr; // 801D15C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D15C4
  c->lr=0x801D15CCu; f_8006592C(c); // 801D15C8
  c->r[4]=0u+0x00000000u; // 801D15CC
  c->r[5]=0u+0x00000000u; // 801D15D0
  c->r[6]=0u+0xFFFFFFFFu; // 801D15D4
  c->r[7]=0u+0xFFFFFFFFu; // 801D15D8
  c->lr=0x801D15E0u; f_80048F20(c); // 801D15DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D15E0
  c->lr=c->r[0]; // 801D15E4
  c->r[1]=c->r[1]+0x00000010u; // 801D15E8
  return; // 801D15EC
}

// fn_801D15F0
void f_801D15F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D15F0
  c->r[0]=c->lr; // 801D15F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D15F8
  c->lr=0x801D1600u; f_8006592C(c); // 801D15FC
  c->r[4]=0u+0x00000001u; // 801D1600
  c->r[5]=0u+0x00000000u; // 801D1604
  c->r[6]=0u+0xFFFFFFFFu; // 801D1608
  c->r[7]=0u+0xFFFFFFFFu; // 801D160C
  c->lr=0x801D1614u; f_80048F20(c); // 801D1610
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1614
  c->lr=c->r[0]; // 801D1618
  c->r[1]=c->r[1]+0x00000010u; // 801D161C
  return; // 801D1620
}

// fn_801D1624
void f_801D1624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1624
  c->r[0]=c->lr; // 801D1628
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D162C
  c->lr=0x801D1634u; f_8006592C(c); // 801D1630
  c->r[4]=0u+0x00000004u; // 801D1634
  c->r[5]=0u+0x00000000u; // 801D1638
  c->r[6]=0u+0xFFFFFFFFu; // 801D163C
  c->r[7]=0u+0xFFFFFFFFu; // 801D1640
  c->lr=0x801D1648u; f_80048F20(c); // 801D1644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1648
  c->lr=c->r[0]; // 801D164C
  c->r[1]=c->r[1]+0x00000010u; // 801D1650
  return; // 801D1654
}

// fn_801D1658
void f_801D1658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1658
  c->r[0]=c->lr; // 801D165C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1660
  c->lr=0x801D1668u; f_8006592C(c); // 801D1664
  c->r[4]=0u+0x00000007u; // 801D1668
  c->r[5]=0u+0x00000000u; // 801D166C
  c->r[6]=0u+0xFFFFFFFFu; // 801D1670
  c->r[7]=0u+0xFFFFFFFFu; // 801D1674
  c->lr=0x801D167Cu; f_80048F20(c); // 801D1678
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D167C
  c->lr=c->r[0]; // 801D1680
  c->r[1]=c->r[1]+0x00000010u; // 801D1684
  return; // 801D1688
}

// fn_801D168C
void f_801D168C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D168C
  c->r[0]=c->lr; // 801D1690
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1694
  c->r[4]=R32(c->r[3]+0x00000024u); // 801D1698
  c->lr=0x801D16A0u; f_801D1570(c); // 801D169C
  cmps(c,0,(int32_t)c->r[3],0); // 801D16A0
  if (!crb(c,2)) { goto L_801D16C0; } // 801D16A4
  c->lr=0x801D16ACu; f_8006592C(c); // 801D16A8
  c->r[4]=0u+0x00000006u; // 801D16AC
  c->r[5]=0u+0x00000000u; // 801D16B0
  c->r[6]=0u+0xFFFFFFFFu; // 801D16B4
  c->r[7]=0u+0xFFFFFFFFu; // 801D16B8
  c->lr=0x801D16C0u; f_80048F20(c); // 801D16BC
L_801D16C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D16C0
  c->lr=c->r[0]; // 801D16C4
  c->r[1]=c->r[1]+0x00000010u; // 801D16C8
  return; // 801D16CC
}

// fn_801D16D0
void f_801D16D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D16D0
  c->r[0]=c->lr; // 801D16D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D16D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D16DC
  c->r[31]=c->r[3]|c->r[3]; // 801D16E0
  c->lr=0x801D16E8u; f_801D18F4(c); // 801D16E4
  c->r[4]=c->r[3]|c->r[3]; // 801D16E8
  c->r[3]=c->r[31]|c->r[31]; // 801D16EC
  c->lr=0x801D16F4u; f_801D1570(c); // 801D16F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D16F4
  if (!crb(c,2)) { goto L_801D1714; } // 801D16F8
  c->lr=0x801D1700u; f_8006592C(c); // 801D16FC
  c->r[4]=0u+0x00000006u; // 801D1700
  c->r[5]=0u+0x00000000u; // 801D1704
  c->r[6]=0u+0xFFFFFFFFu; // 801D1708
  c->r[7]=0u+0xFFFFFFFFu; // 801D170C
  c->lr=0x801D1714u; f_80048F20(c); // 801D1710
L_801D1714:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1714
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1718
  c->lr=c->r[0]; // 801D171C
  c->r[1]=c->r[1]+0x00000010u; // 801D1720
  return; // 801D1724
}

// fn_801D1728
void f_801D1728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1728
  c->r[0]=c->lr; // 801D172C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1730
  c->r[4]=R32(c->r[3]+0x00000010u); // 801D1734
  c->lr=0x801D173Cu; f_801D1570(c); // 801D1738
  cmps(c,0,(int32_t)c->r[3],0); // 801D173C
  if (!crb(c,2)) { goto L_801D175C; } // 801D1740
  c->lr=0x801D1748u; f_8006592C(c); // 801D1744
  c->r[4]=0u+0x00000006u; // 801D1748
  c->r[5]=0u+0x00000000u; // 801D174C
  c->r[6]=0u+0xFFFFFFFFu; // 801D1750
  c->r[7]=0u+0xFFFFFFFFu; // 801D1754
  c->lr=0x801D175Cu; f_80048F20(c); // 801D1758
L_801D175C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D175C
  c->lr=c->r[0]; // 801D1760
  c->r[1]=c->r[1]+0x00000010u; // 801D1764
  return; // 801D1768
}

// fn_801D176C
void f_801D176C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D176C
  c->r[0]=c->lr; // 801D1770
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1778
  c->r[31]=c->r[3]|c->r[3]; // 801D177C
  c->lr=0x801D1784u; f_801D1728(c); // 801D1780
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D1784
  c->r[3]=c->r[3]+0x00000001u; // 801D1788
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801D178C
  c->r[4]=0u+0x00000000u; // 801D1790
  c->r[5]=R32(c->r[31]+0x00000010u); // 801D1794
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D1798
  c->lr=0x801D17A0u; f_800EEE08(c); // 801D179C
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801D17A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D17A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D17A8
  c->lr=c->r[0]; // 801D17AC
  c->r[1]=c->r[1]+0x00000010u; // 801D17B0
  return; // 801D17B4
}

// fn_801D17B8
void f_801D17B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D17B8
  c->r[0]=c->lr; // 801D17BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D17C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D17C4
  c->r[31]=c->r[3]|c->r[3]; // 801D17C8
  c->lr=0x801D17D0u; f_801D1728(c); // 801D17CC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D17D0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D17D4
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801D17D8
  c->r[4]=0u+0x00000000u; // 801D17DC
  c->r[5]=R32(c->r[31]+0x00000010u); // 801D17E0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D17E4
  c->lr=0x801D17ECu; f_800EEE08(c); // 801D17E8
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801D17EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D17F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D17F4
  c->lr=c->r[0]; // 801D17F8
  c->r[1]=c->r[1]+0x00000010u; // 801D17FC
  return; // 801D1800
}

// fn_801D1804
void f_801D1804(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D1804
  return; // 801D1808
}

// fn_801D180C
void f_801D180C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801D180C
  return; // 801D1810
}

// fn_801D1814
void f_801D1814(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 801D1814
  return; // 801D1818
}

// fn_801D181C
void f_801D181C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D181C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D1820
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D1824
  return; // 801D1828
}

// fn_801D182C
void f_801D182C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D182C
  c->r[0]=c->lr; // 801D1830
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1838
  c->r[31]=c->r[3]|c->r[3]; // 801D183C
  c->lr=0x801D1844u; f_801D1588(c); // 801D1840
  c->r[3]=R32(c->r[31]+0x00000014u); // 801D1844
  c->r[3]=c->r[3]+0x00000001u; // 801D1848
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D184C
  c->r[4]=0u+0x00000000u; // 801D1850
  c->r[5]=R32(c->r[31]+0x00000018u); // 801D1854
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D1858
  c->lr=0x801D1860u; f_800EEE08(c); // 801D185C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D1860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1864
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1868
  c->lr=c->r[0]; // 801D186C
  c->r[1]=c->r[1]+0x00000010u; // 801D1870
  return; // 801D1874
}

// fn_801D1878
void f_801D1878(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1878
  c->r[0]=c->lr; // 801D187C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1880
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1884
  c->r[31]=c->r[3]|c->r[3]; // 801D1888
  c->lr=0x801D1890u; f_801D1588(c); // 801D188C
  c->r[3]=R32(c->r[31]+0x00000014u); // 801D1890
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D1894
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D1898
  c->r[4]=0u+0x00000000u; // 801D189C
  c->r[5]=R32(c->r[31]+0x00000018u); // 801D18A0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D18A4
  c->lr=0x801D18ACu; f_800EEE08(c); // 801D18A8
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D18AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D18B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D18B4
  c->lr=c->r[0]; // 801D18B8
  c->r[1]=c->r[1]+0x00000010u; // 801D18BC
  return; // 801D18C0
}

// fn_801D18C4
void f_801D18C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 801D18C4
  return; // 801D18C8
}

// fn_801D18CC
void f_801D18CC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 801D18CC
  return; // 801D18D0
}

// fn_801D18D4
void f_801D18D4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 801D18D4
  return; // 801D18D8
}

// fn_801D18DC
void f_801D18DC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000018u,c->r[4]); // 801D18DC
  return; // 801D18E0
}

// fn_801D18E4
void f_801D18E4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D18E4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D18E8
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D18EC
  return; // 801D18F0
}

// fn_801D18F4
void f_801D18F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D18F4
  c->r[0]=c->lr; // 801D18F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D18FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1900
  c->r[31]=c->r[3]|c->r[3]; // 801D1904
  c->lr=0x801D190Cu; f_801D4A74(c); // 801D1908
  c->lr=0x801D1910u; f_801D4FB8(c); // 801D190C
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 801D1910
  c->r[4]=R32(c->r[31]+0x00000020u); // 801D1914
  c->r[0]=c->r[5]+0x00000001u; // 801D1918
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801D191C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[0]); // 801D1920
  cmps(c,0,(int32_t)c->r[0],0); // 801D1924
  if (!crb(c,1)) { goto L_801D1934; } // 801D1928
  c->r[3]=c->r[4]|c->r[4]; // 801D192C
  goto L_801D1944; // 801D1930
L_801D1934:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801D1934
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 801D1938
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801D193C
  c->r[3]=c->r[3]-c->r[0]; // 801D1940
L_801D1944:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1944
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1948
  c->lr=c->r[0]; // 801D194C
  c->r[1]=c->r[1]+0x00000010u; // 801D1950
  return; // 801D1954
}

// fn_801D1958
void f_801D1958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1958
  c->r[0]=c->lr; // 801D195C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1960
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1964
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1968
  c->r[30]=c->r[3]|c->r[3]; // 801D196C
  c->lr=0x801D1974u; f_801D18F4(c); // 801D1970
  c->r[31]=c->r[3]|c->r[3]; // 801D1974
  c->r[3]=c->r[30]|c->r[30]; // 801D1978
  c->lr=0x801D1980u; f_801D16D0(c); // 801D197C
  c->r[3]=R32(c->r[30]+0x00000028u); // 801D1980
  c->r[3]=c->r[3]+0x00000001u; // 801D1984
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D1988
  c->r[4]=0u+0x00000000u; // 801D198C
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801D1990
  c->lr=0x801D1998u; f_800EEE08(c); // 801D1994
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D1998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D199C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D19A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D19A4
  c->lr=c->r[0]; // 801D19A8
  c->r[1]=c->r[1]+0x00000010u; // 801D19AC
  return; // 801D19B0
}

// fn_801D19B4
void f_801D19B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D19B4
  c->r[0]=c->lr; // 801D19B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D19BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D19C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D19C4
  c->r[30]=c->r[3]|c->r[3]; // 801D19C8
  c->lr=0x801D19D0u; f_801D18F4(c); // 801D19CC
  c->r[31]=c->r[3]|c->r[3]; // 801D19D0
  c->r[3]=c->r[30]|c->r[30]; // 801D19D4
  c->lr=0x801D19DCu; f_801D16D0(c); // 801D19D8
  c->r[3]=R32(c->r[30]+0x00000028u); // 801D19DC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D19E0
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D19E4
  c->r[4]=0u+0x00000000u; // 801D19E8
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801D19EC
  c->lr=0x801D19F4u; f_800EEE08(c); // 801D19F0
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D19F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D19F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D19FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1A00
  c->lr=c->r[0]; // 801D1A04
  c->r[1]=c->r[1]+0x00000010u; // 801D1A08
  return; // 801D1A0C
}

// fn_801D1A10
void f_801D1A10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1A10
  c->r[0]=c->lr; // 801D1A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1A18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1A1C
  c->r[31]=c->r[3]|c->r[3]; // 801D1A20
  c->lr=0x801D1A28u; f_801D18F4(c); // 801D1A24
  c->r[0]=R32(c->r[31]+0x00000028u); // 801D1A28
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D1A2C
  if (crb(c,0)) { goto L_801D1A3C; } // 801D1A30
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D1A34
  W32(c->r[31]+0x00000028u,c->r[0]); // 801D1A38
L_801D1A3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1A40
  c->lr=c->r[0]; // 801D1A44
  c->r[1]=c->r[1]+0x00000010u; // 801D1A48
  return; // 801D1A4C
}

// fn_801D1A50
void f_801D1A50(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000028u); // 801D1A50
  return; // 801D1A54
}

// fn_801D1A58
void f_801D1A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1A58
  c->r[0]=c->lr; // 801D1A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1A64
  c->r[31]=c->r[3]|c->r[3]; // 801D1A68
  c->lr=0x801D1A70u; f_801D168C(c); // 801D1A6C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801D1A70
  c->r[3]=c->r[3]+0x00000001u; // 801D1A74
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D1A78
  c->r[4]=0u+0x00000000u; // 801D1A7C
  c->r[5]=R32(c->r[31]+0x00000024u); // 801D1A80
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D1A84
  c->lr=0x801D1A8Cu; f_800EEE08(c); // 801D1A88
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D1A8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1A90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1A94
  c->lr=c->r[0]; // 801D1A98
  c->r[1]=c->r[1]+0x00000010u; // 801D1A9C
  return; // 801D1AA0
}

// fn_801D1AA4
void f_801D1AA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1AA4
  c->r[0]=c->lr; // 801D1AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1AAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1AB0
  c->r[31]=c->r[3]|c->r[3]; // 801D1AB4
  c->lr=0x801D1ABCu; f_801D168C(c); // 801D1AB8
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801D1ABC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D1AC0
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D1AC4
  c->r[4]=0u+0x00000000u; // 801D1AC8
  c->r[5]=R32(c->r[31]+0x00000024u); // 801D1ACC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D1AD0
  c->lr=0x801D1AD8u; f_800EEE08(c); // 801D1AD4
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D1AD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1ADC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1AE0
  c->lr=c->r[0]; // 801D1AE4
  c->r[1]=c->r[1]+0x00000010u; // 801D1AE8
  return; // 801D1AEC
}

// fn_801D1AF0
void f_801D1AF0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 801D1AF0
  return; // 801D1AF4
}

// fn_801D1AF8
void f_801D1AF8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000020u,c->r[4]); // 801D1AF8
  return; // 801D1AFC
}

// fn_801D1B00
void f_801D1B00(Ctx* __restrict c) {
  W32(c->r[3]+0x00000024u,c->r[4]); // 801D1B00
  return; // 801D1B04
}

// fn_801D1B08
void f_801D1B08(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D1B08
  W32(c->r[3]+0x00000020u,c->r[0]); // 801D1B0C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801D1B10
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D1B14
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801D1B18
  return; // 801D1B1C
}

// fn_801D1B20
void f_801D1B20(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D1B20
  return; // 801D1B24
}

// fn_801D1B28
void f_801D1B28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1B28
  c->r[0]=c->lr; // 801D1B2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1B30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1B34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1B38
  c->r[30]=c->r[3]|c->r[3]; // 801D1B3C
  c->r[31]=c->r[4]|c->r[4]; // 801D1B40
  c->lr=0x801D1B48u; f_80111CF0(c); // 801D1B44
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B48
  if (!crb(c,2)) { goto L_801D1B64; } // 801D1B4C
  c->lr=0x801D1B54u; f_8007B524(c); // 801D1B50
  c->r[4]=c->r[31]|c->r[31]; // 801D1B54
  c->r[5]=R32(c->r[30]+0x00000004u); // 801D1B58
  c->r[6]=0u+0xFFFFFFFFu; // 801D1B5C
  c->lr=0x801D1B64u; f_800A4C50(c); // 801D1B60
L_801D1B64:;
  c->r[3]=0u+0x00000001u; // 801D1B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1B68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D1B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1B70
  c->lr=c->r[0]; // 801D1B74
  c->r[1]=c->r[1]+0x00000010u; // 801D1B78
  return; // 801D1B7C
}

// fn_801D1B80
void f_801D1B80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1B80
  c->r[0]=c->lr; // 801D1B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1B8C
  c->r[31]=c->r[3]|c->r[3]; // 801D1B90
  c->r[4]=0u+0x00000000u; // 801D1B94
  c->r[5]=0u+0x00000004u; // 801D1B98
  c->lr=0x801D1BA0u; f_800060B8(c); // 801D1B9C
  c->r[0]=0u+0x00000000u; // 801D1BA0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801D1BA4
  c->r[0]=0u+0xFFFFFFFFu; // 801D1BA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D1BAC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D1BB0
  c->r[3]=c->r[31]|c->r[31]; // 801D1BB4
  c->lr=0x801D1BBCu; f_801D181C(c); // 801D1BB8
  c->r[3]=c->r[31]|c->r[31]; // 801D1BBC
  c->lr=0x801D1BC4u; f_801D18E4(c); // 801D1BC0
  c->r[3]=c->r[31]|c->r[31]; // 801D1BC4
  c->lr=0x801D1BCCu; f_801D1B08(c); // 801D1BC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1BD0
  c->lr=c->r[0]; // 801D1BD4
  c->r[1]=c->r[1]+0x00000010u; // 801D1BD8
  return; // 801D1BDC
}

// fn_801D1BE0
void f_801D1BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1BE0
  c->r[0]=c->lr; // 801D1BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1BE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1BEC
  c->lr=0x801D1BF4u; f_80111CF0(c); // 801D1BF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D1BF4
  if (!crb(c,2)) { goto L_801D1C34; } // 801D1BF8
  c->lr=0x801D1C00u; f_801D4A74(c); // 801D1BFC
  c->lr=0x801D1C04u; f_801D4E60(c); // 801D1C00
  c->r[31]=0u+0x00000000u; // 801D1C04
L_801D1C08:;
  c->lr=0x801D1C0Cu; f_8007B524(c); // 801D1C08
  c->r[4]=c->r[31]|c->r[31]; // 801D1C0C
  c->lr=0x801D1C14u; f_800A3F90(c); // 801D1C10
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C14
  if (crb(c,2)) { goto L_801D1C28; } // 801D1C18
  c->lr=0x801D1C20u; f_801D4A74(c); // 801D1C1C
  c->r[4]=c->r[31]|c->r[31]; // 801D1C20
  c->lr=0x801D1C28u; f_801D4E48(c); // 801D1C24
L_801D1C28:;
  c->r[31]=c->r[31]+0x00000001u; // 801D1C28
  cmps(c,0,(int32_t)c->r[31],10); // 801D1C2C
  if (crb(c,0)) { IRQCHK(c); goto L_801D1C08; } // 801D1C30
L_801D1C34:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1C34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1C38
  c->lr=c->r[0]; // 801D1C3C
  c->r[1]=c->r[1]+0x00000010u; // 801D1C40
  return; // 801D1C44
}

// fn_801D1C48
void f_801D1C48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1C48
  c->r[0]=c->lr; // 801D1C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1C50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1C54
  c->r[31]=c->r[3]|c->r[3]; // 801D1C58
  c->lr=0x801D1C60u; f_801D4A74(c); // 801D1C5C
  c->lr=0x801D1C64u; f_801D4E74(c); // 801D1C60
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C64
  if (crb(c,2)) { goto L_801D1C88; } // 801D1C68
  c->lr=0x801D1C70u; f_8007B524(c); // 801D1C6C
  c->r[4]=0u+0x00000091u; // 801D1C70
  c->lr=0x801D1C78u; f_800A2EF0(c); // 801D1C74
  c->r[4]=c->r[3]|c->r[3]; // 801D1C78
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C7C
  if (!crb(c,2)) { goto L_801D1CA0; } // 801D1C80
  goto L_801D1CAC; // 801D1C84
L_801D1C88:;
  c->lr=0x801D1C8Cu; f_8007B524(c); // 801D1C88
  c->r[4]=0u+0x0000004Bu; // 801D1C8C
  c->lr=0x801D1C94u; f_800A2EF0(c); // 801D1C90
  c->r[4]=c->r[3]|c->r[3]; // 801D1C94
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C98
  if (crb(c,2)) { goto L_801D1CAC; } // 801D1C9C
L_801D1CA0:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801D1CA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1CA4
  c->lr=0x801D1CACu; f_801313D4(c); // 801D1CA8
L_801D1CAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1CAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1CB0
  c->lr=c->r[0]; // 801D1CB4
  c->r[1]=c->r[1]+0x00000010u; // 801D1CB8
  return; // 801D1CBC
}

// fn_801D1CC0
void f_801D1CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1CC0
  c->r[0]=c->lr; // 801D1CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1CC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1CCC
  c->r[31]=c->r[3]|c->r[3]; // 801D1CD0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D1CD4
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D1CD8
  c->ctr=c->r[12]; // 801D1CDC
  if (true) { c->lr=0x801D1CE4u; dispatch(c,c->ctr); } // 801D1CE0
  c->r[3]=c->r[31]|c->r[31]; // 801D1CE4
  c->lr=0x801D1CECu; f_801D1C48(c); // 801D1CE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1CEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1CF0
  c->lr=c->r[0]; // 801D1CF4
  c->r[1]=c->r[1]+0x00000010u; // 801D1CF8
  return; // 801D1CFC
}

// fn_801D1D00
void f_801D1D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1D00
  c->r[0]=c->lr; // 801D1D04
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D1D08
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801D1D0C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801D1D10
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801D1D14
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801D1D18
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801D1D1C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801D1D20
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D1D24
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D1D28
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D1D2C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D1D30
  c->r[28]=c->r[3]|c->r[3]; // 801D1D34
  c->lr=0x801D1D3Cu; f_8011B41C(c); // 801D1D38
  c->r[4]=0u+0x00000002u; // 801D1D3C
  c->lr=0x801D1D44u; f_8011B814(c); // 801D1D40
  c->r[30]=c->r[3]|c->r[3]; // 801D1D44
  c->lr=0x801D1D4Cu; f_8011B41C(c); // 801D1D48
  c->r[4]=0u+0x0000000Au; // 801D1D4C
  c->lr=0x801D1D54u; f_8011B814(c); // 801D1D50
  c->r[29]=c->r[3]|c->r[3]; // 801D1D54
  c->r[3]=c->r[30]|c->r[30]; // 801D1D58
  c->lr=0x801D1D60u; f_8014EF14(c); // 801D1D5C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1D60
  c->lr=0x801D1D68u; f_80117D04(c); // 801D1D64
  c->r[3]=c->r[30]|c->r[30]; // 801D1D68
  c->lr=0x801D1D70u; f_8014EF2C(c); // 801D1D6C
  c->f[30]=c->f[1]; // 801D1D70
  c->r[3]=c->r[30]|c->r[30]; // 801D1D74
  c->lr=0x801D1D7Cu; f_8014EF24(c); // 801D1D78
  c->f[29]=c->f[1]; // 801D1D7C
  c->r[3]=c->r[30]|c->r[30]; // 801D1D80
  c->lr=0x801D1D88u; f_8014EF1C(c); // 801D1D84
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1D88
  c->f[2]=c->f[29]; // 801D1D8C
  c->f[3]=c->f[30]; // 801D1D90
  c->lr=0x801D1D98u; f_80114AB8(c); // 801D1D94
  c->r[3]=c->r[30]|c->r[30]; // 801D1D98
  c->lr=0x801D1DA0u; f_8014EF34(c); // 801D1D9C
  c->f[29]=c->f[1]; // 801D1DA0
  c->r[3]=c->r[30]|c->r[30]; // 801D1DA4
  c->lr=0x801D1DACu; f_8014EF34(c); // 801D1DA8
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1DAC
  c->f[2]=c->f[29]; // 801D1DB0
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D1DB4
  c->lr=0x801D1DBCu; f_80114AA8(c); // 801D1DB8
  c->r[3]=c->r[29]|c->r[29]; // 801D1DBC
  c->lr=0x801D1DC4u; f_8012FCB0(c); // 801D1DC0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1DC4
  c->lr=0x801D1DCCu; f_8012FA30(c); // 801D1DC8
  c->r[3]=c->r[29]|c->r[29]; // 801D1DCC
  c->lr=0x801D1DD4u; f_8012FCB8(c); // 801D1DD0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1DD4
  c->lr=0x801D1DDCu; f_8012FA38(c); // 801D1DD8
  c->r[3]=c->r[29]|c->r[29]; // 801D1DDC
  c->lr=0x801D1DE4u; f_8012FCC8(c); // 801D1DE0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1DE4
  c->lr=0x801D1DECu; f_8012FA4C(c); // 801D1DE8
  c->r[3]=c->r[29]|c->r[29]; // 801D1DEC
  c->lr=0x801D1DF4u; f_8012FCD0(c); // 801D1DF0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1DF4
  c->lr=0x801D1DFCu; f_8012FA54(c); // 801D1DF8
  c->r[3]=c->r[29]|c->r[29]; // 801D1DFC
  c->lr=0x801D1E04u; f_8012FCE8(c); // 801D1E00
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E04
  c->lr=0x801D1E0Cu; f_8012FA6C(c); // 801D1E08
  c->r[3]=c->r[29]|c->r[29]; // 801D1E0C
  c->lr=0x801D1E14u; f_8012FCD0(c); // 801D1E10
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E14
  c->lr=0x801D1E1Cu; f_8012FA74(c); // 801D1E18
  c->r[3]=c->r[29]|c->r[29]; // 801D1E1C
  c->lr=0x801D1E24u; f_8012FCE0(c); // 801D1E20
  c->r[4]=c->r[3]|c->r[3]; // 801D1E24
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E28
  c->lr=0x801D1E30u; f_8012F918(c); // 801D1E2C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E30
  c->lr=0x801D1E38u; f_8012AA10(c); // 801D1E34
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1E38
  c->lr=0x801D1E40u; f_80110580(c); // 801D1E3C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E40
  c->lr=0x801D1E48u; f_8012AA08(c); // 801D1E44
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1E48
  c->lr=0x801D1E50u; f_80110580(c); // 801D1E4C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E50
  c->lr=0x801D1E58u; f_8012AA10(c); // 801D1E54
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1E58
  c->lr=0x801D1E60u; f_80110588(c); // 801D1E5C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D1E60
  c->lr=0x801D1E68u; f_8012AA08(c); // 801D1E64
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1E68
  c->lr=0x801D1E70u; f_80110588(c); // 801D1E6C
  c->r[3]=c->r[1]+0x00000008u; // 801D1E70
  c->lr=0x801D1E78u; f_8004B0A4(c); // 801D1E74
  c->r[3]=c->r[29]|c->r[29]; // 801D1E78
  c->r[4]=c->r[1]+0x00000008u; // 801D1E7C
  c->lr=0x801D1E84u; f_801D4A28(c); // 801D1E80
  c->r[3]=c->r[30]|c->r[30]; // 801D1E84
  c->lr=0x801D1E8Cu; f_8014EF94(c); // 801D1E88
  c->f[29]=c->f[1]; // 801D1E8C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1E90
  c->lr=0x801D1E98u; f_801D48F8(c); // 801D1E94
  c->f[1]=c->f[29]; // 801D1E98
  c->lr=0x801D1EA0u; f_80117D04(c); // 801D1E9C
  c->r[3]=c->r[30]|c->r[30]; // 801D1EA0
  c->lr=0x801D1EA8u; f_8014EFAC(c); // 801D1EA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1EA8
  c->f[29]=c->ps1[29]=S(c->f[0]+c->f[1]); // 801D1EAC
  c->r[3]=c->r[30]|c->r[30]; // 801D1EB0
  c->lr=0x801D1EB8u; f_8014EFA4(c); // 801D1EB4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1EB8
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801D1EBC
  c->r[3]=c->r[30]|c->r[30]; // 801D1EC0
  c->lr=0x801D1EC8u; f_8014EF9C(c); // 801D1EC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1EC8
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 801D1ECC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1ED0
  c->lr=0x801D1ED8u; f_801D48F8(c); // 801D1ED4
  c->f[1]=c->f[30]; // 801D1ED8
  c->f[2]=c->f[31]; // 801D1EDC
  c->f[3]=c->f[29]; // 801D1EE0
  c->lr=0x801D1EE8u; f_80114AB8(c); // 801D1EE4
  c->r[3]=c->r[30]|c->r[30]; // 801D1EE8
  c->lr=0x801D1EF0u; f_8014EFB4(c); // 801D1EEC
  c->f[31]=c->f[1]; // 801D1EF0
  c->r[3]=c->r[30]|c->r[30]; // 801D1EF4
  c->lr=0x801D1EFCu; f_8014EFB4(c); // 801D1EF8
  c->f[30]=c->f[1]; // 801D1EFC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1F00
  c->lr=0x801D1F08u; f_801D48F8(c); // 801D1F04
  c->f[1]=c->f[30]; // 801D1F08
  c->f[2]=c->f[31]; // 801D1F0C
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D1F10
  c->lr=0x801D1F18u; f_80114AA8(c); // 801D1F14
  c->r[3]=c->r[29]|c->r[29]; // 801D1F18
  c->lr=0x801D1F20u; f_8012FCB0(c); // 801D1F1C
  c->f[30]=c->f[1]; // 801D1F20
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1F24
  c->lr=0x801D1F2Cu; f_801D48F8(c); // 801D1F28
  c->f[1]=c->f[30]; // 801D1F2C
  c->lr=0x801D1F34u; f_8012FA30(c); // 801D1F30
  c->r[3]=c->r[29]|c->r[29]; // 801D1F34
  c->lr=0x801D1F3Cu; f_8012FCB8(c); // 801D1F38
  c->f[30]=c->f[1]; // 801D1F3C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1F40
  c->lr=0x801D1F48u; f_801D48F8(c); // 801D1F44
  c->f[1]=c->f[30]; // 801D1F48
  c->lr=0x801D1F50u; f_8012FA38(c); // 801D1F4C
  c->r[3]=c->r[29]|c->r[29]; // 801D1F50
  c->lr=0x801D1F58u; f_8012FCC8(c); // 801D1F54
  c->f[30]=c->f[1]; // 801D1F58
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1F5C
  c->lr=0x801D1F64u; f_801D48F8(c); // 801D1F60
  c->f[1]=c->f[30]; // 801D1F64
  c->lr=0x801D1F6Cu; f_8012FA4C(c); // 801D1F68
  c->r[3]=c->r[29]|c->r[29]; // 801D1F6C
  c->lr=0x801D1F74u; f_8012FCD0(c); // 801D1F70
  c->f[30]=c->f[1]; // 801D1F74
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1F78
  c->lr=0x801D1F80u; f_801D48F8(c); // 801D1F7C
  c->f[1]=c->f[30]; // 801D1F80
  c->lr=0x801D1F88u; f_8012FA54(c); // 801D1F84
  c->r[3]=c->r[29]|c->r[29]; // 801D1F88
  c->lr=0x801D1F90u; f_8012FCE8(c); // 801D1F8C
  c->f[30]=c->f[1]; // 801D1F90
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1F94
  c->lr=0x801D1F9Cu; f_801D48F8(c); // 801D1F98
  c->f[1]=c->f[30]; // 801D1F9C
  c->lr=0x801D1FA4u; f_8012FA6C(c); // 801D1FA0
  c->r[3]=c->r[29]|c->r[29]; // 801D1FA4
  c->lr=0x801D1FACu; f_8012FCD0(c); // 801D1FA8
  c->f[30]=c->f[1]; // 801D1FAC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1FB0
  c->lr=0x801D1FB8u; f_801D48F8(c); // 801D1FB4
  c->f[1]=c->f[30]; // 801D1FB8
  c->lr=0x801D1FC0u; f_8012FA74(c); // 801D1FBC
  c->r[3]=c->r[29]|c->r[29]; // 801D1FC0
  c->lr=0x801D1FC8u; f_8012FCE0(c); // 801D1FC4
  c->r[31]=c->r[3]|c->r[3]; // 801D1FC8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1FCC
  c->lr=0x801D1FD4u; f_801D48F8(c); // 801D1FD0
  c->r[4]=c->r[31]|c->r[31]; // 801D1FD4
  c->lr=0x801D1FDCu; f_8012F918(c); // 801D1FD8
  c->r[3]=c->r[29]|c->r[29]; // 801D1FDC
  c->lr=0x801D1FE4u; f_8012FCF8(c); // 801D1FE0
  c->f[30]=c->f[1]; // 801D1FE4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D1FE8
  c->lr=0x801D1FF0u; f_801D48F8(c); // 801D1FEC
  c->lr=0x801D1FF4u; f_8012AA10(c); // 801D1FF0
  c->f[1]=c->f[30]; // 801D1FF4
  c->lr=0x801D1FFCu; f_80110580(c); // 801D1FF8
  c->r[3]=c->r[29]|c->r[29]; // 801D1FFC
  c->lr=0x801D2004u; f_8012FD00(c); // 801D2000
  c->f[30]=c->f[1]; // 801D2004
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2008
  c->lr=0x801D2010u; f_801D48F8(c); // 801D200C
  c->lr=0x801D2014u; f_8012AA08(c); // 801D2010
  c->f[1]=c->f[30]; // 801D2014
  c->lr=0x801D201Cu; f_80110580(c); // 801D2018
  c->r[3]=c->r[29]|c->r[29]; // 801D201C
  c->lr=0x801D2024u; f_8012FD08(c); // 801D2020
  c->f[30]=c->f[1]; // 801D2024
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2028
  c->lr=0x801D2030u; f_801D48F8(c); // 801D202C
  c->lr=0x801D2034u; f_8012AA10(c); // 801D2030
  c->f[1]=c->f[30]; // 801D2034
  c->lr=0x801D203Cu; f_80110588(c); // 801D2038
  c->r[3]=c->r[29]|c->r[29]; // 801D203C
  c->lr=0x801D2044u; f_8012FD10(c); // 801D2040
  c->f[30]=c->f[1]; // 801D2044
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2048
  c->lr=0x801D2050u; f_801D48F8(c); // 801D204C
  c->lr=0x801D2054u; f_8012AA08(c); // 801D2050
  c->f[1]=c->f[30]; // 801D2054
  c->lr=0x801D205Cu; f_80110588(c); // 801D2058
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D205C
  c->lr=0x801D2064u; f_801D48F8(c); // 801D2060
  c->r[4]=0u+0x00000000u; // 801D2064
  c->r[5]=0u+0x00000003u; // 801D2068
  c->lr=0x801D2070u; f_8012E640(c); // 801D206C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2070
  c->lr=0x801D2078u; f_801D48F8(c); // 801D2074
  c->r[4]=0u+0x00000006u; // 801D2078
  c->r[5]=0u+0x00000004u; // 801D207C
  c->lr=0x801D2084u; f_8012E640(c); // 801D2080
  c->r[3]=c->r[29]|c->r[29]; // 801D2084
  c->r[4]=c->r[1]+0x00000008u; // 801D2088
  c->lr=0x801D2090u; f_801D4A40(c); // 801D208C
  c->r[3]=c->r[30]|c->r[30]; // 801D2090
  c->lr=0x801D2098u; f_8014EFD4(c); // 801D2094
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2098
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801D209C
  c->r[3]=c->r[30]|c->r[30]; // 801D20A0
  c->lr=0x801D20A8u; f_8014EFCC(c); // 801D20A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D20A8
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 801D20AC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D20B0
  c->lr=0x801D20B8u; f_801D48F0(c); // 801D20B4
  c->f[1]=c->f[30]; // 801D20B8
  c->f[2]=c->f[31]; // 801D20BC
  c->lr=0x801D20C4u; f_801313A0(c); // 801D20C0
  c->r[3]=c->r[30]|c->r[30]; // 801D20C4
  c->lr=0x801D20CCu; f_8014EFDC(c); // 801D20C8
  c->f[31]=c->f[1]; // 801D20CC
  c->r[3]=c->r[30]|c->r[30]; // 801D20D0
  c->lr=0x801D20D8u; f_8014EFDC(c); // 801D20D4
  c->f[30]=c->f[1]; // 801D20D8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D20DC
  c->lr=0x801D20E4u; f_801D48F0(c); // 801D20E0
  c->f[1]=c->f[30]; // 801D20E4
  c->f[2]=c->f[31]; // 801D20E8
  c->lr=0x801D20F0u; f_801313AC(c); // 801D20EC
  c->r[3]=c->r[29]|c->r[29]; // 801D20F0
  c->lr=0x801D20F8u; f_8012FCB0(c); // 801D20F4
  c->f[30]=c->f[1]; // 801D20F8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D20FC
  c->lr=0x801D2104u; f_801D48F0(c); // 801D2100
  c->f[1]=c->f[30]; // 801D2104
  c->lr=0x801D210Cu; f_80131C38(c); // 801D2108
  c->r[3]=c->r[29]|c->r[29]; // 801D210C
  c->lr=0x801D2114u; f_8012FCB8(c); // 801D2110
  c->f[30]=c->f[1]; // 801D2114
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2118
  c->lr=0x801D2120u; f_801D48F0(c); // 801D211C
  c->f[1]=c->f[30]; // 801D2120
  c->lr=0x801D2128u; f_80131C40(c); // 801D2124
  c->r[3]=c->r[29]|c->r[29]; // 801D2128
  c->lr=0x801D2130u; f_8012FCC8(c); // 801D212C
  c->f[30]=c->f[1]; // 801D2130
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2134
  c->lr=0x801D213Cu; f_801D48F0(c); // 801D2138
  c->f[1]=c->f[30]; // 801D213C
  c->lr=0x801D2144u; f_80131C54(c); // 801D2140
  c->r[3]=c->r[29]|c->r[29]; // 801D2144
  c->lr=0x801D214Cu; f_8012FCD0(c); // 801D2148
  c->f[30]=c->f[1]; // 801D214C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2150
  c->lr=0x801D2158u; f_801D48F0(c); // 801D2154
  c->f[1]=c->f[30]; // 801D2158
  c->lr=0x801D2160u; f_80131C5C(c); // 801D215C
  c->r[3]=c->r[29]|c->r[29]; // 801D2160
  c->lr=0x801D2168u; f_8012FCE8(c); // 801D2164
  c->f[30]=c->f[1]; // 801D2168
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D216C
  c->lr=0x801D2174u; f_801D48F0(c); // 801D2170
  c->f[1]=c->f[30]; // 801D2174
  c->lr=0x801D217Cu; f_80131C64(c); // 801D2178
  c->r[3]=c->r[29]|c->r[29]; // 801D217C
  c->lr=0x801D2184u; f_8012FCD0(c); // 801D2180
  c->f[30]=c->f[1]; // 801D2184
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2188
  c->lr=0x801D2190u; f_801D48F0(c); // 801D218C
  c->f[1]=c->f[30]; // 801D2190
  c->lr=0x801D2198u; f_80131C6C(c); // 801D2194
  c->r[3]=c->r[29]|c->r[29]; // 801D2198
  c->lr=0x801D21A0u; f_8012FCE0(c); // 801D219C
  c->r[31]=c->r[3]|c->r[3]; // 801D21A0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D21A4
  c->lr=0x801D21ACu; f_801D48F0(c); // 801D21A8
  c->r[4]=c->r[31]|c->r[31]; // 801D21AC
  c->lr=0x801D21B4u; f_80131B68(c); // 801D21B0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D21B4
  c->lr=0x801D21BCu; f_801D48F0(c); // 801D21B8
  c->r[4]=c->r[13]+0xFFFF9BE8u; // 801D21BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D21C0
  c->lr=0x801D21C8u; f_801313D4(c); // 801D21C4
  c->r[3]=c->r[29]|c->r[29]; // 801D21C8
  c->lr=0x801D21D0u; f_8012FCF8(c); // 801D21CC
  c->f[30]=c->f[1]; // 801D21D0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D21D4
  c->lr=0x801D21DCu; f_801D48F0(c); // 801D21D8
  c->lr=0x801D21E0u; f_80137E4C(c); // 801D21DC
  c->f[1]=c->f[30]; // 801D21E0
  c->lr=0x801D21E8u; f_80110580(c); // 801D21E4
  c->r[3]=c->r[29]|c->r[29]; // 801D21E8
  c->lr=0x801D21F0u; f_8012FD00(c); // 801D21EC
  c->f[30]=c->f[1]; // 801D21F0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D21F4
  c->lr=0x801D21FCu; f_801D48F0(c); // 801D21F8
  c->lr=0x801D2200u; f_80137E44(c); // 801D21FC
  c->f[1]=c->f[30]; // 801D2200
  c->lr=0x801D2208u; f_80110580(c); // 801D2204
  c->r[3]=c->r[29]|c->r[29]; // 801D2208
  c->lr=0x801D2210u; f_8012FD08(c); // 801D220C
  c->f[30]=c->f[1]; // 801D2210
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2214
  c->lr=0x801D221Cu; f_801D48F0(c); // 801D2218
  c->lr=0x801D2220u; f_80137E4C(c); // 801D221C
  c->f[1]=c->f[30]; // 801D2220
  c->lr=0x801D2228u; f_80110588(c); // 801D2224
  c->r[3]=c->r[29]|c->r[29]; // 801D2228
  c->lr=0x801D2230u; f_8012FD10(c); // 801D222C
  c->f[30]=c->f[1]; // 801D2230
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2234
  c->lr=0x801D223Cu; f_801D48F0(c); // 801D2238
  c->lr=0x801D2240u; f_80137E44(c); // 801D223C
  c->f[1]=c->f[30]; // 801D2240
  c->lr=0x801D2248u; f_80110588(c); // 801D2244
  c->r[3]=c->r[29]|c->r[29]; // 801D2248
  c->r[4]=c->r[1]+0x00000008u; // 801D224C
  c->lr=0x801D2254u; f_801D4A58(c); // 801D2250
  c->r[3]=c->r[30]|c->r[30]; // 801D2254
  c->lr=0x801D225Cu; f_8014EFD4(c); // 801D2258
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D225C
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801D2260
  c->r[3]=c->r[30]|c->r[30]; // 801D2264
  c->lr=0x801D226Cu; f_8014EFCC(c); // 801D2268
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D226C
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 801D2270
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2274
  c->lr=0x801D227Cu; f_801D48E8(c); // 801D2278
  c->f[1]=c->f[30]; // 801D227C
  c->f[2]=c->f[31]; // 801D2280
  c->lr=0x801D2288u; f_801313A0(c); // 801D2284
  c->r[3]=c->r[30]|c->r[30]; // 801D2288
  c->lr=0x801D2290u; f_8014EFDC(c); // 801D228C
  c->f[30]=c->f[1]; // 801D2290
  c->r[3]=c->r[30]|c->r[30]; // 801D2294
  c->lr=0x801D229Cu; f_8014EFDC(c); // 801D2298
  c->f[31]=c->f[1]; // 801D229C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D22A0
  c->lr=0x801D22A8u; f_801D48E8(c); // 801D22A4
  c->f[1]=c->f[31]; // 801D22A8
  c->f[2]=c->f[30]; // 801D22AC
  c->lr=0x801D22B4u; f_801313AC(c); // 801D22B0
  c->r[3]=c->r[29]|c->r[29]; // 801D22B4
  c->lr=0x801D22BCu; f_8012FCB0(c); // 801D22B8
  c->f[31]=c->f[1]; // 801D22BC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D22C0
  c->lr=0x801D22C8u; f_801D48E8(c); // 801D22C4
  c->f[1]=c->f[31]; // 801D22C8
  c->lr=0x801D22D0u; f_80131C38(c); // 801D22CC
  c->r[3]=c->r[29]|c->r[29]; // 801D22D0
  c->lr=0x801D22D8u; f_8012FCB8(c); // 801D22D4
  c->f[31]=c->f[1]; // 801D22D8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D22DC
  c->lr=0x801D22E4u; f_801D48E8(c); // 801D22E0
  c->f[1]=c->f[31]; // 801D22E4
  c->lr=0x801D22ECu; f_80131C40(c); // 801D22E8
  c->r[3]=c->r[29]|c->r[29]; // 801D22EC
  c->lr=0x801D22F4u; f_8012FCC8(c); // 801D22F0
  c->f[31]=c->f[1]; // 801D22F4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D22F8
  c->lr=0x801D2300u; f_801D48E8(c); // 801D22FC
  c->f[1]=c->f[31]; // 801D2300
  c->lr=0x801D2308u; f_80131C54(c); // 801D2304
  c->r[3]=c->r[29]|c->r[29]; // 801D2308
  c->lr=0x801D2310u; f_8012FCD0(c); // 801D230C
  c->f[31]=c->f[1]; // 801D2310
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2314
  c->lr=0x801D231Cu; f_801D48E8(c); // 801D2318
  c->f[1]=c->f[31]; // 801D231C
  c->lr=0x801D2324u; f_80131C5C(c); // 801D2320
  c->r[3]=c->r[29]|c->r[29]; // 801D2324
  c->lr=0x801D232Cu; f_8012FCE8(c); // 801D2328
  c->f[31]=c->f[1]; // 801D232C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2330
  c->lr=0x801D2338u; f_801D48E8(c); // 801D2334
  c->f[1]=c->f[31]; // 801D2338
  c->lr=0x801D2340u; f_80131C64(c); // 801D233C
  c->r[3]=c->r[29]|c->r[29]; // 801D2340
  c->lr=0x801D2348u; f_8012FCD0(c); // 801D2344
  c->f[31]=c->f[1]; // 801D2348
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D234C
  c->lr=0x801D2354u; f_801D48E8(c); // 801D2350
  c->f[1]=c->f[31]; // 801D2354
  c->lr=0x801D235Cu; f_80131C6C(c); // 801D2358
  c->r[3]=c->r[29]|c->r[29]; // 801D235C
  c->lr=0x801D2364u; f_8012FCE0(c); // 801D2360
  c->r[31]=c->r[3]|c->r[3]; // 801D2364
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2368
  c->lr=0x801D2370u; f_801D48E8(c); // 801D236C
  c->r[4]=c->r[31]|c->r[31]; // 801D2370
  c->lr=0x801D2378u; f_80131B68(c); // 801D2374
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2378
  c->lr=0x801D2380u; f_801D48E8(c); // 801D237C
  c->r[4]=c->r[13]+0xFFFF9BE8u; // 801D2380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2384
  c->lr=0x801D238Cu; f_801313D4(c); // 801D2388
  c->r[3]=c->r[29]|c->r[29]; // 801D238C
  c->lr=0x801D2394u; f_8012FCF8(c); // 801D2390
  c->f[31]=c->f[1]; // 801D2394
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D2398
  c->lr=0x801D23A0u; f_801D48E8(c); // 801D239C
  c->lr=0x801D23A4u; f_80137E4C(c); // 801D23A0
  c->f[1]=c->f[31]; // 801D23A4
  c->lr=0x801D23ACu; f_80110580(c); // 801D23A8
  c->r[3]=c->r[29]|c->r[29]; // 801D23AC
  c->lr=0x801D23B4u; f_8012FD00(c); // 801D23B0
  c->f[31]=c->f[1]; // 801D23B4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D23B8
  c->lr=0x801D23C0u; f_801D48E8(c); // 801D23BC
  c->lr=0x801D23C4u; f_80137E44(c); // 801D23C0
  c->f[1]=c->f[31]; // 801D23C4
  c->lr=0x801D23CCu; f_80110580(c); // 801D23C8
  c->r[3]=c->r[29]|c->r[29]; // 801D23CC
  c->lr=0x801D23D4u; f_8012FD08(c); // 801D23D0
  c->f[31]=c->f[1]; // 801D23D4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D23D8
  c->lr=0x801D23E0u; f_801D48E8(c); // 801D23DC
  c->lr=0x801D23E4u; f_80137E4C(c); // 801D23E0
  c->f[1]=c->f[31]; // 801D23E4
  c->lr=0x801D23ECu; f_80110588(c); // 801D23E8
  c->r[3]=c->r[29]|c->r[29]; // 801D23EC
  c->lr=0x801D23F4u; f_8012FD10(c); // 801D23F0
  c->f[31]=c->f[1]; // 801D23F4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801D23F8
  c->lr=0x801D2400u; f_801D48E8(c); // 801D23FC
  c->lr=0x801D2404u; f_80137E44(c); // 801D2400
  c->f[1]=c->f[31]; // 801D2404
  c->lr=0x801D240Cu; f_80110588(c); // 801D2408
  c->r[0]=0u+0x00000058u; // 801D240C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D2410
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801D2414
  c->r[0]=0u+0x00000048u; // 801D2418
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801D241C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801D2420
  c->r[0]=0u+0x00000038u; // 801D2424
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801D2428
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801D242C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D2430
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D2434
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D2438
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D243C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D2440
  c->lr=c->r[0]; // 801D2444
  c->r[1]=c->r[1]+0x00000060u; // 801D2448
  return; // 801D244C
}

// fn_801D2450
void f_801D2450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2450
  c->r[0]=c->lr; // 801D2454
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D2458
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801D245C
  W32(c->r[1]+0x00000118u,c->r[30]); // 801D2460
  W32(c->r[1]+0x00000114u,c->r[29]); // 801D2464
  c->r[29]=c->r[3]|c->r[3]; // 801D2468
  c->lr=0x801D2470u; f_801D4A74(c); // 801D246C
  c->lr=0x801D2474u; f_801D4F68(c); // 801D2470
  c->r[31]=c->r[3]|c->r[3]; // 801D2474
  cmps(c,0,(int32_t)c->r[3],0); // 801D2478
  if (crb(c,2)) { goto L_801D250C; } // 801D247C
  c->lr=0x801D2484u; f_8007B524(c); // 801D2480
  c->r[4]=0u+0x0000008Du; // 801D2484
  c->lr=0x801D248Cu; f_800A2EF0(c); // 801D2488
  c->r[30]=c->r[3]|c->r[3]; // 801D248C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2490
  if (crb(c,2)) { goto L_801D250C; } // 801D2494
  c->lr=0x801D249Cu; f_801D4A74(c); // 801D2498
  c->lr=0x801D24A0u; f_801D4F78(c); // 801D249C
  c->r[6]=c->r[3]|c->r[3]; // 801D24A0
  c->r[3]=c->r[1]+0x00000008u; // 801D24A4
  c->r[4]=c->r[30]|c->r[30]; // 801D24A8
  c->r[5]=c->r[31]|c->r[31]; // 801D24AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D24B0
  c->lr=0x801D24B8u; f_802E7CC4(c); // 801D24B4
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801D24B8
  c->lr=0x801D24C0u; f_801D48F0(c); // 801D24BC
  c->r[4]=c->r[1]+0x00000008u; // 801D24C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D24C4
  c->lr=0x801D24CCu; f_801313D4(c); // 801D24C8
  c->lr=0x801D24D0u; f_8007B524(c); // 801D24CC
  c->r[4]=0u+0x0000008Eu; // 801D24D0
  c->lr=0x801D24D8u; f_800A2EF0(c); // 801D24D4
  c->r[31]=c->r[3]|c->r[3]; // 801D24D8
  c->lr=0x801D24E0u; f_801D4A74(c); // 801D24DC
  c->lr=0x801D24E4u; f_801D4F88(c); // 801D24E0
  c->r[5]=c->r[3]|c->r[3]; // 801D24E4
  c->r[3]=c->r[1]+0x00000008u; // 801D24E8
  c->r[4]=c->r[31]|c->r[31]; // 801D24EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D24F0
  c->lr=0x801D24F8u; f_802E7CC4(c); // 801D24F4
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801D24F8
  c->lr=0x801D2500u; f_801D48E8(c); // 801D24FC
  c->r[4]=c->r[1]+0x00000008u; // 801D2500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2504
  c->lr=0x801D250Cu; f_801313D4(c); // 801D2508
L_801D250C:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D250C
  c->r[30]=R32(c->r[1]+0x00000118u); // 801D2510
  c->r[29]=R32(c->r[1]+0x00000114u); // 801D2514
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D2518
  c->lr=c->r[0]; // 801D251C
  c->r[1]=c->r[1]+0x00000120u; // 801D2520
  return; // 801D2524
}

// fn_801D2528
void f_801D2528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2528
  c->r[0]=c->lr; // 801D252C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2530
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2534
  c->r[31]=c->r[3]|c->r[3]; // 801D2538
  c->lr=0x801D2540u; f_801C671C(c); // 801D253C
  c->r[3]=0u+0x80470000u; // 801D2540
  c->r[0]=c->r[3]+0x00002D70u; // 801D2544
  W32(c->r[31]+0x00000058u,c->r[0]); // 801D2548
  c->r[0]=0u+0x00000000u; // 801D254C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801D2550
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801D2554
  c->r[3]=c->r[31]|c->r[31]; // 801D2558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D255C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2560
  c->lr=c->r[0]; // 801D2564
  c->r[1]=c->r[1]+0x00000010u; // 801D2568
  return; // 801D256C
}

// fn_801D2570
void f_801D2570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2570
  c->r[0]=c->lr; // 801D2574
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D2578
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801D257C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801D2580
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801D2584
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801D2588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D258C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2590
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2594
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D2598
  c->r[28]=c->r[3]|c->r[3]; // 801D259C
  c->lr=0x801D25A4u; f_8011B41C(c); // 801D25A0
  c->r[4]=0u+0x00000002u; // 801D25A4
  c->lr=0x801D25ACu; f_8011B814(c); // 801D25A8
  c->r[31]=c->r[3]|c->r[3]; // 801D25AC
  c->lr=0x801D25B4u; f_8011B41C(c); // 801D25B0
  c->r[4]=0u+0x0000000Au; // 801D25B4
  c->lr=0x801D25BCu; f_8011B814(c); // 801D25B8
  c->r[30]=c->r[3]|c->r[3]; // 801D25BC
  c->r[29]=0u+0x00000000u; // 801D25C0
L_801D25C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D25C4
  c->lr=0x801D25CCu; f_8014EA84(c); // 801D25C8
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D25CC
  c->lr=0x801D25D4u; f_80117D04(c); // 801D25D0
  c->r[3]=c->r[31]|c->r[31]; // 801D25D4
  c->lr=0x801D25DCu; f_8014EA9C(c); // 801D25D8
  c->f[30]=c->f[1]; // 801D25DC
  c->r[3]=c->r[31]|c->r[31]; // 801D25E0
  c->lr=0x801D25E8u; f_8014EA94(c); // 801D25E4
  c->f[31]=c->f[1]; // 801D25E8
  c->r[3]=c->r[31]|c->r[31]; // 801D25EC
  c->lr=0x801D25F4u; f_8014EA8C(c); // 801D25F0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D25F4
  c->f[2]=c->f[31]; // 801D25F8
  c->f[3]=c->f[30]; // 801D25FC
  c->lr=0x801D2604u; f_80114AB8(c); // 801D2600
  c->r[3]=c->r[31]|c->r[31]; // 801D2604
  c->lr=0x801D260Cu; f_8014EAA4(c); // 801D2608
  c->f[31]=c->f[1]; // 801D260C
  c->r[3]=c->r[31]|c->r[31]; // 801D2610
  c->lr=0x801D2618u; f_8014EAA4(c); // 801D2614
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2618
  c->f[2]=c->f[31]; // 801D261C
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D2620
  c->lr=0x801D2628u; f_80114AA8(c); // 801D2624
  c->r[3]=c->r[30]|c->r[30]; // 801D2628
  c->lr=0x801D2630u; f_8012FCB0(c); // 801D262C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2630
  c->lr=0x801D2638u; f_8012FA30(c); // 801D2634
  c->r[3]=c->r[30]|c->r[30]; // 801D2638
  c->lr=0x801D2640u; f_8012FCB8(c); // 801D263C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2640
  c->lr=0x801D2648u; f_8012FA38(c); // 801D2644
  c->r[3]=c->r[30]|c->r[30]; // 801D2648
  c->lr=0x801D2650u; f_8012FCC8(c); // 801D264C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2650
  c->lr=0x801D2658u; f_8012FA4C(c); // 801D2654
  c->r[3]=c->r[30]|c->r[30]; // 801D2658
  c->lr=0x801D2660u; f_8012FCD0(c); // 801D265C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2660
  c->lr=0x801D2668u; f_8012FA54(c); // 801D2664
  c->r[3]=c->r[30]|c->r[30]; // 801D2668
  c->lr=0x801D2670u; f_8012FCE8(c); // 801D266C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2670
  c->lr=0x801D2678u; f_8012FA6C(c); // 801D2674
  c->r[3]=c->r[30]|c->r[30]; // 801D2678
  c->lr=0x801D2680u; f_8012FCD0(c); // 801D267C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2680
  c->lr=0x801D2688u; f_8012FA74(c); // 801D2684
  c->r[3]=c->r[30]|c->r[30]; // 801D2688
  c->lr=0x801D2690u; f_8012FCE0(c); // 801D268C
  c->r[4]=c->r[3]|c->r[3]; // 801D2690
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D2694
  c->lr=0x801D269Cu; f_8012F918(c); // 801D2698
  c->r[3]=c->r[30]|c->r[30]; // 801D269C
  c->lr=0x801D26A4u; f_8012FCF8(c); // 801D26A0
  c->f[31]=c->f[1]; // 801D26A4
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D26A8
  c->lr=0x801D26B0u; f_8012AA10(c); // 801D26AC
  c->f[1]=c->f[31]; // 801D26B0
  c->lr=0x801D26B8u; f_80110580(c); // 801D26B4
  c->r[3]=c->r[30]|c->r[30]; // 801D26B8
  c->lr=0x801D26C0u; f_8012FD00(c); // 801D26BC
  c->f[31]=c->f[1]; // 801D26C0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D26C4
  c->lr=0x801D26CCu; f_8012AA08(c); // 801D26C8
  c->f[1]=c->f[31]; // 801D26CC
  c->lr=0x801D26D4u; f_80110580(c); // 801D26D0
  c->r[3]=c->r[30]|c->r[30]; // 801D26D4
  c->lr=0x801D26DCu; f_8012FD08(c); // 801D26D8
  c->f[31]=c->f[1]; // 801D26DC
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D26E0
  c->lr=0x801D26E8u; f_8012AA10(c); // 801D26E4
  c->f[1]=c->f[31]; // 801D26E8
  c->lr=0x801D26F0u; f_80110588(c); // 801D26EC
  c->r[3]=c->r[30]|c->r[30]; // 801D26F0
  c->lr=0x801D26F8u; f_8012FD10(c); // 801D26F4
  c->f[31]=c->f[1]; // 801D26F8
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801D26FC
  c->lr=0x801D2704u; f_8012AA08(c); // 801D2700
  c->f[1]=c->f[31]; // 801D2704
  c->lr=0x801D270Cu; f_80110588(c); // 801D2708
  c->r[28]=c->r[28]+0x00000004u; // 801D270C
  c->r[29]=c->r[29]+0x00000001u; // 801D2710
  cmps(c,0,(int32_t)c->r[29],5); // 801D2714
  if (crb(c,0)) { IRQCHK(c); goto L_801D25C4; } // 801D2718
  c->r[0]=0u+0x00000038u; // 801D271C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D2720
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801D2724
  c->r[0]=0u+0x00000028u; // 801D2728
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801D272C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801D2730
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2734
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2738
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D273C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D2740
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2744
  c->lr=c->r[0]; // 801D2748
  c->r[1]=c->r[1]+0x00000040u; // 801D274C
  return; // 801D2750
}

// fn_801D2754
void f_801D2754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2754
  c->r[0]=c->lr; // 801D2758
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D275C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D2760
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D2764
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2768
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D276C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2770
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D2774
  c->r[28]=c->r[3]|c->r[3]; // 801D2778
  c->lr=0x801D2780u; f_8011B41C(c); // 801D277C
  c->r[4]=0u+0x00000002u; // 801D2780
  c->lr=0x801D2788u; f_8011B814(c); // 801D2784
  c->r[30]=c->r[3]|c->r[3]; // 801D2788
  c->lr=0x801D2790u; f_8011B41C(c); // 801D278C
  c->r[4]=0u+0x0000000Au; // 801D2790
  c->lr=0x801D2798u; f_8011B814(c); // 801D2794
  c->r[29]=c->r[3]|c->r[3]; // 801D2798
  c->r[31]=0u+0x00000000u; // 801D279C
L_801D27A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801D27A0
  c->lr=0x801D27A8u; f_8014EAC4(c); // 801D27A4
  c->f[31]=c->f[1]; // 801D27A8
  c->r[3]=c->r[30]|c->r[30]; // 801D27AC
  c->lr=0x801D27B4u; f_8014EABC(c); // 801D27B0
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D27B4
  c->f[2]=c->f[31]; // 801D27B8
  c->lr=0x801D27C0u; f_801313A0(c); // 801D27BC
  c->r[3]=c->r[30]|c->r[30]; // 801D27C0
  c->lr=0x801D27C8u; f_8014EACC(c); // 801D27C4
  c->f[31]=c->f[1]; // 801D27C8
  c->r[3]=c->r[30]|c->r[30]; // 801D27CC
  c->lr=0x801D27D4u; f_8014EACC(c); // 801D27D0
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D27D4
  c->f[2]=c->f[31]; // 801D27D8
  c->lr=0x801D27E0u; f_801313AC(c); // 801D27DC
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D27E0
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D27E4
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D27E8
  c->lr=0x801D27F0u; f_80131588(c); // 801D27EC
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D27F0
  c->lr=0x801D27F8u; f_8014CB20(c); // 801D27F4
  c->r[3]=c->r[29]|c->r[29]; // 801D27F8
  c->lr=0x801D2800u; f_8012FCB0(c); // 801D27FC
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2800
  c->lr=0x801D2808u; f_80131C38(c); // 801D2804
  c->r[3]=c->r[29]|c->r[29]; // 801D2808
  c->lr=0x801D2810u; f_8012FCB8(c); // 801D280C
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2810
  c->lr=0x801D2818u; f_80131C40(c); // 801D2814
  c->r[3]=c->r[29]|c->r[29]; // 801D2818
  c->lr=0x801D2820u; f_8012FCC8(c); // 801D281C
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2820
  c->lr=0x801D2828u; f_80131C54(c); // 801D2824
  c->r[3]=c->r[29]|c->r[29]; // 801D2828
  c->lr=0x801D2830u; f_8012FCD0(c); // 801D282C
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2830
  c->lr=0x801D2838u; f_80131C5C(c); // 801D2834
  c->r[3]=c->r[29]|c->r[29]; // 801D2838
  c->lr=0x801D2840u; f_8012FCE8(c); // 801D283C
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2840
  c->lr=0x801D2848u; f_80131C64(c); // 801D2844
  c->r[3]=c->r[29]|c->r[29]; // 801D2848
  c->lr=0x801D2850u; f_8012FCD0(c); // 801D284C
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2850
  c->lr=0x801D2858u; f_80131C6C(c); // 801D2854
  c->r[3]=c->r[29]|c->r[29]; // 801D2858
  c->lr=0x801D2860u; f_8012FCE0(c); // 801D285C
  c->r[4]=c->r[3]|c->r[3]; // 801D2860
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2864
  c->lr=0x801D286Cu; f_80131B68(c); // 801D2868
  c->r[3]=c->r[29]|c->r[29]; // 801D286C
  c->lr=0x801D2874u; f_8012FCF8(c); // 801D2870
  c->f[31]=c->f[1]; // 801D2874
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2878
  c->lr=0x801D2880u; f_80137E4C(c); // 801D287C
  c->f[1]=c->f[31]; // 801D2880
  c->lr=0x801D2888u; f_80110580(c); // 801D2884
  c->r[3]=c->r[29]|c->r[29]; // 801D2888
  c->lr=0x801D2890u; f_8012FD00(c); // 801D288C
  c->f[31]=c->f[1]; // 801D2890
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D2894
  c->lr=0x801D289Cu; f_80137E44(c); // 801D2898
  c->f[1]=c->f[31]; // 801D289C
  c->lr=0x801D28A4u; f_80110580(c); // 801D28A0
  c->r[3]=c->r[29]|c->r[29]; // 801D28A4
  c->lr=0x801D28ACu; f_8012FD08(c); // 801D28A8
  c->f[31]=c->f[1]; // 801D28AC
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D28B0
  c->lr=0x801D28B8u; f_80137E4C(c); // 801D28B4
  c->f[1]=c->f[31]; // 801D28B8
  c->lr=0x801D28C0u; f_80110588(c); // 801D28BC
  c->r[3]=c->r[29]|c->r[29]; // 801D28C0
  c->lr=0x801D28C8u; f_8012FD10(c); // 801D28C4
  c->f[31]=c->f[1]; // 801D28C8
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801D28CC
  c->lr=0x801D28D4u; f_80137E44(c); // 801D28D0
  c->f[1]=c->f[31]; // 801D28D4
  c->lr=0x801D28DCu; f_80110588(c); // 801D28D8
  c->r[28]=c->r[28]+0x00000004u; // 801D28DC
  c->r[31]=c->r[31]+0x00000001u; // 801D28E0
  cmps(c,0,(int32_t)c->r[31],5); // 801D28E4
  if (crb(c,0)) { IRQCHK(c); goto L_801D27A0; } // 801D28E8
  c->r[0]=0u+0x00000028u; // 801D28EC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D28F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D28F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D28F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D28FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2900
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D2904
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2908
  c->lr=c->r[0]; // 801D290C
  c->r[1]=c->r[1]+0x00000030u; // 801D2910
  return; // 801D2914
}

// fn_801D2918
void f_801D2918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2918
  c->r[0]=c->lr; // 801D291C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2924
  c->r[31]=c->r[3]|c->r[3]; // 801D2928
  c->lr=0x801D2930u; f_801D2570(c); // 801D292C
  c->r[3]=c->r[31]|c->r[31]; // 801D2930
  c->lr=0x801D2938u; f_801D2754(c); // 801D2934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2938
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D293C
  c->lr=c->r[0]; // 801D2940
  c->r[1]=c->r[1]+0x00000010u; // 801D2944
  return; // 801D2948
}

// fn_801D294C
void f_801D294C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D294C
  c->r[0]=c->lr; // 801D2950
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2954
  c->lr=0x801D295Cu; f_8011B41C(c); // 801D2958
  c->r[4]=0u+0x00000002u; // 801D295C
  c->lr=0x801D2964u; f_8011B814(c); // 801D2960
  c->lr=0x801D2968u; f_8014EAE4(c); // 801D2964
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2968
  c->lr=c->r[0]; // 801D296C
  c->r[1]=c->r[1]+0x00000010u; // 801D2970
  return; // 801D2974
}

// fn_801D2978
void f_801D2978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2978
  c->r[0]=c->lr; // 801D297C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2980
  c->lr=0x801D2988u; f_8011B41C(c); // 801D2984
  c->r[4]=0u+0x00000002u; // 801D2988
  c->lr=0x801D2990u; f_8011B814(c); // 801D298C
  c->lr=0x801D2994u; f_8014EAEC(c); // 801D2990
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2994
  c->lr=c->r[0]; // 801D2998
  c->r[1]=c->r[1]+0x00000010u; // 801D299C
  return; // 801D29A0
}

// fn_801D29A4
void f_801D29A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D29A4
  c->r[0]=c->lr; // 801D29A8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D29AC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801D29B0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801D29B4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801D29B8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801D29BC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801D29C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801D29C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801D29C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801D29CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801D29D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801D29D4
  c->r[11]=c->r[1]+0x00000030u; // 801D29D8
  c->lr=0x801D29E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D29DC
  c->r[26]=c->r[3]|c->r[3]; // 801D29E0
  c->lr=0x801D29E8u; f_8011B41C(c); // 801D29E4
  c->r[4]=0u+0x00000002u; // 801D29E8
  c->lr=0x801D29F0u; f_8011B814(c); // 801D29EC
  c->r[29]=c->r[3]|c->r[3]; // 801D29F0
  c->lr=0x801D29F8u; f_8011B41C(c); // 801D29F4
  c->r[4]=0u+0x0000000Au; // 801D29F8
  c->lr=0x801D2A00u; f_8011B814(c); // 801D29FC
  c->r[28]=c->r[3]|c->r[3]; // 801D2A00
  c->r[27]=0u+0x00000000u; // 801D2A04
  c->r[30]=c->r[26]|c->r[26]; // 801D2A08
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[30]=RF64(ea);} // 801D2A0C
  c->r[31]=0u+0x43300000u; // 801D2A10
  goto L_801D2B08; // 801D2A14
L_801D2A18:;
  c->r[3]=c->r[28]|c->r[28]; // 801D2A18
  c->lr=0x801D2A20u; f_8012FCB0(c); // 801D2A1C
  c->f[29]=c->f[1]; // 801D2A20
  c->r[3]=c->r[29]|c->r[29]; // 801D2A24
  c->lr=0x801D2A2Cu; f_8014E9DC(c); // 801D2A28
  c->r[0]=c->r[27]^0x80000000u; // 801D2A2C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D2A30
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D2A34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D2A38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801D2A3C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801D2A40
  c->r[3]=c->r[28]|c->r[28]; // 801D2A44
  c->lr=0x801D2A4Cu; f_8012FCB8(c); // 801D2A48
  c->f[28]=c->ps1[28]=S(c->f[1]+c->f[31]); // 801D2A4C
  c->r[3]=c->r[28]|c->r[28]; // 801D2A50
  c->lr=0x801D2A58u; f_8012FCC8(c); // 801D2A54
  c->f[27]=c->f[1]; // 801D2A58
  c->r[3]=c->r[29]|c->r[29]; // 801D2A5C
  c->lr=0x801D2A64u; f_8014E9DC(c); // 801D2A60
  c->r[0]=c->r[27]^0x80000000u; // 801D2A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2A68
  W32(c->r[1]+0x00000010u,c->r[31]); // 801D2A6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D2A70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801D2A74
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801D2A78
  c->r[3]=c->r[28]|c->r[28]; // 801D2A7C
  c->lr=0x801D2A84u; f_8012FCD0(c); // 801D2A80
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[31]); // 801D2A84
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D2A88
  c->f[1]=c->f[29]; // 801D2A8C
  c->lr=0x801D2A94u; f_8012FA30(c); // 801D2A90
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D2A94
  c->f[1]=c->f[28]; // 801D2A98
  c->lr=0x801D2AA0u; f_8012FA38(c); // 801D2A9C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D2AA0
  c->f[1]=c->f[27]; // 801D2AA4
  c->lr=0x801D2AACu; f_8012FA4C(c); // 801D2AA8
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D2AAC
  c->f[1]=c->f[31]; // 801D2AB0
  c->lr=0x801D2AB8u; f_8012FA54(c); // 801D2AB4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D2AB8
  c->r[4]=0u+0x00000001u; // 801D2ABC
  c->lr=0x801D2AC4u; f_8012F918(c); // 801D2AC0
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D2AC4
  c->f[1]=c->f[29]; // 801D2AC8
  c->lr=0x801D2AD0u; f_80131C38(c); // 801D2ACC
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D2AD0
  c->f[1]=c->f[28]; // 801D2AD4
  c->lr=0x801D2ADCu; f_80131C40(c); // 801D2AD8
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D2ADC
  c->f[1]=c->f[27]; // 801D2AE0
  c->lr=0x801D2AE8u; f_80131C54(c); // 801D2AE4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D2AE8
  c->f[1]=c->f[31]; // 801D2AEC
  c->lr=0x801D2AF4u; f_80131C5C(c); // 801D2AF0
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D2AF4
  c->r[4]=0u+0x00000001u; // 801D2AF8
  c->lr=0x801D2B00u; f_80131B68(c); // 801D2AFC
  c->r[30]=c->r[30]+0x00000004u; // 801D2B00
  c->r[27]=c->r[27]+0x00000001u; // 801D2B04
L_801D2B08:;
  c->r[0]=R32(c->r[26]+0x000000E8u); // 801D2B08
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D2B0C
  if (crb(c,0)) { IRQCHK(c); goto L_801D2A18; } // 801D2B10
  c->r[0]=0u+0x00000078u; // 801D2B14
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D2B18
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801D2B1C
  c->r[0]=0u+0x00000068u; // 801D2B20
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801D2B24
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801D2B28
  c->r[0]=0u+0x00000058u; // 801D2B2C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801D2B30
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801D2B34
  c->r[0]=0u+0x00000048u; // 801D2B38
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 801D2B3C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801D2B40
  c->r[0]=0u+0x00000038u; // 801D2B44
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 801D2B48
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801D2B4C
  c->r[11]=c->r[1]+0x00000030u; // 801D2B50
  c->lr=0x801D2B58u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2B54
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D2B58
  c->lr=c->r[0]; // 801D2B5C
  c->r[1]=c->r[1]+0x00000080u; // 801D2B60
  return; // 801D2B64
}

// fn_801D2B68
void f_801D2B68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B68
  c->r[0]=c->lr; // 801D2B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2B74
  c->r[31]=c->r[3]|c->r[3]; // 801D2B78
  c->r[0]=0u+0x00000001u; // 801D2B7C
  W32(c->r[3]+0x000000ECu,c->r[0]); // 801D2B80
  c->lr=0x801D2B88u; f_8007B524(c); // 801D2B84
  c->r[4]=0u+0x00000035u; // 801D2B88
  c->lr=0x801D2B90u; f_800A2EF0(c); // 801D2B8C
  c->r[4]=c->r[3]|c->r[3]; // 801D2B90
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801D2B94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2B98
  c->lr=0x801D2BA0u; f_801313D4(c); // 801D2B9C
  c->lr=0x801D2BA4u; f_8007B524(c); // 801D2BA0
  c->r[4]=0u+0x0000004Cu; // 801D2BA4
  c->lr=0x801D2BACu; f_800A2EF0(c); // 801D2BA8
  c->r[4]=c->r[3]|c->r[3]; // 801D2BAC
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801D2BB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2BB4
  c->lr=0x801D2BBCu; f_801313D4(c); // 801D2BB8
  c->lr=0x801D2BC0u; f_8007B524(c); // 801D2BBC
  c->r[4]=0u+0x0000001Eu; // 801D2BC0
  c->lr=0x801D2BC8u; f_800A2EF0(c); // 801D2BC4
  c->r[4]=c->r[3]|c->r[3]; // 801D2BC8
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801D2BCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2BD0
  c->lr=0x801D2BD8u; f_801313D4(c); // 801D2BD4
  c->r[0]=0u+0x00000003u; // 801D2BD8
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801D2BDC
  c->r[3]=c->r[31]|c->r[31]; // 801D2BE0
  c->lr=0x801D2BE8u; f_801D29A4(c); // 801D2BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2BE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2BEC
  c->lr=c->r[0]; // 801D2BF0
  c->r[1]=c->r[1]+0x00000010u; // 801D2BF4
  return; // 801D2BF8
}

// fn_801D2BFC
void f_801D2BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2BFC
  c->r[0]=c->lr; // 801D2C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2C04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2C08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2C0C
  c->r[30]=c->r[3]|c->r[3]; // 801D2C10
  c->r[31]=0u+0x00000002u; // 801D2C14
  W32(c->r[3]+0x000000ECu,c->r[31]); // 801D2C18
  c->lr=0x801D2C20u; f_8007B524(c); // 801D2C1C
  c->r[4]=0u+0x0000004Cu; // 801D2C20
  c->lr=0x801D2C28u; f_800A2EF0(c); // 801D2C24
  c->r[4]=c->r[3]|c->r[3]; // 801D2C28
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D2C2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2C30
  c->lr=0x801D2C38u; f_801313D4(c); // 801D2C34
  c->lr=0x801D2C3Cu; f_8007B524(c); // 801D2C38
  c->r[4]=0u+0x0000001Eu; // 801D2C3C
  c->lr=0x801D2C44u; f_800A2EF0(c); // 801D2C40
  c->r[4]=c->r[3]|c->r[3]; // 801D2C44
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801D2C48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2C4C
  c->lr=0x801D2C54u; f_801313D4(c); // 801D2C50
  W32(c->r[30]+0x000000E8u,c->r[31]); // 801D2C54
  c->r[3]=c->r[30]|c->r[30]; // 801D2C58
  c->lr=0x801D2C60u; f_801D29A4(c); // 801D2C5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2C60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2C64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2C68
  c->lr=c->r[0]; // 801D2C6C
  c->r[1]=c->r[1]+0x00000010u; // 801D2C70
  return; // 801D2C74
}

// fn_801D2C78
void f_801D2C78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2C78
  c->r[0]=c->lr; // 801D2C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2C80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2C84
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2C88
  c->r[30]=c->r[3]|c->r[3]; // 801D2C8C
  c->lr=0x801D2C94u; f_801D4A74(c); // 801D2C90
  c->lr=0x801D2C98u; f_801D4E84(c); // 801D2C94
  c->r[31]=c->r[3]|c->r[3]; // 801D2C98
  c->lr=0x801D2CA0u; f_801D4A74(c); // 801D2C9C
  c->lr=0x801D2CA4u; f_801D4E74(c); // 801D2CA0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2CA4
  if (crb(c,2)) { goto L_801D2CB8; } // 801D2CA8
  c->r[3]=c->r[30]|c->r[30]; // 801D2CAC
  c->lr=0x801D2CB4u; f_801D2BFC(c); // 801D2CB0
  goto L_801D2CD8; // 801D2CB4
L_801D2CB8:;
  c->r[0]=R32(c->r[30]+0x000000F0u); // 801D2CB8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801D2CBC
  if (!crb(c,2)) { goto L_801D2CD0; } // 801D2CC0
  c->r[3]=c->r[30]|c->r[30]; // 801D2CC4
  c->lr=0x801D2CCCu; f_801D2BFC(c); // 801D2CC8
  goto L_801D2CD8; // 801D2CCC
L_801D2CD0:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2CD0
  c->lr=0x801D2CD8u; f_801D2B68(c); // 801D2CD4
L_801D2CD8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2CD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2CDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2CE0
  c->lr=c->r[0]; // 801D2CE4
  c->r[1]=c->r[1]+0x00000010u; // 801D2CE8
  return; // 801D2CEC
}

// fn_801D2CF0
void f_801D2CF0(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F0u,c->r[4]); // 801D2CF0
  return; // 801D2CF4
}

// fn_801D2CF8
void f_801D2CF8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801D2CF8
  return; // 801D2CFC
}

// fn_801D2D00
void f_801D2D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2D00
  c->r[0]=c->lr; // 801D2D04
  W32(c->r[1]+0x00000134u,c->r[0]); // 801D2D08
  c->r[11]=c->r[1]+0x00000130u; // 801D2D0C
  c->lr=0x801D2D14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2D10
  c->r[27]=c->r[3]|c->r[3]; // 801D2D14
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2D18
  c->r[3]=0u+0x00000000u; // 801D2D1C
  c->r[0]=0u+0x00000020u; // 801D2D20
  c->ctr=c->r[0]; // 801D2D24
L_801D2D28:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D2D28
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D2D2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2D28; } // 801D2D30
  c->lr=0x801D2D38u; f_801D4A74(c); // 801D2D34
  c->lr=0x801D2D3Cu; f_801D5028(c); // 801D2D38
  c->r[30]=c->r[3]|c->r[3]; // 801D2D3C
  c->lr=0x801D2D44u; f_801D4A74(c); // 801D2D40
  c->lr=0x801D2D48u; f_801D5038(c); // 801D2D44
  c->r[31]=c->r[3]|c->r[3]; // 801D2D48
  c->r[29]=c->r[30]-c->r[3]; // 801D2D4C
  c->r[3]=c->r[30]|c->r[30]; // 801D2D50
  c->r[4]=c->r[29]|c->r[29]; // 801D2D54
  c->lr=0x801D2D5Cu; f_80114688(c); // 801D2D58
  c->r[28]=c->r[3]|c->r[3]; // 801D2D5C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2D60
  if (crb(c,2)) { goto L_801D2E14; } // 801D2D64
  cmps(c,0,(int32_t)c->r[31],0); // 801D2D68
  if (!crb(c,2)) { goto L_801D2D94; } // 801D2D6C
  c->lr=0x801D2D74u; f_8007B524(c); // 801D2D70
  c->r[4]=0u+0x00000002u; // 801D2D74
  c->lr=0x801D2D7Cu; f_800A2EF0(c); // 801D2D78
  c->r[4]=c->r[3]|c->r[3]; // 801D2D7C
  c->r[3]=c->r[1]+0x00000010u; // 801D2D80
  c->r[5]=c->r[30]|c->r[30]; // 801D2D84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2D88
  c->lr=0x801D2D90u; f_802E7CC4(c); // 801D2D8C
  goto L_801D2DD8; // 801D2D90
L_801D2D94:;
  if (!crb(c,1)) { goto L_801D2DAC; } // 801D2D94
  c->lr=0x801D2D9Cu; f_8007B524(c); // 801D2D98
  c->r[4]=0u+0x0000002Eu; // 801D2D9C
  c->lr=0x801D2DA4u; f_800A2EF0(c); // 801D2DA0
  c->r[4]=c->r[3]|c->r[3]; // 801D2DA4
  goto L_801D2DBC; // 801D2DA8
L_801D2DAC:;
  c->lr=0x801D2DB0u; f_8007B524(c); // 801D2DAC
  c->r[4]=0u+0x0000002Fu; // 801D2DB0
  c->lr=0x801D2DB8u; f_800A2EF0(c); // 801D2DB4
  c->r[4]=c->r[3]|c->r[3]; // 801D2DB8
L_801D2DBC:;
  c->r[3]=sraw(c,c->r[31],31); // 801D2DBC
  c->r[0]=c->r[3]^c->r[31]; // 801D2DC0
  c->r[6]=c->r[0]-c->r[3]; // 801D2DC4
  c->r[3]=c->r[1]+0x00000010u; // 801D2DC8
  c->r[5]=c->r[29]|c->r[29]; // 801D2DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2DD0
  c->lr=0x801D2DD8u; f_802E7CC4(c); // 801D2DD4
L_801D2DD8:;
  c->r[3]=c->r[1]+0x00000008u; // 801D2DD8
  c->r[4]=c->r[28]|c->r[28]; // 801D2DDC
  c->lr=0x801D2DE4u; f_800549FC(c); // 801D2DE0
  c->r[3]=R32(c->r[27]+0x000000C4u); // 801D2DE4
  c->lr=0x801D2DECu; f_8014CA7C(c); // 801D2DE8
  c->r[4]=c->r[1]+0x00000008u; // 801D2DEC
  c->lr=0x801D2DF4u; f_801313CC(c); // 801D2DF0
  c->r[3]=c->r[1]+0x00000008u; // 801D2DF4
  c->r[4]=0u+0xFFFFFFFFu; // 801D2DF8
  c->lr=0x801D2E00u; f_80047BD4(c); // 801D2DFC
  c->r[3]=R32(c->r[27]+0x000000C4u); // 801D2E00
  c->lr=0x801D2E08u; f_8014CA7C(c); // 801D2E04
  c->r[4]=c->r[1]+0x00000010u; // 801D2E08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2E0C
  c->lr=0x801D2E14u; f_801313D4(c); // 801D2E10
L_801D2E14:;
  c->r[11]=c->r[1]+0x00000130u; // 801D2E14
  c->lr=0x801D2E1Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2E18
  c->r[0]=R32(c->r[1]+0x00000134u); // 801D2E1C
  c->lr=c->r[0]; // 801D2E20
  c->r[1]=c->r[1]+0x00000130u; // 801D2E24
  return; // 801D2E28
}

// fn_801D2E2C
void f_801D2E2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2E2C
  c->r[0]=c->lr; // 801D2E30
  W32(c->r[1]+0x00000134u,c->r[0]); // 801D2E34
  c->r[11]=c->r[1]+0x00000130u; // 801D2E38
  c->lr=0x801D2E40u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2E3C
  c->r[27]=c->r[3]|c->r[3]; // 801D2E40
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2E44
  c->r[3]=0u+0x00000000u; // 801D2E48
  c->r[0]=0u+0x00000020u; // 801D2E4C
  c->ctr=c->r[0]; // 801D2E50
L_801D2E54:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D2E54
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D2E58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2E54; } // 801D2E5C
  c->lr=0x801D2E64u; f_801D4A74(c); // 801D2E60
  c->lr=0x801D2E68u; f_801D5048(c); // 801D2E64
  c->r[30]=c->r[3]|c->r[3]; // 801D2E68
  c->lr=0x801D2E70u; f_801D4A74(c); // 801D2E6C
  c->lr=0x801D2E74u; f_801D5058(c); // 801D2E70
  c->r[31]=c->r[3]|c->r[3]; // 801D2E74
  c->r[29]=c->r[30]-c->r[3]; // 801D2E78
  c->r[3]=c->r[30]|c->r[30]; // 801D2E7C
  c->r[4]=c->r[29]|c->r[29]; // 801D2E80
  c->lr=0x801D2E88u; f_80114688(c); // 801D2E84
  c->r[28]=c->r[3]|c->r[3]; // 801D2E88
  cmps(c,0,(int32_t)c->r[3],0); // 801D2E8C
  if (crb(c,2)) { goto L_801D2F40; } // 801D2E90
  cmps(c,0,(int32_t)c->r[31],0); // 801D2E94
  if (!crb(c,2)) { goto L_801D2EC0; } // 801D2E98
  c->lr=0x801D2EA0u; f_8007B524(c); // 801D2E9C
  c->r[4]=0u+0x00000003u; // 801D2EA0
  c->lr=0x801D2EA8u; f_800A2EF0(c); // 801D2EA4
  c->r[4]=c->r[3]|c->r[3]; // 801D2EA8
  c->r[3]=c->r[1]+0x00000010u; // 801D2EAC
  c->r[5]=c->r[30]|c->r[30]; // 801D2EB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2EB4
  c->lr=0x801D2EBCu; f_802E7CC4(c); // 801D2EB8
  goto L_801D2F04; // 801D2EBC
L_801D2EC0:;
  if (!crb(c,1)) { goto L_801D2ED8; } // 801D2EC0
  c->lr=0x801D2EC8u; f_8007B524(c); // 801D2EC4
  c->r[4]=0u+0x00000030u; // 801D2EC8
  c->lr=0x801D2ED0u; f_800A2EF0(c); // 801D2ECC
  c->r[4]=c->r[3]|c->r[3]; // 801D2ED0
  goto L_801D2EE8; // 801D2ED4
L_801D2ED8:;
  c->lr=0x801D2EDCu; f_8007B524(c); // 801D2ED8
  c->r[4]=0u+0x00000031u; // 801D2EDC
  c->lr=0x801D2EE4u; f_800A2EF0(c); // 801D2EE0
  c->r[4]=c->r[3]|c->r[3]; // 801D2EE4
L_801D2EE8:;
  c->r[3]=sraw(c,c->r[31],31); // 801D2EE8
  c->r[0]=c->r[3]^c->r[31]; // 801D2EEC
  c->r[6]=c->r[0]-c->r[3]; // 801D2EF0
  c->r[3]=c->r[1]+0x00000010u; // 801D2EF4
  c->r[5]=c->r[29]|c->r[29]; // 801D2EF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2EFC
  c->lr=0x801D2F04u; f_802E7CC4(c); // 801D2F00
L_801D2F04:;
  c->r[3]=c->r[1]+0x00000008u; // 801D2F04
  c->r[4]=c->r[28]|c->r[28]; // 801D2F08
  c->lr=0x801D2F10u; f_800549FC(c); // 801D2F0C
  c->r[3]=R32(c->r[27]+0x000000C8u); // 801D2F10
  c->lr=0x801D2F18u; f_8014CA7C(c); // 801D2F14
  c->r[4]=c->r[1]+0x00000008u; // 801D2F18
  c->lr=0x801D2F20u; f_801313CC(c); // 801D2F1C
  c->r[3]=c->r[1]+0x00000008u; // 801D2F20
  c->r[4]=0u+0xFFFFFFFFu; // 801D2F24
  c->lr=0x801D2F2Cu; f_80047BD4(c); // 801D2F28
  c->r[3]=R32(c->r[27]+0x000000C8u); // 801D2F2C
  c->lr=0x801D2F34u; f_8014CA7C(c); // 801D2F30
  c->r[4]=c->r[1]+0x00000010u; // 801D2F34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2F38
  c->lr=0x801D2F40u; f_801313D4(c); // 801D2F3C
L_801D2F40:;
  c->r[11]=c->r[1]+0x00000130u; // 801D2F40
  c->lr=0x801D2F48u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2F44
  c->r[0]=R32(c->r[1]+0x00000134u); // 801D2F48
  c->lr=c->r[0]; // 801D2F4C
  c->r[1]=c->r[1]+0x00000130u; // 801D2F50
  return; // 801D2F54
}

// fn_801D2F58
void f_801D2F58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2F58
  c->r[0]=c->lr; // 801D2F5C
  W32(c->r[1]+0x00000114u,c->r[0]); // 801D2F60
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801D2F64
  W32(c->r[1]+0x00000108u,c->r[30]); // 801D2F68
  c->r[30]=c->r[3]|c->r[3]; // 801D2F6C
  c->r[4]=c->r[1]+0x00000004u; // 801D2F70
  c->r[3]=0u+0x00000000u; // 801D2F74
  c->r[0]=0u+0x00000020u; // 801D2F78
  c->ctr=c->r[0]; // 801D2F7C
L_801D2F80:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D2F80
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D2F84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2F80; } // 801D2F88
  c->lr=0x801D2F90u; f_8007B524(c); // 801D2F8C
  c->r[4]=0u+0x00000004u; // 801D2F90
  c->lr=0x801D2F98u; f_800A2EF0(c); // 801D2F94
  c->r[31]=c->r[3]|c->r[3]; // 801D2F98
  c->lr=0x801D2FA0u; f_801D4A74(c); // 801D2F9C
  c->lr=0x801D2FA4u; f_801D5068(c); // 801D2FA0
  c->r[5]=c->r[3]|c->r[3]; // 801D2FA4
  c->r[3]=c->r[1]+0x00000008u; // 801D2FA8
  c->r[4]=c->r[31]|c->r[31]; // 801D2FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2FB0
  c->lr=0x801D2FB8u; f_802E7CC4(c); // 801D2FB4
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801D2FB8
  c->lr=0x801D2FC0u; f_8014CA7C(c); // 801D2FBC
  c->r[4]=c->r[1]+0x00000008u; // 801D2FC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2FC4
  c->lr=0x801D2FCCu; f_801313D4(c); // 801D2FC8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801D2FCC
  c->r[30]=R32(c->r[1]+0x00000108u); // 801D2FD0
  c->r[0]=R32(c->r[1]+0x00000114u); // 801D2FD4
  c->lr=c->r[0]; // 801D2FD8
  c->r[1]=c->r[1]+0x00000110u; // 801D2FDC
  return; // 801D2FE0
}

// fn_801D2FE4
void f_801D2FE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2FE4
  c->r[0]=c->lr; // 801D2FE8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801D2FEC
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801D2FF0
  W32(c->r[1]+0x00000108u,c->r[30]); // 801D2FF4
  c->r[30]=c->r[3]|c->r[3]; // 801D2FF8
  c->r[4]=c->r[1]+0x00000004u; // 801D2FFC
  c->r[3]=0u+0x00000000u; // 801D3000
  c->r[0]=0u+0x00000020u; // 801D3004
  c->ctr=c->r[0]; // 801D3008
L_801D300C:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D300C
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D3010
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D300C; } // 801D3014
  c->lr=0x801D301Cu; f_8007B524(c); // 801D3018
  c->r[4]=0u+0x00000005u; // 801D301C
  c->lr=0x801D3024u; f_800A2EF0(c); // 801D3020
  c->r[31]=c->r[3]|c->r[3]; // 801D3024
  c->lr=0x801D302Cu; f_801D4A74(c); // 801D3028
  c->lr=0x801D3030u; f_801D5078(c); // 801D302C
  c->r[5]=c->r[3]|c->r[3]; // 801D3030
  c->r[3]=c->r[1]+0x00000008u; // 801D3034
  c->r[4]=c->r[31]|c->r[31]; // 801D3038
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D303C
  c->lr=0x801D3044u; f_802E7CC4(c); // 801D3040
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801D3044
  c->lr=0x801D304Cu; f_8014CA7C(c); // 801D3048
  c->r[4]=c->r[1]+0x00000008u; // 801D304C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3050
  c->lr=0x801D3058u; f_801313D4(c); // 801D3054
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801D3058
  c->r[30]=R32(c->r[1]+0x00000108u); // 801D305C
  c->r[0]=R32(c->r[1]+0x00000114u); // 801D3060
  c->lr=c->r[0]; // 801D3064
  c->r[1]=c->r[1]+0x00000110u; // 801D3068
  return; // 801D306C
}

// fn_801D3070
void f_801D3070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3070
  c->r[0]=c->lr; // 801D3074
  W32(c->r[1]+0x00000114u,c->r[0]); // 801D3078
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801D307C
  W32(c->r[1]+0x00000108u,c->r[30]); // 801D3080
  c->r[30]=c->r[3]|c->r[3]; // 801D3084
  c->r[4]=c->r[1]+0x00000004u; // 801D3088
  c->r[3]=0u+0x00000000u; // 801D308C
  c->r[0]=0u+0x00000020u; // 801D3090
  c->ctr=c->r[0]; // 801D3094
L_801D3098:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D3098
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D309C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D3098; } // 801D30A0
  c->lr=0x801D30A8u; f_8007B524(c); // 801D30A4
  c->r[4]=0u+0x00000011u; // 801D30A8
  c->lr=0x801D30B0u; f_800A2EF0(c); // 801D30AC
  c->r[31]=c->r[3]|c->r[3]; // 801D30B0
  c->lr=0x801D30B8u; f_801D4A74(c); // 801D30B4
  c->lr=0x801D30BCu; f_801D5088(c); // 801D30B8
  c->r[5]=c->r[3]|c->r[3]; // 801D30BC
  c->r[3]=c->r[1]+0x00000008u; // 801D30C0
  c->r[4]=c->r[31]|c->r[31]; // 801D30C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D30C8
  c->lr=0x801D30D0u; f_802E7CC4(c); // 801D30CC
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801D30D0
  c->lr=0x801D30D8u; f_8014CA7C(c); // 801D30D4
  c->r[4]=c->r[1]+0x00000008u; // 801D30D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D30DC
  c->lr=0x801D30E4u; f_801313D4(c); // 801D30E0
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801D30E4
  c->r[30]=R32(c->r[1]+0x00000108u); // 801D30E8
  c->r[0]=R32(c->r[1]+0x00000114u); // 801D30EC
  c->lr=c->r[0]; // 801D30F0
  c->r[1]=c->r[1]+0x00000110u; // 801D30F4
  return; // 801D30F8
}

// fn_801D30FC
void f_801D30FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D30FC
  c->r[0]=c->lr; // 801D3100
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3104
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D3108
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D310C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D3110
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D3114
  c->r[28]=c->r[3]|c->r[3]; // 801D3118
  c->lr=0x801D3120u; f_801D4A74(c); // 801D311C
  c->lr=0x801D3124u; f_801D5098(c); // 801D3120
  cmps(c,0,(int32_t)c->r[3],0); // 801D3124
  if (!crb(c,2)) { goto L_801D3148; } // 801D3128
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D312C
  c->r[4]=0u+0x00000000u; // 801D3130
  c->lr=0x801D3138u; f_8014CAA4(c); // 801D3134
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D3138
  c->r[4]=0u+0x00000000u; // 801D313C
  c->lr=0x801D3144u; f_80117378(c); // 801D3140
  goto L_801D3270; // 801D3144
L_801D3148:;
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D3148
  c->r[4]=0u+0x00000001u; // 801D314C
  c->lr=0x801D3154u; f_8014CAA4(c); // 801D3150
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D3154
  c->r[4]=0u+0x00000001u; // 801D3158
  c->lr=0x801D3160u; f_80117378(c); // 801D315C
  c->r[31]=0u+0x00000000u; // 801D3160
  c->lr=0x801D3168u; f_801D4A74(c); // 801D3164
  c->lr=0x801D316Cu; f_801D50A8(c); // 801D3168
  c->r[30]=c->r[3]|c->r[3]; // 801D316C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3170
  if (crb(c,2)) { goto L_801D317C; } // 801D3174
  c->r[31]=0u+0x00000001u; // 801D3178
L_801D317C:;
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D317C
  c->lr=0x801D3184u; f_8014CA9C(c); // 801D3180
  c->r[4]=c->r[31]|c->r[31]; // 801D3184
  c->r[5]=0u+0x00000006u; // 801D3188
  c->lr=0x801D3190u; f_8012E640(c); // 801D318C
  c->lr=0x801D3194u; f_801D4A74(c); // 801D3190
  c->lr=0x801D3198u; f_801D50B8(c); // 801D3194
  c->r[31]=c->r[3]|c->r[3]; // 801D3198
  c->lr=0x801D31A0u; f_801D4A74(c); // 801D319C
  c->lr=0x801D31A4u; f_801D50C8(c); // 801D31A0
  c->r[29]=c->r[3]|c->r[3]; // 801D31A4
  c->lr=0x801D31ACu; f_8011B41C(c); // 801D31A8
  c->r[4]=0u+0x00000019u; // 801D31AC
  c->lr=0x801D31B4u; f_8011B814(c); // 801D31B0
  cmps(c,0,(int32_t)c->r[30],0); // 801D31B4
  if (crb(c,2)) { goto L_801D31F0; } // 801D31B8
  c->r[4]=0u+0x00000005u; // 801D31BC
  c->lr=0x801D31C4u; f_8011961C(c); // 801D31C0
  c->r[4]=c->r[3]|c->r[3]; // 801D31C4
  c->r[3]=c->r[1]+0x00000010u; // 801D31C8
  c->lr=0x801D31D0u; f_800549FC(c); // 801D31CC
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D31D0
  c->lr=0x801D31D8u; f_8014CA8C(c); // 801D31D4
  c->r[4]=c->r[1]+0x00000010u; // 801D31D8
  c->lr=0x801D31E0u; f_801313CC(c); // 801D31DC
  c->r[3]=c->r[1]+0x00000010u; // 801D31E0
  c->r[4]=0u+0xFFFFFFFFu; // 801D31E4
  c->lr=0x801D31ECu; f_80047BD4(c); // 801D31E8
  goto L_801D325C; // 801D31EC
L_801D31F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D31F0
  if (crb(c,2)) { goto L_801D322C; } // 801D31F4
  c->r[4]=0u+0x0000000Du; // 801D31F8
  c->lr=0x801D3200u; f_8011961C(c); // 801D31FC
  c->r[4]=c->r[3]|c->r[3]; // 801D3200
  c->r[3]=c->r[1]+0x0000000Cu; // 801D3204
  c->lr=0x801D320Cu; f_800549FC(c); // 801D3208
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D320C
  c->lr=0x801D3214u; f_8014CA8C(c); // 801D3210
  c->r[4]=c->r[1]+0x0000000Cu; // 801D3214
  c->lr=0x801D321Cu; f_801313CC(c); // 801D3218
  c->r[3]=c->r[1]+0x0000000Cu; // 801D321C
  c->r[4]=0u+0xFFFFFFFFu; // 801D3220
  c->lr=0x801D3228u; f_80047BD4(c); // 801D3224
  goto L_801D325C; // 801D3228
L_801D322C:;
  c->r[4]=0u+0x00000000u; // 801D322C
  c->lr=0x801D3234u; f_8011961C(c); // 801D3230
  c->r[4]=c->r[3]|c->r[3]; // 801D3234
  c->r[3]=c->r[1]+0x00000008u; // 801D3238
  c->lr=0x801D3240u; f_800549FC(c); // 801D323C
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D3240
  c->lr=0x801D3248u; f_8014CA8C(c); // 801D3244
  c->r[4]=c->r[1]+0x00000008u; // 801D3248
  c->lr=0x801D3250u; f_801313CC(c); // 801D324C
  c->r[3]=c->r[1]+0x00000008u; // 801D3250
  c->r[4]=0u+0xFFFFFFFFu; // 801D3254
  c->lr=0x801D325Cu; f_80047BD4(c); // 801D3258
L_801D325C:;
  c->r[3]=R32(c->r[28]+0x000000D8u); // 801D325C
  c->lr=0x801D3264u; f_8014CA8C(c); // 801D3260
  c->r[4]=c->r[29]|c->r[29]; // 801D3264
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3268
  c->lr=0x801D3270u; f_801313D4(c); // 801D326C
L_801D3270:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D3270
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D3274
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D3278
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D327C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3280
  c->lr=c->r[0]; // 801D3284
  c->r[1]=c->r[1]+0x00000030u; // 801D3288
  return; // 801D328C
}

// fn_801D3290
void f_801D3290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3290
  c->r[0]=c->lr; // 801D3294
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3298
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D329C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D32A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D32A4
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D32A8
  c->r[28]=c->r[3]|c->r[3]; // 801D32AC
  c->lr=0x801D32B4u; f_801D4A74(c); // 801D32B0
  c->lr=0x801D32B8u; f_801D50D8(c); // 801D32B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D32B8
  if (!crb(c,2)) { goto L_801D32DC; } // 801D32BC
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D32C0
  c->r[4]=0u+0x00000000u; // 801D32C4
  c->lr=0x801D32CCu; f_8014CAA4(c); // 801D32C8
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D32CC
  c->r[4]=0u+0x00000000u; // 801D32D0
  c->lr=0x801D32D8u; f_80117378(c); // 801D32D4
  goto L_801D3404; // 801D32D8
L_801D32DC:;
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D32DC
  c->r[4]=0u+0x00000001u; // 801D32E0
  c->lr=0x801D32E8u; f_8014CAA4(c); // 801D32E4
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D32E8
  c->r[4]=0u+0x00000001u; // 801D32EC
  c->lr=0x801D32F4u; f_80117378(c); // 801D32F0
  c->r[31]=0u+0x00000000u; // 801D32F4
  c->lr=0x801D32FCu; f_801D4A74(c); // 801D32F8
  c->lr=0x801D3300u; f_801D50E8(c); // 801D32FC
  c->r[30]=c->r[3]|c->r[3]; // 801D3300
  cmps(c,0,(int32_t)c->r[3],0); // 801D3304
  if (crb(c,2)) { goto L_801D3310; } // 801D3308
  c->r[31]=0u+0x00000001u; // 801D330C
L_801D3310:;
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D3310
  c->lr=0x801D3318u; f_8014CA9C(c); // 801D3314
  c->r[4]=c->r[31]|c->r[31]; // 801D3318
  c->r[5]=0u+0x00000006u; // 801D331C
  c->lr=0x801D3324u; f_8012E640(c); // 801D3320
  c->lr=0x801D3328u; f_801D4A74(c); // 801D3324
  c->lr=0x801D332Cu; f_801D50F8(c); // 801D3328
  c->r[31]=c->r[3]|c->r[3]; // 801D332C
  c->lr=0x801D3334u; f_801D4A74(c); // 801D3330
  c->lr=0x801D3338u; f_801D5108(c); // 801D3334
  c->r[29]=c->r[3]|c->r[3]; // 801D3338
  c->lr=0x801D3340u; f_8011B41C(c); // 801D333C
  c->r[4]=0u+0x00000019u; // 801D3340
  c->lr=0x801D3348u; f_8011B814(c); // 801D3344
  cmps(c,0,(int32_t)c->r[30],0); // 801D3348
  if (crb(c,2)) { goto L_801D3384; } // 801D334C
  c->r[4]=0u+0x00000005u; // 801D3350
  c->lr=0x801D3358u; f_8011961C(c); // 801D3354
  c->r[4]=c->r[3]|c->r[3]; // 801D3358
  c->r[3]=c->r[1]+0x00000010u; // 801D335C
  c->lr=0x801D3364u; f_800549FC(c); // 801D3360
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D3364
  c->lr=0x801D336Cu; f_8014CA8C(c); // 801D3368
  c->r[4]=c->r[1]+0x00000010u; // 801D336C
  c->lr=0x801D3374u; f_801313CC(c); // 801D3370
  c->r[3]=c->r[1]+0x00000010u; // 801D3374
  c->r[4]=0u+0xFFFFFFFFu; // 801D3378
  c->lr=0x801D3380u; f_80047BD4(c); // 801D337C
  goto L_801D33F0; // 801D3380
L_801D3384:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D3384
  if (crb(c,2)) { goto L_801D33C0; } // 801D3388
  c->r[4]=0u+0x0000000Du; // 801D338C
  c->lr=0x801D3394u; f_8011961C(c); // 801D3390
  c->r[4]=c->r[3]|c->r[3]; // 801D3394
  c->r[3]=c->r[1]+0x0000000Cu; // 801D3398
  c->lr=0x801D33A0u; f_800549FC(c); // 801D339C
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D33A0
  c->lr=0x801D33A8u; f_8014CA8C(c); // 801D33A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801D33A8
  c->lr=0x801D33B0u; f_801313CC(c); // 801D33AC
  c->r[3]=c->r[1]+0x0000000Cu; // 801D33B0
  c->r[4]=0u+0xFFFFFFFFu; // 801D33B4
  c->lr=0x801D33BCu; f_80047BD4(c); // 801D33B8
  goto L_801D33F0; // 801D33BC
L_801D33C0:;
  c->r[4]=0u+0x00000000u; // 801D33C0
  c->lr=0x801D33C8u; f_8011961C(c); // 801D33C4
  c->r[4]=c->r[3]|c->r[3]; // 801D33C8
  c->r[3]=c->r[1]+0x00000008u; // 801D33CC
  c->lr=0x801D33D4u; f_800549FC(c); // 801D33D0
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D33D4
  c->lr=0x801D33DCu; f_8014CA8C(c); // 801D33D8
  c->r[4]=c->r[1]+0x00000008u; // 801D33DC
  c->lr=0x801D33E4u; f_801313CC(c); // 801D33E0
  c->r[3]=c->r[1]+0x00000008u; // 801D33E4
  c->r[4]=0u+0xFFFFFFFFu; // 801D33E8
  c->lr=0x801D33F0u; f_80047BD4(c); // 801D33EC
L_801D33F0:;
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801D33F0
  c->lr=0x801D33F8u; f_8014CA8C(c); // 801D33F4
  c->r[4]=c->r[29]|c->r[29]; // 801D33F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D33FC
  c->lr=0x801D3404u; f_801313D4(c); // 801D3400
L_801D3404:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D3404
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D3408
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D340C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D3410
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3414
  c->lr=c->r[0]; // 801D3418
  c->r[1]=c->r[1]+0x00000030u; // 801D341C
  return; // 801D3420
}

// fn_801D3424
void f_801D3424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3424
  c->r[0]=c->lr; // 801D3428
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D342C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3430
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3434
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3438
  c->r[29]=c->r[3]|c->r[3]; // 801D343C
  c->lr=0x801D3444u; f_801D4A74(c); // 801D3440
  c->lr=0x801D3448u; f_801D5118(c); // 801D3444
  cmps(c,0,(int32_t)c->r[3],0); // 801D3448
  if (!crb(c,2)) { goto L_801D346C; } // 801D344C
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D3450
  c->r[4]=0u+0x00000000u; // 801D3454
  c->lr=0x801D345Cu; f_8014CAA4(c); // 801D3458
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D345C
  c->r[4]=0u+0x00000000u; // 801D3460
  c->lr=0x801D3468u; f_80117378(c); // 801D3464
  goto L_801D354C; // 801D3468
L_801D346C:;
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D346C
  c->r[4]=0u+0x00000001u; // 801D3470
  c->lr=0x801D3478u; f_8014CAA4(c); // 801D3474
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D3478
  c->r[4]=0u+0x00000001u; // 801D347C
  c->lr=0x801D3484u; f_80117378(c); // 801D3480
  c->r[30]=0u+0x00000000u; // 801D3484
  c->lr=0x801D348Cu; f_801D4A74(c); // 801D3488
  c->lr=0x801D3490u; f_801D5128(c); // 801D348C
  c->r[31]=c->r[3]|c->r[3]; // 801D3490
  cmps(c,0,(int32_t)c->r[3],0); // 801D3494
  if (crb(c,2)) { goto L_801D34A0; } // 801D3498
  c->r[30]=0u+0x00000001u; // 801D349C
L_801D34A0:;
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D34A0
  c->lr=0x801D34A8u; f_8014CA9C(c); // 801D34A4
  c->r[4]=c->r[30]|c->r[30]; // 801D34A8
  c->r[5]=0u+0x00000006u; // 801D34AC
  c->lr=0x801D34B4u; f_8012E640(c); // 801D34B0
  c->lr=0x801D34B8u; f_801D4A74(c); // 801D34B4
  c->lr=0x801D34BCu; f_801D5138(c); // 801D34B8
  c->r[30]=c->r[3]|c->r[3]; // 801D34BC
  c->lr=0x801D34C4u; f_8011B41C(c); // 801D34C0
  c->r[4]=0u+0x00000019u; // 801D34C4
  c->lr=0x801D34CCu; f_8011B814(c); // 801D34C8
  cmps(c,0,(int32_t)c->r[31],0); // 801D34CC
  if (crb(c,2)) { goto L_801D3508; } // 801D34D0
  c->r[4]=0u+0x00000005u; // 801D34D4
  c->lr=0x801D34DCu; f_8011961C(c); // 801D34D8
  c->r[4]=c->r[3]|c->r[3]; // 801D34DC
  c->r[3]=c->r[1]+0x0000000Cu; // 801D34E0
  c->lr=0x801D34E8u; f_800549FC(c); // 801D34E4
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D34E8
  c->lr=0x801D34F0u; f_8014CA8C(c); // 801D34EC
  c->r[4]=c->r[1]+0x0000000Cu; // 801D34F0
  c->lr=0x801D34F8u; f_801313CC(c); // 801D34F4
  c->r[3]=c->r[1]+0x0000000Cu; // 801D34F8
  c->r[4]=0u+0xFFFFFFFFu; // 801D34FC
  c->lr=0x801D3504u; f_80047BD4(c); // 801D3500
  goto L_801D3538; // 801D3504
L_801D3508:;
  c->r[4]=0u+0x00000000u; // 801D3508
  c->lr=0x801D3510u; f_8011961C(c); // 801D350C
  c->r[4]=c->r[3]|c->r[3]; // 801D3510
  c->r[3]=c->r[1]+0x00000008u; // 801D3514
  c->lr=0x801D351Cu; f_800549FC(c); // 801D3518
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D351C
  c->lr=0x801D3524u; f_8014CA8C(c); // 801D3520
  c->r[4]=c->r[1]+0x00000008u; // 801D3524
  c->lr=0x801D352Cu; f_801313CC(c); // 801D3528
  c->r[3]=c->r[1]+0x00000008u; // 801D352C
  c->r[4]=0u+0xFFFFFFFFu; // 801D3530
  c->lr=0x801D3538u; f_80047BD4(c); // 801D3534
L_801D3538:;
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801D3538
  c->lr=0x801D3540u; f_8014CA8C(c); // 801D353C
  c->r[4]=c->r[30]|c->r[30]; // 801D3540
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3544
  c->lr=0x801D354Cu; f_801313D4(c); // 801D3548
L_801D354C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D354C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3550
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3554
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3558
  c->lr=c->r[0]; // 801D355C
  c->r[1]=c->r[1]+0x00000020u; // 801D3560
  return; // 801D3564
}

// fn_801D3568
void f_801D3568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3568
  c->r[0]=c->lr; // 801D356C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3574
  c->r[31]=c->r[3]|c->r[3]; // 801D3578
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D357C
  c->r[12]=R32(c->r[12]+0x00000064u); // 801D3580
  c->ctr=c->r[12]; // 801D3584
  if (true) { c->lr=0x801D358Cu; dispatch(c,c->ctr); } // 801D3588
  c->r[3]=c->r[31]|c->r[31]; // 801D358C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D3590
  c->r[12]=R32(c->r[12]+0x00000068u); // 801D3594
  c->ctr=c->r[12]; // 801D3598
  if (true) { c->lr=0x801D35A0u; dispatch(c,c->ctr); } // 801D359C
  c->r[3]=c->r[31]|c->r[31]; // 801D35A0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D35A4
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801D35A8
  c->ctr=c->r[12]; // 801D35AC
  if (true) { c->lr=0x801D35B4u; dispatch(c,c->ctr); } // 801D35B0
  c->r[3]=c->r[31]|c->r[31]; // 801D35B4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D35B8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801D35BC
  c->ctr=c->r[12]; // 801D35C0
  if (true) { c->lr=0x801D35C8u; dispatch(c,c->ctr); } // 801D35C4
  c->r[3]=c->r[31]|c->r[31]; // 801D35C8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D35CC
  c->r[12]=R32(c->r[12]+0x00000074u); // 801D35D0
  c->ctr=c->r[12]; // 801D35D4
  if (true) { c->lr=0x801D35DCu; dispatch(c,c->ctr); } // 801D35D8
  c->r[3]=c->r[31]|c->r[31]; // 801D35DC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D35E0
  c->r[12]=R32(c->r[12]+0x00000078u); // 801D35E4
  c->ctr=c->r[12]; // 801D35E8
  if (true) { c->lr=0x801D35F0u; dispatch(c,c->ctr); } // 801D35EC
  c->r[3]=c->r[31]|c->r[31]; // 801D35F0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D35F4
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 801D35F8
  c->ctr=c->r[12]; // 801D35FC
  if (true) { c->lr=0x801D3604u; dispatch(c,c->ctr); } // 801D3600
  c->r[3]=c->r[31]|c->r[31]; // 801D3604
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D3608
  c->r[12]=R32(c->r[12]+0x00000080u); // 801D360C
  c->ctr=c->r[12]; // 801D3610
  if (true) { c->lr=0x801D3618u; dispatch(c,c->ctr); } // 801D3614
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D361C
  c->lr=c->r[0]; // 801D3620
  c->r[1]=c->r[1]+0x00000010u; // 801D3624
  return; // 801D3628
}

// fn_801D362C
void f_801D362C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D362C
  c->r[0]=c->lr; // 801D3630
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3634
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D3638
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D363C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3640
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3644
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3648
  c->r[29]=c->r[3]|c->r[3]; // 801D364C
  c->lr=0x801D3654u; f_8011B41C(c); // 801D3650
  c->r[4]=0u+0x00000002u; // 801D3654
  c->lr=0x801D365Cu; f_8011B814(c); // 801D3658
  c->r[31]=c->r[3]|c->r[3]; // 801D365C
  c->lr=0x801D3664u; f_8011B41C(c); // 801D3660
  c->r[4]=0u+0x0000000Au; // 801D3664
  c->lr=0x801D366Cu; f_8011B814(c); // 801D3668
  c->r[30]=c->r[3]|c->r[3]; // 801D366C
  c->r[3]=c->r[31]|c->r[31]; // 801D3670
  c->lr=0x801D3678u; f_8014F54C(c); // 801D3674
  c->r[3]=c->r[29]|c->r[29]; // 801D3678
  c->lr=0x801D3680u; f_80117D04(c); // 801D367C
  c->r[3]=c->r[29]|c->r[29]; // 801D3680
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3684
  c->f[2]=c->f[1]; // 801D3688
  c->f[3]=c->f[1]; // 801D368C
  c->lr=0x801D3694u; f_80114AB8(c); // 801D3690
  c->r[3]=c->r[31]|c->r[31]; // 801D3694
  c->lr=0x801D369Cu; f_8014F57C(c); // 801D3698
  c->f[31]=c->f[1]; // 801D369C
  c->r[3]=c->r[31]|c->r[31]; // 801D36A0
  c->lr=0x801D36A8u; f_8014F57C(c); // 801D36A4
  c->r[3]=c->r[29]|c->r[29]; // 801D36A8
  c->f[2]=c->f[31]; // 801D36AC
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D36B0
  c->lr=0x801D36B8u; f_80114AA8(c); // 801D36B4
  c->r[3]=c->r[30]|c->r[30]; // 801D36B8
  c->lr=0x801D36C0u; f_8012FCB8(c); // 801D36BC
  c->f[31]=c->f[1]; // 801D36C0
  c->r[3]=c->r[30]|c->r[30]; // 801D36C4
  c->lr=0x801D36CCu; f_8012FCB0(c); // 801D36C8
  c->r[3]=c->r[29]|c->r[29]; // 801D36CC
  c->f[2]=c->f[31]; // 801D36D0
  c->lr=0x801D36D8u; f_8012FA24(c); // 801D36D4
  c->r[3]=c->r[30]|c->r[30]; // 801D36D8
  c->lr=0x801D36E0u; f_8012FCD0(c); // 801D36DC
  c->f[31]=c->f[1]; // 801D36E0
  c->r[3]=c->r[30]|c->r[30]; // 801D36E4
  c->lr=0x801D36ECu; f_8012FCC8(c); // 801D36E8
  c->r[3]=c->r[29]|c->r[29]; // 801D36EC
  c->f[2]=c->f[31]; // 801D36F0
  c->lr=0x801D36F8u; f_8012FA40(c); // 801D36F4
  c->r[3]=c->r[30]|c->r[30]; // 801D36F8
  c->lr=0x801D3700u; f_8012FCE8(c); // 801D36FC
  c->r[3]=c->r[29]|c->r[29]; // 801D3700
  c->lr=0x801D3708u; f_8012FA6C(c); // 801D3704
  c->r[3]=c->r[30]|c->r[30]; // 801D3708
  c->lr=0x801D3710u; f_8012FCF0(c); // 801D370C
  c->r[3]=c->r[29]|c->r[29]; // 801D3710
  c->lr=0x801D3718u; f_8012FA74(c); // 801D3714
  c->r[3]=c->r[30]|c->r[30]; // 801D3718
  c->lr=0x801D3720u; f_8012FCE0(c); // 801D371C
  c->r[4]=c->r[3]|c->r[3]; // 801D3720
  c->r[3]=c->r[29]|c->r[29]; // 801D3724
  c->lr=0x801D372Cu; f_8012F918(c); // 801D3728
  c->r[3]=c->r[30]|c->r[30]; // 801D372C
  c->lr=0x801D3734u; f_8012FCF8(c); // 801D3730
  c->r[3]=c->r[29]+0x00000A30u; // 801D3734
  c->lr=0x801D373Cu; f_80110580(c); // 801D3738
  c->r[3]=c->r[30]|c->r[30]; // 801D373C
  c->lr=0x801D3744u; f_8012FD00(c); // 801D3740
  c->r[3]=c->r[29]+0x00000A78u; // 801D3744
  c->lr=0x801D374Cu; f_80110580(c); // 801D3748
  c->r[3]=c->r[30]|c->r[30]; // 801D374C
  c->lr=0x801D3754u; f_8012FD08(c); // 801D3750
  c->r[3]=c->r[29]+0x00000A30u; // 801D3754
  c->lr=0x801D375Cu; f_80110588(c); // 801D3758
  c->r[3]=c->r[30]|c->r[30]; // 801D375C
  c->lr=0x801D3764u; f_8012FD10(c); // 801D3760
  c->r[3]=c->r[29]+0x00000A78u; // 801D3764
  c->lr=0x801D376Cu; f_80110588(c); // 801D3768
  c->lr=0x801D3770u; f_8011A9D8(c); // 801D376C
  c->r[4]=0u+0x00000000u; // 801D3770
  c->lr=0x801D3778u; f_8011AF74(c); // 801D3774
  c->r[30]=c->r[3]|c->r[3]; // 801D3778
  c->lr=0x801D3780u; f_8011A6E8(c); // 801D377C
  c->r[4]=c->r[30]|c->r[30]; // 801D3780
  c->lr=0x801D3788u; f_8011A9B0(c); // 801D3784
  c->lr=0x801D378Cu; f_8012DA20(c); // 801D3788
  c->r[4]=c->r[3]|c->r[3]; // 801D378C
  c->r[3]=c->r[29]|c->r[29]; // 801D3790
  c->lr=0x801D3798u; f_80114AA0(c); // 801D3794
  c->r[3]=c->r[29]|c->r[29]; // 801D3798
  c->r[4]=0u+0x0000000Au; // 801D379C
  c->r[5]=0u+0x00000001u; // 801D37A0
  c->r[6]=0u+0xFFFFFFFFu; // 801D37A4
  c->lr=0x801D37ACu; f_8012DE5C(c); // 801D37A8
  c->r[3]=c->r[29]|c->r[29]; // 801D37AC
  c->lr=0x801D37B4u; f_8012F448(c); // 801D37B0
  c->r[3]=c->r[29]|c->r[29]; // 801D37B4
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D37B8
  c->r[4]=0u+0x00000006u; // 801D37BC
  c->lr=0x801D37C4u; f_8012E920(c); // 801D37C0
  c->r[3]=c->r[29]|c->r[29]; // 801D37C4
  c->r[4]=0u+0x00000001u; // 801D37C8
  c->lr=0x801D37D0u; f_8012E1C0(c); // 801D37CC
  c->r[3]=c->r[29]|c->r[29]; // 801D37D0
  c->r[4]=0u+0x00000000u; // 801D37D4
  c->lr=0x801D37DCu; f_8012F910(c); // 801D37D8
  c->r[0]=0u+0x00000028u; // 801D37DC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D37E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D37E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D37E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D37EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D37F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D37F4
  c->lr=c->r[0]; // 801D37F8
  c->r[1]=c->r[1]+0x00000030u; // 801D37FC
  return; // 801D3800
}

// fn_801D3804
void f_801D3804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3804
  c->r[0]=c->lr; // 801D3808
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D380C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3810
  c->r[31]=c->r[3]|c->r[3]; // 801D3814
  c->lr=0x801D381Cu; f_8012F740(c); // 801D3818
  c->r[3]=0u+0x80470000u; // 801D381C
  c->r[3]=c->r[3]+0x00002B30u; // 801D3820
  W32(c->r[31]+0x00000020u,c->r[3]); // 801D3824
  c->r[0]=c->r[3]+0x0000000Cu; // 801D3828
  W32(c->r[31]+0x00000288u,c->r[0]); // 801D382C
  c->r[0]=c->r[3]+0x00000018u; // 801D3830
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801D3834
  c->r[0]=c->r[3]+0x00000024u; // 801D3838
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801D383C
  c->r[0]=c->r[3]+0x00000030u; // 801D3840
  W32(c->r[31]+0x00000300u,c->r[0]); // 801D3844
  c->r[3]=c->r[31]|c->r[31]; // 801D3848
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D384C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3850
  c->lr=c->r[0]; // 801D3854
  c->r[1]=c->r[1]+0x00000010u; // 801D3858
  return; // 801D385C
}

// fn_801D3860
void f_801D3860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3860
  c->r[0]=c->lr; // 801D3864
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3868
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D386C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D3870
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3874
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3878
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D387C
  c->r[29]=c->r[3]|c->r[3]; // 801D3880
  c->lr=0x801D3888u; f_8011B41C(c); // 801D3884
  c->r[4]=0u+0x00000002u; // 801D3888
  c->lr=0x801D3890u; f_8011B814(c); // 801D388C
  c->r[31]=c->r[3]|c->r[3]; // 801D3890
  c->lr=0x801D3898u; f_8011B41C(c); // 801D3894
  c->r[4]=0u+0x00000002u; // 801D3898
  c->lr=0x801D38A0u; f_8011B814(c); // 801D389C
  c->r[30]=c->r[3]|c->r[3]; // 801D38A0
  c->r[3]=c->r[31]|c->r[31]; // 801D38A4
  c->lr=0x801D38ACu; f_8014F58C(c); // 801D38A8
  c->r[3]=c->r[29]|c->r[29]; // 801D38AC
  c->lr=0x801D38B4u; f_80117D04(c); // 801D38B0
  c->r[3]=c->r[29]|c->r[29]; // 801D38B4
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D38B8
  c->f[2]=c->f[1]; // 801D38BC
  c->f[3]=c->f[1]; // 801D38C0
  c->lr=0x801D38C8u; f_80114AB8(c); // 801D38C4
  c->r[3]=c->r[31]|c->r[31]; // 801D38C8
  c->lr=0x801D38D0u; f_8014F610(c); // 801D38CC
  c->f[31]=c->f[1]; // 801D38D0
  c->r[3]=c->r[31]|c->r[31]; // 801D38D4
  c->lr=0x801D38DCu; f_8014F610(c); // 801D38D8
  c->r[3]=c->r[29]|c->r[29]; // 801D38DC
  c->f[2]=c->f[31]; // 801D38E0
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D38E4
  c->lr=0x801D38ECu; f_80114AA8(c); // 801D38E8
  c->r[3]=c->r[30]|c->r[30]; // 801D38EC
  c->lr=0x801D38F4u; f_8012FCB8(c); // 801D38F0
  c->f[31]=c->f[1]; // 801D38F4
  c->r[3]=c->r[30]|c->r[30]; // 801D38F8
  c->lr=0x801D3900u; f_8012FCB0(c); // 801D38FC
  c->r[3]=c->r[29]|c->r[29]; // 801D3900
  c->f[2]=c->f[31]; // 801D3904
  c->lr=0x801D390Cu; f_8012FA24(c); // 801D3908
  c->r[3]=c->r[30]|c->r[30]; // 801D390C
  c->lr=0x801D3914u; f_8012FCD0(c); // 801D3910
  c->f[31]=c->f[1]; // 801D3914
  c->r[3]=c->r[30]|c->r[30]; // 801D3918
  c->lr=0x801D3920u; f_8012FCC8(c); // 801D391C
  c->r[3]=c->r[29]|c->r[29]; // 801D3920
  c->f[2]=c->f[31]; // 801D3924
  c->lr=0x801D392Cu; f_8012FA40(c); // 801D3928
  c->r[3]=c->r[30]|c->r[30]; // 801D392C
  c->lr=0x801D3934u; f_8012FCE8(c); // 801D3930
  c->r[3]=c->r[29]|c->r[29]; // 801D3934
  c->lr=0x801D393Cu; f_8012FA6C(c); // 801D3938
  c->r[3]=c->r[30]|c->r[30]; // 801D393C
  c->lr=0x801D3944u; f_8012FCF0(c); // 801D3940
  c->r[3]=c->r[29]|c->r[29]; // 801D3944
  c->lr=0x801D394Cu; f_8012FA74(c); // 801D3948
  c->r[3]=c->r[30]|c->r[30]; // 801D394C
  c->lr=0x801D3954u; f_8012FCE0(c); // 801D3950
  c->r[4]=c->r[3]|c->r[3]; // 801D3954
  c->r[3]=c->r[29]|c->r[29]; // 801D3958
  c->lr=0x801D3960u; f_8012F918(c); // 801D395C
  c->r[3]=c->r[30]|c->r[30]; // 801D3960
  c->lr=0x801D3968u; f_8012FCF8(c); // 801D3964
  c->r[3]=c->r[29]+0x00000A30u; // 801D3968
  c->lr=0x801D3970u; f_80110580(c); // 801D396C
  c->r[3]=c->r[30]|c->r[30]; // 801D3970
  c->lr=0x801D3978u; f_8012FD00(c); // 801D3974
  c->r[3]=c->r[29]+0x00000A78u; // 801D3978
  c->lr=0x801D3980u; f_80110580(c); // 801D397C
  c->r[3]=c->r[30]|c->r[30]; // 801D3980
  c->lr=0x801D3988u; f_8012FD08(c); // 801D3984
  c->r[3]=c->r[29]+0x00000A30u; // 801D3988
  c->lr=0x801D3990u; f_80110588(c); // 801D398C
  c->r[3]=c->r[30]|c->r[30]; // 801D3990
  c->lr=0x801D3998u; f_8012FD10(c); // 801D3994
  c->r[3]=c->r[29]+0x00000A78u; // 801D3998
  c->lr=0x801D39A0u; f_80110588(c); // 801D399C
  c->lr=0x801D39A4u; f_8011A9D8(c); // 801D39A0
  c->r[4]=0u+0x00000000u; // 801D39A4
  c->lr=0x801D39ACu; f_8011AF74(c); // 801D39A8
  c->r[30]=c->r[3]|c->r[3]; // 801D39AC
  c->lr=0x801D39B4u; f_8011A6E8(c); // 801D39B0
  c->r[4]=c->r[30]|c->r[30]; // 801D39B4
  c->lr=0x801D39BCu; f_8011A9B0(c); // 801D39B8
  c->lr=0x801D39C0u; f_8012DA20(c); // 801D39BC
  c->r[4]=c->r[3]|c->r[3]; // 801D39C0
  c->r[3]=c->r[29]|c->r[29]; // 801D39C4
  c->lr=0x801D39CCu; f_80114AA0(c); // 801D39C8
  c->r[3]=c->r[29]|c->r[29]; // 801D39CC
  c->r[4]=0u+0x0000000Au; // 801D39D0
  c->r[5]=0u+0x00000002u; // 801D39D4
  c->r[6]=0u+0xFFFFFFFFu; // 801D39D8
  c->lr=0x801D39E0u; f_8012DE5C(c); // 801D39DC
  c->r[3]=c->r[29]|c->r[29]; // 801D39E0
  c->lr=0x801D39E8u; f_8012F448(c); // 801D39E4
  c->r[3]=c->r[29]|c->r[29]; // 801D39E8
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D39EC
  c->r[4]=0u+0x00000006u; // 801D39F0
  c->lr=0x801D39F8u; f_8012E920(c); // 801D39F4
  c->r[3]=c->r[29]|c->r[29]; // 801D39F8
  c->r[4]=0u+0x00000001u; // 801D39FC
  c->lr=0x801D3A04u; f_8012E1C0(c); // 801D3A00
  c->r[3]=c->r[29]|c->r[29]; // 801D3A04
  c->r[4]=0u+0x00000000u; // 801D3A08
  c->lr=0x801D3A10u; f_8012F910(c); // 801D3A0C
  c->r[0]=0u+0x00000028u; // 801D3A10
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D3A14
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D3A18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3A1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3A20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3A24
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3A28
  c->lr=c->r[0]; // 801D3A2C
  c->r[1]=c->r[1]+0x00000030u; // 801D3A30
  return; // 801D3A34
}

// fn_801D3A38
void f_801D3A38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3A38
  c->r[0]=c->lr; // 801D3A3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3A40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3A44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3A48
  c->r[30]=c->r[3]|c->r[3]; // 801D3A4C
  c->lr=0x801D3A54u; f_801D4A74(c); // 801D3A50
  c->lr=0x801D3A58u; f_801D51A8(c); // 801D3A54
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801D3A58
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801D3A5C
  c->r[0]=c->r[0]^c->r[4]; // 801D3A60
  c->r[4]=c->r[0]-c->r[4]; // 801D3A64
  c->r[0]=0u-c->r[4]; // 801D3A68
  c->r[0]=c->r[0]|c->r[4]; // 801D3A6C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801D3A70
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[1]=RF64(ea);} // 801D3A74
  c->r[0]=c->r[3]^0x80000000u; // 801D3A78
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D3A7C
  c->r[0]=0u+0x43300000u; // 801D3A80
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D3A84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D3A88
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D3A8C
  {uint32_t ea=c->r[2]+0xFFFF93D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3A90
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D3A94
  cmps(c,0,(int32_t)c->r[31],1); // 801D3A98
  if (!crb(c,2)) { goto L_801D3AA4; } // 801D3A9C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D3AA0
L_801D3AA4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D3AA4
  c->lr=0x801D3AACu; f_8014CA6C(c); // 801D3AA8
  c->lr=0x801D3AB0u; f_801D4A74(c); // 801D3AAC
  c->lr=0x801D3AB4u; f_801D51B8(c); // 801D3AB0
  c->r[0]=c->r[3]|c->r[3]; // 801D3AB4
  c->r[3]=c->r[30]|c->r[30]; // 801D3AB8
  c->r[4]=c->r[0]+c->r[31]; // 801D3ABC
  c->r[5]=0u+0x00000006u; // 801D3AC0
  c->lr=0x801D3AC8u; f_8012E640(c); // 801D3AC4
  c->r[3]=c->r[30]|c->r[30]; // 801D3AC8
  c->lr=0x801D3AD0u; f_8012F874(c); // 801D3ACC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3AD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3AD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3AD8
  c->lr=c->r[0]; // 801D3ADC
  c->r[1]=c->r[1]+0x00000020u; // 801D3AE0
  return; // 801D3AE4
}

// fn_801D3AE8
void f_801D3AE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3AE8
  c->r[0]=c->lr; // 801D3AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3AF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3AF4
  c->r[31]=c->r[3]|c->r[3]; // 801D3AF8
  c->lr=0x801D3B00u; f_80131A40(c); // 801D3AFC
  c->r[3]=0u+0x80470000u; // 801D3B00
  c->r[0]=c->r[3]+0x00002AA4u; // 801D3B04
  W32(c->r[31]+0x00000058u,c->r[0]); // 801D3B08
  c->r[3]=c->r[31]|c->r[31]; // 801D3B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3B14
  c->lr=c->r[0]; // 801D3B18
  c->r[1]=c->r[1]+0x00000010u; // 801D3B1C
  return; // 801D3B20
}

// fn_801D3B24
void f_801D3B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3B24
  c->r[0]=c->lr; // 801D3B28
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3B2C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D3B30
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D3B34
  c->r[11]=c->r[1]+0x00000020u; // 801D3B38
  c->lr=0x801D3B40u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3B3C
  c->r[26]=c->r[3]|c->r[3]; // 801D3B40
  c->lr=0x801D3B48u; f_8011B41C(c); // 801D3B44
  c->r[4]=0u+0x00000019u; // 801D3B48
  c->lr=0x801D3B50u; f_8011B814(c); // 801D3B4C
  c->r[28]=c->r[3]|c->r[3]; // 801D3B50
  c->lr=0x801D3B58u; f_8011B41C(c); // 801D3B54
  c->r[4]=0u+0x00000002u; // 801D3B58
  c->lr=0x801D3B60u; f_8011B814(c); // 801D3B5C
  c->r[29]=c->r[3]|c->r[3]; // 801D3B60
  c->lr=0x801D3B68u; f_8011B41C(c); // 801D3B64
  c->r[4]=0u+0x0000000Au; // 801D3B68
  c->lr=0x801D3B70u; f_8011B814(c); // 801D3B6C
  c->r[27]=c->r[3]|c->r[3]; // 801D3B70
  c->r[3]=c->r[26]|c->r[26]; // 801D3B74
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3B78
  c->f[2]=c->f[1]; // 801D3B7C
  c->lr=0x801D3B84u; f_801313A0(c); // 801D3B80
  c->r[3]=c->r[29]|c->r[29]; // 801D3B84
  c->lr=0x801D3B8Cu; f_8014F688(c); // 801D3B88
  c->f[31]=c->f[1]; // 801D3B8C
  c->r[3]=c->r[29]|c->r[29]; // 801D3B90
  c->lr=0x801D3B98u; f_8014F688(c); // 801D3B94
  c->r[3]=c->r[26]|c->r[26]; // 801D3B98
  c->f[2]=c->f[31]; // 801D3B9C
  c->lr=0x801D3BA4u; f_801313AC(c); // 801D3BA0
  c->r[3]=c->r[28]|c->r[28]; // 801D3BA4
  c->r[4]=0u+0x00000000u; // 801D3BA8
  c->lr=0x801D3BB0u; f_801196BC(c); // 801D3BAC
  c->r[29]=c->r[3]|c->r[3]; // 801D3BB0
  c->r[3]=c->r[28]|c->r[28]; // 801D3BB4
  c->r[4]=0u+0x00000000u; // 801D3BB8
  c->lr=0x801D3BC0u; f_80119694(c); // 801D3BBC
  c->r[30]=c->r[3]|c->r[3]; // 801D3BC0
  c->r[3]=c->r[28]|c->r[28]; // 801D3BC4
  c->r[4]=0u+0x00000000u; // 801D3BC8
  c->lr=0x801D3BD0u; f_8011966C(c); // 801D3BCC
  c->r[31]=c->r[3]|c->r[3]; // 801D3BD0
  c->r[3]=c->r[28]|c->r[28]; // 801D3BD4
  c->r[4]=0u+0x00000000u; // 801D3BD8
  c->lr=0x801D3BE0u; f_80119644(c); // 801D3BDC
  c->r[0]=c->r[3]|c->r[3]; // 801D3BE0
  c->r[3]=c->r[26]|c->r[26]; // 801D3BE4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D3BE8
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801D3BEC
  c->r[6]=rotl(c->r[30],0)&0x000000FFu; // 801D3BF0
  c->r[7]=rotl(c->r[29],0)&0x000000FFu; // 801D3BF4
  c->lr=0x801D3BFCu; f_801313B8(c); // 801D3BF8
  c->r[3]=c->r[26]|c->r[26]; // 801D3BFC
  c->r[4]=c->r[13]+0xFFFF9BE8u; // 801D3C00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3C04
  c->lr=0x801D3C0Cu; f_801313D4(c); // 801D3C08
  c->r[3]=c->r[27]|c->r[27]; // 801D3C0C
  c->lr=0x801D3C14u; f_8012FCB8(c); // 801D3C10
  c->f[31]=c->f[1]; // 801D3C14
  c->r[3]=c->r[27]|c->r[27]; // 801D3C18
  c->lr=0x801D3C20u; f_8012FCB0(c); // 801D3C1C
  c->r[3]=c->r[26]|c->r[26]; // 801D3C20
  c->f[2]=c->f[31]; // 801D3C24
  c->lr=0x801D3C2Cu; f_80131C2C(c); // 801D3C28
  c->r[3]=c->r[27]|c->r[27]; // 801D3C2C
  c->lr=0x801D3C34u; f_8012FCD0(c); // 801D3C30
  c->f[31]=c->f[1]; // 801D3C34
  c->r[3]=c->r[27]|c->r[27]; // 801D3C38
  c->lr=0x801D3C40u; f_8012FCC8(c); // 801D3C3C
  c->r[3]=c->r[26]|c->r[26]; // 801D3C40
  c->f[2]=c->f[31]; // 801D3C44
  c->lr=0x801D3C4Cu; f_80131C48(c); // 801D3C48
  c->r[3]=c->r[27]|c->r[27]; // 801D3C4C
  c->lr=0x801D3C54u; f_8012FCE8(c); // 801D3C50
  c->r[3]=c->r[26]|c->r[26]; // 801D3C54
  c->lr=0x801D3C5Cu; f_80131C64(c); // 801D3C58
  c->r[3]=c->r[27]|c->r[27]; // 801D3C5C
  c->lr=0x801D3C64u; f_8012FCF0(c); // 801D3C60
  c->r[3]=c->r[26]|c->r[26]; // 801D3C64
  c->lr=0x801D3C6Cu; f_80131C6C(c); // 801D3C68
  c->r[3]=c->r[27]|c->r[27]; // 801D3C6C
  c->lr=0x801D3C74u; f_8012FCE0(c); // 801D3C70
  c->r[4]=c->r[3]|c->r[3]; // 801D3C74
  c->r[3]=c->r[26]|c->r[26]; // 801D3C78
  c->lr=0x801D3C80u; f_80131B68(c); // 801D3C7C
  c->r[3]=c->r[27]|c->r[27]; // 801D3C80
  c->lr=0x801D3C88u; f_8012FCF8(c); // 801D3C84
  c->r[3]=c->r[26]+0x00003158u; // 801D3C88
  c->lr=0x801D3C90u; f_80110580(c); // 801D3C8C
  c->r[3]=c->r[27]|c->r[27]; // 801D3C90
  c->lr=0x801D3C98u; f_8012FD00(c); // 801D3C94
  c->r[3]=c->r[26]+0x000031A0u; // 801D3C98
  c->lr=0x801D3CA0u; f_80110580(c); // 801D3C9C
  c->r[3]=c->r[27]|c->r[27]; // 801D3CA0
  c->lr=0x801D3CA8u; f_8012FD08(c); // 801D3CA4
  c->r[3]=c->r[26]+0x00003158u; // 801D3CA8
  c->lr=0x801D3CB0u; f_80110588(c); // 801D3CAC
  c->r[3]=c->r[27]|c->r[27]; // 801D3CB0
  c->lr=0x801D3CB8u; f_8012FD10(c); // 801D3CB4
  c->r[3]=c->r[26]+0x000031A0u; // 801D3CB8
  c->lr=0x801D3CC0u; f_80110588(c); // 801D3CBC
  c->r[3]=c->r[26]|c->r[26]; // 801D3CC0
  c->r[4]=0u+0x00000000u; // 801D3CC4
  c->lr=0x801D3CCCu; f_80131388(c); // 801D3CC8
  c->r[3]=c->r[26]|c->r[26]; // 801D3CCC
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CD0
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3CD4
  c->lr=0x801D3CDCu; f_80131588(c); // 801D3CD8
  c->r[3]=c->r[26]|c->r[26]; // 801D3CDC
  c->lr=0x801D3CE4u; f_8014CB20(c); // 801D3CE0
  c->r[3]=c->r[26]|c->r[26]; // 801D3CE4
  {uint32_t ea=c->r[2]+0xFFFF93DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CE8
  c->lr=0x801D3CF0u; f_801315AC(c); // 801D3CEC
  c->r[3]=c->r[26]|c->r[26]; // 801D3CF0
  c->r[4]=c->r[13]+0xFFFF9BE8u; // 801D3CF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3CF8
  c->lr=0x801D3D00u; f_801313D4(c); // 801D3CFC
  c->r[0]=0u+0x00000028u; // 801D3D00
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D3D04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D3D08
  c->r[11]=c->r[1]+0x00000020u; // 801D3D0C
  c->lr=0x801D3D14u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3D10
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3D14
  c->lr=c->r[0]; // 801D3D18
  c->r[1]=c->r[1]+0x00000030u; // 801D3D1C
  return; // 801D3D20
}

// fn_801D3D24
void f_801D3D24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3D24
  c->r[0]=c->lr; // 801D3D28
  W32(c->r[1]+0x00000114u,c->r[0]); // 801D3D2C
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801D3D30
  c->r[31]=c->r[3]|c->r[3]; // 801D3D34
  c->lr=0x801D3D3Cu; f_80131390(c); // 801D3D38
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D3C
  if (crb(c,2)) { goto L_801D3D94; } // 801D3D40
  c->r[4]=c->r[1]+0x00000004u; // 801D3D44
  c->r[3]=0u+0x00000000u; // 801D3D48
  c->r[0]=0u+0x00000020u; // 801D3D4C
  c->ctr=c->r[0]; // 801D3D50
L_801D3D54:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D3D54
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D3D58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D3D54; } // 801D3D5C
  c->lr=0x801D3D64u; f_801D4A74(c); // 801D3D60
  c->lr=0x801D3D68u; f_801D51C8(c); // 801D3D64
  c->r[4]=c->r[3]|c->r[3]; // 801D3D68
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D6C
  if (crb(c,2)) { goto L_801D3D94; } // 801D3D70
  c->r[3]=c->r[1]+0x00000008u; // 801D3D74
  c->lr=0x801D3D7Cu; f_802E9548(c); // 801D3D78
  c->r[3]=c->r[31]|c->r[31]; // 801D3D7C
  c->r[4]=c->r[1]+0x00000008u; // 801D3D80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3D84
  c->lr=0x801D3D8Cu; f_801313D4(c); // 801D3D88
  c->r[3]=c->r[31]|c->r[31]; // 801D3D8C
  c->lr=0x801D3D94u; f_80131B00(c); // 801D3D90
L_801D3D94:;
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801D3D94
  c->r[0]=R32(c->r[1]+0x00000114u); // 801D3D98
  c->lr=c->r[0]; // 801D3D9C
  c->r[1]=c->r[1]+0x00000110u; // 801D3DA0
  return; // 801D3DA4
}

// fn_801D3DA8
void f_801D3DA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3DA8
  c->r[0]=c->lr; // 801D3DAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3DB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3DB4
  c->r[31]=c->r[3]|c->r[3]; // 801D3DB8
  c->lr=0x801D3DC0u; f_80131A40(c); // 801D3DBC
  c->r[3]=0u+0x80470000u; // 801D3DC0
  c->r[0]=c->r[3]+0x00002A18u; // 801D3DC4
  W32(c->r[31]+0x00000058u,c->r[0]); // 801D3DC8
  c->r[3]=c->r[31]|c->r[31]; // 801D3DCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3DD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3DD4
  c->lr=c->r[0]; // 801D3DD8
  c->r[1]=c->r[1]+0x00000010u; // 801D3DDC
  return; // 801D3DE0
}

// fn_801D3DE4
void f_801D3DE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3DE4
  c->r[0]=c->lr; // 801D3DE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3DEC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D3DF0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D3DF4
  c->r[11]=c->r[1]+0x00000020u; // 801D3DF8
  c->lr=0x801D3E00u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3DFC
  c->r[26]=c->r[3]|c->r[3]; // 801D3E00
  c->lr=0x801D3E08u; f_8011B41C(c); // 801D3E04
  c->r[4]=0u+0x00000019u; // 801D3E08
  c->lr=0x801D3E10u; f_8011B814(c); // 801D3E0C
  c->r[28]=c->r[3]|c->r[3]; // 801D3E10
  c->lr=0x801D3E18u; f_8011B41C(c); // 801D3E14
  c->r[4]=0u+0x00000002u; // 801D3E18
  c->lr=0x801D3E20u; f_8011B814(c); // 801D3E1C
  c->r[29]=c->r[3]|c->r[3]; // 801D3E20
  c->lr=0x801D3E28u; f_8011B41C(c); // 801D3E24
  c->r[4]=0u+0x0000000Au; // 801D3E28
  c->lr=0x801D3E30u; f_8011B814(c); // 801D3E2C
  c->r[27]=c->r[3]|c->r[3]; // 801D3E30
  c->r[3]=c->r[26]|c->r[26]; // 801D3E34
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3E38
  c->f[2]=c->f[1]; // 801D3E3C
  c->lr=0x801D3E44u; f_801313A0(c); // 801D3E40
  c->r[3]=c->r[29]|c->r[29]; // 801D3E44
  c->lr=0x801D3E4Cu; f_8014F688(c); // 801D3E48
  c->f[31]=c->f[1]; // 801D3E4C
  c->r[3]=c->r[29]|c->r[29]; // 801D3E50
  c->lr=0x801D3E58u; f_8014F688(c); // 801D3E54
  c->r[3]=c->r[26]|c->r[26]; // 801D3E58
  c->f[2]=c->f[31]; // 801D3E5C
  c->lr=0x801D3E64u; f_801313AC(c); // 801D3E60
  c->r[3]=c->r[28]|c->r[28]; // 801D3E64
  c->r[4]=0u+0x00000000u; // 801D3E68
  c->lr=0x801D3E70u; f_801196BC(c); // 801D3E6C
  c->r[29]=c->r[3]|c->r[3]; // 801D3E70
  c->r[3]=c->r[28]|c->r[28]; // 801D3E74
  c->r[4]=0u+0x00000000u; // 801D3E78
  c->lr=0x801D3E80u; f_80119694(c); // 801D3E7C
  c->r[30]=c->r[3]|c->r[3]; // 801D3E80
  c->r[3]=c->r[28]|c->r[28]; // 801D3E84
  c->r[4]=0u+0x00000000u; // 801D3E88
  c->lr=0x801D3E90u; f_8011966C(c); // 801D3E8C
  c->r[31]=c->r[3]|c->r[3]; // 801D3E90
  c->r[3]=c->r[28]|c->r[28]; // 801D3E94
  c->r[4]=0u+0x00000000u; // 801D3E98
  c->lr=0x801D3EA0u; f_80119644(c); // 801D3E9C
  c->r[0]=c->r[3]|c->r[3]; // 801D3EA0
  c->r[3]=c->r[26]|c->r[26]; // 801D3EA4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D3EA8
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801D3EAC
  c->r[6]=rotl(c->r[30],0)&0x000000FFu; // 801D3EB0
  c->r[7]=rotl(c->r[29],0)&0x000000FFu; // 801D3EB4
  c->lr=0x801D3EBCu; f_801313B8(c); // 801D3EB8
  c->r[3]=c->r[26]|c->r[26]; // 801D3EBC
  c->r[4]=c->r[13]+0xFFFF9BE8u; // 801D3EC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3EC4
  c->lr=0x801D3ECCu; f_801313D4(c); // 801D3EC8
  c->r[3]=c->r[27]|c->r[27]; // 801D3ECC
  c->lr=0x801D3ED4u; f_8012FCB8(c); // 801D3ED0
  c->f[31]=c->f[1]; // 801D3ED4
  c->r[3]=c->r[27]|c->r[27]; // 801D3ED8
  c->lr=0x801D3EE0u; f_8012FCB0(c); // 801D3EDC
  c->r[3]=c->r[26]|c->r[26]; // 801D3EE0
  c->f[2]=c->f[31]; // 801D3EE4
  c->lr=0x801D3EECu; f_80131C2C(c); // 801D3EE8
  c->r[3]=c->r[27]|c->r[27]; // 801D3EEC
  c->lr=0x801D3EF4u; f_8012FCD0(c); // 801D3EF0
  c->f[31]=c->f[1]; // 801D3EF4
  c->r[3]=c->r[27]|c->r[27]; // 801D3EF8
  c->lr=0x801D3F00u; f_8012FCC8(c); // 801D3EFC
  c->r[3]=c->r[26]|c->r[26]; // 801D3F00
  c->f[2]=c->f[31]; // 801D3F04
  c->lr=0x801D3F0Cu; f_80131C48(c); // 801D3F08
  c->r[3]=c->r[27]|c->r[27]; // 801D3F0C
  c->lr=0x801D3F14u; f_8012FCE8(c); // 801D3F10
  c->r[3]=c->r[26]|c->r[26]; // 801D3F14
  c->lr=0x801D3F1Cu; f_80131C64(c); // 801D3F18
  c->r[3]=c->r[27]|c->r[27]; // 801D3F1C
  c->lr=0x801D3F24u; f_8012FCF0(c); // 801D3F20
  c->r[3]=c->r[26]|c->r[26]; // 801D3F24
  c->lr=0x801D3F2Cu; f_80131C6C(c); // 801D3F28
  c->r[3]=c->r[27]|c->r[27]; // 801D3F2C
  c->lr=0x801D3F34u; f_8012FCE0(c); // 801D3F30
  c->r[4]=c->r[3]|c->r[3]; // 801D3F34
  c->r[3]=c->r[26]|c->r[26]; // 801D3F38
  c->lr=0x801D3F40u; f_80131B68(c); // 801D3F3C
  c->r[3]=c->r[27]|c->r[27]; // 801D3F40
  c->lr=0x801D3F48u; f_8012FCF8(c); // 801D3F44
  c->r[3]=c->r[26]+0x00003158u; // 801D3F48
  c->lr=0x801D3F50u; f_80110580(c); // 801D3F4C
  c->r[3]=c->r[27]|c->r[27]; // 801D3F50
  c->lr=0x801D3F58u; f_8012FD00(c); // 801D3F54
  c->r[3]=c->r[26]+0x000031A0u; // 801D3F58
  c->lr=0x801D3F60u; f_80110580(c); // 801D3F5C
  c->r[3]=c->r[27]|c->r[27]; // 801D3F60
  c->lr=0x801D3F68u; f_8012FD08(c); // 801D3F64
  c->r[3]=c->r[26]+0x00003158u; // 801D3F68
  c->lr=0x801D3F70u; f_80110588(c); // 801D3F6C
  c->r[3]=c->r[27]|c->r[27]; // 801D3F70
  c->lr=0x801D3F78u; f_8012FD10(c); // 801D3F74
  c->r[3]=c->r[26]+0x000031A0u; // 801D3F78
  c->lr=0x801D3F80u; f_80110588(c); // 801D3F7C
  c->r[3]=c->r[26]|c->r[26]; // 801D3F80
  c->r[4]=0u+0x00000000u; // 801D3F84
  c->lr=0x801D3F8Cu; f_80131388(c); // 801D3F88
  c->r[3]=c->r[26]|c->r[26]; // 801D3F8C
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3F90
  {uint32_t ea=c->r[2]+0xFFFF93C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3F94
  c->lr=0x801D3F9Cu; f_80131588(c); // 801D3F98
  c->r[3]=c->r[26]|c->r[26]; // 801D3F9C
  c->lr=0x801D3FA4u; f_8014CB20(c); // 801D3FA0
  c->r[3]=c->r[26]|c->r[26]; // 801D3FA4
  {uint32_t ea=c->r[2]+0xFFFF93DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3FA8
  c->lr=0x801D3FB0u; f_801315AC(c); // 801D3FAC
  c->r[3]=c->r[26]|c->r[26]; // 801D3FB0
  c->r[4]=c->r[13]+0xFFFF9BE8u; // 801D3FB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3FB8
  c->lr=0x801D3FC0u; f_801313D4(c); // 801D3FBC
  c->r[0]=0u+0x00000028u; // 801D3FC0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801D3FC4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D3FC8
  c->r[11]=c->r[1]+0x00000020u; // 801D3FCC
  c->lr=0x801D3FD4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3FD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3FD4
  c->lr=c->r[0]; // 801D3FD8
  c->r[1]=c->r[1]+0x00000030u; // 801D3FDC
  return; // 801D3FE0
}

// fn_801D3FE4
void f_801D3FE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3FE4
  c->r[0]=c->lr; // 801D3FE8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D3FEC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801D3FF0
  W32(c->r[1]+0x00000118u,c->r[30]); // 801D3FF4
  W32(c->r[1]+0x00000114u,c->r[29]); // 801D3FF8
  c->r[29]=c->r[3]|c->r[3]; // 801D3FFC
  c->lr=0x801D4004u; f_80131390(c); // 801D4000
  cmps(c,0,(int32_t)c->r[3],0); // 801D4004
  if (crb(c,2)) { goto L_801D40C8; } // 801D4008
  c->r[4]=c->r[1]+0x00000004u; // 801D400C
  c->r[3]=0u+0x00000000u; // 801D4010
  c->r[0]=0u+0x00000020u; // 801D4014
  c->ctr=c->r[0]; // 801D4018
L_801D401C:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D401C
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801D4020
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D401C; } // 801D4024
  c->lr=0x801D402Cu; f_8007B524(c); // 801D4028
  c->r[4]=0u+0x00000071u; // 801D402C
  c->lr=0x801D4034u; f_800A2EF0(c); // 801D4030
  c->r[30]=c->r[3]|c->r[3]; // 801D4034
  cmps(c,0,(int32_t)c->r[3],0); // 801D4038
  if (crb(c,2)) { goto L_801D40C8; } // 801D403C
  c->lr=0x801D4044u; f_801D4A74(c); // 801D4040
  c->lr=0x801D4048u; f_801D51D8(c); // 801D4044
  c->r[31]=c->r[3]|c->r[3]; // 801D4048
  cmps(c,0,(int32_t)c->r[3],0); // 801D404C
  if (!crb(c,2)) { goto L_801D4070; } // 801D4050
  c->lr=0x801D4058u; f_8007B524(c); // 801D4054
  c->r[4]=0u+0x00000072u; // 801D4058
  c->lr=0x801D4060u; f_800A2EF0(c); // 801D405C
  c->r[4]=c->r[3]|c->r[3]; // 801D4060
  c->r[3]=c->r[1]+0x00000008u; // 801D4064
  c->lr=0x801D406Cu; f_802E9548(c); // 801D4068
  goto L_801D40B0; // 801D406C
L_801D4070:;
  c->r[3]=c->r[1]+0x00000008u; // 801D4070
  c->r[4]=c->r[30]|c->r[30]; // 801D4074
  c->lr=0x801D407Cu; f_802E9548(c); // 801D4078
  c->r[30]=0u+0x00000000u; // 801D407C
  goto L_801D40A8; // 801D4080
L_801D4084:;
  c->lr=0x801D4088u; f_8007B524(c); // 801D4084
  c->r[4]=0u+0x00000073u; // 801D4088
  c->lr=0x801D4090u; f_800A2EF0(c); // 801D408C
  c->r[4]=c->r[3]|c->r[3]; // 801D4090
  cmps(c,0,(int32_t)c->r[3],0); // 801D4094
  if (crb(c,2)) { goto L_801D40C8; } // 801D4098
  c->r[3]=c->r[1]+0x00000008u; // 801D409C
  c->lr=0x801D40A4u; f_802E964C(c); // 801D40A0
  c->r[30]=c->r[30]+0x00000001u; // 801D40A4
L_801D40A8:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801D40A8
  if (crb(c,0)) { IRQCHK(c); goto L_801D4084; } // 801D40AC
L_801D40B0:;
  c->r[3]=c->r[29]|c->r[29]; // 801D40B0
  c->r[4]=c->r[1]+0x00000008u; // 801D40B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D40B8
  c->lr=0x801D40C0u; f_801313D4(c); // 801D40BC
  c->r[3]=c->r[29]|c->r[29]; // 801D40C0
  c->lr=0x801D40C8u; f_80131B00(c); // 801D40C4
L_801D40C8:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D40C8
  c->r[30]=R32(c->r[1]+0x00000118u); // 801D40CC
  c->r[29]=R32(c->r[1]+0x00000114u); // 801D40D0
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D40D4
  c->lr=c->r[0]; // 801D40D8
  c->r[1]=c->r[1]+0x00000120u; // 801D40DC
  return; // 801D40E0
}

// fn_801D40E4
void f_801D40E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D40E4
  c->r[0]=c->lr; // 801D40E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D40EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D40F0
  c->r[31]=c->r[3]|c->r[3]; // 801D40F4
  c->lr=0x801D40FCu; f_8012FAAC(c); // 801D40F8
  c->r[3]=0u+0x80470000u; // 801D40FC
  c->r[0]=c->r[3]+0x000029A8u; // 801D4100
  W32(c->r[31]+0x00000058u,c->r[0]); // 801D4104
  c->r[0]=0u+0x00000000u; // 801D4108
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D410C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801D4110
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801D4114
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801D4118
  c->r[3]=c->r[31]|c->r[31]; // 801D411C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4120
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4124
  c->lr=c->r[0]; // 801D4128
  c->r[1]=c->r[1]+0x00000010u; // 801D412C
  return; // 801D4130
}

// fn_801D4134
void f_801D4134(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4134
  c->r[0]=c->lr; // 801D4138
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D413C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4140
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4144
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4148
  c->r[29]=c->r[3]|c->r[3]; // 801D414C
  c->lr=0x801D4154u; f_80056B5C(c); // 801D4150
  c->r[30]=c->r[3]|c->r[3]; // 801D4154
  c->lr=0x801D415Cu; f_801F1340(c); // 801D4158
  c->lr=0x801D4160u; f_80056B54(c); // 801D415C
  c->r[3]=0u+0x00000B28u; // 801D4160
  c->lr=0x801D4168u; f_80047B64(c); // 801D4164
  c->r[31]=c->r[3]|c->r[3]; // 801D4168
  cmps(c,0,(int32_t)c->r[3],0); // 801D416C
  if (crb(c,2)) { goto L_801D4178; } // 801D4170
  c->lr=0x801D4178u; f_801D4900(c); // 801D4174
L_801D4178:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801D4178
  c->r[3]=c->r[30]|c->r[30]; // 801D417C
  c->lr=0x801D4184u; f_80056B54(c); // 801D4180
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801D4184
  c->r[4]=0u+0x00000000u; // 801D4188
  c->lr=0x801D4190u; f_80114AE0(c); // 801D418C
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801D4190
  c->r[4]=0u+0x00000000u; // 801D4194
  c->lr=0x801D419Cu; f_801169C8(c); // 801D4198
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801D419C
  c->r[12]=R32(c->r[3]+0x00000020u); // 801D41A0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801D41A4
  c->ctr=c->r[12]; // 801D41A8
  if (true) { c->lr=0x801D41B0u; dispatch(c,c->ctr); } // 801D41AC
  c->lr=0x801D41B4u; f_80056B5C(c); // 801D41B0
  c->r[30]=c->r[3]|c->r[3]; // 801D41B4
  c->lr=0x801D41BCu; f_801F1340(c); // 801D41B8
  c->lr=0x801D41C0u; f_80056B54(c); // 801D41BC
  c->r[3]=0u+0x00000B28u; // 801D41C0
  c->lr=0x801D41C8u; f_80047B64(c); // 801D41C4
  c->r[31]=c->r[3]|c->r[3]; // 801D41C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D41CC
  if (crb(c,2)) { goto L_801D41D8; } // 801D41D0
  c->lr=0x801D41D8u; f_801D3804(c); // 801D41D4
L_801D41D8:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801D41D8
  c->r[3]=c->r[30]|c->r[30]; // 801D41DC
  c->lr=0x801D41E4u; f_80056B54(c); // 801D41E0
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801D41E4
  c->r[4]=0u+0x00000000u; // 801D41E8
  c->lr=0x801D41F0u; f_80114AE0(c); // 801D41EC
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801D41F0
  c->r[4]=0u+0x00000001u; // 801D41F4
  c->lr=0x801D41FCu; f_801169C8(c); // 801D41F8
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801D41FC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801D4200
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801D4204
  c->ctr=c->r[12]; // 801D4208
  if (true) { c->lr=0x801D4210u; dispatch(c,c->ctr); } // 801D420C
  c->lr=0x801D4214u; f_80056B5C(c); // 801D4210
  c->r[30]=c->r[3]|c->r[3]; // 801D4214
  c->lr=0x801D421Cu; f_801F1340(c); // 801D4218
  c->lr=0x801D4220u; f_80056B54(c); // 801D421C
  c->r[3]=0u+0x00003200u; // 801D4220
  c->lr=0x801D4228u; f_80047B64(c); // 801D4224
  c->r[31]=c->r[3]|c->r[3]; // 801D4228
  cmps(c,0,(int32_t)c->r[3],0); // 801D422C
  if (crb(c,2)) { goto L_801D4238; } // 801D4230
  c->lr=0x801D4238u; f_801D3AE8(c); // 801D4234
L_801D4238:;
  W32(c->r[29]+0x000000C8u,c->r[31]); // 801D4238
  c->r[3]=c->r[30]|c->r[30]; // 801D423C
  c->lr=0x801D4244u; f_80056B54(c); // 801D4240
  c->r[3]=R32(c->r[29]+0x000000C8u); // 801D4244
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D4248
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D424C
  c->ctr=c->r[12]; // 801D4250
  if (true) { c->lr=0x801D4258u; dispatch(c,c->ctr); } // 801D4254
  c->lr=0x801D425Cu; f_80056B5C(c); // 801D4258
  c->r[30]=c->r[3]|c->r[3]; // 801D425C
  c->lr=0x801D4264u; f_801F1340(c); // 801D4260
  c->lr=0x801D4268u; f_80056B54(c); // 801D4264
  c->r[3]=0u+0x00003200u; // 801D4268
  c->lr=0x801D4270u; f_80047B64(c); // 801D426C
  c->r[31]=c->r[3]|c->r[3]; // 801D4270
  cmps(c,0,(int32_t)c->r[3],0); // 801D4274
  if (crb(c,2)) { goto L_801D4280; } // 801D4278
  c->lr=0x801D4280u; f_801D3DA8(c); // 801D427C
L_801D4280:;
  W32(c->r[29]+0x000000CCu,c->r[31]); // 801D4280
  c->r[3]=c->r[30]|c->r[30]; // 801D4284
  c->lr=0x801D428Cu; f_80056B54(c); // 801D4288
  c->r[3]=R32(c->r[29]+0x000000CCu); // 801D428C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D4290
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D4294
  c->ctr=c->r[12]; // 801D4298
  if (true) { c->lr=0x801D42A0u; dispatch(c,c->ctr); } // 801D429C
  c->r[3]=c->r[29]|c->r[29]; // 801D42A0
  c->lr=0x801D42A8u; f_801D45D4(c); // 801D42A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D42A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D42AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D42B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D42B4
  c->lr=c->r[0]; // 801D42B8
  c->r[1]=c->r[1]+0x00000020u; // 801D42BC
  return; // 801D42C0
}

// fn_801D42C4
void f_801D42C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D42C4
  c->r[0]=c->lr; // 801D42C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D42CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D42D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D42D4
  c->r[30]=c->r[3]|c->r[3]; // 801D42D8
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801D42DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D42E0
  if (crb(c,2)) { goto L_801D4338; } // 801D42E4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801D42E8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801D42EC
  c->ctr=c->r[12]; // 801D42F0
  if (true) { c->lr=0x801D42F8u; dispatch(c,c->ctr); } // 801D42F4
  c->lr=0x801D42FCu; f_80056B5C(c); // 801D42F8
  c->r[31]=c->r[3]|c->r[3]; // 801D42FC
  c->lr=0x801D4304u; f_801F1340(c); // 801D4300
  c->lr=0x801D4308u; f_80056B54(c); // 801D4304
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D4308
  cmps(c,0,(int32_t)c->r[3],0); // 801D430C
  if (crb(c,2)) { goto L_801D4328; } // 801D4310
  c->r[4]=0u+0x00000001u; // 801D4314
  c->r[12]=R32(c->r[3]+0x00000020u); // 801D4318
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D431C
  c->ctr=c->r[12]; // 801D4320
  if (true) { c->lr=0x801D4328u; dispatch(c,c->ctr); } // 801D4324
L_801D4328:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4328
  c->lr=0x801D4330u; f_80056B54(c); // 801D432C
  c->r[0]=0u+0x00000000u; // 801D4330
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801D4334
L_801D4338:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801D4338
  cmps(c,0,(int32_t)c->r[3],0); // 801D433C
  if (crb(c,2)) { goto L_801D4394; } // 801D4340
  c->r[12]=R32(c->r[3]+0x00000020u); // 801D4344
  c->r[12]=R32(c->r[12]+0x00000060u); // 801D4348
  c->ctr=c->r[12]; // 801D434C
  if (true) { c->lr=0x801D4354u; dispatch(c,c->ctr); } // 801D4350
  c->lr=0x801D4358u; f_80056B5C(c); // 801D4354
  c->r[31]=c->r[3]|c->r[3]; // 801D4358
  c->lr=0x801D4360u; f_801F1340(c); // 801D435C
  c->lr=0x801D4364u; f_80056B54(c); // 801D4360
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801D4364
  cmps(c,0,(int32_t)c->r[3],0); // 801D4368
  if (crb(c,2)) { goto L_801D4384; } // 801D436C
  c->r[4]=0u+0x00000001u; // 801D4370
  c->r[12]=R32(c->r[3]+0x00000020u); // 801D4374
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D4378
  c->ctr=c->r[12]; // 801D437C
  if (true) { c->lr=0x801D4384u; dispatch(c,c->ctr); } // 801D4380
L_801D4384:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4384
  c->lr=0x801D438Cu; f_80056B54(c); // 801D4388
  c->r[0]=0u+0x00000000u; // 801D438C
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801D4390
L_801D4394:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D4394
  cmps(c,0,(int32_t)c->r[3],0); // 801D4398
  if (crb(c,2)) { goto L_801D43F0; } // 801D439C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D43A0
  c->r[12]=R32(c->r[12]+0x00000048u); // 801D43A4
  c->ctr=c->r[12]; // 801D43A8
  if (true) { c->lr=0x801D43B0u; dispatch(c,c->ctr); } // 801D43AC
  c->lr=0x801D43B4u; f_80056B5C(c); // 801D43B0
  c->r[31]=c->r[3]|c->r[3]; // 801D43B4
  c->lr=0x801D43BCu; f_801F1340(c); // 801D43B8
  c->lr=0x801D43C0u; f_80056B54(c); // 801D43BC
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D43C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D43C4
  if (crb(c,2)) { goto L_801D43E0; } // 801D43C8
  c->r[4]=0u+0x00000001u; // 801D43CC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D43D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D43D4
  c->ctr=c->r[12]; // 801D43D8
  if (true) { c->lr=0x801D43E0u; dispatch(c,c->ctr); } // 801D43DC
L_801D43E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801D43E0
  c->lr=0x801D43E8u; f_80056B54(c); // 801D43E4
  c->r[0]=0u+0x00000000u; // 801D43E8
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801D43EC
L_801D43F0:;
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801D43F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D43F4
  if (crb(c,2)) { goto L_801D444C; } // 801D43F8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D43FC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801D4400
  c->ctr=c->r[12]; // 801D4404
  if (true) { c->lr=0x801D440Cu; dispatch(c,c->ctr); } // 801D4408
  c->lr=0x801D4410u; f_80056B5C(c); // 801D440C
  c->r[31]=c->r[3]|c->r[3]; // 801D4410
  c->lr=0x801D4418u; f_801F1340(c); // 801D4414
  c->lr=0x801D441Cu; f_80056B54(c); // 801D4418
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801D441C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4420
  if (crb(c,2)) { goto L_801D443C; } // 801D4424
  c->r[4]=0u+0x00000001u; // 801D4428
  c->r[12]=R32(c->r[3]+0x00000058u); // 801D442C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D4430
  c->ctr=c->r[12]; // 801D4434
  if (true) { c->lr=0x801D443Cu; dispatch(c,c->ctr); } // 801D4438
L_801D443C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D443C
  c->lr=0x801D4444u; f_80056B54(c); // 801D4440
  c->r[0]=0u+0x00000000u; // 801D4444
  W32(c->r[30]+0x000000CCu,c->r[0]); // 801D4448
L_801D444C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D444C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4450
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4454
  c->lr=c->r[0]; // 801D4458
  c->r[1]=c->r[1]+0x00000010u; // 801D445C
  return; // 801D4460
}

// fn_801D4464
void f_801D4464(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4464
  c->r[0]=c->lr; // 801D4468
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D446C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4470
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4474
  c->r[30]=c->r[3]|c->r[3]; // 801D4478
  c->r[31]=c->r[4]|c->r[4]; // 801D447C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4480
  if (crb(c,2)) { goto L_801D44A4; } // 801D4484
  c->r[4]=0u+0x00000000u; // 801D4488
  c->lr=0x801D4490u; f_80114B08(c); // 801D448C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D4490
  cmps(c,0,(int32_t)c->r[0],0); // 801D4494
  if (!crb(c,1)) { goto L_801D44A4; } // 801D4498
  c->r[3]=c->r[30]|c->r[30]; // 801D449C
  c->lr=0x801D44A4u; f_80047B20(c); // 801D44A0
L_801D44A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D44A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D44A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D44AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D44B0
  c->lr=c->r[0]; // 801D44B4
  c->r[1]=c->r[1]+0x00000010u; // 801D44B8
  return; // 801D44BC
}

// fn_801D44C0
void f_801D44C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D44C0
  c->r[0]=c->lr; // 801D44C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D44C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D44CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D44D0
  c->r[30]=c->r[3]|c->r[3]; // 801D44D4
  c->r[31]=c->r[4]|c->r[4]; // 801D44D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D44DC
  if (crb(c,2)) { goto L_801D4500; } // 801D44E0
  c->r[4]=0u+0x00000000u; // 801D44E4
  c->lr=0x801D44ECu; f_80114B08(c); // 801D44E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D44EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D44F0
  if (!crb(c,1)) { goto L_801D4500; } // 801D44F4
  c->r[3]=c->r[30]|c->r[30]; // 801D44F8
  c->lr=0x801D4500u; f_80047B20(c); // 801D44FC
L_801D4500:;
  c->r[3]=c->r[30]|c->r[30]; // 801D4500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4504
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4508
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D450C
  c->lr=c->r[0]; // 801D4510
  c->r[1]=c->r[1]+0x00000010u; // 801D4514
  return; // 801D4518
}

// fn_801D451C
void f_801D451C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D451C
  c->r[0]=c->lr; // 801D4520
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4528
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D452C
  c->r[30]=c->r[3]|c->r[3]; // 801D4530
  c->r[31]=c->r[4]|c->r[4]; // 801D4534
  cmps(c,0,(int32_t)c->r[3],0); // 801D4538
  if (crb(c,2)) { goto L_801D455C; } // 801D453C
  c->r[4]=0u+0x00000000u; // 801D4540
  c->lr=0x801D4548u; f_8012F7F0(c); // 801D4544
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D4548
  cmps(c,0,(int32_t)c->r[0],0); // 801D454C
  if (!crb(c,1)) { goto L_801D455C; } // 801D4550
  c->r[3]=c->r[30]|c->r[30]; // 801D4554
  c->lr=0x801D455Cu; f_80047B20(c); // 801D4558
L_801D455C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D455C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4560
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4564
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4568
  c->lr=c->r[0]; // 801D456C
  c->r[1]=c->r[1]+0x00000010u; // 801D4570
  return; // 801D4574
}

// fn_801D4578
void f_801D4578(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4578
  c->r[0]=c->lr; // 801D457C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4584
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4588
  c->r[30]=c->r[3]|c->r[3]; // 801D458C
  c->r[31]=c->r[4]|c->r[4]; // 801D4590
  cmps(c,0,(int32_t)c->r[3],0); // 801D4594
  if (crb(c,2)) { goto L_801D45B8; } // 801D4598
  c->r[4]=0u+0x00000000u; // 801D459C
  c->lr=0x801D45A4u; f_8012F7F0(c); // 801D45A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D45A4
  cmps(c,0,(int32_t)c->r[0],0); // 801D45A8
  if (!crb(c,1)) { goto L_801D45B8; } // 801D45AC
  c->r[3]=c->r[30]|c->r[30]; // 801D45B0
  c->lr=0x801D45B8u; f_80047B20(c); // 801D45B4
L_801D45B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D45B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D45BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D45C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D45C4
  c->lr=c->r[0]; // 801D45C8
  c->r[1]=c->r[1]+0x00000010u; // 801D45CC
  return; // 801D45D0
}

// fn_801D45D4
void f_801D45D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D45D4
  c->r[0]=c->lr; // 801D45D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D45DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D45E0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D45E4
  c->r[30]=c->r[3]|c->r[3]; // 801D45E8
  c->r[3]=c->r[1]+0x00000028u; // 801D45EC
  c->lr=0x801D45F4u; f_8004B0A4(c); // 801D45F0
  c->r[3]=c->r[1]+0x0000001Cu; // 801D45F4
  c->lr=0x801D45FCu; f_8004B0A4(c); // 801D45F8
  c->r[3]=c->r[1]+0x00000010u; // 801D45FC
  c->lr=0x801D4604u; f_8004B0A4(c); // 801D4600
  c->r[3]=c->r[1]+0x00000008u; // 801D4604
  c->lr=0x801D460Cu; f_800592DC(c); // 801D4608
  c->lr=0x801D4610u; f_8011B41C(c); // 801D460C
  c->r[4]=0u+0x00000002u; // 801D4610
  c->lr=0x801D4618u; f_8011B814(c); // 801D4614
  c->r[31]=c->r[3]|c->r[3]; // 801D4618
  c->r[4]=c->r[1]+0x00000028u; // 801D461C
  c->lr=0x801D4624u; f_8014F564(c); // 801D4620
  c->r[3]=c->r[31]|c->r[31]; // 801D4624
  c->r[4]=c->r[1]+0x00000010u; // 801D4628
  c->lr=0x801D4630u; f_8014F59C(c); // 801D462C
  c->r[3]=c->r[1]+0x0000001Cu; // 801D4630
  c->r[4]=c->r[1]+0x00000028u; // 801D4634
  c->lr=0x801D463Cu; f_8004A65C(c); // 801D4638
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D463C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4640
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4644
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D4648
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D464C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4650
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4654
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D4658
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801D465C
  c->r[4]=c->r[1]+0x00000028u; // 801D4660
  c->lr=0x801D4668u; f_8014CA74(c); // 801D4664
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801D4668
  c->r[4]=c->r[1]+0x0000001Cu; // 801D466C
  c->lr=0x801D4674u; f_8014CA74(c); // 801D4670
  c->r[3]=c->r[31]|c->r[31]; // 801D4674
  c->r[4]=c->r[1]+0x00000008u; // 801D4678
  c->lr=0x801D4680u; f_8014F620(c); // 801D467C
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D4680
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4684
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4688
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D468C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4690
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4694
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801D4698
  c->lr=0x801D46A0u; f_801313A0(c); // 801D469C
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801D46A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D46A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D46A8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D46AC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D46B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D46B4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801D46B8
  {uint32_t ea=c->r[2]+0xFFFF93E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D46BC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 801D46C0
  c->lr=0x801D46C8u; f_801313A0(c); // 801D46C4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D46C8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D46CC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D46D0
  c->lr=c->r[0]; // 801D46D4
  c->r[1]=c->r[1]+0x00000040u; // 801D46D8
  return; // 801D46DC
}

// fn_801D46E0
void f_801D46E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D46E0
  c->r[0]=c->lr; // 801D46E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D46E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D46EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D46F0
  c->r[30]=c->r[3]|c->r[3]; // 801D46F4
  c->r[31]=c->r[4]|c->r[4]; // 801D46F8
  c->lr=0x801D4700u; f_801D4724(c); // 801D46FC
  c->r[3]=c->r[30]|c->r[30]; // 801D4700
  c->r[4]=c->r[31]|c->r[31]; // 801D4704
  c->lr=0x801D470Cu; f_801D472C(c); // 801D4708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D470C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4710
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4714
  c->lr=c->r[0]; // 801D4718
  c->r[1]=c->r[1]+0x00000010u; // 801D471C
  return; // 801D4720
}

// fn_801D4724
void f_801D4724(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801D4724
  f_8012F910(c); return; // 801D4728
}

// fn_801D472C
void f_801D472C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D472C
  c->r[0]=c->lr; // 801D4730
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4738
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D473C
  c->r[30]=c->r[3]|c->r[3]; // 801D4740
  c->r[31]=c->r[4]|c->r[4]; // 801D4744
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801D4748
  c->lr=0x801D4750u; f_8012F910(c); // 801D474C
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D4750
  c->r[4]=c->r[31]|c->r[31]; // 801D4754
  c->lr=0x801D475Cu; f_80131388(c); // 801D4758
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801D475C
  c->r[4]=c->r[31]|c->r[31]; // 801D4760
  c->lr=0x801D4768u; f_80131388(c); // 801D4764
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4768
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D476C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4770
  c->lr=c->r[0]; // 801D4774
  c->r[1]=c->r[1]+0x00000010u; // 801D4778
  return; // 801D477C
}

// fn_801D4780
void f_801D4780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4780
  c->r[0]=c->lr; // 801D4784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D478C
  c->r[31]=c->r[3]|c->r[3]; // 801D4790
  c->r[4]=0u+0x00000001u; // 801D4794
  c->lr=0x801D479Cu; f_801D4724(c); // 801D4798
  c->r[3]=c->r[31]|c->r[31]; // 801D479C
  c->r[4]=0u+0x00000001u; // 801D47A0
  c->lr=0x801D47A8u; f_801D472C(c); // 801D47A4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801D47A8
  c->r[4]=0u+0x00000001u; // 801D47AC
  c->r[5]=0u+0x00000006u; // 801D47B0
  c->lr=0x801D47B8u; f_8012E640(c); // 801D47B4
  c->r[3]=c->r[31]|c->r[31]; // 801D47B8
  c->lr=0x801D47C0u; f_801D45D4(c); // 801D47BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D47C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D47C4
  c->lr=c->r[0]; // 801D47C8
  c->r[1]=c->r[1]+0x00000010u; // 801D47CC
  return; // 801D47D0
}

// fn_801D47D4
void f_801D47D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D47D4
  c->r[0]=c->lr; // 801D47D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D47DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D47E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D47E4
  c->r[30]=c->r[3]|c->r[3]; // 801D47E8
  c->r[31]=c->r[4]|c->r[4]; // 801D47EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D47F0
  if (crb(c,2)) { goto L_801D4814; } // 801D47F4
  c->r[4]=0u+0x00000000u; // 801D47F8
  c->lr=0x801D4800u; f_8012FB1C(c); // 801D47FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D4800
  cmps(c,0,(int32_t)c->r[0],0); // 801D4804
  if (!crb(c,1)) { goto L_801D4814; } // 801D4808
  c->r[3]=c->r[30]|c->r[30]; // 801D480C
  c->lr=0x801D4814u; f_80047B20(c); // 801D4810
L_801D4814:;
  c->r[3]=c->r[30]|c->r[30]; // 801D4814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4818
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D481C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4820
  c->lr=c->r[0]; // 801D4824
  c->r[1]=c->r[1]+0x00000010u; // 801D4828
  return; // 801D482C
}

// fn_801D4830
void f_801D4830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4830
  c->r[0]=c->lr; // 801D4834
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D483C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4840
  c->r[30]=c->r[3]|c->r[3]; // 801D4844
  c->r[31]=c->r[4]|c->r[4]; // 801D4848
  cmps(c,0,(int32_t)c->r[3],0); // 801D484C
  if (crb(c,2)) { goto L_801D4870; } // 801D4850
  c->r[4]=0u+0x00000000u; // 801D4854
  c->lr=0x801D485Cu; f_80138B24(c); // 801D4858
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D485C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4860
  if (!crb(c,1)) { goto L_801D4870; } // 801D4864
  c->r[3]=c->r[30]|c->r[30]; // 801D4868
  c->lr=0x801D4870u; f_80047B20(c); // 801D486C
L_801D4870:;
  c->r[3]=c->r[30]|c->r[30]; // 801D4870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4874
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4878
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D487C
  c->lr=c->r[0]; // 801D4880
  c->r[1]=c->r[1]+0x00000010u; // 801D4884
  return; // 801D4888
}

// fn_801D488C
void f_801D488C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D488C
  c->r[0]=c->lr; // 801D4890
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4898
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D489C
  c->r[30]=c->r[3]|c->r[3]; // 801D48A0
  c->r[31]=c->r[4]|c->r[4]; // 801D48A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D48A8
  if (crb(c,2)) { goto L_801D48CC; } // 801D48AC
  c->r[4]=0u+0x00000000u; // 801D48B0
  c->lr=0x801D48B8u; f_8013CED0(c); // 801D48B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D48B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D48BC
  if (!crb(c,1)) { goto L_801D48CC; } // 801D48C0
  c->r[3]=c->r[30]|c->r[30]; // 801D48C4
  c->lr=0x801D48CCu; f_80047B20(c); // 801D48C8
L_801D48CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801D48CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D48D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D48D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D48D8
  c->lr=c->r[0]; // 801D48DC
  c->r[1]=c->r[1]+0x00000010u; // 801D48E0
  return; // 801D48E4
}

// fn_801D48E8
void f_801D48E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801D48E8
  return; // 801D48EC
}

// fn_801D48F0
void f_801D48F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801D48F0
  return; // 801D48F4
}

// fn_801D48F8
void f_801D48F8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801D48F8
  return; // 801D48FC
}

// fn_801D4900
void f_801D4900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4900
  c->r[0]=c->lr; // 801D4904
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D490C
  c->r[31]=c->r[3]|c->r[3]; // 801D4910
  c->lr=0x801D4918u; f_8012F740(c); // 801D4914
  c->r[3]=0u+0x80470000u; // 801D4918
  c->r[3]=c->r[3]+0x00002BF0u; // 801D491C
  W32(c->r[31]+0x00000020u,c->r[3]); // 801D4920
  c->r[0]=c->r[3]+0x0000000Cu; // 801D4924
  W32(c->r[31]+0x00000288u,c->r[0]); // 801D4928
  c->r[0]=c->r[3]+0x00000018u; // 801D492C
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801D4930
  c->r[0]=c->r[3]+0x00000024u; // 801D4934
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801D4938
  c->r[0]=c->r[3]+0x00000030u; // 801D493C
  W32(c->r[31]+0x00000300u,c->r[0]); // 801D4940
  c->r[3]=c->r[31]|c->r[31]; // 801D4944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4948
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D494C
  c->lr=c->r[0]; // 801D4950
  c->r[1]=c->r[1]+0x00000010u; // 801D4954
  return; // 801D4958
}

// fn_801D495C
void f_801D495C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801D495C
  f_801D4578(c); return; // 801D4960
}

// fn_801D4964
void f_801D4964(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801D4964
  f_801D4578(c); return; // 801D4968
}

// fn_801D496C
void f_801D496C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801D496C
  f_801D4578(c); return; // 801D4970
}

// fn_801D4974
void f_801D4974(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801D4974
  f_801D4578(c); return; // 801D4978
}

// fn_801D497C
void f_801D497C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801D497C
  f_801D451C(c); return; // 801D4980
}

// fn_801D4984
void f_801D4984(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801D4984
  f_801D451C(c); return; // 801D4988
}

// fn_801D498C
void f_801D498C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801D498C
  f_801D451C(c); return; // 801D4990
}

// fn_801D4994
void f_801D4994(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801D4994
  f_801D451C(c); return; // 801D4998
}

// fn_801D499C
void f_801D499C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D499C
  c->r[0]=c->lr; // 801D49A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D49A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D49A8
  c->r[31]=c->r[3]|c->r[3]; // 801D49AC
  c->lr=0x801D49B4u; f_8012FBEC(c); // 801D49B0
  c->r[3]=0u+0x80470000u; // 801D49B4
  c->r[0]=c->r[3]+0x00002DE8u; // 801D49B8
  W32(c->r[31]+0x00000044u,c->r[0]); // 801D49BC
  c->r[3]=c->r[31]+0x00000050u; // 801D49C0
  c->lr=0x801D49C8u; f_8004B0A4(c); // 801D49C4
  c->r[3]=c->r[31]+0x0000005Cu; // 801D49C8
  c->lr=0x801D49D0u; f_8004B0A4(c); // 801D49CC
  c->r[3]=c->r[31]+0x00000068u; // 801D49D0
  c->lr=0x801D49D8u; f_8004B0A4(c); // 801D49D4
  c->r[3]=c->r[31]|c->r[31]; // 801D49D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D49DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D49E0
  c->lr=c->r[0]; // 801D49E4
  c->r[1]=c->r[1]+0x00000010u; // 801D49E8
  return; // 801D49EC
}

// fn_801D49F0
void f_801D49F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF93E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D49F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D49F4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801D49F8
  return; // 801D49FC
}

// fn_801D4A00
void f_801D4A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4A00
  return; // 801D4A04
}

// fn_801D4A08
void f_801D4A08(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF93ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4A08
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D4A0C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D4A10
  return; // 801D4A14
}

// fn_801D4A18
void f_801D4A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4A18
  return; // 801D4A1C
}

// fn_801D4A20
void f_801D4A20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000050u; // 801D4A20
  f_8004A65C(c); return; // 801D4A24
}

// fn_801D4A28
void f_801D4A28(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801D4A28
  c->r[3]=c->r[4]|c->r[4]; // 801D4A2C
  c->r[4]=c->r[5]+0x00000050u; // 801D4A30
  f_8004A65C(c); return; // 801D4A34
}

// fn_801D4A38
void f_801D4A38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000005Cu; // 801D4A38
  f_8004A65C(c); return; // 801D4A3C
}

// fn_801D4A40
void f_801D4A40(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801D4A40
  c->r[3]=c->r[4]|c->r[4]; // 801D4A44
  c->r[4]=c->r[5]+0x0000005Cu; // 801D4A48
  f_8004A65C(c); return; // 801D4A4C
}

// fn_801D4A50
void f_801D4A50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000068u; // 801D4A50
  f_8004A65C(c); return; // 801D4A54
}

// fn_801D4A58
void f_801D4A58(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801D4A58
  c->r[3]=c->r[4]|c->r[4]; // 801D4A5C
  c->r[4]=c->r[5]+0x00000068u; // 801D4A60
  f_8004A65C(c); return; // 801D4A64
}

// fn_801D4A68
void f_801D4A68(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801D4A68
  c->r[3]=c->r[3]+0x00000DD0u; // 801D4A6C
  return; // 801D4A70
}

// fn_801D4A74
void f_801D4A74(Ctx* __restrict c) {
  c->r[3]=0u+0x804E0000u; // 801D4A74
  c->r[3]=c->r[3]+0xFFFF9BA8u; // 801D4A78
  return; // 801D4A7C
}

// fn_801D4A80
void f_801D4A80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4A80
  c->r[0]=c->lr; // 801D4A84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4A88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4A8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4A90
  c->r[30]=c->r[3]|c->r[3]; // 801D4A94
  c->r[31]=0u+0x00000000u; // 801D4A98
  W32(c->r[3]+0x00000000u,c->r[31]); // 801D4A9C
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D4AA0
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D4AA4
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801D4AA8
  W32(c->r[3]+0x00000010u,c->r[31]); // 801D4AAC
  W32(c->r[3]+0x00000014u,c->r[31]); // 801D4AB0
  W32(c->r[3]+0x00000108u,c->r[31]); // 801D4AB4
  W32(c->r[3]+0x00000278u,c->r[31]); // 801D4AB8
  W32(c->r[3]+0x0000027Cu,c->r[31]); // 801D4ABC
  W32(c->r[3]+0x00000280u,c->r[31]); // 801D4AC0
  W32(c->r[3]+0x00000284u,c->r[31]); // 801D4AC4
  W32(c->r[3]+0x00000288u,c->r[31]); // 801D4AC8
  W32(c->r[3]+0x0000028Cu,c->r[31]); // 801D4ACC
  W32(c->r[3]+0x00000290u,c->r[31]); // 801D4AD0
  W32(c->r[3]+0x000005B4u,c->r[31]); // 801D4AD4
  W32(c->r[3]+0x000005B8u,c->r[31]); // 801D4AD8
  W32(c->r[3]+0x000005BCu,c->r[31]); // 801D4ADC
  W32(c->r[3]+0x000005C0u,c->r[31]); // 801D4AE0
  W32(c->r[3]+0x000005C4u,c->r[31]); // 801D4AE4
  W32(c->r[3]+0x000005C8u,c->r[31]); // 801D4AE8
  W32(c->r[3]+0x00000294u,c->r[31]); // 801D4AEC
  W32(c->r[3]+0x00000298u,c->r[31]); // 801D4AF0
  W32(c->r[3]+0x0000029Cu,c->r[31]); // 801D4AF4
  c->r[3]=c->r[3]+0x000002A0u; // 801D4AF8
  c->r[4]=0u+0x00000000u; // 801D4AFC
  c->r[5]=0u+0x00000100u; // 801D4B00
  c->lr=0x801D4B08u; f_800060B8(c); // 801D4B04
  W32(c->r[30]+0x000003A0u,c->r[31]); // 801D4B08
  W32(c->r[30]+0x000003A4u,c->r[31]); // 801D4B0C
  W32(c->r[30]+0x000003A8u,c->r[31]); // 801D4B10
  c->r[3]=c->r[30]+0x000003ACu; // 801D4B14
  c->r[4]=0u+0x00000000u; // 801D4B18
  c->r[5]=0u+0x00000100u; // 801D4B1C
  c->lr=0x801D4B24u; f_800060B8(c); // 801D4B20
  W32(c->r[30]+0x000004ACu,c->r[31]); // 801D4B24
  W32(c->r[30]+0x000004B0u,c->r[31]); // 801D4B28
  c->r[3]=c->r[30]+0x000004B4u; // 801D4B2C
  c->r[4]=0u+0x00000000u; // 801D4B30
  c->r[5]=0u+0x00000100u; // 801D4B34
  c->lr=0x801D4B3Cu; f_800060B8(c); // 801D4B38
  W32(c->r[30]+0x00000018u,c->r[31]); // 801D4B3C
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801D4B40
  W32(c->r[30]+0x00000020u,c->r[31]); // 801D4B44
  W32(c->r[30]+0x00000024u,c->r[31]); // 801D4B48
  W32(c->r[30]+0x00000028u,c->r[31]); // 801D4B4C
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801D4B50
  W32(c->r[30]+0x00000030u,c->r[31]); // 801D4B54
  W32(c->r[30]+0x00000034u,c->r[31]); // 801D4B58
  W32(c->r[30]+0x00000038u,c->r[31]); // 801D4B5C
  W32(c->r[30]+0x0000003Cu,c->r[31]); // 801D4B60
  W32(c->r[30]+0x00000040u,c->r[31]); // 801D4B64
  W32(c->r[30]+0x00000044u,c->r[31]); // 801D4B68
  W32(c->r[30]+0x00000048u,c->r[31]); // 801D4B6C
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 801D4B70
  W32(c->r[30]+0x00000050u,c->r[31]); // 801D4B74
  W32(c->r[30]+0x00000054u,c->r[31]); // 801D4B78
  W32(c->r[30]+0x00000058u,c->r[31]); // 801D4B7C
  W32(c->r[30]+0x0000005Cu,c->r[31]); // 801D4B80
  W32(c->r[30]+0x00000060u,c->r[31]); // 801D4B84
  W32(c->r[30]+0x00000064u,c->r[31]); // 801D4B88
  W32(c->r[30]+0x00000068u,c->r[31]); // 801D4B8C
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 801D4B90
  W32(c->r[30]+0x00000070u,c->r[31]); // 801D4B94
  W32(c->r[30]+0x00000074u,c->r[31]); // 801D4B98
  W32(c->r[30]+0x00000078u,c->r[31]); // 801D4B9C
  W32(c->r[30]+0x0000007Cu,c->r[31]); // 801D4BA0
  W32(c->r[30]+0x00000080u,c->r[31]); // 801D4BA4
  W32(c->r[30]+0x00000084u,c->r[31]); // 801D4BA8
  W32(c->r[30]+0x00000088u,c->r[31]); // 801D4BAC
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 801D4BB0
  W32(c->r[30]+0x00000090u,c->r[31]); // 801D4BB4
  W32(c->r[30]+0x00000094u,c->r[31]); // 801D4BB8
  W32(c->r[30]+0x00000098u,c->r[31]); // 801D4BBC
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 801D4BC0
  W32(c->r[30]+0x000000A0u,c->r[31]); // 801D4BC4
  W32(c->r[30]+0x000000A4u,c->r[31]); // 801D4BC8
  W32(c->r[30]+0x000000A8u,c->r[31]); // 801D4BCC
  W32(c->r[30]+0x000000ACu,c->r[31]); // 801D4BD0
  W32(c->r[30]+0x000000B0u,c->r[31]); // 801D4BD4
  W32(c->r[30]+0x000000B4u,c->r[31]); // 801D4BD8
  W32(c->r[30]+0x000000B8u,c->r[31]); // 801D4BDC
  W32(c->r[30]+0x000000BCu,c->r[31]); // 801D4BE0
  W32(c->r[30]+0x000000C0u,c->r[31]); // 801D4BE4
  W32(c->r[30]+0x000000C4u,c->r[31]); // 801D4BE8
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801D4BEC
  W32(c->r[30]+0x000000CCu,c->r[31]); // 801D4BF0
  W32(c->r[30]+0x000000D0u,c->r[31]); // 801D4BF4
  W32(c->r[30]+0x000000D4u,c->r[31]); // 801D4BF8
  W32(c->r[30]+0x000000D8u,c->r[31]); // 801D4BFC
  W32(c->r[30]+0x000000DCu,c->r[31]); // 801D4C00
  W32(c->r[30]+0x000000E0u,c->r[31]); // 801D4C04
  W32(c->r[30]+0x000000E4u,c->r[31]); // 801D4C08
  W32(c->r[30]+0x000000E8u,c->r[31]); // 801D4C0C
  W32(c->r[30]+0x000000ECu,c->r[31]); // 801D4C10
  W32(c->r[30]+0x000000F0u,c->r[31]); // 801D4C14
  W32(c->r[30]+0x000000F4u,c->r[31]); // 801D4C18
  W32(c->r[30]+0x000000F8u,c->r[31]); // 801D4C1C
  W32(c->r[30]+0x000000FCu,c->r[31]); // 801D4C20
  W32(c->r[30]+0x00000100u,c->r[31]); // 801D4C24
  W32(c->r[30]+0x00000104u,c->r[31]); // 801D4C28
  W32(c->r[30]+0x000005CCu,c->r[31]); // 801D4C2C
  W32(c->r[30]+0x000005D0u,c->r[31]); // 801D4C30
  W32(c->r[30]+0x000005D4u,c->r[31]); // 801D4C34
  W32(c->r[30]+0x000005D8u,c->r[31]); // 801D4C38
  W32(c->r[30]+0x00000274u,c->r[31]); // 801D4C3C
  c->r[3]=c->r[30]|c->r[30]; // 801D4C40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4C44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4C48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4C4C
  c->lr=c->r[0]; // 801D4C50
  c->r[1]=c->r[1]+0x00000010u; // 801D4C54
  return; // 801D4C58
}

// fn_801D4C5C
void f_801D4C5C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 801D4C5C
  c->r[0]=0u+0x00000000u; // 801D4C60
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D4C64
  c->r[3]=0u+0x00000001u; // 801D4C68
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4C6C
  c->r[0]=c->r[4]&c->r[0]; // 801D4C70
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C74
  if (crb(c,2)) { goto L_801D4C80; } // 801D4C78
  c->r[5]=0u+0x00000001u; // 801D4C7C
L_801D4C80:;
  c->r[0]=0u+0x00000001u; // 801D4C80
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4C84
  c->r[0]=c->r[4]&c->r[0]; // 801D4C88
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C8C
  if (crb(c,2)) { goto L_801D4C98; } // 801D4C90
  c->r[5]=c->r[5]+0x00000001u; // 801D4C94
L_801D4C98:;
  c->r[0]=0u+0x00000002u; // 801D4C98
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4C9C
  c->r[0]=c->r[4]&c->r[0]; // 801D4CA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4CA4
  if (crb(c,2)) { goto L_801D4CB0; } // 801D4CA8
  c->r[5]=c->r[5]+0x00000001u; // 801D4CAC
L_801D4CB0:;
  c->r[0]=0u+0x00000003u; // 801D4CB0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4CB4
  c->r[0]=c->r[4]&c->r[0]; // 801D4CB8
  cmps(c,0,(int32_t)c->r[0],0); // 801D4CBC
  if (crb(c,2)) { goto L_801D4CC8; } // 801D4CC0
  c->r[5]=c->r[5]+0x00000001u; // 801D4CC4
L_801D4CC8:;
  c->r[0]=0u+0x00000004u; // 801D4CC8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4CCC
  c->r[0]=c->r[4]&c->r[0]; // 801D4CD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4CD4
  if (crb(c,2)) { goto L_801D4CE0; } // 801D4CD8
  c->r[5]=c->r[5]+0x00000001u; // 801D4CDC
L_801D4CE0:;
  c->r[0]=0u+0x00000005u; // 801D4CE0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4CE4
  c->r[0]=c->r[4]&c->r[0]; // 801D4CE8
  cmps(c,0,(int32_t)c->r[0],0); // 801D4CEC
  if (crb(c,2)) { goto L_801D4CF8; } // 801D4CF0
  c->r[5]=c->r[5]+0x00000001u; // 801D4CF4
L_801D4CF8:;
  c->r[0]=0u+0x00000006u; // 801D4CF8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4CFC
  c->r[0]=c->r[4]&c->r[0]; // 801D4D00
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D04
  if (crb(c,2)) { goto L_801D4D10; } // 801D4D08
  c->r[5]=c->r[5]+0x00000001u; // 801D4D0C
L_801D4D10:;
  c->r[0]=0u+0x00000007u; // 801D4D10
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4D14
  c->r[0]=c->r[4]&c->r[0]; // 801D4D18
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D1C
  if (crb(c,2)) { goto L_801D4D28; } // 801D4D20
  c->r[5]=c->r[5]+0x00000001u; // 801D4D24
L_801D4D28:;
  c->r[0]=0u+0x00000008u; // 801D4D28
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4D2C
  c->r[0]=c->r[4]&c->r[0]; // 801D4D30
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D34
  if (crb(c,2)) { goto L_801D4D40; } // 801D4D38
  c->r[5]=c->r[5]+0x00000001u; // 801D4D3C
L_801D4D40:;
  c->r[0]=0u+0x00000009u; // 801D4D40
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D4D44
  c->r[0]=c->r[4]&c->r[0]; // 801D4D48
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D4C
  if (crb(c,2)) { goto L_801D4D58; } // 801D4D50
  c->r[5]=c->r[5]+0x00000001u; // 801D4D54
L_801D4D58:;
  c->r[3]=c->r[5]|c->r[5]; // 801D4D58
  return; // 801D4D5C
}

// fn_801D4D60
void f_801D4D60(Ctx* __restrict c) {
  c->r[8]=0u+0x00000000u; // 801D4D60
  c->r[7]=0u+0x00000000u; // 801D4D64
  c->r[5]=0u+0x00000001u; // 801D4D68
  c->r[0]=0u+0x00000002u; // 801D4D6C
  c->ctr=c->r[0]; // 801D4D70
L_801D4D74:;
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4D74
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4D78
  c->r[0]=c->r[6]&c->r[0]; // 801D4D7C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4D80
  if (!crb(c,2)) { goto L_801D4D8C; } // 801D4D84
  c->r[8]=c->r[8]+0x00000001u; // 801D4D88
L_801D4D8C:;
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801D4D8C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D4D90
  if (crb(c,2)) { goto L_801D4E40; } // 801D4D94
  c->r[7]=c->r[7]+0x00000001u; // 801D4D98
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4D9C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4DA0
  c->r[0]=c->r[6]&c->r[0]; // 801D4DA4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4DA8
  if (!crb(c,2)) { goto L_801D4DB4; } // 801D4DAC
  c->r[8]=c->r[8]+0x00000001u; // 801D4DB0
L_801D4DB4:;
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801D4DB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D4DB8
  if (crb(c,2)) { goto L_801D4E40; } // 801D4DBC
  c->r[7]=c->r[7]+0x00000001u; // 801D4DC0
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4DC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4DC8
  c->r[0]=c->r[6]&c->r[0]; // 801D4DCC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4DD0
  if (!crb(c,2)) { goto L_801D4DDC; } // 801D4DD4
  c->r[8]=c->r[8]+0x00000001u; // 801D4DD8
L_801D4DDC:;
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801D4DDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D4DE0
  if (crb(c,2)) { goto L_801D4E40; } // 801D4DE4
  c->r[7]=c->r[7]+0x00000001u; // 801D4DE8
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4DEC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4DF0
  c->r[0]=c->r[6]&c->r[0]; // 801D4DF4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4DF8
  if (!crb(c,2)) { goto L_801D4E04; } // 801D4DFC
  c->r[8]=c->r[8]+0x00000001u; // 801D4E00
L_801D4E04:;
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801D4E04
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D4E08
  if (crb(c,2)) { goto L_801D4E40; } // 801D4E0C
  c->r[7]=c->r[7]+0x00000001u; // 801D4E10
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4E14
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4E18
  c->r[0]=c->r[6]&c->r[0]; // 801D4E1C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4E20
  if (!crb(c,2)) { goto L_801D4E2C; } // 801D4E24
  c->r[8]=c->r[8]+0x00000001u; // 801D4E28
L_801D4E2C:;
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801D4E2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D4E30
  if (crb(c,2)) { goto L_801D4E40; } // 801D4E34
  c->r[7]=c->r[7]+0x00000001u; // 801D4E38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4D74; } // 801D4E3C
L_801D4E40:;
  c->r[3]=c->r[7]|c->r[7]; // 801D4E40
  return; // 801D4E44
}

// fn_801D4E48
void f_801D4E48(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000004u); // 801D4E48
  c->r[0]=0u+0x00000001u; // 801D4E4C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801D4E50
  c->r[0]=c->r[5]|c->r[0]; // 801D4E54
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D4E58
  return; // 801D4E5C
}

// fn_801D4E60
void f_801D4E60(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D4E60
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D4E64
  return; // 801D4E68
}

// fn_801D4E6C
void f_801D4E6C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D4E6C
  return; // 801D4E70
}

// fn_801D4E74
void f_801D4E74(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D4E74
  return; // 801D4E78
}

// fn_801D4E7C
void f_801D4E7C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D4E7C
  return; // 801D4E80
}

// fn_801D4E84
void f_801D4E84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D4E84
  return; // 801D4E88
}

// fn_801D4E8C
void f_801D4E8C(Ctx* __restrict c) {
  c->r[8]=0u+0x00000000u; // 801D4E8C
  c->r[7]=0u+0x00000000u; // 801D4E90
  c->r[5]=0u+0x00000001u; // 801D4E94
  c->r[0]=0u+0x00000002u; // 801D4E98
  c->ctr=c->r[0]; // 801D4E9C
L_801D4EA0:;
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4EA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4EA4
  c->r[0]=c->r[6]&c->r[0]; // 801D4EA8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4EAC
  if (!crb(c,2)) { goto L_801D4EB8; } // 801D4EB0
  c->r[8]=c->r[8]+0x00000001u; // 801D4EB4
L_801D4EB8:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801D4EB8
  if (crb(c,2)) { goto L_801D4F58; } // 801D4EBC
  c->r[7]=c->r[7]+0x00000001u; // 801D4EC0
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4EC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4EC8
  c->r[0]=c->r[6]&c->r[0]; // 801D4ECC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4ED0
  if (!crb(c,2)) { goto L_801D4EDC; } // 801D4ED4
  c->r[8]=c->r[8]+0x00000001u; // 801D4ED8
L_801D4EDC:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801D4EDC
  if (crb(c,2)) { goto L_801D4F58; } // 801D4EE0
  c->r[7]=c->r[7]+0x00000001u; // 801D4EE4
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4EE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4EEC
  c->r[0]=c->r[6]&c->r[0]; // 801D4EF0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4EF4
  if (!crb(c,2)) { goto L_801D4F00; } // 801D4EF8
  c->r[8]=c->r[8]+0x00000001u; // 801D4EFC
L_801D4F00:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801D4F00
  if (crb(c,2)) { goto L_801D4F58; } // 801D4F04
  c->r[7]=c->r[7]+0x00000001u; // 801D4F08
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4F0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4F10
  c->r[0]=c->r[6]&c->r[0]; // 801D4F14
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4F18
  if (!crb(c,2)) { goto L_801D4F24; } // 801D4F1C
  c->r[8]=c->r[8]+0x00000001u; // 801D4F20
L_801D4F24:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801D4F24
  if (crb(c,2)) { goto L_801D4F58; } // 801D4F28
  c->r[7]=c->r[7]+0x00000001u; // 801D4F2C
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801D4F30
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D4F34
  c->r[0]=c->r[6]&c->r[0]; // 801D4F38
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D4F3C
  if (!crb(c,2)) { goto L_801D4F48; } // 801D4F40
  c->r[8]=c->r[8]+0x00000001u; // 801D4F44
L_801D4F48:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801D4F48
  if (crb(c,2)) { goto L_801D4F58; } // 801D4F4C
  c->r[7]=c->r[7]+0x00000001u; // 801D4F50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4EA0; } // 801D4F54
L_801D4F58:;
  c->r[3]=c->r[8]+0xFFFFFFFFu; // 801D4F58
  return; // 801D4F5C
}

// fn_801D4F60
void f_801D4F60(Ctx* __restrict c) {
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801D4F60
  return; // 801D4F64
}

// fn_801D4F68
void f_801D4F68(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D4F68
  return; // 801D4F6C
}

// fn_801D4F70
void f_801D4F70(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 801D4F70
  return; // 801D4F74
}

// fn_801D4F78
void f_801D4F78(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D4F78
  return; // 801D4F7C
}

// fn_801D4F80
void f_801D4F80(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 801D4F80
  return; // 801D4F84
}

// fn_801D4F88
void f_801D4F88(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 801D4F88
  return; // 801D4F8C
}

// fn_801D4F90
void f_801D4F90(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D4F90
  c->r[3]=c->r[3]+c->r[0]; // 801D4F94
  W32(c->r[3]+0x00000018u,c->r[4]); // 801D4F98
  return; // 801D4F9C
}

// fn_801D4FA0
void f_801D4FA0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D4FA0
  c->r[3]=c->r[3]+c->r[0]; // 801D4FA4
  W32(c->r[3]+0x00000090u,c->r[4]); // 801D4FA8
  return; // 801D4FAC
}

// fn_801D4FB0
void f_801D4FB0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000108u,c->r[4]); // 801D4FB0
  return; // 801D4FB4
}

// fn_801D4FB8
void f_801D4FB8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000108u); // 801D4FB8
  return; // 801D4FBC
}

// fn_801D4FC0
void f_801D4FC0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D4FC0
  c->r[3]=c->r[3]+c->r[0]; // 801D4FC4
  W32(c->r[3]+0x0000010Cu,c->r[4]); // 801D4FC8
  return; // 801D4FCC
}

// fn_801D4FD0
void f_801D4FD0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D4FD0
  c->r[3]=c->r[3]+c->r[0]; // 801D4FD4
  c->r[3]=R32(c->r[3]+0x0000010Cu); // 801D4FD8
  return; // 801D4FDC
}

// fn_801D4FE0
void f_801D4FE0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D4FE0
  c->r[3]=c->r[3]+c->r[0]; // 801D4FE4
  W32(c->r[3]+0x00000184u,c->r[4]); // 801D4FE8
  return; // 801D4FEC
}

// fn_801D4FF0
void f_801D4FF0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D4FF0
  c->r[3]=c->r[3]+c->r[0]; // 801D4FF4
  c->r[3]=R32(c->r[3]+0x00000184u); // 801D4FF8
  return; // 801D4FFC
}

// fn_801D5000
void f_801D5000(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D5000
  c->r[3]=c->r[3]+c->r[0]; // 801D5004
  W32(c->r[3]+0x000001FCu,c->r[4]); // 801D5008
  return; // 801D500C
}

// fn_801D5010
void f_801D5010(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D5010
  c->r[3]=c->r[3]+c->r[0]; // 801D5014
  c->r[3]=R32(c->r[3]+0x000001FCu); // 801D5018
  return; // 801D501C
}

// fn_801D5020
void f_801D5020(Ctx* __restrict c) {
  W32(c->r[3]+0x00000278u,c->r[4]); // 801D5020
  return; // 801D5024
}

// fn_801D5028
void f_801D5028(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000278u); // 801D5028
  return; // 801D502C
}

// fn_801D5030
void f_801D5030(Ctx* __restrict c) {
  W32(c->r[3]+0x0000027Cu,c->r[4]); // 801D5030
  return; // 801D5034
}

// fn_801D5038
void f_801D5038(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000027Cu); // 801D5038
  return; // 801D503C
}

// fn_801D5040
void f_801D5040(Ctx* __restrict c) {
  W32(c->r[3]+0x00000280u,c->r[4]); // 801D5040
  return; // 801D5044
}

// fn_801D5048
void f_801D5048(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000280u); // 801D5048
  return; // 801D504C
}

// fn_801D5050
void f_801D5050(Ctx* __restrict c) {
  W32(c->r[3]+0x00000284u,c->r[4]); // 801D5050
  return; // 801D5054
}

// fn_801D5058
void f_801D5058(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000284u); // 801D5058
  return; // 801D505C
}

// fn_801D5060
void f_801D5060(Ctx* __restrict c) {
  W32(c->r[3]+0x00000288u,c->r[4]); // 801D5060
  return; // 801D5064
}

// fn_801D5068
void f_801D5068(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000288u); // 801D5068
  return; // 801D506C
}

// fn_801D5070
void f_801D5070(Ctx* __restrict c) {
  W32(c->r[3]+0x0000028Cu,c->r[4]); // 801D5070
  return; // 801D5074
}

// fn_801D5078
void f_801D5078(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000028Cu); // 801D5078
  return; // 801D507C
}

// fn_801D5080
void f_801D5080(Ctx* __restrict c) {
  W32(c->r[3]+0x00000290u,c->r[4]); // 801D5080
  return; // 801D5084
}

// fn_801D5088
void f_801D5088(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000290u); // 801D5088
  return; // 801D508C
}

// fn_801D5090
void f_801D5090(Ctx* __restrict c) {
  W32(c->r[3]+0x00000294u,c->r[4]); // 801D5090
  return; // 801D5094
}

// fn_801D5098
void f_801D5098(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000294u); // 801D5098
  return; // 801D509C
}

// fn_801D50A0
void f_801D50A0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000298u,c->r[4]); // 801D50A0
  return; // 801D50A4
}

// fn_801D50A8
void f_801D50A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000298u); // 801D50A8
  return; // 801D50AC
}

// fn_801D50B0
void f_801D50B0(Ctx* __restrict c) {
  W32(c->r[3]+0x0000029Cu,c->r[4]); // 801D50B0
  return; // 801D50B4
}

// fn_801D50B8
void f_801D50B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000029Cu); // 801D50B8
  return; // 801D50BC
}

// fn_801D50C0
void f_801D50C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000002A0u; // 801D50C0
  f_802E9548(c); return; // 801D50C4
}

// fn_801D50C8
void f_801D50C8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000002A0u; // 801D50C8
  return; // 801D50CC
}

// fn_801D50D0
void f_801D50D0(Ctx* __restrict c) {
  W32(c->r[3]+0x000003A0u,c->r[4]); // 801D50D0
  return; // 801D50D4
}

// fn_801D50D8
void f_801D50D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000003A0u); // 801D50D8
  return; // 801D50DC
}

// fn_801D50E0
void f_801D50E0(Ctx* __restrict c) {
  W32(c->r[3]+0x000003A4u,c->r[4]); // 801D50E0
  return; // 801D50E4
}

// fn_801D50E8
void f_801D50E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000003A4u); // 801D50E8
  return; // 801D50EC
}

// fn_801D50F0
void f_801D50F0(Ctx* __restrict c) {
  W32(c->r[3]+0x000003A8u,c->r[4]); // 801D50F0
  return; // 801D50F4
}

// fn_801D50F8
void f_801D50F8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000003A8u); // 801D50F8
  return; // 801D50FC
}

// fn_801D5100
void f_801D5100(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000003ACu; // 801D5100
  f_802E9548(c); return; // 801D5104
}

// fn_801D5108
void f_801D5108(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000003ACu; // 801D5108
  return; // 801D510C
}

// fn_801D5110
void f_801D5110(Ctx* __restrict c) {
  W32(c->r[3]+0x000004ACu,c->r[4]); // 801D5110
  return; // 801D5114
}

// fn_801D5118
void f_801D5118(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000004ACu); // 801D5118
  return; // 801D511C
}

// fn_801D5120
void f_801D5120(Ctx* __restrict c) {
  W32(c->r[3]+0x000004B0u,c->r[4]); // 801D5120
  return; // 801D5124
}

// fn_801D5128
void f_801D5128(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000004B0u); // 801D5128
  return; // 801D512C
}

// fn_801D5130
void f_801D5130(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000004B4u; // 801D5130
  f_802E9548(c); return; // 801D5134
}

// fn_801D5138
void f_801D5138(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000004B4u; // 801D5138
  return; // 801D513C
}

// fn_801D5140
void f_801D5140(Ctx* __restrict c) {
  W32(c->r[3]+0x000005B4u,c->r[4]); // 801D5140
  return; // 801D5144
}

// fn_801D5148
void f_801D5148(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005B4u); // 801D5148
  return; // 801D514C
}

// fn_801D5150
void f_801D5150(Ctx* __restrict c) {
  W32(c->r[3]+0x000005B8u,c->r[4]); // 801D5150
  return; // 801D5154
}

// fn_801D5158
void f_801D5158(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005B8u); // 801D5158
  return; // 801D515C
}

// fn_801D5160
void f_801D5160(Ctx* __restrict c) {
  W32(c->r[3]+0x000005BCu,c->r[4]); // 801D5160
  return; // 801D5164
}

// fn_801D5168
void f_801D5168(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005BCu); // 801D5168
  return; // 801D516C
}

// fn_801D5170
void f_801D5170(Ctx* __restrict c) {
  W32(c->r[3]+0x000005C0u,c->r[4]); // 801D5170
  return; // 801D5174
}

// fn_801D5178
void f_801D5178(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005C0u); // 801D5178
  return; // 801D517C
}

// fn_801D5180
void f_801D5180(Ctx* __restrict c) {
  W32(c->r[3]+0x000005C4u,c->r[4]); // 801D5180
  return; // 801D5184
}

// fn_801D5188
void f_801D5188(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005C4u); // 801D5188
  return; // 801D518C
}

// fn_801D5190
void f_801D5190(Ctx* __restrict c) {
  W32(c->r[3]+0x000005C8u,c->r[4]); // 801D5190
  return; // 801D5194
}

// fn_801D5198
void f_801D5198(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005C8u); // 801D5198
  return; // 801D519C
}

// fn_801D51A0
void f_801D51A0(Ctx* __restrict c) {
  W32(c->r[3]+0x000005CCu,c->r[4]); // 801D51A0
  return; // 801D51A4
}

// fn_801D51A8
void f_801D51A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005CCu); // 801D51A8
  return; // 801D51AC
}

// fn_801D51B0
void f_801D51B0(Ctx* __restrict c) {
  W32(c->r[3]+0x000005D0u,c->r[4]); // 801D51B0
  return; // 801D51B4
}

// fn_801D51B8
void f_801D51B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005D0u); // 801D51B8
  return; // 801D51BC
}

// fn_801D51C0
void f_801D51C0(Ctx* __restrict c) {
  W32(c->r[3]+0x000005D4u,c->r[4]); // 801D51C0
  return; // 801D51C4
}

// fn_801D51C8
void f_801D51C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005D4u); // 801D51C8
  return; // 801D51CC
}

// fn_801D51D0
void f_801D51D0(Ctx* __restrict c) {
  W32(c->r[3]+0x000005D8u,c->r[4]); // 801D51D0
  return; // 801D51D4
}

// fn_801D51D8
void f_801D51D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000005D8u); // 801D51D8
  return; // 801D51DC
}

// fn_801D51E0
void f_801D51E0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000274u,c->r[4]); // 801D51E0
  return; // 801D51E4
}

// fn_801D51E8
void f_801D51E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000274u); // 801D51E8
  return; // 801D51EC
}

// fn_801D51F0
void f_801D51F0(Ctx* __restrict c) {
  c->r[3]=0u+0x804E0000u; // 801D51F0
  c->r[3]=c->r[3]+0xFFFF9BA8u; // 801D51F4
  f_801D4A80(c); return; // 801D51F8
}

// fn_801D51FC
void f_801D51FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D51FC
  c->r[0]=c->lr; // 801D5200
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5208
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D520C
  c->r[30]=c->r[3]|c->r[3]; // 801D5210
  c->r[31]=c->r[4]|c->r[4]; // 801D5214
  cmps(c,0,(int32_t)c->r[3],0); // 801D5218
  if (crb(c,2)) { goto L_801D523C; } // 801D521C
  c->r[4]=0u+0x00000000u; // 801D5220
  c->lr=0x801D5228u; f_801197A8(c); // 801D5224
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801D5228
  cmps(c,0,(int32_t)c->r[0],0); // 801D522C
  if (!crb(c,1)) { goto L_801D523C; } // 801D5230
  c->r[3]=c->r[30]|c->r[30]; // 801D5234
  c->lr=0x801D523Cu; f_80047B20(c); // 801D5238
L_801D523C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D523C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5240
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5244
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5248
  c->lr=c->r[0]; // 801D524C
  c->r[1]=c->r[1]+0x00000010u; // 801D5250
  return; // 801D5254
}

// fn_801D5258
void f_801D5258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5258
  c->r[0]=c->lr; // 801D525C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5260
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5264
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5268
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D526C
  c->r[29]=c->r[3]|c->r[3]; // 801D5270
  c->lr=0x801D5278u; f_80056B5C(c); // 801D5274
  c->r[30]=c->r[3]|c->r[3]; // 801D5278
  c->lr=0x801D5280u; f_8005DEE8(c); // 801D527C
  c->lr=0x801D5284u; f_80056B54(c); // 801D5280
  c->r[3]=0u+0x00000074u; // 801D5284
  c->lr=0x801D528Cu; f_80047B64(c); // 801D5288
  c->r[31]=c->r[3]|c->r[3]; // 801D528C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5290
  if (crb(c,2)) { goto L_801D529C; } // 801D5294
  c->lr=0x801D529Cu; f_801D499C(c); // 801D5298
L_801D529C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D529C
  c->lr=0x801D52A4u; f_80056B54(c); // 801D52A0
  c->r[3]=c->r[31]|c->r[31]; // 801D52A4
  c->r[4]=0u+0x0000000Au; // 801D52A8
  c->lr=0x801D52B0u; f_8011A278(c); // 801D52AC
  c->r[3]=c->r[29]|c->r[29]; // 801D52B0
  c->r[4]=c->r[31]|c->r[31]; // 801D52B4
  c->lr=0x801D52BCu; f_8028CA70(c); // 801D52B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D52BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D52C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D52C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D52C8
  c->lr=c->r[0]; // 801D52CC
  c->r[1]=c->r[1]+0x00000020u; // 801D52D0
  return; // 801D52D4
}

// fn_801D52D8
void f_801D52D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D52D8
  c->r[0]=c->lr; // 801D52DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D52E0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801D52E4
  c->f[31]=c->f[1]; // 801D52E8
  c->r[4]=0u+0x0000000Au; // 801D52EC
  c->lr=0x801D52F4u; f_8011B718(c); // 801D52F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D52F4
  if (crb(c,2)) { goto L_801D5304; } // 801D52F8
  c->f[1]=c->f[31]; // 801D52FC
  c->lr=0x801D5304u; f_801D49F0(c); // 801D5300
L_801D5304:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801D5304
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5308
  c->lr=c->r[0]; // 801D530C
  c->r[1]=c->r[1]+0x00000010u; // 801D5310
  return; // 801D5314
}

// fn_801D5318
void f_801D5318(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5318
  c->r[0]=c->lr; // 801D531C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5320
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801D5324
  c->f[31]=c->f[1]; // 801D5328
  c->r[4]=0u+0x0000000Au; // 801D532C
  c->lr=0x801D5334u; f_8011B718(c); // 801D5330
  cmps(c,0,(int32_t)c->r[3],0); // 801D5334
  if (crb(c,2)) { goto L_801D5344; } // 801D5338
  c->f[1]=c->f[31]; // 801D533C
  c->lr=0x801D5344u; f_801D4A08(c); // 801D5340
L_801D5344:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801D5344
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5348
  c->lr=c->r[0]; // 801D534C
  c->r[1]=c->r[1]+0x00000010u; // 801D5350
  return; // 801D5354
}

// fn_801D5358
void f_801D5358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5358
  c->r[0]=c->lr; // 801D535C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5364
  c->r[31]=c->r[4]|c->r[4]; // 801D5368
  c->r[4]=0u+0x0000000Au; // 801D536C
  c->lr=0x801D5374u; f_8011B718(c); // 801D5370
  cmps(c,0,(int32_t)c->r[3],0); // 801D5374
  if (crb(c,2)) { goto L_801D5384; } // 801D5378
  c->r[4]=c->r[31]|c->r[31]; // 801D537C
  c->lr=0x801D5384u; f_801D4A20(c); // 801D5380
L_801D5384:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5384
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5388
  c->lr=c->r[0]; // 801D538C
  c->r[1]=c->r[1]+0x00000010u; // 801D5390
  return; // 801D5394
}

// fn_801D5398
void f_801D5398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5398
  c->r[0]=c->lr; // 801D539C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D53A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D53A4
  c->r[31]=c->r[4]|c->r[4]; // 801D53A8
  c->r[4]=0u+0x0000000Au; // 801D53AC
  c->lr=0x801D53B4u; f_8011B718(c); // 801D53B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D53B4
  if (crb(c,2)) { goto L_801D53C4; } // 801D53B8
  c->r[4]=c->r[31]|c->r[31]; // 801D53BC
  c->lr=0x801D53C4u; f_801D4A38(c); // 801D53C0
L_801D53C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D53C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D53C8
  c->lr=c->r[0]; // 801D53CC
  c->r[1]=c->r[1]+0x00000010u; // 801D53D0
  return; // 801D53D4
}

// fn_801D53D8
void f_801D53D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D53D8
  c->r[0]=c->lr; // 801D53DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D53E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D53E4
  c->r[31]=c->r[4]|c->r[4]; // 801D53E8
  c->r[4]=0u+0x0000000Au; // 801D53EC
  c->lr=0x801D53F4u; f_8011B718(c); // 801D53F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D53F4
  if (crb(c,2)) { goto L_801D5404; } // 801D53F8
  c->r[4]=c->r[31]|c->r[31]; // 801D53FC
  c->lr=0x801D5404u; f_801D4A50(c); // 801D5400
L_801D5404:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5404
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5408
  c->lr=c->r[0]; // 801D540C
  c->r[1]=c->r[1]+0x00000010u; // 801D5410
  return; // 801D5414
}

// fn_801D5418
void f_801D5418(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5418
  c->r[0]=c->lr; // 801D541C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5420
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801D5424
  c->f[31]=c->f[1]; // 801D5428
  c->lr=0x801D5430u; f_8011B41C(c); // 801D542C
  c->f[1]=c->f[31]; // 801D5430
  c->lr=0x801D5438u; f_801D52D8(c); // 801D5434
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801D5438
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D543C
  c->lr=c->r[0]; // 801D5440
  c->r[1]=c->r[1]+0x00000010u; // 801D5444
  return; // 801D5448
}

// fn_801D544C
void f_801D544C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D544C
  c->r[0]=c->lr; // 801D5450
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5454
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801D5458
  c->f[31]=c->f[1]; // 801D545C
  c->lr=0x801D5464u; f_8011B41C(c); // 801D5460
  c->f[1]=c->f[31]; // 801D5464
  c->lr=0x801D546Cu; f_801D5318(c); // 801D5468
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801D546C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5470
  c->lr=c->r[0]; // 801D5474
  c->r[1]=c->r[1]+0x00000010u; // 801D5478
  return; // 801D547C
}

// fn_801D5480
void f_801D5480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5480
  c->r[0]=c->lr; // 801D5484
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D548C
  c->r[31]=c->r[3]|c->r[3]; // 801D5490
  c->lr=0x801D5498u; f_8011B41C(c); // 801D5494
  c->r[4]=c->r[31]|c->r[31]; // 801D5498
  c->lr=0x801D54A0u; f_801D5358(c); // 801D549C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D54A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D54A4
  c->lr=c->r[0]; // 801D54A8
  c->r[1]=c->r[1]+0x00000010u; // 801D54AC
  return; // 801D54B0
}

// fn_801D54B4
void f_801D54B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D54B4
  c->r[0]=c->lr; // 801D54B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D54BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D54C0
  c->r[31]=c->r[3]|c->r[3]; // 801D54C4
  c->lr=0x801D54CCu; f_8011B41C(c); // 801D54C8
  c->r[4]=c->r[31]|c->r[31]; // 801D54CC
  c->lr=0x801D54D4u; f_801D5398(c); // 801D54D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D54D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D54D8
  c->lr=c->r[0]; // 801D54DC
  c->r[1]=c->r[1]+0x00000010u; // 801D54E0
  return; // 801D54E4
}

// fn_801D54E8
void f_801D54E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D54E8
  c->r[0]=c->lr; // 801D54EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D54F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D54F4
  c->r[31]=c->r[3]|c->r[3]; // 801D54F8
  c->lr=0x801D5500u; f_8011B41C(c); // 801D54FC
  c->r[4]=c->r[31]|c->r[31]; // 801D5500
  c->lr=0x801D5508u; f_801D53D8(c); // 801D5504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5508
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D550C
  c->lr=c->r[0]; // 801D5510
  c->r[1]=c->r[1]+0x00000010u; // 801D5514
  return; // 801D5518
}

// fn_801D551C
void f_801D551C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D551C
  c->r[0]=c->lr; // 801D5520
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5528
  c->r[31]=c->r[3]|c->r[3]; // 801D552C
  c->lr=0x801D5534u; f_80130F14(c); // 801D5530
  c->r[3]=0u+0x80470000u; // 801D5534
  c->r[0]=c->r[3]+0x00002FA8u; // 801D5538
  W32(c->r[31]+0x00000058u,c->r[0]); // 801D553C
  c->r[3]=c->r[31]|c->r[31]; // 801D5540
  c->r[4]=0u+0x80470000u; // 801D5544
  c->r[4]=c->r[4]+0x00002E10u; // 801D5548
  c->lr=0x801D5550u; f_80131078(c); // 801D554C
  c->r[0]=0u+0x00000000u; // 801D5550
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801D5554
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801D5558
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801D555C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801D5560
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801D5564
  c->r[3]=c->r[31]|c->r[31]; // 801D5568
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D556C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5570
  c->lr=c->r[0]; // 801D5574
  c->r[1]=c->r[1]+0x00000010u; // 801D5578
  return; // 801D557C
}

// fn_801D5580
void f_801D5580(Ctx* __restrict c) {
  return; // 801D5580
}

// fn_801D5584
void f_801D5584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5584
  c->r[0]=c->lr; // 801D5588
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D558C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5590
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5594
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5598
  c->r[29]=c->r[3]|c->r[3]; // 801D559C
  c->r[3]=0u+0x0000000Au; // 801D55A0
  c->lr=0x801D55A8u; f_801F1364(c); // 801D55A4
  c->r[3]=c->r[29]|c->r[29]; // 801D55A8
  c->r[4]=0u+0x00000000u; // 801D55AC
  c->lr=0x801D55B4u; f_80131168(c); // 801D55B0
  c->r[3]=c->r[29]|c->r[29]; // 801D55B4
  c->r[4]=0u+0x00000000u; // 801D55B8
  c->lr=0x801D55C0u; f_80131184(c); // 801D55BC
  c->lr=0x801D55C4u; f_80056B5C(c); // 801D55C0
  c->r[30]=c->r[3]|c->r[3]; // 801D55C4
  c->lr=0x801D55CCu; f_801F1340(c); // 801D55C8
  c->lr=0x801D55D0u; f_80056B54(c); // 801D55CC
  c->r[3]=0u+0x00000030u; // 801D55D0
  c->lr=0x801D55D8u; f_80047B64(c); // 801D55D4
  c->r[31]=c->r[3]|c->r[3]; // 801D55D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D55DC
  if (crb(c,2)) { goto L_801D55E8; } // 801D55E0
  c->lr=0x801D55E8u; f_801D145C(c); // 801D55E4
L_801D55E8:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801D55E8
  c->r[3]=c->r[30]|c->r[30]; // 801D55EC
  c->lr=0x801D55F4u; f_80056B54(c); // 801D55F0
  c->lr=0x801D55F8u; f_80056B5C(c); // 801D55F4
  c->r[30]=c->r[3]|c->r[3]; // 801D55F8
  c->lr=0x801D5600u; f_801F1340(c); // 801D55FC
  c->lr=0x801D5604u; f_80056B54(c); // 801D5600
  c->r[3]=0u+0x000000F0u; // 801D5604
  c->lr=0x801D560Cu; f_80047B64(c); // 801D5608
  c->r[31]=c->r[3]|c->r[3]; // 801D560C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5610
  if (crb(c,2)) { goto L_801D561C; } // 801D5614
  c->lr=0x801D561Cu; f_8020E2EC(c); // 801D5618
L_801D561C:;
  W32(c->r[29]+0x000000F4u,c->r[31]); // 801D561C
  c->r[3]=c->r[30]|c->r[30]; // 801D5620
  c->lr=0x801D5628u; f_80056B54(c); // 801D5624
  c->lr=0x801D562Cu; f_80056B5C(c); // 801D5628
  c->r[30]=c->r[3]|c->r[3]; // 801D562C
  c->lr=0x801D5634u; f_801F1340(c); // 801D5630
  c->lr=0x801D5638u; f_80056B54(c); // 801D5634
  c->r[3]=0u+0x000000C4u; // 801D5638
  c->lr=0x801D5640u; f_80047B64(c); // 801D563C
  c->r[31]=c->r[3]|c->r[3]; // 801D5640
  cmps(c,0,(int32_t)c->r[3],0); // 801D5644
  if (crb(c,2)) { goto L_801D5650; } // 801D5648
  c->lr=0x801D5650u; f_80210AB4(c); // 801D564C
L_801D5650:;
  W32(c->r[29]+0x000000F8u,c->r[31]); // 801D5650
  c->r[3]=c->r[30]|c->r[30]; // 801D5654
  c->lr=0x801D565Cu; f_80056B54(c); // 801D5658
  c->r[3]=R32(c->r[29]+0x000000F8u); // 801D565C
  c->lr=0x801D5664u; f_80210AF8(c); // 801D5660
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801D5664
  c->lr=0x801D566Cu; f_8020E358(c); // 801D5668
  c->r[3]=c->r[29]|c->r[29]; // 801D566C
  c->r[4]=0u+0x00000001u; // 801D5670
  c->lr=0x801D5678u; f_801311BC(c); // 801D5674
  c->r[3]=c->r[29]|c->r[29]; // 801D5678
  c->r[4]=0u+0x00000000u; // 801D567C
  c->lr=0x801D5684u; f_8013114C(c); // 801D5680
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5684
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5688
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D568C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5690
  c->lr=c->r[0]; // 801D5694
  c->r[1]=c->r[1]+0x00000020u; // 801D5698
  return; // 801D569C
}

// fn_801D56A0
void f_801D56A0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000003u; // 801D56A0
  f_8013114C(c); return; // 801D56A4
}

// fn_801D56A8
void f_801D56A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D56A8
  c->r[0]=c->lr; // 801D56AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D56B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D56B4
  c->r[31]=c->r[3]|c->r[3]; // 801D56B8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D56BC
  c->r[4]=0u+0x00000000u; // 801D56C0
  c->lr=0x801D56C8u; f_8020FB90(c); // 801D56C4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D56C8
  c->lr=0x801D56D0u; f_8020FCE4(c); // 801D56CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D56D0
  c->lr=0x801D56D8u; f_801D1568(c); // 801D56D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D56D8
  if (crb(c,2)) { goto L_801D56F0; } // 801D56DC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D56E0
  c->r[4]=0u+0x00000000u; // 801D56E4
  c->lr=0x801D56ECu; f_8020F58C(c); // 801D56E8
  goto L_801D56FC; // 801D56EC
L_801D56F0:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D56F0
  c->r[4]=0u+0x00000001u; // 801D56F4
  c->lr=0x801D56FCu; f_8020F58C(c); // 801D56F8
L_801D56FC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D56FC
  c->lr=0x801D5704u; f_801D15BC(c); // 801D5700
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5704
  c->lr=0x801D570Cu; f_801D1560(c); // 801D5708
  c->r[3]=c->r[31]|c->r[31]; // 801D570C
  c->lr=0x801D5714u; f_801D6738(c); // 801D5710
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5714
  c->lr=0x801D571Cu; f_801D1804(c); // 801D5718
  c->r[4]=c->r[3]|c->r[3]; // 801D571C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5720
  c->lr=0x801D5728u; f_8020F260(c); // 801D5724
  c->r[3]=c->r[31]|c->r[31]; // 801D5728
  c->r[4]=0u+0x00000004u; // 801D572C
  c->lr=0x801D5734u; f_8013114C(c); // 801D5730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5734
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5738
  c->lr=c->r[0]; // 801D573C
  c->r[1]=c->r[1]+0x00000010u; // 801D5740
  return; // 801D5744
}

// fn_801D5748
void f_801D5748(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5748
  c->r[0]=c->lr; // 801D574C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5754
  c->r[31]=c->r[3]|c->r[3]; // 801D5758
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D575C
  c->lr=0x801D5764u; f_8020F65C(c); // 801D5760
  cmps(c,0,(int32_t)c->r[3],0); // 801D5764
  if (crb(c,2)) { goto L_801D579C; } // 801D5768
  c->r[3]=c->r[31]|c->r[31]; // 801D576C
  c->lr=0x801D5774u; f_801D6738(c); // 801D5770
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5774
  c->lr=0x801D577Cu; f_801D1804(c); // 801D5778
  c->r[4]=c->r[3]|c->r[3]; // 801D577C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5780
  c->lr=0x801D5788u; f_8020F25C(c); // 801D5784
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5788
  c->lr=0x801D5790u; f_8020F620(c); // 801D578C
  c->r[3]=c->r[31]|c->r[31]; // 801D5790
  c->r[4]=0u+0x00000005u; // 801D5794
  c->lr=0x801D579Cu; f_8013114C(c); // 801D5798
L_801D579C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D579C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D57A0
  c->lr=c->r[0]; // 801D57A4
  c->r[1]=c->r[1]+0x00000010u; // 801D57A8
  return; // 801D57AC
}

// fn_801D57B0
void f_801D57B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D57B0
  c->r[0]=c->lr; // 801D57B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D57B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D57BC
  c->r[31]=c->r[3]|c->r[3]; // 801D57C0
  c->r[3]=0u+0x00000001u; // 801D57C4
  c->lr=0x801D57CCu; f_8019CD1C(c); // 801D57C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D57CC
  if (crb(c,2)) { goto L_801D57EC; } // 801D57D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D57D4
  c->lr=0x801D57DCu; f_801D1558(c); // 801D57D8
  c->r[3]=c->r[31]|c->r[31]; // 801D57DC
  c->r[4]=0u+0x0000000Au; // 801D57E0
  c->lr=0x801D57E8u; f_8013114C(c); // 801D57E4
  goto L_801D58B4; // 801D57E8
L_801D57EC:;
  c->r[3]=0u+0x00000000u; // 801D57EC
  c->lr=0x801D57F4u; f_8019CD1C(c); // 801D57F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D57F4
  if (crb(c,2)) { goto L_801D5860; } // 801D57F8
  c->r[3]=c->r[31]|c->r[31]; // 801D57FC
  c->lr=0x801D5804u; f_801D6738(c); // 801D5800
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5804
  c->lr=0x801D580Cu; f_801D1804(c); // 801D5808
  c->r[4]=c->r[3]|c->r[3]; // 801D580C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5810
  c->lr=0x801D5818u; f_8020F25C(c); // 801D5814
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5818
  c->lr=0x801D5820u; f_8020F620(c); // 801D581C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5820
  c->lr=0x801D5828u; f_801D1804(c); // 801D5824
  c->r[4]=c->r[3]|c->r[3]; // 801D5828
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D582C
  c->lr=0x801D5834u; f_8020F390(c); // 801D5830
  cmps(c,0,(int32_t)c->r[3],0); // 801D5834
  if (crb(c,2)) { goto L_801D5848; } // 801D5838
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D583C
  c->lr=0x801D5844u; f_801D1658(c); // 801D5840
  goto L_801D58B4; // 801D5844
L_801D5848:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5848
  c->lr=0x801D5850u; f_801D1624(c); // 801D584C
  c->r[3]=c->r[31]|c->r[31]; // 801D5850
  c->r[4]=0u+0x00000006u; // 801D5854
  c->lr=0x801D585Cu; f_8013114C(c); // 801D5858
  goto L_801D58B4; // 801D585C
L_801D5860:;
  c->r[3]=0u+0x00000006u; // 801D5860
  c->lr=0x801D5868u; f_8019CD1C(c); // 801D5864
  cmps(c,0,(int32_t)c->r[3],0); // 801D5868
  if (crb(c,2)) { goto L_801D5878; } // 801D586C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5870
  c->lr=0x801D5878u; f_801D17B8(c); // 801D5874
L_801D5878:;
  c->r[3]=0u+0x00000005u; // 801D5878
  c->lr=0x801D5880u; f_8019CD1C(c); // 801D587C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5880
  if (crb(c,2)) { goto L_801D5890; } // 801D5884
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5888
  c->lr=0x801D5890u; f_801D176C(c); // 801D588C
L_801D5890:;
  c->r[3]=c->r[31]|c->r[31]; // 801D5890
  c->lr=0x801D5898u; f_801D6738(c); // 801D5894
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5898
  c->lr=0x801D58A0u; f_801D1804(c); // 801D589C
  c->r[4]=c->r[3]|c->r[3]; // 801D58A0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D58A4
  c->lr=0x801D58ACu; f_8020F25C(c); // 801D58A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D58AC
  c->lr=0x801D58B4u; f_8020F620(c); // 801D58B0
L_801D58B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D58B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D58B8
  c->lr=c->r[0]; // 801D58BC
  c->r[1]=c->r[1]+0x00000010u; // 801D58C0
  return; // 801D58C4
}

// fn_801D58C8
void f_801D58C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D58C8
  c->r[0]=c->lr; // 801D58CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D58D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D58D4
  c->r[31]=c->r[3]|c->r[3]; // 801D58D8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801D58DC
  c->lr=0x801D58E4u; f_801D1804(c); // 801D58E0
  c->r[4]=c->r[3]|c->r[3]; // 801D58E4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D58E8
  c->lr=0x801D58F0u; f_8020F2AC(c); // 801D58EC
  c->r[3]=c->r[31]|c->r[31]; // 801D58F0
  c->r[4]=0u+0x00000007u; // 801D58F4
  c->lr=0x801D58FCu; f_8013114C(c); // 801D58F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D58FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5900
  c->lr=c->r[0]; // 801D5904
  c->r[1]=c->r[1]+0x00000010u; // 801D5908
  return; // 801D590C
}

// fn_801D5910
void f_801D5910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5910
  c->r[0]=c->lr; // 801D5914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D591C
  c->r[31]=c->r[3]|c->r[3]; // 801D5920
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D5924
  c->lr=0x801D592Cu; f_8020F6DC(c); // 801D5928
  cmps(c,0,(int32_t)c->r[3],0); // 801D592C
  if (crb(c,2)) { goto L_801D5940; } // 801D5930
  c->r[3]=c->r[31]|c->r[31]; // 801D5934
  c->r[4]=0u+0x00000008u; // 801D5938
  c->lr=0x801D5940u; f_8013114C(c); // 801D593C
L_801D5940:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5940
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5944
  c->lr=c->r[0]; // 801D5948
  c->r[1]=c->r[1]+0x00000010u; // 801D594C
  return; // 801D5950
}

// fn_801D5954
void f_801D5954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5954
  c->r[0]=c->lr; // 801D5958
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D595C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5960
  c->r[31]=c->r[3]|c->r[3]; // 801D5964
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801D5968
  c->lr=0x801D5970u; f_801D1804(c); // 801D596C
  c->r[4]=c->r[3]|c->r[3]; // 801D5970
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5974
  c->lr=0x801D597Cu; f_8020F2B0(c); // 801D5978
  c->r[3]=c->r[31]|c->r[31]; // 801D597C
  c->r[4]=0u+0x00000009u; // 801D5980
  c->lr=0x801D5988u; f_8013114C(c); // 801D5984
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5988
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D598C
  c->lr=c->r[0]; // 801D5990
  c->r[1]=c->r[1]+0x00000010u; // 801D5994
  return; // 801D5998
}

// fn_801D599C
void f_801D599C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D599C
  c->r[0]=c->lr; // 801D59A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D59A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D59A8
  c->r[31]=c->r[3]|c->r[3]; // 801D59AC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D59B0
  c->lr=0x801D59B8u; f_8020F6A0(c); // 801D59B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D59B8
  if (crb(c,2)) { goto L_801D59CC; } // 801D59BC
  c->r[3]=c->r[31]|c->r[31]; // 801D59C0
  c->r[4]=0u+0x0000000Eu; // 801D59C4
  c->lr=0x801D59CCu; f_8013114C(c); // 801D59C8
L_801D59CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D59CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D59D0
  c->lr=c->r[0]; // 801D59D4
  c->r[1]=c->r[1]+0x00000010u; // 801D59D8
  return; // 801D59DC
}

// fn_801D59E0
void f_801D59E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D59E0
  c->r[0]=c->lr; // 801D59E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D59E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D59EC
  c->r[31]=c->r[3]|c->r[3]; // 801D59F0
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D59F4
  c->lr=0x801D59FCu; f_8020F5E0(c); // 801D59F8
  c->r[3]=c->r[31]|c->r[31]; // 801D59FC
  c->r[4]=0u+0x0000000Bu; // 801D5A00
  c->lr=0x801D5A08u; f_8013114C(c); // 801D5A04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5A08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5A0C
  c->lr=c->r[0]; // 801D5A10
  c->r[1]=c->r[1]+0x00000010u; // 801D5A14
  return; // 801D5A18
}

// fn_801D5A1C
void f_801D5A1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5A1C
  c->r[0]=c->lr; // 801D5A20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5A24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5A28
  c->r[31]=c->r[3]|c->r[3]; // 801D5A2C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D5A30
  c->lr=0x801D5A38u; f_8020F6D4(c); // 801D5A34
  cmps(c,0,(int32_t)c->r[3],0); // 801D5A38
  if (crb(c,2)) { goto L_801D5A54; } // 801D5A3C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5A40
  c->lr=0x801D5A48u; f_8020F5E4(c); // 801D5A44
  c->r[3]=c->r[31]|c->r[31]; // 801D5A48
  c->r[4]=0u+0x0000000Cu; // 801D5A4C
  c->lr=0x801D5A54u; f_8013114C(c); // 801D5A50
L_801D5A54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5A54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5A58
  c->lr=c->r[0]; // 801D5A5C
  c->r[1]=c->r[1]+0x00000010u; // 801D5A60
  return; // 801D5A64
}

// fn_801D5A68
void f_801D5A68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5A68
  c->r[0]=c->lr; // 801D5A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5A70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5A74
  c->r[31]=c->r[3]|c->r[3]; // 801D5A78
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801D5A7C
  c->lr=0x801D5A84u; f_801D15F0(c); // 801D5A80
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5A84
  c->lr=0x801D5A8Cu; f_8020F5E4(c); // 801D5A88
  c->r[3]=c->r[31]|c->r[31]; // 801D5A8C
  c->r[4]=0u+0x0000000Du; // 801D5A90
  c->lr=0x801D5A98u; f_8013114C(c); // 801D5A94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5A98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5A9C
  c->lr=c->r[0]; // 801D5AA0
  c->r[1]=c->r[1]+0x00000010u; // 801D5AA4
  return; // 801D5AA8
}

// fn_801D5AAC
void f_801D5AAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5AAC
  c->r[0]=c->lr; // 801D5AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5AB8
  c->r[31]=c->r[3]|c->r[3]; // 801D5ABC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D5AC0
  c->lr=0x801D5AC8u; f_8020F6D8(c); // 801D5AC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D5AC8
  if (crb(c,2)) { goto L_801D5AF0; } // 801D5ACC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5AD0
  c->r[4]=0u+0x00000000u; // 801D5AD4
  c->lr=0x801D5ADCu; f_8020F400(c); // 801D5AD8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5ADC
  c->lr=0x801D5AE4u; f_801D1548(c); // 801D5AE0
  c->r[3]=c->r[31]|c->r[31]; // 801D5AE4
  c->r[4]=0u+0x00000000u; // 801D5AE8
  c->lr=0x801D5AF0u; f_8013114C(c); // 801D5AEC
L_801D5AF0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5AF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5AF4
  c->lr=c->r[0]; // 801D5AF8
  c->r[1]=c->r[1]+0x00000010u; // 801D5AFC
  return; // 801D5B00
}

// fn_801D5B04
void f_801D5B04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5B04
  c->r[0]=c->lr; // 801D5B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5B10
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5B14
  c->r[30]=c->r[3]|c->r[3]; // 801D5B18
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D5B1C
  c->r[4]=0u+0x00000001u; // 801D5B20
  c->lr=0x801D5B28u; f_8020FB90(c); // 801D5B24
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5B28
  c->lr=0x801D5B30u; f_8020FCE4(c); // 801D5B2C
  c->r[0]=R32(c->r[30]+0x000000F0u); // 801D5B30
  cmps(c,0,(int32_t)c->r[0],0); // 801D5B34
  if (!crb(c,2)) { goto L_801D5B6C; } // 801D5B38
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801D5B3C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5B40
  if (!crb(c,2)) { goto L_801D5B54; } // 801D5B44
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5B48
  c->lr=0x801D5B50u; f_8020F6E0(c); // 801D5B4C
  goto L_801D5B7C; // 801D5B50
L_801D5B54:;
  if (crb(c,2)) { goto L_801D5B7C; } // 801D5B54
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5B58
  c->lr=0x801D5B60u; f_8020F718(c); // 801D5B5C
  c->r[0]=0u+0x00000000u; // 801D5B60
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801D5B64
  goto L_801D5B7C; // 801D5B68
L_801D5B6C:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5B6C
  c->lr=0x801D5B74u; f_8020F758(c); // 801D5B70
  c->r[0]=0u+0x00000000u; // 801D5B74
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801D5B78
L_801D5B7C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801D5B7C
  c->lr=0x801D5B84u; f_801D15BC(c); // 801D5B80
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801D5B84
  c->lr=0x801D5B8Cu; f_801D1560(c); // 801D5B88
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5B8C
  c->lr=0x801D5B94u; f_8020F388(c); // 801D5B90
  cmps(c,0,(int32_t)c->r[3],2); // 801D5B94
  if (!crb(c,2)) { goto L_801D5BD0; } // 801D5B98
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5B9C
  c->lr=0x801D5BA4u; f_8020F380(c); // 801D5BA0
  c->r[31]=c->r[3]|c->r[3]; // 801D5BA4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801D5BA8
  c->lr=0x801D5BB0u; f_801D18C4(c); // 801D5BAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 801D5BB0
  if (crb(c,0)) { goto L_801D5BD0; } // 801D5BB4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5BB8
  c->lr=0x801D5BC0u; f_8020F380(c); // 801D5BBC
  c->r[4]=c->r[3]|c->r[3]; // 801D5BC0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801D5BC4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801D5BC8
  c->lr=0x801D5BD0u; f_801D18CC(c); // 801D5BCC
L_801D5BD0:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5BD0
  c->lr=0x801D5BD8u; f_8020F380(c); // 801D5BD4
  c->r[4]=c->r[3]|c->r[3]; // 801D5BD8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801D5BDC
  c->lr=0x801D5BE4u; f_801D18DC(c); // 801D5BE0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801D5BE4
  c->lr=0x801D5BECu; f_801D18C4(c); // 801D5BE8
  c->r[4]=c->r[3]|c->r[3]; // 801D5BEC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801D5BF0
  c->lr=0x801D5BF8u; f_8020FCCC(c); // 801D5BF4
  c->r[3]=c->r[30]|c->r[30]; // 801D5BF8
  c->r[4]=0u+0x0000000Fu; // 801D5BFC
  c->lr=0x801D5C04u; f_8013114C(c); // 801D5C00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5C04
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5C08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5C0C
  c->lr=c->r[0]; // 801D5C10
  c->r[1]=c->r[1]+0x00000010u; // 801D5C14
  return; // 801D5C18
}

// fn_801D5C1C
void f_801D5C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5C1C
  c->r[0]=c->lr; // 801D5C20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5C24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5C28
  c->r[31]=c->r[3]|c->r[3]; // 801D5C2C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D5C30
  c->lr=0x801D5C38u; f_8020F91C(c); // 801D5C34
  cmps(c,0,(int32_t)c->r[3],0); // 801D5C38
  if (crb(c,2)) { goto L_801D5C68; } // 801D5C3C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5C40
  c->lr=0x801D5C48u; f_8020F8C0(c); // 801D5C44
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5C48
  c->lr=0x801D5C50u; f_801D18C4(c); // 801D5C4C
  c->r[4]=c->r[3]|c->r[3]; // 801D5C50
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5C54
  c->lr=0x801D5C5Cu; f_8020FBDC(c); // 801D5C58
  c->r[3]=c->r[31]|c->r[31]; // 801D5C5C
  c->r[4]=0u+0x00000010u; // 801D5C60
  c->lr=0x801D5C68u; f_8013114C(c); // 801D5C64
L_801D5C68:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5C6C
  c->lr=c->r[0]; // 801D5C70
  c->r[1]=c->r[1]+0x00000010u; // 801D5C74
  return; // 801D5C78
}

// fn_801D5C7C
void f_801D5C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5C7C
  c->r[0]=c->lr; // 801D5C80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5C84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5C88
  c->r[31]=c->r[3]|c->r[3]; // 801D5C8C
  c->r[3]=0u+0x00000001u; // 801D5C90
  c->lr=0x801D5C98u; f_8019CD1C(c); // 801D5C94
  cmps(c,0,(int32_t)c->r[3],0); // 801D5C98
  if (crb(c,2)) { goto L_801D5CB8; } // 801D5C9C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5CA0
  c->lr=0x801D5CA8u; f_801D1558(c); // 801D5CA4
  c->r[3]=c->r[31]|c->r[31]; // 801D5CA8
  c->r[4]=0u+0x00000013u; // 801D5CAC
  c->lr=0x801D5CB4u; f_8013114C(c); // 801D5CB0
  goto L_801D5D54; // 801D5CB4
L_801D5CB8:;
  c->r[3]=0u+0x00000000u; // 801D5CB8
  c->lr=0x801D5CC0u; f_8019CD1C(c); // 801D5CBC
  cmps(c,0,(int32_t)c->r[3],0); // 801D5CC0
  if (crb(c,2)) { goto L_801D5D08; } // 801D5CC4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5CC8
  c->lr=0x801D5CD0u; f_801D18C4(c); // 801D5CCC
  c->r[4]=c->r[3]|c->r[3]; // 801D5CD0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5CD4
  c->lr=0x801D5CDCu; f_8020F390(c); // 801D5CD8
  cmps(c,0,(int32_t)c->r[3],0); // 801D5CDC
  if (crb(c,2)) { goto L_801D5CF0; } // 801D5CE0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5CE4
  c->lr=0x801D5CECu; f_801D1658(c); // 801D5CE8
  goto L_801D5D54; // 801D5CEC
L_801D5CF0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5CF0
  c->lr=0x801D5CF8u; f_801D1624(c); // 801D5CF4
  c->r[3]=c->r[31]|c->r[31]; // 801D5CF8
  c->r[4]=0u+0x00000011u; // 801D5CFC
  c->lr=0x801D5D04u; f_8013114C(c); // 801D5D00
  goto L_801D5D54; // 801D5D04
L_801D5D08:;
  c->r[3]=0u+0x00000003u; // 801D5D08
  c->lr=0x801D5D10u; f_8019CD1C(c); // 801D5D0C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5D10
  if (crb(c,2)) { goto L_801D5D20; } // 801D5D14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5D18
  c->lr=0x801D5D20u; f_801D1878(c); // 801D5D1C
L_801D5D20:;
  c->r[3]=0u+0x00000004u; // 801D5D20
  c->lr=0x801D5D28u; f_8019CD1C(c); // 801D5D24
  cmps(c,0,(int32_t)c->r[3],0); // 801D5D28
  if (crb(c,2)) { goto L_801D5D38; } // 801D5D2C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5D30
  c->lr=0x801D5D38u; f_801D182C(c); // 801D5D34
L_801D5D38:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5D38
  c->lr=0x801D5D40u; f_8020F8C0(c); // 801D5D3C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801D5D40
  c->lr=0x801D5D48u; f_801D18C4(c); // 801D5D44
  c->r[4]=c->r[3]|c->r[3]; // 801D5D48
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5D4C
  c->lr=0x801D5D54u; f_8020FBDC(c); // 801D5D50
L_801D5D54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5D54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5D58
  c->lr=c->r[0]; // 801D5D5C
  c->r[1]=c->r[1]+0x00000010u; // 801D5D60
  return; // 801D5D64
}

// fn_801D5D68
void f_801D5D68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5D68
  c->r[0]=c->lr; // 801D5D6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5D70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5D74
  c->r[31]=c->r[3]|c->r[3]; // 801D5D78
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801D5D7C
  c->lr=0x801D5D84u; f_801D18C4(c); // 801D5D80
  c->r[4]=c->r[3]|c->r[3]; // 801D5D84
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5D88
  c->lr=0x801D5D90u; f_8020FB98(c); // 801D5D8C
  c->r[3]=c->r[31]|c->r[31]; // 801D5D90
  c->r[4]=0u+0x00000012u; // 801D5D94
  c->lr=0x801D5D9Cu; f_8013114C(c); // 801D5D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5D9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5DA0
  c->lr=c->r[0]; // 801D5DA4
  c->r[1]=c->r[1]+0x00000010u; // 801D5DA8
  return; // 801D5DAC
}

// fn_801D5DB0
void f_801D5DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5DB0
  c->r[0]=c->lr; // 801D5DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5DBC
  c->r[31]=c->r[3]|c->r[3]; // 801D5DC0
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801D5DC4
  c->lr=0x801D5DCCu; f_8020F91C(c); // 801D5DC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D5DCC
  if (crb(c,2)) { goto L_801D5DEC; } // 801D5DD0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801D5DD4
  c->r[4]=0u+0x00000000u; // 801D5DD8
  c->lr=0x801D5DE0u; f_8020F57C(c); // 801D5DDC
  c->r[3]=c->r[31]|c->r[31]; // 801D5DE0
  c->r[4]=0u+0x00000013u; // 801D5DE4
  c->lr=0x801D5DECu; f_8013114C(c); // 801D5DE8
L_801D5DEC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5DEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5DF0
  c->lr=c->r[0]; // 801D5DF4
  c->r[1]=c->r[1]+0x00000010u; // 801D5DF8
  return; // 801D5DFC
}

