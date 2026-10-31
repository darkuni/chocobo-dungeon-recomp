#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800D055C
void f_800D055C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D055C
  c->r[0]=c->lr; // 800D0560
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D0564
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800D0568
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800D056C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800D0570
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800D0574
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D0578
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D057C
  c->r[30]=c->r[3]|c->r[3]; // 800D0580
  c->r[31]=c->r[4]|c->r[4]; // 800D0584
  c->r[3]=c->r[1]+0x00000008u; // 800D0588
  c->r[4]=0u+0x00000000u; // 800D058C
  c->lr=0x800D0594u; f_800D0164(c); // 800D0590
  c->r[3]=c->r[1]+0x00000024u; // 800D0594
  c->lr=0x800D059Cu; f_8004B0A4(c); // 800D0598
  c->r[3]=c->r[1]+0x00000018u; // 800D059C
  c->lr=0x800D05A4u; f_8004B0A4(c); // 800D05A0
  c->r[3]=c->r[1]+0x0000000Cu; // 800D05A4
  c->lr=0x800D05ACu; f_8004B0A4(c); // 800D05A8
  c->r[3]=c->r[30]|c->r[30]; // 800D05AC
  c->r[4]=c->r[31]|c->r[31]; // 800D05B0
  c->lr=0x800D05B8u; f_800D04E8(c); // 800D05B4
  c->lr=0x800D05BCu; f_800797BC(c); // 800D05B8
  c->r[3]=c->r[1]+0x0000000Cu; // 800D05BC
  c->r[4]=c->r[30]+0x00000058u; // 800D05C0
  c->f[1]=-c->f[1]; // 800D05C4
  c->lr=0x800D05CCu; f_8004E330(c); // 800D05C8
  c->r[3]=c->r[1]+0x00000018u; // 800D05CC
  c->r[4]=c->r[31]|c->r[31]; // 800D05D0
  c->r[5]=c->r[1]+0x0000000Cu; // 800D05D4
  c->lr=0x800D05DCu; f_8005C194(c); // 800D05D8
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05DC
  c->lr=0x800D05E4u; f_800797BC(c); // 800D05E0
  c->f[30]=c->f[1]; // 800D05E4
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05E8
  c->lr=0x800D05F0u; f_800797BC(c); // 800D05EC
  c->f[31]=c->f[1]; // 800D05F0
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05F4
  c->lr=0x800D05FCu; f_800797BC(c); // 800D05F8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D05FC
  c->f[2]=c->f[0]; // 800D0600
  c->r[5]=0u+0x00000000u; // 800D0604
  c->r[0]=R32(c->r[30]+0x00000098u); // 800D0608
  c->f[4]=c->f[0]; // 800D060C
  c->f[3]=c->f[0]; // 800D0610
  c->ctr=c->r[0]; // 800D0614
  cmpu(c,0,c->r[0],0x00000000u); // 800D0618
  if (!crb(c,1)) { goto L_800D0754; } // 800D061C
L_800D0620:;
  c->r[0]=rotl(c->r[5],0)&0x00000003u; // 800D0620
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D0624
  c->r[4]=c->r[30]+c->r[0]; // 800D0628
  c->r[0]=c->r[5]+0x00000001u; // 800D062C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800D0630
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D0634
  c->r[3]=c->r[30]+c->r[0]; // 800D0638
  fcmp(c,0,c->f[30],c->f[31]); // 800D063C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D0640
  if (!crb(c,2)) { goto L_800D068C; } // 800D0644
  fcmp(c,0,c->f[30],c->f[1]); // 800D0648
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D064C
  if (!crb(c,2)) { goto L_800D068C; } // 800D0650
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800D0654
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800D0658
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[6]); // 800D065C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800D0660
  c->f[8]=c->ps1[8]=S(c->f[6]-c->f[5]); // 800D0664
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D0668
  {uint32_t ea=c->r[4]+0x00000070u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D066C
  c->f[9]=c->ps1[9]=S(c->f[5]-c->f[6]); // 800D0670
  {uint32_t ea=c->r[3]+0x00000070u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D0674
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 800D0678
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[5]); // 800D067C
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[9]); // 800D0680
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 800D0684
  goto L_800D0710; // 800D0688
L_800D068C:;
  fcmp(c,0,c->f[31],c->f[30]); // 800D068C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D0690
  if (!crb(c,2)) { goto L_800D06DC; } // 800D0694
  fcmp(c,0,c->f[31],c->f[1]); // 800D0698
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D069C
  if (!crb(c,2)) { goto L_800D06DC; } // 800D06A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06A4
  {uint32_t ea=c->r[4]+0x00000068u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D06A8
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[6]); // 800D06AC
  {uint32_t ea=c->r[3]+0x00000068u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06B0
  c->f[9]=c->ps1[9]=S(c->f[6]-c->f[5]); // 800D06B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06B8
  {uint32_t ea=c->r[4]+0x00000070u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D06BC
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[6]); // 800D06C0
  {uint32_t ea=c->r[3]+0x00000070u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06C4
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 800D06C8
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[5]); // 800D06CC
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[7]); // 800D06D0
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 800D06D4
  goto L_800D0710; // 800D06D8
L_800D06DC:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06DC
  {uint32_t ea=c->r[4]+0x00000068u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D06E0
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[6]); // 800D06E4
  {uint32_t ea=c->r[3]+0x00000068u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06E8
  c->f[9]=c->ps1[9]=S(c->f[6]-c->f[5]); // 800D06EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06F0
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800D06F4
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[6]); // 800D06F8
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800D06FC
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 800D0700
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[5]); // 800D0704
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[7]); // 800D0708
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 800D070C
L_800D0710:;
  fcmp(c,0,c->f[5],c->f[4]); // 800D0710
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D0714
  if (!crb(c,2)) { goto L_800D0724; } // 800D0718
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D071C
  goto L_800D0734; // 800D0720
L_800D0724:;
  fcmp(c,0,c->f[5],c->f[4]); // 800D0724
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D0728
  if (!crb(c,2)) { goto L_800D0734; } // 800D072C
  {uint32_t ea=c->r[2]+0xFFFF8858u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0730
L_800D0734:;
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0734
  fcmp(c,0,c->f[2],c->f[3]); // 800D0738
  if (!crb(c,0)) { goto L_800D0748; } // 800D073C
  c->r[3]=0u+0x00000000u; // 800D0740
  goto L_800D0758; // 800D0744
L_800D0748:;
  c->f[2]=c->f[0]; // 800D0748
  c->r[5]=c->r[5]+0x00000001u; // 800D074C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0620; } // 800D0750
L_800D0754:;
  c->r[3]=0u+0x00000001u; // 800D0754
L_800D0758:;
  c->r[0]=0u+0x00000058u; // 800D0758
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D075C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800D0760
  c->r[0]=0u+0x00000048u; // 800D0764
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800D0768
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800D076C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D0770
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D0774
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D0778
  c->lr=c->r[0]; // 800D077C
  c->r[1]=c->r[1]+0x00000060u; // 800D0780
  return; // 800D0784
}

// fn_800D0788
void f_800D0788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0788
  c->r[0]=c->lr; // 800D078C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0790
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0794
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0798
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D079C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D07A0
  c->r[28]=c->r[4]|c->r[4]; // 800D07A4
  c->r[29]=c->r[5]|c->r[5]; // 800D07A8
  c->r[30]=c->r[6]|c->r[6]; // 800D07AC
  c->r[31]=c->r[7]|c->r[7]; // 800D07B0
  c->r[3]=c->r[28]|c->r[28]; // 800D07B4
  c->lr=0x800D07BCu; f_800C2260(c); // 800D07B8
  c->r[3]=c->r[28]|c->r[28]; // 800D07BC
  c->r[4]=c->r[31]|c->r[31]; // 800D07C0
  c->r[5]=c->r[28]|c->r[28]; // 800D07C4
  c->lr=0x800D07CCu; f_800548CC(c); // 800D07C8
  c->r[3]=c->r[28]|c->r[28]; // 800D07CC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D07D0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D07D4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D07D8
  c->lr=0x800D07E0u; f_8004B0A8(c); // 800D07DC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D07E0
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D07E4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D07E8
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D07EC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D07F0
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D07F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D07F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D07FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D0800
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D0804
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0808
  c->lr=c->r[0]; // 800D080C
  c->r[1]=c->r[1]+0x00000020u; // 800D0810
  return; // 800D0814
}

// fn_800D0818
void f_800D0818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0818
  c->r[0]=c->lr; // 800D081C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0820
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0824
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0828
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D082C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D0830
  c->r[28]=c->r[3]|c->r[3]; // 800D0834
  c->r[29]=c->r[4]|c->r[4]; // 800D0838
  c->r[30]=c->r[5]|c->r[5]; // 800D083C
  c->r[31]=c->r[6]|c->r[6]; // 800D0840
  c->lr=0x800D0848u; f_800D08B0(c); // 800D0844
  c->r[3]=c->r[28]|c->r[28]; // 800D0848
  c->r[4]=c->r[29]|c->r[29]; // 800D084C
  c->r[5]=c->r[30]|c->r[30]; // 800D0850
  c->r[6]=c->r[31]|c->r[31]; // 800D0854
  c->lr=0x800D085Cu; f_800BEFBC(c); // 800D0858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D085C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D0860
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D0864
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D0868
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D086C
  c->lr=c->r[0]; // 800D0870
  c->r[1]=c->r[1]+0x00000020u; // 800D0874
  return; // 800D0878
}

// fn_800D087C
void f_800D087C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D087C
  c->r[0]=c->lr; // 800D0880
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0884
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0888
  c->r[31]=c->r[3]|c->r[3]; // 800D088C
  c->lr=0x800D0894u; f_800BF098(c); // 800D0890
  c->r[3]=c->r[31]|c->r[31]; // 800D0894
  c->lr=0x800D089Cu; f_800D08B0(c); // 800D0898
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D089C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D08A0
  c->lr=c->r[0]; // 800D08A4
  c->r[1]=c->r[1]+0x00000010u; // 800D08A8
  return; // 800D08AC
}

// fn_800D08B0
void f_800D08B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000028u; // 800D08B0
  c->r[4]=0u+0x00000000u; // 800D08B4
  c->r[5]=0u+0x00001900u; // 800D08B8
  f_800060B8(c); return; // 800D08BC
}

// fn_800D08C0
void f_800D08C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D08C0
  c->r[0]=c->lr; // 800D08C4
  W32(c->r[1]+0x00000114u,c->r[0]); // 800D08C8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800D08CC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800D08D0
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 800D08D4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 800D08D8
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 800D08DC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 800D08E0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 800D08E4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 800D08E8
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[27]);} // 800D08EC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,27,ea,0,0);} // 800D08F0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[26]);} // 800D08F4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,26,ea,0,0);} // 800D08F8
  c->r[11]=c->r[1]+0x000000B0u; // 800D08FC
  c->lr=0x800D0904u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0900
  c->r[24]=c->r[3]|c->r[3]; // 800D0904
  c->r[21]=c->r[4]|c->r[4]; // 800D0908
  c->r[3]=c->r[1]+0x00000020u; // 800D090C
  c->r[4]=0u+0x00000000u; // 800D0910
  c->lr=0x800D0918u; f_800543BC(c); // 800D0914
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0918
  c->r[4]=0u+0x00000000u; // 800D091C
  c->lr=0x800D0924u; f_8005457C(c); // 800D0920
  c->r[3]=c->r[1]+0x00000018u; // 800D0924
  c->r[4]=0u+0x00000000u; // 800D0928
  c->lr=0x800D0930u; f_800D0164(c); // 800D092C
  c->r[3]=c->r[1]+0x00000024u; // 800D0930
  c->lr=0x800D0938u; f_8004B0A4(c); // 800D0934
  c->r[3]=c->r[1]+0x00000030u; // 800D0938
  c->lr=0x800D0940u; f_8004B0A0(c); // 800D093C
  c->lr=0x800D0944u; f_800A23BC(c); // 800D0940
  c->lr=0x800D0948u; f_800BB7F0(c); // 800D0944
  c->r[4]=c->r[21]|c->r[21]; // 800D0948
  c->r[5]=c->r[1]+0x00000014u; // 800D094C
  c->lr=0x800D0954u; f_800C2C24(c); // 800D0950
  c->r[3]=R32(c->r[1]+0x00000014u); // 800D0954
  c->lr=0x800D095Cu; f_8006E56C(c); // 800D0958
  c->lr=0x800D0960u; f_8006E564(c); // 800D095C
  c->r[29]=c->r[3]|c->r[3]; // 800D0960
  c->lr=0x800D0968u; f_802B6960(c); // 800D0964
  c->r[30]=c->r[3]|c->r[3]; // 800D0968
  c->r[26]=0u+0x00000000u; // 800D096C
  {uint32_t ea=c->r[2]+0xFFFF88C4u; c->f[27]=c->ps1[27]=RF32(ea);} // 800D0970
  {uint32_t ea=c->r[2]+0xFFFF88C8u; c->f[26]=c->ps1[26]=RF32(ea);} // 800D0974
  c->r[23]=0u+0x00000010u; // 800D0978
  goto L_800D0C80; // 800D097C
L_800D0980:;
  c->r[3]=c->r[29]|c->r[29]; // 800D0980
  c->r[4]=c->r[26]|c->r[26]; // 800D0984
  c->lr=0x800D098Cu; f_802B68C8(c); // 800D0988
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D098C
  c->r[3]=c->r[1]+0x00000020u; // 800D0990
  c->r[4]=c->r[1]+0x00000010u; // 800D0994
  c->lr=0x800D099Cu; f_80051C04(c); // 800D0998
  c->r[3]=c->r[1]+0x00000020u; // 800D099C
  c->lr=0x800D09A4u; f_802B854C(c); // 800D09A0
  c->r[31]=c->r[3]|c->r[3]; // 800D09A4
  c->r[3]=c->r[1]+0x00000020u; // 800D09A8
  c->lr=0x800D09B0u; f_802B8678(c); // 800D09AC
  c->r[27]=0u+0x00000000u; // 800D09B0
  c->r[25]=0u+0x00000000u; // 800D09B4
  goto L_800D0C74; // 800D09B8
L_800D09BC:;
  c->r[3]=c->r[1]+0x00000020u; // 800D09BC
  c->r[4]=c->r[25]|c->r[25]; // 800D09C0
  c->lr=0x800D09C8u; f_802B84F8(c); // 800D09C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D09C8
  c->r[3]=c->r[1]+0x0000001Cu; // 800D09CC
  c->r[4]=c->r[1]+0x0000000Cu; // 800D09D0
  c->lr=0x800D09D8u; f_8005420C(c); // 800D09D4
  c->r[3]=c->r[1]+0x0000001Cu; // 800D09D8
  c->lr=0x800D09E0u; f_800544D4(c); // 800D09DC
  c->r[22]=c->r[3]|c->r[3]; // 800D09E0
  c->r[3]=c->r[1]+0x0000001Cu; // 800D09E4
  c->lr=0x800D09ECu; f_800CA120(c); // 800D09E8
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D09EC
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800D09F0
  cmps(c,0,(int32_t)c->r[0],0); // 800D09F4
  if (crb(c,2)) { goto L_800D0C70; } // 800D09F8
  c->r[3]=c->r[24]|c->r[24]; // 800D09FC
  c->r[4]=0u+0x00000000u; // 800D0A00
  c->lr=0x800D0A08u; f_800BF1C0(c); // 800D0A04
  c->r[28]=c->r[3]|c->r[3]; // 800D0A08
  cmps(c,0,(int32_t)c->r[3],0); // 800D0A0C
  if (crb(c,2)) { goto L_800D0C70; } // 800D0A10
  c->r[3]=c->r[24]|c->r[24]; // 800D0A14
  c->r[4]=c->r[28]|c->r[28]; // 800D0A18
  c->lr=0x800D0A20u; f_800BF370(c); // 800D0A1C
  c->r[21]=c->r[3]|c->r[3]; // 800D0A20
  cmps(c,0,(int32_t)c->r[3],0); // 800D0A24
  if (crb(c,2)) { goto L_800D0C70; } // 800D0A28
  c->r[3]=c->r[24]|c->r[24]; // 800D0A2C
  c->r[4]=c->r[28]|c->r[28]; // 800D0A30
  c->lr=0x800D0A38u; f_800BF370(c); // 800D0A34
  c->r[4]=c->r[22]|c->r[22]; // 800D0A38
  c->lr=0x800D0A40u; f_800BDE70(c); // 800D0A3C
  c->r[3]=c->r[1]+0x00000020u; // 800D0A40
  c->r[4]=c->r[27]|c->r[27]; // 800D0A44
  c->lr=0x800D0A4Cu; f_802B8624(c); // 800D0A48
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D0A4C
  c->r[3]=c->r[1]+0x00000018u; // 800D0A50
  c->r[4]=c->r[1]+0x00000008u; // 800D0A54
  c->lr=0x800D0A5Cu; f_800CA1B0(c); // 800D0A58
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0A5C
  c->lr=0x800D0A64u; f_800CA0B4(c); // 800D0A60
  c->r[22]=c->r[3]|c->r[3]; // 800D0A64
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0A68
  c->lr=0x800D0A70u; f_800CA0D8(c); // 800D0A6C
  c->r[26]=c->r[3]|c->r[3]; // 800D0A70
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0A74
  c->lr=0x800D0A7Cu; f_800CA0FC(c); // 800D0A78
  c->r[5]=c->r[3]|c->r[3]; // 800D0A7C
  c->r[3]=c->r[24]|c->r[24]; // 800D0A80
  c->r[4]=c->r[1]+0x00000030u; // 800D0A84
  c->r[6]=c->r[26]|c->r[26]; // 800D0A88
  c->r[7]=c->r[22]|c->r[22]; // 800D0A8C
  c->lr=0x800D0A94u; f_800D0788(c); // 800D0A90
  c->r[3]=c->r[1]+0x00000018u; // 800D0A94
  c->lr=0x800D0A9Cu; f_800D01C8(c); // 800D0A98
  c->r[26]=rotl(c->r[3],0)&0x0000FFFFu; // 800D0A9C
  c->r[3]=c->r[1]+0x00000018u; // 800D0AA0
  c->lr=0x800D0AA8u; f_800D025C(c); // 800D0AA4
  c->r[5]=c->r[3]|c->r[3]; // 800D0AA8
  c->r[3]=c->r[21]|c->r[21]; // 800D0AAC
  c->r[4]=c->r[1]+0x00000030u; // 800D0AB0
  c->r[6]=c->r[26]|c->r[26]; // 800D0AB4
  c->lr=0x800D0ABCu; f_800D03EC(c); // 800D0AB8
  c->r[27]=c->r[27]+0x00000001u; // 800D0ABC
  c->r[3]=c->r[21]|c->r[21]; // 800D0AC0
  c->lr=0x800D0AC8u; f_800D0DE8(c); // 800D0AC4
  c->r[21]=c->r[3]|c->r[3]; // 800D0AC8
  c->r[3]=c->r[1]+0x00000018u; // 800D0ACC
  c->lr=0x800D0AD4u; f_800D01C8(c); // 800D0AD0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800D0AD4
  c->r[26]=0u+0x00000000u; // 800D0AD8
  c->ctr=c->r[0]; // 800D0ADC
  cmpu(c,0,c->r[0],0x00000000u); // 800D0AE0
  if (!crb(c,1)) { goto L_800D0B50; } // 800D0AE4
L_800D0AE8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D0AE8
  if (!crb(c,2)) { goto L_800D0B04; } // 800D0AEC
  {uint32_t ea=c->r[21]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D0AF0
  {uint32_t ea=c->r[21]+0x00000008u; c->f[28]=c->ps1[28]=RF32(ea);} // 800D0AF4
  c->f[31]=c->f[29]; // 800D0AF8
  c->f[30]=c->f[28]; // 800D0AFC
  goto L_800D0B44; // 800D0B00
L_800D0B04:;
  {uint32_t ea=c->r[21]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0B04
  fcmp(c,0,c->f[29],c->f[0]); // 800D0B08
  if (!crb(c,1)) { goto L_800D0B14; } // 800D0B0C
  c->f[29]=c->f[0]; // 800D0B10
L_800D0B14:;
  {uint32_t ea=c->r[21]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0B14
  fcmp(c,0,c->f[28],c->f[0]); // 800D0B18
  if (!crb(c,1)) { goto L_800D0B24; } // 800D0B1C
  c->f[28]=c->f[0]; // 800D0B20
L_800D0B24:;
  {uint32_t ea=c->r[21]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0B24
  fcmp(c,0,c->f[31],c->f[0]); // 800D0B28
  if (!crb(c,0)) { goto L_800D0B34; } // 800D0B2C
  c->f[31]=c->f[0]; // 800D0B30
L_800D0B34:;
  {uint32_t ea=c->r[21]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0B34
  fcmp(c,0,c->f[30],c->f[0]); // 800D0B38
  if (!crb(c,0)) { goto L_800D0B44; } // 800D0B3C
  c->f[30]=c->f[0]; // 800D0B40
L_800D0B44:;
  c->r[21]=c->r[21]+0x0000000Cu; // 800D0B44
  c->r[26]=c->r[26]+0x00000001u; // 800D0B48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0AE8; } // 800D0B4C
L_800D0B50:;
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[29]); // 800D0B50
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 800D0B54
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0B58
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 800D0B5C
  c->r[10]=R32(c->r[1]+0x00000064u); // 800D0B60
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[28]); // 800D0B64
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 800D0B68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0B6C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800D0B70
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 800D0B74
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[31]); // 800D0B78
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 800D0B7C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0B80
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 800D0B84
  c->r[8]=R32(c->r[1]+0x00000074u); // 800D0B88
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[30]); // 800D0B8C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 800D0B90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0B94
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 800D0B98
  c->r[9]=R32(c->r[1]+0x0000007Cu); // 800D0B9C
  cmps(c,0,(int32_t)c->r[10],0); // 800D0BA0
  if (!crb(c,0)) { goto L_800D0BAC; } // 800D0BA4
  c->r[10]=0u+0x00000000u; // 800D0BA8
L_800D0BAC:;
  cmps(c,0,(int32_t)c->r[10],9); // 800D0BAC
  if (!crb(c,1)) { goto L_800D0BB8; } // 800D0BB0
  c->r[10]=0u+0x00000009u; // 800D0BB4
L_800D0BB8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D0BB8
  if (!crb(c,0)) { goto L_800D0BC4; } // 800D0BBC
  c->r[7]=0u+0x00000000u; // 800D0BC0
L_800D0BC4:;
  cmps(c,0,(int32_t)c->r[7],9); // 800D0BC4
  if (!crb(c,1)) { goto L_800D0BD0; } // 800D0BC8
  c->r[7]=0u+0x00000009u; // 800D0BCC
L_800D0BD0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D0BD0
  if (!crb(c,0)) { goto L_800D0BDC; } // 800D0BD4
  c->r[8]=0u+0x00000000u; // 800D0BD8
L_800D0BDC:;
  cmps(c,0,(int32_t)c->r[8],9); // 800D0BDC
  if (!crb(c,1)) { goto L_800D0BE8; } // 800D0BE0
  c->r[8]=0u+0x00000009u; // 800D0BE4
L_800D0BE8:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D0BE8
  if (!crb(c,0)) { goto L_800D0BF4; } // 800D0BEC
  c->r[9]=0u+0x00000000u; // 800D0BF0
L_800D0BF4:;
  cmps(c,0,(int32_t)c->r[9],9); // 800D0BF4
  if (!crb(c,1)) { goto L_800D0C00; } // 800D0BF8
  c->r[9]=0u+0x00000009u; // 800D0BFC
L_800D0C00:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)640); // 800D0C00
  c->r[5]=c->r[24]+c->r[0]; // 800D0C04
  c->r[4]=rotl(c->r[7],6)&0xFFFFFFC0u; // 800D0C08
  goto L_800D0C68; // 800D0C0C
L_800D0C10:;
  c->r[11]=c->r[7]|c->r[7]; // 800D0C10
  c->r[6]=c->r[5]+c->r[4]; // 800D0C14
  goto L_800D0C58; // 800D0C18
L_800D0C1C:;
  c->r[26]=0u+0x00000000u; // 800D0C1C
  c->r[3]=c->r[6]|c->r[6]; // 800D0C20
  c->ctr=c->r[23]; // 800D0C24
L_800D0C28:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800D0C28
  cmps(c,0,(int32_t)c->r[0],0); // 800D0C2C
  if (!crb(c,2)) { goto L_800D0C44; } // 800D0C30
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D0C34
  c->r[3]=c->r[6]+c->r[0]; // 800D0C38
  W32(c->r[3]+0x00000028u,c->r[28]); // 800D0C3C
  goto L_800D0C50; // 800D0C40
L_800D0C44:;
  c->r[3]=c->r[3]+0x00000004u; // 800D0C44
  c->r[26]=c->r[26]+0x00000001u; // 800D0C48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0C28; } // 800D0C4C
L_800D0C50:;
  c->r[6]=c->r[6]+0x00000040u; // 800D0C50
  c->r[11]=c->r[11]+0x00000001u; // 800D0C54
L_800D0C58:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[9]); // 800D0C58
  if (!crb(c,1)) { IRQCHK(c); goto L_800D0C1C; } // 800D0C5C
  c->r[5]=c->r[5]+0x00000280u; // 800D0C60
  c->r[10]=c->r[10]+0x00000001u; // 800D0C64
L_800D0C68:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[8]); // 800D0C68
  if (!crb(c,1)) { IRQCHK(c); goto L_800D0C10; } // 800D0C6C
L_800D0C70:;
  c->r[25]=c->r[25]+0x00000001u; // 800D0C70
L_800D0C74:;
  cmpu(c,0,c->r[25],c->r[31]); // 800D0C74
  if (crb(c,0)) { IRQCHK(c); goto L_800D09BC; } // 800D0C78
  c->r[26]=c->r[26]+0x00000001u; // 800D0C7C
L_800D0C80:;
  cmpu(c,0,c->r[26],c->r[30]); // 800D0C80
  if (crb(c,0)) { IRQCHK(c); goto L_800D0980; } // 800D0C84
  c->r[0]=0u+0x00000108u; // 800D0C88
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D0C8C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800D0C90
  c->r[0]=0u+0x000000F8u; // 800D0C94
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800D0C98
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 800D0C9C
  c->r[0]=0u+0x000000E8u; // 800D0CA0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800D0CA4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 800D0CA8
  c->r[0]=0u+0x000000D8u; // 800D0CAC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800D0CB0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 800D0CB4
  c->r[0]=0u+0x000000C8u; // 800D0CB8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 800D0CBC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[27]=RF64(ea);} // 800D0CC0
  c->r[0]=0u+0x000000B8u; // 800D0CC4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,26,ea,0,0);} // 800D0CC8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[26]=RF64(ea);} // 800D0CCC
  c->r[11]=c->r[1]+0x000000B0u; // 800D0CD0
  c->lr=0x800D0CD8u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0CD4
  c->r[0]=R32(c->r[1]+0x00000114u); // 800D0CD8
  c->lr=c->r[0]; // 800D0CDC
  c->r[1]=c->r[1]+0x00000110u; // 800D0CE0
  return; // 800D0CE4
}

// fn_800D0CE8
void f_800D0CE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0CE8
  c->r[0]=c->lr; // 800D0CEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0CF0
  c->r[11]=c->r[1]+0x00000040u; // 800D0CF4
  c->lr=0x800D0CFCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0CF8
  c->r[25]=c->r[3]|c->r[3]; // 800D0CFC
  c->r[26]=c->r[4]|c->r[4]; // 800D0D00
  {uint32_t ea=c->r[2]+0xFFFF88C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0D04
  {uint32_t ea=c->r[2]+0xFFFF88C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0D08
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0D10
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 800D0D14
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0D18
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800D0D1C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D0D20
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D24
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D0D28
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 800D0D2C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0D30
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D0D34
  c->r[4]=R32(c->r[1]+0x00000014u); // 800D0D38
  c->r[27]=0u+0x00000000u; // 800D0D3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0D40
  if (!crb(c,0)) { goto L_800D0D4C; } // 800D0D44
  c->r[0]=0u+0x00000000u; // 800D0D48
L_800D0D4C:;
  cmps(c,0,(int32_t)c->r[0],9); // 800D0D4C
  if (!crb(c,1)) { goto L_800D0D58; } // 800D0D50
  c->r[0]=0u+0x00000009u; // 800D0D54
L_800D0D58:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0D58
  if (!crb(c,0)) { goto L_800D0D64; } // 800D0D5C
  c->r[4]=0u+0x00000000u; // 800D0D60
L_800D0D64:;
  cmps(c,0,(int32_t)c->r[4],9); // 800D0D64
  if (!crb(c,1)) { goto L_800D0D70; } // 800D0D68
  c->r[4]=0u+0x00000009u; // 800D0D6C
L_800D0D70:;
  c->r[28]=0u+0x00000000u; // 800D0D70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)640); // 800D0D74
  c->r[4]=rotl(c->r[4],6)&0xFFFFFFC0u; // 800D0D78
  c->r[0]=c->r[3]+c->r[0]; // 800D0D7C
  c->r[31]=c->r[4]+c->r[0]; // 800D0D80
  c->r[30]=c->r[5]|c->r[5]; // 800D0D84
L_800D0D88:;
  c->r[29]=R32(c->r[31]+0x00000028u); // 800D0D88
  cmps(c,0,(int32_t)c->r[29],0); // 800D0D8C
  if (crb(c,2)) { goto L_800D0DBC; } // 800D0D90
  c->r[3]=c->r[25]|c->r[25]; // 800D0D94
  c->r[4]=c->r[29]|c->r[29]; // 800D0D98
  c->lr=0x800D0DA0u; f_800BF370(c); // 800D0D9C
  c->r[4]=c->r[26]|c->r[26]; // 800D0DA0
  c->lr=0x800D0DA8u; f_800D055C(c); // 800D0DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D0DA8
  if (crb(c,2)) { goto L_800D0DBC; } // 800D0DAC
  W32(c->r[30]+0x00000000u,c->r[29]); // 800D0DB0
  c->r[30]=c->r[30]+0x00000004u; // 800D0DB4
  c->r[27]=c->r[27]+0x00000001u; // 800D0DB8
L_800D0DBC:;
  c->r[31]=c->r[31]+0x00000004u; // 800D0DBC
  c->r[28]=c->r[28]+0x00000001u; // 800D0DC0
  cmpu(c,0,c->r[28],0x00000010u); // 800D0DC4
  if (crb(c,0)) { IRQCHK(c); goto L_800D0D88; } // 800D0DC8
  c->r[3]=c->r[27]|c->r[27]; // 800D0DCC
  c->r[11]=c->r[1]+0x00000040u; // 800D0DD0
  c->lr=0x800D0DD8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0DD4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0DD8
  c->lr=c->r[0]; // 800D0DDC
  c->r[1]=c->r[1]+0x00000040u; // 800D0DE0
  return; // 800D0DE4
}

// fn_800D0DE8
void f_800D0DE8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000068u; // 800D0DE8
  return; // 800D0DEC
}

// dtor_800D0DF0
void f_800D0DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0DF0
  c->r[0]=c->lr; // 800D0DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0DFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0E00
  c->r[30]=c->r[3]|c->r[3]; // 800D0E04
  c->r[31]=c->r[4]|c->r[4]; // 800D0E08
  cmps(c,0,(int32_t)c->r[3],0); // 800D0E0C
  if (crb(c,2)) { goto L_800D0E30; } // 800D0E10
  c->r[4]=0u+0x00000000u; // 800D0E14
  c->lr=0x800D0E1Cu; f_800BEF34(c); // 800D0E18
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D0E1C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0E20
  if (!crb(c,1)) { goto L_800D0E30; } // 800D0E24
  c->r[3]=c->r[30]|c->r[30]; // 800D0E28
  c->lr=0x800D0E30u; f_80047B20(c); // 800D0E2C
L_800D0E30:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0E30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0E34
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D0E38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0E3C
  c->lr=c->r[0]; // 800D0E40
  c->r[1]=c->r[1]+0x00000010u; // 800D0E44
  return; // 800D0E48
}

// fn_800D0E4C
void f_800D0E4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0E4C
  c->r[0]=c->lr; // 800D0E50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0E54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0E58
  c->r[31]=c->r[3]|c->r[3]; // 800D0E5C
  c->lr=0x800D0E64u; f_800BEEF8(c); // 800D0E60
  c->r[3]=0u+0x80460000u; // 800D0E64
  c->r[0]=c->r[3]+0x00000C3Cu; // 800D0E68
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D0E6C
  c->r[3]=c->r[31]|c->r[31]; // 800D0E70
  c->lr=0x800D0E78u; f_800D08B0(c); // 800D0E74
  c->r[3]=c->r[31]|c->r[31]; // 800D0E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0E7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0E80
  c->lr=c->r[0]; // 800D0E84
  c->r[1]=c->r[1]+0x00000010u; // 800D0E88
  return; // 800D0E8C
}

// fn_800D0E90
void f_800D0E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0E90
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800D0E94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800D0E98
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800D0E9C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800D0EA0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800D0EA4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800D0EA8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800D0EAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 800D0EB0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 800D0EB4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 800D0EB8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 800D0EBC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 800D0EC0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 800D0EC4
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0EC8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800D0ECC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800D0ED0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D0ED4
  c->r[0]=0u+0x00000000u; // 800D0ED8
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D0EDC
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D0EE0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 800D0EE4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 800D0EE8
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800D0EEC
  c->r[0]=0u+0x00000003u; // 800D0EF0
  W32(c->r[3]+0x00000058u,c->r[0]); // 800D0EF4
  return; // 800D0EF8
}

// fn_800D0EFC
void f_800D0EFC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D0EFC
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D0F00
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0F04
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D0F08
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 800D0F0C
  W32(c->r[3]+0x00000040u,c->r[4]); // 800D0F10
  return; // 800D0F14
}

// fn_800D0F18
void f_800D0F18(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 800D0F18
  c->r[4]=c->r[3]|c->r[3]; // 800D0F1C
  goto L_800D0F3C; // 800D0F20
L_800D0F24:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0F24
  c->r[0]=c->r[0]+c->r[5]; // 800D0F28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0F2C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800D0F30
  c->r[4]=c->r[4]+0x00000004u; // 800D0F34
  c->r[5]=c->r[5]+0x00000001u; // 800D0F38
L_800D0F3C:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D0F3C
  cmpu(c,0,c->r[5],c->r[0]); // 800D0F40
  if (crb(c,0)) { IRQCHK(c); goto L_800D0F24; } // 800D0F44
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D0F48
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D0F4C
  return; // 800D0F50
}

// fn_800D0F54
void f_800D0F54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0F54
  c->r[0]=0u+0x43300000u; // 800D0F58
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D0F5C
  c->r[0]=0u+0x43300000u; // 800D0F60
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D0F64
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D0F68
  cmpu(c,0,c->r[0],0x0000000Cu); // 800D0F6C
  if (!crb(c,0)) { goto L_800D13CC; } // 800D0F70
  cmps(c,0,(int32_t)c->r[0],0); // 800D0F74
  if (!crb(c,2)) { goto L_800D10C0; } // 800D0F78
  c->r[7]=0u+0x00000000u; // 800D0F7C
  cmps(c,0,(int32_t)c->r[5],0); // 800D0F80
  if (crb(c,2)) { goto L_800D10AC; } // 800D0F84
  c->r[8]=c->r[5]+0xFFFFFFF8u; // 800D0F88
  cmpu(c,0,c->r[5],0x00000008u); // 800D0F8C
  if (!crb(c,1)) { goto L_800D1074; } // 800D0F90
  c->r[6]=c->r[3]|c->r[3]; // 800D0F94
  c->r[0]=c->r[8]+0x00000007u; // 800D0F98
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D0F9C
  c->ctr=c->r[0]; // 800D0FA0
  cmpu(c,0,c->r[8],0x00000000u); // 800D0FA4
  if (!crb(c,1)) { goto L_800D1074; } // 800D0FA8
L_800D0FAC:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0FAC
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D0FB0
  c->r[0]=c->r[0]+c->r[7]; // 800D0FB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0FB8
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800D0FBC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0FC0
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D0FC4
  c->r[0]=c->r[0]+c->r[7]; // 800D0FC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0FCC
  c->r[8]=c->r[3]+c->r[0]; // 800D0FD0
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[0]);} // 800D0FD4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0FD8
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D0FDC
  c->r[0]=c->r[0]+c->r[7]; // 800D0FE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0FE4
  c->r[8]=c->r[3]+c->r[0]; // 800D0FE8
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[0]);} // 800D0FEC
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0FF0
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D0FF4
  c->r[0]=c->r[0]+c->r[7]; // 800D0FF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0FFC
  c->r[8]=c->r[3]+c->r[0]; // 800D1000
  {uint32_t ea=c->r[8]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D1004
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1008
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D100C
  c->r[0]=c->r[0]+c->r[7]; // 800D1010
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1014
  c->r[8]=c->r[3]+c->r[0]; // 800D1018
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[0]);} // 800D101C
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1020
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D1024
  c->r[0]=c->r[0]+c->r[7]; // 800D1028
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D102C
  c->r[8]=c->r[3]+c->r[0]; // 800D1030
  {uint32_t ea=c->r[8]+0x00000014u; WF32(ea,c->f[0]);} // 800D1034
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1038
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D103C
  c->r[0]=c->r[0]+c->r[7]; // 800D1040
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1044
  c->r[8]=c->r[3]+c->r[0]; // 800D1048
  {uint32_t ea=c->r[8]+0x00000018u; WF32(ea,c->f[0]);} // 800D104C
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1050
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D1054
  c->r[0]=c->r[0]+c->r[7]; // 800D1058
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D105C
  c->r[8]=c->r[3]+c->r[0]; // 800D1060
  {uint32_t ea=c->r[8]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D1064
  c->r[6]=c->r[6]+0x00000020u; // 800D1068
  c->r[7]=c->r[7]+0x00000008u; // 800D106C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0FAC; } // 800D1070
L_800D1074:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D1074
  c->r[6]=c->r[3]+c->r[0]; // 800D1078
  c->r[0]=c->r[5]-c->r[7]; // 800D107C
  c->ctr=c->r[0]; // 800D1080
  cmpu(c,0,c->r[7],c->r[5]); // 800D1084
  if (!crb(c,0)) { goto L_800D10AC; } // 800D1088
L_800D108C:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D108C
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D1090
  c->r[0]=c->r[0]+c->r[7]; // 800D1094
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1098
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800D109C
  c->r[6]=c->r[6]+0x00000004u; // 800D10A0
  c->r[7]=c->r[7]+0x00000001u; // 800D10A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D108C; } // 800D10A8
L_800D10AC:;
  c->r[6]=R32(c->r[3]+0x00000044u); // 800D10AC
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D10B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D10B4
  c->r[0]=c->r[6]+c->r[0]; // 800D10B8
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D10BC
L_800D10C0:;
  c->r[7]=0u+0x00000000u; // 800D10C0
  cmps(c,0,(int32_t)c->r[5],0); // 800D10C4
  if (crb(c,2)) { goto L_800D11F0; } // 800D10C8
  c->r[8]=c->r[5]+0xFFFFFFF8u; // 800D10CC
  cmpu(c,0,c->r[5],0x00000008u); // 800D10D0
  if (!crb(c,1)) { goto L_800D11B8; } // 800D10D4
  c->r[6]=c->r[4]|c->r[4]; // 800D10D8
  c->r[0]=c->r[8]+0x00000007u; // 800D10DC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D10E0
  c->ctr=c->r[0]; // 800D10E4
  cmpu(c,0,c->r[8],0x00000000u); // 800D10E8
  if (!crb(c,1)) { goto L_800D11B8; } // 800D10EC
L_800D10F0:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D10F0
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D10F4
  c->r[0]=c->r[0]+c->r[7]; // 800D10F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D10FC
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800D1100
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1104
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1108
  c->r[0]=c->r[0]+c->r[7]; // 800D110C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1110
  c->r[8]=c->r[3]+c->r[0]; // 800D1114
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[0]);} // 800D1118
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D111C
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1120
  c->r[0]=c->r[0]+c->r[7]; // 800D1124
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1128
  c->r[8]=c->r[3]+c->r[0]; // 800D112C
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[0]);} // 800D1130
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1134
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1138
  c->r[0]=c->r[0]+c->r[7]; // 800D113C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1140
  c->r[8]=c->r[3]+c->r[0]; // 800D1144
  {uint32_t ea=c->r[8]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D1148
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D114C
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1150
  c->r[0]=c->r[0]+c->r[7]; // 800D1154
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1158
  c->r[8]=c->r[3]+c->r[0]; // 800D115C
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[0]);} // 800D1160
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1164
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1168
  c->r[0]=c->r[0]+c->r[7]; // 800D116C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1170
  c->r[8]=c->r[3]+c->r[0]; // 800D1174
  {uint32_t ea=c->r[8]+0x00000014u; WF32(ea,c->f[0]);} // 800D1178
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D117C
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1180
  c->r[0]=c->r[0]+c->r[7]; // 800D1184
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1188
  c->r[8]=c->r[3]+c->r[0]; // 800D118C
  {uint32_t ea=c->r[8]+0x00000018u; WF32(ea,c->f[0]);} // 800D1190
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1194
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D1198
  c->r[0]=c->r[0]+c->r[7]; // 800D119C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D11A0
  c->r[8]=c->r[3]+c->r[0]; // 800D11A4
  {uint32_t ea=c->r[8]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D11A8
  c->r[6]=c->r[6]+0x00000020u; // 800D11AC
  c->r[7]=c->r[7]+0x00000008u; // 800D11B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D10F0; } // 800D11B4
L_800D11B8:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D11B8
  c->r[4]=c->r[4]+c->r[0]; // 800D11BC
  c->r[0]=c->r[5]-c->r[7]; // 800D11C0
  c->ctr=c->r[0]; // 800D11C4
  cmpu(c,0,c->r[7],c->r[5]); // 800D11C8
  if (!crb(c,0)) { goto L_800D11F0; } // 800D11CC
L_800D11D0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D11D0
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D11D4
  c->r[0]=c->r[0]+c->r[7]; // 800D11D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D11DC
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800D11E0
  c->r[4]=c->r[4]+0x00000004u; // 800D11E4
  c->r[7]=c->r[7]+0x00000001u; // 800D11E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D11D0; } // 800D11EC
L_800D11F0:;
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D11F0
  c->r[4]=R32(c->r[3]+0x00000040u); // 800D11F4
  c->r[0]=c->r[0]+c->r[4]; // 800D11F8
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D11FC
  c->r[4]=divwu(c->r[0],c->r[4]); // 800D1200
  c->r[9]=c->r[4]+0xFFFFFFFEu; // 800D1204
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1208
  fcmp(c,0,c->f[0],c->f[1]); // 800D120C
  if (!crb(c,2)) { goto L_800D13C0; } // 800D1210
  {uint32_t ea=c->r[2]+0xFFFF88D0u; c->f[1]=RF64(ea);} // 800D1214
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800D1218
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D121C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D1220
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1224
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 800D1228
  c->r[8]=0u+0x00000001u; // 800D122C
  cmpu(c,1,c->r[9],0x00000001u); // 800D1230
  if (crb(c,4)) { goto L_800D13CC; } // 800D1234
  c->r[4]=c->r[9]+0xFFFFFFF8u; // 800D1238
  cmpu(c,0,c->r[9],0x00000008u); // 800D123C
  if (!crb(c,1)) { goto L_800D137C; } // 800D1240
  c->r[5]=0u+0x00000000u; // 800D1244
  c->r[6]=0u+0x00000000u; // 800D1248
  c->r[7]=0u+0x00000000u; // 800D124C
  if (crb(c,4)) { goto L_800D1264; } // 800D1250
  c->r[0]=0u+0xFFFFFFFFu; // 800D1254
  cmpu(c,0,c->r[9],c->r[0]); // 800D1258
  if (!crb(c,0)) { goto L_800D1264; } // 800D125C
  c->r[7]=0u+0x00000001u; // 800D1260
L_800D1264:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D1264
  if (crb(c,2)) { goto L_800D1278; } // 800D1268
  cmpu(c,0,c->r[9],0x00000001u); // 800D126C
  if (crb(c,0)) { goto L_800D1278; } // 800D1270
  c->r[6]=0u+0x00000001u; // 800D1274
L_800D1278:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D1278
  if (crb(c,2)) { goto L_800D1290; } // 800D127C
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 800D1280
  cmpu(c,0,c->r[9],c->r[0]); // 800D1284
  if (crb(c,0)) { goto L_800D1290; } // 800D1288
  c->r[5]=0u+0x00000001u; // 800D128C
L_800D1290:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D1290
  if (crb(c,2)) { goto L_800D137C; } // 800D1294
  c->r[5]=c->r[3]+0x00000004u; // 800D1298
  {uint32_t ea=c->r[2]+0xFFFF88D0u; c->f[1]=RF64(ea);} // 800D129C
  c->r[0]=c->r[4]+0x00000007u; // 800D12A0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D12A4
  c->ctr=c->r[0]; // 800D12A8
  cmpu(c,0,c->r[4],0x00000001u); // 800D12AC
  if (crb(c,0)) { goto L_800D137C; } // 800D12B0
L_800D12B4:;
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D12B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D12B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D12BC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D12C0
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 800D12C4
  c->r[0]=c->r[8]+0x00000001u; // 800D12C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D12CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D12D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D12D4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D12D8
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[0]);} // 800D12DC
  c->r[0]=c->r[8]+0x00000002u; // 800D12E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D12E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D12E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D12EC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D12F0
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 800D12F4
  c->r[0]=c->r[8]+0x00000003u; // 800D12F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D12FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D1300
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D1304
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D1308
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D130C
  c->r[0]=c->r[8]+0x00000004u; // 800D1310
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1314
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D1318
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D131C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D1320
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[0]);} // 800D1324
  c->r[0]=c->r[8]+0x00000005u; // 800D1328
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D132C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D1330
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D1334
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D1338
  {uint32_t ea=c->r[5]+0x00000044u; WF32(ea,c->f[0]);} // 800D133C
  c->r[0]=c->r[8]+0x00000006u; // 800D1340
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1344
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D1348
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D134C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D1350
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[0]);} // 800D1354
  c->r[0]=c->r[8]+0x00000007u; // 800D1358
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D135C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D1360
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D1364
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D1368
  {uint32_t ea=c->r[5]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D136C
  c->r[5]=c->r[5]+0x00000020u; // 800D1370
  c->r[8]=c->r[8]+0x00000008u; // 800D1374
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D12B4; } // 800D1378
L_800D137C:;
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D137C
  c->r[3]=c->r[3]+c->r[0]; // 800D1380
  {uint32_t ea=c->r[2]+0xFFFF88D0u; c->f[1]=RF64(ea);} // 800D1384
  c->r[0]=c->r[9]+0x00000001u; // 800D1388
  c->r[0]=c->r[0]-c->r[8]; // 800D138C
  c->ctr=c->r[0]; // 800D1390
  cmpu(c,0,c->r[8],c->r[9]); // 800D1394
  if (crb(c,1)) { goto L_800D13CC; } // 800D1398
L_800D139C:;
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D139C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D13A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D13A4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D13A8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800D13AC
  c->r[3]=c->r[3]+0x00000004u; // 800D13B0
  c->r[8]=c->r[8]+0x00000001u; // 800D13B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D139C; } // 800D13B8
  goto L_800D13CC; // 800D13BC
L_800D13C0:;
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D13C0
  c->r[3]=c->r[3]+c->r[0]; // 800D13C4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 800D13C8
L_800D13CC:;
  c->r[1]=c->r[1]+0x00000020u; // 800D13CC
  return; // 800D13D0
}

// fn_800D13D4
void f_800D13D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D13D4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 800D13D8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 800D13DC
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D13E0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800D13E4
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D13E8
  c->r[5]=R32(c->r[3]+0x00000040u); // 800D13EC
  cmpu(c,0,c->r[0],c->r[5]); // 800D13F0
  if (crb(c,0)) return; // 800D13F4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D13F8
  fcmp(c,0,c->f[2],c->f[0]); // 800D13FC
  if (!crb(c,2)) return; // 800D1400
  c->r[0]=c->r[0]-c->r[5]; // 800D1404
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1408
  c->r[4]=c->r[3]+c->r[0]; // 800D140C
  c->r[6]=0u+0x00000001u; // 800D1410
  f_800D141C(c); return; // 800D1414
  return; // 800D1418
}

// fn_800D141C
void f_800D141C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D141C
  c->r[0]=c->lr; // 800D1420
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1428
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D142C
  c->r[30]=c->r[3]|c->r[3]; // 800D1430
  c->r[31]=c->r[4]|c->r[4]; // 800D1434
  cmps(c,0,(int32_t)c->r[6],1); // 800D1438
  if (!crb(c,2)) { goto L_800D1448; } // 800D143C
  c->r[4]=R32(c->r[3]+0x00000040u); // 800D1440
  c->lr=0x800D1448u; f_800D0EFC(c); // 800D1444
L_800D1448:;
  c->r[4]=0u+0x00000000u; // 800D1448
  c->r[3]=c->r[30]|c->r[30]; // 800D144C
  goto L_800D1468; // 800D1450
L_800D1454:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1454
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800D1458
  c->r[31]=c->r[31]+0x00000004u; // 800D145C
  c->r[3]=c->r[3]+0x00000004u; // 800D1460
  c->r[4]=c->r[4]+0x00000001u; // 800D1464
L_800D1468:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D1468
  cmpu(c,0,c->r[4],c->r[0]); // 800D146C
  if (crb(c,0)) { IRQCHK(c); goto L_800D1454; } // 800D1470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1474
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1478
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D147C
  c->lr=c->r[0]; // 800D1480
  c->r[1]=c->r[1]+0x00000010u; // 800D1484
  return; // 800D1488
}

// fn_800D148C
void f_800D148C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 800D148C
  c->r[5]=c->r[3]|c->r[3]; // 800D1490
  goto L_800D14AC; // 800D1494
L_800D1498:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1498
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800D149C
  c->r[5]=c->r[5]+0x00000004u; // 800D14A0
  c->r[4]=c->r[4]+0x00000004u; // 800D14A4
  c->r[6]=c->r[6]+0x00000001u; // 800D14A8
L_800D14AC:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D14AC
  cmpu(c,0,c->r[6],c->r[0]); // 800D14B0
  if (crb(c,0)) { IRQCHK(c); goto L_800D1498; } // 800D14B4
  return; // 800D14B8
}

// fn_800D14BC
void f_800D14BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D14BC
  c->r[0]=c->lr; // 800D14C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D14C4
  c->r[11]=c->r[1]+0x00000020u; // 800D14C8
  c->lr=0x800D14D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D14CC
  c->r[27]=c->r[3]|c->r[3]; // 800D14D0
  c->r[4]=R32(c->r[3]+0x00000040u); // 800D14D4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D14D8
  c->r[31]=c->r[3]+c->r[0]; // 800D14DC
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D14E0
  c->r[30]=c->r[3]+c->r[0]; // 800D14E4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800D14E8
  c->r[29]=c->r[3]+c->r[0]; // 800D14EC
  c->r[0]=R32(c->r[3]+0x00000044u); // 800D14F0
  cmps(c,0,(int32_t)c->r[0],0); // 800D14F4
  if (crb(c,2)) { goto L_800D168C; } // 800D14F8
  {uint32_t ea=c->r[3]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D14FC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 800D1500
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1504
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 800D1508
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 800D150C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1510
  fcmp(c,0,c->f[2],c->f[0]); // 800D1514
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D1518
  if (!crb(c,2)) { goto L_800D1524; } // 800D151C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D1520
L_800D1524:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1524
  {uint32_t ea=c->r[3]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1528
  fcmp(c,0,c->f[0],c->f[2]); // 800D152C
  if (!crb(c,2)) { goto L_800D153C; } // 800D1530
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1534
  goto L_800D1544; // 800D1538
L_800D153C:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D153C
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[2]); // 800D1540
L_800D1544:;
  c->r[4]=R32(c->r[3]+0x00000044u); // 800D1544
  c->r[0]=R32(c->r[3]+0x00000040u); // 800D1548
  c->r[4]=divwu(c->r[4],c->r[0]); // 800D154C
  c->r[28]=c->r[4]+0xFFFFFFFEu; // 800D1550
  c->r[0]=R32(c->r[3]+0x00000058u); // 800D1554
  cmps(c,0,(int32_t)c->r[0],2); // 800D1558
  if (crb(c,2)) { goto L_800D1598; } // 800D155C
  if (!crb(c,0)) { goto L_800D1574; } // 800D1560
  cmps(c,0,(int32_t)c->r[0],0); // 800D1564
  if (crb(c,2)) { goto L_800D1580; } // 800D1568
  if (!crb(c,0)) { goto L_800D1588; } // 800D156C
  goto L_800D15D8; // 800D1570
L_800D1574:;
  cmps(c,0,(int32_t)c->r[0],4); // 800D1574
  if (!crb(c,0)) { goto L_800D15D8; } // 800D1578
  goto L_800D15B8; // 800D157C
L_800D1580:;
  c->f[1]=c->f[2]; // 800D1580
  goto L_800D15D8; // 800D1584
L_800D1588:;
  {uint32_t ea=c->r[2]+0xFFFF8820u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1588
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800D158C
  c->lr=0x800D1594u; f_800ABE88(c); // 800D1590
  goto L_800D15D8; // 800D1594
L_800D1598:;
  {uint32_t ea=c->r[2]+0xFFFF8820u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1598
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800D159C
  {uint32_t ea=c->r[2]+0xFFFF8824u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D15A0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D15A4
  c->lr=0x800D15ACu; f_800ABE88(c); // 800D15A8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D15AC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D15B0
  goto L_800D15D8; // 800D15B4
L_800D15B8:;
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D15B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 800D15BC
  {uint32_t ea=c->r[2]+0xFFFF8824u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D15C0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D15C4
  c->lr=0x800D15CCu; f_800ABE88(c); // 800D15C8
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D15CC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 800D15D0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800D15D4
L_800D15D8:;
  c->r[4]=0u+0x00000000u; // 800D15D8
  c->r[3]=c->r[27]|c->r[27]; // 800D15DC
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800D15E0
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D15E4
  goto L_800D1680; // 800D15E8
L_800D15EC:;
  cmps(c,0,(int32_t)c->r[28],2); // 800D15EC
  if (crb(c,2)) { goto L_800D1634; } // 800D15F0
  if (!crb(c,0)) { goto L_800D166C; } // 800D15F4
  cmps(c,0,(int32_t)c->r[28],0); // 800D15F8
  if (crb(c,2)) { goto L_800D160C; } // 800D15FC
  if (!crb(c,0)) { goto L_800D1618; } // 800D1600
  goto L_800D166C; // 800D1604
  goto L_800D166C; // 800D1608
L_800D160C:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D160C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800D1610
  goto L_800D166C; // 800D1614
L_800D1618:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1618
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D161C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800D1620
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D1624
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800D1628
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800D162C
  goto L_800D166C; // 800D1630
L_800D1634:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1634
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D1638
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 800D163C
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[1]); // 800D1640
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1644
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800D1648
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 800D164C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1650
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D1654
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D1658
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800D165C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800D1660
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[0]); // 800D1664
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800D1668
L_800D166C:;
  c->r[31]=c->r[31]+0x00000004u; // 800D166C
  c->r[3]=c->r[3]+0x00000004u; // 800D1670
  c->r[30]=c->r[30]+0x00000004u; // 800D1674
  c->r[29]=c->r[29]+0x00000004u; // 800D1678
  c->r[4]=c->r[4]+0x00000001u; // 800D167C
L_800D1680:;
  c->r[0]=R32(c->r[27]+0x00000040u); // 800D1680
  cmpu(c,0,c->r[4],c->r[0]); // 800D1684
  if (crb(c,0)) { IRQCHK(c); goto L_800D15EC; } // 800D1688
L_800D168C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D168C
  c->lr=0x800D1694u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1690
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1694
  c->lr=c->r[0]; // 800D1698
  c->r[1]=c->r[1]+0x00000020u; // 800D169C
  return; // 800D16A0
}

// fn_800D16A4
void f_800D16A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D16A4
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D16A8
  fcmp(c,0,c->f[0],c->f[1]); // 800D16AC
  if (!crb(c,2)) { goto L_800D16BC; } // 800D16B0
  c->r[3]=0u+0x00000001u; // 800D16B4
  return; // 800D16B8
L_800D16BC:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D16BC
  fcmp(c,0,c->f[0],c->f[1]); // 800D16C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D16C4
  c->r[3]=c->cr; // 800D16C8
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 800D16CC
  return; // 800D16D0
}

// fn_800D16D4
void f_800D16D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D16D4
  c->r[0]=c->lr; // 800D16D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D16DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D16E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D16E4
  c->r[30]=c->r[3]|c->r[3]; // 800D16E8
  c->r[31]=c->r[4]|c->r[4]; // 800D16EC
  c->r[3]=c->r[31]|c->r[31]; // 800D16F0
  c->r[4]=c->r[30]|c->r[30]; // 800D16F4
  c->r[5]=0u+0x00000030u; // 800D16F8
  c->lr=0x800D1700u; f_802E53B8(c); // 800D16FC
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D1700
  W32(c->r[31]+0x00000030u,c->r[0]); // 800D1704
  c->r[0]=R32(c->r[30]+0x00000044u); // 800D1708
  W32(c->r[31]+0x00000034u,c->r[0]); // 800D170C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1710
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800D1714
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1718
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D171C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1720
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800D1724
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1728
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D172C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1730
  c->lr=c->r[0]; // 800D1734
  c->r[1]=c->r[1]+0x00000010u; // 800D1738
  return; // 800D173C
}

// fn_800D1740
void f_800D1740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1740
  c->r[0]=c->lr; // 800D1744
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D174C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1750
  c->r[30]=c->r[3]|c->r[3]; // 800D1754
  c->r[31]=c->r[4]|c->r[4]; // 800D1758
  c->r[5]=0u+0x00000030u; // 800D175C
  c->lr=0x800D1764u; f_802E53B8(c); // 800D1760
  c->r[0]=R32(c->r[31]+0x00000030u); // 800D1764
  W32(c->r[30]+0x00000040u,c->r[0]); // 800D1768
  c->r[0]=R32(c->r[31]+0x00000034u); // 800D176C
  W32(c->r[30]+0x00000044u,c->r[0]); // 800D1770
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1774
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D1778
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D177C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800D1780
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1784
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800D1788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D178C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1790
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1794
  c->lr=c->r[0]; // 800D1798
  c->r[1]=c->r[1]+0x00000010u; // 800D179C
  return; // 800D17A0
}

// fn_800D17A4
void f_800D17A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D17A4
  c->r[0]=c->lr; // 800D17A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D17AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D17B0
  c->r[31]=c->r[3]|c->r[3]; // 800D17B4
  c->lr=0x800D17BCu; f_800BDCD0(c); // 800D17B8
  c->r[3]=0u+0x80460000u; // 800D17BC
  c->r[0]=c->r[3]+0x000010D0u; // 800D17C0
  W32(c->r[31]+0x00000048u,c->r[0]); // 800D17C4
  c->r[3]=c->r[31]+0x00000054u; // 800D17C8
  c->r[4]=0u+0x800D0000u; // 800D17CC
  c->r[4]=c->r[4]+0xFFFFA414u; // 800D17D0
  c->r[5]=0u+0x800D0000u; // 800D17D4
  c->r[5]=c->r[5]+0xFFFFA3D0u; // 800D17D8
  c->r[6]=0u+0x00000060u; // 800D17DC
  c->r[7]=0u+0x00000009u; // 800D17E0
  c->lr=0x800D17E8u; f_802F07B0(c); // 800D17E4
  c->r[3]=c->r[31]+0x000003C0u; // 800D17E8
  c->lr=0x800D17F0u; f_8004B0A4(c); // 800D17EC
  c->r[3]=c->r[31]+0x000003CCu; // 800D17F0
  c->lr=0x800D17F8u; f_8004B0A4(c); // 800D17F4
  c->r[3]=c->r[31]+0x000003DCu; // 800D17F8
  c->lr=0x800D1800u; f_800D1818(c); // 800D17FC
  c->r[3]=c->r[31]|c->r[31]; // 800D1800
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1804
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1808
  c->lr=c->r[0]; // 800D180C
  c->r[1]=c->r[1]+0x00000010u; // 800D1810
  return; // 800D1814
}

// fn_800D1818
void f_800D1818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1818
  c->r[0]=c->lr; // 800D181C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1824
  c->r[31]=c->r[3]|c->r[3]; // 800D1828
  c->lr=0x800D1830u; f_800592DC(c); // 800D182C
  c->r[3]=c->r[31]+0x00000008u; // 800D1830
  c->lr=0x800D1838u; f_800592DC(c); // 800D1834
  c->r[3]=c->r[31]+0x00000028u; // 800D1838
  c->lr=0x800D1840u; f_8004B0A4(c); // 800D183C
  c->r[3]=c->r[31]+0x00000034u; // 800D1840
  c->lr=0x800D1848u; f_8004B0A4(c); // 800D1844
  c->r[3]=c->r[31]|c->r[31]; // 800D1848
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D184C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1850
  c->lr=c->r[0]; // 800D1854
  c->r[1]=c->r[1]+0x00000010u; // 800D1858
  return; // 800D185C
}

// fn_800D1860
void f_800D1860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1860
  c->r[0]=c->lr; // 800D1864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D186C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1870
  c->r[30]=c->r[3]|c->r[3]; // 800D1874
  c->r[31]=c->r[4]|c->r[4]; // 800D1878
  cmps(c,0,(int32_t)c->r[3],0); // 800D187C
  if (crb(c,2)) { goto L_800D18BC; } // 800D1880
  c->r[3]=c->r[3]+0x00000054u; // 800D1884
  c->r[4]=0u+0x800D0000u; // 800D1888
  c->r[4]=c->r[4]+0xFFFFA3D0u; // 800D188C
  c->r[5]=0u+0x00000060u; // 800D1890
  c->r[6]=0u+0x00000009u; // 800D1894
  c->lr=0x800D189Cu; f_802F08A8(c); // 800D1898
  c->r[3]=c->r[30]|c->r[30]; // 800D189C
  c->r[4]=0u+0x00000000u; // 800D18A0
  c->lr=0x800D18A8u; f_800BDD24(c); // 800D18A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D18A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D18AC
  if (!crb(c,1)) { goto L_800D18BC; } // 800D18B0
  c->r[3]=c->r[30]|c->r[30]; // 800D18B4
  c->lr=0x800D18BCu; f_80047B20(c); // 800D18B8
L_800D18BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D18BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D18C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D18C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D18C8
  c->lr=c->r[0]; // 800D18CC
  c->r[1]=c->r[1]+0x00000010u; // 800D18D0
  return; // 800D18D4
}

// fn_800D18D8
void f_800D18D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D18D8
  c->r[0]=c->lr; // 800D18DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D18E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D18E4
  c->r[31]=c->r[3]|c->r[3]; // 800D18E8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D18EC
  {uint32_t ea=c->r[3]+0x000003B4u; WF32(ea,c->f[0]);} // 800D18F0
  {uint32_t ea=c->r[2]+0xFFFF88D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D18F4
  {uint32_t ea=c->r[3]+0x000003B8u; WF32(ea,c->f[0]);} // 800D18F8
  c->r[0]=0u+0x00000002u; // 800D18FC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D1900
  c->r[0]=0u+0x00000000u; // 800D1904
  W32(c->r[3]+0x000003BCu,c->r[0]); // 800D1908
  W32(c->r[3]+0x00000050u,c->r[0]); // 800D190C
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1910
  {uint32_t ea=c->r[3]+0x000003D8u; WF32(ea,c->f[0]);} // 800D1914
  W32(c->r[3]+0x000006B4u,c->r[0]); // 800D1918
  W32(c->r[3]+0x000006B0u,c->r[0]); // 800D191C
  c->r[3]=c->r[3]+0x000003DCu; // 800D1920
  c->r[4]=0u+0x00000000u; // 800D1924
  c->r[5]=0u+0x00000048u; // 800D1928
  c->lr=0x800D1930u; f_800060B8(c); // 800D192C
  c->r[3]=c->r[31]+0x00000054u; // 800D1930
  c->r[4]=0u+0x00000003u; // 800D1934
  c->lr=0x800D193Cu; f_800D0EFC(c); // 800D1938
  c->r[3]=c->r[31]+0x00000174u; // 800D193C
  c->r[4]=0u+0x00000003u; // 800D1940
  c->lr=0x800D1948u; f_800D0EFC(c); // 800D1944
  c->r[3]=c->r[31]+0x000000B4u; // 800D1948
  c->r[4]=0u+0x00000003u; // 800D194C
  c->lr=0x800D1954u; f_800D0EFC(c); // 800D1950
  c->r[3]=c->r[31]+0x00000114u; // 800D1954
  c->r[4]=0u+0x00000003u; // 800D1958
  c->lr=0x800D1960u; f_800D0EFC(c); // 800D195C
  c->r[3]=c->r[31]+0x000001D4u; // 800D1960
  c->r[4]=0u+0x00000001u; // 800D1964
  c->lr=0x800D196Cu; f_800D0EFC(c); // 800D1968
  c->r[3]=c->r[31]+0x00000234u; // 800D196C
  c->r[4]=0u+0x00000001u; // 800D1970
  c->lr=0x800D1978u; f_800D0EFC(c); // 800D1974
  c->r[3]=c->r[31]+0x00000294u; // 800D1978
  c->r[4]=0u+0x00000001u; // 800D197C
  c->lr=0x800D1984u; f_800D0EFC(c); // 800D1980
  c->r[3]=c->r[31]+0x000002F4u; // 800D1984
  c->r[4]=0u+0x00000001u; // 800D1988
  c->lr=0x800D1990u; f_800D0EFC(c); // 800D198C
  c->r[3]=c->r[31]+0x00000354u; // 800D1990
  c->r[4]=0u+0x00000001u; // 800D1994
  c->lr=0x800D199Cu; f_800D0EFC(c); // 800D1998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D199C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D19A0
  c->lr=c->r[0]; // 800D19A4
  c->r[1]=c->r[1]+0x00000010u; // 800D19A8
  return; // 800D19AC
}

// fn_800D19B0
void f_800D19B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D19B0
  c->r[0]=c->lr; // 800D19B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D19B8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D19BC
  W32(c->r[1]+0x00000058u,c->r[30]); // 800D19C0
  c->r[30]=c->r[3]|c->r[3]; // 800D19C4
  c->r[31]=c->r[4]|c->r[4]; // 800D19C8
  c->r[3]=c->r[1]+0x00000040u; // 800D19CC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D19D0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D19D4
  c->f[3]=c->f[1]; // 800D19D8
  c->lr=0x800D19E0u; f_8004E34C(c); // 800D19DC
  c->r[3]=c->r[1]+0x00000034u; // 800D19E0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D19E4
  c->f[2]=c->f[1]; // 800D19E8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D19EC
  c->lr=0x800D19F4u; f_8004E34C(c); // 800D19F0
  c->r[3]=c->r[1]+0x00000028u; // 800D19F4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D19F8
  c->f[2]=c->f[1]; // 800D19FC
  c->f[3]=c->f[1]; // 800D1A00
  c->lr=0x800D1A08u; f_8004E34C(c); // 800D1A04
  c->r[3]=c->r[1]+0x0000001Cu; // 800D1A08
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1A0C
  c->f[2]=c->f[1]; // 800D1A10
  c->f[3]=c->f[1]; // 800D1A14
  c->lr=0x800D1A1Cu; f_8004E34C(c); // 800D1A18
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1A1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D1A20
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1A24
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800D1A28
  {uint32_t ea=c->r[2]+0xFFFF88E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1A2C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800D1A30
  {uint32_t ea=c->r[2]+0xFFFF88E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1A34
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D1A38
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1A3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800D1A40
  W32(c->r[30]+0x00000050u,c->r[31]); // 800D1A44
  c->r[3]=c->r[31]|c->r[31]; // 800D1A48
  c->r[4]=0u+0x00000040u; // 800D1A4C
  c->lr=0x800D1A54u; f_8005EE5C(c); // 800D1A50
  c->r[3]=c->r[30]+0x00000054u; // 800D1A54
  c->r[4]=c->r[1]+0x00000034u; // 800D1A58
  c->r[5]=0u+0x00000003u; // 800D1A5C
  c->r[6]=0u+0x00000001u; // 800D1A60
  c->lr=0x800D1A68u; f_800D141C(c); // 800D1A64
  c->r[3]=c->r[30]+0x000000B4u; // 800D1A68
  c->r[4]=c->r[1]+0x00000028u; // 800D1A6C
  c->r[5]=0u+0x00000003u; // 800D1A70
  c->r[6]=0u+0x00000001u; // 800D1A74
  c->lr=0x800D1A7Cu; f_800D141C(c); // 800D1A78
  c->r[3]=c->r[30]+0x00000114u; // 800D1A7C
  c->r[4]=c->r[1]+0x0000001Cu; // 800D1A80
  c->r[5]=0u+0x00000003u; // 800D1A84
  c->r[6]=0u+0x00000001u; // 800D1A88
  c->lr=0x800D1A90u; f_800D141C(c); // 800D1A8C
  c->r[3]=c->r[30]+0x000001D4u; // 800D1A90
  c->r[4]=c->r[1]+0x00000018u; // 800D1A94
  c->r[5]=0u+0x00000001u; // 800D1A98
  c->r[6]=0u+0x00000001u; // 800D1A9C
  c->lr=0x800D1AA4u; f_800D141C(c); // 800D1AA0
  c->r[3]=c->r[30]+0x00000234u; // 800D1AA4
  c->r[4]=c->r[1]+0x00000014u; // 800D1AA8
  c->r[5]=0u+0x00000001u; // 800D1AAC
  c->r[6]=0u+0x00000001u; // 800D1AB0
  c->lr=0x800D1AB8u; f_800D141C(c); // 800D1AB4
  c->r[3]=c->r[30]+0x00000294u; // 800D1AB8
  c->r[4]=c->r[1]+0x00000010u; // 800D1ABC
  c->r[5]=0u+0x00000001u; // 800D1AC0
  c->r[6]=0u+0x00000001u; // 800D1AC4
  c->lr=0x800D1ACCu; f_800D141C(c); // 800D1AC8
  c->r[3]=c->r[30]+0x000002F4u; // 800D1ACC
  c->r[4]=c->r[1]+0x0000000Cu; // 800D1AD0
  c->r[5]=0u+0x00000001u; // 800D1AD4
  c->r[6]=0u+0x00000001u; // 800D1AD8
  c->lr=0x800D1AE0u; f_800D141C(c); // 800D1ADC
  c->r[3]=c->r[30]+0x00000354u; // 800D1AE0
  c->r[4]=c->r[1]+0x00000008u; // 800D1AE4
  c->r[5]=0u+0x00000001u; // 800D1AE8
  c->r[6]=0u+0x00000001u; // 800D1AEC
  c->lr=0x800D1AF4u; f_800D141C(c); // 800D1AF0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D1AF4
  c->r[30]=R32(c->r[1]+0x00000058u); // 800D1AF8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D1AFC
  c->lr=c->r[0]; // 800D1B00
  c->r[1]=c->r[1]+0x00000060u; // 800D1B04
  return; // 800D1B08
}

// fn_800D1B0C
void f_800D1B0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1B0C
  c->r[0]=c->lr; // 800D1B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1B14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1B18
  c->r[31]=c->r[3]|c->r[3]; // 800D1B1C
  c->r[4]=0u+0x00000000u; // 800D1B20
  c->lr=0x800D1B28u; f_800D2BA8(c); // 800D1B24
  c->r[3]=c->r[31]|c->r[31]; // 800D1B28
  c->r[4]=0u+0x00000000u; // 800D1B2C
  c->r[5]=0u+0x00000000u; // 800D1B30
  c->lr=0x800D1B38u; f_800D2C24(c); // 800D1B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1B3C
  c->lr=c->r[0]; // 800D1B40
  c->r[1]=c->r[1]+0x00000010u; // 800D1B44
  return; // 800D1B48
}

// fn_800D1B4C
void f_800D1B4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1B4C
  c->r[0]=c->lr; // 800D1B50
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800D1B54
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800D1B58
  c->r[31]=c->r[3]|c->r[3]; // 800D1B5C
  c->r[3]=c->r[1]+0x000000A8u; // 800D1B60
  c->lr=0x800D1B68u; f_8004B0A0(c); // 800D1B64
  c->r[3]=c->r[1]+0x00000064u; // 800D1B68
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1B6C
  c->f[2]=c->f[1]; // 800D1B70
  c->f[3]=c->f[1]; // 800D1B74
  c->lr=0x800D1B7Cu; f_8004E34C(c); // 800D1B78
  c->r[3]=c->r[1]+0x00000058u; // 800D1B7C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1B80
  c->f[2]=c->f[1]; // 800D1B84
  c->f[3]=c->f[1]; // 800D1B88
  c->lr=0x800D1B90u; f_8004E34C(c); // 800D1B8C
  c->r[3]=c->r[1]+0x0000004Cu; // 800D1B90
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1B94
  c->f[2]=c->f[1]; // 800D1B98
  c->f[3]=c->f[1]; // 800D1B9C
  c->lr=0x800D1BA4u; f_8004E34C(c); // 800D1BA0
  c->r[3]=c->r[1]+0x00000040u; // 800D1BA4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1BA8
  c->f[2]=c->f[1]; // 800D1BAC
  c->f[3]=c->f[1]; // 800D1BB0
  c->lr=0x800D1BB8u; f_8004E34C(c); // 800D1BB4
  c->r[3]=c->r[1]+0x00000034u; // 800D1BB8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1BBC
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1BC0
  c->f[3]=c->f[1]; // 800D1BC4
  c->lr=0x800D1BCCu; f_8004E34C(c); // 800D1BC8
  c->r[3]=c->r[1]+0x00000028u; // 800D1BCC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1BD0
  c->f[2]=c->f[1]; // 800D1BD4
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1BD8
  c->lr=0x800D1BE0u; f_8004E34C(c); // 800D1BDC
  c->r[3]=c->r[1]+0x0000001Cu; // 800D1BE0
  c->lr=0x800D1BE8u; f_8004B0A4(c); // 800D1BE4
  c->r[3]=c->r[1]+0x00000070u; // 800D1BE8
  c->lr=0x800D1BF0u; f_800D1D10(c); // 800D1BEC
  c->lr=0x800D1BF4u; f_800A23BC(c); // 800D1BF0
  c->lr=0x800D1BF8u; f_800BB818(c); // 800D1BF4
  c->r[4]=0u+0x00000002u; // 800D1BF8
  c->lr=0x800D1C00u; f_800BBF74(c); // 800D1BFC
  c->lr=0x800D1C04u; f_800D3688(c); // 800D1C00
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C04
  if (!crb(c,2)) { goto L_800D1CFC; } // 800D1C08
  c->lr=0x800D1C10u; f_800A23BC(c); // 800D1C0C
  c->lr=0x800D1C14u; f_800BB818(c); // 800D1C10
  c->r[4]=0u+0x00000002u; // 800D1C14
  c->lr=0x800D1C1Cu; f_800BBF74(c); // 800D1C18
  c->r[4]=c->r[1]+0x00000070u; // 800D1C1C
  c->lr=0x800D1C24u; f_800D35A4(c); // 800D1C20
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C24
  if (crb(c,2)) { goto L_800D1CFC; } // 800D1C28
  c->r[3]=R32(c->r[31]+0x00000050u); // 800D1C2C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1C30
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1C34
  c->lr=0x800D1C3Cu; f_8005F004(c); // 800D1C38
  c->r[0]=R32(c->r[1]+0x00000070u); // 800D1C3C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D1C40
  cmps(c,0,(int32_t)c->r[0],1); // 800D1C44
  if (crb(c,2)) { goto L_800D1C54; } // 800D1C48
  if (!crb(c,0)) { goto L_800D1CCC; } // 800D1C4C
  goto L_800D1CCC; // 800D1C50
L_800D1C54:;
  c->r[3]=c->r[31]+0x000001D4u; // 800D1C54
  c->r[4]=c->r[1]+0x0000000Cu; // 800D1C58
  c->r[5]=0u+0x00000001u; // 800D1C5C
  c->lr=0x800D1C64u; f_800D148C(c); // 800D1C60
  c->r[3]=c->r[1]+0x00000064u; // 800D1C64
  c->r[4]=c->r[1]+0x00000078u; // 800D1C68
  c->lr=0x800D1C70u; f_8004A65C(c); // 800D1C6C
  c->r[3]=c->r[1]+0x00000010u; // 800D1C70
  c->r[4]=c->r[1]+0x00000090u; // 800D1C74
  c->lr=0x800D1C7Cu; f_800C236C(c); // 800D1C78
  c->r[4]=c->r[3]|c->r[3]; // 800D1C7C
  c->r[3]=c->r[1]+0x00000040u; // 800D1C80
  c->lr=0x800D1C88u; f_8004A65C(c); // 800D1C84
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1C88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800D1C8C
  c->r[3]=c->r[31]+0x00000054u; // 800D1C90
  c->r[4]=c->r[1]+0x00000064u; // 800D1C94
  c->r[5]=0u+0x00000003u; // 800D1C98
  c->r[6]=0u+0x00000001u; // 800D1C9C
  c->lr=0x800D1CA4u; f_800D141C(c); // 800D1CA0
  c->r[3]=c->r[31]+0x000000B4u; // 800D1CA4
  c->r[4]=c->r[1]+0x00000040u; // 800D1CA8
  c->r[5]=0u+0x00000003u; // 800D1CAC
  c->r[6]=0u+0x00000001u; // 800D1CB0
  c->lr=0x800D1CB8u; f_800D141C(c); // 800D1CB4
  c->r[3]=c->r[31]+0x00000354u; // 800D1CB8
  c->r[4]=c->r[1]+0x00000008u; // 800D1CBC
  c->r[5]=0u+0x00000001u; // 800D1CC0
  c->r[6]=0u+0x00000001u; // 800D1CC4
  c->lr=0x800D1CCCu; f_800D141C(c); // 800D1CC8
L_800D1CCC:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D1CCC
  cmps(c,0,(int32_t)c->r[0],1); // 800D1CD0
  if (crb(c,2)) { goto L_800D1CFC; } // 800D1CD4
  if (!crb(c,0)) { goto L_800D1CFC; } // 800D1CD8
  cmps(c,0,(int32_t)c->r[0],0); // 800D1CDC
  if (!crb(c,0)) { goto L_800D1CE8; } // 800D1CE0
  goto L_800D1CFC; // 800D1CE4
L_800D1CE8:;
  c->r[3]=c->r[31]+0x00000234u; // 800D1CE8
  c->r[4]=c->r[1]+0x000000A0u; // 800D1CEC
  c->r[5]=0u+0x00000001u; // 800D1CF0
  c->r[6]=0u+0x00000001u; // 800D1CF4
  c->lr=0x800D1CFCu; f_800D141C(c); // 800D1CF8
L_800D1CFC:;
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800D1CFC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800D1D00
  c->lr=c->r[0]; // 800D1D04
  c->r[1]=c->r[1]+0x000000E0u; // 800D1D08
  return; // 800D1D0C
}

// fn_800D1D10
void f_800D1D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D10
  c->r[0]=c->lr; // 800D1D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1D18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1D1C
  c->r[31]=c->r[3]|c->r[3]; // 800D1D20
  c->r[3]=c->r[3]+0x00000008u; // 800D1D24
  c->lr=0x800D1D2Cu; f_8004B0A4(c); // 800D1D28
  c->r[3]=c->r[31]|c->r[31]; // 800D1D2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1D34
  c->lr=c->r[0]; // 800D1D38
  c->r[1]=c->r[1]+0x00000010u; // 800D1D3C
  return; // 800D1D40
}

// fn_800D1D44
void f_800D1D44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D44
  c->r[0]=c->lr; // 800D1D48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1D4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1D50
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D1D54
  c->r[30]=c->r[3]|c->r[3]; // 800D1D58
  c->lr=0x800D1D60u; f_80173F80(c); // 800D1D5C
  c->r[31]=c->r[3]|c->r[3]; // 800D1D60
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D64
  if (crb(c,2)) { goto L_800D1D9C; } // 800D1D68
  c->r[3]=c->r[30]+0x00000294u; // 800D1D6C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D1D70
  c->r[5]=0u+0x00000001u; // 800D1D74
  c->lr=0x800D1D7Cu; f_800D148C(c); // 800D1D78
  c->r[3]=c->r[30]+0x000002F4u; // 800D1D7C
  c->r[4]=c->r[1]+0x00000008u; // 800D1D80
  c->r[5]=0u+0x00000001u; // 800D1D84
  c->lr=0x800D1D8Cu; f_800D148C(c); // 800D1D88
  c->r[3]=c->r[31]|c->r[31]; // 800D1D8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1D90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1D94
  c->lr=0x800D1D9Cu; f_801A1700(c); // 800D1D98
L_800D1D9C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1D9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D1DA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1DA4
  c->lr=c->r[0]; // 800D1DA8
  c->r[1]=c->r[1]+0x00000020u; // 800D1DAC
  return; // 800D1DB0
}

// fn_800D1DB4
void f_800D1DB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1DB4
  c->r[0]=c->lr; // 800D1DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1DC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D1DC4
  c->r[30]=c->r[3]|c->r[3]; // 800D1DC8
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800D1DCC
  c->r[0]=rotl(c->r[3],0)&0x00000040u; // 800D1DD0
  cmps(c,0,(int32_t)c->r[0],0); // 800D1DD4
  if (crb(c,2)) { goto L_800D1E0C; } // 800D1DD8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 800D1DDC
  c->r[0]=cntlz(c->r[0]); // 800D1DE0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D1DE4
  c->lr=0x800D1DECu; f_80173F78(c); // 800D1DE8
  c->r[4]=c->r[31]|c->r[31]; // 800D1DEC
  c->r[12]=R32(c->r[3]+0x00000254u); // 800D1DF0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D1DF4
  c->ctr=c->r[12]; // 800D1DF8
  if (true) { c->lr=0x800D1E00u; dispatch(c,c->ctr); } // 800D1DFC
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800D1E00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800D1E04
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800D1E08
L_800D1E0C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1E0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D1E10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1E14
  c->lr=c->r[0]; // 800D1E18
  c->r[1]=c->r[1]+0x00000010u; // 800D1E1C
  return; // 800D1E20
}

// fn_800D1E24
void f_800D1E24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1E24
  c->r[0]=c->lr; // 800D1E28
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D1E2C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800D1E30
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800D1E34
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D1E38
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D1E3C
  c->r[30]=c->r[3]|c->r[3]; // 800D1E40
  c->r[3]=c->r[1]+0x0000004Cu; // 800D1E44
  c->lr=0x800D1E4Cu; f_8004B0A4(c); // 800D1E48
  c->r[3]=c->r[1]+0x00000040u; // 800D1E4C
  c->lr=0x800D1E54u; f_8004B0A4(c); // 800D1E50
  c->r[31]=c->r[30]+0x000003DCu; // 800D1E54
  c->r[0]=R32(c->r[31]+0x00000024u); // 800D1E58
  cmps(c,0,(int32_t)c->r[0],0); // 800D1E5C
  if (crb(c,2)) { goto L_800D218C; } // 800D1E60
  c->r[3]=0u+0x00000001u; // 800D1E64
  c->lr=0x800D1E6Cu; f_8005D714(c); // 800D1E68
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1E6C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D1E70
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 800D1E74
  c->r[4]=R32(c->r[31]+0x00000020u); // 800D1E78
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D1E7C
  c->r[3]=c->r[31]+c->r[0]; // 800D1E80
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1E84
  fcmp(c,0,c->f[1],c->f[0]); // 800D1E88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D1E8C
  if (!crb(c,2)) { goto L_800D1EB8; } // 800D1E90
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D1E94
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800D1E98
  c->r[4]=c->r[4]+0x00000001u; // 800D1E9C
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D1EA0
  cmpu(c,0,c->r[4],0x00000003u); // 800D1EA4
  if (crb(c,0)) { goto L_800D1EB8; } // 800D1EA8
  c->r[0]=0u+0x00000000u; // 800D1EAC
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D1EB0
  goto L_800D218C; // 800D1EB4
L_800D1EB8:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D1EB8
  c->r[3]=c->r[31]+c->r[0]; // 800D1EBC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1EC0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1EC4
  fcmp(c,0,c->f[0],c->f[1]); // 800D1EC8
  if (!crb(c,2)) { goto L_800D1ED4; } // 800D1ECC
  goto L_800D1EF0; // 800D1ED0
L_800D1ED4:;
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1ED4
  fcmp(c,0,c->f[0],c->f[1]); // 800D1ED8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D1EDC
  if (!crb(c,2)) { goto L_800D1EEC; } // 800D1EE0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1EE4
  goto L_800D1EF0; // 800D1EE8
L_800D1EEC:;
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800D1EEC
L_800D1EF0:;
  c->r[0]=R32(c->r[30]+0x000003FCu); // 800D1EF0
  cmps(c,0,(int32_t)c->r[0],0); // 800D1EF4
  if (!crb(c,2)) { goto L_800D1F38; } // 800D1EF8
  {uint32_t ea=c->r[2]+0xFFFF88E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1EFC
  {uint32_t ea=c->r[31]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1F00
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 800D1F04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800D1F08
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 800D1F0C
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1F10
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 800D1F14
  c->f[1]=-c->f[1]; // 800D1F18
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 800D1F1C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1F20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D1F24
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800D1F28
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1F2C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800D1F30
  goto L_800D1FF4; // 800D1F34
L_800D1F38:;
  cmpu(c,0,c->r[0],0x00000002u); // 800D1F38
  if (!crb(c,2)) { goto L_800D1F98; } // 800D1F3C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D1F40
  c->f[2]=-c->f[5]; // 800D1F44
  {uint32_t ea=c->r[2]+0xFFFF8834u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1F48
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 800D1F4C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1F50
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1F54
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1F58
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 800D1F5C
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1F60
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[5]); // 800D1F64
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800D1F68
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 800D1F6C
  {uint32_t ea=c->r[2]+0xFFFF8840u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1F70
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 800D1F74
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 800D1F78
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1F7C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D1F80
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D1F84
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800D1F88
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1F8C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800D1F90
  goto L_800D1FF4; // 800D1F94
L_800D1F98:;
  {uint32_t ea=c->r[2]+0xFFFF8834u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1F98
  {uint32_t ea=c->r[31]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D1F9C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 800D1FA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[1]); // 800D1FA4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1FA8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1FAC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 800D1FB0
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1FB4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[5]); // 800D1FB8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800D1FBC
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[1]); // 800D1FC0
  {uint32_t ea=c->r[2]+0xFFFF8840u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1FC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 800D1FC8
  c->f[2]=-c->f[1]; // 800D1FCC
  {uint32_t ea=c->r[2]+0xFFFF88E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1FD0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 800D1FD4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1FD8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800D1FDC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D1FE0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800D1FE4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800D1FE8
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1FEC
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800D1FF0
L_800D1FF4:;
  c->r[3]=c->r[1]+0x00000034u; // 800D1FF4
  c->lr=0x800D1FFCu; f_8004B0A4(c); // 800D1FF8
  c->r[3]=c->r[1]+0x00000028u; // 800D1FFC
  c->lr=0x800D2004u; f_8004B0A4(c); // 800D2000
  c->r[3]=c->r[1]+0x0000001Cu; // 800D2004
  c->lr=0x800D200Cu; f_8004B0A4(c); // 800D2008
  c->r[3]=c->r[1]+0x00000008u; // 800D200C
  c->lr=0x800D2014u; f_800592DC(c); // 800D2010
  c->r[3]=c->r[30]+0x000003E4u; // 800D2014
  c->lr=0x800D201Cu; f_800592E0(c); // 800D2018
  {uint32_t ea=c->r[30]+0x000003ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D201C
  fcmp(c,0,c->f[1],c->f[0]); // 800D2020
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D2024
  if (!crb(c,2)) { goto L_800D20B0; } // 800D2028
  c->r[3]=c->r[1]+0x00000010u; // 800D202C
  c->lr=0x800D2034u; f_8004B0A4(c); // 800D2030
  c->lr=0x800D2038u; f_8005C5B0(c); // 800D2034
  {uint32_t ea=c->r[2]+0xFFFF88ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2038
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D203C
  {uint32_t ea=c->r[30]+0x000003DCu; WF32(ea,c->f[0]);} // 800D2040
  c->lr=0x800D2048u; f_8005C5B0(c); // 800D2044
  {uint32_t ea=c->r[2]+0xFFFF88ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2048
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D204C
  {uint32_t ea=c->r[30]+0x000003E0u; WF32(ea,c->f[0]);} // 800D2050
  c->r[3]=c->r[30]+0x000003DCu; // 800D2054
  c->lr=0x800D205Cu; f_800592E0(c); // 800D2058
  c->lr=0x800D2060u; f_800797BC(c); // 800D205C
  {uint32_t ea=c->r[2]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2060
  fcmp(c,0,c->f[1],c->f[0]); // 800D2064
  if (!crb(c,0)) { goto L_800D2094; } // 800D2068
  c->lr=0x800D2070u; f_8005C5B0(c); // 800D206C
  {uint32_t ea=c->r[2]+0xFFFF88F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2070
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 800D2074
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D2078
  {uint32_t ea=c->r[30]+0x000003DCu; WF32(ea,c->f[0]);} // 800D207C
  c->lr=0x800D2084u; f_8005C5B0(c); // 800D2080
  {uint32_t ea=c->r[2]+0xFFFF88F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2084
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 800D2088
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D208C
  {uint32_t ea=c->r[30]+0x000003E0u; WF32(ea,c->f[0]);} // 800D2090
L_800D2094:;
  c->r[3]=c->r[30]+0x000003DCu; // 800D2094
  c->r[4]=c->r[3]|c->r[3]; // 800D2098
  c->lr=0x800D20A0u; f_8026CBC4(c); // 800D209C
  {uint32_t ea=c->r[30]+0x000003ECu; WF32(ea,c->f[31]);} // 800D20A0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20A4
  {uint32_t ea=c->r[30]+0x000003E4u; WF32(ea,c->f[0]);} // 800D20A8
  {uint32_t ea=c->r[30]+0x000003E8u; WF32(ea,c->f[0]);} // 800D20AC
L_800D20B0:;
  c->r[3]=0u+0x00000001u; // 800D20B0
  c->lr=0x800D20B8u; f_8005D714(c); // 800D20B4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D20B8
  c->r[3]=c->r[1]+0x00000008u; // 800D20BC
  c->r[4]=c->r[30]+0x000003DCu; // 800D20C0
  c->lr=0x800D20C8u; f_80070444(c); // 800D20C4
  c->r[3]=c->r[30]+0x000003E4u; // 800D20C8
  c->r[4]=c->r[3]|c->r[3]; // 800D20CC
  c->r[5]=c->r[1]+0x00000008u; // 800D20D0
  c->lr=0x800D20D8u; f_800C2388(c); // 800D20D4
  c->r[3]=c->r[1]+0x00000058u; // 800D20D8
  c->lr=0x800D20E0u; f_8004B0A0(c); // 800D20DC
  c->r[3]=R32(c->r[30]+0x00000050u); // 800D20E0
  c->r[4]=c->r[1]+0x00000058u; // 800D20E4
  c->lr=0x800D20ECu; f_8005F794(c); // 800D20E8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20EC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800D20F0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20F4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800D20F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20FC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D2100
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2104
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800D2108
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D210C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D2110
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2114
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D2118
  c->r[3]=c->r[1]+0x00000034u; // 800D211C
  c->r[4]=c->r[3]|c->r[3]; // 800D2120
  {uint32_t ea=c->r[30]+0x000003E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2124
  c->lr=0x800D212Cu; f_8004E330(c); // 800D2128
  c->r[3]=c->r[1]+0x00000028u; // 800D212C
  c->r[4]=c->r[3]|c->r[3]; // 800D2130
  {uint32_t ea=c->r[30]+0x000003E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2134
  c->lr=0x800D213Cu; f_8004E330(c); // 800D2138
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D213C
  {uint32_t ea=c->r[30]+0x00000404u; WF32(ea,c->f[0]);} // 800D2140
  {uint32_t ea=c->r[30]+0x00000408u; WF32(ea,c->f[0]);} // 800D2144
  {uint32_t ea=c->r[30]+0x0000040Cu; WF32(ea,c->f[0]);} // 800D2148
  c->r[3]=c->r[30]+0x00000404u; // 800D214C
  c->r[4]=c->r[3]|c->r[3]; // 800D2150
  c->r[5]=c->r[1]+0x00000034u; // 800D2154
  c->lr=0x800D215Cu; f_8005C194(c); // 800D2158
  c->r[3]=c->r[30]+0x00000404u; // 800D215C
  c->r[4]=c->r[3]|c->r[3]; // 800D2160
  c->r[5]=c->r[1]+0x00000028u; // 800D2164
  c->lr=0x800D216Cu; f_8005C194(c); // 800D2168
  c->r[3]=c->r[30]+0x000003C0u; // 800D216C
  c->r[4]=c->r[3]|c->r[3]; // 800D2170
  c->r[5]=c->r[30]+0x00000404u; // 800D2174
  c->lr=0x800D217Cu; f_8005C194(c); // 800D2178
  c->r[3]=c->r[30]+0x000003CCu; // 800D217C
  c->r[4]=c->r[3]|c->r[3]; // 800D2180
  c->r[5]=c->r[30]+0x00000404u; // 800D2184
  c->lr=0x800D218Cu; f_8005C194(c); // 800D2188
L_800D218C:;
  c->r[0]=0u+0x00000098u; // 800D218C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D2190
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800D2194
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D2198
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D219C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D21A0
  c->lr=c->r[0]; // 800D21A4
  c->r[1]=c->r[1]+0x000000A0u; // 800D21A8
  return; // 800D21AC
}

// fn_800D21B0
void f_800D21B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D21B0
  c->r[0]=c->lr; // 800D21B4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D21B8
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800D21BC
  c->r[31]=c->r[3]|c->r[3]; // 800D21C0
  c->r[3]=c->r[1]+0x00000060u; // 800D21C4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D21C8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D21CC
  c->f[3]=c->f[1]; // 800D21D0
  c->lr=0x800D21D8u; f_8004E34C(c); // 800D21D4
  c->r[3]=c->r[1]+0x00000054u; // 800D21D8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D21DC
  c->f[2]=c->f[1]; // 800D21E0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D21E4
  c->lr=0x800D21ECu; f_8004E34C(c); // 800D21E8
  c->r[3]=c->r[1]+0x00000048u; // 800D21EC
  c->lr=0x800D21F4u; f_8004B0A4(c); // 800D21F0
  c->r[3]=c->r[1]+0x0000003Cu; // 800D21F4
  c->lr=0x800D21FCu; f_8004B0A4(c); // 800D21F8
  c->r[3]=c->r[1]+0x00000030u; // 800D21FC
  c->lr=0x800D2204u; f_8004B0A4(c); // 800D2200
  c->r[3]=c->r[1]+0x00000024u; // 800D2204
  c->lr=0x800D220Cu; f_8004B0A4(c); // 800D2208
  c->r[3]=c->r[1]+0x00000018u; // 800D220C
  c->lr=0x800D2214u; f_8004B0A4(c); // 800D2210
  c->r[3]=c->r[1]+0x0000000Cu; // 800D2214
  c->lr=0x800D221Cu; f_8004B0A4(c); // 800D2218
  c->r[3]=c->r[1]+0x00000070u; // 800D221C
  c->lr=0x800D2224u; f_8004B0A0(c); // 800D2220
  c->r[3]=c->r[31]+0x00000114u; // 800D2224
  c->r[4]=c->r[1]+0x00000018u; // 800D2228
  c->r[5]=0u+0x00000003u; // 800D222C
  c->lr=0x800D2234u; f_800D148C(c); // 800D2230
  c->r[0]=R32(c->r[31]+0x000003BCu); // 800D2234
  cmps(c,0,(int32_t)c->r[0],1); // 800D2238
  if (crb(c,2)) { goto L_800D22F0; } // 800D223C
  if (!crb(c,0)) { goto L_800D2250; } // 800D2240
  cmps(c,0,(int32_t)c->r[0],0); // 800D2244
  if (!crb(c,0)) { goto L_800D225C; } // 800D2248
  goto L_800D242C; // 800D224C
L_800D2250:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D2250
  if (!crb(c,0)) { goto L_800D242C; } // 800D2254
  goto L_800D2388; // 800D2258
L_800D225C:;
  c->r[3]=c->r[31]+0x000000B4u; // 800D225C
  c->r[4]=c->r[1]+0x0000003Cu; // 800D2260
  c->r[5]=0u+0x00000003u; // 800D2264
  c->lr=0x800D226Cu; f_800D148C(c); // 800D2268
  c->r[3]=c->r[31]+0x00000174u; // 800D226C
  c->r[4]=c->r[1]+0x00000030u; // 800D2270
  c->r[5]=0u+0x00000003u; // 800D2274
  c->lr=0x800D227Cu; f_800D148C(c); // 800D2278
  c->r[3]=c->r[31]+0x000001D4u; // 800D227C
  c->r[4]=c->r[1]+0x00000008u; // 800D2280
  c->r[5]=0u+0x00000001u; // 800D2284
  c->lr=0x800D228Cu; f_800D148C(c); // 800D2288
  c->r[3]=c->r[1]+0x00000070u; // 800D228C
  c->lr=0x800D2294u; f_800C2260(c); // 800D2290
  c->r[3]=c->r[1]+0x00000070u; // 800D2294
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2298
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D229C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D22A0
  c->lr=0x800D22A8u; f_8004B0A8(c); // 800D22A4
  c->r[3]=c->r[1]+0x00000048u; // 800D22A8
  c->r[4]=c->r[1]+0x00000070u; // 800D22AC
  c->r[5]=c->r[1]+0x00000054u; // 800D22B0
  c->lr=0x800D22B8u; f_8005FF94(c); // 800D22B4
  c->r[3]=c->r[1]+0x00000048u; // 800D22B8
  c->r[4]=c->r[3]|c->r[3]; // 800D22BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D22C0
  c->lr=0x800D22C8u; f_8004E330(c); // 800D22C4
  c->r[3]=c->r[1]+0x00000048u; // 800D22C8
  c->r[4]=c->r[3]|c->r[3]; // 800D22CC
  c->r[5]=c->r[1]+0x0000003Cu; // 800D22D0
  c->lr=0x800D22D8u; f_8005C194(c); // 800D22D4
  c->r[3]=c->r[31]+0x00000054u; // 800D22D8
  c->r[4]=c->r[1]+0x00000048u; // 800D22DC
  c->r[5]=0u+0x00000003u; // 800D22E0
  c->r[6]=0u+0x00000001u; // 800D22E4
  c->lr=0x800D22ECu; f_800D141C(c); // 800D22E8
  goto L_800D242C; // 800D22EC
L_800D22F0:;
  c->r[3]=c->r[31]+0x00000054u; // 800D22F0
  c->r[4]=c->r[1]+0x00000048u; // 800D22F4
  c->r[5]=0u+0x00000003u; // 800D22F8
  c->lr=0x800D2300u; f_800D148C(c); // 800D22FC
  c->r[3]=c->r[31]+0x00000174u; // 800D2300
  c->r[4]=c->r[1]+0x00000030u; // 800D2304
  c->r[5]=0u+0x00000003u; // 800D2308
  c->lr=0x800D2310u; f_800D148C(c); // 800D230C
  c->r[3]=c->r[31]+0x000001D4u; // 800D2310
  c->r[4]=c->r[1]+0x00000008u; // 800D2314
  c->r[5]=0u+0x00000001u; // 800D2318
  c->lr=0x800D2320u; f_800D148C(c); // 800D231C
  c->r[3]=c->r[1]+0x00000070u; // 800D2320
  c->lr=0x800D2328u; f_800C2260(c); // 800D2324
  c->r[3]=c->r[1]+0x00000070u; // 800D2328
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D232C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2330
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2334
  c->lr=0x800D233Cu; f_8004B0A8(c); // 800D2338
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D233C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800D2340
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2344
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800D2348
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D234C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800D2350
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2354
  c->f[0]=-c->f[0]; // 800D2358
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800D235C
  c->r[3]=c->r[1]+0x0000003Cu; // 800D2360
  c->r[4]=c->r[1]+0x00000070u; // 800D2364
  c->r[5]=c->r[1]+0x00000054u; // 800D2368
  c->lr=0x800D2370u; f_8005FF94(c); // 800D236C
  c->r[3]=c->r[31]+0x000000B4u; // 800D2370
  c->r[4]=c->r[1]+0x0000003Cu; // 800D2374
  c->r[5]=0u+0x00000003u; // 800D2378
  c->r[6]=0u+0x00000001u; // 800D237C
  c->lr=0x800D2384u; f_800D141C(c); // 800D2380
  goto L_800D242C; // 800D2384
L_800D2388:;
  c->r[3]=c->r[31]+0x00000054u; // 800D2388
  c->r[4]=c->r[1]+0x00000048u; // 800D238C
  c->r[5]=0u+0x00000003u; // 800D2390
  c->lr=0x800D2398u; f_800D148C(c); // 800D2394
  c->r[3]=c->r[31]+0x000000B4u; // 800D2398
  c->r[4]=c->r[1]+0x0000003Cu; // 800D239C
  c->r[5]=0u+0x00000003u; // 800D23A0
  c->lr=0x800D23A8u; f_800D148C(c); // 800D23A4
  c->r[3]=c->r[1]+0x00000024u; // 800D23A8
  c->r[4]=c->r[1]+0x00000048u; // 800D23AC
  c->r[5]=c->r[1]+0x0000003Cu; // 800D23B0
  c->lr=0x800D23B8u; f_8006000C(c); // 800D23B4
  c->r[3]=c->r[1]+0x0000000Cu; // 800D23B8
  c->r[4]=c->r[1]+0x00000024u; // 800D23BC
  c->lr=0x800D23C4u; f_8005C110(c); // 800D23C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D23C4
  c->lr=0x800D23CCu; f_800BDF5C(c); // 800D23C8
  c->f[0]=-c->f[1]; // 800D23CC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D23D0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D23D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D23D8
  c->lr=0x800D23E0u; f_800592F8(c); // 800D23DC
  {uint32_t ea=c->r[2]+0xFFFF8820u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D23E0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D23E4
  c->f[0]=-c->f[0]; // 800D23E8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800D23EC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D23F0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800D23F4
  c->r[3]=c->r[1]+0x00000024u; // 800D23F8
  c->lr=0x800D2400u; f_8005C170(c); // 800D23FC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800D2400
  c->r[3]=c->r[31]+0x00000174u; // 800D2404
  c->r[4]=c->r[1]+0x00000030u; // 800D2408
  c->r[5]=0u+0x00000003u; // 800D240C
  c->r[6]=0u+0x00000001u; // 800D2410
  c->lr=0x800D2418u; f_800D141C(c); // 800D2414
  c->r[3]=c->r[31]+0x000001D4u; // 800D2418
  c->r[4]=c->r[1]+0x00000008u; // 800D241C
  c->r[5]=0u+0x00000001u; // 800D2420
  c->r[6]=0u+0x00000001u; // 800D2424
  c->lr=0x800D242Cu; f_800D141C(c); // 800D2428
L_800D242C:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800D242C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 800D2430
  cmps(c,0,(int32_t)c->r[0],0); // 800D2434
  if (!crb(c,2)) { goto L_800D245C; } // 800D2438
  c->r[3]=c->r[1]+0x0000003Cu; // 800D243C
  c->r[4]=c->r[3]|c->r[3]; // 800D2440
  c->r[5]=c->r[1]+0x00000018u; // 800D2444
  c->lr=0x800D244Cu; f_8005C194(c); // 800D2448
  c->r[3]=c->r[1]+0x00000048u; // 800D244C
  c->r[4]=c->r[3]|c->r[3]; // 800D2450
  c->r[5]=c->r[1]+0x00000018u; // 800D2454
  c->lr=0x800D245Cu; f_8005C194(c); // 800D2458
L_800D245C:;
  c->r[3]=c->r[31]+0x000003C0u; // 800D245C
  c->r[4]=c->r[1]+0x00000048u; // 800D2460
  c->lr=0x800D2468u; f_8004A65C(c); // 800D2464
  c->r[3]=c->r[31]+0x000003CCu; // 800D2468
  c->r[4]=c->r[1]+0x0000003Cu; // 800D246C
  c->lr=0x800D2474u; f_8004A65C(c); // 800D2470
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800D2474
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D2478
  c->lr=c->r[0]; // 800D247C
  c->r[1]=c->r[1]+0x000000B0u; // 800D2480
  return; // 800D2484
}

// fn_800D2488
void f_800D2488(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2488
  c->r[0]=c->lr; // 800D248C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800D2490
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800D2494
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800D2498
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800D249C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800D24A0
  c->r[30]=c->r[3]|c->r[3]; // 800D24A4
  c->f[31]=c->f[1]; // 800D24A8
  c->r[3]=c->r[1]+0x00000064u; // 800D24AC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D24B0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D24B4
  c->f[3]=c->f[1]; // 800D24B8
  c->lr=0x800D24C0u; f_8004E34C(c); // 800D24BC
  c->r[3]=c->r[1]+0x00000058u; // 800D24C0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D24C4
  c->f[2]=c->f[1]; // 800D24C8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D24CC
  c->lr=0x800D24D4u; f_8004E34C(c); // 800D24D0
  c->r[3]=c->r[1]+0x0000004Cu; // 800D24D4
  c->lr=0x800D24DCu; f_8004B0A4(c); // 800D24D8
  c->r[3]=c->r[1]+0x00000040u; // 800D24DC
  c->lr=0x800D24E4u; f_8004B0A4(c); // 800D24E0
  c->r[3]=c->r[1]+0x00000034u; // 800D24E4
  c->lr=0x800D24ECu; f_8004B0A4(c); // 800D24E8
  c->r[3]=c->r[1]+0x00000028u; // 800D24EC
  c->lr=0x800D24F4u; f_8004B0A4(c); // 800D24F0
  c->r[3]=c->r[1]+0x0000001Cu; // 800D24F4
  c->lr=0x800D24FCu; f_8004B0A4(c); // 800D24F8
  c->r[3]=c->r[1]+0x00000010u; // 800D24FC
  c->lr=0x800D2504u; f_8004B0A4(c); // 800D2500
  c->r[3]=c->r[1]+0x00000070u; // 800D2504
  c->lr=0x800D250Cu; f_8004B0A0(c); // 800D2508
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800D250C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800D2510
  cmps(c,0,(int32_t)c->r[0],0); // 800D2514
  if (!crb(c,2)) { goto L_800D2688; } // 800D2518
  c->r[3]=c->r[30]+0x00000054u; // 800D251C
  c->f[1]=c->f[31]; // 800D2520
  c->lr=0x800D2528u; f_800D14BC(c); // 800D2524
  c->r[3]=c->r[30]+0x000000B4u; // 800D2528
  c->f[1]=c->f[31]; // 800D252C
  c->lr=0x800D2534u; f_800D14BC(c); // 800D2530
  c->r[3]=c->r[30]+0x00000114u; // 800D2534
  c->f[1]=c->f[31]; // 800D2538
  c->lr=0x800D2540u; f_800D14BC(c); // 800D253C
  c->r[3]=c->r[30]+0x00000174u; // 800D2540
  c->f[1]=c->f[31]; // 800D2544
  c->lr=0x800D254Cu; f_800D14BC(c); // 800D2548
  c->r[3]=c->r[30]+0x000001D4u; // 800D254C
  c->f[1]=c->f[31]; // 800D2550
  c->lr=0x800D2558u; f_800D14BC(c); // 800D2554
  c->r[3]=c->r[30]+0x00000234u; // 800D2558
  c->f[1]=c->f[31]; // 800D255C
  c->lr=0x800D2564u; f_800D14BC(c); // 800D2560
  c->r[3]=c->r[30]+0x00000294u; // 800D2564
  c->f[1]=c->f[31]; // 800D2568
  c->lr=0x800D2570u; f_800D14BC(c); // 800D256C
  c->r[3]=c->r[30]+0x000002F4u; // 800D2570
  c->f[1]=c->f[31]; // 800D2574
  c->lr=0x800D257Cu; f_800D14BC(c); // 800D2578
  c->r[3]=c->r[30]+0x00000354u; // 800D257C
  c->f[1]=c->f[31]; // 800D2580
  c->lr=0x800D2588u; f_800D14BC(c); // 800D2584
  c->r[3]=c->r[30]|c->r[30]; // 800D2588
  c->lr=0x800D2590u; f_800D1B4C(c); // 800D258C
  c->r[3]=c->r[30]+0x00000234u; // 800D2590
  c->r[4]=c->r[1]+0x0000000Cu; // 800D2594
  c->r[5]=0u+0x00000001u; // 800D2598
  c->lr=0x800D25A0u; f_800D148C(c); // 800D259C
  c->r[3]=c->r[30]+0x00000354u; // 800D25A0
  c->r[4]=c->r[1]+0x00000008u; // 800D25A4
  c->r[5]=0u+0x00000001u; // 800D25A8
  c->lr=0x800D25B0u; f_800D148C(c); // 800D25AC
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800D25B0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 800D25B4
  cmps(c,0,(int32_t)c->r[0],0); // 800D25B8
  if (crb(c,2)) { goto L_800D25F8; } // 800D25BC
  c->r[31]=R32(c->r[30]+0x000006B4u); // 800D25C0
  cmps(c,0,(int32_t)c->r[31],0); // 800D25C4
  if (crb(c,2)) { goto L_800D25F8; } // 800D25C8
  c->lr=0x800D25D0u; f_800A23BC(c); // 800D25CC
  c->lr=0x800D25D4u; f_800BB800(c); // 800D25D0
  c->r[4]=c->r[31]|c->r[31]; // 800D25D4
  c->lr=0x800D25DCu; f_800BBD58(c); // 800D25D8
  c->r[4]=c->r[30]+0x000003CCu; // 800D25DC
  c->lr=0x800D25E4u; f_800BD664(c); // 800D25E0
  c->r[3]=c->r[30]+0x000000B4u; // 800D25E4
  c->r[4]=c->r[30]+0x000003CCu; // 800D25E8
  c->r[5]=0u+0x00000003u; // 800D25EC
  c->r[6]=0u+0x00000001u; // 800D25F0
  c->lr=0x800D25F8u; f_800D141C(c); // 800D25F4
L_800D25F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D25F8
  c->lr=0x800D2600u; f_800D21B0(c); // 800D25FC
  c->r[3]=c->r[30]|c->r[30]; // 800D2600
  c->lr=0x800D2608u; f_800D1E24(c); // 800D2604
  c->r[3]=c->r[1]+0x00000028u; // 800D2608
  c->r[4]=c->r[30]+0x000003C0u; // 800D260C
  c->r[5]=c->r[30]+0x000003CCu; // 800D2610
  c->lr=0x800D2618u; f_8006000C(c); // 800D2614
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2618
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D261C
  c->r[3]=c->r[1]+0x00000028u; // 800D2620
  c->lr=0x800D2628u; f_8005C170(c); // 800D2624
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2628
  fcmp(c,0,c->f[1],c->f[0]); // 800D262C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D2630
  if (crb(c,2)) { goto L_800D2688; } // 800D2634
  c->r[3]=R32(c->r[30]+0x00000050u); // 800D2638
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D263C
  c->lr=0x800D2644u; f_8005F010(c); // 800D2640
  c->r[3]=R32(c->r[30]+0x00000050u); // 800D2644
  c->r[4]=c->r[30]+0x000003C0u; // 800D2648
  c->r[5]=c->r[30]+0x000003CCu; // 800D264C
  c->r[6]=c->r[1]+0x00000008u; // 800D2650
  c->lr=0x800D2658u; f_8005F0F4(c); // 800D2654
  c->r[3]=R32(c->r[30]+0x00000050u); // 800D2658
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D265C
  {uint32_t ea=c->r[2]+0xFFFF88D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2660
  c->lr=0x800D2668u; f_8005F004(c); // 800D2664
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800D2668
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D266C
  cmps(c,0,(int32_t)c->r[0],0); // 800D2670
  if (!crb(c,2)) { goto L_800D2680; } // 800D2674
  c->r[3]=c->r[30]|c->r[30]; // 800D2678
  c->lr=0x800D2680u; f_800D1D44(c); // 800D267C
L_800D2680:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2680
  c->lr=0x800D2688u; f_800D1DB4(c); // 800D2684
L_800D2688:;
  c->r[0]=0u+0x000000B8u; // 800D2688
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D268C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800D2690
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800D2694
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800D2698
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D269C
  c->lr=c->r[0]; // 800D26A0
  c->r[1]=c->r[1]+0x000000C0u; // 800D26A4
  return; // 800D26A8
}

// fn_800D26AC
void f_800D26AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D26AC
  c->r[0]=c->lr; // 800D26B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D26B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D26B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D26BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D26C0
  c->r[29]=c->r[3]|c->r[3]; // 800D26C4
  c->r[30]=0u+0x00000000u; // 800D26C8
  c->r[31]=c->r[3]+0x00000054u; // 800D26CC
L_800D26D0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D26D0
  c->lr=0x800D26D8u; f_800D16A4(c); // 800D26D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D26D8
  if (!crb(c,2)) { goto L_800D26E8; } // 800D26DC
  c->r[3]=0u+0x00000000u; // 800D26E0
  goto L_800D272C; // 800D26E4
L_800D26E8:;
  c->r[31]=c->r[31]+0x00000060u; // 800D26E8
  c->r[30]=c->r[30]+0x00000001u; // 800D26EC
  cmpu(c,0,c->r[30],0x00000009u); // 800D26F0
  if (crb(c,0)) { IRQCHK(c); goto L_800D26D0; } // 800D26F4
  c->r[0]=R32(c->r[29]+0x00000400u); // 800D26F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D26FC
  if (crb(c,2)) { goto L_800D270C; } // 800D2700
  c->r[3]=0u+0x00000000u; // 800D2704
  goto L_800D272C; // 800D2708
L_800D270C:;
  c->lr=0x800D2710u; f_800A23BC(c); // 800D270C
  c->lr=0x800D2714u; f_800BB818(c); // 800D2710
  c->r[4]=0u+0x00000002u; // 800D2714
  c->lr=0x800D271Cu; f_800BBF74(c); // 800D2718
  c->lr=0x800D2720u; f_800D3688(c); // 800D271C
  c->r[0]=0u-c->r[3]; // 800D2720
  c->r[0]=c->r[0]|c->r[3]; // 800D2724
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D2728
L_800D272C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D272C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2730
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2734
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2738
  c->lr=c->r[0]; // 800D273C
  c->r[1]=c->r[1]+0x00000020u; // 800D2740
  return; // 800D2744
}

// fn_800D2748
void f_800D2748(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2748
  c->r[0]=c->lr; // 800D274C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D2750
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D2754
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D2758
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D275C
  W32(c->r[1]+0x00000030u,c->r[28]); // 800D2760
  c->r[28]=c->r[3]|c->r[3]; // 800D2764
  c->r[29]=c->r[4]|c->r[4]; // 800D2768
  c->r[3]=c->r[1]+0x00000024u; // 800D276C
  c->lr=0x800D2774u; f_8004B0A4(c); // 800D2770
  c->r[3]=c->r[1]+0x00000018u; // 800D2774
  c->lr=0x800D277Cu; f_8004B0A4(c); // 800D2778
  c->r[3]=c->r[1]+0x0000000Cu; // 800D277C
  c->lr=0x800D2784u; f_8004B0A4(c); // 800D2780
  c->r[0]=R32(c->r[28]+0x000003BCu); // 800D2784
  cmpu(c,0,c->r[0],c->r[29]); // 800D2788
  if (crb(c,2)) { goto L_800D27E0; } // 800D278C
  c->r[30]=0u+0x00000000u; // 800D2790
  c->r[31]=c->r[28]+0x00000054u; // 800D2794
L_800D2798:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2798
  c->lr=0x800D27A0u; f_800D0F18(c); // 800D279C
  c->r[31]=c->r[31]+0x00000060u; // 800D27A0
  c->r[30]=c->r[30]+0x00000001u; // 800D27A4
  cmps(c,0,(int32_t)c->r[30],9); // 800D27A8
  if (crb(c,0)) { IRQCHK(c); goto L_800D2798; } // 800D27AC
  c->r[3]=c->r[28]+0x00000354u; // 800D27B0
  c->r[4]=c->r[1]+0x00000008u; // 800D27B4
  c->r[5]=0u+0x00000001u; // 800D27B8
  c->lr=0x800D27C0u; f_800D148C(c); // 800D27BC
  W32(c->r[28]+0x000003BCu,c->r[29]); // 800D27C0
  c->r[3]=c->r[28]|c->r[28]; // 800D27C4
  c->lr=0x800D27CCu; f_800D21B0(c); // 800D27C8
  c->r[3]=R32(c->r[28]+0x00000050u); // 800D27CC
  c->r[4]=c->r[28]+0x000003C0u; // 800D27D0
  c->r[5]=c->r[28]+0x000003CCu; // 800D27D4
  c->r[6]=c->r[1]+0x00000008u; // 800D27D8
  c->lr=0x800D27E0u; f_8005F0F4(c); // 800D27DC
L_800D27E0:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D27E0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D27E4
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D27E8
  c->r[28]=R32(c->r[1]+0x00000030u); // 800D27EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D27F0
  c->lr=c->r[0]; // 800D27F4
  c->r[1]=c->r[1]+0x00000040u; // 800D27F8
  return; // 800D27FC
}

// fn_800D2800
void f_800D2800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2800
  c->r[0]=c->lr; // 800D2804
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D280C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D2810
  c->r[30]=c->r[3]|c->r[3]; // 800D2814
  c->r[31]=c->r[4]|c->r[4]; // 800D2818
  c->r[4]=0u+0x00000002u; // 800D281C
  c->lr=0x800D2824u; f_800D2748(c); // 800D2820
  c->lr=0x800D2828u; f_800A23BC(c); // 800D2824
  c->lr=0x800D282Cu; f_800BB818(c); // 800D2828
  c->r[4]=0u+0x00000002u; // 800D282C
  c->lr=0x800D2834u; f_800BBF74(c); // 800D2830
  c->r[4]=c->r[31]|c->r[31]; // 800D2834
  c->r[5]=0u+0x00000000u; // 800D2838
  c->lr=0x800D2840u; f_800D3578(c); // 800D283C
  c->r[3]=0u+0x00000001u; // 800D2840
  c->lr=0x800D2848u; f_8005D714(c); // 800D2844
  c->r[3]=c->r[30]|c->r[30]; // 800D2848
  c->lr=0x800D2850u; f_800D2488(c); // 800D284C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2850
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D2854
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2858
  c->lr=c->r[0]; // 800D285C
  c->r[1]=c->r[1]+0x00000010u; // 800D2860
  return; // 800D2864
}

// fn_800D2868
void f_800D2868(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D2868
  {uint32_t ea=c->r[3]+0x00000410u; WF32(ea,c->f[5]);} // 800D286C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2870
  {uint32_t ea=c->r[3]+0x00000414u; WF32(ea,c->f[0]);} // 800D2874
  {uint32_t ea=c->r[3]+0x00000418u; WF32(ea,c->f[5]);} // 800D2878
  c->r[0]=0u+0x00000001u; // 800D287C
  W32(c->r[3]+0x00000400u,c->r[0]); // 800D2880
  {uint32_t ea=c->r[3]+0x0000041Cu; WF32(ea,c->f[5]);} // 800D2884
  {uint32_t ea=c->r[3]+0x000003F0u; WF32(ea,c->f[2]);} // 800D2888
  {uint32_t ea=c->r[3]+0x000003F4u; WF32(ea,c->f[3]);} // 800D288C
  {uint32_t ea=c->r[3]+0x000003F8u; WF32(ea,c->f[4]);} // 800D2890
  c->r[0]=0u+0x00000000u; // 800D2894
  W32(c->r[3]+0x000003FCu,c->r[0]); // 800D2898
  {uint32_t ea=c->r[3]+0x00000420u; WF32(ea,c->f[1]);} // 800D289C
  return; // 800D28A0
}

// fn_800D28A4
void f_800D28A4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D28A4
  W32(c->r[3]+0x00000400u,c->r[0]); // 800D28A8
  c->r[3]=c->r[3]+0x000003DCu; // 800D28AC
  c->r[4]=0u+0x00000000u; // 800D28B0
  c->r[5]=0u+0x00000048u; // 800D28B4
  f_800060B8(c); return; // 800D28B8
}

// fn_800D28BC
void f_800D28BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D28BC
  c->r[0]=c->lr; // 800D28C0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D28C4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D28C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D28CC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D28D0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D28D4
  c->r[30]=c->r[3]|c->r[3]; // 800D28D8
  c->r[31]=c->r[4]|c->r[4]; // 800D28DC
  c->f[31]=c->f[1]; // 800D28E0
  c->r[3]=c->r[1]+0x00000050u; // 800D28E4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D28E8
  c->f[2]=c->f[1]; // 800D28EC
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D28F0
  c->lr=0x800D28F8u; f_8004E34C(c); // 800D28F4
  c->r[3]=c->r[1]+0x00000044u; // 800D28F8
  c->lr=0x800D2900u; f_8004B0A4(c); // 800D28FC
  c->r[3]=c->r[1]+0x00000038u; // 800D2900
  c->lr=0x800D2908u; f_8004B0A4(c); // 800D2904
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2908
  c->lr=0x800D2910u; f_8004B0A4(c); // 800D290C
  c->r[3]=c->r[1]+0x00000020u; // 800D2910
  c->lr=0x800D2918u; f_8004B0A4(c); // 800D2914
  c->r[3]=c->r[1]+0x00000014u; // 800D2918
  c->lr=0x800D2920u; f_8004B0A4(c); // 800D291C
  c->r[3]=c->r[1]+0x00000008u; // 800D2920
  c->lr=0x800D2928u; f_8004B0A4(c); // 800D2924
  c->r[0]=R32(c->r[30]+0x000003BCu); // 800D2928
  cmpu(c,0,c->r[0],0x00000001u); // 800D292C
  if (!crb(c,2)) { goto L_800D2A54; } // 800D2930
  c->r[3]=c->r[30]+0x00000054u; // 800D2934
  c->r[4]=c->r[1]+0x00000044u; // 800D2938
  c->r[5]=0u+0x00000003u; // 800D293C
  c->lr=0x800D2944u; f_800D148C(c); // 800D2940
  c->r[3]=c->r[30]+0x00000174u; // 800D2944
  c->r[4]=c->r[1]+0x00000038u; // 800D2948
  c->r[5]=0u+0x00000003u; // 800D294C
  c->lr=0x800D2954u; f_800D148C(c); // 800D2950
  c->r[3]=c->r[1]+0x00000020u; // 800D2954
  c->r[4]=c->r[1]+0x00000044u; // 800D2958
  c->r[5]=c->r[31]|c->r[31]; // 800D295C
  c->lr=0x800D2964u; f_8006000C(c); // 800D2960
  c->r[3]=c->r[1]+0x00000014u; // 800D2964
  c->r[4]=c->r[1]+0x00000020u; // 800D2968
  c->lr=0x800D2970u; f_8005C110(c); // 800D296C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2970
  c->lr=0x800D2978u; f_800BDF5C(c); // 800D2974
  c->f[0]=-c->f[1]; // 800D2978
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D297C
  c->f[1]=c->ps1[1]=S(c->f[0]); // 800D2980
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2984
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D2988
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D298C
  fcmp(c,0,c->f[1],c->f[0]); // 800D2990
  if (!crb(c,1)) { goto L_800D29A4; } // 800D2994
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2998
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D299C
  goto L_800D29B8; // 800D29A0
L_800D29A4:;
  {uint32_t ea=c->r[2]+0xFFFF884Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29A4
  fcmp(c,0,c->f[1],c->f[0]); // 800D29A8
  if (!crb(c,0)) { goto L_800D29B8; } // 800D29AC
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29B0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D29B4
L_800D29B8:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29B8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D29BC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D29C0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D29C4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D29C8
  c->lr=0x800D29D0u; f_800592F8(c); // 800D29CC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800D29D0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D29D4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D29DC
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29E0
  fcmp(c,0,c->f[1],c->f[0]); // 800D29E4
  if (!crb(c,1)) { goto L_800D29F8; } // 800D29E8
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D29F0
  goto L_800D2A0C; // 800D29F4
L_800D29F8:;
  {uint32_t ea=c->r[2]+0xFFFF884Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D29F8
  fcmp(c,0,c->f[1],c->f[0]); // 800D29FC
  if (!crb(c,0)) { goto L_800D2A0C; } // 800D2A00
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A04
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D2A08
L_800D2A0C:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A0C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D2A10
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800D2A14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A18
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800D2A1C
  c->r[3]=c->r[30]+0x00000174u; // 800D2A20
  c->r[4]=c->r[1]+0x00000038u; // 800D2A24
  c->r[5]=0u+0x00000003u; // 800D2A28
  c->r[6]=0u+0x00000001u; // 800D2A2C
  c->lr=0x800D2A34u; f_800D141C(c); // 800D2A30
  c->r[3]=c->r[30]+0x00000174u; // 800D2A34
  c->r[4]=c->r[1]+0x0000002Cu; // 800D2A38
  c->r[5]=0u+0x00000003u; // 800D2A3C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2A40
  c->lr=0x800D2A48u; f_800D0F54(c); // 800D2A44
  c->r[3]=c->r[30]+0x00000174u; // 800D2A48
  c->f[1]=c->f[31]; // 800D2A4C
  c->lr=0x800D2A54u; f_800D13D4(c); // 800D2A50
L_800D2A54:;
  c->r[0]=0u+0x00000078u; // 800D2A54
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D2A58
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D2A5C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D2A60
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D2A64
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D2A68
  c->lr=c->r[0]; // 800D2A6C
  c->r[1]=c->r[1]+0x00000080u; // 800D2A70
  return; // 800D2A74
}

// fn_800D2A78
void f_800D2A78(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2A78
  c->r[0]=c->r[0]|0x00000020u; // 800D2A7C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2A80
  W32(c->r[3]+0x000006B4u,c->r[4]); // 800D2A84
  return; // 800D2A88
}

// fn_800D2A8C
void f_800D2A8C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2A8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800D2A90
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2A94
  c->r[0]=0u+0x00000000u; // 800D2A98
  W32(c->r[3]+0x000006B4u,c->r[0]); // 800D2A9C
  return; // 800D2AA0
}

// fn_800D2AA4
void f_800D2AA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2AA4
  c->r[0]=c->lr; // 800D2AA8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D2AAC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800D2AB0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800D2AB4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800D2AB8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800D2ABC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D2AC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D2AC4
  c->r[30]=c->r[3]|c->r[3]; // 800D2AC8
  c->r[31]=c->r[4]|c->r[4]; // 800D2ACC
  c->f[30]=c->f[1]; // 800D2AD0
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2AD4
  c->lr=0x800D2ADCu; f_8004B0A4(c); // 800D2AD8
  c->r[3]=c->r[1]+0x00000020u; // 800D2ADC
  c->lr=0x800D2AE4u; f_8004B0A4(c); // 800D2AE0
  c->r[3]=c->r[1]+0x00000014u; // 800D2AE4
  c->lr=0x800D2AECu; f_8004B0A4(c); // 800D2AE8
  c->r[3]=c->r[1]+0x00000008u; // 800D2AEC
  c->lr=0x800D2AF4u; f_8004B0A4(c); // 800D2AF0
  c->r[3]=c->r[30]|c->r[30]; // 800D2AF4
  c->r[4]=c->r[1]+0x00000020u; // 800D2AF8
  c->lr=0x800D2B00u; f_800CA324(c); // 800D2AFC
  c->r[3]=c->r[30]|c->r[30]; // 800D2B00
  c->r[4]=c->r[1]+0x00000014u; // 800D2B04
  c->lr=0x800D2B0Cu; f_800CA318(c); // 800D2B08
  c->r[3]=c->r[1]+0x0000002Cu; // 800D2B0C
  c->r[4]=c->r[1]+0x00000014u; // 800D2B10
  c->r[5]=c->r[1]+0x00000020u; // 800D2B14
  c->lr=0x800D2B1Cu; f_8006000C(c); // 800D2B18
  c->r[3]=c->r[1]+0x00000008u; // 800D2B1C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D2B20
  c->lr=0x800D2B28u; f_8005C110(c); // 800D2B24
  c->r[3]=c->r[1]+0x00000008u; // 800D2B28
  c->r[4]=c->r[1]+0x00000020u; // 800D2B2C
  c->lr=0x800D2B34u; f_80079760(c); // 800D2B30
  c->f[31]=c->f[1]; // 800D2B34
  c->r[3]=c->r[1]+0x00000008u; // 800D2B38
  c->r[4]=c->r[31]|c->r[31]; // 800D2B3C
  c->lr=0x800D2B44u; f_80079760(c); // 800D2B40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800D2B44
  {uint32_t ea=c->r[2]+0xFFFF88F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2B48
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800D2B4C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2B50
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 800D2B54
  c->r[3]=c->r[30]|c->r[30]; // 800D2B58
  c->lr=0x800D2B60u; f_800CA4A0(c); // 800D2B5C
  c->r[3]=c->r[30]|c->r[30]; // 800D2B60
  c->f[1]=c->f[31]; // 800D2B64
  c->lr=0x800D2B6Cu; f_800CA46C(c); // 800D2B68
  c->r[3]=c->r[30]|c->r[30]; // 800D2B6C
  c->f[1]=c->f[30]; // 800D2B70
  c->lr=0x800D2B78u; f_800CA450(c); // 800D2B74
  c->r[0]=0u+0x00000058u; // 800D2B78
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D2B7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800D2B80
  c->r[0]=0u+0x00000048u; // 800D2B84
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800D2B88
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800D2B8C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D2B90
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D2B94
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D2B98
  c->lr=c->r[0]; // 800D2B9C
  c->r[1]=c->r[1]+0x00000060u; // 800D2BA0
  return; // 800D2BA4
}

// fn_800D2BA8
void f_800D2BA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2BA8
  c->r[0]=c->lr; // 800D2BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2BB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2BB4
  c->r[31]=c->r[4]|c->r[4]; // 800D2BB8
  cmps(c,0,(int32_t)c->r[4],0); // 800D2BBC
  if (crb(c,2)) { goto L_800D2BD4; } // 800D2BC0
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2BC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D2BC8
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2BCC
  goto L_800D2BE0; // 800D2BD0
L_800D2BD4:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2BD4
  c->r[0]=c->r[0]|0x00000001u; // 800D2BD8
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2BDC
L_800D2BE0:;
  c->lr=0x800D2BE4u; f_80173F80(c); // 800D2BE0
  c->r[4]=c->r[31]|c->r[31]; // 800D2BE4
  c->r[12]=R32(c->r[3]+0x00000254u); // 800D2BE8
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D2BEC
  c->ctr=c->r[12]; // 800D2BF0
  if (true) { c->lr=0x800D2BF8u; dispatch(c,c->ctr); } // 800D2BF4
  c->r[3]=c->r[31]|c->r[31]; // 800D2BF8
  c->r[4]=0u+0x00000002u; // 800D2BFC
  c->lr=0x800D2C04u; f_80173F88(c); // 800D2C00
  c->r[3]=c->r[31]|c->r[31]; // 800D2C04
  c->r[4]=0u+0x00000001u; // 800D2C08
  c->lr=0x800D2C10u; f_80173F88(c); // 800D2C0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2C14
  c->lr=c->r[0]; // 800D2C18
  c->r[1]=c->r[1]+0x00000010u; // 800D2C1C
  return; // 800D2C20
}

// fn_800D2C24
void f_800D2C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2C24
  c->r[0]=c->lr; // 800D2C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2C30
  c->r[31]=c->r[4]|c->r[4]; // 800D2C34
  cmps(c,0,(int32_t)c->r[4],0); // 800D2C38
  if (crb(c,2)) { goto L_800D2C50; } // 800D2C3C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2C40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800D2C44
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2C48
  goto L_800D2C5C; // 800D2C4C
L_800D2C50:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2C50
  c->r[0]=c->r[0]|0x00000002u; // 800D2C54
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2C58
L_800D2C5C:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2C5C
  c->r[0]=c->r[0]|0x00000040u; // 800D2C60
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2C64
  cmps(c,0,(int32_t)c->r[5],0); // 800D2C68
  if (!crb(c,2)) { goto L_800D2C74; } // 800D2C6C
  c->lr=0x800D2C74u; f_800D1DB4(c); // 800D2C70
L_800D2C74:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2C74
  c->r[4]=0u+0x00000002u; // 800D2C78
  c->lr=0x800D2C80u; f_80173F88(c); // 800D2C7C
  c->r[3]=c->r[31]|c->r[31]; // 800D2C80
  c->r[4]=0u+0x00000000u; // 800D2C84
  c->lr=0x800D2C8Cu; f_80173F88(c); // 800D2C88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2C90
  c->lr=c->r[0]; // 800D2C94
  c->r[1]=c->r[1]+0x00000010u; // 800D2C98
  return; // 800D2C9C
}

// fn_800D2CA0
void f_800D2CA0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D2CA0
  if (crb(c,2)) { goto L_800D2CB8; } // 800D2CA4
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2CA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D2CAC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2CB0
  return; // 800D2CB4
L_800D2CB8:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2CB8
  c->r[0]=c->r[0]|0x00000004u; // 800D2CBC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2CC0
  return; // 800D2CC4
}

// fn_800D2CC8
void f_800D2CC8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D2CC8
  if (crb(c,2)) { goto L_800D2CE0; } // 800D2CCC
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2CD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D2CD4
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2CD8
  return; // 800D2CDC
L_800D2CE0:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2CE0
  c->r[0]=c->r[0]|0x00000008u; // 800D2CE4
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2CE8
  return; // 800D2CEC
}

// fn_800D2CF0
void f_800D2CF0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D2CF0
  if (crb(c,2)) { goto L_800D2D08; } // 800D2CF4
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2CF8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800D2CFC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2D00
  return; // 800D2D04
L_800D2D08:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2D08
  c->r[0]=c->r[0]|0x00000010u; // 800D2D0C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2D10
  return; // 800D2D14
}

// fn_800D2D18
void f_800D2D18(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D2D18
  if (crb(c,2)) { goto L_800D2D30; } // 800D2D1C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2D20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800D2D24
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2D28
  return; // 800D2D2C
L_800D2D30:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800D2D30
  c->r[0]=c->r[0]|0x00000080u; // 800D2D34
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D2D38
  return; // 800D2D3C
}

// fn_800D2D40
void f_800D2D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2D40
  c->r[0]=c->lr; // 800D2D44
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D2D48
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800D2D4C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800D2D50
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800D2D54
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800D2D58
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D2D5C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D2D60
  c->r[30]=c->r[3]|c->r[3]; // 800D2D64
  c->r[31]=c->r[4]|c->r[4]; // 800D2D68
  c->f[30]=c->f[1]; // 800D2D6C
  c->f[31]=c->f[2]; // 800D2D70
  c->r[3]=c->r[1]+0x00000008u; // 800D2D74
  c->lr=0x800D2D7Cu; f_8004B0A4(c); // 800D2D78
  c->r[3]=R32(c->r[30]+0x00000050u); // 800D2D7C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D80
  if (!crb(c,2)) { goto L_800D2D90; } // 800D2D84
  c->r[3]=0u+0x00000001u; // 800D2D88
  goto L_800D2EA4; // 800D2D8C
L_800D2D90:;
  c->r[4]=c->r[1]+0x00000018u; // 800D2D90
  c->lr=0x800D2D98u; f_800CFB68(c); // 800D2D94
  c->r[3]=R32(c->r[30]+0x00000050u); // 800D2D98
  c->r[4]=c->r[1]+0x00000008u; // 800D2D9C
  c->r[5]=c->r[31]|c->r[31]; // 800D2DA0
  c->lr=0x800D2DA8u; f_8005F39C(c); // 800D2DA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D2DA8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D2DAC
  c->r[3]=0u+0x00000000u; // 800D2DB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2DB4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2DB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800D2DBC
  fcmp(c,0,c->f[1],c->f[0]); // 800D2DC0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D2DC4
  if (!crb(c,2)) { goto L_800D2DD0; } // 800D2DC8
  c->r[3]=0u+0x00000001u; // 800D2DCC
L_800D2DD0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2DD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2DD4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800D2DD8
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 800D2DDC
  fcmp(c,0,c->f[1],c->f[0]); // 800D2DE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D2DE4
  if (!crb(c,2)) { goto L_800D2DF0; } // 800D2DE8
  c->r[3]=c->r[3]+0x00000001u; // 800D2DEC
L_800D2DF0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2DF0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2DF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800D2DF8
  fcmp(c,0,c->f[1],c->f[0]); // 800D2DFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D2E00
  if (!crb(c,2)) { goto L_800D2E0C; } // 800D2E04
  c->r[3]=c->r[3]+0x00000001u; // 800D2E08
L_800D2E0C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2E0C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2E10
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 800D2E14
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 800D2E18
  fcmp(c,0,c->f[1],c->f[0]); // 800D2E1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D2E20
  if (!crb(c,2)) { goto L_800D2E2C; } // 800D2E24
  c->r[3]=c->r[3]+0x00000001u; // 800D2E28
L_800D2E2C:;
  cmps(c,0,(int32_t)c->r[3],4); // 800D2E2C
  if (crb(c,0)) { goto L_800D2E3C; } // 800D2E30
  c->r[3]=0u+0x00000001u; // 800D2E34
  goto L_800D2EA4; // 800D2E38
L_800D2E3C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2E3C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2E40
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 800D2E44
  fcmp(c,0,c->f[2],c->f[0]); // 800D2E48
  if (!crb(c,0)) { goto L_800D2E58; } // 800D2E4C
  c->r[3]=0u+0xFFFFFFFFu; // 800D2E50
  goto L_800D2EA4; // 800D2E54
L_800D2E58:;
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[3]); // 800D2E58
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 800D2E5C
  fcmp(c,0,c->f[2],c->f[0]); // 800D2E60
  if (!crb(c,1)) { goto L_800D2E70; } // 800D2E64
  c->r[3]=0u+0xFFFFFFFFu; // 800D2E68
  goto L_800D2EA4; // 800D2E6C
L_800D2E70:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D2E70
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2E74
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 800D2E78
  fcmp(c,0,c->f[2],c->f[0]); // 800D2E7C
  if (!crb(c,0)) { goto L_800D2E8C; } // 800D2E80
  c->r[3]=0u+0xFFFFFFFFu; // 800D2E84
  goto L_800D2EA4; // 800D2E88
L_800D2E8C:;
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[4]); // 800D2E8C
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 800D2E90
  fcmp(c,0,c->f[2],c->f[0]); // 800D2E94
  c->r[0]=c->cr; // 800D2E98
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 800D2E9C
  c->r[3]=0u-c->r[0]; // 800D2EA0
L_800D2EA4:;
  c->r[0]=0u+0x00000048u; // 800D2EA4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D2EA8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800D2EAC
  c->r[0]=0u+0x00000038u; // 800D2EB0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800D2EB4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800D2EB8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D2EBC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D2EC0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D2EC4
  c->lr=c->r[0]; // 800D2EC8
  c->r[1]=c->r[1]+0x00000050u; // 800D2ECC
  return; // 800D2ED0
}

// fn_800D2ED4
void f_800D2ED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2ED4
  c->r[0]=c->lr; // 800D2ED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2EDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2EE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2EE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D2EE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D2EEC
  c->r[28]=c->r[3]|c->r[3]; // 800D2EF0
  c->r[29]=c->r[4]|c->r[4]; // 800D2EF4
  c->r[30]=c->r[5]|c->r[5]; // 800D2EF8
  c->r[31]=c->r[6]|c->r[6]; // 800D2EFC
  c->lr=0x800D2F04u; f_800D2F6C(c); // 800D2F00
  c->r[3]=c->r[28]|c->r[28]; // 800D2F04
  c->r[4]=c->r[29]|c->r[29]; // 800D2F08
  c->r[5]=c->r[30]|c->r[30]; // 800D2F0C
  c->r[6]=c->r[31]|c->r[31]; // 800D2F10
  c->lr=0x800D2F18u; f_800C1DD0(c); // 800D2F14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2F18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2F1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2F20
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D2F24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2F28
  c->lr=c->r[0]; // 800D2F2C
  c->r[1]=c->r[1]+0x00000020u; // 800D2F30
  return; // 800D2F34
}

// fn_800D2F38
void f_800D2F38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F38
  c->r[0]=c->lr; // 800D2F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2F44
  c->r[31]=c->r[3]|c->r[3]; // 800D2F48
  c->lr=0x800D2F50u; f_800C1EAC(c); // 800D2F4C
  c->r[3]=c->r[31]|c->r[31]; // 800D2F50
  c->lr=0x800D2F58u; f_800D2F6C(c); // 800D2F54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2F58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2F5C
  c->lr=c->r[0]; // 800D2F60
  c->r[1]=c->r[1]+0x00000010u; // 800D2F64
  return; // 800D2F68
}

// fn_800D2F6C
void f_800D2F6C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D2F6C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800D2F70
  return; // 800D2F74
}

// fn_800D2F78
void f_800D2F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F78
  c->r[0]=c->lr; // 800D2F7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2F80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2F84
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2F88
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D2F8C
  c->r[29]=c->r[3]|c->r[3]; // 800D2F90
  c->lr=0x800D2F98u; f_800C2184(c); // 800D2F94
  c->r[31]=c->r[3]|c->r[3]; // 800D2F98
  goto L_800D2FDC; // 800D2F9C
L_800D2FA0:;
  c->r[3]=c->r[29]|c->r[29]; // 800D2FA0
  c->r[4]=c->r[31]|c->r[31]; // 800D2FA4
  c->lr=0x800D2FACu; f_800BBE64(c); // 800D2FA8
  c->r[30]=c->r[3]|c->r[3]; // 800D2FAC
  c->r[0]=R32(c->r[29]+0x00000028u); // 800D2FB0
  cmpu(c,0,c->r[31],c->r[0]); // 800D2FB4
  if (!crb(c,2)) { goto L_800D2FCC; } // 800D2FB8
  c->r[3]=0u+0x00000001u; // 800D2FBC
  c->lr=0x800D2FC4u; f_8005D714(c); // 800D2FC0
  c->r[3]=c->r[30]|c->r[30]; // 800D2FC4
  c->lr=0x800D2FCCu; f_800D2488(c); // 800D2FC8
L_800D2FCC:;
  c->r[3]=c->r[29]|c->r[29]; // 800D2FCC
  c->r[4]=c->r[31]|c->r[31]; // 800D2FD0
  c->lr=0x800D2FD8u; f_800C21BC(c); // 800D2FD4
  c->r[31]=c->r[3]|c->r[3]; // 800D2FD8
L_800D2FDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D2FDC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2FA0; } // 800D2FE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2FE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D2FE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D2FEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2FF0
  c->lr=c->r[0]; // 800D2FF4
  c->r[1]=c->r[1]+0x00000020u; // 800D2FF8
  return; // 800D2FFC
}

// fn_800D3000
void f_800D3000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3000
  c->r[0]=c->lr; // 800D3004
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3008
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D300C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3010
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3014
  c->r[29]=c->r[3]|c->r[3]; // 800D3018
  c->r[30]=c->r[4]|c->r[4]; // 800D301C
  c->r[4]=0u+0x00000000u; // 800D3020
  c->lr=0x800D3028u; f_800C1FD4(c); // 800D3024
  c->r[31]=c->r[3]|c->r[3]; // 800D3028
  cmps(c,0,(int32_t)c->r[3],0); // 800D302C
  if (crb(c,2)) { goto L_800D3058; } // 800D3030
  c->r[3]=c->r[29]|c->r[29]; // 800D3034
  c->r[4]=c->r[31]|c->r[31]; // 800D3038
  c->lr=0x800D3040u; f_800BBE64(c); // 800D303C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3040
  if (crb(c,2)) { goto L_800D3058; } // 800D3044
  c->r[4]=c->r[30]|c->r[30]; // 800D3048
  c->lr=0x800D3050u; f_800D19B0(c); // 800D304C
  c->r[3]=c->r[31]|c->r[31]; // 800D3050
  goto L_800D305C; // 800D3054
L_800D3058:;
  c->r[3]=0u+0x00000000u; // 800D3058
L_800D305C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D305C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3060
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3064
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3068
  c->lr=c->r[0]; // 800D306C
  c->r[1]=c->r[1]+0x00000020u; // 800D3070
  return; // 800D3074
}

// fn_800D3078
void f_800D3078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3078
  c->r[0]=c->lr; // 800D307C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3084
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3088
  c->r[30]=c->r[3]|c->r[3]; // 800D308C
  c->r[31]=c->r[4]|c->r[4]; // 800D3090
  c->r[4]=R32(c->r[3]+0x00000028u); // 800D3094
  cmps(c,0,(int32_t)c->r[4],0); // 800D3098
  if (crb(c,2)) { goto L_800D30C0; } // 800D309C
  c->lr=0x800D30A4u; f_800BBE64(c); // 800D30A0
  c->r[4]=0u+0x00000000u; // 800D30A4
  c->lr=0x800D30ACu; f_800CA4B0(c); // 800D30A8
  c->r[3]=c->r[30]|c->r[30]; // 800D30AC
  c->r[4]=R32(c->r[30]+0x00000028u); // 800D30B0
  c->lr=0x800D30B8u; f_800BBE64(c); // 800D30B4
  c->r[4]=0u+0x00000000u; // 800D30B8
  c->lr=0x800D30C0u; f_800CA4A8(c); // 800D30BC
L_800D30C0:;
  W32(c->r[30]+0x00000028u,c->r[31]); // 800D30C0
  c->r[3]=c->r[30]|c->r[30]; // 800D30C4
  c->r[4]=c->r[31]|c->r[31]; // 800D30C8
  c->lr=0x800D30D0u; f_800BBE64(c); // 800D30CC
  c->r[4]=0u+0x00000001u; // 800D30D0
  c->lr=0x800D30D8u; f_800CA4B0(c); // 800D30D4
  c->r[3]=c->r[30]|c->r[30]; // 800D30D8
  c->r[4]=R32(c->r[30]+0x00000028u); // 800D30DC
  c->lr=0x800D30E4u; f_800BBE64(c); // 800D30E0
  c->r[4]=0u+0x00000001u; // 800D30E4
  c->lr=0x800D30ECu; f_800CA4A8(c); // 800D30E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D30EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D30F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D30F4
  c->lr=c->r[0]; // 800D30F8
  c->r[1]=c->r[1]+0x00000010u; // 800D30FC
  return; // 800D3100
}

// fn_800D3104
void f_800D3104(Ctx* __restrict c) {
  f_802EBCAC(c); return; // 800D3104
}

// fn_800D3108
void f_800D3108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3108
  c->r[0]=c->lr; // 800D310C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3114
  c->r[31]=c->r[3]|c->r[3]; // 800D3118
  c->r[4]=0u+0x80460000u; // 800D311C
  c->r[0]=c->r[4]+0x00000B5Cu; // 800D3120
  W32(c->r[3]+0x00000288u,c->r[0]); // 800D3124
  c->lr=0x800D312Cu; f_800D31A8(c); // 800D3128
  c->r[3]=c->r[31]|c->r[31]; // 800D312C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3130
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3134
  c->lr=c->r[0]; // 800D3138
  c->r[1]=c->r[1]+0x00000010u; // 800D313C
  return; // 800D3140
}

// dtor_800D3144
void f_800D3144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3144
  c->r[0]=c->lr; // 800D3148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D314C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3150
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3154
  c->r[30]=c->r[3]|c->r[3]; // 800D3158
  c->r[31]=c->r[4]|c->r[4]; // 800D315C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3160
  if (crb(c,2)) { goto L_800D318C; } // 800D3164
  c->r[4]=0u+0x80460000u; // 800D3168
  c->r[0]=c->r[4]+0x00000B5Cu; // 800D316C
  W32(c->r[3]+0x00000288u,c->r[0]); // 800D3170
  c->lr=0x800D3178u; f_800D31A8(c); // 800D3174
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D3178
  cmps(c,0,(int32_t)c->r[0],0); // 800D317C
  if (!crb(c,1)) { goto L_800D318C; } // 800D3180
  c->r[3]=c->r[30]|c->r[30]; // 800D3184
  c->lr=0x800D318Cu; f_80047B20(c); // 800D3188
L_800D318C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D318C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3190
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3194
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3198
  c->lr=c->r[0]; // 800D319C
  c->r[1]=c->r[1]+0x00000010u; // 800D31A0
  return; // 800D31A4
}

// fn_800D31A8
void f_800D31A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D31A8
  c->r[0]=c->lr; // 800D31AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D31B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D31B4
  c->r[31]=c->r[3]|c->r[3]; // 800D31B8
  c->r[4]=0u+0x00000000u; // 800D31BC
  c->r[5]=0u+0x00000080u; // 800D31C0
  c->lr=0x800D31C8u; f_800060B8(c); // 800D31C4
  c->r[3]=c->r[31]+0x00000080u; // 800D31C8
  c->r[4]=0u+0x00000000u; // 800D31CC
  c->r[5]=0u+0x00000200u; // 800D31D0
  c->lr=0x800D31D8u; f_800060B8(c); // 800D31D4
  c->r[0]=0u+0x00000000u; // 800D31D8
  W32(c->r[31]+0x00000280u,c->r[0]); // 800D31DC
  W32(c->r[31]+0x00000284u,c->r[0]); // 800D31E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D31E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D31E8
  c->lr=c->r[0]; // 800D31EC
  c->r[1]=c->r[1]+0x00000010u; // 800D31F0
  return; // 800D31F4
}

// fn_800D31F8
void f_800D31F8(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000284u); // 800D31F8
  c->r[0]=R32(c->r[3]+0x00000280u); // 800D31FC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D3200
  c->r[5]=c->r[3]+c->r[0]; // 800D3204
  W32(c->r[5]+0x00000080u,c->r[6]); // 800D3208
  c->r[0]=R32(c->r[3]+0x00000280u); // 800D320C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D3210
  c->r[6]=c->r[3]+c->r[0]; // 800D3214
  c->r[0]=R32(c->r[6]+0x00000080u); // 800D3218
  c->r[5]=c->r[4]+c->r[0]; // 800D321C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D3220
  W32(c->r[6]+0x00000084u,c->r[0]); // 800D3224
  c->r[0]=R32(c->r[3]+0x00000284u); // 800D3228
  c->r[0]=c->r[0]+c->r[4]; // 800D322C
  W32(c->r[3]+0x00000284u,c->r[0]); // 800D3230
  c->r[4]=R32(c->r[3]+0x00000280u); // 800D3234
  c->r[0]=c->r[4]+0x00000001u; // 800D3238
  W32(c->r[3]+0x00000280u,c->r[0]); // 800D323C
  return; // 800D3240
}

// fn_800D3244
void f_800D3244(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D3244
  c->r[4]=c->r[3]+c->r[0]; // 800D3248
  c->r[0]=R32(c->r[4]+0x00000080u); // 800D324C
  c->r[7]=c->r[0]+c->r[5]; // 800D3250
  c->r[0]=rotl(c->r[7],27)&0x07FFFFFFu; // 800D3254
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3258
  c->r[5]=R32(c->r[3]+c->r[6]); // 800D325C
  c->r[4]=0u+0x00000001u; // 800D3260
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; // 800D3264
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800D3268
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800D326C
  c->r[0]=c->r[5]|c->r[0]; // 800D3270
  W32(c->r[3]+c->r[6],c->r[0]); // 800D3274
  return; // 800D3278
}

// fn_800D327C
void f_800D327C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D327C
  c->r[4]=c->r[3]+c->r[0]; // 800D3280
  c->r[0]=R32(c->r[4]+0x00000080u); // 800D3284
  c->r[7]=c->r[0]+c->r[5]; // 800D3288
  c->r[0]=rotl(c->r[7],27)&0x07FFFFFFu; // 800D328C
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D3290
  c->r[5]=R32(c->r[3]+c->r[6]); // 800D3294
  c->r[4]=0u+0x00000001u; // 800D3298
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; // 800D329C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800D32A0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800D32A4
  c->r[0]=~(c->r[0]|c->r[0]); // 800D32A8
  c->r[0]=c->r[5]&c->r[0]; // 800D32AC
  W32(c->r[3]+c->r[6],c->r[0]); // 800D32B0
  return; // 800D32B4
}

// fn_800D32B8
void f_800D32B8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D32B8
  c->r[4]=c->r[3]+c->r[0]; // 800D32BC
  c->r[0]=R32(c->r[4]+0x00000080u); // 800D32C0
  c->r[5]=c->r[0]+c->r[5]; // 800D32C4
  c->r[4]=0u+0x00000001u; // 800D32C8
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; // 800D32CC
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 800D32D0
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800D32D4
  c->r[0]=rotl(c->r[5],27)&0x07FFFFFFu; // 800D32D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D32DC
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D32E0
  c->r[3]=c->r[4]&c->r[0]; // 800D32E4
  c->r[0]=0u-c->r[3]; // 800D32E8
  c->r[0]=c->r[0]|c->r[3]; // 800D32EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D32F0
  return; // 800D32F4
}

// fn_800D32F8
void f_800D32F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D32F8
  c->r[0]=c->lr; // 800D32FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3300
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3304
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3308
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D330C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D3310
  c->r[28]=c->r[3]|c->r[3]; // 800D3314
  c->r[29]=c->r[4]|c->r[4]; // 800D3318
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D331C
  c->r[4]=c->r[3]+c->r[0]; // 800D3320
  c->r[3]=R32(c->r[4]+0x00000080u); // 800D3324
  c->r[0]=R32(c->r[4]+0x00000084u); // 800D3328
  c->r[3]=c->r[0]-c->r[3]; // 800D332C
  c->r[30]=c->r[3]+0x00000001u; // 800D3330
  c->r[31]=0u+0x00000000u; // 800D3334
  goto L_800D3350; // 800D3338
L_800D333C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D333C
  c->r[4]=c->r[29]|c->r[29]; // 800D3340
  c->r[5]=c->r[31]|c->r[31]; // 800D3344
  c->lr=0x800D334Cu; f_800D327C(c); // 800D3348
  c->r[31]=c->r[31]+0x00000001u; // 800D334C
L_800D3350:;
  cmpu(c,0,c->r[31],c->r[30]); // 800D3350
  if (crb(c,0)) { IRQCHK(c); goto L_800D333C; } // 800D3354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3358
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D335C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3360
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D3364
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3368
  c->lr=c->r[0]; // 800D336C
  c->r[1]=c->r[1]+0x00000020u; // 800D3370
  return; // 800D3374
}

// fn_800D3378
void f_800D3378(Ctx* __restrict c) {
  c->r[0]=c->r[3]|c->r[3]; // 800D3378
  c->r[3]=c->r[4]|c->r[4]; // 800D337C
  c->r[4]=c->r[0]|c->r[0]; // 800D3380
  c->r[5]=0u+0x00000080u; // 800D3384
  f_802E53B8(c); return; // 800D3388
}

// fn_800D338C
void f_800D338C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000080u; // 800D338C
  f_802E53B8(c); return; // 800D3390
}

// fn_800D3394
void f_800D3394(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3394
  c->r[0]=c->lr; // 800D3398
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D339C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D33A0
  c->r[31]=c->r[3]|c->r[3]; // 800D33A4
  c->r[4]=0u+0x80460000u; // 800D33A8
  c->r[0]=c->r[4]+0x00000C0Cu; // 800D33AC
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D33B0
  c->lr=0x800D33B8u; f_800D3434(c); // 800D33B4
  c->r[3]=c->r[31]|c->r[31]; // 800D33B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D33BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D33C0
  c->lr=c->r[0]; // 800D33C4
  c->r[1]=c->r[1]+0x00000010u; // 800D33C8
  return; // 800D33CC
}

// fn_800D33D0
void f_800D33D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D33D0
  c->r[0]=c->lr; // 800D33D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D33D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D33DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D33E0
  c->r[30]=c->r[3]|c->r[3]; // 800D33E4
  c->r[31]=c->r[4]|c->r[4]; // 800D33E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D33EC
  if (crb(c,2)) { goto L_800D3418; } // 800D33F0
  c->r[4]=0u+0x80460000u; // 800D33F4
  c->r[0]=c->r[4]+0x00000C0Cu; // 800D33F8
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D33FC
  c->lr=0x800D3404u; f_800D3524(c); // 800D3400
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D3404
  cmps(c,0,(int32_t)c->r[0],0); // 800D3408
  if (!crb(c,1)) { goto L_800D3418; } // 800D340C
  c->r[3]=c->r[30]|c->r[30]; // 800D3410
  c->lr=0x800D3418u; f_80047B20(c); // 800D3414
L_800D3418:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D341C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3420
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3424
  c->lr=c->r[0]; // 800D3428
  c->r[1]=c->r[1]+0x00000010u; // 800D342C
  return; // 800D3430
}

// fn_800D3434
void f_800D3434(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800D3434
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D3438
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D343C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800D3440
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D3444
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800D3448
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800D344C
  c->r[0]=0u+0xFFFFFFFFu; // 800D3450
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D3454
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800D3458
  W32(c->r[3]+0x00000030u,c->r[4]); // 800D345C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800D3460
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800D3464
  W32(c->r[3]+0x00000028u,c->r[4]); // 800D3468
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800D346C
  W32(c->r[3]+0x00000034u,c->r[4]); // 800D3470
  W32(c->r[3]+0x00000038u,c->r[4]); // 800D3474
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800D3478
  c->r[12]=R32(c->r[3]+0x00000040u); // 800D347C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3480
  c->ctr=c->r[12]; // 800D3484
  if (true) { dispatch(c,c->ctr); return; } // 800D3488
}

// fn_800D348C
void f_800D348C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D348C
  c->r[0]=c->lr; // 800D3490
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3494
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3498
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D349C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D34A0
  c->r[29]=c->r[3]|c->r[3]; // 800D34A4
  c->r[30]=c->r[4]|c->r[4]; // 800D34A8
  c->r[31]=c->r[5]|c->r[5]; // 800D34AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D34B0
  cmps(c,0,(int32_t)c->r[0],0); // 800D34B4
  if (crb(c,2)) { goto L_800D34C0; } // 800D34B8
  c->lr=0x800D34C0u; f_800D3524(c); // 800D34BC
L_800D34C0:;
  c->lr=0x800D34C4u; f_800A23BC(c); // 800D34C0
  c->lr=0x800D34C8u; f_800C23E4(c); // 800D34C4
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800D34C8
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D34CC
  cmps(c,0,(int32_t)c->r[0],0); // 800D34D0
  if (!crb(c,2)) { goto L_800D3508; } // 800D34D4
  W32(c->r[29]+0x00000000u,c->r[30]); // 800D34D8
  W32(c->r[29]+0x00000004u,c->r[31]); // 800D34DC
  c->r[0]=0u+0x00000000u; // 800D34E0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800D34E4
  c->r[3]=c->r[30]|c->r[30]; // 800D34E8
  c->lr=0x800D34F0u; f_802B71FC(c); // 800D34EC
  W32(c->r[29]+0x00000038u,c->r[3]); // 800D34F0
  c->r[3]=c->r[29]|c->r[29]; // 800D34F4
  c->r[12]=R32(c->r[3]+0x00000040u); // 800D34F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D34FC
  c->ctr=c->r[12]; // 800D3500
  if (true) { c->lr=0x800D3508u; dispatch(c,c->ctr); } // 800D3504
L_800D3508:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3508
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D350C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3510
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3514
  c->lr=c->r[0]; // 800D3518
  c->r[1]=c->r[1]+0x00000020u; // 800D351C
  return; // 800D3520
}

// fn_800D3524
void f_800D3524(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3524
  c->r[0]=c->lr; // 800D3528
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D352C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3530
  c->r[31]=c->r[3]|c->r[3]; // 800D3534
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D3538
  cmps(c,0,(int32_t)c->r[0],0); // 800D353C
  if (crb(c,2)) { goto L_800D3564; } // 800D3540
  c->r[12]=R32(c->r[3]+0x00000040u); // 800D3544
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800D3548
  c->ctr=c->r[12]; // 800D354C
  if (true) { c->lr=0x800D3554u; dispatch(c,c->ctr); } // 800D3550
  c->r[0]=0u+0x00000000u; // 800D3554
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D3558
  c->r[3]=c->r[31]|c->r[31]; // 800D355C
  c->lr=0x800D3564u; f_800D3434(c); // 800D3560
L_800D3564:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3564
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3568
  c->lr=c->r[0]; // 800D356C
  c->r[1]=c->r[1]+0x00000010u; // 800D3570
  return; // 800D3574
}

// fn_800D3578
void f_800D3578(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000038u); // 800D3578
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D357C
  if (!crb(c,0)) return; // 800D3580
  W32(c->r[3]+0x00000018u,c->r[4]); // 800D3584
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3588
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800D358C
  c->r[12]=R32(c->r[3]+0x00000040u); // 800D3590
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D3594
  c->ctr=c->r[12]; // 800D3598
  if (true) { dispatch(c,c->ctr); return; } // 800D359C
  return; // 800D35A0
}

// fn_800D35A4
void f_800D35A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D35A4
  c->r[0]=c->lr; // 800D35A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D35AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D35B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D35B4
  c->r[30]=c->r[3]|c->r[3]; // 800D35B8
  c->r[31]=c->r[4]|c->r[4]; // 800D35BC
  c->r[4]=R32(c->r[3]+0x00000018u); // 800D35C0
  cmps(c,0,(int32_t)c->r[4],-1); // 800D35C4
  if (!crb(c,2)) { goto L_800D35D4; } // 800D35C8
  c->r[3]=0u+0x00000000u; // 800D35CC
  goto L_800D3604; // 800D35D0
L_800D35D4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D35D4
  c->lr=0x800D35DCu; f_802B7164(c); // 800D35D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D35DC
  c->r[3]=c->r[1]+0x00000008u; // 800D35E0
  c->r[4]=0u+0x00000000u; // 800D35E4
  c->lr=0x800D35ECu; f_802BF444(c); // 800D35E8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D35EC
  c->r[3]=c->r[1]+0x0000000Cu; // 800D35F0
  c->r[4]=c->r[31]|c->r[31]; // 800D35F4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D35F8
  c->lr=0x800D3600u; f_802BEB58(c); // 800D35FC
  c->r[3]=0u+0x00000001u; // 800D3600
L_800D3604:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3604
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3608
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D360C
  c->lr=c->r[0]; // 800D3610
  c->r[1]=c->r[1]+0x00000020u; // 800D3614
  return; // 800D3618
}

// fn_800D361C
void f_800D361C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D361C
  c->r[0]=c->lr; // 800D3620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3628
  c->r[31]=c->r[3]|c->r[3]; // 800D362C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D3630
  cmps(c,0,(int32_t)c->r[0],-1); // 800D3634
  if (crb(c,2)) { goto L_800D3674; } // 800D3638
  c->r[12]=R32(c->r[3]+0x00000040u); // 800D363C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D3640
  c->ctr=c->r[12]; // 800D3644
  if (true) { c->lr=0x800D364Cu; dispatch(c,c->ctr); } // 800D3648
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D364C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3650
  fcmp(c,0,c->f[1],c->f[0]); // 800D3654
  if (!crb(c,0)) { goto L_800D3664; } // 800D3658
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800D365C
  goto L_800D3674; // 800D3660
L_800D3664:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3664
  fcmp(c,0,c->f[1],c->f[0]); // 800D3668
  if (!crb(c,1)) { goto L_800D3674; } // 800D366C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800D3670
L_800D3674:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3674
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3678
  c->lr=c->r[0]; // 800D367C
  c->r[1]=c->r[1]+0x00000010u; // 800D3680
  return; // 800D3684
}

// fn_800D3688
void f_800D3688(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D3688
  cmps(c,0,(int32_t)c->r[0],-1); // 800D368C
  if (!crb(c,2)) { goto L_800D369C; } // 800D3690
  c->r[3]=0u+0x00000001u; // 800D3694
  return; // 800D3698
L_800D369C:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D369C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D36A0
  fcmp(c,0,c->f[1],c->f[0]); // 800D36A4
  c->r[0]=c->cr; // 800D36A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D36AC
  c->r[0]=cntlz(c->r[0]); // 800D36B0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D36B4
  return; // 800D36B8
}

// fn_800D36BC
void f_800D36BC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D36BC
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D36C0
  return; // 800D36C4
}

// fn_800D36C8
void f_800D36C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D36C8
  c->r[0]=c->lr; // 800D36CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D36D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D36D4
  c->r[31]=c->r[3]|c->r[3]; // 800D36D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D36DC
  c->r[4]=R32(c->r[31]+0x00000004u); // 800D36E0
  c->r[5]=0u+0x00000000u; // 800D36E4
  c->lr=0x800D36ECu; f_8004A434(c); // 800D36E8
  W32(c->r[31]+0x00000044u,c->r[3]); // 800D36EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D36F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D36F4
  c->lr=c->r[0]; // 800D36F8
  c->r[1]=c->r[1]+0x00000010u; // 800D36FC
  return; // 800D3700
}

// fn_800D3704
void f_800D3704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3704
  c->r[0]=c->lr; // 800D3708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D370C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3710
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3714
  c->r[30]=c->r[3]|c->r[3]; // 800D3718
  c->r[31]=R32(c->r[3]+0x00000034u); // 800D371C
  cmps(c,0,(int32_t)c->r[31],0); // 800D3720
  if (crb(c,2)) { goto L_800D3740; } // 800D3724
  c->lr=0x800D372Cu; f_800A23BC(c); // 800D3728
  c->lr=0x800D3730u; f_800BB808(c); // 800D372C
  c->r[4]=c->r[31]|c->r[31]; // 800D3730
  c->lr=0x800D3738u; f_800CB00C(c); // 800D3734
  c->r[0]=0u+0x00000000u; // 800D3738
  W32(c->r[30]+0x00000034u,c->r[0]); // 800D373C
L_800D3740:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 800D3740
  cmps(c,0,(int32_t)c->r[0],0); // 800D3744
  if (crb(c,2)) { goto L_800D375C; } // 800D3748
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D374C
  c->lr=0x800D3754u; f_8004A490(c); // 800D3750
  c->r[0]=0u+0x00000000u; // 800D3754
  W32(c->r[30]+0x00000044u,c->r[0]); // 800D3758
L_800D375C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D375C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3760
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3764
  c->lr=c->r[0]; // 800D3768
  c->r[1]=c->r[1]+0x00000010u; // 800D376C
  return; // 800D3770
}

// fn_800D3774
void f_800D3774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3774
  c->r[0]=c->lr; // 800D3778
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D377C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D3780
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D3784
  c->r[30]=c->r[3]|c->r[3]; // 800D3788
  c->r[0]=R32(c->r[3]+0x00000030u); // 800D378C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3790
  if (!crb(c,2)) { goto L_800D38F8; } // 800D3794
  c->r[31]=R32(c->r[3]+0x00000034u); // 800D3798
  cmps(c,0,(int32_t)c->r[31],0); // 800D379C
  if (crb(c,2)) { goto L_800D37C4; } // 800D37A0
  c->lr=0x800D37A8u; f_800A23BC(c); // 800D37A4
  c->lr=0x800D37ACu; f_800BB808(c); // 800D37A8
  c->r[4]=c->r[31]|c->r[31]; // 800D37AC
  c->lr=0x800D37B4u; f_800C0D08(c); // 800D37B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D37B4
  if (!crb(c,2)) { goto L_800D37C4; } // 800D37B8
  c->r[0]=0u+0x00000000u; // 800D37BC
  W32(c->r[30]+0x00000034u,c->r[0]); // 800D37C0
L_800D37C4:;
  c->r[31]=R32(c->r[30]+0x00000034u); // 800D37C4
  cmps(c,0,(int32_t)c->r[31],0); // 800D37C8
  if (crb(c,2)) { goto L_800D3804; } // 800D37CC
  c->lr=0x800D37D4u; f_800A23BC(c); // 800D37D0
  c->lr=0x800D37D8u; f_800BB808(c); // 800D37D4
  c->r[4]=c->r[31]|c->r[31]; // 800D37D8
  c->lr=0x800D37E0u; f_800BBC8C(c); // 800D37DC
  c->lr=0x800D37E4u; f_800CADFC(c); // 800D37E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D37E4
  if (!crb(c,2)) { goto L_800D3804; } // 800D37E8
  c->lr=0x800D37F0u; f_800A23BC(c); // 800D37EC
  c->lr=0x800D37F4u; f_800BB808(c); // 800D37F0
  c->r[4]=R32(c->r[30]+0x00000034u); // 800D37F4
  c->lr=0x800D37FCu; f_800CB00C(c); // 800D37F8
  c->r[0]=0u+0x00000000u; // 800D37FC
  W32(c->r[30]+0x00000034u,c->r[0]); // 800D3800
L_800D3804:;
  c->lr=0x800D3808u; f_800A23BC(c); // 800D3804
  c->lr=0x800D380Cu; f_800A23C8(c); // 800D3808
  c->lr=0x800D3810u; f_800CDEF0(c); // 800D380C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3810
  if (!crb(c,2)) { goto L_800D38F8; } // 800D3814
  c->r[0]=R32(c->r[30]+0x00000034u); // 800D3818
  cmps(c,0,(int32_t)c->r[0],0); // 800D381C
  if (crb(c,2)) { goto L_800D38E4; } // 800D3820
  c->lr=0x800D3828u; f_800A23BC(c); // 800D3824
  c->lr=0x800D382Cu; f_800BB700(c); // 800D3828
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800D382C
  c->lr=0x800D3834u; f_800BBEA4(c); // 800D3830
  c->r[31]=c->r[3]|c->r[3]; // 800D3834
  cmps(c,0,(int32_t)c->r[3],0); // 800D3838
  if (crb(c,2)) { goto L_800D38E4; } // 800D383C
  c->r[3]=c->r[1]+0x0000002Cu; // 800D3840
  c->lr=0x800D3848u; f_8004B0A4(c); // 800D3844
  c->r[3]=c->r[1]+0x00000020u; // 800D3848
  c->lr=0x800D3850u; f_8004B0A4(c); // 800D384C
  c->r[3]=c->r[1]+0x00000014u; // 800D3850
  c->lr=0x800D3858u; f_8004B0A4(c); // 800D3854
  c->r[3]=c->r[1]+0x00000008u; // 800D3858
  c->lr=0x800D3860u; f_8004B0A4(c); // 800D385C
  c->lr=0x800D3864u; f_800A23BC(c); // 800D3860
  c->lr=0x800D3868u; f_800BB700(c); // 800D3864
  c->r[4]=c->r[31]|c->r[31]; // 800D3868
  c->lr=0x800D3870u; f_800BBE64(c); // 800D386C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D3870
  c->lr=0x800D3878u; f_800CA324(c); // 800D3874
  c->lr=0x800D387Cu; f_800A23BC(c); // 800D3878
  c->lr=0x800D3880u; f_800BB700(c); // 800D387C
  c->r[4]=c->r[31]|c->r[31]; // 800D3880
  c->lr=0x800D3888u; f_800BBE64(c); // 800D3884
  c->r[4]=c->r[1]+0x00000020u; // 800D3888
  c->lr=0x800D3890u; f_800CA318(c); // 800D388C
  c->r[3]=c->r[1]+0x00000014u; // 800D3890
  c->r[4]=c->r[1]+0x00000020u; // 800D3894
  c->r[5]=c->r[1]+0x0000002Cu; // 800D3898
  c->lr=0x800D38A0u; f_8006000C(c); // 800D389C
  c->r[3]=c->r[1]+0x00000008u; // 800D38A0
  c->r[4]=c->r[1]+0x00000014u; // 800D38A4
  c->lr=0x800D38ACu; f_8005C110(c); // 800D38A8
  c->r[3]=c->r[1]+0x00000014u; // 800D38AC
  c->r[4]=c->r[1]+0x00000008u; // 800D38B0
  {uint32_t ea=c->r[2]+0xFFFF88FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D38B4
  c->lr=0x800D38BCu; f_8004E330(c); // 800D38B8
  c->r[3]=c->r[1]+0x00000020u; // 800D38BC
  c->r[4]=c->r[1]+0x0000002Cu; // 800D38C0
  c->r[5]=c->r[1]+0x00000014u; // 800D38C4
  c->lr=0x800D38CCu; f_8005C194(c); // 800D38C8
  c->lr=0x800D38D0u; f_800A23BC(c); // 800D38CC
  c->lr=0x800D38D4u; f_800BB808(c); // 800D38D0
  c->r[4]=R32(c->r[30]+0x00000034u); // 800D38D4
  c->lr=0x800D38DCu; f_800BBC8C(c); // 800D38D8
  c->r[4]=c->r[1]+0x00000020u; // 800D38DC
  c->lr=0x800D38E4u; f_800BCDE8(c); // 800D38E0
L_800D38E4:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 800D38E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D38E8
  if (crb(c,2)) { goto L_800D38F8; } // 800D38EC
  c->lr=0x800D38F4u; f_800CB0F0(c); // 800D38F0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 800D38F4
L_800D38F8:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D38F8
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D38FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D3900
  c->lr=c->r[0]; // 800D3904
  c->r[1]=c->r[1]+0x00000040u; // 800D3908
  return; // 800D390C
}

// fn_800D3910
void f_800D3910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3910
  c->r[0]=c->lr; // 800D3914
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D391C
  c->r[31]=c->r[3]|c->r[3]; // 800D3920
  c->r[3]=R32(c->r[3]+0x00000044u); // 800D3924
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D3928
  c->lr=0x800D3930u; f_8004AB10(c); // 800D392C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800D3930
  cmps(c,0,(int32_t)c->r[0],0); // 800D3934
  if (crb(c,2)) { goto L_800D394C; } // 800D3938
  c->r[3]=R32(c->r[31]+0x00000044u); // 800D393C
  c->r[4]=0u+0x00000001u; // 800D3940
  c->lr=0x800D3948u; f_8004AC4C(c); // 800D3944
  goto L_800D3958; // 800D3948
L_800D394C:;
  c->r[3]=R32(c->r[31]+0x00000044u); // 800D394C
  c->r[4]=0u+0x00000000u; // 800D3950
  c->lr=0x800D3958u; f_8004AC4C(c); // 800D3954
L_800D3958:;
  c->r[3]=R32(c->r[31]+0x00000044u); // 800D3958
  c->r[4]=c->r[31]+0x00000008u; // 800D395C
  c->r[5]=c->r[31]+0x0000000Cu; // 800D3960
  c->r[6]=c->r[31]+0x00000010u; // 800D3964
  c->lr=0x800D396Cu; f_8004ACB0(c); // 800D3968
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D396C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3970
  c->lr=c->r[0]; // 800D3974
  c->r[1]=c->r[1]+0x00000010u; // 800D3978
  return; // 800D397C
}

// fn_800D3980
void f_800D3980(Ctx* __restrict c) {
  return; // 800D3980
}

// fn_800D3984
void f_800D3984(Ctx* __restrict c) {
  return; // 800D3984
}

// fn_800D3988
void f_800D3988(Ctx* __restrict c) {
  return; // 800D3988
}

// fn_800D398C
void f_800D398C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D398C
  c->r[0]=c->lr; // 800D3990
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3994
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3998
  c->r[31]=c->r[3]|c->r[3]; // 800D399C
  c->r[3]=0u+0x00000001u; // 800D39A0
  c->lr=0x800D39A8u; f_8005D714(c); // 800D39A4
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D39A8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D39AC
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800D39B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D39B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D39B8
  c->lr=c->r[0]; // 800D39BC
  c->r[1]=c->r[1]+0x00000010u; // 800D39C0
  return; // 800D39C4
}

// fn_800D39C8
void f_800D39C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D39C8
  c->r[0]=c->lr; // 800D39CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D39D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D39D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D39D8
  c->r[30]=c->r[3]|c->r[3]; // 800D39DC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D39E0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800D39E4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D39E8
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D39EC
  c->lr=0x800D39F4u; f_802B7164(c); // 800D39F0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D39F4
  c->r[3]=c->r[1]+0x0000000Cu; // 800D39F8
  c->lr=0x800D3A00u; f_8004B2B0(c); // 800D39FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D3A00
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800D3A04
  c->r[0]=c->r[0]^0x80000000u; // 800D3A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A0C
  c->r[31]=0u+0x43300000u; // 800D3A10
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D3A14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D3A18
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D3A1C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D3A20
  c->r[3]=R32(c->r[30]+0x00000000u); // 800D3A24
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D3A28
  c->lr=0x800D3A30u; f_802B7164(c); // 800D3A2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D3A30
  c->r[3]=c->r[1]+0x00000008u; // 800D3A34
  c->lr=0x800D3A3Cu; f_8004B2B0(c); // 800D3A38
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800D3A3C
  c->r[0]=c->r[3]^0x80000000u; // 800D3A40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D3A44
  W32(c->r[1]+0x00000018u,c->r[31]); // 800D3A48
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800D3A4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D3A50
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 800D3A54
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D3A58
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D3A5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3A60
  c->lr=c->r[0]; // 800D3A64
  c->r[1]=c->r[1]+0x00000030u; // 800D3A68
  return; // 800D3A6C
}

// fn_800D3A70
void f_800D3A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A70
  c->r[0]=c->lr; // 800D3A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3A7C
  c->r[31]=c->r[3]|c->r[3]; // 800D3A80
  c->r[4]=0u+0x80460000u; // 800D3A84
  c->r[0]=c->r[4]+0x00000B74u; // 800D3A88
  W32(c->r[3]+0x00000128u,c->r[0]); // 800D3A8C
  c->lr=0x800D3A94u; f_800CF524(c); // 800D3A90
  c->r[3]=c->r[31]+0x00000048u; // 800D3A94
  c->lr=0x800D3A9Cu; f_800CF4E0(c); // 800D3A98
  c->r[3]=c->r[31]+0x0000009Cu; // 800D3A9C
  c->lr=0x800D3AA4u; f_800CF524(c); // 800D3AA0
  c->r[3]=c->r[31]+0x000000E4u; // 800D3AA4
  c->lr=0x800D3AACu; f_800CF4E0(c); // 800D3AA8
  c->r[3]=c->r[31]|c->r[31]; // 800D3AAC
  c->lr=0x800D3AB4u; f_800D3C18(c); // 800D3AB0
  c->r[3]=c->r[31]|c->r[31]; // 800D3AB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3AB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3ABC
  c->lr=c->r[0]; // 800D3AC0
  c->r[1]=c->r[1]+0x00000010u; // 800D3AC4
  return; // 800D3AC8
}

// dtor_800D3ACC
void f_800D3ACC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3ACC
  c->r[0]=c->lr; // 800D3AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3AD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3AD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3ADC
  c->r[30]=c->r[3]|c->r[3]; // 800D3AE0
  c->r[31]=c->r[4]|c->r[4]; // 800D3AE4
  cmps(c,0,(int32_t)c->r[3],0); // 800D3AE8
  if (crb(c,2)) { goto L_800D3B0C; } // 800D3AEC
  c->r[4]=0u+0x00000000u; // 800D3AF0
  c->lr=0x800D3AF8u; f_800D33D0(c); // 800D3AF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D3AF8
  cmps(c,0,(int32_t)c->r[0],0); // 800D3AFC
  if (!crb(c,1)) { goto L_800D3B0C; } // 800D3B00
  c->r[3]=c->r[30]|c->r[30]; // 800D3B04
  c->lr=0x800D3B0Cu; f_80047B20(c); // 800D3B08
L_800D3B0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3B10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3B14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B18
  c->lr=c->r[0]; // 800D3B1C
  c->r[1]=c->r[1]+0x00000010u; // 800D3B20
  return; // 800D3B24
}

// dtor_800D3B28
void f_800D3B28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B28
  c->r[0]=c->lr; // 800D3B2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3B34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3B38
  c->r[30]=c->r[3]|c->r[3]; // 800D3B3C
  c->r[31]=c->r[4]|c->r[4]; // 800D3B40
  cmps(c,0,(int32_t)c->r[3],0); // 800D3B44
  if (crb(c,2)) { goto L_800D3B68; } // 800D3B48
  c->r[4]=0u+0x00000000u; // 800D3B4C
  c->lr=0x800D3B54u; f_800D33D0(c); // 800D3B50
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D3B54
  cmps(c,0,(int32_t)c->r[0],0); // 800D3B58
  if (!crb(c,1)) { goto L_800D3B68; } // 800D3B5C
  c->r[3]=c->r[30]|c->r[30]; // 800D3B60
  c->lr=0x800D3B68u; f_80047B20(c); // 800D3B64
L_800D3B68:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3B70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B74
  c->lr=c->r[0]; // 800D3B78
  c->r[1]=c->r[1]+0x00000010u; // 800D3B7C
  return; // 800D3B80
}

// dtor_800D3B84
void f_800D3B84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B84
  c->r[0]=c->lr; // 800D3B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3B90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3B94
  c->r[30]=c->r[3]|c->r[3]; // 800D3B98
  c->r[31]=c->r[4]|c->r[4]; // 800D3B9C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3BA0
  if (crb(c,2)) { goto L_800D3BFC; } // 800D3BA4
  c->r[4]=0u+0x80460000u; // 800D3BA8
  c->r[0]=c->r[4]+0x00000B74u; // 800D3BAC
  W32(c->r[3]+0x00000128u,c->r[0]); // 800D3BB0
  c->lr=0x800D3BB8u; f_800D3C3C(c); // 800D3BB4
  c->r[3]=c->r[30]+0x000000E4u; // 800D3BB8
  c->r[4]=0u+0xFFFFFFFFu; // 800D3BBC
  c->lr=0x800D3BC4u; f_800D3ACC(c); // 800D3BC0
  c->r[3]=c->r[30]+0x0000009Cu; // 800D3BC4
  c->r[4]=0u+0xFFFFFFFFu; // 800D3BC8
  c->lr=0x800D3BD0u; f_800D3B28(c); // 800D3BCC
  c->r[3]=c->r[30]+0x00000048u; // 800D3BD0
  c->r[4]=0u+0xFFFFFFFFu; // 800D3BD4
  c->lr=0x800D3BDCu; f_800D3ACC(c); // 800D3BD8
  c->r[3]=c->r[30]|c->r[30]; // 800D3BDC
  c->r[4]=0u+0xFFFFFFFFu; // 800D3BE0
  c->lr=0x800D3BE8u; f_800D3B28(c); // 800D3BE4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D3BE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D3BEC
  if (!crb(c,1)) { goto L_800D3BFC; } // 800D3BF0
  c->r[3]=c->r[30]|c->r[30]; // 800D3BF4
  c->lr=0x800D3BFCu; f_80047B20(c); // 800D3BF8
L_800D3BFC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3BFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3C00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C08
  c->lr=c->r[0]; // 800D3C0C
  c->r[1]=c->r[1]+0x00000010u; // 800D3C10
  return; // 800D3C14
}

// fn_800D3C18
void f_800D3C18(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800D3C18
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 800D3C1C
  W32(c->r[3]+0x00000090u,c->r[4]); // 800D3C20
  W32(c->r[3]+0x00000094u,c->r[4]); // 800D3C24
  W32(c->r[3]+0x00000090u,c->r[3]); // 800D3C28
  c->r[0]=c->r[3]+0x00000048u; // 800D3C2C
  W32(c->r[3]+0x00000094u,c->r[0]); // 800D3C30
  W32(c->r[3]+0x00000098u,c->r[4]); // 800D3C34
  return; // 800D3C38
}

// fn_800D3C3C
void f_800D3C3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C3C
  c->r[0]=c->lr; // 800D3C40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3C44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3C48
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3C4C
  c->r[30]=0u+0x00000000u; // 800D3C50
  c->r[31]=c->r[3]|c->r[3]; // 800D3C54
L_800D3C58:;
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 800D3C58
  cmps(c,0,(int32_t)c->r[3],0); // 800D3C5C
  if (crb(c,2)) { goto L_800D3C68; } // 800D3C60
  c->lr=0x800D3C68u; f_800D3524(c); // 800D3C64
L_800D3C68:;
  c->r[31]=c->r[31]+0x00000004u; // 800D3C68
  c->r[30]=c->r[30]+0x00000001u; // 800D3C6C
  cmpu(c,0,c->r[30],0x00000003u); // 800D3C70
  if (crb(c,0)) { IRQCHK(c); goto L_800D3C58; } // 800D3C74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3C78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C80
  c->lr=c->r[0]; // 800D3C84
  c->r[1]=c->r[1]+0x00000010u; // 800D3C88
  return; // 800D3C8C
}

// fn_800D3C90
void f_800D3C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C90
  c->r[0]=c->lr; // 800D3C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3C98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3C9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3CA0
  c->r[30]=0u+0x00000000u; // 800D3CA4
  c->r[31]=c->r[3]|c->r[3]; // 800D3CA8
L_800D3CAC:;
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 800D3CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3CB0
  if (crb(c,2)) { goto L_800D3CBC; } // 800D3CB4
  c->lr=0x800D3CBCu; f_800D361C(c); // 800D3CB8
L_800D3CBC:;
  c->r[31]=c->r[31]+0x00000004u; // 800D3CBC
  c->r[30]=c->r[30]+0x00000001u; // 800D3CC0
  cmpu(c,0,c->r[30],0x00000003u); // 800D3CC4
  if (crb(c,0)) { IRQCHK(c); goto L_800D3CAC; } // 800D3CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3CD4
  c->lr=c->r[0]; // 800D3CD8
  c->r[1]=c->r[1]+0x00000010u; // 800D3CDC
  return; // 800D3CE0
}

// fn_800D3CE4
void f_800D3CE4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D3CE4
  W32(c->r[3]+0x00000098u,c->r[0]); // 800D3CE8
  return; // 800D3CEC
}

// fn_800D3CF0
void f_800D3CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CF0
  c->r[0]=c->lr; // 800D3CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3CFC
  c->r[31]=c->r[3]|c->r[3]; // 800D3D00
  c->r[4]=0u+0x80460000u; // 800D3D04
  c->r[0]=c->r[4]+0x00000B44u; // 800D3D08
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D3D0C
  c->lr=0x800D3D14u; f_800BB894(c); // 800D3D10
  c->r[3]=c->r[31]|c->r[31]; // 800D3D14
  c->lr=0x800D3D1Cu; f_800D3D90(c); // 800D3D18
  c->r[3]=c->r[31]|c->r[31]; // 800D3D1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3D20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3D24
  c->lr=c->r[0]; // 800D3D28
  c->r[1]=c->r[1]+0x00000010u; // 800D3D2C
  return; // 800D3D30
}

// dtor_800D3D34
void f_800D3D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3D34
  c->r[0]=c->lr; // 800D3D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3D40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3D44
  c->r[30]=c->r[3]|c->r[3]; // 800D3D48
  c->r[31]=c->r[4]|c->r[4]; // 800D3D4C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3D50
  if (crb(c,2)) { goto L_800D3D74; } // 800D3D54
  c->r[4]=0u+0xFFFFFFFFu; // 800D3D58
  c->lr=0x800D3D60u; f_800BB850(c); // 800D3D5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D3D60
  cmps(c,0,(int32_t)c->r[0],0); // 800D3D64
  if (!crb(c,1)) { goto L_800D3D74; } // 800D3D68
  c->r[3]=c->r[30]|c->r[30]; // 800D3D6C
  c->lr=0x800D3D74u; f_80047B20(c); // 800D3D70
L_800D3D74:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3D78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3D7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3D80
  c->lr=c->r[0]; // 800D3D84
  c->r[1]=c->r[1]+0x00000010u; // 800D3D88
  return; // 800D3D8C
}

// fn_800D3D90
void f_800D3D90(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D3D90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D3D94
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D3D98
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D3D9C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D3DA0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D3DA4
  f_800BB8D0(c); return; // 800D3DA8
}

// fn_800D3DAC
void f_800D3DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3DAC
  c->r[0]=c->lr; // 800D3DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3DB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3DB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3DBC
  c->r[30]=c->r[3]|c->r[3]; // 800D3DC0
  c->r[31]=c->r[4]|c->r[4]; // 800D3DC4
  c->lr=0x800D3DCCu; f_800A23BC(c); // 800D3DC8
  c->lr=0x800D3DD0u; f_800BB800(c); // 800D3DCC
  c->r[4]=c->r[13]+0xFFFF88B0u; // 800D3DD0
  c->r[5]=0u+0x80460000u; // 800D3DD4
  c->r[5]=c->r[5]+0x00000188u; // 800D3DD8
  c->r[6]=0u+0x00000000u; // 800D3DDC
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3DE0
  c->r[7]=0u+0xFFFFFFFFu; // 800D3DE4
  c->lr=0x800D3DECu; f_800C98E0(c); // 800D3DE8
  W32(c->r[30]+0x00000014u,c->r[3]); // 800D3DEC
  c->lr=0x800D3DF4u; f_800A23BC(c); // 800D3DF0
  c->lr=0x800D3DF8u; f_800BB800(c); // 800D3DF4
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D3DF8
  c->lr=0x800D3E00u; f_800BBD58(c); // 800D3DFC
  c->r[4]=c->r[31]|c->r[31]; // 800D3E00
  c->lr=0x800D3E08u; f_800BCDE8(c); // 800D3E04
  c->lr=0x800D3E0Cu; f_800A23BC(c); // 800D3E08
  c->lr=0x800D3E10u; f_800BB800(c); // 800D3E0C
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D3E10
  c->lr=0x800D3E18u; f_800BBD58(c); // 800D3E14
  c->r[4]=0u+0x00000001u; // 800D3E18
  c->lr=0x800D3E20u; f_800BB958(c); // 800D3E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3E20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3E24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3E28
  c->lr=c->r[0]; // 800D3E2C
  c->r[1]=c->r[1]+0x00000010u; // 800D3E30
  return; // 800D3E34
}

// fn_800D3E38
void f_800D3E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E38
  c->r[0]=c->lr; // 800D3E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3E44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3E48
  c->r[30]=c->r[3]|c->r[3]; // 800D3E4C
  c->r[31]=R32(c->r[3]+0x00000014u); // 800D3E50
  cmps(c,0,(int32_t)c->r[31],0); // 800D3E54
  if (crb(c,2)) { goto L_800D3E74; } // 800D3E58
  c->lr=0x800D3E60u; f_800A23BC(c); // 800D3E5C
  c->lr=0x800D3E64u; f_800BB800(c); // 800D3E60
  c->r[4]=c->r[31]|c->r[31]; // 800D3E64
  c->lr=0x800D3E6Cu; f_800C9ADC(c); // 800D3E68
  c->r[0]=0u+0x00000000u; // 800D3E6C
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D3E70
L_800D3E74:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3E74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3E78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3E7C
  c->lr=c->r[0]; // 800D3E80
  c->r[1]=c->r[1]+0x00000010u; // 800D3E84
  return; // 800D3E88
}

// fn_800D3E8C
void f_800D3E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E8C
  c->r[0]=c->lr; // 800D3E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3E94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3E98
  c->r[31]=c->r[3]|c->r[3]; // 800D3E9C
  c->lr=0x800D3EA4u; f_800BB910(c); // 800D3EA0
  c->r[3]=c->r[31]|c->r[31]; // 800D3EA4
  c->lr=0x800D3EACu; f_800BB904(c); // 800D3EA8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D3EAC
  c->r[3]=0u+0x80460000u; // 800D3EB0
  c->r[0]=c->r[3]+0x00000170u; // 800D3EB4
  c->r[12]=c->r[0]+c->r[4]; // 800D3EB8
  c->r[3]=c->r[31]|c->r[31]; // 800D3EBC
  c->lr=0x800D3EC4u; f_802F09D0(c); // 800D3EC0
  c->r[0]=c->r[0]|0x00000000u; // 800D3EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3EC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3ECC
  c->lr=c->r[0]; // 800D3ED0
  c->r[1]=c->r[1]+0x00000010u; // 800D3ED4
  return; // 800D3ED8
}

// fn_800D3EDC
void f_800D3EDC(Ctx* __restrict c) {
  return; // 800D3EDC
}

// fn_800D3EE0
void f_800D3EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3EE0
  c->r[0]=c->lr; // 800D3EE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3EE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3EEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3EF0
  c->r[30]=c->r[3]|c->r[3]; // 800D3EF4
  c->lr=0x800D3EFCu; f_800BB8EC(c); // 800D3EF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D3EFC
  if (crb(c,2)) { goto L_800D3F9C; } // 800D3F00
  c->r[3]=c->r[1]+0x00000008u; // 800D3F04
  c->lr=0x800D3F0Cu; f_8004B0A4(c); // 800D3F08
  c->lr=0x800D3F10u; f_8006592C(c); // 800D3F0C
  c->r[4]=0u+0x00000107u; // 800D3F10
  c->r[5]=0u+0x00000000u; // 800D3F14
  c->r[6]=0u+0xFFFFFFFFu; // 800D3F18
  c->r[7]=0u+0xFFFFFFFFu; // 800D3F1C
  c->lr=0x800D3F24u; f_80048F20(c); // 800D3F20
  c->lr=0x800D3F28u; f_800A23BC(c); // 800D3F24
  c->lr=0x800D3F2Cu; f_800C23E4(c); // 800D3F28
  c->r[31]=c->r[3]|c->r[3]; // 800D3F2C
  c->lr=0x800D3F34u; f_800A23BC(c); // 800D3F30
  c->r[4]=0u+0x00000000u; // 800D3F34
  c->lr=0x800D3F3Cu; f_800C23EC(c); // 800D3F38
  c->lr=0x800D3F40u; f_800A23BC(c); // 800D3F3C
  c->lr=0x800D3F44u; f_800BB800(c); // 800D3F40
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D3F44
  c->lr=0x800D3F4Cu; f_800BBD58(c); // 800D3F48
  c->r[4]=c->r[1]+0x00000008u; // 800D3F4C
  c->lr=0x800D3F54u; f_800BD664(c); // 800D3F50
  c->lr=0x800D3F58u; f_800A23BC(c); // 800D3F54
  c->lr=0x800D3F5Cu; f_800BB808(c); // 800D3F58
  c->r[4]=c->r[13]+0xFFFF88B8u; // 800D3F5C
  c->r[5]=0u+0x80460000u; // 800D3F60
  c->r[5]=c->r[5]+0x00000198u; // 800D3F64
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3F68
  c->lr=0x800D3F70u; f_800CAF70(c); // 800D3F6C
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D3F70
  c->lr=0x800D3F78u; f_800A23BC(c); // 800D3F74
  c->lr=0x800D3F7Cu; f_800BB808(c); // 800D3F78
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D3F7C
  c->lr=0x800D3F84u; f_800BBC8C(c); // 800D3F80
  c->r[4]=c->r[1]+0x00000008u; // 800D3F84
  c->lr=0x800D3F8Cu; f_800BCDE8(c); // 800D3F88
  c->lr=0x800D3F90u; f_800A23BC(c); // 800D3F8C
  c->r[4]=c->r[31]|c->r[31]; // 800D3F90
  c->lr=0x800D3F98u; f_800C23EC(c); // 800D3F94
  goto L_800D3FE8; // 800D3F98
L_800D3F9C:;
  c->lr=0x800D3FA0u; f_800A23BC(c); // 800D3F9C
  c->lr=0x800D3FA4u; f_800BB808(c); // 800D3FA0
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D3FA4
  c->lr=0x800D3FACu; f_800BBC8C(c); // 800D3FA8
  c->lr=0x800D3FB0u; f_800CADFC(c); // 800D3FAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3FB0
  if (!crb(c,2)) { goto L_800D3FE8; } // 800D3FB4
  c->r[31]=R32(c->r[30]+0x00000018u); // 800D3FB8
  cmps(c,0,(int32_t)c->r[31],0); // 800D3FBC
  if (crb(c,2)) { goto L_800D3FDC; } // 800D3FC0
  c->lr=0x800D3FC8u; f_800A23BC(c); // 800D3FC4
  c->lr=0x800D3FCCu; f_800BB808(c); // 800D3FC8
  c->r[4]=c->r[31]|c->r[31]; // 800D3FCC
  c->lr=0x800D3FD4u; f_800CB00C(c); // 800D3FD0
  c->r[0]=0u+0x00000000u; // 800D3FD4
  W32(c->r[30]+0x00000018u,c->r[0]); // 800D3FD8
L_800D3FDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3FDC
  c->r[4]=0u+0x00000000u; // 800D3FE0
  c->lr=0x800D3FE8u; f_800BB8E4(c); // 800D3FE4
L_800D3FE8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3FE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3FEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3FF0
  c->lr=c->r[0]; // 800D3FF4
  c->r[1]=c->r[1]+0x00000020u; // 800D3FF8
  return; // 800D3FFC
}

// fn_800D4000
void f_800D4000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4000
  c->r[0]=c->lr; // 800D4004
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D400C
  c->r[31]=c->r[3]|c->r[3]; // 800D4010
  c->r[4]=0u+0x80460000u; // 800D4014
  c->r[0]=c->r[4]+0x00000B10u; // 800D4018
  W32(c->r[3]+0x00000044u,c->r[0]); // 800D401C
  c->r[3]=c->r[3]+0x00000004u; // 800D4020
  c->lr=0x800D4028u; f_800BB894(c); // 800D4024
  c->r[3]=c->r[31]|c->r[31]; // 800D4028
  c->lr=0x800D4030u; f_800D43CC(c); // 800D402C
  c->r[3]=c->r[31]|c->r[31]; // 800D4030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4034
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4038
  c->lr=c->r[0]; // 800D403C
  c->r[1]=c->r[1]+0x00000010u; // 800D4040
  return; // 800D4044
}

// fn_800D4048
void f_800D4048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4048
  c->r[0]=c->lr; // 800D404C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4054
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4058
  c->r[30]=c->r[3]|c->r[3]; // 800D405C
  c->lr=0x800D4064u; f_800D4134(c); // 800D4060
  c->r[31]=c->r[3]|c->r[3]; // 800D4064
  cmps(c,0,(int32_t)c->r[3],0); // 800D4068
  if (crb(c,2)) { goto L_800D40F8; } // 800D406C
  c->r[3]=c->r[30]+0x00000004u; // 800D4070
  c->lr=0x800D4078u; f_800BB910(c); // 800D4074
  c->r[3]=c->r[30]+0x00000004u; // 800D4078
  c->lr=0x800D4080u; f_800BB904(c); // 800D407C
  cmpu(c,0,c->r[3],0x00000009u); // 800D4080
  if (crb(c,1)) { goto L_800D40EC; } // 800D4084
  c->r[4]=0u+0x80460000u; // 800D4088
  c->r[4]=c->r[4]+0x00000228u; // 800D408C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D4090
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D4094
  c->ctr=c->r[4]; // 800D4098
  if (true) { switch (c->ctr) { case 0x800D40A0u: goto L_800D40A0; case 0x800D40B0u: goto L_800D40B0; case 0x800D40ECu: goto L_800D40EC; default: break; } dispatch(c,c->ctr); return; } // 800D409C
L_800D40A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D40A0
  c->r[4]=0u+0x00000000u; // 800D40A4
  c->lr=0x800D40ACu; f_800D50A8(c); // 800D40A8
  goto L_800D40F8; // 800D40AC
L_800D40B0:;
  c->lr=0x800D40B4u; f_800A23BC(c); // 800D40B0
  c->lr=0x800D40B8u; f_800A23C4(c); // 800D40B4
  c->r[4]=0u+0x00000000u; // 800D40B8
  c->r[5]=0u+0x000000E4u; // 800D40BC
  c->lr=0x800D40C4u; f_800D8A64(c); // 800D40C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D40C4
  if (crb(c,2)) { goto L_800D40DC; } // 800D40C8
  c->r[3]=c->r[31]|c->r[31]; // 800D40CC
  c->r[4]=0u+0x00000001u; // 800D40D0
  c->lr=0x800D40D8u; f_800D50A8(c); // 800D40D4
  goto L_800D40F8; // 800D40D8
L_800D40DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D40DC
  c->r[4]=0u+0x00000000u; // 800D40E0
  c->lr=0x800D40E8u; f_800D50A8(c); // 800D40E4
  goto L_800D40F8; // 800D40E8
L_800D40EC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D40EC
  c->r[4]=0u+0x00000001u; // 800D40F0
  c->lr=0x800D40F8u; f_800D50A8(c); // 800D40F4
L_800D40F8:;
  c->r[3]=c->r[30]+0x00000004u; // 800D40F8
  c->lr=0x800D4100u; f_800BB904(c); // 800D40FC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D4100
  c->r[3]=0u+0x80460000u; // 800D4104
  c->r[0]=c->r[3]+0x000001A4u; // 800D4108
  c->r[12]=c->r[0]+c->r[4]; // 800D410C
  c->r[3]=c->r[30]|c->r[30]; // 800D4110
  c->lr=0x800D4118u; f_802F09D0(c); // 800D4114
  c->r[0]=c->r[0]|0x00000000u; // 800D4118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D411C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4120
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4124
  c->lr=c->r[0]; // 800D4128
  c->r[1]=c->r[1]+0x00000010u; // 800D412C
  return; // 800D4130
}

// fn_800D4134
void f_800D4134(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4134
  c->r[0]=c->lr; // 800D4138
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D413C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4140
  c->r[31]=R32(c->r[3]+0x00000040u); // 800D4144
  c->r[0]=c->r[31]+0x00010000u; // 800D4148
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D414C
  if (!crb(c,2)) { goto L_800D415C; } // 800D4150
  c->r[3]=0u+0x00000000u; // 800D4154
  goto L_800D4190; // 800D4158
L_800D415C:;
  c->lr=0x800D4160u; f_800A23BC(c); // 800D415C
  c->lr=0x800D4164u; f_800A23B4(c); // 800D4160
  c->r[4]=c->r[31]|c->r[31]; // 800D4164
  c->lr=0x800D416Cu; f_800CF5B4(c); // 800D4168
  c->r[31]=c->r[3]|c->r[3]; // 800D416C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4170
  if (crb(c,2)) { goto L_800D418C; } // 800D4174
  c->lr=0x800D417Cu; f_800D51AC(c); // 800D4178
  cmps(c,0,(int32_t)c->r[3],0); // 800D417C
  if (!crb(c,2)) { goto L_800D418C; } // 800D4180
  c->r[3]=0u+0x00000000u; // 800D4184
  goto L_800D4190; // 800D4188
L_800D418C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D418C
L_800D4190:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4194
  c->lr=c->r[0]; // 800D4198
  c->r[1]=c->r[1]+0x00000010u; // 800D419C
  return; // 800D41A0
}

// fn_800D41A4
void f_800D41A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41A4
  c->r[0]=c->lr; // 800D41A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D41AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D41B0
  c->r[31]=c->r[4]|c->r[4]; // 800D41B4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D41B8
  cmpu(c,0,c->r[0],c->r[4]); // 800D41BC
  if (crb(c,2)) { goto L_800D41DC; } // 800D41C0
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D41C4
  c->lr=0x800D41CCu; f_800D4134(c); // 800D41C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D41CC
  if (crb(c,2)) { goto L_800D41DC; } // 800D41D0
  c->r[4]=c->r[31]|c->r[31]; // 800D41D4
  c->lr=0x800D41DCu; f_800D4E0C(c); // 800D41D8
L_800D41DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D41DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41E0
  c->lr=c->r[0]; // 800D41E4
  c->r[1]=c->r[1]+0x00000010u; // 800D41E8
  return; // 800D41EC
}

// fn_800D41F0
void f_800D41F0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],2); // 800D41F0
  if (crb(c,1)) { goto L_800D4200; } // 800D41F4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D41F8
  c->r[4]=c->r[4]+0x0000000Cu; // 800D41FC
L_800D4200:;
  c->r[6]=0u+0x51EC0000u; // 800D4200
  c->r[0]=c->r[6]+0xFFFF851Fu; // 800D4204
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800D4208
  c->r[0]=sraw(c,c->r[0],5); // 800D420C
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800D4210
  c->r[7]=c->r[0]+c->r[6]; // 800D4214
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D4218
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)365); // 800D421C
  c->r[6]=sraw(c,c->r[7],2); // 800D4220
  c->r[0]=sraw(c,c->r[3],2); // 800D4224
  c->r[7]=c->r[0]-c->r[7]; // 800D4228
  c->r[6]=c->r[8]+c->r[6]; // 800D422C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)979); // 800D4230
  c->r[0]=c->r[3]+0xFFFFFBF7u; // 800D4234
  c->r[0]=sraw(c,c->r[0],5); // 800D4238
  c->r[3]=c->r[5]+c->r[0]; // 800D423C
  c->r[0]=c->r[7]+c->r[6]; // 800D4240
  c->r[3]=c->r[0]+c->r[3]; // 800D4244
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D4248
  return; // 800D424C
}

// fn_800D4250
void f_800D4250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4250
  c->r[0]=c->lr; // 800D4254
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4258
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D425C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D4260
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D4264
  c->r[29]=c->r[3]|c->r[3]; // 800D4268
  c->r[31]=c->r[4]|c->r[4]; // 800D426C
  c->r[3]=c->r[1]+0x00000008u; // 800D4270
  c->lr=0x800D4278u; f_8005BA88(c); // 800D4274
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 800D4278
  c->r[4]=R32(c->r[29]+0x00000028u); // 800D427C
  c->r[4]=c->r[4]+0x00000001u; // 800D4280
  c->r[5]=R32(c->r[29]+0x00000024u); // 800D4284
  c->r[5]=c->r[5]+0x00000001u; // 800D4288
  c->lr=0x800D4290u; f_800D41F0(c); // 800D428C
  c->r[30]=c->r[3]|c->r[3]; // 800D4290
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800D4294
  c->r[4]=R32(c->r[1]+0x00000018u); // 800D4298
  c->r[4]=c->r[4]+0x00000001u; // 800D429C
  c->r[5]=R32(c->r[1]+0x00000014u); // 800D42A0
  c->r[5]=c->r[5]+0x00000001u; // 800D42A4
  c->lr=0x800D42ACu; f_800D41F0(c); // 800D42A8
  c->r[0]=c->r[3]-c->r[30]; // 800D42AC
  cmps(c,0,(int32_t)c->r[0],1); // 800D42B0
  if (!crb(c,1)) { goto L_800D42C0; } // 800D42B4
  c->r[3]=0u+0x00000001u; // 800D42B8
  goto L_800D432C; // 800D42BC
L_800D42C0:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 800D42C0
  if (crb(c,0)) { goto L_800D4328; } // 800D42C4
  c->r[5]=R32(c->r[29]+0x00000018u); // 800D42C8
  c->r[0]=R32(c->r[29]+0x00000020u); // 800D42CC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 800D42D0
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D42D4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800D42D8
  c->r[0]=c->r[5]+c->r[4]; // 800D42DC
  c->r[6]=c->r[3]+c->r[0]; // 800D42E0
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D42E4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D42E8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 800D42EC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D42F0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800D42F4
  c->r[0]=c->r[5]+c->r[4]; // 800D42F8
  c->r[3]=c->r[3]+c->r[0]; // 800D42FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[6]); // 800D4300
  if (!crb(c,0)) { goto L_800D4310; } // 800D4304
  c->r[3]=c->r[3]+0x00010000u; // 800D4308
  c->r[3]=c->r[3]+0x00005180u; // 800D430C
L_800D4310:;
  c->r[3]=c->r[3]-c->r[6]; // 800D4310
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)60); // 800D4314
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D4318
  if (crb(c,0)) { goto L_800D4328; } // 800D431C
  c->r[3]=0u+0x00000001u; // 800D4320
  goto L_800D432C; // 800D4324
L_800D4328:;
  c->r[3]=0u+0x00000000u; // 800D4328
L_800D432C:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D432C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D4330
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D4334
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D4338
  c->lr=c->r[0]; // 800D433C
  c->r[1]=c->r[1]+0x00000040u; // 800D4340
  return; // 800D4344
}

// fn_800D4348
void f_800D4348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4348
  c->r[0]=c->lr; // 800D434C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4354
  c->r[31]=c->r[3]|c->r[3]; // 800D4358
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D435C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4360
  cmps(c,0,(int32_t)c->r[0],0); // 800D4364
  if (!crb(c,2)) { goto L_800D4380; } // 800D4368
  c->r[3]=c->r[3]+0x00000018u; // 800D436C
  c->lr=0x800D4374u; f_8005BA88(c); // 800D4370
  c->r[0]=R32(c->r[31]+0x00000000u); // 800D4374
  c->r[0]=c->r[0]|0x00000001u; // 800D4378
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D437C
L_800D4380:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4380
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4384
  c->lr=c->r[0]; // 800D4388
  c->r[1]=c->r[1]+0x00000010u; // 800D438C
  return; // 800D4390
}

// fn_800D4394
void f_800D4394(Ctx* __restrict c) {
  W32(c->r[3]+0x00000040u,c->r[4]); // 800D4394
  c->r[4]=R32(c->r[3]+0x00000010u); // 800D4398
  cmps(c,0,(int32_t)c->r[4],0); // 800D439C
  if (!crb(c,2)) { goto L_800D43B4; } // 800D43A0
  c->r[4]=0u+0x00000001u; // 800D43A4
  c->r[0]=0u+0x00000000u; // 800D43A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D43AC
  goto L_800D43BC; // 800D43B0
L_800D43B4:;
  c->r[0]=0u+0x00000000u; // 800D43B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D43B8
L_800D43BC:;
  f_800D41A4(c); return; // 800D43BC
}

// fn_800D43C0
void f_800D43C0(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 800D43C0
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D43C4
  return; // 800D43C8
}

// fn_800D43CC
void f_800D43CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D43CC
  c->r[0]=c->lr; // 800D43D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D43D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D43D8
  c->r[31]=c->r[3]|c->r[3]; // 800D43DC
  c->r[4]=0u+0x00000000u; // 800D43E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D43E4
  W32(c->r[3]+0x00000014u,c->r[4]); // 800D43E8
  c->r[0]=0u+0xFFFFFFFFu; // 800D43EC
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D43F0
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D43F4
  c->r[3]=c->r[3]+0x00000004u; // 800D43F8
  c->lr=0x800D4400u; f_800BB8D0(c); // 800D43FC
  c->r[3]=c->r[31]+0x00000004u; // 800D4400
  c->r[4]=0u+0x00000000u; // 800D4404
  c->lr=0x800D440Cu; f_800BB8E4(c); // 800D4408
  c->r[3]=c->r[31]+0x00000004u; // 800D440C
  c->lr=0x800D4414u; f_800BB910(c); // 800D4410
  c->r[3]=c->r[31]+0x00000018u; // 800D4414
  c->r[4]=0u+0x00000000u; // 800D4418
  c->r[5]=0u+0x00000028u; // 800D441C
  c->lr=0x800D4424u; f_800060B8(c); // 800D4420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4424
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4428
  c->lr=c->r[0]; // 800D442C
  c->r[1]=c->r[1]+0x00000010u; // 800D4430
  return; // 800D4434
}

// fn_800D4438
void f_800D4438(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 800D4438
  c->r[4]=0u+0x00000001u; // 800D443C
  f_800BB8E4(c); return; // 800D4440
}

// fn_800D4444
void f_800D4444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4444
  c->r[0]=c->lr; // 800D4448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D444C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4450
  c->r[31]=c->r[3]|c->r[3]; // 800D4454
  c->r[4]=0u+0x00000001u; // 800D4458
  c->lr=0x800D4460u; f_800D41A4(c); // 800D445C
  c->r[3]=c->r[31]+0x00000004u; // 800D4460
  c->r[4]=0u+0x00000002u; // 800D4464
  c->lr=0x800D446Cu; f_800BB8E4(c); // 800D4468
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D446C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4470
  c->lr=c->r[0]; // 800D4474
  c->r[1]=c->r[1]+0x00000010u; // 800D4478
  return; // 800D447C
}

// fn_800D4480
void f_800D4480(Ctx* __restrict c) {
  return; // 800D4480
}

// fn_800D4484
void f_800D4484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4484
  c->r[0]=c->lr; // 800D4488
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D448C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4490
  c->r[31]=c->r[3]|c->r[3]; // 800D4494
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4498
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D449C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D44A0
  c->lr=0x800D44A8u; f_8006592C(c); // 800D44A4
  c->r[4]=0u+0x00000105u; // 800D44A8
  c->r[5]=0u+0x00000000u; // 800D44AC
  c->r[6]=0u+0xFFFFFFFFu; // 800D44B0
  c->r[7]=0u+0xFFFFFFFFu; // 800D44B4
  c->lr=0x800D44BCu; f_80048F20(c); // 800D44B8
  c->lr=0x800D44C0u; f_800A23BC(c); // 800D44BC
  c->lr=0x800D44C4u; f_800A23B4(c); // 800D44C0
  c->lr=0x800D44C8u; f_800CF5C4(c); // 800D44C4
  W32(c->r[31]+0x00000014u,c->r[3]); // 800D44C8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800D44CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D44D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D44D4
  c->r[3]=c->r[31]|c->r[31]; // 800D44D8
  c->r[4]=0u+0x00000002u; // 800D44DC
  c->lr=0x800D44E4u; f_800D41A4(c); // 800D44E0
  c->r[3]=c->r[31]+0x00000004u; // 800D44E4
  c->r[4]=0u+0x00000004u; // 800D44E8
  c->lr=0x800D44F0u; f_800BB8E4(c); // 800D44EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D44F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D44F4
  c->lr=c->r[0]; // 800D44F8
  c->r[1]=c->r[1]+0x00000010u; // 800D44FC
  return; // 800D4500
}

// fn_800D4504
void f_800D4504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4504
  c->r[0]=c->lr; // 800D4508
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D450C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4510
  c->r[31]=c->r[3]|c->r[3]; // 800D4514
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4518
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D451C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4520
  if (crb(c,2)) { goto L_800D4558; } // 800D4524
  c->lr=0x800D452Cu; f_800A23BC(c); // 800D4528
  c->lr=0x800D4530u; f_800A23B4(c); // 800D452C
  c->lr=0x800D4534u; f_800CF5CC(c); // 800D4530
  c->lr=0x800D4538u; f_800D5334(c); // 800D4534
  c->r[4]=c->r[3]|c->r[3]; // 800D4538
  c->r[3]=c->r[31]|c->r[31]; // 800D453C
  c->lr=0x800D4544u; f_800D4250(c); // 800D4540
  cmps(c,0,(int32_t)c->r[3],0); // 800D4544
  if (crb(c,2)) { goto L_800D4558; } // 800D4548
  c->r[3]=c->r[31]+0x00000004u; // 800D454C
  c->r[4]=0u+0x00000005u; // 800D4550
  c->lr=0x800D4558u; f_800BB8E4(c); // 800D4554
L_800D4558:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4558
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D455C
  c->lr=c->r[0]; // 800D4560
  c->r[1]=c->r[1]+0x00000010u; // 800D4564
  return; // 800D4568
}

// fn_800D456C
void f_800D456C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D456C
  c->r[0]=c->lr; // 800D4570
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4578
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D457C
  c->r[30]=c->r[3]|c->r[3]; // 800D4580
  c->lr=0x800D4588u; f_800D4134(c); // 800D4584
  c->r[31]=c->r[3]|c->r[3]; // 800D4588
  c->r[3]=c->r[30]+0x00000004u; // 800D458C
  c->lr=0x800D4594u; f_800BB8EC(c); // 800D4590
  cmps(c,0,(int32_t)c->r[3],0); // 800D4594
  if (crb(c,2)) { goto L_800D45BC; } // 800D4598
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D459C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D45A0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D45A4
  cmps(c,0,(int32_t)c->r[31],0); // 800D45A8
  if (crb(c,2)) { goto L_800D45EC; } // 800D45AC
  c->r[3]=c->r[31]|c->r[31]; // 800D45B0
  c->lr=0x800D45B8u; f_800D5130(c); // 800D45B4
  goto L_800D45EC; // 800D45B8
L_800D45BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D45BC
  if (crb(c,2)) { goto L_800D45D4; } // 800D45C0
  c->r[3]=c->r[31]|c->r[31]; // 800D45C4
  c->lr=0x800D45CCu; f_800D51C4(c); // 800D45C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D45CC
  if (!crb(c,2)) { goto L_800D45EC; } // 800D45D0
L_800D45D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D45D4
  c->r[4]=0u+0x00000003u; // 800D45D8
  c->lr=0x800D45E0u; f_800D41A4(c); // 800D45DC
  c->r[3]=c->r[30]+0x00000004u; // 800D45E0
  c->r[4]=0u+0x00000006u; // 800D45E4
  c->lr=0x800D45ECu; f_800BB8E4(c); // 800D45E8
L_800D45EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D45EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D45F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D45F4
  c->lr=c->r[0]; // 800D45F8
  c->r[1]=c->r[1]+0x00000010u; // 800D45FC
  return; // 800D4600
}

// fn_800D4604
void f_800D4604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4604
  c->r[0]=c->lr; // 800D4608
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D460C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4610
  c->r[31]=c->r[3]|c->r[3]; // 800D4614
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4618
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D461C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4620
  if (crb(c,2)) { goto L_800D4658; } // 800D4624
  c->lr=0x800D462Cu; f_800A23BC(c); // 800D4628
  c->lr=0x800D4630u; f_800A23B4(c); // 800D462C
  c->lr=0x800D4634u; f_800CF5CC(c); // 800D4630
  c->lr=0x800D4638u; f_800D5334(c); // 800D4634
  c->r[4]=c->r[3]|c->r[3]; // 800D4638
  c->r[3]=c->r[31]|c->r[31]; // 800D463C
  c->lr=0x800D4644u; f_800D4250(c); // 800D4640
  cmps(c,0,(int32_t)c->r[3],0); // 800D4644
  if (crb(c,2)) { goto L_800D4658; } // 800D4648
  c->r[3]=c->r[31]+0x00000004u; // 800D464C
  c->r[4]=0u+0x00000007u; // 800D4650
  c->lr=0x800D4658u; f_800BB8E4(c); // 800D4654
L_800D4658:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4658
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D465C
  c->lr=c->r[0]; // 800D4660
  c->r[1]=c->r[1]+0x00000010u; // 800D4664
  return; // 800D4668
}

// fn_800D466C
void f_800D466C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D466C
  c->r[0]=c->lr; // 800D4670
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4678
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D467C
  c->r[30]=c->r[3]|c->r[3]; // 800D4680
  c->lr=0x800D4688u; f_800D4134(c); // 800D4684
  c->r[31]=c->r[3]|c->r[3]; // 800D4688
  c->r[3]=c->r[30]+0x00000004u; // 800D468C
  c->lr=0x800D4694u; f_800BB8EC(c); // 800D4690
  cmps(c,0,(int32_t)c->r[3],0); // 800D4694
  if (crb(c,2)) { goto L_800D46BC; } // 800D4698
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D469C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D46A0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D46A4
  cmps(c,0,(int32_t)c->r[31],0); // 800D46A8
  if (crb(c,2)) { goto L_800D46EC; } // 800D46AC
  c->r[3]=c->r[31]|c->r[31]; // 800D46B0
  c->lr=0x800D46B8u; f_800D5130(c); // 800D46B4
  goto L_800D46EC; // 800D46B8
L_800D46BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D46BC
  if (crb(c,2)) { goto L_800D46D4; } // 800D46C0
  c->r[3]=c->r[31]|c->r[31]; // 800D46C4
  c->lr=0x800D46CCu; f_800D51C4(c); // 800D46C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D46CC
  if (!crb(c,2)) { goto L_800D46EC; } // 800D46D0
L_800D46D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D46D4
  c->r[4]=0u+0x00000004u; // 800D46D8
  c->lr=0x800D46E0u; f_800D41A4(c); // 800D46DC
  c->r[3]=c->r[30]+0x00000004u; // 800D46E0
  c->r[4]=0u+0x00000008u; // 800D46E4
  c->lr=0x800D46ECu; f_800BB8E4(c); // 800D46E8
L_800D46EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D46EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D46F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D46F4
  c->lr=c->r[0]; // 800D46F8
  c->r[1]=c->r[1]+0x00000010u; // 800D46FC
  return; // 800D4700
}

// fn_800D4704
void f_800D4704(Ctx* __restrict c) {
  return; // 800D4704
}

// fn_800D4708
void f_800D4708(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4708
  c->r[0]=c->lr; // 800D470C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4714
  c->r[31]=c->r[3]|c->r[3]; // 800D4718
  c->lr=0x800D4720u; f_8006592C(c); // 800D471C
  c->r[4]=0u+0x00000106u; // 800D4720
  c->r[5]=0u+0x00000000u; // 800D4724
  c->r[6]=0u+0xFFFFFFFFu; // 800D4728
  c->r[7]=0u+0xFFFFFFFFu; // 800D472C
  c->lr=0x800D4734u; f_80048F20(c); // 800D4730
  c->r[3]=c->r[31]|c->r[31]; // 800D4734
  c->r[4]=0u+0x00000001u; // 800D4738
  c->lr=0x800D4740u; f_800D41A4(c); // 800D473C
  c->r[3]=c->r[31]+0x00000004u; // 800D4740
  c->r[4]=0u+0x0000000Au; // 800D4744
  c->lr=0x800D474Cu; f_800BB8E4(c); // 800D4748
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D474C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4750
  c->lr=c->r[0]; // 800D4754
  c->r[1]=c->r[1]+0x00000010u; // 800D4758
  return; // 800D475C
}

// fn_800D4760
void f_800D4760(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 800D4760
  c->r[4]=0u+0x00000000u; // 800D4764
  f_800BB8E4(c); return; // 800D4768
}

// fn_800D476C
void f_800D476C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D476C
  c->r[0]=c->lr; // 800D4770
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4778
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D477C
  c->r[30]=c->r[3]|c->r[3]; // 800D4780
  c->r[31]=c->r[4]|c->r[4]; // 800D4784
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D4788
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D478C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D4790
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D4794
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D4798
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D479C
  c->r[3]=c->r[3]+0x00000018u; // 800D47A0
  c->r[4]=c->r[4]+0x00000014u; // 800D47A4
  c->lr=0x800D47ACu; f_800D47E8(c); // 800D47A8
  c->r[0]=R32(c->r[31]+0x00000010u); // 800D47AC
  W32(c->r[30]+0x00000040u,c->r[0]); // 800D47B0
  c->r[3]=c->r[30]+0x00000004u; // 800D47B4
  c->lr=0x800D47BCu; f_800BB8D0(c); // 800D47B8
  c->r[3]=c->r[30]+0x00000004u; // 800D47BC
  c->r[4]=R32(c->r[31]+0x00000004u); // 800D47C0
  c->lr=0x800D47C8u; f_800BB8E4(c); // 800D47C4
  c->r[3]=c->r[30]+0x00000004u; // 800D47C8
  c->lr=0x800D47D0u; f_800BB910(c); // 800D47CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D47D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D47D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D47D8
  c->lr=c->r[0]; // 800D47DC
  c->r[1]=c->r[1]+0x00000010u; // 800D47E0
  return; // 800D47E4
}

// fn_800D47E8
void f_800D47E8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D47E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D47EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D47F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D47F4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D47F8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D47FC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D4800
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D4804
  c->r[0]=R32(c->r[4]+0x00000010u); // 800D4808
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D480C
  c->r[0]=R32(c->r[4]+0x00000014u); // 800D4810
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D4814
  c->r[0]=R32(c->r[4]+0x00000018u); // 800D4818
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D481C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800D4820
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D4824
  c->r[0]=R32(c->r[4]+0x00000020u); // 800D4828
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D482C
  c->r[0]=R32(c->r[4]+0x00000024u); // 800D4830
  W32(c->r[3]+0x00000024u,c->r[0]); // 800D4834
  return; // 800D4838
}

// fn_800D483C
void f_800D483C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D483C
  c->r[0]=c->lr; // 800D4840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4848
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D484C
  c->r[30]=c->r[3]|c->r[3]; // 800D4850
  c->r[31]=c->r[4]|c->r[4]; // 800D4854
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4858
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D485C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D4860
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D4864
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D4868
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D486C
  c->r[3]=c->r[4]+0x00000014u; // 800D4870
  c->r[4]=c->r[30]+0x00000018u; // 800D4874
  c->lr=0x800D487Cu; f_800D47E8(c); // 800D4878
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D487C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D4880
  c->r[3]=c->r[30]+0x00000004u; // 800D4884
  c->lr=0x800D488Cu; f_800BB904(c); // 800D4888
  W32(c->r[31]+0x00000004u,c->r[3]); // 800D488C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4890
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4894
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4898
  c->lr=c->r[0]; // 800D489C
  c->r[1]=c->r[1]+0x00000010u; // 800D48A0
  return; // 800D48A4
}

// fn_800D48A8
void f_800D48A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D48A8
  c->r[0]=c->lr; // 800D48AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D48B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D48B4
  c->r[31]=c->r[3]|c->r[3]; // 800D48B8
  c->r[4]=0u+0x80460000u; // 800D48BC
  c->r[0]=c->r[4]+0x00000B28u; // 800D48C0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800D48C4
  c->r[3]=c->r[3]+0x00000024u; // 800D48C8
  c->lr=0x800D48D0u; f_8004B0A4(c); // 800D48CC
  c->r[3]=c->r[31]|c->r[31]; // 800D48D0
  c->lr=0x800D48D8u; f_800D4934(c); // 800D48D4
  c->r[3]=c->r[31]|c->r[31]; // 800D48D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D48DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D48E0
  c->lr=c->r[0]; // 800D48E4
  c->r[1]=c->r[1]+0x00000010u; // 800D48E8
  return; // 800D48EC
}

// dtor_800D48F0
void f_800D48F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D48F0
  c->r[0]=c->lr; // 800D48F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D48F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D48FC
  c->r[31]=c->r[3]|c->r[3]; // 800D4900
  cmps(c,0,(int32_t)c->r[3],0); // 800D4904
  if (crb(c,2)) { goto L_800D491C; } // 800D4908
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800D490C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4910
  if (!crb(c,1)) { goto L_800D491C; } // 800D4914
  c->lr=0x800D491Cu; f_80047B20(c); // 800D4918
L_800D491C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D491C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4920
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4924
  c->lr=c->r[0]; // 800D4928
  c->r[1]=c->r[1]+0x00000010u; // 800D492C
  return; // 800D4930
}

// fn_800D4934
void f_800D4934(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D4934
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D4938
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D493C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D4940
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4944
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D4948
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D494C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D4950
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D4954
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D4958
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D495C
  c->r[3]=c->r[3]+0x00000024u; // 800D4960
  c->r[4]=0u+0x804C0000u; // 800D4964
  c->r[4]=c->r[4]+0x000024A0u; // 800D4968
  f_8004A65C(c); return; // 800D496C
}

// fn_800D4970
void f_800D4970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4970
  c->r[0]=c->lr; // 800D4974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D497C
  c->r[31]=c->r[3]|c->r[3]; // 800D4980
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4984
  c->r[0]=c->r[0]|0x00000001u; // 800D4988
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D498C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D4990
  c->r[3]=c->r[3]+0x00000024u; // 800D4994
  c->lr=0x800D499Cu; f_8004A65C(c); // 800D4998
  c->r[0]=0u+0x00000000u; // 800D499C
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D49A0
  c->lr=0x800D49A8u; f_800A23BC(c); // 800D49A4
  c->lr=0x800D49ACu; f_800A23B4(c); // 800D49A8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D49AC
  c->lr=0x800D49B4u; f_800CF5D4(c); // 800D49B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D49B4
  if (crb(c,2)) { goto L_800D49C4; } // 800D49B8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D49BC
  c->lr=0x800D49C4u; f_800D4394(c); // 800D49C0
L_800D49C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D49C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D49C8
  c->lr=c->r[0]; // 800D49CC
  c->r[1]=c->r[1]+0x00000010u; // 800D49D0
  return; // 800D49D4
}

// fn_800D49D8
void f_800D49D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D49D8
  c->r[0]=c->lr; // 800D49DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D49E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D49E4
  c->r[31]=c->r[3]|c->r[3]; // 800D49E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D49EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D49F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D49F4
  c->r[4]=0u+0x00000000u; // 800D49F8
  c->lr=0x800D4A00u; f_800D4C64(c); // 800D49FC
  c->r[3]=c->r[31]|c->r[31]; // 800D4A00
  c->r[4]=0u+0x00000001u; // 800D4A04
  c->lr=0x800D4A0Cu; f_800D4C64(c); // 800D4A08
  c->r[3]=c->r[31]|c->r[31]; // 800D4A0C
  c->r[4]=0u+0x00000002u; // 800D4A10
  c->lr=0x800D4A18u; f_800D4C64(c); // 800D4A14
  c->r[3]=c->r[31]|c->r[31]; // 800D4A18
  c->r[4]=0u+0x00000003u; // 800D4A1C
  c->lr=0x800D4A24u; f_800D4C64(c); // 800D4A20
  c->lr=0x800D4A28u; f_800A23BC(c); // 800D4A24
  c->lr=0x800D4A2Cu; f_800A23B4(c); // 800D4A28
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D4A2C
  c->lr=0x800D4A34u; f_800CF5D4(c); // 800D4A30
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A34
  if (crb(c,2)) { goto L_800D4A40; } // 800D4A38
  c->lr=0x800D4A40u; f_800D43C0(c); // 800D4A3C
L_800D4A40:;
  c->lr=0x800D4A44u; f_800A23BC(c); // 800D4A40
  c->lr=0x800D4A48u; f_800BB808(c); // 800D4A44
  c->r[4]=R32(c->r[31]+0x00000008u); // 800D4A48
  c->lr=0x800D4A50u; f_800C0D08(c); // 800D4A4C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A50
  if (crb(c,2)) { goto L_800D4A68; } // 800D4A54
  c->lr=0x800D4A5Cu; f_800A23BC(c); // 800D4A58
  c->lr=0x800D4A60u; f_800BB808(c); // 800D4A5C
  c->r[4]=R32(c->r[31]+0x00000008u); // 800D4A60
  c->lr=0x800D4A68u; f_800CB00C(c); // 800D4A64
L_800D4A68:;
  c->r[0]=0u+0x00000000u; // 800D4A68
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D4A6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4A74
  c->lr=c->r[0]; // 800D4A78
  c->r[1]=c->r[1]+0x00000010u; // 800D4A7C
  return; // 800D4A80
}

// fn_800D4A84
void f_800D4A84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4A84
  c->r[0]=c->lr; // 800D4A88
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800D4A8C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800D4A90
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800D4A94
  c->r[11]=c->r[1]+0x000000B0u; // 800D4A98
  c->lr=0x800D4AA0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4A9C
  c->r[29]=c->r[3]|c->r[3]; // 800D4AA0
  c->r[30]=c->r[4]|c->r[4]; // 800D4AA4
  c->r[31]=c->r[5]|c->r[5]; // 800D4AA8
  c->r[3]=c->r[1]+0x00000018u; // 800D4AAC
  c->lr=0x800D4AB4u; f_8004B0A4(c); // 800D4AB0
  c->r[3]=0u+0x80430000u; // 800D4AB4
  c->r[4]=c->r[3]+0xFFFFD698u; // 800D4AB8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D4ABC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D4AC0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D4AC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D4AC8
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D4ACC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D4AD0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D4AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4AD8
  c->r[3]=0u+0x80430000u; // 800D4ADC
  c->r[4]=c->r[3]+0xFFFFD6A8u; // 800D4AE0
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D4AE4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D4AE8
  W32(c->r[1]+0x00000024u,c->r[3]); // 800D4AEC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D4AF0
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D4AF4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D4AF8
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800D4AFC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800D4B00
  c->r[3]=R32(c->r[4]+0x00000010u); // 800D4B04
  c->r[0]=R32(c->r[4]+0x00000014u); // 800D4B08
  W32(c->r[1]+0x00000034u,c->r[3]); // 800D4B0C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800D4B10
  c->r[3]=R32(c->r[4]+0x00000018u); // 800D4B14
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800D4B18
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800D4B1C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800D4B20
  c->r[3]=R32(c->r[4]+0x00000020u); // 800D4B24
  c->r[0]=R32(c->r[4]+0x00000024u); // 800D4B28
  W32(c->r[1]+0x00000044u,c->r[3]); // 800D4B2C
  W32(c->r[1]+0x00000048u,c->r[0]); // 800D4B30
  c->r[0]=R32(c->r[4]+0x00000028u); // 800D4B34
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800D4B38
  c->r[28]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800D4B3C
  c->r[26]=c->r[29]+c->r[28]; // 800D4B40
  c->r[0]=R32(c->r[26]+0x00000014u); // 800D4B44
  cmps(c,0,(int32_t)c->r[0],0); // 800D4B48
  if (!crb(c,2)) { goto L_800D4C40; } // 800D4B4C
  c->lr=0x800D4B54u; f_800A23BC(c); // 800D4B50
  c->lr=0x800D4B58u; f_800A23B4(c); // 800D4B54
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D4B58
  c->lr=0x800D4B60u; f_800CF5D4(c); // 800D4B5C
  c->r[27]=c->r[3]|c->r[3]; // 800D4B60
  c->r[3]=c->r[1]+0x00000050u; // 800D4B64
  c->r[4]=c->r[1]+0x00000008u; // 800D4B68
  c->r[4]=R32(c->r[4]+c->r[28]); // 800D4B6C
  c->r[5]=R32(c->r[29]+0x00000000u); // 800D4B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4B74
  c->lr=0x800D4B7Cu; f_802E7CC4(c); // 800D4B78
  cmpu(c,0,c->r[30],0x00000003u); // 800D4B7C
  if (!crb(c,2)) { goto L_800D4B94; } // 800D4B80
  c->r[3]=c->r[27]|c->r[27]; // 800D4B84
  c->lr=0x800D4B8Cu; f_800D51DC(c); // 800D4B88
  c->r[27]=c->r[3]+0x00000003u; // 800D4B8C
  goto L_800D4B98; // 800D4B90
L_800D4B94:;
  c->r[27]=c->r[30]|c->r[30]; // 800D4B94
L_800D4B98:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D4B98
  if (!crb(c,2)) { goto L_800D4BA8; } // 800D4B9C
  {uint32_t ea=c->r[2]+0xFFFF88E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D4BA0
  goto L_800D4BAC; // 800D4BA4
L_800D4BA8:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D4BA8
L_800D4BAC:;
  c->r[28]=c->r[29]+c->r[28]; // 800D4BAC
  c->lr=0x800D4BB4u; f_800A23BC(c); // 800D4BB0
  c->lr=0x800D4BB8u; f_800BB800(c); // 800D4BB4
  c->r[4]=c->r[1]+0x00000050u; // 800D4BB8
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800D4BBC
  c->r[5]=c->r[1]+0x00000024u; // 800D4BC0
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D4BC4
  c->r[6]=0u+0x00000000u; // 800D4BC8
  c->f[1]=c->f[31]; // 800D4BCC
  c->r[7]=0u+0xFFFFFFFFu; // 800D4BD0
  c->lr=0x800D4BD8u; f_800C98E0(c); // 800D4BD4
  W32(c->r[28]+0x00000014u,c->r[3]); // 800D4BD8
  c->lr=0x800D4BE0u; f_800A23BC(c); // 800D4BDC
  c->lr=0x800D4BE4u; f_800BB800(c); // 800D4BE0
  c->r[4]=R32(c->r[28]+0x00000014u); // 800D4BE4
  c->lr=0x800D4BECu; f_800BBD58(c); // 800D4BE8
  c->r[4]=c->r[29]+0x00000024u; // 800D4BEC
  c->lr=0x800D4BF4u; f_800BCDE8(c); // 800D4BF0
  c->lr=0x800D4BF8u; f_800A23BC(c); // 800D4BF4
  c->lr=0x800D4BFCu; f_800BB800(c); // 800D4BF8
  c->r[4]=R32(c->r[28]+0x00000014u); // 800D4BFC
  c->lr=0x800D4C04u; f_800BBD58(c); // 800D4C00
  c->r[4]=c->r[31]|c->r[31]; // 800D4C04
  c->lr=0x800D4C0Cu; f_800BB958(c); // 800D4C08
  c->lr=0x800D4C10u; f_800A23BC(c); // 800D4C0C
  c->lr=0x800D4C14u; f_800BB800(c); // 800D4C10
  c->r[4]=R32(c->r[28]+0x00000014u); // 800D4C14
  c->lr=0x800D4C1Cu; f_800BBD58(c); // 800D4C18
  c->lr=0x800D4C20u; f_800C9FD0(c); // 800D4C1C
  cmps(c,0,(int32_t)c->r[30],0); // 800D4C20
  if (!crb(c,2)) { goto L_800D4C40; } // 800D4C24
  c->lr=0x800D4C2Cu; f_800A23BC(c); // 800D4C28
  c->lr=0x800D4C30u; f_800BB800(c); // 800D4C2C
  c->r[4]=R32(c->r[26]+0x00000014u); // 800D4C30
  c->lr=0x800D4C38u; f_800BBD58(c); // 800D4C34
  c->r[4]=0u+0x00000001u; // 800D4C38
  c->lr=0x800D4C40u; f_800BE2D0(c); // 800D4C3C
L_800D4C40:;
  c->r[0]=0u+0x000000B8u; // 800D4C40
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D4C44
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800D4C48
  c->r[11]=c->r[1]+0x000000B0u; // 800D4C4C
  c->lr=0x800D4C54u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4C50
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D4C54
  c->lr=c->r[0]; // 800D4C58
  c->r[1]=c->r[1]+0x000000C0u; // 800D4C5C
  return; // 800D4C60
}

// fn_800D4C64
void f_800D4C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C64
  c->r[0]=c->lr; // 800D4C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4C6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4C70
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D4C74
  c->r[31]=c->r[3]+c->r[0]; // 800D4C78
  c->lr=0x800D4C80u; f_800A23BC(c); // 800D4C7C
  c->lr=0x800D4C84u; f_800BB800(c); // 800D4C80
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D4C84
  c->lr=0x800D4C8Cu; f_800C1284(c); // 800D4C88
  cmps(c,0,(int32_t)c->r[3],0); // 800D4C8C
  if (crb(c,2)) { goto L_800D4CA4; } // 800D4C90
  c->lr=0x800D4C98u; f_800A23BC(c); // 800D4C94
  c->lr=0x800D4C9Cu; f_800BB800(c); // 800D4C98
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D4C9C
  c->lr=0x800D4CA4u; f_800C9ADC(c); // 800D4CA0
L_800D4CA4:;
  c->r[0]=0u+0x00000000u; // 800D4CA4
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D4CA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4CAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4CB0
  c->lr=c->r[0]; // 800D4CB4
  c->r[1]=c->r[1]+0x00000010u; // 800D4CB8
  return; // 800D4CBC
}

// fn_800D4CC0
void f_800D4CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4CC0
  c->r[0]=c->lr; // 800D4CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4CC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4CCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4CD0
  c->r[30]=c->r[3]|c->r[3]; // 800D4CD4
  c->r[3]=0u+0x00000001u; // 800D4CD8
  c->lr=0x800D4CE0u; f_8005D714(c); // 800D4CDC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4CE0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D4CE4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 800D4CE8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4CEC
  fcmp(c,0,c->f[1],c->f[0]); // 800D4CF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D4CF4
  if (!crb(c,2)) { goto L_800D4D00; } // 800D4CF8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D4CFC
L_800D4D00:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800D4D00
  c->r[0]=c->r[3]+0x00010000u; // 800D4D04
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D4D08
  if (crb(c,2)) { goto L_800D4DA8; } // 800D4D0C
  c->lr=0x800D4D14u; f_800A23BC(c); // 800D4D10
  c->lr=0x800D4D18u; f_800BB800(c); // 800D4D14
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D4D18
  c->lr=0x800D4D20u; f_800C1284(c); // 800D4D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D20
  if (crb(c,2)) { goto L_800D4DA8; } // 800D4D24
  c->lr=0x800D4D2Cu; f_800A23BC(c); // 800D4D28
  c->lr=0x800D4D30u; f_800BB800(c); // 800D4D2C
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D4D30
  c->lr=0x800D4D38u; f_800BBD58(c); // 800D4D34
  c->r[31]=c->r[3]|c->r[3]; // 800D4D38
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D3C
  if (crb(c,2)) { goto L_800D4DA8; } // 800D4D40
  c->lr=0x800D4D48u; f_800A23BC(c); // 800D4D44
  c->lr=0x800D4D4Cu; f_800A23B4(c); // 800D4D48
  c->r[4]=R32(c->r[30]+0x00000000u); // 800D4D4C
  c->lr=0x800D4D54u; f_800CF5D4(c); // 800D4D50
  c->lr=0x800D4D58u; f_800D51E4(c); // 800D4D54
  cmpu(c,0,c->r[3],0x00000001u); // 800D4D58
  if (crb(c,2)) { goto L_800D4D8C; } // 800D4D5C
  c->r[3]=c->r[31]|c->r[31]; // 800D4D60
  c->lr=0x800D4D68u; f_800BE11C(c); // 800D4D64
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D68
  if (crb(c,2)) { goto L_800D4DA8; } // 800D4D6C
  c->r[3]=c->r[31]|c->r[31]; // 800D4D70
  c->r[4]=0u+0x00000000u; // 800D4D74
  c->lr=0x800D4D7Cu; f_800BB958(c); // 800D4D78
  c->r[3]=c->r[31]|c->r[31]; // 800D4D7C
  c->r[4]=0u+0x00000001u; // 800D4D80
  c->lr=0x800D4D88u; f_800BE2D0(c); // 800D4D84
  goto L_800D4DA8; // 800D4D88
L_800D4D8C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D4D8C
  c->lr=0x800D4D94u; f_800BE11C(c); // 800D4D90
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D94
  if (!crb(c,2)) { goto L_800D4DA8; } // 800D4D98
  c->r[3]=c->r[31]|c->r[31]; // 800D4D9C
  c->r[4]=0u+0x00000001u; // 800D4DA0
  c->lr=0x800D4DA8u; f_800BB958(c); // 800D4DA4
L_800D4DA8:;
  c->lr=0x800D4DACu; f_800A23BC(c); // 800D4DA8
  c->lr=0x800D4DB0u; f_800BB808(c); // 800D4DAC
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D4DB0
  c->lr=0x800D4DB8u; f_800C0D08(c); // 800D4DB4
  cmps(c,0,(int32_t)c->r[3],0); // 800D4DB8
  if (crb(c,2)) { goto L_800D4DEC; } // 800D4DBC
  c->lr=0x800D4DC4u; f_800A23BC(c); // 800D4DC0
  c->lr=0x800D4DC8u; f_800BB808(c); // 800D4DC4
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D4DC8
  c->lr=0x800D4DD0u; f_800BBC8C(c); // 800D4DCC
  c->lr=0x800D4DD4u; f_800CADFC(c); // 800D4DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D4DD4
  if (!crb(c,2)) { goto L_800D4DF4; } // 800D4DD8
  c->lr=0x800D4DE0u; f_800A23BC(c); // 800D4DDC
  c->lr=0x800D4DE4u; f_800BB808(c); // 800D4DE0
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D4DE4
  c->lr=0x800D4DECu; f_800CB00C(c); // 800D4DE8
L_800D4DEC:;
  c->r[0]=0u+0x00000000u; // 800D4DEC
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D4DF0
L_800D4DF4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4DF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4DFC
  c->lr=c->r[0]; // 800D4E00
  c->r[1]=c->r[1]+0x00000010u; // 800D4E04
  return; // 800D4E08
}

// fn_800D4E0C
void f_800D4E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E0C
  c->r[0]=c->lr; // 800D4E10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4E14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4E18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4E1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4E20
  c->r[29]=c->r[3]|c->r[3]; // 800D4E24
  c->r[30]=c->r[4]|c->r[4]; // 800D4E28
  c->lr=0x800D4E30u; f_800A23BC(c); // 800D4E2C
  c->lr=0x800D4E34u; f_800C23E4(c); // 800D4E30
  c->r[31]=c->r[3]|c->r[3]; // 800D4E34
  c->lr=0x800D4E3Cu; f_800A23BC(c); // 800D4E38
  c->r[4]=0u+0x00000000u; // 800D4E3C
  c->lr=0x800D4E44u; f_800C23EC(c); // 800D4E40
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D4E44
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4E48
  cmps(c,0,(int32_t)c->r[0],0); // 800D4E4C
  if (crb(c,2)) { goto L_800D5080; } // 800D4E50
  c->r[0]=R32(c->r[29]+0x00000014u); // 800D4E54
  cmps(c,0,(int32_t)c->r[0],0); // 800D4E58
  if (!crb(c,2)) { goto L_800D4E70; } // 800D4E5C
  c->r[3]=c->r[29]|c->r[29]; // 800D4E60
  c->r[4]=0u+0x00000000u; // 800D4E64
  c->r[5]=0u+0x00000001u; // 800D4E68
  c->lr=0x800D4E70u; f_800D4A84(c); // 800D4E6C
L_800D4E70:;
  cmps(c,0,(int32_t)c->r[30],3); // 800D4E70
  if (crb(c,2)) { goto L_800D4F34; } // 800D4E74
  if (!crb(c,0)) { goto L_800D4E8C; } // 800D4E78
  cmps(c,0,(int32_t)c->r[30],1); // 800D4E7C
  if (crb(c,2)) { goto L_800D4E98; } // 800D4E80
  if (!crb(c,0)) { goto L_800D4ED8; } // 800D4E84
  goto L_800D4FF0; // 800D4E88
L_800D4E8C:;
  cmps(c,0,(int32_t)c->r[30],5); // 800D4E8C
  if (!crb(c,0)) { goto L_800D4FF0; } // 800D4E90
  goto L_800D4F94; // 800D4E94
L_800D4E98:;
  c->lr=0x800D4E9Cu; f_800A23BC(c); // 800D4E98
  c->lr=0x800D4EA0u; f_800BB800(c); // 800D4E9C
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4EA0
  c->lr=0x800D4EA8u; f_800BBD58(c); // 800D4EA4
  c->r[4]=0u+0x00000001u; // 800D4EA8
  c->lr=0x800D4EB0u; f_800BB958(c); // 800D4EAC
  c->r[3]=c->r[29]|c->r[29]; // 800D4EB0
  c->r[4]=0u+0x00000001u; // 800D4EB4
  c->lr=0x800D4EBCu; f_800D4C64(c); // 800D4EB8
  c->r[3]=c->r[29]|c->r[29]; // 800D4EBC
  c->r[4]=0u+0x00000002u; // 800D4EC0
  c->lr=0x800D4EC8u; f_800D4C64(c); // 800D4EC4
  c->r[3]=c->r[29]|c->r[29]; // 800D4EC8
  c->r[4]=0u+0x00000003u; // 800D4ECC
  c->lr=0x800D4ED4u; f_800D4C64(c); // 800D4ED0
  goto L_800D4FF0; // 800D4ED4
L_800D4ED8:;
  c->lr=0x800D4EDCu; f_800A23BC(c); // 800D4ED8
  c->lr=0x800D4EE0u; f_800BB800(c); // 800D4EDC
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4EE0
  c->lr=0x800D4EE8u; f_800BBD58(c); // 800D4EE4
  c->r[4]=0u+0x00000000u; // 800D4EE8
  c->lr=0x800D4EF0u; f_800BB958(c); // 800D4EEC
  c->lr=0x800D4EF4u; f_800A23BC(c); // 800D4EF0
  c->lr=0x800D4EF8u; f_800BB800(c); // 800D4EF4
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4EF8
  c->lr=0x800D4F00u; f_800BBD58(c); // 800D4EFC
  c->r[4]=0u+0x00000001u; // 800D4F00
  c->lr=0x800D4F08u; f_800BE2D0(c); // 800D4F04
  c->r[3]=c->r[29]|c->r[29]; // 800D4F08
  c->r[4]=0u+0x00000001u; // 800D4F0C
  c->r[5]=0u+0x00000001u; // 800D4F10
  c->lr=0x800D4F18u; f_800D4A84(c); // 800D4F14
  c->r[3]=c->r[29]|c->r[29]; // 800D4F18
  c->r[4]=0u+0x00000002u; // 800D4F1C
  c->lr=0x800D4F24u; f_800D4C64(c); // 800D4F20
  c->r[3]=c->r[29]|c->r[29]; // 800D4F24
  c->r[4]=0u+0x00000003u; // 800D4F28
  c->lr=0x800D4F30u; f_800D4C64(c); // 800D4F2C
  goto L_800D4FF0; // 800D4F30
L_800D4F34:;
  c->lr=0x800D4F38u; f_800A23BC(c); // 800D4F34
  c->lr=0x800D4F3Cu; f_800BB800(c); // 800D4F38
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4F3C
  c->lr=0x800D4F44u; f_800BBD58(c); // 800D4F40
  c->r[4]=0u+0x00000000u; // 800D4F44
  c->lr=0x800D4F4Cu; f_800BB958(c); // 800D4F48
  c->lr=0x800D4F50u; f_800A23BC(c); // 800D4F4C
  c->lr=0x800D4F54u; f_800BB800(c); // 800D4F50
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4F54
  c->lr=0x800D4F5Cu; f_800BBD58(c); // 800D4F58
  c->r[4]=0u+0x00000001u; // 800D4F5C
  c->lr=0x800D4F64u; f_800BE2D0(c); // 800D4F60
  c->r[3]=c->r[29]|c->r[29]; // 800D4F64
  c->r[4]=0u+0x00000001u; // 800D4F68
  c->r[5]=0u+0x00000001u; // 800D4F6C
  c->lr=0x800D4F74u; f_800D4A84(c); // 800D4F70
  c->r[3]=c->r[29]|c->r[29]; // 800D4F74
  c->r[4]=0u+0x00000002u; // 800D4F78
  c->r[5]=0u+0x00000001u; // 800D4F7C
  c->lr=0x800D4F84u; f_800D4A84(c); // 800D4F80
  c->r[3]=c->r[29]|c->r[29]; // 800D4F84
  c->r[4]=0u+0x00000003u; // 800D4F88
  c->lr=0x800D4F90u; f_800D4C64(c); // 800D4F8C
  goto L_800D4FF0; // 800D4F90
L_800D4F94:;
  c->lr=0x800D4F98u; f_800A23BC(c); // 800D4F94
  c->lr=0x800D4F9Cu; f_800BB800(c); // 800D4F98
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4F9C
  c->lr=0x800D4FA4u; f_800BBD58(c); // 800D4FA0
  c->r[4]=0u+0x00000000u; // 800D4FA4
  c->lr=0x800D4FACu; f_800BB958(c); // 800D4FA8
  c->lr=0x800D4FB0u; f_800A23BC(c); // 800D4FAC
  c->lr=0x800D4FB4u; f_800BB800(c); // 800D4FB0
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D4FB4
  c->lr=0x800D4FBCu; f_800BBD58(c); // 800D4FB8
  c->r[4]=0u+0x00000001u; // 800D4FBC
  c->lr=0x800D4FC4u; f_800BE2D0(c); // 800D4FC0
  c->r[3]=c->r[29]|c->r[29]; // 800D4FC4
  c->r[4]=0u+0x00000001u; // 800D4FC8
  c->r[5]=0u+0x00000001u; // 800D4FCC
  c->lr=0x800D4FD4u; f_800D4A84(c); // 800D4FD0
  c->r[3]=c->r[29]|c->r[29]; // 800D4FD4
  c->r[4]=0u+0x00000002u; // 800D4FD8
  c->lr=0x800D4FE0u; f_800D4C64(c); // 800D4FDC
  c->r[3]=c->r[29]|c->r[29]; // 800D4FE0
  c->r[4]=0u+0x00000003u; // 800D4FE4
  c->r[5]=0u+0x00000001u; // 800D4FE8
  c->lr=0x800D4FF0u; f_800D4A84(c); // 800D4FEC
L_800D4FF0:;
  c->lr=0x800D4FF4u; f_800A23BC(c); // 800D4FF0
  c->lr=0x800D4FF8u; f_800A23B4(c); // 800D4FF4
  c->lr=0x800D4FFCu; f_800CF5CC(c); // 800D4FF8
  c->lr=0x800D5000u; f_800D53E8(c); // 800D4FFC
  c->r[4]=c->r[3]^0x80000000u; // 800D5000
  c->r[0]=addc(c,~c->r[3],0x00000001u,1); // 800D5004
  c->r[0]=addc(c,c->r[0],c->r[4],0); // 800D5008
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D500C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800D5010
  c->r[30]=c->r[0]&~c->r[4]; // 800D5014
  c->lr=0x800D501Cu; f_800A23BC(c); // 800D5018
  c->lr=0x800D5020u; f_800BB800(c); // 800D501C
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D5020
  c->lr=0x800D5028u; f_800C1284(c); // 800D5024
  cmps(c,0,(int32_t)c->r[3],0); // 800D5028
  if (crb(c,2)) { goto L_800D504C; } // 800D502C
  c->lr=0x800D5034u; f_800A23BC(c); // 800D5030
  c->lr=0x800D5038u; f_800BB800(c); // 800D5034
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D5038
  c->lr=0x800D5040u; f_800BBD58(c); // 800D503C
  c->r[4]=c->r[30]|c->r[30]; // 800D5040
  c->r[5]=0u+0x00000006u; // 800D5044
  c->lr=0x800D504Cu; f_800C7C34(c); // 800D5048
L_800D504C:;
  c->lr=0x800D5050u; f_800A23BC(c); // 800D504C
  c->lr=0x800D5054u; f_800BB800(c); // 800D5050
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D5054
  c->lr=0x800D505Cu; f_800C1284(c); // 800D5058
  cmps(c,0,(int32_t)c->r[3],0); // 800D505C
  if (crb(c,2)) { goto L_800D5080; } // 800D5060
  c->lr=0x800D5068u; f_800A23BC(c); // 800D5064
  c->lr=0x800D506Cu; f_800BB800(c); // 800D5068
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D506C
  c->lr=0x800D5074u; f_800BBD58(c); // 800D5070
  c->r[4]=c->r[30]|c->r[30]; // 800D5074
  c->r[5]=0u+0x00000006u; // 800D5078
  c->lr=0x800D5080u; f_800C7C34(c); // 800D507C
L_800D5080:;
  c->lr=0x800D5084u; f_800A23BC(c); // 800D5080
  c->r[4]=c->r[31]|c->r[31]; // 800D5084
  c->lr=0x800D508Cu; f_800C23EC(c); // 800D5088
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D508C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5090
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D5094
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5098
  c->lr=c->r[0]; // 800D509C
  c->r[1]=c->r[1]+0x00000020u; // 800D50A0
  return; // 800D50A4
}

// fn_800D50A8
void f_800D50A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D50A8
  c->r[0]=c->lr; // 800D50AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D50B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D50B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D50B8
  c->r[30]=c->r[3]|c->r[3]; // 800D50BC
  c->r[31]=c->r[4]|c->r[4]; // 800D50C0
  c->lr=0x800D50C8u; f_800A23BC(c); // 800D50C4
  c->lr=0x800D50CCu; f_800A23C8(c); // 800D50C8
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D50CC
  c->lr=0x800D50D4u; f_800C01C8(c); // 800D50D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D50D4
  if (crb(c,2)) { goto L_800D5118; } // 800D50D8
  cmps(c,0,(int32_t)c->r[31],0); // 800D50DC
  if (crb(c,2)) { goto L_800D5100; } // 800D50E0
  c->lr=0x800D50E8u; f_800A23BC(c); // 800D50E4
  c->lr=0x800D50ECu; f_800A23C8(c); // 800D50E8
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D50EC
  c->lr=0x800D50F4u; f_800BBBC0(c); // 800D50F0
  c->r[4]=0u+0x00000000u; // 800D50F4
  c->lr=0x800D50FCu; f_800CCEC4(c); // 800D50F8
  goto L_800D5118; // 800D50FC
L_800D5100:;
  c->lr=0x800D5104u; f_800A23BC(c); // 800D5100
  c->lr=0x800D5108u; f_800A23C8(c); // 800D5104
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D5108
  c->lr=0x800D5110u; f_800BBBC0(c); // 800D510C
  c->r[4]=0u+0x00000001u; // 800D5110
  c->lr=0x800D5118u; f_800CCEC4(c); // 800D5114
L_800D5118:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5118
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D511C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5120
  c->lr=c->r[0]; // 800D5124
  c->r[1]=c->r[1]+0x00000010u; // 800D5128
  return; // 800D512C
}

// fn_800D5130
void f_800D5130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5130
  c->r[0]=c->lr; // 800D5134
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D5138
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D513C
  c->r[31]=c->r[3]|c->r[3]; // 800D5140
  c->r[3]=c->r[1]+0x00000008u; // 800D5144
  c->r[4]=c->r[13]+0xFFFF88E0u; // 800D5148
  c->r[5]=R32(c->r[31]+0x00000000u); // 800D514C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5150
  c->lr=0x800D5158u; f_802E7CC4(c); // 800D5154
  c->lr=0x800D515Cu; f_800A23BC(c); // 800D5158
  c->lr=0x800D5160u; f_800BB808(c); // 800D515C
  c->r[4]=c->r[1]+0x00000008u; // 800D5160
  c->r[5]=0u+0x80460000u; // 800D5164
  c->r[5]=c->r[5]+0x00000300u; // 800D5168
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D516C
  c->lr=0x800D5174u; f_800CAF70(c); // 800D5170
  W32(c->r[31]+0x00000008u,c->r[3]); // 800D5174
  c->lr=0x800D517Cu; f_800A23BC(c); // 800D5178
  c->lr=0x800D5180u; f_800BB808(c); // 800D517C
  c->r[4]=R32(c->r[31]+0x00000008u); // 800D5180
  c->lr=0x800D5188u; f_800BBC8C(c); // 800D5184
  c->r[4]=c->r[31]+0x00000024u; // 800D5188
  c->lr=0x800D5190u; f_800BCDE8(c); // 800D518C
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5190
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D5194
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D5198
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D519C
  c->lr=c->r[0]; // 800D51A0
  c->r[1]=c->r[1]+0x00000030u; // 800D51A4
  return; // 800D51A8
}

// fn_800D51AC
void f_800D51AC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D51AC
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800D51B0
  c->r[0]=0u-c->r[3]; // 800D51B4
  c->r[0]=c->r[0]|c->r[3]; // 800D51B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D51BC
  return; // 800D51C0
}

// fn_800D51C4
void f_800D51C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D51C4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D51C8
  fcmp(c,0,c->f[1],c->f[0]); // 800D51CC
  c->r[3]=c->cr; // 800D51D0
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 800D51D4
  return; // 800D51D8
}

// fn_800D51DC
void f_800D51DC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D51DC
  return; // 800D51E0
}

// fn_800D51E4
void f_800D51E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D51E4
  return; // 800D51E8
}

// fn_800D51EC
void f_800D51EC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 800D51EC
  c->r[4]=0u+0x00000003u; // 800D51F0
  f_800BB8E4(c); return; // 800D51F4
}

// fn_800D51F8
void f_800D51F8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 800D51F8
  c->r[4]=0u+0x00000009u; // 800D51FC
  f_800BB8E4(c); return; // 800D5200
}

// fn_800D5204
void f_800D5204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5204
  c->r[0]=c->lr; // 800D5208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D520C
  c->r[3]=c->r[3]+0x00000004u; // 800D5210
  c->lr=0x800D5218u; f_800BB904(c); // 800D5214
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800D5218
  c->r[0]=cntlz(c->r[0]); // 800D521C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5220
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5224
  c->lr=c->r[0]; // 800D5228
  c->r[1]=c->r[1]+0x00000010u; // 800D522C
  return; // 800D5230
}

// fn_800D5234
void f_800D5234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5234
  c->r[0]=c->lr; // 800D5238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D523C
  c->r[3]=c->r[3]+0x00000004u; // 800D5240
  c->lr=0x800D5248u; f_800BB904(c); // 800D5244
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 800D5248
  c->r[0]=cntlz(c->r[0]); // 800D524C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5250
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5254
  c->lr=c->r[0]; // 800D5258
  c->r[1]=c->r[1]+0x00000010u; // 800D525C
  return; // 800D5260
}

// fn_800D5264
void f_800D5264(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5264
  c->r[0]=c->lr; // 800D5268
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D526C
  c->r[3]=c->r[3]+0x00000004u; // 800D5270
  c->lr=0x800D5278u; f_800BB904(c); // 800D5274
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800D5278
  c->r[0]=cntlz(c->r[0]); // 800D527C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5280
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5284
  c->lr=c->r[0]; // 800D5288
  c->r[1]=c->r[1]+0x00000010u; // 800D528C
  return; // 800D5290
}

// fn_800D5294
void f_800D5294(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5294
  c->r[0]=c->lr; // 800D5298
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D529C
  c->r[3]=c->r[3]+0x00000004u; // 800D52A0
  c->lr=0x800D52A8u; f_800BB904(c); // 800D52A4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800D52A8
  c->r[0]=cntlz(c->r[0]); // 800D52AC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D52B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D52B4
  c->lr=c->r[0]; // 800D52B8
  c->r[1]=c->r[1]+0x00000010u; // 800D52BC
  return; // 800D52C0
}

// fn_800D52C4
void f_800D52C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D52C4
  return; // 800D52C8
}

// fn_800D52CC
void f_800D52CC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D52CC
  return; // 800D52D0
}

// dtor_800D52D4
void f_800D52D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D52D4
  c->r[0]=c->lr; // 800D52D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D52DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D52E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D52E4
  c->r[30]=c->r[3]|c->r[3]; // 800D52E8
  c->r[31]=c->r[4]|c->r[4]; // 800D52EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D52F0
  if (crb(c,2)) { goto L_800D5318; } // 800D52F4
  c->r[3]=c->r[3]+0x00000004u; // 800D52F8
  c->r[4]=0u+0xFFFFFFFFu; // 800D52FC
  c->lr=0x800D5304u; f_800BB850(c); // 800D5300
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D5304
  cmps(c,0,(int32_t)c->r[0],0); // 800D5308
  if (!crb(c,1)) { goto L_800D5318; } // 800D530C
  c->r[3]=c->r[30]|c->r[30]; // 800D5310
  c->lr=0x800D5318u; f_80047B20(c); // 800D5314
L_800D5318:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D531C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5320
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5324
  c->lr=c->r[0]; // 800D5328
  c->r[1]=c->r[1]+0x00000010u; // 800D532C
  return; // 800D5330
}

// fn_800D5334
void f_800D5334(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D5334
  return; // 800D5338
}

// fn_800D533C
void f_800D533C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D533C
  c->r[0]=c->lr; // 800D5340
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5348
  c->r[31]=c->r[3]|c->r[3]; // 800D534C
  c->r[4]=0u+0x80460000u; // 800D5350
  c->r[0]=c->r[4]+0x00000AF4u; // 800D5354
  W32(c->r[3]+0x00000034u,c->r[0]); // 800D5358
  c->lr=0x800D5360u; f_800D53C0(c); // 800D535C
  c->r[3]=c->r[31]|c->r[31]; // 800D5360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5364
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5368
  c->lr=c->r[0]; // 800D536C
  c->r[1]=c->r[1]+0x00000010u; // 800D5370
  return; // 800D5374
}

// dtor_800D5378
void f_800D5378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5378
  c->r[0]=c->lr; // 800D537C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5384
  c->r[31]=c->r[3]|c->r[3]; // 800D5388
  cmps(c,0,(int32_t)c->r[3],0); // 800D538C
  if (crb(c,2)) { goto L_800D53A4; } // 800D5390
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800D5394
  cmps(c,0,(int32_t)c->r[0],0); // 800D5398
  if (!crb(c,1)) { goto L_800D53A4; } // 800D539C
  c->lr=0x800D53A4u; f_80047B20(c); // 800D53A0
L_800D53A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D53A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D53A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D53AC
  c->lr=c->r[0]; // 800D53B0
  c->r[1]=c->r[1]+0x00000010u; // 800D53B4
  return; // 800D53B8
}

// fn_800D53BC
void f_800D53BC(Ctx* __restrict c) {
  return; // 800D53BC
}

// fn_800D53C0
void f_800D53C0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D53C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D53C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D53C8
  c->r[0]=0u+0x0000000Au; // 800D53CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D53D0
  c->r[3]=c->r[3]+0x0000000Cu; // 800D53D4
  c->r[4]=0u+0x00000000u; // 800D53D8
  c->r[5]=0u+0x00000028u; // 800D53DC
  f_800060B8(c); return; // 800D53E0
}

// fn_800D53E4
void f_800D53E4(Ctx* __restrict c) {
  return; // 800D53E4
}

// fn_800D53E8
void f_800D53E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D53E8
  c->r[0]=c->lr; // 800D53EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D53F0
  c->lr=0x800D53F8u; f_800A23BC(c); // 800D53F4
  c->lr=0x800D53FCu; f_800E2E74(c); // 800D53F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D53FC
  if (!crb(c,0)) { goto L_800D5408; } // 800D5400
  c->r[3]=0u+0x00000000u; // 800D5404
L_800D5408:;
  cmpu(c,0,c->r[3],0x00000007u); // 800D5408
  if (crb(c,0)) { goto L_800D5414; } // 800D540C
  c->r[3]=0u+0x00000006u; // 800D5410
L_800D5414:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5414
  c->lr=c->r[0]; // 800D5418
  c->r[1]=c->r[1]+0x00000010u; // 800D541C
  return; // 800D5420
}

// fn_800D5424
void f_800D5424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5424
  c->r[0]=c->lr; // 800D5428
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D542C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D5430
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D5434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5438
  c->r[31]=c->r[3]|c->r[3]; // 800D543C
  c->lr=0x800D5444u; f_800D53E8(c); // 800D5440
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D5444
  c->r[4]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800D5448
  c->r[3]=0u+0x80430000u; // 800D544C
  c->r[0]=c->r[3]+0xFFFFD6D8u; // 800D5450
  c->r[31]=c->r[0]+c->r[4]; // 800D5454
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D5458
  c->lr=0x800D5460u; f_8005C5B0(c); // 800D545C
  {uint32_t ea=c->r[2]+0xFFFF8868u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D5460
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D5464
  c->r[3]=0u+0x00000000u; // 800D5468
  c->r[0]=0u+0x00000002u; // 800D546C
  c->ctr=c->r[0]; // 800D5470
L_800D5474:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5474
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D5478
  fcmp(c,0,c->f[31],c->f[2]); // 800D547C
  if (!crb(c,1)) { goto L_800D5488; } // 800D5480
  c->f[31]=c->f[2]; // 800D5484
L_800D5488:;
  fcmp(c,0,c->f[1],c->f[31]); // 800D5488
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D548C
  if (!crb(c,2)) { goto L_800D5498; } // 800D5490
  goto L_800D5520; // 800D5494
L_800D5498:;
  c->r[3]=c->r[3]+0x00000001u; // 800D5498
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D549C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D54A0
  fcmp(c,0,c->f[31],c->f[2]); // 800D54A4
  if (!crb(c,1)) { goto L_800D54B0; } // 800D54A8
  c->f[31]=c->f[2]; // 800D54AC
L_800D54B0:;
  fcmp(c,0,c->f[1],c->f[31]); // 800D54B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D54B4
  if (!crb(c,2)) { goto L_800D54C0; } // 800D54B8
  goto L_800D5520; // 800D54BC
L_800D54C0:;
  c->r[3]=c->r[3]+0x00000001u; // 800D54C0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D54C4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D54C8
  fcmp(c,0,c->f[31],c->f[2]); // 800D54CC
  if (!crb(c,1)) { goto L_800D54D8; } // 800D54D0
  c->f[31]=c->f[2]; // 800D54D4
L_800D54D8:;
  fcmp(c,0,c->f[1],c->f[31]); // 800D54D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D54DC
  if (!crb(c,2)) { goto L_800D54E8; } // 800D54E0
  goto L_800D5520; // 800D54E4
L_800D54E8:;
  c->r[3]=c->r[3]+0x00000001u; // 800D54E8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D54EC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 800D54F0
  fcmp(c,0,c->f[31],c->f[2]); // 800D54F4
  if (!crb(c,1)) { goto L_800D5500; } // 800D54F8
  c->f[31]=c->f[2]; // 800D54FC
L_800D5500:;
  fcmp(c,0,c->f[1],c->f[31]); // 800D5500
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D5504
  if (!crb(c,2)) { goto L_800D5510; } // 800D5508
  goto L_800D5520; // 800D550C
L_800D5510:;
  c->r[31]=c->r[31]+0x00000010u; // 800D5510
  c->r[3]=c->r[3]+0x00000001u; // 800D5514
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D5474; } // 800D5518
  c->r[3]=0u+0x00000007u; // 800D551C
L_800D5520:;
  c->r[0]=0u+0x00000018u; // 800D5520
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D5524
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D5528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D552C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5530
  c->lr=c->r[0]; // 800D5534
  c->r[1]=c->r[1]+0x00000020u; // 800D5538
  return; // 800D553C
}

// fn_800D5540
void f_800D5540(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D5540
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D5544
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5548
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D554C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5550
  c->r[4]=c->r[4]+0x00000008u; // 800D5554
  f_800D47E8(c); return; // 800D5558
}

// fn_800D555C
void f_800D555C(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800D555C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5560
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D5564
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5568
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D556C
  c->r[3]=c->r[4]+0x00000008u; // 800D5570
  c->r[4]=c->r[5]+0x0000000Cu; // 800D5574
  f_800D47E8(c); return; // 800D5578
}

// fn_800D557C
void f_800D557C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D557C
  c->r[0]=c->lr; // 800D5580
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D5584
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D5588
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D558C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800D5590
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800D5594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5598
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D559C
  c->r[30]=c->r[3]|c->r[3]; // 800D55A0
  c->r[3]=c->r[1]+0x00000008u; // 800D55A4
  c->lr=0x800D55ACu; f_8004B0A4(c); // 800D55A8
  c->r[31]=0u+0x00000000u; // 800D55AC
  {uint32_t ea=c->r[30]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D55B0
  c->lr=0x800D55B8u; f_802E57F8(c); // 800D55B4
  cmps(c,0,(int32_t)c->r[3],2); // 800D55B8
  if (crb(c,1)) { goto L_800D55C4; } // 800D55BC
  c->r[31]=0u+0x00000001u; // 800D55C0
L_800D55C4:;
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D55C4
  c->lr=0x800D55CCu; f_802E57F8(c); // 800D55C8
  cmps(c,0,(int32_t)c->r[3],2); // 800D55CC
  if (crb(c,1)) { goto L_800D55D8; } // 800D55D0
  c->r[31]=c->r[31]+0x00000001u; // 800D55D4
L_800D55D8:;
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D55D8
  c->lr=0x800D55E0u; f_802E57F8(c); // 800D55DC
  cmps(c,0,(int32_t)c->r[3],2); // 800D55E0
  if (crb(c,1)) { goto L_800D55EC; } // 800D55E4
  c->r[31]=c->r[31]+0x00000001u; // 800D55E8
L_800D55EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D55EC
  if (!crb(c,2)) { goto L_800D5614; } // 800D55F0
  c->r[3]=c->r[1]+0x00000008u; // 800D55F4
  c->r[4]=c->r[30]+0x00000028u; // 800D55F8
  c->r[5]=c->r[30]+0x0000001Cu; // 800D55FC
  c->lr=0x800D5604u; f_8006000C(c); // 800D5600
  c->r[3]=c->r[1]+0x00000008u; // 800D5604
  c->lr=0x800D560Cu; f_8005C170(c); // 800D5608
  c->f[30]=c->f[1]; // 800D560C
  goto L_800D5620; // 800D5610
L_800D5614:;
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5614
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5618
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[0]); // 800D561C
L_800D5620:;
  {uint32_t ea=c->r[2]+0xFFFF8830u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5620
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5624
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D5628
  fcmp(c,0,c->f[30],c->f[0]); // 800D562C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D5630
  if (!crb(c,2)) { goto L_800D563C; } // 800D5634
  c->f[30]=c->f[0]; // 800D5638
L_800D563C:;
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D563C
  fcmp(c,0,c->f[30],c->f[0]); // 800D5640
  if (!crb(c,1)) { goto L_800D5650; } // 800D5644
  {uint32_t ea=c->r[30]+0x00000038u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D5648
  goto L_800D56C0; // 800D564C
L_800D5650:;
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[0]); // 800D5650
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5654
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 800D5658
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D565C
  fcmp(c,0,c->f[2],c->f[0]); // 800D5660
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D5664
  if (!crb(c,2)) { goto L_800D5670; } // 800D5668
  c->f[2]=c->f[0]; // 800D566C
L_800D5670:;
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5670
  fcmp(c,0,c->f[2],c->f[0]); // 800D5674
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D5678
  if (!crb(c,2)) { goto L_800D5684; } // 800D567C
  c->f[2]=c->f[0]; // 800D5680
L_800D5684:;
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5684
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5688
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D568C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800D5690
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 800D5694
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5698
  fcmp(c,0,c->f[31],c->f[0]); // 800D569C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D56A0
  if (!crb(c,2)) { goto L_800D56AC; } // 800D56A4
  c->f[31]=c->f[0]; // 800D56A8
L_800D56AC:;
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D56AC
  fcmp(c,0,c->f[31],c->f[0]); // 800D56B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D56B4
  if (!crb(c,2)) { goto L_800D56C0; } // 800D56B8
  c->f[31]=c->f[0]; // 800D56BC
L_800D56C0:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D56C0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 800D56C4
  c->lr=0x800D56CCu; f_800A23BC(c); // 800D56C8
  c->lr=0x800D56D0u; f_800BB828(c); // 800D56CC
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D56D0
  c->lr=0x800D56D8u; f_800BE9A4(c); // 800D56D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D56D8
  if (crb(c,2)) { goto L_800D56F8; } // 800D56DC
  c->lr=0x800D56E4u; f_800A23BC(c); // 800D56E0
  c->lr=0x800D56E8u; f_800BB828(c); // 800D56E4
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D56E8
  c->lr=0x800D56F0u; f_800BB99C(c); // 800D56EC
  c->f[1]=c->f[31]; // 800D56F0
  c->lr=0x800D56F8u; f_800E18E8(c); // 800D56F4
L_800D56F8:;
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D56F8
  fcmp(c,0,c->f[30],c->f[0]); // 800D56FC
  c->r[0]=c->cr; // 800D5700
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 800D5704
  c->r[0]=cntlz(c->r[0]); // 800D5708
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D570C
  c->r[0]=0u+0x00000038u; // 800D5710
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D5714
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D5718
  c->r[0]=0u+0x00000028u; // 800D571C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800D5720
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800D5724
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5728
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D572C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D5730
  c->lr=c->r[0]; // 800D5734
  c->r[1]=c->r[1]+0x00000040u; // 800D5738
  return; // 800D573C
}

// fn_800D5740
void f_800D5740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5740
  c->r[0]=c->lr; // 800D5744
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D574C
  c->r[31]=c->r[3]|c->r[3]; // 800D5750
  c->r[4]=0u+0x80460000u; // 800D5754
  c->r[0]=c->r[4]+0x00000ADCu; // 800D5758
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800D575C
  c->lr=0x800D5764u; f_800BB894(c); // 800D5760
  c->r[3]=c->r[31]+0x0000001Cu; // 800D5764
  c->lr=0x800D576Cu; f_8004B0A4(c); // 800D5768
  c->r[3]=c->r[31]+0x00000028u; // 800D576C
  c->lr=0x800D5774u; f_8004B0A4(c); // 800D5770
  c->r[3]=c->r[31]|c->r[31]; // 800D5774
  c->lr=0x800D577Cu; f_800D57F0(c); // 800D5778
  c->r[3]=c->r[31]|c->r[31]; // 800D577C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5780
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5784
  c->lr=c->r[0]; // 800D5788
  c->r[1]=c->r[1]+0x00000010u; // 800D578C
  return; // 800D5790
}

// dtor_800D5794
void f_800D5794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5794
  c->r[0]=c->lr; // 800D5798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D579C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D57A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D57A4
  c->r[30]=c->r[3]|c->r[3]; // 800D57A8
  c->r[31]=c->r[4]|c->r[4]; // 800D57AC
  cmps(c,0,(int32_t)c->r[3],0); // 800D57B0
  if (crb(c,2)) { goto L_800D57D4; } // 800D57B4
  c->r[4]=0u+0xFFFFFFFFu; // 800D57B8
  c->lr=0x800D57C0u; f_800BB850(c); // 800D57BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D57C0
  cmps(c,0,(int32_t)c->r[0],0); // 800D57C4
  if (!crb(c,1)) { goto L_800D57D4; } // 800D57C8
  c->r[3]=c->r[30]|c->r[30]; // 800D57CC
  c->lr=0x800D57D4u; f_80047B20(c); // 800D57D0
L_800D57D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D57D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D57D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D57DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D57E0
  c->lr=c->r[0]; // 800D57E4
  c->r[1]=c->r[1]+0x00000010u; // 800D57E8
  return; // 800D57EC
}

// fn_800D57F0
void f_800D57F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D57F0
  c->r[0]=c->lr; // 800D57F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D57F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D57FC
  c->r[31]=c->r[3]|c->r[3]; // 800D5800
  c->lr=0x800D5808u; f_800BB8D0(c); // 800D5804
  c->r[0]=0u+0x00000000u; // 800D5808
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D580C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D5810
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D5814
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5818
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D581C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800D5820
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800D5824
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800D5828
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800D582C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800D5830
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800D5834
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800D5838
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D583C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800D5840
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800D5844
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800D5848
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D584C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5850
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5854
  c->lr=c->r[0]; // 800D5858
  c->r[1]=c->r[1]+0x00000010u; // 800D585C
  return; // 800D5860
}

// fn_800D5864
void f_800D5864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5864
  c->r[0]=c->lr; // 800D5868
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D586C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D5870
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D5874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5878
  c->r[31]=c->r[3]|c->r[3]; // 800D587C
  c->f[31]=c->f[1]; // 800D5880
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D5884
  c->r[3]=c->r[3]+0x0000001Cu; // 800D5888
  c->r[4]=c->r[5]|c->r[5]; // 800D588C
  c->lr=0x800D5894u; f_8004A65C(c); // 800D5890
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[31]);} // 800D5894
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5898
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 800D589C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D58A0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D58A4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 800D58A8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800D58AC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800D58B0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D58B4
  c->r[0]=c->r[0]|0x00000001u; // 800D58B8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D58BC
  c->r[0]=0u+0x00000018u; // 800D58C0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D58C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D58C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D58CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D58D0
  c->lr=c->r[0]; // 800D58D4
  c->r[1]=c->r[1]+0x00000020u; // 800D58D8
  return; // 800D58DC
}

// fn_800D58E0
void f_800D58E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D58E0
  c->r[0]=c->lr; // 800D58E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D58E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D58EC
  c->r[31]=c->r[3]|c->r[3]; // 800D58F0
  c->lr=0x800D58F8u; f_800A23BC(c); // 800D58F4
  c->lr=0x800D58FCu; f_800BB828(c); // 800D58F8
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D58FC
  c->lr=0x800D5904u; f_800BE9A4(c); // 800D5900
  cmps(c,0,(int32_t)c->r[3],0); // 800D5904
  if (crb(c,2)) { goto L_800D5924; } // 800D5908
  c->lr=0x800D5910u; f_800A23BC(c); // 800D590C
  c->lr=0x800D5914u; f_800BB828(c); // 800D5910
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D5914
  c->lr=0x800D591Cu; f_800E1BF4(c); // 800D5918
  c->r[0]=0u+0x00000000u; // 800D591C
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D5920
L_800D5924:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5924
  c->lr=0x800D592Cu; f_800D57F0(c); // 800D5928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D592C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5930
  c->lr=c->r[0]; // 800D5934
  c->r[1]=c->r[1]+0x00000010u; // 800D5938
  return; // 800D593C
}

// fn_800D5940
void f_800D5940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5940
  c->r[0]=c->lr; // 800D5944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D594C
  c->r[31]=c->r[3]|c->r[3]; // 800D5950
  cmps(c,0,(int32_t)c->r[4],0); // 800D5954
  if (crb(c,2)) { goto L_800D5978; } // 800D5958
  c->lr=0x800D5960u; f_800BB904(c); // 800D595C
  cmpu(c,0,c->r[3],0x00000005u); // 800D5960
  if (!crb(c,2)) { goto L_800D5980; } // 800D5964
  c->r[3]=c->r[31]|c->r[31]; // 800D5968
  c->r[4]=0u+0x00000006u; // 800D596C
  c->lr=0x800D5974u; f_800BB8E4(c); // 800D5970
  goto L_800D5980; // 800D5974
L_800D5978:;
  c->r[4]=0u+0x00000005u; // 800D5978
  c->lr=0x800D5980u; f_800BB8E4(c); // 800D597C
L_800D5980:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5980
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5984
  c->lr=c->r[0]; // 800D5988
  c->r[1]=c->r[1]+0x00000010u; // 800D598C
  return; // 800D5990
}

// fn_800D5994
void f_800D5994(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5994
  c->r[0]=c->lr; // 800D5998
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D599C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800D59A0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800D59A4
  c->r[31]=c->r[3]|c->r[3]; // 800D59A8
  c->f[31]=c->f[1]; // 800D59AC
  c->r[3]=c->r[3]+0x00000028u; // 800D59B0
  c->lr=0x800D59B8u; f_8004A65C(c); // 800D59B4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[31]);} // 800D59B8
  c->r[3]=c->r[31]|c->r[31]; // 800D59BC
  c->lr=0x800D59C4u; f_800BB910(c); // 800D59C0
  c->r[3]=c->r[31]|c->r[31]; // 800D59C4
  c->lr=0x800D59CCu; f_800BB904(c); // 800D59C8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D59CC
  c->r[3]=0u+0x80460000u; // 800D59D0
  c->r[0]=c->r[3]+0x0000030Cu; // 800D59D4
  c->r[12]=c->r[0]+c->r[4]; // 800D59D8
  c->r[3]=c->r[31]|c->r[31]; // 800D59DC
  c->lr=0x800D59E4u; f_802F09D0(c); // 800D59E0
  c->r[0]=c->r[0]|0x00000000u; // 800D59E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800D59E8
  c->r[31]=R32(c->r[1]+0x00000014u); // 800D59EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D59F0
  c->lr=c->r[0]; // 800D59F4
  c->r[1]=c->r[1]+0x00000020u; // 800D59F8
  return; // 800D59FC
}

// fn_800D5A00
void f_800D5A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5A00
  c->r[0]=c->lr; // 800D5A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5A08
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800D5A0C
  W32(c->r[1]+0x00000014u,c->r[31]); // 800D5A10
  W32(c->r[1]+0x00000010u,c->r[30]); // 800D5A14
  c->r[30]=c->r[3]|c->r[3]; // 800D5A18
  c->r[31]=c->r[4]|c->r[4]; // 800D5A1C
  c->f[31]=c->f[1]; // 800D5A20
  c->lr=0x800D5A28u; f_800BB904(c); // 800D5A24
  cmpu(c,0,c->r[3],0x00000001u); // 800D5A28
  if (crb(c,2)) { goto L_800D5A44; } // 800D5A2C
  W32(c->r[30]+0x00000014u,c->r[31]); // 800D5A30
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[31]);} // 800D5A34
  c->r[3]=c->r[30]|c->r[30]; // 800D5A38
  c->r[4]=0u+0x00000001u; // 800D5A3C
  c->lr=0x800D5A44u; f_800BB8E4(c); // 800D5A40
L_800D5A44:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800D5A44
  c->r[31]=R32(c->r[1]+0x00000014u); // 800D5A48
  c->r[30]=R32(c->r[1]+0x00000010u); // 800D5A4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5A50
  c->lr=c->r[0]; // 800D5A54
  c->r[1]=c->r[1]+0x00000020u; // 800D5A58
  return; // 800D5A5C
}

// fn_800D5A60
void f_800D5A60(Ctx* __restrict c) {
  return; // 800D5A60
}

// fn_800D5A64
void f_800D5A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5A64
  c->r[0]=c->lr; // 800D5A68
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D5A6C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D5A70
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D5A74
  W32(c->r[1]+0x00000064u,c->r[29]); // 800D5A78
  c->r[29]=c->r[3]|c->r[3]; // 800D5A7C
  c->r[3]=c->r[1]+0x00000008u; // 800D5A80
  c->lr=0x800D5A88u; f_8004B0A4(c); // 800D5A84
  c->r[3]=c->r[29]|c->r[29]; // 800D5A88
  c->lr=0x800D5A90u; f_800BB8EC(c); // 800D5A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5A90
  if (crb(c,2)) { goto L_800D5B50; } // 800D5A94
  c->lr=0x800D5A9Cu; f_800A23BC(c); // 800D5A98
  c->lr=0x800D5AA0u; f_800BB828(c); // 800D5A9C
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D5AA0
  c->lr=0x800D5AA8u; f_800BE9A4(c); // 800D5AA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D5AA8
  if (crb(c,2)) { goto L_800D5AC8; } // 800D5AAC
  c->lr=0x800D5AB4u; f_800A23BC(c); // 800D5AB0
  c->lr=0x800D5AB8u; f_800BB828(c); // 800D5AB4
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D5AB8
  c->lr=0x800D5AC0u; f_800E1BF4(c); // 800D5ABC
  c->r[0]=0u+0x00000000u; // 800D5AC0
  W32(c->r[29]+0x00000018u,c->r[0]); // 800D5AC4
L_800D5AC8:;
  c->lr=0x800D5ACCu; f_800A23BC(c); // 800D5AC8
  c->lr=0x800D5AD0u; f_800C23E4(c); // 800D5ACC
  c->r[30]=c->r[3]|c->r[3]; // 800D5AD0
  c->lr=0x800D5AD8u; f_800A23BC(c); // 800D5AD4
  c->r[4]=0u+0x00000000u; // 800D5AD8
  c->lr=0x800D5AE0u; f_800C23EC(c); // 800D5ADC
  c->r[3]=c->r[1]+0x00000018u; // 800D5AE0
  c->r[4]=c->r[13]+0xFFFF88E8u; // 800D5AE4
  c->r[5]=R32(c->r[29]+0x00000010u); // 800D5AE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D5AEC
  c->lr=0x800D5AF4u; f_802E7CC4(c); // 800D5AF0
  c->lr=0x800D5AF8u; f_800A23BC(c); // 800D5AF4
  c->lr=0x800D5AFCu; f_800BB828(c); // 800D5AF8
  c->r[4]=c->r[1]+0x00000018u; // 800D5AFC
  c->r[5]=R32(c->r[29]+0x00000014u); // 800D5B00
  c->r[6]=0u+0xFFFFFFFFu; // 800D5B04
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5B08
  c->lr=0x800D5B10u; f_800E1ABC(c); // 800D5B0C
  W32(c->r[29]+0x00000018u,c->r[3]); // 800D5B10
  c->r[31]=c->r[3]|c->r[3]; // 800D5B14
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B18
  if (crb(c,2)) { goto L_800D5B38; } // 800D5B1C
  c->lr=0x800D5B24u; f_800A23BC(c); // 800D5B20
  c->lr=0x800D5B28u; f_800BB828(c); // 800D5B24
  c->r[4]=c->r[31]|c->r[31]; // 800D5B28
  c->lr=0x800D5B30u; f_800BB99C(c); // 800D5B2C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5B30
  c->lr=0x800D5B38u; f_800E18E8(c); // 800D5B34
L_800D5B38:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5B38
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 800D5B3C
  c->lr=0x800D5B44u; f_800A23BC(c); // 800D5B40
  c->r[4]=c->r[30]|c->r[30]; // 800D5B44
  c->lr=0x800D5B4Cu; f_800C23EC(c); // 800D5B48
  goto L_800D5B94; // 800D5B4C
L_800D5B50:;
  c->r[3]=c->r[29]|c->r[29]; // 800D5B50
  c->lr=0x800D5B58u; f_800D557C(c); // 800D5B54
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B58
  if (!crb(c,2)) { goto L_800D5B70; } // 800D5B5C
  c->r[3]=c->r[29]|c->r[29]; // 800D5B60
  c->r[4]=0u+0x00000002u; // 800D5B64
  c->lr=0x800D5B6Cu; f_800BB8E4(c); // 800D5B68
  goto L_800D5B94; // 800D5B6C
L_800D5B70:;
  c->lr=0x800D5B74u; f_800A23BC(c); // 800D5B70
  c->lr=0x800D5B78u; f_800BB828(c); // 800D5B74
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D5B78
  c->lr=0x800D5B80u; f_800BE9A4(c); // 800D5B7C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B80
  if (!crb(c,2)) { goto L_800D5B94; } // 800D5B84
  c->r[3]=c->r[29]|c->r[29]; // 800D5B88
  c->r[4]=0u+0x00000003u; // 800D5B8C
  c->lr=0x800D5B94u; f_800BB8E4(c); // 800D5B90
L_800D5B94:;
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D5B94
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D5B98
  c->r[29]=R32(c->r[1]+0x00000064u); // 800D5B9C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D5BA0
  c->lr=c->r[0]; // 800D5BA4
  c->r[1]=c->r[1]+0x00000070u; // 800D5BA8
  return; // 800D5BAC
}

// fn_800D5BB0
void f_800D5BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5BB0
  c->r[0]=c->lr; // 800D5BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5BB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5BBC
  c->r[31]=c->r[3]|c->r[3]; // 800D5BC0
  c->lr=0x800D5BC8u; f_800BB8EC(c); // 800D5BC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D5BC8
  if (crb(c,2)) { goto L_800D5C04; } // 800D5BCC
  c->lr=0x800D5BD4u; f_800A23BC(c); // 800D5BD0
  c->lr=0x800D5BD8u; f_800BB828(c); // 800D5BD4
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D5BD8
  c->lr=0x800D5BE0u; f_800BE9A4(c); // 800D5BDC
  cmps(c,0,(int32_t)c->r[3],0); // 800D5BE0
  if (crb(c,2)) { goto L_800D5BF8; } // 800D5BE4
  c->lr=0x800D5BECu; f_800A23BC(c); // 800D5BE8
  c->lr=0x800D5BF0u; f_800BB828(c); // 800D5BEC
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D5BF0
  c->lr=0x800D5BF8u; f_800E1BF4(c); // 800D5BF4
L_800D5BF8:;
  c->r[0]=0u+0x00000000u; // 800D5BF8
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D5BFC
  goto L_800D5C2C; // 800D5C00
L_800D5C04:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5C04
  c->lr=0x800D5C0Cu; f_800D557C(c); // 800D5C08
  cmps(c,0,(int32_t)c->r[3],0); // 800D5C0C
  if (crb(c,2)) { goto L_800D5C2C; } // 800D5C10
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C14
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800D5C18
  c->r[3]=c->r[31]|c->r[31]; // 800D5C1C
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D5C20
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5C24
  c->lr=0x800D5C2Cu; f_800D5A00(c); // 800D5C28
L_800D5C2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5C30
  c->lr=c->r[0]; // 800D5C34
  c->r[1]=c->r[1]+0x00000010u; // 800D5C38
  return; // 800D5C3C
}

// fn_800D5C40
void f_800D5C40(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D5C40
  cmps(c,0,(int32_t)c->r[0],0); // 800D5C44
  if (crb(c,2)) return; // 800D5C48
  c->r[0]=0u+0x00000000u; // 800D5C4C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D5C50
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C54
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800D5C58
  c->r[4]=0u+0x00000004u; // 800D5C5C
  f_800BB8E4(c); return; // 800D5C60
  return; // 800D5C64
}

// fn_800D5C68
void f_800D5C68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5C68
  c->r[0]=c->lr; // 800D5C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5C70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5C74
  c->r[31]=c->r[3]|c->r[3]; // 800D5C78
  c->r[3]=0u+0x00000001u; // 800D5C7C
  c->lr=0x800D5C84u; f_8005D714(c); // 800D5C80
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C84
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D5C88
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800D5C8C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5C90
  fcmp(c,0,c->f[1],c->f[0]); // 800D5C94
  if (crb(c,1)) { goto L_800D5CB0; } // 800D5C98
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800D5C9C
  c->r[3]=c->r[31]|c->r[31]; // 800D5CA0
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D5CA4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5CA8
  c->lr=0x800D5CB0u; f_800D5A00(c); // 800D5CAC
L_800D5CB0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5CB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5CB4
  c->lr=c->r[0]; // 800D5CB8
  c->r[1]=c->r[1]+0x00000010u; // 800D5CBC
  return; // 800D5CC0
}

// fn_800D5CC4
void f_800D5CC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5CC4
  c->r[0]=c->lr; // 800D5CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5CD0
  c->r[31]=c->r[3]|c->r[3]; // 800D5CD4
  c->lr=0x800D5CDCu; f_800BB8EC(c); // 800D5CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800D5CDC
  if (crb(c,2)) { goto L_800D5D14; } // 800D5CE0
  c->lr=0x800D5CE8u; f_800A23BC(c); // 800D5CE4
  c->lr=0x800D5CECu; f_800BB828(c); // 800D5CE8
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D5CEC
  c->lr=0x800D5CF4u; f_800BE9A4(c); // 800D5CF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D5CF4
  if (crb(c,2)) { goto L_800D5D0C; } // 800D5CF8
  c->lr=0x800D5D00u; f_800A23BC(c); // 800D5CFC
  c->lr=0x800D5D04u; f_800BB828(c); // 800D5D00
  c->r[4]=R32(c->r[31]+0x00000018u); // 800D5D04
  c->lr=0x800D5D0Cu; f_800E1BF4(c); // 800D5D08
L_800D5D0C:;
  c->r[0]=0u+0x00000000u; // 800D5D0C
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D5D10
L_800D5D14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5D14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5D18
  c->lr=c->r[0]; // 800D5D1C
  c->r[1]=c->r[1]+0x00000010u; // 800D5D20
  return; // 800D5D24
}

// fn_800D5D28
void f_800D5D28(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5D28
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800D5D2C
  c->r[4]=R32(c->r[3]+0x00000014u); // 800D5D30
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5D34
  f_800D5A00(c); return; // 800D5D38
}

// fn_800D5D3C
void f_800D5D3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5D3C
  c->r[0]=c->lr; // 800D5D40
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D5D44
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D5D48
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D5D4C
  W32(c->r[1]+0x00000044u,c->r[29]); // 800D5D50
  W32(c->r[1]+0x00000040u,c->r[28]); // 800D5D54
  c->r[28]=c->r[3]|c->r[3]; // 800D5D58
  c->r[29]=c->r[4]|c->r[4]; // 800D5D5C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800D5D60
  cmps(c,0,(int32_t)c->r[0],0); // 800D5D64
  if (!crb(c,2)) { goto L_800D5F08; } // 800D5D68
  c->lr=0x800D5D70u; f_800A23BC(c); // 800D5D6C
  c->lr=0x800D5D74u; f_800A23B4(c); // 800D5D70
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D5D74
  c->lr=0x800D5D7Cu; f_800DFE20(c); // 800D5D78
  c->r[31]=c->r[3]|c->r[3]; // 800D5D7C
  c->lr=0x800D5D84u; f_800A23BC(c); // 800D5D80
  c->lr=0x800D5D88u; f_800A23B4(c); // 800D5D84
  c->r[4]=c->r[31]|c->r[31]; // 800D5D88
  c->lr=0x800D5D90u; f_800BEDA0(c); // 800D5D8C
  c->lr=0x800D5D94u; f_800CF5E4(c); // 800D5D90
  c->r[31]=c->r[3]|c->r[3]; // 800D5D94
  c->lr=0x800D5D9Cu; f_800A23BC(c); // 800D5D98
  c->lr=0x800D5DA0u; f_800C23E4(c); // 800D5D9C
  c->r[30]=c->r[3]|c->r[3]; // 800D5DA0
  c->lr=0x800D5DA8u; f_800A23BC(c); // 800D5DA4
  c->r[4]=0u+0x00000000u; // 800D5DA8
  c->lr=0x800D5DB0u; f_800C23EC(c); // 800D5DAC
  c->lr=0x800D5DB4u; f_800A23BC(c); // 800D5DB0
  c->lr=0x800D5DB8u; f_800BB828(c); // 800D5DB4
  c->r[4]=R32(c->r[13]+0xFFFF8900u); // 800D5DB8
  c->r[5]=0u+0x00000124u; // 800D5DBC
  c->r[6]=0u+0xFFFFFFFFu; // 800D5DC0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5DC4
  c->lr=0x800D5DCCu; f_800E1ABC(c); // 800D5DC8
  c->lr=0x800D5DD0u; f_800A23BC(c); // 800D5DCC
  c->lr=0x800D5DD4u; f_800BB808(c); // 800D5DD0
  c->r[4]=c->r[13]+0xFFFF8904u; // 800D5DD4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D5DD8
  c->r[5]=c->r[13]+0xFFFF88F0u; // 800D5DDC
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D5DE0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D5DE4
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D5DE8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5DEC
  c->lr=0x800D5DF4u; f_800CAF70(c); // 800D5DF0
  W32(c->r[28]+0x00000020u,c->r[3]); // 800D5DF4
  c->lr=0x800D5DFCu; f_800A23BC(c); // 800D5DF8
  c->r[4]=c->r[30]|c->r[30]; // 800D5DFC
  c->lr=0x800D5E04u; f_800C23EC(c); // 800D5E00
  cmps(c,0,(int32_t)c->r[29],2); // 800D5E04
  if (crb(c,2)) { goto L_800D5E30; } // 800D5E08
  if (!crb(c,0)) { goto L_800D5E44; } // 800D5E0C
  cmps(c,0,(int32_t)c->r[29],1); // 800D5E10
  if (!crb(c,0)) { goto L_800D5E1C; } // 800D5E14
  goto L_800D5E44; // 800D5E18
L_800D5E1C:;
  c->r[0]=0u+0x00000125u; // 800D5E1C
  W32(c->r[28]+0x00000040u,c->r[0]); // 800D5E20
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5E24
  {uint32_t ea=c->r[28]+0x00000044u; WF32(ea,c->f[0]);} // 800D5E28
  goto L_800D5E54; // 800D5E2C
L_800D5E30:;
  c->r[0]=0u+0x00000125u; // 800D5E30
  W32(c->r[28]+0x00000040u,c->r[0]); // 800D5E34
  {uint32_t ea=c->r[2]+0xFFFF8904u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5E38
  {uint32_t ea=c->r[28]+0x00000044u; WF32(ea,c->f[0]);} // 800D5E3C
  goto L_800D5E54; // 800D5E40
L_800D5E44:;
  c->r[0]=0u+0xFFFFFFFFu; // 800D5E44
  W32(c->r[28]+0x00000040u,c->r[0]); // 800D5E48
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5E4C
  {uint32_t ea=c->r[28]+0x00000044u; WF32(ea,c->f[0]);} // 800D5E50
L_800D5E54:;
  c->lr=0x800D5E58u; f_800A23BC(c); // 800D5E54
  c->lr=0x800D5E5Cu; f_800BB800(c); // 800D5E58
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D5E5C
  c->lr=0x800D5E64u; f_800BBD58(c); // 800D5E60
  c->r[4]=0u+0x00000000u; // 800D5E64
  c->lr=0x800D5E6Cu; f_800C95A0(c); // 800D5E68
  c->lr=0x800D5E70u; f_800A23BC(c); // 800D5E6C
  c->lr=0x800D5E74u; f_800BB800(c); // 800D5E70
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D5E74
  c->lr=0x800D5E7Cu; f_800C1284(c); // 800D5E78
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E7C
  if (crb(c,2)) { goto L_800D5F08; } // 800D5E80
  c->lr=0x800D5E88u; f_800A23BC(c); // 800D5E84
  c->lr=0x800D5E8Cu; f_800BB800(c); // 800D5E88
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D5E8C
  c->lr=0x800D5E94u; f_800BBD58(c); // 800D5E90
  c->lr=0x800D5E98u; f_800C9ED8(c); // 800D5E94
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E98
  if (crb(c,2)) { goto L_800D5F08; } // 800D5E9C
  c->r[3]=c->r[1]+0x00000008u; // 800D5EA0
  c->lr=0x800D5EA8u; f_8004B0A0(c); // 800D5EA4
  c->lr=0x800D5EACu; f_800A23BC(c); // 800D5EA8
  c->lr=0x800D5EB0u; f_800BB800(c); // 800D5EAC
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D5EB0
  c->lr=0x800D5EB8u; f_800BBD58(c); // 800D5EB4
  c->r[4]=c->r[28]+0x00000030u; // 800D5EB8
  c->lr=0x800D5EC0u; f_800C7788(c); // 800D5EBC
  c->lr=0x800D5EC4u; f_800A23BC(c); // 800D5EC0
  c->lr=0x800D5EC8u; f_800BB800(c); // 800D5EC4
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D5EC8
  c->lr=0x800D5ED0u; f_800BBD58(c); // 800D5ECC
  c->r[4]=c->r[1]+0x00000008u; // 800D5ED0
  c->lr=0x800D5ED8u; f_800C7880(c); // 800D5ED4
  c->lr=0x800D5EDCu; f_800A23BC(c); // 800D5ED8
  c->lr=0x800D5EE0u; f_800BB808(c); // 800D5EDC
  c->r[4]=R32(c->r[28]+0x00000020u); // 800D5EE0
  c->lr=0x800D5EE8u; f_800BBC8C(c); // 800D5EE4
  c->r[4]=0u+0x00000001u; // 800D5EE8
  c->lr=0x800D5EF0u; f_800CAD44(c); // 800D5EEC
  c->lr=0x800D5EF4u; f_800A23BC(c); // 800D5EF0
  c->lr=0x800D5EF8u; f_800BB808(c); // 800D5EF4
  c->r[4]=R32(c->r[28]+0x00000020u); // 800D5EF8
  c->lr=0x800D5F00u; f_800BBC8C(c); // 800D5EFC
  c->r[4]=c->r[1]+0x00000008u; // 800D5F00
  c->lr=0x800D5F08u; f_800CAD4C(c); // 800D5F04
L_800D5F08:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D5F08
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D5F0C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800D5F10
  c->r[28]=R32(c->r[1]+0x00000040u); // 800D5F14
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D5F18
  c->lr=c->r[0]; // 800D5F1C
  c->r[1]=c->r[1]+0x00000050u; // 800D5F20
  return; // 800D5F24
}

// fn_800D5F28
void f_800D5F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F28
  c->r[0]=c->lr; // 800D5F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5F30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5F34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5F38
  c->r[30]=c->r[3]|c->r[3]; // 800D5F3C
  c->lr=0x800D5F44u; f_800A23BC(c); // 800D5F40
  c->lr=0x800D5F48u; f_800BB828(c); // 800D5F44
  c->r[4]=R32(c->r[13]+0xFFFF8900u); // 800D5F48
  c->lr=0x800D5F50u; f_800BB9DC(c); // 800D5F4C
  c->r[31]=c->r[3]|c->r[3]; // 800D5F50
  cmps(c,0,(int32_t)c->r[3],0); // 800D5F54
  if (crb(c,2)) { goto L_800D5F6C; } // 800D5F58
  c->lr=0x800D5F60u; f_800A23BC(c); // 800D5F5C
  c->lr=0x800D5F64u; f_800BB828(c); // 800D5F60
  c->r[4]=c->r[31]|c->r[31]; // 800D5F64
  c->lr=0x800D5F6Cu; f_800E1BF4(c); // 800D5F68
L_800D5F6C:;
  c->r[31]=R32(c->r[30]+0x00000020u); // 800D5F6C
  cmps(c,0,(int32_t)c->r[31],0); // 800D5F70
  if (crb(c,2)) { goto L_800D5F90; } // 800D5F74
  c->lr=0x800D5F7Cu; f_800A23BC(c); // 800D5F78
  c->lr=0x800D5F80u; f_800BB808(c); // 800D5F7C
  c->r[4]=c->r[31]|c->r[31]; // 800D5F80
  c->lr=0x800D5F88u; f_800CB00C(c); // 800D5F84
  c->r[0]=0u+0x00000000u; // 800D5F88
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D5F8C
L_800D5F90:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5F90
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D5F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5F98
  c->lr=c->r[0]; // 800D5F9C
  c->r[1]=c->r[1]+0x00000010u; // 800D5FA0
  return; // 800D5FA4
}

// fn_800D5FA8
void f_800D5FA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5FA8
  c->r[0]=c->lr; // 800D5FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5FB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5FB4
  c->r[31]=c->r[3]|c->r[3]; // 800D5FB8
  c->lr=0x800D5FC0u; f_800BB8D0(c); // 800D5FBC
  c->r[0]=0u+0x00000000u; // 800D5FC0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D5FC4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D5FC8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D5FCC
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D5FD0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5FD4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D5FD8
  W32(c->r[31]+0x00000020u,c->r[0]); // 800D5FDC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800D5FE0
  c->r[0]=0u+0xFFFFFFFFu; // 800D5FE4
  W32(c->r[31]+0x00000040u,c->r[0]); // 800D5FE8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800D5FEC
  c->r[3]=c->r[31]|c->r[31]; // 800D5FF0
  c->r[4]=0u+0x00000000u; // 800D5FF4
  c->lr=0x800D5FFCu; f_800BB8E4(c); // 800D5FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5FFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6000
  c->lr=c->r[0]; // 800D6004
  c->r[1]=c->r[1]+0x00000010u; // 800D6008
  return; // 800D600C
}

// fn_800D6010
void f_800D6010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6010
  c->r[0]=c->lr; // 800D6014
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6018
  c->r[11]=c->r[1]+0x00000020u; // 800D601C
  c->lr=0x800D6024u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6020
  c->r[27]=c->r[3]|c->r[3]; // 800D6024
  c->r[28]=c->r[4]|c->r[4]; // 800D6028
  c->r[29]=c->r[5]|c->r[5]; // 800D602C
  c->r[31]=c->r[6]|c->r[6]; // 800D6030
  c->r[30]=c->r[7]|c->r[7]; // 800D6034
  c->lr=0x800D603Cu; f_800D5FA8(c); // 800D6038
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800D603C
  W32(c->r[27]+0x00000010u,c->r[29]); // 800D6040
  W32(c->r[27]+0x00000014u,c->r[31]); // 800D6044
  c->r[0]=0u+0x00000000u; // 800D6048
  W32(c->r[27]+0x00000018u,c->r[0]); // 800D604C
  c->lr=0x800D6054u; f_800A23BC(c); // 800D6050
  c->lr=0x800D6058u; f_800A23B4(c); // 800D6054
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 800D6058
  c->lr=0x800D6060u; f_800BEDE0(c); // 800D605C
  c->r[31]=c->r[3]|c->r[3]; // 800D6060
  cmps(c,0,(int32_t)c->r[3],0); // 800D6064
  if (crb(c,2)) { goto L_800D60A0; } // 800D6068
  c->lr=0x800D6070u; f_800A23BC(c); // 800D606C
  c->lr=0x800D6074u; f_800A23B4(c); // 800D6070
  c->r[4]=c->r[31]|c->r[31]; // 800D6074
  c->lr=0x800D607Cu; f_800BEDA0(c); // 800D6078
  c->lr=0x800D6080u; f_800CF5EC(c); // 800D607C
  W32(c->r[27]+0x00000018u,c->r[3]); // 800D6080
  cmps(c,0,(int32_t)c->r[30],0); // 800D6084
  if (crb(c,2)) { goto L_800D60A0; } // 800D6088
  c->lr=0x800D6090u; f_800A23BC(c); // 800D608C
  c->lr=0x800D6094u; f_800BB76C(c); // 800D6090
  c->r[4]=0u+0x00000002u; // 800D6094
  c->r[5]=R32(c->r[27]+0x00000018u); // 800D6098
  c->lr=0x800D60A0u; f_800D3244(c); // 800D609C
L_800D60A0:;
  c->r[3]=c->r[27]|c->r[27]; // 800D60A0
  c->r[4]=0u+0x00000000u; // 800D60A4
  c->lr=0x800D60ACu; f_800BB8E4(c); // 800D60A8
  c->r[11]=c->r[1]+0x00000020u; // 800D60AC
  c->lr=0x800D60B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D60B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D60B4
  c->lr=c->r[0]; // 800D60B8
  c->r[1]=c->r[1]+0x00000020u; // 800D60BC
  return; // 800D60C0
}

// fn_800D60C4
void f_800D60C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D60C4
  c->r[0]=c->lr; // 800D60C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D60CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D60D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D60D4
  c->r[30]=c->r[3]|c->r[3]; // 800D60D8
  c->lr=0x800D60E0u; f_800BB910(c); // 800D60DC
  c->lr=0x800D60E4u; f_800A23BC(c); // 800D60E0
  c->lr=0x800D60E8u; f_800BB800(c); // 800D60E4
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D60E8
  c->lr=0x800D60F0u; f_800C1284(c); // 800D60EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D60F0
  if (crb(c,2)) { goto L_800D61B0; } // 800D60F4
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D60F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D60FC
  if (crb(c,0)) { goto L_800D618C; } // 800D6100
  c->r[3]=0u+0x00000001u; // 800D6104
  c->lr=0x800D610Cu; f_8005D714(c); // 800D6108
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D610C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D6110
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800D6114
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6118
  fcmp(c,0,c->f[1],c->f[0]); // 800D611C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D6120
  if (!crb(c,2)) { goto L_800D618C; } // 800D6124
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D6128
  cmps(c,0,(int32_t)c->r[0],293); // 800D612C
  if (!crb(c,2)) { goto L_800D6164; } // 800D6130
  c->lr=0x800D6138u; f_800A23BC(c); // 800D6134
  c->lr=0x800D613Cu; f_800BB828(c); // 800D6138
  c->r[4]=R32(c->r[13]+0xFFFF8900u); // 800D613C
  c->lr=0x800D6144u; f_800BB9DC(c); // 800D6140
  c->r[31]=c->r[3]|c->r[3]; // 800D6144
  cmps(c,0,(int32_t)c->r[3],0); // 800D6148
  if (crb(c,2)) { goto L_800D6164; } // 800D614C
  c->lr=0x800D6154u; f_800A23BC(c); // 800D6150
  c->lr=0x800D6158u; f_800BB828(c); // 800D6154
  c->r[4]=c->r[31]|c->r[31]; // 800D6158
  c->lr=0x800D6160u; f_800BB99C(c); // 800D615C
  c->lr=0x800D6164u; f_800E1640(c); // 800D6160
L_800D6164:;
  c->lr=0x800D6168u; f_8006592C(c); // 800D6164
  c->r[4]=R32(c->r[30]+0x00000040u); // 800D6168
  c->r[5]=0u+0x00000000u; // 800D616C
  c->r[6]=0u+0xFFFFFFFFu; // 800D6170
  c->r[7]=0u+0xFFFFFFFFu; // 800D6174
  c->lr=0x800D617Cu; f_80048F20(c); // 800D6178
  c->r[0]=0u+0xFFFFFFFFu; // 800D617C
  W32(c->r[30]+0x00000040u,c->r[0]); // 800D6180
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6184
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800D6188
L_800D618C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D618C
  c->lr=0x800D6194u; f_800BB904(c); // 800D6190
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D6194
  c->r[3]=0u+0x80460000u; // 800D6198
  c->r[0]=c->r[3]+0x00000360u; // 800D619C
  c->r[12]=c->r[0]+c->r[4]; // 800D61A0
  c->r[3]=c->r[30]|c->r[30]; // 800D61A4
  c->lr=0x800D61ACu; f_802F09D0(c); // 800D61A8
  c->r[0]=c->r[0]|0x00000000u; // 800D61AC
L_800D61B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D61B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D61B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D61B8
  c->lr=c->r[0]; // 800D61BC
  c->r[1]=c->r[1]+0x00000010u; // 800D61C0
  return; // 800D61C4
}

// fn_800D61C8
void f_800D61C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D61C8
  c->r[0]=c->lr; // 800D61CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D61D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D61D4
  c->r[31]=c->r[3]|c->r[3]; // 800D61D8
  c->lr=0x800D61E0u; f_800A23BC(c); // 800D61DC
  c->lr=0x800D61E4u; f_800BB76C(c); // 800D61E0
  c->r[4]=0u+0x00000002u; // 800D61E4
  c->r[5]=R32(c->r[31]+0x00000018u); // 800D61E8
  c->lr=0x800D61F0u; f_800D32B8(c); // 800D61EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D61F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D61F4
  c->lr=c->r[0]; // 800D61F8
  c->r[1]=c->r[1]+0x00000010u; // 800D61FC
  return; // 800D6200
}

// fn_800D6204
void f_800D6204(Ctx* __restrict c) {
  return; // 800D6204
}

// fn_800D6208
void f_800D6208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6208
  c->r[0]=c->lr; // 800D620C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6210
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6214
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6218
  c->r[30]=c->r[3]|c->r[3]; // 800D621C
  c->lr=0x800D6224u; f_800A23BC(c); // 800D6220
  c->lr=0x800D6228u; f_800BB800(c); // 800D6224
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D6228
  c->lr=0x800D6230u; f_800BBD58(c); // 800D622C
  c->r[31]=c->r[3]|c->r[3]; // 800D6230
  c->r[3]=c->r[30]|c->r[30]; // 800D6234
  c->lr=0x800D623Cu; f_800BB8EC(c); // 800D6238
  cmps(c,0,(int32_t)c->r[3],0); // 800D623C
  if (crb(c,2)) { goto L_800D6288; } // 800D6240
  c->r[3]=c->r[31]|c->r[31]; // 800D6244
  c->r[4]=0u+0x00000000u; // 800D6248
  c->r[5]=0u+0x00000000u; // 800D624C
  c->lr=0x800D6254u; f_800C7B08(c); // 800D6250
  c->r[3]=c->r[31]|c->r[31]; // 800D6254
  c->r[4]=0u+0x00000001u; // 800D6258
  c->lr=0x800D6260u; f_800C9438(c); // 800D625C
  c->r[3]=c->r[31]|c->r[31]; // 800D6260
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6264
  c->lr=0x800D626Cu; f_800C84A8(c); // 800D6268
  c->r[3]=c->r[31]|c->r[31]; // 800D626C
  c->r[4]=0u+0x00000000u; // 800D6270
  c->lr=0x800D6278u; f_800C9FE0(c); // 800D6274
  c->r[4]=c->r[3]|c->r[3]; // 800D6278
  c->r[3]=c->r[31]|c->r[31]; // 800D627C
  c->r[5]=0u+0x00000006u; // 800D6280
  c->lr=0x800D6288u; f_800C81FC(c); // 800D6284
L_800D6288:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6288
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D628C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6290
  c->lr=c->r[0]; // 800D6294
  c->r[1]=c->r[1]+0x00000010u; // 800D6298
  return; // 800D629C
}

// fn_800D62A0
void f_800D62A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D62A0
  c->r[0]=c->lr; // 800D62A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D62A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D62AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D62B0
  c->r[30]=c->r[3]|c->r[3]; // 800D62B4
  c->lr=0x800D62BCu; f_800A23BC(c); // 800D62B8
  c->lr=0x800D62C0u; f_800BB800(c); // 800D62BC
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D62C0
  c->lr=0x800D62C8u; f_800BBD58(c); // 800D62C4
  c->r[31]=c->r[3]|c->r[3]; // 800D62C8
  c->r[3]=c->r[30]|c->r[30]; // 800D62CC
  c->lr=0x800D62D4u; f_800BB8EC(c); // 800D62D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D62D4
  if (crb(c,2)) { goto L_800D6330; } // 800D62D8
  c->r[3]=c->r[31]|c->r[31]; // 800D62DC
  c->lr=0x800D62E4u; f_800C9FF0(c); // 800D62E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D62E4
  if (!crb(c,2)) { goto L_800D62FC; } // 800D62E8
  c->r[3]=c->r[31]|c->r[31]; // 800D62EC
  c->r[4]=0u+0x00000001u; // 800D62F0
  c->r[5]=0u+0x00000000u; // 800D62F4
  c->lr=0x800D62FCu; f_800C7B08(c); // 800D62F8
L_800D62FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D62FC
  c->r[4]=0u+0x00000000u; // 800D6300
  c->lr=0x800D6308u; f_800C9438(c); // 800D6304
  c->r[3]=c->r[31]|c->r[31]; // 800D6308
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D630C
  c->lr=0x800D6314u; f_800C84A8(c); // 800D6310
  c->r[3]=c->r[31]|c->r[31]; // 800D6314
  c->r[4]=0u+0x00000001u; // 800D6318
  c->lr=0x800D6320u; f_800C9FE0(c); // 800D631C
  c->r[4]=c->r[3]|c->r[3]; // 800D6320
  c->r[3]=c->r[31]|c->r[31]; // 800D6324
  c->r[5]=0u+0x00000006u; // 800D6328
  c->lr=0x800D6330u; f_800C81FC(c); // 800D632C
L_800D6330:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6330
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6334
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6338
  c->lr=c->r[0]; // 800D633C
  c->r[1]=c->r[1]+0x00000010u; // 800D6340
  return; // 800D6344
}

// fn_800D6348
void f_800D6348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6348
  c->r[0]=c->lr; // 800D634C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6354
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6358
  c->r[30]=c->r[3]|c->r[3]; // 800D635C
  c->lr=0x800D6364u; f_800A23BC(c); // 800D6360
  c->lr=0x800D6368u; f_800BB800(c); // 800D6364
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D6368
  c->lr=0x800D6370u; f_800BBD58(c); // 800D636C
  c->r[31]=c->r[3]|c->r[3]; // 800D6370
  c->r[3]=c->r[30]|c->r[30]; // 800D6374
  c->lr=0x800D637Cu; f_800BB8EC(c); // 800D6378
  cmps(c,0,(int32_t)c->r[3],0); // 800D637C
  if (crb(c,2)) { goto L_800D63C4; } // 800D6380
  c->r[3]=c->r[31]|c->r[31]; // 800D6384
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6388
  c->lr=0x800D6390u; f_800C84A8(c); // 800D638C
  c->r[3]=c->r[31]|c->r[31]; // 800D6390
  c->r[4]=0u+0x00000002u; // 800D6394
  c->lr=0x800D639Cu; f_800C9FE0(c); // 800D6398
  c->r[4]=c->r[3]|c->r[3]; // 800D639C
  c->r[3]=c->r[31]|c->r[31]; // 800D63A0
  c->r[5]=0u+0x00000006u; // 800D63A4
  c->lr=0x800D63ACu; f_800C81FC(c); // 800D63A8
  c->r[3]=c->r[31]|c->r[31]; // 800D63AC
  c->r[4]=0u+0x00000000u; // 800D63B0
  c->lr=0x800D63B8u; f_800C9438(c); // 800D63B4
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D63B8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D63BC
  goto L_800D63F8; // 800D63C0
L_800D63C4:;
  c->r[3]=0u+0x00000001u; // 800D63C4
  c->lr=0x800D63CCu; f_8005D714(c); // 800D63C8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D63CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D63D0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800D63D4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D63D8
  fcmp(c,0,c->f[1],c->f[0]); // 800D63DC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D63E0
  if (!crb(c,2)) { goto L_800D63F8; } // 800D63E4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800D63E8
  c->r[3]=c->r[30]|c->r[30]; // 800D63EC
  c->r[4]=0u+0x00000001u; // 800D63F0
  c->lr=0x800D63F8u; f_800BB8E4(c); // 800D63F4
L_800D63F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D63F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D63FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6400
  c->lr=c->r[0]; // 800D6404
  c->r[1]=c->r[1]+0x00000010u; // 800D6408
  return; // 800D640C
}

// fn_800D6410
void f_800D6410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6410
  c->r[0]=c->lr; // 800D6414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D641C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6420
  c->r[30]=c->r[3]|c->r[3]; // 800D6424
  c->lr=0x800D642Cu; f_800A23BC(c); // 800D6428
  c->lr=0x800D6430u; f_800BB800(c); // 800D642C
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D6430
  c->lr=0x800D6438u; f_800BBD58(c); // 800D6434
  c->r[31]=c->r[3]|c->r[3]; // 800D6438
  c->r[3]=c->r[30]|c->r[30]; // 800D643C
  c->lr=0x800D6444u; f_800BB8EC(c); // 800D6440
  cmps(c,0,(int32_t)c->r[3],0); // 800D6444
  if (crb(c,2)) { goto L_800D64A8; } // 800D6448
  c->r[3]=c->r[30]|c->r[30]; // 800D644C
  c->lr=0x800D6454u; f_800D65C0(c); // 800D6450
  c->r[3]=c->r[31]|c->r[31]; // 800D6454
  c->lr=0x800D645Cu; f_800C9FF0(c); // 800D6458
  cmps(c,0,(int32_t)c->r[3],0); // 800D645C
  if (!crb(c,2)) { goto L_800D6474; } // 800D6460
  c->r[3]=c->r[31]|c->r[31]; // 800D6464
  c->r[4]=0u+0x00000001u; // 800D6468
  c->r[5]=0u+0x00000000u; // 800D646C
  c->lr=0x800D6474u; f_800C7B08(c); // 800D6470
L_800D6474:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6474
  c->r[4]=0u+0x00000000u; // 800D6478
  c->lr=0x800D6480u; f_800C9438(c); // 800D647C
  c->r[3]=c->r[31]|c->r[31]; // 800D6480
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6484
  c->lr=0x800D648Cu; f_800C84A8(c); // 800D6488
  c->r[3]=c->r[31]|c->r[31]; // 800D648C
  c->r[4]=0u+0x00000001u; // 800D6490
  c->lr=0x800D6498u; f_800C9FE0(c); // 800D6494
  c->r[4]=c->r[3]|c->r[3]; // 800D6498
  c->r[3]=c->r[31]|c->r[31]; // 800D649C
  c->r[5]=0u+0x00000006u; // 800D64A0
  c->lr=0x800D64A8u; f_800C81FC(c); // 800D64A4
L_800D64A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D64A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D64AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D64B0
  c->lr=c->r[0]; // 800D64B4
  c->r[1]=c->r[1]+0x00000010u; // 800D64B8
  return; // 800D64BC
}

// fn_800D64C0
void f_800D64C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64C0
  c->r[0]=c->lr; // 800D64C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D64C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D64CC
  c->r[31]=c->r[3]|c->r[3]; // 800D64D0
  c->lr=0x800D64D8u; f_800BB904(c); // 800D64D4
  cmpu(c,0,c->r[3],0x00000001u); // 800D64D8
  if (crb(c,2)) { goto L_800D64EC; } // 800D64DC
  c->r[3]=c->r[31]|c->r[31]; // 800D64E0
  c->r[4]=0u+0x00000001u; // 800D64E4
  c->lr=0x800D64ECu; f_800BB8E4(c); // 800D64E8
L_800D64EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D64EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D64F0
  c->lr=c->r[0]; // 800D64F4
  c->r[1]=c->r[1]+0x00000010u; // 800D64F8
  return; // 800D64FC
}

// fn_800D6500
void f_800D6500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6500
  c->r[0]=c->lr; // 800D6504
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6508
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D650C
  c->r[31]=c->r[3]|c->r[3]; // 800D6510
  c->lr=0x800D6518u; f_800BB904(c); // 800D6514
  cmpu(c,0,c->r[3],0x00000002u); // 800D6518
  if (crb(c,2)) { goto L_800D652C; } // 800D651C
  c->r[3]=c->r[31]|c->r[31]; // 800D6520
  c->r[4]=0u+0x00000002u; // 800D6524
  c->lr=0x800D652Cu; f_800BB8E4(c); // 800D6528
L_800D652C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D652C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6530
  c->lr=c->r[0]; // 800D6534
  c->r[1]=c->r[1]+0x00000010u; // 800D6538
  return; // 800D653C
}

// fn_800D6540
void f_800D6540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6540
  c->r[0]=c->lr; // 800D6544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D654C
  c->r[31]=c->r[3]|c->r[3]; // 800D6550
  c->lr=0x800D6558u; f_800BB904(c); // 800D6554
  cmpu(c,0,c->r[3],0x00000003u); // 800D6558
  if (crb(c,2)) { goto L_800D656C; } // 800D655C
  c->r[3]=c->r[31]|c->r[31]; // 800D6560
  c->r[4]=0u+0x00000003u; // 800D6564
  c->lr=0x800D656Cu; f_800BB8E4(c); // 800D6568
L_800D656C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D656C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6570
  c->lr=c->r[0]; // 800D6574
  c->r[1]=c->r[1]+0x00000010u; // 800D6578
  return; // 800D657C
}

// fn_800D6580
void f_800D6580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6580
  c->r[0]=c->lr; // 800D6584
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D658C
  c->r[31]=c->r[3]|c->r[3]; // 800D6590
  c->lr=0x800D6598u; f_800BB904(c); // 800D6594
  cmpu(c,0,c->r[3],0x00000004u); // 800D6598
  if (crb(c,2)) { goto L_800D65AC; } // 800D659C
  c->r[3]=c->r[31]|c->r[31]; // 800D65A0
  c->r[4]=0u+0x00000004u; // 800D65A4
  c->lr=0x800D65ACu; f_800BB8E4(c); // 800D65A8
L_800D65AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D65AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D65B0
  c->lr=c->r[0]; // 800D65B4
  c->r[1]=c->r[1]+0x00000010u; // 800D65B8
  return; // 800D65BC
}

// fn_800D65C0
void f_800D65C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D65C0
  c->r[0]=c->lr; // 800D65C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D65C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D65CC
  c->r[31]=c->r[3]|c->r[3]; // 800D65D0
  c->lr=0x800D65D8u; f_800D5F28(c); // 800D65D4
  c->r[3]=c->r[31]|c->r[31]; // 800D65D8
  c->r[4]=0u+0x00000000u; // 800D65DC
  c->lr=0x800D65E4u; f_800D5D3C(c); // 800D65E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D65E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D65E8
  c->lr=c->r[0]; // 800D65EC
  c->r[1]=c->r[1]+0x00000010u; // 800D65F0
  return; // 800D65F4
}

// fn_800D65F8
void f_800D65F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D65F8
  c->r[0]=c->lr; // 800D65FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6600
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6604
  c->r[31]=c->r[3]|c->r[3]; // 800D6608
  c->lr=0x800D6610u; f_800D5F28(c); // 800D660C
  c->r[3]=c->r[31]|c->r[31]; // 800D6610
  c->r[4]=0u+0x00000001u; // 800D6614
  c->lr=0x800D661Cu; f_800D5D3C(c); // 800D6618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D661C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6620
  c->lr=c->r[0]; // 800D6624
  c->r[1]=c->r[1]+0x00000010u; // 800D6628
  return; // 800D662C
}

// fn_800D6630
void f_800D6630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6630
  c->r[0]=c->lr; // 800D6634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6638
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D663C
  c->r[31]=c->r[3]|c->r[3]; // 800D6640
  c->lr=0x800D6648u; f_800D5F28(c); // 800D6644
  c->r[3]=c->r[31]|c->r[31]; // 800D6648
  c->r[4]=0u+0x00000002u; // 800D664C
  c->lr=0x800D6654u; f_800D5D3C(c); // 800D6650
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6654
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6658
  c->lr=c->r[0]; // 800D665C
  c->r[1]=c->r[1]+0x00000010u; // 800D6660
  return; // 800D6664
}

// fn_800D6668
void f_800D6668(Ctx* __restrict c) {
  f_800D5F28(c); return; // 800D6668
}

// fn_800D666C
void f_800D666C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D666C
  c->r[0]=c->lr; // 800D6670
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6678
  c->r[31]=R32(c->r[3]+0x00000020u); // 800D667C
  cmps(c,0,(int32_t)c->r[31],0); // 800D6680
  if (crb(c,2)) { goto L_800D66A0; } // 800D6684
  c->lr=0x800D668Cu; f_800A23BC(c); // 800D6688
  c->lr=0x800D6690u; f_800BB808(c); // 800D668C
  c->r[4]=c->r[31]|c->r[31]; // 800D6690
  c->lr=0x800D6698u; f_800BBC8C(c); // 800D6694
  c->lr=0x800D669Cu; f_800CADFC(c); // 800D6698
  goto L_800D66A4; // 800D669C
L_800D66A0:;
  c->r[3]=0u+0x00000000u; // 800D66A0
L_800D66A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D66A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D66A8
  c->lr=c->r[0]; // 800D66AC
  c->r[1]=c->r[1]+0x00000010u; // 800D66B0
  return; // 800D66B4
}

// fn_800D66B8
void f_800D66B8(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800D66B8
  c->r[3]=c->r[4]|c->r[4]; // 800D66BC
  c->r[4]=c->r[5]+0x00000030u; // 800D66C0
  f_8004A65C(c); return; // 800D66C4
}

// fn_800D66C8
void f_800D66C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D66C8
  c->r[0]=c->lr; // 800D66CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D66D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D66D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D66D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D66DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D66E0
  c->r[28]=c->r[3]|c->r[3]; // 800D66E4
  c->r[29]=c->r[4]|c->r[4]; // 800D66E8
  c->lr=0x800D66F0u; f_800A23BC(c); // 800D66EC
  c->lr=0x800D66F4u; f_800BB800(c); // 800D66F0
  c->r[4]=R32(c->r[28]+0x00000024u); // 800D66F4
  c->lr=0x800D66FCu; f_800C1284(c); // 800D66F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D66FC
  if (crb(c,2)) { goto L_800D6828; } // 800D6700
  c->r[3]=R32(c->r[28]+0x00000020u); // 800D6704
  c->r[0]=c->r[3]+0x00010000u; // 800D6708
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D670C
  if (crb(c,2)) { goto L_800D6828; } // 800D6710
  c->lr=0x800D6718u; f_800A23BC(c); // 800D6714
  c->lr=0x800D671Cu; f_800BB800(c); // 800D6718
  c->r[4]=R32(c->r[28]+0x00000024u); // 800D671C
  c->lr=0x800D6724u; f_800BBD58(c); // 800D6720
  c->r[30]=c->r[3]|c->r[3]; // 800D6724
  cmps(c,0,(int32_t)c->r[29],2); // 800D6728
  if (crb(c,2)) { goto L_800D6760; } // 800D672C
  if (!crb(c,0)) { goto L_800D6744; } // 800D6730
  cmps(c,0,(int32_t)c->r[29],0); // 800D6734
  if (crb(c,2)) { goto L_800D6770; } // 800D6738
  if (!crb(c,0)) { goto L_800D6750; } // 800D673C
  goto L_800D6780; // 800D6740
L_800D6744:;
  cmps(c,0,(int32_t)c->r[29],4); // 800D6744
  if (!crb(c,0)) { goto L_800D6780; } // 800D6748
  goto L_800D6770; // 800D674C
L_800D6750:;
  c->r[29]=0u+0x00000001u; // 800D6750
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6754
  c->lr=0x800D675Cu; f_800C84A0(c); // 800D6758
  goto L_800D6780; // 800D675C
L_800D6760:;
  c->r[29]=0u+0x00000001u; // 800D6760
  {uint32_t ea=c->r[2]+0xFFFF88C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6764
  c->lr=0x800D676Cu; f_800C84A0(c); // 800D6768
  goto L_800D6780; // 800D676C
L_800D6770:;
  c->r[29]=0u+0x00000000u; // 800D6770
  c->r[3]=c->r[30]|c->r[30]; // 800D6774
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6778
  c->lr=0x800D6780u; f_800C84A0(c); // 800D677C
L_800D6780:;
  c->r[31]=0u+0x804C0000u; // 800D6780
  c->r[3]=c->r[31]+0x00002650u; // 800D6784
  c->r[4]=0u+0x80460000u; // 800D6788
  c->r[4]=c->r[4]+0x00000430u; // 800D678C
  c->r[5]=c->r[29]|c->r[29]; // 800D6790
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6794
  c->lr=0x800D679Cu; f_802E7CC4(c); // 800D6798
  c->r[3]=c->r[30]|c->r[30]; // 800D679C
  {uint32_t ea=c->r[2]+0xFFFF8840u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D67A0
  c->lr=0x800D67A8u; f_800C84A8(c); // 800D67A4
  c->r[3]=c->r[30]|c->r[30]; // 800D67A8
  c->r[4]=0u+0x00000002u; // 800D67AC
  c->lr=0x800D67B4u; f_800C84B0(c); // 800D67B0
  c->r[3]=c->r[30]|c->r[30]; // 800D67B4
  c->r[4]=c->r[31]+0x00002650u; // 800D67B8
  c->r[5]=0u+0x00000000u; // 800D67BC
  c->lr=0x800D67C4u; f_800C8270(c); // 800D67C0
  c->r[3]=c->r[30]|c->r[30]; // 800D67C4
  c->r[4]=0u+0x00000000u; // 800D67C8
  c->r[5]=0u+0x00000006u; // 800D67CC
  c->lr=0x800D67D4u; f_800C8390(c); // 800D67D0
  c->r[31]=R32(c->r[28]+0x0000002Cu); // 800D67D4
  cmps(c,0,(int32_t)c->r[31],0); // 800D67D8
  if (crb(c,2)) { goto L_800D6828; } // 800D67DC
  cmps(c,0,(int32_t)c->r[29],3); // 800D67E0
  if (crb(c,2)) { goto L_800D6814; } // 800D67E4
  if (!crb(c,0)) { goto L_800D6828; } // 800D67E8
  cmps(c,0,(int32_t)c->r[29],0); // 800D67EC
  if (crb(c,2)) { goto L_800D6814; } // 800D67F0
  if (!crb(c,0)) { goto L_800D67FC; } // 800D67F4
  goto L_800D6828; // 800D67F8
L_800D67FC:;
  c->lr=0x800D6800u; f_800A23BC(c); // 800D67FC
  c->lr=0x800D6804u; f_800BB76C(c); // 800D6800
  c->r[4]=0u+0x00000001u; // 800D6804
  c->r[5]=c->r[31]|c->r[31]; // 800D6808
  c->lr=0x800D6810u; f_800D3244(c); // 800D680C
  goto L_800D6828; // 800D6810
L_800D6814:;
  c->lr=0x800D6818u; f_800A23BC(c); // 800D6814
  c->lr=0x800D681Cu; f_800BB76C(c); // 800D6818
  c->r[4]=0u+0x00000001u; // 800D681C
  c->r[5]=c->r[31]|c->r[31]; // 800D6820
  c->lr=0x800D6828u; f_800D327C(c); // 800D6824
L_800D6828:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6828
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D682C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6830
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D6834
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6838
  c->lr=c->r[0]; // 800D683C
  c->r[1]=c->r[1]+0x00000020u; // 800D6840
  return; // 800D6844
}

// fn_800D6848
void f_800D6848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6848
  c->r[0]=c->lr; // 800D684C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6854
  c->r[31]=c->r[3]|c->r[3]; // 800D6858
  c->r[4]=0u+0x80460000u; // 800D685C
  c->r[0]=c->r[4]+0x00000AACu; // 800D6860
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800D6864
  c->lr=0x800D686Cu; f_800BB894(c); // 800D6868
  c->r[3]=c->r[31]|c->r[31]; // 800D686C
  c->lr=0x800D6874u; f_800D68E8(c); // 800D6870
  c->r[3]=c->r[31]|c->r[31]; // 800D6874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6878
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D687C
  c->lr=c->r[0]; // 800D6880
  c->r[1]=c->r[1]+0x00000010u; // 800D6884
  return; // 800D6888
}

// dtor_800D688C
void f_800D688C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D688C
  c->r[0]=c->lr; // 800D6890
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6898
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D689C
  c->r[30]=c->r[3]|c->r[3]; // 800D68A0
  c->r[31]=c->r[4]|c->r[4]; // 800D68A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D68A8
  if (crb(c,2)) { goto L_800D68CC; } // 800D68AC
  c->r[4]=0u+0xFFFFFFFFu; // 800D68B0
  c->lr=0x800D68B8u; f_800BB850(c); // 800D68B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D68B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D68BC
  if (!crb(c,1)) { goto L_800D68CC; } // 800D68C0
  c->r[3]=c->r[30]|c->r[30]; // 800D68C4
  c->lr=0x800D68CCu; f_80047B20(c); // 800D68C8
L_800D68CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D68CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D68D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D68D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D68D8
  c->lr=c->r[0]; // 800D68DC
  c->r[1]=c->r[1]+0x00000010u; // 800D68E0
  return; // 800D68E4
}

// fn_800D68E8
void f_800D68E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D68E8
  c->r[0]=c->lr; // 800D68EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D68F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D68F4
  c->r[31]=c->r[3]|c->r[3]; // 800D68F8
  c->lr=0x800D6900u; f_800BB8D0(c); // 800D68FC
  c->r[3]=0u+0xFFFFFFFFu; // 800D6900
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800D6904
  c->r[0]=0u+0x00000000u; // 800D6908
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D690C
  W32(c->r[31]+0x00000014u,c->r[3]); // 800D6910
  W32(c->r[31]+0x00000018u,c->r[3]); // 800D6914
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800D6918
  W32(c->r[31]+0x00000020u,c->r[3]); // 800D691C
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D6920
  W32(c->r[31]+0x00000028u,c->r[0]); // 800D6924
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800D6928
  W32(c->r[31]+0x00000030u,c->r[0]); // 800D692C
  W32(c->r[31]+0x00000034u,c->r[0]); // 800D6930
  W32(c->r[31]+0x00000038u,c->r[3]); // 800D6934
  c->r[3]=c->r[31]|c->r[31]; // 800D6938
  c->r[4]=0u+0x00000001u; // 800D693C
  c->lr=0x800D6944u; f_800BB8E4(c); // 800D6940
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6944
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6948
  c->lr=c->r[0]; // 800D694C
  c->r[1]=c->r[1]+0x00000010u; // 800D6950
  return; // 800D6954
}

// fn_800D6958
void f_800D6958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6958
  c->r[0]=c->lr; // 800D695C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800D6960
  c->r[11]=c->r[1]+0x000000F0u; // 800D6964
  c->lr=0x800D696Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6968
  c->r[27]=c->r[3]|c->r[3]; // 800D696C
  c->r[28]=c->r[4]|c->r[4]; // 800D6970
  c->r[29]=c->r[5]|c->r[5]; // 800D6974
  c->r[30]=c->r[6]|c->r[6]; // 800D6978
  c->r[31]=c->r[7]|c->r[7]; // 800D697C
  c->r[3]=c->r[1]+0x00000008u; // 800D6980
  c->lr=0x800D6988u; f_8004B0A4(c); // 800D6984
  c->r[3]=c->r[27]|c->r[27]; // 800D6988
  c->lr=0x800D6990u; f_800D68E8(c); // 800D698C
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800D6990
  c->r[3]=0u+0xFFFFFFFFu; // 800D6994
  W32(c->r[27]+0x00000014u,c->r[3]); // 800D6998
  W32(c->r[27]+0x00000018u,c->r[3]); // 800D699C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D69A0
  W32(c->r[27]+0x00000020u,c->r[3]); // 800D69A4
  c->r[0]=0u+0x00000000u; // 800D69A8
  W32(c->r[27]+0x00000024u,c->r[0]); // 800D69AC
  W32(c->r[27]+0x00000028u,c->r[31]); // 800D69B0
  W32(c->r[27]+0x00000038u,c->r[3]); // 800D69B4
  W32(c->r[27]+0x00000010u,c->r[29]); // 800D69B8
  c->r[3]=c->r[1]+0x00000058u; // 800D69BC
  c->r[4]=0u+0x80460000u; // 800D69C0
  c->r[4]=c->r[4]+0x0000043Cu; // 800D69C4
  c->r[5]=c->r[28]|c->r[28]; // 800D69C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D69CC
  c->lr=0x800D69D4u; f_802E7CC4(c); // 800D69D0
  c->lr=0x800D69D8u; f_800A23BC(c); // 800D69D4
  c->lr=0x800D69DCu; f_800C23AC(c); // 800D69D8
  c->r[4]=c->r[1]+0x00000058u; // 800D69DC
  c->lr=0x800D69E4u; f_800CB9DC(c); // 800D69E0
  W32(c->r[27]+0x00000014u,c->r[3]); // 800D69E4
  c->r[3]=c->r[1]+0x00000018u; // 800D69E8
  c->r[4]=0u+0x80460000u; // 800D69EC
  c->r[4]=c->r[4]+0x00000448u; // 800D69F0
  c->r[5]=c->r[28]|c->r[28]; // 800D69F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D69F8
  c->lr=0x800D6A00u; f_802E7CC4(c); // 800D69FC
  c->lr=0x800D6A04u; f_800A23BC(c); // 800D6A00
  c->lr=0x800D6A08u; f_800C23AC(c); // 800D6A04
  c->r[4]=c->r[1]+0x00000018u; // 800D6A08
  c->lr=0x800D6A10u; f_800CB9DC(c); // 800D6A0C
  W32(c->r[27]+0x00000018u,c->r[3]); // 800D6A10
  cmps(c,0,(int32_t)c->r[3],0); // 800D6A14
  if (!crb(c,0)) { goto L_800D6A48; } // 800D6A18
  c->r[3]=c->r[1]+0x00000018u; // 800D6A1C
  c->r[4]=0u+0x80460000u; // 800D6A20
  c->r[4]=c->r[4]+0x00000454u; // 800D6A24
  c->r[5]=c->r[28]|c->r[28]; // 800D6A28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6A2C
  c->lr=0x800D6A34u; f_802E7CC4(c); // 800D6A30
  c->lr=0x800D6A38u; f_800A23BC(c); // 800D6A34
  c->lr=0x800D6A3Cu; f_800C23AC(c); // 800D6A38
  c->r[4]=c->r[1]+0x00000018u; // 800D6A3C
  c->lr=0x800D6A44u; f_800CB9DC(c); // 800D6A40
  W32(c->r[27]+0x00000018u,c->r[3]); // 800D6A44
L_800D6A48:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D6A48
  if (crb(c,2)) { goto L_800D6AC0; } // 800D6A4C
  c->lr=0x800D6A54u; f_800A23BC(c); // 800D6A50
  c->lr=0x800D6A58u; f_800BB800(c); // 800D6A54
  c->r[4]=c->r[30]|c->r[30]; // 800D6A58
  c->lr=0x800D6A60u; f_800BBD58(c); // 800D6A5C
  c->r[31]=c->r[3]|c->r[3]; // 800D6A60
  W32(c->r[27]+0x00000024u,c->r[30]); // 800D6A64
  c->r[3]=c->r[1]+0x00000098u; // 800D6A68
  c->r[4]=0u+0x80460000u; // 800D6A6C
  c->r[4]=c->r[4]+0x00000460u; // 800D6A70
  c->r[5]=c->r[28]|c->r[28]; // 800D6A74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6A78
  c->lr=0x800D6A80u; f_802E7CC4(c); // 800D6A7C
  c->r[3]=c->r[31]|c->r[31]; // 800D6A80
  c->r[4]=c->r[1]+0x00000098u; // 800D6A84
  c->r[5]=0u+0x00000001u; // 800D6A88
  c->lr=0x800D6A90u; f_800C6EF0(c); // 800D6A8C
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 800D6A90
  c->r[3]=c->r[1]+0x00000098u; // 800D6A94
  c->r[4]=0u+0x80460000u; // 800D6A98
  c->r[4]=c->r[4]+0x0000046Cu; // 800D6A9C
  c->r[5]=c->r[28]|c->r[28]; // 800D6AA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6AA4
  c->lr=0x800D6AACu; f_802E7CC4(c); // 800D6AA8
  c->r[3]=c->r[31]|c->r[31]; // 800D6AAC
  c->r[4]=c->r[1]+0x00000098u; // 800D6AB0
  c->r[5]=0u+0x00000001u; // 800D6AB4
  c->lr=0x800D6ABCu; f_800C6EF0(c); // 800D6AB8
  W32(c->r[27]+0x00000020u,c->r[3]); // 800D6ABC
L_800D6AC0:;
  c->r[3]=c->r[27]|c->r[27]; // 800D6AC0
  c->r[4]=0u+0x00000000u; // 800D6AC4
  c->lr=0x800D6ACCu; f_800BB8E4(c); // 800D6AC8
  c->r[11]=c->r[1]+0x000000F0u; // 800D6ACC
  c->lr=0x800D6AD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6AD0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800D6AD4
  c->lr=c->r[0]; // 800D6AD8
  c->r[1]=c->r[1]+0x000000F0u; // 800D6ADC
  return; // 800D6AE0
}

// fn_800D6AE4
void f_800D6AE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6AE4
  c->r[0]=c->lr; // 800D6AE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6AEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6AF0
  c->r[31]=c->r[3]|c->r[3]; // 800D6AF4
  c->lr=0x800D6AFCu; f_800BB910(c); // 800D6AF8
  c->r[3]=c->r[31]|c->r[31]; // 800D6AFC
  c->lr=0x800D6B04u; f_800BB904(c); // 800D6B00
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D6B04
  c->r[3]=0u+0x80460000u; // 800D6B08
  c->r[0]=c->r[3]+0x00000400u; // 800D6B0C
  c->r[12]=c->r[0]+c->r[4]; // 800D6B10
  c->r[3]=c->r[31]|c->r[31]; // 800D6B14
  c->lr=0x800D6B1Cu; f_802F09D0(c); // 800D6B18
  c->r[0]=c->r[0]|0x00000000u; // 800D6B1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6B20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6B24
  c->lr=c->r[0]; // 800D6B28
  c->r[1]=c->r[1]+0x00000010u; // 800D6B2C
  return; // 800D6B30
}

// fn_800D6B34
void f_800D6B34(Ctx* __restrict c) {
  W32(c->r[3]+0x00000038u,c->r[4]); // 800D6B34
  return; // 800D6B38
}

// fn_800D6B3C
void f_800D6B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6B3C
  c->r[0]=c->lr; // 800D6B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6B44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6B48
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6B4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6B50
  c->r[29]=c->r[3]|c->r[3]; // 800D6B54
  c->r[30]=0u+0x00000000u; // 800D6B58
  c->lr=0x800D6B60u; f_800BB8EC(c); // 800D6B5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6B60
  if (crb(c,2)) { goto L_800D6C28; } // 800D6B64
  c->r[0]=R32(c->r[29]+0x00000014u); // 800D6B68
  cmps(c,0,(int32_t)c->r[0],0); // 800D6B6C
  if (crb(c,0)) { goto L_800D6C84; } // 800D6B70
  c->r[4]=R32(c->r[29]+0x00000028u); // 800D6B74
  cmps(c,0,(int32_t)c->r[4],0); // 800D6B78
  if (crb(c,2)) { goto L_800D6B90; } // 800D6B7C
  c->r[3]=0u+0x00000000u; // 800D6B80
  c->lr=0x800D6B88u; f_800BABD0(c); // 800D6B84
  cmps(c,0,(int32_t)c->r[3],0); // 800D6B88
  if (crb(c,2)) { goto L_800D6C84; } // 800D6B8C
L_800D6B90:;
  c->r[31]=R32(c->r[29]+0x0000002Cu); // 800D6B90
  cmps(c,0,(int32_t)c->r[31],0); // 800D6B94
  if (crb(c,2)) { goto L_800D6BBC; } // 800D6B98
  c->lr=0x800D6BA0u; f_800A23BC(c); // 800D6B9C
  c->lr=0x800D6BA4u; f_800BB76C(c); // 800D6BA0
  c->r[4]=0u+0x00000001u; // 800D6BA4
  c->r[5]=c->r[31]|c->r[31]; // 800D6BA8
  c->lr=0x800D6BB0u; f_800D32B8(c); // 800D6BAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D6BB0
  if (crb(c,2)) { goto L_800D6BBC; } // 800D6BB4
  c->r[30]=0u+0x00000001u; // 800D6BB8
L_800D6BBC:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D6BBC
  c->r[0]=c->r[3]+0x00010000u; // 800D6BC0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D6BC4
  if (!crb(c,2)) { goto L_800D6BD0; } // 800D6BC8
  c->r[30]=0u+0x00000001u; // 800D6BCC
L_800D6BD0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D6BD0
  if (crb(c,2)) { goto L_800D6C84; } // 800D6BD4
  c->lr=0x800D6BDCu; f_800A23BC(c); // 800D6BD8
  c->lr=0x800D6BE0u; f_800C23AC(c); // 800D6BDC
  c->r[4]=R32(c->r[29]+0x00000014u); // 800D6BE0
  c->r[5]=0u+0x00000000u; // 800D6BE4
  c->lr=0x800D6BECu; f_800CBAEC(c); // 800D6BE8
  c->r[3]=c->r[29]|c->r[29]; // 800D6BEC
  c->r[4]=0u+0x00000002u; // 800D6BF0
  c->lr=0x800D6BF8u; f_800D66C8(c); // 800D6BF4
  c->lr=0x800D6BFCu; f_800A23BC(c); // 800D6BF8
  c->lr=0x800D6C00u; f_800A23C8(c); // 800D6BFC
  c->r[4]=R32(c->r[29]+0x00000030u); // 800D6C00
  c->lr=0x800D6C08u; f_800C01C8(c); // 800D6C04
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C08
  if (crb(c,2)) { goto L_800D6C84; } // 800D6C0C
  c->lr=0x800D6C14u; f_800A23BC(c); // 800D6C10
  c->lr=0x800D6C18u; f_800A23C8(c); // 800D6C14
  c->r[4]=R32(c->r[29]+0x00000030u); // 800D6C18
  c->lr=0x800D6C20u; f_800BBBC0(c); // 800D6C1C
  c->lr=0x800D6C24u; f_800CA82C(c); // 800D6C20
  goto L_800D6C84; // 800D6C24
L_800D6C28:;
  c->lr=0x800D6C2Cu; f_800A23BC(c); // 800D6C28
  c->lr=0x800D6C30u; f_800BB800(c); // 800D6C2C
  c->r[4]=R32(c->r[29]+0x00000024u); // 800D6C30
  c->lr=0x800D6C38u; f_800C1284(c); // 800D6C34
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C38
  if (crb(c,2)) { goto L_800D6C78; } // 800D6C3C
  c->lr=0x800D6C44u; f_800A23BC(c); // 800D6C40
  c->lr=0x800D6C48u; f_800BB800(c); // 800D6C44
  c->r[4]=R32(c->r[29]+0x00000024u); // 800D6C48
  c->lr=0x800D6C50u; f_800BBD58(c); // 800D6C4C
  c->r[4]=0u+0x00000000u; // 800D6C50
  c->lr=0x800D6C58u; f_800C7308(c); // 800D6C54
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C58
  if (crb(c,2)) { goto L_800D6C84; } // 800D6C5C
  c->lr=0x800D6C64u; f_800A23BC(c); // 800D6C60
  c->lr=0x800D6C68u; f_800BB800(c); // 800D6C64
  c->r[4]=R32(c->r[29]+0x00000024u); // 800D6C68
  c->lr=0x800D6C70u; f_800BBD58(c); // 800D6C6C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6C70
  c->lr=0x800D6C78u; f_800C84A0(c); // 800D6C74
L_800D6C78:;
  c->r[3]=c->r[29]|c->r[29]; // 800D6C78
  c->r[4]=0u+0x00000001u; // 800D6C7C
  c->lr=0x800D6C84u; f_800BB8E4(c); // 800D6C80
L_800D6C84:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6C84
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6C88
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6C8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6C90
  c->lr=c->r[0]; // 800D6C94
  c->r[1]=c->r[1]+0x00000020u; // 800D6C98
  return; // 800D6C9C
}

// fn_800D6CA0
void f_800D6CA0(Ctx* __restrict c) {
  return; // 800D6CA0
}

// fn_800D6CA4
void f_800D6CA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6CA4
  c->r[0]=c->lr; // 800D6CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6CB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6CB4
  c->r[30]=c->r[3]|c->r[3]; // 800D6CB8
  c->lr=0x800D6CC0u; f_800BB8EC(c); // 800D6CBC
  cmps(c,0,(int32_t)c->r[3],0); // 800D6CC0
  if (crb(c,2)) { goto L_800D6D64; } // 800D6CC4
  c->r[31]=R32(c->r[30]+0x00000014u); // 800D6CC8
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CCC
  if (crb(c,0)) { goto L_800D6D14; } // 800D6CD0
  c->lr=0x800D6CD8u; f_800A23BC(c); // 800D6CD4
  c->lr=0x800D6CDCu; f_800C23AC(c); // 800D6CD8
  c->r[4]=c->r[31]|c->r[31]; // 800D6CDC
  c->r[5]=0u+0x00000000u; // 800D6CE0
  c->lr=0x800D6CE8u; f_800CBAEC(c); // 800D6CE4
  c->lr=0x800D6CECu; f_800A23BC(c); // 800D6CE8
  c->lr=0x800D6CF0u; f_800A23C8(c); // 800D6CEC
  c->r[4]=R32(c->r[30]+0x00000030u); // 800D6CF0
  c->lr=0x800D6CF8u; f_800C01C8(c); // 800D6CF4
  cmps(c,0,(int32_t)c->r[3],0); // 800D6CF8
  if (crb(c,2)) { goto L_800D6D14; } // 800D6CFC
  c->lr=0x800D6D04u; f_800A23BC(c); // 800D6D00
  c->lr=0x800D6D08u; f_800A23C8(c); // 800D6D04
  c->r[4]=R32(c->r[30]+0x00000030u); // 800D6D08
  c->lr=0x800D6D10u; f_800BBBC0(c); // 800D6D0C
  c->lr=0x800D6D14u; f_800CA82C(c); // 800D6D10
L_800D6D14:;
  c->r[0]=R32(c->r[30]+0x00000024u); // 800D6D14
  cmps(c,0,(int32_t)c->r[0],0); // 800D6D18
  if (!crb(c,2)) { goto L_800D6D30; } // 800D6D1C
  c->r[3]=c->r[30]|c->r[30]; // 800D6D20
  c->r[4]=0u+0x00000001u; // 800D6D24
  c->lr=0x800D6D2Cu; f_800BB8E4(c); // 800D6D28
  goto L_800D6DA8; // 800D6D2C
L_800D6D30:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6D30
  c->r[4]=0u+0x00000001u; // 800D6D34
  c->lr=0x800D6D3Cu; f_800D66C8(c); // 800D6D38
  c->r[31]=R32(c->r[30]+0x00000038u); // 800D6D3C
  cmps(c,0,(int32_t)c->r[31],0); // 800D6D40
  if (crb(c,0)) { goto L_800D6DA8; } // 800D6D44
  c->lr=0x800D6D4Cu; f_8006592C(c); // 800D6D48
  c->r[4]=c->r[31]|c->r[31]; // 800D6D4C
  c->r[5]=0u+0x00000000u; // 800D6D50
  c->r[6]=0u+0xFFFFFFFFu; // 800D6D54
  c->r[7]=0u+0xFFFFFFFFu; // 800D6D58
  c->lr=0x800D6D60u; f_80048F20(c); // 800D6D5C
  goto L_800D6DA8; // 800D6D60
L_800D6D64:;
  c->lr=0x800D6D68u; f_800A23BC(c); // 800D6D64
  c->lr=0x800D6D6Cu; f_800BB800(c); // 800D6D68
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D6D6C
  c->lr=0x800D6D74u; f_800C1284(c); // 800D6D70
  cmps(c,0,(int32_t)c->r[3],0); // 800D6D74
  if (crb(c,2)) { goto L_800D6DA8; } // 800D6D78
  c->lr=0x800D6D80u; f_800A23BC(c); // 800D6D7C
  c->lr=0x800D6D84u; f_800BB800(c); // 800D6D80
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D6D84
  c->lr=0x800D6D8Cu; f_800BBD58(c); // 800D6D88
  c->r[4]=0u+0x00000000u; // 800D6D8C
  c->lr=0x800D6D94u; f_800C7308(c); // 800D6D90
  cmps(c,0,(int32_t)c->r[3],0); // 800D6D94
  if (crb(c,2)) { goto L_800D6DA8; } // 800D6D98
  c->r[3]=c->r[30]|c->r[30]; // 800D6D9C
  c->r[4]=0u+0x00000001u; // 800D6DA0
  c->lr=0x800D6DA8u; f_800BB8E4(c); // 800D6DA4
L_800D6DA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6DA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6DB0
  c->lr=c->r[0]; // 800D6DB4
  c->r[1]=c->r[1]+0x00000010u; // 800D6DB8
  return; // 800D6DBC
}

// fn_800D6DC0
void f_800D6DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6DC0
  c->r[0]=c->lr; // 800D6DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6DC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6DCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6DD0
  c->r[30]=c->r[3]|c->r[3]; // 800D6DD4
  c->lr=0x800D6DDCu; f_800BB8EC(c); // 800D6DD8
  cmps(c,0,(int32_t)c->r[3],0); // 800D6DDC
  if (crb(c,2)) { goto L_800D6E88; } // 800D6DE0
  c->r[31]=R32(c->r[30]+0x00000014u); // 800D6DE4
  cmps(c,0,(int32_t)c->r[31],0); // 800D6DE8
  if (crb(c,0)) { goto L_800D6E04; } // 800D6DEC
  c->lr=0x800D6DF4u; f_800A23BC(c); // 800D6DF0
  c->lr=0x800D6DF8u; f_800C23AC(c); // 800D6DF4
  c->r[4]=c->r[31]|c->r[31]; // 800D6DF8
  c->r[5]=0u+0x00000001u; // 800D6DFC
  c->lr=0x800D6E04u; f_800CBAEC(c); // 800D6E00
L_800D6E04:;
  c->r[31]=R32(c->r[30]+0x00000024u); // 800D6E04
  cmps(c,0,(int32_t)c->r[31],0); // 800D6E08
  if (!crb(c,2)) { goto L_800D6E20; } // 800D6E0C
  c->r[3]=c->r[30]|c->r[30]; // 800D6E10
  c->r[4]=0u+0x00000001u; // 800D6E14
  c->lr=0x800D6E1Cu; f_800BB8E4(c); // 800D6E18
  goto L_800D6ECC; // 800D6E1C
L_800D6E20:;
  c->lr=0x800D6E24u; f_800A23BC(c); // 800D6E20
  c->lr=0x800D6E28u; f_800BB800(c); // 800D6E24
  c->r[4]=c->r[31]|c->r[31]; // 800D6E28
  c->lr=0x800D6E30u; f_800BBD58(c); // 800D6E2C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6E30
  if (!crb(c,2)) { goto L_800D6E48; } // 800D6E34
  c->r[3]=c->r[30]|c->r[30]; // 800D6E38
  c->r[4]=0u+0x00000001u; // 800D6E3C
  c->lr=0x800D6E44u; f_800BB8E4(c); // 800D6E40
  goto L_800D6ECC; // 800D6E44
L_800D6E48:;
  c->r[4]=c->r[13]+0xFFFF890Cu; // 800D6E48
  c->r[5]=0u+0x00000000u; // 800D6E4C
  c->lr=0x800D6E54u; f_800C7268(c); // 800D6E50
  cmps(c,0,(int32_t)c->r[3],0); // 800D6E54
  if (!crb(c,0)) { goto L_800D6E78; } // 800D6E58
  c->r[3]=c->r[30]|c->r[30]; // 800D6E5C
  c->r[4]=0u+0x00000000u; // 800D6E60
  c->lr=0x800D6E68u; f_800D66C8(c); // 800D6E64
  c->r[3]=c->r[30]|c->r[30]; // 800D6E68
  c->r[4]=0u+0x00000001u; // 800D6E6C
  c->lr=0x800D6E74u; f_800BB8E4(c); // 800D6E70
  goto L_800D6ECC; // 800D6E74
L_800D6E78:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6E78
  c->r[4]=0u+0x00000003u; // 800D6E7C
  c->lr=0x800D6E84u; f_800D66C8(c); // 800D6E80
  goto L_800D6ECC; // 800D6E84
L_800D6E88:;
  c->lr=0x800D6E8Cu; f_800A23BC(c); // 800D6E88
  c->lr=0x800D6E90u; f_800BB800(c); // 800D6E8C
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D6E90
  c->lr=0x800D6E98u; f_800C1284(c); // 800D6E94
  cmps(c,0,(int32_t)c->r[3],0); // 800D6E98
  if (crb(c,2)) { goto L_800D6ECC; } // 800D6E9C
  c->lr=0x800D6EA4u; f_800A23BC(c); // 800D6EA0
  c->lr=0x800D6EA8u; f_800BB800(c); // 800D6EA4
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D6EA8
  c->lr=0x800D6EB0u; f_800BBD58(c); // 800D6EAC
  c->r[4]=0u+0x00000000u; // 800D6EB0
  c->lr=0x800D6EB8u; f_800C7308(c); // 800D6EB4
  cmps(c,0,(int32_t)c->r[3],0); // 800D6EB8
  if (crb(c,2)) { goto L_800D6ECC; } // 800D6EBC
  c->r[3]=c->r[30]|c->r[30]; // 800D6EC0
  c->r[4]=0u+0x00000001u; // 800D6EC4
  c->lr=0x800D6ECCu; f_800BB8E4(c); // 800D6EC8
L_800D6ECC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6ECC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6ED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6ED4
  c->lr=c->r[0]; // 800D6ED8
  c->r[1]=c->r[1]+0x00000010u; // 800D6EDC
  return; // 800D6EE0
}

// fn_800D6EE4
void f_800D6EE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6EE4
  c->r[0]=c->lr; // 800D6EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6EEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6EF0
  c->r[31]=c->r[3]|c->r[3]; // 800D6EF4
  c->lr=0x800D6EFCu; f_800BB904(c); // 800D6EF8
  cmpu(c,0,c->r[3],0x00000002u); // 800D6EFC
  if (crb(c,2)) { goto L_800D6F10; } // 800D6F00
  c->r[3]=c->r[31]|c->r[31]; // 800D6F04
  c->r[4]=0u+0x00000002u; // 800D6F08
  c->lr=0x800D6F10u; f_800BB8E4(c); // 800D6F0C
L_800D6F10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6F10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6F14
  c->lr=c->r[0]; // 800D6F18
  c->r[1]=c->r[1]+0x00000010u; // 800D6F1C
  return; // 800D6F20
}

// fn_800D6F24
void f_800D6F24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F24
  c->r[0]=c->lr; // 800D6F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6F30
  c->r[31]=c->r[3]|c->r[3]; // 800D6F34
  c->lr=0x800D6F3Cu; f_800BB904(c); // 800D6F38
  cmpu(c,0,c->r[3],0x00000003u); // 800D6F3C
  if (crb(c,2)) { goto L_800D6F50; } // 800D6F40
  c->r[3]=c->r[31]|c->r[31]; // 800D6F44
  c->r[4]=0u+0x00000003u; // 800D6F48
  c->lr=0x800D6F50u; f_800BB8E4(c); // 800D6F4C
L_800D6F50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6F50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6F54
  c->lr=c->r[0]; // 800D6F58
  c->r[1]=c->r[1]+0x00000010u; // 800D6F5C
  return; // 800D6F60
}

// fn_800D6F64
void f_800D6F64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F64
  c->r[0]=c->lr; // 800D6F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6F70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6F74
  c->r[30]=c->r[3]|c->r[3]; // 800D6F78
  c->r[31]=c->r[4]|c->r[4]; // 800D6F7C
  c->r[0]=R32(c->r[3]+0x000000DCu); // 800D6F80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800D6F84
  if (crb(c,2)) { goto L_800D6F9C; } // 800D6F88
  c->r[3]=c->r[31]|c->r[31]; // 800D6F8C
  c->lr=0x800D6F94u; f_80260AC8(c); // 800D6F90
  c->lr=0x800D6F98u; f_80260A64(c); // 800D6F94
  W32(c->r[30]+0x000000DCu,c->r[31]); // 800D6F98
L_800D6F9C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6F9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6FA4
  c->lr=c->r[0]; // 800D6FA8
  c->r[1]=c->r[1]+0x00000010u; // 800D6FAC
  return; // 800D6FB0
}

// fn_800D6FB4
void f_800D6FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6FB4
  c->r[0]=c->lr; // 800D6FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6FBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6FC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6FC4
  c->r[30]=c->r[3]|c->r[3]; // 800D6FC8
  c->lr=0x800D6FD0u; f_800A23BC(c); // 800D6FCC
  c->lr=0x800D6FD4u; f_800BB800(c); // 800D6FD0
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D6FD4
  c->lr=0x800D6FDCu; f_800C1284(c); // 800D6FD8
  cmps(c,0,(int32_t)c->r[3],0); // 800D6FDC
  if (crb(c,2)) { goto L_800D706C; } // 800D6FE0
  c->r[0]=R32(c->r[30]+0x00000088u); // 800D6FE4
  cmps(c,0,(int32_t)c->r[0],0); // 800D6FE8
  if (!crb(c,2)) { goto L_800D706C; } // 800D6FEC
  c->lr=0x800D6FF4u; f_800A23BC(c); // 800D6FF0
  c->lr=0x800D6FF8u; f_800BB808(c); // 800D6FF4
  c->r[4]=c->r[13]+0xFFFF8914u; // 800D6FF8
  c->r[5]=0u+0x80460000u; // 800D6FFC
  c->r[5]=c->r[5]+0x000005F8u; // 800D7000
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7004
  c->lr=0x800D700Cu; f_800CAF70(c); // 800D7008
  W32(c->r[30]+0x00000088u,c->r[3]); // 800D700C
  c->lr=0x800D7014u; f_800A23BC(c); // 800D7010
  c->lr=0x800D7018u; f_800BB800(c); // 800D7014
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7018
  c->lr=0x800D7020u; f_800BBD58(c); // 800D701C
  c->r[4]=0u+0x80460000u; // 800D7020
  c->r[4]=c->r[4]+0x00000604u; // 800D7024
  c->r[5]=0u+0x00000000u; // 800D7028
  c->lr=0x800D7030u; f_800C6EF0(c); // 800D702C
  c->r[31]=c->r[3]|c->r[3]; // 800D7030
  c->lr=0x800D7038u; f_800A23BC(c); // 800D7034
  c->lr=0x800D703Cu; f_800BB808(c); // 800D7038
  c->r[4]=R32(c->r[30]+0x00000088u); // 800D703C
  c->lr=0x800D7044u; f_800BBC8C(c); // 800D7040
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7044
  c->r[5]=c->r[31]|c->r[31]; // 800D7048
  c->lr=0x800D7050u; f_800BB94C(c); // 800D704C
  c->lr=0x800D7054u; f_800A23BC(c); // 800D7050
  c->lr=0x800D7058u; f_800BB800(c); // 800D7054
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7058
  c->lr=0x800D7060u; f_800BBD58(c); // 800D705C
  c->r[4]=R32(c->r[30]+0x00000088u); // 800D7060
  c->r[5]=0u+0x00000001u; // 800D7064
  c->lr=0x800D706Cu; f_800C8A3C(c); // 800D7068
L_800D706C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D706C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7074
  c->lr=c->r[0]; // 800D7078
  c->r[1]=c->r[1]+0x00000010u; // 800D707C
  return; // 800D7080
}

// fn_800D7084
void f_800D7084(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7084
  c->r[0]=c->lr; // 800D7088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D708C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7090
  c->r[31]=c->r[3]|c->r[3]; // 800D7094
  c->lr=0x800D709Cu; f_800A23BC(c); // 800D7098
  c->lr=0x800D70A0u; f_800BB808(c); // 800D709C
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D70A0
  c->lr=0x800D70A8u; f_800C0D08(c); // 800D70A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D70A8
  if (crb(c,2)) { goto L_800D70D8; } // 800D70AC
  c->lr=0x800D70B4u; f_800A23BC(c); // 800D70B0
  c->lr=0x800D70B8u; f_800BB800(c); // 800D70B4
  c->r[4]=R32(c->r[31]+0x00000084u); // 800D70B8
  c->lr=0x800D70C0u; f_800BBD58(c); // 800D70BC
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D70C0
  c->lr=0x800D70C8u; f_800C8B58(c); // 800D70C4
  c->lr=0x800D70CCu; f_800A23BC(c); // 800D70C8
  c->lr=0x800D70D0u; f_800BB808(c); // 800D70CC
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D70D0
  c->lr=0x800D70D8u; f_800CB00C(c); // 800D70D4
L_800D70D8:;
  c->r[0]=0u+0x00000000u; // 800D70D8
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D70DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D70E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D70E4
  c->lr=c->r[0]; // 800D70E8
  c->r[1]=c->r[1]+0x00000010u; // 800D70EC
  return; // 800D70F0
}

// fn_800D70F4
void f_800D70F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D70F4
  c->r[0]=c->lr; // 800D70F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D70FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7100
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7104
  c->r[30]=c->r[3]|c->r[3]; // 800D7108
  c->lr=0x800D7110u; f_800A23BC(c); // 800D710C
  c->lr=0x800D7114u; f_800BB800(c); // 800D7110
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7114
  c->lr=0x800D711Cu; f_800C1284(c); // 800D7118
  cmps(c,0,(int32_t)c->r[3],0); // 800D711C
  if (!crb(c,2)) { goto L_800D712C; } // 800D7120
  c->r[0]=0u+0x00000000u; // 800D7124
  W32(c->r[30]+0x00000084u,c->r[0]); // 800D7128
L_800D712C:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 800D712C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7130
  if (!crb(c,2)) { goto L_800D71B4; } // 800D7134
  c->lr=0x800D713Cu; f_800A23BC(c); // 800D7138
  c->lr=0x800D7140u; f_800C23E4(c); // 800D713C
  c->r[31]=c->r[3]|c->r[3]; // 800D7140
  c->lr=0x800D7148u; f_800A23BC(c); // 800D7144
  c->r[4]=0u+0x00000000u; // 800D7148
  c->lr=0x800D7150u; f_800C23EC(c); // 800D714C
  c->lr=0x800D7154u; f_800A23BC(c); // 800D7150
  c->lr=0x800D7158u; f_800BB800(c); // 800D7154
  c->r[4]=c->r[13]+0xFFFF891Cu; // 800D7158
  c->r[5]=0u+0x80460000u; // 800D715C
  c->r[5]=c->r[5]+0x00000610u; // 800D7160
  c->r[6]=0u+0x00000000u; // 800D7164
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7168
  c->r[7]=0u+0x00000003u; // 800D716C
  c->lr=0x800D7174u; f_800C98E0(c); // 800D7170
  W32(c->r[30]+0x00000084u,c->r[3]); // 800D7174
  c->lr=0x800D717Cu; f_800A23BC(c); // 800D7178
  c->lr=0x800D7180u; f_800BB800(c); // 800D717C
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7180
  c->lr=0x800D7188u; f_800BBD58(c); // 800D7184
  c->r[4]=0u+0x00000000u; // 800D7188
  c->r[5]=0u+0x00000006u; // 800D718C
  c->lr=0x800D7194u; f_800C7C34(c); // 800D7190
  c->r[3]=c->r[30]|c->r[30]; // 800D7194
  c->lr=0x800D719Cu; f_800D6FB4(c); // 800D7198
  c->r[3]=c->r[30]|c->r[30]; // 800D719C
  c->r[4]=0u+0x00000000u; // 800D71A0
  c->lr=0x800D71A8u; f_800D722C(c); // 800D71A4
  c->lr=0x800D71ACu; f_800A23BC(c); // 800D71A8
  c->r[4]=c->r[31]|c->r[31]; // 800D71AC
  c->lr=0x800D71B4u; f_800C23EC(c); // 800D71B0
L_800D71B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D71B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D71B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D71BC
  c->lr=c->r[0]; // 800D71C0
  c->r[1]=c->r[1]+0x00000010u; // 800D71C4
  return; // 800D71C8
}

// fn_800D71CC
void f_800D71CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D71CC
  c->r[0]=c->lr; // 800D71D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D71D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D71D8
  c->r[31]=c->r[3]|c->r[3]; // 800D71DC
  c->lr=0x800D71E4u; f_800A23BC(c); // 800D71E0
  c->lr=0x800D71E8u; f_800BB800(c); // 800D71E4
  c->r[4]=R32(c->r[31]+0x00000084u); // 800D71E8
  c->lr=0x800D71F0u; f_800C1284(c); // 800D71EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D71F0
  if (crb(c,2)) { goto L_800D7218; } // 800D71F4
  c->r[3]=c->r[31]|c->r[31]; // 800D71F8
  c->lr=0x800D7200u; f_800D7084(c); // 800D71FC
  c->lr=0x800D7204u; f_800A23BC(c); // 800D7200
  c->lr=0x800D7208u; f_800BB800(c); // 800D7204
  c->r[4]=R32(c->r[31]+0x00000084u); // 800D7208
  c->lr=0x800D7210u; f_800C9ADC(c); // 800D720C
  c->r[0]=0u+0x00000000u; // 800D7210
  W32(c->r[31]+0x00000084u,c->r[0]); // 800D7214
L_800D7218:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7218
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D721C
  c->lr=c->r[0]; // 800D7220
  c->r[1]=c->r[1]+0x00000010u; // 800D7224
  return; // 800D7228
}

// fn_800D722C
void f_800D722C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D722C
  c->r[0]=c->lr; // 800D7230
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7234
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7238
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D723C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D7240
  c->r[29]=c->r[3]|c->r[3]; // 800D7244
  c->r[30]=c->r[4]|c->r[4]; // 800D7248
  c->r[31]=R32(c->r[3]+0x00000084u); // 800D724C
  cmps(c,0,(int32_t)c->r[31],0); // 800D7250
  if (crb(c,2)) { goto L_800D728C; } // 800D7254
  c->lr=0x800D725Cu; f_800A23BC(c); // 800D7258
  c->lr=0x800D7260u; f_800BB800(c); // 800D725C
  c->r[4]=c->r[31]|c->r[31]; // 800D7260
  c->lr=0x800D7268u; f_800BBD58(c); // 800D7264
  c->r[4]=c->r[30]|c->r[30]; // 800D7268
  c->lr=0x800D7270u; f_800BB958(c); // 800D726C
  cmps(c,0,(int32_t)c->r[30],0); // 800D7270
  if (crb(c,2)) { goto L_800D7284; } // 800D7274
  c->r[3]=c->r[29]|c->r[29]; // 800D7278
  c->lr=0x800D7280u; f_800D6FB4(c); // 800D727C
  goto L_800D728C; // 800D7280
L_800D7284:;
  c->r[3]=c->r[29]|c->r[29]; // 800D7284
  c->lr=0x800D728Cu; f_800D7084(c); // 800D7288
L_800D728C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D728C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D7290
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D7294
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7298
  c->lr=c->r[0]; // 800D729C
  c->r[1]=c->r[1]+0x00000020u; // 800D72A0
  return; // 800D72A4
}

// fn_800D72A8
void f_800D72A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D72A8
  c->r[0]=c->lr; // 800D72AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D72B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D72B4
  c->r[31]=c->r[3]|c->r[3]; // 800D72B8
  c->r[3]=c->r[1]+0x00000008u; // 800D72BC
  c->lr=0x800D72C4u; f_8004B0A4(c); // 800D72C0
  c->lr=0x800D72C8u; f_800A23BC(c); // 800D72C4
  c->lr=0x800D72CCu; f_800BB800(c); // 800D72C8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800D72CC
  c->lr=0x800D72D4u; f_800BBD58(c); // 800D72D0
  c->r[4]=c->r[1]+0x00000008u; // 800D72D4
  c->lr=0x800D72DCu; f_800BD664(c); // 800D72D8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D72DC
  {uint32_t ea=c->r[2]+0xFFFF88B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D72E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D72E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D72E8
  c->lr=0x800D72F0u; f_800A23BC(c); // 800D72EC
  c->lr=0x800D72F4u; f_800BB808(c); // 800D72F0
  c->r[4]=c->r[13]+0xFFFF8928u; // 800D72F4
  c->r[5]=0u+0x80460000u; // 800D72F8
  c->r[5]=c->r[5]+0x00000620u; // 800D72FC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7300
  c->lr=0x800D7308u; f_800CAF70(c); // 800D7304
  W32(c->r[31]+0x00000094u,c->r[3]); // 800D7308
  c->lr=0x800D7310u; f_800A23BC(c); // 800D730C
  c->lr=0x800D7314u; f_800BB808(c); // 800D7310
  c->r[4]=R32(c->r[31]+0x00000094u); // 800D7314
  c->lr=0x800D731Cu; f_800BBC8C(c); // 800D7318
  c->r[4]=c->r[1]+0x00000008u; // 800D731C
  c->lr=0x800D7324u; f_800BCDE8(c); // 800D7320
  c->lr=0x800D7328u; f_8006592C(c); // 800D7324
  c->r[4]=0u+0x00000126u; // 800D7328
  c->r[5]=0u+0x00000000u; // 800D732C
  c->r[6]=0u+0xFFFFFFFFu; // 800D7330
  c->r[7]=0u+0xFFFFFFFFu; // 800D7334
  c->lr=0x800D733Cu; f_80048F20(c); // 800D7338
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D733C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7340
  c->lr=c->r[0]; // 800D7344
  c->r[1]=c->r[1]+0x00000020u; // 800D7348
  return; // 800D734C
}

// fn_800D7350
void f_800D7350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7350
  c->r[0]=c->lr; // 800D7354
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D7358
  c->r[11]=c->r[1]+0x00000040u; // 800D735C
  c->lr=0x800D7364u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7360
  c->r[27]=c->r[3]|c->r[3]; // 800D7364
  c->r[29]=c->r[4]|c->r[4]; // 800D7368
  c->r[30]=0u+0x00000000u; // 800D736C
  W32(c->r[3]+0x000000D8u,c->r[30]); // 800D7370
  c->r[4]=0u+0x00000000u; // 800D7374
  c->r[28]=0u+0x00000001u; // 800D7378
  c->r[31]=c->r[1]+0x00000008u; // 800D737C
L_800D7380:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 800D7380
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800D7384
  cmps(c,0,(int32_t)c->r[0],95); // 800D7388
  if (crb(c,2)) { goto L_800D73A4; } // 800D738C
  if (!crb(c,0)) { goto L_800D73CC; } // 800D7390
  cmps(c,0,(int32_t)c->r[0],0); // 800D7394
  if (crb(c,2)) { goto L_800D73A0; } // 800D7398
  goto L_800D73CC; // 800D739C
L_800D73A0:;
  c->r[28]=0u+0x00000000u; // 800D73A0
L_800D73A4:;
  W8(c->r[31]+c->r[4],c->r[30]); // 800D73A4
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D73A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D73AC
  cmps(c,0,(int32_t)c->r[0],102); // 800D73B0
  if (!crb(c,2)) { goto L_800D73C4; } // 800D73B4
  c->r[3]=c->r[1]+0x00000009u; // 800D73B8
  c->lr=0x800D73C0u; f_802EB928(c); // 800D73BC
  W32(c->r[27]+0x000000D8u,c->r[3]); // 800D73C0
L_800D73C4:;
  c->r[4]=0u+0x00000000u; // 800D73C4
  goto L_800D73D4; // 800D73C8
L_800D73CC:;
  W8(c->r[31]+c->r[4],c->r[3]); // 800D73CC
  c->r[4]=c->r[4]+0x00000001u; // 800D73D0
L_800D73D4:;
  c->r[29]=c->r[29]+0x00000001u; // 800D73D4
  cmps(c,0,(int32_t)c->r[28],0); // 800D73D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7380; } // 800D73DC
  c->r[11]=c->r[1]+0x00000040u; // 800D73E0
  c->lr=0x800D73E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D73E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D73E8
  c->lr=c->r[0]; // 800D73EC
  c->r[1]=c->r[1]+0x00000040u; // 800D73F0
  return; // 800D73F4
}

// fn_800D73F8
void f_800D73F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D73F8
  c->r[0]=c->lr; // 800D73FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7400
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7404
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7408
  c->r[30]=c->r[3]|c->r[3]; // 800D740C
  c->r[0]=0u+0x00000000u; // 800D7410
  W32(c->r[3]+0x000000D8u,c->r[0]); // 800D7414
  c->r[31]=R32(c->r[3]+0x00000024u); // 800D7418
  cmps(c,0,(int32_t)c->r[31],0); // 800D741C
  if (crb(c,2)) { goto L_800D7440; } // 800D7420
  c->lr=0x800D7428u; f_800A23BC(c); // 800D7424
  c->lr=0x800D742Cu; f_800C23AC(c); // 800D7428
  c->r[4]=c->r[31]|c->r[31]; // 800D742C
  c->lr=0x800D7434u; f_800CB954(c); // 800D7430
  c->r[4]=c->r[3]|c->r[3]; // 800D7434
  c->r[3]=c->r[30]|c->r[30]; // 800D7438
  c->lr=0x800D7440u; f_800D7350(c); // 800D743C
L_800D7440:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7440
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7444
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7448
  c->lr=c->r[0]; // 800D744C
  c->r[1]=c->r[1]+0x00000010u; // 800D7450
  return; // 800D7454
}

// fn_800D7458
void f_800D7458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7458
  c->r[0]=c->lr; // 800D745C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7464
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7468
  c->r[30]=c->r[3]|c->r[3]; // 800D746C
  c->r[31]=R32(c->r[3]+0x00000020u); // 800D7470
  cmps(c,0,(int32_t)c->r[31],0); // 800D7474
  if (crb(c,2)) { goto L_800D7498; } // 800D7478
  c->lr=0x800D7480u; f_800A23BC(c); // 800D747C
  c->lr=0x800D7484u; f_800C23AC(c); // 800D7480
  c->r[4]=c->r[31]|c->r[31]; // 800D7484
  c->lr=0x800D748Cu; f_800CB954(c); // 800D7488
  c->r[4]=c->r[3]|c->r[3]; // 800D748C
  c->r[3]=c->r[30]|c->r[30]; // 800D7490
  c->lr=0x800D7498u; f_800D7350(c); // 800D7494
L_800D7498:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7498
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D749C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D74A0
  c->lr=c->r[0]; // 800D74A4
  c->r[1]=c->r[1]+0x00000010u; // 800D74A8
  return; // 800D74AC
}

// fn_800D74B0
void f_800D74B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D74B0
  c->r[0]=c->lr; // 800D74B4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800D74B8
  c->r[11]=c->r[1]+0x000000F0u; // 800D74BC
  c->lr=0x800D74C4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D74C0
  c->r[28]=c->r[3]|c->r[3]; // 800D74C4
  c->r[29]=c->r[4]|c->r[4]; // 800D74C8
  c->r[3]=c->r[1]+0x00000084u; // 800D74CC
  c->lr=0x800D74D4u; f_8004B0A4(c); // 800D74D0
  c->r[3]=c->r[1]+0x00000078u; // 800D74D4
  c->lr=0x800D74DCu; f_8004B0A4(c); // 800D74D8
  c->r[3]=c->r[1]+0x0000006Cu; // 800D74DC
  c->lr=0x800D74E4u; f_8004B0A4(c); // 800D74E0
  c->r[3]=c->r[1]+0x00000060u; // 800D74E4
  c->lr=0x800D74ECu; f_8004B0A4(c); // 800D74E8
  c->r[3]=c->r[1]+0x00000054u; // 800D74EC
  c->lr=0x800D74F4u; f_8004B0A4(c); // 800D74F0
  c->r[3]=c->r[1]+0x00000048u; // 800D74F4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D74F8
  c->f[2]=c->f[1]; // 800D74FC
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7500
  c->lr=0x800D7508u; f_8004E34C(c); // 800D7504
  c->r[3]=c->r[1]+0x00000090u; // 800D7508
  c->lr=0x800D7510u; f_8004B0A0(c); // 800D750C
  c->r[30]=0u+0x00000000u; // 800D7510
  c->r[24]=R32(c->r[28]+0x000000D4u); // 800D7514
  c->lr=0x800D751Cu; f_800A23BC(c); // 800D7518
  c->lr=0x800D7520u; f_800BB800(c); // 800D751C
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D7520
  c->lr=0x800D7528u; f_800BBD98(c); // 800D7524
  cmps(c,0,(int32_t)c->r[3],0); // 800D7528
  if (crb(c,2)) { goto L_800D79C8; } // 800D752C
  c->lr=0x800D7534u; f_800A23BC(c); // 800D7530
  c->lr=0x800D7538u; f_800BB700(c); // 800D7534
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800D7538
  c->lr=0x800D7540u; f_800BBEA4(c); // 800D753C
  c->r[31]=c->r[3]|c->r[3]; // 800D7540
  c->lr=0x800D7548u; f_8007B524(c); // 800D7544
  c->lr=0x800D754Cu; f_800A1DE4(c); // 800D7548
  c->r[26]=c->r[3]|c->r[3]; // 800D754C
  c->lr=0x800D7554u; f_80078474(c); // 800D7550
  c->r[25]=c->r[3]|c->r[3]; // 800D7554
  cmps(c,0,(int32_t)c->r[3],0); // 800D7558
  if (crb(c,2)) { goto L_800D75A4; } // 800D755C
  c->lr=0x800D7564u; f_8007B51C(c); // 800D7560
  c->r[4]=c->r[3]|c->r[3]; // 800D7564
  c->r[3]=c->r[1]+0x0000006Cu; // 800D7568
  c->lr=0x800D7570u; f_8004A65C(c); // 800D756C
  c->r[3]=c->r[1]+0x00000008u; // 800D7570
  c->r[4]=c->r[25]|c->r[25]; // 800D7574
  c->lr=0x800D757Cu; f_80180F7C(c); // 800D7578
  c->r[3]=c->r[1]+0x00000054u; // 800D757C
  c->r[4]=c->r[1]+0x00000008u; // 800D7580
  c->lr=0x800D7588u; f_8004A65C(c); // 800D7584
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7588
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800D758C
  c->r[3]=c->r[1]+0x0000006Cu; // 800D7590
  c->r[4]=c->r[3]|c->r[3]; // 800D7594
  c->r[5]=c->r[1]+0x00000054u; // 800D7598
  c->lr=0x800D75A0u; f_8005C194(c); // 800D759C
  goto L_800D75B0; // 800D75A0
L_800D75A4:;
  c->r[3]=c->r[26]+0x00000024u; // 800D75A4
  c->r[4]=c->r[1]+0x0000006Cu; // 800D75A8
  c->lr=0x800D75B0u; f_8006E4CC(c); // 800D75AC
L_800D75B0:;
  c->r[3]=c->r[26]+0x00000024u; // 800D75B0
  c->r[4]=c->r[1]+0x00000060u; // 800D75B4
  c->lr=0x800D75BCu; f_80074EFC(c); // 800D75B8
  c->r[3]=c->r[1]+0x00000090u; // 800D75BC
  c->lr=0x800D75C4u; f_800C2260(c); // 800D75C0
  c->r[3]=c->r[1]+0x00000090u; // 800D75C4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D75C8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D75CC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D75D0
  c->lr=0x800D75D8u; f_8004B0A8(c); // 800D75D4
  c->r[3]=c->r[1]+0x00000084u; // 800D75D8
  c->r[4]=c->r[1]+0x00000090u; // 800D75DC
  c->r[5]=c->r[1]+0x00000048u; // 800D75E0
  c->lr=0x800D75E8u; f_8005FF94(c); // 800D75E4
  c->r[3]=c->r[1]+0x00000078u; // 800D75E8
  c->r[4]=c->r[1]+0x00000084u; // 800D75EC
  {uint32_t ea=c->r[2]+0xFFFF8884u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D75F0
  c->lr=0x800D75F8u; f_8004E330(c); // 800D75F4
  c->r[3]=c->r[1]+0x0000002Cu; // 800D75F8
  c->lr=0x800D7600u; f_8004B0A4(c); // 800D75FC
  c->r[3]=c->r[1]+0x00000020u; // 800D7600
  c->lr=0x800D7608u; f_8004B0A4(c); // 800D7604
  c->lr=0x800D760Cu; f_800A23BC(c); // 800D7608
  c->lr=0x800D7610u; f_800BB820(c); // 800D760C
  c->r[4]=c->r[1]+0x0000006Cu; // 800D7610
  c->r[5]=c->r[28]+0x00000030u; // 800D7614
  c->lr=0x800D761Cu; f_800D0CE8(c); // 800D7618
  W32(c->r[28]+0x00000070u,c->r[3]); // 800D761C
  c->lr=0x800D7624u; f_800A23BC(c); // 800D7620
  c->lr=0x800D7628u; f_800A23B4(c); // 800D7624
  c->lr=0x800D762Cu; f_800DECBC(c); // 800D7628
  cmps(c,0,(int32_t)c->r[3],0); // 800D762C
  if (crb(c,2)) { goto L_800D7648; } // 800D7630
  c->lr=0x800D7638u; f_800A23BC(c); // 800D7634
  c->lr=0x800D763Cu; f_800A23B4(c); // 800D7638
  c->lr=0x800D7640u; f_800CF588(c); // 800D763C
  c->r[26]=c->r[3]|c->r[3]; // 800D7640
  goto L_800D7658; // 800D7644
L_800D7648:;
  c->lr=0x800D764Cu; f_800A23BC(c); // 800D7648
  c->lr=0x800D7650u; f_800A23B4(c); // 800D764C
  c->lr=0x800D7654u; f_800CF5F4(c); // 800D7650
  c->r[26]=c->r[3]|c->r[3]; // 800D7654
L_800D7658:;
  c->lr=0x800D765Cu; f_800A23BC(c); // 800D7658
  c->lr=0x800D7660u; f_800A23B4(c); // 800D765C
  c->r[4]=c->r[26]|c->r[26]; // 800D7660
  c->lr=0x800D7668u; f_800BEDE0(c); // 800D7664
  c->r[25]=c->r[3]|c->r[3]; // 800D7668
  cmps(c,0,(int32_t)c->r[3],0); // 800D766C
  if (crb(c,2)) { goto L_800D7924; } // 800D7670
  c->lr=0x800D7678u; f_800A23BC(c); // 800D7674
  c->lr=0x800D767Cu; f_800A23B4(c); // 800D7678
  c->r[4]=c->r[25]|c->r[25]; // 800D767C
  c->lr=0x800D7684u; f_800BEDA0(c); // 800D7680
  c->lr=0x800D7688u; f_800CF5E4(c); // 800D7684
  cmps(c,0,(int32_t)c->r[3],0); // 800D7688
  if (!crb(c,2)) { goto L_800D7694; } // 800D768C
  c->r[30]=0u+0x00000001u; // 800D7690
L_800D7694:;
  c->lr=0x800D7698u; f_800A23BC(c); // 800D7694
  c->lr=0x800D769Cu; f_800A23B4(c); // 800D7698
  c->lr=0x800D76A0u; f_800BB838(c); // 800D769C
  c->r[23]=c->r[3]|c->r[3]; // 800D76A0
  c->r[21]=0u+0x00000000u; // 800D76A4
  c->r[22]=0u+0x00000000u; // 800D76A8
  c->r[25]=c->r[28]|c->r[28]; // 800D76AC
  c->r[27]=0u+0x00000000u; // 800D76B0
  goto L_800D7870; // 800D76B4
L_800D76B8:;
  c->r[26]=R32(c->r[25]+0x00000030u); // 800D76B8
  cmps(c,0,(int32_t)c->r[26],0); // 800D76BC
  if (crb(c,2)) { goto L_800D7868; } // 800D76C0
  c->lr=0x800D76C8u; f_800A23BC(c); // 800D76C4
  c->lr=0x800D76CCu; f_800BB820(c); // 800D76C8
  c->r[4]=c->r[26]|c->r[26]; // 800D76CC
  c->lr=0x800D76D4u; f_800BF370(c); // 800D76D0
  c->lr=0x800D76D8u; f_800BDEB4(c); // 800D76D4
  c->r[26]=c->r[3]|c->r[3]; // 800D76D8
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D76DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D76E0
  cmps(c,0,(int32_t)c->r[0],97); // 800D76E4
  if (crb(c,2)) { goto L_800D7778; } // 800D76E8
  if (!crb(c,0)) { goto L_800D7708; } // 800D76EC
  cmps(c,0,(int32_t)c->r[0],84); // 800D76F0
  if (crb(c,2)) { goto L_800D7720; } // 800D76F4
  if (!crb(c,0)) { goto L_800D777C; } // 800D76F8
  cmps(c,0,(int32_t)c->r[0],70); // 800D76FC
  if (crb(c,2)) { goto L_800D7730; } // 800D7700
  goto L_800D777C; // 800D7704
L_800D7708:;
  cmps(c,0,(int32_t)c->r[0],116); // 800D7708
  if (crb(c,2)) { goto L_800D775C; } // 800D770C
  if (!crb(c,0)) { goto L_800D777C; } // 800D7710
  cmps(c,0,(int32_t)c->r[0],99); // 800D7714
  if (crb(c,2)) { goto L_800D7740; } // 800D7718
  goto L_800D777C; // 800D771C
L_800D7720:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D7720
  if (!crb(c,2)) { goto L_800D777C; } // 800D7724
  c->r[21]=0u+0x00000001u; // 800D7728
  goto L_800D777C; // 800D772C
L_800D7730:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D7730
  if (!crb(c,2)) { goto L_800D777C; } // 800D7734
  c->r[21]=0u+0x00000002u; // 800D7738
  goto L_800D777C; // 800D773C
L_800D7740:;
  c->r[4]=c->r[13]+0xFFFF8938u; // 800D7740
  c->r[5]=0u+0x00000003u; // 800D7744
  c->lr=0x800D774Cu; f_802E97E0(c); // 800D7748
  cmps(c,0,(int32_t)c->r[3],0); // 800D774C
  if (!crb(c,2)) { goto L_800D777C; } // 800D7750
  c->r[21]=0u+0x00000003u; // 800D7754
  goto L_800D777C; // 800D7758
L_800D775C:;
  c->r[4]=c->r[13]+0xFFFF893Cu; // 800D775C
  c->r[5]=0u+0x00000003u; // 800D7760
  c->lr=0x800D7768u; f_802E97E0(c); // 800D7764
  cmps(c,0,(int32_t)c->r[3],0); // 800D7768
  if (!crb(c,2)) { goto L_800D777C; } // 800D776C
  c->r[21]=0u+0x00000004u; // 800D7770
  goto L_800D777C; // 800D7774
L_800D7778:;
  c->r[21]=0u+0x00000005u; // 800D7778
L_800D777C:;
  cmps(c,0,(int32_t)c->r[21],3); // 800D777C
  if (crb(c,2)) { goto L_800D7800; } // 800D7780
  if (!crb(c,0)) { goto L_800D7798; } // 800D7784
  cmps(c,0,(int32_t)c->r[21],1); // 800D7788
  if (crb(c,2)) { goto L_800D77A8; } // 800D778C
  if (!crb(c,0)) { goto L_800D77D4; } // 800D7790
  goto L_800D7868; // 800D7794
L_800D7798:;
  cmps(c,0,(int32_t)c->r[21],5); // 800D7798
  if (crb(c,2)) { goto L_800D7848; } // 800D779C
  if (!crb(c,0)) { goto L_800D7868; } // 800D77A0
  goto L_800D7824; // 800D77A4
L_800D77A8:;
  c->r[3]=c->r[1]+0x00000038u; // 800D77A8
  c->r[4]=c->r[26]+0x00000001u; // 800D77AC
  c->r[5]=0u+0x00000002u; // 800D77B0
  c->lr=0x800D77B8u; f_802E9608(c); // 800D77B4
  W8(c->r[1]+0x0000003Au,c->r[27]); // 800D77B8
  c->r[3]=c->r[1]+0x00000038u; // 800D77BC
  c->lr=0x800D77C4u; f_802EB928(c); // 800D77C0
  c->r[23]=c->r[3]|c->r[3]; // 800D77C4
  c->r[3]=c->r[1]+0x00000038u; // 800D77C8
  c->lr=0x800D77D0u; f_802EB928(c); // 800D77CC
  goto L_800D7868; // 800D77D0
L_800D77D4:;
  c->r[3]=c->r[1]+0x00000038u; // 800D77D4
  c->r[4]=c->r[26]+0x00000001u; // 800D77D8
  c->r[5]=0u+0x00000003u; // 800D77DC
  c->lr=0x800D77E4u; f_802E9608(c); // 800D77E0
  W8(c->r[1]+0x0000003Bu,c->r[27]); // 800D77E4
  c->r[3]=c->r[1]+0x00000038u; // 800D77E8
  c->lr=0x800D77F0u; f_802EB928(c); // 800D77EC
  c->r[23]=c->r[3]|c->r[3]; // 800D77F0
  c->r[3]=c->r[1]+0x00000038u; // 800D77F4
  c->lr=0x800D77FCu; f_802EB928(c); // 800D77F8
  goto L_800D7868; // 800D77FC
L_800D7800:;
  c->r[3]=c->r[1]+0x00000038u; // 800D7800
  c->r[4]=c->r[26]+0x00000003u; // 800D7804
  c->r[5]=0u+0x00000002u; // 800D7808
  c->lr=0x800D7810u; f_802E9608(c); // 800D780C
  W8(c->r[1]+0x0000003Au,c->r[27]); // 800D7810
  c->r[3]=c->r[1]+0x00000038u; // 800D7814
  c->lr=0x800D781Cu; f_802EB928(c); // 800D7818
  c->r[23]=c->r[3]|c->r[3]; // 800D781C
  goto L_800D7868; // 800D7820
L_800D7824:;
  c->r[3]=c->r[1]+0x00000038u; // 800D7824
  c->r[4]=c->r[26]+0x00000003u; // 800D7828
  c->r[5]=0u+0x00000002u; // 800D782C
  c->lr=0x800D7834u; f_802E9608(c); // 800D7830
  W8(c->r[1]+0x0000003Au,c->r[27]); // 800D7834
  c->r[3]=c->r[1]+0x00000038u; // 800D7838
  c->lr=0x800D7840u; f_802EB928(c); // 800D783C
  c->r[23]=c->r[3]|c->r[3]; // 800D7840
  goto L_800D7868; // 800D7844
L_800D7848:;
  c->r[3]=c->r[1]+0x00000038u; // 800D7848
  c->r[4]=c->r[26]+0x00000001u; // 800D784C
  c->r[5]=0u+0x00000002u; // 800D7850
  c->lr=0x800D7858u; f_802E9608(c); // 800D7854
  W8(c->r[1]+0x0000003Au,c->r[27]); // 800D7858
  c->r[3]=c->r[1]+0x00000038u; // 800D785C
  c->lr=0x800D7864u; f_802EB928(c); // 800D7860
  c->r[24]=c->r[3]|c->r[3]; // 800D7864
L_800D7868:;
  c->r[25]=c->r[25]+0x00000004u; // 800D7868
  c->r[22]=c->r[22]+0x00000001u; // 800D786C
L_800D7870:;
  c->r[0]=R32(c->r[28]+0x00000070u); // 800D7870
  cmpu(c,0,c->r[22],c->r[0]); // 800D7874
  if (crb(c,0)) { IRQCHK(c); goto L_800D76B8; } // 800D7878
  cmps(c,0,(int32_t)c->r[31],0); // 800D787C
  if (crb(c,2)) { goto L_800D7924; } // 800D7880
  cmps(c,0,(int32_t)c->r[23],0); // 800D7884
  if (crb(c,0)) { goto L_800D78B8; } // 800D7888
  c->lr=0x800D7890u; f_800A23BC(c); // 800D788C
  c->lr=0x800D7894u; f_800A23B4(c); // 800D7890
  c->lr=0x800D7898u; f_800BB838(c); // 800D7894
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[3]); // 800D7898
  if (crb(c,2)) { goto L_800D78C8; } // 800D789C
  cmps(c,0,(int32_t)c->r[29],0); // 800D78A0
  if (!crb(c,2)) { goto L_800D78C8; } // 800D78A4
  c->lr=0x800D78ACu; f_800A23BC(c); // 800D78A8
  c->lr=0x800D78B0u; f_800A23B4(c); // 800D78AC
  c->lr=0x800D78B4u; f_800DECBC(c); // 800D78B0
  goto L_800D78C8; // 800D78B4
L_800D78B8:;
  c->lr=0x800D78BCu; f_800A23BC(c); // 800D78B8
  c->lr=0x800D78C0u; f_800A23B4(c); // 800D78BC
  c->lr=0x800D78C4u; f_800BB838(c); // 800D78C0
  c->r[23]=c->r[3]|c->r[3]; // 800D78C4
L_800D78C8:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D78C8
  if (crb(c,0)) { goto L_800D7924; } // 800D78CC
  cmps(c,0,(int32_t)c->r[29],0); // 800D78D0
  if (crb(c,2)) { goto L_800D78F0; } // 800D78D4
  c->lr=0x800D78DCu; f_800A23BC(c); // 800D78D8
  c->lr=0x800D78E0u; f_800BB700(c); // 800D78DC
  c->r[4]=c->r[31]|c->r[31]; // 800D78E0
  c->lr=0x800D78E8u; f_800BBE64(c); // 800D78E4
  c->r[4]=0u+0x00000000u; // 800D78E8
  c->lr=0x800D78F0u; f_800D2CC8(c); // 800D78EC
L_800D78F0:;
  c->lr=0x800D78F4u; f_800A23BC(c); // 800D78F0
  c->lr=0x800D78F8u; f_800A23B4(c); // 800D78F4
  c->r[4]=c->r[23]|c->r[23]; // 800D78F8
  c->r[5]=c->r[29]|c->r[29]; // 800D78FC
  c->lr=0x800D7904u; f_800E11DC(c); // 800D7900
  cmps(c,0,(int32_t)c->r[29],0); // 800D7904
  if (crb(c,2)) { goto L_800D7924; } // 800D7908
  c->lr=0x800D7910u; f_800A23BC(c); // 800D790C
  c->lr=0x800D7914u; f_800BB700(c); // 800D7910
  c->r[4]=c->r[31]|c->r[31]; // 800D7914
  c->lr=0x800D791Cu; f_800BBE64(c); // 800D7918
  c->r[4]=0u+0x00000001u; // 800D791C
  c->lr=0x800D7924u; f_800D2CC8(c); // 800D7920
L_800D7924:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D7924
  if (crb(c,2)) { goto L_800D79A8; } // 800D7928
  c->r[3]=c->r[1]+0x00000014u; // 800D792C
  c->lr=0x800D7934u; f_8004B0A4(c); // 800D7930
  c->lr=0x800D7938u; f_800A23BC(c); // 800D7934
  c->lr=0x800D793Cu; f_800BB700(c); // 800D7938
  c->r[4]=c->r[31]|c->r[31]; // 800D793C
  c->lr=0x800D7944u; f_800BBE64(c); // 800D7940
  c->lr=0x800D7948u; f_800BB564(c); // 800D7944
  c->lr=0x800D794Cu; f_800A23BC(c); // 800D7948
  c->lr=0x800D7950u; f_800BB700(c); // 800D794C
  c->r[4]=c->r[31]|c->r[31]; // 800D7950
  c->lr=0x800D7958u; f_800BBE64(c); // 800D7954
  c->r[4]=c->r[1]+0x0000006Cu; // 800D7958
  c->lr=0x800D7960u; f_800BB538(c); // 800D795C
  c->lr=0x800D7964u; f_800A23BC(c); // 800D7960
  c->lr=0x800D7968u; f_800BB700(c); // 800D7964
  c->r[4]=c->r[31]|c->r[31]; // 800D7968
  c->lr=0x800D7970u; f_800BBE64(c); // 800D796C
  {uint32_t ea=c->r[2]+0xFFFF88B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7970
  c->lr=0x800D7978u; f_800BB548(c); // 800D7974
  c->lr=0x800D797Cu; f_800A23BC(c); // 800D7978
  c->lr=0x800D7980u; f_800BB700(c); // 800D797C
  c->r[4]=c->r[31]|c->r[31]; // 800D7980
  c->lr=0x800D7988u; f_800BBE64(c); // 800D7984
  c->r[4]=0u+0x00000000u; // 800D7988
  c->lr=0x800D7990u; f_800CA4B8(c); // 800D798C
  c->lr=0x800D7994u; f_800A23BC(c); // 800D7990
  c->lr=0x800D7998u; f_800BB700(c); // 800D7994
  c->r[4]=c->r[31]|c->r[31]; // 800D7998
  c->lr=0x800D79A0u; f_800BBE64(c); // 800D799C
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D79A0
  c->lr=0x800D79A8u; f_800BB674(c); // 800D79A4
L_800D79A8:;
  c->r[0]=R32(c->r[28]+0x000000D4u); // 800D79A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[24]); // 800D79AC
  if (crb(c,2)) { goto L_800D79C8; } // 800D79B0
  W32(c->r[28]+0x000000D4u,c->r[24]); // 800D79B4
  c->lr=0x800D79BCu; f_800A23BC(c); // 800D79B8
  c->lr=0x800D79C0u; f_800A23B4(c); // 800D79BC
  c->r[4]=c->r[24]|c->r[24]; // 800D79C0
  c->lr=0x800D79C8u; f_800E110C(c); // 800D79C4
L_800D79C8:;
  c->r[11]=c->r[1]+0x000000F0u; // 800D79C8
  c->lr=0x800D79D0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D79CC
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800D79D0
  c->lr=c->r[0]; // 800D79D4
  c->r[1]=c->r[1]+0x000000F0u; // 800D79D8
  return; // 800D79DC
}

// fn_800D79E0
void f_800D79E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFF5F0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79E0
  c->r[0]=c->lr; // 800D79E4
  W32(c->r[1]+0x00000A14u,c->r[0]); // 800D79E8
  {uint32_t ea=c->r[1]+0x00000A00u; WF64(ea,c->f[31]);} // 800D79EC
  {uint32_t ea=c->r[1]+0xFFFFFA08u; psq_store(c,31,ea,0,0);} // 800D79F0
  {uint32_t ea=c->r[1]+0x000009F0u; WF64(ea,c->f[30]);} // 800D79F4
  {uint32_t ea=c->r[1]+0xFFFFF9F8u; psq_store(c,30,ea,0,0);} // 800D79F8
  {uint32_t ea=c->r[1]+0x000009E0u; WF64(ea,c->f[29]);} // 800D79FC
  {uint32_t ea=c->r[1]+0xFFFFF9E8u; psq_store(c,29,ea,0,0);} // 800D7A00
  c->r[11]=c->r[1]+0x000009E0u; // 800D7A04
  c->lr=0x800D7A0Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D7A08
  c->r[30]=c->r[3]|c->r[3]; // 800D7A0C
  c->r[3]=c->r[1]+0x00000098u; // 800D7A10
  c->lr=0x800D7A18u; f_8004B0A0(c); // 800D7A14
  c->r[3]=c->r[1]+0x0000008Cu; // 800D7A18
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7A1C
  c->f[2]=c->f[1]; // 800D7A20
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7A24
  c->lr=0x800D7A2Cu; f_8004E34C(c); // 800D7A28
  c->r[3]=c->r[1]+0x00000080u; // 800D7A2C
  c->lr=0x800D7A34u; f_8004B0A4(c); // 800D7A30
  c->r[3]=c->r[1]+0x00000074u; // 800D7A34
  c->lr=0x800D7A3Cu; f_8004B0A4(c); // 800D7A38
  c->r[3]=c->r[1]+0x00000068u; // 800D7A3C
  c->lr=0x800D7A44u; f_8004B0A4(c); // 800D7A40
  c->r[3]=c->r[1]+0x0000005Cu; // 800D7A44
  c->lr=0x800D7A4Cu; f_8004B0A4(c); // 800D7A48
  c->r[3]=c->r[1]+0x00000050u; // 800D7A4C
  c->lr=0x800D7A54u; f_8004B0A4(c); // 800D7A50
  c->r[3]=c->r[1]+0x00000044u; // 800D7A54
  c->lr=0x800D7A5Cu; f_8004B0A4(c); // 800D7A58
  c->r[3]=c->r[1]+0x00000038u; // 800D7A5C
  c->lr=0x800D7A64u; f_8004B0A4(c); // 800D7A60
  c->r[3]=c->r[1]+0x0000002Cu; // 800D7A64
  c->lr=0x800D7A6Cu; f_8004B0A4(c); // 800D7A68
  c->r[3]=c->r[1]+0x00000020u; // 800D7A6C
  c->lr=0x800D7A74u; f_8004B0A4(c); // 800D7A70
  c->r[3]=c->r[1]+0x00000014u; // 800D7A74
  c->lr=0x800D7A7Cu; f_8004B0A4(c); // 800D7A78
  c->r[3]=c->r[1]+0x00000008u; // 800D7A7C
  c->lr=0x800D7A84u; f_8004B0A4(c); // 800D7A80
  c->r[29]=c->r[1]+0x000001C8u; // 800D7A84
  c->r[31]=c->r[1]+0x000009C8u; // 800D7A88
L_800D7A8C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D7A8C
  c->lr=0x800D7A94u; f_800CA854(c); // 800D7A90
  c->r[29]=c->r[29]+0x00000020u; // 800D7A94
  cmpu(c,0,c->r[29],c->r[31]); // 800D7A98
  if (crb(c,0)) { IRQCHK(c); goto L_800D7A8C; } // 800D7A9C
  c->r[3]=c->r[1]+0x000001C8u; // 800D7AA0
  c->r[4]=c->r[1]+0x000000C8u; // 800D7AA4
  c->r[0]=0u+0x00000002u; // 800D7AA8
  c->ctr=c->r[0]; // 800D7AAC
L_800D7AB0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800D7AB0
  c->r[0]=c->r[3]+0x00000020u; // 800D7AB4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D7AB8
  c->r[0]=c->r[3]+0x00000040u; // 800D7ABC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D7AC0
  c->r[0]=c->r[3]+0x00000060u; // 800D7AC4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D7AC8
  c->r[0]=c->r[3]+0x00000080u; // 800D7ACC
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D7AD0
  c->r[0]=c->r[3]+0x000000A0u; // 800D7AD4
  W32(c->r[4]+0x00000014u,c->r[0]); // 800D7AD8
  c->r[0]=c->r[3]+0x000000C0u; // 800D7ADC
  W32(c->r[4]+0x00000018u,c->r[0]); // 800D7AE0
  c->r[0]=c->r[3]+0x000000E0u; // 800D7AE4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800D7AE8
  c->r[3]=c->r[3]+0x00000100u; // 800D7AEC
  W32(c->r[4]+0x00000020u,c->r[3]); // 800D7AF0
  c->r[0]=c->r[3]+0x00000020u; // 800D7AF4
  W32(c->r[4]+0x00000024u,c->r[0]); // 800D7AF8
  c->r[0]=c->r[3]+0x00000040u; // 800D7AFC
  W32(c->r[4]+0x00000028u,c->r[0]); // 800D7B00
  c->r[0]=c->r[3]+0x00000060u; // 800D7B04
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 800D7B08
  c->r[0]=c->r[3]+0x00000080u; // 800D7B0C
  W32(c->r[4]+0x00000030u,c->r[0]); // 800D7B10
  c->r[0]=c->r[3]+0x000000A0u; // 800D7B14
  W32(c->r[4]+0x00000034u,c->r[0]); // 800D7B18
  c->r[0]=c->r[3]+0x000000C0u; // 800D7B1C
  W32(c->r[4]+0x00000038u,c->r[0]); // 800D7B20
  c->r[0]=c->r[3]+0x000000E0u; // 800D7B24
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 800D7B28
  c->r[3]=c->r[3]+0x00000100u; // 800D7B2C
  c->r[4]=c->r[4]+0x00000040u; // 800D7B30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D7AB0; } // 800D7B34
  c->lr=0x800D7B3Cu; f_800A23BC(c); // 800D7B38
  c->lr=0x800D7B40u; f_800BB800(c); // 800D7B3C
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D7B40
  c->lr=0x800D7B48u; f_800BBD98(c); // 800D7B44
  c->r[31]=0u+0x00000000u; // 800D7B48
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B4C
  if (crb(c,2)) { goto L_800D7F70; } // 800D7B50
  c->r[3]=c->r[30]|c->r[30]; // 800D7B54
  c->lr=0x800D7B5Cu; f_800D89AC(c); // 800D7B58
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B5C
  if (!crb(c,2)) { goto L_800D7B78; } // 800D7B60
  c->lr=0x800D7B68u; f_800A23BC(c); // 800D7B64
  c->lr=0x800D7B6Cu; f_800A23C8(c); // 800D7B68
  c->lr=0x800D7B70u; f_800CA83C(c); // 800D7B6C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B70
  if (crb(c,2)) { goto L_800D7B94; } // 800D7B74
L_800D7B78:;
  c->r[0]=0u+0x00000000u; // 800D7B78
  W32(c->r[30]+0x00000098u,c->r[0]); // 800D7B7C
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 800D7B80
  W32(c->r[30]+0x00000010u,c->r[0]); // 800D7B84
  c->r[0]=0u+0x00000001u; // 800D7B88
  W32(c->r[30]+0x00000080u,c->r[0]); // 800D7B8C
  goto L_800D7F70; // 800D7B90
L_800D7B94:;
  c->lr=0x800D7B98u; f_8007B524(c); // 800D7B94
  c->r[4]=c->r[1]+0x00000038u; // 800D7B98
  c->lr=0x800D7BA0u; f_8009CDA0(c); // 800D7B9C
  c->lr=0x800D7BA4u; f_8007B524(c); // 800D7BA0
  c->r[4]=c->r[1]+0x0000002Cu; // 800D7BA4
  c->lr=0x800D7BACu; f_8009CDDC(c); // 800D7BA8
  c->r[3]=c->r[1]+0x00000098u; // 800D7BAC
  c->lr=0x800D7BB4u; f_800C2260(c); // 800D7BB0
  c->r[3]=c->r[1]+0x00000098u; // 800D7BB4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7BB8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7BBC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7BC0
  c->lr=0x800D7BC8u; f_8004B0A8(c); // 800D7BC4
  c->r[3]=c->r[1]+0x00000080u; // 800D7BC8
  c->r[4]=c->r[1]+0x00000098u; // 800D7BCC
  c->r[5]=c->r[1]+0x0000008Cu; // 800D7BD0
  c->lr=0x800D7BD8u; f_8005FF94(c); // 800D7BD4
  c->lr=0x800D7BDCu; f_800A23BC(c); // 800D7BD8
  c->lr=0x800D7BE0u; f_800A23C8(c); // 800D7BDC
  c->lr=0x800D7BE4u; f_800C0238(c); // 800D7BE0
  c->r[28]=c->r[3]|c->r[3]; // 800D7BE4
  c->r[29]=c->r[1]+0x000000C8u; // 800D7BE8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D7BEC
  {uint32_t ea=c->r[2]+0xFFFF8820u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D7BF0
  goto L_800D7D2C; // 800D7BF4
L_800D7BF8:;
  c->lr=0x800D7BFCu; f_800A23BC(c); // 800D7BF8
  c->lr=0x800D7C00u; f_800A23C8(c); // 800D7BFC
  c->r[4]=c->r[28]|c->r[28]; // 800D7C00
  c->lr=0x800D7C08u; f_800BBBC0(c); // 800D7C04
  c->r[26]=c->r[3]|c->r[3]; // 800D7C08
  c->r[4]=c->r[1]+0x00000008u; // 800D7C0C
  c->lr=0x800D7C14u; f_800CC644(c); // 800D7C10
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C14
  if (crb(c,2)) { goto L_800D7D18; } // 800D7C18
  c->lr=0x800D7C20u; f_800A23BC(c); // 800D7C1C
  c->lr=0x800D7C24u; f_800A23C8(c); // 800D7C20
  c->r[4]=c->r[28]|c->r[28]; // 800D7C24
  c->lr=0x800D7C2Cu; f_800BBBC0(c); // 800D7C28
  c->lr=0x800D7C30u; f_800CCAF4(c); // 800D7C2C
  c->r[27]=c->r[3]|c->r[3]; // 800D7C30
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C34
  if (crb(c,2)) { goto L_800D7C58; } // 800D7C38
  c->lr=0x800D7C40u; f_800A23BC(c); // 800D7C3C
  c->lr=0x800D7C44u; f_800BB800(c); // 800D7C40
  c->r[4]=c->r[27]|c->r[27]; // 800D7C44
  c->lr=0x800D7C4Cu; f_800BBD58(c); // 800D7C48
  c->lr=0x800D7C50u; f_800C9F6C(c); // 800D7C4C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C50
  if (crb(c,2)) { goto L_800D7D18; } // 800D7C54
L_800D7C58:;
  c->r[3]=c->r[1]+0x0000005Cu; // 800D7C58
  c->r[4]=c->r[1]+0x00000008u; // 800D7C5C
  c->lr=0x800D7C64u; f_8004A65C(c); // 800D7C60
  c->r[3]=c->r[1]+0x00000050u; // 800D7C64
  c->r[4]=c->r[1]+0x00000038u; // 800D7C68
  c->lr=0x800D7C70u; f_8004A65C(c); // 800D7C6C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[29]);} // 800D7C70
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[29]);} // 800D7C74
  c->r[3]=c->r[1]+0x00000068u; // 800D7C78
  c->r[4]=c->r[1]+0x0000005Cu; // 800D7C7C
  c->r[5]=c->r[1]+0x00000050u; // 800D7C80
  c->lr=0x800D7C88u; f_8006000C(c); // 800D7C84
  c->r[3]=c->r[1]+0x00000068u; // 800D7C88
  c->lr=0x800D7C90u; f_8005C170(c); // 800D7C8C
  c->f[30]=c->f[1]; // 800D7C90
  c->r[3]=c->r[1]+0x00000074u; // 800D7C94
  c->r[4]=c->r[1]+0x00000068u; // 800D7C98
  c->lr=0x800D7CA0u; f_8005C110(c); // 800D7C9C
  c->r[3]=c->r[26]|c->r[26]; // 800D7CA0
  c->lr=0x800D7CA8u; f_800CA814(c); // 800D7CA4
  c->r[0]=0u-c->r[3]; // 800D7CA8
  c->r[0]=c->r[0]|c->r[3]; // 800D7CAC
  c->r[0]=sraw(c,c->r[0],31); // 800D7CB0
  c->r[0]=c->r[28]&c->r[0]; // 800D7CB4
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7CB8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D7CBC
  c->r[3]=c->r[3]+0x00000004u; // 800D7CC0
  c->r[4]=c->r[1]+0x00000008u; // 800D7CC4
  c->lr=0x800D7CCCu; f_8004A65C(c); // 800D7CC8
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7CCC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[30]);} // 800D7CD0
  c->lr=0x800D7CD8u; f_800A23BC(c); // 800D7CD4
  c->lr=0x800D7CDCu; f_800A23C8(c); // 800D7CD8
  c->r[4]=c->r[28]|c->r[28]; // 800D7CDC
  c->lr=0x800D7CE4u; f_800BBBC0(c); // 800D7CE0
  c->lr=0x800D7CE8u; f_800CCAF4(c); // 800D7CE4
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D7CE8
  W32(c->r[4]+0x00000018u,c->r[3]); // 800D7CEC
  c->r[3]=c->r[1]+0x00000074u; // 800D7CF0
  c->r[4]=c->r[1]+0x00000080u; // 800D7CF4
  c->lr=0x800D7CFCu; f_80079760(c); // 800D7CF8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800D7CFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800D7D00
  c->f[0]=-c->f[0]; // 800D7D04
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7D08
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800D7D0C
  c->r[29]=c->r[29]+0x00000004u; // 800D7D10
  c->r[31]=c->r[31]+0x00000001u; // 800D7D14
L_800D7D18:;
  c->lr=0x800D7D1Cu; f_800A23BC(c); // 800D7D18
  c->lr=0x800D7D20u; f_800A23C8(c); // 800D7D1C
  c->r[4]=c->r[28]|c->r[28]; // 800D7D20
  c->lr=0x800D7D28u; f_800C0270(c); // 800D7D24
  c->r[28]=c->r[3]|c->r[3]; // 800D7D28
L_800D7D2C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D7D2C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7BF8; } // 800D7D30
  c->r[5]=R32(c->r[30]+0x00000098u); // 800D7D34
  cmps(c,0,(int32_t)c->r[5],0); // 800D7D38
  if (crb(c,2)) { goto L_800D7D94; } // 800D7D3C
  c->r[6]=0u+0x00000000u; // 800D7D40
  c->r[4]=c->r[1]+0x000000C8u; // 800D7D44
  c->ctr=c->r[31]; // 800D7D48
  cmpu(c,0,c->r[31],0x00000000u); // 800D7D4C
  if (!crb(c,1)) { goto L_800D7D94; } // 800D7D50
L_800D7D54:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D7D54
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D7D58
  cmps(c,0,(int32_t)c->r[0],0); // 800D7D5C
  if (crb(c,2)) { goto L_800D7D88; } // 800D7D60
  cmpu(c,0,c->r[5],c->r[0]); // 800D7D64
  if (!crb(c,2)) { goto L_800D7D88; } // 800D7D68
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800D7D6C
  c->r[4]=c->r[1]+0x000000C8u; // 800D7D70
  c->r[5]=R32(c->r[4]+c->r[3]); // 800D7D74
  c->r[0]=R32(c->r[1]+0x000000C8u); // 800D7D78
  W32(c->r[4]+c->r[3],c->r[0]); // 800D7D7C
  W32(c->r[1]+0x000000C8u,c->r[5]); // 800D7D80
  goto L_800D7E28; // 800D7D84
L_800D7D88:;
  c->r[4]=c->r[4]+0x00000004u; // 800D7D88
  c->r[6]=c->r[6]+0x00000001u; // 800D7D8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D7D54; } // 800D7D90
L_800D7D94:;
  c->r[8]=0u+0x00000000u; // 800D7D94
  c->r[3]=0u+0x00000000u; // 800D7D98
  c->r[4]=c->r[1]+0x000000C8u; // 800D7D9C
  goto L_800D7E00; // 800D7DA0
L_800D7DA4:;
  c->r[9]=c->r[8]|c->r[8]; // 800D7DA4
  c->r[5]=c->r[1]+0x000000C8u; // 800D7DA8
  c->r[5]=c->r[5]+c->r[3]; // 800D7DAC
  c->r[0]=c->r[31]-c->r[8]; // 800D7DB0
  c->ctr=c->r[0]; // 800D7DB4
  cmpu(c,0,c->r[8],c->r[31]); // 800D7DB8
  if (!crb(c,0)) { goto L_800D7DF4; } // 800D7DBC
L_800D7DC0:;
  cmpu(c,0,c->r[8],c->r[9]); // 800D7DC0
  if (crb(c,2)) { goto L_800D7DE8; } // 800D7DC4
  c->r[7]=R32(c->r[5]+0x00000000u); // 800D7DC8
  c->r[6]=R32(c->r[4]+0x00000000u); // 800D7DCC
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7DD0
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7DD4
  fcmp(c,0,c->f[1],c->f[0]); // 800D7DD8
  if (!crb(c,1)) { goto L_800D7DE8; } // 800D7DDC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D7DE0
  W32(c->r[5]+0x00000000u,c->r[6]); // 800D7DE4
L_800D7DE8:;
  c->r[5]=c->r[5]+0x00000004u; // 800D7DE8
  c->r[9]=c->r[9]+0x00000001u; // 800D7DEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D7DC0; } // 800D7DF0
L_800D7DF4:;
  c->r[4]=c->r[4]+0x00000004u; // 800D7DF4
  c->r[8]=c->r[8]+0x00000001u; // 800D7DF8
  c->r[3]=c->r[3]+0x00000004u; // 800D7DFC
L_800D7E00:;
  cmpu(c,0,c->r[8],c->r[31]); // 800D7E00
  if (crb(c,0)) { IRQCHK(c); goto L_800D7DA4; } // 800D7E04
  cmps(c,0,(int32_t)c->r[31],0); // 800D7E08
  if (!crb(c,2)) { goto L_800D7E28; } // 800D7E0C
  c->r[0]=0u+0x00000000u; // 800D7E10
  W32(c->r[30]+0x00000098u,c->r[0]); // 800D7E14
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 800D7E18
  c->r[0]=0u+0x00000001u; // 800D7E1C
  W32(c->r[30]+0x00000080u,c->r[0]); // 800D7E20
  goto L_800D7F70; // 800D7E24
L_800D7E28:;
  c->r[3]=c->r[1]+0x00000008u; // 800D7E28
  c->r[0]=R32(c->r[30]+0x00000010u); // 800D7E2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7E30
  c->r[4]=c->r[1]+0x000000C8u; // 800D7E34
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D7E38
  c->r[4]=c->r[4]+0x00000004u; // 800D7E3C
  c->lr=0x800D7E44u; f_8004A65C(c); // 800D7E40
  c->lr=0x800D7E48u; f_800A23BC(c); // 800D7E44
  c->lr=0x800D7E4Cu; f_800C23AC(c); // 800D7E48
  c->r[4]=c->r[1]+0x00000008u; // 800D7E4C
  c->lr=0x800D7E54u; f_800CB6F4(c); // 800D7E50
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7E54
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 800D7E58
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7E5C
  fcmp(c,0,c->f[2],c->f[0]); // 800D7E60
  if (!crb(c,1)) { goto L_800D7E7C; } // 800D7E64
  {uint32_t ea=c->r[2]+0xFFFF8894u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7E68
  fcmp(c,0,c->f[2],c->f[0]); // 800D7E6C
  if (!crb(c,0)) { goto L_800D7E7C; } // 800D7E70
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D7E74
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D7E78
L_800D7E7C:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 800D7E7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7E80
  c->r[3]=c->r[1]+0x000000C8u; // 800D7E84
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D7E88
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7E8C
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D7E90
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D7E94
  W32(c->r[30]+0x00000098u,c->r[0]); // 800D7E98
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D7E9C
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 800D7EA0
  c->r[3]=c->r[30]+0x000000ACu; // 800D7EA4
  c->r[4]=c->r[1]+0x00000008u; // 800D7EA8
  c->lr=0x800D7EB0u; f_8004A65C(c); // 800D7EAC
  c->lr=0x800D7EB4u; f_800A23BC(c); // 800D7EB0
  c->lr=0x800D7EB8u; f_800BB800(c); // 800D7EB4
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7EB8
  c->lr=0x800D7EC0u; f_800C1284(c); // 800D7EBC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7EC0
  if (!crb(c,2)) { goto L_800D7ED8; } // 800D7EC4
  c->r[3]=c->r[30]+0x000000A0u; // 800D7EC8
  c->r[4]=c->r[30]+0x000000ACu; // 800D7ECC
  c->lr=0x800D7ED4u; f_8004A65C(c); // 800D7ED0
  goto L_800D7F34; // 800D7ED4
L_800D7ED8:;
  c->lr=0x800D7EDCu; f_800A23BC(c); // 800D7ED8
  c->lr=0x800D7EE0u; f_800BB800(c); // 800D7EDC
  c->r[4]=R32(c->r[30]+0x00000084u); // 800D7EE0
  c->lr=0x800D7EE8u; f_800BBD58(c); // 800D7EE4
  c->lr=0x800D7EECu; f_800BE11C(c); // 800D7EE8
  cmps(c,0,(int32_t)c->r[3],0); // 800D7EEC
  if (!crb(c,2)) { goto L_800D7F04; } // 800D7EF0
  c->r[3]=c->r[30]+0x000000A0u; // 800D7EF4
  c->r[4]=c->r[30]+0x000000ACu; // 800D7EF8
  c->lr=0x800D7F00u; f_8004A65C(c); // 800D7EFC
  goto L_800D7F34; // 800D7F00
L_800D7F04:;
  c->r[3]=c->r[1]+0x00000068u; // 800D7F04
  c->r[4]=c->r[30]+0x000000ACu; // 800D7F08
  c->r[5]=c->r[30]+0x000000A0u; // 800D7F0C
  c->lr=0x800D7F14u; f_8006000C(c); // 800D7F10
  c->r[3]=c->r[1]+0x00000068u; // 800D7F14
  c->r[4]=c->r[3]|c->r[3]; // 800D7F18
  {uint32_t ea=c->r[2]+0xFFFF8908u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7F1C
  c->lr=0x800D7F24u; f_8004E330(c); // 800D7F20
  c->r[3]=c->r[30]+0x000000A0u; // 800D7F24
  c->r[4]=c->r[3]|c->r[3]; // 800D7F28
  c->r[5]=c->r[1]+0x00000068u; // 800D7F2C
  c->lr=0x800D7F34u; f_8005C194(c); // 800D7F30
L_800D7F34:;
  c->r[0]=0u+0x00000002u; // 800D7F34
  W32(c->r[30]+0x00000080u,c->r[0]); // 800D7F38
  c->r[29]=R32(c->r[30]+0x00000098u); // 800D7F3C
  cmps(c,0,(int32_t)c->r[29],0); // 800D7F40
  if (crb(c,2)) { goto L_800D7F70; } // 800D7F44
  c->lr=0x800D7F4Cu; f_800A23BC(c); // 800D7F48
  c->lr=0x800D7F50u; f_800BB800(c); // 800D7F4C
  c->r[4]=c->r[29]|c->r[29]; // 800D7F50
  c->lr=0x800D7F58u; f_800C1284(c); // 800D7F54
  cmps(c,0,(int32_t)c->r[3],0); // 800D7F58
  if (!crb(c,2)) { goto L_800D7F70; } // 800D7F5C
  c->r[0]=0u+0x00000000u; // 800D7F60
  W32(c->r[30]+0x00000098u,c->r[0]); // 800D7F64
  c->r[0]=0u+0x00000001u; // 800D7F68
  W32(c->r[30]+0x00000080u,c->r[0]); // 800D7F6C
L_800D7F70:;
  c->r[0]=0u+0x00000A08u; // 800D7F70
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D7F74
  {uint32_t ea=c->r[1]+0x00000A00u; c->f[31]=RF64(ea);} // 800D7F78
  c->r[0]=0u+0x000009F8u; // 800D7F7C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800D7F80
  {uint32_t ea=c->r[1]+0x000009F0u; c->f[30]=RF64(ea);} // 800D7F84
  c->r[0]=0u+0x000009E8u; // 800D7F88
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800D7F8C
  {uint32_t ea=c->r[1]+0x000009E0u; c->f[29]=RF64(ea);} // 800D7F90
  c->r[11]=c->r[1]+0x000009E0u; // 800D7F94
  c->lr=0x800D7F9Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7F98
  c->r[0]=R32(c->r[1]+0x00000A14u); // 800D7F9C
  c->lr=c->r[0]; // 800D7FA0
  c->r[1]=c->r[1]+0x00000A10u; // 800D7FA4
  return; // 800D7FA8
}

// fn_800D7FAC
void f_800D7FAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7FAC
  c->r[0]=c->lr; // 800D7FB0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D7FB4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800D7FB8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800D7FBC
  W32(c->r[1]+0x00000084u,c->r[29]); // 800D7FC0
  c->r[29]=c->r[4]|c->r[4]; // 800D7FC4
  c->r[3]=c->r[1]+0x00000038u; // 800D7FC8
  c->lr=0x800D7FD0u; f_8004B0A4(c); // 800D7FCC
  c->r[3]=c->r[1]+0x0000002Cu; // 800D7FD0
  c->lr=0x800D7FD8u; f_8004B0A4(c); // 800D7FD4
  c->r[3]=c->r[1]+0x00000020u; // 800D7FD8
  c->lr=0x800D7FE0u; f_8004B0A4(c); // 800D7FDC
  c->r[3]=c->r[1]+0x00000014u; // 800D7FE0
  c->lr=0x800D7FE8u; f_8004B0A4(c); // 800D7FE4
  c->r[3]=c->r[1]+0x00000008u; // 800D7FE8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7FEC
  c->f[2]=c->f[1]; // 800D7FF0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7FF4
  c->lr=0x800D7FFCu; f_8004E34C(c); // 800D7FF8
  c->r[3]=c->r[1]+0x00000048u; // 800D7FFC
  c->lr=0x800D8004u; f_8004B0A0(c); // 800D8000
  c->lr=0x800D8008u; f_800A23BC(c); // 800D8004
  c->lr=0x800D800Cu; f_800BB800(c); // 800D8008
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D800C
  c->lr=0x800D8014u; f_800BBD98(c); // 800D8010
  cmps(c,0,(int32_t)c->r[3],0); // 800D8014
  if (crb(c,2)) { goto L_800D80F4; } // 800D8018
  c->lr=0x800D8020u; f_800A23BC(c); // 800D801C
  c->lr=0x800D8024u; f_800BB700(c); // 800D8020
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800D8024
  c->lr=0x800D802Cu; f_800BBEA4(c); // 800D8028
  c->r[30]=c->r[3]|c->r[3]; // 800D802C
  c->lr=0x800D8034u; f_8007B524(c); // 800D8030
  c->lr=0x800D8038u; f_800A1DE4(c); // 800D8034
  c->r[31]=c->r[3]|c->r[3]; // 800D8038
  c->r[3]=c->r[3]+0x00000024u; // 800D803C
  c->r[4]=c->r[1]+0x00000020u; // 800D8040
  c->lr=0x800D8048u; f_8006E4CC(c); // 800D8044
  c->r[3]=c->r[31]+0x00000024u; // 800D8048
  c->r[4]=c->r[1]+0x00000014u; // 800D804C
  c->lr=0x800D8054u; f_80074EFC(c); // 800D8050
  c->lr=0x800D8058u; f_800A23BC(c); // 800D8054
  c->lr=0x800D805Cu; f_800BB700(c); // 800D8058
  c->r[4]=c->r[30]|c->r[30]; // 800D805C
  c->lr=0x800D8064u; f_800BBE64(c); // 800D8060
  c->r[4]=0u+0x00000000u; // 800D8064
  c->lr=0x800D806Cu; f_800D2748(c); // 800D8068
  c->lr=0x800D8070u; f_800A23BC(c); // 800D806C
  c->lr=0x800D8074u; f_800BB700(c); // 800D8070
  c->r[4]=c->r[30]|c->r[30]; // 800D8074
  c->lr=0x800D807Cu; f_800BBE64(c); // 800D8078
  c->r[4]=0u+0x00000000u; // 800D807C
  c->lr=0x800D8084u; f_800D2CC8(c); // 800D8080
  c->lr=0x800D8088u; f_800A23BC(c); // 800D8084
  c->lr=0x800D808Cu; f_800A23B4(c); // 800D8088
  c->lr=0x800D8090u; f_800BB838(c); // 800D808C
  c->r[31]=c->r[3]|c->r[3]; // 800D8090
  c->lr=0x800D8098u; f_800A23BC(c); // 800D8094
  c->lr=0x800D809Cu; f_800A23B4(c); // 800D8098
  c->r[4]=c->r[31]|c->r[31]; // 800D809C
  c->r[5]=0u+0x00000001u; // 800D80A0
  c->lr=0x800D80A8u; f_800E11DC(c); // 800D80A4
  c->lr=0x800D80ACu; f_800A23BC(c); // 800D80A8
  c->lr=0x800D80B0u; f_800BB700(c); // 800D80AC
  c->r[4]=c->r[30]|c->r[30]; // 800D80B0
  c->lr=0x800D80B8u; f_800BBE64(c); // 800D80B4
  c->r[4]=0u+0x00000001u; // 800D80B8
  c->lr=0x800D80C0u; f_800D2CC8(c); // 800D80BC
  cmps(c,0,(int32_t)c->r[29],0); // 800D80C0
  if (crb(c,2)) { goto L_800D80E0; } // 800D80C4
  c->lr=0x800D80CCu; f_800A23BC(c); // 800D80C8
  c->lr=0x800D80D0u; f_800BB700(c); // 800D80CC
  c->r[4]=c->r[30]|c->r[30]; // 800D80D0
  c->lr=0x800D80D8u; f_800BBE64(c); // 800D80D4
  c->r[4]=c->r[1]+0x00000020u; // 800D80D8
  c->lr=0x800D80E0u; f_800BB528(c); // 800D80DC
L_800D80E0:;
  c->lr=0x800D80E4u; f_800A23BC(c); // 800D80E0
  c->lr=0x800D80E8u; f_800BB700(c); // 800D80E4
  c->r[4]=c->r[30]|c->r[30]; // 800D80E8
  c->lr=0x800D80F0u; f_800BBE64(c); // 800D80EC
  c->lr=0x800D80F4u; f_800D28A4(c); // 800D80F0
L_800D80F4:;
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800D80F4
  c->r[30]=R32(c->r[1]+0x00000088u); // 800D80F8
  c->r[29]=R32(c->r[1]+0x00000084u); // 800D80FC
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D8100
  c->lr=c->r[0]; // 800D8104
  c->r[1]=c->r[1]+0x00000090u; // 800D8108
  return; // 800D810C
}

// fn_800D8110
void f_800D8110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8110
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D8114
  c->r[3]=0u+0x80430000u; // 800D8118
  c->r[3]=c->r[3]+0xFFFFD7B8u; // 800D811C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8120
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D8124
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800D8128
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D812C
  c->r[1]=c->r[1]+0x00000010u; // 800D8130
  return; // 800D8134
}

// fn_800D8138
void f_800D8138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8138
  c->r[3]=0u+0x80430000u; // 800D813C
  c->r[3]=c->r[3]+0xFFFFD7B8u; // 800D8140
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D8144
  c->r[3]=c->r[3]+c->r[0]; // 800D8148
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D814C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D8150
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800D8154
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D8158
  c->r[1]=c->r[1]+0x00000010u; // 800D815C
  return; // 800D8160
}

// fn_800D8164
void f_800D8164(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8164
  c->r[0]=c->lr; // 800D8168
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D816C
  c->lr=0x800D8174u; f_8007B524(c); // 800D8170
  c->lr=0x800D8178u; f_8009CF08(c); // 800D8174
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8178
  c->lr=c->r[0]; // 800D817C
  c->r[1]=c->r[1]+0x00000010u; // 800D8180
  return; // 800D8184
}

// fn_800D8188
void f_800D8188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8188
  c->r[0]=c->lr; // 800D818C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8194
  c->r[31]=c->r[3]|c->r[3]; // 800D8198
  c->lr=0x800D81A0u; f_800A23BC(c); // 800D819C
  c->lr=0x800D81A4u; f_800A23C8(c); // 800D81A0
  c->lr=0x800D81A8u; f_800CDEF0(c); // 800D81A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D81A8
  if (crb(c,2)) { goto L_800D81B8; } // 800D81AC
  c->r[3]=0u+0x00000000u; // 800D81B0
  goto L_800D8240; // 800D81B4
L_800D81B8:;
  c->lr=0x800D81BCu; f_80154714(c); // 800D81B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D81BC
  if (!crb(c,2)) { goto L_800D81CC; } // 800D81C0
  c->r[3]=0u+0x00000000u; // 800D81C4
  goto L_800D8240; // 800D81C8
L_800D81CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D81CC
  c->lr=0x800D81D4u; f_800D8254(c); // 800D81D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D81D4
  if (crb(c,2)) { goto L_800D81E4; } // 800D81D8
  c->r[3]=0u+0x00000000u; // 800D81DC
  goto L_800D8240; // 800D81E0
L_800D81E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D81E4
  c->lr=0x800D81ECu; f_800D8284(c); // 800D81E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D81EC
  if (!crb(c,2)) { goto L_800D81FC; } // 800D81F0
  c->r[3]=0u+0x00000000u; // 800D81F4
  goto L_800D8240; // 800D81F8
L_800D81FC:;
  c->lr=0x800D8200u; f_8007B524(c); // 800D81FC
  c->lr=0x800D8204u; f_8009CE44(c); // 800D8200
  cmps(c,0,(int32_t)c->r[3],0); // 800D8204
  if (crb(c,2)) { goto L_800D8214; } // 800D8208
  c->r[3]=0u+0x00000001u; // 800D820C
  goto L_800D8240; // 800D8210
L_800D8214:;
  c->lr=0x800D8218u; f_8006E268(c); // 800D8214
  c->lr=0x800D821Cu; f_80073690(c); // 800D8218
  cmps(c,0,(int32_t)c->r[3],5); // 800D821C
  if (!crb(c,2)) { goto L_800D823C; } // 800D8220
  c->lr=0x800D8228u; f_8007B524(c); // 800D8224
  c->lr=0x800D822Cu; f_8009D234(c); // 800D8228
  cmps(c,0,(int32_t)c->r[3],0); // 800D822C
  if (crb(c,2)) { goto L_800D823C; } // 800D8230
  c->r[3]=0u+0x00000001u; // 800D8234
  goto L_800D8240; // 800D8238
L_800D823C:;
  c->r[3]=0u+0x00000000u; // 800D823C
L_800D8240:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8240
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8244
  c->lr=c->r[0]; // 800D8248
  c->r[1]=c->r[1]+0x00000010u; // 800D824C
  return; // 800D8250
}

// fn_800D8254
void f_800D8254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8254
  c->r[0]=c->lr; // 800D8258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D825C
  c->lr=0x800D8264u; f_8007B524(c); // 800D8260
  c->lr=0x800D8268u; f_8009CEB8(c); // 800D8264
  c->r[0]=0u-c->r[3]; // 800D8268
  c->r[0]=c->r[0]|c->r[3]; // 800D826C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D8270
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8274
  c->lr=c->r[0]; // 800D8278
  c->r[1]=c->r[1]+0x00000010u; // 800D827C
  return; // 800D8280
}

// fn_800D8284
void f_800D8284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8284
  c->r[0]=c->lr; // 800D8288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D828C
  c->lr=0x800D8294u; f_800BB904(c); // 800D8290
  c->r[0]=cntlz(c->r[3]); // 800D8294
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D8298
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D829C
  c->lr=c->r[0]; // 800D82A0
  c->r[1]=c->r[1]+0x00000010u; // 800D82A4
  return; // 800D82A8
}

// fn_800D82AC
void f_800D82AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D82AC
  c->r[0]=c->lr; // 800D82B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D82B4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D82B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D82BC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D82C0
  c->r[29]=c->r[4]|c->r[4]; // 800D82C4
  c->lr=0x800D82CCu; f_8007B524(c); // 800D82C8
  c->lr=0x800D82D0u; f_8006E224(c); // 800D82CC
  c->lr=0x800D82D4u; f_800897A8(c); // 800D82D0
  c->r[4]=c->r[1]+0x00000008u; // 800D82D4
  c->r[5]=c->r[29]|c->r[29]; // 800D82D8
  c->lr=0x800D82E0u; f_80068458(c); // 800D82DC
  c->lr=0x800D82E4u; f_8007B524(c); // 800D82E0
  c->r[4]=c->r[1]+0x00000010u; // 800D82E4
  c->lr=0x800D82ECu; f_8009CFD0(c); // 800D82E8
  c->lr=0x800D82F0u; f_8007B524(c); // 800D82EC
  c->lr=0x800D82F4u; f_8009D0D0(c); // 800D82F0
  c->r[29]=c->r[3]|c->r[3]; // 800D82F4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D82F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D82FC
  c->r[31]=c->r[0]-c->r[3]; // 800D8300
  c->r[3]=R32(c->r[1]+0x00000014u); // 800D8304
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D8308
  c->r[30]=c->r[0]-c->r[3]; // 800D830C
  cmps(c,0,(int32_t)c->r[31],0); // 800D8310
  if (!crb(c,2)) { goto L_800D8358; } // 800D8314
  c->lr=0x800D831Cu; f_800A23BC(c); // 800D8318
  c->lr=0x800D8320u; f_800A23C4(c); // 800D831C
  c->r[4]=c->r[29]|c->r[29]; // 800D8320
  c->lr=0x800D8328u; f_800D8138(c); // 800D8324
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800D8328
  if (crb(c,2)) { goto L_800D8338; } // 800D832C
  c->r[3]=0u+0x00000000u; // 800D8330
  goto L_800D83AC; // 800D8334
L_800D8338:;
  c->lr=0x800D833Cu; f_800A23BC(c); // 800D8338
  c->lr=0x800D8340u; f_800A23C4(c); // 800D833C
  c->r[4]=c->r[29]|c->r[29]; // 800D8340
  c->lr=0x800D8348u; f_800D8110(c); // 800D8344
  cmps(c,0,(int32_t)c->r[3],0); // 800D8348
  if (crb(c,2)) { goto L_800D83A8; } // 800D834C
  c->r[3]=0u+0x00000000u; // 800D8350
  goto L_800D83AC; // 800D8354
L_800D8358:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D8358
  if (!crb(c,2)) { goto L_800D83A0; } // 800D835C
  c->lr=0x800D8364u; f_800A23BC(c); // 800D8360
  c->lr=0x800D8368u; f_800A23C4(c); // 800D8364
  c->r[4]=c->r[29]|c->r[29]; // 800D8368
  c->lr=0x800D8370u; f_800D8110(c); // 800D836C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800D8370
  if (crb(c,2)) { goto L_800D8380; } // 800D8374
  c->r[3]=0u+0x00000000u; // 800D8378
  goto L_800D83AC; // 800D837C
L_800D8380:;
  c->lr=0x800D8384u; f_800A23BC(c); // 800D8380
  c->lr=0x800D8388u; f_800A23C4(c); // 800D8384
  c->r[4]=c->r[29]|c->r[29]; // 800D8388
  c->lr=0x800D8390u; f_800D8138(c); // 800D838C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8390
  if (crb(c,2)) { goto L_800D83A8; } // 800D8394
  c->r[3]=0u+0x00000000u; // 800D8398
  goto L_800D83AC; // 800D839C
L_800D83A0:;
  c->r[3]=0u+0x00000000u; // 800D83A0
  goto L_800D83AC; // 800D83A4
L_800D83A8:;
  c->r[3]=0u+0x00000001u; // 800D83A8
L_800D83AC:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D83AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D83B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D83B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D83B8
  c->lr=c->r[0]; // 800D83BC
  c->r[1]=c->r[1]+0x00000030u; // 800D83C0
  return; // 800D83C4
}

// fn_800D83C8
void f_800D83C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D83C8
  c->r[0]=c->lr; // 800D83CC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D83D0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D83D4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D83D8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D83DC
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D83E0
  c->r[30]=c->r[3]|c->r[3]; // 800D83E4
  c->r[31]=c->r[4]|c->r[4]; // 800D83E8
  c->r[3]=c->r[1]+0x00000050u; // 800D83EC
  c->lr=0x800D83F4u; f_8004B0A4(c); // 800D83F0
  c->r[3]=c->r[1]+0x00000044u; // 800D83F4
  c->lr=0x800D83FCu; f_8004B0A4(c); // 800D83F8
  c->r[3]=c->r[1]+0x00000038u; // 800D83FC
  c->lr=0x800D8404u; f_8004B0A4(c); // 800D8400
  c->r[3]=c->r[1]+0x0000002Cu; // 800D8404
  c->lr=0x800D840Cu; f_8004B0A4(c); // 800D8408
  c->r[3]=c->r[1]+0x00000020u; // 800D840C
  c->lr=0x800D8414u; f_8004B0A4(c); // 800D8410
  c->r[3]=c->r[1]+0x00000014u; // 800D8414
  c->lr=0x800D841Cu; f_8004B0A4(c); // 800D8418
  c->r[3]=c->r[1]+0x00000008u; // 800D841C
  c->lr=0x800D8424u; f_8004B0A4(c); // 800D8420
  c->lr=0x800D8428u; f_800A23BC(c); // 800D8424
  c->lr=0x800D842Cu; f_800BB800(c); // 800D8428
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D842C
  c->lr=0x800D8434u; f_800BBD98(c); // 800D8430
  cmps(c,0,(int32_t)c->r[3],0); // 800D8434
  if (!crb(c,2)) { goto L_800D8444; } // 800D8438
  c->r[3]=0u+0x00000000u; // 800D843C
  goto L_800D851C; // 800D8440
L_800D8444:;
  c->lr=0x800D8448u; f_8007B524(c); // 800D8444
  c->r[4]=c->r[1]+0x00000050u; // 800D8448
  c->lr=0x800D8450u; f_8009CDA0(c); // 800D844C
  c->lr=0x800D8454u; f_8007B524(c); // 800D8450
  c->r[4]=c->r[1]+0x00000044u; // 800D8454
  c->lr=0x800D845Cu; f_8009CDDC(c); // 800D8458
  c->r[3]=c->r[1]+0x00000014u; // 800D845C
  c->r[4]=c->r[31]|c->r[31]; // 800D8460
  c->r[5]=c->r[1]+0x00000050u; // 800D8464
  c->lr=0x800D846Cu; f_8006000C(c); // 800D8468
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D846C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800D8470
  c->r[3]=c->r[1]+0x00000008u; // 800D8474
  c->r[4]=c->r[1]+0x00000014u; // 800D8478
  c->lr=0x800D8480u; f_8005C110(c); // 800D847C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8480
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D8484
  c->lr=0x800D848Cu; f_800592F8(c); // 800D8488
  c->f[31]=c->f[1]; // 800D848C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8490
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D8494
  c->lr=0x800D849Cu; f_800BBF84(c); // 800D8498
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800D849C
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D84A0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D84A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800D84A8
  c->lr=0x800D84B0u; f_800BBF84(c); // 800D84AC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800D84B0
  c->f[1]=c->f[31]; // 800D84B4
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D84B8
  c->lr=0x800D84C0u; f_800BBF84(c); // 800D84BC
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D84C0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D84C4
  c->lr=0x800D84CCu; f_800BBF84(c); // 800D84C8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D84CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D84D0
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D84D4
  fcmp(c,0,c->f[1],c->f[0]); // 800D84D8
  if (!crb(c,1)) { goto L_800D84EC; } // 800D84DC
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D84E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D84E4
  goto L_800D8500; // 800D84E8
L_800D84EC:;
  {uint32_t ea=c->r[2]+0xFFFF884Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D84EC
  fcmp(c,0,c->f[1],c->f[0]); // 800D84F0
  if (!crb(c,0)) { goto L_800D8500; } // 800D84F4
  {uint32_t ea=c->r[2]+0xFFFF8848u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D84F8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D84FC
L_800D8500:;
  c->lr=0x800D8504u; f_800797BC(c); // 800D8500
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8504
  fcmp(c,0,c->f[1],c->f[0]); // 800D8508
  c->r[0]=c->cr; // 800D850C
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 800D8510
  c->r[0]=cntlz(c->r[0]); // 800D8514
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D8518
L_800D851C:;
  c->r[0]=0u+0x00000078u; // 800D851C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D8520
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D8524
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D8528
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D852C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D8530
  c->lr=c->r[0]; // 800D8534
  c->r[1]=c->r[1]+0x00000080u; // 800D8538
  return; // 800D853C
}

// fn_800D8540
void f_800D8540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8540
  c->r[0]=c->lr; // 800D8544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D854C
  c->r[31]=c->r[3]|c->r[3]; // 800D8550
  c->r[3]=c->r[1]+0x00000008u; // 800D8554
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8558
  c->f[2]=c->f[1]; // 800D855C
  c->f[3]=c->f[1]; // 800D8560
  c->lr=0x800D8568u; f_8004E34C(c); // 800D8564
  c->r[3]=0u+0x00000000u; // 800D8568
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800D856C
  W32(c->r[31]+0x00000014u,c->r[3]); // 800D8570
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D8574
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8578
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800D857C
  W32(c->r[31]+0x00000020u,c->r[3]); // 800D8580
  W32(c->r[31]+0x00000024u,c->r[3]); // 800D8584
  W32(c->r[31]+0x00000028u,c->r[3]); // 800D8588
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800D858C
  W32(c->r[31]+0x00000070u,c->r[3]); // 800D8590
  W32(c->r[31]+0x00000074u,c->r[3]); // 800D8594
  W32(c->r[31]+0x000000D8u,c->r[3]); // 800D8598
  W32(c->r[31]+0x00000080u,c->r[3]); // 800D859C
  W32(c->r[31]+0x00000084u,c->r[3]); // 800D85A0
  W32(c->r[31]+0x00000088u,c->r[3]); // 800D85A4
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 800D85A8
  W32(c->r[31]+0x00000090u,c->r[3]); // 800D85AC
  W32(c->r[31]+0x00000094u,c->r[3]); // 800D85B0
  W32(c->r[31]+0x00000098u,c->r[3]); // 800D85B4
  W32(c->r[31]+0x0000009Cu,c->r[3]); // 800D85B8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D85BC
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 800D85C0
  c->r[0]=0u+0xFFFFFFFFu; // 800D85C4
  W32(c->r[31]+0x000000CCu,c->r[0]); // 800D85C8
  W32(c->r[31]+0x000000D0u,c->r[0]); // 800D85CC
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800D85D0
  W32(c->r[31]+0x000000DCu,c->r[3]); // 800D85D4
  c->r[3]=c->r[31]|c->r[31]; // 800D85D8
  c->lr=0x800D85E0u; f_800BB8D0(c); // 800D85DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D85E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D85E4
  c->lr=c->r[0]; // 800D85E8
  c->r[1]=c->r[1]+0x00000020u; // 800D85EC
  return; // 800D85F0
}

// fn_800D85F4
void f_800D85F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D85F4
  c->r[0]=c->lr; // 800D85F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D85FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D8600
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D8604
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D8608
  c->r[29]=c->r[3]|c->r[3]; // 800D860C
  c->r[3]=c->r[1]+0x00000014u; // 800D8610
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8614
  c->f[2]=c->f[1]; // 800D8618
  c->f[3]=c->f[1]; // 800D861C
  c->lr=0x800D8624u; f_8004E34C(c); // 800D8620
  c->r[3]=c->r[1]+0x00000008u; // 800D8624
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8628
  c->f[2]=c->f[1]; // 800D862C
  c->f[3]=c->f[1]; // 800D8630
  c->lr=0x800D8638u; f_8004E34C(c); // 800D8634
  c->lr=0x800D863Cu; f_800A23BC(c); // 800D8638
  c->lr=0x800D8640u; f_800BB800(c); // 800D863C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D8640
  c->lr=0x800D8648u; f_800C1284(c); // 800D8644
  cmps(c,0,(int32_t)c->r[3],0); // 800D8648
  if (crb(c,2)) { goto L_800D8660; } // 800D864C
  c->lr=0x800D8654u; f_800A23BC(c); // 800D8650
  c->lr=0x800D8658u; f_800BB800(c); // 800D8654
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D8658
  c->lr=0x800D8660u; f_800C9ADC(c); // 800D865C
L_800D8660:;
  c->r[31]=0u+0x00000000u; // 800D8660
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800D8664
  cmps(c,0,(int32_t)c->r[31],0); // 800D8668
  if (!crb(c,2)) { goto L_800D86EC; } // 800D866C
  c->lr=0x800D8674u; f_800A23BC(c); // 800D8670
  c->lr=0x800D8678u; f_800BB800(c); // 800D8674
  c->lr=0x800D867Cu; f_800C9D00(c); // 800D8678
  c->r[30]=c->r[3]|c->r[3]; // 800D867C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8680
  if (crb(c,2)) { goto L_800D86EC; } // 800D8684
  c->lr=0x800D868Cu; f_800A23BC(c); // 800D8688
  c->lr=0x800D8690u; f_800BB800(c); // 800D868C
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D8690
  c->r[5]=c->r[30]|c->r[30]; // 800D8694
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8698
  c->lr=0x800D86A0u; f_800C99A8(c); // 800D869C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800D86A0
  c->lr=0x800D86A8u; f_800A23BC(c); // 800D86A4
  c->lr=0x800D86ACu; f_800BB800(c); // 800D86A8
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D86AC
  c->lr=0x800D86B4u; f_800BBD58(c); // 800D86B0
  c->r[4]=0u+0x00000002u; // 800D86B4
  c->lr=0x800D86BCu; f_800BB93C(c); // 800D86B8
  c->lr=0x800D86C0u; f_800A23BC(c); // 800D86BC
  c->lr=0x800D86C4u; f_800BB800(c); // 800D86C0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D86C4
  c->lr=0x800D86CCu; f_800BBD58(c); // 800D86C8
  c->r[4]=0u+0x80460000u; // 800D86CC
  c->r[4]=c->r[4]+0x0000062Cu; // 800D86D0
  c->r[5]=0u+0x00000006u; // 800D86D4
  c->lr=0x800D86DCu; f_800C7E90(c); // 800D86D8
  c->r[0]=R32(c->r[29]+0x00000078u); // 800D86DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D86E0
  if (crb(c,2)) { goto L_800D86EC; } // 800D86E4
  W32(c->r[29]+0x00000078u,c->r[31]); // 800D86E8
L_800D86EC:;
  c->lr=0x800D86F0u; f_800A23BC(c); // 800D86EC
  c->lr=0x800D86F4u; f_800BB800(c); // 800D86F0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D86F4
  c->lr=0x800D86FCu; f_800C1284(c); // 800D86F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D86FC
  if (crb(c,2)) { goto L_800D87E4; } // 800D8700
  c->lr=0x800D8708u; f_800A23BC(c); // 800D8704
  c->lr=0x800D870Cu; f_800BB800(c); // 800D8708
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D870C
  c->lr=0x800D8714u; f_800BBD58(c); // 800D8710
  c->r[4]=c->r[1]+0x00000014u; // 800D8714
  c->lr=0x800D871Cu; f_800BCDE8(c); // 800D8718
  c->lr=0x800D8720u; f_800A23BC(c); // 800D871C
  c->lr=0x800D8724u; f_800BB800(c); // 800D8720
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D8724
  c->lr=0x800D872Cu; f_800BBD58(c); // 800D8728
  c->r[4]=c->r[1]+0x00000008u; // 800D872C
  c->lr=0x800D8734u; f_800BD0E8(c); // 800D8730
  c->lr=0x800D8738u; f_800A23BC(c); // 800D8734
  c->lr=0x800D873Cu; f_800BB800(c); // 800D8738
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D873C
  c->lr=0x800D8744u; f_800C1284(c); // 800D8740
  cmps(c,0,(int32_t)c->r[3],0); // 800D8744
  if (crb(c,2)) { goto L_800D87E4; } // 800D8748
  c->lr=0x800D8750u; f_800A23BC(c); // 800D874C
  c->lr=0x800D8754u; f_800BB800(c); // 800D8750
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D8754
  c->lr=0x800D875Cu; f_800BBD58(c); // 800D8758
  c->r[30]=c->r[3]|c->r[3]; // 800D875C
  c->lr=0x800D8764u; f_8006E268(c); // 800D8760
  c->lr=0x800D8768u; f_80073690(c); // 800D8764
  cmps(c,0,(int32_t)c->r[3],5); // 800D8768
  if (crb(c,2)) { goto L_800D87B4; } // 800D876C
  if (!crb(c,0)) { goto L_800D87E4; } // 800D8770
  cmps(c,0,(int32_t)c->r[3],4); // 800D8774
  if (!crb(c,0)) { goto L_800D8780; } // 800D8778
  goto L_800D87E4; // 800D877C
L_800D8780:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8780
  c->r[4]=0u+0x00000000u; // 800D8784
  c->r[5]=c->r[13]+0xFFFF8828u; // 800D8788
  c->lr=0x800D8790u; f_800C9F20(c); // 800D878C
  c->r[3]=c->r[30]|c->r[30]; // 800D8790
  c->r[4]=0u+0x00000001u; // 800D8794
  c->r[5]=c->r[13]+0xFFFF8864u; // 800D8798
  c->lr=0x800D87A0u; f_800C9F20(c); // 800D879C
  c->r[3]=c->r[30]|c->r[30]; // 800D87A0
  c->r[4]=0u+0x00000002u; // 800D87A4
  c->r[5]=c->r[13]+0xFFFF8838u; // 800D87A8
  c->lr=0x800D87B0u; f_800C9F20(c); // 800D87AC
  goto L_800D87E4; // 800D87B0
L_800D87B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D87B4
  c->r[4]=0u+0x00000000u; // 800D87B8
  c->r[5]=c->r[13]+0xFFFF8830u; // 800D87BC
  c->lr=0x800D87C4u; f_800C9F20(c); // 800D87C0
  c->r[3]=c->r[30]|c->r[30]; // 800D87C4
  c->r[4]=0u+0x00000001u; // 800D87C8
  c->r[5]=c->r[13]+0xFFFF8864u; // 800D87CC
  c->lr=0x800D87D4u; f_800C9F20(c); // 800D87D0
  c->r[3]=c->r[30]|c->r[30]; // 800D87D4
  c->r[4]=0u+0x00000002u; // 800D87D8
  c->r[5]=c->r[13]+0xFFFF8838u; // 800D87DC
  c->lr=0x800D87E4u; f_800C9F20(c); // 800D87E0
L_800D87E4:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D87E4
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D87E8
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D87EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D87F0
  c->lr=c->r[0]; // 800D87F4
  c->r[1]=c->r[1]+0x00000030u; // 800D87F8
  return; // 800D87FC
}

// fn_800D8800
void f_800D8800(Ctx* __restrict c) {
  f_800D8540(c); return; // 800D8800
}

// fn_800D8804
void f_800D8804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8804
  c->r[0]=c->lr; // 800D8808
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D880C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8810
  c->r[31]=c->r[3]|c->r[3]; // 800D8814
  cmps(c,0,(int32_t)c->r[4],7); // 800D8818
  if (crb(c,2)) { goto L_800D88B8; } // 800D881C
  c->r[5]=R32(c->r[3]+0x0000007Cu); // 800D8820
  c->r[0]=0u+0x00000001u; // 800D8824
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800D8828
  c->r[0]=c->r[5]|c->r[0]; // 800D882C
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800D8830
  cmps(c,0,(int32_t)c->r[0],0); // 800D8834
  if (crb(c,2)) { goto L_800D88B8; } // 800D8838
  c->lr=0x800D8840u; f_800A23BC(c); // 800D883C
  c->lr=0x800D8844u; f_800BB800(c); // 800D8840
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800D8844
  c->lr=0x800D884Cu; f_800C1284(c); // 800D8848
  cmps(c,0,(int32_t)c->r[3],0); // 800D884C
  if (crb(c,2)) { goto L_800D88B8; } // 800D8850
  c->lr=0x800D8858u; f_8007B524(c); // 800D8854
  c->lr=0x800D885Cu; f_8006E22C(c); // 800D8858
  c->r[12]=R32(c->r[3]+0x00000058u); // 800D885C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D8860
  c->ctr=c->r[12]; // 800D8864
  if (true) { c->lr=0x800D886Cu; dispatch(c,c->ctr); } // 800D8868
  cmps(c,0,(int32_t)c->r[3],0); // 800D886C
  if (crb(c,2)) { goto L_800D88B8; } // 800D8870
  c->lr=0x800D8878u; f_8006E268(c); // 800D8874
  c->lr=0x800D887Cu; f_80073690(c); // 800D8878
  cmps(c,0,(int32_t)c->r[3],5); // 800D887C
  if (crb(c,2)) { goto L_800D88AC; } // 800D8880
  if (!crb(c,0)) { goto L_800D88B8; } // 800D8884
  cmps(c,0,(int32_t)c->r[3],4); // 800D8888
  if (!crb(c,0)) { goto L_800D8894; } // 800D888C
  goto L_800D88B8; // 800D8890
L_800D8894:;
  c->r[3]=0u+0x00000001u; // 800D8894
  c->lr=0x800D889Cu; f_801FADAC(c); // 800D8898
  c->lr=0x800D88A0u; f_8007B524(c); // 800D889C
  c->r[4]=0u+0x00000000u; // 800D88A0
  c->lr=0x800D88A8u; f_8009CCC0(c); // 800D88A4
  goto L_800D88B8; // 800D88A8
L_800D88AC:;
  c->lr=0x800D88B0u; f_8007B524(c); // 800D88AC
  c->r[4]=0u+0x00000000u; // 800D88B0
  c->lr=0x800D88B8u; f_8009CF3C(c); // 800D88B4
L_800D88B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D88B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D88BC
  c->lr=c->r[0]; // 800D88C0
  c->r[1]=c->r[1]+0x00000010u; // 800D88C4
  return; // 800D88C8
}

// fn_800D88CC
void f_800D88CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D88CC
  c->r[0]=c->lr; // 800D88D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D88D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D88D8
  c->r[31]=c->r[3]|c->r[3]; // 800D88DC
  cmps(c,0,(int32_t)c->r[4],7); // 800D88E0
  if (!crb(c,2)) { goto L_800D88F8; } // 800D88E4
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 800D88E8
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 800D88EC
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800D88F0
  goto L_800D8910; // 800D88F4
L_800D88F8:;
  c->r[5]=R32(c->r[3]+0x0000007Cu); // 800D88F8
  c->r[0]=0u+0x00000001u; // 800D88FC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800D8900
  c->r[0]=~(c->r[0]|c->r[0]); // 800D8904
  c->r[0]=c->r[5]&c->r[0]; // 800D8908
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800D890C
L_800D8910:;
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 800D8910
  cmps(c,0,(int32_t)c->r[0],0); // 800D8914
  if (!crb(c,2)) { goto L_800D8998; } // 800D8918
  c->lr=0x800D8920u; f_800A23BC(c); // 800D891C
  c->lr=0x800D8924u; f_800BB800(c); // 800D8920
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800D8924
  c->lr=0x800D892Cu; f_800C1284(c); // 800D8928
  cmps(c,0,(int32_t)c->r[3],0); // 800D892C
  if (crb(c,2)) { goto L_800D8998; } // 800D8930
  c->lr=0x800D8938u; f_8007B524(c); // 800D8934
  c->lr=0x800D893Cu; f_8006E22C(c); // 800D8938
  c->r[12]=R32(c->r[3]+0x00000058u); // 800D893C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D8940
  c->ctr=c->r[12]; // 800D8944
  if (true) { c->lr=0x800D894Cu; dispatch(c,c->ctr); } // 800D8948
  cmps(c,0,(int32_t)c->r[3],0); // 800D894C
  if (crb(c,2)) { goto L_800D8998; } // 800D8950
  c->lr=0x800D8958u; f_8006E268(c); // 800D8954
  c->lr=0x800D895Cu; f_80073690(c); // 800D8958
  cmps(c,0,(int32_t)c->r[3],5); // 800D895C
  if (crb(c,2)) { goto L_800D898C; } // 800D8960
  if (!crb(c,0)) { goto L_800D8998; } // 800D8964
  cmps(c,0,(int32_t)c->r[3],4); // 800D8968
  if (!crb(c,0)) { goto L_800D8974; } // 800D896C
  goto L_800D8998; // 800D8970
L_800D8974:;
  c->r[3]=0u+0x00000001u; // 800D8974
  c->lr=0x800D897Cu; f_801FADAC(c); // 800D8978
  c->lr=0x800D8980u; f_8007B524(c); // 800D897C
  c->r[4]=0u+0x00000001u; // 800D8980
  c->lr=0x800D8988u; f_8009CCC0(c); // 800D8984
  goto L_800D8998; // 800D8988
L_800D898C:;
  c->lr=0x800D8990u; f_8007B524(c); // 800D898C
  c->r[4]=0u+0x00000001u; // 800D8990
  c->lr=0x800D8998u; f_8009CF3C(c); // 800D8994
L_800D8998:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8998
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D899C
  c->lr=c->r[0]; // 800D89A0
  c->r[1]=c->r[1]+0x00000010u; // 800D89A4
  return; // 800D89A8
}

// fn_800D89AC
void f_800D89AC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000078u); // 800D89AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D89B0
  if (crb(c,2)) { goto L_800D89C0; } // 800D89B4
  c->r[3]=0u+0x00000001u; // 800D89B8
  return; // 800D89BC
L_800D89C0:;
  c->r[3]=R32(c->r[3]+0x0000007Cu); // 800D89C0
  c->r[0]=0u-c->r[3]; // 800D89C4
  c->r[0]=c->r[0]|c->r[3]; // 800D89C8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D89CC
  return; // 800D89D0
}

// fn_800D89D4
void f_800D89D4(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00010000u; // 800D89D4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D89D8
  if (!crb(c,2)) { goto L_800D89F4; } // 800D89DC
  c->r[3]=R32(c->r[3]+0x0000007Cu); // 800D89E0
  c->r[0]=0u-c->r[3]; // 800D89E4
  c->r[0]=c->r[0]|c->r[3]; // 800D89E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D89EC
  return; // 800D89F0
L_800D89F4:;
  c->r[3]=R32(c->r[3]+0x0000007Cu); // 800D89F4
  c->r[0]=0u+0x00000001u; // 800D89F8
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800D89FC
  c->r[3]=c->r[3]&c->r[0]; // 800D8A00
  c->r[0]=0u-c->r[3]; // 800D8A04
  c->r[0]=c->r[0]|c->r[3]; // 800D8A08
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D8A0C
  return; // 800D8A10
}

// fn_800D8A14
void f_800D8A14(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000020u); // 800D8A14
  cmps(c,0,(int32_t)c->r[5],0); // 800D8A18
  if (crb(c,2)) { goto L_800D8A34; } // 800D8A1C
  c->r[0]=R32(c->r[5]+0x00000014u); // 800D8A20
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800D8A24
  if (!crb(c,2)) { goto L_800D8A34; } // 800D8A28
  c->r[3]=0u+0x00000001u; // 800D8A2C
  return; // 800D8A30
L_800D8A34:;
  c->r[5]=R32(c->r[3]+0x00000024u); // 800D8A34
  cmps(c,0,(int32_t)c->r[5],0); // 800D8A38
  if (!crb(c,2)) { goto L_800D8A48; } // 800D8A3C
  c->r[3]=0u+0x00000000u; // 800D8A40
  return; // 800D8A44
L_800D8A48:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 800D8A48
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800D8A4C
  if (crb(c,2)) { goto L_800D8A5C; } // 800D8A50
  c->r[3]=0u+0x00000000u; // 800D8A54
  return; // 800D8A58
L_800D8A5C:;
  f_800D8F5C(c); return; // 800D8A5C
  return; // 800D8A60
}

// fn_800D8A64
void f_800D8A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A64
  c->r[0]=c->lr; // 800D8A68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8A6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D8A70
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D8A74
  c->r[30]=c->r[4]|c->r[4]; // 800D8A78
  c->r[31]=c->r[5]|c->r[5]; // 800D8A7C
  c->r[3]=0u+0x80430000u; // 800D8A80
  c->r[4]=c->r[3]+0xFFFFD7F8u; // 800D8A84
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D8A88
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D8A8C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D8A90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D8A94
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8A98
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D8A9C
  c->lr=0x800D8AA4u; f_8007B524(c); // 800D8AA0
  c->lr=0x800D8AA8u; f_8009DD48(c); // 800D8AA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D8AA8
  if (!crb(c,2)) { goto L_800D8AB8; } // 800D8AAC
  c->r[3]=0u+0x00000000u; // 800D8AB0
  goto L_800D8AD8; // 800D8AB4
L_800D8AB8:;
  c->r[4]=c->r[31]|c->r[31]; // 800D8AB8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800D8ABC
  c->r[5]=c->r[1]+0x00000008u; // 800D8AC0
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D8AC4
  c->lr=0x800D8ACCu; f_80179A4C(c); // 800D8AC8
  c->r[0]=0u-c->r[3]; // 800D8ACC
  c->r[0]=c->r[0]|c->r[3]; // 800D8AD0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D8AD4
L_800D8AD8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D8AD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D8ADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8AE0
  c->lr=c->r[0]; // 800D8AE4
  c->r[1]=c->r[1]+0x00000020u; // 800D8AE8
  return; // 800D8AEC
}

// fn_800D8AF0
void f_800D8AF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8AF0
  c->r[0]=c->lr; // 800D8AF4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800D8AF8
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800D8AFC
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800D8B00
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800D8B04
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800D8B08
  c->r[28]=c->r[5]|c->r[5]; // 800D8B0C
  c->r[3]=c->r[1]+0x00000008u; // 800D8B10
  c->lr=0x800D8B18u; f_8008A590(c); // 800D8B14
  c->lr=0x800D8B1Cu; f_8007B524(c); // 800D8B18
  c->lr=0x800D8B20u; f_8009DD48(c); // 800D8B1C
  c->r[29]=c->r[3]|c->r[3]; // 800D8B20
  c->lr=0x800D8B28u; f_800F4430(c); // 800D8B24
  c->r[3]=c->r[3]+0x00000960u; // 800D8B28
  c->r[4]=c->r[28]|c->r[28]; // 800D8B2C
  c->lr=0x800D8B34u; f_8017B6F0(c); // 800D8B30
  c->r[31]=c->r[3]|c->r[3]; // 800D8B34
  c->lr=0x800D8B3Cu; f_80074E68(c); // 800D8B38
  c->lr=0x800D8B40u; f_8017A2D8(c); // 800D8B3C
  c->r[30]=c->r[3]|c->r[3]; // 800D8B40
  c->r[3]=c->r[1]+0x00000008u; // 800D8B44
  c->r[4]=c->r[28]|c->r[28]; // 800D8B48
  c->lr=0x800D8B50u; f_80178974(c); // 800D8B4C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D8B50
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D8B54
  c->r[3]=c->r[30]|c->r[30]; // 800D8B58
  c->r[4]=c->r[1]+0x00000008u; // 800D8B5C
  c->r[5]=0u+0x00000001u; // 800D8B60
  c->lr=0x800D8B68u; f_80178F64(c); // 800D8B64
  c->lr=0x800D8B6Cu; f_8007B524(c); // 800D8B68
  c->lr=0x800D8B70u; f_8009D9D0(c); // 800D8B6C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8B70
  if (crb(c,2)) { goto L_800D8B84; } // 800D8B74
  c->r[3]=c->r[30]|c->r[30]; // 800D8B78
  c->r[4]=0u+0x00000001u; // 800D8B7C
  c->lr=0x800D8B84u; f_801792DC(c); // 800D8B80
L_800D8B84:;
  c->r[3]=c->r[29]|c->r[29]; // 800D8B84
  c->r[4]=c->r[30]|c->r[30]; // 800D8B88
  c->lr=0x800D8B90u; f_80179868(c); // 800D8B8C
  c->r[4]=addc(c,~c->r[3],0xFFFFFFFFu,1); // 800D8B90
  c->r[0]=c->r[3]+0x00000001u; // 800D8B94
  c->r[0]=c->r[4]|c->r[0]; // 800D8B98
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D8B9C
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800D8BA0
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800D8BA4
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800D8BA8
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800D8BAC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800D8BB0
  c->lr=c->r[0]; // 800D8BB4
  c->r[1]=c->r[1]+0x000000B0u; // 800D8BB8
  return; // 800D8BBC
}

// fn_800D8BC0
void f_800D8BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8BC0
  c->r[0]=c->lr; // 800D8BC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D8BC8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D8BCC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D8BD0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D8BD4
  c->r[29]=c->r[4]|c->r[4]; // 800D8BD8
  c->r[30]=c->r[5]|c->r[5]; // 800D8BDC
  c->r[3]=0u+0x80430000u; // 800D8BE0
  c->r[4]=c->r[3]+0xFFFFD804u; // 800D8BE4
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D8BE8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D8BEC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D8BF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D8BF4
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D8BF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D8BFC
  c->lr=0x800D8C04u; f_8007B524(c); // 800D8C00
  c->lr=0x800D8C08u; f_8009DD48(c); // 800D8C04
  c->r[31]=c->r[3]|c->r[3]; // 800D8C08
  cmps(c,0,(int32_t)c->r[3],0); // 800D8C0C
  if (crb(c,2)) { goto L_800D8C3C; } // 800D8C10
  c->r[4]=c->r[30]|c->r[30]; // 800D8C14
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D8C18
  c->r[5]=c->r[1]+0x00000008u; // 800D8C1C
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D8C20
  c->lr=0x800D8C28u; f_80179A4C(c); // 800D8C24
  c->r[4]=c->r[3]|c->r[3]; // 800D8C28
  cmps(c,0,(int32_t)c->r[3],0); // 800D8C2C
  if (crb(c,2)) { goto L_800D8C3C; } // 800D8C30
  c->r[3]=c->r[31]|c->r[31]; // 800D8C34
  c->lr=0x800D8C3Cu; f_80179914(c); // 800D8C38
L_800D8C3C:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D8C3C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D8C40
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D8C44
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D8C48
  c->lr=c->r[0]; // 800D8C4C
  c->r[1]=c->r[1]+0x00000030u; // 800D8C50
  return; // 800D8C54
}

// fn_800D8C58
void f_800D8C58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C58
  c->r[0]=c->lr; // 800D8C5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8C60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8C64
  c->r[31]=c->r[4]|c->r[4]; // 800D8C68
  c->lr=0x800D8C70u; f_8007B524(c); // 800D8C6C
  c->lr=0x800D8C74u; f_800A1E50(c); // 800D8C70
  cmps(c,0,(int32_t)c->r[3],0); // 800D8C74
  if (crb(c,2)) { goto L_800D8C84; } // 800D8C78
  c->r[4]=c->r[31]|c->r[31]; // 800D8C7C
  c->lr=0x800D8C84u; f_8008C66C(c); // 800D8C80
L_800D8C84:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8C84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8C88
  c->lr=c->r[0]; // 800D8C8C
  c->r[1]=c->r[1]+0x00000010u; // 800D8C90
  return; // 800D8C94
}

// fn_800D8C98
void f_800D8C98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C98
  c->r[0]=c->lr; // 800D8C9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8CA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8CA4
  c->r[31]=c->r[4]|c->r[4]; // 800D8CA8
  c->lr=0x800D8CB0u; f_8007B524(c); // 800D8CAC
  c->lr=0x800D8CB4u; f_800A1E50(c); // 800D8CB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D8CB4
  if (crb(c,2)) { goto L_800D8CC4; } // 800D8CB8
  c->r[4]=0u-c->r[31]; // 800D8CBC
  c->lr=0x800D8CC4u; f_8008C66C(c); // 800D8CC0
L_800D8CC4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8CC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8CC8
  c->lr=c->r[0]; // 800D8CCC
  c->r[1]=c->r[1]+0x00000010u; // 800D8CD0
  return; // 800D8CD4
}

// fn_800D8CD8
void f_800D8CD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8CD8
  c->r[0]=c->lr; // 800D8CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8CE0
  c->lr=0x800D8CE8u; f_8007B524(c); // 800D8CE4
  c->lr=0x800D8CECu; f_800A1E50(c); // 800D8CE8
  cmps(c,0,(int32_t)c->r[3],0); // 800D8CEC
  if (crb(c,2)) { goto L_800D8CFC; } // 800D8CF0
  c->lr=0x800D8CF8u; f_8008C664(c); // 800D8CF4
  goto L_800D8D00; // 800D8CF8
L_800D8CFC:;
  c->r[3]=0u+0x00000000u; // 800D8CFC
L_800D8D00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8D00
  c->lr=c->r[0]; // 800D8D04
  c->r[1]=c->r[1]+0x00000010u; // 800D8D08
  return; // 800D8D0C
}

// fn_800D8D10
void f_800D8D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D10
  c->r[0]=c->lr; // 800D8D14
  W32(c->r[1]+0x00000114u,c->r[0]); // 800D8D18
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800D8D1C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800D8D20
  W32(c->r[1]+0x000000FCu,c->r[31]); // 800D8D24
  W32(c->r[1]+0x000000F8u,c->r[30]); // 800D8D28
  W32(c->r[1]+0x000000F4u,c->r[29]); // 800D8D2C
  c->r[29]=c->r[3]|c->r[3]; // 800D8D30
  c->r[3]=c->r[1]+0x000000C0u; // 800D8D34
  c->lr=0x800D8D3Cu; f_8004B0A4(c); // 800D8D38
  c->r[3]=c->r[1]+0x000000CCu; // 800D8D3C
  c->lr=0x800D8D44u; f_8004B0A4(c); // 800D8D40
  c->r[3]=c->r[1]+0x000000D8u; // 800D8D44
  c->lr=0x800D8D4Cu; f_8004B0A4(c); // 800D8D48
  c->r[3]=c->r[1]+0x000000E4u; // 800D8D4C
  c->lr=0x800D8D54u; f_8004B0A4(c); // 800D8D50
  c->r[3]=c->r[1]+0x00000090u; // 800D8D54
  c->lr=0x800D8D5Cu; f_8004B0A4(c); // 800D8D58
  c->r[3]=c->r[1]+0x0000009Cu; // 800D8D5C
  c->lr=0x800D8D64u; f_8004B0A4(c); // 800D8D60
  c->r[3]=c->r[1]+0x000000A8u; // 800D8D64
  c->lr=0x800D8D6Cu; f_8004B0A4(c); // 800D8D68
  c->r[3]=c->r[1]+0x000000B4u; // 800D8D6C
  c->lr=0x800D8D74u; f_8004B0A4(c); // 800D8D70
  c->r[3]=c->r[1]+0x00000050u; // 800D8D74
  c->lr=0x800D8D7Cu; f_8004B0A4(c); // 800D8D78
  c->r[3]=c->r[1]+0x00000044u; // 800D8D7C
  c->lr=0x800D8D84u; f_8004B0A4(c); // 800D8D80
  c->r[3]=c->r[1]+0x00000038u; // 800D8D84
  c->lr=0x800D8D8Cu; f_8004B0A4(c); // 800D8D88
  c->r[3]=c->r[1]+0x0000002Cu; // 800D8D8C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8D90
  c->f[2]=c->f[1]; // 800D8D94
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D8D98
  c->lr=0x800D8DA0u; f_8004E34C(c); // 800D8D9C
  c->r[3]=c->r[1]+0x00000060u; // 800D8DA0
  c->lr=0x800D8DA8u; f_8004B0A0(c); // 800D8DA4
  c->r[3]=c->r[29]|c->r[29]; // 800D8DA8
  c->lr=0x800D8DB0u; f_800D89AC(c); // 800D8DAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D8DB0
  if (!crb(c,2)) { goto L_800D8F34; } // 800D8DB4
  c->r[3]=c->r[29]|c->r[29]; // 800D8DB8
  c->lr=0x800D8DC0u; f_800BB904(c); // 800D8DBC
  cmps(c,0,(int32_t)c->r[3],0); // 800D8DC0
  if (!crb(c,2)) { goto L_800D8F34; } // 800D8DC4
  c->lr=0x800D8DCCu; f_800A23BC(c); // 800D8DC8
  c->lr=0x800D8DD0u; f_800BB800(c); // 800D8DCC
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D8DD0
  c->lr=0x800D8DD8u; f_800BBD98(c); // 800D8DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800D8DD8
  if (crb(c,2)) { goto L_800D8F34; } // 800D8DDC
  c->lr=0x800D8DE4u; f_800A23BC(c); // 800D8DE0
  c->lr=0x800D8DE8u; f_800BB700(c); // 800D8DE4
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800D8DE8
  c->lr=0x800D8DF0u; f_800BBEA4(c); // 800D8DEC
  c->lr=0x800D8DF4u; f_8007B524(c); // 800D8DF0
  c->lr=0x800D8DF8u; f_800A1DE4(c); // 800D8DF4
  c->r[31]=c->r[3]|c->r[3]; // 800D8DF8
  c->lr=0x800D8E00u; f_80078474(c); // 800D8DFC
  c->r[30]=c->r[3]|c->r[3]; // 800D8E00
  cmps(c,0,(int32_t)c->r[3],0); // 800D8E04
  if (crb(c,2)) { goto L_800D8E48; } // 800D8E08
  c->lr=0x800D8E10u; f_8007B51C(c); // 800D8E0C
  c->r[4]=c->r[3]|c->r[3]; // 800D8E10
  c->r[3]=c->r[1]+0x00000050u; // 800D8E14
  c->lr=0x800D8E1Cu; f_8004A65C(c); // 800D8E18
  c->r[3]=c->r[1]+0x00000008u; // 800D8E1C
  c->r[4]=c->r[30]|c->r[30]; // 800D8E20
  c->lr=0x800D8E28u; f_80180F7C(c); // 800D8E24
  c->r[3]=c->r[1]+0x00000038u; // 800D8E28
  c->r[4]=c->r[1]+0x00000008u; // 800D8E2C
  c->lr=0x800D8E34u; f_8004A65C(c); // 800D8E30
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8E34
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D8E38
  c->r[3]=c->r[1]+0x00000038u; // 800D8E3C
  c->lr=0x800D8E44u; f_8005C170(c); // 800D8E40
  goto L_800D8E54; // 800D8E44
L_800D8E48:;
  c->r[3]=c->r[31]+0x00000024u; // 800D8E48
  c->r[4]=c->r[1]+0x00000050u; // 800D8E4C
  c->lr=0x800D8E54u; f_8006E4CC(c); // 800D8E50
L_800D8E54:;
  c->r[3]=c->r[31]+0x00000024u; // 800D8E54
  c->r[4]=c->r[1]+0x00000044u; // 800D8E58
  c->lr=0x800D8E60u; f_80074EFC(c); // 800D8E5C
  c->r[3]=c->r[1]+0x00000060u; // 800D8E60
  c->lr=0x800D8E68u; f_800C2260(c); // 800D8E64
  c->r[3]=c->r[1]+0x00000060u; // 800D8E68
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8E6C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D8E70
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D8E74
  c->lr=0x800D8E7Cu; f_8004B0A8(c); // 800D8E78
  c->r[3]=c->r[1]+0x000000C0u; // 800D8E7C
  c->r[4]=c->r[1]+0x00000060u; // 800D8E80
  c->r[5]=c->r[1]+0x0000002Cu; // 800D8E84
  c->lr=0x800D8E8Cu; f_8005FF94(c); // 800D8E88
  c->r[3]=c->r[1]+0x00000090u; // 800D8E8C
  c->r[4]=c->r[1]+0x000000C0u; // 800D8E90
  {uint32_t ea=c->r[2]+0xFFFF8884u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8E94
  c->lr=0x800D8E9Cu; f_8004E330(c); // 800D8E98
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8E9C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 800D8EA0
  {uint32_t ea=c->r[2]+0xFFFF890Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8EA4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 800D8EA8
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 800D8EAC
  c->r[3]=c->r[1]+0x00000020u; // 800D8EB0
  c->lr=0x800D8EB8u; f_8004B0A4(c); // 800D8EB4
  c->r[3]=c->r[1]+0x00000014u; // 800D8EB8
  c->lr=0x800D8EC0u; f_8004B0A4(c); // 800D8EBC
  {uint32_t ea=c->r[2]+0xFFFF8864u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D8EC0
  c->r[3]=c->r[1]+0x00000020u; // 800D8EC4
  c->r[4]=c->r[1]+0x00000050u; // 800D8EC8
  c->lr=0x800D8ED0u; f_8004A65C(c); // 800D8ECC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8ED0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800D8ED4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D8ED8
  c->lr=0x800D8EE0u; f_800A23BC(c); // 800D8EDC
  c->lr=0x800D8EE4u; f_800C23AC(c); // 800D8EE0
  c->r[4]=c->r[1]+0x00000020u; // 800D8EE4
  c->r[5]=c->r[1]+0x00000090u; // 800D8EE8
  c->lr=0x800D8EF0u; f_800CB7D8(c); // 800D8EEC
  W32(c->r[29]+0x00000020u,c->r[3]); // 800D8EF0
  c->r[3]=c->r[29]|c->r[29]; // 800D8EF4
  c->lr=0x800D8EFCu; f_800D7458(c); // 800D8EF8
  c->r[3]=c->r[1]+0x00000020u; // 800D8EFC
  c->r[4]=c->r[1]+0x00000050u; // 800D8F00
  c->lr=0x800D8F08u; f_8004A65C(c); // 800D8F04
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8F08
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800D8F0C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D8F10
  c->lr=0x800D8F18u; f_800A23BC(c); // 800D8F14
  c->lr=0x800D8F1Cu; f_800C23AC(c); // 800D8F18
  c->r[4]=c->r[1]+0x00000020u; // 800D8F1C
  c->r[5]=c->r[1]+0x000000B4u; // 800D8F20
  c->lr=0x800D8F28u; f_800CB7D8(c); // 800D8F24
  W32(c->r[29]+0x00000024u,c->r[3]); // 800D8F28
  c->r[3]=c->r[29]|c->r[29]; // 800D8F2C
  c->lr=0x800D8F34u; f_800D73F8(c); // 800D8F30
L_800D8F34:;
  c->r[0]=0u+0x00000108u; // 800D8F34
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D8F38
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800D8F3C
  c->r[31]=R32(c->r[1]+0x000000FCu); // 800D8F40
  c->r[30]=R32(c->r[1]+0x000000F8u); // 800D8F44
  c->r[29]=R32(c->r[1]+0x000000F4u); // 800D8F48
  c->r[0]=R32(c->r[1]+0x00000114u); // 800D8F4C
  c->lr=c->r[0]; // 800D8F50
  c->r[1]=c->r[1]+0x00000110u; // 800D8F54
  return; // 800D8F58
}

// fn_800D8F5C
void f_800D8F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8F5C
  c->r[0]=c->lr; // 800D8F60
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800D8F64
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 800D8F68
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 800D8F6C
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800D8F70
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800D8F74
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800D8F78
  W32(c->r[1]+0x000000B0u,c->r[28]); // 800D8F7C
  c->r[28]=c->r[3]|c->r[3]; // 800D8F80
  c->r[29]=c->r[4]|c->r[4]; // 800D8F84
  c->r[3]=c->r[1]+0x00000074u; // 800D8F88
  c->lr=0x800D8F90u; f_8004B0A4(c); // 800D8F8C
  c->r[3]=c->r[1]+0x00000068u; // 800D8F90
  c->lr=0x800D8F98u; f_8004B0A4(c); // 800D8F94
  c->r[3]=c->r[1]+0x0000005Cu; // 800D8F98
  c->lr=0x800D8FA0u; f_8004B0A4(c); // 800D8F9C
  c->r[3]=c->r[1]+0x00000050u; // 800D8FA0
  c->lr=0x800D8FA8u; f_8004B0A4(c); // 800D8FA4
  c->r[3]=c->r[1]+0x00000044u; // 800D8FA8
  c->lr=0x800D8FB0u; f_8004B0A4(c); // 800D8FAC
  c->r[3]=c->r[1]+0x00000038u; // 800D8FB0
  c->lr=0x800D8FB8u; f_8004B0A4(c); // 800D8FB4
  c->r[3]=c->r[1]+0x0000002Cu; // 800D8FB8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8FBC
  c->f[2]=c->f[1]; // 800D8FC0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D8FC4
  c->lr=0x800D8FCCu; f_8004E34C(c); // 800D8FC8
  c->r[3]=c->r[1]+0x00000080u; // 800D8FCC
  c->lr=0x800D8FD4u; f_8004B0A0(c); // 800D8FD0
  c->r[3]=c->r[1]+0x00000020u; // 800D8FD4
  c->lr=0x800D8FDCu; f_8004B0A4(c); // 800D8FD8
  c->r[3]=c->r[1]+0x00000014u; // 800D8FDC
  c->lr=0x800D8FE4u; f_8004B0A4(c); // 800D8FE0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8FE4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 800D8FE8
  {uint32_t ea=c->r[2]+0xFFFF890Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8FEC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800D8FF0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 800D8FF4
  {uint32_t ea=c->r[2]+0xFFFF8864u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D8FF8
  c->lr=0x800D9000u; f_800A23BC(c); // 800D8FFC
  c->lr=0x800D9004u; f_800BB800(c); // 800D9000
  c->r[4]=c->r[13]+0xFFFF8930u; // 800D9004
  c->lr=0x800D900Cu; f_800BBD98(c); // 800D9008
  cmps(c,0,(int32_t)c->r[3],0); // 800D900C
  if (!crb(c,2)) { goto L_800D901C; } // 800D9010
  c->r[3]=0u+0x00000000u; // 800D9014
  goto L_800D91D8; // 800D9018
L_800D901C:;
  c->lr=0x800D9020u; f_800A23BC(c); // 800D901C
  c->lr=0x800D9024u; f_800BB700(c); // 800D9020
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800D9024
  c->lr=0x800D902Cu; f_800BBEA4(c); // 800D9028
  c->lr=0x800D9030u; f_8007B524(c); // 800D902C
  c->lr=0x800D9034u; f_800A1DE4(c); // 800D9030
  c->r[31]=c->r[3]|c->r[3]; // 800D9034
  cmps(c,0,(int32_t)c->r[3],0); // 800D9038
  if (!crb(c,2)) { goto L_800D9048; } // 800D903C
  c->r[3]=0u+0x00000000u; // 800D9040
  goto L_800D91D8; // 800D9044
L_800D9048:;
  c->lr=0x800D904Cu; f_80078474(c); // 800D9048
  c->r[30]=c->r[3]|c->r[3]; // 800D904C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9050
  if (crb(c,2)) { goto L_800D908C; } // 800D9054
  c->lr=0x800D905Cu; f_8007B51C(c); // 800D9058
  c->r[4]=c->r[3]|c->r[3]; // 800D905C
  c->r[3]=c->r[1]+0x00000050u; // 800D9060
  c->lr=0x800D9068u; f_8004A65C(c); // 800D9064
  c->r[3]=c->r[1]+0x00000008u; // 800D9068
  c->r[4]=c->r[30]|c->r[30]; // 800D906C
  c->lr=0x800D9074u; f_80180F7C(c); // 800D9070
  c->r[3]=c->r[1]+0x00000038u; // 800D9074
  c->r[4]=c->r[1]+0x00000008u; // 800D9078
  c->lr=0x800D9080u; f_8004A65C(c); // 800D907C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9080
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D9084
  goto L_800D9098; // 800D9088
L_800D908C:;
  c->r[3]=c->r[31]+0x00000024u; // 800D908C
  c->r[4]=c->r[1]+0x00000050u; // 800D9090
  c->lr=0x800D9098u; f_8006E4CC(c); // 800D9094
L_800D9098:;
  c->r[3]=c->r[31]+0x00000024u; // 800D9098
  c->r[4]=c->r[1]+0x00000044u; // 800D909C
  c->lr=0x800D90A4u; f_80074EFC(c); // 800D90A0
  c->r[3]=c->r[1]+0x00000080u; // 800D90A4
  c->lr=0x800D90ACu; f_800C2260(c); // 800D90A8
  c->r[3]=c->r[1]+0x00000080u; // 800D90AC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D90B0
  {uint32_t ea=c->r[2]+0xFFFF8880u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D90B4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D90B8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800D90BC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D90C0
  c->lr=0x800D90C8u; f_8004B0A8(c); // 800D90C4
  c->r[3]=c->r[1]+0x00000074u; // 800D90C8
  c->r[4]=c->r[1]+0x00000080u; // 800D90CC
  c->r[5]=c->r[1]+0x0000002Cu; // 800D90D0
  c->lr=0x800D90D8u; f_8005FF94(c); // 800D90D4
  c->r[3]=c->r[1]+0x00000068u; // 800D90D8
  c->r[4]=c->r[1]+0x00000074u; // 800D90DC
  {uint32_t ea=c->r[2]+0xFFFF8910u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D90E0
  c->lr=0x800D90E8u; f_8004E330(c); // 800D90E4
  c->r[3]=c->r[1]+0x00000020u; // 800D90E8
  c->r[4]=c->r[1]+0x00000050u; // 800D90EC
  c->r[5]=c->r[1]+0x00000068u; // 800D90F0
  c->lr=0x800D90F8u; f_8005C194(c); // 800D90F4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D90F8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800D90FC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D9100
  c->lr=0x800D9108u; f_800A23BC(c); // 800D9104
  c->lr=0x800D910Cu; f_800C23AC(c); // 800D9108
  c->r[4]=c->r[1]+0x00000020u; // 800D910C
  c->r[5]=c->r[1]+0x0000005Cu; // 800D9110
  c->lr=0x800D9118u; f_800CB7D8(c); // 800D9114
  W32(c->r[28]+0x00000028u,c->r[3]); // 800D9118
  cmps(c,0,(int32_t)c->r[3],0); // 800D911C
  if (!crb(c,2)) { goto L_800D912C; } // 800D9120
  c->r[3]=0u+0x00000000u; // 800D9124
  goto L_800D91D8; // 800D9128
L_800D912C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D912C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 800D9130
  if (crb(c,2)) { goto L_800D9140; } // 800D9134
  c->r[3]=0u+0x00000000u; // 800D9138
  goto L_800D91D8; // 800D913C
L_800D9140:;
  c->r[3]=c->r[1]+0x00000080u; // 800D9140
  c->lr=0x800D9148u; f_800C2260(c); // 800D9144
  c->r[3]=c->r[1]+0x00000080u; // 800D9148
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D914C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9150
  {uint32_t ea=c->r[2]+0xFFFF8880u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9154
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800D9158
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D915C
  c->lr=0x800D9164u; f_8004B0A8(c); // 800D9160
  c->r[3]=c->r[1]+0x00000074u; // 800D9164
  c->r[4]=c->r[1]+0x00000080u; // 800D9168
  c->r[5]=c->r[1]+0x0000002Cu; // 800D916C
  c->lr=0x800D9174u; f_8005FF94(c); // 800D9170
  c->r[3]=c->r[1]+0x00000068u; // 800D9174
  c->r[4]=c->r[1]+0x00000074u; // 800D9178
  {uint32_t ea=c->r[2]+0xFFFF8910u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D917C
  c->lr=0x800D9184u; f_8004E330(c); // 800D9180
  c->r[3]=c->r[1]+0x00000020u; // 800D9184
  c->r[4]=c->r[1]+0x00000050u; // 800D9188
  c->r[5]=c->r[1]+0x00000068u; // 800D918C
  c->lr=0x800D9194u; f_8005C194(c); // 800D9190
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9194
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800D9198
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800D919C
  c->lr=0x800D91A4u; f_800A23BC(c); // 800D91A0
  c->lr=0x800D91A8u; f_800C23AC(c); // 800D91A4
  c->r[4]=c->r[1]+0x00000020u; // 800D91A8
  c->r[5]=c->r[1]+0x0000005Cu; // 800D91AC
  c->lr=0x800D91B4u; f_800CB7D8(c); // 800D91B0
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800D91B4
  cmps(c,0,(int32_t)c->r[3],0); // 800D91B8
  if (!crb(c,2)) { goto L_800D91C8; } // 800D91BC
  c->r[3]=0u+0x00000000u; // 800D91C0
  goto L_800D91D8; // 800D91C4
L_800D91C8:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D91C8
  c->r[0]=c->r[29]-c->r[0]; // 800D91CC
  c->r[0]=cntlz(c->r[0]); // 800D91D0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D91D4
L_800D91D8:;
  c->r[0]=0u+0x000000C8u; // 800D91D8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D91DC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 800D91E0
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800D91E4
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800D91E8
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800D91EC
  c->r[28]=R32(c->r[1]+0x000000B0u); // 800D91F0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800D91F4
  c->lr=c->r[0]; // 800D91F8
  c->r[1]=c->r[1]+0x000000D0u; // 800D91FC
  return; // 800D9200
}

// fn_800D9204
void f_800D9204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9204
  c->r[0]=c->lr; // 800D9208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D920C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9210
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9214
  c->r[30]=c->r[3]|c->r[3]; // 800D9218
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D921C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9220
  if (crb(c,2)) { goto L_800D9358; } // 800D9224
  c->lr=0x800D922Cu; f_8007B524(c); // 800D9228
  c->lr=0x800D9230u; f_8006E22C(c); // 800D922C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800D9230
  c->r[12]=R32(c->r[12]+0x00000020u); // 800D9234
  c->ctr=c->r[12]; // 800D9238
  if (true) { c->lr=0x800D9240u; dispatch(c,c->ctr); } // 800D923C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9240
  if (crb(c,2)) { goto L_800D932C; } // 800D9244
  c->lr=0x800D924Cu; f_800483C4(c); // 800D9248
  cmps(c,0,(int32_t)c->r[3],0); // 800D924C
  if (crb(c,2)) { goto L_800D9264; } // 800D9250
  c->r[3]=c->r[30]|c->r[30]; // 800D9254
  c->r[4]=0u+0x00000006u; // 800D9258
  c->lr=0x800D9260u; f_800D8804(c); // 800D925C
  goto L_800D9284; // 800D9260
L_800D9264:;
  c->lr=0x800D9268u; f_800A23BC(c); // 800D9264
  c->lr=0x800D926Cu; f_800BB800(c); // 800D9268
  c->lr=0x800D9270u; f_800C9C38(c); // 800D926C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9270
  if (crb(c,2)) { goto L_800D9284; } // 800D9274
  c->r[3]=c->r[30]|c->r[30]; // 800D9278
  c->r[4]=0u+0x00000006u; // 800D927C
  c->lr=0x800D9284u; f_800D88CC(c); // 800D9280
L_800D9284:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800D9284
  cmps(c,0,(int32_t)c->r[0],0); // 800D9288
  if (crb(c,2)) { goto L_800D92E4; } // 800D928C
  c->lr=0x800D9294u; f_8006E268(c); // 800D9290
  c->lr=0x800D9298u; f_80073690(c); // 800D9294
  cmps(c,0,(int32_t)c->r[3],5); // 800D9298
  if (crb(c,2)) { goto L_800D92D4; } // 800D929C
  if (!crb(c,0)) { goto L_800D932C; } // 800D92A0
  cmps(c,0,(int32_t)c->r[3],4); // 800D92A4
  if (!crb(c,0)) { goto L_800D92B0; } // 800D92A8
  goto L_800D932C; // 800D92AC
L_800D92B0:;
  c->lr=0x800D92B4u; f_800A23BC(c); // 800D92B0
  c->lr=0x800D92B8u; f_800A23B4(c); // 800D92B4
  c->r[4]=0u+0x00000000u; // 800D92B8
  c->r[5]=0u+0x00000000u; // 800D92BC
  c->lr=0x800D92C4u; f_800DB5BC(c); // 800D92C0
  c->lr=0x800D92C8u; f_8007B524(c); // 800D92C4
  c->r[4]=0u+0x00000000u; // 800D92C8
  c->lr=0x800D92D0u; f_8009CCC0(c); // 800D92CC
  goto L_800D932C; // 800D92D0
L_800D92D4:;
  c->lr=0x800D92D8u; f_8007B524(c); // 800D92D4
  c->r[4]=0u+0x00000000u; // 800D92D8
  c->lr=0x800D92E0u; f_8009CF3C(c); // 800D92DC
  goto L_800D932C; // 800D92E0
L_800D92E4:;
  c->lr=0x800D92E8u; f_8006E268(c); // 800D92E4
  c->lr=0x800D92ECu; f_80073690(c); // 800D92E8
  cmps(c,0,(int32_t)c->r[3],5); // 800D92EC
  if (crb(c,2)) { goto L_800D932C; } // 800D92F0
  if (!crb(c,0)) { goto L_800D932C; } // 800D92F4
  cmps(c,0,(int32_t)c->r[3],4); // 800D92F8
  if (!crb(c,0)) { goto L_800D9304; } // 800D92FC
  goto L_800D932C; // 800D9300
L_800D9304:;
  c->lr=0x800D9308u; f_800A23BC(c); // 800D9304
  c->lr=0x800D930Cu; f_800A23B4(c); // 800D9308
  c->r[4]=0u+0x00000000u; // 800D930C
  c->lr=0x800D9314u; f_800DB448(c); // 800D9310
  c->r[31]=c->r[3]|c->r[3]; // 800D9314
  c->lr=0x800D931Cu; f_800A23BC(c); // 800D9318
  c->lr=0x800D9320u; f_800A23B4(c); // 800D931C
  c->r[4]=c->r[31]|c->r[31]; // 800D9320
  c->r[5]=0u+0x00000000u; // 800D9324
  c->lr=0x800D932Cu; f_800DB5BC(c); // 800D9328
L_800D932C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D932C
  c->lr=0x800D9334u; f_800BB910(c); // 800D9330
  c->r[3]=c->r[30]|c->r[30]; // 800D9334
  c->lr=0x800D933Cu; f_800BB904(c); // 800D9338
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800D933C
  c->r[3]=0u+0x80460000u; // 800D9340
  c->r[0]=c->r[3]+0x00000478u; // 800D9344
  c->r[12]=c->r[0]+c->r[4]; // 800D9348
  c->r[3]=c->r[30]|c->r[30]; // 800D934C
  c->lr=0x800D9354u; f_802F09D0(c); // 800D9350
  c->r[0]=c->r[0]|0x00000000u; // 800D9354
L_800D9358:;
  c->r[31]=R32(c->r[30]+0x00000094u); // 800D9358
  cmps(c,0,(int32_t)c->r[31],0); // 800D935C
  if (crb(c,2)) { goto L_800D9398; } // 800D9360
  c->lr=0x800D9368u; f_800A23BC(c); // 800D9364
  c->lr=0x800D936Cu; f_800BB808(c); // 800D9368
  c->r[4]=c->r[31]|c->r[31]; // 800D936C
  c->lr=0x800D9374u; f_800BBC8C(c); // 800D9370
  c->lr=0x800D9378u; f_800CADFC(c); // 800D9374
  cmps(c,0,(int32_t)c->r[3],0); // 800D9378
  if (!crb(c,2)) { goto L_800D9398; } // 800D937C
  c->lr=0x800D9384u; f_800A23BC(c); // 800D9380
  c->lr=0x800D9388u; f_800BB808(c); // 800D9384
  c->r[4]=R32(c->r[30]+0x00000094u); // 800D9388
  c->lr=0x800D9390u; f_800CB00C(c); // 800D938C
  c->r[0]=0u+0x00000000u; // 800D9390
  W32(c->r[30]+0x00000094u,c->r[0]); // 800D9394
L_800D9398:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9398
  c->r[0]=R32(c->r[30]+0x00000080u); // 800D939C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D93A0
  c->r[4]=0u+0x80460000u; // 800D93A4
  c->r[0]=c->r[4]+0x000005B0u; // 800D93A8
  c->r[12]=c->r[0]+c->r[5]; // 800D93AC
  c->lr=0x800D93B4u; f_802F09D0(c); // 800D93B0
  c->r[0]=c->r[0]|0x00000000u; // 800D93B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D93B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D93BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D93C0
  c->lr=c->r[0]; // 800D93C4
  c->r[1]=c->r[1]+0x00000010u; // 800D93C8
  return; // 800D93CC
}

// fn_800D93D0
void f_800D93D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D93D0
  c->r[0]=c->lr; // 800D93D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D93D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D93DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D93E0
  c->r[30]=c->r[3]|c->r[3]; // 800D93E4
  c->r[3]=c->r[1]+0x00000008u; // 800D93E8
  c->lr=0x800D93F0u; f_8004B0A4(c); // 800D93EC
  c->r[3]=c->r[30]|c->r[30]; // 800D93F0
  c->lr=0x800D93F8u; f_800D79E0(c); // 800D93F4
  c->lr=0x800D93FCu; f_8006E268(c); // 800D93F8
  c->lr=0x800D9400u; f_80073690(c); // 800D93FC
  cmps(c,0,(int32_t)c->r[3],5); // 800D9400
  if (crb(c,2)) { goto L_800D9564; } // 800D9404
  c->lr=0x800D940Cu; f_8007B524(c); // 800D9408
  c->lr=0x800D9410u; f_800A1DE4(c); // 800D940C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9410
  if (crb(c,2)) { goto L_800D9434; } // 800D9414
  c->r[3]=c->r[3]+0x00000024u; // 800D9418
  c->r[4]=c->r[1]+0x00000008u; // 800D941C
  c->lr=0x800D9424u; f_8006E4CC(c); // 800D9420
  c->lr=0x800D9428u; f_800A23BC(c); // 800D9424
  c->lr=0x800D942Cu; f_800A23B4(c); // 800D9428
  c->r[4]=c->r[1]+0x00000008u; // 800D942C
  c->lr=0x800D9434u; f_800CF5FC(c); // 800D9430
L_800D9434:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9434
  c->lr=0x800D943Cu; f_800D89AC(c); // 800D9438
  cmps(c,0,(int32_t)c->r[3],0); // 800D943C
  if (!crb(c,2)) { goto L_800D9564; } // 800D9440
  c->r[31]=R32(c->r[30]+0x00000098u); // 800D9444
  cmps(c,0,(int32_t)c->r[31],0); // 800D9448
  if (crb(c,2)) { goto L_800D9530; } // 800D944C
  c->lr=0x800D9454u; f_800A23BC(c); // 800D9450
  c->lr=0x800D9458u; f_800BB800(c); // 800D9454
  c->r[4]=c->r[31]|c->r[31]; // 800D9458
  c->lr=0x800D9460u; f_800BBD58(c); // 800D945C
  c->r[4]=c->r[1]+0x00000008u; // 800D9460
  c->lr=0x800D9468u; f_800BD664(c); // 800D9464
  c->r[3]=c->r[30]|c->r[30]; // 800D9468
  c->r[4]=c->r[1]+0x00000008u; // 800D946C
  c->lr=0x800D9474u; f_800D83C8(c); // 800D9470
  cmps(c,0,(int32_t)c->r[3],0); // 800D9474
  if (crb(c,2)) { goto L_800D9530; } // 800D9478
  c->lr=0x800D9480u; f_800A23BC(c); // 800D947C
  c->lr=0x800D9484u; f_800A23B4(c); // 800D9480
  c->r[4]=R32(c->r[30]+0x00000098u); // 800D9484
  c->lr=0x800D948Cu; f_800E0578(c); // 800D9488
  cmps(c,0,(int32_t)c->r[3],0); // 800D948C
  if (crb(c,2)) { goto L_800D9530; } // 800D9490
  c->lr=0x800D9498u; f_800D61C8(c); // 800D9494
  cmps(c,0,(int32_t)c->r[3],0); // 800D9498
  if (!crb(c,2)) { goto L_800D9530; } // 800D949C
  c->r[0]=R32(c->r[30]+0x000000DCu); // 800D94A0
  cmps(c,0,(int32_t)c->r[0],5); // 800D94A4
  if (crb(c,2)) { goto L_800D94BC; } // 800D94A8
  c->r[3]=c->r[30]|c->r[30]; // 800D94AC
  c->r[4]=0u+0x00000001u; // 800D94B0
  c->lr=0x800D94B8u; f_800D6F64(c); // 800D94B4
  goto L_800D94C4; // 800D94B8
L_800D94BC:;
  c->r[0]=0u+0x00000001u; // 800D94BC
  W32(c->r[30]+0x000000DCu,c->r[0]); // 800D94C0
L_800D94C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D94C4
  c->lr=0x800D94CCu; f_800D8254(c); // 800D94C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D94CC
  if (crb(c,2)) { goto L_800D9558; } // 800D94D0
  c->lr=0x800D94D8u; f_800A23BC(c); // 800D94D4
  c->lr=0x800D94DCu; f_800BB800(c); // 800D94D8
  c->r[4]=R32(c->r[30]+0x00000098u); // 800D94DC
  c->lr=0x800D94E4u; f_800BBD58(c); // 800D94E0
  c->r[4]=0u+0x00000001u; // 800D94E4
  c->r[5]=0u+0x00000000u; // 800D94E8
  c->lr=0x800D94F0u; f_800C7B08(c); // 800D94EC
  c->r[0]=R32(c->r[30]+0x00000098u); // 800D94F0
  W32(c->r[30]+0x00000074u,c->r[0]); // 800D94F4
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D94F8
  {uint32_t ea=c->r[30]+0x000000C8u; WF32(ea,c->f[0]);} // 800D94FC
  c->r[3]=c->r[30]|c->r[30]; // 800D9500
  c->r[4]=0u+0x00000004u; // 800D9504
  c->lr=0x800D950Cu; f_800D8804(c); // 800D9508
  c->lr=0x800D9510u; f_800A23BC(c); // 800D950C
  c->lr=0x800D9514u; f_800A23B4(c); // 800D9510
  c->r[4]=0u+0x00000000u; // 800D9514
  c->r[5]=0u+0x00000000u; // 800D9518
  c->lr=0x800D9520u; f_800DB5BC(c); // 800D951C
  c->r[3]=c->r[30]|c->r[30]; // 800D9520
  c->r[4]=0u+0x00000003u; // 800D9524
  c->lr=0x800D952Cu; f_800BB8E4(c); // 800D9528
  goto L_800D9564; // 800D952C
L_800D9530:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 800D9530
  cmps(c,0,(int32_t)c->r[0],1); // 800D9534
  if (!crb(c,2)) { goto L_800D954C; } // 800D9538
  c->r[3]=c->r[30]|c->r[30]; // 800D953C
  c->r[4]=0u+0x00000002u; // 800D9540
  c->lr=0x800D9548u; f_800D6F64(c); // 800D9544
  goto L_800D9558; // 800D9548
L_800D954C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D954C
  c->r[4]=0u+0x00000000u; // 800D9550
  c->lr=0x800D9558u; f_800D6F64(c); // 800D9554
L_800D9558:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9558
  c->r[4]=0u+0x00000000u; // 800D955C
  c->lr=0x800D9564u; f_800D74B0(c); // 800D9560
L_800D9564:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D9564
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D9568
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D956C
  c->lr=c->r[0]; // 800D9570
  c->r[1]=c->r[1]+0x00000020u; // 800D9574
  return; // 800D9578
}

// fn_800D957C
void f_800D957C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D957C
  c->r[0]=c->lr; // 800D9580
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D9584
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D9588
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D958C
  c->r[30]=c->r[3]|c->r[3]; // 800D9590
  c->r[3]=c->r[1]+0x00000014u; // 800D9594
  c->lr=0x800D959Cu; f_800BE268(c); // 800D9598
  c->r[3]=c->r[1]+0x00000008u; // 800D959C
  c->lr=0x800D95A4u; f_8004B0A4(c); // 800D95A0
  c->lr=0x800D95A8u; f_800A23BC(c); // 800D95A4
  c->lr=0x800D95ACu; f_800BB800(c); // 800D95A8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800D95AC
  c->lr=0x800D95B4u; f_800BBD58(c); // 800D95B0
  c->r[31]=c->r[3]|c->r[3]; // 800D95B4
  c->r[3]=c->r[30]|c->r[30]; // 800D95B8
  c->lr=0x800D95C0u; f_800BB8EC(c); // 800D95BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D95C0
  if (crb(c,2)) { goto L_800D9620; } // 800D95C4
  c->r[3]=c->r[13]+0xFFFF886Cu; // 800D95C8
  c->lr=0x800D95D0u; f_800BA2EC(c); // 800D95CC
  c->r[3]=c->r[31]|c->r[31]; // 800D95D0
  c->lr=0x800D95D8u; f_800CA010(c); // 800D95D4
  c->r[0]=0u+0x00000001u; // 800D95D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D95DC
  c->r[3]=c->r[31]|c->r[31]; // 800D95E0
  c->r[4]=c->r[1]+0x00000014u; // 800D95E4
  c->lr=0x800D95ECu; f_800C8CE8(c); // 800D95E8
  c->r[0]=0u+0x0000000Bu; // 800D95EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D95F0
  c->r[3]=c->r[31]|c->r[31]; // 800D95F4
  c->r[4]=0u+0x80460000u; // 800D95F8
  c->r[4]=c->r[4]+0x0000063Cu; // 800D95FC
  c->r[5]=0u+0x00000000u; // 800D9600
  c->lr=0x800D9608u; f_800C7210(c); // 800D9604
  W32(c->r[1]+0x00000058u,c->r[3]); // 800D9608
  c->r[3]=c->r[31]|c->r[31]; // 800D960C
  c->r[4]=c->r[1]+0x00000014u; // 800D9610
  c->lr=0x800D9618u; f_800C8CE8(c); // 800D9614
  c->r[3]=c->r[31]|c->r[31]; // 800D9618
  c->lr=0x800D9620u; f_800CA004(c); // 800D961C
L_800D9620:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9620
  c->r[4]=0u+0x00000000u; // 800D9624
  c->lr=0x800D962Cu; f_800D74B0(c); // 800D9628
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D962C
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D9630
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D9634
  c->lr=c->r[0]; // 800D9638
  c->r[1]=c->r[1]+0x00000070u; // 800D963C
  return; // 800D9640
}

// fn_800D9644
void f_800D9644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9644
  c->r[0]=c->lr; // 800D9648
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D964C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800D9650
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800D9654
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D9658
  W32(c->r[1]+0x00000058u,c->r[30]); // 800D965C
  c->r[30]=c->r[3]|c->r[3]; // 800D9660
  c->r[3]=c->r[1]+0x00000044u; // 800D9664
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9668
  c->f[2]=c->f[1]; // 800D966C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9670
  c->lr=0x800D9678u; f_8004E34C(c); // 800D9674
  c->r[3]=c->r[1]+0x00000038u; // 800D9678
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D967C
  c->f[2]=c->f[1]; // 800D9680
  c->f[3]=c->f[1]; // 800D9684
  c->lr=0x800D968Cu; f_8004E34C(c); // 800D9688
  c->r[3]=c->r[1]+0x0000002Cu; // 800D968C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9690
  c->f[2]=c->f[1]; // 800D9694
  c->f[3]=c->f[1]; // 800D9698
  c->lr=0x800D96A0u; f_8004E34C(c); // 800D969C
  c->r[3]=c->r[1]+0x00000020u; // 800D96A0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D96A4
  c->f[2]=c->f[1]; // 800D96A8
  c->f[3]=c->f[1]; // 800D96AC
  c->lr=0x800D96B4u; f_8004E34C(c); // 800D96B0
  c->r[3]=c->r[1]+0x00000014u; // 800D96B4
  c->lr=0x800D96BCu; f_8004B0A4(c); // 800D96B8
  c->r[3]=c->r[1]+0x00000008u; // 800D96BC
  c->lr=0x800D96C4u; f_8004B0A4(c); // 800D96C0
  c->lr=0x800D96C8u; f_800A23BC(c); // 800D96C4
  c->lr=0x800D96CCu; f_800BB800(c); // 800D96C8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800D96CC
  c->lr=0x800D96D4u; f_800C1284(c); // 800D96D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D96D4
  if (crb(c,2)) { goto L_800D9790; } // 800D96D8
  c->lr=0x800D96E0u; f_800A23BC(c); // 800D96DC
  c->lr=0x800D96E4u; f_800BB800(c); // 800D96E0
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800D96E4
  c->lr=0x800D96ECu; f_800BBD58(c); // 800D96E8
  c->r[31]=c->r[3]|c->r[3]; // 800D96EC
  c->r[3]=c->r[30]|c->r[30]; // 800D96F0
  c->lr=0x800D96F8u; f_800BB8EC(c); // 800D96F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D96F8
  if (crb(c,2)) { goto L_800D9778; } // 800D96FC
  c->r[3]=c->r[31]|c->r[31]; // 800D9700
  c->r[4]=c->r[1]+0x00000038u; // 800D9704
  c->lr=0x800D970Cu; f_800BD664(c); // 800D9708
  c->r[3]=c->r[31]|c->r[31]; // 800D970C
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9710
  c->lr=0x800D9718u; f_800BD6C0(c); // 800D9714
  c->r[3]=c->r[31]|c->r[31]; // 800D9718
  c->r[4]=0u+0x00000000u; // 800D971C
  c->lr=0x800D9724u; f_800BE2D0(c); // 800D9720
  c->lr=0x800D9728u; f_800A23BC(c); // 800D9724
  c->lr=0x800D972Cu; f_800C23AC(c); // 800D9728
  c->r[4]=c->r[1]+0x00000038u; // 800D972C
  c->lr=0x800D9734u; f_800CB6F4(c); // 800D9730
  c->f[31]=c->f[1]; // 800D9734
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9738
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D973C
  c->lr=0x800D9744u; f_800797BC(c); // 800D9740
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9744
  fcmp(c,0,c->f[1],c->f[0]); // 800D9748
  if (!crb(c,1)) { goto L_800D9754; } // 800D974C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[31]);} // 800D9750
L_800D9754:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9754
  c->r[4]=c->r[1]+0x00000038u; // 800D9758
  c->lr=0x800D9760u; f_800BCDE8(c); // 800D975C
  c->r[3]=c->r[31]|c->r[31]; // 800D9760
  c->r[4]=c->r[1]+0x0000002Cu; // 800D9764
  c->lr=0x800D976Cu; f_800BD0E8(c); // 800D9768
  c->r[3]=c->r[31]|c->r[31]; // 800D976C
  c->r[4]=0u+0x00000001u; // 800D9770
  c->lr=0x800D9778u; f_800BE2D0(c); // 800D9774
L_800D9778:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9778
  c->r[4]=0u+0x00000001u; // 800D977C
  c->lr=0x800D9784u; f_800D74B0(c); // 800D9780
  c->r[3]=c->r[30]|c->r[30]; // 800D9784
  c->r[4]=0u+0x00000000u; // 800D9788
  c->lr=0x800D9790u; f_800BB8E4(c); // 800D978C
L_800D9790:;
  c->r[0]=0u+0x00000068u; // 800D9790
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D9794
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800D9798
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D979C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800D97A0
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D97A4
  c->lr=c->r[0]; // 800D97A8
  c->r[1]=c->r[1]+0x00000070u; // 800D97AC
  return; // 800D97B0
}

// fn_800D97B4
void f_800D97B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D97B4
  c->r[0]=c->lr; // 800D97B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D97BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D97C0
  c->r[31]=c->r[3]|c->r[3]; // 800D97C4
  c->r[4]=0u+0x00000003u; // 800D97C8
  c->lr=0x800D97D0u; f_800D6F64(c); // 800D97CC
  c->r[0]=0u+0x00000003u; // 800D97D0
  W32(c->r[31]+0x00000080u,c->r[0]); // 800D97D4
  c->r[3]=c->r[31]|c->r[31]; // 800D97D8
  c->r[4]=0u+0x00000004u; // 800D97DC
  c->lr=0x800D97E4u; f_800BB8E4(c); // 800D97E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D97E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D97E8
  c->lr=c->r[0]; // 800D97EC
  c->r[1]=c->r[1]+0x00000010u; // 800D97F0
  return; // 800D97F4
}

// fn_800D97F8
void f_800D97F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D97F8
  c->r[0]=c->lr; // 800D97FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9804
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9808
  c->r[30]=c->r[3]|c->r[3]; // 800D980C
  c->lr=0x800D9814u; f_800D8254(c); // 800D9810
  cmps(c,0,(int32_t)c->r[3],0); // 800D9814
  if (crb(c,2)) { goto L_800D9848; } // 800D9818
  c->r[3]=0u+0x00000001u; // 800D981C
  c->lr=0x800D9824u; f_8005D714(c); // 800D9820
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9824
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D9828
  {uint32_t ea=c->r[30]+0x000000C8u; WF32(ea,c->f[1]);} // 800D982C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9830
  fcmp(c,0,c->f[1],c->f[0]); // 800D9834
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D9838
  if (!crb(c,2)) { goto L_800D9858; } // 800D983C
  {uint32_t ea=c->r[30]+0x000000C8u; WF32(ea,c->f[0]);} // 800D9840
  goto L_800D9858; // 800D9844
L_800D9848:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9848
  c->r[4]=0u+0x0000000Au; // 800D984C
  c->lr=0x800D9854u; f_800BB8E4(c); // 800D9850
  goto L_800D993C; // 800D9854
L_800D9858:;
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9858
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D985C
  fcmp(c,0,c->f[1],c->f[0]); // 800D9860
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D9864
  if (!crb(c,2)) { goto L_800D993C; } // 800D9868
  c->r[3]=c->r[30]|c->r[30]; // 800D986C
  c->lr=0x800D9874u; f_800BB8EC(c); // 800D9870
  cmps(c,0,(int32_t)c->r[3],0); // 800D9874
  if (crb(c,2)) { goto L_800D9888; } // 800D9878
  c->r[3]=c->r[30]|c->r[30]; // 800D987C
  c->r[4]=0u+0x00000004u; // 800D9880
  c->lr=0x800D9888u; f_800D6F64(c); // 800D9884
L_800D9888:;
  c->lr=0x800D988Cu; f_800A23BC(c); // 800D9888
  c->lr=0x800D9890u; f_800A23B4(c); // 800D988C
  c->r[4]=R32(c->r[30]+0x00000074u); // 800D9890
  c->lr=0x800D9898u; f_800E0578(c); // 800D9894
  cmps(c,0,(int32_t)c->r[3],0); // 800D9898
  if (crb(c,2)) { goto L_800D98A4; } // 800D989C
  c->lr=0x800D98A4u; f_800D6500(c); // 800D98A0
L_800D98A4:;
  c->lr=0x800D98A8u; f_800A23BC(c); // 800D98A4
  c->lr=0x800D98ACu; f_800A23B4(c); // 800D98A8
  c->r[4]=R32(c->r[30]+0x00000074u); // 800D98AC
  c->lr=0x800D98B4u; f_800DFE20(c); // 800D98B0
  c->r[31]=c->r[3]|c->r[3]; // 800D98B4
  cmps(c,0,(int32_t)c->r[3],0); // 800D98B8
  if (crb(c,2)) { goto L_800D9930; } // 800D98BC
  c->lr=0x800D98C4u; f_800A23BC(c); // 800D98C0
  c->lr=0x800D98C8u; f_800A23B4(c); // 800D98C4
  c->r[4]=c->r[31]|c->r[31]; // 800D98C8
  c->lr=0x800D98D0u; f_800BEDA0(c); // 800D98CC
  c->lr=0x800D98D4u; f_800CF5E4(c); // 800D98D0
  cmps(c,0,(int32_t)c->r[3],1); // 800D98D4
  if (!crb(c,2)) { goto L_800D9930; } // 800D98D8
  c->lr=0x800D98E0u; f_8007B524(c); // 800D98DC
  c->lr=0x800D98E4u; f_8009DD48(c); // 800D98E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D98E4
  if (crb(c,2)) { goto L_800D990C; } // 800D98E8
  c->r[4]=0u+0x00000000u; // 800D98EC
  c->lr=0x800D98F4u; f_8008E560(c); // 800D98F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D98F4
  if (crb(c,2)) { goto L_800D990C; } // 800D98F8
  c->r[3]=c->r[30]|c->r[30]; // 800D98FC
  c->r[4]=0u+0x00000005u; // 800D9900
  c->lr=0x800D9908u; f_800BB8E4(c); // 800D9904
  goto L_800D993C; // 800D9908
L_800D990C:;
  c->lr=0x800D9910u; f_800A23BC(c); // 800D990C
  c->lr=0x800D9914u; f_800A23C4(c); // 800D9910
  c->lr=0x800D9918u; f_800D8CD8(c); // 800D9914
  cmps(c,0,(int32_t)c->r[3],0); // 800D9918
  if (!crb(c,1)) { goto L_800D9930; } // 800D991C
  c->r[3]=c->r[30]|c->r[30]; // 800D9920
  c->r[4]=0u+0x00000005u; // 800D9924
  c->lr=0x800D992Cu; f_800BB8E4(c); // 800D9928
  goto L_800D993C; // 800D992C
L_800D9930:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9930
  c->r[4]=0u+0x0000000Bu; // 800D9934
  c->lr=0x800D993Cu; f_800BB8E4(c); // 800D9938
L_800D993C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D993C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9940
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9944
  c->lr=c->r[0]; // 800D9948
  c->r[1]=c->r[1]+0x00000010u; // 800D994C
  return; // 800D9950
}

// fn_800D9954
void f_800D9954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9954
  c->r[0]=c->lr; // 800D9958
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D995C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9960
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9964
  c->r[30]=c->r[3]|c->r[3]; // 800D9968
  c->lr=0x800D9970u; f_800BB8EC(c); // 800D996C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9970
  if (crb(c,2)) { goto L_800D99A0; } // 800D9974
  c->r[3]=0u+0x0000018Du; // 800D9978
  c->lr=0x800D9980u; f_8024853C(c); // 800D997C
  c->r[3]=0u+0x00000001u; // 800D9980
  c->lr=0x800D9988u; f_802485F0(c); // 800D9984
  c->r[3]=0u+0x00000064u; // 800D9988
  c->lr=0x800D9990u; f_80248578(c); // 800D998C
  c->r[3]=0u+0x00000065u; // 800D9990
  c->lr=0x800D9998u; f_802485B4(c); // 800D9994
  c->lr=0x800D999Cu; f_802484AC(c); // 800D9998
  goto L_800D9A98; // 800D999C
L_800D99A0:;
  c->lr=0x800D99A4u; f_802484E4(c); // 800D99A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D99A4
  if (crb(c,2)) { goto L_800D9A98; } // 800D99A8
  c->lr=0x800D99B0u; f_800A23BC(c); // 800D99AC
  c->lr=0x800D99B4u; f_800A23C4(c); // 800D99B0
  c->lr=0x800D99B8u; f_800D8CD8(c); // 800D99B4
  c->r[31]=c->r[3]|c->r[3]; // 800D99B8
  c->lr=0x800D99C0u; f_80248510(c); // 800D99BC
  cmps(c,0,(int32_t)c->r[3],1); // 800D99C0
  if (crb(c,2)) { goto L_800D9A8C; } // 800D99C4
  if (!crb(c,0)) { goto L_800D9A98; } // 800D99C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D99CC
  if (!crb(c,0)) { goto L_800D99D8; } // 800D99D0
  goto L_800D9A98; // 800D99D4
L_800D99D8:;
  c->lr=0x800D99DCu; f_8007B524(c); // 800D99D8
  c->lr=0x800D99E0u; f_800A6EF0(c); // 800D99DC
  cmps(c,0,(int32_t)c->r[3],0); // 800D99E0
  if (crb(c,2)) { goto L_800D99F8; } // 800D99E4
  c->r[3]=c->r[30]|c->r[30]; // 800D99E8
  c->r[4]=0u+0x00000006u; // 800D99EC
  c->lr=0x800D99F4u; f_800BB8E4(c); // 800D99F0
  goto L_800D9A98; // 800D99F4
L_800D99F8:;
  c->lr=0x800D99FCu; f_8007B524(c); // 800D99F8
  c->lr=0x800D9A00u; f_800A6FA4(c); // 800D99FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D9A00
  if (crb(c,2)) { goto L_800D9A2C; } // 800D9A04
  c->lr=0x800D9A0Cu; f_8007B524(c); // 800D9A08
  c->r[4]=c->r[31]|c->r[31]; // 800D9A0C
  c->lr=0x800D9A14u; f_800A681C(c); // 800D9A10
  cmps(c,0,(int32_t)c->r[3],0); // 800D9A14
  if (crb(c,2)) { goto L_800D9A2C; } // 800D9A18
  c->r[3]=c->r[30]|c->r[30]; // 800D9A1C
  c->r[4]=0u+0x00000009u; // 800D9A20
  c->lr=0x800D9A28u; f_800BB8E4(c); // 800D9A24
  goto L_800D9A98; // 800D9A28
L_800D9A2C:;
  c->lr=0x800D9A30u; f_8007B524(c); // 800D9A2C
  c->lr=0x800D9A34u; f_800A6FA4(c); // 800D9A30
  cmps(c,0,(int32_t)c->r[3],0); // 800D9A34
  if (crb(c,2)) { goto L_800D9A4C; } // 800D9A38
  c->r[3]=c->r[30]|c->r[30]; // 800D9A3C
  c->r[4]=0u+0x00000007u; // 800D9A40
  c->lr=0x800D9A48u; f_800BB8E4(c); // 800D9A44
  goto L_800D9A98; // 800D9A48
L_800D9A4C:;
  c->lr=0x800D9A50u; f_8007B524(c); // 800D9A4C
  c->r[4]=c->r[31]|c->r[31]; // 800D9A50
  c->lr=0x800D9A58u; f_800A681C(c); // 800D9A54
  cmps(c,0,(int32_t)c->r[3],0); // 800D9A58
  if (crb(c,2)) { goto L_800D9A70; } // 800D9A5C
  c->r[3]=c->r[30]|c->r[30]; // 800D9A60
  c->r[4]=0u+0x00000008u; // 800D9A64
  c->lr=0x800D9A6Cu; f_800BB8E4(c); // 800D9A68
  goto L_800D9A98; // 800D9A6C
L_800D9A70:;
  c->lr=0x800D9A74u; f_801E17F0(c); // 800D9A70
  c->lr=0x800D9A78u; f_8007B524(c); // 800D9A74
  c->lr=0x800D9A7Cu; f_800A67C4(c); // 800D9A78
  c->r[3]=c->r[30]|c->r[30]; // 800D9A7C
  c->r[4]=0u+0x0000000Bu; // 800D9A80
  c->lr=0x800D9A88u; f_800BB8E4(c); // 800D9A84
  goto L_800D9A98; // 800D9A88
L_800D9A8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D9A8C
  c->r[4]=0u+0x0000000Au; // 800D9A90
  c->lr=0x800D9A98u; f_800BB8E4(c); // 800D9A94
L_800D9A98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9A98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9AA0
  c->lr=c->r[0]; // 800D9AA4
  c->r[1]=c->r[1]+0x00000010u; // 800D9AA8
  return; // 800D9AAC
}

// fn_800D9AB0
void f_800D9AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9AB0
  c->r[0]=c->lr; // 800D9AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9ABC
  c->r[31]=c->r[3]|c->r[3]; // 800D9AC0
  c->lr=0x800D9AC8u; f_800BB8EC(c); // 800D9AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D9AC8
  if (crb(c,2)) { goto L_800D9AE8; } // 800D9ACC
  c->r[3]=0u+0x0000018Fu; // 800D9AD0
  c->lr=0x800D9AD8u; f_8024853C(c); // 800D9AD4
  c->r[3]=0u+0x00000000u; // 800D9AD8
  c->lr=0x800D9AE0u; f_802485F0(c); // 800D9ADC
  c->lr=0x800D9AE4u; f_802484AC(c); // 800D9AE0
  goto L_800D9B00; // 800D9AE4
L_800D9AE8:;
  c->lr=0x800D9AECu; f_802484E4(c); // 800D9AE8
  cmps(c,0,(int32_t)c->r[3],0); // 800D9AEC
  if (crb(c,2)) { goto L_800D9B00; } // 800D9AF0
  c->r[3]=c->r[31]|c->r[31]; // 800D9AF4
  c->r[4]=0u+0x0000000Au; // 800D9AF8
  c->lr=0x800D9B00u; f_800BB8E4(c); // 800D9AFC
L_800D9B00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9B00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9B04
  c->lr=c->r[0]; // 800D9B08
  c->r[1]=c->r[1]+0x00000010u; // 800D9B0C
  return; // 800D9B10
}

// fn_800D9B14
void f_800D9B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B14
  c->r[0]=c->lr; // 800D9B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9B20
  c->r[31]=c->r[3]|c->r[3]; // 800D9B24
  c->lr=0x800D9B2Cu; f_800BB8EC(c); // 800D9B28
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B2C
  if (crb(c,2)) { goto L_800D9B4C; } // 800D9B30
  c->r[3]=0u+0x00000190u; // 800D9B34
  c->lr=0x800D9B3Cu; f_8024853C(c); // 800D9B38
  c->r[3]=0u+0x00000000u; // 800D9B3C
  c->lr=0x800D9B44u; f_802485F0(c); // 800D9B40
  c->lr=0x800D9B48u; f_802484AC(c); // 800D9B44
  goto L_800D9B64; // 800D9B48
L_800D9B4C:;
  c->lr=0x800D9B50u; f_802484E4(c); // 800D9B4C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B50
  if (crb(c,2)) { goto L_800D9B64; } // 800D9B54
  c->r[3]=c->r[31]|c->r[31]; // 800D9B58
  c->r[4]=0u+0x0000000Au; // 800D9B5C
  c->lr=0x800D9B64u; f_800BB8E4(c); // 800D9B60
L_800D9B64:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9B64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9B68
  c->lr=c->r[0]; // 800D9B6C
  c->r[1]=c->r[1]+0x00000010u; // 800D9B70
  return; // 800D9B74
}

// fn_800D9B78
void f_800D9B78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B78
  c->r[0]=c->lr; // 800D9B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9B84
  c->r[31]=c->r[3]|c->r[3]; // 800D9B88
  c->lr=0x800D9B90u; f_800BB8EC(c); // 800D9B8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B90
  if (crb(c,2)) { goto L_800D9BB0; } // 800D9B94
  c->r[3]=0u+0x000001A8u; // 800D9B98
  c->lr=0x800D9BA0u; f_8024853C(c); // 800D9B9C
  c->r[3]=0u+0x00000000u; // 800D9BA0
  c->lr=0x800D9BA8u; f_802485F0(c); // 800D9BA4
  c->lr=0x800D9BACu; f_802484AC(c); // 800D9BA8
  goto L_800D9BC8; // 800D9BAC
L_800D9BB0:;
  c->lr=0x800D9BB4u; f_802484E4(c); // 800D9BB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9BB4
  if (crb(c,2)) { goto L_800D9BC8; } // 800D9BB8
  c->r[3]=c->r[31]|c->r[31]; // 800D9BBC
  c->r[4]=0u+0x0000000Au; // 800D9BC0
  c->lr=0x800D9BC8u; f_800BB8E4(c); // 800D9BC4
L_800D9BC8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9BCC
  c->lr=c->r[0]; // 800D9BD0
  c->r[1]=c->r[1]+0x00000010u; // 800D9BD4
  return; // 800D9BD8
}

// fn_800D9BDC
void f_800D9BDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9BDC
  c->r[0]=c->lr; // 800D9BE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9BE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9BE8
  c->r[31]=c->r[3]|c->r[3]; // 800D9BEC
  c->lr=0x800D9BF4u; f_800BB8EC(c); // 800D9BF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9BF4
  if (crb(c,2)) { goto L_800D9C14; } // 800D9BF8
  c->r[3]=0u+0x00000192u; // 800D9BFC
  c->lr=0x800D9C04u; f_8024853C(c); // 800D9C00
  c->r[3]=0u+0x00000000u; // 800D9C04
  c->lr=0x800D9C0Cu; f_802485F0(c); // 800D9C08
  c->lr=0x800D9C10u; f_802484AC(c); // 800D9C0C
  goto L_800D9C2C; // 800D9C10
L_800D9C14:;
  c->lr=0x800D9C18u; f_802484E4(c); // 800D9C14
  cmps(c,0,(int32_t)c->r[3],0); // 800D9C18
  if (crb(c,2)) { goto L_800D9C2C; } // 800D9C1C
  c->r[3]=c->r[31]|c->r[31]; // 800D9C20
  c->r[4]=0u+0x0000000Au; // 800D9C24
  c->lr=0x800D9C2Cu; f_800BB8E4(c); // 800D9C28
L_800D9C2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9C30
  c->lr=c->r[0]; // 800D9C34
  c->r[1]=c->r[1]+0x00000010u; // 800D9C38
  return; // 800D9C3C
}

// fn_800D9C40
void f_800D9C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C40
  c->r[0]=c->lr; // 800D9C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9C48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9C4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9C50
  c->r[30]=c->r[3]|c->r[3]; // 800D9C54
  c->lr=0x800D9C5Cu; f_800A23BC(c); // 800D9C58
  c->lr=0x800D9C60u; f_800BB800(c); // 800D9C5C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800D9C60
  c->lr=0x800D9C68u; f_800BBD58(c); // 800D9C64
  c->r[3]=c->r[30]|c->r[30]; // 800D9C68
  c->lr=0x800D9C70u; f_800BB8EC(c); // 800D9C6C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9C70
  if (crb(c,2)) { goto L_800D9C90; } // 800D9C74
  c->r[3]=c->r[30]|c->r[30]; // 800D9C78
  c->r[4]=0u+0x00000005u; // 800D9C7C
  c->lr=0x800D9C84u; f_800D6F64(c); // 800D9C80
  c->r[0]=0u+0x00000004u; // 800D9C84
  W32(c->r[30]+0x00000080u,c->r[0]); // 800D9C88
  goto L_800D9CF8; // 800D9C8C
L_800D9C90:;
  c->r[31]=R32(c->r[30]+0x00000074u); // 800D9C90
  cmps(c,0,(int32_t)c->r[31],0); // 800D9C94
  if (crb(c,2)) { goto L_800D9CCC; } // 800D9C98
  c->lr=0x800D9CA0u; f_800A23BC(c); // 800D9C9C
  c->lr=0x800D9CA4u; f_800A23B4(c); // 800D9CA0
  c->r[4]=c->r[31]|c->r[31]; // 800D9CA4
  c->lr=0x800D9CACu; f_800E0578(c); // 800D9CA8
  c->r[31]=c->r[3]|c->r[3]; // 800D9CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D9CB0
  if (crb(c,2)) { goto L_800D9CCC; } // 800D9CB4
  c->lr=0x800D9CBCu; f_800D666C(c); // 800D9CB8
  cmps(c,0,(int32_t)c->r[3],0); // 800D9CBC
  if (!crb(c,2)) { goto L_800D9CF8; } // 800D9CC0
  c->r[3]=c->r[31]|c->r[31]; // 800D9CC4
  c->lr=0x800D9CCCu; f_800D6540(c); // 800D9CC8
L_800D9CCC:;
  c->lr=0x800D9CD0u; f_800A23BC(c); // 800D9CCC
  c->lr=0x800D9CD4u; f_800A23B4(c); // 800D9CD0
  c->r[4]=0u+0x00000000u; // 800D9CD4
  c->r[5]=0u+0x00000000u; // 800D9CD8
  c->lr=0x800D9CE0u; f_800DB5BC(c); // 800D9CDC
  c->r[3]=c->r[30]|c->r[30]; // 800D9CE0
  c->r[4]=0u+0x00000004u; // 800D9CE4
  c->lr=0x800D9CECu; f_800D88CC(c); // 800D9CE8
  c->r[3]=c->r[30]|c->r[30]; // 800D9CEC
  c->r[4]=0u+0x00000000u; // 800D9CF0
  c->lr=0x800D9CF8u; f_800BB8E4(c); // 800D9CF4
L_800D9CF8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9CF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9CFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9D00
  c->lr=c->r[0]; // 800D9D04
  c->r[1]=c->r[1]+0x00000010u; // 800D9D08
  return; // 800D9D0C
}

// fn_800D9D10
void f_800D9D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9D10
  c->r[0]=c->lr; // 800D9D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9D18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D9D1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D9D20
  c->r[30]=c->r[3]|c->r[3]; // 800D9D24
  c->r[3]=c->r[1]+0x00000008u; // 800D9D28
  c->lr=0x800D9D30u; f_8004B0A4(c); // 800D9D2C
  c->lr=0x800D9D34u; f_800A23BC(c); // 800D9D30
  c->lr=0x800D9D38u; f_800BB800(c); // 800D9D34
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800D9D38
  c->lr=0x800D9D40u; f_800BBD58(c); // 800D9D3C
  c->r[31]=c->r[3]|c->r[3]; // 800D9D40
  c->r[3]=c->r[30]|c->r[30]; // 800D9D44
  c->lr=0x800D9D4Cu; f_800BB8EC(c); // 800D9D48
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D4C
  if (crb(c,2)) { goto L_800D9DD4; } // 800D9D50
  c->r[3]=c->r[30]|c->r[30]; // 800D9D54
  c->r[4]=0u+0x00000004u; // 800D9D58
  c->lr=0x800D9D60u; f_800D6F64(c); // 800D9D5C
  c->lr=0x800D9D64u; f_800A23BC(c); // 800D9D60
  c->lr=0x800D9D68u; f_800BB808(c); // 800D9D64
  c->r[4]=c->r[13]+0xFFFF8940u; // 800D9D68
  c->r[5]=0u+0x80460000u; // 800D9D6C
  c->r[5]=c->r[5]+0x0000064Cu; // 800D9D70
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9D74
  c->lr=0x800D9D7Cu; f_800CAF70(c); // 800D9D78
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800D9D7C
  c->r[3]=c->r[31]|c->r[31]; // 800D9D80
  c->r[4]=0u+0x80460000u; // 800D9D84
  c->r[4]=c->r[4]+0x00000078u; // 800D9D88
  c->r[5]=c->r[1]+0x00000008u; // 800D9D8C
  c->r[6]=0u+0x00000001u; // 800D9D90
  c->lr=0x800D9D98u; f_800C6F78(c); // 800D9D94
  c->lr=0x800D9D9Cu; f_800A23BC(c); // 800D9D98
  c->lr=0x800D9DA0u; f_800BB808(c); // 800D9D9C
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 800D9DA0
  c->lr=0x800D9DA8u; f_800BBC8C(c); // 800D9DA4
  c->r[4]=c->r[1]+0x00000008u; // 800D9DA8
  c->lr=0x800D9DB0u; f_800BCDE8(c); // 800D9DAC
  c->lr=0x800D9DB4u; f_8006592C(c); // 800D9DB0
  c->r[4]=0u+0x00000123u; // 800D9DB4
  c->r[5]=0u+0x00000000u; // 800D9DB8
  c->r[6]=0u+0xFFFFFFFFu; // 800D9DBC
  c->r[7]=0u+0xFFFFFFFFu; // 800D9DC0
  c->lr=0x800D9DC8u; f_80048F20(c); // 800D9DC4
  {uint32_t ea=c->r[2]+0xFFFF8914u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DC8
  {uint32_t ea=c->r[30]+0x000000C4u; WF32(ea,c->f[0]);} // 800D9DCC
  goto L_800D9E18; // 800D9DD0
L_800D9DD4:;
  c->r[3]=0u+0x00000001u; // 800D9DD4
  c->lr=0x800D9DDCu; f_8005D714(c); // 800D9DD8
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DDC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800D9DE0
  {uint32_t ea=c->r[30]+0x000000C4u; WF32(ea,c->f[1]);} // 800D9DE4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9DE8
  fcmp(c,0,c->f[1],c->f[0]); // 800D9DEC
  if (crb(c,1)) { goto L_800D9E18; } // 800D9DF0
  c->r[3]=c->r[31]|c->r[31]; // 800D9DF4
  c->r[4]=0u+0x00000000u; // 800D9DF8
  c->lr=0x800D9E00u; f_800BB958(c); // 800D9DFC
  c->lr=0x800D9E04u; f_8007B524(c); // 800D9E00
  c->r[4]=0u+0x00000000u; // 800D9E04
  c->lr=0x800D9E0Cu; f_8009CCFC(c); // 800D9E08
  c->r[3]=c->r[30]|c->r[30]; // 800D9E0C
  c->r[4]=0u+0x0000000Cu; // 800D9E10
  c->lr=0x800D9E18u; f_800BB8E4(c); // 800D9E14
L_800D9E18:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D9E18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D9E1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9E20
  c->lr=c->r[0]; // 800D9E24
  c->r[1]=c->r[1]+0x00000020u; // 800D9E28
  return; // 800D9E2C
}

// fn_800D9E30
void f_800D9E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E30
  c->r[0]=c->lr; // 800D9E34
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D9E38
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D9E3C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D9E40
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D9E44
  W32(c->r[1]+0x00000030u,c->r[28]); // 800D9E48
  c->r[28]=c->r[3]|c->r[3]; // 800D9E4C
  c->r[3]=c->r[1]+0x00000020u; // 800D9E50
  c->lr=0x800D9E58u; f_8004B0A4(c); // 800D9E54
  c->r[3]=c->r[1]+0x00000014u; // 800D9E58
  c->lr=0x800D9E60u; f_8004B0A4(c); // 800D9E5C
  c->r[3]=c->r[1]+0x00000008u; // 800D9E60
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9E64
  c->f[2]=c->f[1]; // 800D9E68
  c->f[3]=c->f[1]; // 800D9E6C
  c->lr=0x800D9E74u; f_8004E34C(c); // 800D9E70
  c->lr=0x800D9E78u; f_800A23BC(c); // 800D9E74
  c->lr=0x800D9E7Cu; f_800BB800(c); // 800D9E78
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 800D9E7C
  c->lr=0x800D9E84u; f_800BBD58(c); // 800D9E80
  c->r[29]=c->r[3]|c->r[3]; // 800D9E84
  c->lr=0x800D9E8Cu; f_800A23BC(c); // 800D9E88
  c->lr=0x800D9E90u; f_800BB700(c); // 800D9E8C
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800D9E90
  c->lr=0x800D9E98u; f_800BBEA4(c); // 800D9E94
  c->r[30]=c->r[3]|c->r[3]; // 800D9E98
  c->r[3]=c->r[28]|c->r[28]; // 800D9E9C
  c->lr=0x800D9EA4u; f_800BB8EC(c); // 800D9EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EA4
  if (crb(c,2)) { goto L_800DA008; } // 800D9EA8
  c->r[31]=R32(c->r[28]+0x00000074u); // 800D9EAC
  cmps(c,0,(int32_t)c->r[31],0); // 800D9EB0
  if (crb(c,2)) { goto L_800D9ED8; } // 800D9EB4
  c->lr=0x800D9EBCu; f_800A23BC(c); // 800D9EB8
  c->lr=0x800D9EC0u; f_800A23B4(c); // 800D9EBC
  c->r[4]=c->r[31]|c->r[31]; // 800D9EC0
  c->lr=0x800D9EC8u; f_800E0578(c); // 800D9EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EC8
  if (crb(c,2)) { goto L_800D9ED8; } // 800D9ECC
  c->r[4]=c->r[1]+0x00000020u; // 800D9ED0
  c->lr=0x800D9ED8u; f_800D66B8(c); // 800D9ED4
L_800D9ED8:;
  c->lr=0x800D9EDCu; f_8006592C(c); // 800D9ED8
  c->r[4]=0u+0x00000125u; // 800D9EDC
  c->r[5]=0u+0x00000000u; // 800D9EE0
  c->r[6]=0u+0xFFFFFFFFu; // 800D9EE4
  c->r[7]=0u+0xFFFFFFFFu; // 800D9EE8
  c->lr=0x800D9EF0u; f_80048F20(c); // 800D9EEC
  c->r[3]=c->r[29]|c->r[29]; // 800D9EF0
  c->r[4]=0u+0x80460000u; // 800D9EF4
  c->r[4]=c->r[4]+0x00000078u; // 800D9EF8
  c->r[5]=c->r[1]+0x00000014u; // 800D9EFC
  c->r[6]=0u+0x00000001u; // 800D9F00
  c->lr=0x800D9F08u; f_800C6F78(c); // 800D9F04
  c->lr=0x800D9F0Cu; f_800A23BC(c); // 800D9F08
  c->lr=0x800D9F10u; f_800BB808(c); // 800D9F0C
  c->r[4]=c->r[13]+0xFFFF8948u; // 800D9F10
  c->r[5]=0u+0x80460000u; // 800D9F14
  c->r[5]=c->r[5]+0x00000658u; // 800D9F18
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9F1C
  c->lr=0x800D9F24u; f_800CAF70(c); // 800D9F20
  W32(c->r[28]+0x00000090u,c->r[3]); // 800D9F24
  c->lr=0x800D9F2Cu; f_800A23BC(c); // 800D9F28
  c->lr=0x800D9F30u; f_800BB808(c); // 800D9F2C
  c->r[4]=R32(c->r[28]+0x00000090u); // 800D9F30
  c->lr=0x800D9F38u; f_800BBC8C(c); // 800D9F34
  c->r[4]=c->r[1]+0x00000014u; // 800D9F38
  c->lr=0x800D9F40u; f_800BCDE8(c); // 800D9F3C
  c->lr=0x800D9F44u; f_800A23BC(c); // 800D9F40
  c->lr=0x800D9F48u; f_800BB808(c); // 800D9F44
  c->r[4]=R32(c->r[28]+0x00000090u); // 800D9F48
  c->lr=0x800D9F50u; f_800BBC8C(c); // 800D9F4C
  c->r[4]=c->r[1]+0x00000020u; // 800D9F50
  c->lr=0x800D9F58u; f_800BCF2C(c); // 800D9F54
  c->lr=0x800D9F5Cu; f_800A23BC(c); // 800D9F58
  c->lr=0x800D9F60u; f_800BB808(c); // 800D9F5C
  c->r[4]=R32(c->r[28]+0x00000090u); // 800D9F60
  c->lr=0x800D9F68u; f_800BBC8C(c); // 800D9F64
  {uint32_t ea=c->r[2]+0xFFFF8918u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9F68
  c->lr=0x800D9F70u; f_800BCFE0(c); // 800D9F6C
  cmps(c,0,(int32_t)c->r[30],0); // 800D9F70
  if (crb(c,2)) { goto L_800DA04C; } // 800D9F74
  c->lr=0x800D9F7Cu; f_800A23BC(c); // 800D9F78
  c->lr=0x800D9F80u; f_800BB700(c); // 800D9F7C
  c->r[4]=c->r[30]|c->r[30]; // 800D9F80
  c->lr=0x800D9F88u; f_800BBE64(c); // 800D9F84
  c->lr=0x800D9F8Cu; f_800CA4F4(c); // 800D9F88
  c->lr=0x800D9F90u; f_800A23BC(c); // 800D9F8C
  c->lr=0x800D9F94u; f_800BB700(c); // 800D9F90
  c->r[4]=c->r[30]|c->r[30]; // 800D9F94
  c->lr=0x800D9F9Cu; f_800BBE64(c); // 800D9F98
  c->r[4]=c->r[1]+0x00000020u; // 800D9F9C
  c->lr=0x800D9FA4u; f_800BB538(c); // 800D9FA0
  c->lr=0x800D9FA8u; f_800A23BC(c); // 800D9FA4
  c->lr=0x800D9FACu; f_800BB700(c); // 800D9FA8
  c->r[4]=c->r[30]|c->r[30]; // 800D9FAC
  c->lr=0x800D9FB4u; f_800BBE64(c); // 800D9FB0
  {uint32_t ea=c->r[2]+0xFFFF8918u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9FB4
  c->lr=0x800D9FBCu; f_800BB548(c); // 800D9FB8
  c->lr=0x800D9FC0u; f_800A23BC(c); // 800D9FBC
  c->lr=0x800D9FC4u; f_800BB700(c); // 800D9FC0
  c->r[4]=c->r[30]|c->r[30]; // 800D9FC4
  c->lr=0x800D9FCCu; f_800BBE64(c); // 800D9FC8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9FCC
  c->lr=0x800D9FD4u; f_800CA4C0(c); // 800D9FD0
  c->lr=0x800D9FD8u; f_800A23BC(c); // 800D9FD4
  c->lr=0x800D9FDCu; f_800BB700(c); // 800D9FD8
  c->r[4]=c->r[30]|c->r[30]; // 800D9FDC
  c->lr=0x800D9FE4u; f_800BBE64(c); // 800D9FE0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9FE4
  c->lr=0x800D9FECu; f_800CA46C(c); // 800D9FE8
  c->lr=0x800D9FF0u; f_800A23BC(c); // 800D9FEC
  c->lr=0x800D9FF4u; f_800BB700(c); // 800D9FF0
  c->r[4]=c->r[30]|c->r[30]; // 800D9FF4
  c->lr=0x800D9FFCu; f_800BBE64(c); // 800D9FF8
  {uint32_t ea=c->r[2]+0xFFFF8918u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9FFC
  c->lr=0x800DA004u; f_800CA450(c); // 800DA000
  goto L_800DA04C; // 800DA004
L_800DA008:;
  c->lr=0x800DA00Cu; f_800A23BC(c); // 800DA008
  c->lr=0x800DA010u; f_800BB808(c); // 800DA00C
  c->r[4]=R32(c->r[28]+0x00000090u); // 800DA010
  c->lr=0x800DA018u; f_800BBC8C(c); // 800DA014
  c->lr=0x800DA01Cu; f_800BDC10(c); // 800DA018
  cmps(c,0,(int32_t)c->r[3],0); // 800DA01C
  if (crb(c,2)) { goto L_800DA04C; } // 800DA020
  c->lr=0x800DA028u; f_800A23BC(c); // 800DA024
  c->lr=0x800DA02Cu; f_800BB700(c); // 800DA028
  c->r[4]=c->r[30]|c->r[30]; // 800DA02C
  c->lr=0x800DA034u; f_800BBE64(c); // 800DA030
  c->r[4]=0u+0x00000001u; // 800DA034
  c->r[5]=0u+0x00000000u; // 800DA038
  c->lr=0x800DA040u; f_800D2C24(c); // 800DA03C
  c->r[3]=c->r[28]|c->r[28]; // 800DA040
  c->r[4]=0u+0x0000000Du; // 800DA044
  c->lr=0x800DA04Cu; f_800BB8E4(c); // 800DA048
L_800DA04C:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DA04C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DA050
  c->r[29]=R32(c->r[1]+0x00000034u); // 800DA054
  c->r[28]=R32(c->r[1]+0x00000030u); // 800DA058
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DA05C
  c->lr=c->r[0]; // 800DA060
  c->r[1]=c->r[1]+0x00000040u; // 800DA064
  return; // 800DA068
}

// fn_800DA06C
void f_800DA06C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA06C
  c->r[0]=c->lr; // 800DA070
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA078
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DA07C
  c->r[30]=c->r[3]|c->r[3]; // 800DA080
  c->lr=0x800DA088u; f_800A23BC(c); // 800DA084
  c->lr=0x800DA08Cu; f_800BB700(c); // 800DA088
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DA08C
  c->lr=0x800DA094u; f_800BBEA4(c); // 800DA090
  c->r[31]=c->r[3]|c->r[3]; // 800DA094
  c->r[3]=c->r[30]|c->r[30]; // 800DA098
  c->lr=0x800DA0A0u; f_800BB8EC(c); // 800DA09C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA0A0
  if (crb(c,2)) { goto L_800DA110; } // 800DA0A4
  cmps(c,0,(int32_t)c->r[31],0); // 800DA0A8
  if (crb(c,2)) { goto L_800DA13C; } // 800DA0AC
  c->lr=0x800DA0B4u; f_800A23BC(c); // 800DA0B0
  c->lr=0x800DA0B8u; f_800BB700(c); // 800DA0B4
  c->r[4]=c->r[31]|c->r[31]; // 800DA0B8
  c->lr=0x800DA0C0u; f_800BBE64(c); // 800DA0BC
  c->r[4]=0u+0x00000000u; // 800DA0C0
  c->lr=0x800DA0C8u; f_800D2BA8(c); // 800DA0C4
  c->lr=0x800DA0CCu; f_800A23BC(c); // 800DA0C8
  c->lr=0x800DA0D0u; f_800BB700(c); // 800DA0CC
  c->r[4]=c->r[31]|c->r[31]; // 800DA0D0
  c->lr=0x800DA0D8u; f_800BBE64(c); // 800DA0D4
  c->lr=0x800DA0DCu; f_800BB66C(c); // 800DA0D8
  c->lr=0x800DA0E0u; f_800A23BC(c); // 800DA0DC
  c->lr=0x800DA0E4u; f_800BB700(c); // 800DA0E0
  c->r[4]=c->r[31]|c->r[31]; // 800DA0E4
  c->lr=0x800DA0ECu; f_800BBE64(c); // 800DA0E8
  {uint32_t ea=c->r[2]+0xFFFF88B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA0EC
  c->lr=0x800DA0F4u; f_800BB600(c); // 800DA0F0
  c->lr=0x800DA0F8u; f_800A23BC(c); // 800DA0F4
  c->lr=0x800DA0FCu; f_800BB700(c); // 800DA0F8
  c->r[4]=c->r[31]|c->r[31]; // 800DA0FC
  c->lr=0x800DA104u; f_800BBE64(c); // 800DA100
  {uint32_t ea=c->r[2]+0xFFFF891Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA104
  c->lr=0x800DA10Cu; f_800BB650(c); // 800DA108
  goto L_800DA13C; // 800DA10C
L_800DA110:;
  c->lr=0x800DA114u; f_800A23BC(c); // 800DA110
  c->lr=0x800DA118u; f_800BB700(c); // 800DA114
  c->r[4]=c->r[31]|c->r[31]; // 800DA118
  c->lr=0x800DA120u; f_800BBE64(c); // 800DA11C
  c->lr=0x800DA124u; f_800D26AC(c); // 800DA120
  cmps(c,0,(int32_t)c->r[3],0); // 800DA124
  if (crb(c,2)) { goto L_800DA13C; } // 800DA128
  c->lr=0x800DA130u; f_800A23BC(c); // 800DA12C
  c->lr=0x800DA134u; f_800A23B4(c); // 800DA130
  c->r[4]=R32(c->r[30]+0x00000074u); // 800DA134
  c->lr=0x800DA13Cu; f_800DFF38(c); // 800DA138
L_800DA13C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA13C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DA140
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA144
  c->lr=c->r[0]; // 800DA148
  c->r[1]=c->r[1]+0x00000010u; // 800DA14C
  return; // 800DA150
}

// fn_800DA154
void f_800DA154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA154
  c->r[0]=c->lr; // 800DA158
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA15C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA160
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA164
  c->r[30]=c->r[3]|c->r[3]; // 800DA168
  c->r[3]=c->r[1]+0x00000008u; // 800DA16C
  c->lr=0x800DA174u; f_8004B0A4(c); // 800DA170
  c->lr=0x800DA178u; f_800A23BC(c); // 800DA174
  c->lr=0x800DA17Cu; f_800A23B4(c); // 800DA178
  c->lr=0x800DA180u; f_800CF588(c); // 800DA17C
  c->r[31]=c->r[3]|c->r[3]; // 800DA180
  c->lr=0x800DA188u; f_800A23BC(c); // 800DA184
  c->lr=0x800DA18Cu; f_800A23B4(c); // 800DA188
  c->r[4]=c->r[31]|c->r[31]; // 800DA18C
  c->lr=0x800DA194u; f_800BEDE0(c); // 800DA190
  c->r[31]=c->r[3]|c->r[3]; // 800DA194
  c->lr=0x800DA19Cu; f_800A23BC(c); // 800DA198
  c->lr=0x800DA1A0u; f_800BB800(c); // 800DA19C
  c->r[4]=c->r[13]+0xFFFF8930u; // 800DA1A0
  c->lr=0x800DA1A8u; f_800BBD98(c); // 800DA1A4
  c->lr=0x800DA1ACu; f_800A23BC(c); // 800DA1A8
  c->lr=0x800DA1B0u; f_800A23B4(c); // 800DA1AC
  c->r[4]=c->r[31]|c->r[31]; // 800DA1B0
  c->lr=0x800DA1B8u; f_800BEDA0(c); // 800DA1B4
  c->lr=0x800DA1BCu; f_800CF580(c); // 800DA1B8
  c->r[0]=0u+0x00000000u; // 800DA1BC
  cmps(c,0,(int32_t)c->r[3],1); // 800DA1C0
  if (crb(c,2)) { goto L_800DA1D0; } // 800DA1C4
  cmps(c,0,(int32_t)c->r[3],2); // 800DA1C8
  if (!crb(c,2)) { goto L_800DA1D4; } // 800DA1CC
L_800DA1D0:;
  c->r[0]=0u+0x00000001u; // 800DA1D0
L_800DA1D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DA1D4
  if (!crb(c,2)) { goto L_800DA21C; } // 800DA1D8
  c->lr=0x800DA1E0u; f_800A23BC(c); // 800DA1DC
  c->lr=0x800DA1E4u; f_800BB800(c); // 800DA1E0
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA1E4
  c->lr=0x800DA1ECu; f_800C1284(c); // 800DA1E8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA1EC
  if (crb(c,2)) { goto L_800DA20C; } // 800DA1F0
  c->lr=0x800DA1F8u; f_800A23BC(c); // 800DA1F4
  c->lr=0x800DA1FCu; f_800BB800(c); // 800DA1F8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA1FC
  c->lr=0x800DA204u; f_800BBD58(c); // 800DA200
  c->r[4]=0u+0x00000001u; // 800DA204
  c->lr=0x800DA20Cu; f_800BB958(c); // 800DA208
L_800DA20C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA20C
  c->r[4]=0u+0x00000000u; // 800DA210
  c->lr=0x800DA218u; f_800BB8E4(c); // 800DA214
  goto L_800DA2AC; // 800DA218
L_800DA21C:;
  c->lr=0x800DA220u; f_800A23BC(c); // 800DA21C
  c->lr=0x800DA224u; f_800A23B4(c); // 800DA220
  c->lr=0x800DA228u; f_800CF628(c); // 800DA224
  c->r[31]=c->r[3]|c->r[3]; // 800DA228
  c->lr=0x800DA230u; f_800A23BC(c); // 800DA22C
  c->lr=0x800DA234u; f_800A23B4(c); // 800DA230
  c->r[4]=c->r[31]|c->r[31]; // 800DA234
  c->lr=0x800DA23Cu; f_800DFD54(c); // 800DA238
  W32(c->r[30]+0x00000074u,c->r[3]); // 800DA23C
  c->lr=0x800DA244u; f_800A23BC(c); // 800DA240
  c->lr=0x800DA248u; f_800A23B4(c); // 800DA244
  c->lr=0x800DA24Cu; f_800CF620(c); // 800DA248
  cmps(c,0,(int32_t)c->r[3],5); // 800DA24C
  if (crb(c,2)) { goto L_800DA2A0; } // 800DA250
  if (!crb(c,0)) { goto L_800DA268; } // 800DA254
  cmps(c,0,(int32_t)c->r[3],0); // 800DA258
  if (crb(c,2)) { goto L_800DA280; } // 800DA25C
  if (!crb(c,0)) { goto L_800DA290; } // 800DA260
  goto L_800DA2AC; // 800DA264
L_800DA268:;
  cmps(c,0,(int32_t)c->r[3],7); // 800DA268
  if (!crb(c,0)) { goto L_800DA2AC; } // 800DA26C
  c->r[3]=c->r[30]|c->r[30]; // 800DA270
  c->r[4]=0u+0x0000000Fu; // 800DA274
  c->lr=0x800DA27Cu; f_800BB8E4(c); // 800DA278
  goto L_800DA2AC; // 800DA27C
L_800DA280:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA280
  c->r[4]=0u+0x00000016u; // 800DA284
  c->lr=0x800DA28Cu; f_800BB8E4(c); // 800DA288
  goto L_800DA2AC; // 800DA28C
L_800DA290:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA290
  c->r[4]=0u+0x00000013u; // 800DA294
  c->lr=0x800DA29Cu; f_800BB8E4(c); // 800DA298
  goto L_800DA2AC; // 800DA29C
L_800DA2A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA2A0
  c->r[4]=0u+0x00000010u; // 800DA2A4
  c->lr=0x800DA2ACu; f_800BB8E4(c); // 800DA2A8
L_800DA2AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA2AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA2B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA2B4
  c->lr=c->r[0]; // 800DA2B8
  c->r[1]=c->r[1]+0x00000020u; // 800DA2BC
  return; // 800DA2C0
}

// fn_800DA2C4
void f_800DA2C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA2C4
  c->r[0]=c->lr; // 800DA2C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA2CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA2D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA2D4
  c->r[30]=c->r[3]|c->r[3]; // 800DA2D8
  c->r[3]=c->r[1]+0x00000008u; // 800DA2DC
  c->lr=0x800DA2E4u; f_8004B0A4(c); // 800DA2E0
  c->lr=0x800DA2E8u; f_800A23BC(c); // 800DA2E4
  c->lr=0x800DA2ECu; f_800BB800(c); // 800DA2E8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA2EC
  c->lr=0x800DA2F4u; f_800BBD58(c); // 800DA2F0
  c->r[31]=c->r[3]|c->r[3]; // 800DA2F4
  c->r[3]=c->r[30]|c->r[30]; // 800DA2F8
  c->lr=0x800DA300u; f_800BB8EC(c); // 800DA2FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA300
  if (crb(c,2)) { goto L_800DA338; } // 800DA304
  c->r[3]=c->r[31]|c->r[31]; // 800DA308
  c->r[4]=0u+0x00000001u; // 800DA30C
  c->lr=0x800DA314u; f_800C93E8(c); // 800DA310
  c->r[3]=c->r[31]|c->r[31]; // 800DA314
  c->r[4]=0u+0x00000001u; // 800DA318
  c->lr=0x800DA320u; f_800BB958(c); // 800DA31C
  c->r[3]=c->r[31]|c->r[31]; // 800DA320
  c->r[4]=0u+0x80460000u; // 800DA324
  c->r[4]=c->r[4]+0x0000062Cu; // 800DA328
  c->r[5]=0u+0x00000006u; // 800DA32C
  c->lr=0x800DA334u; f_800C7E90(c); // 800DA330
  goto L_800DA344; // 800DA334
L_800DA338:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA338
  c->r[4]=0u+0x00000000u; // 800DA33C
  c->lr=0x800DA344u; f_800BB8E4(c); // 800DA340
L_800DA344:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA344
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA348
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA34C
  c->lr=c->r[0]; // 800DA350
  c->r[1]=c->r[1]+0x00000020u; // 800DA354
  return; // 800DA358
}

// fn_800DA35C
void f_800DA35C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA35C
  c->r[0]=c->lr; // 800DA360
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA364
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA368
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA36C
  c->r[30]=c->r[3]|c->r[3]; // 800DA370
  c->r[3]=c->r[1]+0x00000008u; // 800DA374
  c->lr=0x800DA37Cu; f_8004B0A4(c); // 800DA378
  c->lr=0x800DA380u; f_800A23BC(c); // 800DA37C
  c->lr=0x800DA384u; f_800BB800(c); // 800DA380
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA384
  c->lr=0x800DA38Cu; f_800BBD58(c); // 800DA388
  c->r[31]=c->r[3]|c->r[3]; // 800DA38C
  c->r[3]=c->r[30]|c->r[30]; // 800DA390
  c->lr=0x800DA398u; f_800BB8EC(c); // 800DA394
  cmps(c,0,(int32_t)c->r[3],0); // 800DA398
  if (crb(c,2)) { goto L_800DA3EC; } // 800DA39C
  c->r[3]=c->r[31]|c->r[31]; // 800DA3A0
  c->r[4]=0u+0x00000001u; // 800DA3A4
  c->lr=0x800DA3ACu; f_800C93E8(c); // 800DA3A8
  c->r[3]=c->r[31]|c->r[31]; // 800DA3AC
  c->r[4]=0u+0x80460000u; // 800DA3B0
  c->r[4]=c->r[4]+0x00000668u; // 800DA3B4
  c->r[5]=0u+0x00000006u; // 800DA3B8
  c->lr=0x800DA3C0u; f_800C7E90(c); // 800DA3BC
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DA3C0
  cmps(c,0,(int32_t)c->r[31],0); // 800DA3C4
  if (crb(c,2)) { goto L_800DA3F8; } // 800DA3C8
  c->lr=0x800DA3D0u; f_800A23BC(c); // 800DA3CC
  c->lr=0x800DA3D4u; f_800A23B4(c); // 800DA3D0
  c->r[4]=c->r[31]|c->r[31]; // 800DA3D4
  c->lr=0x800DA3DCu; f_800E0578(c); // 800DA3D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA3DC
  if (crb(c,2)) { goto L_800DA3F8; } // 800DA3E0
  c->lr=0x800DA3E8u; f_800D6500(c); // 800DA3E4
  goto L_800DA3F8; // 800DA3E8
L_800DA3EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA3EC
  c->r[4]=0u+0x00000011u; // 800DA3F0
  c->lr=0x800DA3F8u; f_800BB8E4(c); // 800DA3F4
L_800DA3F8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA3F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA3FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA400
  c->lr=c->r[0]; // 800DA404
  c->r[1]=c->r[1]+0x00000020u; // 800DA408
  return; // 800DA40C
}

// fn_800DA410
void f_800DA410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA410
  c->r[0]=c->lr; // 800DA414
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA418
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA41C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA420
  c->r[30]=c->r[3]|c->r[3]; // 800DA424
  c->r[3]=c->r[1]+0x00000008u; // 800DA428
  c->lr=0x800DA430u; f_8004B0A4(c); // 800DA42C
  c->lr=0x800DA434u; f_800A23BC(c); // 800DA430
  c->lr=0x800DA438u; f_800BB800(c); // 800DA434
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA438
  c->lr=0x800DA440u; f_800BBD58(c); // 800DA43C
  c->r[31]=c->r[3]|c->r[3]; // 800DA440
  c->r[3]=c->r[30]|c->r[30]; // 800DA444
  c->lr=0x800DA44Cu; f_800BB8EC(c); // 800DA448
  cmps(c,0,(int32_t)c->r[3],0); // 800DA44C
  if (crb(c,2)) { goto L_800DA484; } // 800DA450
  c->r[3]=c->r[30]|c->r[30]; // 800DA454
  c->lr=0x800DA45Cu; f_800D72A8(c); // 800DA458
  c->lr=0x800DA460u; f_8007B524(c); // 800DA45C
  c->r[4]=0u+0x00000001u; // 800DA460
  c->lr=0x800DA468u; f_8009CCFC(c); // 800DA464
  c->r[3]=c->r[31]|c->r[31]; // 800DA468
  c->r[4]=0u+0x00000001u; // 800DA46C
  c->lr=0x800DA474u; f_800BB958(c); // 800DA470
  c->r[3]=c->r[31]|c->r[31]; // 800DA474
  c->r[4]=0u+0x00000000u; // 800DA478
  c->lr=0x800DA480u; f_800C93E8(c); // 800DA47C
  goto L_800DA4AC; // 800DA480
L_800DA484:;
  c->r[3]=c->r[31]|c->r[31]; // 800DA484
  c->r[4]=0u+0x00000006u; // 800DA488
  c->lr=0x800DA490u; f_800C7308(c); // 800DA48C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA490
  if (crb(c,2)) { goto L_800DA4AC; } // 800DA494
  c->r[0]=0u+0x00000005u; // 800DA498
  W32(c->r[30]+0x00000080u,c->r[0]); // 800DA49C
  c->r[3]=c->r[30]|c->r[30]; // 800DA4A0
  c->r[4]=0u+0x00000012u; // 800DA4A4
  c->lr=0x800DA4ACu; f_800BB8E4(c); // 800DA4A8
L_800DA4AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA4AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA4B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA4B4
  c->lr=c->r[0]; // 800DA4B8
  c->r[1]=c->r[1]+0x00000020u; // 800DA4BC
  return; // 800DA4C0
}

// fn_800DA4C4
void f_800DA4C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA4C4
  c->r[0]=c->lr; // 800DA4C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA4CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA4D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA4D4
  c->r[30]=c->r[3]|c->r[3]; // 800DA4D8
  c->r[3]=c->r[1]+0x00000008u; // 800DA4DC
  c->lr=0x800DA4E4u; f_8004B0A4(c); // 800DA4E0
  c->lr=0x800DA4E8u; f_800A23BC(c); // 800DA4E4
  c->lr=0x800DA4ECu; f_800BB800(c); // 800DA4E8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA4EC
  c->lr=0x800DA4F4u; f_800BBD58(c); // 800DA4F0
  c->r[31]=c->r[3]|c->r[3]; // 800DA4F4
  c->r[3]=c->r[30]|c->r[30]; // 800DA4F8
  c->lr=0x800DA500u; f_800BB8EC(c); // 800DA4FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA500
  if (crb(c,2)) { goto L_800DA520; } // 800DA504
  c->r[3]=c->r[31]|c->r[31]; // 800DA508
  c->r[4]=0u+0x80460000u; // 800DA50C
  c->r[4]=c->r[4]+0x0000062Cu; // 800DA510
  c->r[5]=0u+0x00000006u; // 800DA514
  c->lr=0x800DA51Cu; f_800C7E90(c); // 800DA518
  goto L_800DA568; // 800DA51C
L_800DA520:;
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DA520
  cmps(c,0,(int32_t)c->r[31],0); // 800DA524
  if (crb(c,2)) { goto L_800DA55C; } // 800DA528
  c->lr=0x800DA530u; f_800A23BC(c); // 800DA52C
  c->lr=0x800DA534u; f_800A23B4(c); // 800DA530
  c->r[4]=c->r[31]|c->r[31]; // 800DA534
  c->lr=0x800DA53Cu; f_800E0578(c); // 800DA538
  c->r[31]=c->r[3]|c->r[3]; // 800DA53C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA540
  if (crb(c,2)) { goto L_800DA55C; } // 800DA544
  c->lr=0x800DA54Cu; f_800D666C(c); // 800DA548
  cmps(c,0,(int32_t)c->r[3],0); // 800DA54C
  if (!crb(c,2)) { goto L_800DA568; } // 800DA550
  c->r[3]=c->r[31]|c->r[31]; // 800DA554
  c->lr=0x800DA55Cu; f_800D64C0(c); // 800DA558
L_800DA55C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA55C
  c->r[4]=0u+0x00000000u; // 800DA560
  c->lr=0x800DA568u; f_800BB8E4(c); // 800DA564
L_800DA568:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA568
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA56C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA570
  c->lr=c->r[0]; // 800DA574
  c->r[1]=c->r[1]+0x00000020u; // 800DA578
  return; // 800DA57C
}

// fn_800DA580
void f_800DA580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA580
  c->r[0]=c->lr; // 800DA584
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA58C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA590
  c->r[30]=c->r[3]|c->r[3]; // 800DA594
  c->r[3]=c->r[1]+0x00000008u; // 800DA598
  c->lr=0x800DA5A0u; f_8004B0A4(c); // 800DA59C
  c->lr=0x800DA5A4u; f_800A23BC(c); // 800DA5A0
  c->lr=0x800DA5A8u; f_800BB800(c); // 800DA5A4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA5A8
  c->lr=0x800DA5B0u; f_800BBD58(c); // 800DA5AC
  c->r[31]=c->r[3]|c->r[3]; // 800DA5B0
  c->r[3]=c->r[30]|c->r[30]; // 800DA5B4
  c->lr=0x800DA5BCu; f_800BB8EC(c); // 800DA5B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA5BC
  if (crb(c,2)) { goto L_800DA610; } // 800DA5C0
  c->r[3]=c->r[31]|c->r[31]; // 800DA5C4
  c->r[4]=0u+0x00000001u; // 800DA5C8
  c->lr=0x800DA5D0u; f_800C93E8(c); // 800DA5CC
  c->r[3]=c->r[31]|c->r[31]; // 800DA5D0
  c->r[4]=0u+0x80460000u; // 800DA5D4
  c->r[4]=c->r[4]+0x00000668u; // 800DA5D8
  c->r[5]=0u+0x00000006u; // 800DA5DC
  c->lr=0x800DA5E4u; f_800C7E90(c); // 800DA5E0
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DA5E4
  cmps(c,0,(int32_t)c->r[31],0); // 800DA5E8
  if (crb(c,2)) { goto L_800DA61C; } // 800DA5EC
  c->lr=0x800DA5F4u; f_800A23BC(c); // 800DA5F0
  c->lr=0x800DA5F8u; f_800A23B4(c); // 800DA5F4
  c->r[4]=c->r[31]|c->r[31]; // 800DA5F8
  c->lr=0x800DA600u; f_800E0578(c); // 800DA5FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA600
  if (crb(c,2)) { goto L_800DA61C; } // 800DA604
  c->lr=0x800DA60Cu; f_800D6500(c); // 800DA608
  goto L_800DA61C; // 800DA60C
L_800DA610:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA610
  c->r[4]=0u+0x00000014u; // 800DA614
  c->lr=0x800DA61Cu; f_800BB8E4(c); // 800DA618
L_800DA61C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA61C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA620
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA624
  c->lr=c->r[0]; // 800DA628
  c->r[1]=c->r[1]+0x00000020u; // 800DA62C
  return; // 800DA630
}

// fn_800DA634
void f_800DA634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA634
  c->r[0]=c->lr; // 800DA638
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA63C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA640
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA644
  c->r[30]=c->r[3]|c->r[3]; // 800DA648
  c->r[3]=c->r[1]+0x00000008u; // 800DA64C
  c->lr=0x800DA654u; f_8004B0A4(c); // 800DA650
  c->lr=0x800DA658u; f_800A23BC(c); // 800DA654
  c->lr=0x800DA65Cu; f_800BB800(c); // 800DA658
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA65C
  c->lr=0x800DA664u; f_800BBD58(c); // 800DA660
  c->r[31]=c->r[3]|c->r[3]; // 800DA664
  c->r[3]=c->r[30]|c->r[30]; // 800DA668
  c->lr=0x800DA670u; f_800BB8EC(c); // 800DA66C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA670
  if (crb(c,2)) { goto L_800DA6A8; } // 800DA674
  c->r[3]=c->r[30]|c->r[30]; // 800DA678
  c->lr=0x800DA680u; f_800D72A8(c); // 800DA67C
  c->lr=0x800DA684u; f_8007B524(c); // 800DA680
  c->r[4]=0u+0x00000001u; // 800DA684
  c->lr=0x800DA68Cu; f_8009CCFC(c); // 800DA688
  c->r[3]=c->r[31]|c->r[31]; // 800DA68C
  c->r[4]=0u+0x00000001u; // 800DA690
  c->lr=0x800DA698u; f_800BB958(c); // 800DA694
  c->r[3]=c->r[31]|c->r[31]; // 800DA698
  c->r[4]=0u+0x00000000u; // 800DA69C
  c->lr=0x800DA6A4u; f_800C93E8(c); // 800DA6A0
  goto L_800DA6D0; // 800DA6A4
L_800DA6A8:;
  c->r[3]=c->r[31]|c->r[31]; // 800DA6A8
  c->r[4]=0u+0x00000006u; // 800DA6AC
  c->lr=0x800DA6B4u; f_800C7308(c); // 800DA6B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA6B4
  if (crb(c,2)) { goto L_800DA6D0; } // 800DA6B8
  c->r[0]=0u+0x00000004u; // 800DA6BC
  W32(c->r[30]+0x00000080u,c->r[0]); // 800DA6C0
  c->r[3]=c->r[30]|c->r[30]; // 800DA6C4
  c->r[4]=0u+0x00000015u; // 800DA6C8
  c->lr=0x800DA6D0u; f_800BB8E4(c); // 800DA6CC
L_800DA6D0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA6D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA6D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA6D8
  c->lr=c->r[0]; // 800DA6DC
  c->r[1]=c->r[1]+0x00000020u; // 800DA6E0
  return; // 800DA6E4
}

// fn_800DA6E8
void f_800DA6E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA6E8
  c->r[0]=c->lr; // 800DA6EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA6F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA6F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA6F8
  c->r[30]=c->r[3]|c->r[3]; // 800DA6FC
  c->r[3]=c->r[1]+0x00000008u; // 800DA700
  c->lr=0x800DA708u; f_8004B0A4(c); // 800DA704
  c->lr=0x800DA70Cu; f_800A23BC(c); // 800DA708
  c->lr=0x800DA710u; f_800BB800(c); // 800DA70C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA710
  c->lr=0x800DA718u; f_800BBD58(c); // 800DA714
  c->r[31]=c->r[3]|c->r[3]; // 800DA718
  c->r[3]=c->r[30]|c->r[30]; // 800DA71C
  c->lr=0x800DA724u; f_800BB8EC(c); // 800DA720
  cmps(c,0,(int32_t)c->r[3],0); // 800DA724
  if (crb(c,2)) { goto L_800DA744; } // 800DA728
  c->r[3]=c->r[31]|c->r[31]; // 800DA72C
  c->r[4]=0u+0x80460000u; // 800DA730
  c->r[4]=c->r[4]+0x0000062Cu; // 800DA734
  c->r[5]=0u+0x00000006u; // 800DA738
  c->lr=0x800DA740u; f_800C7E90(c); // 800DA73C
  goto L_800DA78C; // 800DA740
L_800DA744:;
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DA744
  cmps(c,0,(int32_t)c->r[31],0); // 800DA748
  if (crb(c,2)) { goto L_800DA780; } // 800DA74C
  c->lr=0x800DA754u; f_800A23BC(c); // 800DA750
  c->lr=0x800DA758u; f_800A23B4(c); // 800DA754
  c->r[4]=c->r[31]|c->r[31]; // 800DA758
  c->lr=0x800DA760u; f_800E0578(c); // 800DA75C
  c->r[31]=c->r[3]|c->r[3]; // 800DA760
  cmps(c,0,(int32_t)c->r[3],0); // 800DA764
  if (crb(c,2)) { goto L_800DA780; } // 800DA768
  c->lr=0x800DA770u; f_800D666C(c); // 800DA76C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA770
  if (!crb(c,2)) { goto L_800DA78C; } // 800DA774
  c->r[3]=c->r[31]|c->r[31]; // 800DA778
  c->lr=0x800DA780u; f_800D6540(c); // 800DA77C
L_800DA780:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA780
  c->r[4]=0u+0x00000000u; // 800DA784
  c->lr=0x800DA78Cu; f_800BB8E4(c); // 800DA788
L_800DA78C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA78C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA790
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA794
  c->lr=c->r[0]; // 800DA798
  c->r[1]=c->r[1]+0x00000020u; // 800DA79C
  return; // 800DA7A0
}

// fn_800DA7A4
void f_800DA7A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA7A4
  c->r[0]=c->lr; // 800DA7A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA7AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA7B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA7B4
  c->r[30]=c->r[3]|c->r[3]; // 800DA7B8
  c->r[3]=c->r[1]+0x00000008u; // 800DA7BC
  c->lr=0x800DA7C4u; f_8004B0A4(c); // 800DA7C0
  c->lr=0x800DA7C8u; f_800A23BC(c); // 800DA7C4
  c->lr=0x800DA7CCu; f_800BB800(c); // 800DA7C8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA7CC
  c->lr=0x800DA7D4u; f_800BBD58(c); // 800DA7D0
  c->r[31]=c->r[3]|c->r[3]; // 800DA7D4
  c->r[3]=c->r[30]|c->r[30]; // 800DA7D8
  c->lr=0x800DA7E0u; f_800BB8EC(c); // 800DA7DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA7E0
  if (crb(c,2)) { goto L_800DA834; } // 800DA7E4
  c->r[3]=c->r[31]|c->r[31]; // 800DA7E8
  c->r[4]=0u+0x00000001u; // 800DA7EC
  c->lr=0x800DA7F4u; f_800C93E8(c); // 800DA7F0
  c->r[3]=c->r[31]|c->r[31]; // 800DA7F4
  c->r[4]=0u+0x80460000u; // 800DA7F8
  c->r[4]=c->r[4]+0x00000678u; // 800DA7FC
  c->r[5]=0u+0x00000006u; // 800DA800
  c->lr=0x800DA808u; f_800C7E90(c); // 800DA804
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DA808
  cmps(c,0,(int32_t)c->r[31],0); // 800DA80C
  if (crb(c,2)) { goto L_800DA840; } // 800DA810
  c->lr=0x800DA818u; f_800A23BC(c); // 800DA814
  c->lr=0x800DA81Cu; f_800A23B4(c); // 800DA818
  c->r[4]=c->r[31]|c->r[31]; // 800DA81C
  c->lr=0x800DA824u; f_800E0578(c); // 800DA820
  cmps(c,0,(int32_t)c->r[3],0); // 800DA824
  if (crb(c,2)) { goto L_800DA840; } // 800DA828
  c->lr=0x800DA830u; f_800D6500(c); // 800DA82C
  goto L_800DA840; // 800DA830
L_800DA834:;
  c->r[3]=c->r[30]|c->r[30]; // 800DA834
  c->r[4]=0u+0x00000017u; // 800DA838
  c->lr=0x800DA840u; f_800BB8E4(c); // 800DA83C
L_800DA840:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA840
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA844
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA848
  c->lr=c->r[0]; // 800DA84C
  c->r[1]=c->r[1]+0x00000020u; // 800DA850
  return; // 800DA854
}

// fn_800DA858
void f_800DA858(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA858
  c->r[0]=c->lr; // 800DA85C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA864
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DA868
  c->r[30]=c->r[3]|c->r[3]; // 800DA86C
  c->lr=0x800DA874u; f_800A23BC(c); // 800DA870
  c->lr=0x800DA878u; f_800BB800(c); // 800DA874
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA878
  c->lr=0x800DA880u; f_800BBD58(c); // 800DA87C
  c->r[31]=c->r[3]|c->r[3]; // 800DA880
  c->r[3]=c->r[30]|c->r[30]; // 800DA884
  c->lr=0x800DA88Cu; f_800BB8EC(c); // 800DA888
  cmps(c,0,(int32_t)c->r[3],0); // 800DA88C
  if (crb(c,2)) { goto L_800DA8C4; } // 800DA890
  c->r[3]=c->r[30]|c->r[30]; // 800DA894
  c->lr=0x800DA89Cu; f_800D72A8(c); // 800DA898
  c->lr=0x800DA8A0u; f_8007B524(c); // 800DA89C
  c->r[4]=0u+0x00000001u; // 800DA8A0
  c->lr=0x800DA8A8u; f_8009CCFC(c); // 800DA8A4
  c->r[3]=c->r[31]|c->r[31]; // 800DA8A8
  c->r[4]=0u+0x00000001u; // 800DA8AC
  c->lr=0x800DA8B4u; f_800BB958(c); // 800DA8B0
  c->r[3]=c->r[31]|c->r[31]; // 800DA8B4
  c->r[4]=0u+0x00000000u; // 800DA8B8
  c->lr=0x800DA8C0u; f_800C93E8(c); // 800DA8BC
  goto L_800DA8EC; // 800DA8C0
L_800DA8C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DA8C4
  c->r[4]=0u+0x00000006u; // 800DA8C8
  c->lr=0x800DA8D0u; f_800C7308(c); // 800DA8CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA8D0
  if (crb(c,2)) { goto L_800DA8EC; } // 800DA8D4
  c->r[0]=0u+0x00000004u; // 800DA8D8
  W32(c->r[30]+0x00000080u,c->r[0]); // 800DA8DC
  c->r[3]=c->r[30]|c->r[30]; // 800DA8E0
  c->r[4]=0u+0x00000018u; // 800DA8E4
  c->lr=0x800DA8ECu; f_800BB8E4(c); // 800DA8E8
L_800DA8EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA8EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DA8F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA8F4
  c->lr=c->r[0]; // 800DA8F8
  c->r[1]=c->r[1]+0x00000010u; // 800DA8FC
  return; // 800DA900
}

// fn_800DA904
void f_800DA904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA904
  c->r[0]=c->lr; // 800DA908
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA90C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA910
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA914
  c->r[30]=c->r[3]|c->r[3]; // 800DA918
  c->r[3]=c->r[1]+0x00000008u; // 800DA91C
  c->lr=0x800DA924u; f_8004B0A4(c); // 800DA920
  c->lr=0x800DA928u; f_800A23BC(c); // 800DA924
  c->lr=0x800DA92Cu; f_800BB800(c); // 800DA928
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA92C
  c->lr=0x800DA934u; f_800BBD58(c); // 800DA930
  c->r[31]=c->r[3]|c->r[3]; // 800DA934
  c->r[3]=c->r[30]|c->r[30]; // 800DA938
  c->lr=0x800DA940u; f_800BB8EC(c); // 800DA93C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA940
  if (crb(c,2)) { goto L_800DA960; } // 800DA944
  c->r[3]=c->r[31]|c->r[31]; // 800DA948
  c->r[4]=0u+0x80460000u; // 800DA94C
  c->r[4]=c->r[4]+0x00000688u; // 800DA950
  c->r[5]=0u+0x00000006u; // 800DA954
  c->lr=0x800DA95Cu; f_800C7E90(c); // 800DA958
  goto L_800DA980; // 800DA95C
L_800DA960:;
  c->r[3]=c->r[31]|c->r[31]; // 800DA960
  c->r[4]=0u+0x00000006u; // 800DA964
  c->lr=0x800DA96Cu; f_800C7308(c); // 800DA968
  cmps(c,0,(int32_t)c->r[3],0); // 800DA96C
  if (crb(c,2)) { goto L_800DA980; } // 800DA970
  c->r[3]=c->r[30]|c->r[30]; // 800DA974
  c->r[4]=0u+0x00000019u; // 800DA978
  c->lr=0x800DA980u; f_800BB8E4(c); // 800DA97C
L_800DA980:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA980
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA984
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA988
  c->lr=c->r[0]; // 800DA98C
  c->r[1]=c->r[1]+0x00000020u; // 800DA990
  return; // 800DA994
}

// fn_800DA998
void f_800DA998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA998
  c->r[0]=c->lr; // 800DA99C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA9A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA9A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA9A8
  c->r[30]=c->r[3]|c->r[3]; // 800DA9AC
  c->r[3]=c->r[1]+0x00000008u; // 800DA9B0
  c->lr=0x800DA9B8u; f_8004B0A4(c); // 800DA9B4
  c->lr=0x800DA9BCu; f_800A23BC(c); // 800DA9B8
  c->lr=0x800DA9C0u; f_800BB800(c); // 800DA9BC
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800DA9C0
  c->lr=0x800DA9C8u; f_800BBD58(c); // 800DA9C4
  c->r[31]=c->r[3]|c->r[3]; // 800DA9C8
  c->r[3]=c->r[30]|c->r[30]; // 800DA9CC
  c->lr=0x800DA9D4u; f_800BB8EC(c); // 800DA9D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA9D4
  if (crb(c,2)) { goto L_800DA9F4; } // 800DA9D8
  c->r[3]=c->r[31]|c->r[31]; // 800DA9DC
  c->r[4]=0u+0x80460000u; // 800DA9E0
  c->r[4]=c->r[4]+0x0000062Cu; // 800DA9E4
  c->r[5]=0u+0x00000006u; // 800DA9E8
  c->lr=0x800DA9F0u; f_800C7E90(c); // 800DA9EC
  goto L_800DAA3C; // 800DA9F0
L_800DA9F4:;
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DA9F4
  cmps(c,0,(int32_t)c->r[31],0); // 800DA9F8
  if (crb(c,2)) { goto L_800DAA30; } // 800DA9FC
  c->lr=0x800DAA04u; f_800A23BC(c); // 800DAA00
  c->lr=0x800DAA08u; f_800A23B4(c); // 800DAA04
  c->r[4]=c->r[31]|c->r[31]; // 800DAA08
  c->lr=0x800DAA10u; f_800E0578(c); // 800DAA0C
  c->r[31]=c->r[3]|c->r[3]; // 800DAA10
  cmps(c,0,(int32_t)c->r[3],0); // 800DAA14
  if (crb(c,2)) { goto L_800DAA30; } // 800DAA18
  c->lr=0x800DAA20u; f_800D666C(c); // 800DAA1C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAA20
  if (!crb(c,2)) { goto L_800DAA3C; } // 800DAA24
  c->r[3]=c->r[31]|c->r[31]; // 800DAA28
  c->lr=0x800DAA30u; f_800D6540(c); // 800DAA2C
L_800DAA30:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAA30
  c->r[4]=0u+0x00000000u; // 800DAA34
  c->lr=0x800DAA3Cu; f_800BB8E4(c); // 800DAA38
L_800DAA3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DAA3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DAA40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAA44
  c->lr=c->r[0]; // 800DAA48
  c->r[1]=c->r[1]+0x00000020u; // 800DAA4C
  return; // 800DAA50
}

// fn_800DAA54
void f_800DAA54(Ctx* __restrict c) {
  return; // 800DAA54
}

// fn_800DAA58
void f_800DAA58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAA58
  c->r[0]=c->lr; // 800DAA5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAA60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAA64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DAA68
  c->r[30]=c->r[3]|c->r[3]; // 800DAA6C
  c->r[4]=0u+0x00000000u; // 800DAA70
  c->lr=0x800DAA78u; f_800D722C(c); // 800DAA74
  c->r[31]=R32(c->r[30]+0x00000074u); // 800DAA78
  cmps(c,0,(int32_t)c->r[31],0); // 800DAA7C
  if (crb(c,2)) { goto L_800DAAA0; } // 800DAA80
  c->lr=0x800DAA88u; f_800A23BC(c); // 800DAA84
  c->lr=0x800DAA8Cu; f_800A23B4(c); // 800DAA88
  c->r[4]=c->r[31]|c->r[31]; // 800DAA8C
  c->lr=0x800DAA94u; f_800E0578(c); // 800DAA90
  cmps(c,0,(int32_t)c->r[3],0); // 800DAA94
  if (crb(c,2)) { goto L_800DAAA0; } // 800DAA98
  c->lr=0x800DAAA0u; f_800D6668(c); // 800DAA9C
L_800DAAA0:;
  c->r[0]=0u+0x00000000u; // 800DAAA0
  W32(c->r[30]+0x00000080u,c->r[0]); // 800DAAA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAAA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DAAAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAAB0
  c->lr=c->r[0]; // 800DAAB4
  c->r[1]=c->r[1]+0x00000010u; // 800DAAB8
  return; // 800DAABC
}

// fn_800DAAC0
void f_800DAAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAAC0
  c->r[0]=c->lr; // 800DAAC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAAC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DAAD0
  c->r[30]=c->r[3]|c->r[3]; // 800DAAD4
  c->r[31]=R32(c->r[3]+0x00000074u); // 800DAAD8
  cmps(c,0,(int32_t)c->r[31],0); // 800DAADC
  if (crb(c,2)) { goto L_800DAB00; } // 800DAAE0
  c->lr=0x800DAAE8u; f_800A23BC(c); // 800DAAE4
  c->lr=0x800DAAECu; f_800A23B4(c); // 800DAAE8
  c->r[4]=c->r[31]|c->r[31]; // 800DAAEC
  c->lr=0x800DAAF4u; f_800E0578(c); // 800DAAF0
  cmps(c,0,(int32_t)c->r[3],0); // 800DAAF4
  if (crb(c,2)) { goto L_800DAB00; } // 800DAAF8
  c->lr=0x800DAB00u; f_800D6668(c); // 800DAAFC
L_800DAB00:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAB00
  c->r[4]=0u+0x00000001u; // 800DAB04
  c->lr=0x800DAB0Cu; f_800D722C(c); // 800DAB08
  c->lr=0x800DAB10u; f_800A23BC(c); // 800DAB0C
  c->lr=0x800DAB14u; f_800BB800(c); // 800DAB10
  c->r[4]=R32(c->r[30]+0x00000084u); // 800DAB14
  c->lr=0x800DAB1Cu; f_800BBD58(c); // 800DAB18
  c->r[4]=c->r[30]+0x000000A0u; // 800DAB1C
  c->lr=0x800DAB24u; f_800BCDE8(c); // 800DAB20
  c->r[0]=0u+0x00000000u; // 800DAB24
  W32(c->r[30]+0x00000080u,c->r[0]); // 800DAB28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAB2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DAB30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAB34
  c->lr=c->r[0]; // 800DAB38
  c->r[1]=c->r[1]+0x00000010u; // 800DAB3C
  return; // 800DAB40
}

// fn_800DAB44
void f_800DAB44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAB44
  c->r[0]=c->lr; // 800DAB48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAB4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAB50
  c->r[31]=c->r[3]|c->r[3]; // 800DAB54
  c->r[0]=R32(c->r[3]+0x00000074u); // 800DAB58
  cmps(c,0,(int32_t)c->r[0],0); // 800DAB5C
  if (crb(c,2)) { goto L_800DAB88; } // 800DAB60
  c->r[4]=0u+0x00000000u; // 800DAB64
  c->lr=0x800DAB6Cu; f_800D722C(c); // 800DAB68
  c->lr=0x800DAB70u; f_800A23BC(c); // 800DAB6C
  c->lr=0x800DAB74u; f_800A23B4(c); // 800DAB70
  c->r[4]=R32(c->r[31]+0x00000074u); // 800DAB74
  c->lr=0x800DAB7Cu; f_800E0578(c); // 800DAB78
  cmps(c,0,(int32_t)c->r[3],0); // 800DAB7C
  if (crb(c,2)) { goto L_800DAB88; } // 800DAB80
  c->lr=0x800DAB88u; f_800D65C0(c); // 800DAB84
L_800DAB88:;
  c->r[0]=0u+0x00000000u; // 800DAB88
  W32(c->r[31]+0x00000080u,c->r[0]); // 800DAB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAB90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAB94
  c->lr=c->r[0]; // 800DAB98
  c->r[1]=c->r[1]+0x00000010u; // 800DAB9C
  return; // 800DABA0
}

// fn_800DABA4
void f_800DABA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DABA4
  c->r[0]=c->lr; // 800DABA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DABAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DABB0
  c->r[31]=c->r[3]|c->r[3]; // 800DABB4
  c->r[0]=R32(c->r[3]+0x00000074u); // 800DABB8
  cmps(c,0,(int32_t)c->r[0],0); // 800DABBC
  if (crb(c,2)) { goto L_800DABE8; } // 800DABC0
  c->r[4]=0u+0x00000000u; // 800DABC4
  c->lr=0x800DABCCu; f_800D722C(c); // 800DABC8
  c->lr=0x800DABD0u; f_800A23BC(c); // 800DABCC
  c->lr=0x800DABD4u; f_800A23B4(c); // 800DABD0
  c->r[4]=R32(c->r[31]+0x00000074u); // 800DABD4
  c->lr=0x800DABDCu; f_800E0578(c); // 800DABD8
  cmps(c,0,(int32_t)c->r[3],0); // 800DABDC
  if (crb(c,2)) { goto L_800DABE8; } // 800DABE0
  c->lr=0x800DABE8u; f_800D65F8(c); // 800DABE4
L_800DABE8:;
  c->r[0]=0u+0x00000000u; // 800DABE8
  W32(c->r[31]+0x00000080u,c->r[0]); // 800DABEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DABF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DABF4
  c->lr=c->r[0]; // 800DABF8
  c->r[1]=c->r[1]+0x00000010u; // 800DABFC
  return; // 800DAC00
}

// fn_800DAC04
void f_800DAC04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAC04
  c->r[0]=c->lr; // 800DAC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAC0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAC10
  c->r[31]=c->r[3]|c->r[3]; // 800DAC14
  c->r[0]=R32(c->r[3]+0x00000074u); // 800DAC18
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC1C
  if (crb(c,2)) { goto L_800DAC48; } // 800DAC20
  c->r[4]=0u+0x00000000u; // 800DAC24
  c->lr=0x800DAC2Cu; f_800D722C(c); // 800DAC28
  c->lr=0x800DAC30u; f_800A23BC(c); // 800DAC2C
  c->lr=0x800DAC34u; f_800A23B4(c); // 800DAC30
  c->r[4]=R32(c->r[31]+0x00000074u); // 800DAC34
  c->lr=0x800DAC3Cu; f_800E0578(c); // 800DAC38
  cmps(c,0,(int32_t)c->r[3],0); // 800DAC3C
  if (crb(c,2)) { goto L_800DAC48; } // 800DAC40
  c->lr=0x800DAC48u; f_800D6630(c); // 800DAC44
L_800DAC48:;
  c->r[0]=0u+0x00000000u; // 800DAC48
  W32(c->r[31]+0x00000080u,c->r[0]); // 800DAC4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAC50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAC54
  c->lr=c->r[0]; // 800DAC58
  c->r[1]=c->r[1]+0x00000010u; // 800DAC5C
  return; // 800DAC60
}

// fn_800DAC64
void f_800DAC64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAC64
  c->r[0]=c->lr; // 800DAC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAC70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DAC74
  c->r[30]=c->r[3]|c->r[3]; // 800DAC78
  c->r[31]=c->r[4]|c->r[4]; // 800DAC7C
  c->r[3]=c->r[3]+0x00000058u; // 800DAC80
  c->r[4]=0u+0x80460000u; // 800DAC84
  c->r[4]=c->r[4]+0x000006D8u; // 800DAC88
  c->r[5]=c->r[31]|c->r[31]; // 800DAC8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAC90
  c->lr=0x800DAC98u; f_802E7CC4(c); // 800DAC94
  c->r[3]=c->r[30]+0x00000098u; // 800DAC98
  c->r[4]=c->r[13]+0xFFFF8950u; // 800DAC9C
  c->r[5]=c->r[31]|c->r[31]; // 800DACA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DACA4
  c->lr=0x800DACACu; f_802E7CC4(c); // 800DACA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DACAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DACB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DACB4
  c->lr=c->r[0]; // 800DACB8
  c->r[1]=c->r[1]+0x00000010u; // 800DACBC
  return; // 800DACC0
}

// fn_800DACC4
void f_800DACC4(Ctx* __restrict c) {
  c->r[5]=c->r[4]|c->r[4]; // 800DACC4
  c->r[3]=c->r[3]+0x000000B8u; // 800DACC8
  c->r[4]=c->r[13]+0xFFFF8854u; // 800DACCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DACD0
  f_802E7CC4(c); return; // 800DACD4
}

// fn_800DACD8
void f_800DACD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DACD8
  c->r[0]=c->lr; // 800DACDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DACE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DACE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DACE8
  c->r[5]=c->r[3]|c->r[3]; // 800DACEC
  c->r[3]=0u+0x804C0000u; // 800DACF0
  c->r[30]=c->r[3]+0x00002650u; // 800DACF4
  c->r[3]=c->r[30]|c->r[30]; // 800DACF8
  c->r[4]=c->r[13]+0xFFFF8854u; // 800DACFC
  c->r[5]=c->r[5]+0x00000058u; // 800DAD00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAD04
  c->lr=0x800DAD0Cu; f_802E7CC4(c); // 800DAD08
  c->r[3]=c->r[30]|c->r[30]; // 800DAD0C
  c->lr=0x800DAD14u; f_802F0250(c); // 800DAD10
  cmps(c,0,(int32_t)c->r[3],0); // 800DAD14
  if (!crb(c,2)) { goto L_800DAD24; } // 800DAD18
  c->r[3]=0u+0x00000000u; // 800DAD1C
  goto L_800DAD64; // 800DAD20
L_800DAD24:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAD24
  c->r[4]=0u+0x0000003Fu; // 800DAD28
  c->lr=0x800DAD30u; f_800C2CFC(c); // 800DAD2C
  c->r[31]=c->r[3]|c->r[3]; // 800DAD30
  cmps(c,0,(int32_t)c->r[3],0); // 800DAD34
  if (crb(c,2)) { goto L_800DAD60; } // 800DAD38
  c->lr=0x800DAD40u; f_800A23BC(c); // 800DAD3C
  c->lr=0x800DAD44u; f_800E2E74(c); // 800DAD40
  c->r[5]=c->r[3]|c->r[3]; // 800DAD44
  c->r[3]=c->r[1]+0x00000008u; // 800DAD48
  c->r[4]=c->r[13]+0xFFFF8958u; // 800DAD4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DAD50
  c->lr=0x800DAD58u; f_802E7CC4(c); // 800DAD54
  c->r[0]=R8(c->r[1]+0x00000008u); // 800DAD58
  W8(c->r[31]+0x00000000u,c->r[0]); // 800DAD5C
L_800DAD60:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAD60
L_800DAD64:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DAD64
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DAD68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAD6C
  c->lr=c->r[0]; // 800DAD70
  c->r[1]=c->r[1]+0x00000020u; // 800DAD74
  return; // 800DAD78
}

// fn_800DAD7C
void f_800DAD7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAD7C
  c->r[0]=c->lr; // 800DAD80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAD84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DAD88
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DAD8C
  c->r[5]=c->r[3]|c->r[3]; // 800DAD90
  c->r[3]=0u+0x804C0000u; // 800DAD94
  c->r[30]=c->r[3]+0x00002650u; // 800DAD98
  c->r[3]=c->r[30]|c->r[30]; // 800DAD9C
  c->r[4]=c->r[13]+0xFFFF8854u; // 800DADA0
  c->r[5]=c->r[5]+0x00000098u; // 800DADA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DADA8
  c->lr=0x800DADB0u; f_802E7CC4(c); // 800DADAC
  c->r[3]=c->r[30]|c->r[30]; // 800DADB0
  c->lr=0x800DADB8u; f_802F0250(c); // 800DADB4
  cmps(c,0,(int32_t)c->r[3],0); // 800DADB8
  if (!crb(c,2)) { goto L_800DADC8; } // 800DADBC
  c->r[3]=0u+0x00000000u; // 800DADC0
  goto L_800DAE08; // 800DADC4
L_800DADC8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DADC8
  c->r[4]=0u+0x0000003Fu; // 800DADCC
  c->lr=0x800DADD4u; f_800C2CFC(c); // 800DADD0
  c->r[31]=c->r[3]|c->r[3]; // 800DADD4
  cmps(c,0,(int32_t)c->r[3],0); // 800DADD8
  if (crb(c,2)) { goto L_800DAE04; } // 800DADDC
  c->lr=0x800DADE4u; f_800A23BC(c); // 800DADE0
  c->lr=0x800DADE8u; f_800E2E74(c); // 800DADE4
  c->r[5]=c->r[3]|c->r[3]; // 800DADE8
  c->r[3]=c->r[1]+0x00000008u; // 800DADEC
  c->r[4]=c->r[13]+0xFFFF8958u; // 800DADF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DADF4
  c->lr=0x800DADFCu; f_802E7CC4(c); // 800DADF8
  c->r[0]=R8(c->r[1]+0x00000008u); // 800DADFC
  W8(c->r[31]+0x00000000u,c->r[0]); // 800DAE00
L_800DAE04:;
  c->r[3]=c->r[30]|c->r[30]; // 800DAE04
L_800DAE08:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DAE08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DAE0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAE10
  c->lr=c->r[0]; // 800DAE14
  c->r[1]=c->r[1]+0x00000020u; // 800DAE18
  return; // 800DAE1C
}

// fn_800DAE20
void f_800DAE20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE20
  c->r[0]=c->lr; // 800DAE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE28
  c->lr=0x800DAE30u; f_800A23BC(c); // 800DAE2C
  c->lr=0x800DAE34u; f_800A23B4(c); // 800DAE30
  c->lr=0x800DAE38u; f_800DED50(c); // 800DAE34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAE38
  c->lr=c->r[0]; // 800DAE3C
  c->r[1]=c->r[1]+0x00000010u; // 800DAE40
  return; // 800DAE44
}

// fn_800DAE48
void f_800DAE48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE48
  c->r[0]=c->lr; // 800DAE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE50
  c->lr=0x800DAE58u; f_800A23BC(c); // 800DAE54
  c->lr=0x800DAE5Cu; f_800A23B4(c); // 800DAE58
  c->lr=0x800DAE60u; f_800DEEB8(c); // 800DAE5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAE60
  c->lr=c->r[0]; // 800DAE64
  c->r[1]=c->r[1]+0x00000010u; // 800DAE68
  return; // 800DAE6C
}

// fn_800DAE70
void f_800DAE70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE70
  c->r[0]=c->lr; // 800DAE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE78
  c->lr=0x800DAE80u; f_800A23BC(c); // 800DAE7C
  c->lr=0x800DAE84u; f_800A23B4(c); // 800DAE80
  c->lr=0x800DAE88u; f_800DF624(c); // 800DAE84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAE88
  c->lr=c->r[0]; // 800DAE8C
  c->r[1]=c->r[1]+0x00000010u; // 800DAE90
  return; // 800DAE94
}

// fn_800DAE98
void f_800DAE98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE98
  c->r[0]=c->lr; // 800DAE9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAEA0
  c->lr=0x800DAEA8u; f_800A23BC(c); // 800DAEA4
  c->lr=0x800DAEACu; f_800A23B4(c); // 800DAEA8
  c->lr=0x800DAEB0u; f_800DFA58(c); // 800DAEAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAEB0
  c->lr=c->r[0]; // 800DAEB4
  c->r[1]=c->r[1]+0x00000010u; // 800DAEB8
  return; // 800DAEBC
}

// fn_800DAEC0
void f_800DAEC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAEC0
  c->r[0]=c->lr; // 800DAEC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAEC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DAECC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DAED0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DAED4
  c->lr=0x800DAEDCu; f_800BEDE0(c); // 800DAED8
  c->r[30]=c->r[3]|c->r[3]; // 800DAEDC
  c->lr=0x800DAEE4u; f_800A23BC(c); // 800DAEE0
  c->lr=0x800DAEE8u; f_800A23B4(c); // 800DAEE4
  c->r[4]=c->r[30]|c->r[30]; // 800DAEE8
  c->lr=0x800DAEF0u; f_800BEDA0(c); // 800DAEEC
  c->lr=0x800DAEF4u; f_800DACD8(c); // 800DAEF0
  c->r[29]=c->r[3]|c->r[3]; // 800DAEF4
  c->lr=0x800DAEFCu; f_800A23BC(c); // 800DAEF8
  c->lr=0x800DAF00u; f_800A23B4(c); // 800DAEFC
  c->r[4]=c->r[30]|c->r[30]; // 800DAF00
  c->lr=0x800DAF08u; f_800BEDA0(c); // 800DAF04
  c->lr=0x800DAF0Cu; f_800CF580(c); // 800DAF08
  cmps(c,0,(int32_t)c->r[3],5); // 800DAF0C
  if (!crb(c,2)) { goto L_800DAF30; } // 800DAF10
  c->lr=0x800DAF18u; f_800A23BC(c); // 800DAF14
  c->lr=0x800DAF1Cu; f_800A23B4(c); // 800DAF18
  c->r[4]=c->r[30]|c->r[30]; // 800DAF1C
  c->lr=0x800DAF24u; f_800BEDA0(c); // 800DAF20
  c->lr=0x800DAF28u; f_800CF5EC(c); // 800DAF24
  cmps(c,0,(int32_t)c->r[3],4); // 800DAF28
  if (!crb(c,2)) { goto L_800DAF80; } // 800DAF2C
L_800DAF30:;
  c->r[3]=0u+0x80460000u; // 800DAF30
  c->r[31]=c->r[3]+0x000006C0u; // 800DAF34
  goto L_800DAF74; // 800DAF38
L_800DAF3C:;
  c->lr=0x800DAF40u; f_800A23BC(c); // 800DAF3C
  c->lr=0x800DAF44u; f_800BB7F0(c); // 800DAF40
  c->r[4]=c->r[30]|c->r[30]; // 800DAF44
  c->r[5]=0u+0x00000000u; // 800DAF48
  c->lr=0x800DAF50u; f_800C2C24(c); // 800DAF4C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAF50
  if (!crb(c,2)) { goto L_800DAF70; } // 800DAF54
  c->lr=0x800DAF5Cu; f_800A23BC(c); // 800DAF58
  c->lr=0x800DAF60u; f_800BB7F0(c); // 800DAF5C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800DAF60
  c->r[5]=R32(c->r[31]+0x00000004u); // 800DAF64
  c->r[6]=0u+0x00000001u; // 800DAF68
  c->lr=0x800DAF70u; f_800C29FC(c); // 800DAF6C
L_800DAF70:;
  c->r[31]=c->r[31]+0x00000008u; // 800DAF70
L_800DAF74:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 800DAF74
  cmps(c,0,(int32_t)c->r[30],0); // 800DAF78
  if (!crb(c,2)) { IRQCHK(c); goto L_800DAF3C; } // 800DAF7C
L_800DAF80:;
  c->lr=0x800DAF84u; f_800A23BC(c); // 800DAF80
  c->lr=0x800DAF88u; f_800BB7F0(c); // 800DAF84
  c->r[4]=c->r[29]|c->r[29]; // 800DAF88
  c->r[5]=0u+0x00000005u; // 800DAF8C
  c->r[6]=0u+0x00000001u; // 800DAF90
  c->lr=0x800DAF98u; f_800C29FC(c); // 800DAF94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DAF98
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DAF9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DAFA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAFA4
  c->lr=c->r[0]; // 800DAFA8
  c->r[1]=c->r[1]+0x00000020u; // 800DAFAC
  return; // 800DAFB0
}

// fn_800DAFB4
void f_800DAFB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAFB4
  c->r[0]=c->lr; // 800DAFB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAFBC
  c->lr=0x800DAFC4u; f_800A23BC(c); // 800DAFC0
  c->lr=0x800DAFC8u; f_800BB7F0(c); // 800DAFC4
  c->lr=0x800DAFCCu; f_800C2B94(c); // 800DAFC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAFCC
  c->lr=c->r[0]; // 800DAFD0
  c->r[1]=c->r[1]+0x00000010u; // 800DAFD4
  return; // 800DAFD8
}

// fn_800DAFDC
void f_800DAFDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAFDC
  c->r[0]=c->lr; // 800DAFE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DAFE4
  c->r[11]=c->r[1]+0x00000030u; // 800DAFE8
  c->lr=0x800DAFF0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DAFEC
  c->r[30]=c->r[3]|c->r[3]; // 800DAFF0
  c->r[31]=c->r[4]|c->r[4]; // 800DAFF4
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 800DAFF8
  cmps(c,0,(int32_t)c->r[0],0); // 800DAFFC
  if (crb(c,2)) { goto L_800DB168; } // 800DB000
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800DB004
  c->lr=0x800DB00Cu; f_800BEDE0(c); // 800DB008
  c->r[27]=c->r[3]|c->r[3]; // 800DB00C
  c->lr=0x800DB014u; f_800A23BC(c); // 800DB010
  c->lr=0x800DB018u; f_800A23B4(c); // 800DB014
  c->r[4]=c->r[27]|c->r[27]; // 800DB018
  c->lr=0x800DB020u; f_800BEDA0(c); // 800DB01C
  c->lr=0x800DB024u; f_800CF580(c); // 800DB020
  c->r[29]=c->r[3]|c->r[3]; // 800DB024
  c->r[3]=c->r[30]|c->r[30]; // 800DB028
  c->r[4]=R32(c->r[30]+0x00000040u); // 800DB02C
  c->lr=0x800DB034u; f_800BEDE0(c); // 800DB030
  c->r[27]=c->r[3]|c->r[3]; // 800DB034
  c->lr=0x800DB03Cu; f_800A23BC(c); // 800DB038
  c->lr=0x800DB040u; f_800A23B4(c); // 800DB03C
  c->r[4]=c->r[27]|c->r[27]; // 800DB040
  c->lr=0x800DB048u; f_800BEDA0(c); // 800DB044
  c->lr=0x800DB04Cu; f_800CF580(c); // 800DB048
  cmps(c,0,(int32_t)c->r[3],2); // 800DB04C
  if (crb(c,2)) { goto L_800DB168; } // 800DB050
  c->r[25]=0u+0x00000000u; // 800DB054
  cmps(c,0,(int32_t)c->r[29],1); // 800DB058
  if (!crb(c,2)) { goto L_800DB06C; } // 800DB05C
  cmps(c,0,(int32_t)c->r[3],1); // 800DB060
  if (!crb(c,2)) { goto L_800DB06C; } // 800DB064
  c->r[25]=0u+0x00000001u; // 800DB068
L_800DB06C:;
  cmps(c,0,(int32_t)c->r[3],4); // 800DB06C
  if (!crb(c,2)) { goto L_800DB078; } // 800DB070
  c->r[25]=0u+0x00000001u; // 800DB074
L_800DB078:;
  cmps(c,0,(int32_t)c->r[3],5); // 800DB078
  if (!crb(c,2)) { goto L_800DB084; } // 800DB07C
  c->r[25]=0u+0x00000001u; // 800DB080
L_800DB084:;
  cmps(c,0,(int32_t)c->r[3],3); // 800DB084
  if (!crb(c,2)) { goto L_800DB090; } // 800DB088
  c->r[25]=0u+0x00000001u; // 800DB08C
L_800DB090:;
  c->r[26]=0u+0x00000000u; // 800DB090
  c->r[27]=c->r[30]+0x000000ECu; // 800DB094
  c->r[28]=c->r[27]|c->r[27]; // 800DB098
  c->r[29]=0u+0x00000000u; // 800DB09C
  goto L_800DB108; // 800DB0A0
L_800DB0A4:;
  c->lr=0x800DB0A8u; f_800A23BC(c); // 800DB0A4
  c->lr=0x800DB0ACu; f_800BB7F0(c); // 800DB0A8
  c->r[4]=R32(c->r[28]+0x00000000u); // 800DB0AC
  c->lr=0x800DB0B4u; f_800C1808(c); // 800DB0B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB0B4
  if (!crb(c,2)) { goto L_800DB0C8; } // 800DB0B8
  W32(c->r[28]+0x00000000u,c->r[29]); // 800DB0BC
  W32(c->r[28]+0x00000004u,c->r[29]); // 800DB0C0
  goto L_800DB100; // 800DB0C4
L_800DB0C8:;
  cmps(c,0,(int32_t)c->r[25],0); // 800DB0C8
  if (!crb(c,2)) { goto L_800DB0E0; } // 800DB0CC
  c->r[3]=R32(c->r[28]+0x00000004u); // 800DB0D0
  c->r[0]=R32(c->r[30]+0x00000040u); // 800DB0D4
  cmpu(c,0,c->r[3],c->r[0]); // 800DB0D8
  if (crb(c,2)) { goto L_800DB100; } // 800DB0DC
L_800DB0E0:;
  c->lr=0x800DB0E4u; f_800A23BC(c); // 800DB0E0
  c->lr=0x800DB0E8u; f_800BB7F0(c); // 800DB0E4
  c->r[4]=R32(c->r[28]+0x00000000u); // 800DB0E8
  c->lr=0x800DB0F0u; f_800BBE24(c); // 800DB0EC
  c->r[4]=0u+0x00000000u; // 800DB0F0
  c->lr=0x800DB0F8u; f_800BE370(c); // 800DB0F4
  W32(c->r[28]+0x00000000u,c->r[29]); // 800DB0F8
  W32(c->r[28]+0x00000004u,c->r[29]); // 800DB0FC
L_800DB100:;
  c->r[28]=c->r[28]+0x00000008u; // 800DB100
  c->r[26]=c->r[26]+0x00000001u; // 800DB104
L_800DB108:;
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 800DB108
  cmpu(c,0,c->r[26],c->r[0]); // 800DB10C
  if (crb(c,0)) { IRQCHK(c); goto L_800DB0A4; } // 800DB110
  c->r[25]=0u+0x00000000u; // 800DB114
  c->r[29]=0u+0x00000000u; // 800DB118
  c->r[28]=c->r[30]+0x000000ECu; // 800DB11C
  goto L_800DB158; // 800DB120
L_800DB124:;
  c->lr=0x800DB128u; f_800A23BC(c); // 800DB124
  c->lr=0x800DB12Cu; f_800BB7F0(c); // 800DB128
  c->r[4]=R32(c->r[27]+0x00000000u); // 800DB12C
  c->lr=0x800DB134u; f_800C1808(c); // 800DB130
  cmps(c,0,(int32_t)c->r[3],0); // 800DB134
  if (crb(c,2)) { goto L_800DB150; } // 800DB138
  c->r[3]=c->r[28]|c->r[28]; // 800DB13C
  c->r[4]=c->r[27]|c->r[27]; // 800DB140
  c->lr=0x800DB148u; f_800DB3BC(c); // 800DB144
  c->r[28]=c->r[28]+0x00000008u; // 800DB148
  c->r[25]=c->r[25]+0x00000001u; // 800DB14C
L_800DB150:;
  c->r[27]=c->r[27]+0x00000008u; // 800DB150
  c->r[29]=c->r[29]+0x00000001u; // 800DB154
L_800DB158:;
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 800DB158
  cmpu(c,0,c->r[29],c->r[0]); // 800DB15C
  if (crb(c,0)) { IRQCHK(c); goto L_800DB124; } // 800DB160
  W32(c->r[30]+0x0000016Cu,c->r[25]); // 800DB164
L_800DB168:;
  c->r[27]=0u+0x00000000u; // 800DB168
  c->r[28]=c->r[30]+0x0000199Cu; // 800DB16C
  goto L_800DB184; // 800DB170
L_800DB174:;
  c->r[3]=c->r[28]|c->r[28]; // 800DB174
  c->lr=0x800DB17Cu; f_800D58E0(c); // 800DB178
  c->r[28]=c->r[28]+0x00000050u; // 800DB17C
  c->r[27]=c->r[27]+0x00000001u; // 800DB180
L_800DB184:;
  c->r[0]=R32(c->r[30]+0x00001E9Cu); // 800DB184
  cmpu(c,0,c->r[27],c->r[0]); // 800DB188
  if (crb(c,0)) { IRQCHK(c); goto L_800DB174; } // 800DB18C
  c->r[27]=0u+0x00000000u; // 800DB190
  c->r[29]=c->r[30]+0x0000153Cu; // 800DB194
  c->r[28]=c->r[30]+0x0000177Cu; // 800DB198
  goto L_800DB1BC; // 800DB19C
L_800DB1A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800DB1A0
  c->lr=0x800DB1A8u; f_800D43C0(c); // 800DB1A4
  c->r[3]=c->r[28]|c->r[28]; // 800DB1A8
  c->lr=0x800DB1B0u; f_800D49D8(c); // 800DB1AC
  c->r[29]=c->r[29]+0x00000048u; // 800DB1B0
  c->r[28]=c->r[28]+0x00000034u; // 800DB1B4
  c->r[27]=c->r[27]+0x00000001u; // 800DB1B8
L_800DB1BC:;
  c->r[0]=R32(c->r[30]+0x0000191Cu); // 800DB1BC
  cmpu(c,0,c->r[27],c->r[0]); // 800DB1C0
  if (crb(c,0)) { IRQCHK(c); goto L_800DB1A0; } // 800DB1C4
  c->r[0]=R32(c->r[30]+0x0000195Cu); // 800DB1C8
  cmps(c,0,(int32_t)c->r[0],0); // 800DB1CC
  if (crb(c,2)) { goto L_800DB1DC; } // 800DB1D0
  c->r[3]=c->r[30]+0x00001934u; // 800DB1D4
  c->lr=0x800DB1DCu; f_800D3E38(c); // 800DB1D8
L_800DB1DC:;
  c->r[29]=0u+0x00000000u; // 800DB1DC
  W32(c->r[30]+0x00000570u,c->r[29]); // 800DB1E0
  W32(c->r[30]+0x0000195Cu,c->r[29]); // 800DB1E4
  W32(c->r[30]+0x0000191Cu,c->r[29]); // 800DB1E8
  W32(c->r[30]+0x00001090u,c->r[29]); // 800DB1EC
  W32(c->r[30]+0x00001098u,c->r[29]); // 800DB1F0
  W32(c->r[30]+0x00000F48u,c->r[29]); // 800DB1F4
  W32(c->r[30]+0x00001E9Cu,c->r[29]); // 800DB1F8
  W32(c->r[30]+0x00001960u,c->r[29]); // 800DB1FC
  W32(c->r[30]+0x00000088u,c->r[29]); // 800DB200
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB204
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800DB208
  c->r[0]=0u+0xFFFFFFFFu; // 800DB20C
  W32(c->r[30]+0x00000090u,c->r[0]); // 800DB210
  c->r[3]=c->r[30]+0x00001EA0u; // 800DB214
  c->r[4]=0u+0x804C0000u; // 800DB218
  c->r[4]=c->r[4]+0x000024A0u; // 800DB21C
  c->lr=0x800DB224u; f_8004A65C(c); // 800DB220
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB224
  {uint32_t ea=c->r[30]+0x00001EACu; WF32(ea,c->f[0]);} // 800DB228
  cmps(c,0,(int32_t)c->r[31],0); // 800DB22C
  if (crb(c,2)) { goto L_800DB238; } // 800DB230
  goto L_800DB244; // 800DB234
L_800DB238:;
  c->lr=0x800DB23Cu; f_800A23BC(c); // 800DB238
  c->lr=0x800DB240u; f_800C23E4(c); // 800DB23C
  c->r[29]=c->r[3]|c->r[3]; // 800DB240
L_800DB244:;
  c->lr=0x800DB248u; f_80078B6C(c); // 800DB244
  c->r[4]=0u+0x00000000u; // 800DB248
  c->lr=0x800DB250u; f_8018F910(c); // 800DB24C
  c->lr=0x800DB254u; f_800A23BC(c); // 800DB250
  c->lr=0x800DB258u; f_800C23AC(c); // 800DB254
  c->r[4]=0u+0x00000000u; // 800DB258
  c->lr=0x800DB260u; f_800CB680(c); // 800DB25C
  c->lr=0x800DB264u; f_800A23BC(c); // 800DB260
  c->lr=0x800DB268u; f_800BB828(c); // 800DB264
  c->lr=0x800DB26Cu; f_800E1D90(c); // 800DB268
  c->lr=0x800DB270u; f_800A23BC(c); // 800DB26C
  c->lr=0x800DB274u; f_800BB818(c); // 800DB270
  c->lr=0x800DB278u; f_800D3CE4(c); // 800DB274
  c->lr=0x800DB27Cu; f_800A23BC(c); // 800DB278
  c->lr=0x800DB280u; f_800A23C4(c); // 800DB27C
  c->lr=0x800DB284u; f_800D8800(c); // 800DB280
  c->lr=0x800DB288u; f_800A23BC(c); // 800DB284
  c->lr=0x800DB28Cu; f_800BB820(c); // 800DB288
  c->lr=0x800DB290u; f_800D08B0(c); // 800DB28C
  c->lr=0x800DB294u; f_800A23BC(c); // 800DB290
  c->lr=0x800DB298u; f_800BB818(c); // 800DB294
  c->lr=0x800DB29Cu; f_800D3C3C(c); // 800DB298
  c->lr=0x800DB2A0u; f_800A23BC(c); // 800DB29C
  c->lr=0x800DB2A4u; f_800A23C8(c); // 800DB2A0
  c->lr=0x800DB2A8u; f_800CE704(c); // 800DB2A4
  c->lr=0x800DB2ACu; f_800A23BC(c); // 800DB2A8
  c->lr=0x800DB2B0u; f_800A23C8(c); // 800DB2AC
  c->r[4]=0u+0x00000000u; // 800DB2B0
  c->r[5]=0u+0x00000001u; // 800DB2B4
  c->lr=0x800DB2BCu; f_800BFF7C(c); // 800DB2B8
  c->lr=0x800DB2C0u; f_800A23BC(c); // 800DB2BC
  c->lr=0x800DB2C4u; f_800BB820(c); // 800DB2C0
  c->r[4]=0u+0x00000000u; // 800DB2C4
  c->r[5]=0u+0x00000001u; // 800DB2C8
  c->lr=0x800DB2D0u; f_800BF124(c); // 800DB2CC
  c->lr=0x800DB2D4u; f_800A23BC(c); // 800DB2D0
  c->lr=0x800DB2D8u; f_800BB810(c); // 800DB2D4
  c->r[4]=0u+0x00000000u; // 800DB2D8
  c->r[5]=0u+0x00000001u; // 800DB2DC
  c->lr=0x800DB2E4u; f_800BF5DC(c); // 800DB2E0
  c->lr=0x800DB2E8u; f_800A23BC(c); // 800DB2E4
  c->lr=0x800DB2ECu; f_800BB808(c); // 800DB2E8
  c->r[4]=0u+0x00000000u; // 800DB2EC
  c->r[5]=0u+0x00000001u; // 800DB2F0
  c->lr=0x800DB2F8u; f_800C0ABC(c); // 800DB2F4
  c->lr=0x800DB2FCu; f_800A23BC(c); // 800DB2F8
  c->lr=0x800DB300u; f_800BB828(c); // 800DB2FC
  c->r[4]=0u+0x00000000u; // 800DB300
  c->r[5]=0u+0x00000001u; // 800DB304
  c->lr=0x800DB30Cu; f_800BE758(c); // 800DB308
  c->lr=0x800DB310u; f_800A23BC(c); // 800DB30C
  c->lr=0x800DB314u; f_800BB800(c); // 800DB310
  c->r[4]=0u+0x00000000u; // 800DB314
  c->r[5]=0u+0x00000001u; // 800DB318
  c->lr=0x800DB320u; f_800C1038(c); // 800DB31C
  c->lr=0x800DB324u; f_800A23BC(c); // 800DB320
  c->lr=0x800DB328u; f_800C23AC(c); // 800DB324
  c->r[4]=0u+0x00000000u; // 800DB328
  c->r[5]=0u+0x00000001u; // 800DB32C
  c->lr=0x800DB334u; f_800C04F8(c); // 800DB330
  c->lr=0x800DB338u; f_800A23BC(c); // 800DB334
  c->lr=0x800DB33Cu; f_800C23B4(c); // 800DB338
  c->r[4]=0u+0x00000000u; // 800DB33C
  c->r[5]=0u+0x00000001u; // 800DB340
  c->lr=0x800DB348u; f_800BFA54(c); // 800DB344
  c->lr=0x800DB34Cu; f_800A23BC(c); // 800DB348
  c->lr=0x800DB350u; f_800BB7F0(c); // 800DB34C
  c->r[4]=c->r[29]|c->r[29]; // 800DB350
  c->r[5]=0u+0x00000001u; // 800DB354
  c->lr=0x800DB35Cu; f_800C15BC(c); // 800DB358
  c->lr=0x800DB360u; f_800A23BC(c); // 800DB35C
  c->r[4]=0u+0x00000000u; // 800DB360
  c->lr=0x800DB368u; f_800E3050(c); // 800DB364
  cmps(c,0,(int32_t)c->r[3],0); // 800DB368
  if (crb(c,2)) { goto L_800DB380; } // 800DB36C
  c->lr=0x800DB374u; f_800A23BC(c); // 800DB370
  c->r[4]=0u+0x00000000u; // 800DB374
  c->lr=0x800DB37Cu; f_800E3050(c); // 800DB378
  c->lr=0x800DB380u; f_80056828(c); // 800DB37C
L_800DB380:;
  c->lr=0x800DB384u; f_800A23BC(c); // 800DB380
  c->r[4]=0u+0x00000001u; // 800DB384
  c->lr=0x800DB38Cu; f_800E3050(c); // 800DB388
  cmps(c,0,(int32_t)c->r[3],0); // 800DB38C
  if (crb(c,2)) { goto L_800DB3A4; } // 800DB390
  c->lr=0x800DB398u; f_800A23BC(c); // 800DB394
  c->r[4]=0u+0x00000001u; // 800DB398
  c->lr=0x800DB3A0u; f_800E3050(c); // 800DB39C
  c->lr=0x800DB3A4u; f_80056828(c); // 800DB3A0
L_800DB3A4:;
  c->r[11]=c->r[1]+0x00000030u; // 800DB3A4
  c->lr=0x800DB3ACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DB3A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DB3AC
  c->lr=c->r[0]; // 800DB3B0
  c->r[1]=c->r[1]+0x00000030u; // 800DB3B4
  return; // 800DB3B8
}

// fn_800DB3BC
void f_800DB3BC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DB3BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DB3C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DB3C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DB3C8
  return; // 800DB3CC
}

// fn_800DB3D0
void f_800DB3D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB3D0
  c->r[0]=c->lr; // 800DB3D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB3D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB3DC
  c->r[4]=R32(c->r[3]+0x00000040u); // 800DB3E0
  c->lr=0x800DB3E8u; f_800BEDE0(c); // 800DB3E4
  c->r[31]=c->r[3]|c->r[3]; // 800DB3E8
  c->lr=0x800DB3F0u; f_800A23BC(c); // 800DB3EC
  c->lr=0x800DB3F4u; f_800A23B4(c); // 800DB3F0
  c->r[4]=c->r[31]|c->r[31]; // 800DB3F4
  c->lr=0x800DB3FCu; f_800BEDA0(c); // 800DB3F8
  c->lr=0x800DB400u; f_800DAD7C(c); // 800DB3FC
  c->r[31]=c->r[3]|c->r[3]; // 800DB400
  c->lr=0x800DB408u; f_800A23BC(c); // 800DB404
  c->lr=0x800DB40Cu; f_800BB7F0(c); // 800DB408
  c->r[4]=c->r[31]|c->r[31]; // 800DB40C
  c->r[5]=c->r[1]+0x00000008u; // 800DB410
  c->lr=0x800DB418u; f_800C2C24(c); // 800DB414
  c->r[3]=R32(c->r[1]+0x00000008u); // 800DB418
  c->lr=0x800DB420u; f_8006E4DC(c); // 800DB41C
  c->r[31]=c->r[3]|c->r[3]; // 800DB420
  c->lr=0x800DB428u; f_800A23BC(c); // 800DB424
  c->lr=0x800DB42Cu; f_800A23C8(c); // 800DB428
  c->r[4]=c->r[31]|c->r[31]; // 800DB42C
  c->lr=0x800DB434u; f_800CE5C0(c); // 800DB430
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB434
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB438
  c->lr=c->r[0]; // 800DB43C
  c->r[1]=c->r[1]+0x00000020u; // 800DB440
  return; // 800DB444
}

// fn_800DB448
void f_800DB448(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB448
  c->r[0]=c->lr; // 800DB44C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800DB450
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800DB454
  W32(c->r[1]+0x00000058u,c->r[30]); // 800DB458
  c->r[30]=c->r[4]|c->r[4]; // 800DB45C
  c->r[6]=c->r[1]+0x00000004u; // 800DB460
  c->r[4]=0u+0x80430000u; // 800DB464
  c->r[4]=c->r[4]+0xFFFFD990u; // 800DB468
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 800DB46C
  c->r[0]=0u+0x00000009u; // 800DB470
  c->ctr=c->r[0]; // 800DB474
L_800DB478:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800DB478
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800DB47C
  W32(c->r[6]+0x00000004u,c->r[4]); // 800DB480
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800DB484
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DB478; } // 800DB488
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800DB48C
  c->lr=0x800DB494u; f_800BEDE0(c); // 800DB490
  c->r[31]=c->r[3]|c->r[3]; // 800DB494
  cmps(c,0,(int32_t)c->r[3],0); // 800DB498
  if (!crb(c,2)) { goto L_800DB4A8; } // 800DB49C
  c->r[3]=0u+0x00000000u; // 800DB4A0
  goto L_800DB5A4; // 800DB4A4
L_800DB4A8:;
  c->lr=0x800DB4ACu; f_800A23BC(c); // 800DB4A8
  c->lr=0x800DB4B0u; f_800A23B4(c); // 800DB4AC
  c->r[4]=c->r[31]|c->r[31]; // 800DB4B0
  c->lr=0x800DB4B8u; f_800BEDA0(c); // 800DB4B4
  c->lr=0x800DB4BCu; f_800CF580(c); // 800DB4B8
  cmps(c,0,(int32_t)c->r[3],1); // 800DB4BC
  if (!crb(c,0)) { goto L_800DB4CC; } // 800DB4C0
  c->r[3]=0u+0x00000000u; // 800DB4C4
  goto L_800DB5A4; // 800DB4C8
L_800DB4CC:;
  cmps(c,0,(int32_t)c->r[3],5); // 800DB4CC
  if (!crb(c,1)) { goto L_800DB4DC; } // 800DB4D0
  c->r[3]=0u+0x00000000u; // 800DB4D4
  goto L_800DB5A4; // 800DB4D8
L_800DB4DC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800DB4DC
  c->r[0]=c->r[1]+0x00000008u; // 800DB4E0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800DB4E4
  c->r[0]=c->r[0]+c->r[4]; // 800DB4E8
  c->r[0]=R32(c->r[3]+c->r[0]); // 800DB4EC
  cmps(c,0,(int32_t)c->r[0],0); // 800DB4F0
  if (!crb(c,2)) { goto L_800DB500; } // 800DB4F4
  c->r[3]=0u+0x00000000u; // 800DB4F8
  goto L_800DB5A4; // 800DB4FC
L_800DB500:;
  cmps(c,0,(int32_t)c->r[30],1); // 800DB500
  if (crb(c,2)) { goto L_800DB53C; } // 800DB504
  if (!crb(c,0)) { goto L_800DB5A0; } // 800DB508
  cmps(c,0,(int32_t)c->r[30],0); // 800DB50C
  if (!crb(c,0)) { goto L_800DB518; } // 800DB510
  goto L_800DB5A0; // 800DB514
L_800DB518:;
  c->lr=0x800DB51Cu; f_800A23BC(c); // 800DB518
  c->lr=0x800DB520u; f_800A23B4(c); // 800DB51C
  c->r[4]=c->r[31]|c->r[31]; // 800DB520
  c->lr=0x800DB528u; f_800BEDA0(c); // 800DB524
  c->lr=0x800DB52Cu; f_800CF5E4(c); // 800DB528
  c->r[0]=0u-c->r[3]; // 800DB52C
  c->r[0]=c->r[0]|c->r[3]; // 800DB530
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DB534
  goto L_800DB5A4; // 800DB538
L_800DB53C:;
  c->lr=0x800DB540u; f_800A23BC(c); // 800DB53C
  c->lr=0x800DB544u; f_800A23C4(c); // 800DB540
  c->r[4]=0u+0x00000002u; // 800DB544
  c->r[5]=0u+0x000000FAu; // 800DB548
  c->lr=0x800DB550u; f_800D8A64(c); // 800DB54C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB550
  if (crb(c,2)) { goto L_800DB598; } // 800DB554
  c->lr=0x800DB55Cu; f_800A23BC(c); // 800DB558
  c->lr=0x800DB560u; f_800A23C4(c); // 800DB55C
  c->r[4]=0u+0xFFFFFFFFu; // 800DB560
  c->lr=0x800DB568u; f_800D89D4(c); // 800DB564
  cmps(c,0,(int32_t)c->r[3],0); // 800DB568
  if (crb(c,2)) { goto L_800DB590; } // 800DB56C
  c->lr=0x800DB574u; f_800A23BC(c); // 800DB570
  c->lr=0x800DB578u; f_800A23C4(c); // 800DB574
  c->r[4]=0u+0x00000004u; // 800DB578
  c->lr=0x800DB580u; f_800D89D4(c); // 800DB57C
  c->r[0]=0u-c->r[3]; // 800DB580
  c->r[0]=c->r[0]|c->r[3]; // 800DB584
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DB588
  goto L_800DB5A4; // 800DB58C
L_800DB590:;
  c->r[3]=0u+0x00000001u; // 800DB590
  goto L_800DB5A4; // 800DB594
L_800DB598:;
  c->r[3]=0u+0x00000000u; // 800DB598
  goto L_800DB5A4; // 800DB59C
L_800DB5A0:;
  c->r[3]=0u+0x00000000u; // 800DB5A0
L_800DB5A4:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800DB5A4
  c->r[30]=R32(c->r[1]+0x00000058u); // 800DB5A8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800DB5AC
  c->lr=c->r[0]; // 800DB5B0
  c->r[1]=c->r[1]+0x00000060u; // 800DB5B4
  return; // 800DB5B8
}

// fn_800DB5BC
void f_800DB5BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB5BC
  c->r[0]=c->lr; // 800DB5C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB5C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB5C8
  c->r[31]=c->r[4]|c->r[4]; // 800DB5CC
  cmps(c,0,(int32_t)c->r[4],0); // 800DB5D0
  if (crb(c,2)) { goto L_800DB5F0; } // 800DB5D4
  c->r[4]=R32(c->r[3]+0x00000094u); // 800DB5D8
  c->r[0]=0u+0x00000001u; // 800DB5DC
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800DB5E0
  c->r[0]=c->r[4]|c->r[0]; // 800DB5E4
  W32(c->r[3]+0x00000094u,c->r[0]); // 800DB5E8
  goto L_800DB608; // 800DB5EC
L_800DB5F0:;
  c->r[4]=R32(c->r[3]+0x00000094u); // 800DB5F0
  c->r[0]=0u+0x00000001u; // 800DB5F4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800DB5F8
  c->r[0]=~(c->r[0]|c->r[0]); // 800DB5FC
  c->r[0]=c->r[4]&c->r[0]; // 800DB600
  W32(c->r[3]+0x00000094u,c->r[0]); // 800DB604
L_800DB608:;
  cmps(c,0,(int32_t)c->r[5],1); // 800DB608
  if (crb(c,2)) { goto L_800DB688; } // 800DB60C
  if (!crb(c,0)) { goto L_800DB620; } // 800DB610
  cmps(c,0,(int32_t)c->r[5],0); // 800DB614
  if (!crb(c,0)) { goto L_800DB62C; } // 800DB618
  goto L_800DB6D4; // 800DB61C
L_800DB620:;
  cmps(c,0,(int32_t)c->r[5],3); // 800DB620
  if (!crb(c,0)) { goto L_800DB6D4; } // 800DB624
  goto L_800DB6B8; // 800DB628
L_800DB62C:;
  c->lr=0x800DB630u; f_8006E268(c); // 800DB62C
  c->lr=0x800DB634u; f_80073690(c); // 800DB630
  cmps(c,0,(int32_t)c->r[3],4); // 800DB634
  if (!crb(c,2)) { goto L_800DB6D4; } // 800DB638
  cmps(c,0,(int32_t)c->r[31],0); // 800DB63C
  if (crb(c,2)) { goto L_800DB66C; } // 800DB640
  c->lr=0x800DB648u; f_801FAD28(c); // 800DB644
  cmps(c,0,(int32_t)c->r[3],0); // 800DB648
  if (!crb(c,2)) { goto L_800DB6D4; } // 800DB64C
  c->r[3]=0u+0x00000000u; // 800DB650
  c->lr=0x800DB658u; f_801FADAC(c); // 800DB654
  c->lr=0x800DB65Cu; f_801FAD54(c); // 800DB658
  c->lr=0x800DB660u; f_801FACC4(c); // 800DB65C
  c->r[3]=0u+0x00000001u; // 800DB660
  c->lr=0x800DB668u; f_801FADAC(c); // 800DB664
  goto L_800DB6D4; // 800DB668
L_800DB66C:;
  c->r[3]=0u+0x00000000u; // 800DB66C
  c->lr=0x800DB674u; f_801FADAC(c); // 800DB670
  c->lr=0x800DB678u; f_801FAD54(c); // 800DB674
  c->lr=0x800DB67Cu; f_801FACFC(c); // 800DB678
  c->r[3]=0u+0x00000001u; // 800DB67C
  c->lr=0x800DB684u; f_801FADAC(c); // 800DB680
  goto L_800DB6D4; // 800DB684
L_800DB688:;
  c->lr=0x800DB68Cu; f_8006E268(c); // 800DB688
  c->lr=0x800DB690u; f_80073690(c); // 800DB68C
  cmps(c,0,(int32_t)c->r[3],4); // 800DB690
  if (!crb(c,2)) { goto L_800DB6D4; } // 800DB694
  cmps(c,0,(int32_t)c->r[31],0); // 800DB698
  if (crb(c,2)) { goto L_800DB6B0; } // 800DB69C
  c->r[3]=0u+0x00000000u; // 800DB6A0
  c->lr=0x800DB6A8u; f_80260AC8(c); // 800DB6A4
  c->lr=0x800DB6ACu; f_80260A64(c); // 800DB6A8
  goto L_800DB6D4; // 800DB6AC
L_800DB6B0:;
  c->lr=0x800DB6B4u; f_80260A9C(c); // 800DB6B0
  goto L_800DB6D4; // 800DB6B4
L_800DB6B8:;
  c->lr=0x800DB6BCu; f_8006E268(c); // 800DB6B8
  c->lr=0x800DB6C0u; f_80073690(c); // 800DB6BC
  cmps(c,0,(int32_t)c->r[3],5); // 800DB6C0
  if (!crb(c,2)) { goto L_800DB6D4; } // 800DB6C4
  cmps(c,0,(int32_t)c->r[31],0); // 800DB6C8
  if (!crb(c,2)) { goto L_800DB6D4; } // 800DB6CC
  c->lr=0x800DB6D4u; f_80193098(c); // 800DB6D0
L_800DB6D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB6D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB6D8
  c->lr=c->r[0]; // 800DB6DC
  c->r[1]=c->r[1]+0x00000010u; // 800DB6E0
  return; // 800DB6E4
}

// fn_800DB6E8
void f_800DB6E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB6E8
  c->r[0]=c->lr; // 800DB6EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DB6F0
  c->r[11]=c->r[1]+0x00000040u; // 800DB6F4
  c->lr=0x800DB6FCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DB6F8
  c->r[29]=c->r[3]|c->r[3]; // 800DB6FC
  c->r[3]=c->r[1]+0x00000014u; // 800DB700
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB704
  c->f[2]=c->f[1]; // 800DB708
  c->f[3]=c->f[1]; // 800DB70C
  c->lr=0x800DB714u; f_8004E34C(c); // 800DB710
  c->r[3]=c->r[1]+0x00000008u; // 800DB714
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB718
  c->f[2]=c->f[1]; // 800DB71C
  c->f[3]=c->f[1]; // 800DB720
  c->lr=0x800DB728u; f_8004E34C(c); // 800DB724
  c->r[0]=0u+0x00000000u; // 800DB728
  W32(c->r[29]+0x00001F00u,c->r[0]); // 800DB72C
  c->lr=0x800DB734u; f_800A23BC(c); // 800DB730
  c->lr=0x800DB738u; f_800A23C4(c); // 800DB734
  c->lr=0x800DB73Cu; f_800BBF6C(c); // 800DB738
  c->r[25]=c->r[3]|c->r[3]; // 800DB73C
  c->lr=0x800DB744u; f_800A23BC(c); // 800DB740
  c->lr=0x800DB748u; f_800BB800(c); // 800DB744
  c->r[4]=c->r[25]|c->r[25]; // 800DB748
  c->lr=0x800DB750u; f_800BBD58(c); // 800DB74C
  c->r[31]=c->r[3]|c->r[3]; // 800DB750
  c->r[4]=c->r[1]+0x00000014u; // 800DB754
  c->lr=0x800DB75Cu; f_800BD664(c); // 800DB758
  c->r[3]=c->r[31]|c->r[31]; // 800DB75C
  c->r[4]=c->r[1]+0x00000008u; // 800DB760
  c->lr=0x800DB768u; f_800BD6C0(c); // 800DB764
  c->r[0]=R32(c->r[29]+0x00000028u); // 800DB768
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800DB76C
  cmps(c,0,(int32_t)c->r[0],0); // 800DB770
  if (crb(c,2)) { goto L_800DB7B4; } // 800DB774
  c->r[3]=c->r[31]|c->r[31]; // 800DB778
  c->r[4]=c->r[29]+0x00001F14u; // 800DB77C
  c->lr=0x800DB784u; f_800BCDE8(c); // 800DB780
  c->r[3]=c->r[31]|c->r[31]; // 800DB784
  c->r[4]=c->r[29]+0x00001F20u; // 800DB788
  c->lr=0x800DB790u; f_800BD0E8(c); // 800DB78C
  c->r[3]=c->r[31]|c->r[31]; // 800DB790
  c->r[4]=0u+0x00000001u; // 800DB794
  c->lr=0x800DB79Cu; f_800BB958(c); // 800DB798
  c->r[0]=R32(c->r[29]+0x00000028u); // 800DB79C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800DB7A0
  W32(c->r[29]+0x00000028u,c->r[0]); // 800DB7A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800DB7A8
  W32(c->r[29]+0x00000028u,c->r[0]); // 800DB7AC
  goto L_800DBAF8; // 800DB7B0
L_800DB7B4:;
  c->lr=0x800DB7B8u; f_800A23BC(c); // 800DB7B4
  c->lr=0x800DB7BCu; f_800A23B4(c); // 800DB7B8
  c->lr=0x800DB7C0u; f_800CF630(c); // 800DB7BC
  c->r[30]=c->r[3]|c->r[3]; // 800DB7C0
  c->lr=0x800DB7C8u; f_800A23BC(c); // 800DB7C4
  c->lr=0x800DB7CCu; f_800A23B4(c); // 800DB7C8
  c->lr=0x800DB7D0u; f_800CF5F4(c); // 800DB7CC
  c->r[24]=c->r[3]|c->r[3]; // 800DB7D0
  c->lr=0x800DB7D8u; f_800A23BC(c); // 800DB7D4
  c->lr=0x800DB7DCu; f_800A23B4(c); // 800DB7D8
  c->r[4]=c->r[24]|c->r[24]; // 800DB7DC
  c->lr=0x800DB7E4u; f_800BEDE0(c); // 800DB7E0
  c->r[24]=c->r[3]|c->r[3]; // 800DB7E4
  c->lr=0x800DB7ECu; f_800A23BC(c); // 800DB7E8
  c->lr=0x800DB7F0u; f_800A23B4(c); // 800DB7EC
  c->r[4]=c->r[24]|c->r[24]; // 800DB7F0
  c->lr=0x800DB7F8u; f_800BEDA0(c); // 800DB7F4
  c->lr=0x800DB7FCu; f_800CF580(c); // 800DB7F8
  c->r[28]=c->r[3]|c->r[3]; // 800DB7FC
  c->r[0]=R32(c->r[29]+0x00000028u); // 800DB800
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 800DB804
  cmps(c,0,(int32_t)c->r[0],0); // 800DB808
  if (crb(c,2)) { goto L_800DB828; } // 800DB80C
  c->r[3]=c->r[31]|c->r[31]; // 800DB810
  c->r[4]=c->r[1]+0x00000014u; // 800DB814
  c->lr=0x800DB81Cu; f_800BCDE8(c); // 800DB818
  c->r[3]=c->r[31]|c->r[31]; // 800DB81C
  c->r[4]=c->r[1]+0x00000008u; // 800DB820
  c->lr=0x800DB828u; f_800BD0E8(c); // 800DB824
L_800DB828:;
  cmps(c,0,(int32_t)c->r[28],3); // 800DB828
  if (!crb(c,2)) { goto L_800DB858; } // 800DB82C
  c->r[3]=c->r[31]|c->r[31]; // 800DB830
  c->r[4]=c->r[1]+0x00000014u; // 800DB834
  c->lr=0x800DB83Cu; f_800BCDE8(c); // 800DB838
  c->r[3]=c->r[31]|c->r[31]; // 800DB83C
  c->r[4]=c->r[1]+0x00000008u; // 800DB840
  c->lr=0x800DB848u; f_800BD0E8(c); // 800DB844
  c->r[3]=c->r[31]|c->r[31]; // 800DB848
  c->r[4]=0u+0x00000001u; // 800DB84C
  c->lr=0x800DB854u; f_800BB958(c); // 800DB850
  goto L_800DBAF8; // 800DB854
L_800DB858:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800DB858
  cmpu(c,0,c->r[0],0x00000001u); // 800DB85C
  if (crb(c,1)) { goto L_800DBAD4; } // 800DB860
  c->r[0]=R32(c->r[29]+0x00000570u); // 800DB864
  cmps(c,0,(int32_t)c->r[0],0); // 800DB868
  if (crb(c,2)) { goto L_800DB9E4; } // 800DB86C
  c->r[24]=0u+0x00000000u; // 800DB870
  c->r[27]=c->r[29]+0x00000170u; // 800DB874
  c->ctr=c->r[0]; // 800DB878
  cmpu(c,0,c->r[0],0x00000000u); // 800DB87C
  if (!crb(c,1)) { goto L_800DB928; } // 800DB880
L_800DB884:;
  c->r[26]=R32(c->r[27]+0x0000001Cu); // 800DB884
  cmps(c,0,(int32_t)c->r[26],0); // 800DB888
  if (crb(c,0)) { goto L_800DB91C; } // 800DB88C
  c->r[3]=R32(c->r[29]+0x00000044u); // 800DB890
  c->r[0]=R32(c->r[27]+0x00000010u); // 800DB894
  cmpu(c,0,c->r[3],c->r[0]); // 800DB898
  if (!crb(c,2)) { goto L_800DB91C; } // 800DB89C
  c->r[25]=R32(c->r[27]+0x00000024u); // 800DB8A0
  cmps(c,0,(int32_t)c->r[25],0); // 800DB8A4
  if (crb(c,2)) { goto L_800DB91C; } // 800DB8A8
  c->lr=0x800DB8B0u; f_800A23BC(c); // 800DB8AC
  c->lr=0x800DB8B4u; f_800BB800(c); // 800DB8B0
  c->r[4]=c->r[25]|c->r[25]; // 800DB8B4
  c->lr=0x800DB8BCu; f_800BBD58(c); // 800DB8B8
  c->r[4]=c->r[26]|c->r[26]; // 800DB8BC
  c->r[5]=c->r[1]+0x00000014u; // 800DB8C0
  c->lr=0x800DB8C8u; f_800C7030(c); // 800DB8C4
  c->lr=0x800DB8CCu; f_800A23BC(c); // 800DB8C8
  c->lr=0x800DB8D0u; f_800BB800(c); // 800DB8CC
  c->r[4]=R32(c->r[27]+0x00000024u); // 800DB8D0
  c->lr=0x800DB8D8u; f_800BBD58(c); // 800DB8D4
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800DB8D8
  c->r[5]=c->r[1]+0x00000008u; // 800DB8DC
  c->lr=0x800DB8E4u; f_800C70E8(c); // 800DB8E0
  c->r[3]=c->r[31]|c->r[31]; // 800DB8E4
  c->r[4]=c->r[1]+0x00000014u; // 800DB8E8
  c->lr=0x800DB8F0u; f_800BCDE8(c); // 800DB8EC
  c->r[3]=c->r[31]|c->r[31]; // 800DB8F0
  c->r[4]=c->r[1]+0x00000008u; // 800DB8F4
  c->lr=0x800DB8FCu; f_800BD0E8(c); // 800DB8F8
  cmps(c,0,(int32_t)c->r[28],1); // 800DB8FC
  if (crb(c,2)) { goto L_800DB928; } // 800DB900
  cmps(c,0,(int32_t)c->r[28],2); // 800DB904
  if (crb(c,2)) { goto L_800DB928; } // 800DB908
  c->r[3]=c->r[31]|c->r[31]; // 800DB90C
  c->r[4]=0u+0x00000000u; // 800DB910
  c->lr=0x800DB918u; f_800BB958(c); // 800DB914
  goto L_800DB928; // 800DB918
L_800DB91C:;
  c->r[27]=c->r[27]+0x00000040u; // 800DB91C
  c->r[24]=c->r[24]+0x00000001u; // 800DB920
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DB884; } // 800DB924
L_800DB928:;
  c->r[3]=R32(c->r[29]+0x00000570u); // 800DB928
  cmpu(c,0,c->r[24],c->r[3]); // 800DB92C
  if (crb(c,0)) { goto L_800DBAF8; } // 800DB930
  cmps(c,0,(int32_t)c->r[28],1); // 800DB934
  if (!crb(c,2)) { goto L_800DB9E4; } // 800DB938
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB93C
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB940
  fcmp(c,0,c->f[0],c->f[1]); // 800DB944
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DB948
  if (!crb(c,2)) { goto L_800DB9E4; } // 800DB94C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB950
  fcmp(c,0,c->f[0],c->f[1]); // 800DB954
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DB958
  if (!crb(c,2)) { goto L_800DB9E4; } // 800DB95C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB960
  fcmp(c,0,c->f[0],c->f[1]); // 800DB964
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DB968
  if (!crb(c,2)) { goto L_800DB9E4; } // 800DB96C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DB970
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800DB974
  c->r[28]=c->r[29]+c->r[0]; // 800DB978
  c->r[26]=R32(c->r[28]+0x00000194u); // 800DB97C
  cmps(c,0,(int32_t)c->r[26],0); // 800DB980
  if (crb(c,2)) { goto L_800DB9E4; } // 800DB984
  c->r[25]=R32(c->r[28]+0x0000018Cu); // 800DB988
  cmps(c,0,(int32_t)c->r[25],0); // 800DB98C
  if (crb(c,0)) { goto L_800DB9E4; } // 800DB990
  c->lr=0x800DB998u; f_800A23BC(c); // 800DB994
  c->lr=0x800DB99Cu; f_800BB800(c); // 800DB998
  c->r[4]=c->r[26]|c->r[26]; // 800DB99C
  c->lr=0x800DB9A4u; f_800BBD58(c); // 800DB9A0
  c->r[4]=c->r[25]|c->r[25]; // 800DB9A4
  c->r[5]=c->r[1]+0x00000014u; // 800DB9A8
  c->lr=0x800DB9B0u; f_800C7030(c); // 800DB9AC
  c->lr=0x800DB9B4u; f_800A23BC(c); // 800DB9B0
  c->lr=0x800DB9B8u; f_800BB800(c); // 800DB9B4
  c->r[4]=R32(c->r[28]+0x00000194u); // 800DB9B8
  c->lr=0x800DB9C0u; f_800BBD58(c); // 800DB9BC
  c->r[4]=R32(c->r[28]+0x0000018Cu); // 800DB9C0
  c->r[5]=c->r[1]+0x00000008u; // 800DB9C4
  c->lr=0x800DB9CCu; f_800C70E8(c); // 800DB9C8
  c->r[3]=c->r[31]|c->r[31]; // 800DB9CC
  c->r[4]=c->r[1]+0x00000014u; // 800DB9D0
  c->lr=0x800DB9D8u; f_800BCDE8(c); // 800DB9D4
  c->r[3]=c->r[31]|c->r[31]; // 800DB9D8
  c->r[4]=c->r[1]+0x00000008u; // 800DB9DC
  c->lr=0x800DB9E4u; f_800BD0E8(c); // 800DB9E0
L_800DB9E4:;
  c->lr=0x800DB9E8u; f_800A23BC(c); // 800DB9E4
  c->lr=0x800DB9ECu; f_800A23B4(c); // 800DB9E8
  c->r[4]=c->r[30]|c->r[30]; // 800DB9EC
  c->lr=0x800DB9F4u; f_800BEDE0(c); // 800DB9F0
  c->r[25]=c->r[3]|c->r[3]; // 800DB9F4
  c->lr=0x800DB9FCu; f_800A23BC(c); // 800DB9F8
  c->lr=0x800DBA00u; f_800A23B4(c); // 800DB9FC
  c->r[4]=c->r[25]|c->r[25]; // 800DBA00
  c->lr=0x800DBA08u; f_800BEDA0(c); // 800DBA04
  c->lr=0x800DBA0Cu; f_800CF580(c); // 800DBA08
  cmps(c,0,(int32_t)c->r[3],5); // 800DBA0C
  if (crb(c,2)) { goto L_800DBA24; } // 800DBA10
  if (!crb(c,0)) { goto L_800DBAAC; } // 800DBA14
  cmps(c,0,(int32_t)c->r[3],3); // 800DBA18
  if (!crb(c,0)) { goto L_800DBA4C; } // 800DBA1C
  goto L_800DBAAC; // 800DBA20
L_800DBA24:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBA24
  c->r[4]=0u+0x00000001u; // 800DBA28
  c->lr=0x800DBA30u; f_800BB958(c); // 800DBA2C
  c->r[3]=c->r[31]|c->r[31]; // 800DBA30
  c->r[4]=c->r[29]+0x00001F2Cu; // 800DBA34
  c->lr=0x800DBA3Cu; f_800BCDE8(c); // 800DBA38
  c->r[3]=c->r[31]|c->r[31]; // 800DBA3C
  c->r[4]=c->r[29]+0x00001F38u; // 800DBA40
  c->lr=0x800DBA48u; f_800BD0E8(c); // 800DBA44
  goto L_800DBAF8; // 800DBA48
L_800DBA4C:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 800DBA4C
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800DBA50
  cmpu(c,0,c->r[3],c->r[0]); // 800DBA54
  if (!crb(c,2)) { goto L_800DBA84; } // 800DBA58
  c->r[3]=c->r[31]|c->r[31]; // 800DBA5C
  c->r[4]=0u+0x00000000u; // 800DBA60
  c->lr=0x800DBA68u; f_800BB958(c); // 800DBA64
  c->r[3]=c->r[31]|c->r[31]; // 800DBA68
  c->r[4]=c->r[29]+0x00001F2Cu; // 800DBA6C
  c->lr=0x800DBA74u; f_800BCDE8(c); // 800DBA70
  c->r[3]=c->r[31]|c->r[31]; // 800DBA74
  c->r[4]=c->r[29]+0x00001F38u; // 800DBA78
  c->lr=0x800DBA80u; f_800BD0E8(c); // 800DBA7C
  goto L_800DBAF8; // 800DBA80
L_800DBA84:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBA84
  c->r[4]=0u+0x00000001u; // 800DBA88
  c->lr=0x800DBA90u; f_800BB958(c); // 800DBA8C
  c->r[3]=c->r[31]|c->r[31]; // 800DBA90
  c->r[4]=c->r[1]+0x00000014u; // 800DBA94
  c->lr=0x800DBA9Cu; f_800BCDE8(c); // 800DBA98
  c->r[3]=c->r[31]|c->r[31]; // 800DBA9C
  c->r[4]=c->r[1]+0x00000008u; // 800DBAA0
  c->lr=0x800DBAA8u; f_800BD0E8(c); // 800DBAA4
  goto L_800DBAF8; // 800DBAA8
L_800DBAAC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBAAC
  c->r[4]=0u+0x00000001u; // 800DBAB0
  c->lr=0x800DBAB8u; f_800BB958(c); // 800DBAB4
  c->r[3]=c->r[31]|c->r[31]; // 800DBAB8
  c->r[4]=c->r[1]+0x00000014u; // 800DBABC
  c->lr=0x800DBAC4u; f_800BCDE8(c); // 800DBAC0
  c->r[3]=c->r[31]|c->r[31]; // 800DBAC4
  c->r[4]=c->r[1]+0x00000008u; // 800DBAC8
  c->lr=0x800DBAD0u; f_800BD0E8(c); // 800DBACC
  goto L_800DBAF8; // 800DBAD0
L_800DBAD4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBAD4
  c->r[4]=0u+0x00000001u; // 800DBAD8
  c->lr=0x800DBAE0u; f_800BB958(c); // 800DBADC
  c->r[3]=c->r[31]|c->r[31]; // 800DBAE0
  c->r[4]=c->r[1]+0x00000014u; // 800DBAE4
  c->lr=0x800DBAECu; f_800BCDE8(c); // 800DBAE8
  c->r[3]=c->r[31]|c->r[31]; // 800DBAEC
  c->r[4]=c->r[1]+0x00000008u; // 800DBAF0
  c->lr=0x800DBAF8u; f_800BD0E8(c); // 800DBAF4
L_800DBAF8:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBAF8
  c->r[4]=0u+0x80460000u; // 800DBAFC
  c->r[4]=c->r[4]+0x0000062Cu; // 800DBB00
  c->r[5]=0u+0x00000006u; // 800DBB04
  c->lr=0x800DBB0Cu; f_800C7E90(c); // 800DBB08
  c->r[3]=c->r[31]|c->r[31]; // 800DBB0C
  c->r[4]=c->r[1]+0x00000014u; // 800DBB10
  c->lr=0x800DBB18u; f_800BD664(c); // 800DBB14
  c->lr=0x800DBB1Cu; f_800A23BC(c); // 800DBB18
  c->lr=0x800DBB20u; f_800BB700(c); // 800DBB1C
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DBB20
  c->lr=0x800DBB28u; f_800BBEA4(c); // 800DBB24
  c->r[24]=c->r[3]|c->r[3]; // 800DBB28
  cmps(c,0,(int32_t)c->r[3],0); // 800DBB2C
  if (crb(c,2)) { goto L_800DBB90; } // 800DBB30
  c->lr=0x800DBB38u; f_800A23BC(c); // 800DBB34
  c->lr=0x800DBB3Cu; f_800BB700(c); // 800DBB38
  c->r[4]=c->r[24]|c->r[24]; // 800DBB3C
  c->lr=0x800DBB44u; f_800BBE64(c); // 800DBB40
  c->r[4]=0u+0x00000001u; // 800DBB44
  c->lr=0x800DBB4Cu; f_800D2BA8(c); // 800DBB48
  c->lr=0x800DBB50u; f_800A23BC(c); // 800DBB4C
  c->lr=0x800DBB54u; f_800BB700(c); // 800DBB50
  c->r[4]=c->r[24]|c->r[24]; // 800DBB54
  c->lr=0x800DBB5Cu; f_800BBE64(c); // 800DBB58
  c->lr=0x800DBB60u; f_800BB564(c); // 800DBB5C
  c->lr=0x800DBB64u; f_800A23BC(c); // 800DBB60
  c->lr=0x800DBB68u; f_800BB700(c); // 800DBB64
  c->r[4]=c->r[24]|c->r[24]; // 800DBB68
  c->lr=0x800DBB70u; f_800BBE64(c); // 800DBB6C
  c->r[4]=c->r[1]+0x00000014u; // 800DBB70
  c->lr=0x800DBB78u; f_800BB538(c); // 800DBB74
  c->lr=0x800DBB7Cu; f_800A23BC(c); // 800DBB78
  c->lr=0x800DBB80u; f_800BB700(c); // 800DBB7C
  c->r[4]=c->r[24]|c->r[24]; // 800DBB80
  c->lr=0x800DBB88u; f_800BBE64(c); // 800DBB84
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBB88
  c->lr=0x800DBB90u; f_800BB548(c); // 800DBB8C
L_800DBB90:;
  c->r[11]=c->r[1]+0x00000040u; // 800DBB90
  c->lr=0x800DBB98u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DBB94
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBB98
  c->lr=c->r[0]; // 800DBB9C
  c->r[1]=c->r[1]+0x00000040u; // 800DBBA0
  return; // 800DBBA4
}

// fn_800DBBA8
void f_800DBBA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBBA8
  c->r[0]=c->lr; // 800DBBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBBB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBBB4
  c->r[0]=0u+0x00000000u; // 800DBBB8
  W32(c->r[3]+0x00001F00u,c->r[0]); // 800DBBBC
  c->r[0]=R32(c->r[3]+0x00000028u); // 800DBBC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800DBBC4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DBBC8
  c->lr=0x800DBBD0u; f_800A23BC(c); // 800DBBCC
  c->lr=0x800DBBD4u; f_800BB700(c); // 800DBBD0
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DBBD4
  c->lr=0x800DBBDCu; f_800BBEA4(c); // 800DBBD8
  c->r[31]=c->r[3]|c->r[3]; // 800DBBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800DBBE0
  if (crb(c,2)) { goto L_800DBC00; } // 800DBBE4
  c->lr=0x800DBBECu; f_800A23BC(c); // 800DBBE8
  c->lr=0x800DBBF0u; f_800BB700(c); // 800DBBEC
  c->r[4]=c->r[31]|c->r[31]; // 800DBBF0
  c->lr=0x800DBBF8u; f_800BBE64(c); // 800DBBF4
  c->r[4]=0u+0x00000000u; // 800DBBF8
  c->lr=0x800DBC00u; f_800D2BA8(c); // 800DBBFC
L_800DBC00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBC00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBC04
  c->lr=c->r[0]; // 800DBC08
  c->r[1]=c->r[1]+0x00000010u; // 800DBC0C
  return; // 800DBC10
}

// fn_800DBC14
void f_800DBC14(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DBC14
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800DBC18
  c->r[0]=0u+0xFFFFFFFFu; // 800DBC1C
  W32(c->r[3]+0x00001EFCu,c->r[0]); // 800DBC20
  return; // 800DBC24
}

// fn_800DBC28
void f_800DBC28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBC28
  c->r[0]=c->lr; // 800DBC2C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBC30
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DBC34
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DBC38
  c->r[30]=c->r[3]|c->r[3]; // 800DBC3C
  c->lr=0x800DBC44u; f_800A23BC(c); // 800DBC40
  c->lr=0x800DBC48u; f_800A23B4(c); // 800DBC44
  c->lr=0x800DBC4Cu; f_800DECBC(c); // 800DBC48
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC4C
  if (crb(c,2)) { goto L_800DBE58; } // 800DBC50
  c->r[31]=R32(c->r[30]+0x00000088u); // 800DBC54
  cmps(c,0,(int32_t)c->r[31],0); // 800DBC58
  if (crb(c,2)) { goto L_800DBC80; } // 800DBC5C
  c->lr=0x800DBC64u; f_800A23BC(c); // 800DBC60
  c->lr=0x800DBC68u; f_800BB808(c); // 800DBC64
  c->r[4]=c->r[31]|c->r[31]; // 800DBC68
  c->lr=0x800DBC70u; f_800C0D08(c); // 800DBC6C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC70
  if (!crb(c,2)) { goto L_800DBC80; } // 800DBC74
  c->r[0]=0u+0x00000000u; // 800DBC78
  W32(c->r[30]+0x00000088u,c->r[0]); // 800DBC7C
L_800DBC80:;
  c->r[31]=R32(c->r[30]+0x00000088u); // 800DBC80
  cmps(c,0,(int32_t)c->r[31],0); // 800DBC84
  if (crb(c,2)) { goto L_800DBCC0; } // 800DBC88
  c->lr=0x800DBC90u; f_800A23BC(c); // 800DBC8C
  c->lr=0x800DBC94u; f_800BB808(c); // 800DBC90
  c->r[4]=c->r[31]|c->r[31]; // 800DBC94
  c->lr=0x800DBC9Cu; f_800BBC8C(c); // 800DBC98
  c->lr=0x800DBCA0u; f_800CADFC(c); // 800DBC9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBCA0
  if (!crb(c,2)) { goto L_800DBCC0; } // 800DBCA4
  c->lr=0x800DBCACu; f_800A23BC(c); // 800DBCA8
  c->lr=0x800DBCB0u; f_800BB808(c); // 800DBCAC
  c->r[4]=R32(c->r[30]+0x00000088u); // 800DBCB0
  c->lr=0x800DBCB8u; f_800CB00C(c); // 800DBCB4
  c->r[0]=0u+0x00000000u; // 800DBCB8
  W32(c->r[30]+0x00000088u,c->r[0]); // 800DBCBC
L_800DBCC0:;
  c->lr=0x800DBCC4u; f_800A23BC(c); // 800DBCC0
  c->lr=0x800DBCC8u; f_800A23C8(c); // 800DBCC4
  c->lr=0x800DBCCCu; f_800CDEF0(c); // 800DBCC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBCCC
  if (!crb(c,2)) { goto L_800DBE58; } // 800DBCD0
  c->r[3]=0u+0x00000001u; // 800DBCD4
  c->lr=0x800DBCDCu; f_8005D714(c); // 800DBCD8
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCDC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800DBCE0
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800DBCE4
  {uint32_t ea=c->r[2]+0xFFFF8920u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBCE8
  fcmp(c,0,c->f[1],c->f[0]); // 800DBCEC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DBCF0
  if (!crb(c,2)) { goto L_800DBD8C; } // 800DBCF4
  c->r[31]=R32(c->r[30]+0x00000088u); // 800DBCF8
  cmps(c,0,(int32_t)c->r[31],0); // 800DBCFC
  if (crb(c,2)) { goto L_800DBD38; } // 800DBD00
  c->lr=0x800DBD08u; f_800A23BC(c); // 800DBD04
  c->lr=0x800DBD0Cu; f_800BB808(c); // 800DBD08
  c->r[4]=c->r[31]|c->r[31]; // 800DBD0C
  c->lr=0x800DBD14u; f_800BBC8C(c); // 800DBD10
  c->lr=0x800DBD18u; f_800CADFC(c); // 800DBD14
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD18
  if (!crb(c,2)) { goto L_800DBD38; } // 800DBD1C
  c->lr=0x800DBD24u; f_800A23BC(c); // 800DBD20
  c->lr=0x800DBD28u; f_800BB808(c); // 800DBD24
  c->r[4]=R32(c->r[30]+0x00000088u); // 800DBD28
  c->lr=0x800DBD30u; f_800CB00C(c); // 800DBD2C
  c->r[0]=0u+0x00000000u; // 800DBD30
  W32(c->r[30]+0x00000088u,c->r[0]); // 800DBD34
L_800DBD38:;
  c->lr=0x800DBD3Cu; f_800A23BC(c); // 800DBD38
  c->lr=0x800DBD40u; f_800C23E4(c); // 800DBD3C
  c->r[31]=c->r[3]|c->r[3]; // 800DBD40
  c->lr=0x800DBD48u; f_800A23BC(c); // 800DBD44
  c->r[4]=0u+0x00000000u; // 800DBD48
  c->lr=0x800DBD50u; f_800C23EC(c); // 800DBD4C
  c->lr=0x800DBD54u; f_800A23BC(c); // 800DBD50
  c->lr=0x800DBD58u; f_800BB808(c); // 800DBD54
  c->r[4]=c->r[13]+0xFFFF895Cu; // 800DBD58
  c->r[5]=0u+0x80460000u; // 800DBD5C
  c->r[5]=c->r[5]+0x000008C8u; // 800DBD60
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBD64
  c->lr=0x800DBD6Cu; f_800CAF70(c); // 800DBD68
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD6C
  if (crb(c,2)) { goto L_800DBD78; } // 800DBD70
  W32(c->r[30]+0x00000088u,c->r[3]); // 800DBD74
L_800DBD78:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBD78
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800DBD7C
  c->lr=0x800DBD84u; f_800A23BC(c); // 800DBD80
  c->r[4]=c->r[31]|c->r[31]; // 800DBD84
  c->lr=0x800DBD8Cu; f_800C23EC(c); // 800DBD88
L_800DBD8C:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 800DBD8C
  cmps(c,0,(int32_t)c->r[0],0); // 800DBD90
  if (crb(c,2)) { goto L_800DBE58; } // 800DBD94
  c->lr=0x800DBD9Cu; f_800A23BC(c); // 800DBD98
  c->lr=0x800DBDA0u; f_800BB700(c); // 800DBD9C
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DBDA0
  c->lr=0x800DBDA8u; f_800BBEA4(c); // 800DBDA4
  c->r[31]=c->r[3]|c->r[3]; // 800DBDA8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBDAC
  if (crb(c,2)) { goto L_800DBE58; } // 800DBDB0
  c->r[3]=c->r[1]+0x0000002Cu; // 800DBDB4
  c->lr=0x800DBDBCu; f_8004B0A4(c); // 800DBDB8
  c->r[3]=c->r[1]+0x00000020u; // 800DBDBC
  c->lr=0x800DBDC4u; f_8004B0A4(c); // 800DBDC0
  c->r[3]=c->r[1]+0x00000014u; // 800DBDC4
  c->lr=0x800DBDCCu; f_8004B0A4(c); // 800DBDC8
  c->r[3]=c->r[1]+0x00000008u; // 800DBDCC
  c->lr=0x800DBDD4u; f_8004B0A4(c); // 800DBDD0
  c->lr=0x800DBDD8u; f_800A23BC(c); // 800DBDD4
  c->lr=0x800DBDDCu; f_800BB700(c); // 800DBDD8
  c->r[4]=c->r[31]|c->r[31]; // 800DBDDC
  c->lr=0x800DBDE4u; f_800BBE64(c); // 800DBDE0
  c->r[4]=c->r[1]+0x0000002Cu; // 800DBDE4
  c->lr=0x800DBDECu; f_800CA324(c); // 800DBDE8
  c->lr=0x800DBDF0u; f_800A23BC(c); // 800DBDEC
  c->lr=0x800DBDF4u; f_800BB700(c); // 800DBDF0
  c->r[4]=c->r[31]|c->r[31]; // 800DBDF4
  c->lr=0x800DBDFCu; f_800BBE64(c); // 800DBDF8
  c->r[4]=c->r[1]+0x00000020u; // 800DBDFC
  c->lr=0x800DBE04u; f_800CA318(c); // 800DBE00
  c->r[3]=c->r[1]+0x00000014u; // 800DBE04
  c->r[4]=c->r[1]+0x00000020u; // 800DBE08
  c->r[5]=c->r[1]+0x0000002Cu; // 800DBE0C
  c->lr=0x800DBE14u; f_8006000C(c); // 800DBE10
  c->r[3]=c->r[1]+0x00000008u; // 800DBE14
  c->r[4]=c->r[1]+0x00000014u; // 800DBE18
  c->lr=0x800DBE20u; f_8005C110(c); // 800DBE1C
  c->r[3]=c->r[1]+0x00000014u; // 800DBE20
  c->r[4]=c->r[1]+0x00000008u; // 800DBE24
  {uint32_t ea=c->r[2]+0xFFFF88FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBE28
  c->lr=0x800DBE30u; f_8004E330(c); // 800DBE2C
  c->r[3]=c->r[1]+0x00000020u; // 800DBE30
  c->r[4]=c->r[1]+0x0000002Cu; // 800DBE34
  c->r[5]=c->r[1]+0x00000014u; // 800DBE38
  c->lr=0x800DBE40u; f_8005C194(c); // 800DBE3C
  c->lr=0x800DBE44u; f_800A23BC(c); // 800DBE40
  c->lr=0x800DBE48u; f_800BB808(c); // 800DBE44
  c->r[4]=R32(c->r[30]+0x00000088u); // 800DBE48
  c->lr=0x800DBE50u; f_800BBC8C(c); // 800DBE4C
  c->r[4]=c->r[1]+0x00000020u; // 800DBE50
  c->lr=0x800DBE58u; f_800BCDE8(c); // 800DBE54
L_800DBE58:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DBE58
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DBE5C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DBE60
  c->lr=c->r[0]; // 800DBE64
  c->r[1]=c->r[1]+0x00000040u; // 800DBE68
  return; // 800DBE6C
}

// fn_800DBE70
void f_800DBE70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE70
  c->r[0]=c->lr; // 800DBE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBE7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DBE80
  c->r[31]=c->r[3]|c->r[3]; // 800DBE84
  c->lr=0x800DBE8Cu; f_800A23BC(c); // 800DBE88
  c->lr=0x800DBE90u; f_800A23C4(c); // 800DBE8C
  c->lr=0x800DBE94u; f_800D89AC(c); // 800DBE90
  cmps(c,0,(int32_t)c->r[3],0); // 800DBE94
  if (!crb(c,2)) { goto L_800DC010; } // 800DBE98
  c->lr=0x800DBEA0u; f_800A23BC(c); // 800DBE9C
  c->lr=0x800DBEA4u; f_800A23C8(c); // 800DBEA0
  c->lr=0x800DBEA8u; f_800CA83C(c); // 800DBEA4
  cmps(c,0,(int32_t)c->r[3],0); // 800DBEA8
  if (!crb(c,2)) { goto L_800DC010; } // 800DBEAC
  {uint32_t ea=c->r[31]+0x00001ED4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBEB0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBEB4
  fcmp(c,0,c->f[1],c->f[0]); // 800DBEB8
  if (!crb(c,1)) { goto L_800DBEF0; } // 800DBEBC
  c->r[3]=0u+0x00000001u; // 800DBEC0
  c->lr=0x800DBEC8u; f_8005D714(c); // 800DBEC4
  {uint32_t ea=c->r[31]+0x00001ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBEC8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800DBECC
  {uint32_t ea=c->r[31]+0x00001ED4u; WF32(ea,c->f[1]);} // 800DBED0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBED4
  fcmp(c,0,c->f[1],c->f[0]); // 800DBED8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DBEDC
  if (!crb(c,2)) { goto L_800DBEF0; } // 800DBEE0
  {uint32_t ea=c->r[31]+0x00001ED4u; WF32(ea,c->f[0]);} // 800DBEE4
  c->r[0]=0u+0x00000000u; // 800DBEE8
  W32(c->r[31]+0x00001EDCu,c->r[0]); // 800DBEEC
L_800DBEF0:;
  {uint32_t ea=c->r[31]+0x00001ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBEF0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBEF4
  fcmp(c,0,c->f[1],c->f[0]); // 800DBEF8
  if (!crb(c,1)) { goto L_800DBF30; } // 800DBEFC
  c->r[3]=0u+0x00000001u; // 800DBF00
  c->lr=0x800DBF08u; f_8005D714(c); // 800DBF04
  {uint32_t ea=c->r[31]+0x00001ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBF08
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800DBF0C
  {uint32_t ea=c->r[31]+0x00001ED8u; WF32(ea,c->f[1]);} // 800DBF10
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBF14
  fcmp(c,0,c->f[1],c->f[0]); // 800DBF18
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DBF1C
  if (!crb(c,2)) { goto L_800DBF30; } // 800DBF20
  {uint32_t ea=c->r[31]+0x00001ED8u; WF32(ea,c->f[0]);} // 800DBF24
  c->r[0]=0u+0x00000000u; // 800DBF28
  W32(c->r[31]+0x00001EE0u,c->r[0]); // 800DBF2C
L_800DBF30:;
  c->r[0]=R32(c->r[31]+0x00001EDCu); // 800DBF30
  cmps(c,0,(int32_t)c->r[0],0); // 800DBF34
  if (crb(c,2)) { goto L_800DBF68; } // 800DBF38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800DBF3C
  c->r[3]=0u+0x80430000u; // 800DBF40
  c->r[3]=c->r[3]+0xFFFFD810u; // 800DBF44
  c->r[3]=R32(c->r[3]+c->r[0]); // 800DBF48
  c->lr=0x800DBF50u; f_8018F644(c); // 800DBF4C
  c->lr=0x800DBF54u; f_8018F5E0(c); // 800DBF50
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBF54
  {uint32_t ea=c->r[31]+0x00001ED4u; WF32(ea,c->f[0]);} // 800DBF58
  c->r[0]=0u+0x00000000u; // 800DBF5C
  W32(c->r[31]+0x00001EDCu,c->r[0]); // 800DBF60
  goto L_800DBFE8; // 800DBF64
L_800DBF68:;
  c->r[0]=R32(c->r[31]+0x00001EE0u); // 800DBF68
  cmps(c,0,(int32_t)c->r[0],0); // 800DBF6C
  if (crb(c,2)) { goto L_800DBFE8; } // 800DBF70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800DBF74
  c->r[3]=0u+0x80430000u; // 800DBF78
  c->r[4]=c->r[3]+0xFFFFD810u; // 800DBF7C
  c->r[3]=R32(c->r[4]+c->r[0]); // 800DBF80
  c->r[5]=c->r[4]+c->r[0]; // 800DBF84
  c->r[4]=R32(c->r[5]+0x00000004u); // 800DBF88
  c->r[6]=R32(c->r[5]+0x00000008u); // 800DBF8C
  {uint32_t ea=c->r[31]+0x00001ED4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBF90
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBF94
  fcmp(c,0,c->f[1],c->f[0]); // 800DBF98
  if (crb(c,1)) { goto L_800DC140; } // 800DBF9C
  c->r[5]=R32(c->r[31]+0x0000008Cu); // 800DBFA0
  c->r[0]=R32(c->r[31]+0x00001EECu); // 800DBFA4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800DBFA8
  if (crb(c,2)) { goto L_800DBFC8; } // 800DBFAC
  cmps(c,0,(int32_t)c->r[6],0); // 800DBFB0
  if (!crb(c,2)) { goto L_800DBFC8; } // 800DBFB4
  c->r[3]=c->r[31]|c->r[31]; // 800DBFB8
  c->r[4]=0u+0x00000001u; // 800DBFBC
  c->lr=0x800DBFC4u; f_800E10E4(c); // 800DBFC0
  goto L_800DBFE8; // 800DBFC4
L_800DBFC8:;
  c->lr=0x800DBFCCu; f_8018F680(c); // 800DBFC8
  c->lr=0x800DBFD0u; f_8018F5E0(c); // 800DBFCC
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBFD0
  {uint32_t ea=c->r[31]+0x00001ED8u; WF32(ea,c->f[0]);} // 800DBFD4
  c->r[0]=0u+0x00000000u; // 800DBFD8
  W32(c->r[31]+0x00001EE0u,c->r[0]); // 800DBFDC
  c->r[0]=0u+0xFFFFFFFFu; // 800DBFE0
  W32(c->r[31]+0x00001EECu,c->r[0]); // 800DBFE4
L_800DBFE8:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DBFE8
  {uint32_t ea=c->r[31]+0x00001ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBFEC
  fcmp(c,0,c->f[1],c->f[0]); // 800DBFF0
  if (!crb(c,2)) { goto L_800DC010; } // 800DBFF4
  {uint32_t ea=c->r[31]+0x00001ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBFF8
  fcmp(c,0,c->f[1],c->f[0]); // 800DBFFC
  if (!crb(c,2)) { goto L_800DC010; } // 800DC000
  c->r[3]=c->r[31]|c->r[31]; // 800DC004
  c->r[4]=0u+0x00000001u; // 800DC008
  c->lr=0x800DC010u; f_800E10E4(c); // 800DC00C
L_800DC010:;
  c->lr=0x800DC014u; f_800A23BC(c); // 800DC010
  c->lr=0x800DC018u; f_800A23C4(c); // 800DC014
  c->lr=0x800DC01Cu; f_800D89AC(c); // 800DC018
  cmps(c,0,(int32_t)c->r[3],0); // 800DC01C
  if (!crb(c,2)) { goto L_800DC140; } // 800DC020
  c->lr=0x800DC028u; f_800A23BC(c); // 800DC024
  c->lr=0x800DC02Cu; f_800A23B4(c); // 800DC028
  c->r[4]=R32(c->r[31]+0x00000040u); // 800DC02C
  c->lr=0x800DC034u; f_800BEDE0(c); // 800DC030
  c->r[30]=c->r[3]|c->r[3]; // 800DC034
  cmps(c,0,(int32_t)c->r[3],0); // 800DC038
  if (crb(c,2)) { goto L_800DC140; } // 800DC03C
  c->lr=0x800DC044u; f_800A23BC(c); // 800DC040
  c->lr=0x800DC048u; f_800A23B4(c); // 800DC044
  c->r[4]=c->r[30]|c->r[30]; // 800DC048
  c->lr=0x800DC050u; f_800BEDA0(c); // 800DC04C
  c->lr=0x800DC054u; f_800CF580(c); // 800DC050
  cmps(c,0,(int32_t)c->r[3],1); // 800DC054
  if (!crb(c,2)) { goto L_800DC140; } // 800DC058
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DC05C
  c->r[0]=rotl(c->r[0],0)&0x00200000u; // 800DC060
  cmps(c,0,(int32_t)c->r[0],0); // 800DC064
  if (!crb(c,2)) { goto L_800DC074; } // 800DC068
  c->r[3]=c->r[31]|c->r[31]; // 800DC06C
  c->lr=0x800DC074u; f_800DBC28(c); // 800DC070
L_800DC074:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DC074
  c->r[0]=rotl(c->r[0],0)&0x00000800u; // 800DC078
  cmps(c,0,(int32_t)c->r[0],0); // 800DC07C
  if (!crb(c,2)) { goto L_800DC140; } // 800DC080
  c->lr=0x800DC088u; f_800A23BC(c); // 800DC084
  c->lr=0x800DC08Cu; f_800A23B4(c); // 800DC088
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800DC08C
  c->lr=0x800DC094u; f_800BEDE0(c); // 800DC090
  c->r[30]=c->r[3]|c->r[3]; // 800DC094
  cmps(c,0,(int32_t)c->r[3],0); // 800DC098
  if (crb(c,2)) { goto L_800DC140; } // 800DC09C
  c->lr=0x800DC0A4u; f_800A23BC(c); // 800DC0A0
  c->lr=0x800DC0A8u; f_800A23B4(c); // 800DC0A4
  c->r[4]=c->r[30]|c->r[30]; // 800DC0A8
  c->lr=0x800DC0B0u; f_800BEDA0(c); // 800DC0AC
  c->lr=0x800DC0B4u; f_800CF580(c); // 800DC0B0
  cmps(c,0,(int32_t)c->r[3],1); // 800DC0B4
  if (!crb(c,2)) { goto L_800DC140; } // 800DC0B8
  c->lr=0x800DC0C0u; f_800A23BC(c); // 800DC0BC
  c->lr=0x800DC0C4u; f_800A23B4(c); // 800DC0C0
  c->r[4]=c->r[30]|c->r[30]; // 800DC0C4
  c->lr=0x800DC0CCu; f_800BEDA0(c); // 800DC0C8
  c->lr=0x800DC0D0u; f_800CF5E4(c); // 800DC0CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0D0
  if (crb(c,2)) { goto L_800DC140; } // 800DC0D4
  c->lr=0x800DC0DCu; f_801FAD80(c); // 800DC0D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0DC
  if (!crb(c,2)) { goto L_800DC140; } // 800DC0E0
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DC0E4
  c->r[0]=rotl(c->r[0],0)&0x00008000u; // 800DC0E8
  cmps(c,0,(int32_t)c->r[0],0); // 800DC0EC
  if (crb(c,2)) { goto L_800DC140; } // 800DC0F0
  c->r[3]=0u+0x00000001u; // 800DC0F4
  c->lr=0x800DC0FCu; f_8005D714(c); // 800DC0F8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC0FC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800DC100
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 800DC104
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC108
  fcmp(c,0,c->f[1],c->f[0]); // 800DC10C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DC110
  if (!crb(c,2)) { goto L_800DC140; } // 800DC114
  c->lr=0x800DC11Cu; f_800A23BC(c); // 800DC118
  c->lr=0x800DC120u; f_800A23C8(c); // 800DC11C
  c->lr=0x800DC124u; f_800CA888(c); // 800DC120
  c->lr=0x800DC128u; f_800A23BC(c); // 800DC124
  c->lr=0x800DC12Cu; f_800A23C4(c); // 800DC128
  c->r[4]=0u+0x00000003u; // 800DC12C
  c->lr=0x800DC134u; f_800D8804(c); // 800DC130
  c->r[3]=c->r[31]+0x0000002Cu; // 800DC134
  c->r[4]=0u+0x0000001Fu; // 800DC138
  c->lr=0x800DC140u; f_800BB8E4(c); // 800DC13C
L_800DC140:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC140
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC144
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC148
  c->lr=c->r[0]; // 800DC14C
  c->r[1]=c->r[1]+0x00000010u; // 800DC150
  return; // 800DC154
}

