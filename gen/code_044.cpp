#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801B2548
void f_801B2548(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000038u); // 801B2548
  return; // 801B254C
}

// fn_801B2550
void f_801B2550(Ctx* __restrict c) {
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801B2550
  return; // 801B2554
}

// fn_801B2558
void f_801B2558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2558
  c->r[0]=c->lr; // 801B255C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2564
  c->r[31]=c->r[3]|c->r[3]; // 801B2568
  c->r[4]=R32(c->r[3]+0x00000044u); // 801B256C
  c->lr=0x801B2574u; f_801B1F30(c); // 801B2570
  c->r[3]=R32(c->r[31]+0x00000040u); // 801B2574
  c->r[3]=c->r[3]+0x00000001u; // 801B2578
  W32(c->r[31]+0x00000040u,c->r[3]); // 801B257C
  c->r[4]=0u+0x00000000u; // 801B2580
  c->r[5]=R32(c->r[31]+0x00000044u); // 801B2584
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2588
  c->lr=0x801B2590u; f_800EEE08(c); // 801B258C
  W32(c->r[31]+0x00000040u,c->r[3]); // 801B2590
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2594
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2598
  c->lr=c->r[0]; // 801B259C
  c->r[1]=c->r[1]+0x00000010u; // 801B25A0
  return; // 801B25A4
}

// fn_801B25A8
void f_801B25A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B25A8
  c->r[0]=c->lr; // 801B25AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B25B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B25B4
  c->r[31]=c->r[3]|c->r[3]; // 801B25B8
  c->r[4]=R32(c->r[3]+0x00000044u); // 801B25BC
  c->lr=0x801B25C4u; f_801B1F30(c); // 801B25C0
  c->r[3]=R32(c->r[31]+0x00000040u); // 801B25C4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B25C8
  W32(c->r[31]+0x00000040u,c->r[3]); // 801B25CC
  c->r[4]=0u+0x00000000u; // 801B25D0
  c->r[5]=R32(c->r[31]+0x00000044u); // 801B25D4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B25D8
  c->lr=0x801B25E0u; f_800EEE08(c); // 801B25DC
  W32(c->r[31]+0x00000040u,c->r[3]); // 801B25E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B25E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B25E8
  c->lr=c->r[0]; // 801B25EC
  c->r[1]=c->r[1]+0x00000010u; // 801B25F0
  return; // 801B25F4
}

// fn_801B25F8
void f_801B25F8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000040u); // 801B25F8
  return; // 801B25FC
}

// fn_801B2600
void f_801B2600(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2600
  W32(c->r[3]+0x00000040u,c->r[0]); // 801B2604
  return; // 801B2608
}

// fn_801B260C
void f_801B260C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801B260C
  c->r[0]=0u+0x00000001u; // 801B2610
  if (!crb(c,1)) { goto L_801B261C; } // 801B2614
  c->r[0]=c->r[4]|c->r[4]; // 801B2618
L_801B261C:;
  W32(c->r[3]+0x00000044u,c->r[0]); // 801B261C
  return; // 801B2620
}

// fn_801B2624
void f_801B2624(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2624
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801B2628
  W32(c->r[3]+0x00000020u,c->r[0]); // 801B262C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801B2630
  W32(c->r[3]+0x00000028u,c->r[0]); // 801B2634
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801B2638
  W32(c->r[3]+0x00000030u,c->r[0]); // 801B263C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801B2640
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B2644
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801B2648
  W32(c->r[3]+0x00000040u,c->r[0]); // 801B264C
  W32(c->r[3]+0x00000044u,c->r[0]); // 801B2650
  return; // 801B2654
}

// fn_801B2658
void f_801B2658(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000054u); // 801B2658
  c->r[4]=R32(c->r[3]+0x00000048u); // 801B265C
  c->r[6]=R32(c->r[3]+0x00000058u); // 801B2660
  c->r[0]=c->r[5]+0x00000001u; // 801B2664
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801B2668
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 801B266C
  cmps(c,0,(int32_t)c->r[0],0); // 801B2670
  if (!crb(c,1)) { goto L_801B2680; } // 801B2674
  c->r[3]=c->r[4]|c->r[4]; // 801B2678
  return; // 801B267C
L_801B2680:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801B2680
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 801B2684
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801B2688
  c->r[3]=c->r[6]-c->r[0]; // 801B268C
  return; // 801B2690
}

// fn_801B2694
void f_801B2694(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2694
  c->r[0]=c->lr; // 801B2698
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B269C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B26A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B26A4
  c->r[30]=c->r[3]|c->r[3]; // 801B26A8
  c->lr=0x801B26B0u; f_801B2658(c); // 801B26AC
  c->r[31]=c->r[3]|c->r[3]; // 801B26B0
  c->r[3]=c->r[30]|c->r[30]; // 801B26B4
  c->r[4]=c->r[31]|c->r[31]; // 801B26B8
  c->lr=0x801B26C0u; f_801B1F30(c); // 801B26BC
  c->r[3]=R32(c->r[30]+0x00000050u); // 801B26C0
  c->r[3]=c->r[3]+0x00000001u; // 801B26C4
  W32(c->r[30]+0x00000050u,c->r[3]); // 801B26C8
  c->r[4]=0u+0x00000000u; // 801B26CC
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B26D0
  c->lr=0x801B26D8u; f_800EEE08(c); // 801B26D4
  W32(c->r[30]+0x00000050u,c->r[3]); // 801B26D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B26DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B26E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B26E4
  c->lr=c->r[0]; // 801B26E8
  c->r[1]=c->r[1]+0x00000010u; // 801B26EC
  return; // 801B26F0
}

// fn_801B26F4
void f_801B26F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B26F4
  c->r[0]=c->lr; // 801B26F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B26FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2700
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2704
  c->r[30]=c->r[3]|c->r[3]; // 801B2708
  c->lr=0x801B2710u; f_801B2658(c); // 801B270C
  c->r[31]=c->r[3]|c->r[3]; // 801B2710
  c->r[3]=c->r[30]|c->r[30]; // 801B2714
  c->r[4]=c->r[31]|c->r[31]; // 801B2718
  c->lr=0x801B2720u; f_801B1F30(c); // 801B271C
  c->r[3]=R32(c->r[30]+0x00000050u); // 801B2720
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2724
  W32(c->r[30]+0x00000050u,c->r[3]); // 801B2728
  c->r[4]=0u+0x00000000u; // 801B272C
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B2730
  c->lr=0x801B2738u; f_800EEE08(c); // 801B2734
  W32(c->r[30]+0x00000050u,c->r[3]); // 801B2738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B273C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2740
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2744
  c->lr=c->r[0]; // 801B2748
  c->r[1]=c->r[1]+0x00000010u; // 801B274C
  return; // 801B2750
}

// fn_801B2754
void f_801B2754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2754
  c->r[0]=c->lr; // 801B2758
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B275C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2760
  c->r[31]=c->r[3]|c->r[3]; // 801B2764
  c->lr=0x801B276Cu; f_801B2658(c); // 801B2768
  c->r[0]=R32(c->r[31]+0x00000050u); // 801B276C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B2770
  if (crb(c,0)) { goto L_801B2780; } // 801B2774
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B2778
  W32(c->r[31]+0x00000050u,c->r[0]); // 801B277C
L_801B2780:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2780
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2784
  c->lr=c->r[0]; // 801B2788
  c->r[1]=c->r[1]+0x00000010u; // 801B278C
  return; // 801B2790
}

// fn_801B2794
void f_801B2794(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 801B2794
  return; // 801B2798
}

// fn_801B279C
void f_801B279C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B279C
  c->r[0]=c->lr; // 801B27A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B27A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B27A8
  c->r[31]=c->r[3]|c->r[3]; // 801B27AC
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 801B27B0
  c->lr=0x801B27B8u; f_801B1F30(c); // 801B27B4
  c->r[3]=R32(c->r[31]+0x00000054u); // 801B27B8
  c->r[3]=c->r[3]+0x00000001u; // 801B27BC
  W32(c->r[31]+0x00000054u,c->r[3]); // 801B27C0
  c->r[4]=0u+0x00000000u; // 801B27C4
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801B27C8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B27CC
  c->lr=0x801B27D4u; f_800EEE08(c); // 801B27D0
  W32(c->r[31]+0x00000054u,c->r[3]); // 801B27D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B27D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B27DC
  c->lr=c->r[0]; // 801B27E0
  c->r[1]=c->r[1]+0x00000010u; // 801B27E4
  return; // 801B27E8
}

// fn_801B27EC
void f_801B27EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B27EC
  c->r[0]=c->lr; // 801B27F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B27F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B27F8
  c->r[31]=c->r[3]|c->r[3]; // 801B27FC
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 801B2800
  c->lr=0x801B2808u; f_801B1F30(c); // 801B2804
  c->r[3]=R32(c->r[31]+0x00000054u); // 801B2808
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B280C
  W32(c->r[31]+0x00000054u,c->r[3]); // 801B2810
  c->r[4]=0u+0x00000000u; // 801B2814
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801B2818
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B281C
  c->lr=0x801B2824u; f_800EEE08(c); // 801B2820
  W32(c->r[31]+0x00000054u,c->r[3]); // 801B2824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2828
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B282C
  c->lr=c->r[0]; // 801B2830
  c->r[1]=c->r[1]+0x00000010u; // 801B2834
  return; // 801B2838
}

// fn_801B283C
void f_801B283C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 801B283C
  return; // 801B2840
}

// fn_801B2844
void f_801B2844(Ctx* __restrict c) {
  W32(c->r[3]+0x00000048u,c->r[4]); // 801B2844
  return; // 801B2848
}

// fn_801B284C
void f_801B284C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 801B284C
  return; // 801B2850
}

// fn_801B2854
void f_801B2854(Ctx* __restrict c) {
  W32(c->r[3]+0x00000058u,c->r[4]); // 801B2854
  return; // 801B2858
}

// fn_801B285C
void f_801B285C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B285C
  c->r[0]=c->lr; // 801B2860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2864
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2868
  c->r[31]=c->r[3]|c->r[3]; // 801B286C
  c->lr=0x801B2874u; f_801B1EFC(c); // 801B2870
  c->r[3]=R32(c->r[31]+0x00000070u); // 801B2874
  c->r[3]=c->r[3]+0x00000001u; // 801B2878
  W32(c->r[31]+0x00000070u,c->r[3]); // 801B287C
  c->r[4]=0u+0x00000000u; // 801B2880
  c->r[5]=R32(c->r[31]+0x00000074u); // 801B2884
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2888
  c->lr=0x801B2890u; f_800EEE08(c); // 801B288C
  W32(c->r[31]+0x00000070u,c->r[3]); // 801B2890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2894
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2898
  c->lr=c->r[0]; // 801B289C
  c->r[1]=c->r[1]+0x00000010u; // 801B28A0
  return; // 801B28A4
}

// fn_801B28A8
void f_801B28A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B28A8
  c->r[0]=c->lr; // 801B28AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B28B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B28B4
  c->r[31]=c->r[3]|c->r[3]; // 801B28B8
  c->lr=0x801B28C0u; f_801B1EFC(c); // 801B28BC
  c->r[3]=R32(c->r[31]+0x00000070u); // 801B28C0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B28C4
  W32(c->r[31]+0x00000070u,c->r[3]); // 801B28C8
  c->r[4]=0u+0x00000000u; // 801B28CC
  c->r[5]=R32(c->r[31]+0x00000074u); // 801B28D0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B28D4
  c->lr=0x801B28DCu; f_800EEE08(c); // 801B28D8
  W32(c->r[31]+0x00000070u,c->r[3]); // 801B28DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B28E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B28E4
  c->lr=c->r[0]; // 801B28E8
  c->r[1]=c->r[1]+0x00000010u; // 801B28EC
  return; // 801B28F0
}

// fn_801B28F4
void f_801B28F4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B28F4
  W32(c->r[3]+0x00000070u,c->r[0]); // 801B28F8
  return; // 801B28FC
}

// fn_801B2900
void f_801B2900(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000070u); // 801B2900
  return; // 801B2904
}

// fn_801B2908
void f_801B2908(Ctx* __restrict c) {
  W32(c->r[3]+0x00000074u,c->r[4]); // 801B2908
  return; // 801B290C
}

// fn_801B2910
void f_801B2910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2910
  c->r[0]=c->lr; // 801B2914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B291C
  c->r[31]=c->r[3]|c->r[3]; // 801B2920
  c->r[4]=R32(c->r[3]+0x00000084u); // 801B2924
  c->lr=0x801B292Cu; f_801B1F30(c); // 801B2928
  c->r[3]=R32(c->r[31]+0x00000080u); // 801B292C
  c->r[3]=c->r[3]+0x00000001u; // 801B2930
  W32(c->r[31]+0x00000080u,c->r[3]); // 801B2934
  c->r[4]=0u+0x00000000u; // 801B2938
  c->r[5]=R32(c->r[31]+0x00000084u); // 801B293C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2940
  c->lr=0x801B2948u; f_800EEE08(c); // 801B2944
  W32(c->r[31]+0x00000080u,c->r[3]); // 801B2948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B294C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2950
  c->lr=c->r[0]; // 801B2954
  c->r[1]=c->r[1]+0x00000010u; // 801B2958
  return; // 801B295C
}

// fn_801B2960
void f_801B2960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2960
  c->r[0]=c->lr; // 801B2964
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B296C
  c->r[31]=c->r[3]|c->r[3]; // 801B2970
  c->r[4]=R32(c->r[3]+0x00000084u); // 801B2974
  c->lr=0x801B297Cu; f_801B1F30(c); // 801B2978
  c->r[3]=R32(c->r[31]+0x00000080u); // 801B297C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2980
  W32(c->r[31]+0x00000080u,c->r[3]); // 801B2984
  c->r[4]=0u+0x00000000u; // 801B2988
  c->r[5]=R32(c->r[31]+0x00000084u); // 801B298C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2990
  c->lr=0x801B2998u; f_800EEE08(c); // 801B2994
  W32(c->r[31]+0x00000080u,c->r[3]); // 801B2998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B299C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B29A0
  c->lr=c->r[0]; // 801B29A4
  c->r[1]=c->r[1]+0x00000010u; // 801B29A8
  return; // 801B29AC
}

// fn_801B29B0
void f_801B29B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000080u); // 801B29B0
  return; // 801B29B4
}

// fn_801B29B8
void f_801B29B8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B29B8
  W32(c->r[3]+0x00000080u,c->r[0]); // 801B29BC
  return; // 801B29C0
}

// fn_801B29C4
void f_801B29C4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801B29C4
  c->r[0]=0u+0x00000001u; // 801B29C8
  if (!crb(c,1)) { goto L_801B29D4; } // 801B29CC
  c->r[0]=c->r[4]|c->r[4]; // 801B29D0
L_801B29D4:;
  W32(c->r[3]+0x00000084u,c->r[0]); // 801B29D4
  return; // 801B29D8
}

// fn_801B29DC
void f_801B29DC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000068u); // 801B29DC
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 801B29E0
  c->r[6]=R32(c->r[3]+0x0000006Cu); // 801B29E4
  c->r[0]=c->r[5]+0x00000001u; // 801B29E8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801B29EC
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 801B29F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B29F4
  if (!crb(c,1)) { goto L_801B2A04; } // 801B29F8
  c->r[3]=c->r[4]|c->r[4]; // 801B29FC
  return; // 801B2A00
L_801B2A04:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801B2A04
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 801B2A08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801B2A0C
  c->r[3]=c->r[6]-c->r[0]; // 801B2A10
  return; // 801B2A14
}

// fn_801B2A18
void f_801B2A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2A18
  c->r[0]=c->lr; // 801B2A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2A24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2A28
  c->r[30]=c->r[3]|c->r[3]; // 801B2A2C
  c->lr=0x801B2A34u; f_801B29DC(c); // 801B2A30
  c->r[31]=c->r[3]|c->r[3]; // 801B2A34
  c->r[3]=c->r[30]|c->r[30]; // 801B2A38
  c->r[4]=c->r[31]|c->r[31]; // 801B2A3C
  c->lr=0x801B2A44u; f_801B1F30(c); // 801B2A40
  c->r[3]=R32(c->r[30]+0x00000064u); // 801B2A44
  c->r[3]=c->r[3]+0x00000001u; // 801B2A48
  W32(c->r[30]+0x00000064u,c->r[3]); // 801B2A4C
  c->r[4]=0u+0x00000000u; // 801B2A50
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B2A54
  c->lr=0x801B2A5Cu; f_800EEE08(c); // 801B2A58
  W32(c->r[30]+0x00000064u,c->r[3]); // 801B2A5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2A60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2A64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2A68
  c->lr=c->r[0]; // 801B2A6C
  c->r[1]=c->r[1]+0x00000010u; // 801B2A70
  return; // 801B2A74
}

// fn_801B2A78
void f_801B2A78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2A78
  c->r[0]=c->lr; // 801B2A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2A84
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2A88
  c->r[30]=c->r[3]|c->r[3]; // 801B2A8C
  c->lr=0x801B2A94u; f_801B29DC(c); // 801B2A90
  c->r[31]=c->r[3]|c->r[3]; // 801B2A94
  c->r[3]=c->r[30]|c->r[30]; // 801B2A98
  c->r[4]=c->r[31]|c->r[31]; // 801B2A9C
  c->lr=0x801B2AA4u; f_801B1F30(c); // 801B2AA0
  c->r[3]=R32(c->r[30]+0x00000064u); // 801B2AA4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2AA8
  W32(c->r[30]+0x00000064u,c->r[3]); // 801B2AAC
  c->r[4]=0u+0x00000000u; // 801B2AB0
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B2AB4
  c->lr=0x801B2ABCu; f_800EEE08(c); // 801B2AB8
  W32(c->r[30]+0x00000064u,c->r[3]); // 801B2ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2AC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2AC8
  c->lr=c->r[0]; // 801B2ACC
  c->r[1]=c->r[1]+0x00000010u; // 801B2AD0
  return; // 801B2AD4
}

// fn_801B2AD8
void f_801B2AD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2AD8
  c->r[0]=c->lr; // 801B2ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2AE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2AE4
  c->r[31]=c->r[3]|c->r[3]; // 801B2AE8
  c->lr=0x801B2AF0u; f_801B29DC(c); // 801B2AEC
  c->r[0]=R32(c->r[31]+0x00000064u); // 801B2AF0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B2AF4
  if (crb(c,0)) { goto L_801B2B04; } // 801B2AF8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B2AFC
  W32(c->r[31]+0x00000064u,c->r[0]); // 801B2B00
L_801B2B04:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2B04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2B08
  c->lr=c->r[0]; // 801B2B0C
  c->r[1]=c->r[1]+0x00000010u; // 801B2B10
  return; // 801B2B14
}

// fn_801B2B18
void f_801B2B18(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2B18
  W32(c->r[3]+0x00000064u,c->r[0]); // 801B2B1C
  return; // 801B2B20
}

// fn_801B2B24
void f_801B2B24(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000064u); // 801B2B24
  return; // 801B2B28
}

// fn_801B2B2C
void f_801B2B2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2B2C
  c->r[0]=c->lr; // 801B2B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2B34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2B38
  c->r[31]=c->r[3]|c->r[3]; // 801B2B3C
  c->r[4]=R32(c->r[3]+0x00000060u); // 801B2B40
  c->lr=0x801B2B48u; f_801B1F30(c); // 801B2B44
  c->r[3]=R32(c->r[31]+0x00000068u); // 801B2B48
  c->r[3]=c->r[3]+0x00000001u; // 801B2B4C
  W32(c->r[31]+0x00000068u,c->r[3]); // 801B2B50
  c->r[4]=0u+0x00000000u; // 801B2B54
  c->r[5]=R32(c->r[31]+0x00000060u); // 801B2B58
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2B5C
  c->lr=0x801B2B64u; f_800EEE08(c); // 801B2B60
  W32(c->r[31]+0x00000068u,c->r[3]); // 801B2B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2B6C
  c->lr=c->r[0]; // 801B2B70
  c->r[1]=c->r[1]+0x00000010u; // 801B2B74
  return; // 801B2B78
}

// fn_801B2B7C
void f_801B2B7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2B7C
  c->r[0]=c->lr; // 801B2B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2B84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2B88
  c->r[31]=c->r[3]|c->r[3]; // 801B2B8C
  c->r[4]=R32(c->r[3]+0x00000060u); // 801B2B90
  c->lr=0x801B2B98u; f_801B1F30(c); // 801B2B94
  c->r[3]=R32(c->r[31]+0x00000068u); // 801B2B98
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2B9C
  W32(c->r[31]+0x00000068u,c->r[3]); // 801B2BA0
  c->r[4]=0u+0x00000000u; // 801B2BA4
  c->r[5]=R32(c->r[31]+0x00000060u); // 801B2BA8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2BAC
  c->lr=0x801B2BB4u; f_800EEE08(c); // 801B2BB0
  W32(c->r[31]+0x00000068u,c->r[3]); // 801B2BB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2BB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2BBC
  c->lr=c->r[0]; // 801B2BC0
  c->r[1]=c->r[1]+0x00000010u; // 801B2BC4
  return; // 801B2BC8
}

// fn_801B2BCC
void f_801B2BCC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000068u); // 801B2BCC
  return; // 801B2BD0
}

// fn_801B2BD4
void f_801B2BD4(Ctx* __restrict c) {
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 801B2BD4
  return; // 801B2BD8
}

// fn_801B2BDC
void f_801B2BDC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000060u,c->r[4]); // 801B2BDC
  return; // 801B2BE0
}

// fn_801B2BE4
void f_801B2BE4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801B2BE4
  if (crb(c,1)) { goto L_801B2BF0; } // 801B2BE8
  c->r[4]=0u+0x00000001u; // 801B2BEC
L_801B2BF0:;
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 801B2BF0
  return; // 801B2BF4
}

// fn_801B2BF8
void f_801B2BF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2BF8
  c->r[0]=c->lr; // 801B2BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2C00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2C04
  c->r[31]=c->r[3]|c->r[3]; // 801B2C08
  c->lr=0x801B2C10u; f_801B1EFC(c); // 801B2C0C
  c->r[3]=R32(c->r[31]+0x00000078u); // 801B2C10
  c->r[3]=c->r[3]+0x00000001u; // 801B2C14
  W32(c->r[31]+0x00000078u,c->r[3]); // 801B2C18
  c->r[4]=0u+0x00000000u; // 801B2C1C
  c->r[5]=R32(c->r[31]+0x0000007Cu); // 801B2C20
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2C24
  c->lr=0x801B2C2Cu; f_800EEE08(c); // 801B2C28
  W32(c->r[31]+0x00000078u,c->r[3]); // 801B2C2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2C30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2C34
  c->lr=c->r[0]; // 801B2C38
  c->r[1]=c->r[1]+0x00000010u; // 801B2C3C
  return; // 801B2C40
}

// fn_801B2C44
void f_801B2C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2C44
  c->r[0]=c->lr; // 801B2C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2C50
  c->r[31]=c->r[3]|c->r[3]; // 801B2C54
  c->lr=0x801B2C5Cu; f_801B1EFC(c); // 801B2C58
  c->r[3]=R32(c->r[31]+0x00000078u); // 801B2C5C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2C60
  W32(c->r[31]+0x00000078u,c->r[3]); // 801B2C64
  c->r[4]=0u+0x00000000u; // 801B2C68
  c->r[5]=R32(c->r[31]+0x0000007Cu); // 801B2C6C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2C70
  c->lr=0x801B2C78u; f_800EEE08(c); // 801B2C74
  W32(c->r[31]+0x00000078u,c->r[3]); // 801B2C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2C80
  c->lr=c->r[0]; // 801B2C84
  c->r[1]=c->r[1]+0x00000010u; // 801B2C88
  return; // 801B2C8C
}

// fn_801B2C90
void f_801B2C90(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2C90
  W32(c->r[3]+0x00000078u,c->r[0]); // 801B2C94
  return; // 801B2C98
}

// fn_801B2C9C
void f_801B2C9C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000078u); // 801B2C9C
  return; // 801B2CA0
}

// fn_801B2CA4
void f_801B2CA4(Ctx* __restrict c) {
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 801B2CA4
  return; // 801B2CA8
}

// fn_801B2CAC
void f_801B2CAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2CAC
  c->r[0]=c->lr; // 801B2CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2CB8
  c->r[31]=c->r[3]|c->r[3]; // 801B2CBC
  c->lr=0x801B2CC4u; f_801B1EFC(c); // 801B2CC0
  c->r[3]=R32(c->r[31]+0x00000088u); // 801B2CC4
  c->r[3]=c->r[3]+0x00000001u; // 801B2CC8
  W32(c->r[31]+0x00000088u,c->r[3]); // 801B2CCC
  c->r[4]=0u+0x00000000u; // 801B2CD0
  c->r[5]=R32(c->r[31]+0x0000008Cu); // 801B2CD4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2CD8
  c->lr=0x801B2CE0u; f_800EEE08(c); // 801B2CDC
  W32(c->r[31]+0x00000088u,c->r[3]); // 801B2CE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2CE8
  c->lr=c->r[0]; // 801B2CEC
  c->r[1]=c->r[1]+0x00000010u; // 801B2CF0
  return; // 801B2CF4
}

// fn_801B2CF8
void f_801B2CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2CF8
  c->r[0]=c->lr; // 801B2CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2D04
  c->r[31]=c->r[3]|c->r[3]; // 801B2D08
  c->lr=0x801B2D10u; f_801B1EFC(c); // 801B2D0C
  c->r[3]=R32(c->r[31]+0x00000088u); // 801B2D10
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2D14
  W32(c->r[31]+0x00000088u,c->r[3]); // 801B2D18
  c->r[4]=0u+0x00000000u; // 801B2D1C
  c->r[5]=R32(c->r[31]+0x0000008Cu); // 801B2D20
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2D24
  c->lr=0x801B2D2Cu; f_800EEE08(c); // 801B2D28
  W32(c->r[31]+0x00000088u,c->r[3]); // 801B2D2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2D34
  c->lr=c->r[0]; // 801B2D38
  c->r[1]=c->r[1]+0x00000010u; // 801B2D3C
  return; // 801B2D40
}

// fn_801B2D44
void f_801B2D44(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000088u); // 801B2D44
  return; // 801B2D48
}

// fn_801B2D4C
void f_801B2D4C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 801B2D4C
  return; // 801B2D50
}

// fn_801B2D54
void f_801B2D54(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2D54
  W32(c->r[3]+0x00000048u,c->r[0]); // 801B2D58
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801B2D5C
  W32(c->r[3]+0x00000050u,c->r[0]); // 801B2D60
  W32(c->r[3]+0x00000054u,c->r[0]); // 801B2D64
  W32(c->r[3]+0x00000058u,c->r[0]); // 801B2D68
  W32(c->r[3]+0x00000070u,c->r[0]); // 801B2D6C
  W32(c->r[3]+0x00000074u,c->r[0]); // 801B2D70
  W32(c->r[3]+0x00000080u,c->r[0]); // 801B2D74
  W32(c->r[3]+0x00000084u,c->r[0]); // 801B2D78
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801B2D7C
  W32(c->r[3]+0x00000060u,c->r[0]); // 801B2D80
  W32(c->r[3]+0x00000064u,c->r[0]); // 801B2D84
  W32(c->r[3]+0x00000068u,c->r[0]); // 801B2D88
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801B2D8C
  W32(c->r[3]+0x00000078u,c->r[0]); // 801B2D90
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801B2D94
  W32(c->r[3]+0x00000088u,c->r[0]); // 801B2D98
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 801B2D9C
  return; // 801B2DA0
}

// fn_801B2DA4
void f_801B2DA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2DA4
  c->r[0]=c->lr; // 801B2DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2DAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2DB0
  c->r[31]=c->r[3]|c->r[3]; // 801B2DB4
  c->lr=0x801B2DBCu; f_801B1EFC(c); // 801B2DB8
  c->r[3]=R32(c->r[31]+0x00000090u); // 801B2DBC
  c->r[3]=c->r[3]+0x00000001u; // 801B2DC0
  W32(c->r[31]+0x00000090u,c->r[3]); // 801B2DC4
  c->r[4]=0u+0x00000000u; // 801B2DC8
  c->r[5]=R32(c->r[31]+0x00000094u); // 801B2DCC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2DD0
  c->lr=0x801B2DD8u; f_800EEE08(c); // 801B2DD4
  W32(c->r[31]+0x00000090u,c->r[3]); // 801B2DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2DE0
  c->lr=c->r[0]; // 801B2DE4
  c->r[1]=c->r[1]+0x00000010u; // 801B2DE8
  return; // 801B2DEC
}

// fn_801B2DF0
void f_801B2DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2DF0
  c->r[0]=c->lr; // 801B2DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2DFC
  c->r[31]=c->r[3]|c->r[3]; // 801B2E00
  c->lr=0x801B2E08u; f_801B1EFC(c); // 801B2E04
  c->r[3]=R32(c->r[31]+0x00000090u); // 801B2E08
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2E0C
  W32(c->r[31]+0x00000090u,c->r[3]); // 801B2E10
  c->r[4]=0u+0x00000000u; // 801B2E14
  c->r[5]=R32(c->r[31]+0x00000094u); // 801B2E18
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2E1C
  c->lr=0x801B2E24u; f_800EEE08(c); // 801B2E20
  W32(c->r[31]+0x00000090u,c->r[3]); // 801B2E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2E28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2E2C
  c->lr=c->r[0]; // 801B2E30
  c->r[1]=c->r[1]+0x00000010u; // 801B2E34
  return; // 801B2E38
}

// fn_801B2E3C
void f_801B2E3C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000090u); // 801B2E3C
  return; // 801B2E40
}

// fn_801B2E44
void f_801B2E44(Ctx* __restrict c) {
  W32(c->r[3]+0x00000094u,c->r[4]); // 801B2E44
  return; // 801B2E48
}

