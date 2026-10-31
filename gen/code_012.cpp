#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800BA5C4
void f_800BA5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA5C4
  c->r[0]=c->lr; // 800BA5C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA5CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA5D0
  c->r[31]=c->r[3]|c->r[3]; // 800BA5D4
  c->lr=0x800BA5DCu; f_800A23BC(c); // 800BA5D8
  c->lr=0x800BA5E0u; f_800BB700(c); // 800BA5DC
  c->r[4]=c->r[31]|c->r[31]; // 800BA5E0
  c->lr=0x800BA5E8u; f_800BBEA4(c); // 800BA5E4
  c->r[31]=c->r[3]|c->r[3]; // 800BA5E8
  c->lr=0x800BA5F0u; f_800A23BC(c); // 800BA5EC
  c->lr=0x800BA5F4u; f_800BB700(c); // 800BA5F0
  c->r[4]=c->r[31]|c->r[31]; // 800BA5F4
  c->lr=0x800BA5FCu; f_800BBE64(c); // 800BA5F8
  c->lr=0x800BA600u; f_800BB66C(c); // 800BA5FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA600
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA604
  c->lr=c->r[0]; // 800BA608
  c->r[1]=c->r[1]+0x00000010u; // 800BA60C
  return; // 800BA610
}

// fn_800BA614
void f_800BA614(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA614
  c->r[0]=c->lr; // 800BA618
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA61C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA620
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA624
  c->r[31]=c->r[3]|c->r[3]; // 800BA628
  c->f[31]=c->f[1]; // 800BA62C
  c->lr=0x800BA634u; f_800A23BC(c); // 800BA630
  c->lr=0x800BA638u; f_800BB700(c); // 800BA634
  c->r[4]=c->r[31]|c->r[31]; // 800BA638
  c->lr=0x800BA640u; f_800BBEA4(c); // 800BA63C
  c->r[31]=c->r[3]|c->r[3]; // 800BA640
  c->lr=0x800BA648u; f_800A23BC(c); // 800BA644
  c->lr=0x800BA64Cu; f_800BB700(c); // 800BA648
  c->r[4]=c->r[31]|c->r[31]; // 800BA64C
  c->lr=0x800BA654u; f_800BBE64(c); // 800BA650
  c->f[1]=c->f[31]; // 800BA654
  c->lr=0x800BA65Cu; f_800BB674(c); // 800BA658
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA65C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA660
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA664
  c->lr=c->r[0]; // 800BA668
  c->r[1]=c->r[1]+0x00000020u; // 800BA66C
  return; // 800BA670
}

// fn_800BA674
void f_800BA674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA674
  c->r[0]=c->lr; // 800BA678
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA67C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA680
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA684
  c->r[31]=c->r[3]|c->r[3]; // 800BA688
  c->f[31]=c->f[1]; // 800BA68C
  c->lr=0x800BA694u; f_800A23BC(c); // 800BA690
  c->lr=0x800BA698u; f_800BB700(c); // 800BA694
  c->r[4]=c->r[31]|c->r[31]; // 800BA698
  c->lr=0x800BA6A0u; f_800BBEA4(c); // 800BA69C
  c->r[31]=c->r[3]|c->r[3]; // 800BA6A0
  c->lr=0x800BA6A8u; f_800A23BC(c); // 800BA6A4
  c->lr=0x800BA6ACu; f_800BB700(c); // 800BA6A8
  c->r[4]=c->r[31]|c->r[31]; // 800BA6AC
  c->lr=0x800BA6B4u; f_800BBE64(c); // 800BA6B0
  c->f[1]=c->f[31]; // 800BA6B4
  c->lr=0x800BA6BCu; f_800BB6A8(c); // 800BA6B8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA6BC
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA6C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA6C4
  c->lr=c->r[0]; // 800BA6C8
  c->r[1]=c->r[1]+0x00000020u; // 800BA6CC
  return; // 800BA6D0
}

// fn_800BA6D4
void f_800BA6D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA6D4
  c->r[0]=c->lr; // 800BA6D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA6DC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA6E0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA6E4
  c->r[31]=c->r[3]|c->r[3]; // 800BA6E8
  c->f[31]=c->f[1]; // 800BA6EC
  c->lr=0x800BA6F4u; f_800A23BC(c); // 800BA6F0
  c->lr=0x800BA6F8u; f_800BB700(c); // 800BA6F4
  c->r[4]=c->r[31]|c->r[31]; // 800BA6F8
  c->lr=0x800BA700u; f_800BBEA4(c); // 800BA6FC
  c->r[31]=c->r[3]|c->r[3]; // 800BA700
  c->lr=0x800BA708u; f_800A23BC(c); // 800BA704
  c->lr=0x800BA70Cu; f_800BB700(c); // 800BA708
  c->r[4]=c->r[31]|c->r[31]; // 800BA70C
  c->lr=0x800BA714u; f_800BBE64(c); // 800BA710
  c->f[1]=c->f[31]; // 800BA714
  c->lr=0x800BA71Cu; f_800BB6DC(c); // 800BA718
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA71C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA720
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA724
  c->lr=c->r[0]; // 800BA728
  c->r[1]=c->r[1]+0x00000020u; // 800BA72C
  return; // 800BA730
}

// fn_800BA734
void f_800BA734(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA734
  c->r[0]=c->lr; // 800BA738
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA73C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA740
  c->r[31]=c->r[3]|c->r[3]; // 800BA744
  c->lr=0x800BA74Cu; f_800A23BC(c); // 800BA748
  c->lr=0x800BA750u; f_800BB700(c); // 800BA74C
  c->r[4]=c->r[31]|c->r[31]; // 800BA750
  c->lr=0x800BA758u; f_800BBEA4(c); // 800BA754
  c->r[31]=c->r[3]|c->r[3]; // 800BA758
  c->lr=0x800BA760u; f_800A23BC(c); // 800BA75C
  c->lr=0x800BA764u; f_800BB700(c); // 800BA760
  c->r[4]=c->r[31]|c->r[31]; // 800BA764
  c->lr=0x800BA76Cu; f_800BBE64(c); // 800BA768
  c->lr=0x800BA770u; f_800BB6F8(c); // 800BA76C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA770
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA774
  c->lr=c->r[0]; // 800BA778
  c->r[1]=c->r[1]+0x00000010u; // 800BA77C
  return; // 800BA780
}

// fn_800BA784
void f_800BA784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA784
  c->r[0]=c->lr; // 800BA788
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA78C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA790
  c->r[31]=c->r[3]|c->r[3]; // 800BA794
  c->lr=0x800BA79Cu; f_800A23BC(c); // 800BA798
  c->lr=0x800BA7A0u; f_800BB700(c); // 800BA79C
  c->r[4]=c->r[31]|c->r[31]; // 800BA7A0
  c->lr=0x800BA7A8u; f_800BBEA4(c); // 800BA7A4
  c->r[31]=c->r[3]|c->r[3]; // 800BA7A8
  c->lr=0x800BA7B0u; f_800A23BC(c); // 800BA7AC
  c->lr=0x800BA7B4u; f_800BB700(c); // 800BA7B0
  c->r[4]=c->r[31]|c->r[31]; // 800BA7B4
  c->lr=0x800BA7BCu; f_800BBE64(c); // 800BA7B8
  c->lr=0x800BA7C0u; f_800D26AC(c); // 800BA7BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA7C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA7C4
  c->lr=c->r[0]; // 800BA7C8
  c->r[1]=c->r[1]+0x00000010u; // 800BA7CC
  return; // 800BA7D0
}

// fn_800BA7D4
void f_800BA7D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA7D4
  c->r[0]=c->lr; // 800BA7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA7E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BA7E4
  c->r[30]=c->r[3]|c->r[3]; // 800BA7E8
  c->r[31]=c->r[4]|c->r[4]; // 800BA7EC
  c->lr=0x800BA7F4u; f_800A23BC(c); // 800BA7F0
  c->lr=0x800BA7F8u; f_800BB700(c); // 800BA7F4
  c->r[4]=c->r[30]|c->r[30]; // 800BA7F8
  c->lr=0x800BA800u; f_800BBEA4(c); // 800BA7FC
  c->r[30]=c->r[3]|c->r[3]; // 800BA800
  c->lr=0x800BA808u; f_800A23BC(c); // 800BA804
  c->lr=0x800BA80Cu; f_800BB800(c); // 800BA808
  c->r[4]=c->r[31]|c->r[31]; // 800BA80C
  c->lr=0x800BA814u; f_800BBD98(c); // 800BA810
  c->r[31]=c->r[3]|c->r[3]; // 800BA814
  c->lr=0x800BA81Cu; f_800A23BC(c); // 800BA818
  c->lr=0x800BA820u; f_800BB700(c); // 800BA81C
  c->r[4]=c->r[30]|c->r[30]; // 800BA820
  c->lr=0x800BA828u; f_800BBE64(c); // 800BA824
  c->r[4]=c->r[31]|c->r[31]; // 800BA828
  c->lr=0x800BA830u; f_800D2A78(c); // 800BA82C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA830
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BA834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA838
  c->lr=c->r[0]; // 800BA83C
  c->r[1]=c->r[1]+0x00000010u; // 800BA840
  return; // 800BA844
}

// fn_800BA848
void f_800BA848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA848
  c->r[0]=c->lr; // 800BA84C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA854
  c->r[31]=c->r[3]|c->r[3]; // 800BA858
  c->lr=0x800BA860u; f_800A23BC(c); // 800BA85C
  c->lr=0x800BA864u; f_800BB700(c); // 800BA860
  c->r[4]=c->r[31]|c->r[31]; // 800BA864
  c->lr=0x800BA86Cu; f_800BBEA4(c); // 800BA868
  c->r[31]=c->r[3]|c->r[3]; // 800BA86C
  c->lr=0x800BA874u; f_800A23BC(c); // 800BA870
  c->lr=0x800BA878u; f_800BB700(c); // 800BA874
  c->r[4]=c->r[31]|c->r[31]; // 800BA878
  c->lr=0x800BA880u; f_800BBE64(c); // 800BA87C
  c->lr=0x800BA884u; f_800D2A8C(c); // 800BA880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA884
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA888
  c->lr=c->r[0]; // 800BA88C
  c->r[1]=c->r[1]+0x00000010u; // 800BA890
  return; // 800BA894
}

// fn_800BA898
void f_800BA898(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA898
  c->r[0]=c->lr; // 800BA89C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BA8A0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800BA8A4
  W32(c->r[1]+0x00000024u,c->r[31]); // 800BA8A8
  W32(c->r[1]+0x00000020u,c->r[30]); // 800BA8AC
  c->r[30]=c->r[3]|c->r[3]; // 800BA8B0
  c->r[31]=c->r[4]|c->r[4]; // 800BA8B4
  c->f[31]=c->f[1]; // 800BA8B8
  c->r[3]=c->r[1]+0x00000008u; // 800BA8BC
  c->lr=0x800BA8C4u; f_8004B0A4(c); // 800BA8C0
  c->lr=0x800BA8C8u; f_800A23BC(c); // 800BA8C4
  c->lr=0x800BA8CCu; f_800BB700(c); // 800BA8C8
  c->r[4]=c->r[30]|c->r[30]; // 800BA8CC
  c->lr=0x800BA8D4u; f_800BBEA4(c); // 800BA8D0
  c->r[30]=c->r[3]|c->r[3]; // 800BA8D4
  c->lr=0x800BA8DCu; f_800A23BC(c); // 800BA8D8
  c->lr=0x800BA8E0u; f_800BB800(c); // 800BA8DC
  c->r[4]=c->r[31]|c->r[31]; // 800BA8E0
  c->lr=0x800BA8E8u; f_800BBD98(c); // 800BA8E4
  c->r[31]=c->r[3]|c->r[3]; // 800BA8E8
  c->lr=0x800BA8F0u; f_800A23BC(c); // 800BA8EC
  c->lr=0x800BA8F4u; f_800BB800(c); // 800BA8F0
  c->r[4]=c->r[31]|c->r[31]; // 800BA8F4
  c->lr=0x800BA8FCu; f_800BBD58(c); // 800BA8F8
  c->r[4]=c->r[1]+0x00000008u; // 800BA8FC
  c->lr=0x800BA904u; f_800BD664(c); // 800BA900
  c->lr=0x800BA908u; f_800A23BC(c); // 800BA904
  c->lr=0x800BA90Cu; f_800BB700(c); // 800BA908
  c->r[4]=c->r[30]|c->r[30]; // 800BA90C
  c->lr=0x800BA914u; f_800BBE64(c); // 800BA910
  c->r[4]=c->r[1]+0x00000008u; // 800BA914
  c->f[1]=c->f[31]; // 800BA918
  c->lr=0x800BA920u; f_800D28BC(c); // 800BA91C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800BA920
  c->r[31]=R32(c->r[1]+0x00000024u); // 800BA924
  c->r[30]=R32(c->r[1]+0x00000020u); // 800BA928
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BA92C
  c->lr=c->r[0]; // 800BA930
  c->r[1]=c->r[1]+0x00000030u; // 800BA934
  return; // 800BA938
}

// fn_800BA93C
void f_800BA93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA93C
  c->r[0]=c->lr; // 800BA940
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BA944
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800BA948
  W32(c->r[1]+0x00000024u,c->r[31]); // 800BA94C
  W32(c->r[1]+0x00000020u,c->r[30]); // 800BA950
  c->r[31]=c->r[3]|c->r[3]; // 800BA954
  c->r[30]=c->r[4]|c->r[4]; // 800BA958
  c->f[31]=c->f[1]; // 800BA95C
  c->r[3]=c->r[1]+0x00000008u; // 800BA960
  c->lr=0x800BA968u; f_8004B0A4(c); // 800BA964
  c->lr=0x800BA96Cu; f_800A23BC(c); // 800BA968
  c->lr=0x800BA970u; f_800BB700(c); // 800BA96C
  c->r[4]=c->r[31]|c->r[31]; // 800BA970
  c->lr=0x800BA978u; f_800BBEA4(c); // 800BA974
  c->r[31]=c->r[3]|c->r[3]; // 800BA978
  c->lr=0x800BA980u; f_800A23BC(c); // 800BA97C
  c->lr=0x800BA984u; f_800BB810(c); // 800BA980
  c->r[4]=c->r[30]|c->r[30]; // 800BA984
  c->lr=0x800BA98Cu; f_800BBB34(c); // 800BA988
  c->r[30]=c->r[3]|c->r[3]; // 800BA98C
  c->lr=0x800BA994u; f_800A23BC(c); // 800BA990
  c->lr=0x800BA998u; f_800BB810(c); // 800BA994
  c->r[4]=c->r[30]|c->r[30]; // 800BA998
  c->lr=0x800BA9A0u; f_800BBAF4(c); // 800BA99C
  c->r[4]=c->r[1]+0x00000008u; // 800BA9A0
  c->lr=0x800BA9A8u; f_800CFF48(c); // 800BA9A4
  c->lr=0x800BA9ACu; f_800A23BC(c); // 800BA9A8
  c->lr=0x800BA9B0u; f_800BB700(c); // 800BA9AC
  c->r[4]=c->r[31]|c->r[31]; // 800BA9B0
  c->lr=0x800BA9B8u; f_800BBE64(c); // 800BA9B4
  c->r[4]=c->r[1]+0x00000008u; // 800BA9B8
  c->f[1]=c->f[31]; // 800BA9BC
  c->lr=0x800BA9C4u; f_800D28BC(c); // 800BA9C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800BA9C4
  c->r[31]=R32(c->r[1]+0x00000024u); // 800BA9C8
  c->r[30]=R32(c->r[1]+0x00000020u); // 800BA9CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BA9D0
  c->lr=c->r[0]; // 800BA9D4
  c->r[1]=c->r[1]+0x00000030u; // 800BA9D8
  return; // 800BA9DC
}

// fn_800BA9E0
void f_800BA9E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA9E0
  c->r[0]=c->lr; // 800BA9E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BA9E8
  c->r[11]=c->r[1]+0x00000030u; // 800BA9EC
  c->lr=0x800BA9F4u; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 800BA9F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA9F4
  c->r[31]=c->r[3]|c->r[3]; // 800BA9F8
  c->f[28]=c->f[1]; // 800BA9FC
  c->f[29]=c->f[2]; // 800BAA00
  c->f[30]=c->f[3]; // 800BAA04
  c->f[31]=c->f[4]; // 800BAA08
  c->lr=0x800BAA10u; f_800A23BC(c); // 800BAA0C
  c->lr=0x800BAA14u; f_800BB700(c); // 800BAA10
  c->r[4]=c->r[31]|c->r[31]; // 800BAA14
  c->lr=0x800BAA1Cu; f_800BBEA4(c); // 800BAA18
  c->r[31]=c->r[3]|c->r[3]; // 800BAA1C
  c->lr=0x800BAA24u; f_800A23BC(c); // 800BAA20
  c->lr=0x800BAA28u; f_800BB700(c); // 800BAA24
  c->r[4]=c->r[31]|c->r[31]; // 800BAA28
  c->lr=0x800BAA30u; f_800BBE64(c); // 800BAA2C
  c->f[1]=c->f[28]; // 800BAA30
  c->f[2]=c->f[29]; // 800BAA34
  c->f[3]=c->f[30]; // 800BAA38
  c->f[4]=c->f[31]; // 800BAA3C
  c->lr=0x800BAA44u; f_800D2868(c); // 800BAA40
  c->r[11]=c->r[1]+0x00000030u; // 800BAA44
  c->lr=0x800BAA4Cu; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 800BAA48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAA4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BAA50
  c->lr=c->r[0]; // 800BAA54
  c->r[1]=c->r[1]+0x00000030u; // 800BAA58
  return; // 800BAA5C
}

// fn_800BAA60
void f_800BAA60(Ctx* __restrict c) {
  return; // 800BAA60
}

// fn_800BAA64
void f_800BAA64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAA64
  c->r[0]=c->lr; // 800BAA68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BAA6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BAA70
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BAA74
  c->r[30]=c->r[3]|c->r[3]; // 800BAA78
  c->r[3]=c->r[1]+0x00000008u; // 800BAA7C
  c->lr=0x800BAA84u; f_8004E34C(c); // 800BAA80
  c->lr=0x800BAA88u; f_800A23BC(c); // 800BAA84
  c->lr=0x800BAA8Cu; f_800BB810(c); // 800BAA88
  c->r[4]=c->r[1]+0x00000008u; // 800BAA8C
  c->r[5]=0u+0x00000000u; // 800BAA90
  c->r[6]=0u+0x00000000u; // 800BAA94
  c->lr=0x800BAA9Cu; f_800CFF60(c); // 800BAA98
  c->r[31]=c->r[3]|c->r[3]; // 800BAA9C
  c->lr=0x800BAAA4u; f_800A23BC(c); // 800BAAA0
  c->lr=0x800BAAA8u; f_800BB810(c); // 800BAAA4
  c->r[4]=c->r[31]|c->r[31]; // 800BAAA8
  c->lr=0x800BAAB0u; f_800BBAF4(c); // 800BAAAC
  c->r[4]=c->r[30]|c->r[30]; // 800BAAB0
  c->lr=0x800BAAB8u; f_800BDE70(c); // 800BAAB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BAAB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BAABC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BAAC0
  c->lr=c->r[0]; // 800BAAC4
  c->r[1]=c->r[1]+0x00000020u; // 800BAAC8
  return; // 800BAACC
}

// fn_800BAAD0
void f_800BAAD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAAD0
  c->r[0]=c->lr; // 800BAAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAADC
  c->r[31]=c->r[3]|c->r[3]; // 800BAAE0
  c->lr=0x800BAAE8u; f_800A23BC(c); // 800BAAE4
  c->lr=0x800BAAECu; f_800BB810(c); // 800BAAE8
  c->r[4]=c->r[31]|c->r[31]; // 800BAAEC
  c->lr=0x800BAAF4u; f_800CFFE0(c); // 800BAAF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAAF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAAF8
  c->lr=c->r[0]; // 800BAAFC
  c->r[1]=c->r[1]+0x00000010u; // 800BAB00
  return; // 800BAB04
}

// fn_800BAB08
void f_800BAB08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAB08
  c->r[0]=c->lr; // 800BAB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAB10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAB14
  c->r[31]=c->r[3]|c->r[3]; // 800BAB18
  c->lr=0x800BAB20u; f_800A23BC(c); // 800BAB1C
  c->lr=0x800BAB24u; f_800BB820(c); // 800BAB20
  c->r[4]=c->r[31]|c->r[31]; // 800BAB24
  c->lr=0x800BAB2Cu; f_800D08C0(c); // 800BAB28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAB30
  c->lr=c->r[0]; // 800BAB34
  c->r[1]=c->r[1]+0x00000010u; // 800BAB38
  return; // 800BAB3C
}

// fn_800BAB40
void f_800BAB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAB40
  c->r[0]=c->lr; // 800BAB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAB48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAB4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAB50
  c->r[30]=c->r[3]|c->r[3]; // 800BAB54
  c->r[31]=c->r[4]|c->r[4]; // 800BAB58
  c->lr=0x800BAB60u; f_800A23BC(c); // 800BAB5C
  c->lr=0x800BAB64u; f_800BB76C(c); // 800BAB60
  c->r[4]=c->r[30]|c->r[30]; // 800BAB64
  c->r[5]=c->r[31]|c->r[31]; // 800BAB68
  c->lr=0x800BAB70u; f_800D3244(c); // 800BAB6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAB70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BAB74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAB78
  c->lr=c->r[0]; // 800BAB7C
  c->r[1]=c->r[1]+0x00000010u; // 800BAB80
  return; // 800BAB84
}

// fn_800BAB88
void f_800BAB88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAB88
  c->r[0]=c->lr; // 800BAB8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAB90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAB94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAB98
  c->r[30]=c->r[3]|c->r[3]; // 800BAB9C
  c->r[31]=c->r[4]|c->r[4]; // 800BABA0
  c->lr=0x800BABA8u; f_800A23BC(c); // 800BABA4
  c->lr=0x800BABACu; f_800BB76C(c); // 800BABA8
  c->r[4]=c->r[30]|c->r[30]; // 800BABAC
  c->r[5]=c->r[31]|c->r[31]; // 800BABB0
  c->lr=0x800BABB8u; f_800D327C(c); // 800BABB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BABB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BABBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BABC0
  c->lr=c->r[0]; // 800BABC4
  c->r[1]=c->r[1]+0x00000010u; // 800BABC8
  return; // 800BABCC
}

// fn_800BABD0
void f_800BABD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BABD0
  c->r[0]=c->lr; // 800BABD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BABD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BABDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BABE0
  c->r[30]=c->r[3]|c->r[3]; // 800BABE4
  c->r[31]=c->r[4]|c->r[4]; // 800BABE8
  c->lr=0x800BABF0u; f_800A23BC(c); // 800BABEC
  c->lr=0x800BABF4u; f_800BB76C(c); // 800BABF0
  c->r[4]=c->r[30]|c->r[30]; // 800BABF4
  c->r[5]=c->r[31]|c->r[31]; // 800BABF8
  c->lr=0x800BAC00u; f_800D32B8(c); // 800BABFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAC00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BAC04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAC08
  c->lr=c->r[0]; // 800BAC0C
  c->r[1]=c->r[1]+0x00000010u; // 800BAC10
  return; // 800BAC14
}

// fn_800BAC18
void f_800BAC18(Ctx* __restrict c) {
  f_80156F98(c); return; // 800BAC18
}

// fn_800BAC1C
void f_800BAC1C(Ctx* __restrict c) {
  f_80156FC4(c); return; // 800BAC1C
}

// fn_800BAC20
void f_800BAC20(Ctx* __restrict c) {
  f_80156FF0(c); return; // 800BAC20
}

// fn_800BAC24
void f_800BAC24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAC24
  c->r[0]=c->lr; // 800BAC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAC2C
  c->lr=0x800BAC34u; f_80156434(c); // 800BAC30
  c->lr=0x800BAC38u; f_80156F40(c); // 800BAC34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAC38
  c->lr=c->r[0]; // 800BAC3C
  c->r[1]=c->r[1]+0x00000010u; // 800BAC40
  return; // 800BAC44
}

// fn_800BAC48
void f_800BAC48(Ctx* __restrict c) {
  f_80157048(c); return; // 800BAC48
}

// fn_800BAC4C
void f_800BAC4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAC4C
  c->r[0]=c->lr; // 800BAC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAC54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAC58
  c->r[31]=c->r[3]|c->r[3]; // 800BAC5C
  c->lr=0x800BAC64u; f_800A23BC(c); // 800BAC60
  c->lr=0x800BAC68u; f_800BB828(c); // 800BAC64
  c->r[4]=c->r[31]|c->r[31]; // 800BAC68
  c->lr=0x800BAC70u; f_800E1D9C(c); // 800BAC6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAC70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAC74
  c->lr=c->r[0]; // 800BAC78
  c->r[1]=c->r[1]+0x00000010u; // 800BAC7C
  return; // 800BAC80
}

// fn_800BAC84
void f_800BAC84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAC84
  c->r[0]=c->lr; // 800BAC88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAC8C
  c->lr=0x800BAC94u; f_800A23BC(c); // 800BAC90
  c->lr=0x800BAC98u; f_800A23C8(c); // 800BAC94
  c->lr=0x800BAC9Cu; f_800BBF88(c); // 800BAC98
  cmps(c,0,(int32_t)c->r[3],0); // 800BAC9C
  if (!crb(c,2)) { goto L_800BACB8; } // 800BACA0
  c->lr=0x800BACA8u; f_800A23BC(c); // 800BACA4
  c->lr=0x800BACACu; f_800BB828(c); // 800BACA8
  c->r[4]=0u+0x00000002u; // 800BACAC
  c->lr=0x800BACB4u; f_800E1DD4(c); // 800BACB0
  goto L_800BACC8; // 800BACB4
L_800BACB8:;
  c->lr=0x800BACBCu; f_800A23BC(c); // 800BACB8
  c->lr=0x800BACC0u; f_800BB828(c); // 800BACBC
  c->r[4]=0u+0x00000000u; // 800BACC0
  c->lr=0x800BACC8u; f_800E1DD4(c); // 800BACC4
L_800BACC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BACC8
  c->lr=c->r[0]; // 800BACCC
  c->r[1]=c->r[1]+0x00000010u; // 800BACD0
  return; // 800BACD4
}

// fn_800BACD8
void f_800BACD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BACD8
  c->r[0]=c->lr; // 800BACDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BACE0
  c->lr=0x800BACE8u; f_800A23BC(c); // 800BACE4
  c->lr=0x800BACECu; f_800BB828(c); // 800BACE8
  c->lr=0x800BACF0u; f_800E1DC4(c); // 800BACEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BACF0
  c->lr=c->r[0]; // 800BACF4
  c->r[1]=c->r[1]+0x00000010u; // 800BACF8
  return; // 800BACFC
}

// fn_800BAD00
void f_800BAD00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAD00
  c->r[0]=c->lr; // 800BAD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAD08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAD0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAD10
  c->r[31]=c->r[3]|c->r[3]; // 800BAD14
  c->r[30]=c->r[4]|c->r[4]; // 800BAD18
  c->lr=0x800BAD20u; f_800A23BC(c); // 800BAD1C
  c->lr=0x800BAD24u; f_800BB828(c); // 800BAD20
  c->r[4]=c->r[31]|c->r[31]; // 800BAD24
  c->lr=0x800BAD2Cu; f_800BB9DC(c); // 800BAD28
  c->r[31]=c->r[3]|c->r[3]; // 800BAD2C
  cmps(c,0,(int32_t)c->r[3],0); // 800BAD30
  if (crb(c,2)) { goto L_800BAD50; } // 800BAD34
  c->lr=0x800BAD3Cu; f_800A23BC(c); // 800BAD38
  c->lr=0x800BAD40u; f_800BB828(c); // 800BAD3C
  c->r[4]=c->r[31]|c->r[31]; // 800BAD40
  c->lr=0x800BAD48u; f_800BB99C(c); // 800BAD44
  c->r[4]=c->r[30]|c->r[30]; // 800BAD48
  c->lr=0x800BAD50u; f_800E18D4(c); // 800BAD4C
L_800BAD50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAD50
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BAD54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAD58
  c->lr=c->r[0]; // 800BAD5C
  c->r[1]=c->r[1]+0x00000010u; // 800BAD60
  return; // 800BAD64
}

// fn_800BAD68
void f_800BAD68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAD68
  c->r[0]=c->lr; // 800BAD6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAD70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAD74
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAD78
  c->r[30]=c->r[3]|c->r[3]; // 800BAD7C
  c->r[31]=c->r[4]|c->r[4]; // 800BAD80
  c->lr=0x800BAD88u; f_800A23BC(c); // 800BAD84
  c->lr=0x800BAD8Cu; f_800BB808(c); // 800BAD88
  c->r[4]=c->r[30]|c->r[30]; // 800BAD8C
  c->r[5]=c->r[31]|c->r[31]; // 800BAD90
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAD94
  c->lr=0x800BAD9Cu; f_800CAF70(c); // 800BAD98
  c->r[31]=c->r[3]|c->r[3]; // 800BAD9C
  cmps(c,0,(int32_t)c->r[3],0); // 800BADA0
  if (crb(c,2)) { goto L_800BADC0; } // 800BADA4
  c->lr=0x800BADACu; f_800A23BC(c); // 800BADA8
  c->lr=0x800BADB0u; f_800BB808(c); // 800BADAC
  c->r[4]=c->r[31]|c->r[31]; // 800BADB0
  c->lr=0x800BADB8u; f_800BBC8C(c); // 800BADB4
  c->r[4]=c->r[30]|c->r[30]; // 800BADB8
  c->lr=0x800BADC0u; f_800BDE70(c); // 800BADBC
L_800BADC0:;
  c->lr=0x800BADC4u; f_800A23BC(c); // 800BADC0
  c->lr=0x800BADC8u; f_800BB808(c); // 800BADC4
  c->r[4]=c->r[31]|c->r[31]; // 800BADC8
  c->lr=0x800BADD0u; f_800BBC8C(c); // 800BADCC
  c->lr=0x800BADD4u; f_800CAC10(c); // 800BADD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BADD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BADD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BADDC
  c->lr=c->r[0]; // 800BADE0
  c->r[1]=c->r[1]+0x00000010u; // 800BADE4
  return; // 800BADE8
}

// fn_800BADEC
void f_800BADEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BADEC
  c->r[0]=c->lr; // 800BADF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BADF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BADF8
  c->r[31]=c->r[3]|c->r[3]; // 800BADFC
  c->lr=0x800BAE04u; f_800A23BC(c); // 800BAE00
  c->lr=0x800BAE08u; f_800BB808(c); // 800BAE04
  c->r[4]=c->r[31]|c->r[31]; // 800BAE08
  c->lr=0x800BAE10u; f_800BBCCC(c); // 800BAE0C
  c->r[31]=c->r[3]|c->r[3]; // 800BAE10
  cmps(c,0,(int32_t)c->r[3],0); // 800BAE14
  if (crb(c,2)) { goto L_800BAE2C; } // 800BAE18
  c->lr=0x800BAE20u; f_800A23BC(c); // 800BAE1C
  c->lr=0x800BAE24u; f_800BB808(c); // 800BAE20
  c->r[4]=c->r[31]|c->r[31]; // 800BAE24
  c->lr=0x800BAE2Cu; f_800CB00C(c); // 800BAE28
L_800BAE2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAE2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAE30
  c->lr=c->r[0]; // 800BAE34
  c->r[1]=c->r[1]+0x00000010u; // 800BAE38
  return; // 800BAE3C
}

// fn_800BAE40
void f_800BAE40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAE40
  c->r[0]=c->lr; // 800BAE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAE48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAE4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAE50
  c->r[31]=c->r[3]|c->r[3]; // 800BAE54
  c->r[30]=c->r[4]|c->r[4]; // 800BAE58
  c->lr=0x800BAE60u; f_800A23BC(c); // 800BAE5C
  c->lr=0x800BAE64u; f_800BB808(c); // 800BAE60
  c->r[4]=c->r[31]|c->r[31]; // 800BAE64
  c->lr=0x800BAE6Cu; f_800BBCCC(c); // 800BAE68
  c->r[31]=c->r[3]|c->r[3]; // 800BAE6C
  c->lr=0x800BAE74u; f_800A23BC(c); // 800BAE70
  c->lr=0x800BAE78u; f_800BB808(c); // 800BAE74
  c->r[4]=c->r[31]|c->r[31]; // 800BAE78
  c->lr=0x800BAE80u; f_800BBC8C(c); // 800BAE7C
  c->r[4]=c->r[30]|c->r[30]; // 800BAE80
  c->lr=0x800BAE88u; f_800BCDE8(c); // 800BAE84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAE88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BAE8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAE90
  c->lr=c->r[0]; // 800BAE94
  c->r[1]=c->r[1]+0x00000010u; // 800BAE98
  return; // 800BAE9C
}

// fn_800BAEA0
void f_800BAEA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAEA0
  c->r[0]=c->lr; // 800BAEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAEAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAEB0
  c->r[31]=c->r[3]|c->r[3]; // 800BAEB4
  c->r[30]=c->r[4]|c->r[4]; // 800BAEB8
  c->lr=0x800BAEC0u; f_800A23BC(c); // 800BAEBC
  c->lr=0x800BAEC4u; f_800BB808(c); // 800BAEC0
  c->r[4]=c->r[31]|c->r[31]; // 800BAEC4
  c->lr=0x800BAECCu; f_800BBCCC(c); // 800BAEC8
  c->r[31]=c->r[3]|c->r[3]; // 800BAECC
  c->lr=0x800BAED4u; f_800A23BC(c); // 800BAED0
  c->lr=0x800BAED8u; f_800BB808(c); // 800BAED4
  c->r[4]=c->r[31]|c->r[31]; // 800BAED8
  c->lr=0x800BAEE0u; f_800BBC8C(c); // 800BAEDC
  c->r[4]=c->r[30]|c->r[30]; // 800BAEE0
  c->lr=0x800BAEE8u; f_800BCF2C(c); // 800BAEE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAEE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BAEEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAEF0
  c->lr=c->r[0]; // 800BAEF4
  c->r[1]=c->r[1]+0x00000010u; // 800BAEF8
  return; // 800BAEFC
}

// fn_800BAF00
void f_800BAF00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAF00
  c->r[0]=c->lr; // 800BAF04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BAF08
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BAF0C
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BAF10
  c->r[31]=c->r[3]|c->r[3]; // 800BAF14
  c->f[31]=c->f[1]; // 800BAF18
  c->lr=0x800BAF20u; f_800A23BC(c); // 800BAF1C
  c->lr=0x800BAF24u; f_800BB808(c); // 800BAF20
  c->r[4]=c->r[31]|c->r[31]; // 800BAF24
  c->lr=0x800BAF2Cu; f_800BBCCC(c); // 800BAF28
  c->r[31]=c->r[3]|c->r[3]; // 800BAF2C
  c->lr=0x800BAF34u; f_800A23BC(c); // 800BAF30
  c->lr=0x800BAF38u; f_800BB808(c); // 800BAF34
  c->r[4]=c->r[31]|c->r[31]; // 800BAF38
  c->lr=0x800BAF40u; f_800BBC8C(c); // 800BAF3C
  c->f[1]=c->f[31]; // 800BAF40
  c->lr=0x800BAF48u; f_800BCFE0(c); // 800BAF44
  c->lr=0x800BAF4Cu; f_800A23BC(c); // 800BAF48
  c->lr=0x800BAF50u; f_800BB808(c); // 800BAF4C
  c->r[4]=c->r[31]|c->r[31]; // 800BAF50
  c->lr=0x800BAF58u; f_800BBC8C(c); // 800BAF54
  c->lr=0x800BAF5Cu; f_800CAC10(c); // 800BAF58
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BAF5C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BAF60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BAF64
  c->lr=c->r[0]; // 800BAF68
  c->r[1]=c->r[1]+0x00000020u; // 800BAF6C
  return; // 800BAF70
}

// fn_800BAF74
void f_800BAF74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAF74
  c->r[0]=c->lr; // 800BAF78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAF7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAF80
  c->r[31]=c->r[3]|c->r[3]; // 800BAF84
  c->lr=0x800BAF8Cu; f_800A23BC(c); // 800BAF88
  c->lr=0x800BAF90u; f_800BB808(c); // 800BAF8C
  c->r[4]=c->r[31]|c->r[31]; // 800BAF90
  c->lr=0x800BAF98u; f_800BBCCC(c); // 800BAF94
  c->r[31]=c->r[3]|c->r[3]; // 800BAF98
  c->lr=0x800BAFA0u; f_800A23BC(c); // 800BAF9C
  c->lr=0x800BAFA4u; f_800BB808(c); // 800BAFA0
  c->r[4]=c->r[31]|c->r[31]; // 800BAFA4
  c->lr=0x800BAFACu; f_800BBC8C(c); // 800BAFA8
  c->lr=0x800BAFB0u; f_800BD094(c); // 800BAFAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BAFB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BAFB4
  c->lr=c->r[0]; // 800BAFB8
  c->r[1]=c->r[1]+0x00000010u; // 800BAFBC
  return; // 800BAFC0
}

// fn_800BAFC4
void f_800BAFC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BAFC4
  c->r[0]=c->lr; // 800BAFC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BAFCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BAFD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BAFD4
  c->r[31]=c->r[3]|c->r[3]; // 800BAFD8
  c->r[30]=c->r[4]|c->r[4]; // 800BAFDC
  c->lr=0x800BAFE4u; f_800A23BC(c); // 800BAFE0
  c->lr=0x800BAFE8u; f_800BB808(c); // 800BAFE4
  c->r[4]=c->r[31]|c->r[31]; // 800BAFE8
  c->lr=0x800BAFF0u; f_800BBCCC(c); // 800BAFEC
  c->r[31]=c->r[3]|c->r[3]; // 800BAFF0
  c->lr=0x800BAFF8u; f_800A23BC(c); // 800BAFF4
  c->lr=0x800BAFFCu; f_800BB808(c); // 800BAFF8
  c->r[4]=c->r[31]|c->r[31]; // 800BAFFC
  c->lr=0x800BB004u; f_800BBC8C(c); // 800BB000
  c->r[4]=c->r[30]|c->r[30]; // 800BB004
  c->lr=0x800BB00Cu; f_800BD0E8(c); // 800BB008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB00C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BB010
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB014
  c->lr=c->r[0]; // 800BB018
  c->r[1]=c->r[1]+0x00000010u; // 800BB01C
  return; // 800BB020
}

// fn_800BB024
void f_800BB024(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB024
  c->r[0]=c->lr; // 800BB028
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB02C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB030
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BB034
  c->r[31]=c->r[3]|c->r[3]; // 800BB038
  c->r[30]=c->r[4]|c->r[4]; // 800BB03C
  c->lr=0x800BB044u; f_800A23BC(c); // 800BB040
  c->lr=0x800BB048u; f_800BB808(c); // 800BB044
  c->r[4]=c->r[31]|c->r[31]; // 800BB048
  c->lr=0x800BB050u; f_800BBCCC(c); // 800BB04C
  c->r[31]=c->r[3]|c->r[3]; // 800BB050
  c->lr=0x800BB058u; f_800A23BC(c); // 800BB054
  c->lr=0x800BB05Cu; f_800BB808(c); // 800BB058
  c->r[4]=c->r[31]|c->r[31]; // 800BB05C
  c->lr=0x800BB064u; f_800BBC8C(c); // 800BB060
  c->r[4]=c->r[30]|c->r[30]; // 800BB064
  c->lr=0x800BB06Cu; f_800BD4A8(c); // 800BB068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB06C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BB070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB074
  c->lr=c->r[0]; // 800BB078
  c->r[1]=c->r[1]+0x00000010u; // 800BB07C
  return; // 800BB080
}

// fn_800BB084
void f_800BB084(Ctx* __restrict c) {
  return; // 800BB084
}

// fn_800BB088
void f_800BB088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB088
  c->r[0]=c->lr; // 800BB08C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB090
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB094
  c->r[31]=c->r[3]|c->r[3]; // 800BB098
  c->lr=0x800BB0A0u; f_8007B524(c); // 800BB09C
  c->r[4]=c->r[31]|c->r[31]; // 800BB0A0
  c->lr=0x800BB0A8u; f_800ED564(c); // 800BB0A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800BB0A8
  cmps(c,0,(int32_t)c->r[0],0); // 800BB0AC
  if (crb(c,0)) { goto L_800BB0E4; } // 800BB0B0
  c->lr=0x800BB0B8u; f_800A23BC(c); // 800BB0B4
  c->lr=0x800BB0BCu; f_800BB828(c); // 800BB0B8
  c->r[4]=R32(c->r[13]+0xFFFF8804u); // 800BB0BC
  c->lr=0x800BB0C4u; f_800BB9DC(c); // 800BB0C0
  c->r[31]=c->r[3]|c->r[3]; // 800BB0C4
  cmps(c,0,(int32_t)c->r[3],0); // 800BB0C8
  if (crb(c,2)) { goto L_800BB0E4; } // 800BB0CC
  c->lr=0x800BB0D4u; f_800A23BC(c); // 800BB0D0
  c->lr=0x800BB0D8u; f_800BB828(c); // 800BB0D4
  c->r[4]=c->r[31]|c->r[31]; // 800BB0D8
  c->lr=0x800BB0E0u; f_800BB99C(c); // 800BB0DC
  c->lr=0x800BB0E4u; f_800E1824(c); // 800BB0E0
L_800BB0E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB0E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB0E8
  c->lr=c->r[0]; // 800BB0EC
  c->r[1]=c->r[1]+0x00000010u; // 800BB0F0
  return; // 800BB0F4
}

// fn_800BB0F8
void f_800BB0F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB0F8
  c->r[0]=c->lr; // 800BB0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB104
  c->lr=0x800BB10Cu; f_800A23BC(c); // 800BB108
  c->lr=0x800BB110u; f_800BB828(c); // 800BB10C
  c->r[4]=R32(c->r[13]+0xFFFF8808u); // 800BB110
  c->lr=0x800BB118u; f_800BB9DC(c); // 800BB114
  c->r[31]=c->r[3]|c->r[3]; // 800BB118
  cmps(c,0,(int32_t)c->r[3],0); // 800BB11C
  if (crb(c,2)) { goto L_800BB134; } // 800BB120
  c->lr=0x800BB128u; f_800A23BC(c); // 800BB124
  c->lr=0x800BB12Cu; f_800BB828(c); // 800BB128
  c->r[4]=c->r[31]|c->r[31]; // 800BB12C
  c->lr=0x800BB134u; f_800E1BF4(c); // 800BB130
L_800BB134:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB134
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB138
  c->lr=c->r[0]; // 800BB13C
  c->r[1]=c->r[1]+0x00000010u; // 800BB140
  return; // 800BB144
}

// fn_800BB148
void f_800BB148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB148
  c->r[0]=c->lr; // 800BB14C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB150
  c->r[11]=c->r[1]+0x00000020u; // 800BB154
  c->lr=0x800BB15Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BB158
  c->r[27]=c->r[3]|c->r[3]; // 800BB15C
  c->r[28]=c->r[4]|c->r[4]; // 800BB160
  c->r[29]=0u+0x00000000u; // 800BB164
  c->r[31]=c->r[28]|c->r[28]; // 800BB168
  c->r[30]=c->r[3]+0x00000054u; // 800BB16C
L_800BB170:;
  c->r[3]=c->r[30]|c->r[30]; // 800BB170
  c->r[4]=c->r[31]|c->r[31]; // 800BB174
  c->lr=0x800BB17Cu; f_800D1740(c); // 800BB178
  c->r[3]=c->r[30]|c->r[30]; // 800BB17C
  c->lr=0x800BB184u; f_800BB1C8(c); // 800BB180
  c->r[3]=c->r[30]|c->r[30]; // 800BB184
  c->lr=0x800BB18Cu; f_800BB1C0(c); // 800BB188
  c->r[31]=c->r[31]+0x00000044u; // 800BB18C
  c->r[30]=c->r[30]+0x00000060u; // 800BB190
  c->r[29]=c->r[29]+0x00000001u; // 800BB194
  cmpu(c,0,c->r[29],0x00000009u); // 800BB198
  if (crb(c,0)) { IRQCHK(c); goto L_800BB170; } // 800BB19C
  c->r[0]=R32(c->r[28]+0x00000264u); // 800BB1A0
  W32(c->r[27]+0x000003BCu,c->r[0]); // 800BB1A4
  c->r[11]=c->r[1]+0x00000020u; // 800BB1A8
  c->lr=0x800BB1B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BB1AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BB1B0
  c->lr=c->r[0]; // 800BB1B4
  c->r[1]=c->r[1]+0x00000020u; // 800BB1B8
  return; // 800BB1BC
}

// fn_800BB1C0
void f_800BB1C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 800BB1C0
  return; // 800BB1C4
}

// fn_800BB1C8
void f_800BB1C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB1C8
  return; // 800BB1CC
}

// fn_800BB1D0
void f_800BB1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB1D0
  c->r[0]=c->lr; // 800BB1D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB1D8
  c->r[11]=c->r[1]+0x00000020u; // 800BB1DC
  c->lr=0x800BB1E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BB1E0
  c->r[27]=c->r[3]|c->r[3]; // 800BB1E4
  c->r[28]=c->r[4]|c->r[4]; // 800BB1E8
  c->r[29]=0u+0x00000000u; // 800BB1EC
  c->r[31]=c->r[28]|c->r[28]; // 800BB1F0
  c->r[30]=c->r[3]+0x00000054u; // 800BB1F4
L_800BB1F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800BB1F8
  c->r[4]=c->r[31]|c->r[31]; // 800BB1FC
  c->lr=0x800BB204u; f_800D16D4(c); // 800BB200
  c->r[31]=c->r[31]+0x00000044u; // 800BB204
  c->r[30]=c->r[30]+0x00000060u; // 800BB208
  c->r[29]=c->r[29]+0x00000001u; // 800BB20C
  cmpu(c,0,c->r[29],0x00000009u); // 800BB210
  if (crb(c,0)) { IRQCHK(c); goto L_800BB1F8; } // 800BB214
  c->r[0]=R32(c->r[27]+0x000003BCu); // 800BB218
  W32(c->r[28]+0x00000264u,c->r[0]); // 800BB21C
  c->r[11]=c->r[1]+0x00000020u; // 800BB220
  c->lr=0x800BB228u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BB224
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BB228
  c->lr=c->r[0]; // 800BB22C
  c->r[1]=c->r[1]+0x00000020u; // 800BB230
  return; // 800BB234
}

// fn_800BB238
void f_800BB238(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000054u; // 800BB238
  c->r[5]=0u+0x00000003u; // 800BB23C
  c->r[6]=0u+0x00000001u; // 800BB240
  f_800D141C(c); return; // 800BB244
}

// fn_800BB248
void f_800BB248(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000054u; // 800BB248
  c->r[5]=0u+0x00000003u; // 800BB24C
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB250
  f_800D0F54(c); return; // 800BB254
}

// fn_800BB258
void f_800BB258(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB258
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800BB25C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB260
  if (crb(c,2)) { goto L_800BB26C; } // 800BB264
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB268
L_800BB26C:;
  c->r[3]=c->r[3]+0x00000054u; // 800BB26C
  f_800D13D4(c); return; // 800BB270
}

// fn_800BB274
void f_800BB274(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000054u; // 800BB274
  f_800D0F18(c); return; // 800BB278
}

// fn_800BB27C
void f_800BB27C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB27C
  c->r[0]=c->lr; // 800BB280
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB284
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BB288
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BB28C
  c->r[30]=c->r[3]|c->r[3]; // 800BB290
  c->r[31]=c->r[4]|c->r[4]; // 800BB294
  c->r[3]=c->r[1]+0x00000008u; // 800BB298
  c->lr=0x800BB2A0u; f_8004B0A4(c); // 800BB29C
  c->r[0]=R32(c->r[30]+0x000003BCu); // 800BB2A0
  cmpu(c,0,c->r[0],0x00000002u); // 800BB2A4
  if (crb(c,2)) { goto L_800BB300; } // 800BB2A8
  c->r[3]=c->r[30]+0x00000174u; // 800BB2AC
  c->r[4]=c->r[1]+0x00000008u; // 800BB2B0
  c->r[5]=0u+0x00000003u; // 800BB2B4
  c->lr=0x800BB2BCu; f_800D148C(c); // 800BB2B8
  c->r[3]=c->r[1]+0x00000008u; // 800BB2BC
  c->r[4]=c->r[31]|c->r[31]; // 800BB2C0
  c->lr=0x800BB2C8u; f_8004A65C(c); // 800BB2C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB2C8
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB2CC
  c->lr=0x800BB2D4u; f_800BBF84(c); // 800BB2D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB2D4
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB2D8
  c->lr=0x800BB2E0u; f_800BBF84(c); // 800BB2DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB2E0
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB2E4
  c->lr=0x800BB2ECu; f_800BBF84(c); // 800BB2E8
  c->r[3]=c->r[30]+0x00000174u; // 800BB2EC
  c->r[4]=c->r[1]+0x00000008u; // 800BB2F0
  c->r[5]=0u+0x00000003u; // 800BB2F4
  c->r[6]=0u+0x00000001u; // 800BB2F8
  c->lr=0x800BB300u; f_800D141C(c); // 800BB2FC
L_800BB300:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BB300
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BB304
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BB308
  c->lr=c->r[0]; // 800BB30C
  c->r[1]=c->r[1]+0x00000020u; // 800BB310
  return; // 800BB314
}

// fn_800BB318
void f_800BB318(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB318
  c->r[0]=c->lr; // 800BB31C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BB320
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BB324
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BB328
  c->r[30]=c->r[3]|c->r[3]; // 800BB32C
  c->r[31]=c->r[4]|c->r[4]; // 800BB330
  c->r[3]=c->r[1]+0x00000020u; // 800BB334
  c->lr=0x800BB33Cu; f_8004B0A4(c); // 800BB338
  c->r[3]=c->r[1]+0x00000014u; // 800BB33C
  c->lr=0x800BB344u; f_8004B0A4(c); // 800BB340
  c->r[3]=c->r[1]+0x00000008u; // 800BB344
  c->lr=0x800BB34Cu; f_8004B0A4(c); // 800BB348
  c->r[0]=R32(c->r[30]+0x000003BCu); // 800BB34C
  cmpu(c,0,c->r[0],0x00000002u); // 800BB350
  if (crb(c,2)) { goto L_800BB4EC; } // 800BB354
  c->r[3]=c->r[30]+0x00000174u; // 800BB358
  c->r[4]=c->r[1]+0x00000014u; // 800BB35C
  c->r[5]=0u+0x00000003u; // 800BB360
  c->lr=0x800BB368u; f_800D148C(c); // 800BB364
  c->r[3]=c->r[1]+0x00000008u; // 800BB368
  c->r[4]=c->r[31]|c->r[31]; // 800BB36C
  c->lr=0x800BB374u; f_8004A65C(c); // 800BB370
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB374
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB378
  c->lr=0x800BB380u; f_800BBF84(c); // 800BB37C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB380
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB384
  c->lr=0x800BB38Cu; f_800BBF84(c); // 800BB388
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB38C
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB390
  c->lr=0x800BB398u; f_800BBF84(c); // 800BB394
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB398
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB39C
  c->lr=0x800BB3A4u; f_800BBF84(c); // 800BB3A0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB3A4
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB3A8
  c->lr=0x800BB3B0u; f_800BBF84(c); // 800BB3AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB3B0
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB3B4
  c->lr=0x800BB3BCu; f_800BBF84(c); // 800BB3B8
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800BB3BC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 800BB3C0
  cmps(c,0,(int32_t)c->r[0],0); // 800BB3C4
  if (!crb(c,2)) { goto L_800BB49C; } // 800BB3C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB3CC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BB3D4
  {uint32_t ea=c->r[2]+0xFFFF8804u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3D8
  fcmp(c,0,c->f[1],c->f[0]); // 800BB3DC
  if (!crb(c,1)) { goto L_800BB3F0; } // 800BB3E0
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BB3E8
  goto L_800BB404; // 800BB3EC
L_800BB3F0:;
  {uint32_t ea=c->r[2]+0xFFFF8808u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3F0
  fcmp(c,0,c->f[1],c->f[0]); // 800BB3F4
  if (!crb(c,0)) { goto L_800BB404; } // 800BB3F8
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB3FC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BB400
L_800BB404:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB404
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BB408
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800BB40C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB410
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB414
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BB418
  {uint32_t ea=c->r[2]+0xFFFF8804u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB41C
  fcmp(c,0,c->f[1],c->f[0]); // 800BB420
  if (!crb(c,1)) { goto L_800BB434; } // 800BB424
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB428
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BB42C
  goto L_800BB448; // 800BB430
L_800BB434:;
  {uint32_t ea=c->r[2]+0xFFFF8808u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB434
  fcmp(c,0,c->f[1],c->f[0]); // 800BB438
  if (!crb(c,0)) { goto L_800BB448; } // 800BB43C
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB440
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BB444
L_800BB448:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB448
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BB44C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BB450
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB454
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB458
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BB45C
  {uint32_t ea=c->r[2]+0xFFFF8804u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB460
  fcmp(c,0,c->f[1],c->f[0]); // 800BB464
  if (!crb(c,1)) { goto L_800BB478; } // 800BB468
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB46C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BB470
  goto L_800BB48C; // 800BB474
L_800BB478:;
  {uint32_t ea=c->r[2]+0xFFFF8808u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB478
  fcmp(c,0,c->f[1],c->f[0]); // 800BB47C
  if (!crb(c,0)) { goto L_800BB48C; } // 800BB480
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB484
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BB488
L_800BB48C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB48C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BB490
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800BB494
  goto L_800BB4D8; // 800BB498
L_800BB49C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB49C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BB4A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB4A8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800BB4AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BB4B8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB4BC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BB4C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB4C4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BB4CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BB4D0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800BB4D4
L_800BB4D8:;
  c->r[3]=c->r[30]+0x00000174u; // 800BB4D8
  c->r[4]=c->r[1]+0x00000020u; // 800BB4DC
  c->r[5]=0u+0x00000003u; // 800BB4E0
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4E4
  c->lr=0x800BB4ECu; f_800D0F54(c); // 800BB4E8
L_800BB4EC:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BB4EC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BB4F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BB4F4
  c->lr=c->r[0]; // 800BB4F8
  c->r[1]=c->r[1]+0x00000040u; // 800BB4FC
  return; // 800BB500
}

// fn_800BB504
void f_800BB504(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB504
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800BB508
  cmps(c,0,(int32_t)c->r[0],0); // 800BB50C
  if (crb(c,2)) { goto L_800BB518; } // 800BB510
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB514
L_800BB518:;
  c->r[3]=c->r[3]+0x00000174u; // 800BB518
  f_800D13D4(c); return; // 800BB51C
}

// fn_800BB520
void f_800BB520(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000174u; // 800BB520
  f_800D0F18(c); return; // 800BB524
}

// fn_800BB528
void f_800BB528(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B4u; // 800BB528
  c->r[5]=0u+0x00000003u; // 800BB52C
  c->r[6]=0u+0x00000001u; // 800BB530
  f_800D141C(c); return; // 800BB534
}

// fn_800BB538
void f_800BB538(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B4u; // 800BB538
  c->r[5]=0u+0x00000003u; // 800BB53C
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB540
  f_800D0F54(c); return; // 800BB544
}

// fn_800BB548
void f_800BB548(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB548
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800BB54C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB550
  if (crb(c,2)) { goto L_800BB55C; } // 800BB554
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB558
L_800BB55C:;
  c->r[3]=c->r[3]+0x000000B4u; // 800BB55C
  f_800D13D4(c); return; // 800BB560
}

// fn_800BB564
void f_800BB564(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B4u; // 800BB564
  f_800D0F18(c); return; // 800BB568
}

// fn_800BB56C
void f_800BB56C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000114u; // 800BB56C
  c->r[5]=0u+0x00000003u; // 800BB570
  c->r[6]=0u+0x00000001u; // 800BB574
  f_800D141C(c); return; // 800BB578
}

// fn_800BB57C
void f_800BB57C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000114u; // 800BB57C
  c->r[5]=0u+0x00000003u; // 800BB580
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB584
  f_800D0F54(c); return; // 800BB588
}

// fn_800BB58C
void f_800BB58C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB58C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800BB590
  cmps(c,0,(int32_t)c->r[0],0); // 800BB594
  if (crb(c,2)) { goto L_800BB5A0; } // 800BB598
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB59C
L_800BB5A0:;
  c->r[3]=c->r[3]+0x00000114u; // 800BB5A0
  f_800D13D4(c); return; // 800BB5A4
}

// fn_800BB5A8
void f_800BB5A8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000114u; // 800BB5A8
  f_800D0F18(c); return; // 800BB5AC
}

// fn_800BB5B0
void f_800BB5B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB5B0
  c->r[0]=c->lr; // 800BB5B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB5B8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800BB5BC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800BB5C0
  {uint32_t ea=c->r[2]+0xFFFF8810u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB5C4
  fcmp(c,0,c->f[1],c->f[0]); // 800BB5C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BB5CC
  if (!crb(c,2)) { goto L_800BB5DC; } // 800BB5D0
  {uint32_t ea=c->r[2]+0xFFFF880Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB5D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800BB5D8
L_800BB5DC:;
  c->r[3]=c->r[3]+0x000001D4u; // 800BB5DC
  c->r[4]=c->r[1]+0x00000008u; // 800BB5E0
  c->r[5]=0u+0x00000001u; // 800BB5E4
  c->r[6]=0u+0x00000001u; // 800BB5E8
  c->lr=0x800BB5F0u; f_800D141C(c); // 800BB5EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB5F0
  c->lr=c->r[0]; // 800BB5F4
  c->r[1]=c->r[1]+0x00000010u; // 800BB5F8
  return; // 800BB5FC
}

// fn_800BB600
void f_800BB600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB600
  c->r[0]=c->lr; // 800BB604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB608
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800BB60C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800BB610
  {uint32_t ea=c->r[2]+0xFFFF8810u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB614
  fcmp(c,0,c->f[1],c->f[0]); // 800BB618
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BB61C
  if (!crb(c,2)) { goto L_800BB62C; } // 800BB620
  {uint32_t ea=c->r[2]+0xFFFF880Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB624
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800BB628
L_800BB62C:;
  c->r[3]=c->r[3]+0x000001D4u; // 800BB62C
  c->r[4]=c->r[1]+0x00000008u; // 800BB630
  c->r[5]=0u+0x00000001u; // 800BB634
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB638
  c->lr=0x800BB640u; f_800D0F54(c); // 800BB63C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB640
  c->lr=c->r[0]; // 800BB644
  c->r[1]=c->r[1]+0x00000010u; // 800BB648
  return; // 800BB64C
}

// fn_800BB650
void f_800BB650(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB650
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800BB654
  cmps(c,0,(int32_t)c->r[0],0); // 800BB658
  if (crb(c,2)) { goto L_800BB664; } // 800BB65C
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB660
L_800BB664:;
  c->r[3]=c->r[3]+0x000001D4u; // 800BB664
  f_800D13D4(c); return; // 800BB668
}

// fn_800BB66C
void f_800BB66C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000001D4u; // 800BB66C
  f_800D0F18(c); return; // 800BB670
}

// fn_800BB674
void f_800BB674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB674
  c->r[0]=c->lr; // 800BB678
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB67C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800BB680
  c->r[3]=c->r[3]+0x00000234u; // 800BB684
  c->r[4]=c->r[1]+0x00000008u; // 800BB688
  c->r[5]=0u+0x00000001u; // 800BB68C
  c->r[6]=0u+0x00000001u; // 800BB690
  c->lr=0x800BB698u; f_800D141C(c); // 800BB694
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB698
  c->lr=c->r[0]; // 800BB69C
  c->r[1]=c->r[1]+0x00000010u; // 800BB6A0
  return; // 800BB6A4
}

// fn_800BB6A8
void f_800BB6A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB6A8
  c->r[0]=c->lr; // 800BB6AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB6B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800BB6B4
  c->r[3]=c->r[3]+0x00000234u; // 800BB6B8
  c->r[4]=c->r[1]+0x00000008u; // 800BB6BC
  c->r[5]=0u+0x00000001u; // 800BB6C0
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB6C4
  c->lr=0x800BB6CCu; f_800D0F54(c); // 800BB6C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB6CC
  c->lr=c->r[0]; // 800BB6D0
  c->r[1]=c->r[1]+0x00000010u; // 800BB6D4
  return; // 800BB6D8
}

// fn_800BB6DC
void f_800BB6DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB6DC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800BB6E0
  cmps(c,0,(int32_t)c->r[0],0); // 800BB6E4
  if (crb(c,2)) { goto L_800BB6F0; } // 800BB6E8
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB6EC
L_800BB6F0:;
  c->r[3]=c->r[3]+0x00000234u; // 800BB6F0
  f_800D13D4(c); return; // 800BB6F4
}

// fn_800BB6F8
void f_800BB6F8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000234u; // 800BB6F8
  f_800D0F18(c); return; // 800BB6FC
}

// fn_800BB700
void f_800BB700(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000098Cu; // 800BB700
  return; // 800BB704
}

// fn_800BB708
void f_800BB708(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB708
  c->r[0]=c->lr; // 800BB70C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB714
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BB718
  c->r[30]=c->r[3]|c->r[3]; // 800BB71C
  c->r[31]=c->r[4]|c->r[4]; // 800BB720
  c->lr=0x800BB728u; f_800A23BC(c); // 800BB724
  c->r[4]=R32(c->r[31]+0x00000000u); // 800BB728
  c->lr=0x800BB730u; f_800BB774(c); // 800BB72C
  c->lr=0x800BB734u; f_800A23BC(c); // 800BB730
  c->lr=0x800BB738u; f_800BB76C(c); // 800BB734
  c->r[4]=c->r[31]+0x00000004u; // 800BB738
  c->r[5]=0u+0x00000080u; // 800BB73C
  c->lr=0x800BB744u; f_800D338C(c); // 800BB740
  c->r[3]=c->r[30]+0x00004F18u; // 800BB744
  c->r[4]=c->r[31]+0x00000084u; // 800BB748
  c->r[5]=0u+0x00000040u; // 800BB74C
  c->lr=0x800BB754u; f_802E53B8(c); // 800BB750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB754
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BB758
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB75C
  c->lr=c->r[0]; // 800BB760
  c->r[1]=c->r[1]+0x00000010u; // 800BB764
  return; // 800BB768
}

// fn_800BB76C
void f_800BB76C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000210u; // 800BB76C
  return; // 800BB770
}

// fn_800BB774
void f_800BB774(Ctx* __restrict c) {
  W32(c->r[3]+0x00004EE8u,c->r[4]); // 800BB774
  return; // 800BB778
}

// fn_800BB77C
void f_800BB77C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB77C
  c->r[0]=c->lr; // 800BB780
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB788
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BB78C
  c->r[30]=c->r[3]|c->r[3]; // 800BB790
  c->r[31]=c->r[4]|c->r[4]; // 800BB794
  c->lr=0x800BB79Cu; f_800A23BC(c); // 800BB798
  c->lr=0x800BB7A0u; f_800BB7E0(c); // 800BB79C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800BB7A0
  c->lr=0x800BB7A8u; f_800A23BC(c); // 800BB7A4
  c->lr=0x800BB7ACu; f_800BB76C(c); // 800BB7A8
  c->r[4]=c->r[31]+0x00000004u; // 800BB7AC
  c->r[5]=0u+0x00000080u; // 800BB7B0
  c->lr=0x800BB7B8u; f_800D3378(c); // 800BB7B4
  c->r[3]=c->r[31]+0x00000084u; // 800BB7B8
  c->r[4]=c->r[30]+0x00004F18u; // 800BB7BC
  c->r[5]=0u+0x00000040u; // 800BB7C0
  c->lr=0x800BB7C8u; f_802E53B8(c); // 800BB7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB7C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BB7CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB7D0
  c->lr=c->r[0]; // 800BB7D4
  c->r[1]=c->r[1]+0x00000010u; // 800BB7D8
  return; // 800BB7DC
}

// fn_800BB7E0
void f_800BB7E0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00004EE8u); // 800BB7E0
  return; // 800BB7E4
}

// fn_800BB7E8
void f_800BB7E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00004F78u); // 800BB7E8
  return; // 800BB7EC
}

// fn_800BB7F0
void f_800BB7F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000049Cu; // 800BB7F0
  return; // 800BB7F4
}

// fn_800BB7F8
void f_800BB7F8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00004F58u); // 800BB7F8
  return; // 800BB7FC
}

// fn_800BB800
void f_800BB800(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000520u; // 800BB800
  return; // 800BB804
}

// fn_800BB808
void f_800BB808(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000960u; // 800BB808
  return; // 800BB80C
}

// fn_800BB810
void f_800BB810(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000D48u; // 800BB810
  return; // 800BB814
}

// fn_800BB818
void f_800BB818(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000E4u; // 800BB818
  return; // 800BB81C
}

// fn_800BB820
void f_800BB820(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000D70u; // 800BB820
  return; // 800BB824
}

// fn_800BB828
void f_800BB828(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000045DCu; // 800BB828
  return; // 800BB82C
}

// fn_800BB830
void f_800BB830(Ctx* __restrict c) {
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 800BB830
  return; // 800BB834
}

// fn_800BB838
void f_800BB838(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 800BB838
  return; // 800BB83C
}

// fn_800BB840
void f_800BB840(Ctx* __restrict c) {
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 800BB840
  return; // 800BB844
}

// fn_800BB848
void f_800BB848(Ctx* __restrict c) {
  W32(c->r[3]+0x00000054u,c->r[4]); // 800BB848
  return; // 800BB84C
}

// dtor_800BB850
void f_800BB850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB850
  c->r[0]=c->lr; // 800BB854
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB85C
  c->r[31]=c->r[3]|c->r[3]; // 800BB860
  cmps(c,0,(int32_t)c->r[3],0); // 800BB864
  if (crb(c,2)) { goto L_800BB87C; } // 800BB868
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800BB86C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB870
  if (!crb(c,1)) { goto L_800BB87C; } // 800BB874
  c->lr=0x800BB87Cu; f_80047B20(c); // 800BB878
L_800BB87C:;
  c->r[3]=c->r[31]|c->r[31]; // 800BB87C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB884
  c->lr=c->r[0]; // 800BB888
  c->r[1]=c->r[1]+0x00000010u; // 800BB88C
  return; // 800BB890
}

// fn_800BB894
void f_800BB894(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB894
  c->r[0]=c->lr; // 800BB898
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB89C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB8A0
  c->r[31]=c->r[3]|c->r[3]; // 800BB8A4
  c->r[4]=0u+0x80460000u; // 800BB8A8
  c->r[0]=c->r[4]+0x00000044u; // 800BB8AC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BB8B0
  c->lr=0x800BB8B8u; f_800BB8D0(c); // 800BB8B4
  c->r[3]=c->r[31]|c->r[31]; // 800BB8B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB8C0
  c->lr=c->r[0]; // 800BB8C4
  c->r[1]=c->r[1]+0x00000010u; // 800BB8C8
  return; // 800BB8CC
}

// fn_800BB8D0
void f_800BB8D0(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 800BB8D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BB8D4
  c->r[0]=0u+0x00000000u; // 800BB8D8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BB8DC
  return; // 800BB8E0
}

// fn_800BB8E4
void f_800BB8E4(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 800BB8E4
  return; // 800BB8E8
}

// fn_800BB8EC
void f_800BB8EC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BB8EC
  c->r[3]=rotl(c->r[0],0)&0x80000000u; // 800BB8F0
  c->r[0]=0u-c->r[3]; // 800BB8F4
  c->r[0]=c->r[0]|c->r[3]; // 800BB8F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BB8FC
  return; // 800BB900
}

// fn_800BB904
void f_800BB904(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BB904
  c->r[3]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800BB908
  return; // 800BB90C
}

// fn_800BB910
void f_800BB910(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000004u); // 800BB910
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BB914
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800BB918
  cmpu(c,0,c->r[4],c->r[0]); // 800BB91C
  if (crb(c,2)) { goto L_800BB934; } // 800BB920
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BB924
  c->r[0]=c->r[4]|0x80000000u; // 800BB928
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BB92C
  return; // 800BB930
L_800BB934:;
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BB934
  return; // 800BB938
}

// fn_800BB93C
void f_800BB93C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800BB93C
  c->r[0]=c->r[0]|c->r[4]; // 800BB940
  W32(c->r[3]+0x00000050u,c->r[0]); // 800BB944
  return; // 800BB948
}

// fn_800BB94C
void f_800BB94C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 800BB94C
  W32(c->r[3]+0x000000A0u,c->r[5]); // 800BB950
  return; // 800BB954
}

// fn_800BB958
void f_800BB958(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800BB958
  if (crb(c,2)) { goto L_800BB97C; } // 800BB95C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB960
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800BB964
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800BB968
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BB96C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800BB970
  c->ctr=c->r[12]; // 800BB974
  if (true) { dispatch(c,c->ctr); return; } // 800BB978
L_800BB97C:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BB97C
  c->r[0]=c->r[0]|0x00000001u; // 800BB980
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800BB984
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BB988
  c->r[12]=R32(c->r[12]+0x00000018u); // 800BB98C
  c->ctr=c->r[12]; // 800BB990
  if (true) { dispatch(c,c->ctr); return; } // 800BB994
}

// fn_800BB998
void f_800BB998(Ctx* __restrict c) {
  return; // 800BB998
}

// fn_800BB99C
void f_800BB99C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB99C
  c->r[0]=c->lr; // 800BB9A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB9A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BB9A8
  c->r[31]=c->r[3]|c->r[3]; // 800BB9AC
  c->r[3]=c->r[4]|c->r[4]; // 800BB9B0
  c->lr=0x800BB9B8u; f_800BBF30(c); // 800BB9B4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BB9B8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BB9BC
  c->r[3]=c->r[4]+c->r[0]; // 800BB9C0
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BB9C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BB9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BB9CC
  c->lr=c->r[0]; // 800BB9D0
  c->r[1]=c->r[1]+0x00000010u; // 800BB9D4
  return; // 800BB9D8
}

// fn_800BB9DC
void f_800BB9DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB9DC
  c->r[0]=c->lr; // 800BB9E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB9E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BB9E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BB9EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BB9F0
  c->r[29]=c->r[3]|c->r[3]; // 800BB9F4
  c->r[30]=c->r[4]|c->r[4]; // 800BB9F8
  c->r[3]=c->r[3]+0x00000014u; // 800BB9FC
  c->lr=0x800BBA04u; f_8004B018(c); // 800BBA00
  c->r[31]=c->r[3]|c->r[3]; // 800BBA04
  goto L_800BBA40; // 800BBA08
L_800BBA0C:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBA0C
  c->lr=0x800BBA14u; f_800BDEB4(c); // 800BBA10
  c->r[4]=c->r[30]|c->r[30]; // 800BBA14
  c->lr=0x800BBA1Cu; f_802E96C4(c); // 800BBA18
  cmps(c,0,(int32_t)c->r[3],0); // 800BBA1C
  if (!crb(c,2)) { goto L_800BBA30; } // 800BBA20
  c->r[3]=c->r[31]|c->r[31]; // 800BBA24
  c->lr=0x800BBA2Cu; f_800BDE68(c); // 800BBA28
  goto L_800BBA4C; // 800BBA2C
L_800BBA30:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBA30
  c->r[4]=c->r[31]|c->r[31]; // 800BBA34
  c->lr=0x800BBA3Cu; f_8028CCD8(c); // 800BBA38
  c->r[31]=c->r[3]|c->r[3]; // 800BBA3C
L_800BBA40:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBA40
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBA0C; } // 800BBA44
  c->r[3]=0u+0x00000000u; // 800BBA48
L_800BBA4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBA4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBA50
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBA54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBA58
  c->lr=c->r[0]; // 800BBA5C
  c->r[1]=c->r[1]+0x00000020u; // 800BBA60
  return; // 800BBA64
}

// fn_800BBA68
void f_800BBA68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBA68
  c->r[0]=c->lr; // 800BBA6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBA70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BBA78
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBA7C
  c->r[29]=c->r[3]|c->r[3]; // 800BBA80
  c->r[30]=c->r[4]|c->r[4]; // 800BBA84
  c->r[3]=c->r[3]+0x00000014u; // 800BBA88
  c->lr=0x800BBA90u; f_8004B018(c); // 800BBA8C
  c->r[31]=c->r[3]|c->r[3]; // 800BBA90
  goto L_800BBACC; // 800BBA94
L_800BBA98:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBA98
  c->lr=0x800BBAA0u; f_800BDEB4(c); // 800BBA9C
  c->r[4]=c->r[30]|c->r[30]; // 800BBAA0
  c->lr=0x800BBAA8u; f_802E96C4(c); // 800BBAA4
  cmps(c,0,(int32_t)c->r[3],0); // 800BBAA8
  if (!crb(c,2)) { goto L_800BBABC; } // 800BBAAC
  c->r[3]=c->r[31]|c->r[31]; // 800BBAB0
  c->lr=0x800BBAB8u; f_800BDE68(c); // 800BBAB4
  goto L_800BBAD8; // 800BBAB8
L_800BBABC:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBABC
  c->r[4]=c->r[31]|c->r[31]; // 800BBAC0
  c->lr=0x800BBAC8u; f_8028CCD8(c); // 800BBAC4
  c->r[31]=c->r[3]|c->r[3]; // 800BBAC8
L_800BBACC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBACC
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBA98; } // 800BBAD0
  c->r[3]=0u+0x00000000u; // 800BBAD4
L_800BBAD8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBAD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBADC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBAE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBAE4
  c->lr=c->r[0]; // 800BBAE8
  c->r[1]=c->r[1]+0x00000020u; // 800BBAEC
  return; // 800BBAF0
}

// fn_800BBAF4
void f_800BBAF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBAF4
  c->r[0]=c->lr; // 800BBAF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBAFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBB00
  c->r[31]=c->r[3]|c->r[3]; // 800BBB04
  c->r[3]=c->r[4]|c->r[4]; // 800BBB08
  c->lr=0x800BBB10u; f_800BBF30(c); // 800BBB0C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BBB10
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BBB14
  c->r[3]=c->r[4]+c->r[0]; // 800BBB18
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BBB1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBB20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBB24
  c->lr=c->r[0]; // 800BBB28
  c->r[1]=c->r[1]+0x00000010u; // 800BBB2C
  return; // 800BBB30
}

// fn_800BBB34
void f_800BBB34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBB34
  c->r[0]=c->lr; // 800BBB38
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBB3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBB40
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BBB44
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBB48
  c->r[29]=c->r[3]|c->r[3]; // 800BBB4C
  c->r[30]=c->r[4]|c->r[4]; // 800BBB50
  c->r[3]=c->r[3]+0x00000014u; // 800BBB54
  c->lr=0x800BBB5Cu; f_8004B018(c); // 800BBB58
  c->r[31]=c->r[3]|c->r[3]; // 800BBB5C
  goto L_800BBB98; // 800BBB60
L_800BBB64:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBB64
  c->lr=0x800BBB6Cu; f_800BDEB4(c); // 800BBB68
  c->r[4]=c->r[30]|c->r[30]; // 800BBB6C
  c->lr=0x800BBB74u; f_802E96C4(c); // 800BBB70
  cmps(c,0,(int32_t)c->r[3],0); // 800BBB74
  if (!crb(c,2)) { goto L_800BBB88; } // 800BBB78
  c->r[3]=c->r[31]|c->r[31]; // 800BBB7C
  c->lr=0x800BBB84u; f_800BDE68(c); // 800BBB80
  goto L_800BBBA4; // 800BBB84
L_800BBB88:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBB88
  c->r[4]=c->r[31]|c->r[31]; // 800BBB8C
  c->lr=0x800BBB94u; f_8028CCD8(c); // 800BBB90
  c->r[31]=c->r[3]|c->r[3]; // 800BBB94
L_800BBB98:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBB98
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBB64; } // 800BBB9C
  c->r[3]=0u+0x00000000u; // 800BBBA0
L_800BBBA4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBBA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBBA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBBAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBBB0
  c->lr=c->r[0]; // 800BBBB4
  c->r[1]=c->r[1]+0x00000020u; // 800BBBB8
  return; // 800BBBBC
}

// fn_800BBBC0
void f_800BBBC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBBC0
  c->r[0]=c->lr; // 800BBBC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBBC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBBCC
  c->r[31]=c->r[3]|c->r[3]; // 800BBBD0
  c->r[3]=c->r[4]|c->r[4]; // 800BBBD4
  c->lr=0x800BBBDCu; f_800BBF30(c); // 800BBBD8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BBBDC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BBBE0
  c->r[3]=c->r[4]+c->r[0]; // 800BBBE4
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BBBE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBBEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBBF0
  c->lr=c->r[0]; // 800BBBF4
  c->r[1]=c->r[1]+0x00000010u; // 800BBBF8
  return; // 800BBBFC
}

// fn_800BBC00
void f_800BBC00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC00
  c->r[0]=c->lr; // 800BBC04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBC08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBC0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BBC10
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBC14
  c->r[29]=c->r[3]|c->r[3]; // 800BBC18
  c->r[30]=c->r[4]|c->r[4]; // 800BBC1C
  c->r[3]=c->r[3]+0x00000014u; // 800BBC20
  c->lr=0x800BBC28u; f_8004B018(c); // 800BBC24
  c->r[31]=c->r[3]|c->r[3]; // 800BBC28
  goto L_800BBC64; // 800BBC2C
L_800BBC30:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBC30
  c->lr=0x800BBC38u; f_800BDEB4(c); // 800BBC34
  c->r[4]=c->r[30]|c->r[30]; // 800BBC38
  c->lr=0x800BBC40u; f_802E96C4(c); // 800BBC3C
  cmps(c,0,(int32_t)c->r[3],0); // 800BBC40
  if (!crb(c,2)) { goto L_800BBC54; } // 800BBC44
  c->r[3]=c->r[31]|c->r[31]; // 800BBC48
  c->lr=0x800BBC50u; f_800BDE68(c); // 800BBC4C
  goto L_800BBC70; // 800BBC50
L_800BBC54:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBC54
  c->r[4]=c->r[31]|c->r[31]; // 800BBC58
  c->lr=0x800BBC60u; f_8028CCD8(c); // 800BBC5C
  c->r[31]=c->r[3]|c->r[3]; // 800BBC60
L_800BBC64:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBC64
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBC30; } // 800BBC68
  c->r[3]=0u+0x00000000u; // 800BBC6C
L_800BBC70:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBC70
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBC74
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBC78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBC7C
  c->lr=c->r[0]; // 800BBC80
  c->r[1]=c->r[1]+0x00000020u; // 800BBC84
  return; // 800BBC88
}

// fn_800BBC8C
void f_800BBC8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC8C
  c->r[0]=c->lr; // 800BBC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBC98
  c->r[31]=c->r[3]|c->r[3]; // 800BBC9C
  c->r[3]=c->r[4]|c->r[4]; // 800BBCA0
  c->lr=0x800BBCA8u; f_800BBF30(c); // 800BBCA4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BBCA8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BBCAC
  c->r[3]=c->r[4]+c->r[0]; // 800BBCB0
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BBCB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBCB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBCBC
  c->lr=c->r[0]; // 800BBCC0
  c->r[1]=c->r[1]+0x00000010u; // 800BBCC4
  return; // 800BBCC8
}

// fn_800BBCCC
void f_800BBCCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBCCC
  c->r[0]=c->lr; // 800BBCD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBCD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBCD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BBCDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBCE0
  c->r[29]=c->r[3]|c->r[3]; // 800BBCE4
  c->r[30]=c->r[4]|c->r[4]; // 800BBCE8
  c->r[3]=c->r[3]+0x00000014u; // 800BBCEC
  c->lr=0x800BBCF4u; f_8004B018(c); // 800BBCF0
  c->r[31]=c->r[3]|c->r[3]; // 800BBCF4
  goto L_800BBD30; // 800BBCF8
L_800BBCFC:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBCFC
  c->lr=0x800BBD04u; f_800BDEB4(c); // 800BBD00
  c->r[4]=c->r[30]|c->r[30]; // 800BBD04
  c->lr=0x800BBD0Cu; f_802E96C4(c); // 800BBD08
  cmps(c,0,(int32_t)c->r[3],0); // 800BBD0C
  if (!crb(c,2)) { goto L_800BBD20; } // 800BBD10
  c->r[3]=c->r[31]|c->r[31]; // 800BBD14
  c->lr=0x800BBD1Cu; f_800BDE68(c); // 800BBD18
  goto L_800BBD3C; // 800BBD1C
L_800BBD20:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBD20
  c->r[4]=c->r[31]|c->r[31]; // 800BBD24
  c->lr=0x800BBD2Cu; f_8028CCD8(c); // 800BBD28
  c->r[31]=c->r[3]|c->r[3]; // 800BBD2C
L_800BBD30:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBD30
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBCFC; } // 800BBD34
  c->r[3]=0u+0x00000000u; // 800BBD38
L_800BBD3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBD3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBD40
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBD44
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBD48
  c->lr=c->r[0]; // 800BBD4C
  c->r[1]=c->r[1]+0x00000020u; // 800BBD50
  return; // 800BBD54
}

// fn_800BBD58
void f_800BBD58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBD58
  c->r[0]=c->lr; // 800BBD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBD60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBD64
  c->r[31]=c->r[3]|c->r[3]; // 800BBD68
  c->r[3]=c->r[4]|c->r[4]; // 800BBD6C
  c->lr=0x800BBD74u; f_800BBF30(c); // 800BBD70
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BBD74
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BBD78
  c->r[3]=c->r[4]+c->r[0]; // 800BBD7C
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BBD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBD84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBD88
  c->lr=c->r[0]; // 800BBD8C
  c->r[1]=c->r[1]+0x00000010u; // 800BBD90
  return; // 800BBD94
}

// fn_800BBD98
void f_800BBD98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBD98
  c->r[0]=c->lr; // 800BBD9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBDA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBDA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BBDA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBDAC
  c->r[29]=c->r[3]|c->r[3]; // 800BBDB0
  c->r[30]=c->r[4]|c->r[4]; // 800BBDB4
  c->r[3]=c->r[3]+0x00000014u; // 800BBDB8
  c->lr=0x800BBDC0u; f_8004B018(c); // 800BBDBC
  c->r[31]=c->r[3]|c->r[3]; // 800BBDC0
  goto L_800BBDFC; // 800BBDC4
L_800BBDC8:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBDC8
  c->lr=0x800BBDD0u; f_800BDEB4(c); // 800BBDCC
  c->r[4]=c->r[30]|c->r[30]; // 800BBDD0
  c->lr=0x800BBDD8u; f_802E96C4(c); // 800BBDD4
  cmps(c,0,(int32_t)c->r[3],0); // 800BBDD8
  if (!crb(c,2)) { goto L_800BBDEC; } // 800BBDDC
  c->r[3]=c->r[31]|c->r[31]; // 800BBDE0
  c->lr=0x800BBDE8u; f_800BDE68(c); // 800BBDE4
  goto L_800BBE08; // 800BBDE8
L_800BBDEC:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBDEC
  c->r[4]=c->r[31]|c->r[31]; // 800BBDF0
  c->lr=0x800BBDF8u; f_8028CCD8(c); // 800BBDF4
  c->r[31]=c->r[3]|c->r[3]; // 800BBDF8
L_800BBDFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBDFC
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBDC8; } // 800BBE00
  c->r[3]=0u+0x00000000u; // 800BBE04
L_800BBE08:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBE08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBE0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBE10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBE14
  c->lr=c->r[0]; // 800BBE18
  c->r[1]=c->r[1]+0x00000020u; // 800BBE1C
  return; // 800BBE20
}

// fn_800BBE24
void f_800BBE24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBE24
  c->r[0]=c->lr; // 800BBE28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBE2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBE30
  c->r[31]=c->r[3]|c->r[3]; // 800BBE34
  c->r[3]=c->r[4]|c->r[4]; // 800BBE38
  c->lr=0x800BBE40u; f_800BBF30(c); // 800BBE3C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BBE40
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BBE44
  c->r[3]=c->r[4]+c->r[0]; // 800BBE48
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BBE4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBE50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBE54
  c->lr=c->r[0]; // 800BBE58
  c->r[1]=c->r[1]+0x00000010u; // 800BBE5C
  return; // 800BBE60
}

// fn_800BBE64
void f_800BBE64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBE64
  c->r[0]=c->lr; // 800BBE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBE70
  c->r[31]=c->r[3]|c->r[3]; // 800BBE74
  c->r[3]=c->r[4]|c->r[4]; // 800BBE78
  c->lr=0x800BBE80u; f_800BBF30(c); // 800BBE7C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BBE80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BBE84
  c->r[3]=c->r[4]+c->r[0]; // 800BBE88
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BBE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BBE90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBE94
  c->lr=c->r[0]; // 800BBE98
  c->r[1]=c->r[1]+0x00000010u; // 800BBE9C
  return; // 800BBEA0
}

// fn_800BBEA4
void f_800BBEA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBEA4
  c->r[0]=c->lr; // 800BBEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBEAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BBEB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BBEB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BBEB8
  c->r[29]=c->r[3]|c->r[3]; // 800BBEBC
  c->r[30]=c->r[4]|c->r[4]; // 800BBEC0
  c->r[3]=c->r[3]+0x00000014u; // 800BBEC4
  c->lr=0x800BBECCu; f_8004B018(c); // 800BBEC8
  c->r[31]=c->r[3]|c->r[3]; // 800BBECC
  goto L_800BBF08; // 800BBED0
L_800BBED4:;
  c->r[3]=c->r[31]|c->r[31]; // 800BBED4
  c->lr=0x800BBEDCu; f_800BDEB4(c); // 800BBED8
  c->r[4]=c->r[30]|c->r[30]; // 800BBEDC
  c->lr=0x800BBEE4u; f_802E96C4(c); // 800BBEE0
  cmps(c,0,(int32_t)c->r[3],0); // 800BBEE4
  if (!crb(c,2)) { goto L_800BBEF8; } // 800BBEE8
  c->r[3]=c->r[31]|c->r[31]; // 800BBEEC
  c->lr=0x800BBEF4u; f_800BDE68(c); // 800BBEF0
  goto L_800BBF14; // 800BBEF4
L_800BBEF8:;
  c->r[3]=c->r[29]+0x00000014u; // 800BBEF8
  c->r[4]=c->r[31]|c->r[31]; // 800BBEFC
  c->lr=0x800BBF04u; f_8028CCD8(c); // 800BBF00
  c->r[31]=c->r[3]|c->r[3]; // 800BBF04
L_800BBF08:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BBF08
  if (!crb(c,2)) { IRQCHK(c); goto L_800BBED4; } // 800BBF0C
  c->r[3]=0u+0x00000000u; // 800BBF10
L_800BBF14:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BBF14
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BBF18
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BBF1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBF20
  c->lr=c->r[0]; // 800BBF24
  c->r[1]=c->r[1]+0x00000020u; // 800BBF28
  return; // 800BBF2C
}

// fn_800BBF30
void f_800BBF30(Ctx* __restrict c) {
  c->r[3]=rotl(c->r[3],0)&0x00000FFFu; // 800BBF30
  return; // 800BBF34
}

// fn_800BBF38
void f_800BBF38(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D0u); // 800BBF38
  return; // 800BBF3C
}

// fn_800BBF40
void f_800BBF40(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 800BBF40
  return; // 800BBF44
}

// fn_800BBF48
void f_800BBF48(Ctx* __restrict c) {
  return; // 800BBF48
}

// fn_800BBF4C
void f_800BBF4C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800BBF4C
  return; // 800BBF50
}

// fn_800BBF54
void f_800BBF54(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000C8u); // 800BBF54
  c->r[0]=cntlz(c->r[0]); // 800BBF58
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BBF5C
  return; // 800BBF60
}

// fn_800BBF64
void f_800BBF64(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000050u; // 800BBF64
  f_8007369C(c); return; // 800BBF68
}

// fn_800BBF6C
void f_800BBF6C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800BBF6C
  return; // 800BBF70
}

// fn_800BBF74
void f_800BBF74(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BBF74
  c->r[3]=c->r[3]+c->r[0]; // 800BBF78
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 800BBF7C
  return; // 800BBF80
}

// fn_800BBF84
void f_800BBF84(Ctx* __restrict c) {
  f_802EBD8C(c); return; // 800BBF84
}

// fn_800BBF88
void f_800BBF88(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000002F0u); // 800BBF88
  return; // 800BBF8C
}

// fn_800BBF90
void f_800BBF90(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBF90
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800BBF94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800BBF98
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800BBF9C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BBFA0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800BBFA4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800BBFA8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800BBFAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BBFB0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800BBFB4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800BBFB8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800BBFBC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BBFC0
  c->r[0]=0u+0x00000000u; // 800BBFC4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800BBFC8
  W32(c->r[3]+0x00000034u,c->r[0]); // 800BBFCC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BBFD0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BBFD4
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBFD8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800BBFDC
  W32(c->r[3]+0x00000048u,c->r[0]); // 800BBFE0
  return; // 800BBFE4
}

// fn_800BBFE8
void f_800BBFE8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BBFE8
  W32(c->r[3]+0x00000034u,c->r[0]); // 800BBFEC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBFF0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BBFF4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BBFF8
  W32(c->r[3]+0x00000030u,c->r[4]); // 800BBFFC
  return; // 800BC000
}

// fn_800BC004
void f_800BC004(Ctx* __restrict c) {
  return; // 800BC004
}

// fn_800BC008
void f_800BC008(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC008
  cmpu(c,0,c->r[0],0x0000000Cu); // 800BC00C
  if (!crb(c,0)) return; // 800BC010
  c->r[7]=0u+0x00000000u; // 800BC014
  cmps(c,0,(int32_t)c->r[5],0); // 800BC018
  if (crb(c,2)) { goto L_800BC144; } // 800BC01C
  c->r[8]=c->r[5]+0xFFFFFFF8u; // 800BC020
  cmpu(c,0,c->r[5],0x00000008u); // 800BC024
  if (!crb(c,1)) { goto L_800BC10C; } // 800BC028
  c->r[6]=c->r[4]|c->r[4]; // 800BC02C
  c->r[0]=c->r[8]+0x00000007u; // 800BC030
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800BC034
  c->ctr=c->r[0]; // 800BC038
  cmpu(c,0,c->r[8],0x00000000u); // 800BC03C
  if (!crb(c,1)) { goto L_800BC10C; } // 800BC040
L_800BC044:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC044
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC048
  c->r[0]=c->r[0]+c->r[7]; // 800BC04C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC050
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800BC054
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC058
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC05C
  c->r[0]=c->r[0]+c->r[7]; // 800BC060
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC064
  c->r[8]=c->r[3]+c->r[0]; // 800BC068
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[0]);} // 800BC06C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC070
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC074
  c->r[0]=c->r[0]+c->r[7]; // 800BC078
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC07C
  c->r[8]=c->r[3]+c->r[0]; // 800BC080
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[0]);} // 800BC084
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC088
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC08C
  c->r[0]=c->r[0]+c->r[7]; // 800BC090
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC094
  c->r[8]=c->r[3]+c->r[0]; // 800BC098
  {uint32_t ea=c->r[8]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BC09C
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0A0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC0A4
  c->r[0]=c->r[0]+c->r[7]; // 800BC0A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC0AC
  c->r[8]=c->r[3]+c->r[0]; // 800BC0B0
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[0]);} // 800BC0B4
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0B8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC0BC
  c->r[0]=c->r[0]+c->r[7]; // 800BC0C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC0C4
  c->r[8]=c->r[3]+c->r[0]; // 800BC0C8
  {uint32_t ea=c->r[8]+0x00000014u; WF32(ea,c->f[0]);} // 800BC0CC
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0D0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC0D4
  c->r[0]=c->r[0]+c->r[7]; // 800BC0D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC0DC
  c->r[8]=c->r[3]+c->r[0]; // 800BC0E0
  {uint32_t ea=c->r[8]+0x00000018u; WF32(ea,c->f[0]);} // 800BC0E4
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0E8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC0EC
  c->r[0]=c->r[0]+c->r[7]; // 800BC0F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC0F4
  c->r[8]=c->r[3]+c->r[0]; // 800BC0F8
  {uint32_t ea=c->r[8]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BC0FC
  c->r[6]=c->r[6]+0x00000020u; // 800BC100
  c->r[7]=c->r[7]+0x00000008u; // 800BC104
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC044; } // 800BC108
L_800BC10C:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800BC10C
  c->r[4]=c->r[4]+c->r[0]; // 800BC110
  c->r[0]=c->r[5]-c->r[7]; // 800BC114
  c->ctr=c->r[0]; // 800BC118
  cmpu(c,0,c->r[7],c->r[5]); // 800BC11C
  if (!crb(c,0)) { goto L_800BC144; } // 800BC120
L_800BC124:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC124
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC128
  c->r[0]=c->r[0]+c->r[7]; // 800BC12C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC130
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800BC134
  c->r[4]=c->r[4]+0x00000004u; // 800BC138
  c->r[7]=c->r[7]+0x00000001u; // 800BC13C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC124; } // 800BC140
L_800BC144:;
  c->r[4]=R32(c->r[3]+0x00000034u); // 800BC144
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BC148
  c->r[0]=c->r[4]+c->r[0]; // 800BC14C
  W32(c->r[3]+0x00000034u,c->r[0]); // 800BC150
  return; // 800BC154
}

// fn_800BC158
void f_800BC158(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC158
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800BC15C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 800BC160
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC164
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800BC168
  return; // 800BC16C
}

// fn_800BC170
void f_800BC170(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 800BC170
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BC174
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800BC178
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC17C
  c->r[4]=c->r[3]+c->r[0]; // 800BC180
  goto L_800BC19C; // 800BC184
L_800BC188:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC188
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800BC18C
  c->r[4]=c->r[4]+0x00000004u; // 800BC190
  c->r[5]=c->r[5]+0x00000004u; // 800BC194
  c->r[6]=c->r[6]+0x00000001u; // 800BC198
L_800BC19C:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 800BC19C
  cmpu(c,0,c->r[6],c->r[0]); // 800BC1A0
  if (crb(c,0)) { IRQCHK(c); goto L_800BC188; } // 800BC1A4
  return; // 800BC1A8
}

// fn_800BC1AC
void f_800BC1AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC1AC
  c->r[0]=c->lr; // 800BC1B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC1B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC1B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BC1BC
  c->r[30]=c->r[3]|c->r[3]; // 800BC1C0
  c->r[31]=R32(c->r[3]+0x00000030u); // 800BC1C4
  c->lr=0x800BC1CCu; f_800BBF90(c); // 800BC1C8
  W32(c->r[30]+0x00000030u,c->r[31]); // 800BC1CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC1D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC1D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC1D8
  c->lr=c->r[0]; // 800BC1DC
  c->r[1]=c->r[1]+0x00000010u; // 800BC1E0
  return; // 800BC1E4
}

// fn_800BC1E8
void f_800BC1E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC1E8
  c->r[0]=c->lr; // 800BC1EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC1F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC1F4
  c->r[31]=c->r[3]|c->r[3]; // 800BC1F8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800BC1FC
  cmps(c,0,(int32_t)c->r[0],0); // 800BC200
  if (crb(c,2)) { goto L_800BC238; } // 800BC204
  c->r[3]=0u+0x00000001u; // 800BC208
  c->lr=0x800BC210u; f_8005D714(c); // 800BC20C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC210
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BC214
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC218
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BC21C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 800BC220
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC224
  fcmp(c,0,c->f[1],c->f[0]); // 800BC228
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC22C
  if (!crb(c,2)) { goto L_800BC238; } // 800BC230
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800BC234
L_800BC238:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC238
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC23C
  c->lr=c->r[0]; // 800BC240
  c->r[1]=c->r[1]+0x00000010u; // 800BC244
  return; // 800BC248
}

// fn_800BC24C
void f_800BC24C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC24C
  c->r[0]=c->lr; // 800BC250
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC254
  c->r[11]=c->r[1]+0x00000020u; // 800BC258
  c->lr=0x800BC260u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BC25C
  c->r[27]=c->r[3]|c->r[3]; // 800BC260
  c->r[28]=c->r[4]|c->r[4]; // 800BC264
  c->r[4]=R32(c->r[3]+0x00000030u); // 800BC268
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BC26C
  c->r[31]=c->r[3]+c->r[0]; // 800BC270
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800BC274
  c->r[30]=c->r[3]+c->r[0]; // 800BC278
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800BC27C
  c->r[29]=c->r[3]+c->r[0]; // 800BC280
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC284
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC288
  fcmp(c,0,c->f[0],c->f[1]); // 800BC28C
  if (!crb(c,2)) { goto L_800BC29C; } // 800BC290
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC294
  goto L_800BC2A4; // 800BC298
L_800BC29C:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC29C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800BC2A0
L_800BC2A4:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 800BC2A4
  cmps(c,0,(int32_t)c->r[0],2); // 800BC2A8
  if (crb(c,2)) { goto L_800BC2E4; } // 800BC2AC
  if (!crb(c,0)) { goto L_800BC2C4; } // 800BC2B0
  cmps(c,0,(int32_t)c->r[0],0); // 800BC2B4
  if (crb(c,2)) { goto L_800BC324; } // 800BC2B8
  if (!crb(c,0)) { goto L_800BC2D4; } // 800BC2BC
  goto L_800BC324; // 800BC2C0
L_800BC2C4:;
  cmps(c,0,(int32_t)c->r[0],4); // 800BC2C4
  if (!crb(c,0)) { goto L_800BC324; } // 800BC2C8
  goto L_800BC304; // 800BC2CC
  goto L_800BC324; // 800BC2D0
L_800BC2D4:;
  {uint32_t ea=c->r[2]+0xFFFF8820u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC2D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BC2D8
  c->lr=0x800BC2E0u; f_800ABE88(c); // 800BC2DC
  goto L_800BC324; // 800BC2E0
L_800BC2E4:;
  {uint32_t ea=c->r[2]+0xFFFF8820u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC2E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BC2E8
  {uint32_t ea=c->r[2]+0xFFFF8824u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC2EC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BC2F0
  c->lr=0x800BC2F8u; f_800ABE88(c); // 800BC2F4
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC2F8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BC2FC
  goto L_800BC324; // 800BC300
L_800BC304:;
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC304
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BC308
  {uint32_t ea=c->r[2]+0xFFFF8824u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC30C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BC310
  c->lr=0x800BC318u; f_800ABE88(c); // 800BC314
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC318
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 800BC31C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800BC320
L_800BC324:;
  c->r[3]=R32(c->r[27]+0x00000034u); // 800BC324
  c->r[0]=R32(c->r[27]+0x00000030u); // 800BC328
  c->r[5]=divwu(c->r[3],c->r[0]); // 800BC32C
  c->r[4]=0u+0x00000000u; // 800BC330
  c->r[3]=c->r[27]|c->r[27]; // 800BC334
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800BC338
  {uint32_t ea=c->r[2]+0xFFFF8834u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BC33C
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[8]=c->ps1[8]=RF32(ea);} // 800BC340
  goto L_800BC438; // 800BC344
L_800BC348:;
  cmps(c,0,(int32_t)c->r[5],3); // 800BC348
  if (crb(c,2)) { goto L_800BC388; } // 800BC34C
  if (!crb(c,0)) { goto L_800BC360; } // 800BC350
  cmps(c,0,(int32_t)c->r[5],2); // 800BC354
  if (!crb(c,0)) { goto L_800BC36C; } // 800BC358
  goto L_800BC420; // 800BC35C
L_800BC360:;
  cmps(c,0,(int32_t)c->r[5],5); // 800BC360
  if (!crb(c,0)) { goto L_800BC420; } // 800BC364
  goto L_800BC3C4; // 800BC368
L_800BC36C:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC36C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC370
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800BC374
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC378
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800BC37C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 800BC380
  goto L_800BC420; // 800BC384
L_800BC388:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC388
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC38C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 800BC390
  c->f[3]=c->ps1[3]=S(c->f[6]-c->f[1]); // 800BC394
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC398
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800BC39C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 800BC3A0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3A4
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 800BC3A8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC3AC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800BC3B0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800BC3B4
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 800BC3B8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 800BC3BC
  goto L_800BC420; // 800BC3C0
L_800BC3C4:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3C4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC3C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC3CC
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[0]); // 800BC3D0
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[1]); // 800BC3D4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3D8
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800BC3DC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BC3E0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC3E4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 800BC3E8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3EC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BC3F0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BC3F4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 800BC3F8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC3FC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800BC400
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BC404
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800BC408
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC40C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800BC410
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800BC414
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 800BC418
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 800BC41C
L_800BC420:;
  c->r[3]=c->r[3]+0x00000004u; // 800BC420
  c->r[31]=c->r[31]+0x00000004u; // 800BC424
  c->r[28]=c->r[28]+0x00000004u; // 800BC428
  c->r[30]=c->r[30]+0x00000004u; // 800BC42C
  c->r[29]=c->r[29]+0x00000004u; // 800BC430
  c->r[4]=c->r[4]+0x00000001u; // 800BC434
L_800BC438:;
  c->r[0]=R32(c->r[27]+0x00000030u); // 800BC438
  cmpu(c,0,c->r[4],c->r[0]); // 800BC43C
  if (crb(c,0)) { IRQCHK(c); goto L_800BC348; } // 800BC440
  c->r[11]=c->r[1]+0x00000020u; // 800BC444
  c->lr=0x800BC44Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BC448
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC44C
  c->lr=c->r[0]; // 800BC450
  c->r[1]=c->r[1]+0x00000020u; // 800BC454
  return; // 800BC458
}

// fn_800BC45C
void f_800BC45C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC45C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC460
  fcmp(c,0,c->f[0],c->f[1]); // 800BC464
  if (!crb(c,2)) { goto L_800BC474; } // 800BC468
  c->r[3]=0u+0x00000001u; // 800BC46C
  return; // 800BC470
L_800BC474:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC474
  fcmp(c,0,c->f[0],c->f[1]); // 800BC478
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC47C
  c->r[3]=c->cr; // 800BC480
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 800BC484
  return; // 800BC488
}

// fn_800BC48C
void f_800BC48C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC48C
  c->r[0]=c->lr; // 800BC490
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800BC494
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800BC498
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800BC49C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800BC4A0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800BC4A4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800BC4A8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800BC4AC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 800BC4B0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 800BC4B4
  c->r[11]=c->r[1]+0x00000080u; // 800BC4B8
  c->lr=0x800BC4C0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BC4BC
  c->r[30]=c->r[3]|c->r[3]; // 800BC4C0
  c->r[31]=c->r[4]|c->r[4]; // 800BC4C4
  c->r[26]=c->r[5]|c->r[5]; // 800BC4C8
  c->lr=0x800BC4D0u; f_800BDFEC(c); // 800BC4CC
  cmpu(c,0,c->r[26],c->r[3]); // 800BC4D0
  if (!crb(c,2)) { goto L_800BC51C; } // 800BC4D4
  c->r[3]=c->r[30]|c->r[30]; // 800BC4D8
  c->r[4]=0u+0x00000000u; // 800BC4DC
  c->r[5]=c->r[1]+0x00000038u; // 800BC4E0
  c->r[6]=c->r[26]|c->r[26]; // 800BC4E4
  c->lr=0x800BC4ECu; f_800BC170(c); // 800BC4E8
  c->r[4]=0u+0x00000000u; // 800BC4EC
  c->r[3]=c->r[1]+0x00000038u; // 800BC4F0
  goto L_800BC50C; // 800BC4F4
L_800BC4F8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC4F8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800BC4FC
  c->r[3]=c->r[3]+0x00000004u; // 800BC500
  c->r[31]=c->r[31]+0x00000004u; // 800BC504
  c->r[4]=c->r[4]+0x00000001u; // 800BC508
L_800BC50C:;
  c->r[0]=R32(c->r[30]+0x00000030u); // 800BC50C
  cmpu(c,0,c->r[4],c->r[0]); // 800BC510
  if (crb(c,0)) { IRQCHK(c); goto L_800BC4F8; } // 800BC514
  goto L_800BC780; // 800BC518
L_800BC51C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BC51C
  c->lr=0x800BC524u; f_800BDFEC(c); // 800BC520
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 800BC524
  cmpu(c,0,c->r[0],c->r[3]); // 800BC528
  if (!crb(c,2)) { goto L_800BC778; } // 800BC52C
  c->r[3]=c->r[30]|c->r[30]; // 800BC530
  c->r[4]=0u+0x00000000u; // 800BC534
  c->r[5]=c->r[1]+0x00000038u; // 800BC538
  c->r[6]=0u+0x00000003u; // 800BC53C
  c->lr=0x800BC544u; f_800BC170(c); // 800BC540
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC544
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800BC548
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC54C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BC550
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC554
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800BC558
  c->r[3]=c->r[30]|c->r[30]; // 800BC55C
  c->r[4]=0u+0x00000001u; // 800BC560
  c->r[5]=c->r[1]+0x00000008u; // 800BC564
  c->r[6]=0u+0x00000003u; // 800BC568
  c->lr=0x800BC570u; f_800BC170(c); // 800BC56C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC570
  c->r[7]=0u+0x00000000u; // 800BC574
  c->r[6]=R32(c->r[30]+0x00000030u); // 800BC578
  cmps(c,0,(int32_t)c->r[6],0); // 800BC57C
  if (crb(c,2)) { goto L_800BC6A0; } // 800BC580
  c->r[3]=c->r[6]+0xFFFFFFF8u; // 800BC584
  cmpu(c,0,c->r[6],0x00000008u); // 800BC588
  if (!crb(c,1)) { goto L_800BC65C; } // 800BC58C
  c->r[4]=c->r[1]+0x00000038u; // 800BC590
  c->r[5]=c->r[1]+0x00000008u; // 800BC594
  c->r[0]=c->r[3]+0x00000007u; // 800BC598
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800BC59C
  c->ctr=c->r[0]; // 800BC5A0
  cmpu(c,0,c->r[3],0x00000000u); // 800BC5A4
  if (!crb(c,1)) { goto L_800BC65C; } // 800BC5A8
L_800BC5AC:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC5AC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC5B0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC5B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC5B8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC5BC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC5C0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC5C4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC5C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC5CC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC5D0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC5D4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC5D8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC5DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC5E0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC5E4
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC5E8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC5EC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC5F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC5F4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC5F8
  {uint32_t ea=c->r[5]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC5FC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC600
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC604
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC608
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC60C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC610
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC614
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC618
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC61C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC620
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC624
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC628
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC62C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC630
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC634
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC638
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC63C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC640
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC644
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC648
  c->r[4]=c->r[4]+0x00000020u; // 800BC64C
  c->r[5]=c->r[5]+0x00000020u; // 800BC650
  c->r[7]=c->r[7]+0x00000008u; // 800BC654
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC5AC; } // 800BC658
L_800BC65C:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800BC65C
  c->r[3]=c->r[1]+0x00000038u; // 800BC660
  c->r[3]=c->r[3]+c->r[0]; // 800BC664
  c->r[4]=c->r[1]+0x00000008u; // 800BC668
  c->r[4]=c->r[4]+c->r[0]; // 800BC66C
  c->r[0]=c->r[6]-c->r[7]; // 800BC670
  c->ctr=c->r[0]; // 800BC674
  cmpu(c,0,c->r[7],c->r[6]); // 800BC678
  if (!crb(c,0)) { goto L_800BC6A0; } // 800BC67C
L_800BC680:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC680
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC684
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BC688
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800BC68C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800BC690
  c->r[3]=c->r[3]+0x00000004u; // 800BC694
  c->r[4]=c->r[4]+0x00000004u; // 800BC698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC680; } // 800BC69C
L_800BC6A0:;
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC6A0
  fcmp(c,0,c->f[1],c->f[0]); // 800BC6A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BC6A8
  if (!crb(c,2)) { goto L_800BC6BC; } // 800BC6AC
  c->lr=0x800BC6B4u; f_80059320(c); // 800BC6B0
  c->f[29]=c->f[1]; // 800BC6B4
  goto L_800BC6C0; // 800BC6B8
L_800BC6BC:;
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800BC6BC
L_800BC6C0:;
  c->r[26]=0u+0x00000000u; // 800BC6C0
  c->r[27]=0u+0x00000000u; // 800BC6C4
  c->r[29]=c->r[1]+0x00000008u; // 800BC6C8
  c->r[28]=c->r[1]+0x00000038u; // 800BC6CC
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BC6D0
  goto L_800BC764; // 800BC6D4
L_800BC6D8:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC6D8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC6DC
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 800BC6E0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC6E4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800BC6E8
  c->f[28]=c->ps1[28]=S(c->f[0]/c->f[29]); // 800BC6EC
  c->r[3]=0u+0x00000001u; // 800BC6F0
  c->lr=0x800BC6F8u; f_8005D714(c); // 800BC6F4
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC6F8
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800BC6FC
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 800BC700
  c->f[1]=c->f[30]; // 800BC704
  c->lr=0x800BC70Cu; f_800797BC(c); // 800BC708
  c->f[30]=c->f[1]; // 800BC70C
  c->f[1]=c->f[28]; // 800BC710
  c->lr=0x800BC718u; f_800797BC(c); // 800BC714
  fcmp(c,0,c->f[1],c->f[31]); // 800BC718
  if (!crb(c,1)) { goto L_800BC748; } // 800BC71C
  fcmp(c,0,c->f[30],c->f[1]); // 800BC720
  if (!crb(c,1)) { goto L_800BC748; } // 800BC724
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC728
  c->f[0]=c->ps1[0]=S(c->f[28]+c->f[0]); // 800BC72C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800BC730
  c->r[0]=R32(c->r[30]+0x00000058u); // 800BC734
  cmpu(c,0,c->r[0],c->r[27]); // 800BC738
  if (!crb(c,2)) { goto L_800BC754; } // 800BC73C
  c->r[26]=c->r[26]+0x00000001u; // 800BC740
  goto L_800BC754; // 800BC744
L_800BC748:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC748
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800BC74C
  c->r[26]=c->r[26]+0x00000001u; // 800BC750
L_800BC754:;
  c->r[31]=c->r[31]+0x00000004u; // 800BC754
  c->r[29]=c->r[29]+0x00000004u; // 800BC758
  c->r[28]=c->r[28]+0x00000004u; // 800BC75C
  c->r[27]=c->r[27]+0x00000001u; // 800BC760
L_800BC764:;
  c->r[0]=R32(c->r[30]+0x00000030u); // 800BC764
  cmpu(c,0,c->r[27],c->r[0]); // 800BC768
  if (crb(c,0)) { IRQCHK(c); goto L_800BC6D8; } // 800BC76C
  cmpu(c,0,c->r[26],c->r[0]); // 800BC770
  if (crb(c,2)) { goto L_800BC780; } // 800BC774
L_800BC778:;
  c->r[3]=0u+0x00000001u; // 800BC778
  goto L_800BC784; // 800BC77C
L_800BC780:;
  c->r[3]=0u+0x00000000u; // 800BC780
L_800BC784:;
  c->r[0]=0u+0x000000B8u; // 800BC784
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800BC788
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800BC78C
  c->r[0]=0u+0x000000A8u; // 800BC790
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800BC794
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800BC798
  c->r[0]=0u+0x00000098u; // 800BC79C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800BC7A0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800BC7A4
  c->r[0]=0u+0x00000088u; // 800BC7A8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800BC7AC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 800BC7B0
  c->r[11]=c->r[1]+0x00000080u; // 800BC7B4
  c->lr=0x800BC7BCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BC7B8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800BC7BC
  c->lr=c->r[0]; // 800BC7C0
  c->r[1]=c->r[1]+0x000000C0u; // 800BC7C4
  return; // 800BC7C8
}

// fn_800BC7CC
void f_800BC7CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC7CC
  c->r[0]=c->lr; // 800BC7D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC7D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BC7D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BC7DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BC7E0
  c->r[29]=c->r[3]|c->r[3]; // 800BC7E4
  c->r[30]=c->r[4]|c->r[4]; // 800BC7E8
  c->r[31]=c->r[5]|c->r[5]; // 800BC7EC
  c->r[4]=R32(c->r[3]+0x00000050u); // 800BC7F0
  cmps(c,0,(int32_t)c->r[4],0); // 800BC7F4
  if (crb(c,2)) { goto L_800BC88C; } // 800BC7F8
  c->r[0]=rotl(c->r[4],0)&0x00000004u; // 800BC7FC
  cmps(c,0,(int32_t)c->r[0],0); // 800BC800
  if (crb(c,2)) { goto L_800BC88C; } // 800BC804
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 800BC808
  cmps(c,0,(int32_t)c->r[0],0); // 800BC80C
  if (crb(c,2)) { goto L_800BC850; } // 800BC810
  c->lr=0x800BC818u; f_800BC1E8(c); // 800BC814
  c->r[3]=c->r[29]|c->r[29]; // 800BC818
  c->r[4]=c->r[30]|c->r[30]; // 800BC81C
  c->r[5]=c->r[31]|c->r[31]; // 800BC820
  c->lr=0x800BC828u; f_800BC24C(c); // 800BC824
  c->r[3]=c->r[29]|c->r[29]; // 800BC828
  c->lr=0x800BC830u; f_800BC45C(c); // 800BC82C
  cmps(c,0,(int32_t)c->r[3],0); // 800BC830
  if (crb(c,2)) { goto L_800BC850; } // 800BC834
  c->r[3]=c->r[29]|c->r[29]; // 800BC838
  c->lr=0x800BC840u; f_800BC004(c); // 800BC83C
  c->r[0]=R32(c->r[29]+0x00000050u); // 800BC840
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800BC844
  W32(c->r[29]+0x00000050u,c->r[0]); // 800BC848
  goto L_800BC88C; // 800BC84C
L_800BC850:;
  c->r[0]=R32(c->r[29]+0x00000050u); // 800BC850
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800BC854
  cmps(c,0,(int32_t)c->r[0],0); // 800BC858
  if (crb(c,2)) { goto L_800BC88C; } // 800BC85C
  c->r[3]=c->r[29]|c->r[29]; // 800BC860
  c->r[4]=c->r[30]|c->r[30]; // 800BC864
  c->r[5]=c->r[31]|c->r[31]; // 800BC868
  c->lr=0x800BC870u; f_800BC48C(c); // 800BC86C
  cmps(c,0,(int32_t)c->r[3],0); // 800BC870
  if (!crb(c,2)) { goto L_800BC88C; } // 800BC874
  c->r[3]=c->r[29]|c->r[29]; // 800BC878
  c->lr=0x800BC880u; f_800BC004(c); // 800BC87C
  c->r[0]=R32(c->r[29]+0x00000050u); // 800BC880
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800BC884
  W32(c->r[29]+0x00000050u,c->r[0]); // 800BC888
L_800BC88C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BC88C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BC890
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BC894
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC898
  c->lr=c->r[0]; // 800BC89C
  c->r[1]=c->r[1]+0x00000020u; // 800BC8A0
  return; // 800BC8A4
}

// fn_800BC8A8
void f_800BC8A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC8A8
  c->r[0]=c->lr; // 800BC8AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC8B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC8B4
  c->r[31]=c->r[3]|c->r[3]; // 800BC8B8
  c->lr=0x800BC8C0u; f_800BDCD0(c); // 800BC8BC
  c->r[3]=0u+0x80460000u; // 800BC8C0
  c->r[0]=c->r[3]+0x00001118u; // 800BC8C4
  W32(c->r[31]+0x00000048u,c->r[0]); // 800BC8C8
  c->r[3]=c->r[31]+0x00000054u; // 800BC8CC
  c->lr=0x800BC8D4u; f_8004B0A4(c); // 800BC8D0
  c->r[3]=c->r[31]+0x00000060u; // 800BC8D4
  c->lr=0x800BC8DCu; f_8004B0A4(c); // 800BC8D8
  c->r[3]=c->r[31]+0x0000006Cu; // 800BC8DC
  c->lr=0x800BC8E4u; f_8004B0A4(c); // 800BC8E0
  c->r[3]=c->r[31]+0x000000BCu; // 800BC8E4
  c->lr=0x800BC8ECu; f_8004B0A4(c); // 800BC8E8
  c->r[3]=c->r[31]+0x000000C8u; // 800BC8EC
  c->lr=0x800BC8F4u; f_8004B0A4(c); // 800BC8F0
  c->r[3]=c->r[31]|c->r[31]; // 800BC8F4
  c->lr=0x800BC8FCu; f_800BC98C(c); // 800BC8F8
  c->r[3]=c->r[31]|c->r[31]; // 800BC8FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC900
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC904
  c->lr=c->r[0]; // 800BC908
  c->r[1]=c->r[1]+0x00000010u; // 800BC90C
  return; // 800BC910
}

// dtor_800BC914
void f_800BC914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC914
  c->r[0]=c->lr; // 800BC918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC91C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC920
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BC924
  c->r[30]=c->r[3]|c->r[3]; // 800BC928
  c->r[31]=c->r[4]|c->r[4]; // 800BC92C
  cmps(c,0,(int32_t)c->r[3],0); // 800BC930
  if (crb(c,2)) { goto L_800BC970; } // 800BC934
  c->r[4]=0u+0x80460000u; // 800BC938
  c->r[0]=c->r[4]+0x00001118u; // 800BC93C
  W32(c->r[3]+0x00000048u,c->r[0]); // 800BC940
  c->lr=0x800BC948u; f_800BCAE0(c); // 800BC944
  c->r[3]=c->r[30]|c->r[30]; // 800BC948
  c->lr=0x800BC950u; f_800BDD88(c); // 800BC94C
  c->r[3]=c->r[30]|c->r[30]; // 800BC950
  c->r[4]=0u+0x00000000u; // 800BC954
  c->lr=0x800BC95Cu; f_800BDD24(c); // 800BC958
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BC95C
  cmps(c,0,(int32_t)c->r[0],0); // 800BC960
  if (!crb(c,1)) { goto L_800BC970; } // 800BC964
  c->r[3]=c->r[30]|c->r[30]; // 800BC968
  c->lr=0x800BC970u; f_80047B20(c); // 800BC96C
L_800BC970:;
  c->r[3]=c->r[30]|c->r[30]; // 800BC970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC974
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC97C
  c->lr=c->r[0]; // 800BC980
  c->r[1]=c->r[1]+0x00000010u; // 800BC984
  return; // 800BC988
}

// fn_800BC98C
void f_800BC98C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC98C
  c->r[0]=c->lr; // 800BC990
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BC994
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BC998
  c->r[31]=c->r[3]|c->r[3]; // 800BC99C
  c->r[3]=c->r[1]+0x00000020u; // 800BC9A0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC9A4
  c->f[2]=c->f[1]; // 800BC9A8
  c->f[3]=c->f[1]; // 800BC9AC
  c->lr=0x800BC9B4u; f_8004E34C(c); // 800BC9B0
  c->r[3]=c->r[1]+0x00000014u; // 800BC9B4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC9B8
  c->f[2]=c->f[1]; // 800BC9BC
  c->f[3]=c->f[1]; // 800BC9C0
  c->lr=0x800BC9C8u; f_8004E34C(c); // 800BC9C4
  c->r[3]=c->r[1]+0x00000008u; // 800BC9C8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC9CC
  c->f[2]=c->f[1]; // 800BC9D0
  c->f[3]=c->f[1]; // 800BC9D4
  c->lr=0x800BC9DCu; f_8004E34C(c); // 800BC9D8
  c->r[3]=0u+0x00000000u; // 800BC9DC
  W32(c->r[31]+0x00000090u,c->r[3]); // 800BC9E0
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800BC9E4
  W32(c->r[31]+0x00000050u,c->r[3]); // 800BC9E8
  {uint32_t ea=c->r[2]+0xFFFF8840u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC9EC
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800BC9F0
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800BC9F4
  W32(c->r[31]+0x00000078u,c->r[3]); // 800BC9F8
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 800BC9FC
  W32(c->r[31]+0x00000080u,c->r[3]); // 800BCA00
  W32(c->r[31]+0x00000084u,c->r[3]); // 800BCA04
  W32(c->r[31]+0x00000088u,c->r[3]); // 800BCA08
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 800BCA0C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCA10
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800BCA14
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800BCA18
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800BCA1C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800BCA20
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800BCA24
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800BCA28
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCA2C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800BCA30
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800BCA34
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800BCA38
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800BCA3C
  W32(c->r[31]+0x0000009Cu,c->r[3]); // 800BCA40
  c->r[0]=0u+0xFFFFFFFFu; // 800BCA44
  W32(c->r[31]+0x000000A0u,c->r[0]); // 800BCA48
  W32(c->r[31]+0x000000A4u,c->r[3]); // 800BCA4C
  W32(c->r[31]+0x000000A8u,c->r[3]); // 800BCA50
  W32(c->r[31]+0x000000ACu,c->r[3]); // 800BCA54
  W32(c->r[31]+0x000000B0u,c->r[3]); // 800BCA58
  {uint32_t ea=c->r[2]+0xFFFF8844u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCA5C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800BCA60
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BCA64
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BCA68
  c->lr=c->r[0]; // 800BCA6C
  c->r[1]=c->r[1]+0x00000040u; // 800BCA70
  return; // 800BCA74
}

// fn_800BCA78
void f_800BCA78(Ctx* __restrict c) {
  f_800BCAE0(c); return; // 800BCA78
}

// fn_800BCA7C
void f_800BCA7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCA7C
  c->r[0]=c->lr; // 800BCA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCA84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCA88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BCA8C
  c->r[30]=c->r[3]|c->r[3]; // 800BCA90
  c->r[31]=R32(c->r[3]+0x00000090u); // 800BCA94
  cmps(c,0,(int32_t)c->r[31],0); // 800BCA98
  if (crb(c,2)) { goto L_800BCAC4; } // 800BCA9C
  c->lr=0x800BCAA4u; f_800A23BC(c); // 800BCAA0
  c->lr=0x800BCAA8u; f_800C23AC(c); // 800BCAA4
  c->r[4]=c->r[31]|c->r[31]; // 800BCAA8
  c->lr=0x800BCAB0u; f_800C0744(c); // 800BCAAC
  cmps(c,0,(int32_t)c->r[3],0); // 800BCAB0
  if (!crb(c,2)) { goto L_800BCAC4; } // 800BCAB4
  c->r[0]=0u+0x00000000u; // 800BCAB8
  W32(c->r[30]+0x00000090u,c->r[0]); // 800BCABC
  W32(c->r[30]+0x000000B0u,c->r[0]); // 800BCAC0
L_800BCAC4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCAC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BCAC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCACC
  c->lr=c->r[0]; // 800BCAD0
  c->r[1]=c->r[1]+0x00000010u; // 800BCAD4
  return; // 800BCAD8
}

// fn_800BCADC
void f_800BCADC(Ctx* __restrict c) {
  return; // 800BCADC
}

// fn_800BCAE0
void f_800BCAE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCAE0
  c->r[0]=c->lr; // 800BCAE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCAE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BCAEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BCAF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BCAF4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800BCAF8
  c->r[28]=c->r[3]|c->r[3]; // 800BCAFC
  c->r[29]=0u+0x00000000u; // 800BCB00
  c->r[30]=c->r[28]|c->r[28]; // 800BCB04
  c->r[31]=0u+0x00000000u; // 800BCB08
L_800BCB0C:;
  c->lr=0x800BCB10u; f_800A23BC(c); // 800BCB0C
  c->lr=0x800BCB14u; f_800C23B4(c); // 800BCB10
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCB14
  c->lr=0x800BCB1Cu; f_800BFCA0(c); // 800BCB18
  cmps(c,0,(int32_t)c->r[3],0); // 800BCB1C
  if (crb(c,2)) { goto L_800BCB48; } // 800BCB20
  c->lr=0x800BCB28u; f_800A23BC(c); // 800BCB24
  c->lr=0x800BCB2Cu; f_800C23B4(c); // 800BCB28
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCB2C
  c->lr=0x800BCB34u; f_800BFD10(c); // 800BCB30
  c->lr=0x800BCB38u; f_800BE010(c); // 800BCB34
  c->lr=0x800BCB3Cu; f_800A23BC(c); // 800BCB38
  c->lr=0x800BCB40u; f_800C23B4(c); // 800BCB3C
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCB40
  c->lr=0x800BCB48u; f_800CFDE0(c); // 800BCB44
L_800BCB48:;
  W32(c->r[30]+0x00000078u,c->r[31]); // 800BCB48
  c->r[30]=c->r[30]+0x00000004u; // 800BCB4C
  c->r[29]=c->r[29]+0x00000001u; // 800BCB50
  cmpu(c,0,c->r[29],0x00000003u); // 800BCB54
  if (crb(c,0)) { IRQCHK(c); goto L_800BCB0C; } // 800BCB58
  c->r[30]=R32(c->r[28]+0x0000009Cu); // 800BCB5C
  cmps(c,0,(int32_t)c->r[30],0); // 800BCB60
  if (crb(c,2)) { goto L_800BCBF8; } // 800BCB64
  c->lr=0x800BCB6Cu; f_800A23BC(c); // 800BCB68
  c->lr=0x800BCB70u; f_800BB800(c); // 800BCB6C
  c->r[4]=c->r[30]|c->r[30]; // 800BCB70
  c->lr=0x800BCB78u; f_800C1284(c); // 800BCB74
  cmps(c,0,(int32_t)c->r[3],0); // 800BCB78
  if (crb(c,2)) { goto L_800BCBF0; } // 800BCB7C
  c->r[3]=c->r[28]|c->r[28]; // 800BCB80
  c->lr=0x800BCB88u; f_800BDE68(c); // 800BCB84
  c->lr=0x800BCB8Cu; f_800BE004(c); // 800BCB88
  cmps(c,0,(int32_t)c->r[3],6); // 800BCB8C
  if (crb(c,2)) { goto L_800BCBCC; } // 800BCB90
  if (!crb(c,0)) { goto L_800BCBF0; } // 800BCB94
  cmps(c,0,(int32_t)c->r[3],3); // 800BCB98
  if (crb(c,2)) { goto L_800BCBA4; } // 800BCB9C
  goto L_800BCBF0; // 800BCBA0
L_800BCBA4:;
  c->r[3]=c->r[28]|c->r[28]; // 800BCBA4
  c->lr=0x800BCBACu; f_800BDE68(c); // 800BCBA8
  c->r[31]=c->r[3]|c->r[3]; // 800BCBAC
  c->lr=0x800BCBB4u; f_800A23BC(c); // 800BCBB0
  c->lr=0x800BCBB8u; f_800BB800(c); // 800BCBB4
  c->r[4]=R32(c->r[28]+0x0000009Cu); // 800BCBB8
  c->lr=0x800BCBC0u; f_800BBD58(c); // 800BCBBC
  c->r[4]=c->r[31]|c->r[31]; // 800BCBC0
  c->lr=0x800BCBC8u; f_800C885C(c); // 800BCBC4
  goto L_800BCBF0; // 800BCBC8
L_800BCBCC:;
  c->r[3]=c->r[28]|c->r[28]; // 800BCBCC
  c->lr=0x800BCBD4u; f_800BDE68(c); // 800BCBD0
  c->r[31]=c->r[3]|c->r[3]; // 800BCBD4
  c->lr=0x800BCBDCu; f_800A23BC(c); // 800BCBD8
  c->lr=0x800BCBE0u; f_800BB800(c); // 800BCBDC
  c->r[4]=R32(c->r[28]+0x0000009Cu); // 800BCBE0
  c->lr=0x800BCBE8u; f_800BBD58(c); // 800BCBE4
  c->r[4]=c->r[31]|c->r[31]; // 800BCBE8
  c->lr=0x800BCBF0u; f_800C8B58(c); // 800BCBEC
L_800BCBF0:;
  c->r[0]=0u+0x00000000u; // 800BCBF0
  W32(c->r[28]+0x0000009Cu,c->r[0]); // 800BCBF4
L_800BCBF8:;
  c->r[30]=R32(c->r[28]+0x00000090u); // 800BCBF8
  cmps(c,0,(int32_t)c->r[30],0); // 800BCBFC
  if (crb(c,2)) { goto L_800BCC1C; } // 800BCC00
  c->lr=0x800BCC08u; f_800A23BC(c); // 800BCC04
  c->lr=0x800BCC0Cu; f_800C23AC(c); // 800BCC08
  c->r[4]=c->r[30]|c->r[30]; // 800BCC0C
  c->lr=0x800BCC14u; f_800CB634(c); // 800BCC10
  c->r[0]=0u+0x00000000u; // 800BCC14
  W32(c->r[28]+0x00000090u,c->r[0]); // 800BCC18
L_800BCC1C:;
  c->r[0]=0u+0x00000000u; // 800BCC1C
  W32(c->r[28]+0x000000B0u,c->r[0]); // 800BCC20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BCC24
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BCC28
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BCC2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800BCC30
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BCC34
  c->lr=c->r[0]; // 800BCC38
  c->r[1]=c->r[1]+0x00000020u; // 800BCC3C
  return; // 800BCC40
}

// fn_800BCC44
void f_800BCC44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCC44
  c->r[0]=c->lr; // 800BCC48
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BCC4C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800BCC50
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800BCC54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BCC58
  c->r[31]=c->r[3]|c->r[3]; // 800BCC5C
  c->f[31]=c->f[1]; // 800BCC60
  c->r[0]=R32(c->r[3]+0x00000090u); // 800BCC64
  cmps(c,0,(int32_t)c->r[0],0); // 800BCC68
  if (!crb(c,2)) { goto L_800BCCC8; } // 800BCC6C
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC70
  fcmp(c,0,c->f[1],c->f[0]); // 800BCC74
  if (!crb(c,1)) { goto L_800BCCC8; } // 800BCC78
  c->r[3]=c->r[1]+0x00000008u; // 800BCC7C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCC80
  c->f[2]=c->f[1]; // 800BCC84
  c->f[3]=c->f[1]; // 800BCC88
  c->lr=0x800BCC90u; f_8004E34C(c); // 800BCC8C
  c->lr=0x800BCC94u; f_800A23BC(c); // 800BCC90
  c->lr=0x800BCC98u; f_800C23AC(c); // 800BCC94
  c->r[4]=c->r[1]+0x00000008u; // 800BCC98
  c->f[1]=c->f[31]; // 800BCC9C
  c->r[5]=0u+0x00000000u; // 800BCCA0
  c->lr=0x800BCCA8u; f_800CB5B4(c); // 800BCCA4
  W32(c->r[31]+0x00000090u,c->r[3]); // 800BCCA8
  c->lr=0x800BCCB0u; f_800A23BC(c); // 800BCCAC
  c->lr=0x800BCCB4u; f_800C23AC(c); // 800BCCB0
  c->r[4]=R32(c->r[31]+0x00000090u); // 800BCCB4
  c->lr=0x800BCCBCu; f_800C07B4(c); // 800BCCB8
  c->lr=0x800BCCC0u; f_800C2408(c); // 800BCCBC
  W32(c->r[31]+0x000000B0u,c->r[3]); // 800BCCC0
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[31]);} // 800BCCC4
L_800BCCC8:;
  c->r[0]=0u+0x00000028u; // 800BCCC8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800BCCCC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800BCCD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BCCD4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCCD8
  c->lr=c->r[0]; // 800BCCDC
  c->r[1]=c->r[1]+0x00000030u; // 800BCCE0
  return; // 800BCCE4
}

// fn_800BCCE8
void f_800BCCE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCCE8
  c->r[0]=c->lr; // 800BCCEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCCF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCCF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BCCF8
  c->r[30]=c->r[3]|c->r[3]; // 800BCCFC
  c->r[31]=c->r[4]|c->r[4]; // 800BCD00
  c->lr=0x800BCD08u; f_800A23BC(c); // 800BCD04
  c->lr=0x800BCD0Cu; f_800C23B4(c); // 800BCD08
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCD0C
  c->lr=0x800BCD14u; f_800BFCA0(c); // 800BCD10
  cmps(c,0,(int32_t)c->r[3],0); // 800BCD14
  if (crb(c,2)) { goto L_800BCD34; } // 800BCD18
  c->lr=0x800BCD20u; f_800A23BC(c); // 800BCD1C
  c->lr=0x800BCD24u; f_800C23B4(c); // 800BCD20
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCD24
  c->lr=0x800BCD2Cu; f_800BFD10(c); // 800BCD28
  c->r[4]=c->r[31]|c->r[31]; // 800BCD2C
  c->lr=0x800BCD34u; f_800BE028(c); // 800BCD30
L_800BCD34:;
  c->lr=0x800BCD38u; f_800A23BC(c); // 800BCD34
  c->lr=0x800BCD3Cu; f_800C23B4(c); // 800BCD38
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800BCD3C
  c->lr=0x800BCD44u; f_800BFCA0(c); // 800BCD40
  cmps(c,0,(int32_t)c->r[3],0); // 800BCD44
  if (crb(c,2)) { goto L_800BCD64; } // 800BCD48
  c->lr=0x800BCD50u; f_800A23BC(c); // 800BCD4C
  c->lr=0x800BCD54u; f_800C23B4(c); // 800BCD50
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800BCD54
  c->lr=0x800BCD5Cu; f_800BFD10(c); // 800BCD58
  c->r[4]=c->r[31]|c->r[31]; // 800BCD5C
  c->lr=0x800BCD64u; f_800BE028(c); // 800BCD60
L_800BCD64:;
  c->lr=0x800BCD68u; f_800A23BC(c); // 800BCD64
  c->lr=0x800BCD6Cu; f_800C23B4(c); // 800BCD68
  c->r[4]=R32(c->r[30]+0x00000080u); // 800BCD6C
  c->lr=0x800BCD74u; f_800BFCA0(c); // 800BCD70
  cmps(c,0,(int32_t)c->r[3],0); // 800BCD74
  if (crb(c,2)) { goto L_800BCD94; } // 800BCD78
  c->lr=0x800BCD80u; f_800A23BC(c); // 800BCD7C
  c->lr=0x800BCD84u; f_800C23B4(c); // 800BCD80
  c->r[4]=R32(c->r[30]+0x00000080u); // 800BCD84
  c->lr=0x800BCD8Cu; f_800BFD10(c); // 800BCD88
  c->r[4]=c->r[31]|c->r[31]; // 800BCD8C
  c->lr=0x800BCD94u; f_800BE028(c); // 800BCD90
L_800BCD94:;
  c->lr=0x800BCD98u; f_800A23BC(c); // 800BCD94
  c->lr=0x800BCD9Cu; f_800C23AC(c); // 800BCD98
  c->r[4]=R32(c->r[30]+0x00000090u); // 800BCD9C
  c->lr=0x800BCDA4u; f_800C0744(c); // 800BCDA0
  cmps(c,0,(int32_t)c->r[3],0); // 800BCDA4
  if (crb(c,2)) { goto L_800BCDC4; } // 800BCDA8
  c->lr=0x800BCDB0u; f_800A23BC(c); // 800BCDAC
  c->lr=0x800BCDB4u; f_800C23AC(c); // 800BCDB0
  c->r[4]=R32(c->r[30]+0x00000090u); // 800BCDB4
  c->lr=0x800BCDBCu; f_800C07B4(c); // 800BCDB8
  c->r[4]=c->r[31]|c->r[31]; // 800BCDBC
  c->lr=0x800BCDC4u; f_800BE028(c); // 800BCDC0
L_800BCDC4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BCDC4
  c->r[4]=c->r[31]|c->r[31]; // 800BCDC8
  c->lr=0x800BCDD0u; f_800BE028(c); // 800BCDCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCDD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BCDD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCDD8
  c->lr=c->r[0]; // 800BCDDC
  c->r[1]=c->r[1]+0x00000010u; // 800BCDE0
  return; // 800BCDE4
}

// fn_800BCDE8
void f_800BCDE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCDE8
  c->r[0]=c->lr; // 800BCDEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BCDF0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BCDF4
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BCDF8
  c->r[30]=c->r[3]|c->r[3]; // 800BCDFC
  c->r[31]=c->r[4]|c->r[4]; // 800BCE00
  c->r[3]=c->r[1]+0x00000020u; // 800BCE04
  c->lr=0x800BCE0Cu; f_8004B0A4(c); // 800BCE08
  c->r[3]=c->r[1]+0x00000014u; // 800BCE0C
  c->lr=0x800BCE14u; f_8004B0A4(c); // 800BCE10
  c->r[3]=c->r[30]|c->r[30]; // 800BCE14
  c->r[4]=c->r[1]+0x00000014u; // 800BCE18
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BCE1C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800BCE20
  c->ctr=c->r[12]; // 800BCE24
  if (true) { c->lr=0x800BCE2Cu; dispatch(c,c->ctr); } // 800BCE28
  c->r[3]=c->r[1]+0x00000020u; // 800BCE2C
  c->r[4]=c->r[31]|c->r[31]; // 800BCE30
  c->lr=0x800BCE38u; f_8004A65C(c); // 800BCE34
  c->lr=0x800BCE3Cu; f_800A23BC(c); // 800BCE38
  c->lr=0x800BCE40u; f_800C23BC(c); // 800BCE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800BCE40
  if (crb(c,2)) { goto L_800BCE58; } // 800BCE44
  c->r[3]=c->r[1]+0x00000020u; // 800BCE48
  c->r[4]=c->r[3]|c->r[3]; // 800BCE4C
  c->r[5]=c->r[1]+0x00000014u; // 800BCE50
  c->lr=0x800BCE58u; f_8005C194(c); // 800BCE54
L_800BCE58:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 800BCE58
  cmps(c,0,(int32_t)c->r[0],0); // 800BCE5C
  if (crb(c,2)) { goto L_800BCE90; } // 800BCE60
  c->r[3]=c->r[1]+0x00000008u; // 800BCE64
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE68
  c->f[2]=c->f[1]; // 800BCE6C
  c->f[3]=c->f[1]; // 800BCE70
  c->lr=0x800BCE78u; f_8004E34C(c); // 800BCE74
  c->r[4]=c->r[3]|c->r[3]; // 800BCE78
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BCE7C
  c->lr=0x800BCE84u; f_80180F74(c); // 800BCE80
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BCE84
  c->r[4]=c->r[1]+0x00000020u; // 800BCE88
  c->lr=0x800BCE90u; f_80183CB4(c); // 800BCE8C
L_800BCE90:;
  c->r[3]=c->r[30]|c->r[30]; // 800BCE90
  c->r[4]=c->r[1]+0x00000020u; // 800BCE94
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BCE98
  c->r[12]=R32(c->r[12]+0x00000028u); // 800BCE9C
  c->ctr=c->r[12]; // 800BCEA0
  if (true) { c->lr=0x800BCEA8u; dispatch(c,c->ctr); } // 800BCEA4
  c->r[0]=R32(c->r[30]+0x00000078u); // 800BCEA8
  cmps(c,0,(int32_t)c->r[0],0); // 800BCEAC
  if (!crb(c,2)) { goto L_800BCEE0; } // 800BCEB0
  c->lr=0x800BCEB8u; f_800A23BC(c); // 800BCEB4
  c->lr=0x800BCEBCu; f_800C23B4(c); // 800BCEB8
  c->r[4]=0u+0x00000003u; // 800BCEBC
  c->r[5]=0u+0x00000000u; // 800BCEC0
  c->lr=0x800BCEC8u; f_800CFD40(c); // 800BCEC4
  W32(c->r[30]+0x00000078u,c->r[3]); // 800BCEC8
  c->lr=0x800BCED0u; f_800A23BC(c); // 800BCECC
  c->lr=0x800BCED4u; f_800C23B4(c); // 800BCED0
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCED4
  c->lr=0x800BCEDCu; f_800BFD10(c); // 800BCED8
  c->lr=0x800BCEE0u; f_800BDFF4(c); // 800BCEDC
L_800BCEE0:;
  c->lr=0x800BCEE4u; f_800A23BC(c); // 800BCEE0
  c->lr=0x800BCEE8u; f_800C23B4(c); // 800BCEE4
  c->r[4]=R32(c->r[30]+0x00000078u); // 800BCEE8
  c->lr=0x800BCEF0u; f_800BFD10(c); // 800BCEEC
  c->r[31]=c->r[3]|c->r[3]; // 800BCEF0
  c->r[3]=c->r[3]+0x0000004Cu; // 800BCEF4
  c->lr=0x800BCEFCu; f_800BC1AC(c); // 800BCEF8
  c->r[3]=c->r[31]+0x0000004Cu; // 800BCEFC
  c->lr=0x800BCF04u; f_800BE030(c); // 800BCF00
  c->r[3]=c->r[31]+0x0000004Cu; // 800BCF04
  c->r[4]=c->r[1]+0x00000020u; // 800BCF08
  c->r[5]=0u+0x00000003u; // 800BCF0C
  c->lr=0x800BCF14u; f_800BC008(c); // 800BCF10
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BCF14
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BCF18
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BCF1C
  c->lr=c->r[0]; // 800BCF20
  c->r[1]=c->r[1]+0x00000040u; // 800BCF24
  return; // 800BCF28
}

// fn_800BCF2C
void f_800BCF2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCF2C
  c->r[0]=c->lr; // 800BCF30
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BCF34
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BCF38
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BCF3C
  c->r[30]=c->r[3]|c->r[3]; // 800BCF40
  c->r[31]=c->r[4]|c->r[4]; // 800BCF44
  c->r[3]=c->r[1]+0x00000014u; // 800BCF48
  c->lr=0x800BCF50u; f_8004B0A4(c); // 800BCF4C
  c->r[3]=c->r[1]+0x00000008u; // 800BCF50
  c->lr=0x800BCF58u; f_8004B0A4(c); // 800BCF54
  c->r[3]=c->r[30]|c->r[30]; // 800BCF58
  c->r[4]=c->r[1]+0x00000008u; // 800BCF5C
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BCF60
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800BCF64
  c->ctr=c->r[12]; // 800BCF68
  if (true) { c->lr=0x800BCF70u; dispatch(c,c->ctr); } // 800BCF6C
  c->r[3]=c->r[1]+0x00000014u; // 800BCF70
  c->r[4]=c->r[31]|c->r[31]; // 800BCF74
  c->lr=0x800BCF7Cu; f_8004A65C(c); // 800BCF78
  c->lr=0x800BCF80u; f_800A23BC(c); // 800BCF7C
  c->lr=0x800BCF84u; f_800C23BC(c); // 800BCF80
  cmps(c,0,(int32_t)c->r[3],0); // 800BCF84
  if (crb(c,2)) { goto L_800BCF9C; } // 800BCF88
  c->r[3]=c->r[1]+0x00000014u; // 800BCF8C
  c->r[4]=c->r[3]|c->r[3]; // 800BCF90
  c->r[5]=c->r[1]+0x00000008u; // 800BCF94
  c->lr=0x800BCF9Cu; f_8005C194(c); // 800BCF98
L_800BCF9C:;
  c->r[31]=R32(c->r[30]+0x00000078u); // 800BCF9C
  cmps(c,0,(int32_t)c->r[31],0); // 800BCFA0
  if (crb(c,2)) { goto L_800BCFC8; } // 800BCFA4
  c->lr=0x800BCFACu; f_800A23BC(c); // 800BCFA8
  c->lr=0x800BCFB0u; f_800C23B4(c); // 800BCFAC
  c->r[4]=c->r[31]|c->r[31]; // 800BCFB0
  c->lr=0x800BCFB8u; f_800BFD10(c); // 800BCFB4
  c->r[3]=c->r[3]+0x0000004Cu; // 800BCFB8
  c->r[4]=c->r[1]+0x00000014u; // 800BCFBC
  c->r[5]=0u+0x00000003u; // 800BCFC0
  c->lr=0x800BCFC8u; f_800BC008(c); // 800BCFC4
L_800BCFC8:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BCFC8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BCFCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCFD0
  c->lr=c->r[0]; // 800BCFD4
  c->r[1]=c->r[1]+0x00000030u; // 800BCFD8
  return; // 800BCFDC
}

// fn_800BCFE0
void f_800BCFE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCFE0
  c->r[0]=c->lr; // 800BCFE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCFE8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BCFEC
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BCFF0
  c->f[31]=c->f[1]; // 800BCFF4
  c->r[31]=R32(c->r[3]+0x00000078u); // 800BCFF8
  cmps(c,0,(int32_t)c->r[31],0); // 800BCFFC
  if (crb(c,2)) { goto L_800BD024; } // 800BD000
  c->lr=0x800BD008u; f_800A23BC(c); // 800BD004
  c->lr=0x800BD00Cu; f_800C23B4(c); // 800BD008
  c->r[4]=c->r[31]|c->r[31]; // 800BD00C
  c->lr=0x800BD014u; f_800BFD10(c); // 800BD010
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD014
  c->f[1]=c->f[31]; // 800BD018
  c->r[4]=0u+0x00000000u; // 800BD01C
  c->lr=0x800BD024u; f_800BE04C(c); // 800BD020
L_800BD024:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BD024
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BD028
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD02C
  c->lr=c->r[0]; // 800BD030
  c->r[1]=c->r[1]+0x00000020u; // 800BD034
  return; // 800BD038
}

// fn_800BD03C
void f_800BD03C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD03C
  c->r[0]=c->lr; // 800BD040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD048
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD04C
  c->r[30]=c->r[4]|c->r[4]; // 800BD050
  c->r[31]=R32(c->r[3]+0x00000078u); // 800BD054
  cmps(c,0,(int32_t)c->r[31],0); // 800BD058
  if (crb(c,2)) { goto L_800BD07C; } // 800BD05C
  c->lr=0x800BD064u; f_800A23BC(c); // 800BD060
  c->lr=0x800BD068u; f_800C23B4(c); // 800BD064
  c->r[4]=c->r[31]|c->r[31]; // 800BD068
  c->lr=0x800BD070u; f_800BFD10(c); // 800BD06C
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD070
  c->r[4]=c->r[30]|c->r[30]; // 800BD074
  c->lr=0x800BD07Cu; f_800BE08C(c); // 800BD078
L_800BD07C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD07C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD080
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD084
  c->lr=c->r[0]; // 800BD088
  c->r[1]=c->r[1]+0x00000010u; // 800BD08C
  return; // 800BD090
}

// fn_800BD094
void f_800BD094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD094
  c->r[0]=c->lr; // 800BD098
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD09C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD0A0
  c->r[31]=c->r[3]|c->r[3]; // 800BD0A4
  c->r[3]=c->r[1]+0x00000008u; // 800BD0A8
  c->lr=0x800BD0B0u; f_8004B0A4(c); // 800BD0AC
  c->r[3]=c->r[31]|c->r[31]; // 800BD0B0
  c->r[4]=c->r[1]+0x00000008u; // 800BD0B4
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD0B8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800BD0BC
  c->ctr=c->r[12]; // 800BD0C0
  if (true) { c->lr=0x800BD0C8u; dispatch(c,c->ctr); } // 800BD0C4
  c->r[3]=c->r[31]|c->r[31]; // 800BD0C8
  c->r[4]=c->r[1]+0x00000008u; // 800BD0CC
  c->lr=0x800BD0D4u; f_800BCDE8(c); // 800BD0D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD0D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD0D8
  c->lr=c->r[0]; // 800BD0DC
  c->r[1]=c->r[1]+0x00000020u; // 800BD0E0
  return; // 800BD0E4
}

// fn_800BD0E8
void f_800BD0E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD0E8
  c->r[0]=c->lr; // 800BD0EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD0F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD0F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BD0F8
  c->r[30]=c->r[3]|c->r[3]; // 800BD0FC
  c->r[31]=c->r[4]|c->r[4]; // 800BD100
  c->r[3]=c->r[1]+0x00000008u; // 800BD104
  c->lr=0x800BD10Cu; f_8004B0A4(c); // 800BD108
  c->r[3]=c->r[30]|c->r[30]; // 800BD10C
  c->r[4]=c->r[1]+0x00000008u; // 800BD110
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD114
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BD118
  c->ctr=c->r[12]; // 800BD11C
  if (true) { c->lr=0x800BD124u; dispatch(c,c->ctr); } // 800BD120
  c->r[3]=c->r[1]+0x00000008u; // 800BD124
  c->r[4]=c->r[31]|c->r[31]; // 800BD128
  c->lr=0x800BD130u; f_8004A65C(c); // 800BD12C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD130
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD134
  c->lr=0x800BD13Cu; f_800BBF84(c); // 800BD138
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD13C
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD140
  c->lr=0x800BD148u; f_800BBF84(c); // 800BD144
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD148
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD14C
  c->lr=0x800BD154u; f_800BBF84(c); // 800BD150
  c->r[3]=c->r[30]|c->r[30]; // 800BD154
  c->r[4]=c->r[1]+0x00000008u; // 800BD158
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD15C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BD160
  c->ctr=c->r[12]; // 800BD164
  if (true) { c->lr=0x800BD16Cu; dispatch(c,c->ctr); } // 800BD168
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800BD16C
  cmps(c,0,(int32_t)c->r[0],0); // 800BD170
  if (!crb(c,2)) { goto L_800BD1A4; } // 800BD174
  c->lr=0x800BD17Cu; f_800A23BC(c); // 800BD178
  c->lr=0x800BD180u; f_800C23B4(c); // 800BD17C
  c->r[4]=0u+0x00000003u; // 800BD180
  c->r[5]=0u+0x00000000u; // 800BD184
  c->lr=0x800BD18Cu; f_800CFD40(c); // 800BD188
  W32(c->r[30]+0x0000007Cu,c->r[3]); // 800BD18C
  c->lr=0x800BD194u; f_800A23BC(c); // 800BD190
  c->lr=0x800BD198u; f_800C23B4(c); // 800BD194
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800BD198
  c->lr=0x800BD1A0u; f_800BFD10(c); // 800BD19C
  c->lr=0x800BD1A4u; f_800BDFF4(c); // 800BD1A0
L_800BD1A4:;
  c->lr=0x800BD1A8u; f_800A23BC(c); // 800BD1A4
  c->lr=0x800BD1ACu; f_800C23B4(c); // 800BD1A8
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 800BD1AC
  c->lr=0x800BD1B4u; f_800BFD10(c); // 800BD1B0
  c->r[31]=c->r[3]|c->r[3]; // 800BD1B4
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD1B8
  c->lr=0x800BD1C0u; f_800BC1AC(c); // 800BD1BC
  c->r[3]=c->r[31]+0x0000004Cu; // 800BD1C0
  c->lr=0x800BD1C8u; f_800BE030(c); // 800BD1C4
  c->r[3]=c->r[31]+0x0000004Cu; // 800BD1C8
  c->r[4]=c->r[1]+0x00000008u; // 800BD1CC
  c->r[5]=0u+0x00000003u; // 800BD1D0
  c->lr=0x800BD1D8u; f_800BC008(c); // 800BD1D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD1D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BD1DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD1E0
  c->lr=c->r[0]; // 800BD1E4
  c->r[1]=c->r[1]+0x00000020u; // 800BD1E8
  return; // 800BD1EC
}

// fn_800BD1F0
void f_800BD1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD1F0
  c->r[0]=c->lr; // 800BD1F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BD1F8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BD1FC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BD200
  c->r[30]=c->r[3]|c->r[3]; // 800BD204
  c->r[31]=c->r[4]|c->r[4]; // 800BD208
  c->r[3]=c->r[1]+0x00000020u; // 800BD20C
  c->lr=0x800BD214u; f_8004B0A4(c); // 800BD210
  c->r[3]=c->r[1]+0x00000014u; // 800BD214
  c->lr=0x800BD21Cu; f_8004B0A4(c); // 800BD218
  c->r[3]=c->r[1]+0x00000008u; // 800BD21C
  c->lr=0x800BD224u; f_8004B0A4(c); // 800BD220
  c->r[3]=c->r[30]|c->r[30]; // 800BD224
  c->r[4]=c->r[1]+0x00000014u; // 800BD228
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD22C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BD230
  c->ctr=c->r[12]; // 800BD234
  if (true) { c->lr=0x800BD23Cu; dispatch(c,c->ctr); } // 800BD238
  c->r[3]=c->r[1]+0x00000008u; // 800BD23C
  c->r[4]=c->r[31]|c->r[31]; // 800BD240
  c->lr=0x800BD248u; f_8004A65C(c); // 800BD244
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD248
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD24C
  c->lr=0x800BD254u; f_800BBF84(c); // 800BD250
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD254
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD258
  c->lr=0x800BD260u; f_800BBF84(c); // 800BD25C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD260
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD264
  c->lr=0x800BD26Cu; f_800BBF84(c); // 800BD268
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD26C
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD270
  c->lr=0x800BD278u; f_800BBF84(c); // 800BD274
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD278
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD27C
  c->lr=0x800BD284u; f_800BBF84(c); // 800BD280
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD284
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD288
  c->lr=0x800BD290u; f_800BBF84(c); // 800BD28C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD290
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD294
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BD298
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD29C
  fcmp(c,0,c->f[1],c->f[0]); // 800BD2A0
  if (!crb(c,1)) { goto L_800BD2B4; } // 800BD2A4
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BD2AC
  goto L_800BD2C8; // 800BD2B0
L_800BD2B4:;
  {uint32_t ea=c->r[2]+0xFFFF884Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2B4
  fcmp(c,0,c->f[1],c->f[0]); // 800BD2B8
  if (!crb(c,0)) { goto L_800BD2C8; } // 800BD2BC
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2C0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BD2C4
L_800BD2C8:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2C8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BD2CC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800BD2D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD2D4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BD2DC
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2E0
  fcmp(c,0,c->f[1],c->f[0]); // 800BD2E4
  if (!crb(c,1)) { goto L_800BD2F8; } // 800BD2E8
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BD2F0
  goto L_800BD30C; // 800BD2F4
L_800BD2F8:;
  {uint32_t ea=c->r[2]+0xFFFF884Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2F8
  fcmp(c,0,c->f[1],c->f[0]); // 800BD2FC
  if (!crb(c,0)) { goto L_800BD30C; } // 800BD300
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD304
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BD308
L_800BD30C:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD30C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BD310
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BD314
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD318
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD31C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BD320
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD324
  fcmp(c,0,c->f[1],c->f[0]); // 800BD328
  if (!crb(c,1)) { goto L_800BD33C; } // 800BD32C
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD330
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800BD334
  goto L_800BD350; // 800BD338
L_800BD33C:;
  {uint32_t ea=c->r[2]+0xFFFF884Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD33C
  fcmp(c,0,c->f[1],c->f[0]); // 800BD340
  if (!crb(c,0)) { goto L_800BD350; } // 800BD344
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD348
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BD34C
L_800BD350:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD350
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800BD354
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800BD358
  c->r[31]=R32(c->r[30]+0x0000007Cu); // 800BD35C
  cmps(c,0,(int32_t)c->r[31],0); // 800BD360
  if (crb(c,2)) { goto L_800BD388; } // 800BD364
  c->lr=0x800BD36Cu; f_800A23BC(c); // 800BD368
  c->lr=0x800BD370u; f_800C23B4(c); // 800BD36C
  c->r[4]=c->r[31]|c->r[31]; // 800BD370
  c->lr=0x800BD378u; f_800BFD10(c); // 800BD374
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD378
  c->r[4]=c->r[1]+0x00000020u; // 800BD37C
  c->r[5]=0u+0x00000003u; // 800BD380
  c->lr=0x800BD388u; f_800BC008(c); // 800BD384
L_800BD388:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BD388
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BD38C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BD390
  c->lr=c->r[0]; // 800BD394
  c->r[1]=c->r[1]+0x00000040u; // 800BD398
  return; // 800BD39C
}

// fn_800BD3A0
void f_800BD3A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD3A0
  c->r[0]=c->lr; // 800BD3A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD3A8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BD3AC
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BD3B0
  c->f[31]=c->f[1]; // 800BD3B4
  c->r[31]=R32(c->r[3]+0x0000007Cu); // 800BD3B8
  cmps(c,0,(int32_t)c->r[31],0); // 800BD3BC
  if (crb(c,2)) { goto L_800BD3E4; } // 800BD3C0
  c->lr=0x800BD3C8u; f_800A23BC(c); // 800BD3C4
  c->lr=0x800BD3CCu; f_800C23B4(c); // 800BD3C8
  c->r[4]=c->r[31]|c->r[31]; // 800BD3CC
  c->lr=0x800BD3D4u; f_800BFD10(c); // 800BD3D0
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD3D4
  c->f[1]=c->f[31]; // 800BD3D8
  c->r[4]=0u+0x00000000u; // 800BD3DC
  c->lr=0x800BD3E4u; f_800BE04C(c); // 800BD3E0
L_800BD3E4:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BD3E4
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BD3E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD3EC
  c->lr=c->r[0]; // 800BD3F0
  c->r[1]=c->r[1]+0x00000020u; // 800BD3F4
  return; // 800BD3F8
}

// fn_800BD3FC
void f_800BD3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD3FC
  c->r[0]=c->lr; // 800BD400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD408
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD40C
  c->r[30]=c->r[4]|c->r[4]; // 800BD410
  c->r[31]=R32(c->r[3]+0x0000007Cu); // 800BD414
  cmps(c,0,(int32_t)c->r[31],0); // 800BD418
  if (crb(c,2)) { goto L_800BD43C; } // 800BD41C
  c->lr=0x800BD424u; f_800A23BC(c); // 800BD420
  c->lr=0x800BD428u; f_800C23B4(c); // 800BD424
  c->r[4]=c->r[31]|c->r[31]; // 800BD428
  c->lr=0x800BD430u; f_800BFD10(c); // 800BD42C
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD430
  c->r[4]=c->r[30]|c->r[30]; // 800BD434
  c->lr=0x800BD43Cu; f_800BE08C(c); // 800BD438
L_800BD43C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD43C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD440
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD444
  c->lr=c->r[0]; // 800BD448
  c->r[1]=c->r[1]+0x00000010u; // 800BD44C
  return; // 800BD450
}

// fn_800BD454
void f_800BD454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD454
  c->r[0]=c->lr; // 800BD458
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD460
  c->r[31]=c->r[3]|c->r[3]; // 800BD464
  c->r[3]=c->r[1]+0x00000008u; // 800BD468
  c->lr=0x800BD470u; f_8004B0A4(c); // 800BD46C
  c->r[3]=c->r[31]|c->r[31]; // 800BD470
  c->r[4]=c->r[1]+0x00000008u; // 800BD474
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD478
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BD47C
  c->ctr=c->r[12]; // 800BD480
  if (true) { c->lr=0x800BD488u; dispatch(c,c->ctr); } // 800BD484
  c->r[3]=c->r[31]|c->r[31]; // 800BD488
  c->r[4]=c->r[31]+0x00000060u; // 800BD48C
  c->lr=0x800BD494u; f_800BD0E8(c); // 800BD490
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD494
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD498
  c->lr=c->r[0]; // 800BD49C
  c->r[1]=c->r[1]+0x00000020u; // 800BD4A0
  return; // 800BD4A4
}

// fn_800BD4A8
void f_800BD4A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD4A8
  c->r[0]=c->lr; // 800BD4AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD4B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD4B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD4B8
  c->r[31]=c->r[3]|c->r[3]; // 800BD4BC
  c->r[30]=c->r[4]|c->r[4]; // 800BD4C0
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD4C4
  c->r[12]=R32(c->r[12]+0x00000030u); // 800BD4C8
  c->ctr=c->r[12]; // 800BD4CC
  if (true) { c->lr=0x800BD4D4u; dispatch(c,c->ctr); } // 800BD4D0
  c->r[0]=R32(c->r[31]+0x00000080u); // 800BD4D4
  cmps(c,0,(int32_t)c->r[0],0); // 800BD4D8
  if (!crb(c,2)) { goto L_800BD50C; } // 800BD4DC
  c->lr=0x800BD4E4u; f_800A23BC(c); // 800BD4E0
  c->lr=0x800BD4E8u; f_800C23B4(c); // 800BD4E4
  c->r[4]=0u+0x00000003u; // 800BD4E8
  c->r[5]=0u+0x00000000u; // 800BD4EC
  c->lr=0x800BD4F4u; f_800CFD40(c); // 800BD4F0
  W32(c->r[31]+0x00000080u,c->r[3]); // 800BD4F4
  c->lr=0x800BD4FCu; f_800A23BC(c); // 800BD4F8
  c->lr=0x800BD500u; f_800C23B4(c); // 800BD4FC
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BD500
  c->lr=0x800BD508u; f_800BFD10(c); // 800BD504
  c->lr=0x800BD50Cu; f_800BDFF4(c); // 800BD508
L_800BD50C:;
  c->lr=0x800BD510u; f_800A23BC(c); // 800BD50C
  c->lr=0x800BD514u; f_800C23B4(c); // 800BD510
  c->r[4]=R32(c->r[31]+0x00000080u); // 800BD514
  c->lr=0x800BD51Cu; f_800BFD10(c); // 800BD518
  c->r[31]=c->r[3]|c->r[3]; // 800BD51C
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD520
  c->lr=0x800BD528u; f_800BC1AC(c); // 800BD524
  c->r[3]=c->r[31]+0x0000004Cu; // 800BD528
  c->lr=0x800BD530u; f_800BE030(c); // 800BD52C
  c->r[3]=c->r[31]+0x0000004Cu; // 800BD530
  c->r[4]=c->r[30]|c->r[30]; // 800BD534
  c->r[5]=0u+0x00000003u; // 800BD538
  c->lr=0x800BD540u; f_800BC008(c); // 800BD53C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD540
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD544
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD548
  c->lr=c->r[0]; // 800BD54C
  c->r[1]=c->r[1]+0x00000010u; // 800BD550
  return; // 800BD554
}

// fn_800BD558
void f_800BD558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD558
  c->r[0]=c->lr; // 800BD55C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD564
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD568
  c->r[30]=c->r[4]|c->r[4]; // 800BD56C
  c->r[31]=R32(c->r[3]+0x00000080u); // 800BD570
  cmps(c,0,(int32_t)c->r[31],0); // 800BD574
  if (crb(c,2)) { goto L_800BD59C; } // 800BD578
  c->lr=0x800BD580u; f_800A23BC(c); // 800BD57C
  c->lr=0x800BD584u; f_800C23B4(c); // 800BD580
  c->r[4]=c->r[31]|c->r[31]; // 800BD584
  c->lr=0x800BD58Cu; f_800BFD10(c); // 800BD588
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD58C
  c->r[4]=c->r[30]|c->r[30]; // 800BD590
  c->r[5]=0u+0x00000003u; // 800BD594
  c->lr=0x800BD59Cu; f_800BC008(c); // 800BD598
L_800BD59C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD59C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD5A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD5A4
  c->lr=c->r[0]; // 800BD5A8
  c->r[1]=c->r[1]+0x00000010u; // 800BD5AC
  return; // 800BD5B0
}

// fn_800BD5B4
void f_800BD5B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD5B4
  c->r[0]=c->lr; // 800BD5B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD5BC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BD5C0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BD5C4
  c->f[31]=c->f[1]; // 800BD5C8
  c->r[31]=R32(c->r[3]+0x00000080u); // 800BD5CC
  cmps(c,0,(int32_t)c->r[31],0); // 800BD5D0
  if (crb(c,2)) { goto L_800BD5F8; } // 800BD5D4
  c->lr=0x800BD5DCu; f_800A23BC(c); // 800BD5D8
  c->lr=0x800BD5E0u; f_800C23B4(c); // 800BD5DC
  c->r[4]=c->r[31]|c->r[31]; // 800BD5E0
  c->lr=0x800BD5E8u; f_800BFD10(c); // 800BD5E4
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD5E8
  c->f[1]=c->f[31]; // 800BD5EC
  c->r[4]=0u+0x00000000u; // 800BD5F0
  c->lr=0x800BD5F8u; f_800BE04C(c); // 800BD5F4
L_800BD5F8:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BD5F8
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BD5FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD600
  c->lr=c->r[0]; // 800BD604
  c->r[1]=c->r[1]+0x00000020u; // 800BD608
  return; // 800BD60C
}

// fn_800BD610
void f_800BD610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD610
  c->r[0]=c->lr; // 800BD614
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD61C
  c->r[31]=c->r[3]|c->r[3]; // 800BD620
  c->r[3]=c->r[1]+0x00000008u; // 800BD624
  c->lr=0x800BD62Cu; f_8004B0A4(c); // 800BD628
  c->r[3]=c->r[31]|c->r[31]; // 800BD62C
  c->r[4]=c->r[1]+0x00000008u; // 800BD630
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD634
  c->r[12]=R32(c->r[12]+0x00000024u); // 800BD638
  c->ctr=c->r[12]; // 800BD63C
  if (true) { c->lr=0x800BD644u; dispatch(c,c->ctr); } // 800BD640
  c->r[3]=c->r[31]|c->r[31]; // 800BD644
  c->r[4]=c->r[1]+0x00000008u; // 800BD648
  c->lr=0x800BD650u; f_800BD4A8(c); // 800BD64C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD650
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD654
  c->lr=c->r[0]; // 800BD658
  c->r[1]=c->r[1]+0x00000020u; // 800BD65C
  return; // 800BD660
}

// fn_800BD664
void f_800BD664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD664
  c->r[0]=c->lr; // 800BD668
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD66C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD670
  c->r[31]=c->r[4]|c->r[4]; // 800BD674
  c->r[0]=R32(c->r[3]+0x000000B0u); // 800BD678
  cmps(c,0,(int32_t)c->r[0],0); // 800BD67C
  if (crb(c,2)) { goto L_800BD69C; } // 800BD680
  c->r[3]=c->r[0]|c->r[0]; // 800BD684
  c->lr=0x800BD68Cu; f_8007B51C(c); // 800BD688
  c->r[4]=c->r[3]|c->r[3]; // 800BD68C
  c->r[3]=c->r[31]|c->r[31]; // 800BD690
  c->lr=0x800BD698u; f_8004A65C(c); // 800BD694
  goto L_800BD6AC; // 800BD698
L_800BD69C:;
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD69C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800BD6A0
  c->ctr=c->r[12]; // 800BD6A4
  if (true) { c->lr=0x800BD6ACu; dispatch(c,c->ctr); } // 800BD6A8
L_800BD6AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD6AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD6B0
  c->lr=c->r[0]; // 800BD6B4
  c->r[1]=c->r[1]+0x00000010u; // 800BD6B8
  return; // 800BD6BC
}

// fn_800BD6C0
void f_800BD6C0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD6C0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BD6C4
  c->ctr=c->r[12]; // 800BD6C8
  if (true) { dispatch(c,c->ctr); return; } // 800BD6CC
}

// fn_800BD6D0
void f_800BD6D0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD6D0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800BD6D4
  c->ctr=c->r[12]; // 800BD6D8
  if (true) { dispatch(c,c->ctr); return; } // 800BD6DC
}

// fn_800BD6E0
void f_800BD6E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD6E0
  c->r[0]=c->lr; // 800BD6E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD6E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD6EC
  c->r[31]=R32(c->r[3]+0x00000078u); // 800BD6F0
  cmps(c,0,(int32_t)c->r[31],0); // 800BD6F4
  if (crb(c,2)) { goto L_800BD718; } // 800BD6F8
  c->lr=0x800BD700u; f_800A23BC(c); // 800BD6FC
  c->lr=0x800BD704u; f_800C23B4(c); // 800BD700
  c->r[4]=c->r[31]|c->r[31]; // 800BD704
  c->lr=0x800BD70Cu; f_800BFD10(c); // 800BD708
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD70C
  c->lr=0x800BD714u; f_800BE0A4(c); // 800BD710
  goto L_800BD71C; // 800BD714
L_800BD718:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD718
L_800BD71C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD71C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD720
  c->lr=c->r[0]; // 800BD724
  c->r[1]=c->r[1]+0x00000010u; // 800BD728
  return; // 800BD72C
}

// fn_800BD730
void f_800BD730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD730
  c->r[0]=c->lr; // 800BD734
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD738
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BD73C
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BD740
  c->f[31]=c->f[1]; // 800BD744
  c->r[31]=R32(c->r[3]+0x00000078u); // 800BD748
  cmps(c,0,(int32_t)c->r[31],0); // 800BD74C
  if (crb(c,2)) { goto L_800BD774; } // 800BD750
  c->lr=0x800BD758u; f_800A23BC(c); // 800BD754
  c->lr=0x800BD75Cu; f_800C23B4(c); // 800BD758
  c->r[4]=c->r[31]|c->r[31]; // 800BD75C
  c->lr=0x800BD764u; f_800BFD10(c); // 800BD760
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD764
  c->f[1]=c->f[31]; // 800BD768
  c->r[4]=0u+0x00000000u; // 800BD76C
  c->lr=0x800BD774u; f_800BE0AC(c); // 800BD770
L_800BD774:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BD774
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BD778
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD77C
  c->lr=c->r[0]; // 800BD780
  c->r[1]=c->r[1]+0x00000020u; // 800BD784
  return; // 800BD788
}

// fn_800BD78C
void f_800BD78C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD78C
  c->r[0]=c->lr; // 800BD790
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD794
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BD798
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BD79C
  c->f[31]=c->f[1]; // 800BD7A0
  c->r[31]=R32(c->r[3]+0x0000007Cu); // 800BD7A4
  cmps(c,0,(int32_t)c->r[31],0); // 800BD7A8
  if (crb(c,2)) { goto L_800BD7D0; } // 800BD7AC
  c->lr=0x800BD7B4u; f_800A23BC(c); // 800BD7B0
  c->lr=0x800BD7B8u; f_800C23B4(c); // 800BD7B4
  c->r[4]=c->r[31]|c->r[31]; // 800BD7B8
  c->lr=0x800BD7C0u; f_800BFD10(c); // 800BD7BC
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD7C0
  c->f[1]=c->f[31]; // 800BD7C4
  c->r[4]=0u+0x00000000u; // 800BD7C8
  c->lr=0x800BD7D0u; f_800BE0AC(c); // 800BD7CC
L_800BD7D0:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BD7D0
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BD7D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD7D8
  c->lr=c->r[0]; // 800BD7DC
  c->r[1]=c->r[1]+0x00000020u; // 800BD7E0
  return; // 800BD7E4
}

// fn_800BD7E8
void f_800BD7E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD7E8
  c->r[0]=c->lr; // 800BD7EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BD7F0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BD7F4
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BD7F8
  c->r[30]=c->r[3]|c->r[3]; // 800BD7FC
  c->r[3]=c->r[1]+0x00000038u; // 800BD800
  c->lr=0x800BD808u; f_8004B0A4(c); // 800BD804
  c->r[3]=c->r[1]+0x0000002Cu; // 800BD808
  c->lr=0x800BD810u; f_8004B0A4(c); // 800BD80C
  c->r[3]=c->r[1]+0x00000020u; // 800BD810
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD814
  c->f[2]=c->f[1]; // 800BD818
  c->f[3]=c->f[1]; // 800BD81C
  c->lr=0x800BD824u; f_8004E34C(c); // 800BD820
  c->r[3]=c->r[1]+0x00000014u; // 800BD824
  c->lr=0x800BD82Cu; f_8004B0A4(c); // 800BD828
  c->r[3]=c->r[1]+0x00000008u; // 800BD82C
  c->lr=0x800BD834u; f_8004B0A4(c); // 800BD830
  c->r[3]=c->r[30]|c->r[30]; // 800BD834
  c->r[4]=c->r[30]+0x00000054u; // 800BD838
  c->lr=0x800BD840u; f_800BD664(c); // 800BD83C
  c->r[3]=c->r[30]|c->r[30]; // 800BD840
  c->r[4]=c->r[30]+0x00000060u; // 800BD844
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD848
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BD84C
  c->ctr=c->r[12]; // 800BD850
  if (true) { c->lr=0x800BD858u; dispatch(c,c->ctr); } // 800BD854
  c->r[3]=c->r[30]|c->r[30]; // 800BD858
  c->r[4]=c->r[30]+0x0000006Cu; // 800BD85C
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BD860
  c->r[12]=R32(c->r[12]+0x00000024u); // 800BD864
  c->ctr=c->r[12]; // 800BD868
  if (true) { c->lr=0x800BD870u; dispatch(c,c->ctr); } // 800BD86C
  c->r[3]=c->r[1]+0x00000038u; // 800BD870
  c->r[4]=c->r[30]+0x00000054u; // 800BD874
  c->lr=0x800BD87Cu; f_8004A65C(c); // 800BD878
  c->r[3]=c->r[1]+0x0000002Cu; // 800BD87C
  c->r[4]=c->r[30]+0x00000060u; // 800BD880
  c->lr=0x800BD888u; f_8004A65C(c); // 800BD884
  c->r[3]=c->r[1]+0x00000020u; // 800BD888
  c->r[4]=c->r[30]+0x0000006Cu; // 800BD88C
  c->lr=0x800BD894u; f_8004A65C(c); // 800BD890
  c->r[0]=R32(c->r[30]+0x00000050u); // 800BD894
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800BD898
  cmps(c,0,(int32_t)c->r[0],0); // 800BD89C
  if (crb(c,2)) { goto L_800BD8D0; } // 800BD8A0
  c->r[31]=R32(c->r[30]+0x00000078u); // 800BD8A4
  cmps(c,0,(int32_t)c->r[31],0); // 800BD8A8
  if (crb(c,2)) { goto L_800BD8F8; } // 800BD8AC
  c->lr=0x800BD8B4u; f_800A23BC(c); // 800BD8B0
  c->lr=0x800BD8B8u; f_800C23B4(c); // 800BD8B4
  c->r[4]=c->r[31]|c->r[31]; // 800BD8B8
  c->lr=0x800BD8C0u; f_800BFD10(c); // 800BD8BC
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD8C0
  c->r[4]=0u+0x00000001u; // 800BD8C4
  c->lr=0x800BD8CCu; f_800BE0C8(c); // 800BD8C8
  goto L_800BD8F8; // 800BD8CC
L_800BD8D0:;
  c->r[31]=R32(c->r[30]+0x00000078u); // 800BD8D0
  cmps(c,0,(int32_t)c->r[31],0); // 800BD8D4
  if (crb(c,2)) { goto L_800BD8F8; } // 800BD8D8
  c->lr=0x800BD8E0u; f_800A23BC(c); // 800BD8DC
  c->lr=0x800BD8E4u; f_800C23B4(c); // 800BD8E0
  c->r[4]=c->r[31]|c->r[31]; // 800BD8E4
  c->lr=0x800BD8ECu; f_800BFD10(c); // 800BD8E8
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD8EC
  c->r[4]=0u+0xFFFFFFFFu; // 800BD8F0
  c->lr=0x800BD8F8u; f_800BE0C8(c); // 800BD8F4
L_800BD8F8:;
  c->r[31]=R32(c->r[30]+0x00000078u); // 800BD8F8
  cmps(c,0,(int32_t)c->r[31],0); // 800BD8FC
  if (crb(c,2)) { goto L_800BD924; } // 800BD900
  c->lr=0x800BD908u; f_800A23BC(c); // 800BD904
  c->lr=0x800BD90Cu; f_800C23B4(c); // 800BD908
  c->r[4]=c->r[31]|c->r[31]; // 800BD90C
  c->lr=0x800BD914u; f_800BFD10(c); // 800BD910
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD914
  c->r[4]=c->r[1]+0x00000038u; // 800BD918
  c->r[5]=0u+0x00000003u; // 800BD91C
  c->lr=0x800BD924u; f_800BC7CC(c); // 800BD920
L_800BD924:;
  c->r[31]=R32(c->r[30]+0x0000007Cu); // 800BD924
  cmps(c,0,(int32_t)c->r[31],0); // 800BD928
  if (crb(c,2)) { goto L_800BD950; } // 800BD92C
  c->lr=0x800BD934u; f_800A23BC(c); // 800BD930
  c->lr=0x800BD938u; f_800C23B4(c); // 800BD934
  c->r[4]=c->r[31]|c->r[31]; // 800BD938
  c->lr=0x800BD940u; f_800BFD10(c); // 800BD93C
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD940
  c->r[4]=c->r[1]+0x0000002Cu; // 800BD944
  c->r[5]=0u+0x00000003u; // 800BD948
  c->lr=0x800BD950u; f_800BC7CC(c); // 800BD94C
L_800BD950:;
  c->r[31]=R32(c->r[30]+0x00000080u); // 800BD950
  cmps(c,0,(int32_t)c->r[31],0); // 800BD954
  if (crb(c,2)) { goto L_800BD97C; } // 800BD958
  c->lr=0x800BD960u; f_800A23BC(c); // 800BD95C
  c->lr=0x800BD964u; f_800C23B4(c); // 800BD960
  c->r[4]=c->r[31]|c->r[31]; // 800BD964
  c->lr=0x800BD96Cu; f_800BFD10(c); // 800BD968
  c->r[3]=c->r[3]+0x0000004Cu; // 800BD96C
  c->r[4]=c->r[1]+0x00000020u; // 800BD970
  c->r[5]=0u+0x00000003u; // 800BD974
  c->lr=0x800BD97Cu; f_800BC7CC(c); // 800BD978
L_800BD97C:;
  c->r[3]=c->r[30]+0x000000BCu; // 800BD97C
  c->r[4]=c->r[1]+0x00000038u; // 800BD980
  c->lr=0x800BD988u; f_8004A65C(c); // 800BD984
  c->r[3]=c->r[30]+0x000000C8u; // 800BD988
  c->r[4]=c->r[1]+0x00000038u; // 800BD98C
  c->r[5]=c->r[30]+0x00000054u; // 800BD990
  c->lr=0x800BD998u; f_8006000C(c); // 800BD994
  c->r[0]=R32(c->r[30]+0x000000B0u); // 800BD998
  cmps(c,0,(int32_t)c->r[0],0); // 800BD99C
  if (crb(c,2)) { goto L_800BDA28; } // 800BD9A0
  c->r[3]=c->r[1]+0x00000008u; // 800BD9A4
  c->r[4]=c->r[1]+0x00000038u; // 800BD9A8
  c->r[5]=c->r[30]+0x00000054u; // 800BD9AC
  c->lr=0x800BD9B4u; f_8006000C(c); // 800BD9B0
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BD9B4
  c->lr=0x800BD9BCu; f_80180FA4(c); // 800BD9B8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800BD9BC
  cmps(c,0,(int32_t)c->r[0],0); // 800BD9C0
  if (!crb(c,2)) { goto L_800BDA00; } // 800BD9C4
  c->r[0]=R32(c->r[30]+0x00000050u); // 800BD9C8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800BD9CC
  cmps(c,0,(int32_t)c->r[0],0); // 800BD9D0
  if (crb(c,2)) { goto L_800BD9E4; } // 800BD9D4
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD9D8
  c->f[0]=-c->f[0]; // 800BD9DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BD9E0
L_800BD9E4:;
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BD9E4
  c->r[4]=c->r[1]+0x00000008u; // 800BD9E8
  c->lr=0x800BD9F0u; f_80180F74(c); // 800BD9EC
  c->r[3]=c->r[1]+0x00000038u; // 800BD9F0
  c->r[4]=c->r[30]+0x00000054u; // 800BD9F4
  c->lr=0x800BD9FCu; f_8004A65C(c); // 800BD9F8
  goto L_800BDA28; // 800BD9FC
L_800BDA00:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDA00
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800BDA04
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BDA08
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800BDA0C
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BDA10
  c->r[4]=c->r[1]+0x00000008u; // 800BDA14
  c->lr=0x800BDA1Cu; f_80180F74(c); // 800BDA18
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BDA1C
  c->r[4]=c->r[1]+0x00000038u; // 800BDA20
  c->lr=0x800BDA28u; f_80183CB4(c); // 800BDA24
L_800BDA28:;
  c->r[3]=c->r[30]|c->r[30]; // 800BDA28
  c->r[4]=c->r[1]+0x00000038u; // 800BDA2C
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BDA30
  c->r[12]=R32(c->r[12]+0x00000028u); // 800BDA34
  c->ctr=c->r[12]; // 800BDA38
  if (true) { c->lr=0x800BDA40u; dispatch(c,c->ctr); } // 800BDA3C
  c->r[3]=c->r[30]|c->r[30]; // 800BDA40
  c->r[4]=c->r[1]+0x0000002Cu; // 800BDA44
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BDA48
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800BDA4C
  c->ctr=c->r[12]; // 800BDA50
  if (true) { c->lr=0x800BDA58u; dispatch(c,c->ctr); } // 800BDA54
  c->r[3]=c->r[30]|c->r[30]; // 800BDA58
  c->r[4]=c->r[1]+0x00000020u; // 800BDA5C
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BDA60
  c->r[12]=R32(c->r[12]+0x00000030u); // 800BDA64
  c->ctr=c->r[12]; // 800BDA68
  if (true) { c->lr=0x800BDA70u; dispatch(c,c->ctr); } // 800BDA6C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BDA70
  c->r[30]=R32(c->r[1]+0x00000048u); // 800BDA74
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BDA78
  c->lr=c->r[0]; // 800BDA7C
  c->r[1]=c->r[1]+0x00000050u; // 800BDA80
  return; // 800BDA84
}

// fn_800BDA88
void f_800BDA88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDA88
  c->r[0]=c->lr; // 800BDA8C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BDA90
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BDA94
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BDA98
  W32(c->r[1]+0x00000034u,c->r[29]); // 800BDA9C
  c->r[29]=c->r[3]|c->r[3]; // 800BDAA0
  c->r[3]=c->r[1]+0x00000020u; // 800BDAA4
  c->lr=0x800BDAACu; f_8004B0A4(c); // 800BDAA8
  c->r[3]=c->r[1]+0x00000014u; // 800BDAAC
  c->lr=0x800BDAB4u; f_8004B0A4(c); // 800BDAB0
  c->r[3]=c->r[1]+0x00000008u; // 800BDAB4
  c->lr=0x800BDABCu; f_8004B0A4(c); // 800BDAB8
  c->r[3]=c->r[29]|c->r[29]; // 800BDABC
  c->r[4]=c->r[1]+0x00000020u; // 800BDAC0
  c->lr=0x800BDAC8u; f_800BD664(c); // 800BDAC4
  c->r[3]=c->r[29]|c->r[29]; // 800BDAC8
  c->r[4]=c->r[1]+0x00000014u; // 800BDACC
  c->lr=0x800BDAD4u; f_800BD6C0(c); // 800BDAD0
  c->r[3]=c->r[29]|c->r[29]; // 800BDAD4
  c->r[4]=c->r[1]+0x00000008u; // 800BDAD8
  c->lr=0x800BDAE0u; f_800BD6D0(c); // 800BDADC
  c->r[30]=0u+0x00000000u; // 800BDAE0
  c->r[31]=c->r[29]|c->r[29]; // 800BDAE4
L_800BDAE8:;
  c->r[0]=R32(c->r[31]+0x00000078u); // 800BDAE8
  W32(c->r[31]+0x00000084u,c->r[0]); // 800BDAEC
  c->lr=0x800BDAF4u; f_800A23BC(c); // 800BDAF0
  c->lr=0x800BDAF8u; f_800C23B4(c); // 800BDAF4
  c->r[4]=0u+0x00000003u; // 800BDAF8
  c->r[5]=0u+0x00000000u; // 800BDAFC
  c->lr=0x800BDB04u; f_800CFD40(c); // 800BDB00
  W32(c->r[31]+0x00000078u,c->r[3]); // 800BDB04
  c->lr=0x800BDB0Cu; f_800A23BC(c); // 800BDB08
  c->lr=0x800BDB10u; f_800C23B4(c); // 800BDB0C
  c->r[4]=R32(c->r[31]+0x00000078u); // 800BDB10
  c->lr=0x800BDB18u; f_800BFD10(c); // 800BDB14
  c->lr=0x800BDB1Cu; f_800BDFF4(c); // 800BDB18
  c->r[31]=c->r[31]+0x00000004u; // 800BDB1C
  c->r[30]=c->r[30]+0x00000001u; // 800BDB20
  cmpu(c,0,c->r[30],0x00000003u); // 800BDB24
  if (crb(c,0)) { IRQCHK(c); goto L_800BDAE8; } // 800BDB28
  c->r[3]=c->r[29]|c->r[29]; // 800BDB2C
  c->r[4]=c->r[1]+0x00000020u; // 800BDB30
  c->lr=0x800BDB38u; f_800BCDE8(c); // 800BDB34
  c->r[3]=c->r[29]|c->r[29]; // 800BDB38
  c->r[4]=c->r[1]+0x00000014u; // 800BDB3C
  c->lr=0x800BDB44u; f_800BD0E8(c); // 800BDB40
  c->r[3]=c->r[29]|c->r[29]; // 800BDB44
  c->r[4]=c->r[1]+0x00000008u; // 800BDB48
  c->lr=0x800BDB50u; f_800BD4A8(c); // 800BDB4C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BDB50
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BDB54
  c->r[29]=R32(c->r[1]+0x00000034u); // 800BDB58
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BDB5C
  c->lr=c->r[0]; // 800BDB60
  c->r[1]=c->r[1]+0x00000040u; // 800BDB64
  return; // 800BDB68
}

// fn_800BDB6C
void f_800BDB6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDB6C
  c->r[0]=c->lr; // 800BDB70
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BDB74
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800BDB78
  W32(c->r[1]+0x00000038u,c->r[30]); // 800BDB7C
  W32(c->r[1]+0x00000034u,c->r[29]); // 800BDB80
  c->r[29]=c->r[3]|c->r[3]; // 800BDB84
  c->r[3]=c->r[1]+0x00000020u; // 800BDB88
  c->lr=0x800BDB90u; f_8004B0A4(c); // 800BDB8C
  c->r[3]=c->r[1]+0x00000014u; // 800BDB90
  c->lr=0x800BDB98u; f_8004B0A4(c); // 800BDB94
  c->r[3]=c->r[1]+0x00000008u; // 800BDB98
  c->lr=0x800BDBA0u; f_8004B0A4(c); // 800BDB9C
  c->r[30]=0u+0x00000000u; // 800BDBA0
  c->r[31]=0u+0x00000000u; // 800BDBA4
L_800BDBA8:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 800BDBA8
  cmps(c,0,(int32_t)c->r[0],0); // 800BDBAC
  if (crb(c,2)) { goto L_800BDBE4; } // 800BDBB0
  c->lr=0x800BDBB8u; f_800A23BC(c); // 800BDBB4
  c->lr=0x800BDBBCu; f_800C23B4(c); // 800BDBB8
  c->r[4]=R32(c->r[29]+0x00000078u); // 800BDBBC
  c->lr=0x800BDBC4u; f_800BFD10(c); // 800BDBC0
  c->lr=0x800BDBC8u; f_800BE010(c); // 800BDBC4
  c->lr=0x800BDBCCu; f_800A23BC(c); // 800BDBC8
  c->lr=0x800BDBD0u; f_800C23B4(c); // 800BDBCC
  c->r[4]=R32(c->r[29]+0x00000078u); // 800BDBD0
  c->lr=0x800BDBD8u; f_800CFDE0(c); // 800BDBD4
  c->r[0]=R32(c->r[29]+0x00000084u); // 800BDBD8
  W32(c->r[29]+0x00000078u,c->r[0]); // 800BDBDC
  W32(c->r[29]+0x00000084u,c->r[31]); // 800BDBE0
L_800BDBE4:;
  c->r[29]=c->r[29]+0x00000004u; // 800BDBE4
  c->r[30]=c->r[30]+0x00000001u; // 800BDBE8
  cmpu(c,0,c->r[30],0x00000003u); // 800BDBEC
  if (crb(c,0)) { IRQCHK(c); goto L_800BDBA8; } // 800BDBF0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800BDBF4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800BDBF8
  c->r[29]=R32(c->r[1]+0x00000034u); // 800BDBFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BDC00
  c->lr=c->r[0]; // 800BDC04
  c->r[1]=c->r[1]+0x00000040u; // 800BDC08
  return; // 800BDC0C
}

// fn_800BDC10
void f_800BDC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDC10
  c->r[0]=c->lr; // 800BDC14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BDC18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BDC1C
  c->r[31]=c->r[3]|c->r[3]; // 800BDC20
  c->r[3]=c->r[1]+0x00000014u; // 800BDC24
  c->lr=0x800BDC2Cu; f_8004B0A4(c); // 800BDC28
  c->r[3]=c->r[1]+0x00000008u; // 800BDC2C
  c->lr=0x800BDC34u; f_8004B0A4(c); // 800BDC30
  c->r[31]=R32(c->r[31]+0x00000078u); // 800BDC34
  cmps(c,0,(int32_t)c->r[31],0); // 800BDC38
  if (!crb(c,2)) { goto L_800BDC48; } // 800BDC3C
  c->r[3]=0u+0x00000001u; // 800BDC40
  goto L_800BDC6C; // 800BDC44
L_800BDC48:;
  c->lr=0x800BDC4Cu; f_800A23BC(c); // 800BDC48
  c->lr=0x800BDC50u; f_800C23B4(c); // 800BDC4C
  c->r[4]=c->r[31]|c->r[31]; // 800BDC50
  c->lr=0x800BDC58u; f_800BFD10(c); // 800BDC54
  c->r[3]=c->r[3]+0x0000004Cu; // 800BDC58
  c->lr=0x800BDC60u; f_800BE0D0(c); // 800BDC5C
  c->r[0]=0u-c->r[3]; // 800BDC60
  c->r[0]=c->r[0]|c->r[3]; // 800BDC64
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BDC68
L_800BDC6C:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BDC6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BDC70
  c->lr=c->r[0]; // 800BDC74
  c->r[1]=c->r[1]+0x00000030u; // 800BDC78
  return; // 800BDC7C
}

// fn_800BDC80
void f_800BDC80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDC80
  c->r[0]=c->lr; // 800BDC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDC8C
  c->r[31]=R32(c->r[3]+0x0000007Cu); // 800BDC90
  cmps(c,0,(int32_t)c->r[31],0); // 800BDC94
  if (crb(c,2)) { goto L_800BDCB8; } // 800BDC98
  c->lr=0x800BDCA0u; f_800A23BC(c); // 800BDC9C
  c->lr=0x800BDCA4u; f_800C23B4(c); // 800BDCA0
  c->r[4]=c->r[31]|c->r[31]; // 800BDCA4
  c->lr=0x800BDCACu; f_800BFD10(c); // 800BDCA8
  c->r[3]=c->r[3]+0x0000004Cu; // 800BDCAC
  c->lr=0x800BDCB4u; f_800BE0D0(c); // 800BDCB0
  goto L_800BDCBC; // 800BDCB4
L_800BDCB8:;
  c->r[3]=0u+0x00000001u; // 800BDCB8
L_800BDCBC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDCBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDCC0
  c->lr=c->r[0]; // 800BDCC4
  c->r[1]=c->r[1]+0x00000010u; // 800BDCC8
  return; // 800BDCCC
}

// fn_800BDCD0
void f_800BDCD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDCD0
  c->r[0]=c->lr; // 800BDCD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDCD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDCDC
  c->r[31]=c->r[3]|c->r[3]; // 800BDCE0
  c->r[4]=0u+0x80460000u; // 800BDCE4
  c->r[0]=c->r[4]+0x00001168u; // 800BDCE8
  W32(c->r[3]+0x00000048u,c->r[0]); // 800BDCEC
  c->r[0]=0u+0x00000000u; // 800BDCF0
  W32(c->r[3]+0x00000040u,c->r[0]); // 800BDCF4
  W32(c->r[3]+0x00000044u,c->r[0]); // 800BDCF8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800BDCFC
  W32(c->r[3]+0x00000034u,c->r[0]); // 800BDD00
  W32(c->r[3]+0x00000038u,c->r[0]); // 800BDD04
  c->lr=0x800BDD0Cu; f_800BDD88(c); // 800BDD08
  c->r[3]=c->r[31]|c->r[31]; // 800BDD0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDD10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDD14
  c->lr=c->r[0]; // 800BDD18
  c->r[1]=c->r[1]+0x00000010u; // 800BDD1C
  return; // 800BDD20
}

// dtor_800BDD24
void f_800BDD24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDD24
  c->r[0]=c->lr; // 800BDD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDD30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BDD34
  c->r[30]=c->r[3]|c->r[3]; // 800BDD38
  c->r[31]=c->r[4]|c->r[4]; // 800BDD3C
  cmps(c,0,(int32_t)c->r[3],0); // 800BDD40
  if (crb(c,2)) { goto L_800BDD6C; } // 800BDD44
  c->r[4]=0u+0x80460000u; // 800BDD48
  c->r[0]=c->r[4]+0x00001168u; // 800BDD4C
  W32(c->r[3]+0x00000048u,c->r[0]); // 800BDD50
  c->lr=0x800BDD58u; f_800BDDF4(c); // 800BDD54
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BDD58
  cmps(c,0,(int32_t)c->r[0],0); // 800BDD5C
  if (!crb(c,1)) { goto L_800BDD6C; } // 800BDD60
  c->r[3]=c->r[30]|c->r[30]; // 800BDD64
  c->lr=0x800BDD6Cu; f_80047B20(c); // 800BDD68
L_800BDD6C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BDD6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDD70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BDD74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDD78
  c->lr=c->r[0]; // 800BDD7C
  c->r[1]=c->r[1]+0x00000010u; // 800BDD80
  return; // 800BDD84
}

// fn_800BDD88
void f_800BDD88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDD88
  c->r[0]=c->lr; // 800BDD8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDD90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDD94
  c->r[31]=c->r[3]|c->r[3]; // 800BDD98
  c->r[0]=0u+0x00000000u; // 800BDD9C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BDDA0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BDDA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BDDA8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800BDDAC
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800BDDB0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800BDDB4
  W32(c->r[3]+0x00000038u,c->r[0]); // 800BDDB8
  c->r[3]=c->r[3]+0x0000000Cu; // 800BDDBC
  c->r[4]=0u+0x00000000u; // 800BDDC0
  c->r[5]=0u+0x00000020u; // 800BDDC4
  c->lr=0x800BDDCCu; f_800060B8(c); // 800BDDC8
  c->r[3]=c->r[31]|c->r[31]; // 800BDDCC
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BDDD0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BDDD4
  c->ctr=c->r[12]; // 800BDDD8
  if (true) { c->lr=0x800BDDE0u; dispatch(c,c->ctr); } // 800BDDDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDDE4
  c->lr=c->r[0]; // 800BDDE8
  c->r[1]=c->r[1]+0x00000010u; // 800BDDEC
  return; // 800BDDF0
}

// fn_800BDDF4
void f_800BDDF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDDF4
  c->r[0]=c->lr; // 800BDDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDDFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDE00
  c->r[31]=c->r[3]|c->r[3]; // 800BDE04
  c->lr=0x800BDE0Cu; f_800BDE50(c); // 800BDE08
  cmps(c,0,(int32_t)c->r[3],0); // 800BDE0C
  if (crb(c,2)) { goto L_800BDE3C; } // 800BDE10
  c->r[3]=c->r[31]|c->r[31]; // 800BDE14
  c->r[12]=R32(c->r[3]+0x00000048u); // 800BDE18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800BDE1C
  c->ctr=c->r[12]; // 800BDE20
  if (true) { c->lr=0x800BDE28u; dispatch(c,c->ctr); } // 800BDE24
  c->r[0]=R32(c->r[31]+0x00000000u); // 800BDE28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800BDE2C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800BDE30
  c->r[3]=c->r[31]|c->r[31]; // 800BDE34
  c->lr=0x800BDE3Cu; f_800BDD88(c); // 800BDE38
L_800BDE3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDE3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDE40
  c->lr=c->r[0]; // 800BDE44
  c->r[1]=c->r[1]+0x00000010u; // 800BDE48
  return; // 800BDE4C
}

// fn_800BDE50
void f_800BDE50(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BDE50
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800BDE54
  c->r[0]=0u-c->r[3]; // 800BDE58
  c->r[0]=c->r[0]|c->r[3]; // 800BDE5C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BDE60
  return; // 800BDE64
}

// fn_800BDE68
void f_800BDE68(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 800BDE68
  return; // 800BDE6C
}

// fn_800BDE70
void f_800BDE70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDE70
  c->r[0]=c->lr; // 800BDE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDE7C
  c->r[31]=c->r[3]|c->r[3]; // 800BDE80
  c->r[3]=c->r[3]+0x0000000Cu; // 800BDE84
  c->r[5]=0u+0x0000001Fu; // 800BDE88
  c->lr=0x800BDE90u; f_802E9608(c); // 800BDE8C
  c->r[0]=0u+0x00000000u; // 800BDE90
  W8(c->r[31]+0x0000002Bu,c->r[0]); // 800BDE94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDE98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDE9C
  c->lr=c->r[0]; // 800BDEA0
  c->r[1]=c->r[1]+0x00000010u; // 800BDEA4
  return; // 800BDEA8
}

// fn_800BDEAC
void f_800BDEAC(Ctx* __restrict c) {
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800BDEAC
  return; // 800BDEB0
}

// fn_800BDEB4
void f_800BDEB4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000000Cu; // 800BDEB4
  return; // 800BDEB8
}

// fn_800BDEBC
void f_800BDEBC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 800BDEBC
  return; // 800BDEC0
}

// fn_800BDEC4
void f_800BDEC4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BDEC4
  return; // 800BDEC8
}

// fn_800BDECC
void f_800BDECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDECC
  c->r[0]=c->lr; // 800BDED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BDED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BDED8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BDEDC
  c->r[30]=c->r[3]|c->r[3]; // 800BDEE0
  c->r[31]=c->r[4]|c->r[4]; // 800BDEE4
  c->lr=0x800BDEECu; f_800BDE50(c); // 800BDEE8
  cmps(c,0,(int32_t)c->r[3],0); // 800BDEEC
  if (!crb(c,2)) { goto L_800BDF44; } // 800BDEF0
  c->r[3]=c->r[30]|c->r[30]; // 800BDEF4
  c->lr=0x800BDEFCu; f_800BDD88(c); // 800BDEF8
  W32(c->r[30]+0x00000008u,c->r[31]); // 800BDEFC
  c->lr=0x800BDF04u; f_800A23BC(c); // 800BDF00
  c->lr=0x800BDF08u; f_800C23E4(c); // 800BDF04
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800BDF08
  c->r[3]=R32(c->r[30]+0x00000034u); // 800BDF0C
  c->r[5]=c->r[3]+0x00000001u; // 800BDF10
  c->r[3]=0u+0x80010000u; // 800BDF14
  c->r[0]=c->r[3]+0xFFFF8001u; // 800BDF18
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 800BDF1C
  c->r[4]=rotl(c->r[4],17)&0x0001FFFFu; // 800BDF20
  c->r[3]=0u+0x00010000u; // 800BDF24
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BDF28
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800BDF2C
  c->r[0]=c->r[5]-c->r[0]; // 800BDF30
  W32(c->r[30]+0x00000034u,c->r[0]); // 800BDF34
  c->r[0]=R32(c->r[30]+0x00000000u); // 800BDF38
  c->r[0]=c->r[0]|0x00000001u; // 800BDF3C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800BDF40
L_800BDF44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BDF44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BDF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BDF4C
  c->lr=c->r[0]; // 800BDF50
  c->r[1]=c->r[1]+0x00000010u; // 800BDF54
  return; // 800BDF58
}

// fn_800BDF5C
void f_800BDF5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDF5C
  c->r[0]=c->lr; // 800BDF60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BDF64
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800BDF68
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800BDF6C
  c->f[31]=c->f[1]; // 800BDF70
  c->r[0]=0u+0x00000000u; // 800BDF74
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDF78
  fcmp(c,0,c->f[1],c->f[0]); // 800BDF7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BDF80
  if (!crb(c,2)) { goto L_800BDF9C; } // 800BDF84
  {uint32_t ea=c->r[2]+0xFFFF8858u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDF88
  fcmp(c,0,c->f[1],c->f[0]); // 800BDF8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BDF90
  if (!crb(c,2)) { goto L_800BDF9C; } // 800BDF94
  c->r[0]=0u+0x00000001u; // 800BDF98
L_800BDF9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BDF9C
  if (!crb(c,2)) { goto L_800BDFC0; } // 800BDFA0
  c->r[3]=0u+0x80460000u; // 800BDFA4
  c->r[3]=c->r[3]+0x00001418u; // 800BDFA8
  c->r[4]=0u+0x000000FEu; // 800BDFAC
  c->r[5]=0u+0x80460000u; // 800BDFB0
  c->r[5]=c->r[5]+0x000013F0u; // 800BDFB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BDFB8
  c->lr=0x800BDFC0u; f_802928FC(c); // 800BDFBC
L_800BDFC0:;
  c->f[1]=c->f[31]; // 800BDFC0
  c->lr=0x800BDFC8u; f_800D3104(c); // 800BDFC4
  {uint32_t ea=c->r[2]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDFC8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BDFCC
  c->r[0]=0u+0x00000018u; // 800BDFD0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800BDFD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800BDFD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BDFDC
  c->lr=c->r[0]; // 800BDFE0
  c->r[1]=c->r[1]+0x00000020u; // 800BDFE4
  return; // 800BDFE8
}

// fn_800BDFEC
void f_800BDFEC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 800BDFEC
  return; // 800BDFF0
}

// fn_800BDFF4
void f_800BDFF4(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000030u); // 800BDFF4
  c->r[0]=c->r[4]+0x00000001u; // 800BDFF8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800BDFFC
  return; // 800BE000
}

// fn_800BE004
void f_800BE004(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0xF0000000u; // 800BE004
  c->r[3]=rotl(c->r[0],4)&0x0000000Fu; // 800BE008
  return; // 800BE00C
}

// fn_800BE010
void f_800BE010(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000030u); // 800BE010
  cmps(c,0,(int32_t)c->r[4],0); // 800BE014
  if (crb(c,2)) return; // 800BE018
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BE01C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800BE020
  return; // 800BE024
}

// fn_800BE028
void f_800BE028(Ctx* __restrict c) {
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 800BE028
  return; // 800BE02C
}

// fn_800BE030
void f_800BE030(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BE030
  W32(c->r[3]+0x00000050u,c->r[0]); // 800BE034
  c->r[0]=0u+0xFFFFFFFFu; // 800BE038
  W32(c->r[3]+0x00000058u,c->r[0]); // 800BE03C
  return; // 800BE040
}

// fn_800BE044
void f_800BE044(Ctx* __restrict c) {
  return; // 800BE044
}

// fn_800BE048
void f_800BE048(Ctx* __restrict c) {
  return; // 800BE048
}

// fn_800BE04C
void f_800BE04C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE04C
  c->r[0]=c->lr; // 800BE050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE058
  c->r[31]=c->r[3]|c->r[3]; // 800BE05C
  c->lr=0x800BE064u; f_800BC158(c); // 800BE060
  c->r[0]=R32(c->r[31]+0x00000050u); // 800BE064
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800BE068
  W32(c->r[31]+0x00000050u,c->r[0]); // 800BE06C
  c->r[0]=c->r[0]|0x00000005u; // 800BE070
  W32(c->r[31]+0x00000050u,c->r[0]); // 800BE074
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE078
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE07C
  c->lr=c->r[0]; // 800BE080
  c->r[1]=c->r[1]+0x00000010u; // 800BE084
  return; // 800BE088
}

// fn_800BE08C
void f_800BE08C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000048u,c->r[4]); // 800BE08C
  return; // 800BE090
}

// fn_800BE094
void f_800BE094(Ctx* __restrict c) {
  return; // 800BE094
}

// fn_800BE098
void f_800BE098(Ctx* __restrict c) {
  return; // 800BE098
}

// fn_800BE09C
void f_800BE09C(Ctx* __restrict c) {
  return; // 800BE09C
}

// fn_800BE0A0
void f_800BE0A0(Ctx* __restrict c) {
  return; // 800BE0A0
}

// fn_800BE0A4
void f_800BE0A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE0A4
  return; // 800BE0A8
}

// fn_800BE0AC
void f_800BE0AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 800BE0AC
  c->r[0]=R32(c->r[3]+0x00000050u); // 800BE0B0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800BE0B4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800BE0B8
  c->r[0]=c->r[0]|0x00000006u; // 800BE0BC
  W32(c->r[3]+0x00000050u,c->r[0]); // 800BE0C0
  return; // 800BE0C4
}

// fn_800BE0C8
void f_800BE0C8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000058u,c->r[4]); // 800BE0C8
  return; // 800BE0CC
}

// fn_800BE0D0
void f_800BE0D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800BE0D0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 800BE0D4
  c->r[0]=cntlz(c->r[0]); // 800BE0D8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE0DC
  return; // 800BE0E0
}

// fn_800BE0E4
void f_800BE0E4(Ctx* __restrict c) {
  return; // 800BE0E4
}

// fn_800BE0E8
void f_800BE0E8(Ctx* __restrict c) {
  return; // 800BE0E8
}

// fn_800BE0EC
void f_800BE0EC(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000038u); // 800BE0EC
  c->r[0]=c->r[4]+0x00000001u; // 800BE0F0
  W32(c->r[3]+0x00000038u,c->r[0]); // 800BE0F4
  return; // 800BE0F8
}

// fn_800BE0FC
void f_800BE0FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000038u); // 800BE0FC
  return; // 800BE100
}

// fn_800BE104
void f_800BE104(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000038u); // 800BE104
  cmps(c,0,(int32_t)c->r[4],0); // 800BE108
  if (crb(c,2)) return; // 800BE10C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BE110
  W32(c->r[3]+0x00000038u,c->r[0]); // 800BE114
  return; // 800BE118
}

// fn_800BE11C
void f_800BE11C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800BE11C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800BE120
  c->r[0]=cntlz(c->r[0]); // 800BE124
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE128
  return; // 800BE12C
}

// fn_800BE130
void f_800BE130(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800BE130
  return; // 800BE134
}

// fn_800BE138
void f_800BE138(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800BE138
  return; // 800BE13C
}

// fn_800BE140
void f_800BE140(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 800BE140
  return; // 800BE144
}

// fn_800BE148
void f_800BE148(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800BE148
  c->r[3]=c->r[0]&c->r[4]; // 800BE14C
  c->r[0]=0u-c->r[3]; // 800BE150
  c->r[0]=c->r[0]|c->r[3]; // 800BE154
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BE158
  return; // 800BE15C
}

// fn_800BE160
void f_800BE160(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE160
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE164
  fcmp(c,0,c->f[1],c->f[0]); // 800BE168
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BE16C
  if (!crb(c,2)) { goto L_800BE17C; } // 800BE170
  c->r[3]=0u+0x00000000u; // 800BE174
  return; // 800BE178
L_800BE17C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE17C
  fcmp(c,0,c->f[0],c->f[1]); // 800BE180
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BE184
  c->r[0]=c->cr; // 800BE188
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800BE18C
  c->r[0]=cntlz(c->r[0]); // 800BE190
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE194
  return; // 800BE198
}

// fn_800BE19C
void f_800BE19C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE19C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800BE1A0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800BE1A4
  return; // 800BE1A8
}

// fn_800BE1AC
void f_800BE1AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE1AC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800BE1B0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800BE1B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE1B8
  fcmp(c,0,c->f[1],c->f[0]); // 800BE1BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BE1C0
  if (!crb(c,2)) return; // 800BE1C4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800BE1C8
  return; // 800BE1CC
}

// fn_800BE1D0
void f_800BE1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 800BE1D0
  return; // 800BE1D4
}

// dtor_800BE1D8
void f_800BE1D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE1D8
  c->r[0]=c->lr; // 800BE1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE1E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE1E4
  c->r[31]=c->r[3]|c->r[3]; // 800BE1E8
  cmps(c,0,(int32_t)c->r[3],0); // 800BE1EC
  if (crb(c,2)) { goto L_800BE204; } // 800BE1F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800BE1F4
  cmps(c,0,(int32_t)c->r[0],0); // 800BE1F8
  if (!crb(c,1)) { goto L_800BE204; } // 800BE1FC
  c->lr=0x800BE204u; f_80047B20(c); // 800BE200
L_800BE204:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE208
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE20C
  c->lr=c->r[0]; // 800BE210
  c->r[1]=c->r[1]+0x00000010u; // 800BE214
  return; // 800BE218
}

// fn_800BE21C
void f_800BE21C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE21C
  c->r[0]=c->lr; // 800BE220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE228
  c->r[31]=c->r[3]|c->r[3]; // 800BE22C
  c->r[4]=0u+0x80460000u; // 800BE230
  c->r[0]=c->r[4]+0x0000118Cu; // 800BE234
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BE238
  c->lr=0x800BE240u; f_800BE258(c); // 800BE23C
  c->r[3]=c->r[31]|c->r[31]; // 800BE240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE244
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE248
  c->lr=c->r[0]; // 800BE24C
  c->r[1]=c->r[1]+0x00000010u; // 800BE250
  return; // 800BE254
}

// fn_800BE258
void f_800BE258(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE258
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800BE25C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800BE260
  return; // 800BE264
}

// fn_800BE268
void f_800BE268(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE268
  c->r[0]=c->lr; // 800BE26C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE270
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BE274
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BE278
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BE27C
  c->r[29]=c->r[3]|c->r[3]; // 800BE280
  c->r[30]=c->r[3]+0x00000004u; // 800BE284
  c->r[31]=c->r[3]+0x00000034u; // 800BE288
L_800BE28C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BE28C
  c->lr=0x800BE294u; f_8004B0A4(c); // 800BE290
  c->r[30]=c->r[30]+0x0000000Cu; // 800BE294
  cmpu(c,0,c->r[30],c->r[31]); // 800BE298
  if (crb(c,0)) { IRQCHK(c); goto L_800BE28C; } // 800BE29C
  c->r[3]=c->r[29]|c->r[29]; // 800BE2A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BE2A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BE2A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BE2AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE2B0
  c->lr=c->r[0]; // 800BE2B4
  c->r[1]=c->r[1]+0x00000020u; // 800BE2B8
  return; // 800BE2BC
}

// fn_800BE2C0
void f_800BE2C0(Ctx* __restrict c) {
  c->r[4]=0u+0x80460000u; // 800BE2C0
  c->r[0]=c->r[4]+0x000011E8u; // 800BE2C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BE2C8
  return; // 800BE2CC
}

// fn_800BE2D0
void f_800BE2D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE2D0
  c->r[0]=c->lr; // 800BE2D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE2D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BE2DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BE2E0
  c->r[30]=c->r[3]|c->r[3]; // 800BE2E4
  c->r[31]=c->r[4]|c->r[4]; // 800BE2E8
  c->r[3]=c->r[1]+0x00000008u; // 800BE2EC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE2F0
  c->f[2]=c->f[1]; // 800BE2F4
  c->f[3]=c->f[1]; // 800BE2F8
  c->lr=0x800BE300u; f_8004E34C(c); // 800BE2FC
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BE300
  cmps(c,0,(int32_t)c->r[3],0); // 800BE304
  if (crb(c,2)) { goto L_800BE340; } // 800BE308
  cmps(c,0,(int32_t)c->r[31],0); // 800BE30C
  if (crb(c,2)) { goto L_800BE32C; } // 800BE310
  c->r[4]=0u+0x00000003u; // 800BE314
  c->lr=0x800BE31Cu; f_80180F94(c); // 800BE318
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BE31C
  c->r[4]=c->r[1]+0x00000008u; // 800BE320
  c->lr=0x800BE328u; f_80180F74(c); // 800BE324
  goto L_800BE340; // 800BE328
L_800BE32C:;
  c->r[4]=0u+0x00000003u; // 800BE32C
  c->lr=0x800BE334u; f_80180F84(c); // 800BE330
  c->r[3]=R32(c->r[30]+0x000000B0u); // 800BE334
  c->r[4]=c->r[1]+0x00000008u; // 800BE338
  c->lr=0x800BE340u; f_80180F74(c); // 800BE33C
L_800BE340:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BE340
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BE344
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE348
  c->lr=c->r[0]; // 800BE34C
  c->r[1]=c->r[1]+0x00000020u; // 800BE350
  return; // 800BE354
}

// fn_800BE358
void f_800BE358(Ctx* __restrict c) {
  W32(c->r[3]+0x000000A8u,c->r[4]); // 800BE358
  return; // 800BE35C
}

// fn_800BE360
void f_800BE360(Ctx* __restrict c) {
  W32(c->r[3]+0x000000ACu,c->r[4]); // 800BE360
  return; // 800BE364
}

// fn_800BE368
void f_800BE368(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800BE368
  return; // 800BE36C
}

// fn_800BE370
void f_800BE370(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800BE370
  if (crb(c,2)) { goto L_800BE388; } // 800BE374
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BE378
  c->r[0]=c->r[0]|0x00000002u; // 800BE37C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BE380
  return; // 800BE384
L_800BE388:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BE388
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800BE38C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BE390
  return; // 800BE394
}

// fn_800BE398
void f_800BE398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE398
  c->r[0]=c->lr; // 800BE39C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE3A0
  c->r[3]=R32(c->r[3]+0x000000B0u); // 800BE3A4
  cmps(c,0,(int32_t)c->r[3],0); // 800BE3A8
  if (!crb(c,2)) { goto L_800BE3B8; } // 800BE3AC
  c->r[3]=0u+0x00000000u; // 800BE3B0
  goto L_800BE3C8; // 800BE3B4
L_800BE3B8:;
  c->lr=0x800BE3BCu; f_80180FA4(c); // 800BE3B8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800BE3BC
  c->r[0]=cntlz(c->r[0]); // 800BE3C0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BE3C4
L_800BE3C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE3C8
  c->lr=c->r[0]; // 800BE3CC
  c->r[1]=c->r[1]+0x00000010u; // 800BE3D0
  return; // 800BE3D4
}

// fn_800BE3D8
void f_800BE3D8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BE3D8
  W32(c->r[3]+0x00000038u,c->r[0]); // 800BE3DC
  return; // 800BE3E0
}

// fn_800BE3E4
void f_800BE3E4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BE3E4
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 800BE3E8
  c->r[0]=0u-c->r[3]; // 800BE3EC
  c->r[0]=c->r[0]|c->r[3]; // 800BE3F0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BE3F4
  return; // 800BE3F8
}

// fn_800BE3FC
void f_800BE3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE3FC
  c->r[0]=c->lr; // 800BE400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE408
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BE40C
  c->r[30]=c->r[3]|c->r[3]; // 800BE410
  c->r[31]=c->r[4]|c->r[4]; // 800BE414
  cmps(c,0,(int32_t)c->r[3],0); // 800BE418
  if (crb(c,2)) { goto L_800BE43C; } // 800BE41C
  c->r[4]=0u+0x00000000u; // 800BE420
  c->lr=0x800BE428u; f_800BE458(c); // 800BE424
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BE428
  cmps(c,0,(int32_t)c->r[0],0); // 800BE42C
  if (!crb(c,1)) { goto L_800BE43C; } // 800BE430
  c->r[3]=c->r[30]|c->r[30]; // 800BE434
  c->lr=0x800BE43Cu; f_80047B20(c); // 800BE438
L_800BE43C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BE43C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE440
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BE444
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE448
  c->lr=c->r[0]; // 800BE44C
  c->r[1]=c->r[1]+0x00000010u; // 800BE450
  return; // 800BE454
}

// fn_800BE458
void f_800BE458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE458
  c->r[0]=c->lr; // 800BE45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE464
  c->r[31]=c->r[3]|c->r[3]; // 800BE468
  cmps(c,0,(int32_t)c->r[3],0); // 800BE46C
  if (crb(c,2)) { goto L_800BE484; } // 800BE470
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800BE474
  cmps(c,0,(int32_t)c->r[0],0); // 800BE478
  if (!crb(c,1)) { goto L_800BE484; } // 800BE47C
  c->lr=0x800BE484u; f_80047B20(c); // 800BE480
L_800BE484:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE488
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE48C
  c->lr=c->r[0]; // 800BE490
  c->r[1]=c->r[1]+0x00000010u; // 800BE494
  return; // 800BE498
}

// fn_800BE49C
void f_800BE49C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE49C
  c->r[0]=c->lr; // 800BE4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE4A8
  c->r[31]=c->r[3]|c->r[3]; // 800BE4AC
  c->lr=0x800BE4B4u; f_800BE4F0(c); // 800BE4B0
  c->r[3]=0u+0x80460000u; // 800BE4B4
  c->r[0]=c->r[3]+0x000011A4u; // 800BE4B8
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800BE4BC
  c->r[0]=0u+0x00000000u; // 800BE4C0
  W32(c->r[31]+0x00000050u,c->r[0]); // 800BE4C4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE4C8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800BE4CC
  c->r[0]=0u+0xFFFFFFFFu; // 800BE4D0
  W32(c->r[31]+0x00000058u,c->r[0]); // 800BE4D4
  c->r[3]=c->r[31]|c->r[31]; // 800BE4D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE4E0
  c->lr=c->r[0]; // 800BE4E4
  c->r[1]=c->r[1]+0x00000010u; // 800BE4E8
  return; // 800BE4EC
}

// fn_800BE4F0
void f_800BE4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE4F0
  c->r[0]=c->lr; // 800BE4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE4F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE4FC
  c->r[31]=c->r[3]|c->r[3]; // 800BE500
  c->r[4]=0u+0x80460000u; // 800BE504
  c->r[0]=c->r[4]+0x000011CCu; // 800BE508
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800BE50C
  c->lr=0x800BE514u; f_800BBF90(c); // 800BE510
  c->r[3]=c->r[31]|c->r[31]; // 800BE514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE518
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE51C
  c->lr=c->r[0]; // 800BE520
  c->r[1]=c->r[1]+0x00000010u; // 800BE524
  return; // 800BE528
}

// fn_800BE52C
void f_800BE52C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE52C
  c->r[0]=c->lr; // 800BE530
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE538
  c->r[31]=c->r[3]|c->r[3]; // 800BE53C
  c->r[4]=0u+0x80460000u; // 800BE540
  c->r[0]=c->r[4]+0x00001268u; // 800BE544
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BE548
  c->lr=0x800BE550u; f_800BE5CC(c); // 800BE54C
  c->r[3]=c->r[31]|c->r[31]; // 800BE550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE554
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE558
  c->lr=c->r[0]; // 800BE55C
  c->r[1]=c->r[1]+0x00000010u; // 800BE560
  return; // 800BE564
}

// dtor_800BE568
void f_800BE568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE568
  c->r[0]=c->lr; // 800BE56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE574
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BE578
  c->r[30]=c->r[3]|c->r[3]; // 800BE57C
  c->r[31]=c->r[4]|c->r[4]; // 800BE580
  cmps(c,0,(int32_t)c->r[3],0); // 800BE584
  if (crb(c,2)) { goto L_800BE5B0; } // 800BE588
  c->r[4]=0u+0x80460000u; // 800BE58C
  c->r[0]=c->r[4]+0x00001268u; // 800BE590
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BE594
  c->lr=0x800BE59Cu; f_800BE6CC(c); // 800BE598
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BE59C
  cmps(c,0,(int32_t)c->r[0],0); // 800BE5A0
  if (!crb(c,1)) { goto L_800BE5B0; } // 800BE5A4
  c->r[3]=c->r[30]|c->r[30]; // 800BE5A8
  c->lr=0x800BE5B0u; f_80047B20(c); // 800BE5AC
L_800BE5B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800BE5B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE5B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BE5B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE5BC
  c->lr=c->r[0]; // 800BE5C0
  c->r[1]=c->r[1]+0x00000010u; // 800BE5C4
  return; // 800BE5C8
}

// fn_800BE5CC
void f_800BE5CC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BE5CC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BE5D0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BE5D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BE5D8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BE5DC
  W32(c->r[3]+0x00000020u,c->r[0]); // 800BE5E0
  c->r[3]=c->r[3]+0x00000014u; // 800BE5E4
  c->r[4]=0u+0x00000040u; // 800BE5E8
  f_8028CA58(c); return; // 800BE5EC
}

// fn_800BE5F0
void f_800BE5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE5F0
  c->r[0]=c->lr; // 800BE5F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE5F8
  c->r[11]=c->r[1]+0x00000020u; // 800BE5FC
  c->lr=0x800BE604u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE600
  c->r[27]=c->r[3]|c->r[3]; // 800BE604
  c->r[28]=c->r[6]|c->r[6]; // 800BE608
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BE60C
  cmps(c,0,(int32_t)c->r[0],0); // 800BE610
  if (!crb(c,2)) { goto L_800BE6B4; } // 800BE614
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BE618
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BE61C
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BE620
  c->lr=0x800BE628u; f_80056B5C(c); // 800BE624
  c->r[29]=c->r[3]|c->r[3]; // 800BE628
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BE62C
  c->lr=0x800BE634u; f_80056B54(c); // 800BE630
  c->r[30]=0u+0x00000000u; // 800BE634
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)136); // 800BE638
  c->r[3]=c->r[3]+0x00000010u; // 800BE63C
  c->lr=0x800BE644u; f_80054464(c); // 800BE640
  c->r[31]=c->r[3]|c->r[3]; // 800BE644
  cmps(c,0,(int32_t)c->r[3],0); // 800BE648
  if (crb(c,2)) { goto L_800BE674; } // 800BE64C
  c->r[30]=0u+0x00000001u; // 800BE650
  c->r[4]=0u+0x800E0000u; // 800BE654
  c->r[4]=c->r[4]+0x0000133Cu; // 800BE658
  c->r[5]=0u+0x800E0000u; // 800BE65C
  c->r[5]=c->r[5]+0x00001388u; // 800BE660
  c->r[6]=0u+0x00000088u; // 800BE664
  c->r[7]=c->r[28]|c->r[28]; // 800BE668
  c->lr=0x800BE670u; f_802F05F0(c); // 800BE66C
  c->r[31]=c->r[3]|c->r[3]; // 800BE670
L_800BE674:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800BE674
  c->r[3]=c->r[29]|c->r[29]; // 800BE678
  c->lr=0x800BE680u; f_80056B54(c); // 800BE67C
  c->lr=0x800BE684u; f_80056B5C(c); // 800BE680
  c->r[29]=c->r[3]|c->r[3]; // 800BE684
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BE688
  c->lr=0x800BE690u; f_80056B54(c); // 800BE68C
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BE690
  c->lr=0x800BE698u; f_80054464(c); // 800BE694
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800BE698
  c->r[3]=c->r[29]|c->r[29]; // 800BE69C
  c->lr=0x800BE6A4u; f_80056B54(c); // 800BE6A0
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BE6A4
  c->r[4]=0u+0x00000000u; // 800BE6A8
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BE6AC
  c->lr=0x800BE6B4u; f_800060B8(c); // 800BE6B0
L_800BE6B4:;
  c->r[11]=c->r[1]+0x00000020u; // 800BE6B4
  c->lr=0x800BE6BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE6B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE6BC
  c->lr=c->r[0]; // 800BE6C0
  c->r[1]=c->r[1]+0x00000020u; // 800BE6C4
  return; // 800BE6C8
}

// fn_800BE6CC
void f_800BE6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE6CC
  c->r[0]=c->lr; // 800BE6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE6D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE6D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BE6DC
  c->r[30]=c->r[3]|c->r[3]; // 800BE6E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BE6E4
  cmps(c,0,(int32_t)c->r[0],0); // 800BE6E8
  if (crb(c,2)) { goto L_800BE740; } // 800BE6EC
  c->lr=0x800BE6F4u; f_80056B5C(c); // 800BE6F0
  c->r[31]=c->r[3]|c->r[3]; // 800BE6F4
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BE6F8
  c->lr=0x800BE700u; f_80056B54(c); // 800BE6FC
  c->r[3]=R32(c->r[30]+0x00000008u); // 800BE700
  c->r[4]=0u+0x800E0000u; // 800BE704
  c->r[4]=c->r[4]+0x00001388u; // 800BE708
  c->lr=0x800BE710u; f_802F0920(c); // 800BE70C
  c->r[3]=c->r[31]|c->r[31]; // 800BE710
  c->lr=0x800BE718u; f_80056B54(c); // 800BE714
  c->lr=0x800BE71Cu; f_80056B5C(c); // 800BE718
  c->r[31]=c->r[3]|c->r[3]; // 800BE71C
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BE720
  c->lr=0x800BE728u; f_80056B54(c); // 800BE724
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BE728
  c->lr=0x800BE730u; f_80054420(c); // 800BE72C
  c->r[3]=c->r[31]|c->r[31]; // 800BE730
  c->lr=0x800BE738u; f_80056B54(c); // 800BE734
  c->r[3]=c->r[30]|c->r[30]; // 800BE738
  c->lr=0x800BE740u; f_800BE5CC(c); // 800BE73C
L_800BE740:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BE740
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BE744
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE748
  c->lr=c->r[0]; // 800BE74C
  c->r[1]=c->r[1]+0x00000010u; // 800BE750
  return; // 800BE754
}

// fn_800BE758
void f_800BE758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE758
  c->r[0]=c->lr; // 800BE75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE760
  c->r[11]=c->r[1]+0x00000020u; // 800BE764
  c->lr=0x800BE76Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE768
  c->r[26]=c->r[3]|c->r[3]; // 800BE76C
  c->r[27]=c->r[4]|c->r[4]; // 800BE770
  c->r[28]=c->r[5]|c->r[5]; // 800BE774
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BE778
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800BE77C
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BE780
  goto L_800BE7D4; // 800BE784
L_800BE788:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BE788
  c->r[30]=R32(c->r[3]+c->r[31]); // 800BE78C
  cmps(c,0,(int32_t)c->r[30],0); // 800BE790
  if (crb(c,2)) { goto L_800BE7CC; } // 800BE794
  c->r[3]=c->r[30]|c->r[30]; // 800BE798
  c->lr=0x800BE7A0u; f_800C2254(c); // 800BE79C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 800BE7A0
  if (crb(c,0)) { goto L_800BE7CC; } // 800BE7A4
  cmps(c,0,(int32_t)c->r[28],0); // 800BE7A8
  if (crb(c,2)) { goto L_800BE7B8; } // 800BE7AC
  c->r[3]=c->r[30]|c->r[30]; // 800BE7B0
  c->lr=0x800BE7B8u; f_800C2248(c); // 800BE7B4
L_800BE7B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800BE7B8
  c->lr=0x800BE7C0u; f_800BDE68(c); // 800BE7BC
  c->r[4]=c->r[3]|c->r[3]; // 800BE7C0
  c->r[3]=c->r[26]|c->r[26]; // 800BE7C4
  c->lr=0x800BE7CCu; f_800BE8C0(c); // 800BE7C8
L_800BE7CC:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800BE7CC
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BE7D0
L_800BE7D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BE7D4
  if (!crb(c,0)) { IRQCHK(c); goto L_800BE788; } // 800BE7D8
  c->r[11]=c->r[1]+0x00000020u; // 800BE7DC
  c->lr=0x800BE7E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE7E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE7E4
  c->lr=c->r[0]; // 800BE7E8
  c->r[1]=c->r[1]+0x00000020u; // 800BE7EC
  return; // 800BE7F0
}

// fn_800BE7F4
void f_800BE7F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE7F4
  c->r[0]=c->lr; // 800BE7F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BE7FC
  c->r[11]=c->r[1]+0x00000020u; // 800BE800
  c->lr=0x800BE808u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE804
  c->r[27]=c->r[3]|c->r[3]; // 800BE808
  c->r[28]=c->r[4]|c->r[4]; // 800BE80C
  c->r[29]=0u+0x00000000u; // 800BE810
  c->r[31]=0u+0x00000000u; // 800BE814
  goto L_800BE898; // 800BE818
L_800BE81C:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BE81C
  c->r[30]=c->r[0]+c->r[31]; // 800BE820
  c->r[3]=c->r[30]|c->r[30]; // 800BE824
  c->lr=0x800BE82Cu; f_800BDE50(c); // 800BE828
  cmps(c,0,(int32_t)c->r[3],0); // 800BE82C
  if (!crb(c,2)) { goto L_800BE890; } // 800BE830
  c->r[3]=c->r[30]|c->r[30]; // 800BE834
  c->lr=0x800BE83Cu; f_800C2240(c); // 800BE838
  c->r[4]=c->r[3]|c->r[3]; // 800BE83C
  c->r[3]=R32(c->r[27]+0x00000000u); // 800BE840
  c->r[5]=c->r[29]+0x00000001u; // 800BE844
  c->lr=0x800BE84Cu; f_800C2220(c); // 800BE848
  c->r[4]=c->r[3]|c->r[3]; // 800BE84C
  c->r[3]=c->r[30]|c->r[30]; // 800BE850
  c->lr=0x800BE858u; f_800BDECC(c); // 800BE854
  cmps(c,0,(int32_t)c->r[28],0); // 800BE858
  if (crb(c,2)) { goto L_800BE86C; } // 800BE85C
  c->r[3]=c->r[30]|c->r[30]; // 800BE860
  c->r[4]=c->r[28]|c->r[28]; // 800BE864
  c->lr=0x800BE86Cu; f_800BDE70(c); // 800BE868
L_800BE86C:;
  c->r[3]=c->r[27]+0x00000014u; // 800BE86C
  c->r[4]=c->r[30]|c->r[30]; // 800BE870
  c->lr=0x800BE878u; f_8028CA70(c); // 800BE874
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BE878
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BE87C
  W32(c->r[3]+c->r[0],c->r[30]); // 800BE880
  c->r[3]=c->r[30]|c->r[30]; // 800BE884
  c->lr=0x800BE88Cu; f_800BDE68(c); // 800BE888
  goto L_800BE8A8; // 800BE88C
L_800BE890:;
  c->r[31]=c->r[31]+0x00000088u; // 800BE890
  c->r[29]=c->r[29]+0x00000001u; // 800BE894
L_800BE898:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BE898
  cmpu(c,0,c->r[29],c->r[0]); // 800BE89C
  if (crb(c,0)) { IRQCHK(c); goto L_800BE81C; } // 800BE8A0
  c->r[3]=0u+0x00000000u; // 800BE8A4
L_800BE8A8:;
  c->r[11]=c->r[1]+0x00000020u; // 800BE8A8
  c->lr=0x800BE8B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE8AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BE8B0
  c->lr=c->r[0]; // 800BE8B4
  c->r[1]=c->r[1]+0x00000020u; // 800BE8B8
  return; // 800BE8BC
}

// fn_800BE8C0
void f_800BE8C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE8C0
  c->r[0]=c->lr; // 800BE8C4
  W32(c->r[1]+0x00000124u,c->r[0]); // 800BE8C8
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800BE8CC
  W32(c->r[1]+0x00000118u,c->r[30]); // 800BE8D0
  W32(c->r[1]+0x00000114u,c->r[29]); // 800BE8D4
  c->r[29]=c->r[3]|c->r[3]; // 800BE8D8
  c->r[31]=c->r[4]|c->r[4]; // 800BE8DC
  c->lr=0x800BE8E4u; f_800BB99C(c); // 800BE8E0
  c->r[30]=c->r[3]|c->r[3]; // 800BE8E4
  cmps(c,0,(int32_t)c->r[3],0); // 800BE8E8
  if (crb(c,2)) { goto L_800BE988; } // 800BE8EC
  c->lr=0x800BE8F4u; f_800BE3E4(c); // 800BE8F0
  cmps(c,0,(int32_t)c->r[3],0); // 800BE8F4
  if (crb(c,2)) { goto L_800BE920; } // 800BE8F8
  c->r[3]=c->r[30]|c->r[30]; // 800BE8FC
  c->lr=0x800BE904u; f_800BDEB4(c); // 800BE900
  c->r[5]=c->r[3]|c->r[3]; // 800BE904
  c->r[3]=c->r[1]+0x00000008u; // 800BE908
  c->r[4]=0u+0x80460000u; // 800BE90C
  c->r[4]=c->r[4]+0x00001220u; // 800BE910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE914
  c->lr=0x800BE91Cu; f_802E7CC4(c); // 800BE918
  goto L_800BE988; // 800BE91C
L_800BE920:;
  c->r[3]=c->r[30]|c->r[30]; // 800BE920
  c->lr=0x800BE928u; f_800C2218(c); // 800BE924
  cmps(c,0,(int32_t)c->r[3],0); // 800BE928
  if (crb(c,2)) { goto L_800BE954; } // 800BE92C
  c->r[3]=c->r[30]|c->r[30]; // 800BE930
  c->lr=0x800BE938u; f_800BDEB4(c); // 800BE934
  c->r[5]=c->r[3]|c->r[3]; // 800BE938
  c->r[3]=c->r[1]+0x00000008u; // 800BE93C
  c->r[4]=0u+0x80460000u; // 800BE940
  c->r[4]=c->r[4]+0x00001244u; // 800BE944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BE948
  c->lr=0x800BE950u; f_802E7CC4(c); // 800BE94C
  goto L_800BE988; // 800BE950
L_800BE954:;
  c->r[3]=c->r[31]|c->r[31]; // 800BE954
  c->lr=0x800BE95Cu; f_800BBF30(c); // 800BE958
  c->r[31]=c->r[3]|c->r[3]; // 800BE95C
  c->r[3]=c->r[29]+0x00000014u; // 800BE960
  c->r[4]=c->r[30]|c->r[30]; // 800BE964
  c->lr=0x800BE96Cu; f_8028CC6C(c); // 800BE968
  c->r[3]=c->r[30]|c->r[30]; // 800BE96C
  c->lr=0x800BE974u; f_800BDDF4(c); // 800BE970
  c->r[4]=0u+0x00000000u; // 800BE974
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800BE978
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800BE97C
  c->r[3]=c->r[3]+c->r[0]; // 800BE980
  W32(c->r[3]+0xFFFFFFFCu,c->r[4]); // 800BE984
L_800BE988:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800BE988
  c->r[30]=R32(c->r[1]+0x00000118u); // 800BE98C
  c->r[29]=R32(c->r[1]+0x00000114u); // 800BE990
  c->r[0]=R32(c->r[1]+0x00000124u); // 800BE994
  c->lr=c->r[0]; // 800BE998
  c->r[1]=c->r[1]+0x00000120u; // 800BE99C
  return; // 800BE9A0
}

// fn_800BE9A4
void f_800BE9A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE9A4
  c->r[0]=c->lr; // 800BE9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE9AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BE9B0
  c->r[31]=c->r[3]|c->r[3]; // 800BE9B4
  c->r[3]=c->r[4]|c->r[4]; // 800BE9B8
  c->lr=0x800BE9C0u; f_800BBF30(c); // 800BE9BC
  cmps(c,0,(int32_t)c->r[3],0); // 800BE9C0
  if (!crb(c,2)) { goto L_800BE9D0; } // 800BE9C4
  c->r[3]=0u+0x00000000u; // 800BE9C8
  goto L_800BEA00; // 800BE9CC
L_800BE9D0:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BE9D0
  cmpu(c,0,c->r[3],c->r[0]); // 800BE9D4
  if (!crb(c,1)) { goto L_800BE9E4; } // 800BE9D8
  c->r[3]=0u+0x00000000u; // 800BE9DC
  goto L_800BEA00; // 800BE9E0
L_800BE9E4:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BE9E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BE9E8
  c->r[3]=c->r[4]+c->r[0]; // 800BE9EC
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BE9F0
  c->r[0]=0u-c->r[3]; // 800BE9F4
  c->r[0]=c->r[0]|c->r[3]; // 800BE9F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BE9FC
L_800BEA00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEA00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEA04
  c->lr=c->r[0]; // 800BEA08
  c->r[1]=c->r[1]+0x00000010u; // 800BEA0C
  return; // 800BEA10
}

// fn_800BEA14
void f_800BEA14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEA14
  c->r[0]=c->lr; // 800BEA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEA1C
  c->r[3]=c->r[3]+0x00000014u; // 800BEA20
  c->lr=0x800BEA28u; f_8004B018(c); // 800BEA24
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA28
  if (!crb(c,2)) { goto L_800BEA38; } // 800BEA2C
  c->r[3]=0u+0x00000000u; // 800BEA30
  goto L_800BEA3C; // 800BEA34
L_800BEA38:;
  c->lr=0x800BEA3Cu; f_800BDE68(c); // 800BEA38
L_800BEA3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEA3C
  c->lr=c->r[0]; // 800BEA40
  c->r[1]=c->r[1]+0x00000010u; // 800BEA44
  return; // 800BEA48
}

// fn_800BEA4C
void f_800BEA4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEA4C
  c->r[0]=c->lr; // 800BEA50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEA54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEA58
  c->r[31]=c->r[3]|c->r[3]; // 800BEA5C
  c->lr=0x800BEA64u; f_800BB99C(c); // 800BEA60
  c->r[4]=c->r[3]|c->r[3]; // 800BEA64
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA68
  if (!crb(c,2)) { goto L_800BEA78; } // 800BEA6C
  c->r[3]=0u+0x00000000u; // 800BEA70
  goto L_800BEA94; // 800BEA74
L_800BEA78:;
  c->r[3]=c->r[31]+0x00000014u; // 800BEA78
  c->lr=0x800BEA80u; f_8028CCD8(c); // 800BEA7C
  cmps(c,0,(int32_t)c->r[3],0); // 800BEA80
  if (!crb(c,2)) { goto L_800BEA90; } // 800BEA84
  c->r[3]=0u+0x00000000u; // 800BEA88
  goto L_800BEA94; // 800BEA8C
L_800BEA90:;
  c->lr=0x800BEA94u; f_800BDE68(c); // 800BEA90
L_800BEA94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEA94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEA98
  c->lr=c->r[0]; // 800BEA9C
  c->r[1]=c->r[1]+0x00000010u; // 800BEAA0
  return; // 800BEAA4
}

// fn_800BEAA8
void f_800BEAA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEAA8
  c->r[0]=c->lr; // 800BEAAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEAB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEAB4
  c->r[31]=c->r[3]|c->r[3]; // 800BEAB8
  c->r[4]=0u+0x80460000u; // 800BEABC
  c->r[0]=c->r[4]+0x00001274u; // 800BEAC0
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BEAC4
  c->lr=0x800BEACCu; f_800BEB48(c); // 800BEAC8
  c->r[3]=c->r[31]|c->r[31]; // 800BEACC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEAD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEAD4
  c->lr=c->r[0]; // 800BEAD8
  c->r[1]=c->r[1]+0x00000010u; // 800BEADC
  return; // 800BEAE0
}

// dtor_800BEAE4
void f_800BEAE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEAE4
  c->r[0]=c->lr; // 800BEAE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEAEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEAF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BEAF4
  c->r[30]=c->r[3]|c->r[3]; // 800BEAF8
  c->r[31]=c->r[4]|c->r[4]; // 800BEAFC
  cmps(c,0,(int32_t)c->r[3],0); // 800BEB00
  if (crb(c,2)) { goto L_800BEB2C; } // 800BEB04
  c->r[4]=0u+0x80460000u; // 800BEB08
  c->r[0]=c->r[4]+0x00001274u; // 800BEB0C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BEB10
  c->lr=0x800BEB18u; f_800BEC48(c); // 800BEB14
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BEB18
  cmps(c,0,(int32_t)c->r[0],0); // 800BEB1C
  if (!crb(c,1)) { goto L_800BEB2C; } // 800BEB20
  c->r[3]=c->r[30]|c->r[30]; // 800BEB24
  c->lr=0x800BEB2Cu; f_80047B20(c); // 800BEB28
L_800BEB2C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BEB2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEB30
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BEB34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEB38
  c->lr=c->r[0]; // 800BEB3C
  c->r[1]=c->r[1]+0x00000010u; // 800BEB40
  return; // 800BEB44
}

// fn_800BEB48
void f_800BEB48(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BEB48
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BEB4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BEB50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BEB54
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BEB58
  W32(c->r[3]+0x00000020u,c->r[0]); // 800BEB5C
  c->r[3]=c->r[3]+0x00000014u; // 800BEB60
  c->r[4]=0u+0x00000040u; // 800BEB64
  f_8028CA58(c); return; // 800BEB68
}

// fn_800BEB6C
void f_800BEB6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEB6C
  c->r[0]=c->lr; // 800BEB70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BEB74
  c->r[11]=c->r[1]+0x00000020u; // 800BEB78
  c->lr=0x800BEB80u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEB7C
  c->r[27]=c->r[3]|c->r[3]; // 800BEB80
  c->r[28]=c->r[6]|c->r[6]; // 800BEB84
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEB88
  cmps(c,0,(int32_t)c->r[0],0); // 800BEB8C
  if (!crb(c,2)) { goto L_800BEC30; } // 800BEB90
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BEB94
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BEB98
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BEB9C
  c->lr=0x800BEBA4u; f_80056B5C(c); // 800BEBA0
  c->r[29]=c->r[3]|c->r[3]; // 800BEBA4
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BEBA8
  c->lr=0x800BEBB0u; f_80056B54(c); // 800BEBAC
  c->r[30]=0u+0x00000000u; // 800BEBB0
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)228); // 800BEBB4
  c->r[3]=c->r[3]+0x00000010u; // 800BEBB8
  c->lr=0x800BEBC0u; f_80054464(c); // 800BEBBC
  c->r[31]=c->r[3]|c->r[3]; // 800BEBC0
  cmps(c,0,(int32_t)c->r[3],0); // 800BEBC4
  if (crb(c,2)) { goto L_800BEBF0; } // 800BEBC8
  c->r[30]=0u+0x00000001u; // 800BEBCC
  c->r[4]=0u+0x800D0000u; // 800BEBD0
  c->r[4]=c->r[4]+0xFFFFF9DCu; // 800BEBD4
  c->r[5]=0u+0x800D0000u; // 800BEBD8
  c->r[5]=c->r[5]+0xFFFFF980u; // 800BEBDC
  c->r[6]=0u+0x000000E4u; // 800BEBE0
  c->r[7]=c->r[28]|c->r[28]; // 800BEBE4
  c->lr=0x800BEBECu; f_802F05F0(c); // 800BEBE8
  c->r[31]=c->r[3]|c->r[3]; // 800BEBEC
L_800BEBF0:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800BEBF0
  c->r[3]=c->r[29]|c->r[29]; // 800BEBF4
  c->lr=0x800BEBFCu; f_80056B54(c); // 800BEBF8
  c->lr=0x800BEC00u; f_80056B5C(c); // 800BEBFC
  c->r[29]=c->r[3]|c->r[3]; // 800BEC00
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BEC04
  c->lr=0x800BEC0Cu; f_80056B54(c); // 800BEC08
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BEC0C
  c->lr=0x800BEC14u; f_80054464(c); // 800BEC10
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800BEC14
  c->r[3]=c->r[29]|c->r[29]; // 800BEC18
  c->lr=0x800BEC20u; f_80056B54(c); // 800BEC1C
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BEC20
  c->r[4]=0u+0x00000000u; // 800BEC24
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BEC28
  c->lr=0x800BEC30u; f_800060B8(c); // 800BEC2C
L_800BEC30:;
  c->r[11]=c->r[1]+0x00000020u; // 800BEC30
  c->lr=0x800BEC38u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BEC34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BEC38
  c->lr=c->r[0]; // 800BEC3C
  c->r[1]=c->r[1]+0x00000020u; // 800BEC40
  return; // 800BEC44
}

// fn_800BEC48
void f_800BEC48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEC48
  c->r[0]=c->lr; // 800BEC4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEC50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEC54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BEC58
  c->r[30]=c->r[3]|c->r[3]; // 800BEC5C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEC60
  cmps(c,0,(int32_t)c->r[0],0); // 800BEC64
  if (crb(c,2)) { goto L_800BECBC; } // 800BEC68
  c->lr=0x800BEC70u; f_80056B5C(c); // 800BEC6C
  c->r[31]=c->r[3]|c->r[3]; // 800BEC70
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BEC74
  c->lr=0x800BEC7Cu; f_80056B54(c); // 800BEC78
  c->r[3]=R32(c->r[30]+0x00000008u); // 800BEC7C
  c->r[4]=0u+0x800D0000u; // 800BEC80
  c->r[4]=c->r[4]+0xFFFFF980u; // 800BEC84
  c->lr=0x800BEC8Cu; f_802F0920(c); // 800BEC88
  c->r[3]=c->r[31]|c->r[31]; // 800BEC8C
  c->lr=0x800BEC94u; f_80056B54(c); // 800BEC90
  c->lr=0x800BEC98u; f_80056B5C(c); // 800BEC94
  c->r[31]=c->r[3]|c->r[3]; // 800BEC98
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BEC9C
  c->lr=0x800BECA4u; f_80056B54(c); // 800BECA0
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BECA4
  c->lr=0x800BECACu; f_80054420(c); // 800BECA8
  c->r[3]=c->r[31]|c->r[31]; // 800BECAC
  c->lr=0x800BECB4u; f_80056B54(c); // 800BECB0
  c->r[3]=c->r[30]|c->r[30]; // 800BECB4
  c->lr=0x800BECBCu; f_800BEB48(c); // 800BECB8
L_800BECBC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BECBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BECC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BECC4
  c->lr=c->r[0]; // 800BECC8
  c->r[1]=c->r[1]+0x00000010u; // 800BECCC
  return; // 800BECD0
}

// fn_800BECD4
void f_800BECD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BECD4
  c->r[0]=c->lr; // 800BECD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BECDC
  c->r[11]=c->r[1]+0x00000020u; // 800BECE0
  c->lr=0x800BECE8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BECE4
  c->r[27]=c->r[3]|c->r[3]; // 800BECE8
  c->r[28]=c->r[4]|c->r[4]; // 800BECEC
  c->r[29]=0u+0x00000000u; // 800BECF0
  c->r[31]=0u+0x00000000u; // 800BECF4
  goto L_800BED78; // 800BECF8
L_800BECFC:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BECFC
  c->r[30]=c->r[0]+c->r[31]; // 800BED00
  c->r[3]=c->r[30]|c->r[30]; // 800BED04
  c->lr=0x800BED0Cu; f_800BDE50(c); // 800BED08
  cmps(c,0,(int32_t)c->r[3],0); // 800BED0C
  if (!crb(c,2)) { goto L_800BED70; } // 800BED10
  c->r[3]=c->r[30]|c->r[30]; // 800BED14
  c->lr=0x800BED1Cu; f_800C2240(c); // 800BED18
  c->r[4]=c->r[3]|c->r[3]; // 800BED1C
  c->r[3]=R32(c->r[27]+0x00000000u); // 800BED20
  c->r[5]=c->r[29]+0x00000001u; // 800BED24
  c->lr=0x800BED2Cu; f_800C2220(c); // 800BED28
  c->r[4]=c->r[3]|c->r[3]; // 800BED2C
  c->r[3]=c->r[30]|c->r[30]; // 800BED30
  c->lr=0x800BED38u; f_800BDECC(c); // 800BED34
  cmps(c,0,(int32_t)c->r[28],0); // 800BED38
  if (crb(c,2)) { goto L_800BED4C; } // 800BED3C
  c->r[3]=c->r[30]|c->r[30]; // 800BED40
  c->r[4]=c->r[28]|c->r[28]; // 800BED44
  c->lr=0x800BED4Cu; f_800BDE70(c); // 800BED48
L_800BED4C:;
  c->r[3]=c->r[27]+0x00000014u; // 800BED4C
  c->r[4]=c->r[30]|c->r[30]; // 800BED50
  c->lr=0x800BED58u; f_8028CA70(c); // 800BED54
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BED58
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BED5C
  W32(c->r[3]+c->r[0],c->r[30]); // 800BED60
  c->r[3]=c->r[30]|c->r[30]; // 800BED64
  c->lr=0x800BED6Cu; f_800BDE68(c); // 800BED68
  goto L_800BED88; // 800BED6C
L_800BED70:;
  c->r[31]=c->r[31]+0x000000E4u; // 800BED70
  c->r[29]=c->r[29]+0x00000001u; // 800BED74
L_800BED78:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BED78
  cmpu(c,0,c->r[29],c->r[0]); // 800BED7C
  if (crb(c,0)) { IRQCHK(c); goto L_800BECFC; } // 800BED80
  c->r[3]=0u+0x00000000u; // 800BED84
L_800BED88:;
  c->r[11]=c->r[1]+0x00000020u; // 800BED88
  c->lr=0x800BED90u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BED8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BED90
  c->lr=c->r[0]; // 800BED94
  c->r[1]=c->r[1]+0x00000020u; // 800BED98
  return; // 800BED9C
}

// fn_800BEDA0
void f_800BEDA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEDA0
  c->r[0]=c->lr; // 800BEDA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEDA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEDAC
  c->r[31]=c->r[3]|c->r[3]; // 800BEDB0
  c->r[3]=c->r[4]|c->r[4]; // 800BEDB4
  c->lr=0x800BEDBCu; f_800BBF30(c); // 800BEDB8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BEDBC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BEDC0
  c->r[3]=c->r[4]+c->r[0]; // 800BEDC4
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BEDC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEDCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEDD0
  c->lr=c->r[0]; // 800BEDD4
  c->r[1]=c->r[1]+0x00000010u; // 800BEDD8
  return; // 800BEDDC
}

// fn_800BEDE0
void f_800BEDE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEDE0
  c->r[0]=c->lr; // 800BEDE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BEDE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BEDEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BEDF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BEDF4
  c->r[29]=c->r[3]|c->r[3]; // 800BEDF8
  c->r[30]=c->r[4]|c->r[4]; // 800BEDFC
  c->r[3]=c->r[3]+0x00000014u; // 800BEE00
  c->lr=0x800BEE08u; f_8004B018(c); // 800BEE04
  c->r[31]=c->r[3]|c->r[3]; // 800BEE08
  goto L_800BEE3C; // 800BEE0C
L_800BEE10:;
  c->r[3]=c->r[31]|c->r[31]; // 800BEE10
  c->lr=0x800BEE18u; f_800BDEC4(c); // 800BEE14
  cmpu(c,0,c->r[30],c->r[3]); // 800BEE18
  if (!crb(c,2)) { goto L_800BEE2C; } // 800BEE1C
  c->r[3]=c->r[31]|c->r[31]; // 800BEE20
  c->lr=0x800BEE28u; f_800BDE68(c); // 800BEE24
  goto L_800BEE48; // 800BEE28
L_800BEE2C:;
  c->r[3]=c->r[29]+0x00000014u; // 800BEE2C
  c->r[4]=c->r[31]|c->r[31]; // 800BEE30
  c->lr=0x800BEE38u; f_8028CCD8(c); // 800BEE34
  c->r[31]=c->r[3]|c->r[3]; // 800BEE38
L_800BEE3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BEE3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800BEE10; } // 800BEE40
  c->r[3]=0u+0x00000000u; // 800BEE44
L_800BEE48:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BEE48
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BEE4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BEE50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BEE54
  c->lr=c->r[0]; // 800BEE58
  c->r[1]=c->r[1]+0x00000020u; // 800BEE5C
  return; // 800BEE60
}

// fn_800BEE64
void f_800BEE64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEE64
  c->r[0]=c->lr; // 800BEE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEE6C
  c->r[3]=c->r[3]+0x00000014u; // 800BEE70
  c->lr=0x800BEE78u; f_8004B018(c); // 800BEE74
  cmps(c,0,(int32_t)c->r[3],0); // 800BEE78
  if (!crb(c,2)) { goto L_800BEE88; } // 800BEE7C
  c->r[3]=0u+0x00000000u; // 800BEE80
  goto L_800BEE8C; // 800BEE84
L_800BEE88:;
  c->lr=0x800BEE8Cu; f_800BDE68(c); // 800BEE88
L_800BEE8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEE8C
  c->lr=c->r[0]; // 800BEE90
  c->r[1]=c->r[1]+0x00000010u; // 800BEE94
  return; // 800BEE98
}

// fn_800BEE9C
void f_800BEE9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEE9C
  c->r[0]=c->lr; // 800BEEA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEEA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEEA8
  c->r[31]=c->r[3]|c->r[3]; // 800BEEAC
  c->lr=0x800BEEB4u; f_800BEDA0(c); // 800BEEB0
  c->r[4]=c->r[3]|c->r[3]; // 800BEEB4
  cmps(c,0,(int32_t)c->r[3],0); // 800BEEB8
  if (!crb(c,2)) { goto L_800BEEC8; } // 800BEEBC
  c->r[3]=0u+0x00000000u; // 800BEEC0
  goto L_800BEEE4; // 800BEEC4
L_800BEEC8:;
  c->r[3]=c->r[31]+0x00000014u; // 800BEEC8
  c->lr=0x800BEED0u; f_8028CCD8(c); // 800BEECC
  cmps(c,0,(int32_t)c->r[3],0); // 800BEED0
  if (!crb(c,2)) { goto L_800BEEE0; } // 800BEED4
  c->r[3]=0u+0x00000000u; // 800BEED8
  goto L_800BEEE4; // 800BEEDC
L_800BEEE0:;
  c->lr=0x800BEEE4u; f_800BDE68(c); // 800BEEE0
L_800BEEE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEEE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEEE8
  c->lr=c->r[0]; // 800BEEEC
  c->r[1]=c->r[1]+0x00000010u; // 800BEEF0
  return; // 800BEEF4
}

// fn_800BEEF8
void f_800BEEF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEEF8
  c->r[0]=c->lr; // 800BEEFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEF00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEF04
  c->r[31]=c->r[3]|c->r[3]; // 800BEF08
  c->r[4]=0u+0x80460000u; // 800BEF0C
  c->r[0]=c->r[4]+0x000012A4u; // 800BEF10
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BEF14
  c->lr=0x800BEF1Cu; f_800BEF98(c); // 800BEF18
  c->r[3]=c->r[31]|c->r[31]; // 800BEF1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEF20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEF24
  c->lr=c->r[0]; // 800BEF28
  c->r[1]=c->r[1]+0x00000010u; // 800BEF2C
  return; // 800BEF30
}

// fn_800BEF34
void f_800BEF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEF34
  c->r[0]=c->lr; // 800BEF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEF3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEF40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BEF44
  c->r[30]=c->r[3]|c->r[3]; // 800BEF48
  c->r[31]=c->r[4]|c->r[4]; // 800BEF4C
  cmps(c,0,(int32_t)c->r[3],0); // 800BEF50
  if (crb(c,2)) { goto L_800BEF7C; } // 800BEF54
  c->r[4]=0u+0x80460000u; // 800BEF58
  c->r[0]=c->r[4]+0x000012A4u; // 800BEF5C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BEF60
  c->lr=0x800BEF68u; f_800BF098(c); // 800BEF64
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BEF68
  cmps(c,0,(int32_t)c->r[0],0); // 800BEF6C
  if (!crb(c,1)) { goto L_800BEF7C; } // 800BEF70
  c->r[3]=c->r[30]|c->r[30]; // 800BEF74
  c->lr=0x800BEF7Cu; f_80047B20(c); // 800BEF78
L_800BEF7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BEF7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEF80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BEF84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEF88
  c->lr=c->r[0]; // 800BEF8C
  c->r[1]=c->r[1]+0x00000010u; // 800BEF90
  return; // 800BEF94
}

// fn_800BEF98
void f_800BEF98(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BEF98
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BEF9C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BEFA0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BEFA4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BEFA8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800BEFAC
  c->r[3]=c->r[3]+0x00000014u; // 800BEFB0
  c->r[4]=0u+0x00000040u; // 800BEFB4
  f_8028CA58(c); return; // 800BEFB8
}

// fn_800BEFBC
void f_800BEFBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEFBC
  c->r[0]=c->lr; // 800BEFC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BEFC4
  c->r[11]=c->r[1]+0x00000020u; // 800BEFC8
  c->lr=0x800BEFD0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEFCC
  c->r[27]=c->r[3]|c->r[3]; // 800BEFD0
  c->r[28]=c->r[6]|c->r[6]; // 800BEFD4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEFD8
  cmps(c,0,(int32_t)c->r[0],0); // 800BEFDC
  if (!crb(c,2)) { goto L_800BF080; } // 800BEFE0
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BEFE4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BEFE8
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BEFEC
  c->lr=0x800BEFF4u; f_80056B5C(c); // 800BEFF0
  c->r[29]=c->r[3]|c->r[3]; // 800BEFF4
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BEFF8
  c->lr=0x800BF000u; f_80056B54(c); // 800BEFFC
  c->r[30]=0u+0x00000000u; // 800BF000
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)156); // 800BF004
  c->r[3]=c->r[3]+0x00000010u; // 800BF008
  c->lr=0x800BF010u; f_80054464(c); // 800BF00C
  c->r[31]=c->r[3]|c->r[3]; // 800BF010
  cmps(c,0,(int32_t)c->r[3],0); // 800BF014
  if (crb(c,2)) { goto L_800BF040; } // 800BF018
  c->r[30]=0u+0x00000001u; // 800BF01C
  c->r[4]=0u+0x800D0000u; // 800BF020
  c->r[4]=c->r[4]+0x000002F8u; // 800BF024
  c->r[5]=0u+0x800D0000u; // 800BF028
  c->r[5]=c->r[5]+0x00000370u; // 800BF02C
  c->r[6]=0u+0x0000009Cu; // 800BF030
  c->r[7]=c->r[28]|c->r[28]; // 800BF034
  c->lr=0x800BF03Cu; f_802F05F0(c); // 800BF038
  c->r[31]=c->r[3]|c->r[3]; // 800BF03C
L_800BF040:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800BF040
  c->r[3]=c->r[29]|c->r[29]; // 800BF044
  c->lr=0x800BF04Cu; f_80056B54(c); // 800BF048
  c->lr=0x800BF050u; f_80056B5C(c); // 800BF04C
  c->r[29]=c->r[3]|c->r[3]; // 800BF050
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BF054
  c->lr=0x800BF05Cu; f_80056B54(c); // 800BF058
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BF05C
  c->lr=0x800BF064u; f_80054464(c); // 800BF060
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800BF064
  c->r[3]=c->r[29]|c->r[29]; // 800BF068
  c->lr=0x800BF070u; f_80056B54(c); // 800BF06C
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BF070
  c->r[4]=0u+0x00000000u; // 800BF074
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BF078
  c->lr=0x800BF080u; f_800060B8(c); // 800BF07C
L_800BF080:;
  c->r[11]=c->r[1]+0x00000020u; // 800BF080
  c->lr=0x800BF088u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF084
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF088
  c->lr=c->r[0]; // 800BF08C
  c->r[1]=c->r[1]+0x00000020u; // 800BF090
  return; // 800BF094
}

// fn_800BF098
void f_800BF098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF098
  c->r[0]=c->lr; // 800BF09C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF0A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF0A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF0A8
  c->r[30]=c->r[3]|c->r[3]; // 800BF0AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF0B0
  cmps(c,0,(int32_t)c->r[0],0); // 800BF0B4
  if (crb(c,2)) { goto L_800BF10C; } // 800BF0B8
  c->lr=0x800BF0C0u; f_80056B5C(c); // 800BF0BC
  c->r[31]=c->r[3]|c->r[3]; // 800BF0C0
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BF0C4
  c->lr=0x800BF0CCu; f_80056B54(c); // 800BF0C8
  c->r[3]=R32(c->r[30]+0x00000008u); // 800BF0CC
  c->r[4]=0u+0x800D0000u; // 800BF0D0
  c->r[4]=c->r[4]+0x00000370u; // 800BF0D4
  c->lr=0x800BF0DCu; f_802F0920(c); // 800BF0D8
  c->r[3]=c->r[31]|c->r[31]; // 800BF0DC
  c->lr=0x800BF0E4u; f_80056B54(c); // 800BF0E0
  c->lr=0x800BF0E8u; f_80056B5C(c); // 800BF0E4
  c->r[31]=c->r[3]|c->r[3]; // 800BF0E8
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BF0EC
  c->lr=0x800BF0F4u; f_80056B54(c); // 800BF0F0
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BF0F4
  c->lr=0x800BF0FCu; f_80054420(c); // 800BF0F8
  c->r[3]=c->r[31]|c->r[31]; // 800BF0FC
  c->lr=0x800BF104u; f_80056B54(c); // 800BF100
  c->r[3]=c->r[30]|c->r[30]; // 800BF104
  c->lr=0x800BF10Cu; f_800BEF98(c); // 800BF108
L_800BF10C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF10C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF110
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF114
  c->lr=c->r[0]; // 800BF118
  c->r[1]=c->r[1]+0x00000010u; // 800BF11C
  return; // 800BF120
}

// fn_800BF124
void f_800BF124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF124
  c->r[0]=c->lr; // 800BF128
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF12C
  c->r[11]=c->r[1]+0x00000020u; // 800BF130
  c->lr=0x800BF138u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF134
  c->r[26]=c->r[3]|c->r[3]; // 800BF138
  c->r[27]=c->r[4]|c->r[4]; // 800BF13C
  c->r[28]=c->r[5]|c->r[5]; // 800BF140
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BF144
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800BF148
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BF14C
  goto L_800BF1A0; // 800BF150
L_800BF154:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BF154
  c->r[30]=R32(c->r[3]+c->r[31]); // 800BF158
  cmps(c,0,(int32_t)c->r[30],0); // 800BF15C
  if (crb(c,2)) { goto L_800BF198; } // 800BF160
  c->r[3]=c->r[30]|c->r[30]; // 800BF164
  c->lr=0x800BF16Cu; f_800C2254(c); // 800BF168
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 800BF16C
  if (crb(c,0)) { goto L_800BF198; } // 800BF170
  cmps(c,0,(int32_t)c->r[28],0); // 800BF174
  if (crb(c,2)) { goto L_800BF184; } // 800BF178
  c->r[3]=c->r[30]|c->r[30]; // 800BF17C
  c->lr=0x800BF184u; f_800C2248(c); // 800BF180
L_800BF184:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF184
  c->lr=0x800BF18Cu; f_800BDE68(c); // 800BF188
  c->r[4]=c->r[3]|c->r[3]; // 800BF18C
  c->r[3]=c->r[26]|c->r[26]; // 800BF190
  c->lr=0x800BF198u; f_800BF28C(c); // 800BF194
L_800BF198:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800BF198
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BF19C
L_800BF1A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BF1A0
  if (!crb(c,0)) { IRQCHK(c); goto L_800BF154; } // 800BF1A4
  c->r[11]=c->r[1]+0x00000020u; // 800BF1A8
  c->lr=0x800BF1B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF1AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF1B0
  c->lr=c->r[0]; // 800BF1B4
  c->r[1]=c->r[1]+0x00000020u; // 800BF1B8
  return; // 800BF1BC
}

// fn_800BF1C0
void f_800BF1C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF1C0
  c->r[0]=c->lr; // 800BF1C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF1C8
  c->r[11]=c->r[1]+0x00000020u; // 800BF1CC
  c->lr=0x800BF1D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF1D0
  c->r[27]=c->r[3]|c->r[3]; // 800BF1D4
  c->r[28]=c->r[4]|c->r[4]; // 800BF1D8
  c->r[29]=0u+0x00000000u; // 800BF1DC
  c->r[31]=0u+0x00000000u; // 800BF1E0
  goto L_800BF264; // 800BF1E4
L_800BF1E8:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BF1E8
  c->r[30]=c->r[0]+c->r[31]; // 800BF1EC
  c->r[3]=c->r[30]|c->r[30]; // 800BF1F0
  c->lr=0x800BF1F8u; f_800BDE50(c); // 800BF1F4
  cmps(c,0,(int32_t)c->r[3],0); // 800BF1F8
  if (!crb(c,2)) { goto L_800BF25C; } // 800BF1FC
  c->r[3]=c->r[30]|c->r[30]; // 800BF200
  c->lr=0x800BF208u; f_800C2240(c); // 800BF204
  c->r[4]=c->r[3]|c->r[3]; // 800BF208
  c->r[3]=R32(c->r[27]+0x00000000u); // 800BF20C
  c->r[5]=c->r[29]+0x00000001u; // 800BF210
  c->lr=0x800BF218u; f_800C2220(c); // 800BF214
  c->r[4]=c->r[3]|c->r[3]; // 800BF218
  c->r[3]=c->r[30]|c->r[30]; // 800BF21C
  c->lr=0x800BF224u; f_800BDECC(c); // 800BF220
  cmps(c,0,(int32_t)c->r[28],0); // 800BF224
  if (crb(c,2)) { goto L_800BF238; } // 800BF228
  c->r[3]=c->r[30]|c->r[30]; // 800BF22C
  c->r[4]=c->r[28]|c->r[28]; // 800BF230
  c->lr=0x800BF238u; f_800BDE70(c); // 800BF234
L_800BF238:;
  c->r[3]=c->r[27]+0x00000014u; // 800BF238
  c->r[4]=c->r[30]|c->r[30]; // 800BF23C
  c->lr=0x800BF244u; f_8028CA70(c); // 800BF240
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BF244
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BF248
  W32(c->r[3]+c->r[0],c->r[30]); // 800BF24C
  c->r[3]=c->r[30]|c->r[30]; // 800BF250
  c->lr=0x800BF258u; f_800BDE68(c); // 800BF254
  goto L_800BF274; // 800BF258
L_800BF25C:;
  c->r[31]=c->r[31]+0x0000009Cu; // 800BF25C
  c->r[29]=c->r[29]+0x00000001u; // 800BF260
L_800BF264:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BF264
  cmpu(c,0,c->r[29],c->r[0]); // 800BF268
  if (crb(c,0)) { IRQCHK(c); goto L_800BF1E8; } // 800BF26C
  c->r[3]=0u+0x00000000u; // 800BF270
L_800BF274:;
  c->r[11]=c->r[1]+0x00000020u; // 800BF274
  c->lr=0x800BF27Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF278
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF27C
  c->lr=c->r[0]; // 800BF280
  c->r[1]=c->r[1]+0x00000020u; // 800BF284
  return; // 800BF288
}

// fn_800BF28C
void f_800BF28C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF28C
  c->r[0]=c->lr; // 800BF290
  W32(c->r[1]+0x00000124u,c->r[0]); // 800BF294
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800BF298
  W32(c->r[1]+0x00000118u,c->r[30]); // 800BF29C
  W32(c->r[1]+0x00000114u,c->r[29]); // 800BF2A0
  c->r[29]=c->r[3]|c->r[3]; // 800BF2A4
  c->r[31]=c->r[4]|c->r[4]; // 800BF2A8
  c->lr=0x800BF2B0u; f_800BF370(c); // 800BF2AC
  c->r[30]=c->r[3]|c->r[3]; // 800BF2B0
  cmps(c,0,(int32_t)c->r[3],0); // 800BF2B4
  if (crb(c,2)) { goto L_800BF354; } // 800BF2B8
  c->lr=0x800BF2C0u; f_800BE3E4(c); // 800BF2BC
  cmps(c,0,(int32_t)c->r[3],0); // 800BF2C0
  if (crb(c,2)) { goto L_800BF2EC; } // 800BF2C4
  c->r[3]=c->r[30]|c->r[30]; // 800BF2C8
  c->lr=0x800BF2D0u; f_800BDEB4(c); // 800BF2CC
  c->r[5]=c->r[3]|c->r[3]; // 800BF2D0
  c->r[3]=c->r[1]+0x00000008u; // 800BF2D4
  c->r[4]=0u+0x80460000u; // 800BF2D8
  c->r[4]=c->r[4]+0x00001220u; // 800BF2DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BF2E0
  c->lr=0x800BF2E8u; f_802E7CC4(c); // 800BF2E4
  goto L_800BF354; // 800BF2E8
L_800BF2EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF2EC
  c->lr=0x800BF2F4u; f_800C2218(c); // 800BF2F0
  cmps(c,0,(int32_t)c->r[3],0); // 800BF2F4
  if (crb(c,2)) { goto L_800BF320; } // 800BF2F8
  c->r[3]=c->r[30]|c->r[30]; // 800BF2FC
  c->lr=0x800BF304u; f_800BDEB4(c); // 800BF300
  c->r[5]=c->r[3]|c->r[3]; // 800BF304
  c->r[3]=c->r[1]+0x00000008u; // 800BF308
  c->r[4]=0u+0x80460000u; // 800BF30C
  c->r[4]=c->r[4]+0x00001244u; // 800BF310
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BF314
  c->lr=0x800BF31Cu; f_802E7CC4(c); // 800BF318
  goto L_800BF354; // 800BF31C
L_800BF320:;
  c->r[3]=c->r[31]|c->r[31]; // 800BF320
  c->lr=0x800BF328u; f_800BBF30(c); // 800BF324
  c->r[31]=c->r[3]|c->r[3]; // 800BF328
  c->r[3]=c->r[29]+0x00000014u; // 800BF32C
  c->r[4]=c->r[30]|c->r[30]; // 800BF330
  c->lr=0x800BF338u; f_8028CC6C(c); // 800BF334
  c->r[3]=c->r[30]|c->r[30]; // 800BF338
  c->lr=0x800BF340u; f_800BDDF4(c); // 800BF33C
  c->r[4]=0u+0x00000000u; // 800BF340
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800BF344
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800BF348
  c->r[3]=c->r[3]+c->r[0]; // 800BF34C
  W32(c->r[3]+0xFFFFFFFCu,c->r[4]); // 800BF350
L_800BF354:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800BF354
  c->r[30]=R32(c->r[1]+0x00000118u); // 800BF358
  c->r[29]=R32(c->r[1]+0x00000114u); // 800BF35C
  c->r[0]=R32(c->r[1]+0x00000124u); // 800BF360
  c->lr=c->r[0]; // 800BF364
  c->r[1]=c->r[1]+0x00000120u; // 800BF368
  return; // 800BF36C
}

// fn_800BF370
void f_800BF370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF370
  c->r[0]=c->lr; // 800BF374
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF37C
  c->r[31]=c->r[3]|c->r[3]; // 800BF380
  c->r[3]=c->r[4]|c->r[4]; // 800BF384
  c->lr=0x800BF38Cu; f_800BBF30(c); // 800BF388
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BF38C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BF390
  c->r[3]=c->r[4]+c->r[0]; // 800BF394
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BF398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF39C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF3A0
  c->lr=c->r[0]; // 800BF3A4
  c->r[1]=c->r[1]+0x00000010u; // 800BF3A8
  return; // 800BF3AC
}

// fn_800BF3B0
void f_800BF3B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF3B0
  c->r[0]=c->lr; // 800BF3B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF3B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF3BC
  c->r[31]=c->r[3]|c->r[3]; // 800BF3C0
  c->r[4]=0u+0x80460000u; // 800BF3C4
  c->r[0]=c->r[4]+0x000012B0u; // 800BF3C8
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BF3CC
  c->lr=0x800BF3D4u; f_800BF450(c); // 800BF3D0
  c->r[3]=c->r[31]|c->r[31]; // 800BF3D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF3D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF3DC
  c->lr=c->r[0]; // 800BF3E0
  c->r[1]=c->r[1]+0x00000010u; // 800BF3E4
  return; // 800BF3E8
}

// dtor_800BF3EC
void f_800BF3EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF3EC
  c->r[0]=c->lr; // 800BF3F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF3F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF3F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF3FC
  c->r[30]=c->r[3]|c->r[3]; // 800BF400
  c->r[31]=c->r[4]|c->r[4]; // 800BF404
  cmps(c,0,(int32_t)c->r[3],0); // 800BF408
  if (crb(c,2)) { goto L_800BF434; } // 800BF40C
  c->r[4]=0u+0x80460000u; // 800BF410
  c->r[0]=c->r[4]+0x000012B0u; // 800BF414
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BF418
  c->lr=0x800BF420u; f_800BF550(c); // 800BF41C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BF420
  cmps(c,0,(int32_t)c->r[0],0); // 800BF424
  if (!crb(c,1)) { goto L_800BF434; } // 800BF428
  c->r[3]=c->r[30]|c->r[30]; // 800BF42C
  c->lr=0x800BF434u; f_80047B20(c); // 800BF430
L_800BF434:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF438
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF43C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF440
  c->lr=c->r[0]; // 800BF444
  c->r[1]=c->r[1]+0x00000010u; // 800BF448
  return; // 800BF44C
}

// fn_800BF450
void f_800BF450(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BF450
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BF454
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BF458
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BF45C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BF460
  W32(c->r[3]+0x00000020u,c->r[0]); // 800BF464
  c->r[3]=c->r[3]+0x00000014u; // 800BF468
  c->r[4]=0u+0x00000040u; // 800BF46C
  f_8028CA58(c); return; // 800BF470
}

// fn_800BF474
void f_800BF474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF474
  c->r[0]=c->lr; // 800BF478
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF47C
  c->r[11]=c->r[1]+0x00000020u; // 800BF480
  c->lr=0x800BF488u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF484
  c->r[27]=c->r[3]|c->r[3]; // 800BF488
  c->r[28]=c->r[6]|c->r[6]; // 800BF48C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF490
  cmps(c,0,(int32_t)c->r[0],0); // 800BF494
  if (!crb(c,2)) { goto L_800BF538; } // 800BF498
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BF49C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BF4A0
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BF4A4
  c->lr=0x800BF4ACu; f_80056B5C(c); // 800BF4A8
  c->r[29]=c->r[3]|c->r[3]; // 800BF4AC
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BF4B0
  c->lr=0x800BF4B8u; f_80056B54(c); // 800BF4B4
  c->r[30]=0u+0x00000000u; // 800BF4B8
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)112); // 800BF4BC
  c->r[3]=c->r[3]+0x00000010u; // 800BF4C0
  c->lr=0x800BF4C8u; f_80054464(c); // 800BF4C4
  c->r[31]=c->r[3]|c->r[3]; // 800BF4C8
  cmps(c,0,(int32_t)c->r[3],0); // 800BF4CC
  if (crb(c,2)) { goto L_800BF4F8; } // 800BF4D0
  c->r[30]=0u+0x00000001u; // 800BF4D4
  c->r[4]=0u+0x800D0000u; // 800BF4D8
  c->r[4]=c->r[4]+0xFFFFFDE4u; // 800BF4DC
  c->r[5]=0u+0x800D0000u; // 800BF4E0
  c->r[5]=c->r[5]+0xFFFFFE38u; // 800BF4E4
  c->r[6]=0u+0x00000070u; // 800BF4E8
  c->r[7]=c->r[28]|c->r[28]; // 800BF4EC
  c->lr=0x800BF4F4u; f_802F05F0(c); // 800BF4F0
  c->r[31]=c->r[3]|c->r[3]; // 800BF4F4
L_800BF4F8:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800BF4F8
  c->r[3]=c->r[29]|c->r[29]; // 800BF4FC
  c->lr=0x800BF504u; f_80056B54(c); // 800BF500
  c->lr=0x800BF508u; f_80056B5C(c); // 800BF504
  c->r[29]=c->r[3]|c->r[3]; // 800BF508
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BF50C
  c->lr=0x800BF514u; f_80056B54(c); // 800BF510
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BF514
  c->lr=0x800BF51Cu; f_80054464(c); // 800BF518
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800BF51C
  c->r[3]=c->r[29]|c->r[29]; // 800BF520
  c->lr=0x800BF528u; f_80056B54(c); // 800BF524
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BF528
  c->r[4]=0u+0x00000000u; // 800BF52C
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BF530
  c->lr=0x800BF538u; f_800060B8(c); // 800BF534
L_800BF538:;
  c->r[11]=c->r[1]+0x00000020u; // 800BF538
  c->lr=0x800BF540u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF53C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF540
  c->lr=c->r[0]; // 800BF544
  c->r[1]=c->r[1]+0x00000020u; // 800BF548
  return; // 800BF54C
}

// fn_800BF550
void f_800BF550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF550
  c->r[0]=c->lr; // 800BF554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF55C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF560
  c->r[30]=c->r[3]|c->r[3]; // 800BF564
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF568
  cmps(c,0,(int32_t)c->r[0],0); // 800BF56C
  if (crb(c,2)) { goto L_800BF5C4; } // 800BF570
  c->lr=0x800BF578u; f_80056B5C(c); // 800BF574
  c->r[31]=c->r[3]|c->r[3]; // 800BF578
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BF57C
  c->lr=0x800BF584u; f_80056B54(c); // 800BF580
  c->r[3]=R32(c->r[30]+0x00000008u); // 800BF584
  c->r[4]=0u+0x800D0000u; // 800BF588
  c->r[4]=c->r[4]+0xFFFFFE38u; // 800BF58C
  c->lr=0x800BF594u; f_802F0920(c); // 800BF590
  c->r[3]=c->r[31]|c->r[31]; // 800BF594
  c->lr=0x800BF59Cu; f_80056B54(c); // 800BF598
  c->lr=0x800BF5A0u; f_80056B5C(c); // 800BF59C
  c->r[31]=c->r[3]|c->r[3]; // 800BF5A0
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BF5A4
  c->lr=0x800BF5ACu; f_80056B54(c); // 800BF5A8
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BF5AC
  c->lr=0x800BF5B4u; f_80054420(c); // 800BF5B0
  c->r[3]=c->r[31]|c->r[31]; // 800BF5B4
  c->lr=0x800BF5BCu; f_80056B54(c); // 800BF5B8
  c->r[3]=c->r[30]|c->r[30]; // 800BF5BC
  c->lr=0x800BF5C4u; f_800BF450(c); // 800BF5C0
L_800BF5C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF5C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF5C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF5CC
  c->lr=c->r[0]; // 800BF5D0
  c->r[1]=c->r[1]+0x00000010u; // 800BF5D4
  return; // 800BF5D8
}

// fn_800BF5DC
void f_800BF5DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF5DC
  c->r[0]=c->lr; // 800BF5E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF5E4
  c->r[11]=c->r[1]+0x00000020u; // 800BF5E8
  c->lr=0x800BF5F0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF5EC
  c->r[26]=c->r[3]|c->r[3]; // 800BF5F0
  c->r[27]=c->r[4]|c->r[4]; // 800BF5F4
  c->r[28]=c->r[5]|c->r[5]; // 800BF5F8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BF5FC
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800BF600
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BF604
  goto L_800BF658; // 800BF608
L_800BF60C:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BF60C
  c->r[30]=R32(c->r[3]+c->r[31]); // 800BF610
  cmps(c,0,(int32_t)c->r[30],0); // 800BF614
  if (crb(c,2)) { goto L_800BF650; } // 800BF618
  c->r[3]=c->r[30]|c->r[30]; // 800BF61C
  c->lr=0x800BF624u; f_800C2254(c); // 800BF620
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 800BF624
  if (crb(c,0)) { goto L_800BF650; } // 800BF628
  cmps(c,0,(int32_t)c->r[28],0); // 800BF62C
  if (crb(c,2)) { goto L_800BF63C; } // 800BF630
  c->r[3]=c->r[30]|c->r[30]; // 800BF634
  c->lr=0x800BF63Cu; f_800C2248(c); // 800BF638
L_800BF63C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF63C
  c->lr=0x800BF644u; f_800BDE68(c); // 800BF640
  c->r[4]=c->r[3]|c->r[3]; // 800BF644
  c->r[3]=c->r[26]|c->r[26]; // 800BF648
  c->lr=0x800BF650u; f_800BF744(c); // 800BF64C
L_800BF650:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800BF650
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BF654
L_800BF658:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BF658
  if (!crb(c,0)) { IRQCHK(c); goto L_800BF60C; } // 800BF65C
  c->r[11]=c->r[1]+0x00000020u; // 800BF660
  c->lr=0x800BF668u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF664
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF668
  c->lr=c->r[0]; // 800BF66C
  c->r[1]=c->r[1]+0x00000020u; // 800BF670
  return; // 800BF674
}

// fn_800BF678
void f_800BF678(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF678
  c->r[0]=c->lr; // 800BF67C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF680
  c->r[11]=c->r[1]+0x00000020u; // 800BF684
  c->lr=0x800BF68Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF688
  c->r[27]=c->r[3]|c->r[3]; // 800BF68C
  c->r[28]=c->r[4]|c->r[4]; // 800BF690
  c->r[29]=0u+0x00000000u; // 800BF694
  c->r[31]=0u+0x00000000u; // 800BF698
  goto L_800BF71C; // 800BF69C
L_800BF6A0:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BF6A0
  c->r[30]=c->r[0]+c->r[31]; // 800BF6A4
  c->r[3]=c->r[30]|c->r[30]; // 800BF6A8
  c->lr=0x800BF6B0u; f_800BDE50(c); // 800BF6AC
  cmps(c,0,(int32_t)c->r[3],0); // 800BF6B0
  if (!crb(c,2)) { goto L_800BF714; } // 800BF6B4
  c->r[3]=c->r[30]|c->r[30]; // 800BF6B8
  c->lr=0x800BF6C0u; f_800C2240(c); // 800BF6BC
  c->r[4]=c->r[3]|c->r[3]; // 800BF6C0
  c->r[3]=R32(c->r[27]+0x00000000u); // 800BF6C4
  c->r[5]=c->r[29]+0x00000001u; // 800BF6C8
  c->lr=0x800BF6D0u; f_800C2220(c); // 800BF6CC
  c->r[4]=c->r[3]|c->r[3]; // 800BF6D0
  c->r[3]=c->r[30]|c->r[30]; // 800BF6D4
  c->lr=0x800BF6DCu; f_800BDECC(c); // 800BF6D8
  cmps(c,0,(int32_t)c->r[28],0); // 800BF6DC
  if (crb(c,2)) { goto L_800BF6F0; } // 800BF6E0
  c->r[3]=c->r[30]|c->r[30]; // 800BF6E4
  c->r[4]=c->r[28]|c->r[28]; // 800BF6E8
  c->lr=0x800BF6F0u; f_800BDE70(c); // 800BF6EC
L_800BF6F0:;
  c->r[3]=c->r[27]+0x00000014u; // 800BF6F0
  c->r[4]=c->r[30]|c->r[30]; // 800BF6F4
  c->lr=0x800BF6FCu; f_8028CA70(c); // 800BF6F8
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BF6FC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BF700
  W32(c->r[3]+c->r[0],c->r[30]); // 800BF704
  c->r[3]=c->r[30]|c->r[30]; // 800BF708
  c->lr=0x800BF710u; f_800BDE68(c); // 800BF70C
  goto L_800BF72C; // 800BF710
L_800BF714:;
  c->r[31]=c->r[31]+0x00000070u; // 800BF714
  c->r[29]=c->r[29]+0x00000001u; // 800BF718
L_800BF71C:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BF71C
  cmpu(c,0,c->r[29],c->r[0]); // 800BF720
  if (crb(c,0)) { IRQCHK(c); goto L_800BF6A0; } // 800BF724
  c->r[3]=0u+0x00000000u; // 800BF728
L_800BF72C:;
  c->r[11]=c->r[1]+0x00000020u; // 800BF72C
  c->lr=0x800BF734u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF730
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF734
  c->lr=c->r[0]; // 800BF738
  c->r[1]=c->r[1]+0x00000020u; // 800BF73C
  return; // 800BF740
}

// fn_800BF744
void f_800BF744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF744
  c->r[0]=c->lr; // 800BF748
  W32(c->r[1]+0x00000124u,c->r[0]); // 800BF74C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800BF750
  W32(c->r[1]+0x00000118u,c->r[30]); // 800BF754
  W32(c->r[1]+0x00000114u,c->r[29]); // 800BF758
  c->r[29]=c->r[3]|c->r[3]; // 800BF75C
  c->r[31]=c->r[4]|c->r[4]; // 800BF760
  c->lr=0x800BF768u; f_800BBAF4(c); // 800BF764
  c->r[30]=c->r[3]|c->r[3]; // 800BF768
  cmps(c,0,(int32_t)c->r[3],0); // 800BF76C
  if (crb(c,2)) { goto L_800BF80C; } // 800BF770
  c->lr=0x800BF778u; f_800BE3E4(c); // 800BF774
  cmps(c,0,(int32_t)c->r[3],0); // 800BF778
  if (crb(c,2)) { goto L_800BF7A4; } // 800BF77C
  c->r[3]=c->r[30]|c->r[30]; // 800BF780
  c->lr=0x800BF788u; f_800BDEB4(c); // 800BF784
  c->r[5]=c->r[3]|c->r[3]; // 800BF788
  c->r[3]=c->r[1]+0x00000008u; // 800BF78C
  c->r[4]=0u+0x80460000u; // 800BF790
  c->r[4]=c->r[4]+0x00001220u; // 800BF794
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BF798
  c->lr=0x800BF7A0u; f_802E7CC4(c); // 800BF79C
  goto L_800BF80C; // 800BF7A0
L_800BF7A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF7A4
  c->lr=0x800BF7ACu; f_800C2218(c); // 800BF7A8
  cmps(c,0,(int32_t)c->r[3],0); // 800BF7AC
  if (crb(c,2)) { goto L_800BF7D8; } // 800BF7B0
  c->r[3]=c->r[30]|c->r[30]; // 800BF7B4
  c->lr=0x800BF7BCu; f_800BDEB4(c); // 800BF7B8
  c->r[5]=c->r[3]|c->r[3]; // 800BF7BC
  c->r[3]=c->r[1]+0x00000008u; // 800BF7C0
  c->r[4]=0u+0x80460000u; // 800BF7C4
  c->r[4]=c->r[4]+0x00001244u; // 800BF7C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BF7CC
  c->lr=0x800BF7D4u; f_802E7CC4(c); // 800BF7D0
  goto L_800BF80C; // 800BF7D4
L_800BF7D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800BF7D8
  c->lr=0x800BF7E0u; f_800BBF30(c); // 800BF7DC
  c->r[31]=c->r[3]|c->r[3]; // 800BF7E0
  c->r[3]=c->r[29]+0x00000014u; // 800BF7E4
  c->r[4]=c->r[30]|c->r[30]; // 800BF7E8
  c->lr=0x800BF7F0u; f_8028CC6C(c); // 800BF7EC
  c->r[3]=c->r[30]|c->r[30]; // 800BF7F0
  c->lr=0x800BF7F8u; f_800BDDF4(c); // 800BF7F4
  c->r[4]=0u+0x00000000u; // 800BF7F8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800BF7FC
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800BF800
  c->r[3]=c->r[3]+c->r[0]; // 800BF804
  W32(c->r[3]+0xFFFFFFFCu,c->r[4]); // 800BF808
L_800BF80C:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800BF80C
  c->r[30]=R32(c->r[1]+0x00000118u); // 800BF810
  c->r[29]=R32(c->r[1]+0x00000114u); // 800BF814
  c->r[0]=R32(c->r[1]+0x00000124u); // 800BF818
  c->lr=c->r[0]; // 800BF81C
  c->r[1]=c->r[1]+0x00000120u; // 800BF820
  return; // 800BF824
}

// fn_800BF828
void f_800BF828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF828
  c->r[0]=c->lr; // 800BF82C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF834
  c->r[31]=c->r[3]|c->r[3]; // 800BF838
  c->r[4]=0u+0x80460000u; // 800BF83C
  c->r[0]=c->r[4]+0x000012BCu; // 800BF840
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BF844
  c->lr=0x800BF84Cu; f_800BF8C8(c); // 800BF848
  c->r[3]=c->r[31]|c->r[31]; // 800BF84C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF850
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF854
  c->lr=c->r[0]; // 800BF858
  c->r[1]=c->r[1]+0x00000010u; // 800BF85C
  return; // 800BF860
}

// fn_800BF864
void f_800BF864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF864
  c->r[0]=c->lr; // 800BF868
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF86C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF870
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF874
  c->r[30]=c->r[3]|c->r[3]; // 800BF878
  c->r[31]=c->r[4]|c->r[4]; // 800BF87C
  cmps(c,0,(int32_t)c->r[3],0); // 800BF880
  if (crb(c,2)) { goto L_800BF8AC; } // 800BF884
  c->r[4]=0u+0x80460000u; // 800BF888
  c->r[0]=c->r[4]+0x000012BCu; // 800BF88C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BF890
  c->lr=0x800BF898u; f_800BF9C8(c); // 800BF894
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BF898
  cmps(c,0,(int32_t)c->r[0],0); // 800BF89C
  if (!crb(c,1)) { goto L_800BF8AC; } // 800BF8A0
  c->r[3]=c->r[30]|c->r[30]; // 800BF8A4
  c->lr=0x800BF8ACu; f_80047B20(c); // 800BF8A8
L_800BF8AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF8AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF8B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF8B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF8B8
  c->lr=c->r[0]; // 800BF8BC
  c->r[1]=c->r[1]+0x00000010u; // 800BF8C0
  return; // 800BF8C4
}

// fn_800BF8C8
void f_800BF8C8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BF8C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BF8CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BF8D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BF8D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BF8D8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800BF8DC
  c->r[3]=c->r[3]+0x00000014u; // 800BF8E0
  c->r[4]=0u+0x00000040u; // 800BF8E4
  f_8028CA58(c); return; // 800BF8E8
}

// fn_800BF8EC
void f_800BF8EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF8EC
  c->r[0]=c->lr; // 800BF8F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF8F4
  c->r[11]=c->r[1]+0x00000020u; // 800BF8F8
  c->lr=0x800BF900u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF8FC
  c->r[27]=c->r[3]|c->r[3]; // 800BF900
  c->r[28]=c->r[6]|c->r[6]; // 800BF904
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF908
  cmps(c,0,(int32_t)c->r[0],0); // 800BF90C
  if (!crb(c,2)) { goto L_800BF9B0; } // 800BF910
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BF914
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BF918
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BF91C
  c->lr=0x800BF924u; f_80056B5C(c); // 800BF920
  c->r[29]=c->r[3]|c->r[3]; // 800BF924
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BF928
  c->lr=0x800BF930u; f_80056B54(c); // 800BF92C
  c->r[30]=0u+0x00000000u; // 800BF930
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)168); // 800BF934
  c->r[3]=c->r[3]+0x00000010u; // 800BF938
  c->lr=0x800BF940u; f_80054464(c); // 800BF93C
  c->r[31]=c->r[3]|c->r[3]; // 800BF940
  cmps(c,0,(int32_t)c->r[3],0); // 800BF944
  if (crb(c,2)) { goto L_800BF970; } // 800BF948
  c->r[30]=0u+0x00000001u; // 800BF94C
  c->r[4]=0u+0x800D0000u; // 800BF950
  c->r[4]=c->r[4]+0xFFFFFB9Cu; // 800BF954
  c->r[5]=0u+0x800D0000u; // 800BF958
  c->r[5]=c->r[5]+0xFFFFFBE8u; // 800BF95C
  c->r[6]=0u+0x000000A8u; // 800BF960
  c->r[7]=c->r[28]|c->r[28]; // 800BF964
  c->lr=0x800BF96Cu; f_802F05F0(c); // 800BF968
  c->r[31]=c->r[3]|c->r[3]; // 800BF96C
L_800BF970:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800BF970
  c->r[3]=c->r[29]|c->r[29]; // 800BF974
  c->lr=0x800BF97Cu; f_80056B54(c); // 800BF978
  c->lr=0x800BF980u; f_80056B5C(c); // 800BF97C
  c->r[29]=c->r[3]|c->r[3]; // 800BF980
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BF984
  c->lr=0x800BF98Cu; f_80056B54(c); // 800BF988
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BF98C
  c->lr=0x800BF994u; f_80054464(c); // 800BF990
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800BF994
  c->r[3]=c->r[29]|c->r[29]; // 800BF998
  c->lr=0x800BF9A0u; f_80056B54(c); // 800BF99C
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BF9A0
  c->r[4]=0u+0x00000000u; // 800BF9A4
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BF9A8
  c->lr=0x800BF9B0u; f_800060B8(c); // 800BF9AC
L_800BF9B0:;
  c->r[11]=c->r[1]+0x00000020u; // 800BF9B0
  c->lr=0x800BF9B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF9B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF9B8
  c->lr=c->r[0]; // 800BF9BC
  c->r[1]=c->r[1]+0x00000020u; // 800BF9C0
  return; // 800BF9C4
}

// fn_800BF9C8
void f_800BF9C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF9C8
  c->r[0]=c->lr; // 800BF9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF9D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF9D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF9D8
  c->r[30]=c->r[3]|c->r[3]; // 800BF9DC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF9E0
  cmps(c,0,(int32_t)c->r[0],0); // 800BF9E4
  if (crb(c,2)) { goto L_800BFA3C; } // 800BF9E8
  c->lr=0x800BF9F0u; f_80056B5C(c); // 800BF9EC
  c->r[31]=c->r[3]|c->r[3]; // 800BF9F0
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BF9F4
  c->lr=0x800BF9FCu; f_80056B54(c); // 800BF9F8
  c->r[3]=R32(c->r[30]+0x00000008u); // 800BF9FC
  c->r[4]=0u+0x800D0000u; // 800BFA00
  c->r[4]=c->r[4]+0xFFFFFBE8u; // 800BFA04
  c->lr=0x800BFA0Cu; f_802F0920(c); // 800BFA08
  c->r[3]=c->r[31]|c->r[31]; // 800BFA0C
  c->lr=0x800BFA14u; f_80056B54(c); // 800BFA10
  c->lr=0x800BFA18u; f_80056B5C(c); // 800BFA14
  c->r[31]=c->r[3]|c->r[3]; // 800BFA18
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BFA1C
  c->lr=0x800BFA24u; f_80056B54(c); // 800BFA20
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BFA24
  c->lr=0x800BFA2Cu; f_80054420(c); // 800BFA28
  c->r[3]=c->r[31]|c->r[31]; // 800BFA2C
  c->lr=0x800BFA34u; f_80056B54(c); // 800BFA30
  c->r[3]=c->r[30]|c->r[30]; // 800BFA34
  c->lr=0x800BFA3Cu; f_800BF8C8(c); // 800BFA38
L_800BFA3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFA3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BFA40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFA44
  c->lr=c->r[0]; // 800BFA48
  c->r[1]=c->r[1]+0x00000010u; // 800BFA4C
  return; // 800BFA50
}

// fn_800BFA54
void f_800BFA54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFA54
  c->r[0]=c->lr; // 800BFA58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BFA5C
  c->r[11]=c->r[1]+0x00000020u; // 800BFA60
  c->lr=0x800BFA68u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFA64
  c->r[26]=c->r[3]|c->r[3]; // 800BFA68
  c->r[27]=c->r[4]|c->r[4]; // 800BFA6C
  c->r[28]=c->r[5]|c->r[5]; // 800BFA70
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BFA74
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800BFA78
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BFA7C
  goto L_800BFAD0; // 800BFA80
L_800BFA84:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BFA84
  c->r[30]=R32(c->r[3]+c->r[31]); // 800BFA88
  cmps(c,0,(int32_t)c->r[30],0); // 800BFA8C
  if (crb(c,2)) { goto L_800BFAC8; } // 800BFA90
  c->r[3]=c->r[30]|c->r[30]; // 800BFA94
  c->lr=0x800BFA9Cu; f_800C2254(c); // 800BFA98
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 800BFA9C
  if (crb(c,0)) { goto L_800BFAC8; } // 800BFAA0
  cmps(c,0,(int32_t)c->r[28],0); // 800BFAA4
  if (crb(c,2)) { goto L_800BFAB4; } // 800BFAA8
  c->r[3]=c->r[30]|c->r[30]; // 800BFAAC
  c->lr=0x800BFAB4u; f_800C2248(c); // 800BFAB0
L_800BFAB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFAB4
  c->lr=0x800BFABCu; f_800BDE68(c); // 800BFAB8
  c->r[4]=c->r[3]|c->r[3]; // 800BFABC
  c->r[3]=c->r[26]|c->r[26]; // 800BFAC0
  c->lr=0x800BFAC8u; f_800BFBBC(c); // 800BFAC4
L_800BFAC8:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800BFAC8
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BFACC
L_800BFAD0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BFAD0
  if (!crb(c,0)) { IRQCHK(c); goto L_800BFA84; } // 800BFAD4
  c->r[11]=c->r[1]+0x00000020u; // 800BFAD8
  c->lr=0x800BFAE0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BFAE0
  c->lr=c->r[0]; // 800BFAE4
  c->r[1]=c->r[1]+0x00000020u; // 800BFAE8
  return; // 800BFAEC
}

// fn_800BFAF0
void f_800BFAF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFAF0
  c->r[0]=c->lr; // 800BFAF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BFAF8
  c->r[11]=c->r[1]+0x00000020u; // 800BFAFC
  c->lr=0x800BFB04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFB00
  c->r[27]=c->r[3]|c->r[3]; // 800BFB04
  c->r[28]=c->r[4]|c->r[4]; // 800BFB08
  c->r[29]=0u+0x00000000u; // 800BFB0C
  c->r[31]=0u+0x00000000u; // 800BFB10
  goto L_800BFB94; // 800BFB14
L_800BFB18:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800BFB18
  c->r[30]=c->r[0]+c->r[31]; // 800BFB1C
  c->r[3]=c->r[30]|c->r[30]; // 800BFB20
  c->lr=0x800BFB28u; f_800BDE50(c); // 800BFB24
  cmps(c,0,(int32_t)c->r[3],0); // 800BFB28
  if (!crb(c,2)) { goto L_800BFB8C; } // 800BFB2C
  c->r[3]=c->r[30]|c->r[30]; // 800BFB30
  c->lr=0x800BFB38u; f_800C2240(c); // 800BFB34
  c->r[4]=c->r[3]|c->r[3]; // 800BFB38
  c->r[3]=R32(c->r[27]+0x00000000u); // 800BFB3C
  c->r[5]=c->r[29]+0x00000001u; // 800BFB40
  c->lr=0x800BFB48u; f_800C2220(c); // 800BFB44
  c->r[4]=c->r[3]|c->r[3]; // 800BFB48
  c->r[3]=c->r[30]|c->r[30]; // 800BFB4C
  c->lr=0x800BFB54u; f_800BDECC(c); // 800BFB50
  cmps(c,0,(int32_t)c->r[28],0); // 800BFB54
  if (crb(c,2)) { goto L_800BFB68; } // 800BFB58
  c->r[3]=c->r[30]|c->r[30]; // 800BFB5C
  c->r[4]=c->r[28]|c->r[28]; // 800BFB60
  c->lr=0x800BFB68u; f_800BDE70(c); // 800BFB64
L_800BFB68:;
  c->r[3]=c->r[27]+0x00000014u; // 800BFB68
  c->r[4]=c->r[30]|c->r[30]; // 800BFB6C
  c->lr=0x800BFB74u; f_8028CA70(c); // 800BFB70
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BFB74
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BFB78
  W32(c->r[3]+c->r[0],c->r[30]); // 800BFB7C
  c->r[3]=c->r[30]|c->r[30]; // 800BFB80
  c->lr=0x800BFB88u; f_800BDE68(c); // 800BFB84
  goto L_800BFBA4; // 800BFB88
L_800BFB8C:;
  c->r[31]=c->r[31]+0x000000A8u; // 800BFB8C
  c->r[29]=c->r[29]+0x00000001u; // 800BFB90
L_800BFB94:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BFB94
  cmpu(c,0,c->r[29],c->r[0]); // 800BFB98
  if (crb(c,0)) { IRQCHK(c); goto L_800BFB18; } // 800BFB9C
  c->r[3]=0u+0x00000000u; // 800BFBA0
L_800BFBA4:;
  c->r[11]=c->r[1]+0x00000020u; // 800BFBA4
  c->lr=0x800BFBACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFBA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BFBAC
  c->lr=c->r[0]; // 800BFBB0
  c->r[1]=c->r[1]+0x00000020u; // 800BFBB4
  return; // 800BFBB8
}

// fn_800BFBBC
void f_800BFBBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFBBC
  c->r[0]=c->lr; // 800BFBC0
  W32(c->r[1]+0x00000124u,c->r[0]); // 800BFBC4
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800BFBC8
  W32(c->r[1]+0x00000118u,c->r[30]); // 800BFBCC
  W32(c->r[1]+0x00000114u,c->r[29]); // 800BFBD0
  c->r[29]=c->r[3]|c->r[3]; // 800BFBD4
  c->r[31]=c->r[4]|c->r[4]; // 800BFBD8
  c->lr=0x800BFBE0u; f_800BFD10(c); // 800BFBDC
  c->r[30]=c->r[3]|c->r[3]; // 800BFBE0
  cmps(c,0,(int32_t)c->r[3],0); // 800BFBE4
  if (crb(c,2)) { goto L_800BFC84; } // 800BFBE8
  c->lr=0x800BFBF0u; f_800BE3E4(c); // 800BFBEC
  cmps(c,0,(int32_t)c->r[3],0); // 800BFBF0
  if (crb(c,2)) { goto L_800BFC1C; } // 800BFBF4
  c->r[3]=c->r[30]|c->r[30]; // 800BFBF8
  c->lr=0x800BFC00u; f_800BDEB4(c); // 800BFBFC
  c->r[5]=c->r[3]|c->r[3]; // 800BFC00
  c->r[3]=c->r[1]+0x00000008u; // 800BFC04
  c->r[4]=0u+0x80460000u; // 800BFC08
  c->r[4]=c->r[4]+0x00001220u; // 800BFC0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BFC10
  c->lr=0x800BFC18u; f_802E7CC4(c); // 800BFC14
  goto L_800BFC84; // 800BFC18
L_800BFC1C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFC1C
  c->lr=0x800BFC24u; f_800C2218(c); // 800BFC20
  cmps(c,0,(int32_t)c->r[3],0); // 800BFC24
  if (crb(c,2)) { goto L_800BFC50; } // 800BFC28
  c->r[3]=c->r[30]|c->r[30]; // 800BFC2C
  c->lr=0x800BFC34u; f_800BDEB4(c); // 800BFC30
  c->r[5]=c->r[3]|c->r[3]; // 800BFC34
  c->r[3]=c->r[1]+0x00000008u; // 800BFC38
  c->r[4]=0u+0x80460000u; // 800BFC3C
  c->r[4]=c->r[4]+0x00001244u; // 800BFC40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BFC44
  c->lr=0x800BFC4Cu; f_802E7CC4(c); // 800BFC48
  goto L_800BFC84; // 800BFC4C
L_800BFC50:;
  c->r[3]=c->r[31]|c->r[31]; // 800BFC50
  c->lr=0x800BFC58u; f_800BBF30(c); // 800BFC54
  c->r[31]=c->r[3]|c->r[3]; // 800BFC58
  c->r[3]=c->r[29]+0x00000014u; // 800BFC5C
  c->r[4]=c->r[30]|c->r[30]; // 800BFC60
  c->lr=0x800BFC68u; f_8028CC6C(c); // 800BFC64
  c->r[3]=c->r[30]|c->r[30]; // 800BFC68
  c->lr=0x800BFC70u; f_800BDDF4(c); // 800BFC6C
  c->r[4]=0u+0x00000000u; // 800BFC70
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800BFC74
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800BFC78
  c->r[3]=c->r[3]+c->r[0]; // 800BFC7C
  W32(c->r[3]+0xFFFFFFFCu,c->r[4]); // 800BFC80
L_800BFC84:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800BFC84
  c->r[30]=R32(c->r[1]+0x00000118u); // 800BFC88
  c->r[29]=R32(c->r[1]+0x00000114u); // 800BFC8C
  c->r[0]=R32(c->r[1]+0x00000124u); // 800BFC90
  c->lr=c->r[0]; // 800BFC94
  c->r[1]=c->r[1]+0x00000120u; // 800BFC98
  return; // 800BFC9C
}

// fn_800BFCA0
void f_800BFCA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFCA0
  c->r[0]=c->lr; // 800BFCA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFCA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFCAC
  c->r[31]=c->r[3]|c->r[3]; // 800BFCB0
  c->r[3]=c->r[4]|c->r[4]; // 800BFCB4
  c->lr=0x800BFCBCu; f_800BBF30(c); // 800BFCB8
  cmps(c,0,(int32_t)c->r[3],0); // 800BFCBC
  if (!crb(c,2)) { goto L_800BFCCC; } // 800BFCC0
  c->r[3]=0u+0x00000000u; // 800BFCC4
  goto L_800BFCFC; // 800BFCC8
L_800BFCCC:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BFCCC
  cmpu(c,0,c->r[3],c->r[0]); // 800BFCD0
  if (!crb(c,1)) { goto L_800BFCE0; } // 800BFCD4
  c->r[3]=0u+0x00000000u; // 800BFCD8
  goto L_800BFCFC; // 800BFCDC
L_800BFCE0:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BFCE0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFCE4
  c->r[3]=c->r[4]+c->r[0]; // 800BFCE8
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BFCEC
  c->r[0]=0u-c->r[3]; // 800BFCF0
  c->r[0]=c->r[0]|c->r[3]; // 800BFCF4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BFCF8
L_800BFCFC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFCFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFD00
  c->lr=c->r[0]; // 800BFD04
  c->r[1]=c->r[1]+0x00000010u; // 800BFD08
  return; // 800BFD0C
}

// fn_800BFD10
void f_800BFD10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFD10
  c->r[0]=c->lr; // 800BFD14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFD18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFD1C
  c->r[31]=c->r[3]|c->r[3]; // 800BFD20
  c->r[3]=c->r[4]|c->r[4]; // 800BFD24
  c->lr=0x800BFD2Cu; f_800BBF30(c); // 800BFD28
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800BFD2C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFD30
  c->r[3]=c->r[4]+c->r[0]; // 800BFD34
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800BFD38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFD3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFD40
  c->lr=c->r[0]; // 800BFD44
  c->r[1]=c->r[1]+0x00000010u; // 800BFD48
  return; // 800BFD4C
}

// fn_800BFD50
void f_800BFD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFD50
  c->r[0]=c->lr; // 800BFD54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFD58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFD5C
  c->r[31]=c->r[3]|c->r[3]; // 800BFD60
  c->r[4]=0u+0x80460000u; // 800BFD64
  c->r[0]=c->r[4]+0x000012C8u; // 800BFD68
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BFD6C
  c->lr=0x800BFD74u; f_800BFDF0(c); // 800BFD70
  c->r[3]=c->r[31]|c->r[31]; // 800BFD74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFD78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFD7C
  c->lr=c->r[0]; // 800BFD80
  c->r[1]=c->r[1]+0x00000010u; // 800BFD84
  return; // 800BFD88
}

// fn_800BFD8C
void f_800BFD8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFD8C
  c->r[0]=c->lr; // 800BFD90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFD94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFD98
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BFD9C
  c->r[30]=c->r[3]|c->r[3]; // 800BFDA0
  c->r[31]=c->r[4]|c->r[4]; // 800BFDA4
  cmps(c,0,(int32_t)c->r[3],0); // 800BFDA8
  if (crb(c,2)) { goto L_800BFDD4; } // 800BFDAC
  c->r[4]=0u+0x80460000u; // 800BFDB0
  c->r[0]=c->r[4]+0x000012C8u; // 800BFDB4
  W32(c->r[3]+0x00000024u,c->r[0]); // 800BFDB8
  c->lr=0x800BFDC0u; f_800BFEF0(c); // 800BFDBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800BFDC0
  cmps(c,0,(int32_t)c->r[0],0); // 800BFDC4
  if (!crb(c,1)) { goto L_800BFDD4; } // 800BFDC8
  c->r[3]=c->r[30]|c->r[30]; // 800BFDCC
  c->lr=0x800BFDD4u; f_80047B20(c); // 800BFDD0
L_800BFDD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFDD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFDD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BFDDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFDE0
  c->lr=c->r[0]; // 800BFDE4
  c->r[1]=c->r[1]+0x00000010u; // 800BFDE8
  return; // 800BFDEC
}

// fn_800BFDF0
void f_800BFDF0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800BFDF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BFDF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BFDF8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BFDFC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BFE00
  W32(c->r[3]+0x00000020u,c->r[0]); // 800BFE04
  c->r[3]=c->r[3]+0x00000014u; // 800BFE08
  c->r[4]=0u+0x00000040u; // 800BFE0C
  f_8028CA58(c); return; // 800BFE10
}

// fn_800BFE14
void f_800BFE14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFE14
  c->r[0]=c->lr; // 800BFE18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BFE1C
  c->r[11]=c->r[1]+0x00000020u; // 800BFE20
  c->lr=0x800BFE28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFE24
  c->r[27]=c->r[3]|c->r[3]; // 800BFE28
  c->r[28]=c->r[6]|c->r[6]; // 800BFE2C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFE30
  cmps(c,0,(int32_t)c->r[0],0); // 800BFE34
  if (!crb(c,2)) { goto L_800BFED8; } // 800BFE38
  W32(c->r[3]+0x00000010u,c->r[5]); // 800BFE3C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BFE40
  W32(c->r[3]+0x00000004u,c->r[6]); // 800BFE44
  c->lr=0x800BFE4Cu; f_80056B5C(c); // 800BFE48
  c->r[29]=c->r[3]|c->r[3]; // 800BFE4C
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BFE50
  c->lr=0x800BFE58u; f_80056B54(c); // 800BFE54
  c->r[30]=0u+0x00000000u; // 800BFE58
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)188); // 800BFE5C
  c->r[3]=c->r[3]+0x00000010u; // 800BFE60
  c->lr=0x800BFE68u; f_80054464(c); // 800BFE64
  c->r[31]=c->r[3]|c->r[3]; // 800BFE68
  cmps(c,0,(int32_t)c->r[3],0); // 800BFE6C
  if (crb(c,2)) { goto L_800BFE98; } // 800BFE70
  c->r[30]=0u+0x00000001u; // 800BFE74
  c->r[4]=0u+0x800D0000u; // 800BFE78
  c->r[4]=c->r[4]+0xFFFFC35Cu; // 800BFE7C
  c->r[5]=0u+0x800D0000u; // 800BFE80
  c->r[5]=c->r[5]+0xFFFFC3A0u; // 800BFE84
  c->r[6]=0u+0x000000BCu; // 800BFE88
  c->r[7]=c->r[28]|c->r[28]; // 800BFE8C
  c->lr=0x800BFE94u; f_802F05F0(c); // 800BFE90
  c->r[31]=c->r[3]|c->r[3]; // 800BFE94
L_800BFE98:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800BFE98
  c->r[3]=c->r[29]|c->r[29]; // 800BFE9C
  c->lr=0x800BFEA4u; f_80056B54(c); // 800BFEA0
  c->lr=0x800BFEA8u; f_80056B5C(c); // 800BFEA4
  c->r[29]=c->r[3]|c->r[3]; // 800BFEA8
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BFEAC
  c->lr=0x800BFEB4u; f_80056B54(c); // 800BFEB0
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BFEB4
  c->lr=0x800BFEBCu; f_80054464(c); // 800BFEB8
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800BFEBC
  c->r[3]=c->r[29]|c->r[29]; // 800BFEC0
  c->lr=0x800BFEC8u; f_80056B54(c); // 800BFEC4
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800BFEC8
  c->r[4]=0u+0x00000000u; // 800BFECC
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800BFED0
  c->lr=0x800BFED8u; f_800060B8(c); // 800BFED4
L_800BFED8:;
  c->r[11]=c->r[1]+0x00000020u; // 800BFED8
  c->lr=0x800BFEE0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFEDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BFEE0
  c->lr=c->r[0]; // 800BFEE4
  c->r[1]=c->r[1]+0x00000020u; // 800BFEE8
  return; // 800BFEEC
}

// fn_800BFEF0
void f_800BFEF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFEF0
  c->r[0]=c->lr; // 800BFEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFEF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFEFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BFF00
  c->r[30]=c->r[3]|c->r[3]; // 800BFF04
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BFF08
  cmps(c,0,(int32_t)c->r[0],0); // 800BFF0C
  if (crb(c,2)) { goto L_800BFF64; } // 800BFF10
  c->lr=0x800BFF18u; f_80056B5C(c); // 800BFF14
  c->r[31]=c->r[3]|c->r[3]; // 800BFF18
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BFF1C
  c->lr=0x800BFF24u; f_80056B54(c); // 800BFF20
  c->r[3]=R32(c->r[30]+0x00000008u); // 800BFF24
  c->r[4]=0u+0x800D0000u; // 800BFF28
  c->r[4]=c->r[4]+0xFFFFC3A0u; // 800BFF2C
  c->lr=0x800BFF34u; f_802F0920(c); // 800BFF30
  c->r[3]=c->r[31]|c->r[31]; // 800BFF34
  c->lr=0x800BFF3Cu; f_80056B54(c); // 800BFF38
  c->lr=0x800BFF40u; f_80056B5C(c); // 800BFF3C
  c->r[31]=c->r[3]|c->r[3]; // 800BFF40
  c->r[3]=R32(c->r[30]+0x00000010u); // 800BFF44
  c->lr=0x800BFF4Cu; f_80056B54(c); // 800BFF48
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800BFF4C
  c->lr=0x800BFF54u; f_80054420(c); // 800BFF50
  c->r[3]=c->r[31]|c->r[31]; // 800BFF54
  c->lr=0x800BFF5Cu; f_80056B54(c); // 800BFF58
  c->r[3]=c->r[30]|c->r[30]; // 800BFF5C
  c->lr=0x800BFF64u; f_800BFDF0(c); // 800BFF60
L_800BFF64:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFF64
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BFF68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFF6C
  c->lr=c->r[0]; // 800BFF70
  c->r[1]=c->r[1]+0x00000010u; // 800BFF74
  return; // 800BFF78
}

// fn_800BFF7C
void f_800BFF7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFF7C
  c->r[0]=c->lr; // 800BFF80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BFF84
  c->r[11]=c->r[1]+0x00000020u; // 800BFF88
  c->lr=0x800BFF90u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFF8C
  c->r[26]=c->r[3]|c->r[3]; // 800BFF90
  c->r[27]=c->r[4]|c->r[4]; // 800BFF94
  c->r[28]=c->r[5]|c->r[5]; // 800BFF98
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BFF9C
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800BFFA0
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800BFFA4
  goto L_800BFFF8; // 800BFFA8
L_800BFFAC:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800BFFAC
  c->r[30]=R32(c->r[3]+c->r[31]); // 800BFFB0
  cmps(c,0,(int32_t)c->r[30],0); // 800BFFB4
  if (crb(c,2)) { goto L_800BFFF0; } // 800BFFB8
  c->r[3]=c->r[30]|c->r[30]; // 800BFFBC
  c->lr=0x800BFFC4u; f_800C2254(c); // 800BFFC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 800BFFC4
  if (crb(c,0)) { goto L_800BFFF0; } // 800BFFC8
  cmps(c,0,(int32_t)c->r[28],0); // 800BFFCC
  if (crb(c,2)) { goto L_800BFFDC; } // 800BFFD0
  c->r[3]=c->r[30]|c->r[30]; // 800BFFD4
  c->lr=0x800BFFDCu; f_800C2248(c); // 800BFFD8
L_800BFFDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFFDC
  c->lr=0x800BFFE4u; f_800BDE68(c); // 800BFFE0
  c->r[4]=c->r[3]|c->r[3]; // 800BFFE4
  c->r[3]=c->r[26]|c->r[26]; // 800BFFE8
  c->lr=0x800BFFF0u; f_800C00E4(c); // 800BFFEC
L_800BFFF0:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800BFFF0
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800BFFF4
L_800BFFF8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BFFF8
  if (!crb(c,0)) { IRQCHK(c); goto L_800BFFAC; } // 800BFFFC
  c->r[11]=c->r[1]+0x00000020u; // 800C0000
  c->lr=0x800C0008u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0004
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0008
  c->lr=c->r[0]; // 800C000C
  c->r[1]=c->r[1]+0x00000020u; // 800C0010
  return; // 800C0014
}

// fn_800C0018
void f_800C0018(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0018
  c->r[0]=c->lr; // 800C001C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0020
  c->r[11]=c->r[1]+0x00000020u; // 800C0024
  c->lr=0x800C002Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0028
  c->r[27]=c->r[3]|c->r[3]; // 800C002C
  c->r[28]=c->r[4]|c->r[4]; // 800C0030
  c->r[29]=0u+0x00000000u; // 800C0034
  c->r[31]=0u+0x00000000u; // 800C0038
  goto L_800C00BC; // 800C003C
L_800C0040:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800C0040
  c->r[30]=c->r[0]+c->r[31]; // 800C0044
  c->r[3]=c->r[30]|c->r[30]; // 800C0048
  c->lr=0x800C0050u; f_800BDE50(c); // 800C004C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0050
  if (!crb(c,2)) { goto L_800C00B4; } // 800C0054
  c->r[3]=c->r[30]|c->r[30]; // 800C0058
  c->lr=0x800C0060u; f_800C2240(c); // 800C005C
  c->r[4]=c->r[3]|c->r[3]; // 800C0060
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C0064
  c->r[5]=c->r[29]+0x00000001u; // 800C0068
  c->lr=0x800C0070u; f_800C2220(c); // 800C006C
  c->r[4]=c->r[3]|c->r[3]; // 800C0070
  c->r[3]=c->r[30]|c->r[30]; // 800C0074
  c->lr=0x800C007Cu; f_800BDECC(c); // 800C0078
  cmps(c,0,(int32_t)c->r[28],0); // 800C007C
  if (crb(c,2)) { goto L_800C0090; } // 800C0080
  c->r[3]=c->r[30]|c->r[30]; // 800C0084
  c->r[4]=c->r[28]|c->r[28]; // 800C0088
  c->lr=0x800C0090u; f_800BDE70(c); // 800C008C
L_800C0090:;
  c->r[3]=c->r[27]+0x00000014u; // 800C0090
  c->r[4]=c->r[30]|c->r[30]; // 800C0094
  c->lr=0x800C009Cu; f_8028CA70(c); // 800C0098
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800C009C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800C00A0
  W32(c->r[3]+c->r[0],c->r[30]); // 800C00A4
  c->r[3]=c->r[30]|c->r[30]; // 800C00A8
  c->lr=0x800C00B0u; f_800BDE68(c); // 800C00AC
  goto L_800C00CC; // 800C00B0
L_800C00B4:;
  c->r[31]=c->r[31]+0x000000BCu; // 800C00B4
  c->r[29]=c->r[29]+0x00000001u; // 800C00B8
L_800C00BC:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C00BC
  cmpu(c,0,c->r[29],c->r[0]); // 800C00C0
  if (crb(c,0)) { IRQCHK(c); goto L_800C0040; } // 800C00C4
  c->r[3]=0u+0x00000000u; // 800C00C8
L_800C00CC:;
  c->r[11]=c->r[1]+0x00000020u; // 800C00CC
  c->lr=0x800C00D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C00D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C00D4
  c->lr=c->r[0]; // 800C00D8
  c->r[1]=c->r[1]+0x00000020u; // 800C00DC
  return; // 800C00E0
}

// fn_800C00E4
void f_800C00E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C00E4
  c->r[0]=c->lr; // 800C00E8
  W32(c->r[1]+0x00000124u,c->r[0]); // 800C00EC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800C00F0
  W32(c->r[1]+0x00000118u,c->r[30]); // 800C00F4
  W32(c->r[1]+0x00000114u,c->r[29]); // 800C00F8
  c->r[29]=c->r[3]|c->r[3]; // 800C00FC
  c->r[31]=c->r[4]|c->r[4]; // 800C0100
  c->lr=0x800C0108u; f_800BBBC0(c); // 800C0104
  c->r[30]=c->r[3]|c->r[3]; // 800C0108
  cmps(c,0,(int32_t)c->r[3],0); // 800C010C
  if (crb(c,2)) { goto L_800C01AC; } // 800C0110
  c->lr=0x800C0118u; f_800BE3E4(c); // 800C0114
  cmps(c,0,(int32_t)c->r[3],0); // 800C0118
  if (crb(c,2)) { goto L_800C0144; } // 800C011C
  c->r[3]=c->r[30]|c->r[30]; // 800C0120
  c->lr=0x800C0128u; f_800BDEB4(c); // 800C0124
  c->r[5]=c->r[3]|c->r[3]; // 800C0128
  c->r[3]=c->r[1]+0x00000008u; // 800C012C
  c->r[4]=0u+0x80460000u; // 800C0130
  c->r[4]=c->r[4]+0x00001220u; // 800C0134
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C0138
  c->lr=0x800C0140u; f_802E7CC4(c); // 800C013C
  goto L_800C01AC; // 800C0140
L_800C0144:;
  c->r[3]=c->r[30]|c->r[30]; // 800C0144
  c->lr=0x800C014Cu; f_800C2218(c); // 800C0148
  cmps(c,0,(int32_t)c->r[3],0); // 800C014C
  if (crb(c,2)) { goto L_800C0178; } // 800C0150
  c->r[3]=c->r[30]|c->r[30]; // 800C0154
  c->lr=0x800C015Cu; f_800BDEB4(c); // 800C0158
  c->r[5]=c->r[3]|c->r[3]; // 800C015C
  c->r[3]=c->r[1]+0x00000008u; // 800C0160
  c->r[4]=0u+0x80460000u; // 800C0164
  c->r[4]=c->r[4]+0x00001244u; // 800C0168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C016C
  c->lr=0x800C0174u; f_802E7CC4(c); // 800C0170
  goto L_800C01AC; // 800C0174
L_800C0178:;
  c->r[3]=c->r[31]|c->r[31]; // 800C0178
  c->lr=0x800C0180u; f_800BBF30(c); // 800C017C
  c->r[31]=c->r[3]|c->r[3]; // 800C0180
  c->r[3]=c->r[29]+0x00000014u; // 800C0184
  c->r[4]=c->r[30]|c->r[30]; // 800C0188
  c->lr=0x800C0190u; f_8028CC6C(c); // 800C018C
  c->r[3]=c->r[30]|c->r[30]; // 800C0190
  c->lr=0x800C0198u; f_800BDDF4(c); // 800C0194
  c->r[4]=0u+0x00000000u; // 800C0198
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C019C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800C01A0
  c->r[3]=c->r[3]+c->r[0]; // 800C01A4
  W32(c->r[3]+0xFFFFFFFCu,c->r[4]); // 800C01A8
L_800C01AC:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800C01AC
  c->r[30]=R32(c->r[1]+0x00000118u); // 800C01B0
  c->r[29]=R32(c->r[1]+0x00000114u); // 800C01B4
  c->r[0]=R32(c->r[1]+0x00000124u); // 800C01B8
  c->lr=c->r[0]; // 800C01BC
  c->r[1]=c->r[1]+0x00000120u; // 800C01C0
  return; // 800C01C4
}

// fn_800C01C8
void f_800C01C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C01C8
  c->r[0]=c->lr; // 800C01CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C01D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C01D4
  c->r[31]=c->r[3]|c->r[3]; // 800C01D8
  c->r[3]=c->r[4]|c->r[4]; // 800C01DC
  c->lr=0x800C01E4u; f_800BBF30(c); // 800C01E0
  cmps(c,0,(int32_t)c->r[3],0); // 800C01E4
  if (!crb(c,2)) { goto L_800C01F4; } // 800C01E8
  c->r[3]=0u+0x00000000u; // 800C01EC
  goto L_800C0224; // 800C01F0
L_800C01F4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C01F4
  cmpu(c,0,c->r[3],c->r[0]); // 800C01F8
  if (!crb(c,1)) { goto L_800C0208; } // 800C01FC
  c->r[3]=0u+0x00000000u; // 800C0200
  goto L_800C0224; // 800C0204
L_800C0208:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800C0208
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C020C
  c->r[3]=c->r[4]+c->r[0]; // 800C0210
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800C0214
  c->r[0]=0u-c->r[3]; // 800C0218
  c->r[0]=c->r[0]|c->r[3]; // 800C021C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C0220
L_800C0224:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0224
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0228
  c->lr=c->r[0]; // 800C022C
  c->r[1]=c->r[1]+0x00000010u; // 800C0230
  return; // 800C0234
}

// fn_800C0238
void f_800C0238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0238
  c->r[0]=c->lr; // 800C023C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0240
  c->r[3]=c->r[3]+0x00000014u; // 800C0244
  c->lr=0x800C024Cu; f_8004B018(c); // 800C0248
  cmps(c,0,(int32_t)c->r[3],0); // 800C024C
  if (!crb(c,2)) { goto L_800C025C; } // 800C0250
  c->r[3]=0u+0x00000000u; // 800C0254
  goto L_800C0260; // 800C0258
L_800C025C:;
  c->lr=0x800C0260u; f_800BDE68(c); // 800C025C
L_800C0260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0260
  c->lr=c->r[0]; // 800C0264
  c->r[1]=c->r[1]+0x00000010u; // 800C0268
  return; // 800C026C
}

// fn_800C0270
void f_800C0270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0270
  c->r[0]=c->lr; // 800C0274
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C027C
  c->r[31]=c->r[3]|c->r[3]; // 800C0280
  c->lr=0x800C0288u; f_800BBBC0(c); // 800C0284
  c->r[4]=c->r[3]|c->r[3]; // 800C0288
  cmps(c,0,(int32_t)c->r[3],0); // 800C028C
  if (!crb(c,2)) { goto L_800C029C; } // 800C0290
  c->r[3]=0u+0x00000000u; // 800C0294
  goto L_800C02B8; // 800C0298
L_800C029C:;
  c->r[3]=c->r[31]+0x00000014u; // 800C029C
  c->lr=0x800C02A4u; f_8028CCD8(c); // 800C02A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C02A4
  if (!crb(c,2)) { goto L_800C02B4; } // 800C02A8
  c->r[3]=0u+0x00000000u; // 800C02AC
  goto L_800C02B8; // 800C02B0
L_800C02B4:;
  c->lr=0x800C02B8u; f_800BDE68(c); // 800C02B4
L_800C02B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C02B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C02BC
  c->lr=c->r[0]; // 800C02C0
  c->r[1]=c->r[1]+0x00000010u; // 800C02C4
  return; // 800C02C8
}

// fn_800C02CC
void f_800C02CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C02CC
  c->r[0]=c->lr; // 800C02D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C02D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C02D8
  c->r[31]=c->r[3]|c->r[3]; // 800C02DC
  c->r[4]=0u+0x80460000u; // 800C02E0
  c->r[0]=c->r[4]+0x000012D4u; // 800C02E4
  W32(c->r[3]+0x00000024u,c->r[0]); // 800C02E8
  c->lr=0x800C02F0u; f_800C036C(c); // 800C02EC
  c->r[3]=c->r[31]|c->r[31]; // 800C02F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C02F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C02F8
  c->lr=c->r[0]; // 800C02FC
  c->r[1]=c->r[1]+0x00000010u; // 800C0300
  return; // 800C0304
}

// fn_800C0308
void f_800C0308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0308
  c->r[0]=c->lr; // 800C030C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0314
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C0318
  c->r[30]=c->r[3]|c->r[3]; // 800C031C
  c->r[31]=c->r[4]|c->r[4]; // 800C0320
  cmps(c,0,(int32_t)c->r[3],0); // 800C0324
  if (crb(c,2)) { goto L_800C0350; } // 800C0328
  c->r[4]=0u+0x80460000u; // 800C032C
  c->r[0]=c->r[4]+0x000012D4u; // 800C0330
  W32(c->r[3]+0x00000024u,c->r[0]); // 800C0334
  c->lr=0x800C033Cu; f_800C046C(c); // 800C0338
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800C033C
  cmps(c,0,(int32_t)c->r[0],0); // 800C0340
  if (!crb(c,1)) { goto L_800C0350; } // 800C0344
  c->r[3]=c->r[30]|c->r[30]; // 800C0348
  c->lr=0x800C0350u; f_80047B20(c); // 800C034C
L_800C0350:;
  c->r[3]=c->r[30]|c->r[30]; // 800C0350
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0354
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C0358
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C035C
  c->lr=c->r[0]; // 800C0360
  c->r[1]=c->r[1]+0x00000010u; // 800C0364
  return; // 800C0368
}

// fn_800C036C
void f_800C036C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800C036C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C0370
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C0374
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C0378
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C037C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800C0380
  c->r[3]=c->r[3]+0x00000014u; // 800C0384
  c->r[4]=0u+0x00000040u; // 800C0388
  f_8028CA58(c); return; // 800C038C
}

// fn_800C0390
void f_800C0390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0390
  c->r[0]=c->lr; // 800C0394
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0398
  c->r[11]=c->r[1]+0x00000020u; // 800C039C
  c->lr=0x800C03A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C03A0
  c->r[27]=c->r[3]|c->r[3]; // 800C03A4
  c->r[28]=c->r[6]|c->r[6]; // 800C03A8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C03AC
  cmps(c,0,(int32_t)c->r[0],0); // 800C03B0
  if (!crb(c,2)) { goto L_800C0454; } // 800C03B4
  W32(c->r[3]+0x00000010u,c->r[5]); // 800C03B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C03BC
  W32(c->r[3]+0x00000004u,c->r[6]); // 800C03C0
  c->lr=0x800C03C8u; f_80056B5C(c); // 800C03C4
  c->r[29]=c->r[3]|c->r[3]; // 800C03C8
  c->r[3]=R32(c->r[27]+0x00000010u); // 800C03CC
  c->lr=0x800C03D4u; f_80056B54(c); // 800C03D0
  c->r[30]=0u+0x00000000u; // 800C03D4
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)136); // 800C03D8
  c->r[3]=c->r[3]+0x00000010u; // 800C03DC
  c->lr=0x800C03E4u; f_80054464(c); // 800C03E0
  c->r[31]=c->r[3]|c->r[3]; // 800C03E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C03E8
  if (crb(c,2)) { goto L_800C0414; } // 800C03EC
  c->r[30]=0u+0x00000001u; // 800C03F0
  c->r[4]=0u+0x800D0000u; // 800C03F4
  c->r[4]=c->r[4]+0xFFFFB174u; // 800C03F8
  c->r[5]=0u+0x800D0000u; // 800C03FC
  c->r[5]=c->r[5]+0xFFFFB210u; // 800C0400
  c->r[6]=0u+0x00000088u; // 800C0404
  c->r[7]=c->r[28]|c->r[28]; // 800C0408
  c->lr=0x800C0410u; f_802F05F0(c); // 800C040C
  c->r[31]=c->r[3]|c->r[3]; // 800C0410
L_800C0414:;
  W32(c->r[27]+0x00000008u,c->r[31]); // 800C0414
  c->r[3]=c->r[29]|c->r[29]; // 800C0418
  c->lr=0x800C0420u; f_80056B54(c); // 800C041C
  c->lr=0x800C0424u; f_80056B5C(c); // 800C0420
  c->r[29]=c->r[3]|c->r[3]; // 800C0424
  c->r[3]=R32(c->r[27]+0x00000010u); // 800C0428
  c->lr=0x800C0430u; f_80056B54(c); // 800C042C
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800C0430
  c->lr=0x800C0438u; f_80054464(c); // 800C0434
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 800C0438
  c->r[3]=c->r[29]|c->r[29]; // 800C043C
  c->lr=0x800C0444u; f_80056B54(c); // 800C0440
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800C0444
  c->r[4]=0u+0x00000000u; // 800C0448
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800C044C
  c->lr=0x800C0454u; f_800060B8(c); // 800C0450
L_800C0454:;
  c->r[11]=c->r[1]+0x00000020u; // 800C0454
  c->lr=0x800C045Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0458
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C045C
  c->lr=c->r[0]; // 800C0460
  c->r[1]=c->r[1]+0x00000020u; // 800C0464
  return; // 800C0468
}

// fn_800C046C
void f_800C046C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C046C
  c->r[0]=c->lr; // 800C0470
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0478
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C047C
  c->r[30]=c->r[3]|c->r[3]; // 800C0480
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C0484
  cmps(c,0,(int32_t)c->r[0],0); // 800C0488
  if (crb(c,2)) { goto L_800C04E0; } // 800C048C
  c->lr=0x800C0494u; f_80056B5C(c); // 800C0490
  c->r[31]=c->r[3]|c->r[3]; // 800C0494
  c->r[3]=R32(c->r[30]+0x00000010u); // 800C0498
  c->lr=0x800C04A0u; f_80056B54(c); // 800C049C
  c->r[3]=R32(c->r[30]+0x00000008u); // 800C04A0
  c->r[4]=0u+0x800D0000u; // 800C04A4
  c->r[4]=c->r[4]+0xFFFFB210u; // 800C04A8
  c->lr=0x800C04B0u; f_802F0920(c); // 800C04AC
  c->r[3]=c->r[31]|c->r[31]; // 800C04B0
  c->lr=0x800C04B8u; f_80056B54(c); // 800C04B4
  c->lr=0x800C04BCu; f_80056B5C(c); // 800C04B8
  c->r[31]=c->r[3]|c->r[3]; // 800C04BC
  c->r[3]=R32(c->r[30]+0x00000010u); // 800C04C0
  c->lr=0x800C04C8u; f_80056B54(c); // 800C04C4
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800C04C8
  c->lr=0x800C04D0u; f_80054420(c); // 800C04CC
  c->r[3]=c->r[31]|c->r[31]; // 800C04D0
  c->lr=0x800C04D8u; f_80056B54(c); // 800C04D4
  c->r[3]=c->r[30]|c->r[30]; // 800C04D8
  c->lr=0x800C04E0u; f_800C036C(c); // 800C04DC
L_800C04E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C04E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C04E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C04E8
  c->lr=c->r[0]; // 800C04EC
  c->r[1]=c->r[1]+0x00000010u; // 800C04F0
  return; // 800C04F4
}

// fn_800C04F8
void f_800C04F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C04F8
  c->r[0]=c->lr; // 800C04FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0500
  c->r[11]=c->r[1]+0x00000020u; // 800C0504
  c->lr=0x800C050Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0508
  c->r[26]=c->r[3]|c->r[3]; // 800C050C
  c->r[27]=c->r[4]|c->r[4]; // 800C0510
  c->r[28]=c->r[5]|c->r[5]; // 800C0514
  c->r[3]=R32(c->r[3]+0x00000004u); // 800C0518
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 800C051C
  c->r[31]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800C0520
  goto L_800C0574; // 800C0524
L_800C0528:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800C0528
  c->r[30]=R32(c->r[3]+c->r[31]); // 800C052C
  cmps(c,0,(int32_t)c->r[30],0); // 800C0530
  if (crb(c,2)) { goto L_800C056C; } // 800C0534
  c->r[3]=c->r[30]|c->r[30]; // 800C0538
  c->lr=0x800C0540u; f_800C2254(c); // 800C053C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 800C0540
  if (crb(c,0)) { goto L_800C056C; } // 800C0544
  cmps(c,0,(int32_t)c->r[28],0); // 800C0548
  if (crb(c,2)) { goto L_800C0558; } // 800C054C
  c->r[3]=c->r[30]|c->r[30]; // 800C0550
  c->lr=0x800C0558u; f_800C2248(c); // 800C0554
L_800C0558:;
  c->r[3]=c->r[30]|c->r[30]; // 800C0558
  c->lr=0x800C0560u; f_800BDE68(c); // 800C055C
  c->r[4]=c->r[3]|c->r[3]; // 800C0560
  c->r[3]=c->r[26]|c->r[26]; // 800C0564
  c->lr=0x800C056Cu; f_800C0660(c); // 800C0568
L_800C056C:;
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 800C056C
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800C0570
L_800C0574:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C0574
  if (!crb(c,0)) { IRQCHK(c); goto L_800C0528; } // 800C0578
  c->r[11]=c->r[1]+0x00000020u; // 800C057C
  c->lr=0x800C0584u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0580
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0584
  c->lr=c->r[0]; // 800C0588
  c->r[1]=c->r[1]+0x00000020u; // 800C058C
  return; // 800C0590
}

// fn_800C0594
void f_800C0594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0594
  c->r[0]=c->lr; // 800C0598
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C059C
  c->r[11]=c->r[1]+0x00000020u; // 800C05A0
  c->lr=0x800C05A8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C05A4
  c->r[27]=c->r[3]|c->r[3]; // 800C05A8
  c->r[28]=c->r[4]|c->r[4]; // 800C05AC
  c->r[29]=0u+0x00000000u; // 800C05B0
  c->r[31]=0u+0x00000000u; // 800C05B4
  goto L_800C0638; // 800C05B8
L_800C05BC:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800C05BC
  c->r[30]=c->r[0]+c->r[31]; // 800C05C0
  c->r[3]=c->r[30]|c->r[30]; // 800C05C4
  c->lr=0x800C05CCu; f_800BDE50(c); // 800C05C8
  cmps(c,0,(int32_t)c->r[3],0); // 800C05CC
  if (!crb(c,2)) { goto L_800C0630; } // 800C05D0
  c->r[3]=c->r[30]|c->r[30]; // 800C05D4
  c->lr=0x800C05DCu; f_800C2240(c); // 800C05D8
  c->r[4]=c->r[3]|c->r[3]; // 800C05DC
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C05E0
  c->r[5]=c->r[29]+0x00000001u; // 800C05E4
  c->lr=0x800C05ECu; f_800C2220(c); // 800C05E8
  c->r[4]=c->r[3]|c->r[3]; // 800C05EC
  c->r[3]=c->r[30]|c->r[30]; // 800C05F0
  c->lr=0x800C05F8u; f_800BDECC(c); // 800C05F4
  cmps(c,0,(int32_t)c->r[28],0); // 800C05F8
  if (crb(c,2)) { goto L_800C060C; } // 800C05FC
  c->r[3]=c->r[30]|c->r[30]; // 800C0600
  c->r[4]=c->r[28]|c->r[28]; // 800C0604
  c->lr=0x800C060Cu; f_800BDE70(c); // 800C0608
L_800C060C:;
  c->r[3]=c->r[27]+0x00000014u; // 800C060C
  c->r[4]=c->r[30]|c->r[30]; // 800C0610
  c->lr=0x800C0618u; f_8028CA70(c); // 800C0614
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800C0618
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800C061C
  W32(c->r[3]+c->r[0],c->r[30]); // 800C0620
  c->r[3]=c->r[30]|c->r[30]; // 800C0624
  c->lr=0x800C062Cu; f_800BDE68(c); // 800C0628
  goto L_800C0648; // 800C062C
L_800C0630:;
  c->r[31]=c->r[31]+0x00000088u; // 800C0630
  c->r[29]=c->r[29]+0x00000001u; // 800C0634
L_800C0638:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C0638
  cmpu(c,0,c->r[29],c->r[0]); // 800C063C
  if (crb(c,0)) { IRQCHK(c); goto L_800C05BC; } // 800C0640
  c->r[3]=0u+0x00000000u; // 800C0644
L_800C0648:;
  c->r[11]=c->r[1]+0x00000020u; // 800C0648
  c->lr=0x800C0650u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C064C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0650
  c->lr=c->r[0]; // 800C0654
  c->r[1]=c->r[1]+0x00000020u; // 800C0658
  return; // 800C065C
}

// fn_800C0660
void f_800C0660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0660
  c->r[0]=c->lr; // 800C0664
  W32(c->r[1]+0x00000124u,c->r[0]); // 800C0668
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800C066C
  W32(c->r[1]+0x00000118u,c->r[30]); // 800C0670
  W32(c->r[1]+0x00000114u,c->r[29]); // 800C0674
  c->r[29]=c->r[3]|c->r[3]; // 800C0678
  c->r[31]=c->r[4]|c->r[4]; // 800C067C
  c->lr=0x800C0684u; f_800C07B4(c); // 800C0680
  c->r[30]=c->r[3]|c->r[3]; // 800C0684
  cmps(c,0,(int32_t)c->r[3],0); // 800C0688
  if (crb(c,2)) { goto L_800C0728; } // 800C068C
  c->lr=0x800C0694u; f_800BE3E4(c); // 800C0690
  cmps(c,0,(int32_t)c->r[3],0); // 800C0694
  if (crb(c,2)) { goto L_800C06C0; } // 800C0698
  c->r[3]=c->r[30]|c->r[30]; // 800C069C
  c->lr=0x800C06A4u; f_800BDEB4(c); // 800C06A0
  c->r[5]=c->r[3]|c->r[3]; // 800C06A4
  c->r[3]=c->r[1]+0x00000008u; // 800C06A8
  c->r[4]=0u+0x80460000u; // 800C06AC
  c->r[4]=c->r[4]+0x00001220u; // 800C06B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C06B4
  c->lr=0x800C06BCu; f_802E7CC4(c); // 800C06B8
  goto L_800C0728; // 800C06BC
L_800C06C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C06C0
  c->lr=0x800C06C8u; f_800C2218(c); // 800C06C4
  cmps(c,0,(int32_t)c->r[3],0); // 800C06C8
  if (crb(c,2)) { goto L_800C06F4; } // 800C06CC
  c->r[3]=c->r[30]|c->r[30]; // 800C06D0
  c->lr=0x800C06D8u; f_800BDEB4(c); // 800C06D4
  c->r[5]=c->r[3]|c->r[3]; // 800C06D8
  c->r[3]=c->r[1]+0x00000008u; // 800C06DC
  c->r[4]=0u+0x80460000u; // 800C06E0
  c->r[4]=c->r[4]+0x00001244u; // 800C06E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C06E8
  c->lr=0x800C06F0u; f_802E7CC4(c); // 800C06EC
  goto L_800C0728; // 800C06F0
L_800C06F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800C06F4
  c->lr=0x800C06FCu; f_800BBF30(c); // 800C06F8
  c->r[31]=c->r[3]|c->r[3]; // 800C06FC
  c->r[3]=c->r[29]+0x00000014u; // 800C0700
  c->r[4]=c->r[30]|c->r[30]; // 800C0704
  c->lr=0x800C070Cu; f_8028CC6C(c); // 800C0708
  c->r[3]=c->r[30]|c->r[30]; // 800C070C
  c->lr=0x800C0714u; f_800BDDF4(c); // 800C0710
  c->r[4]=0u+0x00000000u; // 800C0714
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C0718
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800C071C
  c->r[3]=c->r[3]+c->r[0]; // 800C0720
  W32(c->r[3]+0xFFFFFFFCu,c->r[4]); // 800C0724
L_800C0728:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800C0728
  c->r[30]=R32(c->r[1]+0x00000118u); // 800C072C
  c->r[29]=R32(c->r[1]+0x00000114u); // 800C0730
  c->r[0]=R32(c->r[1]+0x00000124u); // 800C0734
  c->lr=c->r[0]; // 800C0738
  c->r[1]=c->r[1]+0x00000120u; // 800C073C
  return; // 800C0740
}

// fn_800C0744
void f_800C0744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0744
  c->r[0]=c->lr; // 800C0748
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C074C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0750
  c->r[31]=c->r[3]|c->r[3]; // 800C0754
  c->r[3]=c->r[4]|c->r[4]; // 800C0758
  c->lr=0x800C0760u; f_800BBF30(c); // 800C075C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0760
  if (!crb(c,2)) { goto L_800C0770; } // 800C0764
  c->r[3]=0u+0x00000000u; // 800C0768
  goto L_800C07A0; // 800C076C
L_800C0770:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C0770
  cmpu(c,0,c->r[3],c->r[0]); // 800C0774
  if (!crb(c,1)) { goto L_800C0784; } // 800C0778
  c->r[3]=0u+0x00000000u; // 800C077C
  goto L_800C07A0; // 800C0780
L_800C0784:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800C0784
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C0788
  c->r[3]=c->r[4]+c->r[0]; // 800C078C
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800C0790
  c->r[0]=0u-c->r[3]; // 800C0794
  c->r[0]=c->r[0]|c->r[3]; // 800C0798
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C079C
L_800C07A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C07A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C07A4
  c->lr=c->r[0]; // 800C07A8
  c->r[1]=c->r[1]+0x00000010u; // 800C07AC
  return; // 800C07B0
}

// fn_800C07B4
void f_800C07B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C07B4
  c->r[0]=c->lr; // 800C07B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C07BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C07C0
  c->r[31]=c->r[3]|c->r[3]; // 800C07C4
  c->r[3]=c->r[4]|c->r[4]; // 800C07C8
  c->lr=0x800C07D0u; f_800BBF30(c); // 800C07CC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800C07D0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C07D4
  c->r[3]=c->r[4]+c->r[0]; // 800C07D8
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800C07DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C07E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C07E4
  c->lr=c->r[0]; // 800C07E8
  c->r[1]=c->r[1]+0x00000010u; // 800C07EC
  return; // 800C07F0
}

// fn_800C07F4
void f_800C07F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C07F4
  c->r[0]=c->lr; // 800C07F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C07FC
  c->r[3]=c->r[3]+0x00000014u; // 800C0800
  c->lr=0x800C0808u; f_8004B018(c); // 800C0804
  cmps(c,0,(int32_t)c->r[3],0); // 800C0808
  if (!crb(c,2)) { goto L_800C0818; } // 800C080C
  c->r[3]=0u+0x00000000u; // 800C0810
  goto L_800C081C; // 800C0814
L_800C0818:;
  c->lr=0x800C081Cu; f_800BDE68(c); // 800C0818
L_800C081C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C081C
  c->lr=c->r[0]; // 800C0820
  c->r[1]=c->r[1]+0x00000010u; // 800C0824
  return; // 800C0828
}

// fn_800C082C
void f_800C082C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C082C
  c->r[0]=c->lr; // 800C0830
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0838
  c->r[31]=c->r[3]|c->r[3]; // 800C083C
  c->lr=0x800C0844u; f_800C07B4(c); // 800C0840
  c->r[4]=c->r[3]|c->r[3]; // 800C0844
  cmps(c,0,(int32_t)c->r[3],0); // 800C0848
  if (!crb(c,2)) { goto L_800C0858; } // 800C084C
  c->r[3]=0u+0x00000000u; // 800C0850
  goto L_800C0874; // 800C0854
L_800C0858:;
  c->r[3]=c->r[31]+0x00000014u; // 800C0858
  c->lr=0x800C0860u; f_8028CCD8(c); // 800C085C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0860
  if (!crb(c,2)) { goto L_800C0870; } // 800C0864
  c->r[3]=0u+0x00000000u; // 800C0868
  goto L_800C0874; // 800C086C
L_800C0870:;
  c->lr=0x800C0874u; f_800BDE68(c); // 800C0870
L_800C0874:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0874
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0878
  c->lr=c->r[0]; // 800C087C
  c->r[1]=c->r[1]+0x00000010u; // 800C0880
  return; // 800C0884
}