// fn_801B2E4C
void f_801B2E4C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000A4u); // 801B2E4C
  c->r[4]=R32(c->r[3]+0x00000098u); // 801B2E50
  c->r[6]=R32(c->r[3]+0x000000A8u); // 801B2E54
  c->r[0]=c->r[5]+0x00000001u; // 801B2E58
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801B2E5C
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 801B2E60
  cmps(c,0,(int32_t)c->r[0],0); // 801B2E64
  if (!crb(c,1)) { goto L_801B2E74; } // 801B2E68
  c->r[3]=c->r[4]|c->r[4]; // 801B2E6C
  return; // 801B2E70
L_801B2E74:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801B2E74
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 801B2E78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801B2E7C
  c->r[3]=c->r[6]-c->r[0]; // 801B2E80
  return; // 801B2E84
}

// fn_801B2E88
void f_801B2E88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2E88
  c->r[0]=c->lr; // 801B2E8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2E90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2E94
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2E98
  c->r[30]=c->r[3]|c->r[3]; // 801B2E9C
  c->lr=0x801B2EA4u; f_801B2E4C(c); // 801B2EA0
  c->r[31]=c->r[3]|c->r[3]; // 801B2EA4
  c->r[3]=c->r[30]|c->r[30]; // 801B2EA8
  c->r[4]=c->r[31]|c->r[31]; // 801B2EAC
  c->lr=0x801B2EB4u; f_801B1F30(c); // 801B2EB0
  c->r[3]=R32(c->r[30]+0x000000A0u); // 801B2EB4
  c->r[3]=c->r[3]+0x00000001u; // 801B2EB8
  W32(c->r[30]+0x000000A0u,c->r[3]); // 801B2EBC
  c->r[4]=0u+0x00000000u; // 801B2EC0
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B2EC4
  c->lr=0x801B2ECCu; f_800EEE08(c); // 801B2EC8
  W32(c->r[30]+0x000000A0u,c->r[3]); // 801B2ECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2ED0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2ED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2ED8
  c->lr=c->r[0]; // 801B2EDC
  c->r[1]=c->r[1]+0x00000010u; // 801B2EE0
  return; // 801B2EE4
}

// fn_801B2EE8
void f_801B2EE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2EE8
  c->r[0]=c->lr; // 801B2EEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2EF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2EF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2EF8
  c->r[30]=c->r[3]|c->r[3]; // 801B2EFC
  c->lr=0x801B2F04u; f_801B2E4C(c); // 801B2F00
  c->r[31]=c->r[3]|c->r[3]; // 801B2F04
  c->r[3]=c->r[30]|c->r[30]; // 801B2F08
  c->r[4]=c->r[31]|c->r[31]; // 801B2F0C
  c->lr=0x801B2F14u; f_801B1F30(c); // 801B2F10
  c->r[3]=R32(c->r[30]+0x000000A0u); // 801B2F14
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2F18
  W32(c->r[30]+0x000000A0u,c->r[3]); // 801B2F1C
  c->r[4]=0u+0x00000000u; // 801B2F20
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B2F24
  c->lr=0x801B2F2Cu; f_800EEE08(c); // 801B2F28
  W32(c->r[30]+0x000000A0u,c->r[3]); // 801B2F2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2F30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2F34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2F38
  c->lr=c->r[0]; // 801B2F3C
  c->r[1]=c->r[1]+0x00000010u; // 801B2F40
  return; // 801B2F44
}

// fn_801B2F48
void f_801B2F48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2F48
  c->r[0]=c->lr; // 801B2F4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2F50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2F54
  c->r[31]=c->r[3]|c->r[3]; // 801B2F58
  c->lr=0x801B2F60u; f_801B2E4C(c); // 801B2F5C
  c->r[0]=R32(c->r[31]+0x000000A0u); // 801B2F60
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B2F64
  if (crb(c,0)) { goto L_801B2F74; } // 801B2F68
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B2F6C
  W32(c->r[31]+0x000000A0u,c->r[0]); // 801B2F70
L_801B2F74:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2F74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2F78
  c->lr=c->r[0]; // 801B2F7C
  c->r[1]=c->r[1]+0x00000010u; // 801B2F80
  return; // 801B2F84
}

// fn_801B2F88
void f_801B2F88(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000A0u); // 801B2F88
  return; // 801B2F8C
}

// fn_801B2F90
void f_801B2F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2F90
  c->r[0]=c->lr; // 801B2F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2F9C
  c->r[31]=c->r[3]|c->r[3]; // 801B2FA0
  c->r[4]=R32(c->r[3]+0x0000009Cu); // 801B2FA4
  c->lr=0x801B2FACu; f_801B1F30(c); // 801B2FA8
  c->r[3]=R32(c->r[31]+0x000000A4u); // 801B2FAC
  c->r[3]=c->r[3]+0x00000001u; // 801B2FB0
  W32(c->r[31]+0x000000A4u,c->r[3]); // 801B2FB4
  c->r[4]=0u+0x00000000u; // 801B2FB8
  c->r[5]=R32(c->r[31]+0x0000009Cu); // 801B2FBC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2FC0
  c->lr=0x801B2FC8u; f_800EEE08(c); // 801B2FC4
  W32(c->r[31]+0x000000A4u,c->r[3]); // 801B2FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2FD0
  c->lr=c->r[0]; // 801B2FD4
  c->r[1]=c->r[1]+0x00000010u; // 801B2FD8
  return; // 801B2FDC
}

// fn_801B2FE0
void f_801B2FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2FE0
  c->r[0]=c->lr; // 801B2FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2FE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2FEC
  c->r[31]=c->r[3]|c->r[3]; // 801B2FF0
  c->r[4]=R32(c->r[3]+0x0000009Cu); // 801B2FF4
  c->lr=0x801B2FFCu; f_801B1F30(c); // 801B2FF8
  c->r[3]=R32(c->r[31]+0x000000A4u); // 801B2FFC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B3000
  W32(c->r[31]+0x000000A4u,c->r[3]); // 801B3004
  c->r[4]=0u+0x00000000u; // 801B3008
  c->r[5]=R32(c->r[31]+0x0000009Cu); // 801B300C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B3010
  c->lr=0x801B3018u; f_800EEE08(c); // 801B3014
  W32(c->r[31]+0x000000A4u,c->r[3]); // 801B3018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B301C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3020
  c->lr=c->r[0]; // 801B3024
  c->r[1]=c->r[1]+0x00000010u; // 801B3028
  return; // 801B302C
}

// fn_801B3030
void f_801B3030(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000A4u); // 801B3030
  return; // 801B3034
}

// fn_801B3038
void f_801B3038(Ctx* __restrict c) {
  W32(c->r[3]+0x00000098u,c->r[4]); // 801B3038
  return; // 801B303C
}

// fn_801B3040
void f_801B3040(Ctx* __restrict c) {
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 801B3040
  return; // 801B3044
}

// fn_801B3048
void f_801B3048(Ctx* __restrict c) {
  W32(c->r[3]+0x000000A8u,c->r[4]); // 801B3048
  return; // 801B304C
}

// fn_801B3050
void f_801B3050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3050
  c->r[0]=c->lr; // 801B3054
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B305C
  c->r[31]=c->r[3]|c->r[3]; // 801B3060
  c->lr=0x801B3068u; f_801B1EFC(c); // 801B3064
  c->r[3]=R32(c->r[31]+0x000000ACu); // 801B3068
  c->r[3]=c->r[3]+0x00000001u; // 801B306C
  W32(c->r[31]+0x000000ACu,c->r[3]); // 801B3070
  c->r[4]=0u+0x00000000u; // 801B3074
  c->r[5]=R32(c->r[31]+0x000000B0u); // 801B3078
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B307C
  c->lr=0x801B3084u; f_800EEE08(c); // 801B3080
  W32(c->r[31]+0x000000ACu,c->r[3]); // 801B3084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3088
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B308C
  c->lr=c->r[0]; // 801B3090
  c->r[1]=c->r[1]+0x00000010u; // 801B3094
  return; // 801B3098
}

// fn_801B309C
void f_801B309C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B309C
  c->r[0]=c->lr; // 801B30A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B30A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B30A8
  c->r[31]=c->r[3]|c->r[3]; // 801B30AC
  c->lr=0x801B30B4u; f_801B1EFC(c); // 801B30B0
  c->r[3]=R32(c->r[31]+0x000000ACu); // 801B30B4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B30B8
  W32(c->r[31]+0x000000ACu,c->r[3]); // 801B30BC
  c->r[4]=0u+0x00000000u; // 801B30C0
  c->r[5]=R32(c->r[31]+0x000000B0u); // 801B30C4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B30C8
  c->lr=0x801B30D0u; f_800EEE08(c); // 801B30CC
  W32(c->r[31]+0x000000ACu,c->r[3]); // 801B30D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B30D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B30D8
  c->lr=c->r[0]; // 801B30DC
  c->r[1]=c->r[1]+0x00000010u; // 801B30E0
  return; // 801B30E4
}

// fn_801B30E8
void f_801B30E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ACu); // 801B30E8
  return; // 801B30EC
}

// fn_801B30F0
void f_801B30F0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B30F0
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801B30F4
  return; // 801B30F8
}

// fn_801B30FC
void f_801B30FC(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 801B30FC
  return; // 801B3100
}

// fn_801B3104
void f_801B3104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3104
  c->r[0]=c->lr; // 801B3108
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B310C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3110
  c->r[31]=c->r[3]|c->r[3]; // 801B3114
  c->r[4]=R32(c->r[3]+0x000000C0u); // 801B3118
  c->lr=0x801B3120u; f_801B1F30(c); // 801B311C
  c->r[3]=R32(c->r[31]+0x000000BCu); // 801B3120
  c->r[3]=c->r[3]+0x00000001u; // 801B3124
  W32(c->r[31]+0x000000BCu,c->r[3]); // 801B3128
  c->r[4]=0u+0x00000000u; // 801B312C
  c->r[5]=R32(c->r[31]+0x000000C0u); // 801B3130
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B3134
  c->lr=0x801B313Cu; f_800EEE08(c); // 801B3138
  W32(c->r[31]+0x000000BCu,c->r[3]); // 801B313C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3140
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3144
  c->lr=c->r[0]; // 801B3148
  c->r[1]=c->r[1]+0x00000010u; // 801B314C
  return; // 801B3150
}

// fn_801B3154
void f_801B3154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3154
  c->r[0]=c->lr; // 801B3158
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B315C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3160
  c->r[31]=c->r[3]|c->r[3]; // 801B3164
  c->r[4]=R32(c->r[3]+0x000000C0u); // 801B3168
  c->lr=0x801B3170u; f_801B1F30(c); // 801B316C
  c->r[3]=R32(c->r[31]+0x000000BCu); // 801B3170
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B3174
  W32(c->r[31]+0x000000BCu,c->r[3]); // 801B3178
  c->r[4]=0u+0x00000000u; // 801B317C
  c->r[5]=R32(c->r[31]+0x000000C0u); // 801B3180
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B3184
  c->lr=0x801B318Cu; f_800EEE08(c); // 801B3188
  W32(c->r[31]+0x000000BCu,c->r[3]); // 801B318C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3190
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3194
  c->lr=c->r[0]; // 801B3198
  c->r[1]=c->r[1]+0x00000010u; // 801B319C
  return; // 801B31A0
}

// fn_801B31A4
void f_801B31A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000BCu); // 801B31A4
  return; // 801B31A8
}

// fn_801B31AC
void f_801B31AC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B31AC
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801B31B0
  return; // 801B31B4
}

// fn_801B31B8
void f_801B31B8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801B31B8
  c->r[0]=0u+0x00000001u; // 801B31BC
  if (!crb(c,1)) { goto L_801B31C8; } // 801B31C0
  c->r[0]=c->r[4]|c->r[4]; // 801B31C4
L_801B31C8:;
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801B31C8
  return; // 801B31CC
}

// fn_801B31D0
void f_801B31D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B31D0
  c->r[0]=c->lr; // 801B31D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B31D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B31DC
  c->r[31]=c->r[3]|c->r[3]; // 801B31E0
  c->lr=0x801B31E8u; f_801B1EFC(c); // 801B31E4
  c->r[3]=R32(c->r[31]+0x000000B4u); // 801B31E8
  c->r[3]=c->r[3]+0x00000001u; // 801B31EC
  W32(c->r[31]+0x000000B4u,c->r[3]); // 801B31F0
  c->r[4]=0u+0x00000000u; // 801B31F4
  c->r[5]=R32(c->r[31]+0x000000B8u); // 801B31F8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B31FC
  c->lr=0x801B3204u; f_800EEE08(c); // 801B3200
  W32(c->r[31]+0x000000B4u,c->r[3]); // 801B3204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3208
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B320C
  c->lr=c->r[0]; // 801B3210
  c->r[1]=c->r[1]+0x00000010u; // 801B3214
  return; // 801B3218
}

// fn_801B321C
void f_801B321C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B321C
  c->r[0]=c->lr; // 801B3220
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3228
  c->r[31]=c->r[3]|c->r[3]; // 801B322C
  c->lr=0x801B3234u; f_801B1EFC(c); // 801B3230
  c->r[3]=R32(c->r[31]+0x000000B4u); // 801B3234
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B3238
  W32(c->r[31]+0x000000B4u,c->r[3]); // 801B323C
  c->r[4]=0u+0x00000000u; // 801B3240
  c->r[5]=R32(c->r[31]+0x000000B8u); // 801B3244
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B3248
  c->lr=0x801B3250u; f_800EEE08(c); // 801B324C
  W32(c->r[31]+0x000000B4u,c->r[3]); // 801B3250
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3254
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3258
  c->lr=c->r[0]; // 801B325C
  c->r[1]=c->r[1]+0x00000010u; // 801B3260
  return; // 801B3264
}

// fn_801B3268
void f_801B3268(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000B4u); // 801B3268
  return; // 801B326C
}

// fn_801B3270
void f_801B3270(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B8u,c->r[4]); // 801B3270
  return; // 801B3274
}

// fn_801B3278
void f_801B3278(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3278
  c->r[0]=c->lr; // 801B327C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3284
  c->r[31]=c->r[3]|c->r[3]; // 801B3288
  c->r[4]=R32(c->r[3]+0x000000C8u); // 801B328C
  c->lr=0x801B3294u; f_801B1F30(c); // 801B3290
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B3294
  c->r[3]=c->r[3]+0x00000001u; // 801B3298
  W32(c->r[31]+0x000000C4u,c->r[3]); // 801B329C
  c->r[4]=0u+0x00000000u; // 801B32A0
  c->r[5]=R32(c->r[31]+0x000000C8u); // 801B32A4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B32A8
  c->lr=0x801B32B0u; f_800EEE08(c); // 801B32AC
  W32(c->r[31]+0x000000C4u,c->r[3]); // 801B32B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B32B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B32B8
  c->lr=c->r[0]; // 801B32BC
  c->r[1]=c->r[1]+0x00000010u; // 801B32C0
  return; // 801B32C4
}

// fn_801B32C8
void f_801B32C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B32C8
  c->r[0]=c->lr; // 801B32CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B32D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B32D4
  c->r[31]=c->r[3]|c->r[3]; // 801B32D8
  c->r[4]=R32(c->r[3]+0x000000C8u); // 801B32DC
  c->lr=0x801B32E4u; f_801B1F30(c); // 801B32E0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B32E4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B32E8
  W32(c->r[31]+0x000000C4u,c->r[3]); // 801B32EC
  c->r[4]=0u+0x00000000u; // 801B32F0
  c->r[5]=R32(c->r[31]+0x000000C8u); // 801B32F4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B32F8
  c->lr=0x801B3300u; f_800EEE08(c); // 801B32FC
  W32(c->r[31]+0x000000C4u,c->r[3]); // 801B3300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3304
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3308
  c->lr=c->r[0]; // 801B330C
  c->r[1]=c->r[1]+0x00000010u; // 801B3310
  return; // 801B3314
}

// fn_801B3318
void f_801B3318(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801B3318
  return; // 801B331C
}

// fn_801B3320
void f_801B3320(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B3320
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801B3324
  return; // 801B3328
}

// fn_801B332C
void f_801B332C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801B332C
  return; // 801B3330
}

// fn_801B3334
void f_801B3334(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B3334
  W32(c->r[3]+0x00000090u,c->r[0]); // 801B3338
  W32(c->r[3]+0x00000094u,c->r[0]); // 801B333C
  W32(c->r[3]+0x00000098u,c->r[0]); // 801B3340
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 801B3344
  W32(c->r[3]+0x000000A0u,c->r[0]); // 801B3348
  W32(c->r[3]+0x000000A4u,c->r[0]); // 801B334C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801B3350
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801B3354
  W32(c->r[3]+0x000000B0u,c->r[0]); // 801B3358
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801B335C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801B3360
  W32(c->r[3]+0x000000B4u,c->r[0]); // 801B3364
  W32(c->r[3]+0x000000B8u,c->r[0]); // 801B3368
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801B336C
  W32(c->r[3]+0x000000C8u,c->r[0]); // 801B3370
  return; // 801B3374
}

// fn_801B3378
void f_801B3378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3378
  c->r[0]=c->lr; // 801B337C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3384
  c->r[31]=c->r[3]|c->r[3]; // 801B3388
  c->lr=0x801B3390u; f_80111CF0(c); // 801B338C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3390
  if (crb(c,2)) { goto L_801B33A0; } // 801B3394
  c->r[3]=0u+0x00000000u; // 801B3398
  goto L_801B33AC; // 801B339C
L_801B33A0:;
  c->lr=0x801B33A4u; f_8007B524(c); // 801B33A0
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B33A4
  c->lr=0x801B33ACu; f_800A6194(c); // 801B33A8
L_801B33AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B33AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B33B0
  c->lr=c->r[0]; // 801B33B4
  c->r[1]=c->r[1]+0x00000010u; // 801B33B8
  return; // 801B33BC
}

// fn_801B33C0
void f_801B33C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B33C0
  c->r[0]=c->lr; // 801B33C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B33C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B33CC
  c->r[31]=c->r[3]|c->r[3]; // 801B33D0
  c->lr=0x801B33D8u; f_80111CF0(c); // 801B33D4
  cmps(c,0,(int32_t)c->r[3],0); // 801B33D8
  if (crb(c,2)) { goto L_801B33E8; } // 801B33DC
  c->r[3]=0u+0x00000000u; // 801B33E0
  goto L_801B33F4; // 801B33E4
L_801B33E8:;
  c->lr=0x801B33ECu; f_8007B524(c); // 801B33E8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B33EC
  c->lr=0x801B33F4u; f_800A61BC(c); // 801B33F0
L_801B33F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B33F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B33F8
  c->lr=c->r[0]; // 801B33FC
  c->r[1]=c->r[1]+0x00000010u; // 801B3400
  return; // 801B3404
}

// fn_801B3408
void f_801B3408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3408
  c->r[0]=c->lr; // 801B340C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3414
  c->r[31]=c->r[3]|c->r[3]; // 801B3418
  c->lr=0x801B3420u; f_80111CF0(c); // 801B341C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3420
  if (crb(c,2)) { goto L_801B3430; } // 801B3424
  c->r[3]=0u+0x00000001u; // 801B3428
  goto L_801B343C; // 801B342C
L_801B3430:;
  c->lr=0x801B3434u; f_8007B524(c); // 801B3430
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B3434
  c->lr=0x801B343Cu; f_800A61E8(c); // 801B3438
L_801B343C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B343C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3440
  c->lr=c->r[0]; // 801B3444
  c->r[1]=c->r[1]+0x00000010u; // 801B3448
  return; // 801B344C
}

// fn_801B3450
void f_801B3450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3450
  c->r[0]=c->lr; // 801B3454
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B345C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3460
  c->r[30]=c->r[3]|c->r[3]; // 801B3464
  c->lr=0x801B346Cu; f_80111CF0(c); // 801B3468
  cmps(c,0,(int32_t)c->r[3],0); // 801B346C
  if (crb(c,2)) { goto L_801B347C; } // 801B3470
  c->r[31]=0u+0x00003A98u; // 801B3474
  goto L_801B3488; // 801B3478
L_801B347C:;
  c->lr=0x801B3480u; f_8007B524(c); // 801B347C
  c->lr=0x801B3484u; f_800A49DC(c); // 801B3480
  c->r[31]=c->r[3]|c->r[3]; // 801B3484
L_801B3488:;
  c->lr=0x801B348Cu; f_80111CF0(c); // 801B3488
  cmps(c,0,(int32_t)c->r[3],0); // 801B348C
  if (crb(c,2)) { goto L_801B349C; } // 801B3490
  c->r[3]=0u+0x00002710u; // 801B3494
  goto L_801B34A8; // 801B3498
L_801B349C:;
  c->lr=0x801B34A0u; f_8007B524(c); // 801B349C
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B34A0
  c->lr=0x801B34A8u; f_800A616C(c); // 801B34A4
L_801B34A8:;
  c->r[0]=c->r[3]^c->r[31]; // 801B34A8
  c->r[4]=sraw(c,c->r[0],1); // 801B34AC
  c->r[0]=c->r[0]&c->r[3]; // 801B34B0
  c->r[0]=c->r[4]-c->r[0]; // 801B34B4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B34B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B34BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B34C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B34C4
  c->lr=c->r[0]; // 801B34C8
  c->r[1]=c->r[1]+0x00000010u; // 801B34CC
  return; // 801B34D0
}

// fn_801B34D4
void f_801B34D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B34D4
  c->r[0]=c->lr; // 801B34D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B34DC
  c->lr=0x801B34E4u; f_80111CF0(c); // 801B34E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B34E4
  if (crb(c,2)) { goto L_801B34F4; } // 801B34E8
  c->r[3]=0u+0x00000005u; // 801B34EC
  goto L_801B34FC; // 801B34F0
L_801B34F4:;
  c->lr=0x801B34F8u; f_8007B524(c); // 801B34F4
  c->lr=0x801B34FCu; f_800A6234(c); // 801B34F8
L_801B34FC:;
  c->r[0]=0u-c->r[3]; // 801B34FC
  c->r[0]=c->r[0]&~c->r[3]; // 801B3500
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B3504
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3508
  c->lr=c->r[0]; // 801B350C
  c->r[1]=c->r[1]+0x00000010u; // 801B3510
  return; // 801B3514
}

// fn_801B3518
void f_801B3518(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3518
  c->r[0]=c->lr; // 801B351C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3520
  c->lr=0x801B3528u; f_80111CF0(c); // 801B3524
  cmps(c,0,(int32_t)c->r[3],0); // 801B3528
  if (crb(c,2)) { goto L_801B3538; } // 801B352C
  c->r[3]=0u+0x00000001u; // 801B3530
  goto L_801B3540; // 801B3534
L_801B3538:;
  c->lr=0x801B353Cu; f_8007B524(c); // 801B3538
  c->lr=0x801B3540u; f_800A6748(c); // 801B353C
L_801B3540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3540
  c->lr=c->r[0]; // 801B3544
  c->r[1]=c->r[1]+0x00000010u; // 801B3548
  return; // 801B354C
}

// fn_801B3550
void f_801B3550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3550
  c->r[0]=c->lr; // 801B3554
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B355C
  c->lr=0x801B3564u; f_80111CF0(c); // 801B3560
  cmps(c,0,(int32_t)c->r[3],0); // 801B3564
  if (crb(c,2)) { goto L_801B3574; } // 801B3568
  c->r[31]=0u+0x00003A98u; // 801B356C
  goto L_801B3580; // 801B3570
L_801B3574:;
  c->lr=0x801B3578u; f_8007B524(c); // 801B3574
  c->lr=0x801B357Cu; f_800A49DC(c); // 801B3578
  c->r[31]=c->r[3]|c->r[3]; // 801B357C
L_801B3580:;
  c->lr=0x801B3584u; f_80111CF0(c); // 801B3580
  cmps(c,0,(int32_t)c->r[3],0); // 801B3584
  if (crb(c,2)) { goto L_801B3594; } // 801B3588
  c->r[3]=0u+0x00002710u; // 801B358C
  goto L_801B359C; // 801B3590
L_801B3594:;
  c->lr=0x801B3598u; f_8007B524(c); // 801B3594
  c->lr=0x801B359Cu; f_800A633C(c); // 801B3598
L_801B359C:;
  c->r[0]=c->r[3]^c->r[31]; // 801B359C
  c->r[4]=sraw(c,c->r[0],1); // 801B35A0
  c->r[0]=c->r[0]&c->r[3]; // 801B35A4
  c->r[0]=c->r[4]-c->r[0]; // 801B35A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B35AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B35B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B35B4
  c->lr=c->r[0]; // 801B35B8
  c->r[1]=c->r[1]+0x00000010u; // 801B35BC
  return; // 801B35C0
}

// fn_801B35C4
void f_801B35C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B35C4
  c->r[0]=c->lr; // 801B35C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B35CC
  c->lr=0x801B35D4u; f_80111CF0(c); // 801B35D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B35D4
  if (crb(c,2)) { goto L_801B35E4; } // 801B35D8
  c->r[3]=0u+0x00000001u; // 801B35DC
  goto L_801B35EC; // 801B35E0
L_801B35E4:;
  c->lr=0x801B35E8u; f_8007B524(c); // 801B35E4
  c->lr=0x801B35ECu; f_800A6750(c); // 801B35E8
L_801B35EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B35EC
  c->lr=c->r[0]; // 801B35F0
  c->r[1]=c->r[1]+0x00000010u; // 801B35F4
  return; // 801B35F8
}

// fn_801B35FC
void f_801B35FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B35FC
  c->r[0]=c->lr; // 801B3600
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3604
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3608
  c->lr=0x801B3610u; f_80111CF0(c); // 801B360C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3610
  if (crb(c,2)) { goto L_801B3620; } // 801B3614
  c->r[31]=0u+0x00003A98u; // 801B3618
  goto L_801B362C; // 801B361C
L_801B3620:;
  c->lr=0x801B3624u; f_8007B524(c); // 801B3620
  c->lr=0x801B3628u; f_800A49DC(c); // 801B3624
  c->r[31]=c->r[3]|c->r[3]; // 801B3628
L_801B362C:;
  c->lr=0x801B3630u; f_80111CF0(c); // 801B362C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3630
  if (crb(c,2)) { goto L_801B3640; } // 801B3634
  c->r[3]=0u+0x00002710u; // 801B3638
  goto L_801B3648; // 801B363C
L_801B3640:;
  c->lr=0x801B3644u; f_8007B524(c); // 801B3640
  c->lr=0x801B3648u; f_800A674C(c); // 801B3644
L_801B3648:;
  c->r[0]=c->r[3]^c->r[31]; // 801B3648
  c->r[4]=sraw(c,c->r[0],1); // 801B364C
  c->r[0]=c->r[0]&c->r[3]; // 801B3650
  c->r[0]=c->r[4]-c->r[0]; // 801B3654
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B3658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B365C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3660
  c->lr=c->r[0]; // 801B3664
  c->r[1]=c->r[1]+0x00000010u; // 801B3668
  return; // 801B366C
}

// fn_801B3670
void f_801B3670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3670
  c->r[0]=c->lr; // 801B3674
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B367C
  c->r[31]=c->r[3]|c->r[3]; // 801B3680
  c->lr=0x801B3688u; f_80111CF0(c); // 801B3684
  cmps(c,0,(int32_t)c->r[3],0); // 801B3688
  if (crb(c,2)) { goto L_801B3698; } // 801B368C
  c->r[3]=0u+0x00000001u; // 801B3690
  goto L_801B36A8; // 801B3694
L_801B3698:;
  c->lr=0x801B369Cu; f_8007B524(c); // 801B3698
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B369C
  c->r[5]=R32(c->r[31]+0x000000C4u); // 801B36A0
  c->lr=0x801B36A8u; f_800A3A2C(c); // 801B36A4
L_801B36A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B36A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B36AC
  c->lr=c->r[0]; // 801B36B0
  c->r[1]=c->r[1]+0x00000010u; // 801B36B4
  return; // 801B36B8
}

// fn_801B36BC
void f_801B36BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B36BC
  c->r[0]=c->lr; // 801B36C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B36C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B36C8
  c->r[31]=c->r[3]|c->r[3]; // 801B36CC
  c->lr=0x801B36D4u; f_80111CF0(c); // 801B36D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B36D4
  if (crb(c,2)) { goto L_801B36E4; } // 801B36D8
  c->r[3]=0u+0x00000000u; // 801B36DC
  goto L_801B36F0; // 801B36E0
L_801B36E4:;
  c->lr=0x801B36E8u; f_8007B524(c); // 801B36E4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B36E8
  c->lr=0x801B36F0u; f_800A38BC(c); // 801B36EC
L_801B36F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B36F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B36F4
  c->lr=c->r[0]; // 801B36F8
  c->r[1]=c->r[1]+0x00000010u; // 801B36FC
  return; // 801B3700
}

// fn_801B3704
void f_801B3704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3704
  c->r[0]=c->lr; // 801B3708
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B370C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3710
  c->r[31]=c->r[3]|c->r[3]; // 801B3714
  c->lr=0x801B371Cu; f_80111CF0(c); // 801B3718
  cmps(c,0,(int32_t)c->r[3],0); // 801B371C
  if (crb(c,2)) { goto L_801B372C; } // 801B3720
  c->r[3]=0u+0x00000000u; // 801B3724
  goto L_801B3738; // 801B3728
L_801B372C:;
  c->lr=0x801B3730u; f_8007B524(c); // 801B372C
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B3730
  c->lr=0x801B3738u; f_800A38C0(c); // 801B3734
L_801B3738:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3738
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B373C
  c->lr=c->r[0]; // 801B3740
  c->r[1]=c->r[1]+0x00000010u; // 801B3744
  return; // 801B3748
}

// fn_801B374C
void f_801B374C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 801B374C
  return; // 801B3750
}

// fn_801B3754
void f_801B3754(Ctx* __restrict c) {
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801B3754
  return; // 801B3758
}

// fn_801B375C
void f_801B375C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B375C
  c->r[0]=c->lr; // 801B3760
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3768
  c->r[31]=c->r[3]|c->r[3]; // 801B376C
  c->lr=0x801B3774u; f_80111CF0(c); // 801B3770
  cmps(c,0,(int32_t)c->r[3],0); // 801B3774
  if (!crb(c,2)) { goto L_801B3798; } // 801B3778
  c->lr=0x801B3780u; f_8007B524(c); // 801B377C
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B3780
  c->lr=0x801B3788u; f_800A616C(c); // 801B3784
  c->r[31]=c->r[3]|c->r[3]; // 801B3788
  c->lr=0x801B3790u; f_8007B524(c); // 801B378C
  c->r[4]=c->r[31]|c->r[31]; // 801B3790
  c->lr=0x801B3798u; f_800A6238(c); // 801B3794
L_801B3798:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3798
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B379C
  c->lr=c->r[0]; // 801B37A0
  c->r[1]=c->r[1]+0x00000010u; // 801B37A4
  return; // 801B37A8
}

// fn_801B37AC
void f_801B37AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B37AC
  c->r[0]=c->lr; // 801B37B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B37B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B37B8
  c->r[31]=c->r[3]|c->r[3]; // 801B37BC
  c->lr=0x801B37C4u; f_80111CF0(c); // 801B37C0
  cmps(c,0,(int32_t)c->r[3],0); // 801B37C4
  if (!crb(c,2)) { goto L_801B37EC; } // 801B37C8
  c->lr=0x801B37D0u; f_8007B524(c); // 801B37CC
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B37D0
  c->lr=0x801B37D8u; f_800A616C(c); // 801B37D4
  c->r[31]=c->r[3]|c->r[3]; // 801B37D8
  c->lr=0x801B37E0u; f_8007B524(c); // 801B37DC
  c->r[4]=c->r[31]|c->r[31]; // 801B37E0
  c->lr=0x801B37E8u; f_800A6274(c); // 801B37E4
  goto L_801B37F0; // 801B37E8
L_801B37EC:;
  c->r[3]=0u+0x00000000u; // 801B37EC
L_801B37F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B37F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B37F4
  c->lr=c->r[0]; // 801B37F8
  c->r[1]=c->r[1]+0x00000010u; // 801B37FC
  return; // 801B3800
}

// fn_801B3804
void f_801B3804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3804
  c->r[0]=c->lr; // 801B3808
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B380C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3810
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3814
  c->r[30]=c->r[3]|c->r[3]; // 801B3818
  c->lr=0x801B3820u; f_80111CF0(c); // 801B381C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3820
  if (!crb(c,2)) { goto L_801B3848; } // 801B3824
  c->lr=0x801B382Cu; f_8007B524(c); // 801B3828
  c->lr=0x801B3830u; f_800A633C(c); // 801B382C
  c->r[31]=c->r[3]|c->r[3]; // 801B3830
  c->lr=0x801B3838u; f_8007B524(c); // 801B3834
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B3838
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801B383C
  c->r[6]=c->r[31]|c->r[31]; // 801B3840
  c->lr=0x801B3848u; f_800A62D8(c); // 801B3844
L_801B3848:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3848
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B384C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3850
  c->lr=c->r[0]; // 801B3854
  c->r[1]=c->r[1]+0x00000010u; // 801B3858
  return; // 801B385C
}

// fn_801B3860
void f_801B3860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3860
  c->r[0]=c->lr; // 801B3864
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B386C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3870
  c->r[30]=c->r[3]|c->r[3]; // 801B3874
  c->lr=0x801B387Cu; f_80111CF0(c); // 801B3878
  cmps(c,0,(int32_t)c->r[3],0); // 801B387C
  if (!crb(c,2)) { goto L_801B38A4; } // 801B3880
  c->lr=0x801B3888u; f_8007B524(c); // 801B3884
  c->lr=0x801B388Cu; f_800A674C(c); // 801B3888
  c->r[31]=c->r[3]|c->r[3]; // 801B388C
  c->lr=0x801B3894u; f_8007B524(c); // 801B3890
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B3894
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801B3898
  c->r[6]=c->r[31]|c->r[31]; // 801B389C
  c->lr=0x801B38A4u; f_800A6754(c); // 801B38A0
L_801B38A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B38A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B38A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B38AC
  c->lr=c->r[0]; // 801B38B0
  c->r[1]=c->r[1]+0x00000010u; // 801B38B4
  return; // 801B38B8
}

// fn_801B38BC
void f_801B38BC(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x0000000Bu); // 801B38BC
  if (crb(c,1)) return; // 801B38C0
  c->r[5]=0u+0x80470000u; // 801B38C4
  c->r[5]=c->r[5]+0x000011D8u; // 801B38C8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B38CC
  c->r[5]=R32(c->r[5]+c->r[0]); // 801B38D0
  c->ctr=c->r[5]; // 801B38D4
  if (true) { switch (c->ctr) { case 0x801B38DCu: goto L_801B38DC; case 0x801B38E8u: goto L_801B38E8; case 0x801B38F4u: goto L_801B38F4; case 0x801B3900u: goto L_801B3900; case 0x801B390Cu: goto L_801B390C; case 0x801B3918u: goto L_801B3918; case 0x801B3924u: goto L_801B3924; case 0x801B3930u: goto L_801B3930; case 0x801B393Cu: goto L_801B393C; case 0x801B3948u: goto L_801B3948; case 0x801B3954u: goto L_801B3954; case 0x801B3960u: goto L_801B3960; default: break; } dispatch(c,c->ctr); return; } // 801B38D8
L_801B38DC:;
  c->r[0]=0u+0x00000009u; // 801B38DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B38E0
  return; // 801B38E4
L_801B38E8:;
  c->r[0]=0u+0x0000000Cu; // 801B38E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B38EC
  return; // 801B38F0
L_801B38F4:;
  c->r[0]=0u+0x00000011u; // 801B38F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B38F8
  return; // 801B38FC
L_801B3900:;
  c->r[0]=0u+0x00000012u; // 801B3900
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3904
  return; // 801B3908
L_801B390C:;
  c->r[0]=0u+0x0000000Au; // 801B390C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3910
  return; // 801B3914
L_801B3918:;
  c->r[0]=0u+0x0000000Bu; // 801B3918
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B391C
  return; // 801B3920
L_801B3924:;
  c->r[0]=0u+0x00000013u; // 801B3924
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3928
  return; // 801B392C
L_801B3930:;
  c->r[0]=0u+0x0000000Du; // 801B3930
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3934
  return; // 801B3938
L_801B393C:;
  c->r[0]=0u+0x00000014u; // 801B393C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3940
  return; // 801B3944
L_801B3948:;
  c->r[0]=0u+0x0000000Eu; // 801B3948
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B394C
  return; // 801B3950
L_801B3954:;
  c->r[0]=0u+0x00000006u; // 801B3954
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3958
  return; // 801B395C
L_801B3960:;
  c->r[0]=0u+0x00000005u; // 801B3960
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3964
  return; // 801B3968
}

// fn_801B396C
void f_801B396C(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000007u); // 801B396C
  if (crb(c,1)) return; // 801B3970
  c->r[5]=0u+0x80470000u; // 801B3974
  c->r[5]=c->r[5]+0x00001208u; // 801B3978
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B397C
  c->r[5]=R32(c->r[5]+c->r[0]); // 801B3980
  c->ctr=c->r[5]; // 801B3984
  if (true) { switch (c->ctr) { case 0x801B398Cu: goto L_801B398C; case 0x801B3998u: goto L_801B3998; case 0x801B39A4u: goto L_801B39A4; case 0x801B39B0u: goto L_801B39B0; case 0x801B39BCu: goto L_801B39BC; case 0x801B39C8u: goto L_801B39C8; case 0x801B39D4u: goto L_801B39D4; case 0x801B39E0u: goto L_801B39E0; default: break; } dispatch(c,c->ctr); return; } // 801B3988
L_801B398C:;
  c->r[0]=0u+0x00000001u; // 801B398C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B3990
  return; // 801B3994
L_801B3998:;
  c->r[0]=0u+0x00000002u; // 801B3998
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B399C
  return; // 801B39A0
L_801B39A4:;
  c->r[0]=0u+0x00000003u; // 801B39A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B39A8
  return; // 801B39AC
L_801B39B0:;
  c->r[0]=0u+0x00000004u; // 801B39B0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B39B4
  return; // 801B39B8
L_801B39BC:;
  c->r[0]=0u+0x00000015u; // 801B39BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B39C0
  return; // 801B39C4
L_801B39C8:;
  c->r[0]=0u+0x00000007u; // 801B39C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B39CC
  return; // 801B39D0
L_801B39D4:;
  c->r[0]=0u+0x00000008u; // 801B39D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B39D8
  return; // 801B39DC
L_801B39E0:;
  c->r[0]=0u+0x0000000Fu; // 801B39E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B39E4
  return; // 801B39E8
}

// fn_801B39EC
void f_801B39EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B39EC
  return; // 801B39F0
}

// fn_801B39F4
void f_801B39F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B39F4
  c->r[0]=c->lr; // 801B39F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B39FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3A00
  c->r[31]=c->r[4]|c->r[4]; // 801B3A04
  c->lr=0x801B3A0Cu; f_8007B524(c); // 801B3A08
  c->r[4]=c->r[31]|c->r[31]; // 801B3A0C
  c->lr=0x801B3A14u; f_800A2EEC(c); // 801B3A10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3A14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3A18
  c->lr=c->r[0]; // 801B3A1C
  c->r[1]=c->r[1]+0x00000010u; // 801B3A20
  return; // 801B3A24
}

// fn_801B3A28
void f_801B3A28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3A28
  c->r[0]=c->lr; // 801B3A2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3A30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3A34
  c->r[31]=c->r[4]|c->r[4]; // 801B3A38
  c->lr=0x801B3A40u; f_80111CF0(c); // 801B3A3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3A40
  if (!crb(c,2)) { goto L_801B3A54; } // 801B3A44
  c->lr=0x801B3A4Cu; f_8007B524(c); // 801B3A48
  c->r[4]=c->r[31]|c->r[31]; // 801B3A4C
  c->lr=0x801B3A54u; f_800A6EE8(c); // 801B3A50
L_801B3A54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3A54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3A58
  c->lr=c->r[0]; // 801B3A5C
  c->r[1]=c->r[1]+0x00000010u; // 801B3A60
  return; // 801B3A64
}

// fn_801B3A68
void f_801B3A68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3A68
  c->r[0]=c->lr; // 801B3A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3A70
  c->lr=0x801B3A78u; f_80111CF0(c); // 801B3A74
  cmps(c,0,(int32_t)c->r[3],0); // 801B3A78
  if (!crb(c,2)) { goto L_801B3A88; } // 801B3A7C
  c->lr=0x801B3A84u; f_8007B524(c); // 801B3A80
  c->lr=0x801B3A88u; f_800A6EEC(c); // 801B3A84
L_801B3A88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3A88
  c->lr=c->r[0]; // 801B3A8C
  c->r[1]=c->r[1]+0x00000010u; // 801B3A90
  return; // 801B3A94
}

// fn_801B3A98
void f_801B3A98(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 801B3A98
  if (crb(c,2)) { goto L_801B3AA4; } // 801B3A9C
  f_801B1E54(c); return; // 801B3AA0
L_801B3AA4:;
  f_801B1E94(c); return; // 801B3AA4
}

// fn_801B3AA8
void f_801B3AA8(Ctx* __restrict c) {
  f_801B1E70(c); return; // 801B3AA8
}

// fn_801B3AAC
void f_801B3AAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3AAC
  c->r[0]=c->lr; // 801B3AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3AB8
  c->r[31]=c->r[3]|c->r[3]; // 801B3ABC
  c->lr=0x801B3AC4u; f_801B1ED4(c); // 801B3AC0
  c->r[3]=c->r[31]|c->r[31]; // 801B3AC4
  c->lr=0x801B3ACCu; f_801B1EBC(c); // 801B3AC8
  c->r[0]=0u+0x00000000u; // 801B3ACC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B3AD0
  c->r[0]=0u+0xFFFFFFFFu; // 801B3AD4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801B3AD8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B3ADC
  c->r[3]=c->r[31]|c->r[31]; // 801B3AE0
  c->lr=0x801B3AE8u; f_801B21DC(c); // 801B3AE4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AE8
  c->lr=0x801B3AF0u; f_801B2624(c); // 801B3AEC
  c->r[3]=c->r[31]|c->r[31]; // 801B3AF0
  c->lr=0x801B3AF8u; f_801B2D54(c); // 801B3AF4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AF8
  c->lr=0x801B3B00u; f_801B3334(c); // 801B3AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3B00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3B04
  c->lr=c->r[0]; // 801B3B08
  c->r[1]=c->r[1]+0x00000010u; // 801B3B0C
  return; // 801B3B10
}

// fn_801B3B14
void f_801B3B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3B14
  c->r[0]=c->lr; // 801B3B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3B20
  c->r[31]=c->r[3]|c->r[3]; // 801B3B24
  c->lr=0x801B3B2Cu; f_8012FAAC(c); // 801B3B28
  c->r[3]=0u+0x80470000u; // 801B3B2C
  c->r[0]=c->r[3]+0x00001228u; // 801B3B30
  W32(c->r[31]+0x00000058u,c->r[0]); // 801B3B34
  c->r[0]=0u+0x00000000u; // 801B3B38
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801B3B3C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801B3B40
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801B3B44
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801B3B48
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801B3B4C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801B3B50
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801B3B54
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801B3B58
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801B3B5C
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801B3B60
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801B3B64
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801B3B68
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801B3B6C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801B3B70
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801B3B74
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801B3B78
  W32(c->r[31]+0x00000100u,c->r[0]); // 801B3B7C
  c->r[3]=c->r[31]|c->r[31]; // 801B3B80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3B84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3B88
  c->lr=c->r[0]; // 801B3B8C
  c->r[1]=c->r[1]+0x00000010u; // 801B3B90
  return; // 801B3B94
}

// fn_801B3B98
void f_801B3B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3B98
  c->r[0]=c->lr; // 801B3B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3BA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3BA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3BAC
  c->r[31]=c->r[3]|c->r[3]; // 801B3BB0
  c->lr=0x801B3BB8u; f_80056B5C(c); // 801B3BB4
  c->r[29]=c->r[3]|c->r[3]; // 801B3BB8
  c->lr=0x801B3BC0u; f_801F1340(c); // 801B3BBC
  c->lr=0x801B3BC4u; f_80056B54(c); // 801B3BC0
  c->r[3]=0u+0x000000D4u; // 801B3BC4
  c->lr=0x801B3BCCu; f_80047B64(c); // 801B3BC8
  c->r[30]=c->r[3]|c->r[3]; // 801B3BCC
  cmps(c,0,(int32_t)c->r[3],0); // 801B3BD0
  if (crb(c,2)) { goto L_801B3BDC; } // 801B3BD4
  c->lr=0x801B3BDCu; f_801B7FA8(c); // 801B3BD8
L_801B3BDC:;
  W32(c->r[31]+0x000000C8u,c->r[30]); // 801B3BDC
  c->r[3]=c->r[29]|c->r[29]; // 801B3BE0
  c->lr=0x801B3BE8u; f_80056B54(c); // 801B3BE4
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B3BE8
  c->r[4]=0u+0x000001FAu; // 801B3BEC
  c->lr=0x801B3BF4u; f_80118C88(c); // 801B3BF0
  c->lr=0x801B3BF8u; f_80056B5C(c); // 801B3BF4
  c->r[29]=c->r[3]|c->r[3]; // 801B3BF8
  c->lr=0x801B3C00u; f_801F1340(c); // 801B3BFC
  c->lr=0x801B3C04u; f_80056B54(c); // 801B3C00
  c->r[3]=0u+0x000000F0u; // 801B3C04
  c->lr=0x801B3C0Cu; f_80047B64(c); // 801B3C08
  c->r[30]=c->r[3]|c->r[3]; // 801B3C0C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3C10
  if (crb(c,2)) { goto L_801B3C1C; } // 801B3C14
  c->lr=0x801B3C1Cu; f_801BF700(c); // 801B3C18
L_801B3C1C:;
  W32(c->r[31]+0x000000E8u,c->r[30]); // 801B3C1C
  c->r[3]=c->r[29]|c->r[29]; // 801B3C20
  c->lr=0x801B3C28u; f_80056B54(c); // 801B3C24
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B3C28
  c->lr=0x801B3C30u; f_801C6788(c); // 801B3C2C
  c->lr=0x801B3C34u; f_80056B5C(c); // 801B3C30
  c->r[29]=c->r[3]|c->r[3]; // 801B3C34
  c->lr=0x801B3C3Cu; f_801F1340(c); // 801B3C38
  c->lr=0x801B3C40u; f_80056B54(c); // 801B3C3C
  c->r[3]=0u+0x00010000u; // 801B3C40
  c->r[3]=c->r[3]+0xFFFFD90Cu; // 801B3C44
  c->lr=0x801B3C4Cu; f_80047B64(c); // 801B3C48
  c->r[30]=c->r[3]|c->r[3]; // 801B3C4C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3C50
  if (crb(c,2)) { goto L_801B3C5C; } // 801B3C54
  c->lr=0x801B3C5Cu; f_801BD838(c); // 801B3C58
L_801B3C5C:;
  W32(c->r[31]+0x000000DCu,c->r[30]); // 801B3C5C
  c->r[3]=c->r[29]|c->r[29]; // 801B3C60
  c->lr=0x801B3C68u; f_80056B54(c); // 801B3C64
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B3C68
  c->lr=0x801B3C70u; f_801A53BC(c); // 801B3C6C
  c->lr=0x801B3C74u; f_80056B5C(c); // 801B3C70
  c->r[29]=c->r[3]|c->r[3]; // 801B3C74
  c->lr=0x801B3C7Cu; f_801F1340(c); // 801B3C78
  c->lr=0x801B3C80u; f_80056B54(c); // 801B3C7C
  c->r[3]=0u+0x00010000u; // 801B3C80
  c->r[3]=c->r[3]+0xFFFFD12Cu; // 801B3C84
  c->lr=0x801B3C8Cu; f_80047B64(c); // 801B3C88
  c->r[30]=c->r[3]|c->r[3]; // 801B3C8C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3C90
  if (crb(c,2)) { goto L_801B3C9C; } // 801B3C94
  c->lr=0x801B3C9Cu; f_801BE70C(c); // 801B3C98
L_801B3C9C:;
  W32(c->r[31]+0x000000E0u,c->r[30]); // 801B3C9C
  c->r[3]=c->r[29]|c->r[29]; // 801B3CA0
  c->lr=0x801B3CA8u; f_80056B54(c); // 801B3CA4
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B3CA8
  c->r[4]=0u+0x00000001u; // 801B3CAC
  c->lr=0x801B3CB4u; f_8017DD6C(c); // 801B3CB0
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B3CB4
  c->lr=0x801B3CBCu; f_8017D8EC(c); // 801B3CB8
  c->lr=0x801B3CC0u; f_80056B5C(c); // 801B3CBC
  c->r[29]=c->r[3]|c->r[3]; // 801B3CC0
  c->lr=0x801B3CC8u; f_801F1340(c); // 801B3CC4
  c->lr=0x801B3CCCu; f_80056B54(c); // 801B3CC8
  c->r[3]=0u+0x00010000u; // 801B3CCC
  c->r[3]=c->r[3]+0xFFFFD12Cu; // 801B3CD0
  c->lr=0x801B3CD8u; f_80047B64(c); // 801B3CD4
  c->r[30]=c->r[3]|c->r[3]; // 801B3CD8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3CDC
  if (crb(c,2)) { goto L_801B3CE8; } // 801B3CE0
  c->lr=0x801B3CE8u; f_801BE70C(c); // 801B3CE4
L_801B3CE8:;
  W32(c->r[31]+0x000000E4u,c->r[30]); // 801B3CE8
  c->r[3]=c->r[29]|c->r[29]; // 801B3CEC
  c->lr=0x801B3CF4u; f_80056B54(c); // 801B3CF0
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B3CF4
  c->r[4]=0u+0x00000000u; // 801B3CF8
  c->lr=0x801B3D00u; f_8017DD6C(c); // 801B3CFC
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B3D00
  c->lr=0x801B3D08u; f_8017D8EC(c); // 801B3D04
  c->lr=0x801B3D0Cu; f_80056B5C(c); // 801B3D08
  c->r[29]=c->r[3]|c->r[3]; // 801B3D0C
  c->lr=0x801B3D14u; f_801F1340(c); // 801B3D10
  c->lr=0x801B3D18u; f_80056B54(c); // 801B3D14
  c->r[3]=0u+0x000000DCu; // 801B3D18
  c->lr=0x801B3D20u; f_80047B64(c); // 801B3D1C
  c->r[30]=c->r[3]|c->r[3]; // 801B3D20
  cmps(c,0,(int32_t)c->r[3],0); // 801B3D24
  if (crb(c,2)) { goto L_801B3D30; } // 801B3D28
  c->lr=0x801B3D30u; f_801B8004(c); // 801B3D2C
L_801B3D30:;
  W32(c->r[31]+0x000000ECu,c->r[30]); // 801B3D30
  c->r[3]=c->r[29]|c->r[29]; // 801B3D34
  c->lr=0x801B3D3Cu; f_80056B54(c); // 801B3D38
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801B3D3C
  c->lr=0x801B3D44u; f_80113120(c); // 801B3D40
  c->lr=0x801B3D48u; f_80056B5C(c); // 801B3D44
  c->r[29]=c->r[3]|c->r[3]; // 801B3D48
  c->lr=0x801B3D50u; f_801F1340(c); // 801B3D4C
  c->lr=0x801B3D54u; f_80056B54(c); // 801B3D50
  c->r[3]=0u+0x00000128u; // 801B3D54
  c->lr=0x801B3D5Cu; f_80047B64(c); // 801B3D58
  c->r[30]=c->r[3]|c->r[3]; // 801B3D5C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3D60
  if (crb(c,2)) { goto L_801B3D6C; } // 801B3D64
  c->lr=0x801B3D6Cu; f_8013C5B0(c); // 801B3D68
L_801B3D6C:;
  W32(c->r[31]+0x000000F0u,c->r[30]); // 801B3D6C
  c->r[3]=c->r[29]|c->r[29]; // 801B3D70
  c->lr=0x801B3D78u; f_80056B54(c); // 801B3D74
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B3D78
  c->r[4]=0u+0x0000003Cu; // 801B3D7C
  c->lr=0x801B3D84u; f_8013C6C0(c); // 801B3D80
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B3D84
  c->lr=0x801B3D8Cu; f_8011386C(c); // 801B3D88
  c->lr=0x801B3D90u; f_80056B5C(c); // 801B3D8C
  c->r[29]=c->r[3]|c->r[3]; // 801B3D90
  c->lr=0x801B3D98u; f_801F1340(c); // 801B3D94
  c->lr=0x801B3D9Cu; f_80056B54(c); // 801B3D98
  c->r[3]=0u+0x000000D8u; // 801B3D9C
  c->lr=0x801B3DA4u; f_80047B64(c); // 801B3DA0
  c->r[30]=c->r[3]|c->r[3]; // 801B3DA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B3DA8
  if (crb(c,2)) { goto L_801B3DB4; } // 801B3DAC
  c->lr=0x801B3DB4u; f_801B8FBC(c); // 801B3DB0
L_801B3DB4:;
  W32(c->r[31]+0x000000F4u,c->r[30]); // 801B3DB4
  c->r[3]=c->r[29]|c->r[29]; // 801B3DB8
  c->lr=0x801B3DC0u; f_80056B54(c); // 801B3DBC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801B3DC0
  c->lr=0x801B3DC8u; f_801B9014(c); // 801B3DC4
  c->lr=0x801B3DCCu; f_80056B5C(c); // 801B3DC8
  c->r[29]=c->r[3]|c->r[3]; // 801B3DCC
  c->lr=0x801B3DD4u; f_801F1340(c); // 801B3DD0
  c->lr=0x801B3DD8u; f_80056B54(c); // 801B3DD4
  c->r[3]=0u+0x000000F4u; // 801B3DD8
  c->lr=0x801B3DE0u; f_80047B64(c); // 801B3DDC
  c->r[30]=c->r[3]|c->r[3]; // 801B3DE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B3DE4
  if (crb(c,2)) { goto L_801B3DF0; } // 801B3DE8
  c->lr=0x801B3DF0u; f_801B8278(c); // 801B3DEC
L_801B3DF0:;
  W32(c->r[31]+0x000000F8u,c->r[30]); // 801B3DF0
  c->r[3]=c->r[29]|c->r[29]; // 801B3DF4
  c->lr=0x801B3DFCu; f_80056B54(c); // 801B3DF8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B3DFC
  c->lr=0x801B3E04u; f_801B82F0(c); // 801B3E00
  c->lr=0x801B3E08u; f_80056B5C(c); // 801B3E04
  c->r[29]=c->r[3]|c->r[3]; // 801B3E08
  c->lr=0x801B3E10u; f_801F1340(c); // 801B3E0C
  c->lr=0x801B3E14u; f_80056B54(c); // 801B3E10
  c->r[3]=0u+0x000000D4u; // 801B3E14
  c->lr=0x801B3E1Cu; f_80047B64(c); // 801B3E18
  c->r[30]=c->r[3]|c->r[3]; // 801B3E1C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3E20
  if (crb(c,2)) { goto L_801B3E2C; } // 801B3E24
  c->lr=0x801B3E2Cu; f_801B7F6C(c); // 801B3E28
L_801B3E2C:;
  W32(c->r[31]+0x000000D4u,c->r[30]); // 801B3E2C
  c->r[3]=c->r[29]|c->r[29]; // 801B3E30
  c->lr=0x801B3E38u; f_80056B54(c); // 801B3E34
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B3E38
  c->r[4]=0u+0x00000040u; // 801B3E3C
  c->lr=0x801B3E44u; f_80147E84(c); // 801B3E40
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B3E44
  c->r[4]=0u+0x00000003u; // 801B3E48
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B3E4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801B3E50
  c->ctr=c->r[12]; // 801B3E54
  if (true) { c->lr=0x801B3E5Cu; dispatch(c,c->ctr); } // 801B3E58
  c->lr=0x801B3E60u; f_80056B5C(c); // 801B3E5C
  c->r[29]=c->r[3]|c->r[3]; // 801B3E60
  c->lr=0x801B3E68u; f_801F1340(c); // 801B3E64
  c->lr=0x801B3E6Cu; f_80056B54(c); // 801B3E68
  c->r[3]=0u+0x000000C8u; // 801B3E6C
  c->lr=0x801B3E74u; f_80047B64(c); // 801B3E70
  c->r[30]=c->r[3]|c->r[3]; // 801B3E74
  cmps(c,0,(int32_t)c->r[3],0); // 801B3E78
  if (crb(c,2)) { goto L_801B3E84; } // 801B3E7C
  c->lr=0x801B3E84u; f_801B7F30(c); // 801B3E80
L_801B3E84:;
  W32(c->r[31]+0x000000CCu,c->r[30]); // 801B3E84
  c->r[3]=c->r[29]|c->r[29]; // 801B3E88
  c->lr=0x801B3E90u; f_80056B54(c); // 801B3E8C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B3E90
  c->r[4]=0u+0x00000386u; // 801B3E94
  c->lr=0x801B3E9Cu; f_8017E594(c); // 801B3E98
  c->lr=0x801B3EA0u; f_80056B5C(c); // 801B3E9C
  c->r[29]=c->r[3]|c->r[3]; // 801B3EA0
  c->lr=0x801B3EA8u; f_801F1340(c); // 801B3EA4
  c->lr=0x801B3EACu; f_80056B54(c); // 801B3EA8
  c->r[3]=0u+0x000000C8u; // 801B3EAC
  c->lr=0x801B3EB4u; f_80047B64(c); // 801B3EB0
  c->r[30]=c->r[3]|c->r[3]; // 801B3EB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B3EB8
  if (crb(c,2)) { goto L_801B3EC4; } // 801B3EBC
  c->lr=0x801B3EC4u; f_801B7EF4(c); // 801B3EC0
L_801B3EC4:;
  W32(c->r[31]+0x000000D0u,c->r[30]); // 801B3EC4
  c->r[3]=c->r[29]|c->r[29]; // 801B3EC8
  c->lr=0x801B3ED0u; f_80056B54(c); // 801B3ECC
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B3ED0
  c->r[4]=0u+0x00000387u; // 801B3ED4
  c->lr=0x801B3EDCu; f_801A5F2C(c); // 801B3ED8
  c->lr=0x801B3EE0u; f_80056B5C(c); // 801B3EDC
  c->r[29]=c->r[3]|c->r[3]; // 801B3EE0
  c->lr=0x801B3EE8u; f_801F1340(c); // 801B3EE4
  c->lr=0x801B3EECu; f_80056B54(c); // 801B3EE8
  c->r[3]=0u+0x00000104u; // 801B3EEC
  c->lr=0x801B3EF4u; f_80047B64(c); // 801B3EF0
  c->r[30]=c->r[3]|c->r[3]; // 801B3EF4
  cmps(c,0,(int32_t)c->r[3],0); // 801B3EF8
  if (crb(c,2)) { goto L_801B3F04; } // 801B3EFC
  c->lr=0x801B3F04u; f_801B7EB0(c); // 801B3F00
L_801B3F04:;
  W32(c->r[31]+0x000000D8u,c->r[30]); // 801B3F04
  c->r[3]=c->r[29]|c->r[29]; // 801B3F08
  c->lr=0x801B3F10u; f_80056B54(c); // 801B3F0C
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B3F10
  c->r[4]=0u+0x00000004u; // 801B3F14
  c->lr=0x801B3F1Cu; f_8017C0C4(c); // 801B3F18
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B3F1C
  c->r[4]=0u+0x00000018u; // 801B3F20
  c->lr=0x801B3F28u; f_8017C0CC(c); // 801B3F24
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B3F28
  c->lr=0x801B3F30u; f_8017BC18(c); // 801B3F2C
  c->lr=0x801B3F34u; f_80056B5C(c); // 801B3F30
  c->r[29]=c->r[3]|c->r[3]; // 801B3F34
  c->lr=0x801B3F3Cu; f_801F1340(c); // 801B3F38
  c->lr=0x801B3F40u; f_80056B54(c); // 801B3F3C
  c->r[3]=0u+0x00000B58u; // 801B3F40
  c->lr=0x801B3F48u; f_80047B64(c); // 801B3F44
  c->r[30]=c->r[3]|c->r[3]; // 801B3F48
  cmps(c,0,(int32_t)c->r[3],0); // 801B3F4C
  if (crb(c,2)) { goto L_801B3F58; } // 801B3F50
  c->lr=0x801B3F58u; f_8013F974(c); // 801B3F54
L_801B3F58:;
  W32(c->r[31]+0x000000C0u,c->r[30]); // 801B3F58
  c->r[3]=c->r[29]|c->r[29]; // 801B3F5C
  c->lr=0x801B3F64u; f_80056B54(c); // 801B3F60
  c->lr=0x801B3F68u; f_80114E10(c); // 801B3F64
  c->lr=0x801B3F6Cu; f_801165B0(c); // 801B3F68
  c->r[4]=c->r[3]|c->r[3]; // 801B3F6C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B3F70
  c->lr=0x801B3F78u; f_80114AE0(c); // 801B3F74
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B3F78
  c->r[4]=0u+0x00000000u; // 801B3F7C
  c->lr=0x801B3F84u; f_80114AD8(c); // 801B3F80
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B3F84
  c->r[4]=0u+0x0000000Au; // 801B3F88
  c->lr=0x801B3F90u; f_80112704(c); // 801B3F8C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B3F90
  c->r[12]=R32(c->r[3]+0x00000020u); // 801B3F94
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B3F98
  c->ctr=c->r[12]; // 801B3F9C
  if (true) { c->lr=0x801B3FA4u; dispatch(c,c->ctr); } // 801B3FA0
  c->lr=0x801B3FA8u; f_80056B5C(c); // 801B3FA4
  c->r[29]=c->r[3]|c->r[3]; // 801B3FA8
  c->lr=0x801B3FB0u; f_801F1340(c); // 801B3FAC
  c->lr=0x801B3FB4u; f_80056B54(c); // 801B3FB0
  c->r[3]=0u+0x00000B58u; // 801B3FB4
  c->lr=0x801B3FBCu; f_80047B64(c); // 801B3FB8
  c->r[30]=c->r[3]|c->r[3]; // 801B3FBC
  cmps(c,0,(int32_t)c->r[3],0); // 801B3FC0
  if (crb(c,2)) { goto L_801B3FCC; } // 801B3FC4
  c->lr=0x801B3FCCu; f_80140340(c); // 801B3FC8
L_801B3FCC:;
  W32(c->r[31]+0x000000C4u,c->r[30]); // 801B3FCC
  c->r[3]=c->r[29]|c->r[29]; // 801B3FD0
  c->lr=0x801B3FD8u; f_80056B54(c); // 801B3FD4
  c->lr=0x801B3FDCu; f_80114E10(c); // 801B3FD8
  c->lr=0x801B3FE0u; f_801165C8(c); // 801B3FDC
  c->r[4]=c->r[3]|c->r[3]; // 801B3FE0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B3FE4
  c->lr=0x801B3FECu; f_80114AE0(c); // 801B3FE8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B3FEC
  c->r[4]=0u+0x00000000u; // 801B3FF0
  c->lr=0x801B3FF8u; f_80114AD8(c); // 801B3FF4
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B3FF8
  c->r[4]=0u+0x0000000Du; // 801B3FFC
  c->lr=0x801B4004u; f_80112704(c); // 801B4000
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4004
  c->r[12]=R32(c->r[3]+0x00000020u); // 801B4008
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B400C
  c->ctr=c->r[12]; // 801B4010
  if (true) { c->lr=0x801B4018u; dispatch(c,c->ctr); } // 801B4014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4018
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B401C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4020
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4024
  c->lr=c->r[0]; // 801B4028
  c->r[1]=c->r[1]+0x00000020u; // 801B402C
  return; // 801B4030
}

// fn_801B4034
void f_801B4034(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4034
  c->r[0]=c->lr; // 801B4038
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B403C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4040
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4044
  c->r[31]=c->r[3]|c->r[3]; // 801B4048
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801B404C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4050
  if (crb(c,2)) { goto L_801B409C; } // 801B4054
  c->lr=0x801B405Cu; f_80118E58(c); // 801B4058
  c->lr=0x801B4060u; f_80056B5C(c); // 801B405C
  c->r[30]=c->r[3]|c->r[3]; // 801B4060
  c->lr=0x801B4068u; f_801F1340(c); // 801B4064
  c->lr=0x801B406Cu; f_80056B54(c); // 801B4068
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B406C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4070
  if (crb(c,2)) { goto L_801B408C; } // 801B4074
  c->r[4]=0u+0x00000001u; // 801B4078
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B407C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B4080
  c->ctr=c->r[12]; // 801B4084
  if (true) { c->lr=0x801B408Cu; dispatch(c,c->ctr); } // 801B4088
L_801B408C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B408C
  c->lr=0x801B4094u; f_80056B54(c); // 801B4090
  c->r[0]=0u+0x00000000u; // 801B4094
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801B4098
L_801B409C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B409C
  cmps(c,0,(int32_t)c->r[3],0); // 801B40A0
  if (crb(c,2)) { goto L_801B40EC; } // 801B40A4
  c->lr=0x801B40ACu; f_801C68A0(c); // 801B40A8
  c->lr=0x801B40B0u; f_80056B5C(c); // 801B40AC
  c->r[30]=c->r[3]|c->r[3]; // 801B40B0
  c->lr=0x801B40B8u; f_801F1340(c); // 801B40B4
  c->lr=0x801B40BCu; f_80056B54(c); // 801B40B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B40BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B40C0
  if (crb(c,2)) { goto L_801B40DC; } // 801B40C4
  c->r[4]=0u+0x00000001u; // 801B40C8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B40CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B40D0
  c->ctr=c->r[12]; // 801B40D4
  if (true) { c->lr=0x801B40DCu; dispatch(c,c->ctr); } // 801B40D8
L_801B40DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B40DC
  c->lr=0x801B40E4u; f_80056B54(c); // 801B40E0
  c->r[0]=0u+0x00000000u; // 801B40E4
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801B40E8
L_801B40EC:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B40EC
  cmps(c,0,(int32_t)c->r[3],0); // 801B40F0
  if (crb(c,2)) { goto L_801B4148; } // 801B40F4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B40F8
  c->r[12]=R32(c->r[12]+0x00000044u); // 801B40FC
  c->ctr=c->r[12]; // 801B4100
  if (true) { c->lr=0x801B4108u; dispatch(c,c->ctr); } // 801B4104
  c->lr=0x801B410Cu; f_80056B5C(c); // 801B4108
  c->r[30]=c->r[3]|c->r[3]; // 801B410C
  c->lr=0x801B4114u; f_801F1340(c); // 801B4110
  c->lr=0x801B4118u; f_80056B54(c); // 801B4114
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4118
  cmps(c,0,(int32_t)c->r[3],0); // 801B411C
  if (crb(c,2)) { goto L_801B4138; } // 801B4120
  c->r[4]=0u+0x00000001u; // 801B4124
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4128
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B412C
  c->ctr=c->r[12]; // 801B4130
  if (true) { c->lr=0x801B4138u; dispatch(c,c->ctr); } // 801B4134
L_801B4138:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4138
  c->lr=0x801B4140u; f_80056B54(c); // 801B413C
  c->r[0]=0u+0x00000000u; // 801B4140
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801B4144
L_801B4148:;
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B4148
  cmps(c,0,(int32_t)c->r[3],0); // 801B414C
  if (crb(c,2)) { goto L_801B4198; } // 801B4150
  c->lr=0x801B4158u; f_801A54C4(c); // 801B4154
  c->lr=0x801B415Cu; f_80056B5C(c); // 801B4158
  c->r[30]=c->r[3]|c->r[3]; // 801B415C
  c->lr=0x801B4164u; f_801F1340(c); // 801B4160
  c->lr=0x801B4168u; f_80056B54(c); // 801B4164
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B4168
  cmps(c,0,(int32_t)c->r[3],0); // 801B416C
  if (crb(c,2)) { goto L_801B4188; } // 801B4170
  c->r[4]=0u+0x00000001u; // 801B4174
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4178
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B417C
  c->ctr=c->r[12]; // 801B4180
  if (true) { c->lr=0x801B4188u; dispatch(c,c->ctr); } // 801B4184
L_801B4188:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4188
  c->lr=0x801B4190u; f_80056B54(c); // 801B418C
  c->r[0]=0u+0x00000000u; // 801B4190
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801B4194
L_801B4198:;
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B4198
  cmps(c,0,(int32_t)c->r[3],0); // 801B419C
  if (crb(c,2)) { goto L_801B41E8; } // 801B41A0
  c->lr=0x801B41A8u; f_8017DA18(c); // 801B41A4
  c->lr=0x801B41ACu; f_80056B5C(c); // 801B41A8
  c->r[30]=c->r[3]|c->r[3]; // 801B41AC
  c->lr=0x801B41B4u; f_801F1340(c); // 801B41B0
  c->lr=0x801B41B8u; f_80056B54(c); // 801B41B4
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B41B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B41BC
  if (crb(c,2)) { goto L_801B41D8; } // 801B41C0
  c->r[4]=0u+0x00000001u; // 801B41C4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B41C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B41CC
  c->ctr=c->r[12]; // 801B41D0
  if (true) { c->lr=0x801B41D8u; dispatch(c,c->ctr); } // 801B41D4
L_801B41D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B41D8
  c->lr=0x801B41E0u; f_80056B54(c); // 801B41DC
  c->r[0]=0u+0x00000000u; // 801B41E0
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801B41E4
L_801B41E8:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B41E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B41EC
  if (crb(c,2)) { goto L_801B4238; } // 801B41F0
  c->lr=0x801B41F8u; f_8017DA18(c); // 801B41F4
  c->lr=0x801B41FCu; f_80056B5C(c); // 801B41F8
  c->r[30]=c->r[3]|c->r[3]; // 801B41FC
  c->lr=0x801B4204u; f_801F1340(c); // 801B4200
  c->lr=0x801B4208u; f_80056B54(c); // 801B4204
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B4208
  cmps(c,0,(int32_t)c->r[3],0); // 801B420C
  if (crb(c,2)) { goto L_801B4228; } // 801B4210
  c->r[4]=0u+0x00000001u; // 801B4214
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4218
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B421C
  c->ctr=c->r[12]; // 801B4220
  if (true) { c->lr=0x801B4228u; dispatch(c,c->ctr); } // 801B4224
L_801B4228:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4228
  c->lr=0x801B4230u; f_80056B54(c); // 801B422C
  c->r[0]=0u+0x00000000u; // 801B4230
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801B4234
L_801B4238:;
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B4238
  cmps(c,0,(int32_t)c->r[3],0); // 801B423C
  if (crb(c,2)) { goto L_801B4288; } // 801B4240
  c->lr=0x801B4248u; f_8017E680(c); // 801B4244
  c->lr=0x801B424Cu; f_80056B5C(c); // 801B4248
  c->r[30]=c->r[3]|c->r[3]; // 801B424C
  c->lr=0x801B4254u; f_801F1340(c); // 801B4250
  c->lr=0x801B4258u; f_80056B54(c); // 801B4254
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B4258
  cmps(c,0,(int32_t)c->r[3],0); // 801B425C
  if (crb(c,2)) { goto L_801B4278; } // 801B4260
  c->r[4]=0u+0x00000001u; // 801B4264
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4268
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B426C
  c->ctr=c->r[12]; // 801B4270
  if (true) { c->lr=0x801B4278u; dispatch(c,c->ctr); } // 801B4274
L_801B4278:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4278
  c->lr=0x801B4280u; f_80056B54(c); // 801B427C
  c->r[0]=0u+0x00000000u; // 801B4280
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801B4284
L_801B4288:;
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B4288
  cmps(c,0,(int32_t)c->r[3],0); // 801B428C
  if (crb(c,2)) { goto L_801B42D8; } // 801B4290
  c->lr=0x801B4298u; f_801A6018(c); // 801B4294
  c->lr=0x801B429Cu; f_80056B5C(c); // 801B4298
  c->r[30]=c->r[3]|c->r[3]; // 801B429C
  c->lr=0x801B42A4u; f_801F1340(c); // 801B42A0
  c->lr=0x801B42A8u; f_80056B54(c); // 801B42A4
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B42A8
  cmps(c,0,(int32_t)c->r[3],0); // 801B42AC
  if (crb(c,2)) { goto L_801B42C8; } // 801B42B0
  c->r[4]=0u+0x00000001u; // 801B42B4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B42B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B42BC
  c->ctr=c->r[12]; // 801B42C0
  if (true) { c->lr=0x801B42C8u; dispatch(c,c->ctr); } // 801B42C4
L_801B42C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B42C8
  c->lr=0x801B42D0u; f_80056B54(c); // 801B42CC
  c->r[0]=0u+0x00000000u; // 801B42D0
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801B42D4
L_801B42D8:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801B42D8
  cmps(c,0,(int32_t)c->r[3],0); // 801B42DC
  if (crb(c,2)) { goto L_801B4328; } // 801B42E0
  c->lr=0x801B42E8u; f_80113270(c); // 801B42E4
  c->lr=0x801B42ECu; f_80056B5C(c); // 801B42E8
  c->r[30]=c->r[3]|c->r[3]; // 801B42EC
  c->lr=0x801B42F4u; f_801F1340(c); // 801B42F0
  c->lr=0x801B42F8u; f_80056B54(c); // 801B42F4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801B42F8
  cmps(c,0,(int32_t)c->r[3],0); // 801B42FC
  if (crb(c,2)) { goto L_801B4318; } // 801B4300
  c->r[4]=0u+0x00000001u; // 801B4304
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4308
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B430C
  c->ctr=c->r[12]; // 801B4310
  if (true) { c->lr=0x801B4318u; dispatch(c,c->ctr); } // 801B4314
L_801B4318:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4318
  c->lr=0x801B4320u; f_80056B54(c); // 801B431C
  c->r[0]=0u+0x00000000u; // 801B4320
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801B4324
L_801B4328:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B4328
  cmps(c,0,(int32_t)c->r[3],0); // 801B432C
  if (crb(c,2)) { goto L_801B4378; } // 801B4330
  c->lr=0x801B4338u; f_801139F0(c); // 801B4334
  c->lr=0x801B433Cu; f_80056B5C(c); // 801B4338
  c->r[30]=c->r[3]|c->r[3]; // 801B433C
  c->lr=0x801B4344u; f_801F1340(c); // 801B4340
  c->lr=0x801B4348u; f_80056B54(c); // 801B4344
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B4348
  cmps(c,0,(int32_t)c->r[3],0); // 801B434C
  if (crb(c,2)) { goto L_801B4368; } // 801B4350
  c->r[4]=0u+0x00000001u; // 801B4354
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4358
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B435C
  c->ctr=c->r[12]; // 801B4360
  if (true) { c->lr=0x801B4368u; dispatch(c,c->ctr); } // 801B4364
L_801B4368:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4368
  c->lr=0x801B4370u; f_80056B54(c); // 801B436C
  c->r[0]=0u+0x00000000u; // 801B4370
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801B4374
L_801B4378:;
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4378
  cmps(c,0,(int32_t)c->r[3],0); // 801B437C
  if (crb(c,2)) { goto L_801B43C8; } // 801B4380
  c->lr=0x801B4388u; f_8017BE38(c); // 801B4384
  c->lr=0x801B438Cu; f_80056B5C(c); // 801B4388
  c->r[30]=c->r[3]|c->r[3]; // 801B438C
  c->lr=0x801B4394u; f_801F1340(c); // 801B4390
  c->lr=0x801B4398u; f_80056B54(c); // 801B4394
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4398
  cmps(c,0,(int32_t)c->r[3],0); // 801B439C
  if (crb(c,2)) { goto L_801B43B8; } // 801B43A0
  c->r[4]=0u+0x00000001u; // 801B43A4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B43A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B43AC
  c->ctr=c->r[12]; // 801B43B0
  if (true) { c->lr=0x801B43B8u; dispatch(c,c->ctr); } // 801B43B4
L_801B43B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B43B8
  c->lr=0x801B43C0u; f_80056B54(c); // 801B43BC
  c->r[0]=0u+0x00000000u; // 801B43C0
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801B43C4
L_801B43C8:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801B43C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B43CC
  if (crb(c,2)) { goto L_801B4418; } // 801B43D0
  c->lr=0x801B43D8u; f_801B9184(c); // 801B43D4
  c->lr=0x801B43DCu; f_80056B5C(c); // 801B43D8
  c->r[30]=c->r[3]|c->r[3]; // 801B43DC
  c->lr=0x801B43E4u; f_801F1340(c); // 801B43E0
  c->lr=0x801B43E8u; f_80056B54(c); // 801B43E4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801B43E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B43EC
  if (crb(c,2)) { goto L_801B4408; } // 801B43F0
  c->r[4]=0u+0x00000001u; // 801B43F4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B43F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B43FC
  c->ctr=c->r[12]; // 801B4400
  if (true) { c->lr=0x801B4408u; dispatch(c,c->ctr); } // 801B4404
L_801B4408:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4408
  c->lr=0x801B4410u; f_80056B54(c); // 801B440C
  c->r[0]=0u+0x00000000u; // 801B4410
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801B4414
L_801B4418:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B4418
  cmps(c,0,(int32_t)c->r[3],0); // 801B441C
  if (crb(c,2)) { goto L_801B4468; } // 801B4420
  c->lr=0x801B4428u; f_801B84BC(c); // 801B4424
  c->lr=0x801B442Cu; f_80056B5C(c); // 801B4428
  c->r[30]=c->r[3]|c->r[3]; // 801B442C
  c->lr=0x801B4434u; f_801F1340(c); // 801B4430
  c->lr=0x801B4438u; f_80056B54(c); // 801B4434
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B4438
  cmps(c,0,(int32_t)c->r[3],0); // 801B443C
  if (crb(c,2)) { goto L_801B4458; } // 801B4440
  c->r[4]=0u+0x00000001u; // 801B4444
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4448
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B444C
  c->ctr=c->r[12]; // 801B4450
  if (true) { c->lr=0x801B4458u; dispatch(c,c->ctr); } // 801B4454
L_801B4458:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4458
  c->lr=0x801B4460u; f_80056B54(c); // 801B445C
  c->r[0]=0u+0x00000000u; // 801B4460
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801B4464
L_801B4468:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4468
  cmps(c,0,(int32_t)c->r[3],0); // 801B446C
  if (crb(c,2)) { goto L_801B44C4; } // 801B4470
  c->r[12]=R32(c->r[3]+0x00000020u); // 801B4474
  c->r[12]=R32(c->r[12]+0x00000060u); // 801B4478
  c->ctr=c->r[12]; // 801B447C
  if (true) { c->lr=0x801B4484u; dispatch(c,c->ctr); } // 801B4480
  c->lr=0x801B4488u; f_80056B5C(c); // 801B4484
  c->r[30]=c->r[3]|c->r[3]; // 801B4488
  c->lr=0x801B4490u; f_801F1340(c); // 801B448C
  c->lr=0x801B4494u; f_80056B54(c); // 801B4490
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4494
  cmps(c,0,(int32_t)c->r[3],0); // 801B4498
  if (crb(c,2)) { goto L_801B44B4; } // 801B449C
  c->r[4]=0u+0x00000001u; // 801B44A0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801B44A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B44A8
  c->ctr=c->r[12]; // 801B44AC
  if (true) { c->lr=0x801B44B4u; dispatch(c,c->ctr); } // 801B44B0
L_801B44B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B44B4
  c->lr=0x801B44BCu; f_80056B54(c); // 801B44B8
  c->r[0]=0u+0x00000000u; // 801B44BC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801B44C0
L_801B44C4:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B44C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B44C8
  if (crb(c,2)) { goto L_801B4520; } // 801B44CC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801B44D0
  c->r[12]=R32(c->r[12]+0x00000060u); // 801B44D4
  c->ctr=c->r[12]; // 801B44D8
  if (true) { c->lr=0x801B44E0u; dispatch(c,c->ctr); } // 801B44DC
  c->lr=0x801B44E4u; f_80056B5C(c); // 801B44E0
  c->r[30]=c->r[3]|c->r[3]; // 801B44E4
  c->lr=0x801B44ECu; f_801F1340(c); // 801B44E8
  c->lr=0x801B44F0u; f_80056B54(c); // 801B44EC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B44F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B44F4
  if (crb(c,2)) { goto L_801B4510; } // 801B44F8
  c->r[4]=0u+0x00000001u; // 801B44FC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801B4500
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B4504
  c->ctr=c->r[12]; // 801B4508
  if (true) { c->lr=0x801B4510u; dispatch(c,c->ctr); } // 801B450C
L_801B4510:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4510
  c->lr=0x801B4518u; f_80056B54(c); // 801B4514
  c->r[0]=0u+0x00000000u; // 801B4518
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801B451C
L_801B4520:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4520
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4524
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4528
  c->lr=c->r[0]; // 801B452C
  c->r[1]=c->r[1]+0x00000010u; // 801B4530
  return; // 801B4534
}

// fn_801B4538
void f_801B4538(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4538
  c->r[0]=c->lr; // 801B453C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4544
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4548
  c->r[30]=c->r[3]|c->r[3]; // 801B454C
  c->r[31]=c->r[4]|c->r[4]; // 801B4550
  cmps(c,0,(int32_t)c->r[3],0); // 801B4554
  if (crb(c,2)) { goto L_801B4578; } // 801B4558
  c->r[4]=0u+0x00000000u; // 801B455C
  c->lr=0x801B4564u; f_8012FB1C(c); // 801B4560
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B4564
  cmps(c,0,(int32_t)c->r[0],0); // 801B4568
  if (!crb(c,1)) { goto L_801B4578; } // 801B456C
  c->r[3]=c->r[30]|c->r[30]; // 801B4570
  c->lr=0x801B4578u; f_80047B20(c); // 801B4574
L_801B4578:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B457C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4580
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4584
  c->lr=c->r[0]; // 801B4588
  c->r[1]=c->r[1]+0x00000010u; // 801B458C
  return; // 801B4590
}

// fn_801B4594
void f_801B4594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4594
  c->r[0]=c->lr; // 801B4598
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B459C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B45A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B45A4
  c->r[30]=c->r[3]|c->r[3]; // 801B45A8
  c->r[31]=c->r[4]|c->r[4]; // 801B45AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B45B0
  if (crb(c,2)) { goto L_801B45D4; } // 801B45B4
  c->r[4]=0u+0x00000000u; // 801B45B8
  c->lr=0x801B45C0u; f_8012FB1C(c); // 801B45BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B45C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B45C4
  if (!crb(c,1)) { goto L_801B45D4; } // 801B45C8
  c->r[3]=c->r[30]|c->r[30]; // 801B45CC
  c->lr=0x801B45D4u; f_80047B20(c); // 801B45D0
L_801B45D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B45D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B45D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B45DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B45E0
  c->lr=c->r[0]; // 801B45E4
  c->r[1]=c->r[1]+0x00000010u; // 801B45E8
  return; // 801B45EC
}

// fn_801B45F0
void f_801B45F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B45F0
  c->r[0]=c->lr; // 801B45F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B45F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B45FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4600
  c->r[30]=c->r[3]|c->r[3]; // 801B4604
  c->r[31]=c->r[4]|c->r[4]; // 801B4608
  cmps(c,0,(int32_t)c->r[3],0); // 801B460C
  if (crb(c,2)) { goto L_801B4630; } // 801B4610
  c->r[4]=0u+0x00000000u; // 801B4614
  c->lr=0x801B461Cu; f_8013D418(c); // 801B4618
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B461C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4620
  if (!crb(c,1)) { goto L_801B4630; } // 801B4624
  c->r[3]=c->r[30]|c->r[30]; // 801B4628
  c->lr=0x801B4630u; f_80047B20(c); // 801B462C
L_801B4630:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4634
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4638
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B463C
  c->lr=c->r[0]; // 801B4640
  c->r[1]=c->r[1]+0x00000010u; // 801B4644
  return; // 801B4648
}

// fn_801B464C
void f_801B464C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B464C
  c->r[0]=c->lr; // 801B4650
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4654
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4658
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B465C
  c->r[30]=c->r[3]|c->r[3]; // 801B4660
  c->r[31]=c->r[4]|c->r[4]; // 801B4664
  cmps(c,0,(int32_t)c->r[3],0); // 801B4668
  if (crb(c,2)) { goto L_801B468C; } // 801B466C
  c->r[4]=0u+0x00000000u; // 801B4670
  c->lr=0x801B4678u; f_801147C0(c); // 801B4674
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B4678
  cmps(c,0,(int32_t)c->r[0],0); // 801B467C
  if (!crb(c,1)) { goto L_801B468C; } // 801B4680
  c->r[3]=c->r[30]|c->r[30]; // 801B4684
  c->lr=0x801B468Cu; f_80047B20(c); // 801B4688
L_801B468C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B468C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4690
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4694
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4698
  c->lr=c->r[0]; // 801B469C
  c->r[1]=c->r[1]+0x00000010u; // 801B46A0
  return; // 801B46A4
}

// fn_801B46A8
void f_801B46A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B46A8
  c->r[0]=c->lr; // 801B46AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B46B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B46B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B46B8
  c->r[30]=c->r[3]|c->r[3]; // 801B46BC
  c->r[31]=c->r[4]|c->r[4]; // 801B46C0
  cmps(c,0,(int32_t)c->r[3],0); // 801B46C4
  if (crb(c,2)) { goto L_801B46E8; } // 801B46C8
  c->r[4]=0u+0x00000000u; // 801B46CC
  c->lr=0x801B46D4u; f_801A628C(c); // 801B46D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B46D4
  cmps(c,0,(int32_t)c->r[0],0); // 801B46D8
  if (!crb(c,1)) { goto L_801B46E8; } // 801B46DC
  c->r[3]=c->r[30]|c->r[30]; // 801B46E0
  c->lr=0x801B46E8u; f_80047B20(c); // 801B46E4
L_801B46E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B46E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B46EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B46F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B46F4
  c->lr=c->r[0]; // 801B46F8
  c->r[1]=c->r[1]+0x00000010u; // 801B46FC
  return; // 801B4700
}

// fn_801B4704
void f_801B4704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4704
  c->r[0]=c->lr; // 801B4708
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B470C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4710
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4714
  c->r[30]=c->r[3]|c->r[3]; // 801B4718
  c->r[31]=c->r[4]|c->r[4]; // 801B471C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4720
  if (crb(c,2)) { goto L_801B4744; } // 801B4724
  c->r[4]=0u+0x00000000u; // 801B4728
  c->lr=0x801B4730u; f_8013C554(c); // 801B472C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B4730
  cmps(c,0,(int32_t)c->r[0],0); // 801B4734
  if (!crb(c,1)) { goto L_801B4744; } // 801B4738
  c->r[3]=c->r[30]|c->r[30]; // 801B473C
  c->lr=0x801B4744u; f_80047B20(c); // 801B4740
L_801B4744:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4748
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B474C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4750
  c->lr=c->r[0]; // 801B4754
  c->r[1]=c->r[1]+0x00000010u; // 801B4758
  return; // 801B475C
}

// fn_801B4760
void f_801B4760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4760
  c->r[0]=c->lr; // 801B4764
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B476C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4770
  c->r[30]=c->r[3]|c->r[3]; // 801B4774
  c->r[31]=c->r[4]|c->r[4]; // 801B4778
  cmps(c,0,(int32_t)c->r[3],0); // 801B477C
  if (crb(c,2)) { goto L_801B47A0; } // 801B4780
  c->r[4]=0u+0x00000000u; // 801B4784
  c->lr=0x801B478Cu; f_8013CF2C(c); // 801B4788
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B478C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4790
  if (!crb(c,1)) { goto L_801B47A0; } // 801B4794
  c->r[3]=c->r[30]|c->r[30]; // 801B4798
  c->lr=0x801B47A0u; f_80047B20(c); // 801B479C
L_801B47A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B47A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B47A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B47A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B47AC
  c->lr=c->r[0]; // 801B47B0
  c->r[1]=c->r[1]+0x00000010u; // 801B47B4
  return; // 801B47B8
}

// fn_801B47BC
void f_801B47BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B47BC
  c->r[0]=c->lr; // 801B47C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B47C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B47C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B47CC
  c->r[30]=c->r[3]|c->r[3]; // 801B47D0
  c->r[31]=c->r[4]|c->r[4]; // 801B47D4
  cmps(c,0,(int32_t)c->r[3],0); // 801B47D8
  if (crb(c,2)) { goto L_801B47FC; } // 801B47DC
  c->r[4]=0u+0x00000000u; // 801B47E0
  c->lr=0x801B47E8u; f_801A5E48(c); // 801B47E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B47E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B47EC
  if (!crb(c,1)) { goto L_801B47FC; } // 801B47F0
  c->r[3]=c->r[30]|c->r[30]; // 801B47F4
  c->lr=0x801B47FCu; f_80047B20(c); // 801B47F8
L_801B47FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B47FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4800
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4804
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4808
  c->lr=c->r[0]; // 801B480C
  c->r[1]=c->r[1]+0x00000010u; // 801B4810
  return; // 801B4814
}

// fn_801B4818
void f_801B4818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4818
  c->r[0]=c->lr; // 801B481C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4824
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4828
  c->r[30]=c->r[3]|c->r[3]; // 801B482C
  c->r[31]=c->r[4]|c->r[4]; // 801B4830
  cmps(c,0,(int32_t)c->r[3],0); // 801B4834
  if (crb(c,2)) { goto L_801B4858; } // 801B4838
  c->r[4]=0u+0x00000000u; // 801B483C
  c->lr=0x801B4844u; f_80138A10(c); // 801B4840
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B4844
  cmps(c,0,(int32_t)c->r[0],0); // 801B4848
  if (!crb(c,1)) { goto L_801B4858; } // 801B484C
  c->r[3]=c->r[30]|c->r[30]; // 801B4850
  c->lr=0x801B4858u; f_80047B20(c); // 801B4854
L_801B4858:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B485C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4860
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4864
  c->lr=c->r[0]; // 801B4868
  c->r[1]=c->r[1]+0x00000010u; // 801B486C
  return; // 801B4870
}

// fn_801B4874
void f_801B4874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4874
  c->r[0]=c->lr; // 801B4878
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B487C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4880
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4884
  c->r[30]=c->r[3]|c->r[3]; // 801B4888
  c->r[31]=c->r[4]|c->r[4]; // 801B488C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4890
  if (crb(c,2)) { goto L_801B48B4; } // 801B4894
  c->r[4]=0u+0x00000000u; // 801B4898
  c->lr=0x801B48A0u; f_8013CED0(c); // 801B489C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B48A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B48A4
  if (!crb(c,1)) { goto L_801B48B4; } // 801B48A8
  c->r[3]=c->r[30]|c->r[30]; // 801B48AC
  c->lr=0x801B48B4u; f_80047B20(c); // 801B48B0
L_801B48B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B48B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B48B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B48BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B48C0
  c->lr=c->r[0]; // 801B48C4
  c->r[1]=c->r[1]+0x00000010u; // 801B48C8
  return; // 801B48CC
}

// fn_801B48D0
void f_801B48D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B48D0
  c->r[0]=c->lr; // 801B48D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B48D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B48DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B48E0
  c->r[30]=c->r[3]|c->r[3]; // 801B48E4
  c->r[31]=c->r[4]|c->r[4]; // 801B48E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B48EC
  if (crb(c,2)) { goto L_801B4910; } // 801B48F0
  c->r[4]=0u+0x00000000u; // 801B48F4
  c->lr=0x801B48FCu; f_80119214(c); // 801B48F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B48FC
  cmps(c,0,(int32_t)c->r[0],0); // 801B4900
  if (!crb(c,1)) { goto L_801B4910; } // 801B4904
  c->r[3]=c->r[30]|c->r[30]; // 801B4908
  c->lr=0x801B4910u; f_80047B20(c); // 801B490C
L_801B4910:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4910
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4914
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4918
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B491C
  c->lr=c->r[0]; // 801B4920
  c->r[1]=c->r[1]+0x00000010u; // 801B4924
  return; // 801B4928
}

// fn_801B492C
void f_801B492C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B492C
  f_8017CB84(c); return; // 801B4930
}

// fn_801B4934
void f_801B4934(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B4934
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4938
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801B493C
  c->ctr=c->r[12]; // 801B4940
  if (true) { dispatch(c,c->ctr); return; } // 801B4944
}

// fn_801B4948
void f_801B4948(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4948
  c->r[0]=c->lr; // 801B494C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4954
  c->r[31]=c->r[3]|c->r[3]; // 801B4958
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B495C
  c->lr=0x801B4964u; f_80147B04(c); // 801B4960
  c->r[3]=c->r[31]|c->r[31]; // 801B4964
  c->r[4]=0u+0x00000001u; // 801B4968
  c->lr=0x801B4970u; f_801B492C(c); // 801B496C
  c->r[3]=c->r[31]|c->r[31]; // 801B4970
  c->r[4]=0u+0x00000000u; // 801B4974
  c->lr=0x801B497Cu; f_801B4934(c); // 801B4978
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B497C
  c->lr=0x801B4984u; f_8017CB9C(c); // 801B4980
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4984
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4988
  c->lr=c->r[0]; // 801B498C
  c->r[1]=c->r[1]+0x00000010u; // 801B4990
  return; // 801B4994
}

// fn_801B4998
void f_801B4998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4998
  c->r[0]=c->lr; // 801B499C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B49A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B49A4
  c->r[31]=c->r[3]|c->r[3]; // 801B49A8
  c->r[4]=0u+0x00000001u; // 801B49AC
  c->lr=0x801B49B4u; f_801B492C(c); // 801B49B0
  c->r[3]=c->r[31]|c->r[31]; // 801B49B4
  c->r[4]=0u+0x00000000u; // 801B49B8
  c->lr=0x801B49C0u; f_801B4934(c); // 801B49BC
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B49C0
  c->lr=0x801B49C8u; f_8017CBAC(c); // 801B49C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B49C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B49CC
  c->lr=c->r[0]; // 801B49D0
  c->r[1]=c->r[1]+0x00000010u; // 801B49D4
  return; // 801B49D8
}

// fn_801B49DC
void f_801B49DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B49DC
  c->r[0]=c->lr; // 801B49E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B49E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B49E8
  c->r[31]=c->r[3]|c->r[3]; // 801B49EC
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B49F0
  c->lr=0x801B49F8u; f_80147B04(c); // 801B49F4
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B49F8
  c->lr=0x801B4A00u; f_8017CBBC(c); // 801B49FC
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B4A00
  c->lr=0x801B4A08u; f_801A58B8(c); // 801B4A04
  c->r[4]=c->r[3]|c->r[3]; // 801B4A08
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4A0C
  c->lr=0x801B4A14u; f_801BF5AC(c); // 801B4A10
  c->r[3]=c->r[31]|c->r[31]; // 801B4A14
  c->r[4]=0u+0x00000001u; // 801B4A18
  c->lr=0x801B4A20u; f_801B4934(c); // 801B4A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4A20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4A24
  c->lr=c->r[0]; // 801B4A28
  c->r[1]=c->r[1]+0x00000010u; // 801B4A2C
  return; // 801B4A30
}

// fn_801B4A34
void f_801B4A34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4A34
  c->r[0]=c->lr; // 801B4A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4A40
  c->r[31]=c->r[3]|c->r[3]; // 801B4A44
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B4A48
  c->lr=0x801B4A50u; f_80147B04(c); // 801B4A4C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4A50
  c->lr=0x801B4A58u; f_8017CBBC(c); // 801B4A54
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B4A58
  c->lr=0x801B4A60u; f_8017DE7C(c); // 801B4A5C
  c->r[4]=c->r[3]|c->r[3]; // 801B4A60
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4A64
  c->lr=0x801B4A6Cu; f_80147B10(c); // 801B4A68
  c->r[3]=c->r[31]|c->r[31]; // 801B4A6C
  c->r[4]=0u+0x00000001u; // 801B4A70
  c->lr=0x801B4A78u; f_801B4934(c); // 801B4A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4A78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4A7C
  c->lr=c->r[0]; // 801B4A80
  c->r[1]=c->r[1]+0x00000010u; // 801B4A84
  return; // 801B4A88
}

// fn_801B4A8C
void f_801B4A8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4A8C
  c->r[0]=c->lr; // 801B4A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4A98
  c->r[31]=c->r[3]|c->r[3]; // 801B4A9C
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B4AA0
  c->lr=0x801B4AA8u; f_8017DE70(c); // 801B4AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4AA8
  if (crb(c,1)) { goto L_801B4AC0; } // 801B4AAC
  c->r[3]=c->r[31]|c->r[31]; // 801B4AB0
  c->r[4]=0u+0x00000000u; // 801B4AB4
  c->lr=0x801B4ABCu; f_801B4934(c); // 801B4AB8
  goto L_801B4AF0; // 801B4ABC
L_801B4AC0:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4AC0
  c->lr=0x801B4AC8u; f_80147B04(c); // 801B4AC4
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4AC8
  c->lr=0x801B4AD0u; f_8017CBBC(c); // 801B4ACC
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B4AD0
  c->lr=0x801B4AD8u; f_8017DE7C(c); // 801B4AD4
  c->r[4]=c->r[3]|c->r[3]; // 801B4AD8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4ADC
  c->lr=0x801B4AE4u; f_80147B10(c); // 801B4AE0
  c->r[3]=c->r[31]|c->r[31]; // 801B4AE4
  c->r[4]=0u+0x00000001u; // 801B4AE8
  c->lr=0x801B4AF0u; f_801B4934(c); // 801B4AEC
L_801B4AF0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4AF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4AF4
  c->lr=c->r[0]; // 801B4AF8
  c->r[1]=c->r[1]+0x00000010u; // 801B4AFC
  return; // 801B4B00
}

// fn_801B4B04
void f_801B4B04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4B04
  c->r[0]=c->lr; // 801B4B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4B10
  c->r[31]=c->r[3]|c->r[3]; // 801B4B14
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B4B18
  c->lr=0x801B4B20u; f_80147B04(c); // 801B4B1C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4B20
  c->lr=0x801B4B28u; f_8017CBBC(c); // 801B4B24
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B4B28
  c->lr=0x801B4B30u; f_801BF534(c); // 801B4B2C
  c->r[3]=c->r[31]|c->r[31]; // 801B4B30
  c->r[4]=0u+0x00000001u; // 801B4B34
  c->lr=0x801B4B3Cu; f_801B4934(c); // 801B4B38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4B3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4B40
  c->lr=c->r[0]; // 801B4B44
  c->r[1]=c->r[1]+0x00000010u; // 801B4B48
  return; // 801B4B4C
}

// fn_801B4B50
void f_801B4B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4B50
  c->r[0]=c->lr; // 801B4B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4B5C
  c->r[31]=c->r[3]|c->r[3]; // 801B4B60
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B4B64
  c->r[4]=0u+0x00000001u; // 801B4B68
  c->lr=0x801B4B70u; f_8017C078(c); // 801B4B6C
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4B70
  c->lr=0x801B4B78u; f_8017C080(c); // 801B4B74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4B78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4B7C
  c->lr=c->r[0]; // 801B4B80
  c->r[1]=c->r[1]+0x00000010u; // 801B4B84
  return; // 801B4B88
}

// fn_801B4B8C
void f_801B4B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4B8C
  c->r[0]=c->lr; // 801B4B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4B98
  c->r[31]=c->r[3]|c->r[3]; // 801B4B9C
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B4BA0
  c->r[4]=0u+0x00000000u; // 801B4BA4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4BA8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B4BAC
  c->ctr=c->r[12]; // 801B4BB0
  if (true) { c->lr=0x801B4BB8u; dispatch(c,c->ctr); } // 801B4BB4
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4BB8
  c->r[4]=0u+0x00000001u; // 801B4BBC
  c->lr=0x801B4BC4u; f_8017C078(c); // 801B4BC0
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4BC4
  c->lr=0x801B4BCCu; f_8017C090(c); // 801B4BC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4BD0
  c->lr=c->r[0]; // 801B4BD4
  c->r[1]=c->r[1]+0x00000010u; // 801B4BD8
  return; // 801B4BDC
}

// fn_801B4BE0
void f_801B4BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4BE0
  c->r[0]=c->lr; // 801B4BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4BE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4BEC
  c->r[31]=c->r[3]|c->r[3]; // 801B4BF0
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B4BF4
  c->r[4]=0u+0x00000001u; // 801B4BF8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4BFC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B4C00
  c->ctr=c->r[12]; // 801B4C04
  if (true) { c->lr=0x801B4C0Cu; dispatch(c,c->ctr); } // 801B4C08
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4C0C
  c->lr=0x801B4C14u; f_8017C0A0(c); // 801B4C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4C14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4C18
  c->lr=c->r[0]; // 801B4C1C
  c->r[1]=c->r[1]+0x00000010u; // 801B4C20
  return; // 801B4C24
}

// fn_801B4C28
void f_801B4C28(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B4C28
  f_8017C0B0(c); return; // 801B4C2C
}

// fn_801B4C30
void f_801B4C30(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B4C30
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4C34
  c->r[12]=R32(c->r[12]+0x00000068u); // 801B4C38
  c->ctr=c->r[12]; // 801B4C3C
  if (true) { dispatch(c,c->ctr); return; } // 801B4C40
}

// fn_801B4C44
void f_801B4C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4C44
  c->r[0]=c->lr; // 801B4C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4C50
  c->r[31]=c->r[3]|c->r[3]; // 801B4C54
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4C58
  c->lr=0x801B4C60u; f_8013F9D0(c); // 801B4C5C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4C60
  c->lr=0x801B4C68u; f_801C0774(c); // 801B4C64
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4C68
  c->lr=0x801B4C70u; f_8013C6A8(c); // 801B4C6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4C70
  c->lr=0x801B4C78u; f_801C07A0(c); // 801B4C74
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4C78
  c->lr=0x801B4C80u; f_8013C6A0(c); // 801B4C7C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4C80
  c->lr=0x801B4C88u; f_8013FBA4(c); // 801B4C84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4C88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4C8C
  c->lr=c->r[0]; // 801B4C90
  c->r[1]=c->r[1]+0x00000010u; // 801B4C94
  return; // 801B4C98
}

// fn_801B4C9C
void f_801B4C9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4C9C
  c->r[0]=c->lr; // 801B4CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4CA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4CA8
  c->r[31]=c->r[3]|c->r[3]; // 801B4CAC
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4CB0
  c->lr=0x801B4CB8u; f_8013F9D0(c); // 801B4CB4
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B4CB8
  c->lr=0x801B4CC0u; f_801BE6B4(c); // 801B4CBC
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4CC0
  c->lr=0x801B4CC8u; f_8013C6A8(c); // 801B4CC4
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B4CC8
  c->lr=0x801B4CD0u; f_801BE6E0(c); // 801B4CCC
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4CD0
  c->lr=0x801B4CD8u; f_8013C6A0(c); // 801B4CD4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4CD8
  c->lr=0x801B4CE0u; f_8013FBF0(c); // 801B4CDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4CE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4CE4
  c->lr=c->r[0]; // 801B4CE8
  c->r[1]=c->r[1]+0x00000010u; // 801B4CEC
  return; // 801B4CF0
}

// fn_801B4CF4
void f_801B4CF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4CF4
  c->r[0]=c->lr; // 801B4CF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4CFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4D00
  c->r[31]=c->r[3]|c->r[3]; // 801B4D04
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4D08
  c->lr=0x801B4D10u; f_8013F9D0(c); // 801B4D0C
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B4D10
  c->lr=0x801B4D18u; f_8013E3E0(c); // 801B4D14
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4D18
  c->lr=0x801B4D20u; f_8013C6A8(c); // 801B4D1C
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B4D20
  c->lr=0x801B4D28u; f_8013E40C(c); // 801B4D24
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4D28
  c->lr=0x801B4D30u; f_8013C6A0(c); // 801B4D2C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4D30
  c->lr=0x801B4D38u; f_8013FBF0(c); // 801B4D34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4D38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4D3C
  c->lr=c->r[0]; // 801B4D40
  c->r[1]=c->r[1]+0x00000010u; // 801B4D44
  return; // 801B4D48
}

// fn_801B4D4C
void f_801B4D4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4D4C
  c->r[0]=c->lr; // 801B4D50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4D54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4D58
  c->r[31]=c->r[3]|c->r[3]; // 801B4D5C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4D60
  c->lr=0x801B4D68u; f_8013F9D0(c); // 801B4D64
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B4D68
  c->lr=0x801B4D70u; f_8013E3E0(c); // 801B4D6C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4D70
  c->lr=0x801B4D78u; f_8013C6A8(c); // 801B4D74
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B4D78
  c->lr=0x801B4D80u; f_8013E40C(c); // 801B4D7C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4D80
  c->lr=0x801B4D88u; f_8013C6A0(c); // 801B4D84
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4D88
  c->lr=0x801B4D90u; f_8013FDC4(c); // 801B4D8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4D94
  c->lr=c->r[0]; // 801B4D98
  c->r[1]=c->r[1]+0x00000010u; // 801B4D9C
  return; // 801B4DA0
}

// fn_801B4DA4
void f_801B4DA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4DA4
  c->r[0]=c->lr; // 801B4DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4DAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4DB0
  c->r[31]=c->r[3]|c->r[3]; // 801B4DB4
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4DB8
  c->lr=0x801B4DC0u; f_8013FBF0(c); // 801B4DBC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4DC0
  c->lr=0x801B4DC8u; f_801C0774(c); // 801B4DC4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4DC8
  c->lr=0x801B4DD0u; f_8013C6A8(c); // 801B4DCC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4DD0
  c->lr=0x801B4DD8u; f_801C07A0(c); // 801B4DD4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4DD8
  c->lr=0x801B4DE0u; f_8013C6A0(c); // 801B4DDC
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4DE0
  c->lr=0x801B4DE8u; f_8013FF98(c); // 801B4DE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4DE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4DEC
  c->lr=c->r[0]; // 801B4DF0
  c->r[1]=c->r[1]+0x00000010u; // 801B4DF4
  return; // 801B4DF8
}

// fn_801B4DFC
void f_801B4DFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4DFC
  c->r[0]=c->lr; // 801B4E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4E08
  c->r[31]=c->r[3]|c->r[3]; // 801B4E0C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4E10
  c->lr=0x801B4E18u; f_8013FBF0(c); // 801B4E14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4E18
  c->lr=0x801B4E20u; f_801C0774(c); // 801B4E1C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4E20
  c->lr=0x801B4E28u; f_8013C6A8(c); // 801B4E24
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4E28
  c->lr=0x801B4E30u; f_801C07A0(c); // 801B4E2C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4E30
  c->lr=0x801B4E38u; f_8013C6A0(c); // 801B4E34
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4E38
  c->lr=0x801B4E40u; f_8014016C(c); // 801B4E3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4E40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4E44
  c->lr=c->r[0]; // 801B4E48
  c->r[1]=c->r[1]+0x00000010u; // 801B4E4C
  return; // 801B4E50
}

// fn_801B4E54
void f_801B4E54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4E54
  c->r[0]=c->lr; // 801B4E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4E5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4E60
  c->r[31]=c->r[3]|c->r[3]; // 801B4E64
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B4E68
  c->lr=0x801B4E70u; f_8013F9D0(c); // 801B4E6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4E70
  c->lr=0x801B4E78u; f_801C07CC(c); // 801B4E74
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4E78
  c->lr=0x801B4E80u; f_8013C6A8(c); // 801B4E7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B4E80
  c->lr=0x801B4E88u; f_801C07F8(c); // 801B4E84
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4E88
  c->lr=0x801B4E90u; f_8013C6A0(c); // 801B4E8C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801B4E90
  c->lr=0x801B4E98u; f_8013FBA4(c); // 801B4E94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4E9C
  c->lr=c->r[0]; // 801B4EA0
  c->r[1]=c->r[1]+0x00000010u; // 801B4EA4
  return; // 801B4EA8
}

// fn_801B4EAC
void f_801B4EAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4EAC
  c->r[0]=c->lr; // 801B4EB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4EB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4EB8
  c->r[31]=c->r[3]|c->r[3]; // 801B4EBC
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801B4EC0
  c->lr=0x801B4EC8u; f_8014039C(c); // 801B4EC4
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4EC8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4ECC
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801B4ED0
  c->ctr=c->r[12]; // 801B4ED4
  if (true) { c->lr=0x801B4EDCu; dispatch(c,c->ctr); } // 801B4ED8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4EDC
  c->lr=0x801B4EE4u; f_8013C6B8(c); // 801B4EE0
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4EE4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4EE8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4EEC
  c->ctr=c->r[12]; // 801B4EF0
  if (true) { c->lr=0x801B4EF8u; dispatch(c,c->ctr); } // 801B4EF4
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4EF8
  c->lr=0x801B4F00u; f_8013C6B0(c); // 801B4EFC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4F00
  c->lr=0x801B4F08u; f_80140570(c); // 801B4F04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4F08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4F0C
  c->lr=c->r[0]; // 801B4F10
  c->r[1]=c->r[1]+0x00000010u; // 801B4F14
  return; // 801B4F18
}

// fn_801B4F1C
void f_801B4F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4F1C
  c->r[0]=c->lr; // 801B4F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4F28
  c->r[31]=c->r[3]|c->r[3]; // 801B4F2C
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B4F30
  c->lr=0x801B4F38u; f_801BD778(c); // 801B4F34
  cmps(c,0,(int32_t)c->r[3],0); // 801B4F38
  if (!crb(c,2)) { goto L_801B4F48; } // 801B4F3C
  c->r[3]=0u+0x00000000u; // 801B4F40
  goto L_801B4F68; // 801B4F44
L_801B4F48:;
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B4F48
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B4F4C
  c->r[12]=R32(c->r[12]+0x00000068u); // 801B4F50
  c->ctr=c->r[12]; // 801B4F54
  if (true) { c->lr=0x801B4F5Cu; dispatch(c,c->ctr); } // 801B4F58
  c->r[0]=0u-c->r[3]; // 801B4F5C
  c->r[0]=c->r[0]&~c->r[3]; // 801B4F60
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B4F64
L_801B4F68:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4F68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4F6C
  c->lr=c->r[0]; // 801B4F70
  c->r[1]=c->r[1]+0x00000010u; // 801B4F74
  return; // 801B4F78
}

// fn_801B4F7C
void f_801B4F7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4F7C
  c->r[0]=c->lr; // 801B4F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4F88
  c->r[31]=c->r[3]|c->r[3]; // 801B4F8C
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801B4F90
  c->lr=0x801B4F98u; f_8014039C(c); // 801B4F94
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B4F98
  c->lr=0x801B4FA0u; f_801B8CCC(c); // 801B4F9C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4FA0
  c->lr=0x801B4FA8u; f_8013C6B8(c); // 801B4FA4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B4FA8
  c->lr=0x801B4FB0u; f_801B8CF8(c); // 801B4FAC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4FB0
  c->lr=0x801B4FB8u; f_8013C6B0(c); // 801B4FB4
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801B4FB8
  c->lr=0x801B4FC0u; f_801405BC(c); // 801B4FBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4FC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4FC4
  c->lr=c->r[0]; // 801B4FC8
  c->r[1]=c->r[1]+0x00000010u; // 801B4FCC
  return; // 801B4FD0
}

// fn_801B4FD4
void f_801B4FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4FD4
  c->r[0]=c->lr; // 801B4FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4FDC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B4FE0
  c->lr=0x801B4FE8u; f_801B8C84(c); // 801B4FE4
  c->r[0]=0u-c->r[3]; // 801B4FE8
  c->r[0]=c->r[0]&~c->r[3]; // 801B4FEC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B4FF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4FF4
  c->lr=c->r[0]; // 801B4FF8
  c->r[1]=c->r[1]+0x00000010u; // 801B4FFC
  return; // 801B5000
}

// fn_801B5004
void f_801B5004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5004
  c->r[0]=c->lr; // 801B5008
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B500C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5010
  c->r[31]=c->r[3]|c->r[3]; // 801B5014
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801B5018
  c->r[4]=0u+0x00000000u; // 801B501C
  c->lr=0x801B5024u; f_8011918C(c); // 801B5020
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B5024
  c->r[4]=0u+0x00000000u; // 801B5028
  c->lr=0x801B5030u; f_80119184(c); // 801B502C
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B5030
  c->r[4]=0u+0x00000001u; // 801B5034
  c->lr=0x801B503Cu; f_8011917C(c); // 801B5038
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B503C
  c->lr=0x801B5044u; f_801191D4(c); // 801B5040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5044
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5048
  c->lr=c->r[0]; // 801B504C
  c->r[1]=c->r[1]+0x00000010u; // 801B5050
  return; // 801B5054
}

// fn_801B5058
void f_801B5058(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5058
  c->r[0]=c->lr; // 801B505C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5060
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5064
  c->r[31]=c->r[3]|c->r[3]; // 801B5068
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801B506C
  c->r[4]=0u+0x00000000u; // 801B5070
  c->lr=0x801B5078u; f_8011918C(c); // 801B5074
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B5078
  c->r[4]=0u+0x00000000u; // 801B507C
  c->lr=0x801B5084u; f_80119184(c); // 801B5080
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B5084
  c->r[4]=0u+0x00000001u; // 801B5088
  c->lr=0x801B5090u; f_8011917C(c); // 801B508C
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B5090
  c->lr=0x801B5098u; f_801191E4(c); // 801B5094
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5098
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B509C
  c->lr=c->r[0]; // 801B50A0
  c->r[1]=c->r[1]+0x00000010u; // 801B50A4
  return; // 801B50A8
}

// fn_801B50AC
void f_801B50AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B50AC
  c->r[0]=c->lr; // 801B50B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B50B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B50B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B50BC
  c->r[30]=c->r[3]|c->r[3]; // 801B50C0
  c->r[31]=c->r[4]|c->r[4]; // 801B50C4
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801B50C8
  c->r[4]=0u+0x00000001u; // 801B50CC
  c->lr=0x801B50D4u; f_8011918C(c); // 801B50D0
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B50D4
  c->r[4]=0u+0x00000001u; // 801B50D8
  c->lr=0x801B50E0u; f_80119184(c); // 801B50DC
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B50E0
  c->r[4]=c->r[31]|c->r[31]; // 801B50E4
  c->lr=0x801B50ECu; f_801BB980(c); // 801B50E8
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B50EC
  c->lr=0x801B50F4u; f_801191F4(c); // 801B50F0
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B50F4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B50F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801B50FC
  c->ctr=c->r[12]; // 801B5100
  if (true) { c->lr=0x801B5108u; dispatch(c,c->ctr); } // 801B5104
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B5108
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B510C
  c->r[12]=R32(c->r[12]+0x00000044u); // 801B5110
  c->ctr=c->r[12]; // 801B5114
  if (true) { c->lr=0x801B511Cu; dispatch(c,c->ctr); } // 801B5118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B511C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5120
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5124
  c->lr=c->r[0]; // 801B5128
  c->r[1]=c->r[1]+0x00000010u; // 801B512C
  return; // 801B5130
}

// fn_801B5134
void f_801B5134(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801B5134
  f_80119204(c); return; // 801B5138
}

// fn_801B513C
void f_801B513C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B513C
  c->r[0]=c->lr; // 801B5140
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5148
  c->r[31]=c->r[3]|c->r[3]; // 801B514C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5150
  c->r[4]=0u+0x00000000u; // 801B5154
  c->lr=0x801B515Cu; f_801C6A68(c); // 801B5158
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B515C
  c->r[4]=0u+0x00000001u; // 801B5160
  c->lr=0x801B5168u; f_801C69F8(c); // 801B5164
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B5168
  c->lr=0x801B5170u; f_801C6AD8(c); // 801B516C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5170
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5174
  c->lr=c->r[0]; // 801B5178
  c->r[1]=c->r[1]+0x00000010u; // 801B517C
  return; // 801B5180
}

// fn_801B5184
void f_801B5184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5184
  c->r[0]=c->lr; // 801B5188
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B518C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5190
  c->r[31]=c->r[3]|c->r[3]; // 801B5194
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5198
  c->r[4]=0u+0x00000000u; // 801B519C
  c->lr=0x801B51A4u; f_801C6A68(c); // 801B51A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B51A4
  c->r[4]=0u+0x00000001u; // 801B51A8
  c->lr=0x801B51B0u; f_801C69F8(c); // 801B51AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B51B0
  c->lr=0x801B51B8u; f_801C6B38(c); // 801B51B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B51B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B51BC
  c->lr=c->r[0]; // 801B51C0
  c->r[1]=c->r[1]+0x00000010u; // 801B51C4
  return; // 801B51C8
}

// fn_801B51CC
void f_801B51CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B51CC
  f_801C6B98(c); return; // 801B51D0
}

// fn_801B51D4
void f_801B51D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B51D4
  c->r[0]=c->lr; // 801B51D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B51DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B51E0
  c->r[31]=c->r[3]|c->r[3]; // 801B51E4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B51E8
  c->r[4]=0u+0x00000001u; // 801B51EC
  c->lr=0x801B51F4u; f_801C6A68(c); // 801B51F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B51F4
  c->lr=0x801B51FCu; f_801C6C6C(c); // 801B51F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B51FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5200
  c->lr=c->r[0]; // 801B5204
  c->r[1]=c->r[1]+0x00000010u; // 801B5208
  return; // 801B520C
}

// fn_801B5210
void f_801B5210(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5210
  f_801C6C20(c); return; // 801B5214
}

// fn_801B5218
void f_801B5218(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5218
  f_801C6CD4(c); return; // 801B521C
}

// fn_801B5220
void f_801B5220(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5220
  f_801C6DC8(c); return; // 801B5224
}

// fn_801B5228
void f_801B5228(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5228
  f_801C6D20(c); return; // 801B522C
}

// fn_801B5230
void f_801B5230(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5230
  f_801C6D6C(c); return; // 801B5234
}

// fn_801B5238
void f_801B5238(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B5238
  f_801C6DB8(c); return; // 801B523C
}

// fn_801B5240
void f_801B5240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5240
  c->r[0]=c->lr; // 801B5244
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B524C
  c->r[31]=c->r[3]|c->r[3]; // 801B5250
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801B5254
  c->r[4]=0u+0x00000000u; // 801B5258
  c->lr=0x801B5260u; f_8017E7AC(c); // 801B525C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B5260
  c->r[4]=0u+0x00000001u; // 801B5264
  c->lr=0x801B526Cu; f_8017E7A4(c); // 801B5268
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B526C
  c->lr=0x801B5274u; f_8017E7B4(c); // 801B5270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5274
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5278
  c->lr=c->r[0]; // 801B527C
  c->r[1]=c->r[1]+0x00000010u; // 801B5280
  return; // 801B5284
}

// fn_801B5288
void f_801B5288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5288
  c->r[0]=c->lr; // 801B528C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5294
  c->r[31]=c->r[3]|c->r[3]; // 801B5298
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801B529C
  c->r[4]=0u+0x00000000u; // 801B52A0
  c->lr=0x801B52A8u; f_8017E7AC(c); // 801B52A4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B52A8
  c->r[4]=0u+0x00000001u; // 801B52AC
  c->lr=0x801B52B4u; f_8017E7A4(c); // 801B52B0
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B52B4
  c->lr=0x801B52BCu; f_8017E804(c); // 801B52B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B52BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B52C0
  c->lr=c->r[0]; // 801B52C4
  c->r[1]=c->r[1]+0x00000010u; // 801B52C8
  return; // 801B52CC
}

// fn_801B52D0
void f_801B52D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B52D0
  c->r[0]=c->lr; // 801B52D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B52D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B52DC
  c->r[31]=c->r[3]|c->r[3]; // 801B52E0
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801B52E4
  c->lr=0x801B52ECu; f_8017E854(c); // 801B52E8
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B52EC
  c->lr=0x801B52F4u; f_8017DE7C(c); // 801B52F0
  c->r[4]=c->r[3]|c->r[3]; // 801B52F4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B52F8
  c->lr=0x801B5300u; f_801BC070(c); // 801B52FC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B5300
  c->r[4]=0u+0x00000001u; // 801B5304
  c->lr=0x801B530Cu; f_8017E7AC(c); // 801B5308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B530C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5310
  c->lr=c->r[0]; // 801B5314
  c->r[1]=c->r[1]+0x00000010u; // 801B5318
  return; // 801B531C
}

// fn_801B5320
void f_801B5320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5320
  c->r[0]=c->lr; // 801B5324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B532C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5330
  c->r[30]=c->r[3]|c->r[3]; // 801B5334
  c->r[31]=c->r[4]|c->r[4]; // 801B5338
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801B533C
  c->lr=0x801B5344u; f_8017E854(c); // 801B5340
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801B5344
  c->r[4]=c->r[31]|c->r[31]; // 801B5348
  c->lr=0x801B5350u; f_801BC204(c); // 801B534C
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801B5350
  c->r[4]=0u+0x00000001u; // 801B5354
  c->lr=0x801B535Cu; f_8017E7AC(c); // 801B5358
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B535C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5360
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5364
  c->lr=c->r[0]; // 801B5368
  c->r[1]=c->r[1]+0x00000010u; // 801B536C
  return; // 801B5370
}

// fn_801B5374
void f_801B5374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5374
  c->r[0]=c->lr; // 801B5378
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B537C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5380
  c->r[31]=c->r[3]|c->r[3]; // 801B5384
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801B5388
  c->r[4]=0u+0x00000000u; // 801B538C
  c->lr=0x801B5394u; f_801A6144(c); // 801B5390
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B5394
  c->r[4]=0u+0x00000001u; // 801B5398
  c->lr=0x801B53A0u; f_801A613C(c); // 801B539C
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B53A0
  c->lr=0x801B53A8u; f_801A614C(c); // 801B53A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B53A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B53AC
  c->lr=c->r[0]; // 801B53B0
  c->r[1]=c->r[1]+0x00000010u; // 801B53B4
  return; // 801B53B8
}

// fn_801B53BC
void f_801B53BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B53BC
  c->r[0]=c->lr; // 801B53C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B53C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B53C8
  c->r[31]=c->r[3]|c->r[3]; // 801B53CC
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801B53D0
  c->r[4]=0u+0x00000000u; // 801B53D4
  c->lr=0x801B53DCu; f_801A6144(c); // 801B53D8
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B53DC
  c->r[4]=0u+0x00000001u; // 801B53E0
  c->lr=0x801B53E8u; f_801A613C(c); // 801B53E4
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B53E8
  c->lr=0x801B53F0u; f_801A619C(c); // 801B53EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B53F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B53F4
  c->lr=c->r[0]; // 801B53F8
  c->r[1]=c->r[1]+0x00000010u; // 801B53FC
  return; // 801B5400
}

// fn_801B5404
void f_801B5404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5404
  c->r[0]=c->lr; // 801B5408
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B540C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5410
  c->r[31]=c->r[3]|c->r[3]; // 801B5414
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801B5418
  c->lr=0x801B5420u; f_801A61EC(c); // 801B541C
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B5420
  c->lr=0x801B5428u; f_801A58B8(c); // 801B5424
  c->r[4]=c->r[3]|c->r[3]; // 801B5428
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B542C
  c->lr=0x801B5434u; f_801BCE24(c); // 801B5430
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B5434
  c->r[4]=0u+0x00000001u; // 801B5438
  c->lr=0x801B5440u; f_801A6144(c); // 801B543C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5440
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5444
  c->lr=c->r[0]; // 801B5448
  c->r[1]=c->r[1]+0x00000010u; // 801B544C
  return; // 801B5450
}

// fn_801B5454
void f_801B5454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5454
  c->r[0]=c->lr; // 801B5458
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B545C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5460
  c->r[31]=c->r[3]|c->r[3]; // 801B5464
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801B5468
  c->lr=0x801B5470u; f_801A61EC(c); // 801B546C
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B5470
  c->lr=0x801B5478u; f_801A58B8(c); // 801B5474
  c->r[4]=c->r[3]|c->r[3]; // 801B5478
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B547C
  c->lr=0x801B5484u; f_801BD068(c); // 801B5480
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B5484
  c->r[4]=0u+0x00000001u; // 801B5488
  c->lr=0x801B5490u; f_801A6144(c); // 801B548C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5490
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5494
  c->lr=c->r[0]; // 801B5498
  c->r[1]=c->r[1]+0x00000010u; // 801B549C
  return; // 801B54A0
}

// fn_801B54A4
void f_801B54A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B54A4
  c->r[0]=c->lr; // 801B54A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B54AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B54B0
  c->r[31]=c->r[3]|c->r[3]; // 801B54B4
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B54B8
  c->r[4]=0u+0x00000001u; // 801B54BC
  c->lr=0x801B54C4u; f_801A56A0(c); // 801B54C0
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B54C4
  c->r[4]=0u+0x00000000u; // 801B54C8
  c->lr=0x801B54D0u; f_801A56E4(c); // 801B54CC
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B54D0
  c->lr=0x801B54D8u; f_801A5754(c); // 801B54D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B54D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B54DC
  c->lr=c->r[0]; // 801B54E0
  c->r[1]=c->r[1]+0x00000010u; // 801B54E4
  return; // 801B54E8
}

// fn_801B54EC
void f_801B54EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B54EC
  c->r[0]=c->lr; // 801B54F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B54F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B54F8
  c->r[31]=c->r[3]|c->r[3]; // 801B54FC
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5500
  c->r[4]=0u+0x00000001u; // 801B5504
  c->lr=0x801B550Cu; f_801A56A0(c); // 801B5508
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B550C
  c->r[4]=0u+0x00000000u; // 801B5510
  c->lr=0x801B5518u; f_801A56E4(c); // 801B5514
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B5518
  c->lr=0x801B5520u; f_801A5764(c); // 801B551C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5520
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5524
  c->lr=c->r[0]; // 801B5528
  c->r[1]=c->r[1]+0x00000010u; // 801B552C
  return; // 801B5530
}

// fn_801B5534
void f_801B5534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5534
  c->r[0]=c->lr; // 801B5538
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B553C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5540
  c->r[31]=c->r[3]|c->r[3]; // 801B5544
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5548
  c->r[4]=0u+0x00000001u; // 801B554C
  c->lr=0x801B5554u; f_801A56E4(c); // 801B5550
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B5554
  c->lr=0x801B555Cu; f_801A5774(c); // 801B5558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B555C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5560
  c->lr=c->r[0]; // 801B5564
  c->r[1]=c->r[1]+0x00000010u; // 801B5568
  return; // 801B556C
}

// fn_801B5570
void f_801B5570(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5570
  f_801A5784(c); return; // 801B5574
}

// fn_801B5578
void f_801B5578(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5578
  f_801A5A9C(c); return; // 801B557C
}

// fn_801B5580
void f_801B5580(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5580
  f_801A5A94(c); return; // 801B5584
}

// fn_801B5588
void f_801B5588(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5588
  f_801AE58C(c); return; // 801B558C
}

// fn_801B5590
void f_801B5590(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5590
  f_801A5AA8(c); return; // 801B5594
}

// fn_801B5598
void f_801B5598(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5598
  f_801A5AB0(c); return; // 801B559C
}

// fn_801B55A0
void f_801B55A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B55A0
  f_801A5874(c); return; // 801B55A4
}

// fn_801B55A8
void f_801B55A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B55A8
  c->r[0]=c->lr; // 801B55AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B55B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B55B4
  c->r[31]=c->r[3]|c->r[3]; // 801B55B8
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B55BC
  c->r[4]=0u+0x00000001u; // 801B55C0
  c->lr=0x801B55C8u; f_8017DC30(c); // 801B55C4
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B55C8
  c->r[4]=0u+0x00000000u; // 801B55CC
  c->lr=0x801B55D4u; f_8017DC74(c); // 801B55D0
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B55D4
  c->lr=0x801B55DCu; f_8017DD30(c); // 801B55D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B55DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B55E0
  c->lr=c->r[0]; // 801B55E4
  c->r[1]=c->r[1]+0x00000010u; // 801B55E8
  return; // 801B55EC
}

// fn_801B55F0
void f_801B55F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B55F0
  c->r[0]=c->lr; // 801B55F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B55F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B55FC
  c->r[31]=c->r[3]|c->r[3]; // 801B5600
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5604
  c->r[4]=0u+0x00000001u; // 801B5608
  c->lr=0x801B5610u; f_8017DC30(c); // 801B560C
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B5610
  c->r[4]=0u+0x00000000u; // 801B5614
  c->lr=0x801B561Cu; f_8017DC74(c); // 801B5618
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B561C
  c->lr=0x801B5624u; f_8017DD40(c); // 801B5620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5624
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5628
  c->lr=c->r[0]; // 801B562C
  c->r[1]=c->r[1]+0x00000010u; // 801B5630
  return; // 801B5634
}

// fn_801B5638
void f_801B5638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5638
  c->r[0]=c->lr; // 801B563C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5640
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5644
  c->r[31]=c->r[3]|c->r[3]; // 801B5648
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B564C
  c->r[4]=0u+0x00000001u; // 801B5650
  c->lr=0x801B5658u; f_8017DC74(c); // 801B5654
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B5658
  c->lr=0x801B5660u; f_8017DD50(c); // 801B565C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5660
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5664
  c->lr=c->r[0]; // 801B5668
  c->r[1]=c->r[1]+0x00000010u; // 801B566C
  return; // 801B5670
}

// fn_801B5674
void f_801B5674(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5674
  f_8017DD60(c); return; // 801B5678
}

// fn_801B567C
void f_801B567C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B567C
  f_8017DFBC(c); return; // 801B5680
}

// fn_801B5684
void f_801B5684(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5684
  f_8017DFB4(c); return; // 801B5688
}

// fn_801B568C
void f_801B568C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B568C
  f_80137E64(c); return; // 801B5690
}

// fn_801B5694
void f_801B5694(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5694
  f_8017DFC8(c); return; // 801B5698
}

// fn_801B569C
void f_801B569C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B569C
  f_8017DFD0(c); return; // 801B56A0
}

// fn_801B56A4
void f_801B56A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B56A4
  f_8017DE70(c); return; // 801B56A8
}

// fn_801B56AC
void f_801B56AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B56AC
  c->r[0]=c->lr; // 801B56B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B56B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B56B8
  c->r[31]=c->r[3]|c->r[3]; // 801B56BC
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B56C0
  c->r[4]=0u+0x00000001u; // 801B56C4
  c->lr=0x801B56CCu; f_8017DC30(c); // 801B56C8
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B56CC
  c->r[4]=0u+0x00000000u; // 801B56D0
  c->lr=0x801B56D8u; f_8017DC74(c); // 801B56D4
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B56D8
  c->lr=0x801B56E0u; f_8017DD30(c); // 801B56DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B56E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B56E4
  c->lr=c->r[0]; // 801B56E8
  c->r[1]=c->r[1]+0x00000010u; // 801B56EC
  return; // 801B56F0
}

// fn_801B56F4
void f_801B56F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B56F4
  c->r[0]=c->lr; // 801B56F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B56FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5700
  c->r[31]=c->r[3]|c->r[3]; // 801B5704
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5708
  c->r[4]=0u+0x00000001u; // 801B570C
  c->lr=0x801B5714u; f_8017DC30(c); // 801B5710
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B5714
  c->r[4]=0u+0x00000000u; // 801B5718
  c->lr=0x801B5720u; f_8017DC74(c); // 801B571C
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B5720
  c->lr=0x801B5728u; f_8017DD40(c); // 801B5724
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5728
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B572C
  c->lr=c->r[0]; // 801B5730
  c->r[1]=c->r[1]+0x00000010u; // 801B5734
  return; // 801B5738
}

// fn_801B573C
void f_801B573C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B573C
  c->r[0]=c->lr; // 801B5740
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5748
  c->r[31]=c->r[3]|c->r[3]; // 801B574C
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5750
  c->r[4]=0u+0x00000001u; // 801B5754
  c->lr=0x801B575Cu; f_8017DC74(c); // 801B5758
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B575C
  c->lr=0x801B5764u; f_8017DD50(c); // 801B5760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5764
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5768
  c->lr=c->r[0]; // 801B576C
  c->r[1]=c->r[1]+0x00000010u; // 801B5770
  return; // 801B5774
}

// fn_801B5778
void f_801B5778(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5778
  f_8017DD60(c); return; // 801B577C
}

// fn_801B5780
void f_801B5780(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5780
  f_8017DFBC(c); return; // 801B5784
}

// fn_801B5788
void f_801B5788(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5788
  f_8017DFB4(c); return; // 801B578C
}

// fn_801B5790
void f_801B5790(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5790
  f_80137E64(c); return; // 801B5794
}

// fn_801B5798
void f_801B5798(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5798
  f_8017DFC8(c); return; // 801B579C
}

// fn_801B57A0
void f_801B57A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B57A0
  f_8017DFD0(c); return; // 801B57A4
}

// fn_801B57A8
void f_801B57A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B57A8
  f_8017DE70(c); return; // 801B57AC
}

// fn_801B57B0
void f_801B57B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B57B0
  c->r[0]=c->lr; // 801B57B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B57B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B57BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B57C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B57C4
  c->r[29]=c->r[3]|c->r[3]; // 801B57C8
  c->r[30]=c->r[4]|c->r[4]; // 801B57CC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801B57D0
  c->r[4]=0u+0x00000001u; // 801B57D4
  c->lr=0x801B57DCu; f_801B953C(c); // 801B57D8
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801B57DC
  c->r[4]=0u+0x00000000u; // 801B57E0
  c->lr=0x801B57E8u; f_801B9544(c); // 801B57E4
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801B57E8
  c->lr=0x801B57F0u; f_8017DE7C(c); // 801B57EC
  c->r[31]=c->r[3]|c->r[3]; // 801B57F0
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801B57F4
  c->lr=0x801B57FCu; f_8017DE7C(c); // 801B57F8
  c->r[5]=c->r[3]|c->r[3]; // 801B57FC
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801B5800
  c->r[4]=c->r[30]|c->r[30]; // 801B5804
  c->r[6]=c->r[31]|c->r[31]; // 801B5808
  c->lr=0x801B5810u; f_801BAB84(c); // 801B580C
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801B5810
  c->lr=0x801B5818u; f_801B9380(c); // 801B5814
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5818
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B581C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B5820
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5824
  c->lr=c->r[0]; // 801B5828
  c->r[1]=c->r[1]+0x00000020u; // 801B582C
  return; // 801B5830
}

// fn_801B5834
void f_801B5834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5834
  c->r[0]=c->lr; // 801B5838
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B583C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5840
  c->r[31]=c->r[3]|c->r[3]; // 801B5844
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801B5848
  c->r[4]=0u+0x00000001u; // 801B584C
  c->lr=0x801B5854u; f_801B953C(c); // 801B5850
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801B5854
  c->r[4]=0u+0x00000000u; // 801B5858
  c->lr=0x801B5860u; f_801B9544(c); // 801B585C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801B5860
  c->lr=0x801B5868u; f_801B9410(c); // 801B5864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5868
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B586C
  c->lr=c->r[0]; // 801B5870
  c->r[1]=c->r[1]+0x00000010u; // 801B5874
  return; // 801B5878
}

// fn_801B587C
void f_801B587C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B587C
  c->r[0]=c->lr; // 801B5880
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5884
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5888
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B588C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5890
  c->r[29]=c->r[3]|c->r[3]; // 801B5894
  c->r[30]=c->r[4]|c->r[4]; // 801B5898
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801B589C
  c->r[4]=0u+0x00000001u; // 801B58A0
  c->lr=0x801B58A8u; f_801B9544(c); // 801B58A4
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801B58A8
  c->lr=0x801B58B0u; f_8017DE7C(c); // 801B58AC
  c->r[31]=c->r[3]|c->r[3]; // 801B58B0
  c->r[3]=R32(c->r[29]+0x000000E0u); // 801B58B4
  c->lr=0x801B58BCu; f_8017DE7C(c); // 801B58B8
  c->r[5]=c->r[3]|c->r[3]; // 801B58BC
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801B58C0
  c->r[4]=c->r[30]|c->r[30]; // 801B58C4
  c->r[6]=c->r[31]|c->r[31]; // 801B58C8
  c->lr=0x801B58D0u; f_801BAB84(c); // 801B58CC
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801B58D0
  c->lr=0x801B58D8u; f_801B94A0(c); // 801B58D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B58D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B58DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B58E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B58E4
  c->lr=c->r[0]; // 801B58E8
  c->r[1]=c->r[1]+0x00000020u; // 801B58EC
  return; // 801B58F0
}

// fn_801B58F4
void f_801B58F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B58F4
  c->r[0]=c->lr; // 801B58F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B58FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5900
  c->r[31]=c->r[3]|c->r[3]; // 801B5904
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B5908
  c->r[4]=0u+0x00000001u; // 801B590C
  c->lr=0x801B5914u; f_801B86A0(c); // 801B5910
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B5914
  c->lr=0x801B591Cu; f_801B8BD8(c); // 801B5918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B591C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5920
  c->lr=c->r[0]; // 801B5924
  c->r[1]=c->r[1]+0x00000010u; // 801B5928
  return; // 801B592C
}

// fn_801B5930
void f_801B5930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5930
  c->r[0]=c->lr; // 801B5934
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B593C
  c->r[31]=c->r[3]|c->r[3]; // 801B5940
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B5944
  c->r[4]=0u+0x00000000u; // 801B5948
  c->lr=0x801B5950u; f_801B8744(c); // 801B594C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B5950
  c->r[4]=0u+0x00000001u; // 801B5954
  c->lr=0x801B595Cu; f_801B86A0(c); // 801B5958
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B595C
  c->lr=0x801B5964u; f_801B8BE8(c); // 801B5960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5964
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5968
  c->lr=c->r[0]; // 801B596C
  c->r[1]=c->r[1]+0x00000010u; // 801B5970
  return; // 801B5974
}

// fn_801B5978
void f_801B5978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5978
  c->r[0]=c->lr; // 801B597C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5984
  c->r[31]=c->r[3]|c->r[3]; // 801B5988
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B598C
  c->r[4]=0u+0x00000001u; // 801B5990
  c->lr=0x801B5998u; f_801B8744(c); // 801B5994
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B5998
  c->lr=0x801B59A0u; f_801B8BF8(c); // 801B599C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B59A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B59A4
  c->lr=c->r[0]; // 801B59A8
  c->r[1]=c->r[1]+0x00000010u; // 801B59AC
  return; // 801B59B0
}

// fn_801B59B4
void f_801B59B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B59B4
  f_801B8C08(c); return; // 801B59B8
}

// fn_801B59BC
void f_801B59BC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B59BC
  f_801B8C84(c); return; // 801B59C0
}

// fn_801B59C4
void f_801B59C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801B59C4
  f_80148358(c); return; // 801B59C8
}

// fn_801B59CC
void f_801B59CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801B59CC
  f_80148BD0(c); return; // 801B59D0
}

// fn_801B59D4
void f_801B59D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B59D4
  c->r[0]=c->lr; // 801B59D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B59DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B59E0
  c->r[31]=c->r[3]|c->r[3]; // 801B59E4
  c->lr=0x801B59ECu; f_8007B524(c); // 801B59E8
  c->r[4]=0u+0x00000051u; // 801B59EC
  c->lr=0x801B59F4u; f_800A2EF0(c); // 801B59F0
  c->r[4]=c->r[3]|c->r[3]; // 801B59F4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801B59F8
  c->lr=0x801B5A00u; f_801B7FE4(c); // 801B59FC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801B5A00
  c->lr=0x801B5A08u; f_80147E8C(c); // 801B5A04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5A08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5A0C
  c->lr=c->r[0]; // 801B5A10
  c->r[1]=c->r[1]+0x00000010u; // 801B5A14
  return; // 801B5A18
}

// fn_801B5A1C
void f_801B5A1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5A1C
  c->r[0]=c->lr; // 801B5A20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5A24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5A28
  c->r[31]=c->r[3]|c->r[3]; // 801B5A2C
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5A30
  c->lr=0x801B5A38u; f_801A5AA8(c); // 801B5A34
  c->r[4]=c->r[3]|c->r[3]; // 801B5A38
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B5A3C
  c->lr=0x801B5A44u; f_8013C6C8(c); // 801B5A40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5A44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5A48
  c->lr=c->r[0]; // 801B5A4C
  c->r[1]=c->r[1]+0x00000010u; // 801B5A50
  return; // 801B5A54
}

// fn_801B5A58
void f_801B5A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5A58
  c->r[0]=c->lr; // 801B5A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5A64
  c->r[31]=c->r[3]|c->r[3]; // 801B5A68
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5A6C
  c->lr=0x801B5A74u; f_8017DFC8(c); // 801B5A70
  c->r[4]=c->r[3]|c->r[3]; // 801B5A74
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B5A78
  c->lr=0x801B5A80u; f_8013C6C8(c); // 801B5A7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5A80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5A84
  c->lr=c->r[0]; // 801B5A88
  c->r[1]=c->r[1]+0x00000010u; // 801B5A8C
  return; // 801B5A90
}

// fn_801B5A94
void f_801B5A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5A94
  c->r[0]=c->lr; // 801B5A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5AA0
  c->r[31]=c->r[3]|c->r[3]; // 801B5AA4
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5AA8
  c->lr=0x801B5AB0u; f_8017DFC8(c); // 801B5AAC
  c->r[4]=c->r[3]|c->r[3]; // 801B5AB0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801B5AB4
  c->lr=0x801B5ABCu; f_8013C6C8(c); // 801B5AB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5ABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5AC0
  c->lr=c->r[0]; // 801B5AC4
  c->r[1]=c->r[1]+0x00000010u; // 801B5AC8
  return; // 801B5ACC
}

// fn_801B5AD0
void f_801B5AD0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801B5AD0
  c->r[4]=0u+0x00000002u; // 801B5AD4
  f_801B7FEC(c); return; // 801B5AD8
}

// fn_801B5ADC
void f_801B5ADC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801B5ADC
  f_8013C6D0(c); return; // 801B5AE0
}

// fn_801B5AE4
void f_801B5AE4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801B5AE4
  f_8013C6D8(c); return; // 801B5AE8
}

// fn_801B5AEC
void f_801B5AEC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801B5AEC
  f_801B7FF4(c); return; // 801B5AF0
}

// fn_801B5AF4
void f_801B5AF4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801B5AF4
  f_801B7FFC(c); return; // 801B5AF8
}

// fn_801B5AFC
void f_801B5AFC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B5AFC
  f_8011271C(c); return; // 801B5B00
}

// fn_801B5B04
void f_801B5B04(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801B5B04
  f_80112714(c); return; // 801B5B08
}

// fn_801B5B0C
void f_801B5B0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B0C
  c->r[0]=c->lr; // 801B5B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5B14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5B18
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5B1C
  c->r[30]=c->r[3]|c->r[3]; // 801B5B20
  c->r[31]=c->r[4]|c->r[4]; // 801B5B24
  c->lr=0x801B5B2Cu; f_801B5AFC(c); // 801B5B28
  c->r[3]=c->r[30]|c->r[30]; // 801B5B2C
  c->r[4]=c->r[31]|c->r[31]; // 801B5B30
  c->lr=0x801B5B38u; f_801B5218(c); // 801B5B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5B38
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5B3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5B40
  c->lr=c->r[0]; // 801B5B44
  c->r[1]=c->r[1]+0x00000010u; // 801B5B48
  return; // 801B5B4C
}

// fn_801B5B50
void f_801B5B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B50
  c->r[0]=c->lr; // 801B5B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5B5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5B60
  c->r[30]=c->r[3]|c->r[3]; // 801B5B64
  c->r[31]=c->r[4]|c->r[4]; // 801B5B68
  c->lr=0x801B5B70u; f_801B5AFC(c); // 801B5B6C
  c->r[3]=c->r[30]|c->r[30]; // 801B5B70
  c->r[4]=c->r[31]|c->r[31]; // 801B5B74
  c->lr=0x801B5B7Cu; f_801B5210(c); // 801B5B78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5B7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5B80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5B84
  c->lr=c->r[0]; // 801B5B88
  c->r[1]=c->r[1]+0x00000010u; // 801B5B8C
  return; // 801B5B90
}

// fn_801B5B94
void f_801B5B94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B94
  c->r[0]=c->lr; // 801B5B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5BA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5BA4
  c->r[30]=c->r[3]|c->r[3]; // 801B5BA8
  c->r[31]=c->r[4]|c->r[4]; // 801B5BAC
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B5BB0
  cmps(c,0,(int32_t)c->r[0],3); // 801B5BB4
  if (crb(c,2)) { goto L_801B5BEC; } // 801B5BB8
  if (!crb(c,0)) { goto L_801B5BCC; } // 801B5BBC
  cmps(c,0,(int32_t)c->r[0],2); // 801B5BC0
  if (!crb(c,0)) { goto L_801B5BD8; } // 801B5BC4
  goto L_801B5C2C; // 801B5BC8
L_801B5BCC:;
  cmps(c,0,(int32_t)c->r[0],5); // 801B5BCC
  if (!crb(c,0)) { goto L_801B5C2C; } // 801B5BD0
  goto L_801B5C1C; // 801B5BD4
L_801B5BD8:;
  c->lr=0x801B5BDCu; f_801B5AFC(c); // 801B5BD8
  c->r[3]=c->r[30]|c->r[30]; // 801B5BDC
  c->r[4]=c->r[31]|c->r[31]; // 801B5BE0
  c->lr=0x801B5BE8u; f_801B5580(c); // 801B5BE4
  goto L_801B5C2C; // 801B5BE8
L_801B5BEC:;
  c->lr=0x801B5BF0u; f_801B5AFC(c); // 801B5BEC
  c->r[0]=R32(c->r[30]+0x00000100u); // 801B5BF0
  cmps(c,0,(int32_t)c->r[0],0); // 801B5BF4
  if (!crb(c,2)) { goto L_801B5C0C; } // 801B5BF8
  c->r[3]=c->r[30]|c->r[30]; // 801B5BFC
  c->r[4]=c->r[31]|c->r[31]; // 801B5C00
  c->lr=0x801B5C08u; f_801B5684(c); // 801B5C04
  goto L_801B5C2C; // 801B5C08
L_801B5C0C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B5C0C
  c->r[4]=c->r[31]|c->r[31]; // 801B5C10
  c->lr=0x801B5C18u; f_801B5788(c); // 801B5C14
  goto L_801B5C2C; // 801B5C18
L_801B5C1C:;
  c->lr=0x801B5C20u; f_801B5AFC(c); // 801B5C1C
  c->r[3]=c->r[30]|c->r[30]; // 801B5C20
  c->r[4]=c->r[31]|c->r[31]; // 801B5C24
  c->lr=0x801B5C2Cu; f_801B5684(c); // 801B5C28
L_801B5C2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5C2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5C30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5C34
  c->lr=c->r[0]; // 801B5C38
  c->r[1]=c->r[1]+0x00000010u; // 801B5C3C
  return; // 801B5C40
}

// fn_801B5C44
void f_801B5C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5C44
  c->r[0]=c->lr; // 801B5C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5C50
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5C54
  c->r[30]=c->r[3]|c->r[3]; // 801B5C58
  c->r[31]=c->r[4]|c->r[4]; // 801B5C5C
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B5C60
  cmps(c,0,(int32_t)c->r[0],3); // 801B5C64
  if (crb(c,2)) { goto L_801B5C9C; } // 801B5C68
  if (!crb(c,0)) { goto L_801B5C7C; } // 801B5C6C
  cmps(c,0,(int32_t)c->r[0],2); // 801B5C70
  if (!crb(c,0)) { goto L_801B5C88; } // 801B5C74
  goto L_801B5CE0; // 801B5C78
L_801B5C7C:;
  cmps(c,0,(int32_t)c->r[0],5); // 801B5C7C
  if (!crb(c,0)) { goto L_801B5CE0; } // 801B5C80
  goto L_801B5CD0; // 801B5C84
L_801B5C88:;
  c->lr=0x801B5C8Cu; f_801B5578(c); // 801B5C88
  c->r[3]=c->r[30]|c->r[30]; // 801B5C8C
  c->r[4]=c->r[31]|c->r[31]; // 801B5C90
  c->lr=0x801B5C98u; f_801B5ADC(c); // 801B5C94
  goto L_801B5CE0; // 801B5C98
L_801B5C9C:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 801B5C9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5CA0
  if (!crb(c,2)) { goto L_801B5CB0; } // 801B5CA4
  c->lr=0x801B5CACu; f_801B567C(c); // 801B5CA8
  goto L_801B5CB4; // 801B5CAC
L_801B5CB0:;
  c->lr=0x801B5CB4u; f_801B5780(c); // 801B5CB0
L_801B5CB4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B5CB4
  c->r[4]=c->r[31]|c->r[31]; // 801B5CB8
  c->lr=0x801B5CC0u; f_801B5ADC(c); // 801B5CBC
  c->r[3]=c->r[30]|c->r[30]; // 801B5CC0
  c->r[4]=c->r[31]|c->r[31]; // 801B5CC4
  c->lr=0x801B5CCCu; f_801B5AEC(c); // 801B5CC8
  goto L_801B5CE0; // 801B5CCC
L_801B5CD0:;
  c->lr=0x801B5CD4u; f_801B567C(c); // 801B5CD0
  c->r[3]=c->r[30]|c->r[30]; // 801B5CD4
  c->r[4]=c->r[31]|c->r[31]; // 801B5CD8
  c->lr=0x801B5CE0u; f_801B5ADC(c); // 801B5CDC
L_801B5CE0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5CE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5CE8
  c->lr=c->r[0]; // 801B5CEC
  c->r[1]=c->r[1]+0x00000010u; // 801B5CF0
  return; // 801B5CF4
}

// fn_801B5CF8
void f_801B5CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5CF8
  c->r[0]=c->lr; // 801B5CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5D04
  c->r[31]=c->r[3]|c->r[3]; // 801B5D08
  cmps(c,0,(int32_t)c->r[4],0); // 801B5D0C
  if (crb(c,2)) { goto L_801B5D24; } // 801B5D10
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5D14
  c->lr=0x801B5D1Cu; f_801A5A7C(c); // 801B5D18
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B5D1C
  c->lr=0x801B5D24u; f_801BE678(c); // 801B5D20
L_801B5D24:;
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B5D24
  c->lr=0x801B5D2Cu; f_801BE668(c); // 801B5D28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5D30
  c->lr=c->r[0]; // 801B5D34
  c->r[1]=c->r[1]+0x00000010u; // 801B5D38
  return; // 801B5D3C
}

// fn_801B5D40
void f_801B5D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5D40
  c->r[0]=c->lr; // 801B5D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5D4C
  c->r[31]=c->r[3]|c->r[3]; // 801B5D50
  cmps(c,0,(int32_t)c->r[4],0); // 801B5D54
  if (crb(c,2)) { goto L_801B5D6C; } // 801B5D58
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5D5C
  c->lr=0x801B5D64u; f_8017DF9C(c); // 801B5D60
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B5D64
  c->lr=0x801B5D6Cu; f_8013E268(c); // 801B5D68
L_801B5D6C:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B5D6C
  c->r[4]=0u+0xFFFFFFFFu; // 801B5D70
  c->lr=0x801B5D78u; f_801BF23C(c); // 801B5D74
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B5D78
  c->lr=0x801B5D80u; f_801BF194(c); // 801B5D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5D84
  c->lr=c->r[0]; // 801B5D88
  c->r[1]=c->r[1]+0x00000010u; // 801B5D8C
  return; // 801B5D90
}

// fn_801B5D94
void f_801B5D94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5D94
  c->r[0]=c->lr; // 801B5D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5DA0
  c->r[31]=c->r[3]|c->r[3]; // 801B5DA4
  cmps(c,0,(int32_t)c->r[4],0); // 801B5DA8
  if (crb(c,2)) { goto L_801B5DC0; } // 801B5DAC
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5DB0
  c->lr=0x801B5DB8u; f_8017DF9C(c); // 801B5DB4
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B5DB8
  c->lr=0x801B5DC0u; f_8013E268(c); // 801B5DBC
L_801B5DC0:;
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B5DC0
  c->lr=0x801B5DC8u; f_8017DE7C(c); // 801B5DC4
  c->r[4]=c->r[3]|c->r[3]; // 801B5DC8
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B5DCC
  c->lr=0x801B5DD4u; f_801BF23C(c); // 801B5DD0
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B5DD4
  c->lr=0x801B5DDCu; f_801BF194(c); // 801B5DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5DE0
  c->lr=c->r[0]; // 801B5DE4
  c->r[1]=c->r[1]+0x00000010u; // 801B5DE8
  return; // 801B5DEC
}

// fn_801B5DF0
void f_801B5DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5DF0
  c->r[0]=c->lr; // 801B5DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5DF8
  c->r[4]=0u+0xFFFFFFFFu; // 801B5DFC
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B5E00
  cmps(c,0,(int32_t)c->r[0],3); // 801B5E04
  if (crb(c,2)) { goto L_801B5E38; } // 801B5E08
  if (!crb(c,0)) { goto L_801B5E1C; } // 801B5E0C
  cmps(c,0,(int32_t)c->r[0],2); // 801B5E10
  if (!crb(c,0)) { goto L_801B5E28; } // 801B5E14
  goto L_801B5E70; // 801B5E18
L_801B5E1C:;
  cmps(c,0,(int32_t)c->r[0],5); // 801B5E1C
  if (!crb(c,0)) { goto L_801B5E70; } // 801B5E20
  goto L_801B5E64; // 801B5E24
L_801B5E28:;
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B5E28
  c->lr=0x801B5E30u; f_801A58B8(c); // 801B5E2C
  c->r[4]=c->r[3]|c->r[3]; // 801B5E30
  goto L_801B5E70; // 801B5E34
L_801B5E38:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 801B5E38
  cmps(c,0,(int32_t)c->r[0],0); // 801B5E3C
  if (!crb(c,2)) { goto L_801B5E54; } // 801B5E40
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5E44
  c->lr=0x801B5E4Cu; f_8017DE7C(c); // 801B5E48
  c->r[4]=c->r[3]|c->r[3]; // 801B5E4C
  goto L_801B5E70; // 801B5E50
L_801B5E54:;
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B5E54
  c->lr=0x801B5E5Cu; f_8017DE7C(c); // 801B5E58
  c->r[4]=c->r[3]|c->r[3]; // 801B5E5C
  goto L_801B5E70; // 801B5E60
L_801B5E64:;
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B5E64
  c->lr=0x801B5E6Cu; f_8017DE7C(c); // 801B5E68
  c->r[4]=c->r[3]|c->r[3]; // 801B5E6C
L_801B5E70:;
  c->r[3]=c->r[4]|c->r[4]; // 801B5E70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5E74
  c->lr=c->r[0]; // 801B5E78
  c->r[1]=c->r[1]+0x00000010u; // 801B5E7C
  return; // 801B5E80
}

// fn_801B5E84
void f_801B5E84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5E84
  c->r[0]=c->lr; // 801B5E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5E8C
  c->r[4]=0u+0x00000000u; // 801B5E90
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B5E94
  cmps(c,0,(int32_t)c->r[0],3); // 801B5E98
  if (crb(c,2)) { goto L_801B5EC8; } // 801B5E9C
  if (!crb(c,0)) { goto L_801B5EB0; } // 801B5EA0
  cmps(c,0,(int32_t)c->r[0],2); // 801B5EA4
  if (!crb(c,0)) { goto L_801B5EBC; } // 801B5EA8
  goto L_801B5EF4; // 801B5EAC
L_801B5EB0:;
  cmps(c,0,(int32_t)c->r[0],5); // 801B5EB0
  if (!crb(c,0)) { goto L_801B5EF4; } // 801B5EB4
  goto L_801B5EEC; // 801B5EB8
L_801B5EBC:;
  c->lr=0x801B5EC0u; f_801B5590(c); // 801B5EBC
  c->r[4]=c->r[3]|c->r[3]; // 801B5EC0
  goto L_801B5EF4; // 801B5EC4
L_801B5EC8:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 801B5EC8
  cmps(c,0,(int32_t)c->r[0],0); // 801B5ECC
  if (!crb(c,2)) { goto L_801B5EE0; } // 801B5ED0
  c->lr=0x801B5ED8u; f_801B5694(c); // 801B5ED4
  c->r[4]=c->r[3]|c->r[3]; // 801B5ED8
  goto L_801B5EF4; // 801B5EDC
L_801B5EE0:;
  c->lr=0x801B5EE4u; f_801B5798(c); // 801B5EE0
  c->r[4]=c->r[3]|c->r[3]; // 801B5EE4
  goto L_801B5EF4; // 801B5EE8
L_801B5EEC:;
  c->lr=0x801B5EF0u; f_801B5694(c); // 801B5EEC
  c->r[4]=c->r[3]|c->r[3]; // 801B5EF0
L_801B5EF4:;
  c->r[3]=c->r[4]|c->r[4]; // 801B5EF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5EF8
  c->lr=c->r[0]; // 801B5EFC
  c->r[1]=c->r[1]+0x00000010u; // 801B5F00
  return; // 801B5F04
}

// fn_801B5F08
void f_801B5F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5F08
  c->r[0]=c->lr; // 801B5F0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5F10
  c->r[4]=0u+0x00000000u; // 801B5F14
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B5F18
  cmps(c,0,(int32_t)c->r[0],3); // 801B5F1C
  if (crb(c,2)) { goto L_801B5F4C; } // 801B5F20
  if (!crb(c,0)) { goto L_801B5F34; } // 801B5F24
  cmps(c,0,(int32_t)c->r[0],2); // 801B5F28
  if (!crb(c,0)) { goto L_801B5F40; } // 801B5F2C
  goto L_801B5F78; // 801B5F30
L_801B5F34:;
  cmps(c,0,(int32_t)c->r[0],5); // 801B5F34
  if (!crb(c,0)) { goto L_801B5F78; } // 801B5F38
  goto L_801B5F70; // 801B5F3C
L_801B5F40:;
  c->lr=0x801B5F44u; f_801B5598(c); // 801B5F40
  c->r[4]=c->r[3]|c->r[3]; // 801B5F44
  goto L_801B5F78; // 801B5F48
L_801B5F4C:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 801B5F4C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5F50
  if (!crb(c,2)) { goto L_801B5F64; } // 801B5F54
  c->lr=0x801B5F5Cu; f_801B569C(c); // 801B5F58
  c->r[4]=c->r[3]|c->r[3]; // 801B5F5C
  goto L_801B5F78; // 801B5F60
L_801B5F64:;
  c->lr=0x801B5F68u; f_801B57A0(c); // 801B5F64
  c->r[4]=c->r[3]|c->r[3]; // 801B5F68
  goto L_801B5F78; // 801B5F6C
L_801B5F70:;
  c->lr=0x801B5F74u; f_801B569C(c); // 801B5F70
  c->r[4]=c->r[3]|c->r[3]; // 801B5F74
L_801B5F78:;
  c->r[3]=c->r[4]|c->r[4]; // 801B5F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5F7C
  c->lr=c->r[0]; // 801B5F80
  c->r[1]=c->r[1]+0x00000010u; // 801B5F84
  return; // 801B5F88
}

// fn_801B5F8C
void f_801B5F8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5F8C
  c->r[0]=c->lr; // 801B5F90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5F94
  c->r[4]=0u+0x00000000u; // 801B5F98
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B5F9C
  cmps(c,0,(int32_t)c->r[0],3); // 801B5FA0
  if (crb(c,2)) { goto L_801B5FD0; } // 801B5FA4
  if (!crb(c,0)) { goto L_801B5FB8; } // 801B5FA8
  cmps(c,0,(int32_t)c->r[0],2); // 801B5FAC
  if (!crb(c,0)) { goto L_801B5FC4; } // 801B5FB0
  goto L_801B5FFC; // 801B5FB4
L_801B5FB8:;
  cmps(c,0,(int32_t)c->r[0],5); // 801B5FB8
  if (!crb(c,0)) { goto L_801B5FFC; } // 801B5FBC
  goto L_801B5FF4; // 801B5FC0
L_801B5FC4:;
  c->lr=0x801B5FC8u; f_801B55A0(c); // 801B5FC4
  c->r[4]=c->r[3]|c->r[3]; // 801B5FC8
  goto L_801B5FFC; // 801B5FCC
L_801B5FD0:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 801B5FD0
  cmps(c,0,(int32_t)c->r[0],0); // 801B5FD4
  if (!crb(c,2)) { goto L_801B5FE8; } // 801B5FD8
  c->lr=0x801B5FE0u; f_801B56A4(c); // 801B5FDC
  c->r[4]=c->r[3]|c->r[3]; // 801B5FE0
  goto L_801B5FFC; // 801B5FE4
L_801B5FE8:;
  c->lr=0x801B5FECu; f_801B57A8(c); // 801B5FE8
  c->r[4]=c->r[3]|c->r[3]; // 801B5FEC
  goto L_801B5FFC; // 801B5FF0
L_801B5FF4:;
  c->lr=0x801B5FF8u; f_801B56A4(c); // 801B5FF4
  c->r[4]=c->r[3]|c->r[3]; // 801B5FF8
L_801B5FFC:;
  c->r[3]=c->r[4]|c->r[4]; // 801B5FFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6000
  c->lr=c->r[0]; // 801B6004
  c->r[1]=c->r[1]+0x00000010u; // 801B6008
  return; // 801B600C
}

// fn_801B6010
void f_801B6010(Ctx* __restrict c) {
  W32(c->r[3]+0x00000100u,c->r[4]); // 801B6010
  return; // 801B6014
}

// fn_801B6018
void f_801B6018(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B6018
  f_801BD828(c); return; // 801B601C
}

// fn_801B6020
void f_801B6020(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B6020
  f_801BD830(c); return; // 801B6024
}

// fn_801B6028
void f_801B6028(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801B6028
  f_8011400C(c); return; // 801B602C
}

// fn_801B6030
void f_801B6030(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801B6030
  f_80114070(c); return; // 801B6034
}

// fn_801B6038
void f_801B6038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6038
  c->r[0]=c->lr; // 801B603C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6044
  c->r[31]=c->r[3]|c->r[3]; // 801B6048
  c->r[0]=R32(c->r[3]+0x000000FCu); // 801B604C
  cmps(c,0,(int32_t)c->r[0],2); // 801B6050
  if (crb(c,2)) { goto L_801B6098; } // 801B6054
  if (!crb(c,0)) { goto L_801B606C; } // 801B6058
  cmps(c,0,(int32_t)c->r[0],0); // 801B605C
  if (crb(c,2)) { goto L_801B607C; } // 801B6060
  if (!crb(c,0)) { goto L_801B6088; } // 801B6064
  goto L_801B61D8; // 801B6068
L_801B606C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B606C
  if (crb(c,2)) { goto L_801B6184; } // 801B6070
  if (!crb(c,0)) { goto L_801B61D8; } // 801B6074
  goto L_801B60E8; // 801B6078
L_801B607C:;
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801B607C
  c->lr=0x801B6084u; f_801BB3C0(c); // 801B6080
  goto L_801B61D8; // 801B6084
L_801B6088:;
  c->lr=0x801B608Cu; f_801B4C44(c); // 801B6088
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B608C
  c->lr=0x801B6094u; f_801C06A4(c); // 801B6090
  goto L_801B61D8; // 801B6094
L_801B6098:;
  c->lr=0x801B609Cu; f_801B4C9C(c); // 801B6098
  c->r[3]=c->r[31]|c->r[31]; // 801B609C
  c->lr=0x801B60A4u; f_801B59C4(c); // 801B60A0
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B60A4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B60A8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801B60AC
  c->ctr=c->r[12]; // 801B60B0
  if (true) { c->lr=0x801B60B8u; dispatch(c,c->ctr); } // 801B60B4
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B60B8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B60BC
  c->r[12]=R32(c->r[12]+0x00000058u); // 801B60C0
  c->ctr=c->r[12]; // 801B60C4
  if (true) { c->lr=0x801B60CCu; dispatch(c,c->ctr); } // 801B60C8
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B60CC
  c->lr=0x801B60D4u; f_801BE61C(c); // 801B60D0
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801B60D4
  c->lr=0x801B60DCu; f_801BC388(c); // 801B60D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B60DC
  c->lr=0x801B60E4u; f_801C06D8(c); // 801B60E0
  goto L_801B61D8; // 801B60E4
L_801B60E8:;
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B60E8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B60EC
  c->r[12]=R32(c->r[12]+0x00000060u); // 801B60F0
  c->ctr=c->r[12]; // 801B60F4
  if (true) { c->lr=0x801B60FCu; dispatch(c,c->ctr); } // 801B60F8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B60FC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6100
  c->r[12]=R32(c->r[12]+0x00000058u); // 801B6104
  c->ctr=c->r[12]; // 801B6108
  if (true) { c->lr=0x801B6110u; dispatch(c,c->ctr); } // 801B610C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B6110
  c->lr=0x801B6118u; f_801BB988(c); // 801B6114
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801B6118
  c->lr=0x801B6120u; f_801BAB48(c); // 801B611C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B6120
  c->lr=0x801B6128u; f_801C06D8(c); // 801B6124
  c->r[0]=R32(c->r[31]+0x00000100u); // 801B6128
  cmps(c,0,(int32_t)c->r[0],0); // 801B612C
  if (!crb(c,2)) { goto L_801B6150; } // 801B6130
  c->r[3]=c->r[31]|c->r[31]; // 801B6134
  c->lr=0x801B613Cu; f_801B4CF4(c); // 801B6138
  c->r[3]=c->r[31]|c->r[31]; // 801B613C
  c->lr=0x801B6144u; f_801B59C4(c); // 801B6140
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B6144
  c->lr=0x801B614Cu; f_801BF148(c); // 801B6148
  goto L_801B61D8; // 801B614C
L_801B6150:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6150
  c->lr=0x801B6158u; f_801B4D4C(c); // 801B6154
  c->r[3]=c->r[31]|c->r[31]; // 801B6158
  c->lr=0x801B6160u; f_801B59CC(c); // 801B615C
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B6160
  {uint32_t ea=c->r[2]+0xFFFF9310u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6164
  c->lr=0x801B616Cu; f_8013E438(c); // 801B6168
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B616C
  {uint32_t ea=c->r[2]+0xFFFF9314u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6170
  c->lr=0x801B6178u; f_8013E444(c); // 801B6174
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801B6178
  c->lr=0x801B6180u; f_801BF148(c); // 801B617C
  goto L_801B61D8; // 801B6180
L_801B6184:;
  c->lr=0x801B6188u; f_801B4CF4(c); // 801B6184
  c->r[3]=c->r[31]|c->r[31]; // 801B6188
  c->lr=0x801B6190u; f_801B59C4(c); // 801B618C
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801B6190
  c->lr=0x801B6198u; f_801BF148(c); // 801B6194
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B6198
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B619C
  c->r[12]=R32(c->r[12]+0x00000060u); // 801B61A0
  c->ctr=c->r[12]; // 801B61A4
  if (true) { c->lr=0x801B61ACu; dispatch(c,c->ctr); } // 801B61A8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801B61AC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B61B0
  c->r[12]=R32(c->r[12]+0x00000058u); // 801B61B4
  c->ctr=c->r[12]; // 801B61B8
  if (true) { c->lr=0x801B61C0u; dispatch(c,c->ctr); } // 801B61BC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B61C0
  c->lr=0x801B61C8u; f_801BB988(c); // 801B61C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B61C8
  c->lr=0x801B61D0u; f_801C06A4(c); // 801B61CC
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B61D0
  c->lr=0x801B61D8u; f_801B8C1C(c); // 801B61D4
L_801B61D8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B61D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B61DC
  c->lr=c->r[0]; // 801B61E0
  c->r[1]=c->r[1]+0x00000010u; // 801B61E4
  return; // 801B61E8
}

// fn_801B61EC
void f_801B61EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B61EC
  f_801C69F8(c); return; // 801B61F0
}

// fn_801B61F4
void f_801B61F4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B61F4
  f_801A5620(c); return; // 801B61F8
}

// fn_801B61FC
void f_801B61FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B61FC
  c->r[0]=c->lr; // 801B6200
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6208
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B620C
  c->r[30]=c->r[3]|c->r[3]; // 801B6210
  c->r[31]=c->r[4]|c->r[4]; // 801B6214
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6218
  c->lr=0x801B6220u; f_801C6990(c); // 801B621C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801B6220
  c->r[4]=c->r[31]|c->r[31]; // 801B6224
  c->lr=0x801B622Cu; f_801A60F4(c); // 801B6228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B622C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B6230
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6234
  c->lr=c->r[0]; // 801B6238
  c->r[1]=c->r[1]+0x00000010u; // 801B623C
  return; // 801B6240
}

// fn_801B6244
void f_801B6244(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6244
  f_801C6990(c); return; // 801B6248
}

// fn_801B624C
void f_801B624C(Ctx* __restrict c) {
  f_801B6244(c); return; // 801B624C
}

// fn_801B6250
void f_801B6250(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B6250
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6254
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B6258
  c->ctr=c->r[12]; // 801B625C
  if (true) { dispatch(c,c->ctr); return; } // 801B6260
}

// fn_801B6264
void f_801B6264(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B6264
  f_8017DB64(c); return; // 801B6268
}

// fn_801B626C
void f_801B626C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B626C
  c->r[0]=c->lr; // 801B6270
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6278
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B627C
  c->r[30]=c->r[3]|c->r[3]; // 801B6280
  c->r[31]=c->r[4]|c->r[4]; // 801B6284
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6288
  c->lr=0x801B6290u; f_801C6990(c); // 801B628C
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801B6290
  c->r[4]=c->r[31]|c->r[31]; // 801B6294
  c->lr=0x801B629Cu; f_8017E75C(c); // 801B6298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B629C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B62A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B62A4
  c->lr=c->r[0]; // 801B62A8
  c->r[1]=c->r[1]+0x00000010u; // 801B62AC
  return; // 801B62B0
}

// fn_801B62B4
void f_801B62B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B62B4
  f_801C6990(c); return; // 801B62B8
}

// fn_801B62BC
void f_801B62BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B62BC
  c->r[0]=c->lr; // 801B62C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B62C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B62C8
  c->r[31]=c->r[3]|c->r[3]; // 801B62CC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B62D0
  c->lr=0x801B62D8u; f_801C6990(c); // 801B62D4
  c->r[3]=c->r[31]|c->r[31]; // 801B62D8
  c->r[4]=0u+0x00000000u; // 801B62DC
  c->lr=0x801B62E4u; f_801B492C(c); // 801B62E0
  c->r[3]=c->r[31]|c->r[31]; // 801B62E4
  c->r[4]=0u+0x00000000u; // 801B62E8
  c->lr=0x801B62F0u; f_801B4934(c); // 801B62EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B62F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B62F4
  c->lr=c->r[0]; // 801B62F8
  c->r[1]=c->r[1]+0x00000010u; // 801B62FC
  return; // 801B6300
}

// fn_801B6304
void f_801B6304(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B6304
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6308
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B630C
  c->ctr=c->r[12]; // 801B6310
  if (true) { dispatch(c,c->ctr); return; } // 801B6314
}

// fn_801B6318
void f_801B6318(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801B6318
  f_8017DB64(c); return; // 801B631C
}

// fn_801B6320
void f_801B6320(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801B6320
  f_801B95C4(c); return; // 801B6324
}

// fn_801B6328
void f_801B6328(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6328
  f_801C69F8(c); return; // 801B632C
}

// fn_801B6330
void f_801B6330(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801B6330
  f_8017DB64(c); return; // 801B6334
}

// fn_801B6338
void f_801B6338(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6338
  f_801C69F8(c); return; // 801B633C
}

// fn_801B6340
void f_801B6340(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801B6340
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6344
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B6348
  c->ctr=c->r[12]; // 801B634C
  if (true) { dispatch(c,c->ctr); return; } // 801B6350
}

// fn_801B6354
void f_801B6354(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B6354
  f_801B8744(c); return; // 801B6358
}

// fn_801B635C
void f_801B635C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801B635C
  f_8012F910(c); return; // 801B6360
}

// fn_801B6364
void f_801B6364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6364
  c->r[0]=c->lr; // 801B6368
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B636C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6370
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B6374
  c->r[30]=c->r[3]|c->r[3]; // 801B6378
  c->r[31]=c->r[4]|c->r[4]; // 801B637C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801B6380
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6384
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801B6388
  c->ctr=c->r[12]; // 801B638C
  if (true) { c->lr=0x801B6394u; dispatch(c,c->ctr); } // 801B6390
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801B6394
  c->r[4]=c->r[31]|c->r[31]; // 801B6398
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B639C
  c->r[12]=R32(c->r[12]+0x00000048u); // 801B63A0
  c->ctr=c->r[12]; // 801B63A4
  if (true) { c->lr=0x801B63ACu; dispatch(c,c->ctr); } // 801B63A8
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801B63AC
  c->r[4]=c->r[31]|c->r[31]; // 801B63B0
  c->lr=0x801B63B8u; f_8011911C(c); // 801B63B4
  c->r[3]=R32(c->r[30]+0x000000DCu); // 801B63B8
  c->r[4]=c->r[31]|c->r[31]; // 801B63BC
  c->lr=0x801B63C4u; f_801A5620(c); // 801B63C0
  c->r[3]=R32(c->r[30]+0x000000E0u); // 801B63C4
  c->r[4]=c->r[31]|c->r[31]; // 801B63C8
  c->lr=0x801B63D0u; f_8017DB64(c); // 801B63CC
  c->r[3]=R32(c->r[30]+0x000000E4u); // 801B63D0
  c->r[4]=c->r[31]|c->r[31]; // 801B63D4
  c->lr=0x801B63DCu; f_8017DB64(c); // 801B63D8
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801B63DC
  c->r[4]=c->r[31]|c->r[31]; // 801B63E0
  c->lr=0x801B63E8u; f_8017E75C(c); // 801B63E4
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801B63E8
  c->r[4]=c->r[31]|c->r[31]; // 801B63EC
  c->lr=0x801B63F4u; f_801A60F4(c); // 801B63F0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B63F4
  c->r[4]=c->r[31]|c->r[31]; // 801B63F8
  c->lr=0x801B6400u; f_801C6990(c); // 801B63FC
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801B6400
  c->r[4]=c->r[31]|c->r[31]; // 801B6404
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6408
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801B640C
  c->ctr=c->r[12]; // 801B6410
  if (true) { c->lr=0x801B6418u; dispatch(c,c->ctr); } // 801B6414
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801B6418
  c->r[4]=c->r[31]|c->r[31]; // 801B641C
  c->lr=0x801B6424u; f_801B95C4(c); // 801B6420
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B6424
  c->r[4]=c->r[31]|c->r[31]; // 801B6428
  c->lr=0x801B6430u; f_801B8744(c); // 801B642C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6430
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B6434
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6438
  c->lr=c->r[0]; // 801B643C
  c->r[1]=c->r[1]+0x00000010u; // 801B6440
  return; // 801B6444
}

// fn_801B6448
void f_801B6448(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6448
  c->r[0]=c->lr; // 801B644C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6450
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6454
  c->r[31]=c->r[3]|c->r[3]; // 801B6458
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B645C
  c->r[4]=0u+0x00000001u; // 801B6460
  c->lr=0x801B6468u; f_801C0D4C(c); // 801B6464
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B6468
  c->lr=0x801B6470u; f_801C0CF8(c); // 801B646C
  c->r[3]=c->r[31]|c->r[31]; // 801B6470
  c->lr=0x801B6478u; f_801B5004(c); // 801B6474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6478
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B647C
  c->lr=c->r[0]; // 801B6480
  c->r[1]=c->r[1]+0x00000010u; // 801B6484
  return; // 801B6488
}

// fn_801B648C
void f_801B648C(Ctx* __restrict c) {
  f_801B5058(c); return; // 801B648C
}

// fn_801B6490
void f_801B6490(Ctx* __restrict c) {
  f_801B53BC(c); return; // 801B6490
}

// fn_801B6494
void f_801B6494(Ctx* __restrict c) {
  f_801B5288(c); return; // 801B6494
}

// fn_801B6498
void f_801B6498(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801B6498
  f_801B50AC(c); return; // 801B649C
}

// fn_801B64A0
void f_801B64A0(Ctx* __restrict c) {
  f_801B5134(c); return; // 801B64A0
}

// fn_801B64A4
void f_801B64A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B64A4
  c->r[0]=c->lr; // 801B64A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B64AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B64B0
  c->r[31]=c->r[3]|c->r[3]; // 801B64B4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B64B8
  c->r[4]=0u+0x00000001u; // 801B64BC
  c->lr=0x801B64C4u; f_801C0D4C(c); // 801B64C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B64C4
  c->lr=0x801B64CCu; f_801C0CF8(c); // 801B64C8
  c->r[3]=c->r[31]|c->r[31]; // 801B64CC
  c->lr=0x801B64D4u; f_801B513C(c); // 801B64D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B64D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B64D8
  c->lr=c->r[0]; // 801B64DC
  c->r[1]=c->r[1]+0x00000010u; // 801B64E0
  return; // 801B64E4
}

// fn_801B64E8
void f_801B64E8(Ctx* __restrict c) {
  f_801B5184(c); return; // 801B64E8
}

// fn_801B64EC
void f_801B64EC(Ctx* __restrict c) {
  f_801B51CC(c); return; // 801B64EC
}

// fn_801B64F0
void f_801B64F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B64F0
  c->r[0]=c->lr; // 801B64F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B64F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B64FC
  c->r[31]=c->r[3]|c->r[3]; // 801B6500
  c->lr=0x801B6508u; f_801B51D4(c); // 801B6504
  c->r[3]=c->r[31]|c->r[31]; // 801B6508
  c->r[4]=0u+0x00000000u; // 801B650C
  c->lr=0x801B6514u; f_801B50AC(c); // 801B6510
  c->r[3]=c->r[31]|c->r[31]; // 801B6514
  c->r[4]=0u+0x00000001u; // 801B6518
  c->lr=0x801B6520u; f_801B635C(c); // 801B651C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6520
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6524
  c->lr=c->r[0]; // 801B6528
  c->r[1]=c->r[1]+0x00000010u; // 801B652C
  return; // 801B6530
}

// fn_801B6534
void f_801B6534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6534
  c->r[0]=c->lr; // 801B6538
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B653C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6540
  c->r[31]=c->r[3]|c->r[3]; // 801B6544
  c->r[4]=0u+0x00000001u; // 801B6548
  c->lr=0x801B6550u; f_801B50AC(c); // 801B654C
  c->r[3]=c->r[31]|c->r[31]; // 801B6550
  c->r[4]=0u+0x00000000u; // 801B6554
  c->lr=0x801B655Cu; f_801B5588(c); // 801B6558
  c->r[3]=c->r[31]|c->r[31]; // 801B655C
  c->r[4]=0u+0x00000000u; // 801B6560
  c->lr=0x801B6568u; f_801B635C(c); // 801B6564
  c->r[3]=c->r[31]|c->r[31]; // 801B6568
  c->lr=0x801B6570u; f_801B5A1C(c); // 801B656C
  c->r[3]=c->r[31]|c->r[31]; // 801B6570
  c->r[4]=0u+0x00000001u; // 801B6574
  c->lr=0x801B657Cu; f_801B5AE4(c); // 801B6578
  c->r[3]=c->r[31]|c->r[31]; // 801B657C
  c->lr=0x801B6584u; f_801B54A4(c); // 801B6580
  c->r[3]=c->r[31]|c->r[31]; // 801B6584
  c->lr=0x801B658Cu; f_801B4948(c); // 801B6588
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B658C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6590
  c->lr=c->r[0]; // 801B6594
  c->r[1]=c->r[1]+0x00000010u; // 801B6598
  return; // 801B659C
}

// fn_801B65A0
void f_801B65A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B65A0
  c->r[0]=c->lr; // 801B65A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B65A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B65AC
  c->r[31]=c->r[3]|c->r[3]; // 801B65B0
  c->r[4]=0u+0x00000000u; // 801B65B4
  c->lr=0x801B65BCu; f_801B5588(c); // 801B65B8
  c->r[3]=c->r[31]|c->r[31]; // 801B65BC
  c->r[4]=0u+0x00000000u; // 801B65C0
  c->lr=0x801B65C8u; f_801B635C(c); // 801B65C4
  c->r[3]=c->r[31]|c->r[31]; // 801B65C8
  c->lr=0x801B65D0u; f_801B5A1C(c); // 801B65CC
  c->r[3]=c->r[31]|c->r[31]; // 801B65D0
  c->r[4]=0u+0x00000001u; // 801B65D4
  c->lr=0x801B65DCu; f_801B5AE4(c); // 801B65D8
  c->r[3]=c->r[31]|c->r[31]; // 801B65DC
  c->lr=0x801B65E4u; f_801B54EC(c); // 801B65E0
  c->r[3]=c->r[31]|c->r[31]; // 801B65E4
  c->lr=0x801B65ECu; f_801B4998(c); // 801B65E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B65EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B65F0
  c->lr=c->r[0]; // 801B65F4
  c->r[1]=c->r[1]+0x00000010u; // 801B65F8
  return; // 801B65FC
}

// fn_801B6600
void f_801B6600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6600
  c->r[0]=c->lr; // 801B6604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B660C
  c->r[31]=c->r[3]|c->r[3]; // 801B6610
  c->r[4]=0u+0x00000000u; // 801B6614
  c->lr=0x801B661Cu; f_801B5588(c); // 801B6618
  c->r[3]=c->r[31]|c->r[31]; // 801B661C
  c->r[4]=0u+0x00000000u; // 801B6620
  c->lr=0x801B6628u; f_801B635C(c); // 801B6624
  c->r[3]=c->r[31]|c->r[31]; // 801B6628
  c->lr=0x801B6630u; f_801B5A1C(c); // 801B662C
  c->r[3]=c->r[31]|c->r[31]; // 801B6630
  c->r[4]=0u+0x00000001u; // 801B6634
  c->lr=0x801B663Cu; f_801B5AE4(c); // 801B6638
  c->r[3]=c->r[31]|c->r[31]; // 801B663C
  c->lr=0x801B6644u; f_801B54EC(c); // 801B6640
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6648
  c->lr=c->r[0]; // 801B664C
  c->r[1]=c->r[1]+0x00000010u; // 801B6650
  return; // 801B6654
}

// fn_801B6658
void f_801B6658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6658
  c->r[0]=c->lr; // 801B665C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6660
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6664
  c->r[31]=c->r[3]|c->r[3]; // 801B6668
  c->r[4]=0u+0x00000001u; // 801B666C
  c->lr=0x801B6674u; f_801B5588(c); // 801B6670
  c->r[3]=c->r[31]|c->r[31]; // 801B6674
  c->r[4]=0u+0x00000001u; // 801B6678
  c->lr=0x801B6680u; f_801B635C(c); // 801B667C
  c->r[3]=c->r[31]|c->r[31]; // 801B6680
  c->r[4]=0u+0x00000000u; // 801B6684
  c->lr=0x801B668Cu; f_801B5AE4(c); // 801B6688
  c->r[3]=c->r[31]|c->r[31]; // 801B668C
  c->lr=0x801B6694u; f_801B5534(c); // 801B6690
  c->r[3]=c->r[31]|c->r[31]; // 801B6694
  c->lr=0x801B669Cu; f_801B49DC(c); // 801B6698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B669C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B66A0
  c->lr=c->r[0]; // 801B66A4
  c->r[1]=c->r[1]+0x00000010u; // 801B66A8
  return; // 801B66AC
}

// fn_801B66B0
void f_801B66B0(Ctx* __restrict c) {
  f_801B5570(c); return; // 801B66B0
}

// fn_801B66B4
void f_801B66B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B66B4
  c->r[0]=c->lr; // 801B66B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B66BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B66C0
  c->r[31]=c->r[3]|c->r[3]; // 801B66C4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B66C8
  c->r[4]=0u+0x00000003u; // 801B66CC
  c->lr=0x801B66D4u; f_801C0D4C(c); // 801B66D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B66D4
  c->lr=0x801B66DCu; f_801C0CF8(c); // 801B66D8
  c->r[3]=c->r[31]|c->r[31]; // 801B66DC
  c->lr=0x801B66E4u; f_801B4E54(c); // 801B66E0
  c->r[3]=c->r[31]|c->r[31]; // 801B66E4
  c->r[4]=0u+0x00000000u; // 801B66E8
  c->lr=0x801B66F0u; f_801B635C(c); // 801B66EC
  c->r[3]=c->r[31]|c->r[31]; // 801B66F0
  c->lr=0x801B66F8u; f_801B49DC(c); // 801B66F4
  c->r[3]=c->r[31]|c->r[31]; // 801B66F8
  c->lr=0x801B6700u; f_801B5374(c); // 801B66FC
  c->r[3]=c->r[31]|c->r[31]; // 801B6700
  c->lr=0x801B6708u; f_801B513C(c); // 801B6704
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6708
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B670C
  c->lr=c->r[0]; // 801B6710
  c->r[1]=c->r[1]+0x00000010u; // 801B6714
  return; // 801B6718
}

// fn_801B671C
void f_801B671C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B671C
  c->r[0]=c->lr; // 801B6720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6728
  c->r[31]=c->r[3]|c->r[3]; // 801B672C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6730
  c->r[4]=0u+0x00000003u; // 801B6734
  c->lr=0x801B673Cu; f_801C0D4C(c); // 801B6738
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B673C
  c->lr=0x801B6744u; f_801C0CF8(c); // 801B6740
  c->r[3]=c->r[31]|c->r[31]; // 801B6744
  c->lr=0x801B674Cu; f_801B4E54(c); // 801B6748
  c->r[3]=c->r[31]|c->r[31]; // 801B674C
  c->r[4]=0u+0x00000000u; // 801B6750
  c->lr=0x801B6758u; f_801B635C(c); // 801B6754
  c->r[3]=c->r[31]|c->r[31]; // 801B6758
  c->lr=0x801B6760u; f_801B49DC(c); // 801B675C
  c->r[3]=c->r[31]|c->r[31]; // 801B6760
  c->lr=0x801B6768u; f_801B5404(c); // 801B6764
  c->r[3]=c->r[31]|c->r[31]; // 801B6768
  c->lr=0x801B6770u; f_801B513C(c); // 801B676C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6770
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6774
  c->lr=c->r[0]; // 801B6778
  c->r[1]=c->r[1]+0x00000010u; // 801B677C
  return; // 801B6780
}

// fn_801B6784
void f_801B6784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6784
  c->r[0]=c->lr; // 801B6788
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B678C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6790
  c->r[31]=c->r[3]|c->r[3]; // 801B6794
  c->r[4]=0u+0x00000000u; // 801B6798
  c->lr=0x801B67A0u; f_801B635C(c); // 801B679C
  c->r[3]=c->r[31]|c->r[31]; // 801B67A0
  c->lr=0x801B67A8u; f_801B53BC(c); // 801B67A4
  c->r[3]=c->r[31]|c->r[31]; // 801B67A8
  c->lr=0x801B67B0u; f_801B4998(c); // 801B67AC
  c->r[3]=c->r[31]|c->r[31]; // 801B67B0
  c->lr=0x801B67B8u; f_801B5184(c); // 801B67B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B67B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B67BC
  c->lr=c->r[0]; // 801B67C0
  c->r[1]=c->r[1]+0x00000010u; // 801B67C4
  return; // 801B67C8
}

// fn_801B67CC
void f_801B67CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B67CC
  c->r[0]=c->lr; // 801B67D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B67D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B67D8
  c->r[31]=c->r[3]|c->r[3]; // 801B67DC
  c->r[4]=0u+0x00000000u; // 801B67E0
  c->lr=0x801B67E8u; f_801B635C(c); // 801B67E4
  c->r[3]=c->r[31]|c->r[31]; // 801B67E8
  c->lr=0x801B67F0u; f_801B4998(c); // 801B67EC
  c->r[3]=c->r[31]|c->r[31]; // 801B67F0
  c->lr=0x801B67F8u; f_801B5184(c); // 801B67F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B67F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B67FC
  c->lr=c->r[0]; // 801B6800
  c->r[1]=c->r[1]+0x00000010u; // 801B6804
  return; // 801B6808
}

// fn_801B680C
void f_801B680C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B680C
  c->r[0]=c->lr; // 801B6810
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6818
  c->r[31]=c->r[3]|c->r[3]; // 801B681C
  c->r[4]=0u+0x00000000u; // 801B6820
  c->lr=0x801B6828u; f_801B635C(c); // 801B6824
  c->r[3]=c->r[31]|c->r[31]; // 801B6828
  c->lr=0x801B6830u; f_801B5184(c); // 801B682C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6830
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6834
  c->lr=c->r[0]; // 801B6838
  c->r[1]=c->r[1]+0x00000010u; // 801B683C
  return; // 801B6840
}

// fn_801B6844
void f_801B6844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6844
  c->r[0]=c->lr; // 801B6848
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B684C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6850
  c->r[31]=c->r[3]|c->r[3]; // 801B6854
  c->lr=0x801B685Cu; f_801B5404(c); // 801B6858
  c->r[3]=c->r[31]|c->r[31]; // 801B685C
  c->lr=0x801B6864u; f_801B49DC(c); // 801B6860
  c->r[3]=c->r[31]|c->r[31]; // 801B6864
  c->lr=0x801B686Cu; f_801B51D4(c); // 801B6868
  c->r[3]=c->r[31]|c->r[31]; // 801B686C
  c->r[4]=0u+0x00000001u; // 801B6870
  c->lr=0x801B6878u; f_801B635C(c); // 801B6874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6878
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B687C
  c->lr=c->r[0]; // 801B6880
  c->r[1]=c->r[1]+0x00000010u; // 801B6884
  return; // 801B6888
}

// fn_801B688C
void f_801B688C(Ctx* __restrict c) {
  f_801B51CC(c); return; // 801B688C
}

// fn_801B6890
void f_801B6890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6890
  c->r[0]=c->lr; // 801B6894
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B689C
  c->r[31]=c->r[3]|c->r[3]; // 801B68A0
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B68A4
  c->r[4]=0u+0x00000002u; // 801B68A8
  c->lr=0x801B68B0u; f_801C0D4C(c); // 801B68AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B68B0
  c->lr=0x801B68B8u; f_801C0CF8(c); // 801B68B4
  c->r[3]=c->r[31]|c->r[31]; // 801B68B8
  c->lr=0x801B68C0u; f_801B4E54(c); // 801B68BC
  c->r[3]=c->r[31]|c->r[31]; // 801B68C0
  c->r[4]=0u+0x00000000u; // 801B68C4
  c->lr=0x801B68CCu; f_801B635C(c); // 801B68C8
  c->r[3]=c->r[31]|c->r[31]; // 801B68CC
  c->lr=0x801B68D4u; f_801B4948(c); // 801B68D0
  c->r[3]=c->r[31]|c->r[31]; // 801B68D4
  c->lr=0x801B68DCu; f_801B513C(c); // 801B68D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B68DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B68E0
  c->lr=c->r[0]; // 801B68E4
  c->r[1]=c->r[1]+0x00000010u; // 801B68E8
  return; // 801B68EC
}

// fn_801B68F0
void f_801B68F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B68F0
  c->r[0]=c->lr; // 801B68F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B68F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B68FC
  c->r[31]=c->r[3]|c->r[3]; // 801B6900
  c->r[4]=0u+0x00000000u; // 801B6904
  c->lr=0x801B690Cu; f_801B635C(c); // 801B6908
  c->r[3]=c->r[31]|c->r[31]; // 801B690C
  c->lr=0x801B6914u; f_801B4998(c); // 801B6910
  c->r[3]=c->r[31]|c->r[31]; // 801B6914
  c->lr=0x801B691Cu; f_801B5184(c); // 801B6918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B691C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6920
  c->lr=c->r[0]; // 801B6924
  c->r[1]=c->r[1]+0x00000010u; // 801B6928
  return; // 801B692C
}

// fn_801B6930
void f_801B6930(Ctx* __restrict c) {
  f_801B6844(c); return; // 801B6930
}

// fn_801B6934
void f_801B6934(Ctx* __restrict c) {
  f_801B688C(c); return; // 801B6934
}

// fn_801B6938
void f_801B6938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6938
  c->r[0]=c->lr; // 801B693C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6940
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6944
  c->r[31]=c->r[3]|c->r[3]; // 801B6948
  c->r[4]=0u+0x00000001u; // 801B694C
  c->lr=0x801B6954u; f_801B50AC(c); // 801B6950
  c->r[3]=c->r[31]|c->r[31]; // 801B6954
  c->lr=0x801B695Cu; f_801B5454(c); // 801B6958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B695C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6960
  c->lr=c->r[0]; // 801B6964
  c->r[1]=c->r[1]+0x00000010u; // 801B6968
  return; // 801B696C
}

// fn_801B6970
void f_801B6970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6970
  c->r[0]=c->lr; // 801B6974
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B697C
  c->r[31]=c->r[3]|c->r[3]; // 801B6980
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801B6984
  c->r[4]=0u+0x00000000u; // 801B6988
  c->lr=0x801B6990u; f_8012F910(c); // 801B698C
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801B6990
  c->lr=0x801B6998u; f_801A58B8(c); // 801B6994
  c->r[4]=c->r[3]|c->r[3]; // 801B6998
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B699C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B69A0
  c->r[12]=R32(c->r[12]+0x00000074u); // 801B69A4
  c->ctr=c->r[12]; // 801B69A8
  if (true) { c->lr=0x801B69B0u; dispatch(c,c->ctr); } // 801B69AC
  c->r[3]=c->r[31]|c->r[31]; // 801B69B0
  c->lr=0x801B69B8u; f_801B4EAC(c); // 801B69B4
  c->r[3]=c->r[31]|c->r[31]; // 801B69B8
  c->lr=0x801B69C0u; f_801B4B50(c); // 801B69BC
  c->r[3]=c->r[31]|c->r[31]; // 801B69C0
  c->lr=0x801B69C8u; f_801B5404(c); // 801B69C4
  c->r[3]=c->r[31]|c->r[31]; // 801B69C8
  c->lr=0x801B69D0u; f_801B49DC(c); // 801B69CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B69D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B69D4
  c->lr=c->r[0]; // 801B69D8
  c->r[1]=c->r[1]+0x00000010u; // 801B69DC
  return; // 801B69E0
}

// fn_801B69E4
void f_801B69E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B69E4
  c->r[0]=c->lr; // 801B69E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B69EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B69F0
  c->r[31]=c->r[3]|c->r[3]; // 801B69F4
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801B69F8
  c->r[4]=0u+0x00000000u; // 801B69FC
  c->lr=0x801B6A04u; f_8012F910(c); // 801B6A00
  c->r[3]=c->r[31]|c->r[31]; // 801B6A04
  c->lr=0x801B6A0Cu; f_801B4B8C(c); // 801B6A08
  c->r[3]=c->r[31]|c->r[31]; // 801B6A0C
  c->lr=0x801B6A14u; f_801B5404(c); // 801B6A10
  c->r[3]=c->r[31]|c->r[31]; // 801B6A14
  c->lr=0x801B6A1Cu; f_801B49DC(c); // 801B6A18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6A1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6A20
  c->lr=c->r[0]; // 801B6A24
  c->r[1]=c->r[1]+0x00000010u; // 801B6A28
  return; // 801B6A2C
}

// fn_801B6A30
void f_801B6A30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6A30
  c->r[0]=c->lr; // 801B6A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6A3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B6A40
  c->r[30]=c->r[3]|c->r[3]; // 801B6A44
  c->r[31]=c->r[4]|c->r[4]; // 801B6A48
  c->lr=0x801B6A50u; f_801B4F1C(c); // 801B6A4C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6A50
  if (crb(c,2)) { goto L_801B6A64; } // 801B6A54
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801B6A58
  c->r[4]=0u+0x00000001u; // 801B6A5C
  c->lr=0x801B6A64u; f_8012F910(c); // 801B6A60
L_801B6A64:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6A64
  c->r[4]=c->r[31]|c->r[31]; // 801B6A68
  c->lr=0x801B6A70u; f_801B5B04(c); // 801B6A6C
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801B6A70
  c->r[4]=c->r[31]|c->r[31]; // 801B6A74
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6A78
  c->r[12]=R32(c->r[12]+0x00000078u); // 801B6A7C
  c->ctr=c->r[12]; // 801B6A80
  if (true) { c->lr=0x801B6A88u; dispatch(c,c->ctr); } // 801B6A84
  c->r[3]=R32(c->r[30]+0x000000DCu); // 801B6A88
  c->lr=0x801B6A90u; f_801A58B8(c); // 801B6A8C
  c->r[4]=c->r[3]|c->r[3]; // 801B6A90
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801B6A94
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6A98
  c->r[12]=R32(c->r[12]+0x00000074u); // 801B6A9C
  c->ctr=c->r[12]; // 801B6AA0
  if (true) { c->lr=0x801B6AA8u; dispatch(c,c->ctr); } // 801B6AA4
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801B6AA8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6AAC
  c->r[12]=R32(c->r[12]+0x00000064u); // 801B6AB0
  c->ctr=c->r[12]; // 801B6AB4
  if (true) { c->lr=0x801B6ABCu; dispatch(c,c->ctr); } // 801B6AB8
  c->r[3]=c->r[30]|c->r[30]; // 801B6ABC
  c->lr=0x801B6AC4u; f_801B4BE0(c); // 801B6AC0
  c->r[3]=c->r[30]|c->r[30]; // 801B6AC4
  c->lr=0x801B6ACCu; f_801B5404(c); // 801B6AC8
  c->r[3]=c->r[30]|c->r[30]; // 801B6ACC
  c->lr=0x801B6AD4u; f_801B49DC(c); // 801B6AD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6AD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B6AD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6ADC
  c->lr=c->r[0]; // 801B6AE0
  c->r[1]=c->r[1]+0x00000010u; // 801B6AE4
  return; // 801B6AE8
}

// fn_801B6AEC
void f_801B6AEC(Ctx* __restrict c) {
  f_801B4C28(c); return; // 801B6AEC
}

// fn_801B6AF0
void f_801B6AF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6AF0
  c->r[0]=c->lr; // 801B6AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6AF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6AFC
  c->r[31]=c->r[3]|c->r[3]; // 801B6B00
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801B6B04
  c->lr=0x801B6B0Cu; f_801A58B8(c); // 801B6B08
  c->r[4]=c->r[3]|c->r[3]; // 801B6B0C
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801B6B10
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B6B14
  c->r[12]=R32(c->r[12]+0x00000074u); // 801B6B18
  c->ctr=c->r[12]; // 801B6B1C
  if (true) { c->lr=0x801B6B24u; dispatch(c,c->ctr); } // 801B6B20
  c->r[3]=c->r[31]|c->r[31]; // 801B6B24
  c->lr=0x801B6B2Cu; f_801B4C30(c); // 801B6B28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6B30
  c->lr=c->r[0]; // 801B6B34
  c->r[1]=c->r[1]+0x00000010u; // 801B6B38
  return; // 801B6B3C
}

// fn_801B6B40
void f_801B6B40(Ctx* __restrict c) {
  c->r[4]=0u+0x00000002u; // 801B6B40
  f_801B50AC(c); return; // 801B6B44
}

// fn_801B6B48
void f_801B6B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6B48
  c->r[0]=c->lr; // 801B6B4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6B50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6B54
  c->r[31]=c->r[3]|c->r[3]; // 801B6B58
  c->r[4]=0u+0x00000002u; // 801B6B5C
  c->lr=0x801B6B64u; f_801B50AC(c); // 801B6B60
  c->r[3]=c->r[31]|c->r[31]; // 801B6B64
  c->r[4]=0u+0x00000000u; // 801B6B68
  c->lr=0x801B6B70u; f_801B568C(c); // 801B6B6C
  c->r[3]=c->r[31]|c->r[31]; // 801B6B70
  c->r[4]=0u+0x00000000u; // 801B6B74
  c->lr=0x801B6B7Cu; f_801B635C(c); // 801B6B78
  c->r[3]=c->r[31]|c->r[31]; // 801B6B7C
  c->lr=0x801B6B84u; f_801B5A58(c); // 801B6B80
  c->r[3]=c->r[31]|c->r[31]; // 801B6B84
  c->r[4]=0u+0x00000001u; // 801B6B88
  c->lr=0x801B6B90u; f_801B5AE4(c); // 801B6B8C
  c->r[3]=c->r[31]|c->r[31]; // 801B6B90
  c->r[4]=0u+0x00000001u; // 801B6B94
  c->lr=0x801B6B9Cu; f_801B5AF4(c); // 801B6B98
  c->r[3]=c->r[31]|c->r[31]; // 801B6B9C
  c->lr=0x801B6BA4u; f_801B55A8(c); // 801B6BA0
  c->r[3]=c->r[31]|c->r[31]; // 801B6BA4
  c->lr=0x801B6BACu; f_801B4948(c); // 801B6BA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6BAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6BB0
  c->lr=c->r[0]; // 801B6BB4
  c->r[1]=c->r[1]+0x00000010u; // 801B6BB8
  return; // 801B6BBC
}

// fn_801B6BC0
void f_801B6BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6BC0
  c->r[0]=c->lr; // 801B6BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6BC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6BCC
  c->r[31]=c->r[3]|c->r[3]; // 801B6BD0
  c->r[4]=0u+0x00000000u; // 801B6BD4
  c->lr=0x801B6BDCu; f_801B568C(c); // 801B6BD8
  c->r[3]=c->r[31]|c->r[31]; // 801B6BDC
  c->r[4]=0u+0x00000000u; // 801B6BE0
  c->lr=0x801B6BE8u; f_801B635C(c); // 801B6BE4
  c->r[3]=c->r[31]|c->r[31]; // 801B6BE8
  c->lr=0x801B6BF0u; f_801B5A58(c); // 801B6BEC
  c->r[3]=c->r[31]|c->r[31]; // 801B6BF0
  c->r[4]=0u+0x00000001u; // 801B6BF4
  c->lr=0x801B6BFCu; f_801B5AE4(c); // 801B6BF8
  c->r[3]=c->r[31]|c->r[31]; // 801B6BFC
  c->r[4]=0u+0x00000001u; // 801B6C00
  c->lr=0x801B6C08u; f_801B5AF4(c); // 801B6C04
  c->r[3]=c->r[31]|c->r[31]; // 801B6C08
  c->lr=0x801B6C10u; f_801B55F0(c); // 801B6C0C
  c->r[3]=c->r[31]|c->r[31]; // 801B6C10
  c->lr=0x801B6C18u; f_801B4998(c); // 801B6C14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6C1C
  c->lr=c->r[0]; // 801B6C20
  c->r[1]=c->r[1]+0x00000010u; // 801B6C24
  return; // 801B6C28
}

// fn_801B6C2C
void f_801B6C2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6C2C
  c->r[0]=c->lr; // 801B6C30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6C34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6C38
  c->r[31]=c->r[3]|c->r[3]; // 801B6C3C
  c->r[4]=0u+0x00000000u; // 801B6C40
  c->lr=0x801B6C48u; f_801B568C(c); // 801B6C44
  c->r[3]=c->r[31]|c->r[31]; // 801B6C48
  c->r[4]=0u+0x00000000u; // 801B6C4C
  c->lr=0x801B6C54u; f_801B635C(c); // 801B6C50
  c->r[3]=c->r[31]|c->r[31]; // 801B6C54
  c->lr=0x801B6C5Cu; f_801B5A58(c); // 801B6C58
  c->r[3]=c->r[31]|c->r[31]; // 801B6C5C
  c->r[4]=0u+0x00000001u; // 801B6C60
  c->lr=0x801B6C68u; f_801B5AE4(c); // 801B6C64
  c->r[3]=c->r[31]|c->r[31]; // 801B6C68
  c->r[4]=0u+0x00000001u; // 801B6C6C
  c->lr=0x801B6C74u; f_801B5AF4(c); // 801B6C70
  c->r[3]=c->r[31]|c->r[31]; // 801B6C74
  c->lr=0x801B6C7Cu; f_801B55F0(c); // 801B6C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6C80
  c->lr=c->r[0]; // 801B6C84
  c->r[1]=c->r[1]+0x00000010u; // 801B6C88
  return; // 801B6C8C
}

// fn_801B6C90
void f_801B6C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6C90
  c->r[0]=c->lr; // 801B6C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6C98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6C9C
  c->r[31]=c->r[3]|c->r[3]; // 801B6CA0
  c->r[4]=0u+0x00000001u; // 801B6CA4
  c->lr=0x801B6CACu; f_801B568C(c); // 801B6CA8
  c->r[3]=c->r[31]|c->r[31]; // 801B6CAC
  c->r[4]=0u+0x00000001u; // 801B6CB0
  c->lr=0x801B6CB8u; f_801B635C(c); // 801B6CB4
  c->r[3]=c->r[31]|c->r[31]; // 801B6CB8
  c->r[4]=0u+0x00000000u; // 801B6CBC
  c->lr=0x801B6CC4u; f_801B5AE4(c); // 801B6CC0
  c->r[3]=c->r[31]|c->r[31]; // 801B6CC4
  c->r[4]=0u+0x00000001u; // 801B6CC8
  c->lr=0x801B6CD0u; f_801B5AF4(c); // 801B6CCC
  c->r[3]=c->r[31]|c->r[31]; // 801B6CD0
  c->lr=0x801B6CD8u; f_801B5638(c); // 801B6CD4
  c->r[3]=c->r[31]|c->r[31]; // 801B6CD8
  c->lr=0x801B6CE0u; f_801B4A34(c); // 801B6CDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6CE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6CE4
  c->lr=c->r[0]; // 801B6CE8
  c->r[1]=c->r[1]+0x00000010u; // 801B6CEC
  return; // 801B6CF0
}

// fn_801B6CF4
void f_801B6CF4(Ctx* __restrict c) {
  f_801B5674(c); return; // 801B6CF4
}

// fn_801B6CF8
void f_801B6CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6CF8
  c->r[0]=c->lr; // 801B6CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6D04
  c->r[31]=c->r[3]|c->r[3]; // 801B6D08
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B6D0C
  c->r[4]=0u+0x00000004u; // 801B6D10
  c->lr=0x801B6D18u; f_801C0D4C(c); // 801B6D14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B6D18
  c->lr=0x801B6D20u; f_801C0CF8(c); // 801B6D1C
  c->r[3]=c->r[31]|c->r[31]; // 801B6D20
  c->lr=0x801B6D28u; f_801B4E54(c); // 801B6D24
  c->r[3]=c->r[31]|c->r[31]; // 801B6D28
  c->r[4]=0u+0x00000000u; // 801B6D2C
  c->lr=0x801B6D34u; f_801B635C(c); // 801B6D30
  c->r[3]=c->r[31]|c->r[31]; // 801B6D34
  c->lr=0x801B6D3Cu; f_801B4A34(c); // 801B6D38
  c->r[3]=c->r[31]|c->r[31]; // 801B6D3C
  c->lr=0x801B6D44u; f_801B5240(c); // 801B6D40
  c->r[3]=c->r[31]|c->r[31]; // 801B6D44
  c->lr=0x801B6D4Cu; f_801B513C(c); // 801B6D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6D50
  c->lr=c->r[0]; // 801B6D54
  c->r[1]=c->r[1]+0x00000010u; // 801B6D58
  return; // 801B6D5C
}

