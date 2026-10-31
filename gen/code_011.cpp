#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800AD870
void f_800AD870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD870
  c->r[0]=c->lr; // 800AD874
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD87C
  c->r[31]=c->r[3]|c->r[3]; // 800AD880
  c->r[3]=c->r[3]+0x00010000u; // 800AD884
  c->r[3]=R32(c->r[3]+0xFFFF8474u); // 800AD888
  cmps(c,0,(int32_t)c->r[3],0); // 800AD88C
  if (crb(c,2)) { goto L_800AD8B8; } // 800AD890
  c->lr=0x800AD898u; f_8005A908(c); // 800AD894
  c->r[3]=c->r[31]+0x00010000u; // 800AD898
  c->r[3]=R32(c->r[3]+0xFFFF8474u); // 800AD89C
  c->lr=0x800AD8A4u; f_8009CC3C(c); // 800AD8A0
  c->r[0]=0u+0x00000000u; // 800AD8A4
  c->r[3]=c->r[31]+0x00010000u; // 800AD8A8
  W32(c->r[3]+0xFFFF8474u,c->r[0]); // 800AD8AC
  c->r[0]=0u+0xFFFFFFFFu; // 800AD8B0
  W32(c->r[3]+0xFFFF8470u,c->r[0]); // 800AD8B4
L_800AD8B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD8B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD8BC
  c->lr=c->r[0]; // 800AD8C0
  c->r[1]=c->r[1]+0x00000010u; // 800AD8C4
  return; // 800AD8C8
}

// fn_800AD8CC
void f_800AD8CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD8CC
  c->r[0]=c->lr; // 800AD8D0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800AD8D4
  c->r[11]=c->r[1]+0x00000060u; // 800AD8D8
  c->lr=0x800AD8E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AD8DC
  c->r[31]=c->r[3]|c->r[3]; // 800AD8E0
  c->r[30]=0u+0x00000000u; // 800AD8E4
  c->r[3]=c->r[3]+0x00010000u; // 800AD8E8
  W32(c->r[3]+0xFFFF81A8u,c->r[30]); // 800AD8EC
  c->lr=0x800AD8F4u; f_8007B524(c); // 800AD8F0
  c->lr=0x800AD8F8u; f_8023BC18(c); // 800AD8F4
  c->r[29]=c->r[3]|c->r[3]; // 800AD8F8
  c->r[4]=c->r[31]+0x00010000u; // 800AD8FC
  c->r[0]=R32(c->r[4]+0xFFFF8184u); // 800AD900
  c->r[0]=rotl(c->r[0],0)&0x00001000u; // 800AD904
  cmps(c,0,(int32_t)c->r[0],0); // 800AD908
  if (crb(c,2)) { goto L_800ADA6C; } // 800AD90C
  W32(c->r[4]+0xFFFF8260u,c->r[30]); // 800AD910
  W32(c->r[4]+0xFFFF8264u,c->r[30]); // 800AD914
  W32(c->r[4]+0xFFFF8268u,c->r[30]); // 800AD918
  W32(c->r[4]+0xFFFF826Cu,c->r[30]); // 800AD91C
  W32(c->r[4]+0xFFFF8270u,c->r[30]); // 800AD920
  W32(c->r[4]+0xFFFF8274u,c->r[30]); // 800AD924
  W32(c->r[4]+0xFFFF8278u,c->r[30]); // 800AD928
  c->r[5]=c->r[31]+0x0000001Cu; // 800AD92C
  c->r[3]=c->r[5]+0x00010000u; // 800AD930
  W32(c->r[3]+0xFFFF8260u,c->r[30]); // 800AD934
  W32(c->r[3]+0xFFFF8264u,c->r[30]); // 800AD938
  W32(c->r[3]+0xFFFF8268u,c->r[30]); // 800AD93C
  W32(c->r[3]+0xFFFF826Cu,c->r[30]); // 800AD940
  W32(c->r[3]+0xFFFF8270u,c->r[30]); // 800AD944
  W32(c->r[3]+0xFFFF8274u,c->r[30]); // 800AD948
  W32(c->r[3]+0xFFFF8278u,c->r[30]); // 800AD94C
  c->r[5]=c->r[5]+0x0000001Cu; // 800AD950
  c->r[3]=c->r[5]+0x00010000u; // 800AD954
  W32(c->r[3]+0xFFFF8260u,c->r[30]); // 800AD958
  W32(c->r[3]+0xFFFF8264u,c->r[30]); // 800AD95C
  W32(c->r[3]+0xFFFF8268u,c->r[30]); // 800AD960
  W32(c->r[3]+0xFFFF826Cu,c->r[30]); // 800AD964
  W32(c->r[3]+0xFFFF8270u,c->r[30]); // 800AD968
  W32(c->r[3]+0xFFFF8274u,c->r[30]); // 800AD96C
  W32(c->r[3]+0xFFFF8278u,c->r[30]); // 800AD970
  c->r[5]=c->r[5]+0x0000001Cu; // 800AD974
  c->r[3]=c->r[5]+0x00010000u; // 800AD978
  W32(c->r[3]+0xFFFF8260u,c->r[30]); // 800AD97C
  W32(c->r[3]+0xFFFF8264u,c->r[30]); // 800AD980
  W32(c->r[3]+0xFFFF8268u,c->r[30]); // 800AD984
  W32(c->r[3]+0xFFFF826Cu,c->r[30]); // 800AD988
  W32(c->r[3]+0xFFFF8270u,c->r[30]); // 800AD98C
  W32(c->r[3]+0xFFFF8274u,c->r[30]); // 800AD990
  W32(c->r[3]+0xFFFF8278u,c->r[30]); // 800AD994
  c->r[5]=c->r[5]+0x0000001Cu; // 800AD998
  c->r[3]=c->r[5]+0x00010000u; // 800AD99C
  W32(c->r[3]+0xFFFF8260u,c->r[30]); // 800AD9A0
  W32(c->r[3]+0xFFFF8264u,c->r[30]); // 800AD9A4
  W32(c->r[3]+0xFFFF8268u,c->r[30]); // 800AD9A8
  W32(c->r[3]+0xFFFF826Cu,c->r[30]); // 800AD9AC
  W32(c->r[3]+0xFFFF8270u,c->r[30]); // 800AD9B0
  W32(c->r[3]+0xFFFF8274u,c->r[30]); // 800AD9B4
  W32(c->r[3]+0xFFFF8278u,c->r[30]); // 800AD9B8
  c->r[5]=c->r[5]+0x0000001Cu; // 800AD9BC
  c->r[3]=c->r[5]+0x00010000u; // 800AD9C0
  W32(c->r[3]+0xFFFF8260u,c->r[30]); // 800AD9C4
  W32(c->r[3]+0xFFFF8264u,c->r[30]); // 800AD9C8
  W32(c->r[3]+0xFFFF8268u,c->r[30]); // 800AD9CC
  W32(c->r[3]+0xFFFF826Cu,c->r[30]); // 800AD9D0
  W32(c->r[3]+0xFFFF8270u,c->r[30]); // 800AD9D4
  W32(c->r[3]+0xFFFF8274u,c->r[30]); // 800AD9D8
  W32(c->r[3]+0xFFFF8278u,c->r[30]); // 800AD9DC
  W32(c->r[4]+0xFFFF8308u,c->r[30]); // 800AD9E0
  c->lr=0x800AD9E8u; f_8007B524(c); // 800AD9E4
  c->lr=0x800AD9ECu; f_8023BC10(c); // 800AD9E8
  cmps(c,0,(int32_t)c->r[3],0); // 800AD9EC
  if (!crb(c,2)) { goto L_800ADA6C; } // 800AD9F0
  c->r[26]=0u+0x00000000u; // 800AD9F4
  c->r[27]=0u+0x00000000u; // 800AD9F8
  c->r[28]=c->r[31]|c->r[31]; // 800AD9FC
  c->r[30]=0u+0x00000001u; // 800ADA00
  goto L_800ADA58; // 800ADA04
L_800ADA08:;
  c->lr=0x800ADA0Cu; f_800F4430(c); // 800ADA08
  c->r[3]=c->r[3]+0x00000218u; // 800ADA0C
  c->r[4]=c->r[27]|c->r[27]; // 800ADA10
  c->r[5]=c->r[1]+0x00000008u; // 800ADA14
  c->lr=0x800ADA1Cu; f_801E6FFC(c); // 800ADA18
  c->lr=0x800ADA20u; f_8006E268(c); // 800ADA1C
  c->lr=0x800ADA24u; f_8006E250(c); // 800ADA20
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800ADA24
  cmpu(c,0,c->r[0],c->r[3]); // 800ADA28
  if (!crb(c,2)) { goto L_800ADA50; } // 800ADA2C
  c->r[3]=R16(c->r[29]+0x0000006Eu); // 800ADA30
  c->r[0]=((c->r[26])&0x20)?0u:(c->r[30]<<((c->r[26])&31)); // 800ADA34
  c->r[0]=c->r[3]&c->r[0]; // 800ADA38
  cmps(c,0,(int32_t)c->r[0],0); // 800ADA3C
  if (crb(c,2)) { goto L_800ADA4C; } // 800ADA40
  c->r[3]=c->r[28]+0x00010000u; // 800ADA44
  W32(c->r[3]+0xFFFF8260u,c->r[30]); // 800ADA48
L_800ADA4C:;
  c->r[26]=c->r[26]+0x00000001u; // 800ADA4C
L_800ADA50:;
  c->r[28]=c->r[28]+0x00000004u; // 800ADA50
  c->r[27]=c->r[27]+0x00000001u; // 800ADA54
L_800ADA58:;
  c->lr=0x800ADA5Cu; f_800F4430(c); // 800ADA58
  c->r[3]=c->r[3]+0x00000218u; // 800ADA5C
  c->lr=0x800ADA64u; f_801E7130(c); // 800ADA60
  cmpu(c,0,c->r[27],c->r[3]); // 800ADA64
  if (crb(c,0)) { IRQCHK(c); goto L_800ADA08; } // 800ADA68
L_800ADA6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800ADA6C
  c->lr=0x800ADA74u; f_800AD150(c); // 800ADA70
  cmps(c,0,(int32_t)c->r[3],0); // 800ADA74
  if (crb(c,2)) { goto L_800ADAB0; } // 800ADA78
  c->lr=0x800ADA80u; f_800F4430(c); // 800ADA7C
  c->r[3]=c->r[3]+0x00000218u; // 800ADA80
  c->r[4]=c->r[31]+0x00010000u; // 800ADA84
  c->r[4]=R32(c->r[4]+0xFFFF81ACu); // 800ADA88
  c->lr=0x800ADA90u; f_801E6FF8(c); // 800ADA8C
  c->r[4]=c->r[31]+0x00010000u; // 800ADA90
  W32(c->r[4]+0xFFFF81A8u,c->r[3]); // 800ADA94
  c->r[0]=R32(c->r[4]+0xFFFF8184u); // 800ADA98
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800ADA9C
  W32(c->r[4]+0xFFFF8184u,c->r[0]); // 800ADAA0
  c->r[0]=c->r[0]|0x00000004u; // 800ADAA4
  W32(c->r[4]+0xFFFF8184u,c->r[0]); // 800ADAA8
  goto L_800ADBC8; // 800ADAAC
L_800ADAB0:;
  c->r[0]=0u+0x00000000u; // 800ADAB0
  c->r[30]=c->r[31]+0x00010000u; // 800ADAB4
  W32(c->r[30]+0xFFFF81B0u,c->r[0]); // 800ADAB8
  c->r[28]=0u+0x00000000u; // 800ADABC
  c->r[29]=c->r[31]|c->r[31]; // 800ADAC0
  goto L_800ADB64; // 800ADAC4
L_800ADAC8:;
  c->lr=0x800ADACCu; f_800F4430(c); // 800ADAC8
  c->r[3]=c->r[3]+0x00000218u; // 800ADACC
  c->r[4]=c->r[28]|c->r[28]; // 800ADAD0
  c->r[5]=c->r[1]+0x00000008u; // 800ADAD4
  c->lr=0x800ADADCu; f_801E6FFC(c); // 800ADAD8
  c->r[3]=R32(c->r[30]+0xFFFF8188u); // 800ADADC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800ADAE0
  cmpu(c,0,c->r[3],c->r[0]); // 800ADAE4
  if (!crb(c,2)) { goto L_800ADB5C; } // 800ADAE8
  c->r[0]=R32(c->r[30]+0xFFFF818Cu); // 800ADAEC
  c->r[5]=R32(c->r[1]+0x00000010u); // 800ADAF0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800ADAF4
  if (crb(c,1)) { goto L_800ADB5C; } // 800ADAF8
  c->r[4]=R32(c->r[1]+0x00000014u); // 800ADAFC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800ADB00
  if (crb(c,0)) { goto L_800ADB5C; } // 800ADB04
  c->r[3]=c->r[29]+0x00010000u; // 800ADB08
  c->r[0]=R32(c->r[3]+0xFFFF8260u); // 800ADB0C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADB10
  if (!crb(c,2)) { goto L_800ADB5C; } // 800ADB14
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800ADB18
  if (!crb(c,2)) { goto L_800ADB3C; } // 800ADB1C
  W32(c->r[30]+0xFFFF81B4u,c->r[28]); // 800ADB20
  c->r[0]=0u+0x00000001u; // 800ADB24
  W32(c->r[30]+0xFFFF81B0u,c->r[0]); // 800ADB28
  c->r[0]=R32(c->r[30]+0xFFFF8184u); // 800ADB2C
  c->r[0]=c->r[0]|0x0000000Cu; // 800ADB30
  W32(c->r[30]+0xFFFF8184u,c->r[0]); // 800ADB34
  goto L_800ADB78; // 800ADB38
L_800ADB3C:;
  c->r[0]=R32(c->r[30]+0xFFFF81B0u); // 800ADB3C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ADB40
  c->r[3]=c->r[3]+0x00010000u; // 800ADB44
  c->r[0]=c->r[3]+0xFFFF81B4u; // 800ADB48
  W32(c->r[31]+c->r[0],c->r[28]); // 800ADB4C
  c->r[3]=R32(c->r[30]+0xFFFF81B0u); // 800ADB50
  c->r[0]=c->r[3]+0x00000001u; // 800ADB54
  W32(c->r[30]+0xFFFF81B0u,c->r[0]); // 800ADB58
L_800ADB5C:;
  c->r[29]=c->r[29]+0x00000004u; // 800ADB5C
  c->r[28]=c->r[28]+0x00000001u; // 800ADB60
L_800ADB64:;
  c->lr=0x800ADB68u; f_800F4430(c); // 800ADB64
  c->r[3]=c->r[3]+0x00000218u; // 800ADB68
  c->lr=0x800ADB70u; f_801E7130(c); // 800ADB6C
  cmpu(c,0,c->r[28],c->r[3]); // 800ADB70
  if (crb(c,0)) { IRQCHK(c); goto L_800ADAC8; } // 800ADB74
L_800ADB78:;
  c->r[3]=c->r[31]+0x00010000u; // 800ADB78
  c->r[0]=R32(c->r[3]+0xFFFF81B0u); // 800ADB7C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADB80
  if (crb(c,2)) { goto L_800ADBC8; } // 800ADB84
  c->lr=0x800ADB8Cu; f_8005C538(c); // 800ADB88
  c->r[5]=c->r[31]+0x00010000u; // 800ADB8C
  c->r[4]=R32(c->r[5]+0xFFFF81B0u); // 800ADB90
  c->r[0]=divwu(c->r[3],c->r[4]); // 800ADB94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800ADB98
  c->r[0]=c->r[3]-c->r[0]; // 800ADB9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ADBA0
  c->r[30]=c->r[5]+c->r[0]; // 800ADBA4
  c->lr=0x800ADBACu; f_800F4430(c); // 800ADBA8
  c->r[3]=c->r[3]+0x00000218u; // 800ADBAC
  c->r[4]=R32(c->r[30]+0xFFFF81B4u); // 800ADBB0
  c->lr=0x800ADBB8u; f_801E6FF8(c); // 800ADBB4
  c->r[4]=c->r[31]+0x00010000u; // 800ADBB8
  W32(c->r[4]+0xFFFF81A8u,c->r[3]); // 800ADBBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ADBC0
  W32(c->r[4]+0xFFFF81ACu,c->r[0]); // 800ADBC4
L_800ADBC8:;
  c->r[3]=c->r[31]|c->r[31]; // 800ADBC8
  c->lr=0x800ADBD0u; f_800AD120(c); // 800ADBCC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADBD0
  if (crb(c,2)) { goto L_800ADBEC; } // 800ADBD4
  c->r[0]=0u+0x0000001Cu; // 800ADBD8
  c->r[3]=c->r[31]+0x00010000u; // 800ADBDC
  W32(c->r[3]+0xFFFF8188u,c->r[0]); // 800ADBE0
  c->r[0]=0u+0x00000000u; // 800ADBE4
  W32(c->r[3]+0xFFFF818Cu,c->r[0]); // 800ADBE8
L_800ADBEC:;
  c->r[11]=c->r[1]+0x00000060u; // 800ADBEC
  c->lr=0x800ADBF4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ADBF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800ADBF4
  c->lr=c->r[0]; // 800ADBF8
  c->r[1]=c->r[1]+0x00000060u; // 800ADBFC
  return; // 800ADC00
}

// fn_800ADC04
void f_800ADC04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADC04
  c->r[0]=c->lr; // 800ADC08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800ADC0C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800ADC10
  W32(c->r[1]+0x00000048u,c->r[30]); // 800ADC14
  W32(c->r[1]+0x00000044u,c->r[29]); // 800ADC18
  W32(c->r[1]+0x00000040u,c->r[28]); // 800ADC1C
  c->r[29]=c->r[3]|c->r[3]; // 800ADC20
  c->r[30]=0u+0x00000000u; // 800ADC24
  c->lr=0x800ADC2Cu; f_8007B524(c); // 800ADC28
  c->lr=0x800ADC30u; f_8023BC18(c); // 800ADC2C
  c->r[31]=c->r[3]|c->r[3]; // 800ADC30
  c->r[28]=0u+0x00000000u; // 800ADC34
  goto L_800ADC70; // 800ADC38
L_800ADC3C:;
  c->lr=0x800ADC40u; f_800F4430(c); // 800ADC3C
  c->r[3]=c->r[3]+0x00000218u; // 800ADC40
  c->r[4]=c->r[28]|c->r[28]; // 800ADC44
  c->r[5]=c->r[1]+0x00000008u; // 800ADC48
  c->lr=0x800ADC50u; f_801E6FFC(c); // 800ADC4C
  c->lr=0x800ADC54u; f_8006E268(c); // 800ADC50
  c->lr=0x800ADC58u; f_8006E250(c); // 800ADC54
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800ADC58
  cmpu(c,0,c->r[0],c->r[3]); // 800ADC5C
  if (!crb(c,2)) { goto L_800ADC6C; } // 800ADC60
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ADC64
  goto L_800ADC84; // 800ADC68
L_800ADC6C:;
  c->r[28]=c->r[28]+0x00000001u; // 800ADC6C
L_800ADC70:;
  c->lr=0x800ADC74u; f_800F4430(c); // 800ADC70
  c->r[3]=c->r[3]+0x00000218u; // 800ADC74
  c->lr=0x800ADC7Cu; f_801E7130(c); // 800ADC78
  cmpu(c,0,c->r[28],c->r[3]); // 800ADC7C
  if (crb(c,0)) { IRQCHK(c); goto L_800ADC3C; } // 800ADC80
L_800ADC84:;
  c->r[8]=0u+0x00000000u; // 800ADC84
  c->r[7]=c->r[29]|c->r[29]; // 800ADC88
  c->r[6]=0u+0x00000001u; // 800ADC8C
  c->r[3]=c->r[29]+0x00010000u; // 800ADC90
  goto L_800ADCD4; // 800ADC94
L_800ADC98:;
  c->r[5]=c->r[7]+0x00010000u; // 800ADC98
  c->r[0]=R32(c->r[5]+0xFFFF81B4u); // 800ADC9C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ADCA0
  c->r[4]=c->r[4]+0x00010000u; // 800ADCA4
  c->r[0]=c->r[4]+0xFFFF8260u; // 800ADCA8
  W32(c->r[29]+c->r[0],c->r[6]); // 800ADCAC
  c->r[4]=R16(c->r[31]+0x0000006Eu); // 800ADCB0
  c->r[0]=R32(c->r[5]+0xFFFF81B4u); // 800ADCB4
  c->r[0]=c->r[0]-c->r[30]; // 800ADCB8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800ADCBC
  c->r[0]=c->r[4]|c->r[0]; // 800ADCC0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800ADCC4
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 800ADCC8
  c->r[7]=c->r[7]+0x00000004u; // 800ADCCC
  c->r[8]=c->r[8]+0x00000001u; // 800ADCD0
L_800ADCD4:;
  c->r[0]=R32(c->r[3]+0xFFFF81B0u); // 800ADCD4
  cmpu(c,0,c->r[8],c->r[0]); // 800ADCD8
  if (crb(c,0)) { IRQCHK(c); goto L_800ADC98; } // 800ADCDC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800ADCE0
  c->r[30]=R32(c->r[1]+0x00000048u); // 800ADCE4
  c->r[29]=R32(c->r[1]+0x00000044u); // 800ADCE8
  c->r[28]=R32(c->r[1]+0x00000040u); // 800ADCEC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800ADCF0
  c->lr=c->r[0]; // 800ADCF4
  c->r[1]=c->r[1]+0x00000050u; // 800ADCF8
  return; // 800ADCFC
}

// fn_800ADD00
void f_800ADD00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADD00
  c->r[0]=c->lr; // 800ADD04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ADD08
  c->r[11]=c->r[1]+0x00000030u; // 800ADD0C
  c->lr=0x800ADD14u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ADD10
  c->r[31]=c->r[3]|c->r[3]; // 800ADD14
  c->r[29]=0u+0x00000000u; // 800ADD18
  c->r[3]=c->r[3]+0x00010000u; // 800ADD1C
  W32(c->r[3]+0xFFFF830Cu,c->r[29]); // 800ADD20
  c->lr=0x800ADD28u; f_8007B524(c); // 800ADD24
  c->lr=0x800ADD2Cu; f_8023BC18(c); // 800ADD28
  c->r[28]=c->r[3]|c->r[3]; // 800ADD2C
  c->r[3]=c->r[31]+0x00010000u; // 800ADD30
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800ADD34
  c->r[0]=rotl(c->r[0],0)&0x00001000u; // 800ADD38
  cmps(c,0,(int32_t)c->r[0],0); // 800ADD3C
  if (crb(c,2)) { goto L_800ADE50; } // 800ADD40
  W32(c->r[3]+0xFFFF83C4u,c->r[29]); // 800ADD44
  W32(c->r[3]+0xFFFF83C8u,c->r[29]); // 800ADD48
  W32(c->r[3]+0xFFFF83CCu,c->r[29]); // 800ADD4C
  W32(c->r[3]+0xFFFF83D0u,c->r[29]); // 800ADD50
  W32(c->r[3]+0xFFFF83D4u,c->r[29]); // 800ADD54
  c->r[4]=c->r[31]+0x00000014u; // 800ADD58
  c->r[3]=c->r[4]+0x00010000u; // 800ADD5C
  W32(c->r[3]+0xFFFF83C4u,c->r[29]); // 800ADD60
  W32(c->r[3]+0xFFFF83C8u,c->r[29]); // 800ADD64
  W32(c->r[3]+0xFFFF83CCu,c->r[29]); // 800ADD68
  W32(c->r[3]+0xFFFF83D0u,c->r[29]); // 800ADD6C
  W32(c->r[3]+0xFFFF83D4u,c->r[29]); // 800ADD70
  c->r[4]=c->r[4]+0x00000014u; // 800ADD74
  c->r[3]=c->r[4]+0x00010000u; // 800ADD78
  W32(c->r[3]+0xFFFF83C4u,c->r[29]); // 800ADD7C
  W32(c->r[3]+0xFFFF83C8u,c->r[29]); // 800ADD80
  W32(c->r[3]+0xFFFF83CCu,c->r[29]); // 800ADD84
  W32(c->r[3]+0xFFFF83D0u,c->r[29]); // 800ADD88
  W32(c->r[3]+0xFFFF83D4u,c->r[29]); // 800ADD8C
  c->r[4]=c->r[4]+0x00000014u; // 800ADD90
  c->r[3]=c->r[4]+0x00010000u; // 800ADD94
  W32(c->r[3]+0xFFFF83C4u,c->r[29]); // 800ADD98
  W32(c->r[3]+0xFFFF83C8u,c->r[29]); // 800ADD9C
  W32(c->r[3]+0xFFFF83CCu,c->r[29]); // 800ADDA0
  W32(c->r[3]+0xFFFF83D0u,c->r[29]); // 800ADDA4
  W32(c->r[3]+0xFFFF83D4u,c->r[29]); // 800ADDA8
  c->r[4]=c->r[4]+0x00000014u; // 800ADDAC
  c->r[3]=c->r[4]+0x00010000u; // 800ADDB0
  W32(c->r[3]+0xFFFF83C4u,c->r[29]); // 800ADDB4
  W32(c->r[3]+0xFFFF83C8u,c->r[29]); // 800ADDB8
  W32(c->r[3]+0xFFFF83CCu,c->r[29]); // 800ADDBC
  W32(c->r[3]+0xFFFF83D0u,c->r[29]); // 800ADDC0
  W32(c->r[3]+0xFFFF83D4u,c->r[29]); // 800ADDC4
  c->lr=0x800ADDCCu; f_8007B524(c); // 800ADDC8
  c->lr=0x800ADDD0u; f_8023BC10(c); // 800ADDCC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADDD0
  if (!crb(c,2)) { goto L_800ADE50; } // 800ADDD4
  c->r[25]=0u+0x00000000u; // 800ADDD8
  c->r[26]=0u+0x00000000u; // 800ADDDC
  c->r[27]=c->r[31]|c->r[31]; // 800ADDE0
  c->r[30]=0u+0x00000001u; // 800ADDE4
  goto L_800ADE3C; // 800ADDE8
L_800ADDEC:;
  c->lr=0x800ADDF0u; f_800F4430(c); // 800ADDEC
  c->r[3]=c->r[3]+0x00000438u; // 800ADDF0
  c->r[4]=c->r[26]|c->r[26]; // 800ADDF4
  c->lr=0x800ADDFCu; f_80213118(c); // 800ADDF8
  c->r[29]=c->r[3]|c->r[3]; // 800ADDFC
  c->lr=0x800ADE04u; f_8006E268(c); // 800ADE00
  c->lr=0x800ADE08u; f_8006E250(c); // 800ADE04
  c->r[0]=R32(c->r[29]+0x00000004u); // 800ADE08
  cmpu(c,0,c->r[0],c->r[3]); // 800ADE0C
  if (!crb(c,2)) { goto L_800ADE34; } // 800ADE10
  c->r[3]=R16(c->r[28]+0x0000006Cu); // 800ADE14
  c->r[0]=((c->r[25])&0x20)?0u:(c->r[30]<<((c->r[25])&31)); // 800ADE18
  c->r[0]=c->r[3]&c->r[0]; // 800ADE1C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADE20
  if (crb(c,2)) { goto L_800ADE30; } // 800ADE24
  c->r[3]=c->r[27]+0x00010000u; // 800ADE28
  W32(c->r[3]+0xFFFF83C4u,c->r[30]); // 800ADE2C
L_800ADE30:;
  c->r[25]=c->r[25]+0x00000001u; // 800ADE30
L_800ADE34:;
  c->r[27]=c->r[27]+0x00000004u; // 800ADE34
  c->r[26]=c->r[26]+0x00000001u; // 800ADE38
L_800ADE3C:;
  c->lr=0x800ADE40u; f_800F4430(c); // 800ADE3C
  c->r[3]=c->r[3]+0x00000438u; // 800ADE40
  c->lr=0x800ADE48u; f_8021311C(c); // 800ADE44
  cmpu(c,0,c->r[26],c->r[3]); // 800ADE48
  if (crb(c,0)) { IRQCHK(c); goto L_800ADDEC; } // 800ADE4C
L_800ADE50:;
  c->r[3]=c->r[31]|c->r[31]; // 800ADE50
  c->lr=0x800ADE58u; f_800AD350(c); // 800ADE54
  cmps(c,0,(int32_t)c->r[3],0); // 800ADE58
  if (crb(c,2)) { goto L_800ADE94; } // 800ADE5C
  c->lr=0x800ADE64u; f_800F4430(c); // 800ADE60
  c->r[3]=c->r[3]+0x00000438u; // 800ADE64
  c->r[4]=c->r[31]+0x00010000u; // 800ADE68
  c->r[4]=R32(c->r[4]+0xFFFF8310u); // 800ADE6C
  c->lr=0x800ADE74u; f_80213118(c); // 800ADE70
  c->r[4]=c->r[31]+0x00010000u; // 800ADE74
  W32(c->r[4]+0xFFFF830Cu,c->r[3]); // 800ADE78
  c->r[0]=R32(c->r[4]+0xFFFF8184u); // 800ADE7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800ADE80
  W32(c->r[4]+0xFFFF8184u,c->r[0]); // 800ADE84
  c->r[0]=c->r[0]|0x00000020u; // 800ADE88
  W32(c->r[4]+0xFFFF8184u,c->r[0]); // 800ADE8C
  goto L_800ADFA8; // 800ADE90
L_800ADE94:;
  c->r[0]=0u+0x00000000u; // 800ADE94
  c->r[30]=c->r[31]+0x00010000u; // 800ADE98
  W32(c->r[30]+0xFFFF8314u,c->r[0]); // 800ADE9C
  c->r[27]=0u+0x00000000u; // 800ADEA0
  c->r[28]=c->r[31]|c->r[31]; // 800ADEA4
  goto L_800ADF44; // 800ADEA8
L_800ADEAC:;
  c->lr=0x800ADEB0u; f_800F4430(c); // 800ADEAC
  c->r[3]=c->r[3]+0x00000438u; // 800ADEB0
  c->r[4]=c->r[27]|c->r[27]; // 800ADEB4
  c->lr=0x800ADEBCu; f_80213118(c); // 800ADEB8
  c->r[4]=R32(c->r[30]+0xFFFF8188u); // 800ADEBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ADEC0
  cmpu(c,0,c->r[4],c->r[0]); // 800ADEC4
  if (!crb(c,2)) { goto L_800ADF3C; } // 800ADEC8
  c->r[0]=R32(c->r[30]+0xFFFF818Cu); // 800ADECC
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800ADED0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800ADED4
  if (crb(c,1)) { goto L_800ADF3C; } // 800ADED8
  c->r[4]=R32(c->r[3]+0x00000010u); // 800ADEDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800ADEE0
  if (crb(c,0)) { goto L_800ADF3C; } // 800ADEE4
  c->r[3]=c->r[28]+0x00010000u; // 800ADEE8
  c->r[0]=R32(c->r[3]+0xFFFF83C4u); // 800ADEEC
  cmps(c,0,(int32_t)c->r[0],0); // 800ADEF0
  if (!crb(c,2)) { goto L_800ADF3C; } // 800ADEF4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800ADEF8
  if (!crb(c,2)) { goto L_800ADF1C; } // 800ADEFC
  W32(c->r[30]+0xFFFF8318u,c->r[27]); // 800ADF00
  c->r[0]=0u+0x00000001u; // 800ADF04
  W32(c->r[30]+0xFFFF8314u,c->r[0]); // 800ADF08
  c->r[0]=R32(c->r[30]+0xFFFF8184u); // 800ADF0C
  c->r[0]=c->r[0]|0x00000060u; // 800ADF10
  W32(c->r[30]+0xFFFF8184u,c->r[0]); // 800ADF14
  goto L_800ADF58; // 800ADF18
L_800ADF1C:;
  c->r[0]=R32(c->r[30]+0xFFFF8314u); // 800ADF1C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ADF20
  c->r[3]=c->r[3]+0x00010000u; // 800ADF24
  c->r[0]=c->r[3]+0xFFFF8318u; // 800ADF28
  W32(c->r[31]+c->r[0],c->r[27]); // 800ADF2C
  c->r[3]=R32(c->r[30]+0xFFFF8314u); // 800ADF30
  c->r[0]=c->r[3]+0x00000001u; // 800ADF34
  W32(c->r[30]+0xFFFF8314u,c->r[0]); // 800ADF38
L_800ADF3C:;
  c->r[28]=c->r[28]+0x00000004u; // 800ADF3C
  c->r[27]=c->r[27]+0x00000001u; // 800ADF40
L_800ADF44:;
  c->lr=0x800ADF48u; f_800F4430(c); // 800ADF44
  c->r[3]=c->r[3]+0x00000438u; // 800ADF48
  c->lr=0x800ADF50u; f_8021311C(c); // 800ADF4C
  cmpu(c,0,c->r[27],c->r[3]); // 800ADF50
  if (crb(c,0)) { IRQCHK(c); goto L_800ADEAC; } // 800ADF54
L_800ADF58:;
  c->r[3]=c->r[31]+0x00010000u; // 800ADF58
  c->r[0]=R32(c->r[3]+0xFFFF8314u); // 800ADF5C
  cmps(c,0,(int32_t)c->r[0],0); // 800ADF60
  if (crb(c,2)) { goto L_800ADFA8; } // 800ADF64
  c->lr=0x800ADF6Cu; f_8005C538(c); // 800ADF68
  c->r[5]=c->r[31]+0x00010000u; // 800ADF6C
  c->r[4]=R32(c->r[5]+0xFFFF8314u); // 800ADF70
  c->r[0]=divwu(c->r[3],c->r[4]); // 800ADF74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800ADF78
  c->r[0]=c->r[3]-c->r[0]; // 800ADF7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800ADF80
  c->r[30]=c->r[5]+c->r[0]; // 800ADF84
  c->lr=0x800ADF8Cu; f_800F4430(c); // 800ADF88
  c->r[3]=c->r[3]+0x00000438u; // 800ADF8C
  c->r[4]=R32(c->r[30]+0xFFFF8318u); // 800ADF90
  c->lr=0x800ADF98u; f_80213118(c); // 800ADF94
  c->r[4]=c->r[31]+0x00010000u; // 800ADF98
  W32(c->r[4]+0xFFFF830Cu,c->r[3]); // 800ADF9C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ADFA0
  W32(c->r[4]+0xFFFF8310u,c->r[0]); // 800ADFA4
L_800ADFA8:;
  c->r[3]=c->r[31]|c->r[31]; // 800ADFA8
  c->lr=0x800ADFB0u; f_800AD2B4(c); // 800ADFAC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADFB0
  if (crb(c,2)) { goto L_800AE09C; } // 800ADFB4
  c->r[4]=c->r[31]+0x00010000u; // 800ADFB8
  c->r[3]=R32(c->r[4]+0xFFFF830Cu); // 800ADFBC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800ADFC0
  W32(c->r[4]+0xFFFF818Cu,c->r[0]); // 800ADFC4
  c->r[0]=0u+0x0000001Du; // 800ADFC8
  W32(c->r[4]+0xFFFF8188u,c->r[0]); // 800ADFCC
  c->r[25]=0u+0x00000000u; // 800ADFD0
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ADFD4
  cmps(c,0,(int32_t)c->r[0],-1); // 800ADFD8
  if (crb(c,2)) { goto L_800AE074; } // 800ADFDC
  c->r[25]=0u+0x00000001u; // 800ADFE0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ADFE4
  cmps(c,0,(int32_t)c->r[0],-1); // 800ADFE8
  if (crb(c,2)) { goto L_800AE074; } // 800ADFEC
  c->r[25]=0u+0x00000002u; // 800ADFF0
  c->r[0]=R32(c->r[3]+0x00000020u); // 800ADFF4
  cmps(c,0,(int32_t)c->r[0],-1); // 800ADFF8
  if (crb(c,2)) { goto L_800AE074; } // 800ADFFC
  c->r[25]=0u+0x00000003u; // 800AE000
  c->r[0]=R32(c->r[3]+0x00000024u); // 800AE004
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE008
  if (crb(c,2)) { goto L_800AE074; } // 800AE00C
  c->r[25]=0u+0x00000004u; // 800AE010
  c->r[0]=R32(c->r[3]+0x00000028u); // 800AE014
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE018
  if (crb(c,2)) { goto L_800AE074; } // 800AE01C
  c->r[25]=0u+0x00000005u; // 800AE020
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800AE024
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE028
  if (crb(c,2)) { goto L_800AE074; } // 800AE02C
  c->r[25]=0u+0x00000006u; // 800AE030
  c->r[0]=R32(c->r[3]+0x00000030u); // 800AE034
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE038
  if (crb(c,2)) { goto L_800AE074; } // 800AE03C
  c->r[25]=0u+0x00000007u; // 800AE040
  c->r[0]=R32(c->r[3]+0x00000034u); // 800AE044
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE048
  if (crb(c,2)) { goto L_800AE074; } // 800AE04C
  c->r[25]=0u+0x00000008u; // 800AE050
  c->r[0]=R32(c->r[3]+0x00000038u); // 800AE054
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE058
  if (crb(c,2)) { goto L_800AE074; } // 800AE05C
  c->r[25]=0u+0x00000009u; // 800AE060
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800AE064
  cmps(c,0,(int32_t)c->r[0],-1); // 800AE068
  if (crb(c,2)) { goto L_800AE074; } // 800AE06C
  c->r[25]=0u+0x0000000Au; // 800AE070
L_800AE074:;
  c->r[3]=c->r[31]+0x00010000u; // 800AE074
  c->r[3]=R32(c->r[3]+0xFFFF830Cu); // 800AE078
  c->r[3]=c->r[3]+0x00000040u; // 800AE07C
  c->r[4]=c->r[25]|c->r[25]; // 800AE080
  c->lr=0x800AE088u; f_8021C2B8(c); // 800AE084
  c->r[3]=c->r[31]+0x00010000u; // 800AE088
  c->r[3]=R32(c->r[3]+0xFFFF830Cu); // 800AE08C
  c->r[3]=c->r[3]+0x00000018u; // 800AE090
  c->r[4]=c->r[25]|c->r[25]; // 800AE094
  c->lr=0x800AE09Cu; f_8021C274(c); // 800AE098
L_800AE09C:;
  c->r[11]=c->r[1]+0x00000030u; // 800AE09C
  c->lr=0x800AE0A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AE0A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AE0A4
  c->lr=c->r[0]; // 800AE0A8
  c->r[1]=c->r[1]+0x00000030u; // 800AE0AC
  return; // 800AE0B0
}

// fn_800AE0B4
void f_800AE0B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE0B4
  c->r[0]=c->lr; // 800AE0B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AE0BC
  c->r[11]=c->r[1]+0x00000020u; // 800AE0C0
  c->lr=0x800AE0C8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AE0C4
  c->r[29]=c->r[3]|c->r[3]; // 800AE0C8
  c->r[30]=0u+0x00000000u; // 800AE0CC
  c->lr=0x800AE0D4u; f_8007B524(c); // 800AE0D0
  c->lr=0x800AE0D8u; f_8023BC18(c); // 800AE0D4
  c->r[31]=c->r[3]|c->r[3]; // 800AE0D8
  c->r[27]=0u+0x00000000u; // 800AE0DC
  goto L_800AE118; // 800AE0E0
L_800AE0E4:;
  c->lr=0x800AE0E8u; f_800F4430(c); // 800AE0E4
  c->r[3]=c->r[3]+0x00000438u; // 800AE0E8
  c->r[4]=c->r[27]|c->r[27]; // 800AE0EC
  c->lr=0x800AE0F4u; f_80213118(c); // 800AE0F0
  c->r[28]=c->r[3]|c->r[3]; // 800AE0F4
  c->lr=0x800AE0FCu; f_8006E268(c); // 800AE0F8
  c->lr=0x800AE100u; f_8006E250(c); // 800AE0FC
  c->r[0]=R32(c->r[28]+0x00000004u); // 800AE100
  cmpu(c,0,c->r[0],c->r[3]); // 800AE104
  if (!crb(c,2)) { goto L_800AE114; } // 800AE108
  c->r[30]=R32(c->r[28]+0x00000000u); // 800AE10C
  goto L_800AE12C; // 800AE110
L_800AE114:;
  c->r[27]=c->r[27]+0x00000001u; // 800AE114
L_800AE118:;
  c->lr=0x800AE11Cu; f_800F4430(c); // 800AE118
  c->r[3]=c->r[3]+0x00000438u; // 800AE11C
  c->lr=0x800AE124u; f_8021311C(c); // 800AE120
  cmpu(c,0,c->r[27],c->r[3]); // 800AE124
  if (crb(c,0)) { IRQCHK(c); goto L_800AE0E4; } // 800AE128
L_800AE12C:;
  c->r[8]=0u+0x00000000u; // 800AE12C
  c->r[7]=c->r[29]|c->r[29]; // 800AE130
  c->r[6]=0u+0x00000001u; // 800AE134
  c->r[3]=c->r[29]+0x00010000u; // 800AE138
  goto L_800AE17C; // 800AE13C
L_800AE140:;
  c->r[5]=c->r[7]+0x00010000u; // 800AE140
  c->r[0]=R32(c->r[5]+0xFFFF8318u); // 800AE144
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AE148
  c->r[4]=c->r[4]+0x00010000u; // 800AE14C
  c->r[0]=c->r[4]+0xFFFF83C4u; // 800AE150
  W32(c->r[29]+c->r[0],c->r[6]); // 800AE154
  c->r[4]=R16(c->r[31]+0x0000006Cu); // 800AE158
  c->r[0]=R32(c->r[5]+0xFFFF8318u); // 800AE15C
  c->r[0]=c->r[0]-c->r[30]; // 800AE160
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800AE164
  c->r[0]=c->r[4]|c->r[0]; // 800AE168
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800AE16C
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 800AE170
  c->r[7]=c->r[7]+0x00000004u; // 800AE174
  c->r[8]=c->r[8]+0x00000001u; // 800AE178
L_800AE17C:;
  c->r[0]=R32(c->r[3]+0xFFFF8314u); // 800AE17C
  cmpu(c,0,c->r[8],c->r[0]); // 800AE180
  if (crb(c,0)) { IRQCHK(c); goto L_800AE140; } // 800AE184
  c->r[11]=c->r[1]+0x00000020u; // 800AE188
  c->lr=0x800AE190u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AE18C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AE190
  c->lr=c->r[0]; // 800AE194
  c->r[1]=c->r[1]+0x00000020u; // 800AE198
  return; // 800AE19C
}

// fn_800AE1A0
void f_800AE1A0(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 800AE1A0
  c->r[3]=c->r[3]+0x00010000u; // 800AE1A4
  W32(c->r[3]+0xFFFF8478u,c->r[5]); // 800AE1A8
  c->r[7]=0u+0x00000000u; // 800AE1AC
  c->r[6]=c->r[3]+0xFFFF847Cu; // 800AE1B0
  c->r[4]=0u+0x00000006u; // 800AE1B4
  c->r[3]=0u+0xFFFFFFFFu; // 800AE1B8
  c->r[0]=0u+0x00000004u; // 800AE1BC
  c->ctr=c->r[0]; // 800AE1C0
L_800AE1C4:;
  W32(c->r[6]+0x00000000u,c->r[7]); // 800AE1C4
  W32(c->r[6]+0x00000004u,c->r[4]); // 800AE1C8
  W32(c->r[6]+0x00000008u,c->r[5]); // 800AE1CC
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 800AE1D0
  W32(c->r[6]+0x00000010u,c->r[3]); // 800AE1D4
  c->r[0]=c->r[7]+0x00000001u; // 800AE1D8
  W32(c->r[6]+0x00000014u,c->r[0]); // 800AE1DC
  W32(c->r[6]+0x00000018u,c->r[4]); // 800AE1E0
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 800AE1E4
  W32(c->r[6]+0x00000020u,c->r[3]); // 800AE1E8
  W32(c->r[6]+0x00000024u,c->r[3]); // 800AE1EC
  c->r[0]=c->r[7]+0x00000002u; // 800AE1F0
  W32(c->r[6]+0x00000028u,c->r[0]); // 800AE1F4
  W32(c->r[6]+0x0000002Cu,c->r[4]); // 800AE1F8
  W32(c->r[6]+0x00000030u,c->r[5]); // 800AE1FC
  W32(c->r[6]+0x00000034u,c->r[3]); // 800AE200
  W32(c->r[6]+0x00000038u,c->r[3]); // 800AE204
  c->r[0]=c->r[7]+0x00000003u; // 800AE208
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 800AE20C
  W32(c->r[6]+0x00000040u,c->r[4]); // 800AE210
  W32(c->r[6]+0x00000044u,c->r[5]); // 800AE214
  W32(c->r[6]+0x00000048u,c->r[3]); // 800AE218
  W32(c->r[6]+0x0000004Cu,c->r[3]); // 800AE21C
  c->r[0]=c->r[7]+0x00000004u; // 800AE220
  W32(c->r[6]+0x00000050u,c->r[0]); // 800AE224
  W32(c->r[6]+0x00000054u,c->r[4]); // 800AE228
  W32(c->r[6]+0x00000058u,c->r[5]); // 800AE22C
  W32(c->r[6]+0x0000005Cu,c->r[3]); // 800AE230
  W32(c->r[6]+0x00000060u,c->r[3]); // 800AE234
  c->r[0]=c->r[7]+0x00000005u; // 800AE238
  W32(c->r[6]+0x00000064u,c->r[0]); // 800AE23C
  W32(c->r[6]+0x00000068u,c->r[4]); // 800AE240
  W32(c->r[6]+0x0000006Cu,c->r[5]); // 800AE244
  W32(c->r[6]+0x00000070u,c->r[3]); // 800AE248
  W32(c->r[6]+0x00000074u,c->r[3]); // 800AE24C
  c->r[0]=c->r[7]+0x00000006u; // 800AE250
  W32(c->r[6]+0x00000078u,c->r[0]); // 800AE254
  W32(c->r[6]+0x0000007Cu,c->r[4]); // 800AE258
  W32(c->r[6]+0x00000080u,c->r[5]); // 800AE25C
  W32(c->r[6]+0x00000084u,c->r[3]); // 800AE260
  W32(c->r[6]+0x00000088u,c->r[3]); // 800AE264
  c->r[0]=c->r[7]+0x00000007u; // 800AE268
  W32(c->r[6]+0x0000008Cu,c->r[0]); // 800AE26C
  W32(c->r[6]+0x00000090u,c->r[4]); // 800AE270
  W32(c->r[6]+0x00000094u,c->r[5]); // 800AE274
  W32(c->r[6]+0x00000098u,c->r[3]); // 800AE278
  W32(c->r[6]+0x0000009Cu,c->r[3]); // 800AE27C
  c->r[6]=c->r[6]+0x000000A0u; // 800AE280
  c->r[7]=c->r[7]+0x00000008u; // 800AE284
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE1C4; } // 800AE288
  return; // 800AE28C
}

// fn_800AE290
void f_800AE290(Ctx* __restrict c) {
  c->r[8]=c->r[3]+0x00010000u; // 800AE290
  c->r[0]=R32(c->r[8]+0xFFFF8478u); // 800AE294
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800AE298
  c->r[7]=c->r[8]+c->r[0]; // 800AE29C
  W32(c->r[7]+0xFFFF8480u,c->r[4]); // 800AE2A0
  W32(c->r[7]+0xFFFF8484u,c->r[5]); // 800AE2A4
  c->r[0]=R32(c->r[6]+0x00000000u); // 800AE2A8
  W32(c->r[7]+0xFFFF8488u,c->r[0]); // 800AE2AC
  c->r[0]=R32(c->r[6]+0x00000004u); // 800AE2B0
  W32(c->r[7]+0xFFFF848Cu,c->r[0]); // 800AE2B4
  c->r[3]=R32(c->r[8]+0xFFFF8478u); // 800AE2B8
  c->r[0]=c->r[3]+0x00000001u; // 800AE2BC
  W32(c->r[8]+0xFFFF8478u,c->r[0]); // 800AE2C0
  c->r[3]=R32(c->r[7]+0xFFFF847Cu); // 800AE2C4
  return; // 800AE2C8
}

// fn_800AE2CC
void f_800AE2CC(Ctx* __restrict c) {
  c->r[0]=c->r[4]|c->r[4]; // 800AE2CC
  c->r[6]=c->r[5]|c->r[5]; // 800AE2D0
  c->r[4]=0u+0x00000000u; // 800AE2D4
  c->r[5]=c->r[0]|c->r[0]; // 800AE2D8
  f_800AE290(c); return; // 800AE2DC
}

// fn_800AE2E0
void f_800AE2E0(Ctx* __restrict c) {
  c->r[0]=c->r[4]|c->r[4]; // 800AE2E0
  c->r[6]=c->r[5]|c->r[5]; // 800AE2E4
  c->r[4]=0u+0x00000001u; // 800AE2E8
  c->r[5]=c->r[0]|c->r[0]; // 800AE2EC
  f_800AE290(c); return; // 800AE2F0
}

// fn_800AE2F4
void f_800AE2F4(Ctx* __restrict c) {
  c->r[6]=c->r[4]|c->r[4]; // 800AE2F4
  c->r[4]=0u+0x00000002u; // 800AE2F8
  c->r[5]=0u+0x00000000u; // 800AE2FC
  f_800AE290(c); return; // 800AE300
}

// fn_800AE304
void f_800AE304(Ctx* __restrict c) {
  c->r[6]=c->r[4]|c->r[4]; // 800AE304
  c->r[4]=0u+0x00000005u; // 800AE308
  c->r[5]=0u+0x00000000u; // 800AE30C
  f_800AE290(c); return; // 800AE310
}

// fn_800AE314
void f_800AE314(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE314
  c->r[0]=c->lr; // 800AE318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE31C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE320
  c->r[3]=c->r[3]+0x00010000u; // 800AE324
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 800AE328
  c->r[31]=c->r[3]+c->r[0]; // 800AE32C
  c->r[0]=R32(c->r[31]+0xFFFF8480u); // 800AE330
  cmps(c,0,(int32_t)c->r[0],3); // 800AE334
  if (crb(c,2)) { goto L_800AE3A0; } // 800AE338
  if (!crb(c,0)) { goto L_800AE358; } // 800AE33C
  cmps(c,0,(int32_t)c->r[0],1); // 800AE340
  if (crb(c,2)) { goto L_800AE37C; } // 800AE344
  if (!crb(c,0)) { goto L_800AE390; } // 800AE348
  cmps(c,0,(int32_t)c->r[0],0); // 800AE34C
  if (!crb(c,0)) { goto L_800AE368; } // 800AE350
  goto L_800AE3CC; // 800AE354
L_800AE358:;
  cmps(c,0,(int32_t)c->r[0],5); // 800AE358
  if (crb(c,2)) { goto L_800AE3C0; } // 800AE35C
  if (!crb(c,0)) { goto L_800AE3CC; } // 800AE360
  goto L_800AE3B0; // 800AE364
L_800AE368:;
  c->lr=0x800AE36Cu; f_8007B524(c); // 800AE368
  c->r[4]=R32(c->r[31]+0xFFFF8484u); // 800AE36C
  c->r[5]=c->r[31]+0xFFFF8488u; // 800AE370
  c->lr=0x800AE378u; f_800A15DC(c); // 800AE374
  goto L_800AE3CC; // 800AE378
L_800AE37C:;
  c->lr=0x800AE380u; f_8007B524(c); // 800AE37C
  c->r[4]=R32(c->r[31]+0xFFFF8484u); // 800AE380
  c->r[5]=c->r[31]+0xFFFF8488u; // 800AE384
  c->lr=0x800AE38Cu; f_800A1644(c); // 800AE388
  goto L_800AE3CC; // 800AE38C
L_800AE390:;
  c->lr=0x800AE394u; f_8007B524(c); // 800AE390
  c->r[4]=c->r[31]+0xFFFF8488u; // 800AE394
  c->lr=0x800AE39Cu; f_800A176C(c); // 800AE398
  goto L_800AE3CC; // 800AE39C
L_800AE3A0:;
  c->lr=0x800AE3A4u; f_8007B524(c); // 800AE3A0
  c->r[4]=c->r[31]+0xFFFF8488u; // 800AE3A4
  c->lr=0x800AE3ACu; f_800A17B0(c); // 800AE3A8
  goto L_800AE3CC; // 800AE3AC
L_800AE3B0:;
  c->lr=0x800AE3B4u; f_8007B524(c); // 800AE3B0
  c->r[4]=c->r[31]+0xFFFF8488u; // 800AE3B4
  c->lr=0x800AE3BCu; f_800A17F4(c); // 800AE3B8
  goto L_800AE3CC; // 800AE3BC
L_800AE3C0:;
  c->lr=0x800AE3C4u; f_8007B524(c); // 800AE3C0
  c->r[4]=c->r[31]+0xFFFF8488u; // 800AE3C4
  c->lr=0x800AE3CCu; f_800A1730(c); // 800AE3C8
L_800AE3CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE3CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE3D0
  c->lr=c->r[0]; // 800AE3D4
  c->r[1]=c->r[1]+0x00000010u; // 800AE3D8
  return; // 800AE3DC
}

// fn_800AE3E0
void f_800AE3E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE3E0
  c->r[0]=c->lr; // 800AE3E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AE3E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AE3EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AE3F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AE3F4
  c->r[29]=c->r[3]|c->r[3]; // 800AE3F8
  c->r[30]=0u+0x00000000u; // 800AE3FC
  c->r[31]=c->r[3]+0x00010000u; // 800AE400
  goto L_800AE418; // 800AE404
L_800AE408:;
  c->r[3]=c->r[29]|c->r[29]; // 800AE408
  c->r[4]=c->r[30]|c->r[30]; // 800AE40C
  c->lr=0x800AE414u; f_800AE314(c); // 800AE410
  c->r[30]=c->r[30]+0x00000001u; // 800AE414
L_800AE418:;
  c->r[0]=R32(c->r[31]+0xFFFF8478u); // 800AE418
  cmpu(c,0,c->r[30],c->r[0]); // 800AE41C
  if (crb(c,0)) { IRQCHK(c); goto L_800AE408; } // 800AE420
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AE424
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AE428
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AE42C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AE430
  c->lr=c->r[0]; // 800AE434
  c->r[1]=c->r[1]+0x00000020u; // 800AE438
  return; // 800AE43C
}

// fn_800AE440
void f_800AE440(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AE440
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AE444
  c->r[0]=c->r[0]|0x00000800u; // 800AE448
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 800AE44C
  return; // 800AE450
}

// fn_800AE454
void f_800AE454(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AE454
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AE458
  c->r[0]=rotl(c->r[0],0)&0xFFFFF7FFu; // 800AE45C
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 800AE460
  return; // 800AE464
}

// fn_800AE468
void f_800AE468(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AE468
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AE46C
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 800AE470
  c->r[0]=0u-c->r[3]; // 800AE474
  c->r[0]=c->r[0]|c->r[3]; // 800AE478
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800AE47C
  return; // 800AE480
}

// fn_800AE484
void f_800AE484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE484
  c->r[0]=c->lr; // 800AE488
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE48C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE490
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AE494
  c->r[30]=c->r[4]|c->r[4]; // 800AE498
  c->r[31]=0u+0x00000000u; // 800AE49C
  goto L_800AE4D4; // 800AE4A0
L_800AE4A4:;
  c->lr=0x800AE4A8u; f_800F4430(c); // 800AE4A4
  c->r[3]=c->r[3]+0x00000474u; // 800AE4A8
  c->r[4]=c->r[31]|c->r[31]; // 800AE4AC
  c->lr=0x800AE4B4u; f_8022C448(c); // 800AE4B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800AE4B4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800AE4B8
  if (crb(c,0)) { goto L_800AE4D0; } // 800AE4BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800AE4C0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800AE4C4
  if (crb(c,1)) { goto L_800AE4D0; } // 800AE4C8
  goto L_800AE4EC; // 800AE4CC
L_800AE4D0:;
  c->r[31]=c->r[31]+0x00000001u; // 800AE4D0
L_800AE4D4:;
  c->lr=0x800AE4D8u; f_800F4430(c); // 800AE4D4
  c->r[3]=c->r[3]+0x00000474u; // 800AE4D8
  c->lr=0x800AE4E0u; f_8022C44C(c); // 800AE4DC
  cmpu(c,0,c->r[31],c->r[3]); // 800AE4E0
  if (crb(c,0)) { IRQCHK(c); goto L_800AE4A4; } // 800AE4E4
  c->r[3]=0u+0x00000000u; // 800AE4E8
L_800AE4EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE4EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AE4F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE4F4
  c->lr=c->r[0]; // 800AE4F8
  c->r[1]=c->r[1]+0x00000010u; // 800AE4FC
  return; // 800AE500
}

// fn_800AE504
void f_800AE504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE504
  c->r[0]=c->lr; // 800AE508
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE50C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE510
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AE514
  c->r[30]=0u+0x00000000u; // 800AE518
  c->r[31]=0u+0x00000000u; // 800AE51C
  goto L_800AE548; // 800AE520
L_800AE524:;
  c->lr=0x800AE528u; f_800F4430(c); // 800AE524
  c->r[3]=c->r[3]+0x00000474u; // 800AE528
  c->r[4]=c->r[31]|c->r[31]; // 800AE52C
  c->lr=0x800AE534u; f_8022C448(c); // 800AE530
  c->r[0]=R32(c->r[3]+0x00000008u); // 800AE534
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800AE538
  if (!crb(c,0)) { goto L_800AE544; } // 800AE53C
  c->r[30]=c->r[0]|c->r[0]; // 800AE540
L_800AE544:;
  c->r[31]=c->r[31]+0x00000001u; // 800AE544
L_800AE548:;
  c->lr=0x800AE54Cu; f_800F4430(c); // 800AE548
  c->r[3]=c->r[3]+0x00000474u; // 800AE54C
  c->lr=0x800AE554u; f_8022C44C(c); // 800AE550
  cmpu(c,0,c->r[31],c->r[3]); // 800AE554
  if (crb(c,0)) { IRQCHK(c); goto L_800AE524; } // 800AE558
  c->r[3]=c->r[30]|c->r[30]; // 800AE55C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE560
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AE564
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE568
  c->lr=c->r[0]; // 800AE56C
  c->r[1]=c->r[1]+0x00000010u; // 800AE570
  return; // 800AE574
}

// fn_800AE578
void f_800AE578(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE578
  c->r[0]=c->lr; // 800AE57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE584
  c->r[31]=c->r[3]|c->r[3]; // 800AE588
  c->r[4]=0u+0x00000000u; // 800AE58C
  c->lr=0x800AE594u; f_800AD3B0(c); // 800AE590
  c->r[4]=c->r[31]+0x00010000u; // 800AE594
  W32(c->r[4]+0xFFFF8178u,c->r[3]); // 800AE598
  c->r[3]=c->r[31]|c->r[31]; // 800AE59C
  c->r[4]=0u+0x00000000u; // 800AE5A0
  c->r[5]=0u+0x00000001u; // 800AE5A4
  c->lr=0x800AE5ACu; f_800AE5F4(c); // 800AE5A8
  c->r[3]=c->r[31]+0x00010000u; // 800AE5AC
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 800AE5B0
  c->r[4]=c->r[3]+0x00000008u; // 800AE5B4
  c->lr=0x800AE5BCu; f_800593A0(c); // 800AE5B8
  c->r[3]=c->r[31]+0x00010000u; // 800AE5BC
  c->r[4]=R32(c->r[3]+0xFFFF8178u); // 800AE5C0
  c->r[3]=c->r[4]+0x00000010u; // 800AE5C4
  c->r[4]=c->r[4]+0x00000014u; // 800AE5C8
  c->lr=0x800AE5D0u; f_8005D48C(c); // 800AE5CC
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE5D0
  c->r[3]=c->r[31]+0x00010000u; // 800AE5D4
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 800AE5D8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AE5DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE5E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE5E4
  c->lr=c->r[0]; // 800AE5E8
  c->r[1]=c->r[1]+0x00000010u; // 800AE5EC
  return; // 800AE5F0
}

// fn_800AE5F4
void f_800AE5F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE5F4
  c->r[0]=c->lr; // 800AE5F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AE5FC
  c->r[11]=c->r[1]+0x00000040u; // 800AE600
  c->lr=0x800AE608u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AE604
  c->r[28]=c->r[3]|c->r[3]; // 800AE608
  c->r[25]=c->r[4]|c->r[4]; // 800AE60C
  c->r[29]=c->r[5]|c->r[5]; // 800AE610
  c->lr=0x800AE618u; f_800AD2B4(c); // 800AE614
  cmps(c,0,(int32_t)c->r[3],0); // 800AE618
  if (!crb(c,2)) { goto L_800AE798; } // 800AE61C
  c->r[3]=c->r[28]|c->r[28]; // 800AE620
  c->lr=0x800AE628u; f_800AD120(c); // 800AE624
  cmps(c,0,(int32_t)c->r[3],0); // 800AE628
  if (!crb(c,2)) { goto L_800AE798; } // 800AE62C
  c->lr=0x800AE634u; f_8006E268(c); // 800AE630
  c->lr=0x800AE638u; f_8006E250(c); // 800AE634
  c->r[27]=c->r[3]|c->r[3]; // 800AE638
  c->lr=0x800AE640u; f_8006E268(c); // 800AE63C
  c->lr=0x800AE644u; f_8006E244(c); // 800AE640
  c->r[30]=c->r[3]|c->r[3]; // 800AE644
  c->r[26]=0u+0x00000000u; // 800AE648
  goto L_800AE784; // 800AE64C
L_800AE650:;
  c->lr=0x800AE654u; f_800F4430(c); // 800AE650
  c->r[3]=c->r[3]+0x000004B0u; // 800AE654
  c->r[4]=c->r[26]|c->r[26]; // 800AE658
  c->lr=0x800AE660u; f_80254080(c); // 800AE65C
  c->r[31]=c->r[3]|c->r[3]; // 800AE660
  c->r[0]=R32(c->r[3]+0x00000004u); // 800AE664
  cmpu(c,0,c->r[27],c->r[0]); // 800AE668
  if (!crb(c,2)) { goto L_800AE780; } // 800AE66C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800AE670
  cmpu(c,0,c->r[0],c->r[30]); // 800AE674
  if (crb(c,1)) { goto L_800AE780; } // 800AE678
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800AE67C
  cmpu(c,0,c->r[0],c->r[30]); // 800AE680
  if (crb(c,0)) { goto L_800AE780; } // 800AE684
  cmps(c,0,(int32_t)c->r[25],1); // 800AE688
  if (crb(c,2)) { goto L_800AE6A8; } // 800AE68C
  if (!crb(c,0)) { goto L_800AE6AC; } // 800AE690
  cmps(c,0,(int32_t)c->r[25],0); // 800AE694
  if (!crb(c,0)) { goto L_800AE6A0; } // 800AE698
  goto L_800AE6AC; // 800AE69C
L_800AE6A0:;
  c->r[30]=c->r[3]+0x00000010u; // 800AE6A0
  goto L_800AE6AC; // 800AE6A4
L_800AE6A8:;
  c->r[30]=c->r[3]+0x00000028u; // 800AE6A8
L_800AE6AC:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 800AE6AC
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[1]=RF64(ea);} // 800AE6B0
  c->r[0]=c->r[0]^0x80000000u; // 800AE6B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AE6B8
  c->r[5]=0u+0x43300000u; // 800AE6BC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800AE6C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800AE6C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800AE6C8
  c->r[4]=c->r[28]+0x00010000u; // 800AE6CC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE6D0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800AE6D4
  c->r[0]=R32(c->r[30]+0x00000014u); // 800AE6D8
  c->r[0]=c->r[0]^0x80000000u; // 800AE6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE6E0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800AE6E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800AE6E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800AE6EC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE6F0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AE6F4
  c->r[0]=R32(c->r[30]+0x00000000u); // 800AE6F8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800AE6FC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE700
  W8(c->r[3]+0x00000014u,c->r[0]); // 800AE704
  c->r[0]=R32(c->r[30]+0x00000004u); // 800AE708
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800AE70C
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE710
  W8(c->r[3]+0x00000015u,c->r[0]); // 800AE714
  c->r[0]=R32(c->r[30]+0x00000008u); // 800AE718
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800AE71C
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE720
  W8(c->r[3]+0x00000016u,c->r[0]); // 800AE724
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800AE728
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800AE72C
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE730
  W8(c->r[3]+0x00000017u,c->r[0]); // 800AE734
  cmps(c,0,(int32_t)c->r[29],0); // 800AE738
  if (crb(c,2)) { goto L_800AE760; } // 800AE73C
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE740
  c->r[4]=c->r[3]+0x00000008u; // 800AE744
  c->lr=0x800AE74Cu; f_800593A0(c); // 800AE748
  c->r[3]=c->r[28]+0x00010000u; // 800AE74C
  c->r[4]=R32(c->r[3]+0xFFFF8178u); // 800AE750
  c->r[3]=c->r[4]+0x00000010u; // 800AE754
  c->r[4]=c->r[4]+0x00000014u; // 800AE758
  c->lr=0x800AE760u; f_8005D48C(c); // 800AE75C
L_800AE760:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 800AE760
  cmps(c,0,(int32_t)c->r[0],0); // 800AE764
  if (crb(c,2)) { goto L_800AE80C; } // 800AE768
  c->r[3]=c->r[28]+0x00010000u; // 800AE76C
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AE770
  c->r[0]=c->r[0]|0x00004000u; // 800AE774
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 800AE778
  goto L_800AE80C; // 800AE77C
L_800AE780:;
  c->r[26]=c->r[26]+0x00000001u; // 800AE780
L_800AE784:;
  c->lr=0x800AE788u; f_800F4430(c); // 800AE784
  c->r[3]=c->r[3]+0x000004B0u; // 800AE788
  c->lr=0x800AE790u; f_80254084(c); // 800AE78C
  cmpu(c,0,c->r[26],c->r[3]); // 800AE790
  if (crb(c,0)) { IRQCHK(c); goto L_800AE650; } // 800AE794
L_800AE798:;
  {uint32_t ea=c->r[2]+0xFFFF869Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE798
  c->r[4]=c->r[28]+0x00010000u; // 800AE79C
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800AE7A4
  {uint32_t ea=c->r[2]+0xFFFF86A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE7A8
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7AC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AE7B0
  c->r[0]=0u+0x00000000u; // 800AE7B4
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7B8
  W8(c->r[3]+0x00000014u,c->r[0]); // 800AE7BC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7C0
  W8(c->r[3]+0x00000015u,c->r[0]); // 800AE7C4
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7C8
  W8(c->r[3]+0x00000016u,c->r[0]); // 800AE7CC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7D0
  W8(c->r[3]+0x00000017u,c->r[0]); // 800AE7D4
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE7D8
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AE7E0
  cmps(c,0,(int32_t)c->r[29],0); // 800AE7E4
  if (crb(c,2)) { goto L_800AE80C; } // 800AE7E8
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE7EC
  c->r[4]=c->r[3]+0x00000008u; // 800AE7F0
  c->lr=0x800AE7F8u; f_800593A0(c); // 800AE7F4
  c->r[3]=c->r[28]+0x00010000u; // 800AE7F8
  c->r[4]=R32(c->r[3]+0xFFFF8178u); // 800AE7FC
  c->r[3]=c->r[4]+0x00000010u; // 800AE800
  c->r[4]=c->r[4]+0x00000014u; // 800AE804
  c->lr=0x800AE80Cu; f_8005D48C(c); // 800AE808
L_800AE80C:;
  c->r[11]=c->r[1]+0x00000040u; // 800AE80C
  c->lr=0x800AE814u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AE810
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AE814
  c->lr=c->r[0]; // 800AE818
  c->r[1]=c->r[1]+0x00000040u; // 800AE81C
  return; // 800AE820
}

// fn_800AE824
void f_800AE824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE824
  c->r[0]=c->lr; // 800AE828
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AE82C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AE830
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AE834
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AE838
  c->r[29]=c->r[3]|c->r[3]; // 800AE83C
  c->r[30]=c->r[4]|c->r[4]; // 800AE840
  c->r[31]=c->r[5]|c->r[5]; // 800AE844
  c->r[3]=c->r[3]+0x00010000u; // 800AE848
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AE84C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 800AE850
  cmps(c,0,(int32_t)c->r[0],0); // 800AE854
  if (!crb(c,2)) { goto L_800AE8A0; } // 800AE858
  c->lr=0x800AE860u; f_8007B524(c); // 800AE85C
  c->lr=0x800AE864u; f_8006E224(c); // 800AE860
  c->lr=0x800AE868u; f_800897A8(c); // 800AE864
  c->r[4]=c->r[30]|c->r[30]; // 800AE868
  c->r[5]=0u+0x00000000u; // 800AE86C
  c->lr=0x800AE874u; f_80067B50(c); // 800AE870
  cmps(c,0,(int32_t)c->r[3],-1); // 800AE874
  if (!crb(c,2)) { goto L_800AE890; } // 800AE878
  c->r[3]=c->r[29]|c->r[29]; // 800AE87C
  c->r[4]=0u+0x00000000u; // 800AE880
  c->r[5]=c->r[31]|c->r[31]; // 800AE884
  c->lr=0x800AE88Cu; f_800AE5F4(c); // 800AE888
  goto L_800AE8A0; // 800AE88C
L_800AE890:;
  c->r[3]=c->r[29]|c->r[29]; // 800AE890
  c->r[4]=0u+0x00000001u; // 800AE894
  c->r[5]=c->r[31]|c->r[31]; // 800AE898
  c->lr=0x800AE8A0u; f_800AE5F4(c); // 800AE89C
L_800AE8A0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AE8A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AE8A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AE8A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AE8AC
  c->lr=c->r[0]; // 800AE8B0
  c->r[1]=c->r[1]+0x00000020u; // 800AE8B4
  return; // 800AE8B8
}

// fn_800AE8BC
void f_800AE8BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE8BC
  c->r[0]=c->lr; // 800AE8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE8C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE8C8
  c->r[31]=c->r[3]|c->r[3]; // 800AE8CC
  c->lr=0x800AE8D4u; f_8007B524(c); // 800AE8D0
  c->lr=0x800AE8D8u; f_800A105C(c); // 800AE8D4
  cmps(c,0,(int32_t)c->r[3],0); // 800AE8D8
  if (crb(c,2)) { goto L_800AE900; } // 800AE8DC
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE8E0
  c->r[4]=c->r[31]+0x00010000u; // 800AE8E4
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE8E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800AE8EC
  {uint32_t ea=c->r[2]+0xFFFF86B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE8F0
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE8F4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AE8F8
  goto L_800AE91C; // 800AE8FC
L_800AE900:;
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE900
  c->r[4]=c->r[31]+0x00010000u; // 800AE904
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE908
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800AE90C
  {uint32_t ea=c->r[2]+0xFFFF86BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE910
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE914
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AE918
L_800AE91C:;
  c->r[0]=0u+0x00000000u; // 800AE91C
  c->r[4]=c->r[31]+0x00010000u; // 800AE920
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE924
  W8(c->r[3]+0x00000014u,c->r[0]); // 800AE928
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE92C
  W8(c->r[3]+0x00000015u,c->r[0]); // 800AE930
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE934
  W8(c->r[3]+0x00000016u,c->r[0]); // 800AE938
  c->r[0]=0u+0x000000FFu; // 800AE93C
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE940
  W8(c->r[3]+0x00000017u,c->r[0]); // 800AE944
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE948
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE94C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AE950
  c->r[0]=R32(c->r[4]+0xFFFF8184u); // 800AE954
  c->r[0]=c->r[0]|0x00002000u; // 800AE958
  W32(c->r[4]+0xFFFF8184u,c->r[0]); // 800AE95C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE960
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE964
  c->lr=c->r[0]; // 800AE968
  c->r[1]=c->r[1]+0x00000010u; // 800AE96C
  return; // 800AE970
}

// fn_800AE974
void f_800AE974(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE974
  c->r[4]=c->r[3]+0x00010000u; // 800AE978
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE97C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800AE980
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE984
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE988
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AE98C
  c->r[0]=0u+0x00000000u; // 800AE990
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE994
  W8(c->r[3]+0x00000014u,c->r[0]); // 800AE998
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE99C
  W8(c->r[3]+0x00000015u,c->r[0]); // 800AE9A0
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9A4
  W8(c->r[3]+0x00000016u,c->r[0]); // 800AE9A8
  c->r[0]=0u+0x000000FFu; // 800AE9AC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9B0
  W8(c->r[3]+0x00000017u,c->r[0]); // 800AE9B4
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE9B8
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9BC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AE9C0
  return; // 800AE9C4
}

// fn_800AE9C8
void f_800AE9C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE9C8
  c->r[4]=c->r[3]+0x00010000u; // 800AE9CC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9D0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800AE9D4
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9D8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AE9DC
  c->r[0]=0u+0x00000000u; // 800AE9E0
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9E4
  W8(c->r[3]+0x00000014u,c->r[0]); // 800AE9E8
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9EC
  W8(c->r[3]+0x00000015u,c->r[0]); // 800AE9F0
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AE9F4
  W8(c->r[3]+0x00000016u,c->r[0]); // 800AE9F8
  c->r[0]=0u+0x000000FFu; // 800AE9FC
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AEA00
  W8(c->r[3]+0x00000017u,c->r[0]); // 800AEA04
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEA08
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 800AEA0C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AEA10
  return; // 800AEA14
}

// fn_800AEA18
void f_800AEA18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AEA18
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AEA1C
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800AEA20
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 800AEA24
  return; // 800AEA28
}

// fn_800AEA2C
void f_800AEA2C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800AEA2C
  c->r[3]=c->r[3]+0x00010000u; // 800AEA30
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 800AEA34
  W8(c->r[3]+0x00000017u,c->r[0]); // 800AEA38
  return; // 800AEA3C
}

// fn_800AEA40
void f_800AEA40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AEA40
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AEA44
  c->r[3]=rotl(c->r[0],0)&0x00010000u; // 800AEA48
  c->r[0]=0u-c->r[3]; // 800AEA4C
  c->r[0]=c->r[0]|c->r[3]; // 800AEA50
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800AEA54
  return; // 800AEA58
}

// fn_800AEA5C
void f_800AEA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEA5C
  c->r[0]=c->lr; // 800AEA60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AEA64
  c->r[11]=c->r[1]+0x00000020u; // 800AEA68
  c->lr=0x800AEA70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEA6C
  c->r[27]=0u+0x00000000u; // 800AEA70
  c->r[30]=c->r[3]+0x00010000u; // 800AEA74
  c->r[30]=c->r[30]+0xFFFF8700u; // 800AEA78
  c->r[3]=0u+0x80430000u; // 800AEA7C
  c->r[29]=c->r[3]+0xFFFFD3E8u; // 800AEA80
  c->r[3]=0u+0x80460000u; // 800AEA84
  c->r[28]=c->r[3]+0xFFFFFCCCu; // 800AEA88
  c->r[31]=0u+0x00000000u; // 800AEA8C
L_800AEA90:;
  c->lr=0x800AEA94u; f_8004A07C(c); // 800AEA90
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AEA94
  c->r[4]=c->r[4]+0x00000400u; // 800AEA98
  c->lr=0x800AEAA0u; f_80056AC0(c); // 800AEA9C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800AEAA0
  W32(c->r[30]+0x00000000u,c->r[31]); // 800AEAA4
  c->r[3]=c->r[30]|c->r[30]; // 800AEAA8
  c->r[4]=R32(c->r[30]+0x00000030u); // 800AEAAC
  c->r[5]=R32(c->r[29]+0x00000000u); // 800AEAB0
  c->r[6]=0u+0x00000020u; // 800AEAB4
  c->r[7]=R32(c->r[28]+0x00000000u); // 800AEAB8
  c->lr=0x800AEAC0u; f_800569F4(c); // 800AEABC
  c->r[30]=c->r[30]+0x00000034u; // 800AEAC0
  c->r[29]=c->r[29]+0x00000004u; // 800AEAC4
  c->r[28]=c->r[28]+0x00000004u; // 800AEAC8
  c->r[27]=c->r[27]+0x00000001u; // 800AEACC
  cmpu(c,0,c->r[27],0x0000000Fu); // 800AEAD0
  if (crb(c,0)) { IRQCHK(c); goto L_800AEA90; } // 800AEAD4
  c->r[11]=c->r[1]+0x00000020u; // 800AEAD8
  c->lr=0x800AEAE0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AEADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AEAE0
  c->lr=c->r[0]; // 800AEAE4
  c->r[1]=c->r[1]+0x00000020u; // 800AEAE8
  return; // 800AEAEC
}

// fn_800AEAF0
void f_800AEAF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AEAF0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 800AEAF4
  c->r[3]=c->r[3]+c->r[0]; // 800AEAF8
  c->r[3]=c->r[3]+0xFFFF8700u; // 800AEAFC
  return; // 800AEB00
}

// fn_800AEB04
void f_800AEB04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEB04
  c->r[0]=c->lr; // 800AEB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEB0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AEB10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AEB14
  c->r[30]=0u+0x00000000u; // 800AEB18
  c->r[31]=c->r[3]+0x00010000u; // 800AEB1C
  c->r[31]=c->r[31]+0xFFFF8700u; // 800AEB20
L_800AEB24:;
  c->r[3]=c->r[31]|c->r[31]; // 800AEB24
  c->lr=0x800AEB2Cu; f_80056A84(c); // 800AEB28
  c->lr=0x800AEB30u; f_8004A07C(c); // 800AEB2C
  c->r[4]=R32(c->r[31]+0x00000030u); // 800AEB30
  c->lr=0x800AEB38u; f_80056B0C(c); // 800AEB34
  c->r[31]=c->r[31]+0x00000034u; // 800AEB38
  c->r[30]=c->r[30]+0x00000001u; // 800AEB3C
  cmpu(c,0,c->r[30],0x0000000Fu); // 800AEB40
  if (crb(c,0)) { IRQCHK(c); goto L_800AEB24; } // 800AEB44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AEB48
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AEB4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AEB50
  c->lr=c->r[0]; // 800AEB54
  c->r[1]=c->r[1]+0x00000010u; // 800AEB58
  return; // 800AEB5C
}

// fn_800AEB60
void f_800AEB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEB60
  c->r[0]=c->lr; // 800AEB64
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AEB68
  c->r[5]=c->r[3]+0x00010000u; // 800AEB6C
  c->r[0]=R32(c->r[5]+0xFFFF8184u); // 800AEB70
  c->r[0]=rotl(c->r[0],0)&0x00020000u; // 800AEB74
  cmps(c,0,(int32_t)c->r[0],0); // 800AEB78
  if (crb(c,2)) { goto L_800AEBB0; } // 800AEB7C
  c->r[3]=c->r[1]+0x00000008u; // 800AEB80
  c->r[4]=0u+0x80460000u; // 800AEB84
  c->r[4]=c->r[4]+0xFFFFFD14u; // 800AEB88
  c->r[5]=R32(c->r[5]+0xFFFF817Cu); // 800AEB8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AEB90
  c->lr=0x800AEB98u; f_802E7CC4(c); // 800AEB94
  c->r[3]=c->r[1]+0x00000008u; // 800AEB98
  {uint32_t ea=c->r[2]+0xFFFF86CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEB9C
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEBA0
  c->r[4]=0u+0x00000000u; // 800AEBA4
  c->r[5]=0u+0x00000003u; // 800AEBA8
  c->lr=0x800AEBB0u; f_80061368(c); // 800AEBAC
L_800AEBB0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AEBB0
  c->lr=c->r[0]; // 800AEBB4
  c->r[1]=c->r[1]+0x00000030u; // 800AEBB8
  return; // 800AEBBC
}

// fn_800AEBC0
void f_800AEBC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEBC0
  c->r[0]=c->lr; // 800AEBC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEBC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AEBCC
  c->r[31]=c->r[3]|c->r[3]; // 800AEBD0
  c->lr=0x800AEBD8u; f_80078B74(c); // 800AEBD4
  c->r[3]=0u+0x80460000u; // 800AEBD8
  c->r[0]=c->r[3]+0xFFFFFDF4u; // 800AEBDC
  W32(c->r[31]+0x00000058u,c->r[0]); // 800AEBE0
  c->r[3]=c->r[31]+0x00000720u; // 800AEBE4
  c->r[4]=0u+0x80070000u; // 800AEBE8
  c->r[4]=c->r[4]+0x00006954u; // 800AEBEC
  c->r[5]=0u+0x80070000u; // 800AEBF0
  c->r[5]=c->r[5]+0x000069DCu; // 800AEBF4
  c->r[6]=0u+0x0000006Cu; // 800AEBF8
  c->r[7]=0u+0x00000006u; // 800AEBFC
  c->lr=0x800AEC04u; f_802F07B0(c); // 800AEC00
  c->r[3]=c->r[31]+0x00000B64u; // 800AEC04
  c->lr=0x800AEC0Cu; f_80076954(c); // 800AEC08
  c->r[3]=c->r[31]+0x00000C08u; // 800AEC0C
  c->lr=0x800AEC14u; f_800551A8(c); // 800AEC10
  c->r[0]=0u+0x00000000u; // 800AEC14
  W32(c->r[31]+0x000009C0u,c->r[0]); // 800AEC18
  W32(c->r[31]+0x000009C4u,c->r[0]); // 800AEC1C
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800AEC20
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800AEC24
  W32(c->r[31]+0x00000C00u,c->r[0]); // 800AEC28
  W32(c->r[31]+0x00000C04u,c->r[0]); // 800AEC2C
  c->r[0]=0u+0xFFFFFFFFu; // 800AEC30
  W32(c->r[31]+0x00000BF0u,c->r[0]); // 800AEC34
  W32(c->r[31]+0x00000BF4u,c->r[0]); // 800AEC38
  c->r[0]=0u+0x00000001u; // 800AEC3C
  W32(c->r[31]+0x00000BD8u,c->r[0]); // 800AEC40
  W32(c->r[31]+0x00000BDCu,c->r[0]); // 800AEC44
  W32(c->r[31]+0x00000BE0u,c->r[0]); // 800AEC48
  W32(c->r[31]+0x00000BE4u,c->r[0]); // 800AEC4C
  W32(c->r[31]+0x00000BE8u,c->r[0]); // 800AEC50
  W32(c->r[31]+0x00000BECu,c->r[0]); // 800AEC54
  c->r[3]=c->r[31]|c->r[31]; // 800AEC58
  c->r[4]=0u+0x00000000u; // 800AEC5C
  c->r[5]=0u+0x000000FFu; // 800AEC60
  c->r[12]=R32(c->r[3]+0x00000058u); // 800AEC64
  c->r[12]=R32(c->r[12]+0x00000010u); // 800AEC68
  c->ctr=c->r[12]; // 800AEC6C
  if (true) { c->lr=0x800AEC74u; dispatch(c,c->ctr); } // 800AEC70
  c->r[3]=c->r[31]|c->r[31]; // 800AEC74
  c->r[4]=0u+0x00000000u; // 800AEC78
  c->lr=0x800AEC80u; f_800AFF14(c); // 800AEC7C
  c->r[3]=c->r[31]|c->r[31]; // 800AEC80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AEC84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AEC88
  c->lr=c->r[0]; // 800AEC8C
  c->r[1]=c->r[1]+0x00000010u; // 800AEC90
  return; // 800AEC94
}

// fn_800AEC98
void f_800AEC98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEC98
  c->r[0]=c->lr; // 800AEC9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AECA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AECA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AECA8
  c->r[30]=c->r[3]|c->r[3]; // 800AECAC
  c->r[31]=c->r[4]|c->r[4]; // 800AECB0
  cmps(c,0,(int32_t)c->r[3],0); // 800AECB4
  if (crb(c,2)) { goto L_800AED0C; } // 800AECB8
  c->r[3]=c->r[3]+0x00000C08u; // 800AECBC
  c->r[4]=0u+0xFFFFFFFFu; // 800AECC0
  c->lr=0x800AECC8u; f_800551E4(c); // 800AECC4
  c->r[3]=c->r[30]+0x00000B64u; // 800AECC8
  c->r[4]=0u+0xFFFFFFFFu; // 800AECCC
  c->lr=0x800AECD4u; f_800769DC(c); // 800AECD0
  c->r[3]=c->r[30]+0x00000720u; // 800AECD4
  c->r[4]=0u+0x80070000u; // 800AECD8
  c->r[4]=c->r[4]+0x000069DCu; // 800AECDC
  c->r[5]=0u+0x0000006Cu; // 800AECE0
  c->r[6]=0u+0x00000006u; // 800AECE4
  c->lr=0x800AECECu; f_802F08A8(c); // 800AECE8
  c->r[3]=c->r[30]|c->r[30]; // 800AECEC
  c->r[4]=0u+0x00000000u; // 800AECF0
  c->lr=0x800AECF8u; f_80078BF0(c); // 800AECF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800AECF8
  cmps(c,0,(int32_t)c->r[0],0); // 800AECFC
  if (!crb(c,1)) { goto L_800AED0C; } // 800AED00
  c->r[3]=c->r[30]|c->r[30]; // 800AED04
  c->lr=0x800AED0Cu; f_80047B20(c); // 800AED08
L_800AED0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800AED0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AED10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AED14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AED18
  c->lr=c->r[0]; // 800AED1C
  c->r[1]=c->r[1]+0x00000010u; // 800AED20
  return; // 800AED24
}

// fn_800AED28
void f_800AED28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AED28
  c->r[0]=c->lr; // 800AED2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AED30
  c->r[0]=R32(c->r[3]+0x000000B0u); // 800AED34
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800AED38
  c->r[4]=0u+0x80430000u; // 800AED3C
  c->r[0]=c->r[4]+0xFFFFD424u; // 800AED40
  c->r[12]=c->r[0]+c->r[5]; // 800AED44
  c->lr=0x800AED4Cu; f_802F09D0(c); // 800AED48
  c->r[0]=c->r[0]|0x00000000u; // 800AED4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AED50
  c->lr=c->r[0]; // 800AED54
  c->r[1]=c->r[1]+0x00000010u; // 800AED58
  return; // 800AED5C
}

// fn_800AED60
void f_800AED60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AED60
  c->r[0]=c->lr; // 800AED64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AED68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AED6C
  c->r[31]=c->r[3]|c->r[3]; // 800AED70
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800AED74
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800AED78
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800AED7C
  c->lr=0x800AED84u; f_8007B524(c); // 800AED80
  c->lr=0x800AED88u; f_800A1D00(c); // 800AED84
  cmps(c,0,(int32_t)c->r[3],0); // 800AED88
  if (crb(c,2)) { goto L_800AEDA0; } // 800AED8C
  c->r[3]=c->r[31]|c->r[31]; // 800AED90
  c->r[4]=0u+0x00000001u; // 800AED94
  c->lr=0x800AED9Cu; f_800AFF14(c); // 800AED98
  goto L_800AEDAC; // 800AED9C
L_800AEDA0:;
  c->r[3]=c->r[31]|c->r[31]; // 800AEDA0
  c->r[4]=0u+0x00000002u; // 800AEDA4
  c->lr=0x800AEDACu; f_800AFF14(c); // 800AEDA8
L_800AEDAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AEDAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AEDB0
  c->lr=c->r[0]; // 800AEDB4
  c->r[1]=c->r[1]+0x00000010u; // 800AEDB8
  return; // 800AEDBC
}

// fn_800AEDC0
void f_800AEDC0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800AEDC0
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800AEDC4
  c->r[0]=0u-c->r[3]; // 800AEDC8
  c->r[0]=c->r[0]|c->r[3]; // 800AEDCC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800AEDD0
  return; // 800AEDD4
}

// fn_800AEDD8
void f_800AEDD8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000004u; // 800AEDD8
  f_800AFF14(c); return; // 800AEDDC
}

// fn_800AEDE0
void f_800AEDE0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 800AEDE0
  return; // 800AEDE4
}

// fn_800AEDE8
void f_800AEDE8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000003u; // 800AEDE8
  f_800AFF14(c); return; // 800AEDEC
}

// fn_800AEDF0
void f_800AEDF0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800AEDF0
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 800AEDF4
  c->r[0]=0u-c->r[3]; // 800AEDF8
  c->r[0]=c->r[0]|c->r[3]; // 800AEDFC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800AEE00
  return; // 800AEE04
}

// fn_800AEE08
void f_800AEE08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEE08
  c->r[0]=c->lr; // 800AEE0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEE10
  c->lr=0x800AEE18u; f_8007B524(c); // 800AEE14
  c->lr=0x800AEE1Cu; f_8006E224(c); // 800AEE18
  c->lr=0x800AEE20u; f_800AEB60(c); // 800AEE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AEE20
  c->lr=c->r[0]; // 800AEE24
  c->r[1]=c->r[1]+0x00000010u; // 800AEE28
  return; // 800AEE2C
}

// fn_800AEE30
void f_800AEE30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEE30
  c->r[0]=c->lr; // 800AEE34
  W32(c->r[1]+0x00000074u,c->r[0]); // 800AEE38
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800AEE3C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800AEE40
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800AEE44
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800AEE48
  c->r[11]=c->r[1]+0x00000050u; // 800AEE4C
  c->lr=0x800AEE54u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEE50
  c->r[30]=c->r[3]|c->r[3]; // 800AEE54
  c->lr=0x800AEE5Cu; f_8007B524(c); // 800AEE58
  c->r[4]=0u+0x00000000u; // 800AEE5C
  c->lr=0x800AEE64u; f_8023BBB4(c); // 800AEE60
  cmps(c,0,(int32_t)c->r[3],1); // 800AEE64
  if (crb(c,2)) { goto L_800AEE94; } // 800AEE68
  if (!crb(c,0)) { goto L_800AEEA8; } // 800AEE6C
  cmps(c,0,(int32_t)c->r[3],0); // 800AEE70
  if (!crb(c,0)) { goto L_800AEE7C; } // 800AEE74
  goto L_800AEEA8; // 800AEE78
L_800AEE7C:;
  c->r[28]=0u+0x00000002u; // 800AEE7C
  c->r[29]=0u+0x00000001u; // 800AEE80
  c->r[27]=0u+0x00000008u; // 800AEE84
  c->r[26]=0u+0x00000004u; // 800AEE88
  c->r[31]=0u+0x00000100u; // 800AEE8C
  goto L_800AEEA8; // 800AEE90
L_800AEE94:;
  c->r[28]=0u+0x00000008u; // 800AEE94
  c->r[29]=0u+0x00000004u; // 800AEE98
  c->r[27]=0u+0x00000001u; // 800AEE9C
  c->r[26]=0u+0x00000002u; // 800AEEA0
  c->r[31]=0u+0x00000800u; // 800AEEA4
L_800AEEA8:;
  c->lr=0x800AEEACu; f_80047C90(c); // 800AEEA8
  c->r[4]=0u+0x00000000u; // 800AEEAC
  c->lr=0x800AEEB4u; f_80058EA4(c); // 800AEEB0
  c->r[4]=0u+0x00000200u; // 800AEEB4
  c->lr=0x800AEEBCu; f_80057B44(c); // 800AEEB8
  cmps(c,0,(int32_t)c->r[3],0); // 800AEEBC
  if (crb(c,2)) { goto L_800AEECC; } // 800AEEC0
  c->lr=0x800AEEC8u; f_80361BF4(c); // 800AEEC4
  W32(c->r[30]+0x000009C0u,c->r[4]); // 800AEEC8
L_800AEECC:;
  c->r[3]=c->r[1]+0x00000010u; // 800AEECC
  c->r[4]=c->r[13]+0xFFFF8708u; // 800AEED0
  c->r[5]=R32(c->r[30]+0x000009C0u); // 800AEED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AEED8
  c->lr=0x800AEEE0u; f_802E7CC4(c); // 800AEEDC
  c->lr=0x800AEEE4u; f_80047C90(c); // 800AEEE0
  c->r[4]=0u+0x00000000u; // 800AEEE4
  c->lr=0x800AEEECu; f_80058EA4(c); // 800AEEE8
  c->r[4]=c->r[27]|c->r[27]; // 800AEEEC
  c->lr=0x800AEEF4u; f_80057C1C(c); // 800AEEF0
  cmps(c,0,(int32_t)c->r[3],0); // 800AEEF4
  if (crb(c,2)) { goto L_800AEF08; } // 800AEEF8
  c->r[3]=R32(c->r[30]+0x000009C4u); // 800AEEFC
  c->r[0]=c->r[3]+0x00000001u; // 800AEF00
  W32(c->r[30]+0x000009C4u,c->r[0]); // 800AEF04
L_800AEF08:;
  c->lr=0x800AEF0Cu; f_80047C90(c); // 800AEF08
  c->r[4]=0u+0x00000000u; // 800AEF0C
  c->lr=0x800AEF14u; f_80058EA4(c); // 800AEF10
  c->r[4]=c->r[26]|c->r[26]; // 800AEF14
  c->lr=0x800AEF1Cu; f_80057C1C(c); // 800AEF18
  cmps(c,0,(int32_t)c->r[3],0); // 800AEF1C
  if (crb(c,2)) { goto L_800AEF30; } // 800AEF20
  c->r[3]=R32(c->r[30]+0x000009C4u); // 800AEF24
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AEF28
  W32(c->r[30]+0x000009C4u,c->r[0]); // 800AEF2C
L_800AEF30:;
  c->r[0]=R32(c->r[30]+0x000009C4u); // 800AEF30
  cmps(c,0,(int32_t)c->r[0],0); // 800AEF34
  if (!crb(c,0)) { goto L_800AEF44; } // 800AEF38
  c->r[0]=0u+0x00000007u; // 800AEF3C
  W32(c->r[30]+0x000009C4u,c->r[0]); // 800AEF40
L_800AEF44:;
  c->r[0]=R32(c->r[30]+0x000009C4u); // 800AEF44
  cmps(c,0,(int32_t)c->r[0],7); // 800AEF48
  if (!crb(c,1)) { goto L_800AEF58; } // 800AEF4C
  c->r[0]=0u+0x00000000u; // 800AEF50
  W32(c->r[30]+0x000009C4u,c->r[0]); // 800AEF54
L_800AEF58:;
  c->lr=0x800AEF5Cu; f_80047C90(c); // 800AEF58
  c->r[4]=0u+0x00000000u; // 800AEF5C
  c->lr=0x800AEF64u; f_80058EA4(c); // 800AEF60
  c->r[4]=c->r[28]|c->r[28]; // 800AEF64
  c->lr=0x800AEF6Cu; f_80057C1C(c); // 800AEF68
  cmps(c,0,(int32_t)c->r[3],0); // 800AEF6C
  if (crb(c,2)) { goto L_800AEF8C; } // 800AEF70
  c->r[0]=R32(c->r[30]+0x000009C4u); // 800AEF74
  c->r[5]=addc(c,~c->r[0],0x00000007u,1); // 800AEF78
  c->r[4]=c->r[1]+0x00000010u; // 800AEF7C
  c->r[3]=R8(c->r[4]+c->r[5]); // 800AEF80
  c->r[0]=c->r[3]+0x00000001u; // 800AEF84
  W8(c->r[4]+c->r[5],c->r[0]); // 800AEF88
L_800AEF8C:;
  c->lr=0x800AEF90u; f_80047C90(c); // 800AEF8C
  c->r[4]=0u+0x00000000u; // 800AEF90
  c->lr=0x800AEF98u; f_80058EA4(c); // 800AEF94
  c->r[4]=c->r[29]|c->r[29]; // 800AEF98
  c->lr=0x800AEFA0u; f_80057C1C(c); // 800AEF9C
  cmps(c,0,(int32_t)c->r[3],0); // 800AEFA0
  if (crb(c,2)) { goto L_800AEFC0; } // 800AEFA4
  c->r[0]=R32(c->r[30]+0x000009C4u); // 800AEFA8
  c->r[5]=addc(c,~c->r[0],0x00000007u,1); // 800AEFAC
  c->r[4]=c->r[1]+0x00000010u; // 800AEFB0
  c->r[3]=R8(c->r[4]+c->r[5]); // 800AEFB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AEFB8
  W8(c->r[4]+c->r[5],c->r[0]); // 800AEFBC
L_800AEFC0:;
  c->r[0]=R32(c->r[30]+0x000009C4u); // 800AEFC0
  c->r[3]=addc(c,~c->r[0],0x00000007u,1); // 800AEFC4
  c->r[4]=c->r[1]+0x00000010u; // 800AEFC8
  c->r[0]=R8(c->r[4]+c->r[3]); // 800AEFCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800AEFD0
  cmps(c,0,(int32_t)c->r[0],96); // 800AEFD4
  if (crb(c,2)) { goto L_800AF01C; } // 800AEFD8
  if (!crb(c,0)) { goto L_800AEFF8; } // 800AEFDC
  cmps(c,0,(int32_t)c->r[0],58); // 800AEFE0
  if (crb(c,2)) { goto L_800AF010; } // 800AEFE4
  if (!crb(c,0)) { goto L_800AF030; } // 800AEFE8
  cmps(c,0,(int32_t)c->r[0],47); // 800AEFEC
  if (crb(c,2)) { goto L_800AF004; } // 800AEFF0
  goto L_800AF030; // 800AEFF4
L_800AEFF8:;
  cmps(c,0,(int32_t)c->r[0],103); // 800AEFF8
  if (crb(c,2)) { goto L_800AF028; } // 800AEFFC
  goto L_800AF030; // 800AF000
L_800AF004:;
  c->r[0]=0u+0x00000066u; // 800AF004
  W8(c->r[4]+c->r[3],c->r[0]); // 800AF008
  goto L_800AF030; // 800AF00C
L_800AF010:;
  c->r[0]=0u+0x00000061u; // 800AF010
  W8(c->r[4]+c->r[3],c->r[0]); // 800AF014
  goto L_800AF030; // 800AF018
L_800AF01C:;
  c->r[0]=0u+0x00000039u; // 800AF01C
  W8(c->r[4]+c->r[3],c->r[0]); // 800AF020
  goto L_800AF030; // 800AF024
L_800AF028:;
  c->r[0]=0u+0x00000030u; // 800AF028
  W8(c->r[4]+c->r[3],c->r[0]); // 800AF02C
L_800AF030:;
  c->r[3]=c->r[1]+0x00000010u; // 800AF030
  c->r[4]=0u+0x00000000u; // 800AF034
  c->r[5]=0u+0x00000010u; // 800AF038
  c->lr=0x800AF040u; f_802EB794(c); // 800AF03C
  W32(c->r[30]+0x000009C0u,c->r[3]); // 800AF040
  c->r[3]=c->r[13]+0xFFFF8710u; // 800AF044
  {uint32_t ea=c->r[2]+0xFFFF86CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF048
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF04C
  c->r[4]=0u+0x00000000u; // 800AF050
  c->r[5]=0u+0x00000003u; // 800AF054
  c->lr=0x800AF05Cu; f_80061368(c); // 800AF058
  {uint32_t ea=c->r[2]+0xFFFF86D4u; c->f[30]=c->ps1[30]=RF32(ea);} // 800AF05C
  c->r[26]=0u+0x00000000u; // 800AF060
  c->r[28]=c->r[1]+0x00000010u; // 800AF064
  c->r[29]=0u+0x00000000u; // 800AF068
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800AF06C
  goto L_800AF0B8; // 800AF070
L_800AF074:;
  c->r[0]=R32(c->r[30]+0x000009C4u); // 800AF074
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 800AF078
  cmpu(c,0,c->r[26],c->r[0]); // 800AF07C
  c->r[4]=0u+0x00000000u; // 800AF080
  if (!crb(c,2)) { goto L_800AF08C; } // 800AF084
  c->r[4]=0u+0x00000006u; // 800AF088
L_800AF08C:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 800AF08C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800AF090
  W8(c->r[1]+0x00000009u,c->r[29]); // 800AF094
  c->r[3]=c->r[1]+0x00000008u; // 800AF098
  c->f[1]=c->f[30]; // 800AF09C
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF0A0
  c->r[5]=0u+0x00000003u; // 800AF0A4
  c->lr=0x800AF0ACu; f_80061368(c); // 800AF0A8
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[31]); // 800AF0AC
  c->r[28]=c->r[28]+0x00000001u; // 800AF0B0
  c->r[26]=c->r[26]+0x00000001u; // 800AF0B4
L_800AF0B8:;
  c->r[3]=c->r[1]+0x00000010u; // 800AF0B8
  c->lr=0x800AF0C0u; f_802F0250(c); // 800AF0BC
  cmpu(c,0,c->r[26],c->r[3]); // 800AF0C0
  if (crb(c,0)) { IRQCHK(c); goto L_800AF074; } // 800AF0C4
  c->lr=0x800AF0CCu; f_80047C90(c); // 800AF0C8
  c->r[4]=0u+0x00000000u; // 800AF0CC
  c->lr=0x800AF0D4u; f_80058EA4(c); // 800AF0D0
  c->r[4]=c->r[31]|c->r[31]; // 800AF0D4
  c->lr=0x800AF0DCu; f_80057B44(c); // 800AF0D8
  cmps(c,0,(int32_t)c->r[3],0); // 800AF0DC
  if (crb(c,2)) { goto L_800AF0FC; } // 800AF0E0
  c->lr=0x800AF0E8u; f_8007B524(c); // 800AF0E4
  c->r[4]=R32(c->r[30]+0x000009C0u); // 800AF0E8
  c->lr=0x800AF0F0u; f_800A1CC8(c); // 800AF0EC
  c->r[3]=c->r[30]|c->r[30]; // 800AF0F0
  c->r[4]=0u+0x00000002u; // 800AF0F4
  c->lr=0x800AF0FCu; f_800AFF14(c); // 800AF0F8
L_800AF0FC:;
  c->r[0]=0u+0x00000068u; // 800AF0FC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800AF100
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800AF104
  c->r[0]=0u+0x00000058u; // 800AF108
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800AF10C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800AF110
  c->r[11]=c->r[1]+0x00000050u; // 800AF114
  c->lr=0x800AF11Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF118
  c->r[0]=R32(c->r[1]+0x00000074u); // 800AF11C
  c->lr=c->r[0]; // 800AF120
  c->r[1]=c->r[1]+0x00000070u; // 800AF124
  return; // 800AF128
}

// fn_800AF12C
void f_800AF12C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF12C
  c->r[0]=c->lr; // 800AF130
  W32(c->r[1]+0x00000074u,c->r[0]); // 800AF134
  c->r[11]=c->r[1]+0x00000070u; // 800AF138
  c->lr=0x800AF140u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AF13C
  c->r[27]=c->r[3]|c->r[3]; // 800AF140
  c->lr=0x800AF148u; f_8007B524(c); // 800AF144
  c->lr=0x800AF14Cu; f_8006E224(c); // 800AF148
  c->r[23]=c->r[3]+0x00010000u; // 800AF14C
  c->lr=0x800AF154u; f_800F4430(c); // 800AF150
  c->r[3]=c->r[3]+0x000001DCu; // 800AF154
  c->r[4]=R32(c->r[23]+0xFFFF8188u); // 800AF158
  c->r[5]=c->r[1]+0x00000010u; // 800AF15C
  c->lr=0x800AF164u; f_801A1C60(c); // 800AF160
  c->r[0]=R32(c->r[27]+0x000000BCu); // 800AF164
  cmps(c,0,(int32_t)c->r[0],2); // 800AF168
  if (crb(c,2)) { goto L_800AF5CC; } // 800AF16C
  if (!crb(c,0)) { goto L_800AF184; } // 800AF170
  cmps(c,0,(int32_t)c->r[0],0); // 800AF174
  if (crb(c,2)) { goto L_800AF190; } // 800AF178
  if (!crb(c,0)) { goto L_800AF59C; } // 800AF17C
  goto L_800AF888; // 800AF180
L_800AF184:;
  cmps(c,0,(int32_t)c->r[0],4); // 800AF184
  if (!crb(c,0)) { goto L_800AF888; } // 800AF188
  goto L_800AF850; // 800AF18C
L_800AF190:;
  c->r[23]=0u+0x00000000u; // 800AF190
  W32(c->r[27]+0x000000C0u,c->r[23]); // 800AF194
  c->r[0]=0u+0x00000009u; // 800AF198
  W32(c->r[27]+0x00000144u,c->r[0]); // 800AF19C
  c->r[3]=0u+0xFFFFFFFFu; // 800AF1A0
  W32(c->r[27]+0x00000148u,c->r[3]); // 800AF1A4
  W32(c->r[27]+0x000009A8u,c->r[23]); // 800AF1A8
  W32(c->r[27]+0x000001D0u,c->r[23]); // 800AF1AC
  W32(c->r[27]+0x00000254u,c->r[0]); // 800AF1B0
  W32(c->r[27]+0x00000258u,c->r[3]); // 800AF1B4
  W32(c->r[27]+0x000009ACu,c->r[23]); // 800AF1B8
  W32(c->r[27]+0x000002E0u,c->r[23]); // 800AF1BC
  W32(c->r[27]+0x00000364u,c->r[0]); // 800AF1C0
  W32(c->r[27]+0x00000368u,c->r[3]); // 800AF1C4
  W32(c->r[27]+0x000009B0u,c->r[23]); // 800AF1C8
  W32(c->r[27]+0x000003F0u,c->r[23]); // 800AF1CC
  W32(c->r[27]+0x00000474u,c->r[0]); // 800AF1D0
  W32(c->r[27]+0x00000478u,c->r[3]); // 800AF1D4
  W32(c->r[27]+0x000009B4u,c->r[23]); // 800AF1D8
  W32(c->r[27]+0x00000500u,c->r[23]); // 800AF1DC
  W32(c->r[27]+0x00000584u,c->r[0]); // 800AF1E0
  W32(c->r[27]+0x00000588u,c->r[3]); // 800AF1E4
  W32(c->r[27]+0x000009B8u,c->r[23]); // 800AF1E8
  W32(c->r[27]+0x00000610u,c->r[23]); // 800AF1EC
  W32(c->r[27]+0x00000694u,c->r[0]); // 800AF1F0
  W32(c->r[27]+0x00000698u,c->r[3]); // 800AF1F4
  W32(c->r[27]+0x000009BCu,c->r[23]); // 800AF1F8
  W32(c->r[27]+0x000009CCu,c->r[23]); // 800AF1FC
  W32(c->r[27]+0x00000A50u,c->r[0]); // 800AF200
  c->r[0]=0u+0x00000001u; // 800AF204
  W32(c->r[27]+0x00000A54u,c->r[0]); // 800AF208
  c->r[0]=0u+0x00000006u; // 800AF20C
  W32(c->r[27]+0x00000AD8u,c->r[0]); // 800AF210
  W32(c->r[27]+0x00000ADCu,c->r[3]); // 800AF214
  c->lr=0x800AF21Cu; f_8007B524(c); // 800AF218
  c->r[4]=0u+0x00000006u; // 800AF21C
  c->lr=0x800AF224u; f_800A1B48(c); // 800AF220
  c->r[4]=c->r[3]|c->r[3]; // 800AF224
  c->r[3]=c->r[27]+0x00000B64u; // 800AF228
  c->lr=0x800AF230u; f_8007369C(c); // 800AF22C
  W32(c->r[27]+0x00000BF8u,c->r[23]); // 800AF230
  W32(c->r[27]+0x00000BFCu,c->r[23]); // 800AF234
  c->r[25]=0u+0x00000000u; // 800AF238
  c->r[23]=0u+0x00000000u; // 800AF23C
  c->r[24]=c->r[27]|c->r[27]; // 800AF240
L_800AF244:;
  c->lr=0x800AF248u; f_8007B524(c); // 800AF244
  c->lr=0x800AF24Cu; f_8006E224(c); // 800AF248
  c->r[3]=c->r[3]+0x00010000u; // 800AF24C
  c->r[0]=R32(c->r[3]+0xFFFF8190u); // 800AF250
  c->r[3]=c->r[0]+c->r[23]; // 800AF254
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800AF258
  W32(c->r[24]+0x00000BF0u,c->r[0]); // 800AF25C
  c->r[0]=R32(c->r[24]+0x00000BF0u); // 800AF260
  cmps(c,0,(int32_t)c->r[0],-1); // 800AF264
  if (!crb(c,1)) { goto L_800AF290; } // 800AF268
  c->r[3]=R32(c->r[27]+0x00000BF8u); // 800AF26C
  c->r[0]=c->r[3]+0x00000001u; // 800AF270
  W32(c->r[27]+0x00000BF8u,c->r[0]); // 800AF274
  c->r[0]=R32(c->r[24]+0x00000BF0u); // 800AF278
  cmps(c,0,(int32_t)c->r[0],100); // 800AF27C
  if (!crb(c,0)) { goto L_800AF290; } // 800AF280
  c->r[3]=R32(c->r[27]+0x00000BFCu); // 800AF284
  c->r[0]=c->r[3]+0x00000001u; // 800AF288
  W32(c->r[27]+0x00000BFCu,c->r[0]); // 800AF28C
L_800AF290:;
  c->r[23]=c->r[23]+0x00000004u; // 800AF290
  c->r[24]=c->r[24]+0x00000004u; // 800AF294
  c->r[25]=c->r[25]+0x00000001u; // 800AF298
  cmps(c,0,(int32_t)c->r[25],2); // 800AF29C
  if (crb(c,0)) { IRQCHK(c); goto L_800AF244; } // 800AF2A0
  c->lr=0x800AF2A8u; f_8007B524(c); // 800AF2A4
  c->lr=0x800AF2ACu; f_800A104C(c); // 800AF2A8
  cmps(c,0,(int32_t)c->r[3],0); // 800AF2AC
  if (crb(c,2)) { goto L_800AF2C0; } // 800AF2B0
  c->r[0]=0u+0x00000001u; // 800AF2B4
  W32(c->r[27]+0x00000BD8u,c->r[0]); // 800AF2B8
  goto L_800AF2C8; // 800AF2BC
L_800AF2C0:;
  c->r[0]=0u+0x00000000u; // 800AF2C0
  W32(c->r[27]+0x00000BD8u,c->r[0]); // 800AF2C4
L_800AF2C8:;
  c->r[31]=0u+0x00000000u; // 800AF2C8
  W32(c->r[27]+0x00000C00u,c->r[31]); // 800AF2CC
  c->r[28]=0u+0x00000000u; // 800AF2D0
  c->r[30]=c->r[27]|c->r[27]; // 800AF2D4
  c->r[29]=c->r[27]+0x00000720u; // 800AF2D8
  c->r[25]=0u+0x80460000u; // 800AF2DC
  c->r[24]=0u+0x80460000u; // 800AF2E0
  goto L_800AF578; // 800AF2E4
L_800AF2E8:;
  c->r[0]=R32(c->r[30]+0x00000BD8u); // 800AF2E8
  cmps(c,0,(int32_t)c->r[0],0); // 800AF2EC
  if (crb(c,2)) { goto L_800AF56C; } // 800AF2F0
  W32(c->r[30]+0x00000BD8u,c->r[31]); // 800AF2F4
  c->r[3]=R32(c->r[27]+0x00000C00u); // 800AF2F8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)272); // 800AF2FC
  c->r[26]=c->r[27]+c->r[0]; // 800AF300
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800AF304
  c->r[3]=c->r[27]+c->r[0]; // 800AF308
  W32(c->r[3]+0x000009A8u,c->r[29]); // 800AF30C
  cmps(c,0,(int32_t)c->r[28],2); // 800AF310
  if (crb(c,2)) { goto L_800AF3BC; } // 800AF314
  if (!crb(c,0)) { goto L_800AF32C; } // 800AF318
  cmps(c,0,(int32_t)c->r[28],0); // 800AF31C
  if (crb(c,2)) { goto L_800AF338; } // 800AF320
  if (!crb(c,0)) { goto L_800AF394; } // 800AF324
  goto L_800AF4A8; // 800AF328
L_800AF32C:;
  cmps(c,0,(int32_t)c->r[28],4); // 800AF32C
  if (!crb(c,0)) { goto L_800AF4A8; } // 800AF330
  goto L_800AF418; // 800AF334
L_800AF338:;
  c->lr=0x800AF33Cu; f_8007B524(c); // 800AF338
  c->r[4]=0u+0x00000004u; // 800AF33C
  c->lr=0x800AF344u; f_800A1B48(c); // 800AF340
  c->r[4]=c->r[3]|c->r[3]; // 800AF344
  c->r[3]=c->r[29]|c->r[29]; // 800AF348
  c->lr=0x800AF350u; f_8007369C(c); // 800AF34C
  c->r[3]=c->r[26]+0x000000C4u; // 800AF350
  c->r[4]=c->r[13]+0xFFFF8718u; // 800AF354
  c->lr=0x800AF35Cu; f_802E9548(c); // 800AF358
  c->lr=0x800AF360u; f_8007B524(c); // 800AF35C
  c->lr=0x800AF364u; f_8006E224(c); // 800AF360
  c->r[23]=c->r[3]+0x00010000u; // 800AF364
  c->lr=0x800AF36Cu; f_800F4430(c); // 800AF368
  c->r[3]=c->r[3]+0x00000308u; // 800AF36C
  c->r[4]=R32(c->r[23]+0xFFFF8194u); // 800AF370
  c->lr=0x800AF378u; f_801A1B50(c); // 800AF374
  c->r[4]=c->r[3]|c->r[3]; // 800AF378
  c->r[3]=c->r[26]+0x000000C4u; // 800AF37C
  c->lr=0x800AF384u; f_802E964C(c); // 800AF380
  c->r[3]=c->r[26]+0x000000C4u; // 800AF384
  c->r[4]=c->r[13]+0xFFFF8720u; // 800AF388
  c->lr=0x800AF390u; f_802E964C(c); // 800AF38C
  goto L_800AF560; // 800AF390
L_800AF394:;
  c->lr=0x800AF398u; f_8007B524(c); // 800AF394
  c->r[4]=0u+0x00000005u; // 800AF398
  c->lr=0x800AF3A0u; f_800A1B48(c); // 800AF39C
  c->r[4]=c->r[3]|c->r[3]; // 800AF3A0
  c->r[3]=c->r[29]|c->r[29]; // 800AF3A4
  c->lr=0x800AF3ACu; f_8007369C(c); // 800AF3A8
  c->r[3]=c->r[26]+0x000000C4u; // 800AF3AC
  c->r[4]=c->r[25]+0xFFFFFD20u; // 800AF3B0
  c->lr=0x800AF3B8u; f_802E9548(c); // 800AF3B4
  goto L_800AF560; // 800AF3B8
L_800AF3BC:;
  c->lr=0x800AF3C0u; f_8007B524(c); // 800AF3BC
  c->r[4]=0u+0x0000000Cu; // 800AF3C0
  c->lr=0x800AF3C8u; f_800A1B48(c); // 800AF3C4
  c->r[4]=c->r[3]|c->r[3]; // 800AF3C8
  c->r[3]=c->r[29]|c->r[29]; // 800AF3CC
  c->lr=0x800AF3D4u; f_8007369C(c); // 800AF3D0
  c->r[3]=c->r[26]+0x000000C4u; // 800AF3D4
  c->r[4]=c->r[13]+0xFFFF8728u; // 800AF3D8
  c->lr=0x800AF3E0u; f_802E9548(c); // 800AF3DC
  c->lr=0x800AF3E4u; f_8007B524(c); // 800AF3E0
  c->lr=0x800AF3E8u; f_8006E224(c); // 800AF3E4
  c->r[23]=c->r[3]+0x00010000u; // 800AF3E8
  c->lr=0x800AF3F0u; f_800F4430(c); // 800AF3EC
  c->r[3]=c->r[3]+0x00000308u; // 800AF3F0
  c->r[4]=R32(c->r[23]+0xFFFF8194u); // 800AF3F4
  c->lr=0x800AF3FCu; f_801A1B14(c); // 800AF3F8
  c->r[4]=c->r[3]|c->r[3]; // 800AF3FC
  c->r[3]=c->r[26]+0x000000C4u; // 800AF400
  c->lr=0x800AF408u; f_802E964C(c); // 800AF404
  c->r[3]=c->r[26]+0x000000C4u; // 800AF408
  c->r[4]=c->r[13]+0xFFFF8720u; // 800AF40C
  c->lr=0x800AF414u; f_802E964C(c); // 800AF410
  goto L_800AF560; // 800AF414
L_800AF418:;
  c->lr=0x800AF41Cu; f_8007B524(c); // 800AF418
  c->r[4]=0u+0x0000000Cu; // 800AF41C
  c->lr=0x800AF424u; f_800A1B48(c); // 800AF420
  c->r[4]=c->r[3]|c->r[3]; // 800AF424
  c->r[3]=c->r[29]|c->r[29]; // 800AF428
  c->lr=0x800AF430u; f_8007369C(c); // 800AF42C
  c->r[3]=c->r[26]+0x000000C4u; // 800AF430
  c->r[4]=c->r[13]+0xFFFF8730u; // 800AF434
  c->lr=0x800AF43Cu; f_802E9548(c); // 800AF438
  c->lr=0x800AF440u; f_8007B524(c); // 800AF43C
  c->lr=0x800AF444u; f_8006E224(c); // 800AF440
  c->r[23]=c->r[3]+0x00010000u; // 800AF444
  c->lr=0x800AF44Cu; f_800F4430(c); // 800AF448
  c->r[3]=c->r[3]+0x00000308u; // 800AF44C
  c->r[4]=R32(c->r[23]+0xFFFF8194u); // 800AF450
  c->lr=0x800AF458u; f_801A1B8C(c); // 800AF454
  c->r[4]=c->r[3]|c->r[3]; // 800AF458
  c->r[3]=c->r[26]+0x000000C4u; // 800AF45C
  c->lr=0x800AF464u; f_802E964C(c); // 800AF460
  c->r[3]=c->r[26]+0x000000C4u; // 800AF464
  c->r[4]=c->r[13]+0xFFFF8738u; // 800AF468
  c->lr=0x800AF470u; f_802E964C(c); // 800AF46C
  c->lr=0x800AF474u; f_8007B524(c); // 800AF470
  c->lr=0x800AF478u; f_8006E224(c); // 800AF474
  c->r[23]=c->r[3]+0x00010000u; // 800AF478
  c->lr=0x800AF480u; f_800F4430(c); // 800AF47C
  c->r[3]=c->r[3]+0x00000308u; // 800AF480
  c->r[4]=R32(c->r[23]+0xFFFF8194u); // 800AF484
  c->lr=0x800AF48Cu; f_801A1B8C(c); // 800AF488
  c->r[4]=c->r[3]|c->r[3]; // 800AF48C
  c->r[3]=c->r[26]+0x000000C4u; // 800AF490
  c->lr=0x800AF498u; f_802E964C(c); // 800AF494
  c->r[3]=c->r[26]+0x000000C4u; // 800AF498
  c->r[4]=c->r[24]+0xFFFFFD34u; // 800AF49C
  c->lr=0x800AF4A4u; f_802E964C(c); // 800AF4A0
  goto L_800AF560; // 800AF4A4
L_800AF4A8:;
  c->lr=0x800AF4ACu; f_8007B524(c); // 800AF4A8
  c->r[4]=0u+0x0000000Cu; // 800AF4AC
  c->lr=0x800AF4B4u; f_800A1B48(c); // 800AF4B0
  c->r[4]=c->r[3]|c->r[3]; // 800AF4B4
  c->r[3]=c->r[29]|c->r[29]; // 800AF4B8
  c->lr=0x800AF4C0u; f_8007369C(c); // 800AF4BC
  c->r[3]=c->r[1]+0x00000008u; // 800AF4C0
  c->r[4]=c->r[13]+0xFFFF873Cu; // 800AF4C4
  c->r[5]=R32(c->r[30]+0x00000BE0u); // 800AF4C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AF4CC
  c->lr=0x800AF4D4u; f_802E7CC4(c); // 800AF4D0
  c->r[3]=c->r[26]+0x000000C4u; // 800AF4D4
  c->r[4]=c->r[13]+0xFFFF8730u; // 800AF4D8
  c->lr=0x800AF4E0u; f_802E9548(c); // 800AF4DC
  c->lr=0x800AF4E4u; f_8007B524(c); // 800AF4E0
  c->lr=0x800AF4E8u; f_8006E224(c); // 800AF4E4
  c->r[23]=c->r[3]+0x00010000u; // 800AF4E8
  c->lr=0x800AF4F0u; f_800F4430(c); // 800AF4EC
  c->r[3]=c->r[3]+0x00000308u; // 800AF4F0
  c->r[4]=R32(c->r[23]+0xFFFF8194u); // 800AF4F4
  c->lr=0x800AF4FCu; f_801A1B8C(c); // 800AF4F8
  c->r[4]=c->r[3]|c->r[3]; // 800AF4FC
  c->r[3]=c->r[26]+0x000000C4u; // 800AF500
  c->lr=0x800AF508u; f_802E964C(c); // 800AF504
  c->r[3]=c->r[26]+0x000000C4u; // 800AF508
  c->r[4]=c->r[13]+0xFFFF8738u; // 800AF50C
  c->lr=0x800AF514u; f_802E964C(c); // 800AF510
  c->lr=0x800AF518u; f_8007B524(c); // 800AF514
  c->lr=0x800AF51Cu; f_8006E224(c); // 800AF518
  c->r[23]=c->r[3]+0x00010000u; // 800AF51C
  c->lr=0x800AF524u; f_800F4430(c); // 800AF520
  c->r[3]=c->r[3]+0x00000308u; // 800AF524
  c->r[4]=R32(c->r[23]+0xFFFF8194u); // 800AF528
  c->lr=0x800AF530u; f_801A1B8C(c); // 800AF52C
  c->r[4]=c->r[3]|c->r[3]; // 800AF530
  c->r[3]=c->r[26]+0x000000C4u; // 800AF534
  c->lr=0x800AF53Cu; f_802E964C(c); // 800AF538
  c->r[3]=c->r[26]+0x000000C4u; // 800AF53C
  c->r[4]=c->r[13]+0xFFFF8744u; // 800AF540
  c->lr=0x800AF548u; f_802E964C(c); // 800AF544
  c->r[3]=c->r[26]+0x000000C4u; // 800AF548
  c->r[4]=c->r[1]+0x00000008u; // 800AF54C
  c->lr=0x800AF554u; f_802E964C(c); // 800AF550
  c->r[3]=c->r[26]+0x000000C4u; // 800AF554
  c->r[4]=c->r[13]+0xFFFF8720u; // 800AF558
  c->lr=0x800AF560u; f_802E964C(c); // 800AF55C
L_800AF560:;
  c->r[3]=R32(c->r[27]+0x00000C00u); // 800AF560
  c->r[0]=c->r[3]+0x00000001u; // 800AF564
  W32(c->r[27]+0x00000C00u,c->r[0]); // 800AF568
L_800AF56C:;
  c->r[30]=c->r[30]+0x00000004u; // 800AF56C
  c->r[29]=c->r[29]+0x0000006Cu; // 800AF570
  c->r[28]=c->r[28]+0x00000001u; // 800AF574
L_800AF578:;
  c->r[3]=R32(c->r[27]+0x00000BF8u); // 800AF578
  c->r[0]=c->r[3]+0x00000004u; // 800AF57C
  cmpu(c,0,c->r[28],c->r[0]); // 800AF580
  if (crb(c,0)) { IRQCHK(c); goto L_800AF2E8; } // 800AF584
  c->r[0]=R32(c->r[27]+0x00000C00u); // 800AF588
  cmps(c,0,(int32_t)c->r[0],0); // 800AF58C
  if (crb(c,2)) { goto L_800AF614; } // 800AF590
  c->r[0]=0u+0x00000000u; // 800AF594
  W32(c->r[27]+0x00000C04u,c->r[0]); // 800AF598
L_800AF59C:;
  c->r[4]=R32(c->r[27]+0x00000C04u); // 800AF59C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800AF5A0
  c->r[3]=c->r[27]+c->r[0]; // 800AF5A4
  c->r[3]=R32(c->r[3]+0x000009A8u); // 800AF5A8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)272); // 800AF5AC
  c->r[4]=c->r[27]+c->r[0]; // 800AF5B0
  c->r[4]=c->r[4]+0x000000C0u; // 800AF5B4
  c->r[5]=0u+0x00000001u; // 800AF5B8
  c->lr=0x800AF5C0u; f_80076D08(c); // 800AF5BC
  c->r[0]=0u+0x00000002u; // 800AF5C0
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800AF5C4
  goto L_800AF888; // 800AF5C8
L_800AF5CC:;
  c->r[0]=R32(c->r[27]+0x00000C04u); // 800AF5CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AF5D0
  c->r[3]=c->r[27]+c->r[0]; // 800AF5D4
  c->r[3]=R32(c->r[3]+0x000009A8u); // 800AF5D8
  c->lr=0x800AF5E0u; f_80075AF0(c); // 800AF5DC
  cmps(c,0,(int32_t)c->r[3],0); // 800AF5E0
  if (crb(c,2)) { goto L_800AF888; } // 800AF5E4
  c->r[0]=R32(c->r[27]+0x00000C04u); // 800AF5E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AF5EC
  c->r[3]=c->r[27]+c->r[0]; // 800AF5F0
  c->r[3]=R32(c->r[3]+0x000009A8u); // 800AF5F4
  c->lr=0x800AF5FCu; f_80076D58(c); // 800AF5F8
  c->r[3]=R32(c->r[27]+0x00000C04u); // 800AF5FC
  c->r[3]=c->r[3]+0x00000001u; // 800AF600
  W32(c->r[27]+0x00000C04u,c->r[3]); // 800AF604
  c->r[0]=R32(c->r[27]+0x00000C00u); // 800AF608
  cmpu(c,0,c->r[0],c->r[3]); // 800AF60C
  if (!crb(c,2)) { goto L_800AF844; } // 800AF610
L_800AF614:;
  c->r[25]=0u+0x00000000u; // 800AF614
  c->r[23]=0u+0x00000000u; // 800AF618
  c->r[24]=c->r[27]|c->r[27]; // 800AF61C
  goto L_800AF658; // 800AF620
L_800AF624:;
  c->r[3]=c->r[23]+c->r[27]; // 800AF624
  c->r[3]=c->r[3]+0x000008D0u; // 800AF628
  c->r[4]=0u+0x00000000u; // 800AF62C
  c->lr=0x800AF634u; f_8006E53C(c); // 800AF630
  c->lr=0x800AF638u; f_8006E4F4(c); // 800AF634
  c->r[4]=0u+0x00000000u; // 800AF638
  c->lr=0x800AF640u; f_8006E4E4(c); // 800AF63C
  c->lr=0x800AF644u; f_8006E4DC(c); // 800AF640
  c->r[0]=R32(c->r[24]+0x00000BF0u); // 800AF644
  W32(c->r[3]+0x00000000u,c->r[0]); // 800AF648
  c->r[23]=c->r[23]+0x0000006Cu; // 800AF64C
  c->r[24]=c->r[24]+0x00000004u; // 800AF650
  c->r[25]=c->r[25]+0x00000001u; // 800AF654
L_800AF658:;
  c->r[0]=R32(c->r[27]+0x00000BF8u); // 800AF658
  cmpu(c,0,c->r[25],c->r[0]); // 800AF65C
  if (crb(c,0)) { IRQCHK(c); goto L_800AF624; } // 800AF660
  c->lr=0x800AF668u; f_8007B524(c); // 800AF664
  c->lr=0x800AF66Cu; f_800A104C(c); // 800AF668
  cmps(c,0,(int32_t)c->r[3],0); // 800AF66C
  if (crb(c,2)) { goto L_800AF6F4; } // 800AF670
  c->r[3]=c->r[27]|c->r[27]; // 800AF674
  c->lr=0x800AF67Cu; f_800AFD50(c); // 800AF678
  c->r[23]=c->r[3]|c->r[3]; // 800AF67C
  c->r[4]=c->r[23]|c->r[23]; // 800AF680
  c->r[0]=R32(c->r[3]+0x00001A30u); // 800AF684
  c->ctr=c->r[0]; // 800AF688
  cmps(c,0,(int32_t)c->r[0],0); // 800AF68C
  if (!crb(c,1)) { goto L_800AF6C4; } // 800AF690
L_800AF694:;
  c->r[0]=R32(c->r[4]+0x00001A34u); // 800AF694
  cmps(c,0,(int32_t)c->r[0],0); // 800AF698
  if (crb(c,2)) { goto L_800AF6BC; } // 800AF69C
  c->lr=0x800AF6A4u; f_8007B524(c); // 800AF6A0
  c->lr=0x800AF6A8u; f_8006E224(c); // 800AF6A4
  c->r[3]=c->r[3]+0x00010000u; // 800AF6A8
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AF6AC
  c->r[0]=c->r[0]|0x00000200u; // 800AF6B0
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 800AF6B4
  goto L_800AF6C4; // 800AF6B8
L_800AF6BC:;
  c->r[4]=c->r[4]+0x0000003Cu; // 800AF6BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AF694; } // 800AF6C0
L_800AF6C4:;
  c->r[0]=R32(c->r[23]+0x00000020u); // 800AF6C4
  cmps(c,0,(int32_t)c->r[0],-1); // 800AF6C8
  if (crb(c,2)) { goto L_800AF6F4; } // 800AF6CC
  c->r[0]=R32(c->r[23]+0x00000024u); // 800AF6D0
  cmps(c,0,(int32_t)c->r[0],-1); // 800AF6D4
  if (crb(c,2)) { goto L_800AF6F4; } // 800AF6D8
  c->lr=0x800AF6E0u; f_8007B524(c); // 800AF6DC
  c->lr=0x800AF6E4u; f_8006E224(c); // 800AF6E0
  c->r[3]=c->r[3]+0x00010000u; // 800AF6E4
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AF6E8
  c->r[0]=c->r[0]|0x00000400u; // 800AF6EC
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 800AF6F0
L_800AF6F4:;
  c->lr=0x800AF6F8u; f_8007B524(c); // 800AF6F4
  c->lr=0x800AF6FCu; f_800A105C(c); // 800AF6F8
  cmps(c,0,(int32_t)c->r[3],0); // 800AF6FC
  if (crb(c,2)) { goto L_800AF820; } // 800AF700
  c->r[0]=0u+0x00000000u; // 800AF704
  W32(c->r[27]+0x000009C8u,c->r[0]); // 800AF708
  c->r[3]=c->r[27]|c->r[27]; // 800AF70C
  c->lr=0x800AF714u; f_800AFD50(c); // 800AF710
  c->r[28]=c->r[3]|c->r[3]; // 800AF714
  c->r[29]=0u+0x00000000u; // 800AF718
  c->r[31]=c->r[28]|c->r[28]; // 800AF71C
  c->r[30]=c->r[3]+0x00001A3Cu; // 800AF720
  c->r[24]=0u+0x80460000u; // 800AF724
  c->r[26]=0u+0x00000030u; // 800AF728
  goto L_800AF7E4; // 800AF72C
L_800AF730:;
  c->r[0]=R32(c->r[31]+0x00001A34u); // 800AF730
  cmps(c,0,(int32_t)c->r[0],0); // 800AF734
  if (crb(c,2)) { goto L_800AF7D8; } // 800AF738
  c->r[0]=R32(c->r[27]+0x000009C8u); // 800AF73C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800AF740
  c->r[23]=c->r[27]+c->r[0]; // 800AF744
  c->r[3]=c->r[23]+0x000009D0u; // 800AF748
  c->r[4]=c->r[24]+0xFFFFFD40u; // 800AF74C
  c->lr=0x800AF754u; f_802E9548(c); // 800AF750
  c->lr=0x800AF758u; f_8007B524(c); // 800AF754
  c->lr=0x800AF75Cu; f_800A08A4(c); // 800AF758
  cmps(c,0,(int32_t)c->r[3],0); // 800AF75C
  if (crb(c,2)) { goto L_800AF78C; } // 800AF760
  c->lr=0x800AF768u; f_8007B524(c); // 800AF764
  c->lr=0x800AF76Cu; f_8006E224(c); // 800AF768
  c->r[3]=c->r[3]+0x00010000u; // 800AF76C
  c->r[25]=R32(c->r[3]+0xFFFF81A8u); // 800AF770
  c->lr=0x800AF778u; f_800F4430(c); // 800AF774
  c->r[3]=c->r[3]+0x00000218u; // 800AF778
  c->r[4]=R32(c->r[25]+0x00000000u); // 800AF77C
  c->lr=0x800AF784u; f_801E70F4(c); // 800AF780
  c->r[25]=c->r[3]|c->r[3]; // 800AF784
  goto L_800AF790; // 800AF788
L_800AF78C:;
  c->r[25]=c->r[30]|c->r[30]; // 800AF78C
L_800AF790:;
  c->r[3]=c->r[23]+0x000009D0u; // 800AF790
  c->r[4]=c->r[25]|c->r[25]; // 800AF794
  c->lr=0x800AF79Cu; f_802E964C(c); // 800AF798
  c->r[0]=R32(c->r[27]+0x000009C8u); // 800AF79C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AF7A0
  c->r[3]=c->r[27]+c->r[0]; // 800AF7A4
  W32(c->r[3]+0x00000BD0u,c->r[25]); // 800AF7A8
  c->lr=0x800AF7B0u; f_8007B524(c); // 800AF7AC
  c->lr=0x800AF7B4u; f_800A08A4(c); // 800AF7B0
  cmps(c,0,(int32_t)c->r[3],0); // 800AF7B4
  if (!crb(c,2)) { goto L_800AF7C0; } // 800AF7B8
  W8(c->r[23]+0x000009E2u,c->r[26]); // 800AF7BC
L_800AF7C0:;
  c->r[3]=c->r[23]+0x000009D0u; // 800AF7C0
  c->r[4]=c->r[13]+0xFFFF874Cu; // 800AF7C4
  c->lr=0x800AF7CCu; f_802E964C(c); // 800AF7C8
  c->r[3]=R32(c->r[27]+0x000009C8u); // 800AF7CC
  c->r[0]=c->r[3]+0x00000001u; // 800AF7D0
  W32(c->r[27]+0x000009C8u,c->r[0]); // 800AF7D4
L_800AF7D8:;
  c->r[31]=c->r[31]+0x0000003Cu; // 800AF7D8
  c->r[30]=c->r[30]+0x0000003Cu; // 800AF7DC
  c->r[29]=c->r[29]+0x00000001u; // 800AF7E0
L_800AF7E4:;
  c->r[0]=R32(c->r[28]+0x00001A30u); // 800AF7E4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800AF7E8
  if (crb(c,0)) { IRQCHK(c); goto L_800AF730; } // 800AF7EC
  c->r[4]=0u+0xFFFFFFFFu; // 800AF7F0
  c->r[0]=R32(c->r[27]+0x000009C8u); // 800AF7F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)136); // 800AF7F8
  c->r[3]=c->r[27]+c->r[0]; // 800AF7FC
  W32(c->r[3]+0x000009CCu,c->r[4]); // 800AF800
  c->r[3]=c->r[27]+0x00000B64u; // 800AF804
  c->r[4]=c->r[27]+0x000009CCu; // 800AF808
  c->r[5]=0u+0x00000001u; // 800AF80C
  c->lr=0x800AF814u; f_80076D08(c); // 800AF810
  c->r[0]=0u+0x00000003u; // 800AF814
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800AF818
  goto L_800AF888; // 800AF81C
L_800AF820:;
  c->r[0]=R32(c->r[27]+0x000000B8u); // 800AF820
  c->r[0]=c->r[0]|0x00000001u; // 800AF824
  W32(c->r[27]+0x000000B8u,c->r[0]); // 800AF828
  c->r[0]=0u+0x00000000u; // 800AF82C
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800AF830
  c->r[3]=c->r[27]|c->r[27]; // 800AF834
  c->r[4]=0u+0x00000000u; // 800AF838
  c->lr=0x800AF840u; f_800AFF14(c); // 800AF83C
  goto L_800AF888; // 800AF840
L_800AF844:;
  c->r[0]=0u+0x00000001u; // 800AF844
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800AF848
  goto L_800AF888; // 800AF84C
L_800AF850:;
  c->r[3]=c->r[27]+0x00000B64u; // 800AF850
  c->lr=0x800AF858u; f_80075AF0(c); // 800AF854
  cmps(c,0,(int32_t)c->r[3],0); // 800AF858
  if (crb(c,2)) { goto L_800AF888; } // 800AF85C
  c->r[3]=c->r[27]+0x00000B64u; // 800AF860
  c->lr=0x800AF868u; f_80076D58(c); // 800AF864
  c->r[0]=R32(c->r[27]+0x000000B8u); // 800AF868
  c->r[0]=c->r[0]|0x00000001u; // 800AF86C
  W32(c->r[27]+0x000000B8u,c->r[0]); // 800AF870
  c->r[0]=0u+0x00000000u; // 800AF874
  W32(c->r[27]+0x000000BCu,c->r[0]); // 800AF878
  c->r[3]=c->r[27]|c->r[27]; // 800AF87C
  c->r[4]=0u+0x00000000u; // 800AF880
  c->lr=0x800AF888u; f_800AFF14(c); // 800AF884
L_800AF888:;
  c->r[3]=c->r[27]|c->r[27]; // 800AF888
  c->lr=0x800AF890u; f_800AFF1C(c); // 800AF88C
  cmps(c,0,(int32_t)c->r[3],0); // 800AF890
  if (!crb(c,2)) { goto L_800AF90C; } // 800AF894
  c->lr=0x800AF89Cu; f_8007B524(c); // 800AF898
  c->lr=0x800AF8A0u; f_8006E224(c); // 800AF89C
  c->r[3]=c->r[3]+0x00010000u; // 800AF8A0
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800AF8A4
  c->r[0]=rotl(c->r[0],0)&0x00001000u; // 800AF8A8
  cmps(c,0,(int32_t)c->r[0],0); // 800AF8AC
  if (crb(c,2)) { goto L_800AF8F0; } // 800AF8B0
  c->r[3]=c->r[27]+0x0000078Cu; // 800AF8B4
  c->r[4]=0u+0x00000000u; // 800AF8B8
  c->lr=0x800AF8C0u; f_8006E53C(c); // 800AF8BC
  c->lr=0x800AF8C4u; f_8006E4F4(c); // 800AF8C0
  c->r[4]=0u+0x00000003u; // 800AF8C4
  c->lr=0x800AF8CCu; f_8006E4E4(c); // 800AF8C8
  c->lr=0x800AF8D0u; f_8007047C(c); // 800AF8CC
  c->r[12]=R32(c->r[3]+0x00000008u); // 800AF8D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800AF8D4
  c->ctr=c->r[12]; // 800AF8D8
  if (true) { c->lr=0x800AF8E0u; dispatch(c,c->ctr); } // 800AF8DC
  c->r[4]=c->r[3]|c->r[3]; // 800AF8E0
  c->r[3]=c->r[27]+0x00000C08u; // 800AF8E4
  c->r[5]=0u+0x00000000u; // 800AF8E8
  c->lr=0x800AF8F0u; f_80070460(c); // 800AF8EC
L_800AF8F0:;
  c->lr=0x800AF8F4u; f_8007B524(c); // 800AF8F0
  c->r[4]=0u+0x0000000Cu; // 800AF8F4
  c->lr=0x800AF8FCu; f_800A1B48(c); // 800AF8F8
  c->lr=0x800AF900u; f_80056828(c); // 800AF8FC
  c->lr=0x800AF904u; f_8007B524(c); // 800AF900
  c->lr=0x800AF908u; f_8006E224(c); // 800AF904
  c->lr=0x800AF90Cu; f_800AE578(c); // 800AF908
L_800AF90C:;
  c->lr=0x800AF910u; f_8007B524(c); // 800AF90C
  c->lr=0x800AF914u; f_8006E224(c); // 800AF910
  c->lr=0x800AF918u; f_800AEB60(c); // 800AF914
  c->r[11]=c->r[1]+0x00000070u; // 800AF918
  c->lr=0x800AF920u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF91C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800AF920
  c->lr=c->r[0]; // 800AF924
  c->r[1]=c->r[1]+0x00000070u; // 800AF928
  return; // 800AF92C
}

// fn_800AF930
void f_800AF930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF930
  c->r[0]=c->lr; // 800AF934
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF938
  c->r[11]=c->r[1]+0x00000020u; // 800AF93C
  c->lr=0x800AF944u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AF940
  c->r[31]=c->r[3]|c->r[3]; // 800AF944
  c->lr=0x800AF94Cu; f_8007B524(c); // 800AF948
  c->lr=0x800AF950u; f_8006E224(c); // 800AF94C
  c->lr=0x800AF954u; f_800897A8(c); // 800AF950
  c->r[12]=R32(c->r[3]+0x00000058u); // 800AF954
  c->r[12]=R32(c->r[12]+0x00000030u); // 800AF958
  c->ctr=c->r[12]; // 800AF95C
  if (true) { c->lr=0x800AF964u; dispatch(c,c->ctr); } // 800AF960
  cmps(c,0,(int32_t)c->r[3],0); // 800AF964
  if (crb(c,2)) { goto L_800AFCF4; } // 800AF968
  c->lr=0x800AF970u; f_8007B524(c); // 800AF96C
  c->lr=0x800AF974u; f_8006E224(c); // 800AF970
  c->lr=0x800AF978u; f_8006E3B8(c); // 800AF974
  c->r[12]=R32(c->r[3]+0x00000058u); // 800AF978
  c->r[12]=R32(c->r[12]+0x00000030u); // 800AF97C
  c->ctr=c->r[12]; // 800AF980
  if (true) { c->lr=0x800AF988u; dispatch(c,c->ctr); } // 800AF984
  cmps(c,0,(int32_t)c->r[3],0); // 800AF988
  if (crb(c,2)) { goto L_800AFCF4; } // 800AF98C
  c->lr=0x800AF994u; f_8007B524(c); // 800AF990
  c->lr=0x800AF998u; f_8006E224(c); // 800AF994
  c->lr=0x800AF99Cu; f_8006E3DC(c); // 800AF998
  c->r[12]=R32(c->r[3]+0x00000058u); // 800AF99C
  c->r[12]=R32(c->r[12]+0x00000030u); // 800AF9A0
  c->ctr=c->r[12]; // 800AF9A4
  if (true) { c->lr=0x800AF9ACu; dispatch(c,c->ctr); } // 800AF9A8
  cmps(c,0,(int32_t)c->r[3],0); // 800AF9AC
  if (crb(c,2)) { goto L_800AFCF4; } // 800AF9B0
  c->lr=0x800AF9B8u; f_8007B524(c); // 800AF9B4
  c->lr=0x800AF9BCu; f_8006E224(c); // 800AF9B8
  c->lr=0x800AF9C0u; f_8006E3D0(c); // 800AF9BC
  c->r[12]=R32(c->r[3]+0x00000058u); // 800AF9C0
  c->r[12]=R32(c->r[12]+0x00000030u); // 800AF9C4
  c->ctr=c->r[12]; // 800AF9C8
  if (true) { c->lr=0x800AF9D0u; dispatch(c,c->ctr); } // 800AF9CC
  cmps(c,0,(int32_t)c->r[3],0); // 800AF9D0
  if (crb(c,2)) { goto L_800AFCF4; } // 800AF9D4
  c->lr=0x800AF9DCu; f_8007B524(c); // 800AF9D8
  c->lr=0x800AF9E0u; f_8006E224(c); // 800AF9DC
  c->lr=0x800AF9E4u; f_8006E3C4(c); // 800AF9E0
  c->r[12]=R32(c->r[3]+0x00000058u); // 800AF9E4
  c->r[12]=R32(c->r[12]+0x00000030u); // 800AF9E8
  c->ctr=c->r[12]; // 800AF9EC
  if (true) { c->lr=0x800AF9F4u; dispatch(c,c->ctr); } // 800AF9F0
  cmps(c,0,(int32_t)c->r[3],0); // 800AF9F4
  if (crb(c,2)) { goto L_800AFCF4; } // 800AF9F8
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800AF9FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800AFA00
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800AFA04
  c->r[29]=0u+0x00000001u; // 800AFA08
  W32(c->r[31]+0x00000BD8u,c->r[29]); // 800AFA0C
  c->lr=0x800AFA14u; f_8006E268(c); // 800AFA10
  c->lr=0x800AFA18u; f_80089E10(c); // 800AFA14
  cmps(c,0,(int32_t)c->r[3],51); // 800AFA18
  if (!crb(c,2)) { goto L_800AFA54; } // 800AFA1C
  c->r[5]=0u+0x00000000u; // 800AFA20
  c->r[4]=c->r[31]|c->r[31]; // 800AFA24
  goto L_800AFA38; // 800AFA28
L_800AFA2C:;
  W32(c->r[4]+0x00000BD8u,c->r[29]); // 800AFA2C
  c->r[4]=c->r[4]+0x00000004u; // 800AFA30
  c->r[5]=c->r[5]+0x00000001u; // 800AFA34
L_800AFA38:;
  c->r[3]=R32(c->r[31]+0x00000BF8u); // 800AFA38
  c->r[0]=c->r[3]+0x00000004u; // 800AFA3C
  cmpu(c,0,c->r[5],c->r[0]); // 800AFA40
  if (crb(c,0)) { IRQCHK(c); goto L_800AFA2C; } // 800AFA44
  c->r[3]=c->r[31]+0x00000C08u; // 800AFA48
  c->lr=0x800AFA50u; f_80055378(c); // 800AFA4C
  goto L_800AFC74; // 800AFA50
L_800AFA54:;
  c->lr=0x800AFA58u; f_8007B524(c); // 800AFA54
  c->lr=0x800AFA5Cu; f_800A08A4(c); // 800AFA58
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA5C
  if (!crb(c,2)) { goto L_800AFAFC; } // 800AFA60
  c->lr=0x800AFA68u; f_8007B524(c); // 800AFA64
  c->lr=0x800AFA6Cu; f_800A089C(c); // 800AFA68
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA6C
  if (!crb(c,2)) { goto L_800AFAFC; } // 800AFA70
  c->lr=0x800AFA78u; f_8007B524(c); // 800AFA74
  c->lr=0x800AFA7Cu; f_800A08BC(c); // 800AFA78
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA7C
  if (!crb(c,2)) { goto L_800AFAFC; } // 800AFA80
  c->lr=0x800AFA88u; f_8007B524(c); // 800AFA84
  c->lr=0x800AFA8Cu; f_800A08B4(c); // 800AFA88
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA8C
  if (!crb(c,2)) { goto L_800AFAFC; } // 800AFA90
  c->lr=0x800AFA98u; f_8006E268(c); // 800AFA94
  c->lr=0x800AFA9Cu; f_8006E244(c); // 800AFA98
  c->r[30]=c->r[3]|c->r[3]; // 800AFA9C
  c->lr=0x800AFAA4u; f_8006E268(c); // 800AFAA0
  c->lr=0x800AFAA8u; f_8006E250(c); // 800AFAA4
  c->r[29]=c->r[3]|c->r[3]; // 800AFAA8
  c->lr=0x800AFAB0u; f_8007B524(c); // 800AFAAC
  c->lr=0x800AFAB4u; f_8006E224(c); // 800AFAB0
  c->r[4]=c->r[29]|c->r[29]; // 800AFAB4
  c->r[5]=c->r[30]|c->r[30]; // 800AFAB8
  c->lr=0x800AFAC0u; f_800AD16C(c); // 800AFABC
  cmps(c,0,(int32_t)c->r[3],0); // 800AFAC0
  if (!crb(c,2)) { goto L_800AFAFC; } // 800AFAC4
  c->lr=0x800AFACCu; f_8006E268(c); // 800AFAC8
  c->lr=0x800AFAD0u; f_8006E244(c); // 800AFACC
  c->r[29]=c->r[3]|c->r[3]; // 800AFAD0
  c->lr=0x800AFAD8u; f_8006E268(c); // 800AFAD4
  c->lr=0x800AFADCu; f_8006E250(c); // 800AFAD8
  c->r[30]=c->r[3]|c->r[3]; // 800AFADC
  c->lr=0x800AFAE4u; f_8007B524(c); // 800AFAE0
  c->lr=0x800AFAE8u; f_8006E224(c); // 800AFAE4
  c->r[4]=c->r[30]|c->r[30]; // 800AFAE8
  c->r[5]=c->r[29]|c->r[29]; // 800AFAEC
  c->lr=0x800AFAF4u; f_800AD210(c); // 800AFAF0
  cmps(c,0,(int32_t)c->r[3],0); // 800AFAF4
  if (crb(c,2)) { goto L_800AFB2C; } // 800AFAF8
L_800AFAFC:;
  c->r[6]=0u+0x00000002u; // 800AFAFC
  c->r[5]=c->r[31]+0x00000008u; // 800AFB00
  c->r[4]=0u+0x00000001u; // 800AFB04
  goto L_800AFB18; // 800AFB08
L_800AFB0C:;
  W32(c->r[5]+0x00000BD8u,c->r[4]); // 800AFB0C
  c->r[5]=c->r[5]+0x00000004u; // 800AFB10
  c->r[6]=c->r[6]+0x00000001u; // 800AFB14
L_800AFB18:;
  c->r[3]=R32(c->r[31]+0x00000BF8u); // 800AFB18
  c->r[0]=c->r[3]+0x00000004u; // 800AFB1C
  cmpu(c,0,c->r[6],c->r[0]); // 800AFB20
  if (crb(c,0)) { IRQCHK(c); goto L_800AFB0C; } // 800AFB24
  goto L_800AFC74; // 800AFB28
L_800AFB2C:;
  c->r[27]=0u+0x00000000u; // 800AFB2C
  c->lr=0x800AFB34u; f_8007B524(c); // 800AFB30
  c->lr=0x800AFB38u; f_8006E224(c); // 800AFB34
  c->r[3]=c->r[3]+0x00010000u; // 800AFB38
  c->r[28]=R32(c->r[3]+0xFFFF8194u); // 800AFB3C
  c->lr=0x800AFB44u; f_8006E268(c); // 800AFB40
  c->lr=0x800AFB48u; f_800739E0(c); // 800AFB44
  c->r[30]=c->r[3]|c->r[3]; // 800AFB48
  c->lr=0x800AFB50u; f_8007B524(c); // 800AFB4C
  c->lr=0x800AFB54u; f_8006E224(c); // 800AFB50
  c->r[3]=c->r[3]+0x00010000u; // 800AFB54
  c->r[0]=R32(c->r[3]+0xFFFF818Cu); // 800AFB58
  c->r[29]=c->r[0]+c->r[30]; // 800AFB5C
  c->lr=0x800AFB64u; f_8007B524(c); // 800AFB60
  c->lr=0x800AFB68u; f_8006E224(c); // 800AFB64
  c->r[3]=c->r[3]+0x00010000u; // 800AFB68
  c->r[0]=R32(c->r[3]+0xFFFF8188u); // 800AFB6C
  cmps(c,0,(int32_t)c->r[0],4); // 800AFB70
  if (crb(c,2)) { goto L_800AFB7C; } // 800AFB74
  goto L_800AFB98; // 800AFB78
L_800AFB7C:;
  c->lr=0x800AFB80u; f_8007B524(c); // 800AFB7C
  c->lr=0x800AFB84u; f_8006E224(c); // 800AFB80
  c->r[4]=c->r[29]|c->r[29]; // 800AFB84
  c->lr=0x800AFB8Cu; f_800AE484(c); // 800AFB88
  cmps(c,0,(int32_t)c->r[3],0); // 800AFB8C
  if (crb(c,2)) { goto L_800AFB98; } // 800AFB90
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 800AFB94
L_800AFB98:;
  c->lr=0x800AFB9Cu; f_800F4430(c); // 800AFB98
  c->r[3]=c->r[3]+0x00000308u; // 800AFB9C
  c->r[4]=c->r[29]|c->r[29]; // 800AFBA0
  c->lr=0x800AFBA8u; f_801A1B14(c); // 800AFBA4
  c->r[30]=c->r[3]|c->r[3]; // 800AFBA8
  c->lr=0x800AFBB0u; f_800F4430(c); // 800AFBAC
  c->r[3]=c->r[3]+0x00000308u; // 800AFBB0
  c->r[4]=c->r[28]|c->r[28]; // 800AFBB4
  c->lr=0x800AFBBCu; f_801A1B14(c); // 800AFBB8
  c->r[4]=c->r[30]|c->r[30]; // 800AFBBC
  c->lr=0x800AFBC4u; f_802EBEB4(c); // 800AFBC0
  cmps(c,0,(int32_t)c->r[3],0); // 800AFBC4
  if (crb(c,2)) { goto L_800AFBD0; } // 800AFBC8
  c->r[27]=0u+0x00000001u; // 800AFBCC
L_800AFBD0:;
  c->lr=0x800AFBD4u; f_800F4430(c); // 800AFBD0
  c->r[3]=c->r[3]+0x00000308u; // 800AFBD4
  c->r[4]=c->r[29]|c->r[29]; // 800AFBD8
  c->lr=0x800AFBE0u; f_801A1B8C(c); // 800AFBDC
  c->r[30]=c->r[3]|c->r[3]; // 800AFBE0
  c->lr=0x800AFBE8u; f_800F4430(c); // 800AFBE4
  c->r[3]=c->r[3]+0x00000308u; // 800AFBE8
  c->r[4]=c->r[28]|c->r[28]; // 800AFBEC
  c->lr=0x800AFBF4u; f_801A1B8C(c); // 800AFBF0
  c->r[4]=c->r[30]|c->r[30]; // 800AFBF4
  c->lr=0x800AFBFCu; f_802EBEB4(c); // 800AFBF8
  cmps(c,0,(int32_t)c->r[3],0); // 800AFBFC
  if (crb(c,2)) { goto L_800AFC08; } // 800AFC00
  c->r[27]=0u+0x00000001u; // 800AFC04
L_800AFC08:;
  c->lr=0x800AFC0Cu; f_800F4430(c); // 800AFC08
  c->r[3]=c->r[3]+0x00000308u; // 800AFC0C
  c->r[4]=c->r[29]|c->r[29]; // 800AFC10
  c->lr=0x800AFC18u; f_801A1B10(c); // 800AFC14
  c->r[4]=R32(c->r[31]+0x00000BF0u); // 800AFC18
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800AFC1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AFC20
  if (crb(c,2)) { goto L_800AFC2C; } // 800AFC24
  c->r[27]=0u+0x00000001u; // 800AFC28
L_800AFC2C:;
  c->r[4]=R32(c->r[31]+0x00000BF4u); // 800AFC2C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800AFC30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AFC34
  if (crb(c,2)) { goto L_800AFC40; } // 800AFC38
  c->r[27]=0u+0x00000001u; // 800AFC3C
L_800AFC40:;
  cmps(c,0,(int32_t)c->r[27],0); // 800AFC40
  if (crb(c,2)) { goto L_800AFC74; } // 800AFC44
  c->r[6]=0u+0x00000002u; // 800AFC48
  c->r[5]=c->r[31]+0x00000008u; // 800AFC4C
  c->r[4]=0u+0x00000001u; // 800AFC50
  goto L_800AFC64; // 800AFC54
L_800AFC58:;
  W32(c->r[5]+0x00000BD8u,c->r[4]); // 800AFC58
  c->r[5]=c->r[5]+0x00000004u; // 800AFC5C
  c->r[6]=c->r[6]+0x00000001u; // 800AFC60
L_800AFC64:;
  c->r[3]=R32(c->r[31]+0x00000BF8u); // 800AFC64
  c->r[0]=c->r[3]+0x00000004u; // 800AFC68
  cmpu(c,0,c->r[6],c->r[0]); // 800AFC6C
  if (crb(c,0)) { IRQCHK(c); goto L_800AFC58; } // 800AFC70
L_800AFC74:;
  c->r[28]=0u+0x00000000u; // 800AFC74
  c->r[29]=c->r[31]|c->r[31]; // 800AFC78
  c->r[30]=c->r[31]+0x00000720u; // 800AFC7C
  goto L_800AFCAC; // 800AFC80
L_800AFC84:;
  c->r[0]=R32(c->r[29]+0x00000BD8u); // 800AFC84
  cmps(c,0,(int32_t)c->r[0],0); // 800AFC88
  if (crb(c,2)) { goto L_800AFCA0; } // 800AFC8C
  c->r[3]=c->r[30]|c->r[30]; // 800AFC90
  c->lr=0x800AFC98u; f_80076CD4(c); // 800AFC94
  c->r[3]=c->r[30]|c->r[30]; // 800AFC98
  c->lr=0x800AFCA0u; f_80076C5C(c); // 800AFC9C
L_800AFCA0:;
  c->r[29]=c->r[29]+0x00000004u; // 800AFCA0
  c->r[30]=c->r[30]+0x0000006Cu; // 800AFCA4
  c->r[28]=c->r[28]+0x00000001u; // 800AFCA8
L_800AFCAC:;
  c->r[3]=R32(c->r[31]+0x00000BF8u); // 800AFCAC
  c->r[0]=c->r[3]+0x00000004u; // 800AFCB0
  cmpu(c,0,c->r[28],c->r[0]); // 800AFCB4
  if (crb(c,0)) { IRQCHK(c); goto L_800AFC84; } // 800AFCB8
  c->lr=0x800AFCC0u; f_8007B524(c); // 800AFCBC
  c->lr=0x800AFCC4u; f_800A105C(c); // 800AFCC0
  cmps(c,0,(int32_t)c->r[3],0); // 800AFCC4
  if (crb(c,2)) { goto L_800AFCDC; } // 800AFCC8
  c->r[3]=c->r[31]+0x00000B64u; // 800AFCCC
  c->lr=0x800AFCD4u; f_80076CD4(c); // 800AFCD0
  c->r[3]=c->r[31]+0x00000B64u; // 800AFCD4
  c->lr=0x800AFCDCu; f_80076C5C(c); // 800AFCD8
L_800AFCDC:;
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800AFCDC
  c->r[0]=c->r[0]|0x00000002u; // 800AFCE0
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800AFCE4
  c->r[3]=c->r[31]|c->r[31]; // 800AFCE8
  c->r[4]=0u+0x00000000u; // 800AFCEC
  c->lr=0x800AFCF4u; f_800AFF14(c); // 800AFCF0
L_800AFCF4:;
  c->r[11]=c->r[1]+0x00000020u; // 800AFCF4
  c->lr=0x800AFCFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AFCF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFCFC
  c->lr=c->r[0]; // 800AFD00
  c->r[1]=c->r[1]+0x00000020u; // 800AFD04
  return; // 800AFD08
}

// fn_800AFD0C
void f_800AFD0C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800AFD0C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800AFD10
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800AFD14
  c->r[4]=0u+0x00000000u; // 800AFD18
  f_800AFF14(c); return; // 800AFD1C
}

// fn_800AFD20
void f_800AFD20(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000BF0u); // 800AFD20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AFD24
  if (!crb(c,2)) { goto L_800AFD34; } // 800AFD28
  c->r[3]=0u+0x00000000u; // 800AFD2C
  return; // 800AFD30
L_800AFD34:;
  c->r[0]=R32(c->r[3]+0x00000BF4u); // 800AFD34
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AFD38
  if (!crb(c,2)) { goto L_800AFD48; } // 800AFD3C
  c->r[3]=0u+0x00000001u; // 800AFD40
  return; // 800AFD44
L_800AFD48:;
  c->r[3]=0u+0xFFFFFFFFu; // 800AFD48
  return; // 800AFD4C
}

// fn_800AFD50
void f_800AFD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFD50
  c->r[0]=c->lr; // 800AFD54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFD58
  c->r[3]=c->r[1]+0x00000010u; // 800AFD5C
  c->r[4]=c->r[13]+0xFFFF8754u; // 800AFD60
  c->lr=0x800AFD68u; f_802E9548(c); // 800AFD64
  c->lr=0x800AFD6Cu; f_8007B524(c); // 800AFD68
  c->lr=0x800AFD70u; f_8006E224(c); // 800AFD6C
  c->r[3]=c->r[3]+0x00010000u; // 800AFD70
  c->r[5]=R32(c->r[3]+0xFFFF8190u); // 800AFD74
  c->r[3]=c->r[1]+0x00000008u; // 800AFD78
  c->r[4]=c->r[13]+0xFFFF873Cu; // 800AFD7C
  c->r[5]=R32(c->r[5]+0x00000038u); // 800AFD80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AFD84
  c->lr=0x800AFD8Cu; f_802E7CC4(c); // 800AFD88
  c->r[3]=c->r[1]+0x00000010u; // 800AFD8C
  c->r[4]=c->r[1]+0x00000008u; // 800AFD90
  c->lr=0x800AFD98u; f_802E964C(c); // 800AFD94
  c->r[3]=c->r[1]+0x00000010u; // 800AFD98
  c->r[4]=c->r[13]+0xFFFF875Cu; // 800AFD9C
  c->lr=0x800AFDA4u; f_802E964C(c); // 800AFDA0
  c->lr=0x800AFDA8u; f_8007B524(c); // 800AFDA4
  c->lr=0x800AFDACu; f_8006E224(c); // 800AFDA8
  c->lr=0x800AFDB0u; f_8006E3AC(c); // 800AFDAC
  c->r[3]=c->r[3]+0x00000720u; // 800AFDB0
  c->r[4]=c->r[1]+0x00000010u; // 800AFDB4
  c->r[5]=0u+0x00000000u; // 800AFDB8
  c->lr=0x800AFDC0u; f_80076E6C(c); // 800AFDBC
  cmps(c,0,(int32_t)c->r[3],1); // 800AFDC0
  if (!crb(c,2)) { goto L_800AFDE8; } // 800AFDC4
  c->lr=0x800AFDCCu; f_8007B524(c); // 800AFDC8
  c->lr=0x800AFDD0u; f_8006E224(c); // 800AFDCC
  c->lr=0x800AFDD4u; f_8006E3AC(c); // 800AFDD0
  c->r[3]=c->r[3]+0x00000720u; // 800AFDD4
  c->r[4]=0u+0x00000000u; // 800AFDD8
  c->lr=0x800AFDE0u; f_80076E60(c); // 800AFDDC
  c->lr=0x800AFDE4u; f_8006E4DC(c); // 800AFDE0
  goto L_800AFDEC; // 800AFDE4
L_800AFDE8:;
  c->r[3]=0u+0x00000000u; // 800AFDE8
L_800AFDEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFDEC
  c->lr=c->r[0]; // 800AFDF0
  c->r[1]=c->r[1]+0x00000020u; // 800AFDF4
  return; // 800AFDF8
}

// fn_800AFDFC
void f_800AFDFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFDFC
  c->r[0]=c->lr; // 800AFE00
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AFE04
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800AFE08
  W32(c->r[1]+0x00000028u,c->r[30]); // 800AFE0C
  c->r[30]=c->r[3]|c->r[3]; // 800AFE10
  cmps(c,0,(int32_t)c->r[4],4); // 800AFE14
  if (!crb(c,2)) { goto L_800AFEC0; } // 800AFE18
  c->lr=0x800AFE20u; f_8007B524(c); // 800AFE1C
  c->lr=0x800AFE24u; f_8006E224(c); // 800AFE20
  c->lr=0x800AFE28u; f_800AFF24(c); // 800AFE24
  c->r[0]=R32(c->r[3]+0x00000084u); // 800AFE28
  cmps(c,0,(int32_t)c->r[0],0); // 800AFE2C
  if (crb(c,2)) { goto L_800AFEC0; } // 800AFE30
  c->lr=0x800AFE38u; f_8007B524(c); // 800AFE34
  c->lr=0x800AFE3Cu; f_8006E224(c); // 800AFE38
  c->lr=0x800AFE40u; f_800AFF24(c); // 800AFE3C
  c->r[3]=R32(c->r[3]+0x00000084u); // 800AFE40
  c->r[31]=c->r[3]+0x000000C4u; // 800AFE44
  c->r[3]=c->r[1]+0x00000014u; // 800AFE48
  c->lr=0x800AFE50u; f_8004B0A4(c); // 800AFE4C
  c->r[3]=c->r[1]+0x00000008u; // 800AFE50
  c->lr=0x800AFE58u; f_8004B0A4(c); // 800AFE54
  c->r[3]=R32(c->r[30]+0x00000010u); // 800AFE58
  c->r[3]=c->r[3]+0x00000024u; // 800AFE5C
  c->r[4]=c->r[1]+0x00000014u; // 800AFE60
  c->lr=0x800AFE68u; f_8006E4CC(c); // 800AFE64
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFE68
  {uint32_t ea=c->r[2]+0xFFFF86DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFE6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AFE70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800AFE74
  c->lr=0x800AFE7Cu; f_800484B8(c); // 800AFE78
  c->r[4]=0u+0x00000000u; // 800AFE7C
  c->lr=0x800AFE84u; f_80048624(c); // 800AFE80
  c->r[4]=c->r[1]+0x00000008u; // 800AFE84
  c->r[5]=c->r[1]+0x00000014u; // 800AFE88
  c->lr=0x800AFE90u; f_8005F39C(c); // 800AFE8C
  c->r[3]=c->r[31]|c->r[31]; // 800AFE90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFE94
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFE98
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFE9C
  c->lr=0x800AFEA4u; f_80070424(c); // 800AFEA0
  c->lr=0x800AFEA8u; f_8005D98C(c); // 800AFEA4
  c->r[3]=c->r[31]|c->r[31]; // 800AFEA8
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFEAC
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFEB0
  c->lr=0x800AFEB8u; f_80070434(c); // 800AFEB4
  c->r[3]=c->r[31]|c->r[31]; // 800AFEB8
  c->lr=0x800AFEC0u; f_8004E1AC(c); // 800AFEBC
L_800AFEC0:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800AFEC0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800AFEC4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AFEC8
  c->lr=c->r[0]; // 800AFECC
  c->r[1]=c->r[1]+0x00000030u; // 800AFED0
  return; // 800AFED4
}

// fn_800AFED8
void f_800AFED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFED8
  c->r[0]=c->lr; // 800AFEDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFEE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFEE4
  c->r[31]=c->r[3]|c->r[3]; // 800AFEE8
  c->lr=0x800AFEF0u; f_800546F8(c); // 800AFEEC
  c->r[3]=0u+0x80460000u; // 800AFEF0
  c->r[0]=c->r[3]+0xFFFFFDC0u; // 800AFEF4
  W32(c->r[31]+0x00000000u,c->r[0]); // 800AFEF8
  c->r[3]=c->r[31]|c->r[31]; // 800AFEFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFF00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFF04
  c->lr=c->r[0]; // 800AFF08
  c->r[1]=c->r[1]+0x00000010u; // 800AFF0C
  return; // 800AFF10
}

// fn_800AFF14
void f_800AFF14(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 800AFF14
  return; // 800AFF18
}

// fn_800AFF1C
void f_800AFF1C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000B0u); // 800AFF1C
  return; // 800AFF20
}

// fn_800AFF24
void f_800AFF24(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800AFF24
  c->r[3]=c->r[3]+0xFFFF80F0u; // 800AFF28
  return; // 800AFF2C
}

// fn_800AFF30
void f_800AFF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFF30
  c->r[0]=c->lr; // 800AFF34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFF38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFF3C
  c->r[31]=c->r[3]|c->r[3]; // 800AFF40
  c->lr=0x800AFF48u; f_80078B74(c); // 800AFF44
  c->r[3]=0u+0x80460000u; // 800AFF48
  c->r[0]=c->r[3]+0xFFFFFED8u; // 800AFF4C
  W32(c->r[31]+0x00000058u,c->r[0]); // 800AFF50
  c->r[3]=c->r[31]+0x000000C8u; // 800AFF54
  c->r[4]=0u+0x800F0000u; // 800AFF58
  c->r[4]=c->r[4]+0x00001B48u; // 800AFF5C
  c->r[5]=0u+0x800F0000u; // 800AFF60
  c->r[5]=c->r[5]+0x00001B94u; // 800AFF64
  c->r[6]=0u+0x0000068Cu; // 800AFF68
  c->r[7]=0u+0x00000003u; // 800AFF6C
  c->lr=0x800AFF74u; f_802F07B0(c); // 800AFF70
  c->r[3]=c->r[31]+0x000071FCu; // 800AFF74
  c->lr=0x800AFF7Cu; f_800B4320(c); // 800AFF78
  c->r[3]=c->r[31]+0x00020000u; // 800AFF7C
  c->r[3]=c->r[3]+0xFFFFC438u; // 800AFF80
  c->lr=0x800AFF88u; f_800B42CC(c); // 800AFF84
  c->r[3]=c->r[31]+0x00040000u; // 800AFF88
  c->r[3]=c->r[3]+0x00006EDCu; // 800AFF8C
  c->lr=0x800AFF94u; f_800B424C(c); // 800AFF90
  c->r[3]=c->r[31]+0x00050000u; // 800AFF94
  c->r[3]=c->r[3]+0xFFFF8228u; // 800AFF98
  c->r[4]=0u+0x80050000u; // 800AFF9C
  c->r[4]=c->r[4]+0xFFFFCDFCu; // 800AFFA0
  c->r[5]=0u+0x80050000u; // 800AFFA4
  c->r[5]=c->r[5]+0xFFFFCE58u; // 800AFFA8
  c->r[6]=0u+0x000001E0u; // 800AFFAC
  c->r[7]=0u+0x00000007u; // 800AFFB0
  c->lr=0x800AFFB8u; f_802F07B0(c); // 800AFFB4
  c->r[3]=c->r[31]+0x00050000u; // 800AFFB8
  c->r[3]=c->r[3]+0xFFFF8F54u; // 800AFFBC
  c->lr=0x800AFFC4u; f_800592DC(c); // 800AFFC0
  c->r[3]=c->r[31]+0x00050000u; // 800AFFC4
  c->r[3]=c->r[3]+0xFFFF8F5Cu; // 800AFFC8
  c->lr=0x800AFFD0u; f_8004B0A4(c); // 800AFFCC
  c->r[3]=c->r[31]+0x00050000u; // 800AFFD0
  c->r[3]=c->r[3]+0xFFFF8F6Cu; // 800AFFD4
  c->lr=0x800AFFDCu; f_8004B0A4(c); // 800AFFD8
  c->r[0]=0u+0x00000000u; // 800AFFDC
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800AFFE0
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800AFFE4
  c->r[0]=0u+0xFFFFFFFFu; // 800AFFE8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800AFFEC
  c->r[3]=c->r[31]|c->r[31]; // 800AFFF0
  c->r[4]=c->r[13]+0xFFFF8788u; // 800AFFF4
  c->lr=0x800AFFFCu; f_80078E9C(c); // 800AFFF8
  c->lr=0x800B0000u; f_8007B524(c); // 800AFFFC
  c->lr=0x800B0004u; f_8006E224(c); // 800B0000
  c->r[4]=c->r[3]|c->r[3]; // 800B0004
  c->r[3]=c->r[31]|c->r[31]; // 800B0008
  c->r[5]=0u+0x00000000u; // 800B000C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B0010
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B0014
  c->ctr=c->r[12]; // 800B0018
  if (true) { c->lr=0x800B0020u; dispatch(c,c->ctr); } // 800B001C
  c->lr=0x800B0024u; f_8007B524(c); // 800B0020
  c->r[4]=0u+0x0000000Au; // 800B0024
  c->lr=0x800B002Cu; f_800A1B48(c); // 800B0028
  c->r[6]=c->r[3]|c->r[3]; // 800B002C
  c->r[3]=c->r[31]+0x000000C8u; // 800B0030
  c->r[4]=0u+0x00000003u; // 800B0034
  c->r[5]=0u+0x00000001u; // 800B0038
  c->lr=0x800B0040u; f_800F1C00(c); // 800B003C
  c->lr=0x800B0044u; f_8007B524(c); // 800B0040
  c->r[4]=0u+0x0000000Au; // 800B0044
  c->lr=0x800B004Cu; f_800A1B48(c); // 800B0048
  c->r[6]=c->r[3]|c->r[3]; // 800B004C
  c->r[3]=c->r[31]+0x00000754u; // 800B0050
  c->r[4]=0u+0x00000001u; // 800B0054
  c->r[5]=0u+0x00000000u; // 800B0058
  c->lr=0x800B0060u; f_800F1C00(c); // 800B005C
  c->lr=0x800B0064u; f_8007B524(c); // 800B0060
  c->r[4]=0u+0x0000000Au; // 800B0064
  c->lr=0x800B006Cu; f_800A1B48(c); // 800B0068
  c->r[6]=c->r[3]|c->r[3]; // 800B006C
  c->r[3]=c->r[31]+0x00000DE0u; // 800B0070
  c->r[4]=0u+0x00000001u; // 800B0074
  c->r[5]=0u+0x00000000u; // 800B0078
  c->lr=0x800B0080u; f_800F1C00(c); // 800B007C
  c->r[3]=c->r[31]|c->r[31]; // 800B0080
  c->r[4]=0u+0x00000000u; // 800B0084
  c->lr=0x800B008Cu; f_800B4244(c); // 800B0088
  c->r[3]=c->r[31]|c->r[31]; // 800B008C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0090
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0094
  c->lr=c->r[0]; // 800B0098
  c->r[1]=c->r[1]+0x00000010u; // 800B009C
  return; // 800B00A0
}

// dtor_800B00A4
void f_800B00A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B00A4
  c->r[0]=c->lr; // 800B00A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B00AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B00B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B00B4
  c->r[30]=c->r[3]|c->r[3]; // 800B00B8
  c->r[31]=c->r[4]|c->r[4]; // 800B00BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B00C0
  if (crb(c,2)) { goto L_800B00F4; } // 800B00C4
  c->r[3]=c->r[3]+0x0000008Cu; // 800B00C8
  c->r[4]=0u+0x80050000u; // 800B00CC
  c->r[4]=c->r[4]+0xFFFFCE58u; // 800B00D0
  c->r[5]=0u+0x000001E0u; // 800B00D4
  c->r[6]=0u+0x0000000Au; // 800B00D8
  c->lr=0x800B00E0u; f_802F08A8(c); // 800B00DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B00E0
  cmps(c,0,(int32_t)c->r[0],0); // 800B00E4
  if (!crb(c,1)) { goto L_800B00F4; } // 800B00E8
  c->r[3]=c->r[30]|c->r[30]; // 800B00EC
  c->lr=0x800B00F4u; f_80047B20(c); // 800B00F0
L_800B00F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800B00F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B00F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B00FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0100
  c->lr=c->r[0]; // 800B0104
  c->r[1]=c->r[1]+0x00000010u; // 800B0108
  return; // 800B010C
}

// fn_800B0110
void f_800B0110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0110
  c->r[0]=c->lr; // 800B0114
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B011C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B0120
  c->r[30]=c->r[3]|c->r[3]; // 800B0124
  c->r[31]=c->r[4]|c->r[4]; // 800B0128
  cmps(c,0,(int32_t)c->r[3],0); // 800B012C
  if (crb(c,2)) { goto L_800B01E0; } // 800B0130
  c->r[4]=0u+0x80460000u; // 800B0134
  c->r[0]=c->r[4]+0xFFFFFED8u; // 800B0138
  W32(c->r[3]+0x00000058u,c->r[0]); // 800B013C
  c->lr=0x800B0144u; f_8007B524(c); // 800B0140
  c->lr=0x800B0148u; f_8006E224(c); // 800B0144
  c->r[4]=c->r[3]|c->r[3]; // 800B0148
  c->r[3]=c->r[30]|c->r[30]; // 800B014C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B0150
  c->r[12]=R32(c->r[12]+0x00000014u); // 800B0154
  c->ctr=c->r[12]; // 800B0158
  if (true) { c->lr=0x800B0160u; dispatch(c,c->ctr); } // 800B015C
  c->r[3]=c->r[30]+0x00050000u; // 800B0160
  c->r[3]=c->r[3]+0xFFFF8228u; // 800B0164
  c->r[4]=0u+0x80050000u; // 800B0168
  c->r[4]=c->r[4]+0xFFFFCE58u; // 800B016C
  c->r[5]=0u+0x000001E0u; // 800B0170
  c->r[6]=0u+0x00000007u; // 800B0174
  c->lr=0x800B017Cu; f_802F08A8(c); // 800B0178
  c->r[3]=c->r[30]+0x00040000u; // 800B017C
  c->r[3]=c->r[3]+0x00006EDCu; // 800B0180
  c->r[4]=0u+0xFFFFFFFFu; // 800B0184
  c->lr=0x800B018Cu; f_800B00A4(c); // 800B0188
  c->r[3]=c->r[30]+0x00020000u; // 800B018C
  c->r[3]=c->r[3]+0xFFFFC438u; // 800B0190
  c->r[4]=0u+0xFFFFFFFFu; // 800B0194
  c->lr=0x800B019Cu; f_800B410C(c); // 800B0198
  c->r[3]=c->r[30]+0x000071FCu; // 800B019C
  c->r[4]=0u+0xFFFFFFFFu; // 800B01A0
  c->lr=0x800B01A8u; f_800B4178(c); // 800B01A4
  c->r[3]=c->r[30]+0x000000C8u; // 800B01A8
  c->r[4]=0u+0x800F0000u; // 800B01AC
  c->r[4]=c->r[4]+0x00001B94u; // 800B01B0
  c->r[5]=0u+0x0000068Cu; // 800B01B4
  c->r[6]=0u+0x00000003u; // 800B01B8
  c->lr=0x800B01C0u; f_802F08A8(c); // 800B01BC
  c->r[3]=c->r[30]|c->r[30]; // 800B01C0
  c->r[4]=0u+0x00000000u; // 800B01C4
  c->lr=0x800B01CCu; f_80078BF0(c); // 800B01C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B01CC
  cmps(c,0,(int32_t)c->r[0],0); // 800B01D0
  if (!crb(c,1)) { goto L_800B01E0; } // 800B01D4
  c->r[3]=c->r[30]|c->r[30]; // 800B01D8
  c->lr=0x800B01E0u; f_80047B20(c); // 800B01DC
L_800B01E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800B01E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B01E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B01E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B01EC
  c->lr=c->r[0]; // 800B01F0
  c->r[1]=c->r[1]+0x00000010u; // 800B01F4
  return; // 800B01F8
}

// fn_800B01FC
void f_800B01FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B01FC
  c->r[0]=c->lr; // 800B0200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0204
  c->r[0]=R32(c->r[3]+0x000000B0u); // 800B0208
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800B020C
  c->r[4]=0u+0x80430000u; // 800B0210
  c->r[0]=c->r[4]+0xFFFFD460u; // 800B0214
  c->r[12]=c->r[0]+c->r[5]; // 800B0218
  c->lr=0x800B0220u; f_802F09D0(c); // 800B021C
  c->r[0]=c->r[0]|0x00000000u; // 800B0220
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0224
  c->lr=c->r[0]; // 800B0228
  c->r[1]=c->r[1]+0x00000010u; // 800B022C
  return; // 800B0230
}

// fn_800B0234
void f_800B0234(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800B0234
  f_800B4244(c); return; // 800B0238
}

// fn_800B023C
void f_800B023C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B023C
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800B0240
  c->r[0]=0u-c->r[3]; // 800B0244
  c->r[0]=c->r[0]|c->r[3]; // 800B0248
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B024C
  return; // 800B0250
}

// fn_800B0254
void f_800B0254(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 800B0254
  f_800B4244(c); return; // 800B0258
}

// fn_800B025C
void f_800B025C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 800B025C
  return; // 800B0260
}

// fn_800B0264
void f_800B0264(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 800B0264
  f_800B4244(c); return; // 800B0268
}

// fn_800B026C
void f_800B026C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B026C
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 800B0270
  c->r[0]=0u-c->r[3]; // 800B0274
  c->r[0]=c->r[0]|c->r[3]; // 800B0278
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B027C
  return; // 800B0280
}

// fn_800B0284
void f_800B0284(Ctx* __restrict c) {
  return; // 800B0284
}

// fn_800B0288
void f_800B0288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0288
  c->r[0]=c->lr; // 800B028C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0294
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B0298
  c->r[30]=c->r[3]|c->r[3]; // 800B029C
  c->lr=0x800B02A4u; f_8007B524(c); // 800B02A0
  c->lr=0x800B02A8u; f_8006E224(c); // 800B02A4
  c->lr=0x800B02ACu; f_800B4474(c); // 800B02A8
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B02AC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B02B0
  c->ctr=c->r[12]; // 800B02B4
  if (true) { c->lr=0x800B02BCu; dispatch(c,c->ctr); } // 800B02B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B02BC
  if (crb(c,2)) { goto L_800B04F8; } // 800B02C0
  c->r[0]=0u+0x00000000u; // 800B02C4
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800B02C8
  W32(c->r[30]+0x000000BCu,c->r[0]); // 800B02CC
  c->r[4]=c->r[30]|c->r[30]; // 800B02D0
  c->r[3]=0u+0xFFFFFFFFu; // 800B02D4
  c->r[0]=0u+0x0000007Du; // 800B02D8
  c->ctr=c->r[0]; // 800B02DC
L_800B02E0:;
  W32(c->r[4]+0x0000146Cu,c->r[3]); // 800B02E0
  W32(c->r[4]+0x00001470u,c->r[3]); // 800B02E4
  W32(c->r[4]+0x00001474u,c->r[3]); // 800B02E8
  W32(c->r[4]+0x00001478u,c->r[3]); // 800B02EC
  W32(c->r[4]+0x0000147Cu,c->r[3]); // 800B02F0
  W32(c->r[4]+0x00001480u,c->r[3]); // 800B02F4
  W32(c->r[4]+0x00001484u,c->r[3]); // 800B02F8
  W32(c->r[4]+0x00001488u,c->r[3]); // 800B02FC
  W32(c->r[4]+0x0000148Cu,c->r[3]); // 800B0300
  W32(c->r[4]+0x00001490u,c->r[3]); // 800B0304
  W32(c->r[4]+0x00001494u,c->r[3]); // 800B0308
  W32(c->r[4]+0x00001498u,c->r[3]); // 800B030C
  W32(c->r[4]+0x0000149Cu,c->r[3]); // 800B0310
  W32(c->r[4]+0x000014A0u,c->r[3]); // 800B0314
  W32(c->r[4]+0x000014A4u,c->r[3]); // 800B0318
  W32(c->r[4]+0x000014A8u,c->r[3]); // 800B031C
  W32(c->r[4]+0x000014ACu,c->r[3]); // 800B0320
  W32(c->r[4]+0x000014B0u,c->r[3]); // 800B0324
  W32(c->r[4]+0x000014B4u,c->r[3]); // 800B0328
  W32(c->r[4]+0x000014B8u,c->r[3]); // 800B032C
  W32(c->r[4]+0x000014BCu,c->r[3]); // 800B0330
  W32(c->r[4]+0x000014C0u,c->r[3]); // 800B0334
  W32(c->r[4]+0x000014C4u,c->r[3]); // 800B0338
  W32(c->r[4]+0x000014C8u,c->r[3]); // 800B033C
  W32(c->r[4]+0x000014CCu,c->r[3]); // 800B0340
  W32(c->r[4]+0x000014D0u,c->r[3]); // 800B0344
  W32(c->r[4]+0x000014D4u,c->r[3]); // 800B0348
  W32(c->r[4]+0x000014D8u,c->r[3]); // 800B034C
  W32(c->r[4]+0x000014DCu,c->r[3]); // 800B0350
  W32(c->r[4]+0x000014E0u,c->r[3]); // 800B0354
  W32(c->r[4]+0x000014E4u,c->r[3]); // 800B0358
  W32(c->r[4]+0x000014E8u,c->r[3]); // 800B035C
  W32(c->r[4]+0x000014ECu,c->r[3]); // 800B0360
  W32(c->r[4]+0x000014F0u,c->r[3]); // 800B0364
  W32(c->r[4]+0x000014F4u,c->r[3]); // 800B0368
  W32(c->r[4]+0x000014F8u,c->r[3]); // 800B036C
  W32(c->r[4]+0x000014FCu,c->r[3]); // 800B0370
  W32(c->r[4]+0x00001500u,c->r[3]); // 800B0374
  W32(c->r[4]+0x00001504u,c->r[3]); // 800B0378
  W32(c->r[4]+0x00001508u,c->r[3]); // 800B037C
  c->r[4]=c->r[4]+0x000000A0u; // 800B0380
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B02E0; } // 800B0384
  c->r[31]=0u+0x00000000u; // 800B0388
  W32(c->r[30]+0x000071FCu,c->r[31]); // 800B038C
  W32(c->r[30]+0x00007200u,c->r[31]); // 800B0390
  c->r[3]=0u+0xFFFFFFFFu; // 800B0394
  W32(c->r[30]+0x00007204u,c->r[3]); // 800B0398
  W32(c->r[30]+0x00007208u,c->r[3]); // 800B039C
  W32(c->r[30]+0x00007230u,c->r[3]); // 800B03A0
  W32(c->r[30]+0x00007234u,c->r[3]); // 800B03A4
  c->r[0]=0u+0x00000006u; // 800B03A8
  W32(c->r[30]+0x00007218u,c->r[0]); // 800B03AC
  W32(c->r[30]+0x0000721Cu,c->r[0]); // 800B03B0
  W32(c->r[30]+0x00007220u,c->r[3]); // 800B03B4
  W32(c->r[30]+0x00007224u,c->r[3]); // 800B03B8
  c->r[3]=c->r[30]+0x00007228u; // 800B03BC
  c->r[4]=c->r[30]+0x00007220u; // 800B03C0
  c->lr=0x800B03C8u; f_800670A8(c); // 800B03C4
  c->r[3]=c->r[30]|c->r[30]; // 800B03C8
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B03CC
  c->r[0]=0u+0x0000000Du; // 800B03D0
  c->ctr=c->r[0]; // 800B03D4
L_800B03D8:;
  W32(c->r[3]+0x0000723Cu,c->r[31]); // 800B03D8
  W32(c->r[3]+0x00007240u,c->r[31]); // 800B03DC
  {uint32_t ea=c->r[3]+0x00007244u; WF32(ea,c->f[0]);} // 800B03E0
  {uint32_t ea=c->r[3]+0x00007248u; WF32(ea,c->f[0]);} // 800B03E4
  W32(c->r[3]+0x0000743Cu,c->r[31]); // 800B03E8
  W32(c->r[3]+0x00007440u,c->r[31]); // 800B03EC
  {uint32_t ea=c->r[3]+0x00007444u; WF32(ea,c->f[0]);} // 800B03F0
  {uint32_t ea=c->r[3]+0x00007448u; WF32(ea,c->f[0]);} // 800B03F4
  W32(c->r[3]+0x0000763Cu,c->r[31]); // 800B03F8
  W32(c->r[3]+0x00007640u,c->r[31]); // 800B03FC
  {uint32_t ea=c->r[3]+0x00007644u; WF32(ea,c->f[0]);} // 800B0400
  {uint32_t ea=c->r[3]+0x00007648u; WF32(ea,c->f[0]);} // 800B0404
  W32(c->r[3]+0x0000783Cu,c->r[31]); // 800B0408
  W32(c->r[3]+0x00007840u,c->r[31]); // 800B040C
  {uint32_t ea=c->r[3]+0x00007844u; WF32(ea,c->f[0]);} // 800B0410
  {uint32_t ea=c->r[3]+0x00007848u; WF32(ea,c->f[0]);} // 800B0414
  W32(c->r[3]+0x00007A3Cu,c->r[31]); // 800B0418
  W32(c->r[3]+0x00007A40u,c->r[31]); // 800B041C
  {uint32_t ea=c->r[3]+0x00007A44u; WF32(ea,c->f[0]);} // 800B0420
  {uint32_t ea=c->r[3]+0x00007A48u; WF32(ea,c->f[0]);} // 800B0424
  W32(c->r[3]+0x00007C3Cu,c->r[31]); // 800B0428
  W32(c->r[3]+0x00007C40u,c->r[31]); // 800B042C
  {uint32_t ea=c->r[3]+0x00007C44u; WF32(ea,c->f[0]);} // 800B0430
  {uint32_t ea=c->r[3]+0x00007C48u; WF32(ea,c->f[0]);} // 800B0434
  c->r[4]=c->r[3]+0x00000C00u; // 800B0438
  W32(c->r[4]+0x0000723Cu,c->r[31]); // 800B043C
  W32(c->r[4]+0x00007240u,c->r[31]); // 800B0440
  {uint32_t ea=c->r[4]+0x00007244u; WF32(ea,c->f[0]);} // 800B0444
  {uint32_t ea=c->r[4]+0x00007248u; WF32(ea,c->f[0]);} // 800B0448
  W32(c->r[4]+0x0000743Cu,c->r[31]); // 800B044C
  W32(c->r[4]+0x00007440u,c->r[31]); // 800B0450
  {uint32_t ea=c->r[4]+0x00007444u; WF32(ea,c->f[0]);} // 800B0454
  {uint32_t ea=c->r[4]+0x00007448u; WF32(ea,c->f[0]);} // 800B0458
  W32(c->r[4]+0x0000763Cu,c->r[31]); // 800B045C
  W32(c->r[4]+0x00007640u,c->r[31]); // 800B0460
  {uint32_t ea=c->r[4]+0x00007644u; WF32(ea,c->f[0]);} // 800B0464
  {uint32_t ea=c->r[4]+0x00007648u; WF32(ea,c->f[0]);} // 800B0468
  W32(c->r[4]+0x0000783Cu,c->r[31]); // 800B046C
  W32(c->r[4]+0x00007840u,c->r[31]); // 800B0470
  {uint32_t ea=c->r[4]+0x00007844u; WF32(ea,c->f[0]);} // 800B0474
  {uint32_t ea=c->r[4]+0x00007848u; WF32(ea,c->f[0]);} // 800B0478
  W32(c->r[4]+0x00007A3Cu,c->r[31]); // 800B047C
  W32(c->r[4]+0x00007A40u,c->r[31]); // 800B0480
  {uint32_t ea=c->r[4]+0x00007A44u; WF32(ea,c->f[0]);} // 800B0484
  {uint32_t ea=c->r[4]+0x00007A48u; WF32(ea,c->f[0]);} // 800B0488
  W32(c->r[4]+0x00007C3Cu,c->r[31]); // 800B048C
  W32(c->r[4]+0x00007C40u,c->r[31]); // 800B0490
  {uint32_t ea=c->r[4]+0x00007C44u; WF32(ea,c->f[0]);} // 800B0494
  {uint32_t ea=c->r[4]+0x00007C48u; WF32(ea,c->f[0]);} // 800B0498
  c->r[4]=c->r[3]+0x00001800u; // 800B049C
  W32(c->r[4]+0x0000723Cu,c->r[31]); // 800B04A0
  W32(c->r[4]+0x00007240u,c->r[31]); // 800B04A4
  {uint32_t ea=c->r[4]+0x00007244u; WF32(ea,c->f[0]);} // 800B04A8
  {uint32_t ea=c->r[4]+0x00007248u; WF32(ea,c->f[0]);} // 800B04AC
  c->r[3]=c->r[3]+0x00001A00u; // 800B04B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B03D8; } // 800B04B4
  c->r[4]=0u+0x00000000u; // 800B04B8
  c->r[3]=c->r[30]+0x00020000u; // 800B04BC
  W32(c->r[3]+0xFFFFC438u,c->r[4]); // 800B04C0
  W32(c->r[3]+0xFFFFC43Cu,c->r[4]); // 800B04C4
  c->r[0]=0u+0x00000006u; // 800B04C8
  W32(c->r[3]+0xFFFFC440u,c->r[0]); // 800B04CC
  W32(c->r[3]+0xFFFFC444u,c->r[0]); // 800B04D0
  c->r[0]=0u+0xFFFFFFFFu; // 800B04D4
  W32(c->r[3]+0xFFFFC448u,c->r[0]); // 800B04D8
  W32(c->r[3]+0xFFFFC44Cu,c->r[0]); // 800B04DC
  c->r[3]=c->r[30]+0x00040000u; // 800B04E0
  W32(c->r[3]+0x00006EDCu,c->r[4]); // 800B04E4
  W32(c->r[3]+0x00006EE0u,c->r[4]); // 800B04E8
  c->r[3]=c->r[30]|c->r[30]; // 800B04EC
  c->r[4]=0u+0x00000002u; // 800B04F0
  c->lr=0x800B04F8u; f_800B4244(c); // 800B04F4
L_800B04F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B04F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B04FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0500
  c->lr=c->r[0]; // 800B0504
  c->r[1]=c->r[1]+0x00000010u; // 800B0508
  return; // 800B050C
}

// fn_800B0510
void f_800B0510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0510
  c->r[0]=c->lr; // 800B0514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B051C
  c->r[31]=c->r[3]|c->r[3]; // 800B0520
  c->lr=0x800B0528u; f_800B1874(c); // 800B0524
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800B0528
  c->r[0]=c->r[0]|0x00000001u; // 800B052C
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800B0530
  c->r[3]=c->r[31]|c->r[31]; // 800B0534
  c->r[4]=0u+0x00000003u; // 800B0538
  c->lr=0x800B0540u; f_800B4244(c); // 800B053C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0544
  c->lr=c->r[0]; // 800B0548
  c->r[1]=c->r[1]+0x00000010u; // 800B054C
  return; // 800B0550
}

// fn_800B0554
void f_800B0554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0554
  c->r[0]=c->lr; // 800B0558
  W32(c->r[1]+0x00000194u,c->r[0]); // 800B055C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 800B0560
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 800B0564
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 800B0568
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 800B056C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[29]);} // 800B0570
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,29,ea,0,0);} // 800B0574
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[28]);} // 800B0578
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,28,ea,0,0);} // 800B057C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[27]);} // 800B0580
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,27,ea,0,0);} // 800B0584
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[26]);} // 800B0588
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,26,ea,0,0);} // 800B058C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[25]);} // 800B0590
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,25,ea,0,0);} // 800B0594
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[24]);} // 800B0598
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,24,ea,0,0);} // 800B059C
  c->r[11]=c->r[1]+0x00000110u; // 800B05A0
  c->lr=0x800B05A8u; f_802F0D94(c); // 800B05A4
  c->r[24]=c->r[3]|c->r[3]; // 800B05A8
  c->lr=0x800B05B0u; f_8007B524(c); // 800B05AC
  c->lr=0x800B05B4u; f_8006E224(c); // 800B05B0
  c->lr=0x800B05B8u; f_800897A8(c); // 800B05B4
  c->r[31]=c->r[3]|c->r[3]; // 800B05B8
  c->r[30]=c->r[24]+0x00050000u; // 800B05BC
  c->r[30]=c->r[30]+0xFFFF8F48u; // 800B05C0
  c->r[3]=c->r[1]+0x0000005Cu; // 800B05C4
  c->lr=0x800B05CCu; f_8004B0A4(c); // 800B05C8
  c->r[3]=c->r[1]+0x00000088u; // 800B05CC
  c->lr=0x800B05D4u; f_8004B0A4(c); // 800B05D0
  c->r[3]=c->r[1]+0x00000094u; // 800B05D4
  c->lr=0x800B05DCu; f_8004B0A4(c); // 800B05D8
  c->r[3]=c->r[1]+0x000000A0u; // 800B05DC
  c->lr=0x800B05E4u; f_8004B0A4(c); // 800B05E0
  c->r[3]=c->r[1]+0x000000ACu; // 800B05E4
  c->lr=0x800B05ECu; f_8004B0A4(c); // 800B05E8
  c->r[3]=c->r[1]+0x00000068u; // 800B05EC
  c->lr=0x800B05F4u; f_800592DC(c); // 800B05F0
  c->r[3]=c->r[1]+0x00000070u; // 800B05F4
  c->lr=0x800B05FCu; f_800592DC(c); // 800B05F8
  c->r[3]=c->r[1]+0x00000078u; // 800B05FC
  c->lr=0x800B0604u; f_800592DC(c); // 800B0600
  c->r[3]=c->r[1]+0x00000080u; // 800B0604
  c->lr=0x800B060Cu; f_800592DC(c); // 800B0608
  c->r[3]=c->r[1]+0x0000001Cu; // 800B060C
  c->lr=0x800B0614u; f_80047C5C(c); // 800B0610
  c->r[3]=c->r[24]|c->r[24]; // 800B0614
  c->r[4]=0u+0x00000000u; // 800B0618
  c->lr=0x800B0620u; f_800B2B7C(c); // 800B061C
  c->r[3]=c->r[24]|c->r[24]; // 800B0620
  c->lr=0x800B0628u; f_800B36E4(c); // 800B0624
  c->r[0]=0u+0x00000000u; // 800B0628
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B062C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0630
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B0634
  c->r[28]=0u+0x00000000u; // 800B0638
  c->r[3]=c->r[30]|c->r[30]; // 800B063C
  c->lr=0x800B0644u; f_8004B018(c); // 800B0640
  c->r[15]=c->r[3]|c->r[3]; // 800B0644
  c->r[3]=0u+0x80460000u; // 800B0648
  c->r[22]=c->r[3]+0xFFFFFE78u; // 800B064C
  c->r[21]=0u+0x804C0000u; // 800B0650
  c->r[19]=0u+0x804C0000u; // 800B0654
  c->r[20]=c->r[19]+0x000025D0u; // 800B0658
  {uint32_t ea=c->r[2]+0xFFFF86FCu; c->f[24]=c->ps1[24]=RF32(ea);} // 800B065C
  {uint32_t ea=c->r[2]+0xFFFF86ECu; c->f[27]=c->ps1[27]=RF32(ea);} // 800B0660
  c->r[18]=c->r[24]+0x00050000u; // 800B0664
  {uint32_t ea=c->r[2]+0xFFFF86F0u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B0668
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B066C
  {uint32_t ea=c->r[2]+0xFFFF86F4u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B0670
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B0674
  c->r[3]=0u+0x80460000u; // 800B0678
  c->r[23]=c->r[3]+0xFFFFFE50u; // 800B067C
  c->r[14]=0u+0x000000FEu; // 800B0680
  goto L_800B0B10; // 800B0684
L_800B0688:;
  c->r[3]=c->r[30]|c->r[30]; // 800B0688
  c->r[4]=c->r[15]|c->r[15]; // 800B068C
  c->lr=0x800B0694u; f_8028CCD8(c); // 800B0690
  c->r[29]=c->r[3]|c->r[3]; // 800B0694
  c->r[3]=c->r[31]|c->r[31]; // 800B0698
  c->r[4]=c->r[1]+0x00000030u; // 800B069C
  c->r[5]=R32(c->r[15]+0x00000010u); // 800B06A0
  c->lr=0x800B06A8u; f_80068458(c); // 800B06A4
  c->r[26]=0u+0x00000000u; // 800B06A8
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B06AC
  cmps(c,0,(int32_t)c->r[0],4); // 800B06B0
  if (crb(c,2)) { goto L_800B06F4; } // 800B06B4
  if (!crb(c,0)) { goto L_800B06CC; } // 800B06B8
  cmps(c,0,(int32_t)c->r[0],2); // 800B06BC
  if (crb(c,2)) { goto L_800B07D0; } // 800B06C0
  if (!crb(c,0)) { goto L_800B06D8; } // 800B06C4
  goto L_800B0870; // 800B06C8
L_800B06CC:;
  cmps(c,0,(int32_t)c->r[0],7); // 800B06CC
  if (!crb(c,0)) { goto L_800B0870; } // 800B06D0
  goto L_800B07D0; // 800B06D4
L_800B06D8:;
  c->r[28]=c->r[15]|c->r[15]; // 800B06D8
  c->r[3]=c->r[24]|c->r[24]; // 800B06DC
  c->r[4]=c->r[1]+0x00000030u; // 800B06E0
  c->r[5]=0u+0x00000001u; // 800B06E4
  c->lr=0x800B06ECu; f_800B304C(c); // 800B06E8
  c->r[26]=0u+0x00000001u; // 800B06EC
  goto L_800B0870; // 800B06F0
L_800B06F4:;
  c->r[0]=R32(c->r[24]+0x000000B8u); // 800B06F4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800B06F8
  cmps(c,0,(int32_t)c->r[0],0); // 800B06FC
  if (crb(c,2)) { goto L_800B0708; } // 800B0700
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B0704
L_800B0708:;
  c->lr=0x800B070Cu; f_8007B524(c); // 800B0708
  c->lr=0x800B0710u; f_800A105C(c); // 800B070C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0710
  if (crb(c,2)) { goto L_800B071C; } // 800B0714
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B0718
L_800B071C:;
  c->r[3]=c->r[1]+0x00000050u; // 800B071C
  c->lr=0x800B0724u; f_8004B0A4(c); // 800B0720
  c->lr=0x800B0728u; f_8007B524(c); // 800B0724
  c->r[4]=c->r[1]+0x00000028u; // 800B0728
  c->lr=0x800B0730u; f_8009CFD0(c); // 800B072C
  c->lr=0x800B0734u; f_8007B524(c); // 800B0730
  c->r[4]=c->r[1]+0x00000050u; // 800B0734
  c->lr=0x800B073Cu; f_8009D00C(c); // 800B0738
  c->r[3]=R32(c->r[15]+0x00000010u); // 800B073C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0740
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0744
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[27]); // 800B0748
  fcmp(c,0,c->f[2],c->f[0]); // 800B074C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B0750
  if (!crb(c,2)) { goto L_800B0794; } // 800B0754
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[1]); // 800B0758
  fcmp(c,0,c->f[2],c->f[0]); // 800B075C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B0760
  if (!crb(c,2)) { goto L_800B0794; } // 800B0764
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0768
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B076C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[27]); // 800B0770
  fcmp(c,0,c->f[2],c->f[0]); // 800B0774
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B0778
  if (!crb(c,2)) { goto L_800B0794; } // 800B077C
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[1]); // 800B0780
  fcmp(c,0,c->f[2],c->f[0]); // 800B0784
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B0788
  if (!crb(c,2)) { goto L_800B0794; } // 800B078C
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B0790
L_800B0794:;
  c->r[3]=c->r[31]|c->r[31]; // 800B0794
  c->r[4]=c->r[1]+0x00000028u; // 800B0798
  c->r[5]=0u+0x00000000u; // 800B079C
  c->lr=0x800B07A4u; f_80067B50(c); // 800B07A0
  c->r[16]=c->r[3]|c->r[3]; // 800B07A4
  cmps(c,0,(int32_t)c->r[3],-1); // 800B07A8
  if (crb(c,2)) { goto L_800B0870; } // 800B07AC
  c->r[3]=c->r[31]|c->r[31]; // 800B07B0
  c->r[4]=c->r[1]+0x00000030u; // 800B07B4
  c->r[5]=0u+0x00000000u; // 800B07B8
  c->lr=0x800B07C0u; f_80067B50(c); // 800B07BC
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[3]); // 800B07C0
  if (!crb(c,2)) { goto L_800B0870; } // 800B07C4
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B07C8
  goto L_800B0870; // 800B07CC
L_800B07D0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B07D0
  c->r[4]=c->r[1]+0x00000030u; // 800B07D4
  c->r[5]=0u+0x00000000u; // 800B07D8
  c->lr=0x800B07E0u; f_80067D0C(c); // 800B07DC
  c->r[0]=rotl(c->r[3],0)&0x00000080u; // 800B07E0
  cmps(c,0,(int32_t)c->r[0],0); // 800B07E4
  if (crb(c,2)) { goto L_800B07F0; } // 800B07E8
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B07EC
L_800B07F0:;
  c->lr=0x800B07F4u; f_8007B524(c); // 800B07F0
  c->lr=0x800B07F8u; f_800A105C(c); // 800B07F4
  cmps(c,0,(int32_t)c->r[3],0); // 800B07F8
  if (crb(c,2)) { goto L_800B0804; } // 800B07FC
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B0800
L_800B0804:;
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B0804
  cmps(c,0,(int32_t)c->r[0],5); // 800B0808
  if (crb(c,2)) { goto L_800B0844; } // 800B080C
  if (!crb(c,0)) { goto L_800B0820; } // 800B0810
  cmps(c,0,(int32_t)c->r[0],2); // 800B0814
  if (crb(c,2)) { goto L_800B082C; } // 800B0818
  goto L_800B0870; // 800B081C
L_800B0820:;
  cmps(c,0,(int32_t)c->r[0],7); // 800B0820
  if (!crb(c,0)) { goto L_800B0870; } // 800B0824
  goto L_800B085C; // 800B0828
L_800B082C:;
  c->r[0]=R32(c->r[24]+0x000000B8u); // 800B082C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 800B0830
  cmps(c,0,(int32_t)c->r[0],0); // 800B0834
  if (crb(c,2)) { goto L_800B0870; } // 800B0838
  c->r[26]=0u+0x00000001u; // 800B083C
  goto L_800B0870; // 800B0840
L_800B0844:;
  c->r[0]=R32(c->r[24]+0x000000B8u); // 800B0844
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 800B0848
  cmps(c,0,(int32_t)c->r[0],0); // 800B084C
  if (crb(c,2)) { goto L_800B0870; } // 800B0850
  c->r[26]=R32(c->r[15]+0x00000008u); // 800B0854
  goto L_800B0870; // 800B0858
L_800B085C:;
  c->r[0]=R32(c->r[24]+0x000000B8u); // 800B085C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 800B0860
  cmps(c,0,(int32_t)c->r[0],0); // 800B0864
  if (crb(c,2)) { goto L_800B0870; } // 800B0868
  c->r[26]=0u+0x00000001u; // 800B086C
L_800B0870:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 800B0870
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0874
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[0]); // 800B0878
  {uint32_t ea=c->r[18]+0xFFFF8F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B087C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B0880
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B0884
  c->r[3]=R32(c->r[15]+0x00000010u); // 800B0888
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B088C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[0]); // 800B0890
  {uint32_t ea=c->r[18]+0xFFFF8F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0894
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B0898
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800B089C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[29]);} // 800B08A0
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[29]);} // 800B08A4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[29]);} // 800B08A8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[29]);} // 800B08AC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[29]);} // 800B08B0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[30]);} // 800B08B4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[30]);} // 800B08B8
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 800B08BC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[30]);} // 800B08C0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[31]);} // 800B08C4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[31]);} // 800B08C8
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[30]);} // 800B08CC
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[31]);} // 800B08D0
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B08D4
  cmps(c,0,(int32_t)c->r[0],3); // 800B08D8
  if (crb(c,2)) { goto L_800B08E4; } // 800B08DC
  goto L_800B0950; // 800B08E0
L_800B08E4:;
  c->lr=0x800B08E8u; f_8007B524(c); // 800B08E4
  c->r[4]=c->r[19]+0x000025D0u; // 800B08E8
  c->lr=0x800B08F0u; f_8009D048(c); // 800B08EC
  c->r[3]=c->r[21]+0x000025E0u; // 800B08F0
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B08F4
  c->f[2]=c->f[1]; // 800B08F8
  {uint32_t ea=c->r[20]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B08FC
  c->f[0]=-c->f[0]; // 800B0900
  c->f[3]=c->ps1[3]=S(c->f[24]+c->f[0]); // 800B0904
  c->lr=0x800B090Cu; f_8004B0A8(c); // 800B0908
  c->r[3]=c->r[21]+0x000025E0u; // 800B090C
  c->r[4]=c->r[1]+0x0000005Cu; // 800B0910
  c->r[5]=c->r[3]|c->r[3]; // 800B0914
  c->lr=0x800B091Cu; f_800B4404(c); // 800B0918
  c->r[27]=0u+0x00000000u; // 800B091C
  c->r[16]=c->r[1]+0x00000088u; // 800B0920
  c->r[17]=c->r[16]|c->r[16]; // 800B0924
L_800B0928:;
  c->r[3]=c->r[17]|c->r[17]; // 800B0928
  c->r[4]=c->r[21]+0x000025E0u; // 800B092C
  c->r[5]=c->r[16]|c->r[16]; // 800B0930
  c->lr=0x800B0938u; f_8005FF94(c); // 800B0934
  c->r[16]=c->r[16]+0x0000000Cu; // 800B0938
  c->r[17]=c->r[17]+0x0000000Cu; // 800B093C
  c->r[27]=c->r[27]+0x00000001u; // 800B0940
  cmpu(c,0,c->r[27],0x00000004u); // 800B0944
  if (crb(c,0)) { IRQCHK(c); goto L_800B0928; } // 800B0948
  goto L_800B0974; // 800B094C
L_800B0950:;
  c->r[17]=0u+0x00000000u; // 800B0950
  c->r[16]=c->r[1]+0x00000088u; // 800B0954
L_800B0958:;
  c->r[3]=c->r[16]|c->r[16]; // 800B0958
  c->r[4]=c->r[1]+0x0000005Cu; // 800B095C
  c->lr=0x800B0964u; f_8009CB30(c); // 800B0960
  c->r[16]=c->r[16]+0x0000000Cu; // 800B0964
  c->r[17]=c->r[17]+0x00000001u; // 800B0968
  cmpu(c,0,c->r[17],0x00000004u); // 800B096C
  if (crb(c,0)) { IRQCHK(c); goto L_800B0958; } // 800B0970
L_800B0974:;
  c->r[17]=0u+0x00000000u; // 800B0974
  c->r[16]=c->r[1]+0x00000068u; // 800B0978
L_800B097C:;
  c->r[3]=c->r[16]|c->r[16]; // 800B097C
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B0980
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B0984
  c->r[4]=R32(c->r[22]+c->r[0]); // 800B0988
  c->lr=0x800B0990u; f_800593A0(c); // 800B098C
  c->r[16]=c->r[16]+0x00000008u; // 800B0990
  c->r[17]=c->r[17]+0x00000001u; // 800B0994
  cmpu(c,0,c->r[17],0x00000004u); // 800B0998
  if (crb(c,0)) { IRQCHK(c); goto L_800B097C; } // 800B099C
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B09A0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B09A4
  c->r[3]=c->r[22]+c->r[0]; // 800B09A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B09AC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B09B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B09B4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B09B8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800B09BC
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B09C0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B09C4
  c->r[3]=c->r[22]+c->r[0]; // 800B09C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B09CC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B09D0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B09D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B09D8
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800B09DC
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B09E0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B09E4
  c->r[3]=c->r[22]+c->r[0]; // 800B09E8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B09EC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B09F0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B09F4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B09F8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B09FC
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B0A00
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B0A04
  c->r[3]=c->r[22]+c->r[0]; // 800B0A08
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B0A0C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0A10
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0A14
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B0A18
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800B0A1C
  c->r[3]=c->r[1]+0x0000001Cu; // 800B0A20
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B0A24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B0A28
  c->r[4]=R32(c->r[23]+c->r[0]); // 800B0A2C
  c->lr=0x800B0A34u; f_8005D48C(c); // 800B0A30
  W8(c->r[1]+0x0000001Fu,c->r[14]); // 800B0A34
  c->r[27]=0u+0x00000000u; // 800B0A38
  c->r[0]=R32(c->r[15]+0x00000000u); // 800B0A3C
  cmps(c,0,(int32_t)c->r[0],5); // 800B0A40
  if (!crb(c,0)) { goto L_800B0A58; } // 800B0A44
  cmps(c,0,(int32_t)c->r[0],2); // 800B0A48
  if (crb(c,2)) { goto L_800B0A84; } // 800B0A4C
  if (!crb(c,0)) { goto L_800B0A64; } // 800B0A50
  goto L_800B0A90; // 800B0A54
L_800B0A58:;
  cmps(c,0,(int32_t)c->r[0],7); // 800B0A58
  if (!crb(c,0)) { goto L_800B0A90; } // 800B0A5C
  goto L_800B0A74; // 800B0A60
L_800B0A64:;
  c->r[27]=c->r[24]+0x00050000u; // 800B0A64
  c->r[27]=c->r[27]+0xFFFF85E8u; // 800B0A68
  c->r[25]=c->r[1]+0x00000018u; // 800B0A6C
  goto L_800B0A90; // 800B0A70
L_800B0A74:;
  c->r[27]=c->r[24]+0x00050000u; // 800B0A74
  c->r[27]=c->r[27]+0xFFFF87C8u; // 800B0A78
  c->r[25]=c->r[1]+0x00000014u; // 800B0A7C
  goto L_800B0A90; // 800B0A80
L_800B0A84:;
  c->r[27]=c->r[24]+0x00050000u; // 800B0A84
  c->r[27]=c->r[27]+0xFFFF89A8u; // 800B0A88
  c->r[25]=c->r[1]+0x00000010u; // 800B0A8C
L_800B0A90:;
  c->r[15]=0u+0x00000000u; // 800B0A90
  c->r[17]=c->r[1]+0x00000068u; // 800B0A94
  c->r[16]=c->r[1]+0x00000088u; // 800B0A98
L_800B0A9C:;
  c->r[3]=c->r[27]|c->r[27]; // 800B0A9C
  c->r[4]=R32(c->r[25]+0x00000000u); // 800B0AA0
  c->r[5]=c->r[15]|c->r[15]; // 800B0AA4
  c->r[6]=c->r[1]+0x0000001Cu; // 800B0AA8
  c->lr=0x800B0AB0u; f_8004D508(c); // 800B0AAC
  c->r[3]=c->r[27]|c->r[27]; // 800B0AB0
  c->r[4]=R32(c->r[25]+0x00000000u); // 800B0AB4
  c->r[5]=c->r[15]|c->r[15]; // 800B0AB8
  c->r[6]=c->r[17]|c->r[17]; // 800B0ABC
  c->r[7]=0u+0xFFFFFFFFu; // 800B0AC0
  c->lr=0x800B0AC8u; f_8004D650(c); // 800B0AC4
  c->r[3]=c->r[27]|c->r[27]; // 800B0AC8
  c->r[4]=R32(c->r[25]+0x00000000u); // 800B0ACC
  c->r[5]=c->r[15]|c->r[15]; // 800B0AD0
  c->r[6]=c->r[16]|c->r[16]; // 800B0AD4
  c->lr=0x800B0ADCu; f_8004D384(c); // 800B0AD8
  c->r[17]=c->r[17]+0x00000008u; // 800B0ADC
  c->r[16]=c->r[16]+0x0000000Cu; // 800B0AE0
  c->r[15]=c->r[15]+0x00000001u; // 800B0AE4
  cmpu(c,0,c->r[15],0x00000004u); // 800B0AE8
  if (crb(c,0)) { IRQCHK(c); goto L_800B0A9C; } // 800B0AEC
  c->r[3]=c->r[27]|c->r[27]; // 800B0AF0
  c->r[4]=R32(c->r[25]+0x00000000u); // 800B0AF4
  c->r[5]=c->r[26]|c->r[26]; // 800B0AF8
  c->lr=0x800B0B00u; f_8004D6F8(c); // 800B0AFC
  c->r[3]=R32(c->r[25]+0x00000000u); // 800B0B00
  c->r[0]=c->r[3]+0x00000001u; // 800B0B04
  W32(c->r[25]+0x00000000u,c->r[0]); // 800B0B08
  c->r[15]=c->r[29]|c->r[29]; // 800B0B0C
L_800B0B10:;
  cmps(c,0,(int32_t)c->r[15],0); // 800B0B10
  if (!crb(c,2)) { IRQCHK(c); goto L_800B0688; } // 800B0B14
  c->r[14]=c->r[24]+0x00050000u; // 800B0B18
  c->r[14]=c->r[14]+0xFFFF8B88u; // 800B0B1C
  cmps(c,0,(int32_t)c->r[28],0); // 800B0B20
  if (crb(c,2)) { goto L_800B0B9C; } // 800B0B24
  c->r[3]=0u+0x00000001u; // 800B0B28
  c->lr=0x800B0B30u; f_8005D714(c); // 800B0B2C
  {uint32_t ea=c->r[24]+0x00006290u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B30
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800B0B34
  {uint32_t ea=c->r[24]+0x00006290u; WF32(ea,c->f[1]);} // 800B0B38
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B3C
  fcmp(c,0,c->f[1],c->f[0]); // 800B0B40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B0B44
  if (!crb(c,2)) { goto L_800B0B9C; } // 800B0B48
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B4C
  {uint32_t ea=c->r[24]+0x00006290u; WF32(ea,c->f[0]);} // 800B0B50
  c->r[0]=R32(c->r[24]+0x0000628Cu); // 800B0B54
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B0B58
  c->r[3]=c->r[24]+c->r[0]; // 800B0B5C
  c->r[0]=0u+0x00000001u; // 800B0B60
  W32(c->r[3]+0x00006294u,c->r[0]); // 800B0B64
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B68
  {uint32_t ea=c->r[3]+0x00006298u; WF32(ea,c->f[0]);} // 800B0B6C
  c->r[3]=c->r[14]|c->r[14]; // 800B0B70
  c->r[4]=R32(c->r[24]+0x0000628Cu); // 800B0B74
  c->r[5]=0u+0x00000001u; // 800B0B78
  c->lr=0x800B0B80u; f_8004D6F8(c); // 800B0B7C
  c->r[3]=R32(c->r[24]+0x0000628Cu); // 800B0B80
  c->r[0]=c->r[3]+0x00000001u; // 800B0B84
  W32(c->r[24]+0x0000628Cu,c->r[0]); // 800B0B88
  cmps(c,0,(int32_t)c->r[0],3); // 800B0B8C
  if (crb(c,0)) { goto L_800B0B9C; } // 800B0B90
  c->r[0]=0u+0x00000000u; // 800B0B94
  W32(c->r[24]+0x0000628Cu,c->r[0]); // 800B0B98
L_800B0B9C:;
  c->r[20]=0u+0x00000000u; // 800B0B9C
  c->r[17]=c->r[24]+0x00006294u; // 800B0BA0
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B0BA4
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[27]=c->ps1[27]=RF32(ea);} // 800B0BA8
  {uint32_t ea=c->r[2]+0xFFFF86F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B0BAC
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[24]=c->ps1[24]=RF32(ea);} // 800B0BB0
  {uint32_t ea=c->r[2]+0xFFFF8708u; c->f[25]=c->ps1[25]=RF32(ea);} // 800B0BB4
  {uint32_t ea=c->r[2]+0xFFFF870Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800B0BB8
  c->r[3]=0u+0x80460000u; // 800B0BBC
  c->r[16]=c->r[3]+0xFFFFFE50u; // 800B0BC0
  {uint32_t ea=c->r[2]+0xFFFF8710u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B0BC4
  c->r[15]=0u+0x00000000u; // 800B0BC8
  {uint32_t ea=c->r[2]+0xFFFF8718u; c->f[26]=c->ps1[26]=RF32(ea);} // 800B0BCC
L_800B0BD0:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 800B0BD0
  cmps(c,0,(int32_t)c->r[0],1); // 800B0BD4
  if (crb(c,2)) { goto L_800B0C00; } // 800B0BD8
  if (!crb(c,0)) { goto L_800B0D24; } // 800B0BDC
  cmps(c,0,(int32_t)c->r[0],0); // 800B0BE0
  if (!crb(c,0)) { goto L_800B0BEC; } // 800B0BE4
  goto L_800B0D24; // 800B0BE8
L_800B0BEC:;
  c->r[3]=c->r[14]|c->r[14]; // 800B0BEC
  c->r[4]=c->r[20]|c->r[20]; // 800B0BF0
  c->r[5]=0u+0x00000000u; // 800B0BF4
  c->lr=0x800B0BFCu; f_8004D6F8(c); // 800B0BF8
  goto L_800B0D24; // 800B0BFC
L_800B0C00:;
  c->r[4]=c->r[24]+0x00050000u; // 800B0C00
  c->r[3]=R32(c->r[28]+0x00000010u); // 800B0C04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C08
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800B0C0C
  {uint32_t ea=c->r[4]+0xFFFF8F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C10
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B0C14
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B0C18
  c->r[3]=R32(c->r[28]+0x00000010u); // 800B0C1C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C20
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800B0C24
  {uint32_t ea=c->r[4]+0xFFFF8F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C28
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B0C2C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800B0C30
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[24]);} // 800B0C34
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[24]);} // 800B0C38
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[24]);} // 800B0C3C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[24]);} // 800B0C40
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[24]);} // 800B0C44
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[25]);} // 800B0C48
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[25]);} // 800B0C4C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[30]);} // 800B0C50
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[25]);} // 800B0C54
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[30]);} // 800B0C58
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[30]);} // 800B0C5C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[25]);} // 800B0C60
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[30]);} // 800B0C64
  c->r[3]=c->r[1]+0x0000001Cu; // 800B0C68
  c->r[4]=R32(c->r[16]+0x0000000Cu); // 800B0C6C
  c->lr=0x800B0C74u; f_8005D48C(c); // 800B0C70
  {uint32_t ea=c->r[17]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C74
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800B0C78
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B0C7C
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 800B0C80
  c->r[0]=R32(c->r[1]+0x000000BCu); // 800B0C84
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 800B0C88
  c->r[21]=0u+0x00000000u; // 800B0C8C
  c->r[18]=c->r[1]+0x00000088u; // 800B0C90
  c->r[19]=c->r[18]|c->r[18]; // 800B0C94
L_800B0C98:;
  c->r[3]=c->r[19]|c->r[19]; // 800B0C98
  c->r[4]=c->r[18]|c->r[18]; // 800B0C9C
  {uint32_t ea=c->r[17]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0CA0
  c->f[0]=c->ps1[0]=S(c->f[28]-c->f[0]); // 800B0CA4
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[0]); // 800B0CA8
  c->lr=0x800B0CB0u; f_8004E330(c); // 800B0CAC
  c->r[3]=c->r[19]|c->r[19]; // 800B0CB0
  c->r[4]=c->r[1]+0x0000005Cu; // 800B0CB4
  c->lr=0x800B0CBCu; f_8009CB30(c); // 800B0CB8
  c->r[3]=c->r[14]|c->r[14]; // 800B0CBC
  c->r[4]=c->r[20]|c->r[20]; // 800B0CC0
  c->r[5]=c->r[21]|c->r[21]; // 800B0CC4
  c->r[6]=c->r[19]|c->r[19]; // 800B0CC8
  c->lr=0x800B0CD0u; f_8004D384(c); // 800B0CCC
  c->r[3]=c->r[14]|c->r[14]; // 800B0CD0
  c->r[4]=c->r[20]|c->r[20]; // 800B0CD4
  c->r[5]=c->r[21]|c->r[21]; // 800B0CD8
  c->r[6]=c->r[1]+0x0000001Cu; // 800B0CDC
  c->lr=0x800B0CE4u; f_8004D508(c); // 800B0CE0
  c->r[18]=c->r[18]+0x0000000Cu; // 800B0CE4
  c->r[19]=c->r[19]+0x0000000Cu; // 800B0CE8
  c->r[21]=c->r[21]+0x00000001u; // 800B0CEC
  cmpu(c,0,c->r[21],0x00000004u); // 800B0CF0
  if (crb(c,0)) { IRQCHK(c); goto L_800B0C98; } // 800B0CF4
  c->r[3]=0u+0x00000001u; // 800B0CF8
  c->lr=0x800B0D00u; f_8005D714(c); // 800B0CFC
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 800B0D00
  {uint32_t ea=c->r[17]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0D04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B0D08
  {uint32_t ea=c->r[17]+0x00000004u; WF32(ea,c->f[0]);} // 800B0D0C
  {uint32_t ea=c->r[17]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0D10
  fcmp(c,0,c->f[0],c->f[24]); // 800B0D14
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B0D18
  if (!crb(c,2)) { goto L_800B0D24; } // 800B0D1C
  W32(c->r[17]+0x00000000u,c->r[15]); // 800B0D20
L_800B0D24:;
  c->r[17]=c->r[17]+0x00000008u; // 800B0D24
  c->r[20]=c->r[20]+0x00000001u; // 800B0D28
  cmpu(c,0,c->r[20],0x00000003u); // 800B0D2C
  if (crb(c,0)) { IRQCHK(c); goto L_800B0BD0; } // 800B0D30
  c->r[14]=0u+0x00000000u; // 800B0D34
  c->r[15]=0u+0x00000000u; // 800B0D38
  c->r[3]=R32(c->r[24]+0x000071FCu); // 800B0D3C
  c->r[0]=R32(c->r[24]+0x00007200u); // 800B0D40
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B0D44
  if (crb(c,2)) { goto L_800B0DB8; } // 800B0D48
  W32(c->r[24]+0x00007200u,c->r[3]); // 800B0D4C
  c->r[15]=0u+0x00000001u; // 800B0D50
  c->r[18]=0u+0x00000000u; // 800B0D54
  c->r[16]=c->r[24]+0x0000724Cu; // 800B0D58
L_800B0D5C:;
  c->r[19]=0u+0x00000000u; // 800B0D5C
  c->r[17]=c->r[16]|c->r[16]; // 800B0D60
L_800B0D64:;
  c->r[3]=c->r[17]|c->r[17]; // 800B0D64
  c->r[4]=0u+0x00000000u; // 800B0D68
  c->lr=0x800B0D70u; f_8004D73C(c); // 800B0D6C
  c->r[17]=c->r[17]+0x00000200u; // 800B0D70
  c->r[19]=c->r[19]+0x00000001u; // 800B0D74
  cmpu(c,0,c->r[19],0x0000000Du); // 800B0D78
  if (crb(c,0)) { IRQCHK(c); goto L_800B0D64; } // 800B0D7C
  c->r[16]=c->r[16]+0x00001A00u; // 800B0D80
  c->r[18]=c->r[18]+0x00000001u; // 800B0D84
  cmpu(c,0,c->r[18],0x0000000Du); // 800B0D88
  if (crb(c,0)) { IRQCHK(c); goto L_800B0D5C; } // 800B0D8C
  c->r[17]=0u+0x00000000u; // 800B0D90
  c->r[16]=c->r[24]+0x00020000u; // 800B0D94
  c->r[16]=c->r[16]+0xFFFFC45Cu; // 800B0D98
L_800B0D9C:;
  c->r[3]=c->r[16]|c->r[16]; // 800B0D9C
  c->r[4]=0u+0x00000000u; // 800B0DA0
  c->lr=0x800B0DA8u; f_8004D73C(c); // 800B0DA4
  c->r[16]=c->r[16]+0x000001E0u; // 800B0DA8
  c->r[17]=c->r[17]+0x00000001u; // 800B0DAC
  cmpu(c,0,c->r[17],0x0000016Cu); // 800B0DB0
  if (crb(c,0)) { IRQCHK(c); goto L_800B0D9C; } // 800B0DB4
L_800B0DB8:;
  c->r[0]=R32(c->r[24]+0x000071FCu); // 800B0DB8
  cmps(c,0,(int32_t)c->r[0],0); // 800B0DBC
  if (crb(c,2)) { goto L_800B10E4; } // 800B0DC0
  c->r[0]=R32(c->r[24]+0x000000C0u); // 800B0DC4
  cmps(c,0,(int32_t)c->r[0],4); // 800B0DC8
  if (crb(c,2)) { goto L_800B0DF0; } // 800B0DCC
  if (!crb(c,0)) { goto L_800B0E00; } // 800B0DD0
  cmps(c,0,(int32_t)c->r[0],3); // 800B0DD4
  if (!crb(c,0)) { goto L_800B0DE0; } // 800B0DD8
  goto L_800B0E00; // 800B0DDC
L_800B0DE0:;
  c->r[3]=c->r[24]|c->r[24]; // 800B0DE0
  c->r[4]=0u+0x00000001u; // 800B0DE4
  c->lr=0x800B0DECu; f_800B2B6C(c); // 800B0DE8
  goto L_800B0E10; // 800B0DEC
L_800B0DF0:;
  c->r[3]=c->r[24]|c->r[24]; // 800B0DF0
  c->r[4]=0u+0x00000000u; // 800B0DF4
  c->lr=0x800B0DFCu; f_800B2B6C(c); // 800B0DF8
  goto L_800B0E10; // 800B0DFC
L_800B0E00:;
  c->lr=0x800B0E04u; f_8007B524(c); // 800B0E00
  c->lr=0x800B0E08u; f_8009D16C(c); // 800B0E04
  W32(c->r[13]+0xFFFFB84Cu,c->r[3]); // 800B0E08
  goto L_800B10E4; // 800B0E0C
L_800B0E10:;
  c->r[3]=R32(c->r[24]+0x00007208u); // 800B0E10
  c->r[0]=R32(c->r[24]+0x00007204u); // 800B0E14
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B0E18
  if (crb(c,2)) { goto L_800B0E28; } // 800B0E1C
  W32(c->r[24]+0x00007208u,c->r[0]); // 800B0E20
  c->r[14]=0u+0x00000001u; // 800B0E24
L_800B0E28:;
  c->lr=0x800B0E2Cu; f_8007B524(c); // 800B0E28
  c->r[4]=c->r[1]+0x00000020u; // 800B0E2C
  c->lr=0x800B0E34u; f_8009CFD0(c); // 800B0E30
  c->r[3]=c->r[24]|c->r[24]; // 800B0E34
  c->r[4]=c->r[1]+0x00000020u; // 800B0E38
  c->lr=0x800B0E40u; f_800B2B04(c); // 800B0E3C
  c->r[3]=R32(c->r[24]+0x00007228u); // 800B0E40
  c->r[0]=R32(c->r[24]+0x00007220u); // 800B0E44
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B0E48
  if (!crb(c,2)) { goto L_800B0E60; } // 800B0E4C
  c->r[3]=R32(c->r[24]+0x0000722Cu); // 800B0E50
  c->r[0]=R32(c->r[24]+0x00007224u); // 800B0E54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B0E58
  if (crb(c,2)) { goto L_800B0E80; } // 800B0E5C
L_800B0E60:;
  c->r[3]=c->r[24]+0x00007228u; // 800B0E60
  c->r[4]=c->r[24]+0x00007220u; // 800B0E64
  c->lr=0x800B0E6Cu; f_800670A8(c); // 800B0E68
  c->r[3]=c->r[24]+0x00020000u; // 800B0E6C
  c->r[3]=c->r[3]+0xFFFFC448u; // 800B0E70
  c->r[4]=c->r[24]+0x00007220u; // 800B0E74
  c->lr=0x800B0E7Cu; f_800670A8(c); // 800B0E78
  c->r[14]=0u+0x00000001u; // 800B0E7C
L_800B0E80:;
  c->lr=0x800B0E84u; f_8007B524(c); // 800B0E80
  c->lr=0x800B0E88u; f_8009D0D0(c); // 800B0E84
  c->r[3]=c->r[3]+0x00000001u; // 800B0E88
  W32(c->r[24]+0x00007230u,c->r[3]); // 800B0E8C
  c->r[0]=R32(c->r[24]+0x00007234u); // 800B0E90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B0E94
  if (crb(c,2)) { goto L_800B0EA4; } // 800B0E98
  W32(c->r[24]+0x00007234u,c->r[3]); // 800B0E9C
  c->r[14]=0u+0x00000001u; // 800B0EA0
L_800B0EA4:;
  cmps(c,0,(int32_t)c->r[14],0); // 800B0EA4
  if (!crb(c,2)) { goto L_800B0EB4; } // 800B0EA8
  cmps(c,0,(int32_t)c->r[15],0); // 800B0EAC
  if (crb(c,2)) { goto L_800B0EBC; } // 800B0EB0
L_800B0EB4:;
  c->r[3]=c->r[24]|c->r[24]; // 800B0EB4
  c->lr=0x800B0EBCu; f_800B3948(c); // 800B0EB8
L_800B0EBC:;
  cmps(c,0,(int32_t)c->r[14],0); // 800B0EBC
  if (crb(c,2)) { goto L_800B0ECC; } // 800B0EC0
  c->r[3]=c->r[24]|c->r[24]; // 800B0EC4
  c->lr=0x800B0ECCu; f_800B2B74(c); // 800B0EC8
L_800B0ECC:;
  c->r[3]=c->r[1]+0x00000044u; // 800B0ECC
  c->lr=0x800B0ED4u; f_8004B0A4(c); // 800B0ED0
  c->r[20]=0u+0x00000000u; // 800B0ED4
  c->r[18]=c->r[24]+0x00007238u; // 800B0ED8
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B0EDC
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B0EE0
  {uint32_t ea=c->r[2]+0xFFFF871Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800B0EE4
  c->r[16]=0u+0x000000FFu; // 800B0EE8
  c->r[17]=0u+0x00000000u; // 800B0EEC
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[26]=c->ps1[26]=RF32(ea);} // 800B0EF0
  c->r[15]=0u+0x00000030u; // 800B0EF4
  c->r[14]=0u+0x000000C0u; // 800B0EF8
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B0EFC
  {uint32_t ea=c->r[2]+0xFFFF8728u; c->f[27]=c->ps1[27]=RF32(ea);} // 800B0F00
L_800B0F04:;
  c->r[22]=0u+0x00000000u; // 800B0F04
  c->r[19]=c->r[18]|c->r[18]; // 800B0F08
L_800B0F0C:;
  c->r[21]=c->r[19]+0x00000014u; // 800B0F0C
  c->r[3]=c->r[21]|c->r[21]; // 800B0F10
  c->r[4]=R32(c->r[19]+0x00000004u); // 800B0F14
  c->lr=0x800B0F1Cu; f_8004D73C(c); // 800B0F18
  c->r[3]=c->r[21]|c->r[21]; // 800B0F1C
  c->r[4]=0u+0x00000000u; // 800B0F20
  c->r[5]=R32(c->r[19]+0x00000004u); // 800B0F24
  c->lr=0x800B0F2Cu; f_8004D6F8(c); // 800B0F28
  c->r[0]=R32(c->r[19]+0x00000004u); // 800B0F2C
  cmps(c,0,(int32_t)c->r[0],0); // 800B0F30
  if (crb(c,2)) { goto L_800B1088; } // 800B0F34
  c->r[0]=R32(c->r[19]+0x00000008u); // 800B0F38
  cmps(c,0,(int32_t)c->r[0],0); // 800B0F3C
  if (crb(c,2)) { goto L_800B1034; } // 800B0F40
  c->r[3]=0u+0x00000001u; // 800B0F44
  c->lr=0x800B0F4Cu; f_8005D714(c); // 800B0F48
  {uint32_t ea=c->r[19]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0F4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B0F50
  {uint32_t ea=c->r[19]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B0F54
  {uint32_t ea=c->r[19]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0F58
  fcmp(c,0,c->f[0],c->f[26]); // 800B0F5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B0F60
  if (!crb(c,2)) { goto L_800B1000; } // 800B0F64
  {uint32_t ea=c->r[19]+0x0000000Cu; WF32(ea,c->f[26]);} // 800B0F68
  {uint32_t ea=c->r[19]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0F6C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 800B0F70
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 800B0F74
  c->lr=0x800B0F7Cu; f_800B4480(c); // 800B0F78
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 800B0F7C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800B0F80
  {uint32_t ea=c->r[13]+0xFFFFB848u; WF32(ea,c->f[0]);} // 800B0F84
  c->r[0]=R32(c->r[19]+0x00000000u); // 800B0F88
  cmps(c,0,(int32_t)c->r[0],0); // 800B0F8C
  if (crb(c,2)) { goto L_800B0FB4; } // 800B0F90
  W8(c->r[1]+0x0000001Cu,c->r[16]); // 800B0F94
  W8(c->r[1]+0x0000001Du,c->r[17]); // 800B0F98
  W8(c->r[1]+0x0000001Eu,c->r[17]); // 800B0F9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B0FA0
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 800B0FA4
  c->r[0]=R32(c->r[1]+0x000000BCu); // 800B0FA8
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 800B0FAC
  goto L_800B0FD0; // 800B0FB0
L_800B0FB4:;
  W8(c->r[1]+0x0000001Cu,c->r[16]); // 800B0FB4
  W8(c->r[1]+0x0000001Du,c->r[16]); // 800B0FB8
  W8(c->r[1]+0x0000001Eu,c->r[16]); // 800B0FBC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B0FC0
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 800B0FC4
  c->r[0]=R32(c->r[1]+0x000000BCu); // 800B0FC8
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 800B0FCC
L_800B0FD0:;
  c->r[3]=0u+0x00000001u; // 800B0FD0
  c->lr=0x800B0FD8u; f_8005D714(c); // 800B0FD4
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 800B0FD8
  {uint32_t ea=c->r[19]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0FDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B0FE0
  {uint32_t ea=c->r[19]+0x00000010u; WF32(ea,c->f[0]);} // 800B0FE4
  {uint32_t ea=c->r[19]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0FE8
  fcmp(c,0,c->f[0],c->f[26]); // 800B0FEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B0FF0
  if (!crb(c,2)) { goto L_800B1064; } // 800B0FF4
  {uint32_t ea=c->r[19]+0x00000010u; WF32(ea,c->f[31]);} // 800B0FF8
  goto L_800B1064; // 800B0FFC
L_800B1000:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 800B1000
  cmps(c,0,(int32_t)c->r[0],0); // 800B1004
  if (crb(c,2)) { goto L_800B1020; } // 800B1008
  W8(c->r[1]+0x0000001Cu,c->r[16]); // 800B100C
  W8(c->r[1]+0x0000001Du,c->r[17]); // 800B1010
  W8(c->r[1]+0x0000001Eu,c->r[17]); // 800B1014
  W8(c->r[1]+0x0000001Fu,c->r[14]); // 800B1018
  goto L_800B1064; // 800B101C
L_800B1020:;
  W8(c->r[1]+0x0000001Cu,c->r[16]); // 800B1020
  W8(c->r[1]+0x0000001Du,c->r[16]); // 800B1024
  W8(c->r[1]+0x0000001Eu,c->r[16]); // 800B1028
  W8(c->r[1]+0x0000001Fu,c->r[14]); // 800B102C
  goto L_800B1064; // 800B1030
L_800B1034:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 800B1034
  cmps(c,0,(int32_t)c->r[0],0); // 800B1038
  if (crb(c,2)) { goto L_800B1054; } // 800B103C
  W8(c->r[1]+0x0000001Cu,c->r[16]); // 800B1040
  W8(c->r[1]+0x0000001Du,c->r[17]); // 800B1044
  W8(c->r[1]+0x0000001Eu,c->r[17]); // 800B1048
  W8(c->r[1]+0x0000001Fu,c->r[14]); // 800B104C
  goto L_800B1064; // 800B1050
L_800B1054:;
  W8(c->r[1]+0x0000001Cu,c->r[15]); // 800B1054
  W8(c->r[1]+0x0000001Du,c->r[15]); // 800B1058
  W8(c->r[1]+0x0000001Eu,c->r[15]); // 800B105C
  W8(c->r[1]+0x0000001Fu,c->r[14]); // 800B1060
L_800B1064:;
  c->r[23]=0u+0x00000000u; // 800B1064
L_800B1068:;
  c->r[3]=c->r[21]|c->r[21]; // 800B1068
  c->r[4]=0u+0x00000000u; // 800B106C
  c->r[5]=c->r[23]|c->r[23]; // 800B1070
  c->r[6]=c->r[1]+0x0000001Cu; // 800B1074
  c->lr=0x800B107Cu; f_8004D508(c); // 800B1078
  c->r[23]=c->r[23]+0x00000001u; // 800B107C
  cmpu(c,0,c->r[23],0x00000004u); // 800B1080
  if (crb(c,0)) { IRQCHK(c); goto L_800B1068; } // 800B1084
L_800B1088:;
  {uint32_t ea=c->r[24]+0x00007210u; WF32(ea,c->f[27]);} // 800B1088
  c->r[3]=c->r[1]+0x00000038u; // 800B108C
  c->r[4]=c->r[24]+0x0000720Cu; // 800B1090
  c->r[5]=c->r[19]+0x000001F4u; // 800B1094
  c->lr=0x800B109Cu; f_800B43B0(c); // 800B1098
  c->r[3]=c->r[1]+0x00000044u; // 800B109C
  c->r[4]=c->r[1]+0x00000038u; // 800B10A0
  c->lr=0x800B10A8u; f_8004A65C(c); // 800B10A4
  c->r[3]=c->r[21]|c->r[21]; // 800B10A8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B10AC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B10B0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B10B4
  c->lr=0x800B10BCu; f_80070424(c); // 800B10B8
  c->r[3]=c->r[21]|c->r[21]; // 800B10BC
  c->lr=0x800B10C4u; f_8004E1AC(c); // 800B10C0
  c->r[19]=c->r[19]+0x00000200u; // 800B10C4
  c->r[22]=c->r[22]+0x00000001u; // 800B10C8
  cmpu(c,0,c->r[22],0x0000000Du); // 800B10CC
  if (crb(c,0)) { IRQCHK(c); goto L_800B0F0C; } // 800B10D0
  c->r[18]=c->r[18]+0x00001A00u; // 800B10D4
  c->r[20]=c->r[20]+0x00000001u; // 800B10D8
  cmpu(c,0,c->r[20],0x0000000Du); // 800B10DC
  if (crb(c,0)) { IRQCHK(c); goto L_800B0F04; } // 800B10E0
L_800B10E4:;
  c->r[3]=c->r[24]+0x00040000u; // 800B10E4
  c->r[0]=R32(c->r[3]+0x00006EE0u); // 800B10E8
  cmps(c,0,(int32_t)c->r[0],0); // 800B10EC
  if (crb(c,2)) { goto L_800B12AC; } // 800B10F0
  c->r[3]=c->r[3]+0x00006F68u; // 800B10F4
  c->r[4]=0u+0x00000001u; // 800B10F8
  c->lr=0x800B1100u; f_8004D73C(c); // 800B10FC
  c->r[3]=c->r[1]+0x0000000Cu; // 800B1100
  c->lr=0x800B1108u; f_80047C5C(c); // 800B1104
  c->r[3]=0u+0x00000001u; // 800B1108
  c->lr=0x800B1110u; f_80173F68(c); // 800B110C
  c->r[4]=c->r[3]|c->r[3]; // 800B1110
  c->r[3]=c->r[1]+0x00000008u; // 800B1114
  c->lr=0x800B111Cu; f_8017494C(c); // 800B1118
  c->r[3]=c->r[1]+0x0000000Cu; // 800B111C
  c->r[4]=c->r[1]+0x00000008u; // 800B1120
  c->lr=0x800B1128u; f_8005D48C(c); // 800B1124
  c->r[3]=c->r[1]+0x00000008u; // 800B1128
  c->r[4]=0u+0xFFFFFFFFu; // 800B112C
  c->lr=0x800B1134u; f_80047BD4(c); // 800B1130
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1134
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 800B1138
  {uint32_t ea=c->r[2]+0xFFFF8748u; c->f[1]=RF64(ea);} // 800B113C
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800B1140
  c->r[0]=0u+0x43300000u; // 800B1144
  W32(c->r[1]+0x000000B8u,c->r[0]); // 800B1148
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 800B114C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B1150
  fcmp(c,0,c->f[2],c->f[0]); // 800B1154
  if (!crb(c,2)) { goto L_800B129C; } // 800B1158
  c->lr=0x800B1160u; f_8007B524(c); // 800B115C
  c->lr=0x800B1164u; f_8009D16C(c); // 800B1160
  cmps(c,0,(int32_t)c->r[3],3); // 800B1164
  if (crb(c,2)) { goto L_800B11CC; } // 800B1168
  if (!crb(c,0)) { goto L_800B1180; } // 800B116C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1170
  if (crb(c,2)) { goto L_800B1258; } // 800B1174
  if (!crb(c,0)) { goto L_800B1210; } // 800B1178
  goto L_800B129C; // 800B117C
L_800B1180:;
  cmps(c,0,(int32_t)c->r[3],5); // 800B1180
  if (!crb(c,0)) { goto L_800B129C; } // 800B1184
  c->r[3]=c->r[13]+0xFFFF8790u; // 800B1188
  c->r[4]=c->r[24]+0x00040000u; // 800B118C
  {uint32_t ea=c->r[2]+0xFFFF872Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1190
  {uint32_t ea=c->r[4]+0x00006EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1194
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800B1198
  {uint32_t ea=c->r[2]+0xFFFF8730u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B119C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800B11A0
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B11A4
  {uint32_t ea=c->r[4]+0x00006EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11A8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800B11AC
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B11B0
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B11B4
  c->f[5]=c->f[4]; // 800B11B8
  c->r[4]=0u+0x00000000u; // 800B11BC
  c->r[5]=0u+0x00000003u; // 800B11C0
  c->lr=0x800B11C8u; f_800614B8(c); // 800B11C4
  goto L_800B129C; // 800B11C8
L_800B11CC:;
  c->r[3]=c->r[13]+0xFFFF8798u; // 800B11CC
  c->r[4]=c->r[24]+0x00040000u; // 800B11D0
  {uint32_t ea=c->r[2]+0xFFFF872Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B11D4
  {uint32_t ea=c->r[4]+0x00006EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800B11DC
  {uint32_t ea=c->r[2]+0xFFFF873Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800B11E4
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B11E8
  {uint32_t ea=c->r[4]+0x00006EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11EC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800B11F0
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B11F4
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B11F8
  c->f[5]=c->f[4]; // 800B11FC
  c->r[4]=0u+0x00000000u; // 800B1200
  c->r[5]=0u+0x00000003u; // 800B1204
  c->lr=0x800B120Cu; f_800614B8(c); // 800B1208
  goto L_800B129C; // 800B120C
L_800B1210:;
  c->r[3]=0u+0x80460000u; // 800B1210
  c->r[3]=c->r[3]+0xFFFFFEC0u; // 800B1214
  c->r[4]=c->r[24]+0x00040000u; // 800B1218
  {uint32_t ea=c->r[2]+0xFFFF872Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B121C
  {uint32_t ea=c->r[4]+0x00006EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1220
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800B1224
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1228
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800B122C
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1230
  {uint32_t ea=c->r[4]+0x00006EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1234
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800B1238
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B123C
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1240
  c->f[5]=c->f[4]; // 800B1244
  c->r[4]=0u+0x00000000u; // 800B1248
  c->r[5]=0u+0x00000003u; // 800B124C
  c->lr=0x800B1254u; f_800614B8(c); // 800B1250
  goto L_800B129C; // 800B1254
L_800B1258:;
  c->r[3]=0u+0x80460000u; // 800B1258
  c->r[3]=c->r[3]+0xFFFFFECCu; // 800B125C
  c->r[4]=c->r[24]+0x00040000u; // 800B1260
  {uint32_t ea=c->r[2]+0xFFFF872Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1264
  {uint32_t ea=c->r[4]+0x00006EE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1268
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800B126C
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1270
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800B1274
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1278
  {uint32_t ea=c->r[4]+0x00006EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B127C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800B1280
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1284
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1288
  c->f[5]=c->f[4]; // 800B128C
  c->r[4]=0u+0x00000000u; // 800B1290
  c->r[5]=0u+0x00000003u; // 800B1294
  c->lr=0x800B129Cu; f_800614B8(c); // 800B1298
L_800B129C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800B129C
  c->r[4]=0u+0xFFFFFFFFu; // 800B12A0
  c->lr=0x800B12A8u; f_80047BD4(c); // 800B12A4
  goto L_800B12B8; // 800B12A8
L_800B12AC:;
  c->r[3]=c->r[3]+0x00006F68u; // 800B12AC
  c->r[4]=0u+0x00000000u; // 800B12B0
  c->lr=0x800B12B8u; f_8004D73C(c); // 800B12B4
L_800B12B8:;
  c->r[3]=c->r[24]+0x00040000u; // 800B12B8
  c->r[0]=R32(c->r[3]+0x00006EDCu); // 800B12BC
  cmps(c,0,(int32_t)c->r[0],0); // 800B12C0
  if (crb(c,2)) { goto L_800B13DC; } // 800B12C4
  c->r[15]=0u+0x00000001u; // 800B12C8
  c->r[14]=c->r[3]+0x00007148u; // 800B12CC
L_800B12D0:;
  cmpu(c,0,c->r[15],0x00000002u); // 800B12D0
  if (!crb(c,0)) { goto L_800B12E8; } // 800B12D4
  c->r[3]=c->r[14]|c->r[14]; // 800B12D8
  c->r[4]=0u+0x00000001u; // 800B12DC
  c->lr=0x800B12E4u; f_8004D73C(c); // 800B12E0
  goto L_800B1310; // 800B12E4
L_800B12E8:;
  c->r[0]=rotl(c->r[15],0)&0x00000001u; // 800B12E8
  cmps(c,0,(int32_t)c->r[0],0); // 800B12EC
  if (!crb(c,2)) { goto L_800B1304; } // 800B12F0
  c->r[3]=c->r[14]|c->r[14]; // 800B12F4
  c->r[4]=0u+0x00000001u; // 800B12F8
  c->lr=0x800B1300u; f_8004D73C(c); // 800B12FC
  goto L_800B1310; // 800B1300
L_800B1304:;
  c->r[3]=c->r[14]|c->r[14]; // 800B1304
  c->r[4]=0u+0x00000000u; // 800B1308
  c->lr=0x800B1310u; f_8004D73C(c); // 800B130C
L_800B1310:;
  c->r[14]=c->r[14]+0x000001E0u; // 800B1310
  c->r[15]=c->r[15]+0x00000001u; // 800B1314
  cmpu(c,0,c->r[15],0x0000000Au); // 800B1318
  if (crb(c,0)) { IRQCHK(c); goto L_800B12D0; } // 800B131C
  c->lr=0x800B1324u; f_8007B524(c); // 800B1320
  c->lr=0x800B1328u; f_8009D16C(c); // 800B1324
  cmps(c,0,(int32_t)c->r[3],3); // 800B1328
  if (crb(c,2)) { goto L_800B1370; } // 800B132C
  if (!crb(c,0)) { goto L_800B1344; } // 800B1330
  cmps(c,0,(int32_t)c->r[3],0); // 800B1334
  if (crb(c,2)) { goto L_800B13B8; } // 800B1338
  if (!crb(c,0)) { goto L_800B1394; } // 800B133C
  goto L_800B1400; // 800B1340
L_800B1344:;
  cmps(c,0,(int32_t)c->r[3],5); // 800B1344
  if (!crb(c,0)) { goto L_800B1400; } // 800B1348
  c->r[3]=c->r[24]+0x00040000u; // 800B134C
  c->r[3]=c->r[3]+0x00007328u; // 800B1350
  c->r[4]=0u+0x00000000u; // 800B1354
  c->lr=0x800B135Cu; f_8004D73C(c); // 800B1358
  c->r[3]=c->r[24]+0x00040000u; // 800B135C
  c->r[3]=c->r[3]+0x00007508u; // 800B1360
  c->r[4]=0u+0x00000001u; // 800B1364
  c->lr=0x800B136Cu; f_8004D73C(c); // 800B1368
  goto L_800B1400; // 800B136C
L_800B1370:;
  c->r[3]=c->r[24]+0x00040000u; // 800B1370
  c->r[3]=c->r[3]+0x000076E8u; // 800B1374
  c->r[4]=0u+0x00000000u; // 800B1378
  c->lr=0x800B1380u; f_8004D73C(c); // 800B137C
  c->r[3]=c->r[24]+0x00040000u; // 800B1380
  c->r[3]=c->r[3]+0x000078C8u; // 800B1384
  c->r[4]=0u+0x00000001u; // 800B1388
  c->lr=0x800B1390u; f_8004D73C(c); // 800B138C
  goto L_800B1400; // 800B1390
L_800B1394:;
  c->r[3]=c->r[24]+0x00040000u; // 800B1394
  c->r[3]=c->r[3]+0x00007AA8u; // 800B1398
  c->r[4]=0u+0x00000000u; // 800B139C
  c->lr=0x800B13A4u; f_8004D73C(c); // 800B13A0
  c->r[3]=c->r[24]+0x00040000u; // 800B13A4
  c->r[3]=c->r[3]+0x00007C88u; // 800B13A8
  c->r[4]=0u+0x00000001u; // 800B13AC
  c->lr=0x800B13B4u; f_8004D73C(c); // 800B13B0
  goto L_800B1400; // 800B13B4
L_800B13B8:;
  c->r[3]=c->r[24]+0x00040000u; // 800B13B8
  c->r[3]=c->r[3]+0x00007E68u; // 800B13BC
  c->r[4]=0u+0x00000000u; // 800B13C0
  c->lr=0x800B13C8u; f_8004D73C(c); // 800B13C4
  c->r[3]=c->r[24]+0x00050000u; // 800B13C8
  c->r[3]=c->r[3]+0xFFFF8048u; // 800B13CC
  c->r[4]=0u+0x00000001u; // 800B13D0
  c->lr=0x800B13D8u; f_8004D73C(c); // 800B13D4
  goto L_800B1400; // 800B13D8
L_800B13DC:;
  c->r[15]=0u+0x00000001u; // 800B13DC
  c->r[14]=c->r[3]+0x00007148u; // 800B13E0
L_800B13E4:;
  c->r[3]=c->r[14]|c->r[14]; // 800B13E4
  c->r[4]=0u+0x00000000u; // 800B13E8
  c->lr=0x800B13F0u; f_8004D73C(c); // 800B13EC
  c->r[14]=c->r[14]+0x000001E0u; // 800B13F0
  c->r[15]=c->r[15]+0x00000001u; // 800B13F4
  cmpu(c,0,c->r[15],0x0000000Au); // 800B13F8
  if (crb(c,0)) { IRQCHK(c); goto L_800B13E4; } // 800B13FC
L_800B1400:;
  c->r[17]=0u+0x00000000u; // 800B1400
  c->r[15]=c->r[24]+0x00040000u; // 800B1404
  c->r[15]=c->r[15]+0x00006F68u; // 800B1408
  c->r[16]=c->r[24]|c->r[24]; // 800B140C
  c->r[14]=c->r[24]+0x00040000u; // 800B1410
L_800B1414:;
  c->r[3]=c->r[15]|c->r[15]; // 800B1414
  c->r[4]=c->r[16]+0x00040000u; // 800B1418
  {uint32_t ea=c->r[14]+0x00006EE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B141C
  {uint32_t ea=c->r[4]+0x00006EF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1420
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800B1424
  {uint32_t ea=c->r[14]+0x00006EE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1428
  {uint32_t ea=c->r[4]+0x00006EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B142C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800B1430
  {uint32_t ea=c->r[4]+0x00006EF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1434
  c->lr=0x800B143Cu; f_80070424(c); // 800B1438
  c->r[3]=c->r[15]|c->r[15]; // 800B143C
  c->lr=0x800B1444u; f_8004E1AC(c); // 800B1440
  c->r[15]=c->r[15]+0x000001E0u; // 800B1444
  c->r[16]=c->r[16]+0x0000000Cu; // 800B1448
  c->r[17]=c->r[17]+0x00000001u; // 800B144C
  cmpu(c,0,c->r[17],0x0000000Au); // 800B1450
  if (crb(c,0)) { IRQCHK(c); goto L_800B1414; } // 800B1454
  c->r[3]=c->r[24]|c->r[24]; // 800B1458
  c->lr=0x800B1460u; f_800B3624(c); // 800B145C
  c->r[3]=c->r[1]+0x0000001Cu; // 800B1460
  c->r[4]=0u+0xFFFFFFFFu; // 800B1464
  c->lr=0x800B146Cu; f_80047BD4(c); // 800B1468
  c->r[0]=0u+0x00000188u; // 800B146C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B1470
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 800B1474
  c->r[0]=0u+0x00000178u; // 800B1478
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800B147C
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 800B1480
  c->r[0]=0u+0x00000168u; // 800B1484
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800B1488
  {uint32_t ea=c->r[1]+0x00000160u; c->f[29]=RF64(ea);} // 800B148C
  c->r[0]=0u+0x00000158u; // 800B1490
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800B1494
  {uint32_t ea=c->r[1]+0x00000150u; c->f[28]=RF64(ea);} // 800B1498
  c->r[0]=0u+0x00000148u; // 800B149C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 800B14A0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[27]=RF64(ea);} // 800B14A4
  c->r[0]=0u+0x00000138u; // 800B14A8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,26,ea,0,0);} // 800B14AC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[26]=RF64(ea);} // 800B14B0
  c->r[0]=0u+0x00000128u; // 800B14B4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,25,ea,0,0);} // 800B14B8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[25]=RF64(ea);} // 800B14BC
  c->r[0]=0u+0x00000118u; // 800B14C0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,24,ea,0,0);} // 800B14C4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[24]=RF64(ea);} // 800B14C8
  c->r[11]=c->r[1]+0x00000110u; // 800B14CC
  c->lr=0x800B14D4u; f_802F0DE0(c); // 800B14D0
  c->r[0]=R32(c->r[1]+0x00000194u); // 800B14D4
  c->lr=c->r[0]; // 800B14D8
  c->r[1]=c->r[1]+0x00000190u; // 800B14DC
  return; // 800B14E0
}

// fn_800B14E4
void f_800B14E4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 800B14E4
  f_800B4244(c); return; // 800B14E8
}

// fn_800B14EC
void f_800B14EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B14EC
  c->r[0]=c->lr; // 800B14F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B14F4
  c->r[11]=c->r[1]+0x00000020u; // 800B14F8
  c->lr=0x800B1500u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B14FC
  c->r[27]=c->r[3]|c->r[3]; // 800B1500
  c->lr=0x800B1508u; f_8007B524(c); // 800B1504
  c->lr=0x800B150Cu; f_8006E224(c); // 800B1508
  c->lr=0x800B1510u; f_8006E3DC(c); // 800B150C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B1510
  c->r[12]=R32(c->r[12]+0x00000030u); // 800B1514
  c->ctr=c->r[12]; // 800B1518
  if (true) { c->lr=0x800B1520u; dispatch(c,c->ctr); } // 800B151C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1520
  if (crb(c,2)) { goto L_800B164C; } // 800B1524
  c->lr=0x800B152Cu; f_8007B524(c); // 800B1528
  c->lr=0x800B1530u; f_8006E224(c); // 800B152C
  c->lr=0x800B1534u; f_8006E3D0(c); // 800B1530
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B1534
  c->r[12]=R32(c->r[12]+0x00000030u); // 800B1538
  c->ctr=c->r[12]; // 800B153C
  if (true) { c->lr=0x800B1544u; dispatch(c,c->ctr); } // 800B1540
  cmps(c,0,(int32_t)c->r[3],0); // 800B1544
  if (crb(c,2)) { goto L_800B164C; } // 800B1548
  c->r[3]=0u+0x00000003u; // 800B154C
  c->lr=0x800B1554u; f_8005D854(c); // 800B1550
  c->r[29]=0u+0x00000000u; // 800B1554
  c->r[30]=c->r[27]+0x000000C8u; // 800B1558
L_800B155C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B155C
  c->lr=0x800B1564u; f_800F1D58(c); // 800B1560
  c->r[30]=c->r[30]+0x0000068Cu; // 800B1564
  c->r[29]=c->r[29]+0x00000001u; // 800B1568
  cmps(c,0,(int32_t)c->r[29],3); // 800B156C
  if (crb(c,0)) { IRQCHK(c); goto L_800B155C; } // 800B1570
  c->r[3]=c->r[27]+0x00050000u; // 800B1574
  c->r[3]=c->r[3]+0xFFFF8F48u; // 800B1578
  c->lr=0x800B1580u; f_8005B5A0(c); // 800B157C
  c->r[29]=0u+0x00000000u; // 800B1580
  c->r[30]=c->r[27]+0x00050000u; // 800B1584
  c->r[30]=c->r[30]+0xFFFF8228u; // 800B1588
L_800B158C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B158C
  c->lr=0x800B1594u; f_8004D19C(c); // 800B1590
  c->r[30]=c->r[30]+0x000001E0u; // 800B1594
  c->r[29]=c->r[29]+0x00000001u; // 800B1598
  cmps(c,0,(int32_t)c->r[29],7); // 800B159C
  if (crb(c,0)) { IRQCHK(c); goto L_800B158C; } // 800B15A0
  c->r[29]=0u+0x00000000u; // 800B15A4
  c->r[31]=c->r[27]+0x00007238u; // 800B15A8
L_800B15AC:;
  c->r[28]=0u+0x00000000u; // 800B15AC
  c->r[30]=c->r[31]|c->r[31]; // 800B15B0
L_800B15B4:;
  c->r[3]=c->r[30]+0x00000014u; // 800B15B4
  c->lr=0x800B15BCu; f_8004D19C(c); // 800B15B8
  c->r[30]=c->r[30]+0x00000200u; // 800B15BC
  c->r[28]=c->r[28]+0x00000001u; // 800B15C0
  cmps(c,0,(int32_t)c->r[28],13); // 800B15C4
  if (crb(c,0)) { IRQCHK(c); goto L_800B15B4; } // 800B15C8
  c->r[31]=c->r[31]+0x00001A00u; // 800B15CC
  c->r[29]=c->r[29]+0x00000001u; // 800B15D0
  cmps(c,0,(int32_t)c->r[29],13); // 800B15D4
  if (crb(c,0)) { IRQCHK(c); goto L_800B15AC; } // 800B15D8
  c->r[30]=0u+0x00000000u; // 800B15DC
  c->r[31]=c->r[27]+0x00020000u; // 800B15E0
  c->r[31]=c->r[31]+0xFFFFC45Cu; // 800B15E4
L_800B15E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B15E8
  c->lr=0x800B15F0u; f_8004D19C(c); // 800B15EC
  c->r[31]=c->r[31]+0x000001E0u; // 800B15F0
  c->r[30]=c->r[30]+0x00000001u; // 800B15F4
  cmps(c,0,(int32_t)c->r[30],364); // 800B15F8
  if (crb(c,0)) { IRQCHK(c); goto L_800B15E8; } // 800B15FC
  c->r[30]=0u+0x00000000u; // 800B1600
  c->r[31]=c->r[27]+0x00040000u; // 800B1604
  c->r[31]=c->r[31]+0x00006F68u; // 800B1608
L_800B160C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B160C
  c->lr=0x800B1614u; f_8004D19C(c); // 800B1610
  c->r[31]=c->r[31]+0x000001E0u; // 800B1614
  c->r[30]=c->r[30]+0x00000001u; // 800B1618
  cmps(c,0,(int32_t)c->r[30],10); // 800B161C
  if (crb(c,0)) { IRQCHK(c); goto L_800B160C; } // 800B1620
  c->r[3]=0u+0x00000003u; // 800B1624
  c->lr=0x800B162Cu; f_8005D8D8(c); // 800B1628
  c->r[0]=R32(c->r[27]+0x000000B8u); // 800B162C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800B1630
  W32(c->r[27]+0x000000B8u,c->r[0]); // 800B1634
  c->r[0]=c->r[0]|0x00000002u; // 800B1638
  W32(c->r[27]+0x000000B8u,c->r[0]); // 800B163C
  c->r[3]=c->r[27]|c->r[27]; // 800B1640
  c->r[4]=0u+0x00000000u; // 800B1644
  c->lr=0x800B164Cu; f_800B4244(c); // 800B1648
L_800B164C:;
  c->r[11]=c->r[1]+0x00000020u; // 800B164C
  c->lr=0x800B1654u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1650
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1654
  c->lr=c->r[0]; // 800B1658
  c->r[1]=c->r[1]+0x00000020u; // 800B165C
  return; // 800B1660
}

// fn_800B1664
void f_800B1664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1664
  c->r[0]=c->lr; // 800B1668
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B166C
  c->r[11]=c->r[1]+0x00000020u; // 800B1670
  c->lr=0x800B1678u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1674
  c->r[30]=c->r[3]|c->r[3]; // 800B1678
  c->r[3]=c->r[3]+0x00050000u; // 800B167C
  c->r[3]=c->r[3]+0xFFFF8F48u; // 800B1680
  c->r[4]=0u+0x00000014u; // 800B1684
  c->lr=0x800B168Cu; f_8028CA58(c); // 800B1688
  c->r[6]=0u+0x00000000u; // 800B168C
  c->r[5]=c->r[30]|c->r[30]; // 800B1690
  c->r[4]=0u+0x00000000u; // 800B1694
  c->r[3]=0u+0x00000001u; // 800B1698
  c->r[0]=0u+0x00000011u; // 800B169C
  c->ctr=c->r[0]; // 800B16A0
L_800B16A4:;
  W32(c->r[5]+0x000062B0u,c->r[4]); // 800B16A4
  W32(c->r[5]+0x000062B8u,c->r[6]); // 800B16A8
  W32(c->r[5]+0x000062B4u,c->r[3]); // 800B16AC
  W32(c->r[5]+0x000062CCu,c->r[4]); // 800B16B0
  c->r[0]=c->r[6]+0x00000001u; // 800B16B4
  W32(c->r[5]+0x000062D4u,c->r[0]); // 800B16B8
  W32(c->r[5]+0x000062D0u,c->r[3]); // 800B16BC
  W32(c->r[5]+0x000062E8u,c->r[4]); // 800B16C0
  c->r[0]=c->r[6]+0x00000002u; // 800B16C4
  W32(c->r[5]+0x000062F0u,c->r[0]); // 800B16C8
  W32(c->r[5]+0x000062ECu,c->r[3]); // 800B16CC
  W32(c->r[5]+0x00006304u,c->r[4]); // 800B16D0
  c->r[0]=c->r[6]+0x00000003u; // 800B16D4
  W32(c->r[5]+0x0000630Cu,c->r[0]); // 800B16D8
  W32(c->r[5]+0x00006308u,c->r[3]); // 800B16DC
  W32(c->r[5]+0x00006320u,c->r[4]); // 800B16E0
  c->r[0]=c->r[6]+0x00000004u; // 800B16E4
  W32(c->r[5]+0x00006328u,c->r[0]); // 800B16E8
  W32(c->r[5]+0x00006324u,c->r[3]); // 800B16EC
  W32(c->r[5]+0x0000633Cu,c->r[4]); // 800B16F0
  c->r[0]=c->r[6]+0x00000005u; // 800B16F4
  W32(c->r[5]+0x00006344u,c->r[0]); // 800B16F8
  W32(c->r[5]+0x00006340u,c->r[3]); // 800B16FC
  W32(c->r[5]+0x00006358u,c->r[4]); // 800B1700
  c->r[0]=c->r[6]+0x00000006u; // 800B1704
  W32(c->r[5]+0x00006360u,c->r[0]); // 800B1708
  W32(c->r[5]+0x0000635Cu,c->r[3]); // 800B170C
  W32(c->r[5]+0x00006374u,c->r[4]); // 800B1710
  c->r[0]=c->r[6]+0x00000007u; // 800B1714
  W32(c->r[5]+0x0000637Cu,c->r[0]); // 800B1718
  W32(c->r[5]+0x00006378u,c->r[3]); // 800B171C
  c->r[5]=c->r[5]+0x000000E0u; // 800B1720
  c->r[6]=c->r[6]+0x00000008u; // 800B1724
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B16A4; } // 800B1728
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 800B172C
  c->r[5]=c->r[30]+c->r[0]; // 800B1730
  c->r[4]=0u+0x00000000u; // 800B1734
  W32(c->r[5]+0x000062B0u,c->r[4]); // 800B1738
  W32(c->r[5]+0x000062B8u,c->r[6]); // 800B173C
  c->r[3]=0u+0x00000001u; // 800B1740
  W32(c->r[5]+0x000062B4u,c->r[3]); // 800B1744
  W32(c->r[5]+0x000062CCu,c->r[4]); // 800B1748
  c->r[0]=c->r[6]+0x00000001u; // 800B174C
  W32(c->r[5]+0x000062D4u,c->r[0]); // 800B1750
  W32(c->r[5]+0x000062D0u,c->r[3]); // 800B1754
  W32(c->r[5]+0x000062E8u,c->r[4]); // 800B1758
  c->r[0]=c->r[6]+0x00000002u; // 800B175C
  W32(c->r[5]+0x000062F0u,c->r[0]); // 800B1760
  W32(c->r[5]+0x000062ECu,c->r[3]); // 800B1764
  W32(c->r[5]+0x00006304u,c->r[4]); // 800B1768
  c->r[0]=c->r[6]+0x00000003u; // 800B176C
  W32(c->r[5]+0x0000630Cu,c->r[0]); // 800B1770
  W32(c->r[5]+0x00006308u,c->r[3]); // 800B1774
  c->r[28]=0u+0x00000002u; // 800B1778
  c->r[29]=c->r[30]+0x00050000u; // 800B177C
  c->r[29]=c->r[29]+0xFFFF85E8u; // 800B1780
L_800B1784:;
  cmps(c,0,(int32_t)c->r[28],3); // 800B1784
  if (crb(c,2)) { goto L_800B17B0; } // 800B1788
  if (!crb(c,0)) { goto L_800B179C; } // 800B178C
  cmps(c,0,(int32_t)c->r[28],2); // 800B1790
  if (!crb(c,0)) { goto L_800B17A8; } // 800B1794
  goto L_800B17BC; // 800B1798
L_800B179C:;
  cmps(c,0,(int32_t)c->r[28],5); // 800B179C
  if (!crb(c,0)) { goto L_800B17BC; } // 800B17A0
  goto L_800B17B8; // 800B17A4
L_800B17A8:;
  c->r[31]=0u+0x00000020u; // 800B17A8
  goto L_800B17BC; // 800B17AC
L_800B17B0:;
  c->r[31]=0u+0x00000064u; // 800B17B0
  goto L_800B17BC; // 800B17B4
L_800B17B8:;
  c->r[31]=0u+0x00000008u; // 800B17B8
L_800B17BC:;
  c->lr=0x800B17C0u; f_8007B524(c); // 800B17BC
  c->r[4]=0u+0x0000000Au; // 800B17C0
  c->lr=0x800B17C8u; f_800A1B48(c); // 800B17C4
  c->r[7]=c->r[3]|c->r[3]; // 800B17C8
  c->r[3]=c->r[29]|c->r[29]; // 800B17CC
  c->r[4]=0u+0x00000003u; // 800B17D0
  c->r[5]=c->r[31]|c->r[31]; // 800B17D4
  c->r[6]=0u+0x00000000u; // 800B17D8
  c->r[8]=0u+0x00000000u; // 800B17DC
  c->lr=0x800B17E4u; f_8004CFB0(c); // 800B17E0
  c->lr=0x800B17E8u; f_8007B524(c); // 800B17E4
  c->lr=0x800B17ECu; f_8006E224(c); // 800B17E8
  c->lr=0x800B17F0u; f_8006E3AC(c); // 800B17EC
  c->r[4]=c->r[3]|c->r[3]; // 800B17F0
  c->r[3]=c->r[29]+0x000000B4u; // 800B17F4
  c->r[4]=c->r[4]+0x00000C08u; // 800B17F8
  c->r[5]=0u+0x00000000u; // 800B17FC
  c->lr=0x800B1804u; f_8004CDA8(c); // 800B1800
  c->r[3]=c->r[29]|c->r[29]; // 800B1804
  c->r[4]=0u+0x00000000u; // 800B1808
  c->lr=0x800B1810u; f_8004D73C(c); // 800B180C
  c->r[3]=c->r[29]|c->r[29]; // 800B1810
  c->r[4]=0u+0x00000000u; // 800B1814
  c->lr=0x800B181Cu; f_8004D7F8(c); // 800B1818
  c->r[3]=c->r[30]+0x000000C8u; // 800B181C
  c->r[4]=c->r[29]|c->r[29]; // 800B1820
  c->lr=0x800B1828u; f_800F1C90(c); // 800B1824
  c->r[27]=0u+0x00000000u; // 800B1828
  goto L_800B1844; // 800B182C
L_800B1830:;
  c->r[3]=c->r[29]|c->r[29]; // 800B1830
  c->r[4]=c->r[27]|c->r[27]; // 800B1834
  c->r[5]=0u+0x00000000u; // 800B1838
  c->lr=0x800B1840u; f_8004D6F8(c); // 800B183C
  c->r[27]=c->r[27]+0x00000001u; // 800B1840
L_800B1844:;
  cmpu(c,0,c->r[27],c->r[31]); // 800B1844
  if (crb(c,0)) { IRQCHK(c); goto L_800B1830; } // 800B1848
  c->r[29]=c->r[29]+0x000001E0u; // 800B184C
  c->r[28]=c->r[28]+0x00000001u; // 800B1850
  cmpu(c,0,c->r[28],0x00000005u); // 800B1854
  if (crb(c,0)) { IRQCHK(c); goto L_800B1784; } // 800B1858
  c->r[11]=c->r[1]+0x00000020u; // 800B185C
  c->lr=0x800B1864u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1860
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1864
  c->lr=c->r[0]; // 800B1868
  c->r[1]=c->r[1]+0x00000020u; // 800B186C
  return; // 800B1870
}

// fn_800B1874
void f_800B1874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1874
  c->r[0]=c->lr; // 800B1878
  W32(c->r[1]+0x00000144u,c->r[0]); // 800B187C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800B1880
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800B1884
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 800B1888
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 800B188C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 800B1890
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 800B1894
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[28]);} // 800B1898
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,28,ea,0,0);} // 800B189C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[27]);} // 800B18A0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,27,ea,0,0);} // 800B18A4
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[26]);} // 800B18A8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,26,ea,0,0);} // 800B18AC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[25]);} // 800B18B0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,25,ea,0,0);} // 800B18B4
  c->r[11]=c->r[1]+0x000000D0u; // 800B18B8
  c->lr=0x800B18C0u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B18BC
  c->r[28]=c->r[3]|c->r[3]; // 800B18C0
  c->r[0]=0u+0x43300000u; // 800B18C4
  W32(c->r[1]+0x00000070u,c->r[0]); // 800B18C8
  c->r[0]=0u+0x43300000u; // 800B18CC
  W32(c->r[1]+0x00000078u,c->r[0]); // 800B18D0
  c->lr=0x800B18D8u; f_8007B524(c); // 800B18D4
  c->lr=0x800B18DCu; f_8006E224(c); // 800B18D8
  c->lr=0x800B18E0u; f_800897A8(c); // 800B18DC
  c->r[31]=c->r[3]|c->r[3]; // 800B18E0
  c->r[3]=R32(c->r[3]+0x000000D0u); // 800B18E4
  c->r[30]=c->r[3]+0x00000050u; // 800B18E8
  c->r[3]=c->r[1]+0x00000040u; // 800B18EC
  c->lr=0x800B18F4u; f_8004B0A4(c); // 800B18F0
  c->r[3]=c->r[1]+0x0000004Cu; // 800B18F4
  c->lr=0x800B18FCu; f_8004B0A4(c); // 800B18F8
  c->r[3]=c->r[1]+0x00000058u; // 800B18FC
  c->lr=0x800B1904u; f_8004B0A4(c); // 800B1900
  c->r[3]=c->r[1]+0x00000064u; // 800B1904
  c->lr=0x800B190Cu; f_8004B0A4(c); // 800B1908
  c->r[3]=c->r[1]+0x00000020u; // 800B190C
  c->lr=0x800B1914u; f_800592DC(c); // 800B1910
  c->r[3]=c->r[1]+0x00000028u; // 800B1914
  c->lr=0x800B191Cu; f_800592DC(c); // 800B1918
  c->r[3]=c->r[1]+0x00000030u; // 800B191C
  c->lr=0x800B1924u; f_800592DC(c); // 800B1920
  c->r[3]=c->r[1]+0x00000038u; // 800B1924
  c->lr=0x800B192Cu; f_800592DC(c); // 800B1928
  c->r[3]=c->r[1]+0x00000014u; // 800B192C
  c->lr=0x800B1934u; f_80047C5C(c); // 800B1930
  c->r[3]=c->r[1]+0x00000010u; // 800B1934
  c->lr=0x800B193Cu; f_80047C5C(c); // 800B1938
  c->r[3]=c->r[1]+0x0000000Cu; // 800B193C
  c->lr=0x800B1944u; f_80047C5C(c); // 800B1940
  c->r[3]=c->r[1]+0x00000008u; // 800B1944
  c->lr=0x800B194Cu; f_80047C5C(c); // 800B1948
  c->r[3]=0u+0x00000003u; // 800B194C
  c->lr=0x800B1954u; f_8005D854(c); // 800B1950
  c->r[18]=0u+0x00000000u; // 800B1954
  c->r[19]=0u+0x00000000u; // 800B1958
  c->r[22]=R32(c->r[30]+0x0000001Cu); // 800B195C
  c->r[23]=R32(c->r[30]+0x00000020u); // 800B1960
  c->r[24]=0u+0x00000000u; // 800B1964
  c->r[25]=0u+0x00000000u; // 800B1968
  c->r[17]=0u+0x00000000u; // 800B196C
  goto L_800B1A48; // 800B1970
L_800B1974:;
  c->r[16]=0u+0x00000000u; // 800B1974
  goto L_800B1A38; // 800B1978
L_800B197C:;
  W32(c->r[1]+0x00000018u,c->r[16]); // 800B197C
  W32(c->r[1]+0x0000001Cu,c->r[17]); // 800B1980
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[17]); // 800B1984
  c->r[0]=c->r[16]+c->r[0]; // 800B1988
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800B198C
  c->r[3]=c->r[30]+c->r[0]; // 800B1990
  c->r[0]=R32(c->r[3]+0x000018B4u); // 800B1994
  cmps(c,0,(int32_t)c->r[0],4); // 800B1998
  if (!crb(c,0)) { goto L_800B19AC; } // 800B199C
  cmps(c,0,(int32_t)c->r[0],1); // 800B19A0
  if (crb(c,2)) { goto L_800B19B4; } // 800B19A4
  goto L_800B1A34; // 800B19A8
L_800B19AC:;
  cmps(c,0,(int32_t)c->r[0],6); // 800B19AC
  if (!crb(c,0)) { goto L_800B1A34; } // 800B19B0
L_800B19B4:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[16]); // 800B19B4
  if (!crb(c,1)) { goto L_800B19C0; } // 800B19B8
  c->r[22]=c->r[16]|c->r[16]; // 800B19BC
L_800B19C0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[17]); // 800B19C0
  if (!crb(c,1)) { goto L_800B19CC; } // 800B19C4
  c->r[23]=c->r[17]|c->r[17]; // 800B19C8
L_800B19CC:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[16]); // 800B19CC
  if (!crb(c,0)) { goto L_800B19D8; } // 800B19D0
  c->r[24]=c->r[16]|c->r[16]; // 800B19D4
L_800B19D8:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[17]); // 800B19D8
  if (!crb(c,0)) { goto L_800B19E4; } // 800B19DC
  c->r[25]=c->r[17]|c->r[17]; // 800B19E0
L_800B19E4:;
  c->r[18]=c->r[18]+0x00000001u; // 800B19E4
  c->r[15]=0u+0x00000000u; // 800B19E8
  c->r[26]=0u+0x00000001u; // 800B19EC
L_800B19F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B19F0
  c->r[4]=c->r[1]+0x00000018u; // 800B19F4
  c->r[5]=c->r[26]|c->r[26]; // 800B19F8
  c->lr=0x800B1A00u; f_80067AC4(c); // 800B19FC
  cmps(c,0,(int32_t)c->r[3],1); // 800B1A00
  if (crb(c,2)) { goto L_800B1A24; } // 800B1A04
  if (!crb(c,0)) { goto L_800B1A18; } // 800B1A08
  cmps(c,0,(int32_t)c->r[3],0); // 800B1A0C
  if (!crb(c,0)) { goto L_800B1A20; } // 800B1A10
  goto L_800B1A24; // 800B1A14
L_800B1A18:;
  cmps(c,0,(int32_t)c->r[3],3); // 800B1A18
  if (!crb(c,0)) { goto L_800B1A24; } // 800B1A1C
L_800B1A20:;
  c->r[19]=c->r[19]+0x00000001u; // 800B1A20
L_800B1A24:;
  c->r[26]=c->r[26]+0x00000002u; // 800B1A24
  c->r[15]=c->r[15]+0x00000001u; // 800B1A28
  cmps(c,0,(int32_t)c->r[15],4); // 800B1A2C
  if (crb(c,0)) { IRQCHK(c); goto L_800B19F0; } // 800B1A30
L_800B1A34:;
  c->r[16]=c->r[16]+0x00000001u; // 800B1A34
L_800B1A38:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B1A38
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 800B1A3C
  if (crb(c,0)) { IRQCHK(c); goto L_800B197C; } // 800B1A40
  c->r[17]=c->r[17]+0x00000001u; // 800B1A44
L_800B1A48:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 800B1A48
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 800B1A4C
  if (crb(c,0)) { IRQCHK(c); goto L_800B1974; } // 800B1A50
  c->r[15]=c->r[28]+0x00050000u; // 800B1A54
  c->r[15]=c->r[15]+0xFFFF8228u; // 800B1A58
  c->lr=0x800B1A60u; f_8007B524(c); // 800B1A5C
  c->r[4]=0u+0x0000000Au; // 800B1A60
  c->lr=0x800B1A68u; f_800A1B48(c); // 800B1A64
  c->r[7]=c->r[3]|c->r[3]; // 800B1A68
  c->r[3]=c->r[15]|c->r[15]; // 800B1A6C
  c->r[4]=0u+0x00000003u; // 800B1A70
  c->r[5]=c->r[18]|c->r[18]; // 800B1A74
  c->r[6]=0u+0x00000000u; // 800B1A78
  c->r[8]=0u+0x00000000u; // 800B1A7C
  c->lr=0x800B1A84u; f_8004CFB0(c); // 800B1A80
  c->r[3]=c->r[15]|c->r[15]; // 800B1A84
  c->r[4]=0u+0x00000000u; // 800B1A88
  c->lr=0x800B1A90u; f_8004D73C(c); // 800B1A8C
  c->r[3]=c->r[15]|c->r[15]; // 800B1A90
  c->r[4]=0u+0x00000000u; // 800B1A94
  c->lr=0x800B1A9Cu; f_8004D7F8(c); // 800B1A98
  c->r[3]=c->r[15]|c->r[15]; // 800B1A9C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1AA0
  c->f[2]=c->f[1]; // 800B1AA4
  {uint32_t ea=c->r[2]+0xFFFF8750u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1AA8
  c->lr=0x800B1AB0u; f_80070424(c); // 800B1AAC
  c->r[3]=c->r[15]|c->r[15]; // 800B1AB0
  c->lr=0x800B1AB8u; f_8004E1AC(c); // 800B1AB4
  c->r[3]=c->r[28]+0x000000C8u; // 800B1AB8
  c->r[4]=c->r[15]|c->r[15]; // 800B1ABC
  c->lr=0x800B1AC4u; f_800F1C90(c); // 800B1AC0
  c->r[17]=c->r[28]+0x00050000u; // 800B1AC4
  c->r[17]=c->r[17]+0xFFFF8D68u; // 800B1AC8
  c->lr=0x800B1AD0u; f_8007B524(c); // 800B1ACC
  c->r[4]=0u+0x0000000Au; // 800B1AD0
  c->lr=0x800B1AD8u; f_800A1B48(c); // 800B1AD4
  c->r[7]=c->r[3]|c->r[3]; // 800B1AD8
  c->r[3]=c->r[17]|c->r[17]; // 800B1ADC
  c->r[4]=0u+0x00000003u; // 800B1AE0
  c->r[5]=0u+0x00000001u; // 800B1AE4
  c->r[6]=0u+0x00000000u; // 800B1AE8
  c->r[8]=0u+0x00000000u; // 800B1AEC
  c->lr=0x800B1AF4u; f_8004CFB0(c); // 800B1AF0
  c->r[3]=c->r[17]|c->r[17]; // 800B1AF4
  c->r[4]=0u+0x00000000u; // 800B1AF8
  c->lr=0x800B1B00u; f_8004D73C(c); // 800B1AFC
  c->r[3]=c->r[17]|c->r[17]; // 800B1B00
  c->r[4]=0u+0x00000000u; // 800B1B04
  c->lr=0x800B1B0Cu; f_8004D7F8(c); // 800B1B08
  c->r[3]=c->r[17]|c->r[17]; // 800B1B0C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1B10
  c->f[2]=c->f[1]; // 800B1B14
  {uint32_t ea=c->r[2]+0xFFFF8754u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1B18
  c->lr=0x800B1B20u; f_80070424(c); // 800B1B1C
  c->r[3]=c->r[17]|c->r[17]; // 800B1B20
  c->lr=0x800B1B28u; f_8004E1AC(c); // 800B1B24
  c->r[3]=c->r[28]+0x000000C8u; // 800B1B28
  c->r[4]=c->r[17]|c->r[17]; // 800B1B2C
  c->lr=0x800B1B34u; f_800F1C90(c); // 800B1B30
  {uint32_t ea=c->r[2]+0xFFFF8758u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1B34
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 800B1B38
  {uint32_t ea=c->r[2]+0xFFFF875Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1B3C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800B1B40
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1B44
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 800B1B48
  {uint32_t ea=c->r[2]+0xFFFF8760u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1B4C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B1B50
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800B1B54
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800B1B58
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B1B5C
  {uint32_t ea=c->r[2]+0xFFFF8764u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1B60
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B1B64
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 800B1B68
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 800B1B6C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B1B70
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 800B1B74
  c->r[0]=0u+0x00000000u; // 800B1B78
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B1B7C
  W8(c->r[1]+0x00000015u,c->r[0]); // 800B1B80
  W8(c->r[1]+0x00000016u,c->r[0]); // 800B1B84
  c->r[0]=0u+0x00000060u; // 800B1B88
  W8(c->r[1]+0x00000017u,c->r[0]); // 800B1B8C
  c->r[15]=0u+0x00000000u; // 800B1B90
  c->r[16]=c->r[1]+0x00000040u; // 800B1B94
L_800B1B98:;
  c->r[3]=c->r[17]|c->r[17]; // 800B1B98
  c->r[4]=0u+0x00000000u; // 800B1B9C
  c->r[5]=c->r[15]|c->r[15]; // 800B1BA0
  c->r[6]=c->r[16]|c->r[16]; // 800B1BA4
  c->lr=0x800B1BACu; f_8004D384(c); // 800B1BA8
  c->r[3]=c->r[17]|c->r[17]; // 800B1BAC
  c->r[4]=0u+0x00000000u; // 800B1BB0
  c->r[5]=c->r[15]|c->r[15]; // 800B1BB4
  c->r[6]=c->r[1]+0x00000014u; // 800B1BB8
  c->lr=0x800B1BC0u; f_8004D508(c); // 800B1BBC
  c->r[16]=c->r[16]+0x0000000Cu; // 800B1BC0
  c->r[15]=c->r[15]+0x00000001u; // 800B1BC4
  cmps(c,0,(int32_t)c->r[15],4); // 800B1BC8
  if (crb(c,0)) { IRQCHK(c); goto L_800B1B98; } // 800B1BCC
  c->r[15]=c->r[28]+0x00050000u; // 800B1BD0
  c->r[15]=c->r[15]+0xFFFF8408u; // 800B1BD4
  c->lr=0x800B1BDCu; f_8007B524(c); // 800B1BD8
  c->r[4]=0u+0x0000000Au; // 800B1BDC
  c->lr=0x800B1BE4u; f_800A1B48(c); // 800B1BE0
  c->r[7]=c->r[3]|c->r[3]; // 800B1BE4
  c->r[3]=c->r[15]|c->r[15]; // 800B1BE8
  c->r[4]=0u+0x00000001u; // 800B1BEC
  c->r[5]=c->r[19]|c->r[19]; // 800B1BF0
  c->r[6]=0u+0x00000000u; // 800B1BF4
  c->r[8]=0u+0x00000000u; // 800B1BF8
  c->lr=0x800B1C00u; f_8004CFB0(c); // 800B1BFC
  c->r[3]=c->r[15]|c->r[15]; // 800B1C00
  c->r[4]=0u+0x00000000u; // 800B1C04
  c->lr=0x800B1C0Cu; f_8004D73C(c); // 800B1C08
  c->r[3]=c->r[15]|c->r[15]; // 800B1C0C
  c->r[4]=0u+0x00000000u; // 800B1C10
  c->lr=0x800B1C18u; f_8004D7F8(c); // 800B1C14
  c->r[3]=c->r[15]|c->r[15]; // 800B1C18
  c->r[4]=0u+0x0000000Cu; // 800B1C1C
  c->lr=0x800B1C24u; f_8004D818(c); // 800B1C20
  c->r[3]=c->r[15]|c->r[15]; // 800B1C24
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1C28
  c->f[2]=c->f[1]; // 800B1C2C
  {uint32_t ea=c->r[2]+0xFFFF8768u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1C30
  c->lr=0x800B1C38u; f_80070424(c); // 800B1C34
  c->r[3]=c->r[15]|c->r[15]; // 800B1C38
  c->lr=0x800B1C40u; f_8004E1AC(c); // 800B1C3C
  c->r[3]=c->r[28]+0x000000C8u; // 800B1C40
  c->r[4]=c->r[15]|c->r[15]; // 800B1C44
  c->lr=0x800B1C4Cu; f_800F1C90(c); // 800B1C48
  c->r[16]=c->r[28]+0x00050000u; // 800B1C4C
  c->r[16]=c->r[16]+0xFFFF8B88u; // 800B1C50
  c->lr=0x800B1C58u; f_8007B524(c); // 800B1C54
  c->r[4]=0u+0x0000000Au; // 800B1C58
  c->lr=0x800B1C60u; f_800A1B48(c); // 800B1C5C
  c->r[7]=c->r[3]|c->r[3]; // 800B1C60
  c->r[3]=c->r[16]|c->r[16]; // 800B1C64
  c->r[4]=0u+0x00000003u; // 800B1C68
  c->r[5]=0u+0x00000003u; // 800B1C6C
  c->r[6]=0u+0x00000000u; // 800B1C70
  c->r[8]=0u+0x00000000u; // 800B1C74
  c->lr=0x800B1C7Cu; f_8004CFB0(c); // 800B1C78
  c->lr=0x800B1C80u; f_8007B524(c); // 800B1C7C
  c->lr=0x800B1C84u; f_8006E224(c); // 800B1C80
  c->lr=0x800B1C88u; f_8006E3AC(c); // 800B1C84
  c->r[4]=c->r[3]|c->r[3]; // 800B1C88
  c->r[3]=c->r[16]+0x000000B4u; // 800B1C8C
  c->r[4]=c->r[4]+0x00000C08u; // 800B1C90
  c->r[5]=0u+0x00000000u; // 800B1C94
  c->lr=0x800B1C9Cu; f_8004CDA8(c); // 800B1C98
  c->r[3]=c->r[16]+0x000000B4u; // 800B1C9C
  c->r[4]=0u+0x00000001u; // 800B1CA0
  c->r[5]=0u+0x00000000u; // 800B1CA4
  c->lr=0x800B1CACu; f_8004CCE4(c); // 800B1CA8
  c->r[3]=c->r[16]|c->r[16]; // 800B1CAC
  c->r[4]=0u+0x00000000u; // 800B1CB0
  c->lr=0x800B1CB8u; f_8004D73C(c); // 800B1CB4
  c->r[3]=c->r[16]|c->r[16]; // 800B1CB8
  c->r[4]=0u+0x00000000u; // 800B1CBC
  c->lr=0x800B1CC4u; f_8004D7F8(c); // 800B1CC0
  c->r[3]=c->r[16]|c->r[16]; // 800B1CC4
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1CC8
  c->f[2]=c->f[1]; // 800B1CCC
  {uint32_t ea=c->r[2]+0xFFFF876Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1CD0
  c->lr=0x800B1CD8u; f_80070424(c); // 800B1CD4
  c->r[3]=c->r[16]|c->r[16]; // 800B1CD8
  c->lr=0x800B1CE0u; f_8004E1AC(c); // 800B1CDC
  c->r[3]=c->r[28]+0x000000C8u; // 800B1CE0
  c->r[4]=c->r[16]|c->r[16]; // 800B1CE4
  c->lr=0x800B1CECu; f_800F1C90(c); // 800B1CE8
  c->r[19]=0u+0x00000000u; // 800B1CEC
  W32(c->r[28]+0x0000628Cu,c->r[19]); // 800B1CF0
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[25]=c->ps1[25]=RF32(ea);} // 800B1CF4
  {uint32_t ea=c->r[28]+0x00006290u; WF32(ea,c->f[25]);} // 800B1CF8
  c->r[17]=0u+0x00000000u; // 800B1CFC
  c->r[26]=c->r[28]|c->r[28]; // 800B1D00
  c->r[3]=0u+0x80460000u; // 800B1D04
  c->r[18]=c->r[3]+0xFFFFFE78u; // 800B1D08
L_800B1D0C:;
  W32(c->r[26]+0x00006294u,c->r[19]); // 800B1D0C
  {uint32_t ea=c->r[26]+0x00006298u; WF32(ea,c->f[25]);} // 800B1D10
  c->r[3]=c->r[16]|c->r[16]; // 800B1D14
  c->r[4]=c->r[17]|c->r[17]; // 800B1D18
  c->r[5]=0u+0x00000000u; // 800B1D1C
  c->lr=0x800B1D24u; f_8004D6F8(c); // 800B1D20
  c->r[15]=0u+0x00000000u; // 800B1D24
  c->r[27]=c->r[1]+0x00000020u; // 800B1D28
L_800B1D2C:;
  c->r[3]=c->r[27]|c->r[27]; // 800B1D2C
  c->r[4]=R32(c->r[18]+0x00000040u); // 800B1D30
  c->lr=0x800B1D38u; f_800593A0(c); // 800B1D34
  c->r[27]=c->r[27]+0x00000008u; // 800B1D38
  c->r[15]=c->r[15]+0x00000001u; // 800B1D3C
  cmps(c,0,(int32_t)c->r[15],4); // 800B1D40
  if (crb(c,0)) { IRQCHK(c); goto L_800B1D2C; } // 800B1D44
  c->r[3]=R32(c->r[18]+0x00000044u); // 800B1D48
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1D4C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D50
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B1D54
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B1D58
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1D5C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B1D64
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800B1D68
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1D6C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D70
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B1D74
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800B1D78
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1D7C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D80
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B1D84
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B1D88
  c->r[15]=0u+0x00000000u; // 800B1D8C
  c->r[27]=c->r[1]+0x00000020u; // 800B1D90
L_800B1D94:;
  c->r[3]=c->r[16]|c->r[16]; // 800B1D94
  c->r[4]=c->r[17]|c->r[17]; // 800B1D98
  c->r[5]=c->r[15]|c->r[15]; // 800B1D9C
  c->r[6]=c->r[27]|c->r[27]; // 800B1DA0
  c->r[7]=0u+0xFFFFFFFFu; // 800B1DA4
  c->lr=0x800B1DACu; f_8004D650(c); // 800B1DA8
  c->r[27]=c->r[27]+0x00000008u; // 800B1DAC
  c->r[15]=c->r[15]+0x00000001u; // 800B1DB0
  cmps(c,0,(int32_t)c->r[15],4); // 800B1DB4
  if (crb(c,0)) { IRQCHK(c); goto L_800B1D94; } // 800B1DB8
  c->r[26]=c->r[26]+0x00000008u; // 800B1DBC
  c->r[17]=c->r[17]+0x00000001u; // 800B1DC0
  cmps(c,0,(int32_t)c->r[17],3); // 800B1DC4
  if (crb(c,0)) { IRQCHK(c); goto L_800B1D0C; } // 800B1DC8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B1DCC
  {uint32_t ea=c->r[2]+0xFFFF8798u; c->f[29]=RF64(ea);} // 800B1DD0
  c->r[0]=c->r[0]^0x80000000u; // 800B1DD4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1DD8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 800B1DDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B1DE0
  {uint32_t ea=c->r[2]+0xFFFF8770u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B1DE4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 800B1DE8
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1DEC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 800B1DF0
  c->r[3]=c->r[28]+0x00050000u; // 800B1DF4
  {uint32_t ea=c->r[3]+0xFFFF8F54u; WF32(ea,c->f[3]);} // 800B1DF8
  c->r[0]=R32(c->r[30]+0x00000020u); // 800B1DFC
  c->r[0]=c->r[0]^0x80000000u; // 800B1E00
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B1E04
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 800B1E08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1E0C
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1E10
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 800B1E14
  {uint32_t ea=c->r[3]+0xFFFF8F58u; WF32(ea,c->f[2]);} // 800B1E18
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 800B1E1C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B1E20
  c->r[0]=c->r[0]-c->r[24]; // 800B1E24
  c->r[0]=c->r[0]^0x80000000u; // 800B1E28
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1E2C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=RF64(ea);} // 800B1E30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1E34
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1E38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800B1E3C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 800B1E40
  {uint32_t ea=c->r[3]+0xFFFF8F54u; WF32(ea,c->f[1]);} // 800B1E44
  c->r[4]=R32(c->r[30]+0x00000020u); // 800B1E48
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800B1E4C
  c->r[0]=c->r[0]-c->r[25]; // 800B1E50
  c->r[0]=c->r[0]^0x80000000u; // 800B1E54
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B1E58
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 800B1E5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1E60
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1E64
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800B1E68
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800B1E6C
  {uint32_t ea=c->r[3]+0xFFFF8F58u; WF32(ea,c->f[1]);} // 800B1E70
  {uint32_t ea=c->r[3]+0xFFFF8F68u; WF32(ea,c->f[0]);} // 800B1E74
  {uint32_t ea=c->r[2]+0xFFFF8764u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1E78
  {uint32_t ea=c->r[3]+0xFFFF8F5Cu; WF32(ea,c->f[1]);} // 800B1E7C
  {uint32_t ea=c->r[2]+0xFFFF8778u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1E80
  {uint32_t ea=c->r[3]+0xFFFF8F60u; WF32(ea,c->f[1]);} // 800B1E84
  c->r[0]=0u+0x00000000u; // 800B1E88
  W32(c->r[3]+0xFFFF8F7Cu,c->r[0]); // 800B1E8C
  W32(c->r[3]+0xFFFF8F78u,c->r[0]); // 800B1E90
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B1E94
  c->r[0]=c->r[0]^0x80000000u; // 800B1E98
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1E9C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=RF64(ea);} // 800B1EA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1EA4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1EA8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800B1EAC
  c->f[1]=-c->f[1]; // 800B1EB0
  {uint32_t ea=c->r[3]+0xFFFF8F6Cu; WF32(ea,c->f[1]);} // 800B1EB4
  c->r[0]=R32(c->r[30]+0x00000020u); // 800B1EB8
  c->r[0]=c->r[0]^0x80000000u; // 800B1EBC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B1EC0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 800B1EC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1EC8
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1ECC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800B1ED0
  c->f[1]=-c->f[1]; // 800B1ED4
  {uint32_t ea=c->r[3]+0xFFFF8F70u; WF32(ea,c->f[1]);} // 800B1ED8
  c->r[0]=c->r[24]-c->r[22]; // 800B1EDC
  c->r[0]=c->r[0]^0x80000000u; // 800B1EE0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1EE4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=RF64(ea);} // 800B1EE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1EEC
  c->f[1]=-c->f[1]; // 800B1EF0
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1EF4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 800B1EF8
  {uint32_t ea=c->r[3]+0xFFFF8F6Cu; WF32(ea,c->f[3]);} // 800B1EFC
  c->r[0]=c->r[25]-c->r[23]; // 800B1F00
  c->r[0]=c->r[0]^0x80000000u; // 800B1F04
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B1F08
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 800B1F0C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800B1F10
  c->f[1]=-c->f[1]; // 800B1F14
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800B1F18
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 800B1F1C
  {uint32_t ea=c->r[3]+0xFFFF8F70u; WF32(ea,c->f[2]);} // 800B1F20
  c->r[0]=c->r[22]^0x80000000u; // 800B1F24
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1F28
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 800B1F2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B1F30
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800B1F34
  {uint32_t ea=c->r[2]+0xFFFF877Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1F38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B1F3C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800B1F40
  {uint32_t ea=c->r[3]+0xFFFF8F6Cu; WF32(ea,c->f[0]);} // 800B1F44
  c->r[0]=c->r[23]^0x80000000u; // 800B1F48
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B1F4C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 800B1F50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B1F54
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800B1F58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B1F5C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800B1F60
  {uint32_t ea=c->r[3]+0xFFFF8F70u; WF32(ea,c->f[0]);} // 800B1F64
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B1F68
  {uint32_t ea=c->r[3]+0xFFFF8F74u; WF32(ea,c->f[31]);} // 800B1F6C
  c->r[19]=0u+0x00000000u; // 800B1F70
  c->r[27]=0u+0xFFFFFFFFu; // 800B1F74
  c->r[23]=0u+0x80460000u; // 800B1F78
  c->r[24]=0u+0x000000A0u; // 800B1F7C
  c->r[25]=c->r[23]+0xFFFFFE50u; // 800B1F80
  c->r[26]=0u+0x00000040u; // 800B1F84
  goto L_800B226C; // 800B1F88
L_800B1F8C:;
  c->r[18]=0u+0x00000000u; // 800B1F8C
  goto L_800B225C; // 800B1F90
L_800B1F94:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[19]); // 800B1F94
  c->r[0]=c->r[18]+c->r[0]; // 800B1F98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800B1F9C
  c->r[22]=c->r[30]+c->r[0]; // 800B1FA0
  c->r[0]=R32(c->r[22]+0x000018B4u); // 800B1FA4
  cmps(c,0,(int32_t)c->r[0],4); // 800B1FA8
  if (!crb(c,0)) { goto L_800B1FBC; } // 800B1FAC
  cmps(c,0,(int32_t)c->r[0],1); // 800B1FB0
  if (crb(c,2)) { goto L_800B1FC4; } // 800B1FB4
  goto L_800B2258; // 800B1FB8
L_800B1FBC:;
  cmps(c,0,(int32_t)c->r[0],6); // 800B1FBC
  if (!crb(c,0)) { goto L_800B2258; } // 800B1FC0
L_800B1FC4:;
  c->r[16]=c->r[28]+0x00050000u; // 800B1FC4
  c->r[16]=c->r[16]+0xFFFF8228u; // 800B1FC8
  c->r[0]=c->r[18]^0x80000000u; // 800B1FCC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B1FD0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 800B1FD4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B1FD8
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 800B1FDC
  c->r[3]=c->r[28]+0x00050000u; // 800B1FE0
  {uint32_t ea=c->r[3]+0xFFFF8F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1FE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B1FE8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800B1FEC
  c->r[0]=c->r[19]^0x80000000u; // 800B1FF0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800B1FF4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 800B1FF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B1FFC
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 800B2000
  {uint32_t ea=c->r[3]+0xFFFF8F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2004
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B2008
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800B200C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 800B2010
  c->r[15]=0u+0x00000001u; // 800B2014
  c->r[17]=c->r[1]+0x0000004Cu; // 800B2018
L_800B201C:;
  c->r[3]=c->r[17]|c->r[17]; // 800B201C
  c->r[4]=c->r[1]+0x00000040u; // 800B2020
  c->lr=0x800B2028u; f_8004A65C(c); // 800B2024
  c->r[17]=c->r[17]+0x0000000Cu; // 800B2028
  c->r[15]=c->r[15]+0x00000001u; // 800B202C
  cmps(c,0,(int32_t)c->r[15],4); // 800B2030
  if (crb(c,0)) { IRQCHK(c); goto L_800B201C; } // 800B2034
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2038
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800B203C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B2040
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2044
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800B2048
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B204C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2050
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800B2054
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B2058
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B205C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800B2060
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B2064
  c->r[3]=c->r[28]+0x00050000u; // 800B2068
  c->r[4]=R32(c->r[3]+0xFFFF8F78u); // 800B206C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 800B2070
  c->r[3]=c->r[28]+c->r[0]; // 800B2074
  c->r[29]=c->r[3]+0x0000146Cu; // 800B2078
  W32(c->r[29]+0x00000000u,c->r[4]); // 800B207C
  W32(c->r[22]+0x000018D4u,c->r[29]); // 800B2080
  c->r[3]=c->r[1]+0x00000014u; // 800B2084
  c->r[4]=R32(c->r[23]+0xFFFFFE50u); // 800B2088
  c->lr=0x800B2090u; f_8005D48C(c); // 800B208C
  W8(c->r[1]+0x00000017u,c->r[24]); // 800B2090
  c->r[15]=0u+0x00000000u; // 800B2094
  c->r[22]=c->r[1]+0x00000040u; // 800B2098
  c->r[17]=c->r[28]+0x00050000u; // 800B209C
L_800B20A0:;
  c->r[3]=c->r[16]|c->r[16]; // 800B20A0
  c->r[4]=R32(c->r[17]+0xFFFF8F78u); // 800B20A4
  c->r[5]=c->r[15]|c->r[15]; // 800B20A8
  c->r[6]=c->r[22]|c->r[22]; // 800B20AC
  c->lr=0x800B20B4u; f_8004D384(c); // 800B20B0
  c->r[3]=c->r[16]|c->r[16]; // 800B20B4
  c->r[4]=R32(c->r[17]+0xFFFF8F78u); // 800B20B8
  c->r[5]=c->r[15]|c->r[15]; // 800B20BC
  c->r[6]=c->r[1]+0x00000014u; // 800B20C0
  c->lr=0x800B20C8u; f_8004D508(c); // 800B20C4
  c->r[22]=c->r[22]+0x0000000Cu; // 800B20C8
  c->r[15]=c->r[15]+0x00000001u; // 800B20CC
  cmps(c,0,(int32_t)c->r[15],4); // 800B20D0
  if (crb(c,0)) { IRQCHK(c); goto L_800B20A0; } // 800B20D4
  c->r[3]=c->r[16]|c->r[16]; // 800B20D8
  c->r[4]=c->r[28]+0x00050000u; // 800B20DC
  c->r[4]=R32(c->r[4]+0xFFFF8F78u); // 800B20E0
  c->r[5]=0u+0x00000000u; // 800B20E4
  c->lr=0x800B20ECu; f_8004D6F8(c); // 800B20E8
  c->r[4]=c->r[28]+0x00050000u; // 800B20EC
  c->r[3]=R32(c->r[4]+0xFFFF8F78u); // 800B20F0
  c->r[0]=c->r[3]+0x00000001u; // 800B20F4
  W32(c->r[4]+0xFFFF8F78u,c->r[0]); // 800B20F8
  c->r[16]=c->r[4]+0xFFFF8408u; // 800B20FC
  W32(c->r[1]+0x00000018u,c->r[18]); // 800B2100
  W32(c->r[1]+0x0000001Cu,c->r[19]); // 800B2104
  c->r[3]=c->r[1]+0x00000014u; // 800B2108
  c->r[4]=R32(c->r[25]+0x00000004u); // 800B210C
  c->lr=0x800B2114u; f_8005D48C(c); // 800B2110
  W8(c->r[1]+0x00000017u,c->r[26]); // 800B2114
  c->r[17]=0u+0x00000000u; // 800B2118
  c->r[22]=0u+0x00000001u; // 800B211C
L_800B2120:;
  W32(c->r[29]+0x00000004u,c->r[27]); // 800B2120
  c->r[3]=c->r[31]|c->r[31]; // 800B2124
  c->r[4]=c->r[1]+0x00000018u; // 800B2128
  c->r[5]=c->r[22]|c->r[22]; // 800B212C
  c->lr=0x800B2134u; f_80067AC4(c); // 800B2130
  cmps(c,0,(int32_t)c->r[3],1); // 800B2134
  if (crb(c,2)) { goto L_800B2244; } // 800B2138
  if (!crb(c,0)) { goto L_800B214C; } // 800B213C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2140
  if (!crb(c,0)) { goto L_800B2154; } // 800B2144
  goto L_800B2244; // 800B2148
L_800B214C:;
  cmps(c,0,(int32_t)c->r[3],3); // 800B214C
  if (!crb(c,0)) { goto L_800B2244; } // 800B2150
L_800B2154:;
  cmps(c,0,(int32_t)c->r[17],2); // 800B2154
  if (crb(c,2)) { goto L_800B2194; } // 800B2158
  if (!crb(c,0)) { goto L_800B2170; } // 800B215C
  cmps(c,0,(int32_t)c->r[17],0); // 800B2160
  if (crb(c,2)) { goto L_800B217C; } // 800B2164
  if (!crb(c,0)) { goto L_800B2188; } // 800B2168
  goto L_800B21A8; // 800B216C
L_800B2170:;
  cmps(c,0,(int32_t)c->r[17],4); // 800B2170
  if (!crb(c,0)) { goto L_800B21A8; } // 800B2174
  goto L_800B21A0; // 800B2178
L_800B217C:;
  c->r[21]=0u+0x00000000u; // 800B217C
  c->r[20]=0u+0x00000001u; // 800B2180
  goto L_800B21A8; // 800B2184
L_800B2188:;
  c->r[21]=0u+0x00000001u; // 800B2188
  c->r[20]=0u+0x00000002u; // 800B218C
  goto L_800B21A8; // 800B2190
L_800B2194:;
  c->r[21]=0u+0x00000002u; // 800B2194
  c->r[20]=0u+0x00000003u; // 800B2198
  goto L_800B21A8; // 800B219C
L_800B21A0:;
  c->r[21]=0u+0x00000003u; // 800B21A0
  c->r[20]=0u+0x00000000u; // 800B21A4
L_800B21A8:;
  c->r[3]=c->r[16]|c->r[16]; // 800B21A8
  c->r[4]=c->r[28]+0x00050000u; // 800B21AC
  c->r[4]=R32(c->r[4]+0xFFFF8F7Cu); // 800B21B0
  c->r[5]=0u+0x00000000u; // 800B21B4
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)12); // 800B21B8
  c->r[6]=c->r[1]+0x00000040u; // 800B21BC
  c->r[6]=c->r[6]+c->r[0]; // 800B21C0
  c->lr=0x800B21C8u; f_8004D384(c); // 800B21C4
  c->r[3]=c->r[16]|c->r[16]; // 800B21C8
  c->r[4]=c->r[28]+0x00050000u; // 800B21CC
  c->r[4]=R32(c->r[4]+0xFFFF8F7Cu); // 800B21D0
  c->r[5]=0u+0x00000000u; // 800B21D4
  c->r[6]=c->r[1]+0x00000014u; // 800B21D8
  c->lr=0x800B21E0u; f_8004D508(c); // 800B21DC
  c->r[3]=c->r[16]|c->r[16]; // 800B21E0
  c->r[4]=c->r[28]+0x00050000u; // 800B21E4
  c->r[4]=R32(c->r[4]+0xFFFF8F7Cu); // 800B21E8
  c->r[5]=0u+0x00000001u; // 800B21EC
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)12); // 800B21F0
  c->r[6]=c->r[1]+0x00000040u; // 800B21F4
  c->r[6]=c->r[6]+c->r[0]; // 800B21F8
  c->lr=0x800B2200u; f_8004D384(c); // 800B21FC
  c->r[3]=c->r[16]|c->r[16]; // 800B2200
  c->r[4]=c->r[28]+0x00050000u; // 800B2204
  c->r[4]=R32(c->r[4]+0xFFFF8F7Cu); // 800B2208
  c->r[5]=0u+0x00000001u; // 800B220C
  c->r[6]=c->r[1]+0x00000014u; // 800B2210
  c->lr=0x800B2218u; f_8004D508(c); // 800B2214
  c->r[3]=c->r[16]|c->r[16]; // 800B2218
  c->r[4]=c->r[28]+0x00050000u; // 800B221C
  c->r[4]=R32(c->r[4]+0xFFFF8F7Cu); // 800B2220
  c->r[5]=0u+0x00000000u; // 800B2224
  c->lr=0x800B222Cu; f_8004D6F8(c); // 800B2228
  c->r[4]=c->r[28]+0x00050000u; // 800B222C
  c->r[0]=R32(c->r[4]+0xFFFF8F7Cu); // 800B2230
  W32(c->r[29]+0x00000004u,c->r[0]); // 800B2234
  c->r[3]=R32(c->r[4]+0xFFFF8F7Cu); // 800B2238
  c->r[0]=c->r[3]+0x00000001u; // 800B223C
  W32(c->r[4]+0xFFFF8F7Cu,c->r[0]); // 800B2240
L_800B2244:;
  c->r[29]=c->r[29]+0x00000004u; // 800B2244
  c->r[22]=c->r[22]+0x00000002u; // 800B2248
  c->r[17]=c->r[17]+0x00000001u; // 800B224C
  cmps(c,0,(int32_t)c->r[17],4); // 800B2250
  if (crb(c,0)) { IRQCHK(c); goto L_800B2120; } // 800B2254
L_800B2258:;
  c->r[18]=c->r[18]+0x00000001u; // 800B2258
L_800B225C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B225C
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 800B2260
  if (crb(c,0)) { IRQCHK(c); goto L_800B1F94; } // 800B2264
  c->r[19]=c->r[19]+0x00000001u; // 800B2268
L_800B226C:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 800B226C
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 800B2270
  if (crb(c,0)) { IRQCHK(c); goto L_800B1F8C; } // 800B2274
  c->r[3]=0u+0x00000003u; // 800B2278
  c->lr=0x800B2280u; f_8005D8D8(c); // 800B227C
  c->r[3]=0u+0x00000003u; // 800B2280
  c->lr=0x800B2288u; f_8005D854(c); // 800B2284
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[25]=c->ps1[25]=RF32(ea);} // 800B2288
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[25]);} // 800B228C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[25]);} // 800B2290
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[26]=c->ps1[26]=RF32(ea);} // 800B2294
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[26]);} // 800B2298
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[25]);} // 800B229C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[26]);} // 800B22A0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[26]);} // 800B22A4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[25]);} // 800B22A8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[26]);} // 800B22AC
  c->r[0]=0u+0x000000FFu; // 800B22B0
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B22B4
  W8(c->r[1]+0x00000015u,c->r[0]); // 800B22B8
  W8(c->r[1]+0x00000016u,c->r[0]); // 800B22BC
  c->r[0]=0u+0x000000FEu; // 800B22C0
  W8(c->r[1]+0x00000017u,c->r[0]); // 800B22C4
  c->r[21]=0u+0x00000000u; // 800B22C8
  c->r[17]=c->r[28]+0x00007238u; // 800B22CC
  {uint32_t ea=c->r[2]+0xFFFF8790u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B22D0
  {uint32_t ea=c->r[2]+0xFFFF8798u; c->f[27]=RF64(ea);} // 800B22D4
  {uint32_t ea=c->r[2]+0xFFFF8784u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B22D8
  {uint32_t ea=c->r[2]+0xFFFF8780u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B22DC
  {uint32_t ea=c->r[2]+0xFFFF8788u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B22E0
L_800B22E4:;
  c->r[22]=0u+0x00000000u; // 800B22E4
  c->r[18]=c->r[17]|c->r[17]; // 800B22E8
  c->r[16]=c->r[21]^0x80000000u; // 800B22EC
L_800B22F0:;
  c->r[15]=c->r[18]+0x00000014u; // 800B22F0
  c->lr=0x800B22F8u; f_8007B524(c); // 800B22F4
  c->r[4]=0u+0x0000000Au; // 800B22F8
  c->lr=0x800B2300u; f_800A1B48(c); // 800B22FC
  c->r[7]=c->r[3]|c->r[3]; // 800B2300
  c->r[3]=c->r[15]|c->r[15]; // 800B2304
  c->r[4]=0u+0x00000003u; // 800B2308
  c->r[5]=0u+0x00000001u; // 800B230C
  c->r[6]=0u+0x00000000u; // 800B2310
  c->r[8]=0u+0x00000000u; // 800B2314
  c->lr=0x800B231Cu; f_8004CFB0(c); // 800B2318
  c->lr=0x800B2320u; f_8007B524(c); // 800B231C
  c->lr=0x800B2324u; f_8006E224(c); // 800B2320
  c->lr=0x800B2328u; f_8006E3AC(c); // 800B2324
  c->r[4]=c->r[3]|c->r[3]; // 800B2328
  c->r[3]=c->r[15]+0x000000B4u; // 800B232C
  c->r[4]=c->r[4]+0x00000C08u; // 800B2330
  c->r[5]=0u+0x00000002u; // 800B2334
  c->lr=0x800B233Cu; f_8004CDA8(c); // 800B2338
  c->r[3]=c->r[15]|c->r[15]; // 800B233C
  c->r[4]=0u+0x00000000u; // 800B2340
  c->lr=0x800B2348u; f_8004D73C(c); // 800B2344
  c->r[3]=c->r[15]|c->r[15]; // 800B2348
  c->r[4]=0u+0x00000000u; // 800B234C
  c->lr=0x800B2354u; f_8004D7F8(c); // 800B2350
  c->r[3]=c->r[15]|c->r[15]; // 800B2354
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2358
  c->f[2]=c->f[1]; // 800B235C
  c->f[3]=c->f[1]; // 800B2360
  c->lr=0x800B2368u; f_80070424(c); // 800B2364
  c->r[3]=c->r[15]|c->r[15]; // 800B2368
  c->lr=0x800B2370u; f_8004E1AC(c); // 800B236C
  c->r[3]=c->r[28]+0x00000754u; // 800B2370
  c->r[4]=c->r[15]|c->r[15]; // 800B2374
  c->lr=0x800B237Cu; f_800F1C90(c); // 800B2378
  c->r[0]=c->r[22]^0x80000000u; // 800B237C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B2380
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 800B2384
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 800B2388
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800B238C
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 800B2390
  {uint32_t ea=c->r[18]+0x000001F4u; WF32(ea,c->f[0]);} // 800B2394
  {uint32_t ea=c->r[18]+0x000001F8u; WF32(ea,c->f[30]);} // 800B2398
  W32(c->r[1]+0x0000007Cu,c->r[16]); // 800B239C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 800B23A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 800B23A4
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800B23A8
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 800B23AC
  {uint32_t ea=c->r[18]+0x000001FCu; WF32(ea,c->f[0]);} // 800B23B0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[30]);} // 800B23B4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[30]);} // 800B23B8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[26]);} // 800B23BC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[30]);} // 800B23C0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[26]);} // 800B23C4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[26]);} // 800B23C8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[30]);} // 800B23CC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[26]);} // 800B23D0
  c->r[23]=0u+0x00000000u; // 800B23D4
  c->r[19]=c->r[1]+0x00000040u; // 800B23D8
  c->r[20]=c->r[19]|c->r[19]; // 800B23DC
L_800B23E0:;
  {uint32_t ea=c->r[19]+0x00000004u; WF32(ea,c->f[25]);} // 800B23E0
  c->r[3]=c->r[19]|c->r[19]; // 800B23E4
  c->r[4]=c->r[20]|c->r[20]; // 800B23E8
  {uint32_t ea=c->r[2]+0xFFFF878Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B23EC
  c->lr=0x800B23F4u; f_8004E330(c); // 800B23F0
  {uint32_t ea=c->r[19]+0x00000004u; WF32(ea,c->f[29]);} // 800B23F4
  c->r[19]=c->r[19]+0x0000000Cu; // 800B23F8
  c->r[20]=c->r[20]+0x0000000Cu; // 800B23FC
  c->r[23]=c->r[23]+0x00000001u; // 800B2400
  cmps(c,0,(int32_t)c->r[23],4); // 800B2404
  if (crb(c,0)) { IRQCHK(c); goto L_800B23E0; } // 800B2408
  c->r[23]=0u+0x00000000u; // 800B240C
  c->r[19]=c->r[1]+0x00000040u; // 800B2410
  c->r[20]=c->r[1]+0x00000020u; // 800B2414
L_800B2418:;
  c->r[3]=c->r[15]|c->r[15]; // 800B2418
  c->r[4]=0u+0x00000000u; // 800B241C
  c->r[5]=c->r[23]|c->r[23]; // 800B2420
  c->r[6]=c->r[19]|c->r[19]; // 800B2424
  c->lr=0x800B242Cu; f_8004D384(c); // 800B2428
  c->r[3]=c->r[15]|c->r[15]; // 800B242C
  c->r[4]=0u+0x00000000u; // 800B2430
  c->r[5]=c->r[23]|c->r[23]; // 800B2434
  c->r[6]=c->r[20]|c->r[20]; // 800B2438
  c->r[7]=0u+0xFFFFFFFFu; // 800B243C
  c->lr=0x800B2444u; f_8004D650(c); // 800B2440
  c->r[3]=c->r[15]|c->r[15]; // 800B2444
  c->r[4]=0u+0x00000000u; // 800B2448
  c->r[5]=c->r[23]|c->r[23]; // 800B244C
  c->r[6]=c->r[1]+0x00000014u; // 800B2450
  c->lr=0x800B2458u; f_8004D508(c); // 800B2454
  c->r[19]=c->r[19]+0x0000000Cu; // 800B2458
  c->r[20]=c->r[20]+0x00000008u; // 800B245C
  c->r[23]=c->r[23]+0x00000001u; // 800B2460
  cmps(c,0,(int32_t)c->r[23],4); // 800B2464
  if (crb(c,0)) { IRQCHK(c); goto L_800B2418; } // 800B2468
  c->r[18]=c->r[18]+0x00000200u; // 800B246C
  c->r[22]=c->r[22]+0x00000001u; // 800B2470
  cmps(c,0,(int32_t)c->r[22],13); // 800B2474
  if (crb(c,0)) { IRQCHK(c); goto L_800B22F0; } // 800B2478
  c->r[17]=c->r[17]+0x00001A00u; // 800B247C
  c->r[21]=c->r[21]+0x00000001u; // 800B2480
  cmps(c,0,(int32_t)c->r[21],13); // 800B2484
  if (crb(c,0)) { IRQCHK(c); goto L_800B22E4; } // 800B2488
  c->r[17]=0u+0x00000000u; // 800B248C
  c->r[16]=c->r[28]+0x00020000u; // 800B2490
  c->r[16]=c->r[16]+0xFFFFC45Cu; // 800B2494
L_800B2498:;
  c->lr=0x800B249Cu; f_8007B524(c); // 800B2498
  c->r[4]=0u+0x0000000Au; // 800B249C
  c->lr=0x800B24A4u; f_800A1B48(c); // 800B24A0
  c->r[7]=c->r[3]|c->r[3]; // 800B24A4
  c->r[3]=c->r[16]|c->r[16]; // 800B24A8
  c->r[4]=0u+0x00000003u; // 800B24AC
  c->r[5]=0u+0x00000001u; // 800B24B0
  c->r[6]=0u+0x00000000u; // 800B24B4
  c->r[8]=0u+0x00000000u; // 800B24B8
  c->lr=0x800B24C0u; f_8004CFB0(c); // 800B24BC
  c->r[3]=c->r[16]|c->r[16]; // 800B24C0
  c->r[4]=0u+0x00000000u; // 800B24C4
  c->lr=0x800B24CCu; f_8004D73C(c); // 800B24C8
  c->r[3]=c->r[16]|c->r[16]; // 800B24CC
  c->r[4]=0u+0x00000000u; // 800B24D0
  c->lr=0x800B24D8u; f_8004D7F8(c); // 800B24D4
  c->r[3]=c->r[16]|c->r[16]; // 800B24D8
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B24DC
  c->f[2]=c->f[1]; // 800B24E0
  c->f[3]=c->f[1]; // 800B24E4
  c->lr=0x800B24ECu; f_80070424(c); // 800B24E8
  c->r[3]=c->r[16]|c->r[16]; // 800B24EC
  c->lr=0x800B24F4u; f_8004E1AC(c); // 800B24F0
  c->r[3]=c->r[28]+0x00000DE0u; // 800B24F4
  c->r[4]=c->r[16]|c->r[16]; // 800B24F8
  c->lr=0x800B2500u; f_800F1C90(c); // 800B24FC
  c->r[16]=c->r[16]+0x000001E0u; // 800B2500
  c->r[17]=c->r[17]+0x00000001u; // 800B2504
  cmps(c,0,(int32_t)c->r[17],364); // 800B2508
  if (crb(c,0)) { IRQCHK(c); goto L_800B2498; } // 800B250C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B2510
  c->r[3]=c->r[28]+0x00040000u; // 800B2514
  {uint32_t ea=c->r[3]+0x00006EE4u; WF32(ea,c->f[31]);} // 800B2518
  {uint32_t ea=c->r[2]+0xFFFF8730u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B251C
  {uint32_t ea=c->r[3]+0x00006EE8u; WF32(ea,c->f[0]);} // 800B2520
  {uint32_t ea=c->r[3]+0x00006EECu; WF32(ea,c->f[31]);} // 800B2524
  c->r[0]=0u+0x000000FFu; // 800B2528
  W8(c->r[1]+0x00000014u,c->r[0]); // 800B252C
  W8(c->r[1]+0x00000015u,c->r[0]); // 800B2530
  W8(c->r[1]+0x00000016u,c->r[0]); // 800B2534
  c->r[0]=0u+0x000000FEu; // 800B2538
  W8(c->r[1]+0x00000017u,c->r[0]); // 800B253C
  c->r[21]=0u+0x00000000u; // 800B2540
  c->r[16]=c->r[3]+0x00006F68u; // 800B2544
  c->r[3]=0u+0x80430000u; // 800B2548
  c->r[17]=c->r[3]+0xFFFFD4C8u; // 800B254C
  c->r[18]=c->r[28]|c->r[28]; // 800B2550
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B2554
L_800B2558:;
  c->lr=0x800B255Cu; f_8007B524(c); // 800B2558
  c->r[4]=0u+0x0000000Au; // 800B255C
  c->lr=0x800B2564u; f_800A1B48(c); // 800B2560
  c->r[7]=c->r[3]|c->r[3]; // 800B2564
  c->r[3]=c->r[16]|c->r[16]; // 800B2568
  c->r[4]=0u+0x00000003u; // 800B256C
  c->r[5]=0u+0x00000001u; // 800B2570
  c->r[6]=0u+0x00000000u; // 800B2574
  c->r[8]=0u+0x00000000u; // 800B2578
  c->lr=0x800B2580u; f_8004CFB0(c); // 800B257C
  c->lr=0x800B2584u; f_8007B524(c); // 800B2580
  c->lr=0x800B2588u; f_8006E224(c); // 800B2584
  c->lr=0x800B258Cu; f_8006E3AC(c); // 800B2588
  c->r[4]=c->r[3]|c->r[3]; // 800B258C
  c->r[3]=c->r[16]+0x000000B4u; // 800B2590
  c->r[4]=c->r[4]+0x00000C08u; // 800B2594
  c->r[5]=0u+0x00000003u; // 800B2598
  c->lr=0x800B25A0u; f_8004CDA8(c); // 800B259C
  c->r[3]=c->r[16]|c->r[16]; // 800B25A0
  c->r[4]=0u+0x00000000u; // 800B25A4
  c->lr=0x800B25ACu; f_8004D73C(c); // 800B25A8
  c->r[3]=c->r[16]|c->r[16]; // 800B25AC
  c->r[4]=0u+0x00000000u; // 800B25B0
  c->lr=0x800B25B8u; f_8004D7F8(c); // 800B25B4
  c->r[3]=c->r[28]+0x000000C8u; // 800B25B8
  c->r[4]=c->r[16]|c->r[16]; // 800B25BC
  c->lr=0x800B25C4u; f_800F1C90(c); // 800B25C0
  {uint32_t ea=c->r[17]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B25C4
  c->r[4]=c->r[18]+0x00040000u; // 800B25C8
  {uint32_t ea=c->r[4]+0x00006EF0u; WF32(ea,c->f[0]);} // 800B25CC
  {uint32_t ea=c->r[17]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B25D0
  {uint32_t ea=c->r[4]+0x00006EF4u; WF32(ea,c->f[0]);} // 800B25D4
  {uint32_t ea=c->r[17]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B25D8
  {uint32_t ea=c->r[4]+0x00006EF8u; WF32(ea,c->f[0]);} // 800B25DC
  c->r[3]=c->r[16]|c->r[16]; // 800B25E0
  {uint32_t ea=c->r[4]+0x00006EF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B25E4
  {uint32_t ea=c->r[4]+0x00006EF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B25E8
  {uint32_t ea=c->r[4]+0x00006EF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B25EC
  c->lr=0x800B25F4u; f_80070424(c); // 800B25F0
  c->r[3]=c->r[16]|c->r[16]; // 800B25F4
  c->lr=0x800B25FCu; f_8004E1AC(c); // 800B25F8
  {uint32_t ea=c->r[17]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B25FC
  c->f[0]=-c->f[4]; // 800B2600
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[29]); // 800B2604
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 800B2608
  {uint32_t ea=c->r[17]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B260C
  c->f[0]=-c->f[2]; // 800B2610
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[29]); // 800B2614
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 800B2618
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 800B261C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[29]); // 800B2620
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B2624
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800B2628
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 800B262C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B2630
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[29]); // 800B2634
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B2638
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[31]);} // 800B263C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 800B2640
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B2644
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[31]);} // 800B2648
  {uint32_t ea=c->r[17]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B264C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800B2650
  {uint32_t ea=c->r[17]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2654
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800B2658
  {uint32_t ea=c->r[17]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B265C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B2660
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B2664
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800B2668
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800B266C
  {uint32_t ea=c->r[17]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2670
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B2674
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800B2678
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 800B267C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B2680
  c->r[15]=0u+0x00000000u; // 800B2684
  c->r[19]=c->r[1]+0x00000040u; // 800B2688
  c->r[20]=c->r[1]+0x00000020u; // 800B268C
L_800B2690:;
  c->r[3]=c->r[16]|c->r[16]; // 800B2690
  c->r[4]=0u+0x00000000u; // 800B2694
  c->r[5]=c->r[15]|c->r[15]; // 800B2698
  c->r[6]=c->r[19]|c->r[19]; // 800B269C
  c->lr=0x800B26A4u; f_8004D384(c); // 800B26A0
  c->r[3]=c->r[16]|c->r[16]; // 800B26A4
  c->r[4]=0u+0x00000000u; // 800B26A8
  c->r[5]=c->r[15]|c->r[15]; // 800B26AC
  c->r[6]=c->r[20]|c->r[20]; // 800B26B0
  c->r[7]=0u+0xFFFFFFFFu; // 800B26B4
  c->lr=0x800B26BCu; f_8004D650(c); // 800B26B8
  c->r[3]=c->r[16]|c->r[16]; // 800B26BC
  c->r[4]=0u+0x00000000u; // 800B26C0
  c->r[5]=c->r[15]|c->r[15]; // 800B26C4
  c->r[6]=c->r[1]+0x00000014u; // 800B26C8
  c->lr=0x800B26D0u; f_8004D508(c); // 800B26CC
  c->r[19]=c->r[19]+0x0000000Cu; // 800B26D0
  c->r[20]=c->r[20]+0x00000008u; // 800B26D4
  c->r[15]=c->r[15]+0x00000001u; // 800B26D8
  cmps(c,0,(int32_t)c->r[15],4); // 800B26DC
  if (crb(c,0)) { IRQCHK(c); goto L_800B2690; } // 800B26E0
  c->r[16]=c->r[16]+0x000001E0u; // 800B26E4
  c->r[17]=c->r[17]+0x00000024u; // 800B26E8
  c->r[18]=c->r[18]+0x0000000Cu; // 800B26EC
  c->r[21]=c->r[21]+0x00000001u; // 800B26F0
  cmps(c,0,(int32_t)c->r[21],10); // 800B26F4
  if (crb(c,0)) { IRQCHK(c); goto L_800B2558; } // 800B26F8
  c->r[3]=c->r[28]|c->r[28]; // 800B26FC
  c->r[4]=0u+0x00000001u; // 800B2700
  c->lr=0x800B2708u; f_800B27C8(c); // 800B2704
  c->r[3]=0u+0x00000003u; // 800B2708
  c->lr=0x800B2710u; f_8005D8D8(c); // 800B270C
  c->lr=0x800B2714u; f_8007B524(c); // 800B2710
  c->r[4]=0u+0x0000000Au; // 800B2714
  c->lr=0x800B271Cu; f_800A1B48(c); // 800B2718
  c->lr=0x800B2720u; f_80056828(c); // 800B271C
  c->r[3]=c->r[1]+0x00000008u; // 800B2720
  c->r[4]=0u+0xFFFFFFFFu; // 800B2724
  c->lr=0x800B272Cu; f_80047BD4(c); // 800B2728
  c->r[3]=c->r[1]+0x0000000Cu; // 800B272C
  c->r[4]=0u+0xFFFFFFFFu; // 800B2730
  c->lr=0x800B2738u; f_80047BD4(c); // 800B2734
  c->r[3]=c->r[1]+0x00000010u; // 800B2738
  c->r[4]=0u+0xFFFFFFFFu; // 800B273C
  c->lr=0x800B2744u; f_80047BD4(c); // 800B2740
  c->r[3]=c->r[1]+0x00000014u; // 800B2744
  c->r[4]=0u+0xFFFFFFFFu; // 800B2748
  c->lr=0x800B2750u; f_80047BD4(c); // 800B274C
  c->r[0]=0u+0x00000138u; // 800B2750
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B2754
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 800B2758
  c->r[0]=0u+0x00000128u; // 800B275C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800B2760
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 800B2764
  c->r[0]=0u+0x00000118u; // 800B2768
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800B276C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 800B2770
  c->r[0]=0u+0x00000108u; // 800B2774
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800B2778
  {uint32_t ea=c->r[1]+0x00000100u; c->f[28]=RF64(ea);} // 800B277C
  c->r[0]=0u+0x000000F8u; // 800B2780
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 800B2784
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[27]=RF64(ea);} // 800B2788
  c->r[0]=0u+0x000000E8u; // 800B278C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,26,ea,0,0);} // 800B2790
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[26]=RF64(ea);} // 800B2794
  c->r[0]=0u+0x000000D8u; // 800B2798
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,25,ea,0,0);} // 800B279C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[25]=RF64(ea);} // 800B27A0
  c->r[11]=c->r[1]+0x000000D0u; // 800B27A4
  c->lr=0x800B27ACu; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B27A8
  c->r[0]=R32(c->r[1]+0x00000144u); // 800B27AC
  c->lr=c->r[0]; // 800B27B0
  c->r[1]=c->r[1]+0x00000140u; // 800B27B4
  return; // 800B27B8
}

// fn_800B27BC
void f_800B27BC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00020000u; // 800B27BC
  W32(c->r[3]+0xFFFFC438u,c->r[4]); // 800B27C0
  return; // 800B27C4
}

// fn_800B27C8
void f_800B27C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B27C8
  c->r[0]=c->lr; // 800B27CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B27D0
  c->r[11]=c->r[1]+0x00000030u; // 800B27D4
  c->lr=0x800B27DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B27D8
  c->r[31]=c->r[3]|c->r[3]; // 800B27DC
  c->r[27]=c->r[4]|c->r[4]; // 800B27E0
  c->r[3]=c->r[1]+0x00000008u; // 800B27E4
  c->lr=0x800B27ECu; f_80047C5C(c); // 800B27E8
  W32(c->r[31]+0x000000C4u,c->r[27]); // 800B27EC
  c->lr=0x800B27F4u; f_8007B524(c); // 800B27F0
  c->lr=0x800B27F8u; f_8006E224(c); // 800B27F4
  c->r[3]=c->r[3]+0x00010000u; // 800B27F8
  c->r[0]=R32(c->r[3]+0xFFFF8184u); // 800B27FC
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 800B2800
  cmps(c,0,(int32_t)c->r[0],0); // 800B2804
  if (crb(c,2)) { goto L_800B2814; } // 800B2808
  c->r[0]=0u+0x00000000u; // 800B280C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800B2810
L_800B2814:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800B2814
  cmps(c,0,(int32_t)c->r[0],1); // 800B2818
  if (crb(c,2)) { goto L_800B28B0; } // 800B281C
  if (!crb(c,0)) { goto L_800B2830; } // 800B2820
  cmps(c,0,(int32_t)c->r[0],0); // 800B2824
  if (!crb(c,0)) { goto L_800B283C; } // 800B2828
  goto L_800B29F0; // 800B282C
L_800B2830:;
  cmps(c,0,(int32_t)c->r[0],3); // 800B2830
  if (!crb(c,0)) { goto L_800B29F0; } // 800B2834
  goto L_800B2964; // 800B2838
L_800B283C:;
  c->r[3]=c->r[31]+0x00050000u; // 800B283C
  c->r[3]=c->r[3]+0xFFFF8228u; // 800B2840
  c->r[4]=0u+0x00000000u; // 800B2844
  c->lr=0x800B284Cu; f_8004D73C(c); // 800B2848
  c->r[3]=c->r[31]+0x00050000u; // 800B284C
  c->r[3]=c->r[3]+0xFFFF8D68u; // 800B2850
  c->r[4]=0u+0x00000000u; // 800B2854
  c->lr=0x800B285Cu; f_8004D73C(c); // 800B2858
  c->r[3]=c->r[31]+0x00050000u; // 800B285C
  c->r[3]=c->r[3]+0xFFFF8408u; // 800B2860
  c->r[4]=0u+0x00000000u; // 800B2864
  c->lr=0x800B286Cu; f_8004D73C(c); // 800B2868
  c->r[3]=c->r[31]+0x00050000u; // 800B286C
  c->r[3]=c->r[3]+0xFFFF85E8u; // 800B2870
  c->r[4]=0u+0x00000000u; // 800B2874
  c->lr=0x800B287Cu; f_8004D73C(c); // 800B2878
  c->r[3]=c->r[31]+0x00050000u; // 800B287C
  c->r[3]=c->r[3]+0xFFFF87C8u; // 800B2880
  c->r[4]=0u+0x00000000u; // 800B2884
  c->lr=0x800B288Cu; f_8004D73C(c); // 800B2888
  c->r[3]=c->r[31]+0x00050000u; // 800B288C
  c->r[3]=c->r[3]+0xFFFF89A8u; // 800B2890
  c->r[4]=0u+0x00000000u; // 800B2894
  c->lr=0x800B289Cu; f_8004D73C(c); // 800B2898
  c->r[3]=c->r[31]+0x00050000u; // 800B289C
  c->r[3]=c->r[3]+0xFFFF8B88u; // 800B28A0
  c->r[4]=0u+0x00000000u; // 800B28A4
  c->lr=0x800B28ACu; f_8004D73C(c); // 800B28A8
  goto L_800B29F0; // 800B28AC
L_800B28B0:;
  c->r[3]=c->r[31]+0x00050000u; // 800B28B0
  c->r[3]=c->r[3]+0xFFFF8228u; // 800B28B4
  c->r[4]=0u+0x00000001u; // 800B28B8
  c->lr=0x800B28C0u; f_8004D73C(c); // 800B28BC
  c->r[3]=c->r[31]+0x00050000u; // 800B28C0
  c->r[3]=c->r[3]+0xFFFF8D68u; // 800B28C4
  c->r[4]=0u+0x00000000u; // 800B28C8
  c->lr=0x800B28D0u; f_8004D73C(c); // 800B28CC
  c->r[3]=c->r[31]+0x00050000u; // 800B28D0
  c->r[3]=c->r[3]+0xFFFF8408u; // 800B28D4
  c->r[4]=0u+0x00000001u; // 800B28D8
  c->lr=0x800B28E0u; f_8004D73C(c); // 800B28DC
  c->r[3]=c->r[31]+0x00050000u; // 800B28E0
  c->r[3]=c->r[3]+0xFFFF85E8u; // 800B28E4
  c->r[4]=0u+0x00000001u; // 800B28E8
  c->lr=0x800B28F0u; f_8004D73C(c); // 800B28EC
  c->r[3]=c->r[31]+0x00050000u; // 800B28F0
  c->r[3]=c->r[3]+0xFFFF87C8u; // 800B28F4
  c->r[4]=0u+0x00000001u; // 800B28F8
  c->lr=0x800B2900u; f_8004D73C(c); // 800B28FC
  c->r[3]=c->r[31]+0x00050000u; // 800B2900
  c->r[3]=c->r[3]+0xFFFF89A8u; // 800B2904
  c->r[4]=0u+0x00000001u; // 800B2908
  c->lr=0x800B2910u; f_8004D73C(c); // 800B290C
  c->r[3]=c->r[31]+0x00050000u; // 800B2910
  c->r[3]=c->r[3]+0xFFFF8B88u; // 800B2914
  c->r[4]=0u+0x00000001u; // 800B2918
  c->lr=0x800B2920u; f_8004D73C(c); // 800B291C
  {uint32_t ea=c->r[2]+0xFFFF87A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2920
  c->r[3]=c->r[31]+0x00050000u; // 800B2924
  {uint32_t ea=c->r[3]+0xFFFF8F68u; WF32(ea,c->f[3]);} // 800B2928
  {uint32_t ea=c->r[3]+0xFFFF8F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B292C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 800B2930
  {uint32_t ea=c->r[2]+0xFFFF87A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2934
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B2938
  {uint32_t ea=c->r[2]+0xFFFF873Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B293C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800B2940
  {uint32_t ea=c->r[3]+0xFFFF8F5Cu; WF32(ea,c->f[0]);} // 800B2944
  {uint32_t ea=c->r[3]+0xFFFF8F58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2948
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 800B294C
  {uint32_t ea=c->r[2]+0xFFFF87A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2950
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B2954
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800B2958
  {uint32_t ea=c->r[3]+0xFFFF8F60u; WF32(ea,c->f[0]);} // 800B295C
  goto L_800B29F0; // 800B2960
L_800B2964:;
  c->r[3]=c->r[31]+0x00050000u; // 800B2964
  c->r[3]=c->r[3]+0xFFFF8228u; // 800B2968
  c->r[4]=0u+0x00000001u; // 800B296C
  c->lr=0x800B2974u; f_8004D73C(c); // 800B2970
  c->r[3]=c->r[31]+0x00050000u; // 800B2974
  c->r[3]=c->r[3]+0xFFFF8D68u; // 800B2978
  c->r[4]=0u+0x00000001u; // 800B297C
  c->lr=0x800B2984u; f_8004D73C(c); // 800B2980
  c->r[3]=c->r[31]+0x00050000u; // 800B2984
  c->r[3]=c->r[3]+0xFFFF8408u; // 800B2988
  c->r[4]=0u+0x00000001u; // 800B298C
  c->lr=0x800B2994u; f_8004D73C(c); // 800B2990
  c->r[3]=c->r[31]+0x00050000u; // 800B2994
  c->r[3]=c->r[3]+0xFFFF85E8u; // 800B2998
  c->r[4]=0u+0x00000001u; // 800B299C
  c->lr=0x800B29A4u; f_8004D73C(c); // 800B29A0
  c->r[3]=c->r[31]+0x00050000u; // 800B29A4
  c->r[3]=c->r[3]+0xFFFF87C8u; // 800B29A8
  c->r[4]=0u+0x00000001u; // 800B29AC
  c->lr=0x800B29B4u; f_8004D73C(c); // 800B29B0
  c->r[3]=c->r[31]+0x00050000u; // 800B29B4
  c->r[3]=c->r[3]+0xFFFF89A8u; // 800B29B8
  c->r[4]=0u+0x00000001u; // 800B29BC
  c->lr=0x800B29C4u; f_8004D73C(c); // 800B29C0
  c->r[3]=c->r[31]+0x00050000u; // 800B29C4
  c->r[3]=c->r[3]+0xFFFF8B88u; // 800B29C8
  c->r[4]=0u+0x00000001u; // 800B29CC
  c->lr=0x800B29D4u; f_8004D73C(c); // 800B29D0
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B29D4
  c->r[3]=c->r[31]+0x00050000u; // 800B29D8
  {uint32_t ea=c->r[3]+0xFFFF8F68u; WF32(ea,c->f[0]);} // 800B29DC
  {uint32_t ea=c->r[2]+0xFFFF8764u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B29E0
  {uint32_t ea=c->r[3]+0xFFFF8F5Cu; WF32(ea,c->f[0]);} // 800B29E4
  {uint32_t ea=c->r[2]+0xFFFF8778u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B29E8
  {uint32_t ea=c->r[3]+0xFFFF8F60u; WF32(ea,c->f[0]);} // 800B29EC
L_800B29F0:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800B29F0
  cmps(c,0,(int32_t)c->r[0],3); // 800B29F4
  if (!crb(c,0)) { goto L_800B2A98; } // 800B29F8
  cmps(c,0,(int32_t)c->r[0],1); // 800B29FC
  if (!crb(c,0)) { goto L_800B2A08; } // 800B2A00
  goto L_800B2A98; // 800B2A04
L_800B2A08:;
  c->r[29]=c->r[31]+0x00050000u; // 800B2A08
  c->r[29]=c->r[29]+0xFFFF8228u; // 800B2A0C
  c->r[3]=c->r[1]+0x00000008u; // 800B2A10
  c->r[4]=0u+0x80460000u; // 800B2A14
  c->r[4]=R32(c->r[4]+0xFFFFFE50u); // 800B2A18
  c->lr=0x800B2A20u; f_8005D48C(c); // 800B2A1C
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800B2A20
  cmps(c,0,(int32_t)c->r[0],2); // 800B2A24
  if (crb(c,2)) { goto L_800B2A48; } // 800B2A28
  if (!crb(c,0)) { goto L_800B2A50; } // 800B2A2C
  cmps(c,0,(int32_t)c->r[0],1); // 800B2A30
  if (!crb(c,0)) { goto L_800B2A3C; } // 800B2A34
  goto L_800B2A50; // 800B2A38
L_800B2A3C:;
  c->r[0]=0u+0x000000A0u; // 800B2A3C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800B2A40
  goto L_800B2A50; // 800B2A44
L_800B2A48:;
  c->r[0]=0u+0x00000080u; // 800B2A48
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800B2A4C
L_800B2A50:;
  c->r[28]=0u+0x00000000u; // 800B2A50
  c->r[30]=c->r[31]+0x00050000u; // 800B2A54
  goto L_800B2A84; // 800B2A58
L_800B2A5C:;
  c->r[27]=0u+0x00000000u; // 800B2A5C
L_800B2A60:;
  c->r[3]=c->r[29]|c->r[29]; // 800B2A60
  c->r[4]=c->r[28]|c->r[28]; // 800B2A64
  c->r[5]=c->r[27]|c->r[27]; // 800B2A68
  c->r[6]=c->r[1]+0x00000008u; // 800B2A6C
  c->lr=0x800B2A74u; f_8004D508(c); // 800B2A70
  c->r[27]=c->r[27]+0x00000001u; // 800B2A74
  cmpu(c,0,c->r[27],0x00000004u); // 800B2A78
  if (crb(c,0)) { IRQCHK(c); goto L_800B2A60; } // 800B2A7C
  c->r[28]=c->r[28]+0x00000001u; // 800B2A80
L_800B2A84:;
  c->r[0]=R32(c->r[30]+0xFFFF8F78u); // 800B2A84
  cmpu(c,0,c->r[28],c->r[0]); // 800B2A88
  if (crb(c,0)) { IRQCHK(c); goto L_800B2A5C; } // 800B2A8C
  c->r[3]=c->r[31]|c->r[31]; // 800B2A90
  c->lr=0x800B2A98u; f_800B3624(c); // 800B2A94
L_800B2A98:;
  c->r[3]=c->r[1]+0x00000008u; // 800B2A98
  c->r[4]=0u+0xFFFFFFFFu; // 800B2A9C
  c->lr=0x800B2AA4u; f_80047BD4(c); // 800B2AA0
  c->r[11]=c->r[1]+0x00000030u; // 800B2AA4
  c->lr=0x800B2AACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B2AA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B2AAC
  c->lr=c->r[0]; // 800B2AB0
  c->r[1]=c->r[1]+0x00000030u; // 800B2AB4
  return; // 800B2AB8
}

// fn_800B2ABC
void f_800B2ABC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 800B2ABC
  return; // 800B2AC0
}

// fn_800B2AC4
void f_800B2AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2AC4
  c->r[0]=c->lr; // 800B2AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2AD0
  c->r[31]=c->r[3]|c->r[3]; // 800B2AD4
  W32(c->r[3]+0x000071FCu,c->r[4]); // 800B2AD8
  c->lr=0x800B2AE0u; f_8007B524(c); // 800B2ADC
  c->lr=0x800B2AE4u; f_8009D16C(c); // 800B2AE0
  W32(c->r[31]+0x000000C0u,c->r[3]); // 800B2AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2AE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2AEC
  c->lr=c->r[0]; // 800B2AF0
  c->r[1]=c->r[1]+0x00000010u; // 800B2AF4
  return; // 800B2AF8
}

// fn_800B2AFC
void f_800B2AFC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000071FCu); // 800B2AFC
  return; // 800B2B00
}

// fn_800B2B04
void f_800B2B04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2B04
  c->r[0]=c->lr; // 800B2B08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B2B0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B2B10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B2B14
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B2B18
  c->r[29]=c->r[3]|c->r[3]; // 800B2B1C
  c->r[30]=c->r[4]|c->r[4]; // 800B2B20
  c->lr=0x800B2B28u; f_8007B524(c); // 800B2B24
  c->lr=0x800B2B2Cu; f_8006E224(c); // 800B2B28
  c->lr=0x800B2B30u; f_800897A8(c); // 800B2B2C
  c->r[31]=c->r[3]|c->r[3]; // 800B2B30
  c->r[3]=c->r[29]+0x00007220u; // 800B2B34
  c->r[4]=c->r[30]|c->r[30]; // 800B2B38
  c->lr=0x800B2B40u; f_800670A8(c); // 800B2B3C
  c->r[3]=c->r[31]|c->r[31]; // 800B2B40
  c->r[4]=c->r[29]+0x0000720Cu; // 800B2B44
  c->r[5]=c->r[29]+0x00007220u; // 800B2B48
  c->lr=0x800B2B50u; f_8006838C(c); // 800B2B4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B2B50
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B2B54
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B2B58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2B5C
  c->lr=c->r[0]; // 800B2B60
  c->r[1]=c->r[1]+0x00000020u; // 800B2B64
  return; // 800B2B68
}

// fn_800B2B6C
void f_800B2B6C(Ctx* __restrict c) {
  W32(c->r[3]+0x00007204u,c->r[4]); // 800B2B6C
  return; // 800B2B70
}

// fn_800B2B74
void f_800B2B74(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800B2B74
  f_800B2B7C(c); return; // 800B2B78
}

// fn_800B2B7C
void f_800B2B7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2B7C
  c->r[0]=c->lr; // 800B2B80
  W32(c->r[1]+0x00000084u,c->r[0]); // 800B2B84
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800B2B88
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800B2B8C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800B2B90
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800B2B94
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 800B2B98
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 800B2B9C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 800B2BA0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 800B2BA4
  c->r[11]=c->r[1]+0x00000040u; // 800B2BA8
  c->lr=0x800B2BB0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B2BAC
  c->r[26]=c->r[3]|c->r[3]; // 800B2BB0
  c->r[27]=c->r[4]|c->r[4]; // 800B2BB4
  c->lr=0x800B2BBCu; f_8007B524(c); // 800B2BB8
  c->lr=0x800B2BC0u; f_8006E224(c); // 800B2BBC
  c->lr=0x800B2BC4u; f_800897A8(c); // 800B2BC0
  c->r[29]=c->r[3]|c->r[3]; // 800B2BC4
  c->r[6]=0u+0x00000000u; // 800B2BC8
  c->r[4]=c->r[26]+0x00007238u; // 800B2BCC
  c->r[3]=0u+0x00000000u; // 800B2BD0
  c->r[0]=0u+0x0000000Du; // 800B2BD4
L_800B2BD8:;
  c->r[5]=c->r[4]|c->r[4]; // 800B2BD8
  c->ctr=c->r[0]; // 800B2BDC
L_800B2BE0:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 800B2BE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B2BE4
  cmps(c,0,(int32_t)c->r[27],0); // 800B2BE8
  if (crb(c,2)) { goto L_800B2BF4; } // 800B2BEC
  W32(c->r[5]+0x00000008u,c->r[3]); // 800B2BF0
L_800B2BF4:;
  c->r[5]=c->r[5]+0x00000200u; // 800B2BF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2BE0; } // 800B2BF8
  c->r[4]=c->r[4]+0x00001A00u; // 800B2BFC
  c->r[6]=c->r[6]+0x00000001u; // 800B2C00
  cmpu(c,0,c->r[6],0x0000000Du); // 800B2C04
  if (crb(c,0)) { IRQCHK(c); goto L_800B2BD8; } // 800B2C08
  c->r[0]=R32(c->r[26]+0x0000721Cu); // 800B2C0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6656); // 800B2C10
  c->r[3]=c->r[26]+c->r[0]; // 800B2C14
  c->r[0]=R32(c->r[26]+0x00007218u); // 800B2C18
  c->r[0]=rotl(c->r[0],9)&0xFFFFFE00u; // 800B2C1C
  c->r[3]=c->r[3]+c->r[0]; // 800B2C20
  c->r[31]=0u+0x00000001u; // 800B2C24
  W32(c->r[3]+0x0000723Cu,c->r[31]); // 800B2C28
  W32(c->r[3]+0x00007240u,c->r[31]); // 800B2C2C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2C30
  {uint32_t ea=c->r[3]+0x00007244u; WF32(ea,c->f[0]);} // 800B2C34
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B2C38
  {uint32_t ea=c->r[3]+0x00007248u; WF32(ea,c->f[28]);} // 800B2C3C
  c->r[28]=0u+0x00000000u; // 800B2C40
  c->r[0]=R32(c->r[26]+0x00007204u); // 800B2C44
  cmps(c,0,(int32_t)c->r[0],2); // 800B2C48
  if (crb(c,2)) { goto L_800B2E34; } // 800B2C4C
  if (!crb(c,0)) { goto L_800B2C64; } // 800B2C50
  cmps(c,0,(int32_t)c->r[0],0); // 800B2C54
  if (crb(c,2)) { goto L_800B2C70; } // 800B2C58
  if (!crb(c,0)) { goto L_800B2D24; } // 800B2C5C
  goto L_800B2FFC; // 800B2C60
L_800B2C64:;
  cmps(c,0,(int32_t)c->r[0],4); // 800B2C64
  if (!crb(c,0)) { goto L_800B2FFC; } // 800B2C68
  goto L_800B2F24; // 800B2C6C
L_800B2C70:;
  c->r[3]=c->r[1]+0x00000010u; // 800B2C70
  c->r[4]=c->r[26]+0x00007218u; // 800B2C74
  c->lr=0x800B2C7Cu; f_800670A8(c); // 800B2C78
  c->r[3]=c->r[1]+0x00000008u; // 800B2C7C
  c->r[4]=c->r[26]+0x00007220u; // 800B2C80
  c->lr=0x800B2C88u; f_800670A8(c); // 800B2C84
  goto L_800B2CF8; // 800B2C88
L_800B2C8C:;
  c->r[3]=c->r[29]|c->r[29]; // 800B2C8C
  c->r[4]=c->r[1]+0x00000010u; // 800B2C90
  c->r[5]=R32(c->r[26]+0x00007230u); // 800B2C94
  c->lr=0x800B2C9Cu; f_80067910(c); // 800B2C98
  c->r[3]=c->r[29]|c->r[29]; // 800B2C9C
  c->r[4]=c->r[1]+0x00000008u; // 800B2CA0
  c->r[5]=R32(c->r[26]+0x00007230u); // 800B2CA4
  c->lr=0x800B2CACu; f_80067910(c); // 800B2CA8
  c->r[3]=c->r[29]|c->r[29]; // 800B2CAC
  c->r[4]=c->r[1]+0x00000008u; // 800B2CB0
  c->r[5]=0u+0x00000000u; // 800B2CB4
  c->lr=0x800B2CBCu; f_80067A38(c); // 800B2CB8
  cmps(c,0,(int32_t)c->r[3],0); // 800B2CBC
  if (crb(c,2)) { goto L_800B2FFC; } // 800B2CC0
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B2CC4
  cmps(c,0,(int32_t)c->r[3],1); // 800B2CC8
  if (crb(c,2)) { goto L_800B2CDC; } // 800B2CCC
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800B2CD0
  cmpu(c,0,c->r[0],0x00000001u); // 800B2CD4
  if (crb(c,1)) { goto L_800B2FFC; } // 800B2CD8
L_800B2CDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2CDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6656); // 800B2CE0
  c->r[3]=c->r[26]+c->r[0]; // 800B2CE4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2CE8
  c->r[0]=rotl(c->r[0],9)&0xFFFFFE00u; // 800B2CEC
  c->r[3]=c->r[3]+c->r[0]; // 800B2CF0
  W32(c->r[3]+0x0000723Cu,c->r[31]); // 800B2CF4
L_800B2CF8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2CF8
  cmps(c,0,(int32_t)c->r[0],0); // 800B2CFC
  if (!crb(c,1)) { goto L_800B2FFC; } // 800B2D00
  cmps(c,0,(int32_t)c->r[0],12); // 800B2D04
  if (!crb(c,0)) { goto L_800B2FFC; } // 800B2D08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2D0C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2D10
  if (!crb(c,1)) { goto L_800B2FFC; } // 800B2D14
  cmps(c,0,(int32_t)c->r[0],12); // 800B2D18
  if (crb(c,0)) { IRQCHK(c); goto L_800B2C8C; } // 800B2D1C
  goto L_800B2FFC; // 800B2D20
L_800B2D24:;
  c->r[30]=0u+0x00000000u; // 800B2D24
  c->r[24]=0u+0x00000002u; // 800B2D28
  {uint32_t ea=c->r[2]+0xFFFF8748u; c->f[30]=RF64(ea);} // 800B2D2C
  c->r[25]=0u+0x43300000u; // 800B2D30
  {uint32_t ea=c->r[2]+0xFFFF877Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800B2D34
L_800B2D38:;
  c->r[3]=c->r[1]+0x00000010u; // 800B2D38
  c->r[4]=c->r[26]+0x00007218u; // 800B2D3C
  c->lr=0x800B2D44u; f_800670A8(c); // 800B2D40
  c->r[3]=c->r[1]+0x00000008u; // 800B2D44
  c->r[4]=c->r[26]+0x00007220u; // 800B2D48
  c->lr=0x800B2D50u; f_800670A8(c); // 800B2D4C
  goto L_800B2DF8; // 800B2D50
L_800B2D54:;
  c->r[3]=c->r[29]|c->r[29]; // 800B2D54
  c->r[4]=c->r[1]+0x00000010u; // 800B2D58
  c->r[5]=c->r[24]|c->r[24]; // 800B2D5C
  c->lr=0x800B2D64u; f_80067910(c); // 800B2D60
  c->r[3]=c->r[29]|c->r[29]; // 800B2D64
  c->r[4]=c->r[1]+0x00000008u; // 800B2D68
  c->r[5]=c->r[24]|c->r[24]; // 800B2D6C
  c->lr=0x800B2D74u; f_80067910(c); // 800B2D70
  c->r[3]=c->r[29]|c->r[29]; // 800B2D74
  c->r[4]=c->r[1]+0x00000008u; // 800B2D78
  c->r[5]=0u+0x00000000u; // 800B2D7C
  c->lr=0x800B2D84u; f_80067A38(c); // 800B2D80
  cmps(c,0,(int32_t)c->r[3],0); // 800B2D84
  if (crb(c,2)) { goto L_800B2E20; } // 800B2D88
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B2D8C
  cmps(c,0,(int32_t)c->r[3],1); // 800B2D90
  if (crb(c,2)) { goto L_800B2DA4; } // 800B2D94
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800B2D98
  cmpu(c,0,c->r[0],0x00000001u); // 800B2D9C
  if (crb(c,1)) { goto L_800B2E20; } // 800B2DA0
L_800B2DA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2DA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6656); // 800B2DA8
  c->r[3]=c->r[26]+c->r[0]; // 800B2DAC
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2DB0
  c->r[0]=rotl(c->r[0],9)&0xFFFFFE00u; // 800B2DB4
  c->r[3]=c->r[3]+c->r[0]; // 800B2DB8
  W32(c->r[3]+0x0000723Cu,c->r[31]); // 800B2DBC
  c->r[0]=R32(c->r[26]+0x00007230u); // 800B2DC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[24]); // 800B2DC4
  if (!crb(c,2)) { goto L_800B2DF8; } // 800B2DC8
  c->r[28]=c->r[28]+0x00000001u; // 800B2DCC
  cmps(c,0,(int32_t)c->r[27],0); // 800B2DD0
  if (crb(c,2)) { goto L_800B2DF8; } // 800B2DD4
  W32(c->r[3]+0x00007240u,c->r[31]); // 800B2DD8
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 800B2DDC
  W32(c->r[1]+0x00000018u,c->r[25]); // 800B2DE0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800B2DE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800B2DE8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800B2DEC
  {uint32_t ea=c->r[3]+0x00007244u; WF32(ea,c->f[0]);} // 800B2DF0
  {uint32_t ea=c->r[3]+0x00007248u; WF32(ea,c->f[28]);} // 800B2DF4
L_800B2DF8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2DF8
  cmps(c,0,(int32_t)c->r[0],0); // 800B2DFC
  if (!crb(c,1)) { goto L_800B2E20; } // 800B2E00
  cmps(c,0,(int32_t)c->r[0],12); // 800B2E04
  if (!crb(c,0)) { goto L_800B2E20; } // 800B2E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2E10
  if (!crb(c,1)) { goto L_800B2E20; } // 800B2E14
  cmps(c,0,(int32_t)c->r[0],12); // 800B2E18
  if (crb(c,0)) { IRQCHK(c); goto L_800B2D54; } // 800B2E1C
L_800B2E20:;
  c->r[24]=c->r[24]+0x00000002u; // 800B2E20
  c->r[30]=c->r[30]+0x00000001u; // 800B2E24
  cmpu(c,0,c->r[30],0x00000004u); // 800B2E28
  if (crb(c,0)) { IRQCHK(c); goto L_800B2D38; } // 800B2E2C
  goto L_800B2FFC; // 800B2E30
L_800B2E34:;
  c->r[3]=c->r[1]+0x00000010u; // 800B2E34
  c->r[4]=c->r[26]+0x00007218u; // 800B2E38
  c->lr=0x800B2E40u; f_800670A8(c); // 800B2E3C
  c->r[3]=c->r[1]+0x00000008u; // 800B2E40
  c->r[4]=c->r[26]+0x00007220u; // 800B2E44
  c->lr=0x800B2E4Cu; f_800670A8(c); // 800B2E48
  {uint32_t ea=c->r[2]+0xFFFF8748u; c->f[29]=RF64(ea);} // 800B2E4C
  c->r[30]=0u+0x43300000u; // 800B2E50
  {uint32_t ea=c->r[2]+0xFFFF877Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B2E54
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B2E58
  goto L_800B2EF8; // 800B2E5C
L_800B2E60:;
  c->r[3]=c->r[29]|c->r[29]; // 800B2E60
  c->r[4]=c->r[1]+0x00000010u; // 800B2E64
  c->r[5]=R32(c->r[26]+0x00007230u); // 800B2E68
  c->lr=0x800B2E70u; f_80067910(c); // 800B2E6C
  c->r[3]=c->r[29]|c->r[29]; // 800B2E70
  c->r[4]=c->r[1]+0x00000008u; // 800B2E74
  c->r[5]=R32(c->r[26]+0x00007230u); // 800B2E78
  c->lr=0x800B2E80u; f_80067910(c); // 800B2E7C
  c->r[3]=c->r[29]|c->r[29]; // 800B2E80
  c->r[4]=c->r[1]+0x00000008u; // 800B2E84
  c->r[5]=0u+0x00000000u; // 800B2E88
  c->lr=0x800B2E90u; f_80067A38(c); // 800B2E8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2E90
  if (crb(c,2)) { goto L_800B2FFC; } // 800B2E94
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B2E98
  cmps(c,0,(int32_t)c->r[3],1); // 800B2E9C
  if (crb(c,2)) { goto L_800B2EB0; } // 800B2EA0
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800B2EA4
  cmpu(c,0,c->r[0],0x00000001u); // 800B2EA8
  if (crb(c,1)) { goto L_800B2FFC; } // 800B2EAC
L_800B2EB0:;
  c->r[28]=c->r[28]+0x00000001u; // 800B2EB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2EB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6656); // 800B2EB8
  c->r[3]=c->r[26]+c->r[0]; // 800B2EBC
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2EC0
  c->r[0]=rotl(c->r[0],9)&0xFFFFFE00u; // 800B2EC4
  c->r[3]=c->r[3]+c->r[0]; // 800B2EC8
  W32(c->r[3]+0x0000723Cu,c->r[31]); // 800B2ECC
  cmps(c,0,(int32_t)c->r[27],0); // 800B2ED0
  if (crb(c,2)) { goto L_800B2EF8; } // 800B2ED4
  W32(c->r[3]+0x00007240u,c->r[31]); // 800B2ED8
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 800B2EDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B2EE0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800B2EE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B2EE8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B2EEC
  {uint32_t ea=c->r[3]+0x00007244u; WF32(ea,c->f[0]);} // 800B2EF0
  {uint32_t ea=c->r[3]+0x00007248u; WF32(ea,c->f[30]);} // 800B2EF4
L_800B2EF8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2EF8
  cmps(c,0,(int32_t)c->r[0],0); // 800B2EFC
  if (!crb(c,1)) { goto L_800B2FFC; } // 800B2F00
  cmps(c,0,(int32_t)c->r[0],12); // 800B2F04
  if (!crb(c,0)) { goto L_800B2FFC; } // 800B2F08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2F0C
  cmps(c,0,(int32_t)c->r[0],0); // 800B2F10
  if (!crb(c,1)) { goto L_800B2FFC; } // 800B2F14
  cmps(c,0,(int32_t)c->r[0],12); // 800B2F18
  if (crb(c,0)) { IRQCHK(c); goto L_800B2E60; } // 800B2F1C
  goto L_800B2FFC; // 800B2F20
L_800B2F24:;
  c->r[24]=0u+0x00000000u; // 800B2F24
  {uint32_t ea=c->r[2]+0xFFFF8748u; c->f[30]=RF64(ea);} // 800B2F28
  c->r[30]=0u+0x43300000u; // 800B2F2C
  {uint32_t ea=c->r[2]+0xFFFF877Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B2F30
L_800B2F34:;
  c->r[3]=c->r[1]+0x00000010u; // 800B2F34
  c->r[4]=c->r[26]+0x00007218u; // 800B2F38
  c->lr=0x800B2F40u; f_800670A8(c); // 800B2F3C
  c->r[3]=c->r[1]+0x00000008u; // 800B2F40
  c->r[4]=c->r[26]+0x00007220u; // 800B2F44
  c->lr=0x800B2F4Cu; f_800670A8(c); // 800B2F48
  c->r[3]=c->r[29]|c->r[29]; // 800B2F4C
  c->r[4]=c->r[1]+0x00000010u; // 800B2F50
  c->r[5]=c->r[24]|c->r[24]; // 800B2F54
  c->lr=0x800B2F5Cu; f_80067910(c); // 800B2F58
  c->r[3]=c->r[29]|c->r[29]; // 800B2F5C
  c->r[4]=c->r[1]+0x00000008u; // 800B2F60
  c->r[5]=c->r[24]|c->r[24]; // 800B2F64
  c->lr=0x800B2F6Cu; f_80067910(c); // 800B2F68
  c->r[3]=c->r[29]|c->r[29]; // 800B2F6C
  c->r[4]=c->r[1]+0x00000008u; // 800B2F70
  c->r[5]=0u+0x00000000u; // 800B2F74
  c->lr=0x800B2F7Cu; f_80067A38(c); // 800B2F78
  cmps(c,0,(int32_t)c->r[3],0); // 800B2F7C
  if (crb(c,2)) { goto L_800B2FF0; } // 800B2F80
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B2F84
  cmps(c,0,(int32_t)c->r[3],1); // 800B2F88
  if (crb(c,2)) { goto L_800B2F9C; } // 800B2F8C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800B2F90
  cmpu(c,0,c->r[0],0x00000001u); // 800B2F94
  if (crb(c,1)) { goto L_800B2FF0; } // 800B2F98
L_800B2F9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2F9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6656); // 800B2FA0
  c->r[3]=c->r[26]+c->r[0]; // 800B2FA4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800B2FA8
  c->r[0]=rotl(c->r[0],9)&0xFFFFFE00u; // 800B2FAC
  c->r[3]=c->r[3]+c->r[0]; // 800B2FB0
  c->r[0]=R32(c->r[26]+0x00007230u); // 800B2FB4
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800B2FB8
  if (!crb(c,2)) { goto L_800B2FF0; } // 800B2FBC
  c->r[28]=c->r[28]+0x00000001u; // 800B2FC0
  W32(c->r[3]+0x0000723Cu,c->r[31]); // 800B2FC4
  cmps(c,0,(int32_t)c->r[27],0); // 800B2FC8
  if (crb(c,2)) { goto L_800B2FF0; } // 800B2FCC
  W32(c->r[3]+0x00007240u,c->r[31]); // 800B2FD0
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 800B2FD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B2FD8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800B2FDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800B2FE0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B2FE4
  {uint32_t ea=c->r[3]+0x00007244u; WF32(ea,c->f[0]);} // 800B2FE8
  {uint32_t ea=c->r[3]+0x00007248u; WF32(ea,c->f[28]);} // 800B2FEC
L_800B2FF0:;
  c->r[24]=c->r[24]+0x00000001u; // 800B2FF0
  cmpu(c,0,c->r[24],0x00000009u); // 800B2FF4
  if (crb(c,0)) { IRQCHK(c); goto L_800B2F34; } // 800B2FF8
L_800B2FFC:;
  c->r[3]=c->r[26]|c->r[26]; // 800B2FFC
  c->lr=0x800B3004u; f_800B3798(c); // 800B3000
  c->r[0]=0u+0x00000078u; // 800B3004
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B3008
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800B300C
  c->r[0]=0u+0x00000068u; // 800B3010
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800B3014
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800B3018
  c->r[0]=0u+0x00000058u; // 800B301C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800B3020
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 800B3024
  c->r[0]=0u+0x00000048u; // 800B3028
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800B302C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 800B3030
  c->r[11]=c->r[1]+0x00000040u; // 800B3034
  c->lr=0x800B303Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3038
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B303C
  c->lr=c->r[0]; // 800B3040
  c->r[1]=c->r[1]+0x00000080u; // 800B3044
  return; // 800B3048
}

// fn_800B304C
void f_800B304C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B304C
  c->r[0]=c->lr; // 800B3050
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B3054
  c->r[11]=c->r[1]+0x00000030u; // 800B3058
  c->lr=0x800B3060u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B305C
  c->r[24]=c->r[3]|c->r[3]; // 800B3060
  c->r[26]=c->r[4]|c->r[4]; // 800B3064
  c->r[25]=c->r[5]|c->r[5]; // 800B3068
  c->lr=0x800B3070u; f_8007B524(c); // 800B306C
  c->lr=0x800B3074u; f_8006E224(c); // 800B3070
  c->lr=0x800B3078u; f_800897A8(c); // 800B3074
  c->r[28]=c->r[3]|c->r[3]; // 800B3078
  c->r[27]=0u+0x00000000u; // 800B307C
L_800B3080:;
  c->r[3]=c->r[1]+0x00000008u; // 800B3080
  c->r[4]=c->r[26]|c->r[26]; // 800B3084
  c->lr=0x800B308Cu; f_800670A8(c); // 800B3088
  c->r[3]=c->r[28]|c->r[28]; // 800B308C
  c->r[4]=c->r[1]+0x00000008u; // 800B3090
  c->r[5]=c->r[27]|c->r[27]; // 800B3094
  c->lr=0x800B309Cu; f_80067910(c); // 800B3098
  cmps(c,0,(int32_t)c->r[3],0); // 800B309C
  if (crb(c,2)) { goto L_800B30B8; } // 800B30A0
  c->r[3]=c->r[24]|c->r[24]; // 800B30A4
  c->r[4]=c->r[1]+0x00000008u; // 800B30A8
  c->r[5]=c->r[25]|c->r[25]; // 800B30AC
  c->r[6]=0u+0x00000001u; // 800B30B0
  c->lr=0x800B30B8u; f_800B31A4(c); // 800B30B4
L_800B30B8:;
  c->r[27]=c->r[27]+0x00000001u; // 800B30B8
  cmps(c,0,(int32_t)c->r[27],9); // 800B30BC
  if (crb(c,0)) { IRQCHK(c); goto L_800B3080; } // 800B30C0
  c->r[3]=c->r[28]|c->r[28]; // 800B30C4
  c->r[4]=c->r[26]|c->r[26]; // 800B30C8
  c->r[5]=0u+0x00000000u; // 800B30CC
  c->lr=0x800B30D4u; f_80067A38(c); // 800B30D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B30D4
  if (crb(c,2)) { goto L_800B318C; } // 800B30D8
  c->r[4]=R32(c->r[3]+0x00000008u); // 800B30DC
  cmps(c,0,(int32_t)c->r[4],-1); // 800B30E0
  if (!crb(c,1)) { goto L_800B318C; } // 800B30E4
  c->r[3]=R32(c->r[28]+0x000000D0u); // 800B30E8
  c->r[3]=c->r[3]+0x001F0000u; // 800B30EC
  c->r[0]=c->r[4]+0x00000003u; // 800B30F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800B30F4
  c->r[3]=c->r[3]+c->r[0]; // 800B30F8
  c->r[27]=c->r[3]+0x00005548u; // 800B30FC
  c->r[29]=0u+0x00000000u; // 800B3100
  goto L_800B3180; // 800B3104
L_800B3108:;
  c->r[3]=c->r[27]|c->r[27]; // 800B3108
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 800B310C
  c->lr=0x800B3114u; f_8028CD14(c); // 800B3110
  c->r[31]=c->r[3]|c->r[3]; // 800B3114
  c->r[3]=c->r[24]|c->r[24]; // 800B3118
  c->r[4]=c->r[31]+0x0000000Cu; // 800B311C
  c->r[5]=c->r[25]|c->r[25]; // 800B3120
  c->r[6]=0u+0x00000001u; // 800B3124
  c->lr=0x800B312Cu; f_800B31A4(c); // 800B3128
  c->r[26]=0u+0x00000000u; // 800B312C
  c->r[30]=0u+0x00000001u; // 800B3130
L_800B3134:;
  c->r[3]=c->r[1]+0x00000008u; // 800B3134
  c->r[4]=c->r[31]+0x0000000Cu; // 800B3138
  c->lr=0x800B3140u; f_800670A8(c); // 800B313C
  c->r[3]=c->r[28]|c->r[28]; // 800B3140
  c->r[4]=c->r[1]+0x00000008u; // 800B3144
  c->r[5]=c->r[30]|c->r[30]; // 800B3148
  c->lr=0x800B3150u; f_80067910(c); // 800B314C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3150
  if (crb(c,2)) { goto L_800B316C; } // 800B3154
  c->r[3]=c->r[24]|c->r[24]; // 800B3158
  c->r[4]=c->r[1]+0x00000008u; // 800B315C
  c->r[5]=c->r[25]|c->r[25]; // 800B3160
  c->r[6]=0u+0x00000001u; // 800B3164
  c->lr=0x800B316Cu; f_800B31A4(c); // 800B3168
L_800B316C:;
  c->r[30]=c->r[30]+0x00000002u; // 800B316C
  c->r[26]=c->r[26]+0x00000001u; // 800B3170
  cmps(c,0,(int32_t)c->r[26],4); // 800B3174
  if (crb(c,0)) { IRQCHK(c); goto L_800B3134; } // 800B3178
  c->r[29]=c->r[29]+0x00000001u; // 800B317C
L_800B3180:;
  c->r[0]=R16(c->r[27]+0x00000008u); // 800B3180
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800B3184
  if (crb(c,0)) { IRQCHK(c); goto L_800B3108; } // 800B3188
L_800B318C:;
  c->r[11]=c->r[1]+0x00000030u; // 800B318C
  c->lr=0x800B3194u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3190
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B3194
  c->lr=c->r[0]; // 800B3198
  c->r[1]=c->r[1]+0x00000030u; // 800B319C
  return; // 800B31A0
}

// fn_800B31A4
void f_800B31A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B31A4
  c->r[0]=c->lr; // 800B31A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B31AC
  c->r[11]=c->r[1]+0x00000030u; // 800B31B0
  c->lr=0x800B31B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B31B4
  c->r[27]=c->r[3]|c->r[3]; // 800B31B8
  c->r[30]=c->r[4]|c->r[4]; // 800B31BC
  c->r[28]=c->r[5]|c->r[5]; // 800B31C0
  c->r[29]=c->r[6]|c->r[6]; // 800B31C4
  c->lr=0x800B31CCu; f_8007B524(c); // 800B31C8
  c->lr=0x800B31D0u; f_8006E224(c); // 800B31CC
  c->lr=0x800B31D4u; f_800897A8(c); // 800B31D0
  c->r[3]=R32(c->r[3]+0x000000D0u); // 800B31D4
  c->r[31]=c->r[3]+0x00000050u; // 800B31D8
  c->r[3]=c->r[1]+0x00000008u; // 800B31DC
  c->lr=0x800B31E4u; f_80047C5C(c); // 800B31E0
  c->r[4]=R32(c->r[30]+0x00000000u); // 800B31E4
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800B31E8
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B31EC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B31F0
  c->r[0]=c->r[4]+c->r[0]; // 800B31F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800B31F8
  c->r[3]=c->r[31]+c->r[0]; // 800B31FC
  cmps(c,0,(int32_t)c->r[29],0); // 800B3200
  if (crb(c,2)) { goto L_800B3214; } // 800B3204
  c->r[0]=R32(c->r[3]+0x000018B0u); // 800B3208
  c->r[0]=c->r[0]|0x00000080u; // 800B320C
  W32(c->r[3]+0x000018B0u,c->r[0]); // 800B3210
L_800B3214:;
  c->r[31]=R32(c->r[3]+0x000018D4u); // 800B3214
  cmps(c,0,(int32_t)c->r[31],0); // 800B3218
  if (!crb(c,2)) { goto L_800B3230; } // 800B321C
  c->r[3]=c->r[1]+0x00000008u; // 800B3220
  c->r[4]=0u+0xFFFFFFFFu; // 800B3224
  c->lr=0x800B322Cu; f_80047BD4(c); // 800B3228
  goto L_800B3284; // 800B322C
L_800B3230:;
  c->r[3]=c->r[27]+0x00050000u; // 800B3230
  c->r[3]=c->r[3]+0xFFFF8228u; // 800B3234
  c->r[4]=R32(c->r[31]+0x00000000u); // 800B3238
  c->r[5]=c->r[28]|c->r[28]; // 800B323C
  c->lr=0x800B3244u; f_8004D6F8(c); // 800B3240
  c->r[30]=c->r[27]+0x00050000u; // 800B3244
  c->r[30]=c->r[30]+0xFFFF8408u; // 800B3248
  c->r[29]=0u+0x00000000u; // 800B324C
L_800B3250:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 800B3250
  cmps(c,0,(int32_t)c->r[4],-1); // 800B3254
  if (!crb(c,1)) { goto L_800B3268; } // 800B3258
  c->r[3]=c->r[30]|c->r[30]; // 800B325C
  c->r[5]=c->r[28]|c->r[28]; // 800B3260
  c->lr=0x800B3268u; f_8004D6F8(c); // 800B3264
L_800B3268:;
  c->r[31]=c->r[31]+0x00000004u; // 800B3268
  c->r[29]=c->r[29]+0x00000001u; // 800B326C
  cmps(c,0,(int32_t)c->r[29],4); // 800B3270
  if (crb(c,0)) { IRQCHK(c); goto L_800B3250; } // 800B3274
  c->r[3]=c->r[1]+0x00000008u; // 800B3278
  c->r[4]=0u+0xFFFFFFFFu; // 800B327C
  c->lr=0x800B3284u; f_80047BD4(c); // 800B3280
L_800B3284:;
  c->r[11]=c->r[1]+0x00000030u; // 800B3284
  c->lr=0x800B328Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3288
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B328C
  c->lr=c->r[0]; // 800B3290
  c->r[1]=c->r[1]+0x00000030u; // 800B3294
  return; // 800B3298
}

// fn_800B329C
void f_800B329C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B329C
  c->r[0]=c->lr; // 800B32A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B32A4
  c->r[11]=c->r[1]+0x00000020u; // 800B32A8
  c->lr=0x800B32B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B32AC
  c->r[27]=c->r[3]|c->r[3]; // 800B32B0
  c->r[28]=c->r[4]|c->r[4]; // 800B32B4
  c->lr=0x800B32BCu; f_8007B524(c); // 800B32B8
  c->lr=0x800B32C0u; f_8006E224(c); // 800B32BC
  c->lr=0x800B32C4u; f_800897A8(c); // 800B32C0
  c->r[4]=R32(c->r[3]+0x000000D0u); // 800B32C4
  c->r[31]=c->r[4]+0x001F0000u; // 800B32C8
  c->r[31]=c->r[31]+0x00005548u; // 800B32CC
  c->lr=0x800B32D4u; f_80066C40(c); // 800B32D0
  c->r[3]=c->r[31]|c->r[31]; // 800B32D4
  c->lr=0x800B32DCu; f_8004B018(c); // 800B32D8
  c->r[30]=c->r[3]|c->r[3]; // 800B32DC
  goto L_800B3320; // 800B32E0
L_800B32E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B32E4
  c->r[4]=c->r[30]|c->r[30]; // 800B32E8
  c->lr=0x800B32F0u; f_8028CCD8(c); // 800B32EC
  c->r[29]=c->r[3]|c->r[3]; // 800B32F0
  c->r[3]=c->r[27]|c->r[27]; // 800B32F4
  c->r[4]=c->r[30]+0x0000000Cu; // 800B32F8
  c->r[5]=c->r[28]|c->r[28]; // 800B32FC
  c->r[6]=0u+0x00000001u; // 800B3300
  c->lr=0x800B3308u; f_800B31A4(c); // 800B3304
  cmps(c,0,(int32_t)c->r[28],0); // 800B3308
  if (!crb(c,2)) { goto L_800B331C; } // 800B330C
  c->r[0]=R32(c->r[30]+0x00000000u); // 800B3310
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800B3314
  W32(c->r[30]+0x00000000u,c->r[0]); // 800B3318
L_800B331C:;
  c->r[30]=c->r[29]|c->r[29]; // 800B331C
L_800B3320:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B3320
  if (!crb(c,2)) { IRQCHK(c); goto L_800B32E4; } // 800B3324
  c->r[11]=c->r[1]+0x00000020u; // 800B3328
  c->lr=0x800B3330u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B332C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3330
  c->lr=c->r[0]; // 800B3334
  c->r[1]=c->r[1]+0x00000020u; // 800B3338
  return; // 800B333C
}

// fn_800B3340
void f_800B3340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3340
  c->r[0]=c->lr; // 800B3344
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B3348
  c->r[11]=c->r[1]+0x00000030u; // 800B334C
  c->lr=0x800B3354u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3350
  c->r[26]=c->r[3]|c->r[3]; // 800B3354
  c->r[27]=c->r[4]|c->r[4]; // 800B3358
  c->lr=0x800B3360u; f_8007B524(c); // 800B335C
  c->lr=0x800B3364u; f_8006E224(c); // 800B3360
  c->lr=0x800B3368u; f_800897A8(c); // 800B3364
  c->r[30]=c->r[3]|c->r[3]; // 800B3368
  c->r[4]=R32(c->r[3]+0x000000D0u); // 800B336C
  c->r[31]=c->r[4]+0x001F0000u; // 800B3370
  c->r[31]=c->r[31]+0x00005548u; // 800B3374
  c->lr=0x800B337Cu; f_80066C40(c); // 800B3378
  c->r[3]=c->r[31]|c->r[31]; // 800B337C
  c->lr=0x800B3384u; f_8004B018(c); // 800B3380
  c->r[29]=c->r[3]|c->r[3]; // 800B3384
  goto L_800B33DC; // 800B3388
L_800B338C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B338C
  c->r[4]=c->r[29]|c->r[29]; // 800B3390
  c->lr=0x800B3398u; f_8028CCD8(c); // 800B3394
  c->r[28]=c->r[3]|c->r[3]; // 800B3398
  c->r[0]=R32(c->r[29]+0x00000000u); // 800B339C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800B33A0
  cmps(c,0,(int32_t)c->r[0],0); // 800B33A4
  if (crb(c,2)) { goto L_800B33C4; } // 800B33A8
  c->r[3]=c->r[26]|c->r[26]; // 800B33AC
  c->r[4]=c->r[29]+0x0000000Cu; // 800B33B0
  c->r[5]=0u+0x00000001u; // 800B33B4
  c->r[6]=0u+0x00000000u; // 800B33B8
  c->lr=0x800B33C0u; f_800B31A4(c); // 800B33BC
  goto L_800B33D8; // 800B33C0
L_800B33C4:;
  c->r[3]=c->r[26]|c->r[26]; // 800B33C4
  c->r[4]=c->r[29]+0x0000000Cu; // 800B33C8
  c->r[5]=c->r[27]|c->r[27]; // 800B33CC
  c->r[6]=0u+0x00000000u; // 800B33D0
  c->lr=0x800B33D8u; f_800B31A4(c); // 800B33D4
L_800B33D8:;
  c->r[29]=c->r[28]|c->r[28]; // 800B33D8
L_800B33DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800B33DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B338C; } // 800B33E0
  c->r[31]=c->r[26]+0x00050000u; // 800B33E4
  c->r[31]=c->r[31]+0xFFFF8F48u; // 800B33E8
  c->r[3]=c->r[31]|c->r[31]; // 800B33EC
  c->lr=0x800B33F4u; f_8004B018(c); // 800B33F0
  c->r[28]=c->r[3]|c->r[3]; // 800B33F4
  goto L_800B343C; // 800B33F8
L_800B33FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800B33FC
  c->r[4]=c->r[28]|c->r[28]; // 800B3400
  c->lr=0x800B3408u; f_8028CCD8(c); // 800B3404
  c->r[29]=c->r[3]|c->r[3]; // 800B3408
  c->r[0]=R32(c->r[28]+0x00000000u); // 800B340C
  cmps(c,0,(int32_t)c->r[0],3); // 800B3410
  if (!crb(c,2)) { goto L_800B3438; } // 800B3414
  c->r[3]=c->r[30]|c->r[30]; // 800B3418
  c->r[4]=c->r[1]+0x00000008u; // 800B341C
  c->r[5]=R32(c->r[28]+0x00000010u); // 800B3420
  c->lr=0x800B3428u; f_80068458(c); // 800B3424
  c->r[3]=c->r[26]|c->r[26]; // 800B3428
  c->r[4]=c->r[1]+0x00000008u; // 800B342C
  c->r[5]=0u+0x00000001u; // 800B3430
  c->lr=0x800B3438u; f_800B304C(c); // 800B3434
L_800B3438:;
  c->r[28]=c->r[29]|c->r[29]; // 800B3438
L_800B343C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B343C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B33FC; } // 800B3440
  cmps(c,0,(int32_t)c->r[27],0); // 800B3444
  if (crb(c,2)) { goto L_800B345C; } // 800B3448
  c->r[0]=R32(c->r[26]+0x000000B8u); // 800B344C
  c->r[0]=c->r[0]|0x00000004u; // 800B3450
  W32(c->r[26]+0x000000B8u,c->r[0]); // 800B3454
  goto L_800B3468; // 800B3458
L_800B345C:;
  c->r[0]=R32(c->r[26]+0x000000B8u); // 800B345C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800B3460
  W32(c->r[26]+0x000000B8u,c->r[0]); // 800B3464
L_800B3468:;
  c->r[11]=c->r[1]+0x00000030u; // 800B3468
  c->lr=0x800B3470u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B346C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B3470
  c->lr=c->r[0]; // 800B3474
  c->r[1]=c->r[1]+0x00000030u; // 800B3478
  return; // 800B347C
}

// fn_800B3480
void f_800B3480(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B3480
  if (crb(c,2)) { goto L_800B3498; } // 800B3484
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B3488
  c->r[0]=c->r[0]|0x00000008u; // 800B348C
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B3490
  return; // 800B3494
L_800B3498:;
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B3498
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800B349C
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B34A0
  return; // 800B34A4
}

// fn_800B34A8
void f_800B34A8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B34A8
  if (crb(c,2)) { goto L_800B34C0; } // 800B34AC
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B34B0
  c->r[0]=c->r[0]|0x00000010u; // 800B34B4
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B34B8
  return; // 800B34BC
L_800B34C0:;
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B34C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800B34C4
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B34C8
  return; // 800B34CC
}

// fn_800B34D0
void f_800B34D0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B34D0
  if (crb(c,2)) { goto L_800B34E8; } // 800B34D4
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B34D8
  c->r[0]=c->r[0]|0x00000020u; // 800B34DC
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B34E0
  return; // 800B34E4
L_800B34E8:;
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800B34E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800B34EC
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800B34F0
  return; // 800B34F4
}

// fn_800B34F8
void f_800B34F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B34F8
  c->r[0]=c->lr; // 800B34FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B3500
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B3504
  W32(c->r[1]+0x00000038u,c->r[30]); // 800B3508
  W32(c->r[1]+0x00000034u,c->r[29]); // 800B350C
  W32(c->r[1]+0x00000030u,c->r[28]); // 800B3510
  c->r[28]=c->r[3]|c->r[3]; // 800B3514
  c->r[29]=c->r[4]|c->r[4]; // 800B3518
  c->r[30]=c->r[5]|c->r[5]; // 800B351C
  c->r[3]=c->r[1]+0x00000008u; // 800B3520
  c->lr=0x800B3528u; f_80047C5C(c); // 800B3524
  c->r[3]=c->r[1]+0x00000010u; // 800B3528
  c->lr=0x800B3530u; f_800592DC(c); // 800B352C
  c->r[3]=c->r[1]+0x00000018u; // 800B3530
  c->lr=0x800B3538u; f_800592DC(c); // 800B3534
  c->r[3]=c->r[1]+0x00000020u; // 800B3538
  c->lr=0x800B3540u; f_800592DC(c); // 800B353C
  c->r[3]=c->r[1]+0x00000028u; // 800B3540
  c->lr=0x800B3548u; f_800592DC(c); // 800B3544
  c->r[31]=0u+0x00000000u; // 800B3548
  c->r[4]=0u+0x00000000u; // 800B354C
  c->r[3]=c->r[28]|c->r[28]; // 800B3550
  c->r[0]=0u+0x0000008Cu; // 800B3554
  c->ctr=c->r[0]; // 800B3558
L_800B355C:;
  c->r[0]=R32(c->r[3]+0x000062B0u); // 800B355C
  cmps(c,0,(int32_t)c->r[0],0); // 800B3560
  if (!crb(c,2)) { goto L_800B3578; } // 800B3564
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800B3568
  c->r[3]=c->r[28]+c->r[0]; // 800B356C
  c->r[31]=c->r[3]+0x000062ACu; // 800B3570
  goto L_800B3584; // 800B3574
L_800B3578:;
  c->r[3]=c->r[3]+0x0000001Cu; // 800B3578
  c->r[4]=c->r[4]+0x00000001u; // 800B357C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B355C; } // 800B3580
L_800B3584:;
  W32(c->r[31]+0x00000000u,c->r[29]); // 800B3584
  c->r[0]=0u+0x00000001u; // 800B3588
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B358C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B3590
  W32(c->r[31]+0x00000010u,c->r[30]); // 800B3594
  c->r[3]=c->r[28]+0x00050000u; // 800B3598
  c->r[3]=c->r[3]+0xFFFF8F48u; // 800B359C
  c->r[4]=c->r[31]|c->r[31]; // 800B35A0
  c->lr=0x800B35A8u; f_8028CA70(c); // 800B35A4
  c->r[31]=R32(c->r[31]+0x0000000Cu); // 800B35A8
  c->r[3]=c->r[1]+0x00000008u; // 800B35AC
  c->r[4]=0u+0xFFFFFFFFu; // 800B35B0
  c->lr=0x800B35B8u; f_80047BD4(c); // 800B35B4
  c->r[3]=c->r[31]|c->r[31]; // 800B35B8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B35BC
  c->r[30]=R32(c->r[1]+0x00000038u); // 800B35C0
  c->r[29]=R32(c->r[1]+0x00000034u); // 800B35C4
  c->r[28]=R32(c->r[1]+0x00000030u); // 800B35C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B35CC
  c->lr=c->r[0]; // 800B35D0
  c->r[1]=c->r[1]+0x00000040u; // 800B35D4
  return; // 800B35D8
}

// fn_800B35DC
void f_800B35DC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],-1); // 800B35DC
  if (!crb(c,1)) return; // 800B35E0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800B35E4
  c->r[4]=c->r[3]+c->r[0]; // 800B35E8
  c->r[4]=c->r[4]+0x000062ACu; // 800B35EC
  c->r[0]=0u+0x00000000u; // 800B35F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800B35F4
  W32(c->r[4]+0x00000008u,c->r[0]); // 800B35F8
  c->r[3]=c->r[3]+0x00050000u; // 800B35FC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 800B3600
  f_8028CC6C(c); return; // 800B3604
  return; // 800B3608
}

// fn_800B360C
void f_800B360C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],-1); // 800B360C
  if (!crb(c,1)) return; // 800B3610
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800B3614
  c->r[3]=c->r[3]+c->r[0]; // 800B3618
  W32(c->r[3]+0x000062B4u,c->r[5]); // 800B361C
  return; // 800B3620
}

// fn_800B3624
void f_800B3624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3624
  c->r[0]=c->lr; // 800B3628
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B362C
  c->r[11]=c->r[1]+0x00000020u; // 800B3630
  c->lr=0x800B3638u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3634
  c->r[27]=c->r[3]|c->r[3]; // 800B3638
  c->r[28]=0u+0x00000000u; // 800B363C
  c->r[30]=c->r[3]+0x00050000u; // 800B3640
  c->r[30]=c->r[30]+0xFFFF8228u; // 800B3644
  c->r[4]=0u+0x80430000u; // 800B3648
  c->r[29]=c->r[4]+0xFFFFD4A8u; // 800B364C
  c->r[31]=c->r[3]+0x00050000u; // 800B3650
L_800B3654:;
  cmps(c,0,(int32_t)c->r[28],6); // 800B3654
  if (crb(c,2)) { goto L_800B3688; } // 800B3658
  if (!crb(c,0)) { goto L_800B369C; } // 800B365C
  cmps(c,0,(int32_t)c->r[28],0); // 800B3660
  if (!crb(c,0)) { goto L_800B366C; } // 800B3664
  goto L_800B369C; // 800B3668
L_800B366C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B366C
  c->r[4]=c->r[27]+0x00050000u; // 800B3670
  {uint32_t ea=c->r[4]+0xFFFF8F5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3674
  {uint32_t ea=c->r[4]+0xFFFF8F60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3678
  {uint32_t ea=c->r[29]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B367C
  c->lr=0x800B3684u; f_80070424(c); // 800B3680
  goto L_800B369C; // 800B3684
L_800B3688:;
  c->r[3]=c->r[30]|c->r[30]; // 800B3688
  {uint32_t ea=c->r[2]+0xFFFF8764u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B368C
  {uint32_t ea=c->r[2]+0xFFFF8778u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3690
  {uint32_t ea=c->r[29]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3694
  c->lr=0x800B369Cu; f_80070424(c); // 800B3698
L_800B369C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B369C
  {uint32_t ea=c->r[31]+0xFFFF8F68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B36A0
  c->f[2]=c->f[1]; // 800B36A4
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B36A8
  c->lr=0x800B36B0u; f_80070434(c); // 800B36AC
  c->r[3]=c->r[30]|c->r[30]; // 800B36B0
  c->lr=0x800B36B8u; f_8004E1AC(c); // 800B36B4
  c->r[30]=c->r[30]+0x000001E0u; // 800B36B8
  c->r[29]=c->r[29]+0x00000004u; // 800B36BC
  c->r[28]=c->r[28]+0x00000001u; // 800B36C0
  cmpu(c,0,c->r[28],0x00000007u); // 800B36C4
  if (crb(c,0)) { IRQCHK(c); goto L_800B3654; } // 800B36C8
  c->r[11]=c->r[1]+0x00000020u; // 800B36CC
  c->lr=0x800B36D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B36D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B36D4
  c->lr=c->r[0]; // 800B36D8
  c->r[1]=c->r[1]+0x00000020u; // 800B36DC
  return; // 800B36E0
}

// fn_800B36E4
void f_800B36E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B36E4
  c->r[0]=c->lr; // 800B36E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B36EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B36F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B36F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B36F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B36FC
  c->r[30]=0u+0x00000002u; // 800B3700
  c->r[31]=c->r[3]+0x00050000u; // 800B3704
  c->r[31]=c->r[31]+0xFFFF85E8u; // 800B3708
L_800B370C:;
  cmps(c,0,(int32_t)c->r[30],3); // 800B370C
  if (crb(c,2)) { goto L_800B3738; } // 800B3710
  if (!crb(c,0)) { goto L_800B3724; } // 800B3714
  cmps(c,0,(int32_t)c->r[30],2); // 800B3718
  if (!crb(c,0)) { goto L_800B3730; } // 800B371C
  goto L_800B3744; // 800B3720
L_800B3724:;
  cmps(c,0,(int32_t)c->r[30],5); // 800B3724
  if (!crb(c,0)) { goto L_800B3744; } // 800B3728
  goto L_800B3740; // 800B372C
L_800B3730:;
  c->r[28]=0u+0x00000020u; // 800B3730
  goto L_800B3744; // 800B3734
L_800B3738:;
  c->r[28]=0u+0x00000064u; // 800B3738
  goto L_800B3744; // 800B373C
L_800B3740:;
  c->r[28]=0u+0x00000008u; // 800B3740
L_800B3744:;
  c->r[29]=0u+0x00000000u; // 800B3744
  goto L_800B3760; // 800B3748
L_800B374C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B374C
  c->r[4]=c->r[29]|c->r[29]; // 800B3750
  c->r[5]=0u+0x00000000u; // 800B3754
  c->lr=0x800B375Cu; f_8004D6F8(c); // 800B3758
  c->r[29]=c->r[29]+0x00000001u; // 800B375C
L_800B3760:;
  cmpu(c,0,c->r[29],c->r[28]); // 800B3760
  if (crb(c,0)) { IRQCHK(c); goto L_800B374C; } // 800B3764
  c->r[31]=c->r[31]+0x000001E0u; // 800B3768
  c->r[30]=c->r[30]+0x00000001u; // 800B376C
  cmpu(c,0,c->r[30],0x00000005u); // 800B3770
  if (crb(c,0)) { IRQCHK(c); goto L_800B370C; } // 800B3774
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B3778
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B377C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B3780
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B3784
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3788
  c->lr=c->r[0]; // 800B378C
  c->r[1]=c->r[1]+0x00000020u; // 800B3790
  return; // 800B3794
}

// fn_800B3798
void f_800B3798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3798
  c->r[0]=c->lr; // 800B379C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B37A0
  c->r[11]=c->r[1]+0x00000050u; // 800B37A4
  c->lr=0x800B37ACu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B37A8
  c->r[31]=c->r[1]|c->r[1]; // 800B37AC
  c->r[20]=c->r[3]|c->r[3]; // 800B37B0
  c->lr=0x800B37B8u; f_8007B524(c); // 800B37B4
  c->lr=0x800B37BCu; f_8006E224(c); // 800B37B8
  c->lr=0x800B37C0u; f_800897A8(c); // 800B37BC
  c->lr=0x800B37C4u; f_8007B524(c); // 800B37C0
  c->lr=0x800B37C8u; f_8006E234(c); // 800B37C4
  cmps(c,0,(int32_t)c->r[3],0); // 800B37C8
  if (crb(c,2)) { goto L_800B3928; } // 800B37CC
  c->lr=0x800B37D4u; f_8007B524(c); // 800B37D0
  c->lr=0x800B37D8u; f_8006E234(c); // 800B37D4
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B37D8
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B37DC
  c->ctr=c->r[12]; // 800B37E0
  if (true) { c->lr=0x800B37E8u; dispatch(c,c->ctr); } // 800B37E4
  cmps(c,0,(int32_t)c->r[3],0); // 800B37E8
  if (crb(c,2)) { goto L_800B3928; } // 800B37EC
  c->lr=0x800B37F4u; f_8007B524(c); // 800B37F0
  c->lr=0x800B37F8u; f_8006E234(c); // 800B37F4
  c->lr=0x800B37FCu; f_8006E4C0(c); // 800B37F8
  c->r[17]=c->r[3]|c->r[3]; // 800B37FC
  c->lr=0x800B3804u; f_8007B524(c); // 800B3800
  c->lr=0x800B3808u; f_8009E8EC(c); // 800B3804
  c->r[23]=c->r[3]+c->r[17]; // 800B3808
  cmps(c,0,(int32_t)c->r[23],0); // 800B380C
  if (crb(c,2)) { goto L_800B3928; } // 800B3810
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800B3814
  c->r[22]=0u-c->r[0]; // 800B3818
  c->r[22]=rotl(c->r[22],0)&0xFFFFFFF8u; // 800B381C
  c->r[0]=R32(c->r[1]+0x00000000u); // 800B3820
  {uint32_t ea=c->r[1]+c->r[22]; W32(ea,c->r[0]); c->r[1]=ea;} // 800B3824
  c->r[22]=c->r[1]+0x00000008u; // 800B3828
  c->lr=0x800B3830u; f_8007B524(c); // 800B382C
  c->r[4]=c->r[22]|c->r[22]; // 800B3830
  c->r[5]=c->r[23]|c->r[23]; // 800B3834
  c->lr=0x800B383Cu; f_8009E8F4(c); // 800B3838
  c->r[26]=0u+0x00000000u; // 800B383C
  c->r[28]=0u+0x00000000u; // 800B3840
  c->r[18]=0u+0x00000001u; // 800B3844
  c->r[19]=0u+0x00000000u; // 800B3848
  goto L_800B3920; // 800B384C
L_800B3850:;
  c->lr=0x800B3854u; f_8007B524(c); // 800B3850
  c->r[4]=c->r[22]+c->r[28]; // 800B3854
  c->lr=0x800B385Cu; f_8009E8FC(c); // 800B3858
  c->r[17]=c->r[3]|c->r[3]; // 800B385C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3860
  if (crb(c,2)) { goto L_800B3918; } // 800B3864
  c->lr=0x800B386Cu; f_8006E4B0(c); // 800B3868
  c->r[21]=c->r[3]|c->r[3]; // 800B386C
  c->r[3]=c->r[17]|c->r[17]; // 800B3870
  c->lr=0x800B3878u; f_8006E4B8(c); // 800B3874
  c->r[4]=c->r[22]+c->r[28]; // 800B3878
  c->r[3]=R32(c->r[20]+0x00007220u); // 800B387C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800B3880
  c->r[3]=c->r[0]-c->r[3]; // 800B3884
  c->r[30]=c->r[3]+0x00000006u; // 800B3888
  c->r[3]=R32(c->r[20]+0x00007224u); // 800B388C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B3890
  c->r[3]=c->r[0]-c->r[3]; // 800B3894
  c->r[29]=c->r[3]+0x00000006u; // 800B3898
  c->r[25]=0u+0x00000000u; // 800B389C
  goto L_800B3908; // 800B38A0
L_800B38A4:;
  c->r[24]=0u+0x00000000u; // 800B38A4
  c->r[27]=c->r[29]+c->r[25]; // 800B38A8
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)6656); // 800B38AC
  c->r[17]=c->r[20]+c->r[0]; // 800B38B0
  goto L_800B38F4; // 800B38B4
L_800B38B8:;
  c->r[0]=c->r[30]+c->r[24]; // 800B38B8
  cmps(c,0,(int32_t)c->r[0],0); // 800B38BC
  if (crb(c,0)) { goto L_800B38F0; } // 800B38C0
  cmps(c,0,(int32_t)c->r[0],13); // 800B38C4
  if (!crb(c,0)) { goto L_800B38F0; } // 800B38C8
  cmps(c,0,(int32_t)c->r[27],0); // 800B38CC
  if (crb(c,0)) { goto L_800B38F0; } // 800B38D0
  cmps(c,0,(int32_t)c->r[27],13); // 800B38D4
  if (!crb(c,0)) { goto L_800B38F0; } // 800B38D8
  c->r[0]=rotl(c->r[0],9)&0xFFFFFE00u; // 800B38DC
  c->r[3]=c->r[17]+c->r[0]; // 800B38E0
  W32(c->r[3]+0x00007238u,c->r[18]); // 800B38E4
  W32(c->r[3]+0x0000723Cu,c->r[18]); // 800B38E8
  W32(c->r[3]+0x00007240u,c->r[19]); // 800B38EC
L_800B38F0:;
  c->r[24]=c->r[24]+0x00000001u; // 800B38F0
L_800B38F4:;
  c->r[3]=c->r[21]|c->r[21]; // 800B38F4
  c->lr=0x800B38FCu; f_8006E4A0(c); // 800B38F8
  cmpu(c,0,c->r[24],c->r[3]); // 800B38FC
  if (crb(c,0)) { IRQCHK(c); goto L_800B38B8; } // 800B3900
  c->r[25]=c->r[25]+0x00000001u; // 800B3904
L_800B3908:;
  c->r[3]=c->r[21]|c->r[21]; // 800B3908
  c->lr=0x800B3910u; f_8006E498(c); // 800B390C
  cmpu(c,0,c->r[25],c->r[3]); // 800B3910
  if (crb(c,0)) { IRQCHK(c); goto L_800B38A4; } // 800B3914
L_800B3918:;
  c->r[28]=c->r[28]+0x00000008u; // 800B3918
  c->r[26]=c->r[26]+0x00000001u; // 800B391C
L_800B3920:;
  cmpu(c,0,c->r[26],c->r[23]); // 800B3920
  if (crb(c,0)) { IRQCHK(c); goto L_800B3850; } // 800B3924
L_800B3928:;
  c->r[10]=c->r[31]|c->r[31]; // 800B3928
  c->r[11]=c->r[10]+0x00000050u; // 800B392C
  c->lr=0x800B3934u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3930
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B3934
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B3938
  c->r[1]=c->r[10]|c->r[10]; // 800B393C
  c->lr=c->r[0]; // 800B3940
  return; // 800B3944
}

// fn_800B3948
void f_800B3948(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3948
  c->r[0]=c->lr; // 800B394C
  W32(c->r[1]+0x00000124u,c->r[0]); // 800B3950
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 800B3954
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 800B3958
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 800B395C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 800B3960
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[29]);} // 800B3964
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,29,ea,0,0);} // 800B3968
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[28]);} // 800B396C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,28,ea,0,0);} // 800B3970
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[27]);} // 800B3974
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,27,ea,0,0);} // 800B3978
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[26]);} // 800B397C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,26,ea,0,0);} // 800B3980
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[25]);} // 800B3984
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,25,ea,0,0);} // 800B3988
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[24]);} // 800B398C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,24,ea,0,0);} // 800B3990
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[23]);} // 800B3994
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,23,ea,0,0);} // 800B3998
  c->r[11]=c->r[1]+0x00000090u; // 800B399C
  c->lr=0x800B39A4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B39A0
  c->r[26]=c->r[3]|c->r[3]; // 800B39A4
  c->lr=0x800B39ACu; f_8007B524(c); // 800B39A8
  c->lr=0x800B39B0u; f_8006E224(c); // 800B39AC
  c->lr=0x800B39B4u; f_800897A8(c); // 800B39B0
  c->r[27]=c->r[3]|c->r[3]; // 800B39B4
  c->r[3]=c->r[1]+0x00000024u; // 800B39B8
  c->lr=0x800B39C0u; f_8004B0A4(c); // 800B39BC
  c->r[3]=c->r[1]+0x00000030u; // 800B39C0
  c->lr=0x800B39C8u; f_8004B0A4(c); // 800B39C4
  c->r[3]=c->r[1]+0x0000003Cu; // 800B39C8
  c->lr=0x800B39D0u; f_8004B0A4(c); // 800B39CC
  c->r[3]=c->r[1]+0x00000048u; // 800B39D0
  c->lr=0x800B39D8u; f_8004B0A4(c); // 800B39D4
  c->r[3]=c->r[1]+0x00000054u; // 800B39D8
  c->lr=0x800B39E0u; f_8004B0A4(c); // 800B39DC
  c->r[3]=c->r[1]+0x00000018u; // 800B39E0
  c->lr=0x800B39E8u; f_8004B0A4(c); // 800B39E4
  c->r[3]=c->r[1]+0x00000008u; // 800B39E8
  c->lr=0x800B39F0u; f_80047C5C(c); // 800B39EC
  c->r[0]=0u+0x000000FFu; // 800B39F0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800B39F4
  W8(c->r[1]+0x00000009u,c->r[0]); // 800B39F8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800B39FC
  c->r[0]=0u+0x000000C0u; // 800B3A00
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800B3A04
  c->r[28]=0u+0x00000000u; // 800B3A08
  c->r[30]=0u+0x00000000u; // 800B3A0C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[23]=c->ps1[23]=RF32(ea);} // 800B3A10
  c->r[31]=c->r[26]+0x00020000u; // 800B3A14
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[24]=c->ps1[24]=RF32(ea);} // 800B3A18
  {uint32_t ea=c->r[2]+0xFFFF878Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 800B3A1C
  {uint32_t ea=c->r[2]+0xFFFF87ACu; c->f[26]=c->ps1[26]=RF32(ea);} // 800B3A20
  {uint32_t ea=c->r[2]+0xFFFF87B0u; c->f[27]=c->ps1[27]=RF32(ea);} // 800B3A24
  {uint32_t ea=c->r[2]+0xFFFF87B4u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B3A28
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B3A2C
  {uint32_t ea=c->r[2]+0xFFFF8784u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B3A30
  {uint32_t ea=c->r[2]+0xFFFF87B8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3A34
L_800B3A38:;
  c->r[29]=0u+0x00000000u; // 800B3A38
  c->r[25]=(uint32_t)((int32_t)c->r[28]*(int32_t)480); // 800B3A3C
L_800B3A40:;
  c->r[3]=R32(c->r[31]+0xFFFFC440u); // 800B3A40
  c->r[0]=R32(c->r[31]+0xFFFFC448u); // 800B3A44
  c->r[0]=c->r[0]-c->r[3]; // 800B3A48
  c->r[0]=c->r[29]+c->r[0]; // 800B3A4C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3A50
  c->r[3]=R32(c->r[31]+0xFFFFC444u); // 800B3A54
  c->r[0]=R32(c->r[31]+0xFFFFC44Cu); // 800B3A58
  c->r[0]=c->r[0]-c->r[3]; // 800B3A5C
  c->r[0]=c->r[30]+c->r[0]; // 800B3A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3A64
  c->r[3]=c->r[27]|c->r[27]; // 800B3A68
  c->r[4]=c->r[1]+0x00000024u; // 800B3A6C
  c->r[5]=c->r[1]+0x00000010u; // 800B3A70
  c->lr=0x800B3A78u; f_8006838C(c); // 800B3A74
  c->r[3]=c->r[27]|c->r[27]; // 800B3A78
  c->r[4]=c->r[1]+0x00000010u; // 800B3A7C
  c->r[5]=0u+0x00000000u; // 800B3A80
  c->lr=0x800B3A88u; f_80067BDC(c); // 800B3A84
  cmps(c,0,(int32_t)c->r[3],0); // 800B3A88
  if (crb(c,2)) { goto L_800B3E1C; } // 800B3A8C
  c->r[0]=c->r[26]+0x00020000u; // 800B3A90
  c->r[3]=c->r[0]+c->r[25]; // 800B3A94
  c->r[23]=c->r[3]+0xFFFFC45Cu; // 800B3A98
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3A9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B3AA0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[24]);} // 800B3AA4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3AA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[25]); // 800B3AAC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B3AB0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[26]);} // 800B3AB4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[27]);} // 800B3AB8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[28]);} // 800B3ABC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[27]);} // 800B3AC0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[28]);} // 800B3AC4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[29]);} // 800B3AC8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[26]);} // 800B3ACC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[29]);} // 800B3AD0
  c->r[22]=0u+0x00000000u; // 800B3AD4
  c->r[24]=c->r[1]+0x00000030u; // 800B3AD8
L_800B3ADC:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[23]);} // 800B3ADC
  c->r[3]=c->r[23]|c->r[23]; // 800B3AE0
  c->r[4]=0u+0x00000000u; // 800B3AE4
  c->r[5]=c->r[22]|c->r[22]; // 800B3AE8
  c->r[6]=c->r[24]|c->r[24]; // 800B3AEC
  c->lr=0x800B3AF4u; f_8004D384(c); // 800B3AF0
  c->r[3]=c->r[23]|c->r[23]; // 800B3AF4
  c->r[4]=0u+0x00000000u; // 800B3AF8
  c->r[5]=c->r[22]|c->r[22]; // 800B3AFC
  c->r[6]=c->r[1]+0x00000008u; // 800B3B00
  c->lr=0x800B3B08u; f_8004D508(c); // 800B3B04
  c->r[24]=c->r[24]+0x0000000Cu; // 800B3B08
  c->r[22]=c->r[22]+0x00000001u; // 800B3B0C
  cmpu(c,0,c->r[22],0x00000004u); // 800B3B10
  if (crb(c,0)) { IRQCHK(c); goto L_800B3ADC; } // 800B3B14
  c->r[3]=c->r[23]|c->r[23]; // 800B3B18
  c->r[4]=0u+0x00000001u; // 800B3B1C
  c->lr=0x800B3B24u; f_8004D73C(c); // 800B3B20
  c->r[3]=c->r[23]|c->r[23]; // 800B3B24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3B28
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3B2C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3B30
  c->lr=0x800B3B38u; f_80070424(c); // 800B3B34
  c->r[3]=c->r[23]|c->r[23]; // 800B3B38
  c->lr=0x800B3B40u; f_8004E1AC(c); // 800B3B3C
  c->r[28]=c->r[28]+0x00000001u; // 800B3B40
  c->r[25]=c->r[25]+0x000001E0u; // 800B3B44
  c->r[3]=c->r[27]|c->r[27]; // 800B3B48
  c->r[4]=c->r[1]+0x00000010u; // 800B3B4C
  c->r[5]=0u+0x00000005u; // 800B3B50
  c->lr=0x800B3B58u; f_80067BDC(c); // 800B3B54
  cmps(c,0,(int32_t)c->r[3],0); // 800B3B58
  if (!crb(c,2)) { goto L_800B3BEC; } // 800B3B5C
  c->r[0]=c->r[26]+0x00020000u; // 800B3B60
  c->r[3]=c->r[0]+c->r[25]; // 800B3B64
  c->r[23]=c->r[3]+0xFFFFC45Cu; // 800B3B68
  c->r[22]=0u+0x00000000u; // 800B3B6C
  c->r[24]=c->r[1]+0x00000030u; // 800B3B70
L_800B3B74:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[23]);} // 800B3B74
  c->r[3]=c->r[23]|c->r[23]; // 800B3B78
  c->r[4]=0u+0x00000000u; // 800B3B7C
  c->r[5]=c->r[22]|c->r[22]; // 800B3B80
  c->r[6]=c->r[24]|c->r[24]; // 800B3B84
  c->lr=0x800B3B8Cu; f_8004D384(c); // 800B3B88
  c->r[3]=c->r[23]|c->r[23]; // 800B3B8C
  c->r[4]=0u+0x00000000u; // 800B3B90
  c->r[5]=c->r[22]|c->r[22]; // 800B3B94
  c->r[6]=c->r[1]+0x00000008u; // 800B3B98
  c->lr=0x800B3BA0u; f_8004D508(c); // 800B3B9C
  c->r[24]=c->r[24]+0x0000000Cu; // 800B3BA0
  c->r[22]=c->r[22]+0x00000001u; // 800B3BA4
  cmpu(c,0,c->r[22],0x00000004u); // 800B3BA8
  if (crb(c,0)) { IRQCHK(c); goto L_800B3B74; } // 800B3BAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3BB0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800B3BB4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B3BB8
  c->r[3]=c->r[23]|c->r[23]; // 800B3BBC
  c->r[4]=0u+0x00000001u; // 800B3BC0
  c->lr=0x800B3BC8u; f_8004D73C(c); // 800B3BC4
  c->r[3]=c->r[23]|c->r[23]; // 800B3BC8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3BCC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3BD0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3BD4
  c->lr=0x800B3BDCu; f_80070424(c); // 800B3BD8
  c->r[3]=c->r[23]|c->r[23]; // 800B3BDC
  c->lr=0x800B3BE4u; f_8004E1AC(c); // 800B3BE0
  c->r[28]=c->r[28]+0x00000001u; // 800B3BE4
  c->r[25]=c->r[25]+0x000001E0u; // 800B3BE8
L_800B3BEC:;
  c->r[0]=c->r[26]+0x00020000u; // 800B3BEC
  c->r[3]=c->r[0]+c->r[25]; // 800B3BF0
  c->r[23]=c->r[3]+0xFFFFC45Cu; // 800B3BF4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3BF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[25]); // 800B3BFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B3C00
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[24]);} // 800B3C04
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C08
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B3C0C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[27]);} // 800B3C10
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 800B3C14
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[29]);} // 800B3C18
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[31]);} // 800B3C1C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[29]);} // 800B3C20
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[25]);} // 800B3C24
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[27]);} // 800B3C28
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[25]);} // 800B3C2C
  c->r[3]=c->r[27]|c->r[27]; // 800B3C30
  c->r[4]=c->r[1]+0x00000010u; // 800B3C34
  c->r[5]=0u+0x00000001u; // 800B3C38
  c->lr=0x800B3C40u; f_80067BDC(c); // 800B3C3C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3C40
  if (crb(c,2)) { goto L_800B3C50; } // 800B3C44
  cmps(c,0,(int32_t)c->r[30],0); // 800B3C48
  if (!crb(c,2)) { goto L_800B3C68; } // 800B3C4C
L_800B3C50:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B3C54
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800B3C58
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C5C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B3C60
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800B3C64
L_800B3C68:;
  c->r[3]=c->r[27]|c->r[27]; // 800B3C68
  c->r[4]=c->r[1]+0x00000010u; // 800B3C6C
  c->r[5]=0u+0x00000005u; // 800B3C70
  c->lr=0x800B3C78u; f_80067BDC(c); // 800B3C74
  cmps(c,0,(int32_t)c->r[3],0); // 800B3C78
  if (!crb(c,2)) { goto L_800B3C98; } // 800B3C7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C80
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[29]); // 800B3C84
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B3C88
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C8C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[29]); // 800B3C90
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B3C94
L_800B3C98:;
  c->r[22]=0u+0x00000000u; // 800B3C98
  c->r[24]=c->r[1]+0x00000030u; // 800B3C9C
L_800B3CA0:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[23]);} // 800B3CA0
  c->r[3]=c->r[23]|c->r[23]; // 800B3CA4
  c->r[4]=0u+0x00000000u; // 800B3CA8
  c->r[5]=c->r[22]|c->r[22]; // 800B3CAC
  c->r[6]=c->r[24]|c->r[24]; // 800B3CB0
  c->lr=0x800B3CB8u; f_8004D384(c); // 800B3CB4
  c->r[3]=c->r[23]|c->r[23]; // 800B3CB8
  c->r[4]=0u+0x00000000u; // 800B3CBC
  c->r[5]=c->r[22]|c->r[22]; // 800B3CC0
  c->r[6]=c->r[1]+0x00000008u; // 800B3CC4
  c->lr=0x800B3CCCu; f_8004D508(c); // 800B3CC8
  c->r[24]=c->r[24]+0x0000000Cu; // 800B3CCC
  c->r[22]=c->r[22]+0x00000001u; // 800B3CD0
  cmpu(c,0,c->r[22],0x00000004u); // 800B3CD4
  if (crb(c,0)) { IRQCHK(c); goto L_800B3CA0; } // 800B3CD8
  c->r[3]=c->r[23]|c->r[23]; // 800B3CDC
  c->r[4]=0u+0x00000001u; // 800B3CE0
  c->lr=0x800B3CE8u; f_8004D73C(c); // 800B3CE4
  c->r[3]=c->r[23]|c->r[23]; // 800B3CE8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3CEC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3CF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3CF4
  c->lr=0x800B3CFCu; f_80070424(c); // 800B3CF8
  c->r[3]=c->r[23]|c->r[23]; // 800B3CFC
  c->lr=0x800B3D04u; f_8004E1AC(c); // 800B3D00
  c->r[28]=c->r[28]+0x00000001u; // 800B3D04
  c->r[25]=c->r[25]+0x000001E0u; // 800B3D08
  c->r[3]=c->r[27]|c->r[27]; // 800B3D0C
  c->r[4]=c->r[1]+0x00000010u; // 800B3D10
  c->r[5]=0u+0x00000003u; // 800B3D14
  c->lr=0x800B3D1Cu; f_80067BDC(c); // 800B3D18
  cmps(c,0,(int32_t)c->r[3],0); // 800B3D1C
  if (!crb(c,2)) { goto L_800B3E1C; } // 800B3D20
  c->r[3]=R32(c->r[1]+0x00000010u); // 800B3D24
  c->r[0]=c->r[3]+0x00000001u; // 800B3D28
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3D2C
  c->r[0]=c->r[26]+0x00020000u; // 800B3D30
  c->r[3]=c->r[0]+c->r[25]; // 800B3D34
  c->r[23]=c->r[3]+0xFFFFC45Cu; // 800B3D38
  c->r[3]=c->r[27]|c->r[27]; // 800B3D3C
  c->r[4]=c->r[1]+0x00000010u; // 800B3D40
  c->r[5]=0u+0x00000001u; // 800B3D44
  c->lr=0x800B3D4Cu; f_80067BDC(c); // 800B3D48
  cmps(c,0,(int32_t)c->r[3],0); // 800B3D4C
  if (crb(c,2)) { goto L_800B3D6C; } // 800B3D50
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D54
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[29]); // 800B3D58
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800B3D5C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D60
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[29]); // 800B3D64
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800B3D68
L_800B3D6C:;
  c->r[3]=c->r[27]|c->r[27]; // 800B3D6C
  c->r[4]=c->r[1]+0x00000010u; // 800B3D70
  c->r[5]=0u+0x00000005u; // 800B3D74
  c->lr=0x800B3D7Cu; f_80067BDC(c); // 800B3D78
  cmps(c,0,(int32_t)c->r[3],0); // 800B3D7C
  if (crb(c,2)) { goto L_800B3D9C; } // 800B3D80
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B3D88
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B3D8C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800B3D94
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B3D98
L_800B3D9C:;
  c->r[22]=0u+0x00000000u; // 800B3D9C
  c->r[24]=c->r[1]+0x00000030u; // 800B3DA0
L_800B3DA4:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[23]);} // 800B3DA4
  c->r[3]=c->r[23]|c->r[23]; // 800B3DA8
  c->r[4]=0u+0x00000000u; // 800B3DAC
  c->r[5]=c->r[22]|c->r[22]; // 800B3DB0
  c->r[6]=c->r[24]|c->r[24]; // 800B3DB4
  c->lr=0x800B3DBCu; f_8004D384(c); // 800B3DB8
  c->r[3]=c->r[23]|c->r[23]; // 800B3DBC
  c->r[4]=0u+0x00000000u; // 800B3DC0
  c->r[5]=c->r[22]|c->r[22]; // 800B3DC4
  c->r[6]=c->r[1]+0x00000008u; // 800B3DC8
  c->lr=0x800B3DD0u; f_8004D508(c); // 800B3DCC
  c->r[24]=c->r[24]+0x0000000Cu; // 800B3DD0
  c->r[22]=c->r[22]+0x00000001u; // 800B3DD4
  cmpu(c,0,c->r[22],0x00000004u); // 800B3DD8
  if (crb(c,0)) { IRQCHK(c); goto L_800B3DA4; } // 800B3DDC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3DE0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 800B3DE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B3DE8
  c->r[3]=c->r[23]|c->r[23]; // 800B3DEC
  c->r[4]=0u+0x00000001u; // 800B3DF0
  c->lr=0x800B3DF8u; f_8004D73C(c); // 800B3DF4
  c->r[3]=c->r[23]|c->r[23]; // 800B3DF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3DFC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3E00
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3E04
  c->lr=0x800B3E0Cu; f_80070424(c); // 800B3E08
  c->r[3]=c->r[23]|c->r[23]; // 800B3E0C
  c->lr=0x800B3E14u; f_8004E1AC(c); // 800B3E10
  c->r[28]=c->r[28]+0x00000001u; // 800B3E14
  c->r[25]=c->r[25]+0x000001E0u; // 800B3E18
L_800B3E1C:;
  c->r[29]=c->r[29]+0x00000001u; // 800B3E1C
  cmpu(c,0,c->r[29],0x0000000Du); // 800B3E20
  if (crb(c,0)) { IRQCHK(c); goto L_800B3A40; } // 800B3E24
  c->r[30]=c->r[30]+0x00000001u; // 800B3E28
  cmpu(c,0,c->r[30],0x0000000Du); // 800B3E2C
  if (crb(c,0)) { IRQCHK(c); goto L_800B3A38; } // 800B3E30
  c->r[3]=c->r[1]+0x00000008u; // 800B3E34
  c->r[4]=0u+0xFFFFFFFFu; // 800B3E38
  c->lr=0x800B3E40u; f_80047BD4(c); // 800B3E3C
  c->r[0]=0u+0x00000118u; // 800B3E40
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B3E44
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 800B3E48
  c->r[0]=0u+0x00000108u; // 800B3E4C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800B3E50
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 800B3E54
  c->r[0]=0u+0x000000F8u; // 800B3E58
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800B3E5C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[29]=RF64(ea);} // 800B3E60
  c->r[0]=0u+0x000000E8u; // 800B3E64
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800B3E68
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[28]=RF64(ea);} // 800B3E6C
  c->r[0]=0u+0x000000D8u; // 800B3E70
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 800B3E74
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[27]=RF64(ea);} // 800B3E78
  c->r[0]=0u+0x000000C8u; // 800B3E7C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,26,ea,0,0);} // 800B3E80
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[26]=RF64(ea);} // 800B3E84
  c->r[0]=0u+0x000000B8u; // 800B3E88
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,25,ea,0,0);} // 800B3E8C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[25]=RF64(ea);} // 800B3E90
  c->r[0]=0u+0x000000A8u; // 800B3E94
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,24,ea,0,0);} // 800B3E98
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[24]=RF64(ea);} // 800B3E9C
  c->r[0]=0u+0x00000098u; // 800B3EA0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,23,ea,0,0);} // 800B3EA4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[23]=RF64(ea);} // 800B3EA8
  c->r[11]=c->r[1]+0x00000090u; // 800B3EAC
  c->lr=0x800B3EB4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3EB0
  c->r[0]=R32(c->r[1]+0x00000124u); // 800B3EB4
  c->lr=c->r[0]; // 800B3EB8
  c->r[1]=c->r[1]+0x00000120u; // 800B3EBC
  return; // 800B3EC0
}

// fn_800B3EC4
void f_800B3EC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3EC4
  c->r[0]=c->lr; // 800B3EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3ED0
  c->r[3]=c->r[13]+0xFFFFB950u; // 800B3ED4
  c->r[4]=0u+0x00000020u; // 800B3ED8
  c->r[5]=0u+0x00000040u; // 800B3EDC
  c->r[6]=0u+0x00000060u; // 800B3EE0
  c->r[7]=0u+0x00000000u; // 800B3EE4
  c->lr=0x800B3EECu; f_8004E248(c); // 800B3EE8
  c->r[3]=c->r[13]+0xFFFFB950u; // 800B3EEC
  c->r[31]=0u+0x80040000u; // 800B3EF0
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3EF4
  c->r[5]=0u+0x804C0000u; // 800B3EF8
  c->r[5]=c->r[5]+0x00007C08u; // 800B3EFC
  c->lr=0x800B3F04u; f_802F0334(c); // 800B3F00
  c->r[3]=c->r[13]+0xFFFFB954u; // 800B3F04
  c->r[4]=0u+0x000000FFu; // 800B3F08
  c->r[5]=0u+0x000000FFu; // 800B3F0C
  c->r[6]=0u+0x000000FFu; // 800B3F10
  c->r[7]=0u+0x00000000u; // 800B3F14
  c->lr=0x800B3F1Cu; f_8004E248(c); // 800B3F18
  c->r[3]=c->r[13]+0xFFFFB954u; // 800B3F1C
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3F20
  c->r[5]=0u+0x804C0000u; // 800B3F24
  c->r[5]=c->r[5]+0x00007C14u; // 800B3F28
  c->lr=0x800B3F30u; f_802F0334(c); // 800B3F2C
  c->r[3]=c->r[13]+0xFFFFB958u; // 800B3F30
  c->r[4]=0u+0x00000060u; // 800B3F34
  c->r[5]=0u+0x000000FFu; // 800B3F38
  c->r[6]=0u+0x00000040u; // 800B3F3C
  c->r[7]=0u+0x00000000u; // 800B3F40
  c->lr=0x800B3F48u; f_8004E248(c); // 800B3F44
  c->r[3]=c->r[13]+0xFFFFB958u; // 800B3F48
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3F4C
  c->r[5]=0u+0x804C0000u; // 800B3F50
  c->r[5]=c->r[5]+0x00007C20u; // 800B3F54
  c->lr=0x800B3F5Cu; f_802F0334(c); // 800B3F58
  c->r[3]=c->r[13]+0xFFFFB95Cu; // 800B3F5C
  c->r[4]=0u+0x000000FFu; // 800B3F60
  c->r[5]=0u+0x000000FFu; // 800B3F64
  c->r[6]=0u+0x00000040u; // 800B3F68
  c->r[7]=0u+0x00000000u; // 800B3F6C
  c->lr=0x800B3F74u; f_8004E248(c); // 800B3F70
  c->r[3]=c->r[13]+0xFFFFB95Cu; // 800B3F74
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3F78
  c->r[5]=0u+0x804C0000u; // 800B3F7C
  c->r[5]=c->r[5]+0x00007C2Cu; // 800B3F80
  c->lr=0x800B3F88u; f_802F0334(c); // 800B3F84
  c->r[3]=c->r[13]+0xFFFFB960u; // 800B3F88
  c->r[4]=0u+0x000000E0u; // 800B3F8C
  c->r[5]=0u+0x00000020u; // 800B3F90
  c->r[6]=0u+0x00000020u; // 800B3F94
  c->r[7]=0u+0x00000000u; // 800B3F98
  c->lr=0x800B3FA0u; f_8004E248(c); // 800B3F9C
  c->r[3]=c->r[13]+0xFFFFB960u; // 800B3FA0
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3FA4
  c->r[5]=0u+0x804C0000u; // 800B3FA8
  c->r[5]=c->r[5]+0x00007C38u; // 800B3FAC
  c->lr=0x800B3FB4u; f_802F0334(c); // 800B3FB0
  c->r[3]=c->r[13]+0xFFFFB964u; // 800B3FB4
  c->r[4]=0u+0x00000010u; // 800B3FB8
  c->r[5]=0u+0x000000FFu; // 800B3FBC
  c->r[6]=0u+0x000000FFu; // 800B3FC0
  c->r[7]=0u+0x00000000u; // 800B3FC4
  c->lr=0x800B3FCCu; f_8004E248(c); // 800B3FC8
  c->r[3]=c->r[13]+0xFFFFB964u; // 800B3FCC
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3FD0
  c->r[5]=0u+0x804C0000u; // 800B3FD4
  c->r[5]=c->r[5]+0x00007C44u; // 800B3FD8
  c->lr=0x800B3FE0u; f_802F0334(c); // 800B3FDC
  c->r[3]=c->r[13]+0xFFFFB968u; // 800B3FE0
  c->r[4]=0u+0x000000FFu; // 800B3FE4
  c->r[5]=0u+0x000000FFu; // 800B3FE8
  c->r[6]=0u+0x000000FFu; // 800B3FEC
  c->r[7]=0u+0x00000000u; // 800B3FF0
  c->lr=0x800B3FF8u; f_8004E248(c); // 800B3FF4
  c->r[3]=c->r[13]+0xFFFFB968u; // 800B3FF8
  c->r[4]=c->r[31]+0x00007BD4u; // 800B3FFC
  c->r[5]=0u+0x804C0000u; // 800B4000
  c->r[5]=c->r[5]+0x00007C50u; // 800B4004
  c->lr=0x800B400Cu; f_802F0334(c); // 800B4008
  c->r[3]=c->r[13]+0xFFFFB96Cu; // 800B400C
  c->r[4]=0u+0x00000060u; // 800B4010
  c->r[5]=0u+0x00000040u; // 800B4014
  c->r[6]=0u+0x000000FFu; // 800B4018
  c->r[7]=0u+0x00000000u; // 800B401C
  c->lr=0x800B4024u; f_8004E248(c); // 800B4020
  c->r[3]=c->r[13]+0xFFFFB96Cu; // 800B4024
  c->r[4]=c->r[31]+0x00007BD4u; // 800B4028
  c->r[5]=0u+0x804C0000u; // 800B402C
  c->r[5]=c->r[5]+0x00007C5Cu; // 800B4030
  c->lr=0x800B4038u; f_802F0334(c); // 800B4034
  c->r[3]=c->r[13]+0xFFFFB970u; // 800B4038
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B403C
  c->f[2]=c->f[1]; // 800B4040
  c->lr=0x800B4048u; f_8004E35C(c); // 800B4044
  c->r[3]=c->r[13]+0xFFFFB978u; // 800B4048
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B404C
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4050
  c->lr=0x800B4058u; f_8004E35C(c); // 800B4054
  c->r[3]=c->r[13]+0xFFFFB980u; // 800B4058
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B405C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4060
  c->lr=0x800B4068u; f_8004E35C(c); // 800B4064
  c->r[3]=c->r[13]+0xFFFFB988u; // 800B4068
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B406C
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4070
  c->lr=0x800B4078u; f_8004E35C(c); // 800B4074
  c->r[3]=c->r[13]+0xFFFFB990u; // 800B4078
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B407C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4080
  c->lr=0x800B4088u; f_8004E35C(c); // 800B4084
  c->r[3]=c->r[13]+0xFFFFB998u; // 800B4088
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B408C
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4090
  c->lr=0x800B4098u; f_8004E35C(c); // 800B4094
  c->r[3]=c->r[13]+0xFFFFB9A0u; // 800B4098
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B409C
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B40A0
  c->lr=0x800B40A8u; f_8004E35C(c); // 800B40A4
  c->r[3]=c->r[13]+0xFFFFB9A8u; // 800B40A8
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B40AC
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B40B0
  c->lr=0x800B40B8u; f_8004E35C(c); // 800B40B4
  c->r[3]=c->r[13]+0xFFFFB9B0u; // 800B40B8
  {uint32_t ea=c->r[2]+0xFFFF8728u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B40BC
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B40C0
  c->lr=0x800B40C8u; f_8004E35C(c); // 800B40C4
  c->r[3]=c->r[13]+0xFFFFB9B8u; // 800B40C8
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B40CC
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B40D0
  c->lr=0x800B40D8u; f_8004E35C(c); // 800B40D4
  c->r[3]=c->r[13]+0xFFFFB9C0u; // 800B40D8
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B40DC
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B40E0
  c->lr=0x800B40E8u; f_8004E35C(c); // 800B40E4
  c->r[3]=c->r[13]+0xFFFFB9C8u; // 800B40E8
  {uint32_t ea=c->r[2]+0xFFFF87BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B40EC
  {uint32_t ea=c->r[2]+0xFFFF8774u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B40F0
  c->lr=0x800B40F8u; f_8004E35C(c); // 800B40F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B40F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B40FC
  c->lr=c->r[0]; // 800B4100
  c->r[1]=c->r[1]+0x00000010u; // 800B4104
  return; // 800B4108
}

// dtor_800B410C
void f_800B410C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B410C
  c->r[0]=c->lr; // 800B4110
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4114
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4118
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B411C
  c->r[30]=c->r[3]|c->r[3]; // 800B4120
  c->r[31]=c->r[4]|c->r[4]; // 800B4124
  cmps(c,0,(int32_t)c->r[3],0); // 800B4128
  if (crb(c,2)) { goto L_800B415C; } // 800B412C
  c->r[3]=c->r[3]+0x00000024u; // 800B4130
  c->r[4]=0u+0x80050000u; // 800B4134
  c->r[4]=c->r[4]+0xFFFFCE58u; // 800B4138
  c->r[5]=0u+0x000001E0u; // 800B413C
  c->r[6]=0u+0x0000016Cu; // 800B4140
  c->lr=0x800B4148u; f_802F08A8(c); // 800B4144
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B4148
  cmps(c,0,(int32_t)c->r[0],0); // 800B414C
  if (!crb(c,1)) { goto L_800B415C; } // 800B4150
  c->r[3]=c->r[30]|c->r[30]; // 800B4154
  c->lr=0x800B415Cu; f_80047B20(c); // 800B4158
L_800B415C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B415C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4160
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4164
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4168
  c->lr=c->r[0]; // 800B416C
  c->r[1]=c->r[1]+0x00000010u; // 800B4170
  return; // 800B4174
}

// dtor_800B4178
void f_800B4178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4178
  c->r[0]=c->lr; // 800B417C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4184
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4188
  c->r[30]=c->r[3]|c->r[3]; // 800B418C
  c->r[31]=c->r[4]|c->r[4]; // 800B4190
  cmps(c,0,(int32_t)c->r[3],0); // 800B4194
  if (crb(c,2)) { goto L_800B41C8; } // 800B4198
  c->r[3]=c->r[3]+0x0000003Cu; // 800B419C
  c->r[4]=0u+0x800B0000u; // 800B41A0
  c->r[4]=c->r[4]+0x000041E4u; // 800B41A4
  c->r[5]=0u+0x00000200u; // 800B41A8
  c->r[6]=0u+0x000000A9u; // 800B41AC
  c->lr=0x800B41B4u; f_802F08A8(c); // 800B41B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B41B4
  cmps(c,0,(int32_t)c->r[0],0); // 800B41B8
  if (!crb(c,1)) { goto L_800B41C8; } // 800B41BC
  c->r[3]=c->r[30]|c->r[30]; // 800B41C0
  c->lr=0x800B41C8u; f_80047B20(c); // 800B41C4
L_800B41C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800B41C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B41CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B41D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B41D4
  c->lr=c->r[0]; // 800B41D8
  c->r[1]=c->r[1]+0x00000010u; // 800B41DC
  return; // 800B41E0
}

// fn_800B41E4
void f_800B41E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B41E4
  c->r[0]=c->lr; // 800B41E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B41EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B41F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B41F4
  c->r[30]=c->r[3]|c->r[3]; // 800B41F8
  c->r[31]=c->r[4]|c->r[4]; // 800B41FC
  cmps(c,0,(int32_t)c->r[3],0); // 800B4200
  if (crb(c,2)) { goto L_800B4228; } // 800B4204
  c->r[3]=c->r[3]+0x00000014u; // 800B4208
  c->r[4]=0u+0xFFFFFFFFu; // 800B420C
  c->lr=0x800B4214u; f_8004CE58(c); // 800B4210
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B4214
  cmps(c,0,(int32_t)c->r[0],0); // 800B4218
  if (!crb(c,1)) { goto L_800B4228; } // 800B421C
  c->r[3]=c->r[30]|c->r[30]; // 800B4220
  c->lr=0x800B4228u; f_80047B20(c); // 800B4224
L_800B4228:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B422C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4230
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4234
  c->lr=c->r[0]; // 800B4238
  c->r[1]=c->r[1]+0x00000010u; // 800B423C
  return; // 800B4240
}

// fn_800B4244
void f_800B4244(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 800B4244
  return; // 800B4248
}

// fn_800B424C
void f_800B424C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B424C
  c->r[0]=c->lr; // 800B4250
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4254
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4258
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B425C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4260
  c->r[29]=c->r[3]|c->r[3]; // 800B4264
  c->r[3]=c->r[3]+0x00000008u; // 800B4268
  c->lr=0x800B4270u; f_8004B0A4(c); // 800B426C
  c->r[30]=c->r[29]+0x00000014u; // 800B4270
  c->r[31]=c->r[29]+0x0000008Cu; // 800B4274
L_800B4278:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4278
  c->lr=0x800B4280u; f_8004B0A4(c); // 800B427C
  c->r[30]=c->r[30]+0x0000000Cu; // 800B4280
  cmpu(c,0,c->r[30],c->r[31]); // 800B4284
  if (crb(c,0)) { IRQCHK(c); goto L_800B4278; } // 800B4288
  c->r[3]=c->r[31]|c->r[31]; // 800B428C
  c->r[4]=0u+0x80050000u; // 800B4290
  c->r[4]=c->r[4]+0xFFFFCDFCu; // 800B4294
  c->r[5]=0u+0x80050000u; // 800B4298
  c->r[5]=c->r[5]+0xFFFFCE58u; // 800B429C
  c->r[6]=0u+0x000001E0u; // 800B42A0
  c->r[7]=0u+0x0000000Au; // 800B42A4
  c->lr=0x800B42ACu; f_802F07B0(c); // 800B42A8
  c->r[3]=c->r[29]|c->r[29]; // 800B42AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B42B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B42B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B42B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B42BC
  c->lr=c->r[0]; // 800B42C0
  c->r[1]=c->r[1]+0x00000020u; // 800B42C4
  return; // 800B42C8
}

// fn_800B42CC
void f_800B42CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B42CC
  c->r[0]=c->lr; // 800B42D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B42D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B42D8
  c->r[31]=c->r[3]|c->r[3]; // 800B42DC
  c->r[3]=c->r[3]+0x00000018u; // 800B42E0
  c->lr=0x800B42E8u; f_8004B0A4(c); // 800B42E4
  c->r[3]=c->r[31]+0x00000024u; // 800B42E8
  c->r[4]=0u+0x80050000u; // 800B42EC
  c->r[4]=c->r[4]+0xFFFFCDFCu; // 800B42F0
  c->r[5]=0u+0x80050000u; // 800B42F4
  c->r[5]=c->r[5]+0xFFFFCE58u; // 800B42F8
  c->r[6]=0u+0x000001E0u; // 800B42FC
  c->r[7]=0u+0x0000016Cu; // 800B4300
  c->lr=0x800B4308u; f_802F07B0(c); // 800B4304
  c->r[3]=c->r[31]|c->r[31]; // 800B4308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B430C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4310
  c->lr=c->r[0]; // 800B4314
  c->r[1]=c->r[1]+0x00000010u; // 800B4318
  return; // 800B431C
}

// fn_800B4320
void f_800B4320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4320
  c->r[0]=c->lr; // 800B4324
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B432C
  c->r[31]=c->r[3]|c->r[3]; // 800B4330
  c->r[3]=c->r[3]+0x00000010u; // 800B4334
  c->lr=0x800B433Cu; f_8004B0A4(c); // 800B4338
  c->r[3]=c->r[31]+0x0000003Cu; // 800B433C
  c->r[4]=0u+0x800B0000u; // 800B4340
  c->r[4]=c->r[4]+0x00004374u; // 800B4344
  c->r[5]=0u+0x800B0000u; // 800B4348
  c->r[5]=c->r[5]+0x000041E4u; // 800B434C
  c->r[6]=0u+0x00000200u; // 800B4350
  c->r[7]=0u+0x000000A9u; // 800B4354
  c->lr=0x800B435Cu; f_802F07B0(c); // 800B4358
  c->r[3]=c->r[31]|c->r[31]; // 800B435C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4360
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4364
  c->lr=c->r[0]; // 800B4368
  c->r[1]=c->r[1]+0x00000010u; // 800B436C
  return; // 800B4370
}

// fn_800B4374
void f_800B4374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4374
  c->r[0]=c->lr; // 800B4378
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B437C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4380
  c->r[31]=c->r[3]|c->r[3]; // 800B4384
  c->r[3]=c->r[3]+0x00000014u; // 800B4388
  c->lr=0x800B4390u; f_8004CDFC(c); // 800B438C
  c->r[3]=c->r[31]+0x000001F4u; // 800B4390
  c->lr=0x800B4398u; f_8004B0A4(c); // 800B4394
  c->r[3]=c->r[31]|c->r[31]; // 800B4398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B439C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B43A0
  c->lr=c->r[0]; // 800B43A4
  c->r[1]=c->r[1]+0x00000010u; // 800B43A8
  return; // 800B43AC
}

// fn_800B43B0
void f_800B43B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B43B0
  c->r[0]=c->lr; // 800B43B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B43B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B43BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B43C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B43C4
  c->r[29]=c->r[3]|c->r[3]; // 800B43C8
  c->r[30]=c->r[4]|c->r[4]; // 800B43CC
  c->r[31]=c->r[5]|c->r[5]; // 800B43D0
  c->lr=0x800B43D8u; f_8004B0A4(c); // 800B43D4
  c->r[3]=c->r[29]|c->r[29]; // 800B43D8
  c->r[4]=c->r[30]|c->r[30]; // 800B43DC
  c->r[5]=c->r[31]|c->r[31]; // 800B43E0
  c->lr=0x800B43E8u; f_8005C194(c); // 800B43E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B43E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B43EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B43F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B43F4
  c->lr=c->r[0]; // 800B43F8
  c->r[1]=c->r[1]+0x00000020u; // 800B43FC
  return; // 800B4400
}

// fn_800B4404
void f_800B4404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4404
  c->r[0]=c->lr; // 800B4408
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B440C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4410
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4414
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4418
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B441C
  c->r[28]=c->r[3]|c->r[3]; // 800B4420
  c->r[29]=c->r[4]|c->r[4]; // 800B4424
  c->r[30]=c->r[5]|c->r[5]; // 800B4428
  c->lr=0x800B4430u; f_8004E368(c); // 800B442C
  c->r[31]=c->r[3]|c->r[3]; // 800B4430
  c->r[3]=c->r[30]|c->r[30]; // 800B4434
  c->lr=0x800B443Cu; f_800548C8(c); // 800B4438
  c->r[4]=c->r[31]|c->r[31]; // 800B443C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4440
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4444
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4448
  c->lr=0x800B4450u; f_80353CA4(c); // 800B444C
  c->r[3]=c->r[28]|c->r[28]; // 800B4450
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4454
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4458
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B445C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B4460
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4464
  c->lr=c->r[0]; // 800B4468
  c->r[1]=c->r[1]+0x00000020u; // 800B446C
  return; // 800B4470
}

// fn_800B4474
void f_800B4474(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800B4474
  c->r[3]=R32(c->r[3]+0xFFFF80D8u); // 800B4478
  return; // 800B447C
}

// fn_800B4480
void f_800B4480(Ctx* __restrict c) {
  f_802EBD54(c); return; // 800B4480
}

// fn_800B4484
void f_800B4484(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B4484
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B4488
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B448C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B4490
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B4494
  W32(c->r[3]+0x00000010u,c->r[0]); // 800B4498
  W32(c->r[3]+0x00000014u,c->r[0]); // 800B449C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800B44A0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800B44A4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B44A8
  W32(c->r[3]+0x00000024u,c->r[0]); // 800B44AC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B44B0
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800B44B4
  W32(c->r[3]+0x00000034u,c->r[0]); // 800B44B8
  W32(c->r[3]+0x00000038u,c->r[0]); // 800B44BC
  c->r[0]=0u+0x00000010u; // 800B44C0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800B44C4
  return; // 800B44C8
}

// fn_800B44CC
void f_800B44CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B44CC
  c->r[0]=c->lr; // 800B44D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B44D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B44D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B44DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B44E0
  c->r[29]=c->r[3]|c->r[3]; // 800B44E4
  c->r[30]=c->r[4]|c->r[4]; // 800B44E8
  c->r[31]=c->r[5]|c->r[5]; // 800B44EC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800B44F0
  c->r[6]=R32(c->r[4]+0x00000008u); // 800B44F4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800B44F8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800B44FC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B4500
  c->r[3]=c->r[6]+c->r[0]; // 800B4504
  c->r[4]=R32(c->r[4]+0x00000010u); // 800B4508
  c->lr=0x800B4510u; f_80089D80(c); // 800B450C
  W32(c->r[29]+0x00000004u,c->r[3]); // 800B4510
  W32(c->r[29]+0x00000008u,c->r[3]); // 800B4514
  c->r[4]=R32(c->r[30]+0x00000014u); // 800B4518
  c->r[3]=R32(c->r[30]+0x00000018u); // 800B451C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B4520
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B4524
  c->r[3]=c->r[4]+c->r[0]; // 800B4528
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 800B452C
  c->lr=0x800B4534u; f_80089D80(c); // 800B4530
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800B4534
  W32(c->r[29]+0x00000010u,c->r[3]); // 800B4538
  c->r[4]=R32(c->r[30]+0x00000020u); // 800B453C
  c->r[3]=R32(c->r[30]+0x00000024u); // 800B4540
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B4544
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B4548
  c->r[3]=c->r[4]+c->r[0]; // 800B454C
  c->r[4]=R32(c->r[30]+0x00000028u); // 800B4550
  c->lr=0x800B4558u; f_80089D80(c); // 800B4554
  W32(c->r[29]+0x00000014u,c->r[3]); // 800B4558
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800B455C
  c->r[3]=R32(c->r[30]+0x00000030u); // 800B4560
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B4564
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B4568
  c->r[3]=c->r[4]+c->r[0]; // 800B456C
  c->r[4]=R32(c->r[30]+0x00000034u); // 800B4570
  c->lr=0x800B4578u; f_80089D80(c); // 800B4574
  W32(c->r[29]+0x00000018u,c->r[3]); // 800B4578
  c->r[4]=R32(c->r[30]+0x00000038u); // 800B457C
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800B4580
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B4584
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B4588
  c->r[3]=c->r[4]+c->r[0]; // 800B458C
  c->r[4]=R32(c->r[30]+0x00000040u); // 800B4590
  c->lr=0x800B4598u; f_80089D80(c); // 800B4594
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800B4598
  c->r[4]=R32(c->r[30]+0x00000044u); // 800B459C
  c->r[3]=R32(c->r[30]+0x00000048u); // 800B45A0
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B45A4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B45A8
  c->r[3]=c->r[4]+c->r[0]; // 800B45AC
  c->r[4]=R32(c->r[30]+0x0000004Cu); // 800B45B0
  c->lr=0x800B45B8u; f_80089D80(c); // 800B45B4
  W32(c->r[29]+0x00000020u,c->r[3]); // 800B45B8
  c->r[0]=R32(c->r[30]+0x00000050u); // 800B45BC
  W32(c->r[29]+0x00000024u,c->r[0]); // 800B45C0
  c->r[0]=R32(c->r[30]+0x00000054u); // 800B45C4
  W32(c->r[29]+0x00000028u,c->r[0]); // 800B45C8
  c->r[0]=R32(c->r[30]+0x00000058u); // 800B45CC
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 800B45D0
  c->r[0]=R32(c->r[30]+0x00000068u); // 800B45D4
  W32(c->r[29]+0x00000030u,c->r[0]); // 800B45D8
  cmps(c,0,(int32_t)c->r[0],-1); // 800B45DC
  if (!crb(c,2)) { goto L_800B45EC; } // 800B45E0
  c->r[0]=0u+0x00000008u; // 800B45E4
  W32(c->r[29]+0x00000030u,c->r[0]); // 800B45E8
L_800B45EC:;
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 800B45EC
  c->r[3]=R32(c->r[30]+0x00000060u); // 800B45F0
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B45F4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800B45F8
  c->r[3]=c->r[4]+c->r[0]; // 800B45FC
  c->r[4]=R32(c->r[30]+0x00000064u); // 800B4600
  c->lr=0x800B4608u; f_80089D80(c); // 800B4604
  W32(c->r[29]+0x00000038u,c->r[3]); // 800B4608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B460C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4610
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4614
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4618
  c->lr=c->r[0]; // 800B461C
  c->r[1]=c->r[1]+0x00000020u; // 800B4620
  return; // 800B4624
}

// fn_800B4628
void f_800B4628(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B4628
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B462C
  c->r[0]=0u+0x00000001u; // 800B4630
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B4634
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B4638
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B463C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800B4640
  return; // 800B4644
}

// fn_800B4648
void f_800B4648(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B4648
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B464C
  c->r[4]=0u+0x00000001u; // 800B4650
  W32(c->r[3]+0x00000004u,c->r[4]); // 800B4654
  W32(c->r[3]+0x00000008u,c->r[4]); // 800B4658
  c->r[0]=0u+0x00000002u; // 800B465C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B4660
  W32(c->r[3]+0x00000010u,c->r[4]); // 800B4664
  return; // 800B4668
}

// fn_800B466C
void f_800B466C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B466C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B4670
  c->r[4]=0u+0x00000002u; // 800B4674
  W32(c->r[3]+0x00000004u,c->r[4]); // 800B4678
  W32(c->r[3]+0x00000008u,c->r[4]); // 800B467C
  c->r[0]=0u+0x00000001u; // 800B4680
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B4684
  W32(c->r[3]+0x00000010u,c->r[4]); // 800B4688
  return; // 800B468C
}

// fn_800B4690
void f_800B4690(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B4690
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B4694
  c->r[0]=0u+0x00000002u; // 800B4698
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B469C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B46A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B46A4
  c->r[0]=0u+0x00000001u; // 800B46A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800B46AC
  return; // 800B46B0
}

// fn_800B46B4
void f_800B46B4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B46B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B46B8
  c->r[0]=0u+0x00000001u; // 800B46BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B46C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B46C4
  c->r[0]=0u+0x00000002u; // 800B46C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B46CC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800B46D0
  return; // 800B46D4
}

// fn_800B46D8
void f_800B46D8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B46D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B46DC
  c->r[0]=0u+0x00000002u; // 800B46E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B46E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B46E8
  c->r[0]=0u+0x00000001u; // 800B46EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B46F0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800B46F4
  return; // 800B46F8
}

// fn_800B46FC
void f_800B46FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B46FC
  c->r[0]=c->lr; // 800B4700
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4708
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B470C
  c->r[30]=c->r[3]|c->r[3]; // 800B4710
  c->r[3]=c->r[3]+0x00000018u; // 800B4714
  c->lr=0x800B471Cu; f_800B4484(c); // 800B4718
  c->r[3]=c->r[30]+0x00000054u; // 800B471C
  c->lr=0x800B4724u; f_800B77A8(c); // 800B4720
  c->r[3]=c->r[30]+0x000000A8u; // 800B4724
  c->lr=0x800B472Cu; f_8008E550(c); // 800B4728
  c->r[31]=0u+0x00000000u; // 800B472C
  W32(c->r[30]+0x00000008u,c->r[31]); // 800B4730
  c->r[3]=c->r[30]+0x00000068u; // 800B4734
  c->r[4]=0u+0x00000000u; // 800B4738
  c->lr=0x800B4740u; f_8028CA58(c); // 800B473C
  c->r[3]=c->r[30]+0x00000078u; // 800B4740
  c->r[4]=0u+0x00000000u; // 800B4744
  c->lr=0x800B474Cu; f_8028CA58(c); // 800B4748
  W32(c->r[30]+0x00000074u,c->r[31]); // 800B474C
  c->r[3]=c->r[30]+0x00000084u; // 800B4750
  c->r[4]=0u+0x00000000u; // 800B4754
  c->lr=0x800B475Cu; f_8028CA58(c); // 800B4758
  W32(c->r[30]+0x00000090u,c->r[31]); // 800B475C
  c->r[3]=c->r[30]+0x00000094u; // 800B4760
  c->r[4]=0u+0x00000000u; // 800B4764
  c->lr=0x800B476Cu; f_8028CA58(c); // 800B4768
  W32(c->r[30]+0x000000A0u,c->r[31]); // 800B476C
  c->r[3]=c->r[30]+0x000000A8u; // 800B4770
  c->r[4]=0u+0x00000003u; // 800B4774
  c->lr=0x800B477Cu; f_801797EC(c); // 800B4778
  c->r[3]=c->r[30]+0x000000A8u; // 800B477C
  c->r[4]=0u+0x00000000u; // 800B4780
  c->r[5]=0u+0x00000001u; // 800B4784
  c->lr=0x800B478Cu; f_80179858(c); // 800B4788
  c->r[3]=c->r[30]+0x000000A8u; // 800B478C
  c->r[4]=0u+0x00000001u; // 800B4790
  c->r[5]=0u+0x00000001u; // 800B4794
  c->lr=0x800B479Cu; f_80179858(c); // 800B4798
  c->r[0]=0u+0xFFFFFFFFu; // 800B479C
  W32(c->r[30]+0x000000A4u,c->r[0]); // 800B47A0
  W32(c->r[30]+0x000000E0u,c->r[31]); // 800B47A4
  W32(c->r[30]+0x000000E4u,c->r[31]); // 800B47A8
  W32(c->r[30]+0x000000E8u,c->r[31]); // 800B47AC
  W32(c->r[30]+0x000000ECu,c->r[31]); // 800B47B0
  W32(c->r[30]+0x00000014u,c->r[31]); // 800B47B4
  W32(c->r[30]+0x00000104u,c->r[0]); // 800B47B8
  W32(c->r[30]+0x00000108u,c->r[0]); // 800B47BC
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800B47C0
  W32(c->r[30]+0x00000110u,c->r[0]); // 800B47C4
  c->r[3]=c->r[30]|c->r[30]; // 800B47C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B47CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B47D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B47D4
  c->lr=c->r[0]; // 800B47D8
  c->r[1]=c->r[1]+0x00000010u; // 800B47DC
  return; // 800B47E0
}

// dtor_800B47E4
void f_800B47E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B47E4
  c->r[0]=c->lr; // 800B47E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B47EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B47F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B47F4
  c->r[30]=c->r[3]|c->r[3]; // 800B47F8
  c->r[31]=c->r[4]|c->r[4]; // 800B47FC
  cmps(c,0,(int32_t)c->r[3],0); // 800B4800
  if (crb(c,2)) { goto L_800B482C; } // 800B4804
  c->lr=0x800B480Cu; f_800B4848(c); // 800B4808
  c->r[3]=c->r[30]+0x000000A8u; // 800B480C
  c->r[4]=0u+0xFFFFFFFFu; // 800B4810
  c->lr=0x800B4818u; f_8008E50C(c); // 800B4814
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B4818
  cmps(c,0,(int32_t)c->r[0],0); // 800B481C
  if (!crb(c,1)) { goto L_800B482C; } // 800B4820
  c->r[3]=c->r[30]|c->r[30]; // 800B4824
  c->lr=0x800B482Cu; f_80047B20(c); // 800B4828
L_800B482C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B482C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4830
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B4834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4838
  c->lr=c->r[0]; // 800B483C
  c->r[1]=c->r[1]+0x00000010u; // 800B4840
  return; // 800B4844
}

// fn_800B4848
void f_800B4848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4848
  c->r[0]=c->lr; // 800B484C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4854
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4858
  c->r[30]=c->r[3]|c->r[3]; // 800B485C
  c->lr=0x800B4864u; f_800B592C(c); // 800B4860
  c->r[3]=c->r[30]|c->r[30]; // 800B4864
  c->lr=0x800B486Cu; f_800B6894(c); // 800B4868
  c->r[3]=c->r[30]|c->r[30]; // 800B486C
  c->lr=0x800B4874u; f_800B6A3C(c); // 800B4870
  c->r[3]=c->r[30]|c->r[30]; // 800B4874
  c->lr=0x800B487Cu; f_800B6BC4(c); // 800B4878
  c->r[31]=c->r[3]|c->r[3]; // 800B487C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4880
  if (crb(c,2)) { goto L_800B4894; } // 800B4884
  c->lr=0x800B488Cu; f_80074E68(c); // 800B4888
  c->r[4]=c->r[31]|c->r[31]; // 800B488C
  c->lr=0x800B4894u; f_8017A3C0(c); // 800B4890
L_800B4894:;
  c->r[0]=0u+0x00000000u; // 800B4894
  W32(c->r[30]+0x000000E0u,c->r[0]); // 800B4898
  W32(c->r[30]+0x000000E4u,c->r[0]); // 800B489C
  W32(c->r[30]+0x000000E8u,c->r[0]); // 800B48A0
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800B48A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B48A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B48AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B48B0
  c->lr=c->r[0]; // 800B48B4
  c->r[1]=c->r[1]+0x00000010u; // 800B48B8
  return; // 800B48BC
}

// fn_800B48C0
void f_800B48C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B48C0
  c->r[0]=c->lr; // 800B48C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B48C8
  c->r[11]=c->r[1]+0x00000040u; // 800B48CC
  c->lr=0x800B48D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B48D0
  c->r[31]=c->r[3]|c->r[3]; // 800B48D4
  c->r[27]=c->r[5]|c->r[5]; // 800B48D8
  c->r[30]=c->r[6]|c->r[6]; // 800B48DC
  c->r[28]=c->r[7]|c->r[7]; // 800B48E0
  c->lr=0x800B48E8u; f_8006F10C(c); // 800B48E4
  c->r[3]=c->r[31]|c->r[31]; // 800B48E8
  c->r[4]=c->r[28]|c->r[28]; // 800B48EC
  c->lr=0x800B48F4u; f_8006F104(c); // 800B48F0
  c->r[3]=c->r[31]|c->r[31]; // 800B48F4
  c->lr=0x800B48FCu; f_800B5344(c); // 800B48F8
  c->r[3]=c->r[31]|c->r[31]; // 800B48FC
  c->lr=0x800B4904u; f_80089C8C(c); // 800B4900
  c->r[29]=c->r[3]|c->r[3]; // 800B4904
  c->lr=0x800B490Cu; f_800F4430(c); // 800B4908
  c->r[3]=c->r[3]+0x000005DCu; // 800B490C
  c->r[4]=c->r[29]|c->r[29]; // 800B4910
  c->lr=0x800B4918u; f_800B77F8(c); // 800B4914
  c->r[3]=c->r[31]|c->r[31]; // 800B4918
  c->lr=0x800B4920u; f_80089BCC(c); // 800B491C
  c->r[29]=c->r[3]|c->r[3]; // 800B4920
  c->lr=0x800B4928u; f_800F4430(c); // 800B4924
  c->r[3]=c->r[3]+0x000005DCu; // 800B4928
  c->r[4]=c->r[29]|c->r[29]; // 800B492C
  c->lr=0x800B4934u; f_8017384C(c); // 800B4930
  W32(c->r[31]+0x00000000u,c->r[3]); // 800B4934
  c->lr=0x800B493Cu; f_800F4430(c); // 800B4938
  c->r[3]=c->r[3]+0x000005DCu; // 800B493C
  c->r[4]=0u+0x00000000u; // 800B4940
  c->lr=0x800B4948u; f_800B77F8(c); // 800B4944
  c->r[3]=c->r[31]|c->r[31]; // 800B4948
  c->lr=0x800B4950u; f_80089C8C(c); // 800B494C
  c->r[29]=c->r[3]|c->r[3]; // 800B4950
  c->lr=0x800B4958u; f_800F4430(c); // 800B4954
  c->r[3]=c->r[3]+0x00000618u; // 800B4958
  c->r[4]=c->r[29]|c->r[29]; // 800B495C
  c->lr=0x800B4964u; f_800B77E0(c); // 800B4960
  c->r[3]=c->r[31]|c->r[31]; // 800B4964
  c->lr=0x800B496Cu; f_80089BCC(c); // 800B4968
  c->r[29]=c->r[3]|c->r[3]; // 800B496C
  c->lr=0x800B4974u; f_800F4430(c); // 800B4970
  c->r[3]=c->r[3]+0x00000618u; // 800B4974
  c->r[4]=c->r[29]|c->r[29]; // 800B4978
  c->lr=0x800B4980u; f_80213258(c); // 800B497C
  W32(c->r[31]+0x00000004u,c->r[3]); // 800B4980
  c->lr=0x800B4988u; f_800F4430(c); // 800B4984
  c->r[3]=c->r[3]+0x00000618u; // 800B4988
  c->r[4]=0u+0x00000000u; // 800B498C
  c->lr=0x800B4994u; f_800B77E0(c); // 800B4990
  c->r[3]=c->r[31]+0x00000018u; // 800B4994
  c->r[4]=R32(c->r[31]+0x00000000u); // 800B4998
  c->r[5]=c->r[27]|c->r[27]; // 800B499C
  c->lr=0x800B49A4u; f_800B44CC(c); // 800B49A0
  c->r[3]=c->r[31]|c->r[31]; // 800B49A4
  c->lr=0x800B49ACu; f_800B4B68(c); // 800B49A8
  cmps(c,0,(int32_t)c->r[30],0); // 800B49AC
  if (crb(c,2)) { goto L_800B49BC; } // 800B49B0
  c->r[3]=c->r[31]|c->r[31]; // 800B49B4
  c->lr=0x800B49BCu; f_800B6F78(c); // 800B49B8
L_800B49BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800B49BC
  c->lr=0x800B49C4u; f_800B4BD8(c); // 800B49C0
  c->r[3]=c->r[31]|c->r[31]; // 800B49C4
  c->lr=0x800B49CCu; f_800B4D24(c); // 800B49C8
  c->r[3]=c->r[31]|c->r[31]; // 800B49CC
  c->lr=0x800B49D4u; f_800B4D98(c); // 800B49D0
  c->r[3]=c->r[31]|c->r[31]; // 800B49D4
  c->lr=0x800B49DCu; f_800B4E64(c); // 800B49D8
  c->r[3]=c->r[31]|c->r[31]; // 800B49DC
  c->lr=0x800B49E4u; f_800B5060(c); // 800B49E0
  c->r[3]=c->r[31]|c->r[31]; // 800B49E4
  c->lr=0x800B49ECu; f_800B5188(c); // 800B49E8
  c->r[29]=R32(c->r[31]+0x00000000u); // 800B49EC
  c->r[3]=c->r[31]|c->r[31]; // 800B49F0
  c->lr=0x800B49F8u; f_8009F4E8(c); // 800B49F4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800B49F8
  c->r[0]=R32(c->r[29]+0x00000078u); // 800B49FC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800B4A00
  c->r[0]=R32(c->r[29]+0x00000074u); // 800B4A04
  c->r[28]=c->r[0]+c->r[3]; // 800B4A08
  c->r[3]=0u+0x00000000u; // 800B4A0C
  {uint32_t ea=c->r[2]+0xFFFF87D0u; c->f[1]=RF64(ea);} // 800B4A10
  c->r[0]=c->r[28]^0x80000000u; // 800B4A14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B4A18
  c->r[30]=0u+0x43300000u; // 800B4A1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4A20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B4A24
  c->f[1]=c->f[0]-c->f[1]; // 800B4A28
  {uint32_t ea=c->r[2]+0xFFFF87C0u; c->f[0]=RF64(ea);} // 800B4A2C
  c->f[0]=c->f[0]*c->f[1]; // 800B4A30
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B4A34
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800B4A38
  c->r[4]=R32(c->r[1]+0x00000014u); // 800B4A3C
  c->lr=0x800B4A44u; f_80089D70(c); // 800B4A40
  c->r[29]=c->r[3]|c->r[3]; // 800B4A44
  c->r[3]=0u+0x00000000u; // 800B4A48
  {uint32_t ea=c->r[2]+0xFFFF87D0u; c->f[1]=RF64(ea);} // 800B4A4C
  c->r[0]=c->r[28]^0x80000000u; // 800B4A50
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B4A54
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4A58
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800B4A5C
  c->f[1]=c->f[0]-c->f[1]; // 800B4A60
  {uint32_t ea=c->r[2]+0xFFFF87C8u; c->f[0]=RF64(ea);} // 800B4A64
  c->f[0]=c->f[0]*c->f[1]; // 800B4A68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B4A6C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800B4A70
  c->r[4]=R32(c->r[1]+0x00000024u); // 800B4A74
  c->lr=0x800B4A7Cu; f_80089D70(c); // 800B4A78
  c->r[30]=c->r[3]|c->r[3]; // 800B4A7C
  c->lr=0x800B4A84u; f_8005C538(c); // 800B4A80
  c->r[4]=c->r[29]-c->r[30]; // 800B4A84
  c->r[4]=c->r[4]+0x00000001u; // 800B4A88
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800B4A8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800B4A90
  c->r[0]=c->r[3]-c->r[0]; // 800B4A94
  c->r[0]=c->r[30]+c->r[0]; // 800B4A98
  W32(c->r[31]+0x000000E4u,c->r[0]); // 800B4A9C
  c->r[11]=c->r[1]+0x00000040u; // 800B4AA0
  c->lr=0x800B4AA8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B4AA4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B4AA8
  c->lr=c->r[0]; // 800B4AAC
  c->r[1]=c->r[1]+0x00000040u; // 800B4AB0
  return; // 800B4AB4
}

// fn_800B4AB8
void f_800B4AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4AB8
  c->r[0]=c->lr; // 800B4ABC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4AC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4AC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4AC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4ACC
  c->r[29]=c->r[3]|c->r[3]; // 800B4AD0
  c->r[30]=c->r[4]|c->r[4]; // 800B4AD4
  c->r[31]=c->r[5]|c->r[5]; // 800B4AD8
  c->lr=0x800B4AE0u; f_8006F10C(c); // 800B4ADC
  c->r[3]=c->r[29]|c->r[29]; // 800B4AE0
  c->r[4]=0u+0x00000000u; // 800B4AE4
  c->lr=0x800B4AECu; f_8006F104(c); // 800B4AE8
  c->r[3]=c->r[29]|c->r[29]; // 800B4AEC
  c->lr=0x800B4AF4u; f_800B5344(c); // 800B4AF0
  c->r[0]=0u+0x00000000u; // 800B4AF4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800B4AF8
  c->r[3]=c->r[29]|c->r[29]; // 800B4AFC
  c->r[4]=c->r[31]|c->r[31]; // 800B4B00
  c->lr=0x800B4B08u; f_80089CD8(c); // 800B4B04
  c->r[3]=c->r[29]|c->r[29]; // 800B4B08
  c->r[4]=c->r[31]|c->r[31]; // 800B4B0C
  c->lr=0x800B4B14u; f_80089C9C(c); // 800B4B10
  c->r[0]=0u+0x0000005Eu; // 800B4B14
  W32(c->r[29]+0x000000F0u,c->r[0]); // 800B4B18
  c->r[0]=0u+0x00000061u; // 800B4B1C
  W32(c->r[29]+0x000000F4u,c->r[0]); // 800B4B20
  c->r[0]=0u+0x000000EEu; // 800B4B24
  W32(c->r[29]+0x000000F8u,c->r[0]); // 800B4B28
  W32(c->r[29]+0x000000FCu,c->r[0]); // 800B4B2C
  cmpu(c,0,c->r[30],0x00000003u); // 800B4B30
  if (!crb(c,2)) { goto L_800B4B44; } // 800B4B34
  c->r[0]=0u+0x000000BEu; // 800B4B38
  W32(c->r[29]+0x00000100u,c->r[0]); // 800B4B3C
  goto L_800B4B4C; // 800B4B40
L_800B4B44:;
  c->r[0]=0u+0x0000006Eu; // 800B4B44
  W32(c->r[29]+0x00000100u,c->r[0]); // 800B4B48
L_800B4B4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4B4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4B50
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4B54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4B58
  c->lr=c->r[0]; // 800B4B5C
  c->r[1]=c->r[1]+0x00000020u; // 800B4B60
  return; // 800B4B64
}

// fn_800B4B68
void f_800B4B68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4B68
  c->r[0]=c->lr; // 800B4B6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4B70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4B74
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4B78
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4B7C
  c->r[29]=c->r[3]|c->r[3]; // 800B4B80
  c->r[0]=0u+0x00000000u; // 800B4B84
  W32(c->r[3]+0x00000074u,c->r[0]); // 800B4B88
  c->r[30]=0u+0x00000000u; // 800B4B8C
  c->r[31]=0u+0x00000000u; // 800B4B90
L_800B4B94:;
  c->r[3]=c->r[29]|c->r[29]; // 800B4B94
  c->r[4]=c->r[30]|c->r[30]; // 800B4B98
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B4B9C
  c->r[5]=c->r[0]+c->r[31]; // 800B4BA0
  c->r[5]=R32(c->r[5]+0x00000068u); // 800B4BA4
  c->lr=0x800B4BACu; f_800B54A4(c); // 800B4BA8
  c->r[31]=c->r[31]+0x00000004u; // 800B4BAC
  c->r[30]=c->r[30]+0x00000001u; // 800B4BB0
  cmps(c,0,(int32_t)c->r[30],25); // 800B4BB4
  if (crb(c,0)) { IRQCHK(c); goto L_800B4B94; } // 800B4BB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4BBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4BC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4BC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4BC8
  c->lr=c->r[0]; // 800B4BCC
  c->r[1]=c->r[1]+0x00000020u; // 800B4BD0
  return; // 800B4BD4
}

// fn_800B4BD8
void f_800B4BD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4BD8
  c->r[0]=c->lr; // 800B4BDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4BE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4BE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4BE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4BEC
  c->r[29]=c->r[3]|c->r[3]; // 800B4BF0
  c->r[0]=0u+0x00000000u; // 800B4BF4
  W32(c->r[3]+0x00000090u,c->r[0]); // 800B4BF8
  c->lr=0x800B4C00u; f_800B5308(c); // 800B4BFC
  c->r[4]=c->r[13]+0xFFFF87B0u; // 800B4C00
  c->lr=0x800B4C08u; f_802EBEB4(c); // 800B4C04
  cmps(c,0,(int32_t)c->r[3],0); // 800B4C08
  if (!crb(c,2)) { goto L_800B4CC8; } // 800B4C0C
  c->r[3]=c->r[29]|c->r[29]; // 800B4C10
  c->r[4]=0u+0x0000004Eu; // 800B4C14
  c->r[5]=0u+0x00000003u; // 800B4C18
  c->r[6]=0u+0x0000000Au; // 800B4C1C
  c->lr=0x800B4C24u; f_800B6630(c); // 800B4C20
  c->r[3]=c->r[29]|c->r[29]; // 800B4C24
  c->r[4]=0u+0x0000004Fu; // 800B4C28
  c->r[5]=0u+0x0000000Eu; // 800B4C2C
  c->r[6]=0u+0x0000000Au; // 800B4C30
  c->lr=0x800B4C38u; f_800B6630(c); // 800B4C34
  c->r[3]=c->r[29]|c->r[29]; // 800B4C38
  c->r[4]=0u+0x00000050u; // 800B4C3C
  c->r[5]=0u+0x00000003u; // 800B4C40
  c->r[6]=0u+0x0000000Au; // 800B4C44
  c->lr=0x800B4C4Cu; f_800B6630(c); // 800B4C48
  c->r[3]=c->r[29]|c->r[29]; // 800B4C4C
  c->r[4]=0u+0x00000051u; // 800B4C50
  c->r[5]=0u+0x00000010u; // 800B4C54
  c->r[6]=0u+0x0000000Au; // 800B4C58
  c->lr=0x800B4C60u; f_800B6630(c); // 800B4C5C
  c->r[3]=c->r[29]|c->r[29]; // 800B4C60
  c->r[4]=0u+0x00000052u; // 800B4C64
  c->r[5]=0u+0x00000011u; // 800B4C68
  c->r[6]=0u+0x0000000Au; // 800B4C6C
  c->lr=0x800B4C74u; f_800B6630(c); // 800B4C70
  c->r[3]=c->r[29]|c->r[29]; // 800B4C74
  c->r[4]=0u+0x00000053u; // 800B4C78
  c->r[5]=0u+0x00000012u; // 800B4C7C
  c->r[6]=0u+0x0000000Au; // 800B4C80
  c->lr=0x800B4C88u; f_800B6630(c); // 800B4C84
  c->r[3]=c->r[29]|c->r[29]; // 800B4C88
  c->r[4]=0u+0x00000054u; // 800B4C8C
  c->r[5]=0u+0x00000013u; // 800B4C90
  c->r[6]=0u+0x0000000Au; // 800B4C94
  c->lr=0x800B4C9Cu; f_800B6630(c); // 800B4C98
  c->r[3]=c->r[29]|c->r[29]; // 800B4C9C
  c->r[4]=0u+0x00000055u; // 800B4CA0
  c->r[5]=0u+0x00000014u; // 800B4CA4
  c->r[6]=0u+0x00000064u; // 800B4CA8
  c->lr=0x800B4CB0u; f_800B6630(c); // 800B4CAC
  c->r[3]=c->r[29]|c->r[29]; // 800B4CB0
  c->r[4]=0u+0x00000056u; // 800B4CB4
  c->r[5]=0u+0x0000000Cu; // 800B4CB8
  c->r[6]=0u+0x0000000Au; // 800B4CBC
  c->lr=0x800B4CC4u; f_800B6630(c); // 800B4CC0
  goto L_800B4D08; // 800B4CC4
L_800B4CC8:;
  c->r[30]=0u+0x00000000u; // 800B4CC8
  c->r[31]=0u+0x00000000u; // 800B4CCC
L_800B4CD0:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B4CD0
  c->r[6]=c->r[0]+c->r[31]; // 800B4CD4
  c->r[4]=R32(c->r[6]+0x00000008u); // 800B4CD8
  cmps(c,0,(int32_t)c->r[4],-1); // 800B4CDC
  if (crb(c,2)) { goto L_800B4CF8; } // 800B4CE0
  c->r[3]=c->r[29]|c->r[29]; // 800B4CE4
  c->r[5]=R32(c->r[6]+0x00000038u); // 800B4CE8
  c->r[5]=c->r[5]+0x0000000Cu; // 800B4CEC
  c->r[6]=R32(c->r[6]+0x00000020u); // 800B4CF0
  c->lr=0x800B4CF8u; f_800B6630(c); // 800B4CF4
L_800B4CF8:;
  c->r[31]=c->r[31]+0x00000004u; // 800B4CF8
  c->r[30]=c->r[30]+0x00000001u; // 800B4CFC
  cmps(c,0,(int32_t)c->r[30],6); // 800B4D00
  if (crb(c,0)) { IRQCHK(c); goto L_800B4CD0; } // 800B4D04
L_800B4D08:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4D08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4D0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4D10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4D14
  c->lr=c->r[0]; // 800B4D18
  c->r[1]=c->r[1]+0x00000020u; // 800B4D1C
  return; // 800B4D20
}

// fn_800B4D24
void f_800B4D24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4D24
  c->r[0]=c->lr; // 800B4D28
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4D2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B4D30
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B4D34
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B4D38
  c->r[29]=c->r[3]|c->r[3]; // 800B4D3C
  c->r[0]=0u+0x00000000u; // 800B4D40
  W32(c->r[3]+0x000000A0u,c->r[0]); // 800B4D44
  c->r[30]=0u+0x00000000u; // 800B4D48
  c->r[31]=0u+0x00000000u; // 800B4D4C
L_800B4D50:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B4D50
  c->r[3]=c->r[0]+c->r[31]; // 800B4D54
  c->r[4]=R32(c->r[3]+0x00000050u); // 800B4D58
  cmps(c,0,(int32_t)c->r[4],-1); // 800B4D5C
  if (crb(c,2)) { goto L_800B4D6C; } // 800B4D60
  c->r[3]=c->r[29]|c->r[29]; // 800B4D64
  c->lr=0x800B4D6Cu; f_800B6938(c); // 800B4D68
L_800B4D6C:;
  c->r[31]=c->r[31]+0x00000004u; // 800B4D6C
  c->r[30]=c->r[30]+0x00000001u; // 800B4D70
  cmps(c,0,(int32_t)c->r[30],6); // 800B4D74
  if (crb(c,0)) { IRQCHK(c); goto L_800B4D50; } // 800B4D78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B4D7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B4D80
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B4D84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4D88
  c->lr=c->r[0]; // 800B4D8C
  c->r[1]=c->r[1]+0x00000020u; // 800B4D90
  return; // 800B4D94
}

// fn_800B4D98
void f_800B4D98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4D98
  c->r[0]=c->lr; // 800B4D9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4DA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4DA4
  c->r[31]=c->r[3]|c->r[3]; // 800B4DA8
  c->r[4]=0u+0x00000008u; // 800B4DAC
  c->lr=0x800B4DB4u; f_800B69CC(c); // 800B4DB0
  cmps(c,0,(int32_t)c->r[3],0); // 800B4DB4
  if (crb(c,2)) { goto L_800B4DC8; } // 800B4DB8
  c->r[3]=c->r[31]+0x00000054u; // 800B4DBC
  c->lr=0x800B4DC4u; f_800B4648(c); // 800B4DC0
  goto L_800B4E50; // 800B4DC4
L_800B4DC8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4DC8
  c->r[4]=0u+0x00000007u; // 800B4DCC
  c->lr=0x800B4DD4u; f_800B69CC(c); // 800B4DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800B4DD4
  if (crb(c,2)) { goto L_800B4DE8; } // 800B4DD8
  c->r[3]=c->r[31]+0x00000054u; // 800B4DDC
  c->lr=0x800B4DE4u; f_800B466C(c); // 800B4DE0
  goto L_800B4E50; // 800B4DE4
L_800B4DE8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4DE8
  c->r[4]=0u+0x00000009u; // 800B4DEC
  c->lr=0x800B4DF4u; f_800B69CC(c); // 800B4DF0
  cmps(c,0,(int32_t)c->r[3],0); // 800B4DF4
  if (crb(c,2)) { goto L_800B4E08; } // 800B4DF8
  c->r[3]=c->r[31]+0x00000054u; // 800B4DFC
  c->lr=0x800B4E04u; f_800B4690(c); // 800B4E00
  goto L_800B4E50; // 800B4E04
L_800B4E08:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4E08
  c->r[4]=0u+0x0000000Bu; // 800B4E0C
  c->lr=0x800B4E14u; f_800B69CC(c); // 800B4E10
  cmps(c,0,(int32_t)c->r[3],0); // 800B4E14
  if (crb(c,2)) { goto L_800B4E28; } // 800B4E18
  c->r[3]=c->r[31]+0x00000054u; // 800B4E1C
  c->lr=0x800B4E24u; f_800B46B4(c); // 800B4E20
  goto L_800B4E50; // 800B4E24
L_800B4E28:;
  c->r[3]=c->r[31]|c->r[31]; // 800B4E28
  c->r[4]=0u+0x0000000Au; // 800B4E2C
  c->lr=0x800B4E34u; f_800B69CC(c); // 800B4E30
  cmps(c,0,(int32_t)c->r[3],0); // 800B4E34
  if (crb(c,2)) { goto L_800B4E48; } // 800B4E38
  c->r[3]=c->r[31]+0x00000054u; // 800B4E3C
  c->lr=0x800B4E44u; f_800B46D8(c); // 800B4E40
  goto L_800B4E50; // 800B4E44
L_800B4E48:;
  c->r[3]=c->r[31]+0x00000054u; // 800B4E48
  c->lr=0x800B4E50u; f_800B4628(c); // 800B4E4C
L_800B4E50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4E50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4E54
  c->lr=c->r[0]; // 800B4E58
  c->r[1]=c->r[1]+0x00000010u; // 800B4E5C
  return; // 800B4E60
}

// fn_800B4E64
void f_800B4E64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4E64
  c->r[0]=c->lr; // 800B4E68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B4E6C
  c->r[11]=c->r[1]+0x00000020u; // 800B4E70
  c->lr=0x800B4E78u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B4E74
  c->r[27]=c->r[3]|c->r[3]; // 800B4E78
  c->r[0]=0u+0xFFFFFFFFu; // 800B4E7C
  W32(c->r[3]+0x000000A4u,c->r[0]); // 800B4E80
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B4E84
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 800B4E88
  c->r[4]=0u+0x00000000u; // 800B4E8C
  c->lr=0x800B4E94u; f_800AB9B0(c); // 800B4E90
  cmps(c,0,(int32_t)c->r[3],0); // 800B4E94
  if (crb(c,2)) { goto L_800B4EA8; } // 800B4E98
  c->r[29]=0u+0xFFFFFFFFu; // 800B4E9C
  c->r[28]=0u+0x00000000u; // 800B4EA0
  goto L_800B4EB4; // 800B4EA4
L_800B4EA8:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800B4EA8
  c->r[29]=R32(c->r[3]+0x0000008Cu); // 800B4EAC
  c->r[28]=R32(c->r[3]+0x00000090u); // 800B4EB0
L_800B4EB4:;
  c->r[5]=R32(c->r[27]+0x00000000u); // 800B4EB4
  c->r[3]=R32(c->r[5]+0x00000088u); // 800B4EB8
  cmps(c,0,(int32_t)c->r[3],0); // 800B4EBC
  if (!crb(c,2)) { goto L_800B4F04; } // 800B4EC0
  cmps(c,0,(int32_t)c->r[28],0); // 800B4EC4
  if (!crb(c,2)) { goto L_800B4F04; } // 800B4EC8
  c->lr=0x800B4ED0u; f_8007B524(c); // 800B4ECC
  c->lr=0x800B4ED4u; f_800A19D4(c); // 800B4ED0
  c->r[31]=c->r[3]|c->r[3]; // 800B4ED4
  c->lr=0x800B4EDCu; f_800F4430(c); // 800B4ED8
  c->r[3]=c->r[3]+0x00000654u; // 800B4EDC
  c->r[4]=0u+0x00000000u; // 800B4EE0
  c->lr=0x800B4EE8u; f_80258ECC(c); // 800B4EE4
  c->r[30]=R32(c->r[3]+0x00000018u); // 800B4EE8
  c->r[3]=R32(c->r[27]+0x00000000u); // 800B4EEC
  c->r[0]=R32(c->r[3]+0x00000080u); // 800B4EF0
  c->r[3]=R32(c->r[3]+0x00000070u); // 800B4EF4
  c->r[0]=c->r[0]+c->r[30]; // 800B4EF8
  c->r[26]=c->r[3]+c->r[0]; // 800B4EFC
  goto L_800B4F20; // 800B4F00
L_800B4F04:;
  c->r[31]=0u+0xFFFFFFFFu; // 800B4F04
  c->r[30]=0u+0x00000000u; // 800B4F08
  c->r[4]=R32(c->r[5]+0x00000080u); // 800B4F0C
  c->r[0]=R32(c->r[5]+0x00000070u); // 800B4F10
  c->r[3]=c->r[3]+c->r[28]; // 800B4F14
  c->r[0]=c->r[4]+c->r[0]; // 800B4F18
  c->r[26]=c->r[3]+c->r[0]; // 800B4F1C
L_800B4F20:;
  c->lr=0x800B4F24u; f_8005C538(c); // 800B4F20
  c->r[4]=0u+0x51EC0000u; // 800B4F24
  c->r[0]=c->r[4]+0xFFFF851Fu; // 800B4F28
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800B4F2C
  c->r[0]=sraw(c,c->r[0],5); // 800B4F30
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B4F34
  c->r[0]=c->r[0]+c->r[4]; // 800B4F38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800B4F3C
  c->r[3]=c->r[3]-c->r[0]; // 800B4F40
  c->r[5]=c->r[3]+0x00000001u; // 800B4F44
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[26]); // 800B4F48
  if (crb(c,1)) { goto L_800B5048; } // 800B4F4C
  c->r[5]=c->r[5]-c->r[30]; // 800B4F50
  cmps(c,0,(int32_t)c->r[5],0); // 800B4F54
  if (crb(c,1)) { goto L_800B4F7C; } // 800B4F58
  c->r[0]=c->r[31]+0x00010000u; // 800B4F5C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B4F60
  if (crb(c,2)) { goto L_800B4F78; } // 800B4F64
  c->r[3]=c->r[27]|c->r[27]; // 800B4F68
  c->r[4]=c->r[31]|c->r[31]; // 800B4F6C
  c->lr=0x800B4F74u; f_800B6AE0(c); // 800B4F70
  goto L_800B5048; // 800B4F74
L_800B4F78:;
  c->r[5]=c->r[5]+c->r[30]; // 800B4F78
L_800B4F7C:;
  c->r[30]=R32(c->r[27]+0x00000000u); // 800B4F7C
  c->r[0]=R32(c->r[30]+0x00000088u); // 800B4F80
  c->r[5]=c->r[5]-c->r[0]; // 800B4F84
  cmps(c,0,(int32_t)c->r[5],0); // 800B4F88
  if (crb(c,1)) { goto L_800B4FAC; } // 800B4F8C
  c->r[4]=R32(c->r[30]+0x00000084u); // 800B4F90
  cmps(c,0,(int32_t)c->r[4],-1); // 800B4F94
  if (crb(c,2)) { goto L_800B4FA8; } // 800B4F98
  c->r[3]=c->r[27]|c->r[27]; // 800B4F9C
  c->lr=0x800B4FA4u; f_800B6AE0(c); // 800B4FA0
  goto L_800B5048; // 800B4FA4
L_800B4FA8:;
  c->r[5]=c->r[5]+c->r[0]; // 800B4FA8
L_800B4FAC:;
  c->r[5]=c->r[5]-c->r[28]; // 800B4FAC
  cmps(c,0,(int32_t)c->r[5],0); // 800B4FB0
  if (crb(c,1)) { goto L_800B4FD8; } // 800B4FB4
  c->r[0]=c->r[29]+0x00010000u; // 800B4FB8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B4FBC
  if (crb(c,2)) { goto L_800B4FD4; } // 800B4FC0
  c->r[3]=c->r[27]|c->r[27]; // 800B4FC4
  c->r[4]=c->r[29]|c->r[29]; // 800B4FC8
  c->lr=0x800B4FD0u; f_800B6AE0(c); // 800B4FCC
  goto L_800B5048; // 800B4FD0
L_800B4FD4:;
  c->r[5]=c->r[5]+c->r[28]; // 800B4FD4
L_800B4FD8:;
  c->r[3]=R32(c->r[30]+0x00000070u); // 800B4FD8
  c->r[5]=c->r[5]-c->r[3]; // 800B4FDC
  cmps(c,0,(int32_t)c->r[5],0); // 800B4FE0
  if (crb(c,1)) { goto L_800B5008; } // 800B4FE4
  c->r[0]=R32(c->r[30]+0x0000006Cu); // 800B4FE8
  cmps(c,0,(int32_t)c->r[0],0); // 800B4FEC
  if (!crb(c,1)) { goto L_800B5004; } // 800B4FF0
  c->r[3]=c->r[27]|c->r[27]; // 800B4FF4
  c->r[4]=0u+0x000001F7u; // 800B4FF8
  c->lr=0x800B5000u; f_800B6AE0(c); // 800B4FFC
  goto L_800B5048; // 800B5000
L_800B5004:;
  c->r[5]=c->r[5]+c->r[3]; // 800B5004
L_800B5008:;
  c->r[0]=R32(c->r[30]+0x00000080u); // 800B5008
  c->r[5]=c->r[5]-c->r[0]; // 800B500C
  cmps(c,0,(int32_t)c->r[5],0); // 800B5010
  if (crb(c,1)) { goto L_800B5048; } // 800B5014
  c->r[3]=c->r[27]|c->r[27]; // 800B5018
  c->lr=0x800B5020u; f_8009F4E8(c); // 800B501C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800B5020
  c->r[0]=R32(c->r[30]+0x00000078u); // 800B5024
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800B5028
  c->r[0]=R32(c->r[30]+0x00000074u); // 800B502C
  c->r[0]=c->r[0]+c->r[3]; // 800B5030
  cmps(c,0,(int32_t)c->r[0],0); // 800B5034
  if (!crb(c,1)) { goto L_800B5048; } // 800B5038
  c->r[3]=c->r[27]|c->r[27]; // 800B503C
  c->r[4]=0u+0x000001F6u; // 800B5040
  c->lr=0x800B5048u; f_800B6AE0(c); // 800B5044
L_800B5048:;
  c->r[11]=c->r[1]+0x00000020u; // 800B5048
  c->lr=0x800B5050u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B504C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5050
  c->lr=c->r[0]; // 800B5054
  c->r[1]=c->r[1]+0x00000020u; // 800B5058
  return; // 800B505C
}

// fn_800B5060
void f_800B5060(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B5060
  c->r[0]=R32(c->r[4]+0x000000E0u); // 800B5064
  cmps(c,0,(int32_t)c->r[0],1); // 800B5068
  if (crb(c,2)) { goto L_800B50A0; } // 800B506C
  if (!crb(c,0)) { goto L_800B5080; } // 800B5070
  cmps(c,0,(int32_t)c->r[0],0); // 800B5074
  if (!crb(c,0)) { goto L_800B508C; } // 800B5078
  goto L_800B50C4; // 800B507C
L_800B5080:;
  cmps(c,0,(int32_t)c->r[0],3); // 800B5080
  if (!crb(c,0)) { goto L_800B50C4; } // 800B5084
  goto L_800B50B4; // 800B5088
L_800B508C:;
  c->r[0]=0u+0x0000005Eu; // 800B508C
  W32(c->r[3]+0x000000F0u,c->r[0]); // 800B5090
  c->r[0]=0u+0x00000061u; // 800B5094
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800B5098
  goto L_800B50C4; // 800B509C
L_800B50A0:;
  c->r[0]=0u+0x0000005Fu; // 800B50A0
  W32(c->r[3]+0x000000F0u,c->r[0]); // 800B50A4
  c->r[0]=0u+0x00000062u; // 800B50A8
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800B50AC
  goto L_800B50C4; // 800B50B0
L_800B50B4:;
  c->r[0]=0u+0x00000060u; // 800B50B4
  W32(c->r[3]+0x000000F0u,c->r[0]); // 800B50B8
  c->r[0]=0u+0x00000063u; // 800B50BC
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800B50C0
L_800B50C4:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B50C4
  c->r[0]=R32(c->r[4]+0x000000E4u); // 800B50C8
  cmps(c,0,(int32_t)c->r[0],1); // 800B50CC
  if (crb(c,2)) { goto L_800B5104; } // 800B50D0
  if (!crb(c,0)) { goto L_800B50E4; } // 800B50D4
  cmps(c,0,(int32_t)c->r[0],0); // 800B50D8
  if (!crb(c,0)) { goto L_800B50F0; } // 800B50DC
  goto L_800B5128; // 800B50E0
L_800B50E4:;
  cmps(c,0,(int32_t)c->r[0],3); // 800B50E4
  if (!crb(c,0)) { goto L_800B5128; } // 800B50E8
  goto L_800B5118; // 800B50EC
L_800B50F0:;
  c->r[0]=0u+0x00000064u; // 800B50F0
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B50F4
  c->r[0]=0u+0x00000067u; // 800B50F8
  W32(c->r[3]+0x000000FCu,c->r[0]); // 800B50FC
  goto L_800B5128; // 800B5100
L_800B5104:;
  c->r[0]=0u+0x00000065u; // 800B5104
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B5108
  c->r[0]=0u+0x00000068u; // 800B510C
  W32(c->r[3]+0x000000FCu,c->r[0]); // 800B5110
  goto L_800B5128; // 800B5114
L_800B5118:;
  c->r[0]=0u+0x00000066u; // 800B5118
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B511C
  c->r[0]=0u+0x00000069u; // 800B5120
  W32(c->r[3]+0x000000FCu,c->r[0]); // 800B5124
L_800B5128:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800B5128
  c->r[0]=R32(c->r[4]+0x000000E8u); // 800B512C
  cmps(c,0,(int32_t)c->r[0],2); // 800B5130
  if (crb(c,2)) { goto L_800B5170; } // 800B5134
  if (!crb(c,0)) { goto L_800B514C; } // 800B5138
  cmps(c,0,(int32_t)c->r[0],0); // 800B513C
  if (crb(c,2)) { goto L_800B5158; } // 800B5140
  if (!crb(c,0)) { goto L_800B5164; } // 800B5144
  return; // 800B5148
L_800B514C:;
  cmps(c,0,(int32_t)c->r[0],4); // 800B514C
  if (!crb(c,0)) return; // 800B5150
  goto L_800B517C; // 800B5154
L_800B5158:;
  c->r[0]=0u+0x0000006Bu; // 800B5158
  W32(c->r[3]+0x00000100u,c->r[0]); // 800B515C
  return; // 800B5160
L_800B5164:;
  c->r[0]=0u+0x0000006Cu; // 800B5164
  W32(c->r[3]+0x00000100u,c->r[0]); // 800B5168
  return; // 800B516C
L_800B5170:;
  c->r[0]=0u+0x0000006Du; // 800B5170
  W32(c->r[3]+0x00000100u,c->r[0]); // 800B5174
  return; // 800B5178
L_800B517C:;
  c->r[0]=0u+0x0000006Eu; // 800B517C
  W32(c->r[3]+0x00000100u,c->r[0]); // 800B5180
  return; // 800B5184
}

// fn_800B5188
void f_800B5188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5188
  c->r[0]=c->lr; // 800B518C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5194
  c->r[31]=c->r[3]|c->r[3]; // 800B5198
  c->lr=0x800B51A0u; f_800B5308(c); // 800B519C
  c->r[4]=c->r[13]+0xFFFF87B8u; // 800B51A0
  c->r[5]=0u+0x00000004u; // 800B51A4
  c->lr=0x800B51ACu; f_802EBF5C(c); // 800B51A8
  cmps(c,0,(int32_t)c->r[3],0); // 800B51AC
  if (!crb(c,2)) { goto L_800B51C4; } // 800B51B0
  c->r[0]=0u+0x000000BAu; // 800B51B4
  W32(c->r[31]+0x00000108u,c->r[0]); // 800B51B8
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B51BC
  goto L_800B52F4; // 800B51C0
L_800B51C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B51C4
  c->lr=0x800B51CCu; f_800B5308(c); // 800B51C8
  c->r[4]=c->r[13]+0xFFFF87C0u; // 800B51CC
  c->r[5]=0u+0x00000004u; // 800B51D0
  c->lr=0x800B51D8u; f_802EBF5C(c); // 800B51D4
  cmps(c,0,(int32_t)c->r[3],0); // 800B51D8
  if (!crb(c,2)) { goto L_800B5200; } // 800B51DC
  c->r[0]=0u+0x0000004Au; // 800B51E0
  W32(c->r[31]+0x00000104u,c->r[0]); // 800B51E4
  c->r[0]=0u+0xFFFFFFFEu; // 800B51E8
  W32(c->r[31]+0x00000108u,c->r[0]); // 800B51EC
  c->r[0]=0u+0x00000093u; // 800B51F0
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 800B51F4
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B51F8
  goto L_800B52F4; // 800B51FC
L_800B5200:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5200
  c->lr=0x800B5208u; f_800B5308(c); // 800B5204
  c->r[4]=c->r[13]+0xFFFF87C8u; // 800B5208
  c->r[5]=0u+0x00000004u; // 800B520C
  c->lr=0x800B5214u; f_802EBF5C(c); // 800B5210
  cmps(c,0,(int32_t)c->r[3],0); // 800B5214
  if (!crb(c,2)) { goto L_800B5228; } // 800B5218
  c->r[0]=0u+0xFFFFFFFEu; // 800B521C
  W32(c->r[31]+0x00000108u,c->r[0]); // 800B5220
  goto L_800B52F4; // 800B5224
L_800B5228:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5228
  c->lr=0x800B5230u; f_80089BCC(c); // 800B522C
  cmpu(c,0,c->r[3],0x0000019Au); // 800B5230
  if (!crb(c,2)) { goto L_800B5250; } // 800B5234
  c->r[0]=0u+0x000000F8u; // 800B5238
  W32(c->r[31]+0x00000108u,c->r[0]); // 800B523C
  c->r[0]=0u+0xFFFFFFFEu; // 800B5240
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 800B5244
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B5248
  goto L_800B52F4; // 800B524C
L_800B5250:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5250
  c->lr=0x800B5258u; f_800B5308(c); // 800B5254
  c->r[4]=c->r[13]+0xFFFF87D0u; // 800B5258
  c->r[5]=0u+0x00000004u; // 800B525C
  c->lr=0x800B5264u; f_802EBF5C(c); // 800B5260
  cmps(c,0,(int32_t)c->r[3],0); // 800B5264
  if (!crb(c,2)) { goto L_800B5278; } // 800B5268
  c->r[0]=0u+0x000000BEu; // 800B526C
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B5270
  goto L_800B52F4; // 800B5274
L_800B5278:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5278
  c->lr=0x800B5280u; f_800B5308(c); // 800B527C
  c->r[4]=c->r[13]+0xFFFF87D8u; // 800B5280
  c->r[5]=0u+0x00000004u; // 800B5284
  c->lr=0x800B528Cu; f_802EBF5C(c); // 800B5288
  cmps(c,0,(int32_t)c->r[3],0); // 800B528C
  if (!crb(c,2)) { goto L_800B52B8; } // 800B5290
  c->r[0]=0u+0x000000DEu; // 800B5294
  W32(c->r[31]+0x00000104u,c->r[0]); // 800B5298
  c->r[0]=0u+0x000000DFu; // 800B529C
  W32(c->r[31]+0x00000108u,c->r[0]); // 800B52A0
  c->r[0]=0u+0x00000090u; // 800B52A4
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 800B52A8
  c->r[0]=0u+0x000000CCu; // 800B52AC
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B52B0
  goto L_800B52F4; // 800B52B4
L_800B52B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B52B8
  c->lr=0x800B52C0u; f_800B5308(c); // 800B52BC
  c->r[4]=c->r[13]+0xFFFF87E0u; // 800B52C0
  c->r[5]=0u+0x00000004u; // 800B52C4
  c->lr=0x800B52CCu; f_802EBF5C(c); // 800B52C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B52CC
  if (!crb(c,2)) { goto L_800B52F4; } // 800B52D0
  c->r[0]=0u+0x0000002Fu; // 800B52D4
  W32(c->r[31]+0x00000104u,c->r[0]); // 800B52D8
  c->r[0]=0u+0x00000038u; // 800B52DC
  W32(c->r[31]+0x00000108u,c->r[0]); // 800B52E0
  c->r[0]=0u+0x0000008Bu; // 800B52E4
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 800B52E8
  c->r[0]=0u+0xFFFFFFFEu; // 800B52EC
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B52F0
L_800B52F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B52F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B52F8
  c->lr=c->r[0]; // 800B52FC
  c->r[1]=c->r[1]+0x00000010u; // 800B5300
  return; // 800B5304
}

// fn_800B5308
void f_800B5308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5308
  c->r[0]=c->lr; // 800B530C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5314
  c->lr=0x800B531Cu; f_80089BCC(c); // 800B5318
  c->r[31]=c->r[3]|c->r[3]; // 800B531C
  c->lr=0x800B5324u; f_800F4430(c); // 800B5320
  c->r[3]=c->r[3]+0x00000528u; // 800B5324
  c->r[4]=c->r[31]|c->r[31]; // 800B5328
  c->lr=0x800B5330u; f_802131E8(c); // 800B532C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5330
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5334
  c->lr=c->r[0]; // 800B5338
  c->r[1]=c->r[1]+0x00000010u; // 800B533C
  return; // 800B5340
}

// fn_800B5344
void f_800B5344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5344
  c->r[0]=c->lr; // 800B5348
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B534C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B5350
  c->r[31]=c->r[3]|c->r[3]; // 800B5354
  c->lr=0x800B535Cu; f_800B5308(c); // 800B5358
  c->r[4]=0u+0x80460000u; // 800B535C
  c->r[4]=c->r[4]+0xFFFFFF28u; // 800B5360
  c->r[5]=c->r[1]+0x00000010u; // 800B5364
  c->r[6]=c->r[1]+0x00000008u; // 800B5368
  c->r[7]=c->r[1]+0x0000000Cu; // 800B536C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B5370
  c->lr=0x800B5378u; f_802E93D0(c); // 800B5374
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800B5378
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800B537C
  W16(c->r[31]+0x00000010u,c->r[0]); // 800B5380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B5384
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5388
  c->lr=c->r[0]; // 800B538C
  c->r[1]=c->r[1]+0x00000020u; // 800B5390
  return; // 800B5394
}

// fn_800B5398
void f_800B5398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5398
  c->r[0]=c->lr; // 800B539C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B53A0
  cmps(c,0,(int32_t)c->r[3],-1); // 800B53A4
  if (!crb(c,2)) { goto L_800B53C0; } // 800B53A8
  c->lr=0x800B53B0u; f_800F4430(c); // 800B53AC
  c->r[3]=c->r[3]+0x00000654u; // 800B53B0
  c->r[4]=0u+0x00000000u; // 800B53B4
  c->lr=0x800B53BCu; f_80258ECC(c); // 800B53B8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B53BC
L_800B53C0:;
  W32(c->r[13]+0xFFFF87A8u,c->r[3]); // 800B53C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B53C4
  c->lr=c->r[0]; // 800B53C8
  c->r[1]=c->r[1]+0x00000010u; // 800B53CC
  return; // 800B53D0
}

// fn_800B53D4
void f_800B53D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B53D4
  c->r[0]=c->lr; // 800B53D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B53DC
  cmps(c,0,(int32_t)c->r[3],-1); // 800B53E0
  if (!crb(c,2)) { goto L_800B53FC; } // 800B53E4
  c->lr=0x800B53ECu; f_800F4430(c); // 800B53E8
  c->r[3]=c->r[3]+0x00000654u; // 800B53EC
  c->r[4]=0u+0x00000000u; // 800B53F0
  c->lr=0x800B53F8u; f_80258ECC(c); // 800B53F4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800B53F8
L_800B53FC:;
  W32(c->r[13]+0xFFFF87ACu,c->r[3]); // 800B53FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5400
  c->lr=c->r[0]; // 800B5404
  c->r[1]=c->r[1]+0x00000010u; // 800B5408
  return; // 800B540C
}

// fn_800B5410
void f_800B5410(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B5410
  if (crb(c,2)) { goto L_800B542C; } // 800B5414
  c->r[3]=R32(c->r[3]+0x00000054u); // 800B5418
  c->r[0]=0u-c->r[3]; // 800B541C
  c->r[0]=c->r[0]&~c->r[3]; // 800B5420
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B5424
  return; // 800B5428
L_800B542C:;
  c->r[5]=R32(c->r[3]+0x00000054u); // 800B542C
  c->r[0]=R32(c->r[3]+0x00000060u); // 800B5430
  c->r[4]=sraw(c,c->r[5],31); // 800B5434
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B5438
  c->r[0]=addc(c,~c->r[0],c->r[5],1); // 800B543C
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 800B5440
  return; // 800B5444
}

// fn_800B5448
void f_800B5448(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B5448
  if (crb(c,2)) { goto L_800B5464; } // 800B544C
  c->r[3]=R32(c->r[3]+0x00000054u); // 800B5450
  c->r[0]=0u-c->r[3]; // 800B5454
  c->r[0]=c->r[0]&~c->r[3]; // 800B5458
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B545C
  return; // 800B5460
L_800B5464:;
  c->r[5]=R32(c->r[3]+0x00000054u); // 800B5464
  c->r[0]=R32(c->r[3]+0x00000064u); // 800B5468
  c->r[4]=sraw(c,c->r[5],31); // 800B546C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B5470
  c->r[0]=addc(c,~c->r[0],c->r[5],1); // 800B5474
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 800B5478
  return; // 800B547C
}

// fn_800B5480
void f_800B5480(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000054u); // 800B5480
  c->r[0]=R32(c->r[3]+0x00000060u); // 800B5484
  c->r[3]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 800B5488
  cmps(c,0,(int32_t)c->r[3],0); // 800B548C
  if (!crb(c,2)) return; // 800B5490
  c->r[0]=0u-c->r[4]; // 800B5494
  c->r[0]=c->r[0]&~c->r[4]; // 800B5498
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B549C
  return; // 800B54A0
}

// fn_800B54A4
void f_800B54A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B54A4
  c->r[0]=c->lr; // 800B54A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B54AC
  c->r[11]=c->r[1]+0x00000020u; // 800B54B0
  c->lr=0x800B54B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B54B4
  c->r[27]=c->r[3]|c->r[3]; // 800B54B8
  c->r[28]=c->r[4]|c->r[4]; // 800B54BC
  c->r[29]=c->r[5]|c->r[5]; // 800B54C0
  c->lr=0x800B54C8u; f_80056B5C(c); // 800B54C4
  c->r[30]=c->r[3]|c->r[3]; // 800B54C8
  c->lr=0x800B54D0u; f_8007B524(c); // 800B54CC
  c->lr=0x800B54D4u; f_800A1B2C(c); // 800B54D0
  c->lr=0x800B54D8u; f_80056B54(c); // 800B54D4
  c->r[3]=0u+0x0000001Cu; // 800B54D8
  c->lr=0x800B54E0u; f_80047B64(c); // 800B54DC
  c->r[31]=c->r[3]|c->r[3]; // 800B54E0
  c->r[3]=c->r[30]|c->r[30]; // 800B54E4
  c->lr=0x800B54ECu; f_80056B54(c); // 800B54E8
  W32(c->r[31]+0x00000008u,c->r[28]); // 800B54EC
  c->r[0]=0u+0x00000000u; // 800B54F0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800B54F4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800B54F8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800B54FC
  W32(c->r[31]+0x00000018u,c->r[29]); // 800B5500
  cmps(c,0,(int32_t)c->r[28],0); // 800B5504
  if (crb(c,0)) { goto L_800B5524; } // 800B5508
  cmps(c,0,(int32_t)c->r[28],25); // 800B550C
  if (!crb(c,0)) { goto L_800B5524; } // 800B5510
  c->r[3]=c->r[27]+0x00000068u; // 800B5514
  c->r[4]=c->r[31]|c->r[31]; // 800B5518
  c->lr=0x800B5520u; f_8028CA70(c); // 800B551C
  goto L_800B5530; // 800B5520
L_800B5524:;
  c->r[3]=c->r[27]+0x00000078u; // 800B5524
  c->r[4]=c->r[31]|c->r[31]; // 800B5528
  c->lr=0x800B5530u; f_8028CA70(c); // 800B552C
L_800B5530:;
  c->r[3]=R32(c->r[27]+0x00000074u); // 800B5530
  c->r[0]=c->r[3]+0x00000001u; // 800B5534
  W32(c->r[27]+0x00000074u,c->r[0]); // 800B5538
  c->r[3]=c->r[31]|c->r[31]; // 800B553C
  c->r[11]=c->r[1]+0x00000020u; // 800B5540
  c->lr=0x800B5548u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5544
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5548
  c->lr=c->r[0]; // 800B554C
  c->r[1]=c->r[1]+0x00000020u; // 800B5550
  return; // 800B5554
}

// fn_800B5558
void f_800B5558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5558
  c->r[0]=c->lr; // 800B555C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5564
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B5568
  c->r[30]=c->r[4]|c->r[4]; // 800B556C
  c->r[0]=0u+0x00000000u; // 800B5570
  cmps(c,0,(int32_t)c->r[4],0); // 800B5574
  if (crb(c,0)) { goto L_800B5588; } // 800B5578
  cmps(c,0,(int32_t)c->r[4],25); // 800B557C
  if (!crb(c,0)) { goto L_800B5588; } // 800B5580
  c->r[0]=0u+0x00000001u; // 800B5584
L_800B5588:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B5588
  if (crb(c,2)) { goto L_800B5598; } // 800B558C
  c->r[31]=c->r[3]+0x00000068u; // 800B5590
  goto L_800B559C; // 800B5594
L_800B5598:;
  c->r[31]=c->r[3]+0x00000078u; // 800B5598
L_800B559C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B559C
  c->lr=0x800B55A4u; f_8004B018(c); // 800B55A0
  c->r[4]=c->r[3]|c->r[3]; // 800B55A4
  goto L_800B55CC; // 800B55A8
L_800B55AC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B55AC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800B55B0
  if (!crb(c,2)) { goto L_800B55C0; } // 800B55B4
  c->r[3]=c->r[4]|c->r[4]; // 800B55B8
  goto L_800B55D8; // 800B55BC
L_800B55C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B55C0
  c->lr=0x800B55C8u; f_8028CCD8(c); // 800B55C4
  c->r[4]=c->r[3]|c->r[3]; // 800B55C8
L_800B55CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B55CC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B55AC; } // 800B55D0
  c->r[3]=0u+0x00000000u; // 800B55D4
L_800B55D8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B55D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B55DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B55E0
  c->lr=c->r[0]; // 800B55E4
  c->r[1]=c->r[1]+0x00000010u; // 800B55E8
  return; // 800B55EC
}

// fn_800B55F0
void f_800B55F0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B55F0
  if (crb(c,2)) { goto L_800B5600; } // 800B55F4
  c->r[3]=c->r[3]+0x00000068u; // 800B55F8
  goto L_800B5604; // 800B55FC
L_800B5600:;
  c->r[3]=c->r[3]+0x00000078u; // 800B5600
L_800B5604:;
  f_8004B018(c); return; // 800B5604
}

// fn_800B5608
void f_800B5608(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B5608
  if (crb(c,2)) { goto L_800B5618; } // 800B560C
  c->r[3]=c->r[3]+0x00000068u; // 800B5610
  goto L_800B561C; // 800B5614
L_800B5618:;
  c->r[3]=c->r[3]+0x00000078u; // 800B5618
L_800B561C:;
  c->r[4]=c->r[5]|c->r[5]; // 800B561C
  f_8028CCD8(c); return; // 800B5620
}

// fn_800B5624
void f_800B5624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5624
  c->r[0]=c->lr; // 800B5628
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B562C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5630
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B5634
  c->r[30]=c->r[3]|c->r[3]; // 800B5638
  c->r[31]=c->r[4]|c->r[4]; // 800B563C
  cmps(c,0,(int32_t)c->r[4],0); // 800B5640
  if (crb(c,0)) { goto L_800B5668; } // 800B5644
  cmps(c,0,(int32_t)c->r[4],25); // 800B5648
  if (!crb(c,0)) { goto L_800B5668; } // 800B564C
  c->r[3]=c->r[3]+0x00000068u; // 800B5650
  c->lr=0x800B5658u; f_8004B018(c); // 800B5654
  c->r[0]=0u-c->r[3]; // 800B5658
  c->r[0]=c->r[0]|c->r[3]; // 800B565C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B5660
  goto L_800B56A4; // 800B5664
L_800B5668:;
  c->r[3]=c->r[3]+0x00000078u; // 800B5668
  c->lr=0x800B5670u; f_8004B018(c); // 800B566C
  c->r[4]=c->r[3]|c->r[3]; // 800B5670
  goto L_800B5698; // 800B5674
L_800B5678:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B5678
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800B567C
  if (!crb(c,2)) { goto L_800B568C; } // 800B5680
  c->r[3]=0u+0x00000001u; // 800B5684
  goto L_800B56A4; // 800B5688
L_800B568C:;
  c->r[3]=c->r[30]+0x00000078u; // 800B568C
  c->lr=0x800B5694u; f_8028CCD8(c); // 800B5690
  c->r[4]=c->r[3]|c->r[3]; // 800B5694
L_800B5698:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B5698
  if (!crb(c,2)) { IRQCHK(c); goto L_800B5678; } // 800B569C
  c->r[3]=0u+0x00000000u; // 800B56A0
L_800B56A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B56A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B56A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B56AC
  c->lr=c->r[0]; // 800B56B0
  c->r[1]=c->r[1]+0x00000010u; // 800B56B4
  return; // 800B56B8
}

// fn_800B56BC
void f_800B56BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B56BC
  c->r[0]=c->lr; // 800B56C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B56C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B56C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B56CC
  c->r[30]=c->r[4]|c->r[4]; // 800B56D0
  c->r[0]=0u+0x00000000u; // 800B56D4
  cmps(c,0,(int32_t)c->r[4],0); // 800B56D8
  if (crb(c,0)) { goto L_800B56EC; } // 800B56DC
  cmps(c,0,(int32_t)c->r[4],25); // 800B56E0
  if (!crb(c,0)) { goto L_800B56EC; } // 800B56E4
  c->r[0]=0u+0x00000001u; // 800B56E8
L_800B56EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B56EC
  if (crb(c,2)) { goto L_800B56FC; } // 800B56F0
  c->r[31]=c->r[3]+0x00000068u; // 800B56F4
  goto L_800B5700; // 800B56F8
L_800B56FC:;
  c->r[31]=c->r[3]+0x00000078u; // 800B56FC
L_800B5700:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5700
  c->lr=0x800B5708u; f_8004B018(c); // 800B5704
  c->r[4]=c->r[3]|c->r[3]; // 800B5708
  goto L_800B5730; // 800B570C
L_800B5710:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B5710
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800B5714
  if (!crb(c,2)) { goto L_800B5724; } // 800B5718
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800B571C
  goto L_800B573C; // 800B5720
L_800B5724:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5724
  c->lr=0x800B572Cu; f_8028CCD8(c); // 800B5728
  c->r[4]=c->r[3]|c->r[3]; // 800B572C
L_800B5730:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B5730
  if (!crb(c,2)) { IRQCHK(c); goto L_800B5710; } // 800B5734
  c->r[3]=0u+0x00000000u; // 800B5738
L_800B573C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B573C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5740
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5744
  c->lr=c->r[0]; // 800B5748
  c->r[1]=c->r[1]+0x00000010u; // 800B574C
  return; // 800B5750
}

// fn_800B5754
void f_800B5754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5754
  c->r[0]=c->lr; // 800B5758
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B575C
  c->r[11]=c->r[1]+0x00000020u; // 800B5760
  c->lr=0x800B5768u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5764
  c->r[26]=c->r[5]|c->r[5]; // 800B5768
  c->r[27]=c->r[6]|c->r[6]; // 800B576C
  cmps(c,0,(int32_t)c->r[4],0); // 800B5770
  if (crb(c,2)) { goto L_800B5780; } // 800B5774
  c->r[29]=c->r[3]+0x00000068u; // 800B5778
  goto L_800B5784; // 800B577C
L_800B5780:;
  c->r[29]=c->r[3]+0x00000078u; // 800B5780
L_800B5784:;
  c->r[3]=c->r[29]|c->r[29]; // 800B5784
  c->lr=0x800B578Cu; f_8004B018(c); // 800B5788
  c->r[4]=c->r[3]|c->r[3]; // 800B578C
  c->r[28]=0u+0x00000000u; // 800B5790
  c->r[31]=0u+0x00000000u; // 800B5794
  c->r[30]=c->r[31]|c->r[31]; // 800B5798
  goto L_800B57D4; // 800B579C
L_800B57A0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B57A0
  if (crb(c,2)) { goto L_800B57C8; } // 800B57A4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800B57A8
  W32(c->r[26]+c->r[31],c->r[0]); // 800B57AC
  c->r[28]=c->r[28]+0x00000001u; // 800B57B0
  c->r[31]=c->r[31]+0x00000004u; // 800B57B4
  c->r[3]=c->r[29]|c->r[29]; // 800B57B8
  c->lr=0x800B57C0u; f_8028CCD8(c); // 800B57BC
  c->r[4]=c->r[3]|c->r[3]; // 800B57C0
  goto L_800B57D4; // 800B57C4
L_800B57C8:;
  W32(c->r[26]+c->r[31],c->r[30]); // 800B57C8
  c->r[28]=c->r[28]+0x00000001u; // 800B57CC
  c->r[31]=c->r[31]+0x00000004u; // 800B57D0
L_800B57D4:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 800B57D4
  if (crb(c,0)) { IRQCHK(c); goto L_800B57A0; } // 800B57D8
  c->r[11]=c->r[1]+0x00000020u; // 800B57DC
  c->lr=0x800B57E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B57E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B57E4
  c->lr=c->r[0]; // 800B57E8
  c->r[1]=c->r[1]+0x00000020u; // 800B57EC
  return; // 800B57F0
}

// fn_800B57F4
void f_800B57F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B57F4
  c->r[0]=c->lr; // 800B57F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B57FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5800
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B5804
  c->r[30]=c->r[4]|c->r[4]; // 800B5808
  c->r[0]=0u+0x00000000u; // 800B580C
  cmps(c,0,(int32_t)c->r[4],0); // 800B5810
  if (crb(c,0)) { goto L_800B5824; } // 800B5814
  cmps(c,0,(int32_t)c->r[4],25); // 800B5818
  if (!crb(c,0)) { goto L_800B5824; } // 800B581C
  c->r[0]=0u+0x00000001u; // 800B5820
L_800B5824:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B5824
  if (crb(c,2)) { goto L_800B5834; } // 800B5828
  c->r[31]=c->r[3]+0x00000068u; // 800B582C
  goto L_800B5838; // 800B5830
L_800B5834:;
  c->r[31]=c->r[3]+0x00000078u; // 800B5834
L_800B5838:;
  c->r[3]=c->r[31]|c->r[31]; // 800B5838
  c->lr=0x800B5840u; f_8004B018(c); // 800B583C
  c->r[4]=c->r[3]|c->r[3]; // 800B5840
  goto L_800B5868; // 800B5844
L_800B5848:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B5848
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800B584C
  if (!crb(c,2)) { goto L_800B585C; } // 800B5850
  c->r[3]=R32(c->r[4]+0x00000010u); // 800B5854
  goto L_800B5874; // 800B5858
L_800B585C:;
  c->r[3]=c->r[31]|c->r[31]; // 800B585C
  c->lr=0x800B5864u; f_8028CCD8(c); // 800B5860
  c->r[4]=c->r[3]|c->r[3]; // 800B5864
L_800B5868:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B5868
  if (!crb(c,2)) { IRQCHK(c); goto L_800B5848; } // 800B586C
  c->r[3]=0u+0xFFFFFFFEu; // 800B5870
L_800B5874:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5874
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B5878
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B587C
  c->lr=c->r[0]; // 800B5880
  c->r[1]=c->r[1]+0x00000010u; // 800B5884
  return; // 800B5888
}

// fn_800B588C
void f_800B588C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B588C
  c->r[0]=c->lr; // 800B5890
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5894
  c->r[11]=c->r[1]+0x00000020u; // 800B5898
  c->lr=0x800B58A0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B589C
  c->r[26]=c->r[5]|c->r[5]; // 800B58A0
  c->r[27]=c->r[6]|c->r[6]; // 800B58A4
  cmps(c,0,(int32_t)c->r[4],0); // 800B58A8
  if (crb(c,2)) { goto L_800B58B8; } // 800B58AC
  c->r[29]=c->r[3]+0x00000068u; // 800B58B0
  goto L_800B58BC; // 800B58B4
L_800B58B8:;
  c->r[29]=c->r[3]+0x00000078u; // 800B58B8
L_800B58BC:;
  c->r[3]=c->r[29]|c->r[29]; // 800B58BC
  c->lr=0x800B58C4u; f_8004B018(c); // 800B58C0
  c->r[4]=c->r[3]|c->r[3]; // 800B58C4
  c->r[28]=0u+0x00000000u; // 800B58C8
  c->r[31]=0u+0x00000000u; // 800B58CC
  c->r[30]=0u+0xFFFFFFFFu; // 800B58D0
  goto L_800B590C; // 800B58D4
L_800B58D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B58D8
  if (crb(c,2)) { goto L_800B5900; } // 800B58DC
  c->r[0]=R32(c->r[4]+0x00000018u); // 800B58E0
  W32(c->r[26]+c->r[31],c->r[0]); // 800B58E4
  c->r[28]=c->r[28]+0x00000001u; // 800B58E8
  c->r[31]=c->r[31]+0x00000004u; // 800B58EC
  c->r[3]=c->r[29]|c->r[29]; // 800B58F0
  c->lr=0x800B58F8u; f_8028CCD8(c); // 800B58F4
  c->r[4]=c->r[3]|c->r[3]; // 800B58F8
  goto L_800B590C; // 800B58FC
L_800B5900:;
  W32(c->r[26]+c->r[31],c->r[30]); // 800B5900
  c->r[28]=c->r[28]+0x00000001u; // 800B5904
  c->r[31]=c->r[31]+0x00000004u; // 800B5908
L_800B590C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 800B590C
  if (crb(c,0)) { IRQCHK(c); goto L_800B58D8; } // 800B5910
  c->r[11]=c->r[1]+0x00000020u; // 800B5914
  c->lr=0x800B591Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5918
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B591C
  c->lr=c->r[0]; // 800B5920
  c->r[1]=c->r[1]+0x00000020u; // 800B5924
  return; // 800B5928
}

// fn_800B592C
void f_800B592C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B592C
  c->r[0]=c->lr; // 800B5930
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B5938
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B593C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B5940
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B5944
  c->r[28]=c->r[3]|c->r[3]; // 800B5948
  c->r[3]=c->r[3]+0x00000068u; // 800B594C
  c->lr=0x800B5954u; f_8004B018(c); // 800B5950
  c->r[30]=c->r[3]|c->r[3]; // 800B5954
  goto L_800B59A0; // 800B5958
L_800B595C:;
  c->r[3]=c->r[28]+0x00000068u; // 800B595C
  c->r[4]=c->r[30]|c->r[30]; // 800B5960
  c->lr=0x800B5968u; f_8028CCD8(c); // 800B5964
  c->r[31]=c->r[3]|c->r[3]; // 800B5968
  c->r[3]=c->r[28]+0x00000068u; // 800B596C
  c->r[4]=c->r[30]|c->r[30]; // 800B5970
  c->lr=0x800B5978u; f_8028CC6C(c); // 800B5974
  c->lr=0x800B597Cu; f_80056B5C(c); // 800B5978
  c->r[29]=c->r[3]|c->r[3]; // 800B597C
  c->lr=0x800B5984u; f_8007B524(c); // 800B5980
  c->lr=0x800B5988u; f_800A1B2C(c); // 800B5984
  c->lr=0x800B598Cu; f_80056B54(c); // 800B5988
  c->r[3]=c->r[30]|c->r[30]; // 800B598C
  c->lr=0x800B5994u; f_80047B20(c); // 800B5990
  c->r[3]=c->r[29]|c->r[29]; // 800B5994
  c->lr=0x800B599Cu; f_80056B54(c); // 800B5998
  c->r[30]=c->r[31]|c->r[31]; // 800B599C
L_800B59A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B59A0
  if (!crb(c,2)) { IRQCHK(c); goto L_800B595C; } // 800B59A4
  c->r[3]=c->r[28]+0x00000078u; // 800B59A8
  c->lr=0x800B59B0u; f_8004B018(c); // 800B59AC
  c->r[31]=c->r[3]|c->r[3]; // 800B59B0
  goto L_800B59FC; // 800B59B4
L_800B59B8:;
  c->r[3]=c->r[28]+0x00000078u; // 800B59B8
  c->r[4]=c->r[31]|c->r[31]; // 800B59BC
  c->lr=0x800B59C4u; f_8028CCD8(c); // 800B59C0
  c->r[30]=c->r[3]|c->r[3]; // 800B59C4
  c->r[3]=c->r[28]+0x00000078u; // 800B59C8
  c->r[4]=c->r[31]|c->r[31]; // 800B59CC
  c->lr=0x800B59D4u; f_8028CC6C(c); // 800B59D0
  c->lr=0x800B59D8u; f_80056B5C(c); // 800B59D4
  c->r[29]=c->r[3]|c->r[3]; // 800B59D8
  c->lr=0x800B59E0u; f_8007B524(c); // 800B59DC
  c->lr=0x800B59E4u; f_800A1B2C(c); // 800B59E0
  c->lr=0x800B59E8u; f_80056B54(c); // 800B59E4
  c->r[3]=c->r[31]|c->r[31]; // 800B59E8
  c->lr=0x800B59F0u; f_80047B20(c); // 800B59EC
  c->r[3]=c->r[29]|c->r[29]; // 800B59F0
  c->lr=0x800B59F8u; f_80056B54(c); // 800B59F4
  c->r[31]=c->r[30]|c->r[30]; // 800B59F8
L_800B59FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B59FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800B59B8; } // 800B5A00
  c->r[0]=0u+0x00000000u; // 800B5A04
  W32(c->r[28]+0x00000074u,c->r[0]); // 800B5A08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B5A0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B5A10
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B5A14
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B5A18
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5A1C
  c->lr=c->r[0]; // 800B5A20
  c->r[1]=c->r[1]+0x00000020u; // 800B5A24
  return; // 800B5A28
}

// fn_800B5A2C
void f_800B5A2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5A2C
  c->r[0]=c->lr; // 800B5A30
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B5A34
  c->r[11]=c->r[1]+0x00000030u; // 800B5A38
  c->lr=0x800B5A40u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5A3C
  c->r[25]=c->r[3]|c->r[3]; // 800B5A40
  c->r[26]=c->r[4]|c->r[4]; // 800B5A44
  c->r[27]=c->r[5]|c->r[5]; // 800B5A48
  c->r[28]=c->r[6]|c->r[6]; // 800B5A4C
  c->r[29]=c->r[7]|c->r[7]; // 800B5A50
  c->lr=0x800B5A58u; f_800B5624(c); // 800B5A54
  cmps(c,0,(int32_t)c->r[3],0); // 800B5A58
  if (crb(c,2)) { goto L_800B5F00; } // 800B5A5C
  cmps(c,0,(int32_t)c->r[26],0); // 800B5A60
  if (crb(c,0)) { goto L_800B5DFC; } // 800B5A64
  cmps(c,0,(int32_t)c->r[26],25); // 800B5A68
  if (!crb(c,0)) { goto L_800B5DFC; } // 800B5A6C
  c->r[3]=c->r[25]+0x00000068u; // 800B5A70
  c->lr=0x800B5A78u; f_8004B018(c); // 800B5A74
  c->r[30]=c->r[3]|c->r[3]; // 800B5A78
  goto L_800B5DF0; // 800B5A7C
L_800B5A80:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800B5A80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 800B5A84
  if (!crb(c,2)) { goto L_800B5DE0; } // 800B5A88
  c->r[0]=0u+0x00000001u; // 800B5A8C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800B5A90
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5A94
  c->lr=0x800B5A9Cu; f_800897FC(c); // 800B5A98
  c->r[31]=c->r[3]|c->r[3]; // 800B5A9C
  c->lr=0x800B5AA4u; f_8007B524(c); // 800B5AA0
  c->r[4]=c->r[31]|c->r[31]; // 800B5AA4
  c->r[5]=c->r[26]|c->r[26]; // 800B5AA8
  c->r[6]=0u+0x00000001u; // 800B5AAC
  c->lr=0x800B5AB4u; f_800A1BD8(c); // 800B5AB0
  cmps(c,0,(int32_t)c->r[29],0); // 800B5AB4
  if (crb(c,2)) { goto L_800B5AC8; } // 800B5AB8
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5ABC
  c->r[4]=c->r[26]|c->r[26]; // 800B5AC0
  c->lr=0x800B5AC8u; f_80080BD4(c); // 800B5AC4
L_800B5AC8:;
  cmpu(c,0,c->r[26],0x00000013u); // 800B5AC8
  if (crb(c,1)) { goto L_800B5DD0; } // 800B5ACC
  c->r[3]=0u+0x80460000u; // 800B5AD0
  c->r[3]=c->r[3]+0xFFFFFF34u; // 800B5AD4
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800B5AD8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B5ADC
  c->ctr=c->r[3]; // 800B5AE0
  if (true) { switch (c->ctr) { case 0x800B5AE8u: goto L_800B5AE8; case 0x800B5B14u: goto L_800B5B14; case 0x800B5B5Cu: goto L_800B5B5C; case 0x800B5BA4u: goto L_800B5BA4; case 0x800B5BD0u: goto L_800B5BD0; case 0x800B5C18u: goto L_800B5C18; case 0x800B5C44u: goto L_800B5C44; case 0x800B5C64u: goto L_800B5C64; case 0x800B5CA4u: goto L_800B5CA4; case 0x800B5CE4u: goto L_800B5CE4; case 0x800B5D10u: goto L_800B5D10; case 0x800B5D3Cu: goto L_800B5D3C; case 0x800B5D68u: goto L_800B5D68; case 0x800B5D94u: goto L_800B5D94; case 0x800B5DD0u: goto L_800B5DD0; default: break; } dispatch(c,c->ctr); return; } // 800B5AE4
L_800B5AE8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5AE8
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5AEC
  c->r[3]=0u+0x0000004Du; // 800B5AF0
  c->lr=0x800B5AF8u; f_801930C4(c); // 800B5AF4
  c->r[3]=c->r[25]|c->r[25]; // 800B5AF8
  c->lr=0x800B5B00u; f_80089BCC(c); // 800B5AFC
  c->r[4]=c->r[3]|c->r[3]; // 800B5B00
  c->r[3]=0u+0x00000000u; // 800B5B04
  c->lr=0x800B5B0Cu; f_80193100(c); // 800B5B08
  c->lr=0x800B5B10u; f_80193060(c); // 800B5B0C
  goto L_800B5DD0; // 800B5B10
L_800B5B14:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5B14
  if (crb(c,2)) { goto L_800B5B3C; } // 800B5B18
  c->r[3]=0u+0x0000001Au; // 800B5B1C
  c->lr=0x800B5B24u; f_801930C4(c); // 800B5B20
  c->r[3]=c->r[25]|c->r[25]; // 800B5B24
  c->lr=0x800B5B2Cu; f_80089BCC(c); // 800B5B28
  c->r[4]=c->r[3]|c->r[3]; // 800B5B2C
  c->r[3]=0u+0x00000000u; // 800B5B30
  c->lr=0x800B5B38u; f_80193100(c); // 800B5B34
  c->lr=0x800B5B3Cu; f_80193060(c); // 800B5B38
L_800B5B3C:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5B3C
  c->r[4]=0u+0x00000066u; // 800B5B40
  c->r[5]=0u+0x00000000u; // 800B5B44
  c->r[6]=0u+0x00000001u; // 800B5B48
  c->lr=0x800B5B50u; f_800B60FC(c); // 800B5B4C
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5B50
  c->lr=0x800B5B58u; f_80089834(c); // 800B5B54
  goto L_800B5DD0; // 800B5B58
L_800B5B5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5B5C
  if (crb(c,2)) { goto L_800B5B84; } // 800B5B60
  c->r[3]=0u+0x0000006Eu; // 800B5B64
  c->lr=0x800B5B6Cu; f_801930C4(c); // 800B5B68
  c->r[3]=c->r[25]|c->r[25]; // 800B5B6C
  c->lr=0x800B5B74u; f_80089BCC(c); // 800B5B70
  c->r[4]=c->r[3]|c->r[3]; // 800B5B74
  c->r[3]=0u+0x00000000u; // 800B5B78
  c->lr=0x800B5B80u; f_80193100(c); // 800B5B7C
  c->lr=0x800B5B84u; f_80193060(c); // 800B5B80
L_800B5B84:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5B84
  c->r[4]=0u+0x00000066u; // 800B5B88
  c->r[5]=0u+0x00000000u; // 800B5B8C
  c->r[6]=0u+0x00000001u; // 800B5B90
  c->lr=0x800B5B98u; f_800B60FC(c); // 800B5B94
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5B98
  c->lr=0x800B5BA0u; f_80089834(c); // 800B5B9C
  goto L_800B5DD0; // 800B5BA0
L_800B5BA4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5BA4
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5BA8
  c->r[3]=0u+0x0000004Bu; // 800B5BAC
  c->lr=0x800B5BB4u; f_801930C4(c); // 800B5BB0
  c->r[3]=c->r[25]|c->r[25]; // 800B5BB4
  c->lr=0x800B5BBCu; f_80089BCC(c); // 800B5BB8
  c->r[4]=c->r[3]|c->r[3]; // 800B5BBC
  c->r[3]=0u+0x00000000u; // 800B5BC0
  c->lr=0x800B5BC8u; f_80193100(c); // 800B5BC4
  c->lr=0x800B5BCCu; f_80193060(c); // 800B5BC8
  goto L_800B5DD0; // 800B5BCC
L_800B5BD0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5BD0
  if (crb(c,2)) { goto L_800B5BF8; } // 800B5BD4
  c->r[3]=0u+0x00000049u; // 800B5BD8
  c->lr=0x800B5BE0u; f_801930C4(c); // 800B5BDC
  c->r[3]=c->r[25]|c->r[25]; // 800B5BE0
  c->lr=0x800B5BE8u; f_80089BCC(c); // 800B5BE4
  c->r[4]=c->r[3]|c->r[3]; // 800B5BE8
  c->r[3]=0u+0x00000000u; // 800B5BEC
  c->lr=0x800B5BF4u; f_80193100(c); // 800B5BF0
  c->lr=0x800B5BF8u; f_80193060(c); // 800B5BF4
L_800B5BF8:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5BF8
  c->r[4]=0u+0x00000066u; // 800B5BFC
  c->r[5]=0u+0x00000000u; // 800B5C00
  c->r[6]=0u+0x00000001u; // 800B5C04
  c->lr=0x800B5C0Cu; f_800B60FC(c); // 800B5C08
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5C0C
  c->lr=0x800B5C14u; f_80089834(c); // 800B5C10
  goto L_800B5DD0; // 800B5C14
L_800B5C18:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5C18
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5C1C
  c->r[3]=0u+0x0000008Du; // 800B5C20
  c->lr=0x800B5C28u; f_801930C4(c); // 800B5C24
  c->r[3]=c->r[25]|c->r[25]; // 800B5C28
  c->lr=0x800B5C30u; f_80089BCC(c); // 800B5C2C
  c->r[4]=c->r[3]|c->r[3]; // 800B5C30
  c->r[3]=0u+0x00000000u; // 800B5C34
  c->lr=0x800B5C3Cu; f_80193100(c); // 800B5C38
  c->lr=0x800B5C40u; f_80193060(c); // 800B5C3C
  goto L_800B5DD0; // 800B5C40
L_800B5C44:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5C44
  c->r[4]=0u+0x00000066u; // 800B5C48
  c->r[5]=0u+0x00000000u; // 800B5C4C
  c->r[6]=0u+0x00000001u; // 800B5C50
  c->lr=0x800B5C58u; f_800B60FC(c); // 800B5C54
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5C58
  c->lr=0x800B5C60u; f_80089834(c); // 800B5C5C
  goto L_800B5DD0; // 800B5C60
L_800B5C64:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5C64
  if (crb(c,2)) { goto L_800B5C8C; } // 800B5C68
  c->r[3]=0u+0x0000004Fu; // 800B5C6C
  c->lr=0x800B5C74u; f_801930C4(c); // 800B5C70
  c->r[3]=c->r[25]|c->r[25]; // 800B5C74
  c->lr=0x800B5C7Cu; f_80089BCC(c); // 800B5C78
  c->r[4]=c->r[3]|c->r[3]; // 800B5C7C
  c->r[3]=0u+0x00000000u; // 800B5C80
  c->lr=0x800B5C88u; f_80193100(c); // 800B5C84
  c->lr=0x800B5C8Cu; f_80193060(c); // 800B5C88
L_800B5C8C:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5C8C
  c->r[4]=0u+0x00000008u; // 800B5C90
  c->r[5]=0u+0x00000000u; // 800B5C94
  c->r[6]=0u+0x00000001u; // 800B5C98
  c->lr=0x800B5CA0u; f_800B60FC(c); // 800B5C9C
  goto L_800B5DD0; // 800B5CA0
L_800B5CA4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5CA4
  if (crb(c,2)) { goto L_800B5CCC; } // 800B5CA8
  c->r[3]=0u+0x00000051u; // 800B5CAC
  c->lr=0x800B5CB4u; f_801930C4(c); // 800B5CB0
  c->r[3]=c->r[25]|c->r[25]; // 800B5CB4
  c->lr=0x800B5CBCu; f_80089BCC(c); // 800B5CB8
  c->r[4]=c->r[3]|c->r[3]; // 800B5CBC
  c->r[3]=0u+0x00000000u; // 800B5CC0
  c->lr=0x800B5CC8u; f_80193100(c); // 800B5CC4
  c->lr=0x800B5CCCu; f_80193060(c); // 800B5CC8
L_800B5CCC:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5CCC
  c->r[4]=0u+0x00000007u; // 800B5CD0
  c->r[5]=0u+0x00000000u; // 800B5CD4
  c->r[6]=0u+0x00000001u; // 800B5CD8
  c->lr=0x800B5CE0u; f_800B60FC(c); // 800B5CDC
  goto L_800B5DD0; // 800B5CE0
L_800B5CE4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5CE4
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5CE8
  c->r[3]=0u+0x00000053u; // 800B5CEC
  c->lr=0x800B5CF4u; f_801930C4(c); // 800B5CF0
  c->r[3]=c->r[25]|c->r[25]; // 800B5CF4
  c->lr=0x800B5CFCu; f_80089BCC(c); // 800B5CF8
  c->r[4]=c->r[3]|c->r[3]; // 800B5CFC
  c->r[3]=0u+0x00000000u; // 800B5D00
  c->lr=0x800B5D08u; f_80193100(c); // 800B5D04
  c->lr=0x800B5D0Cu; f_80193060(c); // 800B5D08
  goto L_800B5DD0; // 800B5D0C
L_800B5D10:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5D10
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5D14
  c->r[3]=0u+0x00000055u; // 800B5D18
  c->lr=0x800B5D20u; f_801930C4(c); // 800B5D1C
  c->r[3]=c->r[25]|c->r[25]; // 800B5D20
  c->lr=0x800B5D28u; f_80089BCC(c); // 800B5D24
  c->r[4]=c->r[3]|c->r[3]; // 800B5D28
  c->r[3]=0u+0x00000000u; // 800B5D2C
  c->lr=0x800B5D34u; f_80193100(c); // 800B5D30
  c->lr=0x800B5D38u; f_80193060(c); // 800B5D34
  goto L_800B5DD0; // 800B5D38
L_800B5D3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5D3C
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5D40
  c->r[3]=0u+0x0000002Fu; // 800B5D44
  c->lr=0x800B5D4Cu; f_801930C4(c); // 800B5D48
  c->r[3]=c->r[25]|c->r[25]; // 800B5D4C
  c->lr=0x800B5D54u; f_80089BCC(c); // 800B5D50
  c->r[4]=c->r[3]|c->r[3]; // 800B5D54
  c->r[3]=0u+0x00000000u; // 800B5D58
  c->lr=0x800B5D60u; f_80193100(c); // 800B5D5C
  c->lr=0x800B5D64u; f_80193060(c); // 800B5D60
  goto L_800B5DD0; // 800B5D64
L_800B5D68:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5D68
  if (crb(c,2)) { goto L_800B5DD0; } // 800B5D6C
  c->r[3]=0u+0x00000070u; // 800B5D70
  c->lr=0x800B5D78u; f_801930C4(c); // 800B5D74
  c->r[3]=c->r[25]|c->r[25]; // 800B5D78
  c->lr=0x800B5D80u; f_80089BCC(c); // 800B5D7C
  c->r[4]=c->r[3]|c->r[3]; // 800B5D80
  c->r[3]=0u+0x00000000u; // 800B5D84
  c->lr=0x800B5D8Cu; f_80193100(c); // 800B5D88
  c->lr=0x800B5D90u; f_80193060(c); // 800B5D8C
  goto L_800B5DD0; // 800B5D90
L_800B5D94:;
  cmps(c,0,(int32_t)c->r[28],0); // 800B5D94
  if (crb(c,2)) { goto L_800B5DBC; } // 800B5D98
  c->r[3]=0u+0x00000072u; // 800B5D9C
  c->lr=0x800B5DA4u; f_801930C4(c); // 800B5DA0
  c->r[3]=c->r[25]|c->r[25]; // 800B5DA4
  c->lr=0x800B5DACu; f_80089BCC(c); // 800B5DA8
  c->r[4]=c->r[3]|c->r[3]; // 800B5DAC
  c->r[3]=0u+0x00000000u; // 800B5DB0
  c->lr=0x800B5DB8u; f_80193100(c); // 800B5DB4
  c->lr=0x800B5DBCu; f_80193060(c); // 800B5DB8
L_800B5DBC:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5DBC
  c->r[4]=0u+0x00000066u; // 800B5DC0
  c->r[5]=0u+0x00000000u; // 800B5DC4
  c->r[6]=0u+0x00000001u; // 800B5DC8
  c->lr=0x800B5DD0u; f_800B60FC(c); // 800B5DCC
L_800B5DD0:;
  W32(c->r[30]+0x00000010u,c->r[27]); // 800B5DD0
  c->r[0]=0u+0x00000000u; // 800B5DD4
  W32(c->r[30]+0x00000014u,c->r[0]); // 800B5DD8
  goto L_800B5F28; // 800B5DDC
L_800B5DE0:;
  c->r[3]=c->r[25]+0x00000068u; // 800B5DE0
  c->r[4]=c->r[30]|c->r[30]; // 800B5DE4
  c->lr=0x800B5DECu; f_8028CCD8(c); // 800B5DE8
  c->r[30]=c->r[3]|c->r[3]; // 800B5DEC
L_800B5DF0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B5DF0
  if (!crb(c,2)) { IRQCHK(c); goto L_800B5A80; } // 800B5DF4
  goto L_800B5F28; // 800B5DF8
L_800B5DFC:;
  c->r[3]=c->r[25]+0x00000078u; // 800B5DFC
  c->lr=0x800B5E04u; f_8004B018(c); // 800B5E00
  c->r[30]=c->r[3]|c->r[3]; // 800B5E04
  goto L_800B5EF4; // 800B5E08
L_800B5E0C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800B5E0C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 800B5E10
  if (!crb(c,2)) { goto L_800B5EE4; } // 800B5E14
  c->r[0]=0u+0x00000001u; // 800B5E18
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800B5E1C
  cmps(c,0,(int32_t)c->r[29],0); // 800B5E20
  if (crb(c,2)) { goto L_800B5E34; } // 800B5E24
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5E28
  c->r[4]=c->r[26]|c->r[26]; // 800B5E2C
  c->lr=0x800B5E34u; f_80080BD4(c); // 800B5E30
L_800B5E34:;
  cmps(c,0,(int32_t)c->r[26],109); // 800B5E34
  if (crb(c,2)) { goto L_800B5E44; } // 800B5E38
  if (!crb(c,0)) { goto L_800B5ED4; } // 800B5E3C
  goto L_800B5ED4; // 800B5E40
L_800B5E44:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5E44
  c->r[4]=0u+0x00000012u; // 800B5E48
  c->r[5]=c->r[27]|c->r[27]; // 800B5E4C
  c->r[6]=0u+0x00000000u; // 800B5E50
  c->r[7]=0u+0x00000000u; // 800B5E54
  c->lr=0x800B5E5Cu; f_800B5A2C(c); // 800B5E58
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5E5C
  c->r[4]=0u+0x00000000u; // 800B5E60
  c->lr=0x800B5E68u; f_80089840(c); // 800B5E64
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5E68
  c->r[4]=0u+0x00000001u; // 800B5E6C
  c->lr=0x800B5E74u; f_80089888(c); // 800B5E70
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5E74
  c->lr=0x800B5E7Cu; f_80085AD4(c); // 800B5E78
  c->r[3]=R32(c->r[25]+0x00000008u); // 800B5E7C
  c->lr=0x800B5E84u; f_80085A0C(c); // 800B5E80
  c->r[31]=c->r[3]|c->r[3]; // 800B5E84
  c->r[3]=c->r[3]+0x00000008u; // 800B5E88
  c->r[4]=0u+0x000000FFu; // 800B5E8C
  c->r[5]=0u+0x00000000u; // 800B5E90
  c->r[6]=0u+0x00000001u; // 800B5E94
  c->r[7]=0u+0x00000001u; // 800B5E98
  c->r[8]=0u+0x00000000u; // 800B5E9C
  c->lr=0x800B5EA4u; f_800A7F74(c); // 800B5EA0
  c->r[3]=c->r[31]+0x00000008u; // 800B5EA4
  c->lr=0x800B5EACu; f_800A8148(c); // 800B5EA8
  cmps(c,0,(int32_t)c->r[28],0); // 800B5EAC
  if (crb(c,2)) { goto L_800B5ED4; } // 800B5EB0
  c->r[3]=0u+0x000000B1u; // 800B5EB4
  c->lr=0x800B5EBCu; f_801930C4(c); // 800B5EB8
  c->r[3]=c->r[25]|c->r[25]; // 800B5EBC
  c->lr=0x800B5EC4u; f_80089BCC(c); // 800B5EC0
  c->r[4]=c->r[3]|c->r[3]; // 800B5EC4
  c->r[3]=0u+0x00000000u; // 800B5EC8
  c->lr=0x800B5ED0u; f_80193100(c); // 800B5ECC
  c->lr=0x800B5ED4u; f_80193060(c); // 800B5ED0
L_800B5ED4:;
  W32(c->r[30]+0x00000010u,c->r[27]); // 800B5ED4
  c->r[0]=0u+0x00000000u; // 800B5ED8
  W32(c->r[30]+0x00000014u,c->r[0]); // 800B5EDC
  goto L_800B5F28; // 800B5EE0
L_800B5EE4:;
  c->r[3]=c->r[25]+0x00000078u; // 800B5EE4
  c->r[4]=c->r[30]|c->r[30]; // 800B5EE8
  c->lr=0x800B5EF0u; f_8028CCD8(c); // 800B5EEC
  c->r[30]=c->r[3]|c->r[3]; // 800B5EF0
L_800B5EF4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B5EF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B5E0C; } // 800B5EF8
  goto L_800B5F28; // 800B5EFC
L_800B5F00:;
  c->r[3]=c->r[25]|c->r[25]; // 800B5F00
  c->r[4]=c->r[26]|c->r[26]; // 800B5F04
  c->r[5]=0u+0x00000000u; // 800B5F08
  c->lr=0x800B5F10u; f_800B54A4(c); // 800B5F0C
  c->r[3]=c->r[25]|c->r[25]; // 800B5F10
  c->r[4]=c->r[26]|c->r[26]; // 800B5F14
  c->r[5]=c->r[27]|c->r[27]; // 800B5F18
  c->r[6]=c->r[28]|c->r[28]; // 800B5F1C
  c->r[7]=c->r[29]|c->r[29]; // 800B5F20
  c->lr=0x800B5F28u; f_800B5A2C(c); // 800B5F24
L_800B5F28:;
  c->r[11]=c->r[1]+0x00000030u; // 800B5F28
  c->lr=0x800B5F30u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5F2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B5F30
  c->lr=c->r[0]; // 800B5F34
  c->r[1]=c->r[1]+0x00000030u; // 800B5F38
  return; // 800B5F3C
}

// fn_800B5F40
void f_800B5F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5F40
  c->r[0]=c->lr; // 800B5F44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5F48
  c->r[11]=c->r[1]+0x00000020u; // 800B5F4C
  c->lr=0x800B5F54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5F50
  c->r[27]=c->r[3]|c->r[3]; // 800B5F54
  c->r[28]=c->r[4]|c->r[4]; // 800B5F58
  c->r[29]=c->r[5]|c->r[5]; // 800B5F5C
  c->r[30]=c->r[6]|c->r[6]; // 800B5F60
  c->lr=0x800B5F68u; f_80089C8C(c); // 800B5F64
  c->r[0]=0u-c->r[3]; // 800B5F68
  c->r[0]=c->r[0]|c->r[3]; // 800B5F6C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 800B5F70
  c->lr=0x800B5F78u; f_800F4430(c); // 800B5F74
  c->r[3]=c->r[3]+0x00000690u; // 800B5F78
  c->r[4]=c->r[31]|c->r[31]; // 800B5F7C
  c->lr=0x800B5F84u; f_80269F08(c); // 800B5F80
  c->r[5]=c->r[3]|c->r[3]; // 800B5F84
  c->r[3]=c->r[27]|c->r[27]; // 800B5F88
  c->r[4]=c->r[28]|c->r[28]; // 800B5F8C
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800B5F90
  c->r[5]=c->r[5]+c->r[0]; // 800B5F94
  c->r[5]=R32(c->r[5]+0x00000004u); // 800B5F98
  c->r[6]=c->r[29]|c->r[29]; // 800B5F9C
  c->r[7]=c->r[30]|c->r[30]; // 800B5FA0
  c->lr=0x800B5FA8u; f_800B5A2C(c); // 800B5FA4
  c->r[11]=c->r[1]+0x00000020u; // 800B5FA8
  c->lr=0x800B5FB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5FAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5FB0
  c->lr=c->r[0]; // 800B5FB4
  c->r[1]=c->r[1]+0x00000020u; // 800B5FB8
  return; // 800B5FBC
}

// fn_800B5FC0
void f_800B5FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5FC0
  c->r[0]=c->lr; // 800B5FC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5FC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B5FCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B5FD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B5FD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B5FD8
  c->r[28]=c->r[3]|c->r[3]; // 800B5FDC
  c->r[29]=c->r[4]|c->r[4]; // 800B5FE0
  c->r[3]=c->r[3]+0x00000068u; // 800B5FE4
  c->lr=0x800B5FECu; f_8004B018(c); // 800B5FE8
  c->r[30]=c->r[3]|c->r[3]; // 800B5FEC
  c->r[31]=0u+0x00000000u; // 800B5FF0
  goto L_800B6058; // 800B5FF4
L_800B5FF8:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800B5FF8
  cmps(c,0,(int32_t)c->r[0],1); // 800B5FFC
  if (!crb(c,2)) { goto L_800B6048; } // 800B6000
  c->r[3]=R32(c->r[30]+0x00000010u); // 800B6004
  cmps(c,0,(int32_t)c->r[3],-1); // 800B6008
  if (crb(c,2)) { goto L_800B603C; } // 800B600C
  c->r[0]=R32(c->r[30]+0x00000014u); // 800B6010
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B6014
  if (crb(c,0)) { goto L_800B603C; } // 800B6018
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800B601C
  W32(c->r[30]+0x00000010u,c->r[31]); // 800B6020
  W32(c->r[30]+0x00000014u,c->r[31]); // 800B6024
  c->r[3]=c->r[28]|c->r[28]; // 800B6028
  c->r[4]=R32(c->r[30]+0x00000008u); // 800B602C
  c->r[5]=c->r[29]|c->r[29]; // 800B6030
  c->r[6]=0u+0x00000000u; // 800B6034
  c->lr=0x800B603Cu; f_800B60FC(c); // 800B6038
L_800B603C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800B603C
  c->r[0]=c->r[3]+0x00000001u; // 800B6040
  W32(c->r[30]+0x00000014u,c->r[0]); // 800B6044
L_800B6048:;
  c->r[3]=c->r[28]+0x00000068u; // 800B6048
  c->r[4]=c->r[30]|c->r[30]; // 800B604C
  c->lr=0x800B6054u; f_8028CCD8(c); // 800B6050
  c->r[30]=c->r[3]|c->r[3]; // 800B6054
L_800B6058:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6058
  if (!crb(c,2)) { IRQCHK(c); goto L_800B5FF8; } // 800B605C
  c->r[3]=c->r[28]+0x00000078u; // 800B6060
  c->lr=0x800B6068u; f_8004B018(c); // 800B6064
  c->r[30]=c->r[3]|c->r[3]; // 800B6068
  c->r[31]=0u+0x00000000u; // 800B606C
  goto L_800B60D4; // 800B6070
L_800B6074:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800B6074
  cmps(c,0,(int32_t)c->r[0],1); // 800B6078
  if (!crb(c,2)) { goto L_800B60C4; } // 800B607C
  c->r[3]=R32(c->r[30]+0x00000010u); // 800B6080
  cmps(c,0,(int32_t)c->r[3],-1); // 800B6084
  if (crb(c,2)) { goto L_800B60B8; } // 800B6088
  c->r[0]=R32(c->r[30]+0x00000014u); // 800B608C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B6090
  if (crb(c,0)) { goto L_800B60B8; } // 800B6094
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800B6098
  W32(c->r[30]+0x00000010u,c->r[31]); // 800B609C
  W32(c->r[30]+0x00000014u,c->r[31]); // 800B60A0
  c->r[3]=c->r[28]|c->r[28]; // 800B60A4
  c->r[4]=R32(c->r[30]+0x00000008u); // 800B60A8
  c->r[5]=c->r[29]|c->r[29]; // 800B60AC
  c->r[6]=0u+0x00000000u; // 800B60B0
  c->lr=0x800B60B8u; f_800B60FC(c); // 800B60B4
L_800B60B8:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800B60B8
  c->r[0]=c->r[3]+0x00000001u; // 800B60BC
  W32(c->r[30]+0x00000014u,c->r[0]); // 800B60C0
L_800B60C4:;
  c->r[3]=c->r[28]+0x00000078u; // 800B60C4
  c->r[4]=c->r[30]|c->r[30]; // 800B60C8
  c->lr=0x800B60D0u; f_8028CCD8(c); // 800B60CC
  c->r[30]=c->r[3]|c->r[3]; // 800B60D0
L_800B60D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B60D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B6074; } // 800B60D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B60DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B60E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B60E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B60E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B60EC
  c->lr=c->r[0]; // 800B60F0
  c->r[1]=c->r[1]+0x00000020u; // 800B60F4
  return; // 800B60F8
}

// fn_800B60FC
void f_800B60FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B60FC
  c->r[0]=c->lr; // 800B6100
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6108
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B610C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6110
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B6114
  c->r[28]=c->r[3]|c->r[3]; // 800B6118
  c->r[29]=c->r[4]|c->r[4]; // 800B611C
  c->r[30]=c->r[5]|c->r[5]; // 800B6120
  cmps(c,0,(int32_t)c->r[4],0); // 800B6124
  if (crb(c,0)) { goto L_800B63A0; } // 800B6128
  cmps(c,0,(int32_t)c->r[4],25); // 800B612C
  if (!crb(c,0)) { goto L_800B63A0; } // 800B6130
  cmps(c,0,(int32_t)c->r[6],0); // 800B6134
  if (crb(c,2)) { goto L_800B617C; } // 800B6138
  c->r[3]=c->r[3]+0x00000068u; // 800B613C
  c->lr=0x800B6144u; f_8004B018(c); // 800B6140
  c->r[4]=c->r[3]|c->r[3]; // 800B6144
  c->r[31]=0u+0x00000000u; // 800B6148
  goto L_800B6174; // 800B614C
L_800B6150:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B6150
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 800B6154
  if (!crb(c,2)) { goto L_800B6168; } // 800B6158
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 800B615C
  W32(c->r[4]+0x00000010u,c->r[31]); // 800B6160
  W32(c->r[4]+0x00000014u,c->r[31]); // 800B6164
L_800B6168:;
  c->r[3]=c->r[28]+0x00000068u; // 800B6168
  c->lr=0x800B6170u; f_8028CCD8(c); // 800B616C
  c->r[4]=c->r[3]|c->r[3]; // 800B6170
L_800B6174:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B6174
  if (!crb(c,2)) { IRQCHK(c); goto L_800B6150; } // 800B6178
L_800B617C:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B617C
  c->lr=0x800B6184u; f_800897FC(c); // 800B6180
  c->r[31]=c->r[3]|c->r[3]; // 800B6184
  c->lr=0x800B618Cu; f_8007B524(c); // 800B6188
  c->r[4]=c->r[31]|c->r[31]; // 800B618C
  c->r[5]=c->r[29]|c->r[29]; // 800B6190
  c->r[6]=0u+0x00000000u; // 800B6194
  c->lr=0x800B619Cu; f_800A1BD8(c); // 800B6198
  cmpu(c,0,c->r[29],0x00000010u); // 800B619C
  if (crb(c,1)) { goto L_800B64C8; } // 800B61A0
  c->r[3]=0u+0x80460000u; // 800B61A4
  c->r[3]=c->r[3]+0xFFFFFF84u; // 800B61A8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800B61AC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B61B0
  c->ctr=c->r[3]; // 800B61B4
  if (true) { switch (c->ctr) { case 0x800B61BCu: goto L_800B61BC; case 0x800B61E8u: goto L_800B61E8; case 0x800B6214u: goto L_800B6214; case 0x800B6240u: goto L_800B6240; case 0x800B626Cu: goto L_800B626C; case 0x800B6298u: goto L_800B6298; case 0x800B62C4u: goto L_800B62C4; case 0x800B62F0u: goto L_800B62F0; case 0x800B631Cu: goto L_800B631C; case 0x800B6348u: goto L_800B6348; case 0x800B6374u: goto L_800B6374; case 0x800B64C8u: goto L_800B64C8; default: break; } dispatch(c,c->ctr); return; } // 800B61B8
L_800B61BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B61BC
  if (crb(c,2)) { goto L_800B64C8; } // 800B61C0
  c->r[3]=0u+0x0000003Du; // 800B61C4
  c->lr=0x800B61CCu; f_801930C4(c); // 800B61C8
  c->r[3]=c->r[28]|c->r[28]; // 800B61CC
  c->lr=0x800B61D4u; f_80089BCC(c); // 800B61D0
  c->r[4]=c->r[3]|c->r[3]; // 800B61D4
  c->r[3]=0u+0x00000000u; // 800B61D8
  c->lr=0x800B61E0u; f_80193100(c); // 800B61DC
  c->lr=0x800B61E4u; f_80193060(c); // 800B61E0
  goto L_800B64C8; // 800B61E4
L_800B61E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B61E8
  if (crb(c,2)) { goto L_800B64C8; } // 800B61EC
  c->r[3]=0u+0x0000001Cu; // 800B61F0
  c->lr=0x800B61F8u; f_801930C4(c); // 800B61F4
  c->r[3]=c->r[28]|c->r[28]; // 800B61F8
  c->lr=0x800B6200u; f_80089BCC(c); // 800B61FC
  c->r[4]=c->r[3]|c->r[3]; // 800B6200
  c->r[3]=0u+0x00000000u; // 800B6204
  c->lr=0x800B620Cu; f_80193100(c); // 800B6208
  c->lr=0x800B6210u; f_80193060(c); // 800B620C
  goto L_800B64C8; // 800B6210
L_800B6214:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6214
  if (crb(c,2)) { goto L_800B64C8; } // 800B6218
  c->r[3]=0u+0x0000006Bu; // 800B621C
  c->lr=0x800B6224u; f_801930C4(c); // 800B6220
  c->r[3]=c->r[28]|c->r[28]; // 800B6224
  c->lr=0x800B622Cu; f_80089BCC(c); // 800B6228
  c->r[4]=c->r[3]|c->r[3]; // 800B622C
  c->r[3]=0u+0x00000000u; // 800B6230
  c->lr=0x800B6238u; f_80193100(c); // 800B6234
  c->lr=0x800B623Cu; f_80193060(c); // 800B6238
  goto L_800B64C8; // 800B623C
L_800B6240:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6240
  if (crb(c,2)) { goto L_800B64C8; } // 800B6244
  c->r[3]=0u+0x0000003Bu; // 800B6248
  c->lr=0x800B6250u; f_801930C4(c); // 800B624C
  c->r[3]=c->r[28]|c->r[28]; // 800B6250
  c->lr=0x800B6258u; f_80089BCC(c); // 800B6254
  c->r[4]=c->r[3]|c->r[3]; // 800B6258
  c->r[3]=0u+0x00000000u; // 800B625C
  c->lr=0x800B6264u; f_80193100(c); // 800B6260
  c->lr=0x800B6268u; f_80193060(c); // 800B6264
  goto L_800B64C8; // 800B6268
L_800B626C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B626C
  if (crb(c,2)) { goto L_800B64C8; } // 800B6270
  c->r[3]=0u+0x00000039u; // 800B6274
  c->lr=0x800B627Cu; f_801930C4(c); // 800B6278
  c->r[3]=c->r[28]|c->r[28]; // 800B627C
  c->lr=0x800B6284u; f_80089BCC(c); // 800B6280
  c->r[4]=c->r[3]|c->r[3]; // 800B6284
  c->r[3]=0u+0x00000000u; // 800B6288
  c->lr=0x800B6290u; f_80193100(c); // 800B628C
  c->lr=0x800B6294u; f_80193060(c); // 800B6290
  goto L_800B64C8; // 800B6294
L_800B6298:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6298
  if (crb(c,2)) { goto L_800B64C8; } // 800B629C
  c->r[3]=0u+0x0000008Bu; // 800B62A0
  c->lr=0x800B62A8u; f_801930C4(c); // 800B62A4
  c->r[3]=c->r[28]|c->r[28]; // 800B62A8
  c->lr=0x800B62B0u; f_80089BCC(c); // 800B62AC
  c->r[4]=c->r[3]|c->r[3]; // 800B62B0
  c->r[3]=0u+0x00000000u; // 800B62B4
  c->lr=0x800B62BCu; f_80193100(c); // 800B62B8
  c->lr=0x800B62C0u; f_80193060(c); // 800B62BC
  goto L_800B64C8; // 800B62C0
L_800B62C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B62C4
  if (crb(c,2)) { goto L_800B64C8; } // 800B62C8
  c->r[3]=0u+0x0000003Fu; // 800B62CC
  c->lr=0x800B62D4u; f_801930C4(c); // 800B62D0
  c->r[3]=c->r[28]|c->r[28]; // 800B62D4
  c->lr=0x800B62DCu; f_80089BCC(c); // 800B62D8
  c->r[4]=c->r[3]|c->r[3]; // 800B62DC
  c->r[3]=0u+0x00000000u; // 800B62E0
  c->lr=0x800B62E8u; f_80193100(c); // 800B62E4
  c->lr=0x800B62ECu; f_80193060(c); // 800B62E8
  goto L_800B64C8; // 800B62EC
L_800B62F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B62F0
  if (crb(c,2)) { goto L_800B64C8; } // 800B62F4
  c->r[3]=0u+0x00000041u; // 800B62F8
  c->lr=0x800B6300u; f_801930C4(c); // 800B62FC
  c->r[3]=c->r[28]|c->r[28]; // 800B6300
  c->lr=0x800B6308u; f_80089BCC(c); // 800B6304
  c->r[4]=c->r[3]|c->r[3]; // 800B6308
  c->r[3]=0u+0x00000000u; // 800B630C
  c->lr=0x800B6314u; f_80193100(c); // 800B6310
  c->lr=0x800B6318u; f_80193060(c); // 800B6314
  goto L_800B64C8; // 800B6318
L_800B631C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B631C
  if (crb(c,2)) { goto L_800B64C8; } // 800B6320
  c->r[3]=0u+0x00000045u; // 800B6324
  c->lr=0x800B632Cu; f_801930C4(c); // 800B6328
  c->r[3]=c->r[28]|c->r[28]; // 800B632C
  c->lr=0x800B6334u; f_80089BCC(c); // 800B6330
  c->r[4]=c->r[3]|c->r[3]; // 800B6334
  c->r[3]=0u+0x00000000u; // 800B6338
  c->lr=0x800B6340u; f_80193100(c); // 800B633C
  c->lr=0x800B6344u; f_80193060(c); // 800B6340
  goto L_800B64C8; // 800B6344
L_800B6348:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6348
  if (crb(c,2)) { goto L_800B64C8; } // 800B634C
  c->r[3]=0u+0x00000043u; // 800B6350
  c->lr=0x800B6358u; f_801930C4(c); // 800B6354
  c->r[3]=c->r[28]|c->r[28]; // 800B6358
  c->lr=0x800B6360u; f_80089BCC(c); // 800B635C
  c->r[4]=c->r[3]|c->r[3]; // 800B6360
  c->r[3]=0u+0x00000000u; // 800B6364
  c->lr=0x800B636Cu; f_80193100(c); // 800B6368
  c->lr=0x800B6370u; f_80193060(c); // 800B636C
  goto L_800B64C8; // 800B6370
L_800B6374:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6374
  if (crb(c,2)) { goto L_800B64C8; } // 800B6378
  c->r[3]=0u+0x00000074u; // 800B637C
  c->lr=0x800B6384u; f_801930C4(c); // 800B6380
  c->r[3]=c->r[28]|c->r[28]; // 800B6384
  c->lr=0x800B638Cu; f_80089BCC(c); // 800B6388
  c->r[4]=c->r[3]|c->r[3]; // 800B638C
  c->r[3]=0u+0x00000000u; // 800B6390
  c->lr=0x800B6398u; f_80193100(c); // 800B6394
  c->lr=0x800B639Cu; f_80193060(c); // 800B6398
  goto L_800B64C8; // 800B639C
L_800B63A0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B63A0
  if (crb(c,2)) { goto L_800B63E8; } // 800B63A4
  c->r[3]=c->r[3]+0x00000078u; // 800B63A8
  c->lr=0x800B63B0u; f_8004B018(c); // 800B63AC
  c->r[4]=c->r[3]|c->r[3]; // 800B63B0
  c->r[31]=0u+0x00000000u; // 800B63B4
  goto L_800B63E0; // 800B63B8
L_800B63BC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B63BC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 800B63C0
  if (!crb(c,2)) { goto L_800B63D4; } // 800B63C4
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 800B63C8
  W32(c->r[4]+0x00000010u,c->r[31]); // 800B63CC
  W32(c->r[4]+0x00000014u,c->r[31]); // 800B63D0
L_800B63D4:;
  c->r[3]=c->r[28]+0x00000078u; // 800B63D4
  c->lr=0x800B63DCu; f_8028CCD8(c); // 800B63D8
  c->r[4]=c->r[3]|c->r[3]; // 800B63DC
L_800B63E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B63E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800B63BC; } // 800B63E4
L_800B63E8:;
  cmps(c,0,(int32_t)c->r[29],109); // 800B63E8
  if (crb(c,2)) { goto L_800B6444; } // 800B63EC
  if (!crb(c,0)) { goto L_800B64C8; } // 800B63F0
  cmps(c,0,(int32_t)c->r[29],102); // 800B63F4
  if (crb(c,2)) { goto L_800B6400; } // 800B63F8
  goto L_800B64C8; // 800B63FC
L_800B6400:;
  c->r[3]=c->r[28]|c->r[28]; // 800B6400
  c->r[4]=0u+0x0000006Du; // 800B6404
  c->lr=0x800B640Cu; f_800B56BC(c); // 800B6408
  cmps(c,0,(int32_t)c->r[3],0); // 800B640C
  if (!crb(c,2)) { goto L_800B642C; } // 800B6410
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6414
  c->r[4]=0u+0x00000001u; // 800B6418
  c->lr=0x800B6420u; f_80089840(c); // 800B641C
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6420
  c->r[4]=0u+0x00000000u; // 800B6424
  c->lr=0x800B642Cu; f_80089888(c); // 800B6428
L_800B642C:;
  c->r[3]=c->r[28]|c->r[28]; // 800B642C
  c->r[4]=0u+0x0000006Bu; // 800B6430
  c->r[5]=0u+0x00000000u; // 800B6434
  c->r[6]=0u+0x00000001u; // 800B6438
  c->lr=0x800B6440u; f_800B60FC(c); // 800B643C
  goto L_800B64C8; // 800B6440
L_800B6444:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6444
  c->r[4]=0u+0x00000001u; // 800B6448
  c->lr=0x800B6450u; f_80089840(c); // 800B644C
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6450
  c->r[4]=0u+0x00000000u; // 800B6454
  c->lr=0x800B645Cu; f_80089888(c); // 800B6458
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B645C
  c->r[4]=0u+0x00000000u; // 800B6460
  c->lr=0x800B6468u; f_8008982C(c); // 800B6464
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6468
  c->r[4]=0u+0x00000000u; // 800B646C
  {uint32_t ea=c->r[2]+0xFFFF87D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6470
  c->r[5]=0u+0x00000000u; // 800B6474
  c->r[6]=0u+0x00000001u; // 800B6478
  c->lr=0x800B6480u; f_8007FDCC(c); // 800B647C
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6480
  {uint32_t ea=c->r[2]+0xFFFF87DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6484
  c->r[4]=0u+0x00000001u; // 800B6488
  c->lr=0x800B6490u; f_800800F4(c); // 800B648C
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6490
  c->lr=0x800B6498u; f_80085AD4(c); // 800B6494
  c->r[3]=R32(c->r[28]+0x00000008u); // 800B6498
  c->lr=0x800B64A0u; f_80080D94(c); // 800B649C
  cmps(c,0,(int32_t)c->r[30],0); // 800B64A0
  if (crb(c,2)) { goto L_800B64C8; } // 800B64A4
  c->r[3]=0u+0x000000B2u; // 800B64A8
  c->lr=0x800B64B0u; f_801930C4(c); // 800B64AC
  c->r[3]=c->r[28]|c->r[28]; // 800B64B0
  c->lr=0x800B64B8u; f_80089BCC(c); // 800B64B4
  c->r[4]=c->r[3]|c->r[3]; // 800B64B8
  c->r[3]=0u+0x00000000u; // 800B64BC
  c->lr=0x800B64C4u; f_80193100(c); // 800B64C0
  c->lr=0x800B64C8u; f_80193060(c); // 800B64C4
L_800B64C8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B64C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B64CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B64D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B64D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B64D8
  c->lr=c->r[0]; // 800B64DC
  c->r[1]=c->r[1]+0x00000020u; // 800B64E0
  return; // 800B64E4
}

// fn_800B64E8
void f_800B64E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B64E8
  c->r[0]=c->lr; // 800B64EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B64F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B64F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B64F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B64FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B6500
  c->r[28]=c->r[3]|c->r[3]; // 800B6504
  c->r[29]=c->r[4]|c->r[4]; // 800B6508
  c->r[3]=c->r[3]+0x00000068u; // 800B650C
  c->lr=0x800B6514u; f_8004B018(c); // 800B6510
  c->r[30]=c->r[3]|c->r[3]; // 800B6514
  c->r[31]=0u+0x00000000u; // 800B6518
  goto L_800B6548; // 800B651C
L_800B6520:;
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800B6520
  c->r[3]=c->r[28]|c->r[28]; // 800B6524
  c->r[4]=R32(c->r[30]+0x00000008u); // 800B6528
  c->r[5]=c->r[29]|c->r[29]; // 800B652C
  c->r[6]=0u+0x00000000u; // 800B6530
  c->lr=0x800B6538u; f_800B60FC(c); // 800B6534
  c->r[3]=c->r[28]+0x00000068u; // 800B6538
  c->r[4]=c->r[30]|c->r[30]; // 800B653C
  c->lr=0x800B6544u; f_8028CCD8(c); // 800B6540
  c->r[30]=c->r[3]|c->r[3]; // 800B6544
L_800B6548:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B6548
  if (!crb(c,2)) { IRQCHK(c); goto L_800B6520; } // 800B654C
  c->r[3]=c->r[28]+0x00000078u; // 800B6550
  c->lr=0x800B6558u; f_8004B018(c); // 800B6554
  c->r[30]=c->r[3]|c->r[3]; // 800B6558
  c->r[31]=0u+0x00000000u; // 800B655C
  goto L_800B658C; // 800B6560
L_800B6564:;
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800B6564
  c->r[3]=c->r[28]|c->r[28]; // 800B6568
  c->r[4]=R32(c->r[30]+0x00000008u); // 800B656C
  c->r[5]=c->r[29]|c->r[29]; // 800B6570
  c->r[6]=0u+0x00000000u; // 800B6574
  c->lr=0x800B657Cu; f_800B60FC(c); // 800B6578
  c->r[3]=c->r[28]+0x00000078u; // 800B657C
  c->r[4]=c->r[30]|c->r[30]; // 800B6580
  c->lr=0x800B6588u; f_8028CCD8(c); // 800B6584
  c->r[30]=c->r[3]|c->r[3]; // 800B6588
L_800B658C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B658C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B6564; } // 800B6590
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6594
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6598
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B659C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B65A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B65A4
  c->lr=c->r[0]; // 800B65A8
  c->r[1]=c->r[1]+0x00000020u; // 800B65AC
  return; // 800B65B0
}

// fn_800B65B4
void f_800B65B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B65B4
  c->r[0]=c->lr; // 800B65B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B65BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B65C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B65C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B65C8
  c->r[29]=c->r[3]|c->r[3]; // 800B65CC
  c->r[30]=c->r[4]|c->r[4]; // 800B65D0
  c->r[3]=c->r[3]+0x00000084u; // 800B65D4
  c->lr=0x800B65DCu; f_8004B018(c); // 800B65D8
  c->r[4]=c->r[3]|c->r[3]; // 800B65DC
  c->r[31]=0u+0x00000000u; // 800B65E0
  goto L_800B6608; // 800B65E4
L_800B65E8:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 800B65E8
  if (!crb(c,2)) { goto L_800B65F8; } // 800B65EC
  c->r[3]=R32(c->r[4]+0x00000008u); // 800B65F0
  goto L_800B6614; // 800B65F4
L_800B65F8:;
  c->r[3]=c->r[29]+0x00000084u; // 800B65F8
  c->lr=0x800B6600u; f_8028CCD8(c); // 800B65FC
  c->r[4]=c->r[3]|c->r[3]; // 800B6600
  c->r[31]=c->r[31]+0x00000001u; // 800B6604
L_800B6608:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B6608
  if (!crb(c,2)) { IRQCHK(c); goto L_800B65E8; } // 800B660C
  c->r[3]=0u+0x0000007Au; // 800B6610
L_800B6614:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6614
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6618
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B661C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6620
  c->lr=c->r[0]; // 800B6624
  c->r[1]=c->r[1]+0x00000020u; // 800B6628
  return; // 800B662C
}

// fn_800B6630
void f_800B6630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6630
  c->r[0]=c->lr; // 800B6634
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6638
  c->r[11]=c->r[1]+0x00000020u; // 800B663C
  c->lr=0x800B6644u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B6640
  c->r[26]=c->r[3]|c->r[3]; // 800B6644
  c->r[27]=c->r[4]|c->r[4]; // 800B6648
  c->r[28]=c->r[5]|c->r[5]; // 800B664C
  c->r[29]=c->r[6]|c->r[6]; // 800B6650
  c->lr=0x800B6658u; f_80056B5C(c); // 800B6654
  c->r[30]=c->r[3]|c->r[3]; // 800B6658
  c->lr=0x800B6660u; f_8007B524(c); // 800B665C
  c->lr=0x800B6664u; f_800A1B2C(c); // 800B6660
  c->lr=0x800B6668u; f_80056B54(c); // 800B6664
  c->r[3]=0u+0x00000018u; // 800B6668
  c->lr=0x800B6670u; f_80047B64(c); // 800B666C
  c->r[31]=c->r[3]|c->r[3]; // 800B6670
  c->r[3]=c->r[30]|c->r[30]; // 800B6674
  c->lr=0x800B667Cu; f_80056B54(c); // 800B6678
  W32(c->r[31]+0x00000008u,c->r[27]); // 800B667C
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 800B6680
  c->r[3]=c->r[29]|c->r[29]; // 800B6684
  c->r[4]=0u+0x00000000u; // 800B6688
  c->r[5]=0u+0x00000064u; // 800B668C
  c->lr=0x800B6694u; f_800592BC(c); // 800B6690
  W32(c->r[31]+0x00000010u,c->r[3]); // 800B6694
  c->r[0]=0u+0x00000000u; // 800B6698
  W32(c->r[31]+0x00000014u,c->r[0]); // 800B669C
  c->r[3]=c->r[26]+0x00000084u; // 800B66A0
  c->r[4]=c->r[31]|c->r[31]; // 800B66A4
  c->lr=0x800B66ACu; f_8028CA70(c); // 800B66A8
  c->r[3]=R32(c->r[26]+0x00000090u); // 800B66AC
  c->r[0]=c->r[3]+0x00000001u; // 800B66B0
  W32(c->r[26]+0x00000090u,c->r[0]); // 800B66B4
  c->r[11]=c->r[1]+0x00000020u; // 800B66B8
  c->lr=0x800B66C0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B66BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B66C0
  c->lr=c->r[0]; // 800B66C4
  c->r[1]=c->r[1]+0x00000020u; // 800B66C8
  return; // 800B66CC
}

// fn_800B66D0
void f_800B66D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B66D0
  c->r[0]=c->lr; // 800B66D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B66D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B66DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B66E0
  c->r[30]=c->r[3]|c->r[3]; // 800B66E4
  c->r[31]=c->r[4]|c->r[4]; // 800B66E8
  c->r[3]=c->r[3]+0x00000084u; // 800B66EC
  c->lr=0x800B66F4u; f_8004B018(c); // 800B66F0
  c->r[4]=c->r[3]|c->r[3]; // 800B66F4
  goto L_800B671C; // 800B66F8
L_800B66FC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B66FC
  cmpu(c,0,c->r[0],c->r[31]); // 800B6700
  if (!crb(c,2)) { goto L_800B6710; } // 800B6704
  c->r[3]=c->r[4]|c->r[4]; // 800B6708
  goto L_800B6728; // 800B670C
L_800B6710:;
  c->r[3]=c->r[30]+0x00000084u; // 800B6710
  c->lr=0x800B6718u; f_8028CCD8(c); // 800B6714
  c->r[4]=c->r[3]|c->r[3]; // 800B6718
L_800B671C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B671C
  if (!crb(c,2)) { IRQCHK(c); goto L_800B66FC; } // 800B6720
  c->r[3]=0u+0x00000000u; // 800B6724
L_800B6728:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6728
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B672C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6730
  c->lr=c->r[0]; // 800B6734
  c->r[1]=c->r[1]+0x00000010u; // 800B6738
  return; // 800B673C
}

// fn_800B6740
void f_800B6740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6740
  c->r[0]=c->lr; // 800B6744
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6748
  c->lr=0x800B6750u; f_800B66D0(c); // 800B674C
  c->r[0]=0u-c->r[3]; // 800B6750
  c->r[0]=c->r[0]|c->r[3]; // 800B6754
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B6758
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B675C
  c->lr=c->r[0]; // 800B6760
  c->r[1]=c->r[1]+0x00000010u; // 800B6764
  return; // 800B6768
}

// fn_800B676C
void f_800B676C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B676C
  c->r[0]=c->lr; // 800B6770
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6774
  c->lr=0x800B677Cu; f_800B66D0(c); // 800B6778
  cmps(c,0,(int32_t)c->r[3],0); // 800B677C
  if (crb(c,2)) { goto L_800B678C; } // 800B6780
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800B6784
  goto L_800B6790; // 800B6788
L_800B678C:;
  c->r[3]=0u+0x00000016u; // 800B678C
L_800B6790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6790
  c->lr=c->r[0]; // 800B6794
  c->r[1]=c->r[1]+0x00000010u; // 800B6798
  return; // 800B679C
}

// fn_800B67A0
void f_800B67A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B67A0
  c->r[0]=c->lr; // 800B67A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B67A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B67AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B67B0
  c->r[30]=c->r[5]|c->r[5]; // 800B67B4
  c->lr=0x800B67BCu; f_800B66D0(c); // 800B67B8
  c->r[31]=c->r[3]|c->r[3]; // 800B67BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B67C0
  if (crb(c,2)) { goto L_800B67DC; } // 800B67C4
  c->r[3]=c->r[30]|c->r[30]; // 800B67C8
  c->r[4]=0u+0x00000000u; // 800B67CC
  c->r[5]=0u+0x00000064u; // 800B67D0
  c->lr=0x800B67D8u; f_800592BC(c); // 800B67D4
  W32(c->r[31]+0x00000010u,c->r[3]); // 800B67D8
L_800B67DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B67DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B67E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B67E4
  c->lr=c->r[0]; // 800B67E8
  c->r[1]=c->r[1]+0x00000010u; // 800B67EC
  return; // 800B67F0
}

// fn_800B67F4
void f_800B67F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B67F4
  c->r[0]=c->lr; // 800B67F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B67FC
  c->lr=0x800B6804u; f_800B66D0(c); // 800B6800
  cmps(c,0,(int32_t)c->r[3],0); // 800B6804
  if (crb(c,2)) { goto L_800B6814; } // 800B6808
  c->r[3]=R32(c->r[3]+0x00000010u); // 800B680C
  goto L_800B6818; // 800B6810
L_800B6814:;
  c->r[3]=0u+0xFFFFFFFFu; // 800B6814
L_800B6818:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6818
  c->lr=c->r[0]; // 800B681C
  c->r[1]=c->r[1]+0x00000010u; // 800B6820
  return; // 800B6824
}

// fn_800B6828
void f_800B6828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6828
  c->r[0]=c->lr; // 800B682C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6834
  c->r[31]=c->r[5]|c->r[5]; // 800B6838
  c->lr=0x800B6840u; f_800B66D0(c); // 800B683C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6840
  if (crb(c,2)) { goto L_800B684C; } // 800B6844
  W32(c->r[3]+0x00000014u,c->r[31]); // 800B6848
L_800B684C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B684C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6850
  c->lr=c->r[0]; // 800B6854
  c->r[1]=c->r[1]+0x00000010u; // 800B6858
  return; // 800B685C
}

// fn_800B6860
void f_800B6860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6860
  c->r[0]=c->lr; // 800B6864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6868
  c->lr=0x800B6870u; f_800B66D0(c); // 800B686C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6870
  if (crb(c,2)) { goto L_800B6880; } // 800B6874
  c->r[3]=R32(c->r[3]+0x00000014u); // 800B6878
  goto L_800B6884; // 800B687C
L_800B6880:;
  c->r[3]=0u+0xFFFFFFFEu; // 800B6880
L_800B6884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6884
  c->lr=c->r[0]; // 800B6888
  c->r[1]=c->r[1]+0x00000010u; // 800B688C
  return; // 800B6890
}

// fn_800B6894
void f_800B6894(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6894
  c->r[0]=c->lr; // 800B6898
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B689C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B68A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B68A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B68A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B68AC
  c->r[28]=c->r[3]|c->r[3]; // 800B68B0
  c->r[3]=c->r[3]+0x00000084u; // 800B68B4
  c->lr=0x800B68BCu; f_8004B018(c); // 800B68B8
  c->r[31]=c->r[3]|c->r[3]; // 800B68BC
  goto L_800B6908; // 800B68C0
L_800B68C4:;
  c->r[3]=c->r[28]+0x00000084u; // 800B68C4
  c->r[4]=c->r[31]|c->r[31]; // 800B68C8
  c->lr=0x800B68D0u; f_8028CCD8(c); // 800B68CC
  c->r[30]=c->r[3]|c->r[3]; // 800B68D0
  c->r[3]=c->r[28]+0x00000084u; // 800B68D4
  c->r[4]=c->r[31]|c->r[31]; // 800B68D8
  c->lr=0x800B68E0u; f_8028CC6C(c); // 800B68DC
  c->lr=0x800B68E4u; f_80056B5C(c); // 800B68E0
  c->r[29]=c->r[3]|c->r[3]; // 800B68E4
  c->lr=0x800B68ECu; f_8007B524(c); // 800B68E8
  c->lr=0x800B68F0u; f_800A1B2C(c); // 800B68EC
  c->lr=0x800B68F4u; f_80056B54(c); // 800B68F0
  c->r[3]=c->r[31]|c->r[31]; // 800B68F4
  c->lr=0x800B68FCu; f_80047B20(c); // 800B68F8
  c->r[3]=c->r[29]|c->r[29]; // 800B68FC
  c->lr=0x800B6904u; f_80056B54(c); // 800B6900
  c->r[31]=c->r[30]|c->r[30]; // 800B6904
L_800B6908:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B6908
  if (!crb(c,2)) { IRQCHK(c); goto L_800B68C4; } // 800B690C
  c->r[0]=0u+0x00000000u; // 800B6910
  W32(c->r[28]+0x00000090u,c->r[0]); // 800B6914
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6918
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B691C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6920
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B6924
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6928
  c->lr=c->r[0]; // 800B692C
  c->r[1]=c->r[1]+0x00000020u; // 800B6930
  return; // 800B6934
}

// fn_800B6938
void f_800B6938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6938
  c->r[0]=c->lr; // 800B693C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6940
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6944
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6948
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B694C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B6950
  c->r[28]=c->r[3]|c->r[3]; // 800B6954
  c->r[29]=c->r[4]|c->r[4]; // 800B6958
  c->r[0]=R32(c->r[3]+0x000000A0u); // 800B695C
  cmps(c,0,(int32_t)c->r[0],6); // 800B6960
  if (!crb(c,0)) { goto L_800B69AC; } // 800B6964
  c->lr=0x800B696Cu; f_80056B5C(c); // 800B6968
  c->r[30]=c->r[3]|c->r[3]; // 800B696C
  c->lr=0x800B6974u; f_8007B524(c); // 800B6970
  c->lr=0x800B6978u; f_800A1B2C(c); // 800B6974
  c->lr=0x800B697Cu; f_80056B54(c); // 800B6978
  c->r[3]=0u+0x0000000Cu; // 800B697C
  c->lr=0x800B6984u; f_80047B64(c); // 800B6980
  c->r[31]=c->r[3]|c->r[3]; // 800B6984
  c->r[3]=c->r[30]|c->r[30]; // 800B6988
  c->lr=0x800B6990u; f_80056B54(c); // 800B698C
  W32(c->r[31]+0x00000008u,c->r[29]); // 800B6990
  c->r[3]=c->r[28]+0x00000094u; // 800B6994
  c->r[4]=c->r[31]|c->r[31]; // 800B6998
  c->lr=0x800B69A0u; f_8028CA70(c); // 800B699C
  c->r[3]=R32(c->r[28]+0x000000A0u); // 800B69A0
  c->r[0]=c->r[3]+0x00000001u; // 800B69A4
  W32(c->r[28]+0x000000A0u,c->r[0]); // 800B69A8
L_800B69AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B69AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B69B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B69B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B69B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B69BC
  c->lr=c->r[0]; // 800B69C0
  c->r[1]=c->r[1]+0x00000020u; // 800B69C4
  return; // 800B69C8
}

// fn_800B69CC
void f_800B69CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B69CC
  c->r[0]=c->lr; // 800B69D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B69D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B69D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B69DC
  c->r[30]=c->r[3]|c->r[3]; // 800B69E0
  c->r[31]=c->r[4]|c->r[4]; // 800B69E4
  c->r[3]=c->r[3]+0x00000094u; // 800B69E8
  c->lr=0x800B69F0u; f_8004B018(c); // 800B69EC
  c->r[4]=c->r[3]|c->r[3]; // 800B69F0
  goto L_800B6A18; // 800B69F4
L_800B69F8:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B69F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800B69FC
  if (!crb(c,2)) { goto L_800B6A0C; } // 800B6A00
  c->r[3]=0u+0x00000001u; // 800B6A04
  goto L_800B6A24; // 800B6A08
L_800B6A0C:;
  c->r[3]=c->r[30]+0x00000094u; // 800B6A0C
  c->lr=0x800B6A14u; f_8028CCD8(c); // 800B6A10
  c->r[4]=c->r[3]|c->r[3]; // 800B6A14
L_800B6A18:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B6A18
  if (!crb(c,2)) { IRQCHK(c); goto L_800B69F8; } // 800B6A1C
  c->r[3]=0u+0x00000000u; // 800B6A20
L_800B6A24:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6A24
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B6A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6A2C
  c->lr=c->r[0]; // 800B6A30
  c->r[1]=c->r[1]+0x00000010u; // 800B6A34
  return; // 800B6A38
}

// fn_800B6A3C
void f_800B6A3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6A3C
  c->r[0]=c->lr; // 800B6A40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6A44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6A48
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6A4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6A50
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B6A54
  c->r[28]=c->r[3]|c->r[3]; // 800B6A58
  c->r[3]=c->r[3]+0x00000094u; // 800B6A5C
  c->lr=0x800B6A64u; f_8004B018(c); // 800B6A60
  c->r[31]=c->r[3]|c->r[3]; // 800B6A64
  goto L_800B6AB0; // 800B6A68
L_800B6A6C:;
  c->r[3]=c->r[28]+0x00000094u; // 800B6A6C
  c->r[4]=c->r[31]|c->r[31]; // 800B6A70
  c->lr=0x800B6A78u; f_8028CCD8(c); // 800B6A74
  c->r[30]=c->r[3]|c->r[3]; // 800B6A78
  c->r[3]=c->r[28]+0x00000094u; // 800B6A7C
  c->r[4]=c->r[31]|c->r[31]; // 800B6A80
  c->lr=0x800B6A88u; f_8028CC6C(c); // 800B6A84
  c->lr=0x800B6A8Cu; f_80056B5C(c); // 800B6A88
  c->r[29]=c->r[3]|c->r[3]; // 800B6A8C
  c->lr=0x800B6A94u; f_8007B524(c); // 800B6A90
  c->lr=0x800B6A98u; f_800A1B2C(c); // 800B6A94
  c->lr=0x800B6A9Cu; f_80056B54(c); // 800B6A98
  c->r[3]=c->r[31]|c->r[31]; // 800B6A9C
  c->lr=0x800B6AA4u; f_80047B20(c); // 800B6AA0
  c->r[3]=c->r[29]|c->r[29]; // 800B6AA4
  c->lr=0x800B6AACu; f_80056B54(c); // 800B6AA8
  c->r[31]=c->r[30]|c->r[30]; // 800B6AAC
L_800B6AB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B6AB0
  if (!crb(c,2)) { IRQCHK(c); goto L_800B6A6C; } // 800B6AB4
  c->r[0]=0u+0x00000000u; // 800B6AB8
  W32(c->r[28]+0x00000090u,c->r[0]); // 800B6ABC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6AC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6AC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6AC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B6ACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6AD0
  c->lr=c->r[0]; // 800B6AD4
  c->r[1]=c->r[1]+0x00000020u; // 800B6AD8
  return; // 800B6ADC
}

// fn_800B6AE0
void f_800B6AE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6AE0
  c->r[0]=c->lr; // 800B6AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6AE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6AEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6AF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6AF4
  c->r[29]=c->r[3]|c->r[3]; // 800B6AF8
  c->r[30]=c->r[4]|c->r[4]; // 800B6AFC
  c->lr=0x800B6B04u; f_800B6BC4(c); // 800B6B00
  c->r[31]=c->r[3]|c->r[3]; // 800B6B04
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B08
  if (crb(c,2)) { goto L_800B6B1C; } // 800B6B0C
  c->lr=0x800B6B14u; f_80074E68(c); // 800B6B10
  c->r[4]=c->r[31]|c->r[31]; // 800B6B14
  c->lr=0x800B6B1Cu; f_8017A3C0(c); // 800B6B18
L_800B6B1C:;
  c->r[3]=c->r[29]|c->r[29]; // 800B6B1C
  c->r[4]=c->r[30]|c->r[30]; // 800B6B20
  c->lr=0x800B6B28u; f_800B6C14(c); // 800B6B24
  c->r[4]=c->r[3]|c->r[3]; // 800B6B28
  c->r[3]=c->r[29]+0x000000A8u; // 800B6B2C
  c->lr=0x800B6B34u; f_80179868(c); // 800B6B30
  W32(c->r[29]+0x000000A4u,c->r[3]); // 800B6B34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6B38
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6B3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6B40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6B44
  c->lr=c->r[0]; // 800B6B48
  c->r[1]=c->r[1]+0x00000020u; // 800B6B4C
  return; // 800B6B50
}

// fn_800B6B54
void f_800B6B54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6B54
  c->r[0]=c->lr; // 800B6B58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6B5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6B60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6B64
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6B68
  c->r[29]=c->r[3]|c->r[3]; // 800B6B6C
  c->r[30]=c->r[4]|c->r[4]; // 800B6B70
  cmps(c,0,(int32_t)c->r[4],0); // 800B6B74
  if (crb(c,2)) { goto L_800B6BA8; } // 800B6B78
  c->lr=0x800B6B80u; f_800B6BC4(c); // 800B6B7C
  c->r[31]=c->r[3]|c->r[3]; // 800B6B80
  cmps(c,0,(int32_t)c->r[3],0); // 800B6B84
  if (crb(c,2)) { goto L_800B6B98; } // 800B6B88
  c->lr=0x800B6B90u; f_80074E68(c); // 800B6B8C
  c->r[4]=c->r[31]|c->r[31]; // 800B6B90
  c->lr=0x800B6B98u; f_8017A3C0(c); // 800B6B94
L_800B6B98:;
  c->r[3]=c->r[29]+0x000000A8u; // 800B6B98
  c->r[4]=c->r[30]|c->r[30]; // 800B6B9C
  c->lr=0x800B6BA4u; f_80179868(c); // 800B6BA0
  W32(c->r[29]+0x000000A4u,c->r[3]); // 800B6BA4
L_800B6BA8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6BA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6BAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6BB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6BB4
  c->lr=c->r[0]; // 800B6BB8
  c->r[1]=c->r[1]+0x00000020u; // 800B6BBC
  return; // 800B6BC0
}

// fn_800B6BC4
void f_800B6BC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6BC4
  c->r[0]=c->lr; // 800B6BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6BD0
  c->r[31]=c->r[3]|c->r[3]; // 800B6BD4
  c->r[4]=R32(c->r[3]+0x000000A4u); // 800B6BD8
  c->r[0]=c->r[4]+0x00010000u; // 800B6BDC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B6BE0
  if (!crb(c,2)) { goto L_800B6BF0; } // 800B6BE4
  c->r[3]=0u+0x00000000u; // 800B6BE8
  goto L_800B6C00; // 800B6BEC
L_800B6BF0:;
  c->r[3]=c->r[3]+0x000000A8u; // 800B6BF0
  c->lr=0x800B6BF8u; f_80179984(c); // 800B6BF4
  c->r[0]=0u+0xFFFFFFFFu; // 800B6BF8
  W32(c->r[31]+0x000000A4u,c->r[0]); // 800B6BFC
L_800B6C00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6C00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6C04
  c->lr=c->r[0]; // 800B6C08
  c->r[1]=c->r[1]+0x00000010u; // 800B6C0C
  return; // 800B6C10
}

// fn_800B6C14
void f_800B6C14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6C14
  c->r[0]=c->lr; // 800B6C18
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B6C1C
  c->r[11]=c->r[1]+0x000000E0u; // 800B6C20
  c->lr=0x800B6C28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B6C24
  c->r[27]=c->r[3]|c->r[3]; // 800B6C28
  c->r[30]=c->r[4]|c->r[4]; // 800B6C2C
  c->lr=0x800B6C34u; f_80074E68(c); // 800B6C30
  c->lr=0x800B6C38u; f_8017A2D8(c); // 800B6C34
  c->r[31]=c->r[3]|c->r[3]; // 800B6C38
  c->r[3]=c->r[1]+0x00000008u; // 800B6C3C
  c->lr=0x800B6C44u; f_8008A590(c); // 800B6C40
  c->r[3]=c->r[1]+0x00000008u; // 800B6C44
  c->r[4]=c->r[30]|c->r[30]; // 800B6C48
  c->lr=0x800B6C50u; f_80178974(c); // 800B6C4C
  cmpu(c,0,c->r[30],0x000001F7u); // 800B6C50
  if (!crb(c,2)) { goto L_800B6CAC; } // 800B6C54
  c->r[3]=0u+0x00000001u; // 800B6C58
  c->r[4]=R32(c->r[27]+0x00000000u); // 800B6C5C
  c->r[4]=R32(c->r[4]+0x0000006Cu); // 800B6C60
  c->r[4]=c->r[4]+0x00000003u; // 800B6C64
  c->lr=0x800B6C6Cu; f_80089D70(c); // 800B6C68
  c->r[29]=c->r[3]|c->r[3]; // 800B6C6C
  c->r[3]=0u+0x00000001u; // 800B6C70
  c->r[4]=R32(c->r[27]+0x00000000u); // 800B6C74
  c->r[4]=R32(c->r[4]+0x0000006Cu); // 800B6C78
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 800B6C7C
  c->lr=0x800B6C84u; f_80089D70(c); // 800B6C80
  c->r[28]=c->r[3]|c->r[3]; // 800B6C84
  c->lr=0x800B6C8Cu; f_8005C538(c); // 800B6C88
  c->r[4]=c->r[29]-c->r[28]; // 800B6C8C
  c->r[4]=c->r[4]+0x00000001u; // 800B6C90
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800B6C94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800B6C98
  c->r[0]=c->r[3]-c->r[0]; // 800B6C9C
  c->r[0]=c->r[28]+c->r[0]; // 800B6CA0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6CA4
  goto L_800B6D68; // 800B6CA8
L_800B6CAC:;
  cmpu(c,0,c->r[30],0x000001F6u); // 800B6CAC
  if (!crb(c,2)) { goto L_800B6D68; } // 800B6CB0
  c->r[28]=R32(c->r[27]+0x00000000u); // 800B6CB4
  c->r[3]=c->r[27]|c->r[27]; // 800B6CB8
  c->lr=0x800B6CC0u; f_8009F4E8(c); // 800B6CBC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800B6CC0
  c->r[0]=R32(c->r[28]+0x00000078u); // 800B6CC4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800B6CC8
  c->r[0]=R32(c->r[28]+0x00000074u); // 800B6CCC
  c->r[27]=c->r[0]+c->r[3]; // 800B6CD0
  c->r[3]=0u+0x00000001u; // 800B6CD4
  {uint32_t ea=c->r[2]+0xFFFF87D0u; c->f[1]=RF64(ea);} // 800B6CD8
  c->r[0]=c->r[27]^0x80000000u; // 800B6CDC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B6CE0
  c->r[29]=0u+0x43300000u; // 800B6CE4
  W32(c->r[1]+0x000000A0u,c->r[29]); // 800B6CE8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 800B6CEC
  c->f[1]=c->f[0]-c->f[1]; // 800B6CF0
  {uint32_t ea=c->r[2]+0xFFFF87C0u; c->f[0]=RF64(ea);} // 800B6CF4
  c->f[0]=c->f[0]*c->f[1]; // 800B6CF8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B6CFC
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 800B6D00
  c->r[4]=R32(c->r[1]+0x000000ACu); // 800B6D04
  c->lr=0x800B6D0Cu; f_80089D70(c); // 800B6D08
  c->r[28]=c->r[3]|c->r[3]; // 800B6D0C
  c->r[3]=0u+0x00000001u; // 800B6D10
  {uint32_t ea=c->r[2]+0xFFFF87D0u; c->f[1]=RF64(ea);} // 800B6D14
  c->r[0]=c->r[27]^0x80000000u; // 800B6D18
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800B6D1C
  W32(c->r[1]+0x000000B0u,c->r[29]); // 800B6D20
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 800B6D24
  c->f[1]=c->f[0]-c->f[1]; // 800B6D28
  {uint32_t ea=c->r[2]+0xFFFF87C8u; c->f[0]=RF64(ea);} // 800B6D2C
  c->f[0]=c->f[0]*c->f[1]; // 800B6D30
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B6D34
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 800B6D38
  c->r[4]=R32(c->r[1]+0x000000BCu); // 800B6D3C
  c->lr=0x800B6D44u; f_80089D70(c); // 800B6D40
  c->r[29]=c->r[3]|c->r[3]; // 800B6D44
  c->lr=0x800B6D4Cu; f_8005C538(c); // 800B6D48
  c->r[4]=c->r[28]-c->r[29]; // 800B6D4C
  c->r[4]=c->r[4]+0x00000001u; // 800B6D50
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800B6D54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800B6D58
  c->r[0]=c->r[3]-c->r[0]; // 800B6D5C
  c->r[0]=c->r[29]+c->r[0]; // 800B6D60
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6D64
L_800B6D68:;
  c->lr=0x800B6D6Cu; f_800F4430(c); // 800B6D68
  c->r[3]=c->r[3]+0x00000960u; // 800B6D6C
  c->r[4]=c->r[30]|c->r[30]; // 800B6D70
  c->lr=0x800B6D78u; f_8017B6F0(c); // 800B6D74
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B6D78
  cmpu(c,0,c->r[0],0x00000001u); // 800B6D7C
  if (crb(c,1)) { goto L_800B6DC0; } // 800B6D80
  c->r[3]=c->r[1]+0x00000008u; // 800B6D84
  c->r[4]=0u+0x00000001u; // 800B6D88
  c->lr=0x800B6D90u; f_80178B20(c); // 800B6D8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6D90
  if (!crb(c,2)) { goto L_800B6DC0; } // 800B6D94
  c->r[3]=c->r[1]+0x00000008u; // 800B6D98
  c->r[4]=0u+0x00000000u; // 800B6D9C
  c->r[5]=0u+0x00000000u; // 800B6DA0
  c->lr=0x800B6DA8u; f_80178BC4(c); // 800B6DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800B6DA8
  if (crb(c,2)) { goto L_800B6DC0; } // 800B6DAC
  c->r[0]=0u+0x00000001u; // 800B6DB0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B6DB4
  c->r[0]=0u+0x00000000u; // 800B6DB8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B6DBC
L_800B6DC0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6DC0
  c->r[4]=c->r[1]+0x00000008u; // 800B6DC4
  c->r[5]=0u+0x00000001u; // 800B6DC8
  c->lr=0x800B6DD0u; f_80178F64(c); // 800B6DCC
  c->r[3]=c->r[31]|c->r[31]; // 800B6DD0
  c->r[11]=c->r[1]+0x000000E0u; // 800B6DD4
  c->lr=0x800B6DDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B6DD8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800B6DDC
  c->lr=c->r[0]; // 800B6DE0
  c->r[1]=c->r[1]+0x000000E0u; // 800B6DE4
  return; // 800B6DE8
}

// fn_800B6DEC
void f_800B6DEC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800B6DEC
  c->r[3]=c->r[3]+c->r[0]; // 800B6DF0
  c->r[3]=R32(c->r[3]+0x000000F0u); // 800B6DF4
  return; // 800B6DF8
}

// fn_800B6DFC
void f_800B6DFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6DFC
  c->r[0]=c->lr; // 800B6E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6E08
  c->r[31]=c->r[3]|c->r[3]; // 800B6E0C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800B6E10
  c->r[3]=R32(c->r[3]+0x00000020u); // 800B6E14
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B6E18
  if (crb(c,2)) { goto L_800B6E30; } // 800B6E1C
  c->r[3]=c->r[3]+c->r[4]; // 800B6E20
  c->r[4]=c->r[0]|c->r[0]; // 800B6E24
  c->lr=0x800B6E2Cu; f_80089D80(c); // 800B6E28
  W32(c->r[31]+0x00000020u,c->r[3]); // 800B6E2C
L_800B6E30:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6E34
  c->lr=c->r[0]; // 800B6E38
  c->r[1]=c->r[1]+0x00000010u; // 800B6E3C
  return; // 800B6E40
}

// fn_800B6E44
void f_800B6E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6E44
  c->r[0]=c->lr; // 800B6E48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6E4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6E50
  c->r[31]=c->r[3]|c->r[3]; // 800B6E54
  c->r[0]=R32(c->r[3]+0x00000020u); // 800B6E58
  c->r[3]=c->r[0]-c->r[4]; // 800B6E5C
  c->r[4]=0u+0x00000000u; // 800B6E60
  c->lr=0x800B6E68u; f_80089D70(c); // 800B6E64
  W32(c->r[31]+0x00000020u,c->r[3]); // 800B6E68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6E6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6E70
  c->lr=c->r[0]; // 800B6E74
  c->r[1]=c->r[1]+0x00000010u; // 800B6E78
  return; // 800B6E7C
}

// fn_800B6E80
void f_800B6E80(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800B6E80
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B6E84
  return; // 800B6E88
}

// fn_800B6E8C
void f_800B6E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6E8C
  c->r[0]=c->lr; // 800B6E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6E94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6E98
  c->r[31]=c->r[3]|c->r[3]; // 800B6E9C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B6EA0
  c->r[3]=R32(c->r[3]+0x00000028u); // 800B6EA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800B6EA8
  if (crb(c,2)) { goto L_800B6EC0; } // 800B6EAC
  c->r[3]=c->r[3]+c->r[4]; // 800B6EB0
  c->r[4]=c->r[0]|c->r[0]; // 800B6EB4
  c->lr=0x800B6EBCu; f_80089D80(c); // 800B6EB8
  W32(c->r[31]+0x00000028u,c->r[3]); // 800B6EBC
L_800B6EC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6EC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6EC4
  c->lr=c->r[0]; // 800B6EC8
  c->r[1]=c->r[1]+0x00000010u; // 800B6ECC
  return; // 800B6ED0
}

// fn_800B6ED4
void f_800B6ED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6ED4
  c->r[0]=c->lr; // 800B6ED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6EDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6EE0
  c->r[31]=c->r[3]|c->r[3]; // 800B6EE4
  c->r[0]=R32(c->r[3]+0x00000028u); // 800B6EE8
  c->r[3]=c->r[0]-c->r[4]; // 800B6EEC
  c->r[4]=0u+0x00000000u; // 800B6EF0
  c->lr=0x800B6EF8u; f_80089D70(c); // 800B6EF4
  W32(c->r[31]+0x00000028u,c->r[3]); // 800B6EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6F00
  c->lr=c->r[0]; // 800B6F04
  c->r[1]=c->r[1]+0x00000010u; // 800B6F08
  return; // 800B6F0C
}

// fn_800B6F10
void f_800B6F10(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B6F10
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B6F14
  return; // 800B6F18
}

// fn_800B6F1C
void f_800B6F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6F1C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800B6F20
  {uint32_t ea=c->r[2]+0xFFFF87D0u; c->f[2]=RF64(ea);} // 800B6F24
  c->r[0]=c->r[0]^0x80000000u; // 800B6F28
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6F2C
  c->r[4]=0u+0x43300000u; // 800B6F30
  W32(c->r[1]+0x00000008u,c->r[4]); // 800B6F34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B6F38
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800B6F3C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800B6F40
  c->r[0]=c->r[0]^0x80000000u; // 800B6F44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6F48
  W32(c->r[1]+0x00000010u,c->r[4]); // 800B6F4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800B6F50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800B6F54
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800B6F58
  {uint32_t ea=c->r[2]+0xFFFF87E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6F5C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800B6F60
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B6F64
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800B6F68
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800B6F6C
  c->r[1]=c->r[1]+0x00000020u; // 800B6F70
  return; // 800B6F74
}

// fn_800B6F78
void f_800B6F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6F78
  c->r[0]=c->lr; // 800B6F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6F84
  c->r[31]=c->r[3]|c->r[3]; // 800B6F88
  c->lr=0x800B6F90u; f_8005C538(c); // 800B6F8C
  c->r[4]=0u+0x51EC0000u; // 800B6F90
  c->r[0]=c->r[4]+0xFFFF851Fu; // 800B6F94
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800B6F98
  c->r[0]=sraw(c,c->r[0],5); // 800B6F9C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B6FA0
  c->r[0]=c->r[0]+c->r[4]; // 800B6FA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800B6FA8
  c->r[0]=c->r[3]-c->r[0]; // 800B6FAC
  c->r[4]=R32(c->r[13]+0xFFFF87A8u); // 800B6FB0
  c->r[0]=c->r[4]^c->r[0]; // 800B6FB4
  c->r[3]=sraw(c,c->r[0],1); // 800B6FB8
  c->r[0]=c->r[0]&c->r[4]; // 800B6FBC
  c->r[0]=c->r[3]-c->r[0]; // 800B6FC0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800B6FC4
  cmps(c,0,(int32_t)c->r[0],0); // 800B6FC8
  if (crb(c,2)) { goto L_800B6FE8; } // 800B6FCC
  c->r[3]=c->r[31]|c->r[31]; // 800B6FD0
  c->r[4]=0u+0x00000001u; // 800B6FD4
  c->r[5]=0u+0xFFFFFFFFu; // 800B6FD8
  c->r[6]=0u+0x00000000u; // 800B6FDC
  c->r[7]=0u+0x00000000u; // 800B6FE0
  c->lr=0x800B6FE8u; f_800B5A2C(c); // 800B6FE4
L_800B6FE8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6FE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6FEC
  c->lr=c->r[0]; // 800B6FF0
  c->r[1]=c->r[1]+0x00000010u; // 800B6FF4
  return; // 800B6FF8
}

// fn_800B6FFC
void f_800B6FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6FFC
  c->r[0]=c->lr; // 800B7000
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7008
  c->r[31]=c->r[3]|c->r[3]; // 800B700C
  c->r[4]=0u+0x0000000Eu; // 800B7010
  c->lr=0x800B7018u; f_800B69CC(c); // 800B7014
  cmps(c,0,(int32_t)c->r[3],0); // 800B7018
  if (crb(c,2)) { goto L_800B705C; } // 800B701C
  c->r[3]=c->r[31]|c->r[31]; // 800B7020
  c->lr=0x800B7028u; f_800B6F1C(c); // 800B7024
  cmps(c,0,(int32_t)c->r[3],50); // 800B7028
  if (crb(c,1)) { goto L_800B705C; } // 800B702C
  c->r[3]=c->r[31]|c->r[31]; // 800B7030
  c->r[4]=0u+0x00000065u; // 800B7034
  c->lr=0x800B703Cu; f_800B5624(c); // 800B7038
  cmps(c,0,(int32_t)c->r[3],0); // 800B703C
  if (!crb(c,2)) { goto L_800B705C; } // 800B7040
  c->r[3]=c->r[31]|c->r[31]; // 800B7044
  c->r[4]=0u+0x00000065u; // 800B7048
  c->r[5]=0u+0x00000003u; // 800B704C
  c->r[6]=0u+0x00000001u; // 800B7050
  c->r[7]=0u+0x00000001u; // 800B7054
  c->lr=0x800B705Cu; f_800B5A2C(c); // 800B7058
L_800B705C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B705C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7060
  c->lr=c->r[0]; // 800B7064
  c->r[1]=c->r[1]+0x00000010u; // 800B7068
  return; // 800B706C
}

// fn_800B7070
void f_800B7070(Ctx* __restrict c) {
  c->r[5]=c->r[4]|c->r[4]; // 800B7070
  c->r[4]=0u+0x00000066u; // 800B7074
  c->r[6]=0u+0x00000000u; // 800B7078
  c->r[7]=0u+0x00000000u; // 800B707C
  f_800B5A2C(c); return; // 800B7080
}

// fn_800B7084
void f_800B7084(Ctx* __restrict c) {
  c->r[4]=0u+0x00000066u; // 800B7084
  f_800B56BC(c); return; // 800B7088
}

// fn_800B708C
void f_800B708C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B708C
  c->r[0]=c->lr; // 800B7090
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7094
  c->r[4]=0u+0x00000066u; // 800B7098
  c->lr=0x800B70A0u; f_800B5558(c); // 800B709C
  cmps(c,0,(int32_t)c->r[3],0); // 800B70A0
  if (crb(c,2)) { goto L_800B70D4; } // 800B70A4
  c->r[5]=0u+0x00000000u; // 800B70A8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800B70AC
  cmps(c,0,(int32_t)c->r[0],0); // 800B70B0
  if (crb(c,2)) { goto L_800B70CC; } // 800B70B4
  c->r[4]=R32(c->r[3]+0x00000010u); // 800B70B8
  c->r[0]=R32(c->r[3]+0x00000014u); // 800B70BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B70C0
  if (!crb(c,2)) { goto L_800B70CC; } // 800B70C4
  c->r[5]=0u+0x00000001u; // 800B70C8
L_800B70CC:;
  c->r[3]=c->r[5]|c->r[5]; // 800B70CC
  goto L_800B70D8; // 800B70D0
L_800B70D4:;
  c->r[3]=0u+0x00000000u; // 800B70D4
L_800B70D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B70D8
  c->lr=c->r[0]; // 800B70DC
  c->r[1]=c->r[1]+0x00000010u; // 800B70E0
  return; // 800B70E4
}

// fn_800B70E8
void f_800B70E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B70E8
  c->r[0]=c->lr; // 800B70EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B70F0
  c->r[11]=c->r[1]+0x00000020u; // 800B70F4
  c->lr=0x800B70FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B70F8
  c->r[30]=c->r[3]|c->r[3]; // 800B70FC
  c->r[31]=c->r[4]|c->r[4]; // 800B7100
  c->r[0]=R32(c->r[3]+0x000000E0u); // 800B7104
  cmps(c,0,(int32_t)c->r[0],0); // 800B7108
  if (crb(c,2)) { goto L_800B7118; } // 800B710C
  c->r[3]=0u+0x00000000u; // 800B7110
  goto L_800B7274; // 800B7114
L_800B7118:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B7118
  cmps(c,0,(int32_t)c->r[0],0); // 800B711C
  if (!crb(c,2)) { goto L_800B712C; } // 800B7120
  c->r[3]=0u+0x00000000u; // 800B7124
  goto L_800B7274; // 800B7128
L_800B712C:;
  c->lr=0x800B7130u; f_800F4430(c); // 800B712C
  c->r[3]=c->r[3]+0x00000654u; // 800B7130
  c->r[4]=0u+0x00000000u; // 800B7134
  c->lr=0x800B713Cu; f_80258ECC(c); // 800B7138
  c->r[29]=R32(c->r[3]+0x0000004Cu); // 800B713C
  c->lr=0x800B7144u; f_8005C538(c); // 800B7140
  c->r[4]=0u+0x51EC0000u; // 800B7144
  c->r[0]=c->r[4]+0xFFFF851Fu; // 800B7148
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800B714C
  c->r[0]=sraw(c,c->r[0],5); // 800B7150
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B7154
  c->r[0]=c->r[0]+c->r[4]; // 800B7158
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800B715C
  c->r[0]=c->r[3]-c->r[0]; // 800B7160
  c->r[0]=c->r[29]^c->r[0]; // 800B7164
  c->r[3]=sraw(c,c->r[0],1); // 800B7168
  c->r[0]=c->r[0]&c->r[29]; // 800B716C
  c->r[0]=c->r[3]-c->r[0]; // 800B7170
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800B7174
  cmps(c,0,(int32_t)c->r[0],0); // 800B7178
  if (!crb(c,2)) { goto L_800B7188; } // 800B717C
  c->r[3]=0u+0x00000000u; // 800B7180
  goto L_800B7274; // 800B7184
L_800B7188:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800B7188
  c->r[3]=R32(c->r[4]+0x00000088u); // 800B718C
  c->r[0]=0u-c->r[3]; // 800B7190
  c->r[0]=c->r[0]&~c->r[3]; // 800B7194
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 800B7198
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 800B719C
  c->r[4]=0u+0x00000001u; // 800B71A0
  c->lr=0x800B71A8u; f_800AB9B0(c); // 800B71A4
  cmps(c,0,(int32_t)c->r[3],0); // 800B71A8
  if (crb(c,2)) { goto L_800B71BC; } // 800B71AC
  c->r[28]=0u+0xFFFFFFFFu; // 800B71B0
  c->r[31]=0u+0x00000000u; // 800B71B4
  goto L_800B71D8; // 800B71B8
L_800B71BC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800B71BC
  c->r[28]=R32(c->r[3]+0x0000008Cu); // 800B71C0
  c->r[3]=R32(c->r[3]+0x00000090u); // 800B71C4
  c->r[0]=0u-c->r[3]; // 800B71C8
  c->r[0]=c->r[0]&~c->r[3]; // 800B71CC
  c->r[0]=sraw(c,c->r[0],31); // 800B71D0
  c->r[31]=c->r[31]&c->r[0]; // 800B71D4
L_800B71D8:;
  c->r[27]=c->r[29]+c->r[31]; // 800B71D8
  cmps(c,0,(int32_t)c->r[27],1); // 800B71DC
  if (!crb(c,0)) { goto L_800B71EC; } // 800B71E0
  c->r[3]=0u+0x00000000u; // 800B71E4
  goto L_800B7274; // 800B71E8
L_800B71EC:;
  c->lr=0x800B71F0u; f_8005C538(c); // 800B71EC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[27]); // 800B71F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[27]); // 800B71F4
  c->r[3]=c->r[3]-c->r[0]; // 800B71F8
  c->r[3]=c->r[3]+0x00000001u; // 800B71FC
  c->r[3]=c->r[3]-c->r[29]; // 800B7200
  cmps(c,0,(int32_t)c->r[3],0); // 800B7204
  if (crb(c,1)) { goto L_800B7238; } // 800B7208
  c->r[4]=R32(c->r[30]+0x00000000u); // 800B720C
  c->r[0]=R32(c->r[4]+0x00000084u); // 800B7210
  cmps(c,0,(int32_t)c->r[0],-1); // 800B7214
  if (crb(c,2)) { goto L_800B7234; } // 800B7218
  c->r[0]=0u+0x00000001u; // 800B721C
  W32(c->r[30]+0x000000E0u,c->r[0]); // 800B7220
  c->r[3]=c->r[30]|c->r[30]; // 800B7224
  c->r[4]=R32(c->r[4]+0x00000084u); // 800B7228
  c->lr=0x800B7230u; f_800B6C14(c); // 800B722C
  goto L_800B7274; // 800B7230
L_800B7234:;
  c->r[3]=c->r[3]+c->r[29]; // 800B7234
L_800B7238:;
  c->r[3]=c->r[3]-c->r[31]; // 800B7238
  cmps(c,0,(int32_t)c->r[3],0); // 800B723C
  if (crb(c,1)) { goto L_800B7268; } // 800B7240
  c->r[0]=c->r[28]+0x00010000u; // 800B7244
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B7248
  if (crb(c,2)) { goto L_800B7268; } // 800B724C
  c->r[0]=0u+0x00000001u; // 800B7250
  W32(c->r[30]+0x000000E0u,c->r[0]); // 800B7254
  c->r[3]=c->r[30]|c->r[30]; // 800B7258
  c->r[4]=c->r[28]|c->r[28]; // 800B725C
  c->lr=0x800B7264u; f_800B6C14(c); // 800B7260
  goto L_800B7274; // 800B7264
L_800B7268:;
  c->r[0]=0u+0x00000001u; // 800B7268
  W32(c->r[30]+0x000000E0u,c->r[0]); // 800B726C
  c->r[3]=0u+0x00000000u; // 800B7270
L_800B7274:;
  c->r[11]=c->r[1]+0x00000020u; // 800B7274
  c->lr=0x800B727Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7278
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B727C
  c->lr=c->r[0]; // 800B7280
  c->r[1]=c->r[1]+0x00000020u; // 800B7284
  return; // 800B7288
}

// fn_800B728C
void f_800B728C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B728C
  c->r[0]=c->lr; // 800B7290
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7298
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B729C
  c->r[30]=c->r[3]|c->r[3]; // 800B72A0
  c->r[4]=R32(c->r[3]+0x000000E4u); // 800B72A4
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800B72A8
  c->r[0]=c->r[0]+c->r[4]; // 800B72AC
  c->r[31]=sraw(c,c->r[0],1); // 800B72B0
  c->r[4]=c->r[4]-c->r[31]; // 800B72B4
  W32(c->r[3]+0x000000E4u,c->r[4]); // 800B72B8
  c->r[3]=0u+0x00000000u; // 800B72BC
  c->lr=0x800B72C4u; f_80089D70(c); // 800B72C0
  W32(c->r[30]+0x000000E4u,c->r[3]); // 800B72C4
  c->r[3]=c->r[31]|c->r[31]; // 800B72C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B72CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B72D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B72D4
  c->lr=c->r[0]; // 800B72D8
  c->r[1]=c->r[1]+0x00000010u; // 800B72DC
  return; // 800B72E0
}

// fn_800B72E4
void f_800B72E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B72E4
  c->r[0]=c->lr; // 800B72E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B72EC
  c->r[11]=c->r[1]+0x00000020u; // 800B72F0
  c->lr=0x800B72F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B72F4
  c->r[29]=c->r[3]|c->r[3]; // 800B72F8
  c->r[0]=R32(c->r[3]+0x000000E8u); // 800B72FC
  cmps(c,0,(int32_t)c->r[0],0); // 800B7300
  if (crb(c,2)) { goto L_800B7310; } // 800B7304
  c->r[3]=0u+0x00000000u; // 800B7308
  goto L_800B7514; // 800B730C
L_800B7310:;
  c->r[0]=R32(c->r[13]+0xFFFFB9DCu); // 800B7310
  cmps(c,0,(int32_t)c->r[0],0); // 800B7314
  if (crb(c,2)) { goto L_800B7324; } // 800B7318
  c->r[3]=0u+0x00000000u; // 800B731C
  goto L_800B7514; // 800B7320
L_800B7324:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B7324
  cmps(c,0,(int32_t)c->r[3],0); // 800B7328
  if (!crb(c,2)) { goto L_800B7338; } // 800B732C
  c->r[3]=0u+0x00000000u; // 800B7330
  goto L_800B7514; // 800B7334
L_800B7338:;
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 800B7338
  c->r[4]=0u+0x00000000u; // 800B733C
  c->lr=0x800B7344u; f_800AB9B0(c); // 800B7340
  cmps(c,0,(int32_t)c->r[3],0); // 800B7344
  if (crb(c,2)) { goto L_800B7358; } // 800B7348
  c->r[31]=0u+0xFFFFFFFFu; // 800B734C
  c->r[30]=0u+0x00000000u; // 800B7350
  goto L_800B7364; // 800B7354
L_800B7358:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800B7358
  c->r[31]=R32(c->r[3]+0x0000008Cu); // 800B735C
  c->r[30]=R32(c->r[3]+0x00000090u); // 800B7360
L_800B7364:;
  c->r[3]=c->r[29]|c->r[29]; // 800B7364
  c->lr=0x800B736Cu; f_800B77D8(c); // 800B7368
  cmps(c,0,(int32_t)c->r[3],0); // 800B736C
  if (!crb(c,2)) { goto L_800B74D0; } // 800B7370
  c->r[26]=0u+0x00000000u; // 800B7374
  c->r[3]=0u+0x51EC0000u; // 800B7378
  c->r[28]=c->r[3]+0xFFFF851Fu; // 800B737C
  goto L_800B73F0; // 800B7380
L_800B7384:;
  c->lr=0x800B7388u; f_8005C538(c); // 800B7384
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[28]*(int64_t)(int32_t)c->r[3])>>32); // 800B7388
  c->r[0]=sraw(c,c->r[0],5); // 800B738C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B7390
  c->r[0]=c->r[0]+c->r[4]; // 800B7394
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800B7398
  c->r[3]=c->r[3]-c->r[0]; // 800B739C
  c->r[3]=c->r[3]+0x00000001u; // 800B73A0
  c->r[27]=R32(c->r[29]+0x00000000u); // 800B73A4
  c->r[0]=R32(c->r[27]+0x00000080u); // 800B73A8
  c->r[3]=c->r[3]-c->r[0]; // 800B73AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B73B0
  if (crb(c,1)) { goto L_800B73EC; } // 800B73B4
  c->r[3]=c->r[29]|c->r[29]; // 800B73B8
  c->lr=0x800B73C0u; f_8009F4E8(c); // 800B73BC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800B73C0
  c->r[0]=R32(c->r[27]+0x00000078u); // 800B73C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800B73C8
  c->r[0]=R32(c->r[27]+0x00000074u); // 800B73CC
  c->r[0]=c->r[0]+c->r[3]; // 800B73D0
  cmps(c,0,(int32_t)c->r[0],0); // 800B73D4
  if (!crb(c,1)) { goto L_800B73FC; } // 800B73D8
  c->r[3]=c->r[29]|c->r[29]; // 800B73DC
  c->r[4]=0u+0x000001F6u; // 800B73E0
  c->lr=0x800B73E8u; f_800B6AE0(c); // 800B73E4
  goto L_800B73FC; // 800B73E8
L_800B73EC:;
  c->r[26]=c->r[26]+0x00000001u; // 800B73EC
L_800B73F0:;
  c->r[0]=R32(c->r[13]+0xFFFFB9D8u); // 800B73F0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800B73F4
  if (crb(c,0)) { IRQCHK(c); goto L_800B7384; } // 800B73F8
L_800B73FC:;
  c->r[26]=0u+0x00000000u; // 800B73FC
  c->r[3]=0u+0x51EC0000u; // 800B7400
  c->r[28]=c->r[3]+0xFFFF851Fu; // 800B7404
  goto L_800B7458; // 800B7408
L_800B740C:;
  c->lr=0x800B7410u; f_8005C538(c); // 800B740C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[28]*(int64_t)(int32_t)c->r[3])>>32); // 800B7410
  c->r[0]=sraw(c,c->r[0],5); // 800B7414
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B7418
  c->r[0]=c->r[0]+c->r[4]; // 800B741C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800B7420
  c->r[3]=c->r[3]-c->r[0]; // 800B7424
  c->r[0]=c->r[3]+0x00000001u; // 800B7428
  c->r[0]=c->r[0]-c->r[30]; // 800B742C
  cmps(c,0,(int32_t)c->r[0],0); // 800B7430
  if (crb(c,1)) { goto L_800B7454; } // 800B7434
  c->r[0]=c->r[31]+0x00010000u; // 800B7438
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800B743C
  if (crb(c,2)) { goto L_800B7464; } // 800B7440
  c->r[3]=c->r[29]|c->r[29]; // 800B7444
  c->r[4]=c->r[31]|c->r[31]; // 800B7448
  c->lr=0x800B7450u; f_800B6AE0(c); // 800B744C
  goto L_800B7464; // 800B7450
L_800B7454:;
  c->r[26]=c->r[26]+0x00000001u; // 800B7454
L_800B7458:;
  c->r[0]=R32(c->r[13]+0xFFFFB9D4u); // 800B7458
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800B745C
  if (crb(c,0)) { IRQCHK(c); goto L_800B740C; } // 800B7460
L_800B7464:;
  c->r[26]=0u+0x00000000u; // 800B7464
  c->r[3]=0u+0x51EC0000u; // 800B7468
  c->r[30]=c->r[3]+0xFFFF851Fu; // 800B746C
  goto L_800B74C4; // 800B7470
L_800B7474:;
  c->lr=0x800B7478u; f_8005C538(c); // 800B7474
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[3])>>32); // 800B7478
  c->r[0]=sraw(c,c->r[0],5); // 800B747C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800B7480
  c->r[0]=c->r[0]+c->r[4]; // 800B7484
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800B7488
  c->r[3]=c->r[3]-c->r[0]; // 800B748C
  c->r[4]=c->r[3]+0x00000001u; // 800B7490
  c->r[3]=R32(c->r[29]+0x00000000u); // 800B7494
  c->r[0]=R32(c->r[3]+0x00000088u); // 800B7498
  c->r[4]=c->r[4]-c->r[0]; // 800B749C
  cmps(c,0,(int32_t)c->r[4],0); // 800B74A0
  if (crb(c,1)) { goto L_800B74C0; } // 800B74A4
  c->r[4]=R32(c->r[3]+0x00000084u); // 800B74A8
  cmps(c,0,(int32_t)c->r[4],-1); // 800B74AC
  if (crb(c,2)) { goto L_800B74D0; } // 800B74B0
  c->r[3]=c->r[29]|c->r[29]; // 800B74B4
  c->lr=0x800B74BCu; f_800B6AE0(c); // 800B74B8
  goto L_800B74D0; // 800B74BC
L_800B74C0:;
  c->r[26]=c->r[26]+0x00000001u; // 800B74C0
L_800B74C4:;
  c->r[0]=R32(c->r[13]+0xFFFFB9D4u); // 800B74C4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800B74C8
  if (crb(c,0)) { IRQCHK(c); goto L_800B7474; } // 800B74CC
L_800B74D0:;
  c->r[3]=c->r[29]|c->r[29]; // 800B74D0
  c->lr=0x800B74D8u; f_800B6BC4(c); // 800B74D4
  c->r[26]=c->r[3]|c->r[3]; // 800B74D8
  cmps(c,0,(int32_t)c->r[3],0); // 800B74DC
  if (crb(c,2)) { goto L_800B7510; } // 800B74E0
  c->lr=0x800B74E8u; f_80179098(c); // 800B74E4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B74E8
  c->r[4]=0u+0x00000001u; // 800B74EC
  c->lr=0x800B74F4u; f_800AB9B0(c); // 800B74F0
  cmps(c,0,(int32_t)c->r[3],0); // 800B74F4
  if (crb(c,2)) { goto L_800B7510; } // 800B74F8
  c->lr=0x800B7500u; f_80074E68(c); // 800B74FC
  c->r[4]=c->r[26]|c->r[26]; // 800B7500
  c->lr=0x800B7508u; f_8017A3C0(c); // 800B7504
  c->r[3]=0u+0x00000000u; // 800B7508
  goto L_800B7514; // 800B750C
L_800B7510:;
  c->r[3]=c->r[26]|c->r[26]; // 800B7510
L_800B7514:;
  c->r[11]=c->r[1]+0x00000020u; // 800B7514
  c->lr=0x800B751Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B7518
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B751C
  c->lr=c->r[0]; // 800B7520
  c->r[1]=c->r[1]+0x00000020u; // 800B7524
  return; // 800B7528
}

// fn_800B752C
void f_800B752C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B752C
  c->r[0]=c->lr; // 800B7530
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7538
  c->r[31]=c->r[3]|c->r[3]; // 800B753C
  c->r[4]=0u+0x00000001u; // 800B7540
  c->lr=0x800B7548u; f_800B55F0(c); // 800B7544
  c->r[5]=c->r[3]|c->r[3]; // 800B7548
  goto L_800B75C8; // 800B754C
L_800B7550:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800B7550
  cmps(c,0,(int32_t)c->r[0],0); // 800B7554
  if (crb(c,2)) { goto L_800B75B8; } // 800B7558
  c->r[0]=R32(c->r[5]+0x00000008u); // 800B755C
  cmps(c,0,(int32_t)c->r[0],0); // 800B7560
  if (crb(c,2)) { goto L_800B75B0; } // 800B7564
  cmps(c,0,(int32_t)c->r[0],1); // 800B7568
  if (crb(c,2)) { goto L_800B75B0; } // 800B756C
  cmps(c,0,(int32_t)c->r[0],2); // 800B7570
  if (crb(c,2)) { goto L_800B75B0; } // 800B7574
  cmps(c,0,(int32_t)c->r[0],3); // 800B7578
  if (crb(c,2)) { goto L_800B75B0; } // 800B757C
  cmps(c,0,(int32_t)c->r[0],4); // 800B7580
  if (crb(c,2)) { goto L_800B75B0; } // 800B7584
  cmps(c,0,(int32_t)c->r[0],5); // 800B7588
  if (crb(c,2)) { goto L_800B75B0; } // 800B758C
  cmps(c,0,(int32_t)c->r[0],6); // 800B7590
  if (crb(c,2)) { goto L_800B75B0; } // 800B7594
  cmps(c,0,(int32_t)c->r[0],7); // 800B7598
  if (crb(c,2)) { goto L_800B75B0; } // 800B759C
  cmps(c,0,(int32_t)c->r[0],9); // 800B75A0
  if (crb(c,2)) { goto L_800B75B0; } // 800B75A4
  cmps(c,0,(int32_t)c->r[0],14); // 800B75A8
  if (!crb(c,2)) { goto L_800B75B8; } // 800B75AC
L_800B75B0:;
  c->r[3]=0u+0x00000001u; // 800B75B0
  goto L_800B75D4; // 800B75B4
L_800B75B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800B75B8
  c->r[4]=0u+0x00000001u; // 800B75BC
  c->lr=0x800B75C4u; f_800B5608(c); // 800B75C0
  c->r[5]=c->r[3]|c->r[3]; // 800B75C4
L_800B75C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B75C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800B7550; } // 800B75CC
  c->r[3]=0u+0x00000000u; // 800B75D0
L_800B75D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B75D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B75D8
  c->lr=c->r[0]; // 800B75DC
  c->r[1]=c->r[1]+0x00000010u; // 800B75E0
  return; // 800B75E4
}

// fn_800B75E8
void f_800B75E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B75E8
  c->r[0]=c->lr; // 800B75EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B75F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B75F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B75F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B75FC
  c->r[29]=c->r[3]|c->r[3]; // 800B7600
  c->r[4]=0u+0x00000001u; // 800B7604
  c->lr=0x800B760Cu; f_800B55F0(c); // 800B7608
  c->r[30]=c->r[3]|c->r[3]; // 800B760C
  c->r[31]=0u+0x00000000u; // 800B7610
  goto L_800B76A4; // 800B7614
L_800B7618:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800B7618
  cmps(c,0,(int32_t)c->r[0],0); // 800B761C
  if (crb(c,2)) { goto L_800B7690; } // 800B7620
  c->r[0]=R32(c->r[30]+0x00000008u); // 800B7624
  cmps(c,0,(int32_t)c->r[0],0); // 800B7628
  if (crb(c,2)) { goto L_800B7678; } // 800B762C
  cmps(c,0,(int32_t)c->r[0],1); // 800B7630
  if (crb(c,2)) { goto L_800B7678; } // 800B7634
  cmps(c,0,(int32_t)c->r[0],2); // 800B7638
  if (crb(c,2)) { goto L_800B7678; } // 800B763C
  cmps(c,0,(int32_t)c->r[0],3); // 800B7640
  if (crb(c,2)) { goto L_800B7678; } // 800B7644
  cmps(c,0,(int32_t)c->r[0],4); // 800B7648
  if (crb(c,2)) { goto L_800B7678; } // 800B764C
  cmps(c,0,(int32_t)c->r[0],5); // 800B7650
  if (crb(c,2)) { goto L_800B7678; } // 800B7654
  cmps(c,0,(int32_t)c->r[0],6); // 800B7658
  if (crb(c,2)) { goto L_800B7678; } // 800B765C
  cmps(c,0,(int32_t)c->r[0],7); // 800B7660
  if (crb(c,2)) { goto L_800B7678; } // 800B7664
  cmps(c,0,(int32_t)c->r[0],9); // 800B7668
  if (crb(c,2)) { goto L_800B7678; } // 800B766C
  cmps(c,0,(int32_t)c->r[0],14); // 800B7670
  if (!crb(c,2)) { goto L_800B7690; } // 800B7674
L_800B7678:;
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800B7678
  c->r[3]=c->r[29]|c->r[29]; // 800B767C
  c->r[4]=R32(c->r[30]+0x00000008u); // 800B7680
  c->r[5]=0u+0x00000001u; // 800B7684
  c->r[6]=0u+0x00000000u; // 800B7688
  c->lr=0x800B7690u; f_800B60FC(c); // 800B768C
L_800B7690:;
  c->r[3]=c->r[29]|c->r[29]; // 800B7690
  c->r[4]=0u+0x00000001u; // 800B7694
  c->r[5]=c->r[30]|c->r[30]; // 800B7698
  c->lr=0x800B76A0u; f_800B5608(c); // 800B769C
  c->r[30]=c->r[3]|c->r[3]; // 800B76A0
L_800B76A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800B76A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B7618; } // 800B76A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B76AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B76B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B76B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B76B8
  c->lr=c->r[0]; // 800B76BC
  c->r[1]=c->r[1]+0x00000020u; // 800B76C0
  return; // 800B76C4
}

// fn_800B76C8
void f_800B76C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B76C8
  c->r[0]=c->lr; // 800B76CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B76D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B76D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B76D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B76DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B76E0
  c->r[28]=c->r[3]|c->r[3]; // 800B76E4
  c->r[29]=c->r[4]|c->r[4]; // 800B76E8
  c->r[4]=0u+0x0000006Bu; // 800B76EC
  c->lr=0x800B76F4u; f_800B56BC(c); // 800B76F0
  cmps(c,0,(int32_t)c->r[3],0); // 800B76F4
  if (!crb(c,2)) { goto L_800B7710; } // 800B76F8
  c->r[30]=0u+0x00000001u; // 800B76FC
  c->r[3]=c->r[28]|c->r[28]; // 800B7700
  c->lr=0x800B7708u; f_80089C94(c); // 800B7704
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B7708
  W32(c->r[29]+c->r[0],c->r[30]); // 800B770C
L_800B7710:;
  c->r[3]=c->r[28]+0x00000094u; // 800B7710
  c->lr=0x800B7718u; f_8004B018(c); // 800B7714
  c->r[4]=c->r[3]|c->r[3]; // 800B7718
  c->r[31]=0u+0x00000001u; // 800B771C
  c->r[30]=0u+0x80460000u; // 800B7720
  goto L_800B7780; // 800B7724
L_800B7728:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800B7728
  cmpu(c,0,c->r[0],0x00000006u); // 800B772C
  if (crb(c,1)) { goto L_800B7774; } // 800B7730
  c->r[3]=c->r[30]+0xFFFFFFC8u; // 800B7734
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B7738
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B773C
  c->ctr=c->r[3]; // 800B7740
  if (true) { switch (c->ctr) { case 0x800B7748u: goto L_800B7748; case 0x800B7750u: goto L_800B7750; case 0x800B7758u: goto L_800B7758; case 0x800B7760u: goto L_800B7760; case 0x800B7768u: goto L_800B7768; case 0x800B7770u: goto L_800B7770; case 0x800B7774u: goto L_800B7774; default: break; } dispatch(c,c->ctr); return; } // 800B7744
L_800B7748:;
  W32(c->r[29]+0x00000024u,c->r[31]); // 800B7748
  goto L_800B7774; // 800B774C
L_800B7750:;
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 800B7750
  goto L_800B7774; // 800B7754
L_800B7758:;
  W32(c->r[29]+0x00000028u,c->r[31]); // 800B7758
  goto L_800B7774; // 800B775C
L_800B7760:;
  W32(c->r[29]+0x00000030u,c->r[31]); // 800B7760
  goto L_800B7774; // 800B7764
L_800B7768:;
  W32(c->r[29]+0x00000038u,c->r[31]); // 800B7768
  goto L_800B7774; // 800B776C
L_800B7770:;
  W32(c->r[29]+0x00000034u,c->r[31]); // 800B7770
L_800B7774:;
  c->r[3]=c->r[28]+0x00000094u; // 800B7774
  c->lr=0x800B777Cu; f_8028CCD8(c); // 800B7778
  c->r[4]=c->r[3]|c->r[3]; // 800B777C
L_800B7780:;
  cmps(c,0,(int32_t)c->r[4],0); // 800B7780
  if (!crb(c,2)) { IRQCHK(c); goto L_800B7728; } // 800B7784
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7788
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B778C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7790
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B7794
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7798
  c->lr=c->r[0]; // 800B779C
  c->r[1]=c->r[1]+0x00000020u; // 800B77A0
  return; // 800B77A4
}

// fn_800B77A8
void f_800B77A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B77A8
  c->r[0]=c->lr; // 800B77AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B77B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B77B4
  c->r[31]=c->r[3]|c->r[3]; // 800B77B8
  c->lr=0x800B77C0u; f_800B4628(c); // 800B77BC
  c->r[3]=c->r[31]|c->r[31]; // 800B77C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B77C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B77C8
  c->lr=c->r[0]; // 800B77CC
  c->r[1]=c->r[1]+0x00000010u; // 800B77D0
  return; // 800B77D4
}

// fn_800B77D8
void f_800B77D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 800B77D8
  return; // 800B77DC
}

// fn_800B77E0
void f_800B77E0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B77E0
  if (crb(c,2)) { goto L_800B77F0; } // 800B77E4
  c->r[4]=0u+0x00000001u; // 800B77E8
  f_800B7810(c); return; // 800B77EC
L_800B77F0:;
  c->r[4]=0u+0x00000000u; // 800B77F0
  f_800B7810(c); return; // 800B77F4
}

// fn_800B77F8
void f_800B77F8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800B77F8
  if (crb(c,2)) { goto L_800B7808; } // 800B77FC
  c->r[4]=0u+0x00000001u; // 800B7800
  f_800B7848(c); return; // 800B7804
L_800B7808:;
  c->r[4]=0u+0x00000000u; // 800B7808
  f_800B7848(c); return; // 800B780C
}

// fn_800B7810
void f_800B7810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7810
  c->r[0]=c->lr; // 800B7814
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B781C
  c->r[31]=c->r[3]|c->r[3]; // 800B7820
  c->lr=0x800B7828u; f_801054C0(c); // 800B7824
  W32(c->r[31]+0x00000034u,c->r[3]); // 800B7828
  c->r[0]=R32(c->r[3]+0x00000020u); // 800B782C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B7830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7838
  c->lr=c->r[0]; // 800B783C
  c->r[1]=c->r[1]+0x00000010u; // 800B7840
  return; // 800B7844
}

// fn_800B7848
void f_800B7848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7848
  c->r[0]=c->lr; // 800B784C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7854
  c->r[31]=c->r[3]|c->r[3]; // 800B7858
  c->lr=0x800B7860u; f_801054C0(c); // 800B785C
  W32(c->r[31]+0x00000034u,c->r[3]); // 800B7860
  c->r[0]=R32(c->r[3]+0x00000020u); // 800B7864
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B7868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B786C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7870
  c->lr=c->r[0]; // 800B7874
  c->r[1]=c->r[1]+0x00000010u; // 800B7878
  return; // 800B787C
}

// fn_800B7880
void f_800B7880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFB50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7880
  c->r[0]=c->lr; // 800B7884
  W32(c->r[1]+0x000004B4u,c->r[0]); // 800B7888
  W32(c->r[1]+0x000004ACu,c->r[31]); // 800B788C
  c->r[3]=c->r[1]+0x00000128u; // 800B7890
  c->r[4]=0u+0x00000000u; // 800B7894
  c->r[5]=0u+0x0000037Cu; // 800B7898
  c->lr=0x800B78A0u; f_800060B8(c); // 800B789C
  c->r[3]=c->r[1]+0x00000008u; // 800B78A0
  c->r[4]=0u+0x00000000u; // 800B78A4
  c->r[5]=0u+0x00000120u; // 800B78A8
  c->lr=0x800B78B0u; f_800060B8(c); // 800B78AC
  c->r[3]=c->r[13]+0xFFFF87E8u; // 800B78B0
  c->r[4]=c->r[1]+0x00000128u; // 800B78B4
  c->r[5]=0u+0x0000037Cu; // 800B78B8
  c->lr=0x800B78C0u; f_801E66A0(c); // 800B78BC
  c->r[3]=c->r[13]+0xFFFF87ECu; // 800B78C0
  c->r[4]=c->r[1]+0x00000008u; // 800B78C4
  c->r[5]=0u+0x00000120u; // 800B78C8
  c->lr=0x800B78D0u; f_801E66A0(c); // 800B78CC
  c->lr=0x800B78D4u; f_800A23BC(c); // 800B78D0
  c->r[4]=c->r[1]+0x000003E0u; // 800B78D4
  c->lr=0x800B78DCu; f_800BB708(c); // 800B78D8
  c->lr=0x800B78E0u; f_800A23BC(c); // 800B78DC
  c->lr=0x800B78E4u; f_800A23B4(c); // 800B78E0
  c->r[4]=c->r[1]+0x00000128u; // 800B78E4
  c->lr=0x800B78ECu; f_800E0FB4(c); // 800B78E8
  c->lr=0x800B78F0u; f_800A23BC(c); // 800B78EC
  c->lr=0x800B78F4u; f_800A23B4(c); // 800B78F0
  c->r[4]=R32(c->r[1]+0x000004A0u); // 800B78F4
  c->lr=0x800B78FCu; f_800BB830(c); // 800B78F8
  c->r[3]=c->r[13]+0xFFFF87ECu; // 800B78FC
  c->lr=0x800B7904u; f_801E65E8(c); // 800B7900
  cmps(c,0,(int32_t)c->r[3],0); // 800B7904
  if (!crb(c,2)) { goto L_800B796C; } // 800B7908
  c->lr=0x800B7910u; f_800A23BC(c); // 800B790C
  c->lr=0x800B7914u; f_800A23B4(c); // 800B7910
  c->r[4]=c->r[1]+0x00000008u; // 800B7914
  c->lr=0x800B791Cu; f_800E109C(c); // 800B7918
  c->lr=0x800B7920u; f_800A23BC(c); // 800B791C
  c->lr=0x800B7924u; f_800A23B4(c); // 800B7920
  c->r[4]=c->r[1]+0x00000038u; // 800B7924
  c->r[5]=0u+0x00000000u; // 800B7928
  c->lr=0x800B7930u; f_800E10A4(c); // 800B792C
  c->lr=0x800B7934u; f_800A23BC(c); // 800B7930
  c->lr=0x800B7938u; f_800A23B4(c); // 800B7934
  c->r[4]=c->r[1]+0x00000074u; // 800B7938
  c->r[5]=0u+0x00000001u; // 800B793C
  c->lr=0x800B7944u; f_800E10A4(c); // 800B7940
  c->lr=0x800B7948u; f_800A23BC(c); // 800B7944
  c->lr=0x800B794Cu; f_800A23B4(c); // 800B7948
  c->r[4]=c->r[1]+0x000000B0u; // 800B794C
  c->r[5]=0u+0x00000002u; // 800B7950
  c->lr=0x800B7958u; f_800E10A4(c); // 800B7954
  c->lr=0x800B795Cu; f_800A23BC(c); // 800B7958
  c->lr=0x800B7960u; f_800A23B4(c); // 800B795C
  c->r[4]=c->r[1]+0x000000ECu; // 800B7960
  c->r[5]=0u+0x00000003u; // 800B7964
  c->lr=0x800B796Cu; f_800E10A4(c); // 800B7968
L_800B796C:;
  c->lr=0x800B7970u; f_800A23BC(c); // 800B796C
  c->lr=0x800B7974u; f_800BB700(c); // 800B7970
  c->r[4]=c->r[13]+0xFFFF87F4u; // 800B7974
  c->lr=0x800B797Cu; f_800BBEA4(c); // 800B7978
  c->r[31]=c->r[3]|c->r[3]; // 800B797C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7980
  if (crb(c,2)) { goto L_800B79A0; } // 800B7984
  c->lr=0x800B798Cu; f_800A23BC(c); // 800B7988
  c->lr=0x800B7990u; f_800BB700(c); // 800B798C
  c->r[4]=c->r[31]|c->r[31]; // 800B7990
  c->lr=0x800B7998u; f_800BBE64(c); // 800B7994
  c->r[4]=c->r[1]+0x00000178u; // 800B7998
  c->lr=0x800B79A0u; f_800BB148(c); // 800B799C
L_800B79A0:;
  c->lr=0x800B79A4u; f_80212FD4(c); // 800B79A0
  c->r[31]=R32(c->r[1]+0x000004ACu); // 800B79A4
  c->r[0]=R32(c->r[1]+0x000004B4u); // 800B79A8
  c->lr=c->r[0]; // 800B79AC
  c->r[1]=c->r[1]+0x000004B0u; // 800B79B0
  return; // 800B79B4
}

// fn_800B79B8
void f_800B79B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFB50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B79B8
  c->r[0]=c->lr; // 800B79BC
  W32(c->r[1]+0x000004B4u,c->r[0]); // 800B79C0
  W32(c->r[1]+0x000004ACu,c->r[31]); // 800B79C4
  c->lr=0x800B79CCu; f_800A23BC(c); // 800B79C8
  c->r[4]=c->r[1]+0x000003E0u; // 800B79CC
  c->lr=0x800B79D4u; f_800BB77C(c); // 800B79D0
  c->lr=0x800B79D8u; f_800A23BC(c); // 800B79D4
  c->lr=0x800B79DCu; f_800A23B4(c); // 800B79D8
  c->r[4]=c->r[1]+0x00000128u; // 800B79DC
  c->lr=0x800B79E4u; f_800E0EF8(c); // 800B79E0
  c->lr=0x800B79E8u; f_800A23BC(c); // 800B79E4
  c->lr=0x800B79ECu; f_800A23B4(c); // 800B79E8
  c->lr=0x800B79F0u; f_800BB838(c); // 800B79EC
  W32(c->r[1]+0x000004A0u,c->r[3]); // 800B79F0
  c->lr=0x800B79F8u; f_800A23BC(c); // 800B79F4
  c->lr=0x800B79FCu; f_800A23B4(c); // 800B79F8
  c->r[4]=c->r[1]+0x00000008u; // 800B79FC
  c->lr=0x800B7A04u; f_800E0F9C(c); // 800B7A00
  c->lr=0x800B7A08u; f_800A23BC(c); // 800B7A04
  c->lr=0x800B7A0Cu; f_800A23B4(c); // 800B7A08
  c->r[4]=c->r[1]+0x00000038u; // 800B7A0C
  c->r[5]=0u+0x00000000u; // 800B7A10
  c->lr=0x800B7A18u; f_800E0FA4(c); // 800B7A14
  c->lr=0x800B7A1Cu; f_800A23BC(c); // 800B7A18
  c->lr=0x800B7A20u; f_800A23B4(c); // 800B7A1C
  c->r[4]=c->r[1]+0x00000074u; // 800B7A20
  c->r[5]=0u+0x00000001u; // 800B7A24
  c->lr=0x800B7A2Cu; f_800E0FA4(c); // 800B7A28
  c->lr=0x800B7A30u; f_800A23BC(c); // 800B7A2C
  c->lr=0x800B7A34u; f_800A23B4(c); // 800B7A30
  c->r[4]=c->r[1]+0x000000B0u; // 800B7A34
  c->r[5]=0u+0x00000002u; // 800B7A38
  c->lr=0x800B7A40u; f_800E0FA4(c); // 800B7A3C
  c->lr=0x800B7A44u; f_800A23BC(c); // 800B7A40
  c->lr=0x800B7A48u; f_800A23B4(c); // 800B7A44
  c->r[4]=c->r[1]+0x000000ECu; // 800B7A48
  c->r[5]=0u+0x00000003u; // 800B7A4C
  c->lr=0x800B7A54u; f_800E0FA4(c); // 800B7A50
  c->lr=0x800B7A58u; f_800A23BC(c); // 800B7A54
  c->lr=0x800B7A5Cu; f_800BB700(c); // 800B7A58
  c->r[4]=c->r[13]+0xFFFF87F4u; // 800B7A5C
  c->lr=0x800B7A64u; f_800BBEA4(c); // 800B7A60
  c->r[31]=c->r[3]|c->r[3]; // 800B7A64
  cmps(c,0,(int32_t)c->r[3],0); // 800B7A68
  if (crb(c,2)) { goto L_800B7A88; } // 800B7A6C
  c->lr=0x800B7A74u; f_800A23BC(c); // 800B7A70
  c->lr=0x800B7A78u; f_800BB700(c); // 800B7A74
  c->r[4]=c->r[31]|c->r[31]; // 800B7A78
  c->lr=0x800B7A80u; f_800BBE64(c); // 800B7A7C
  c->r[4]=c->r[1]+0x00000178u; // 800B7A80
  c->lr=0x800B7A88u; f_800BB1D0(c); // 800B7A84
L_800B7A88:;
  c->r[3]=c->r[13]+0xFFFF87E8u; // 800B7A88
  c->r[4]=c->r[1]+0x00000128u; // 800B7A8C
  c->r[5]=0u+0x0000037Cu; // 800B7A90
  c->lr=0x800B7A98u; f_801E6644(c); // 800B7A94
  c->r[3]=c->r[13]+0xFFFF87ECu; // 800B7A98
  c->r[4]=c->r[1]+0x00000008u; // 800B7A9C
  c->r[5]=0u+0x00000120u; // 800B7AA0
  c->lr=0x800B7AA8u; f_801E6644(c); // 800B7AA4
  c->lr=0x800B7AACu; f_80212F4C(c); // 800B7AA8
  c->r[31]=R32(c->r[1]+0x000004ACu); // 800B7AAC
  c->r[0]=R32(c->r[1]+0x000004B4u); // 800B7AB0
  c->lr=c->r[0]; // 800B7AB4
  c->r[1]=c->r[1]+0x000004B0u; // 800B7AB8
  return; // 800B7ABC
}

// fn_800B7AC0
void f_800B7AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7AC0
  c->r[0]=c->lr; // 800B7AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7AC8
  c->lr=0x800B7AD0u; f_801E677C(c); // 800B7ACC
  cmps(c,0,(int32_t)c->r[3],0); // 800B7AD0
  if (crb(c,2)) { goto L_800B7AE0; } // 800B7AD4
  c->r[3]=0u+0x00000000u; // 800B7AD8
  goto L_800B7AF0; // 800B7ADC
L_800B7AE0:;
  c->r[3]=c->r[13]+0xFFFF87E8u; // 800B7AE0
  c->lr=0x800B7AE8u; f_801E65E8(c); // 800B7AE4
  c->r[0]=cntlz(c->r[3]); // 800B7AE8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B7AEC
L_800B7AF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7AF0
  c->lr=c->r[0]; // 800B7AF4
  c->r[1]=c->r[1]+0x00000010u; // 800B7AF8
  return; // 800B7AFC
}

// fn_800B7B00
void f_800B7B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7B00
  c->r[0]=c->lr; // 800B7B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7B08
  c->lr=0x800B7B10u; f_800A23BC(c); // 800B7B0C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7B10
  if (crb(c,2)) { goto L_800B7B28; } // 800B7B14
  c->lr=0x800B7B1Cu; f_801E677C(c); // 800B7B18
  cmps(c,0,(int32_t)c->r[3],0); // 800B7B1C
  if (!crb(c,2)) { goto L_800B7B28; } // 800B7B20
  c->lr=0x800B7B28u; f_800B7880(c); // 800B7B24
L_800B7B28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7B28
  c->lr=c->r[0]; // 800B7B2C
  c->r[1]=c->r[1]+0x00000010u; // 800B7B30
  return; // 800B7B34
}

// fn_800B7B38
void f_800B7B38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7B38
  c->r[0]=c->lr; // 800B7B3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7B40
  c->lr=0x800B7B48u; f_800A23BC(c); // 800B7B44
  cmps(c,0,(int32_t)c->r[3],0); // 800B7B48
  if (crb(c,2)) { goto L_800B7B54; } // 800B7B4C
  c->lr=0x800B7B54u; f_800B79B8(c); // 800B7B50
L_800B7B54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7B54
  c->lr=c->r[0]; // 800B7B58
  c->r[1]=c->r[1]+0x00000010u; // 800B7B5C
  return; // 800B7B60
}

// fn_800B7B64
void f_800B7B64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7B64
  c->r[0]=c->lr; // 800B7B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7B70
  c->r[31]=c->r[3]|c->r[3]; // 800B7B74
  c->lr=0x800B7B7Cu; f_80078B74(c); // 800B7B78
  c->r[3]=0u+0x80460000u; // 800B7B7C
  c->r[0]=c->r[3]+0xFFFFFFF4u; // 800B7B80
  W32(c->r[31]+0x00000058u,c->r[0]); // 800B7B84
  c->r[3]=c->r[31]+0x000000B8u; // 800B7B88
  c->lr=0x800B7B90u; f_800BB894(c); // 800B7B8C
  c->r[3]=c->r[31]+0x000000E8u; // 800B7B90
  c->lr=0x800B7B98u; f_800E2520(c); // 800B7B94
  c->r[3]=c->r[31]|c->r[31]; // 800B7B98
  c->r[4]=0u+0x00120000u; // 800B7B9C
  c->r[4]=c->r[4]+0xFFFFA000u; // 800B7BA0
  c->r[5]=0u+0x80460000u; // 800B7BA4
  c->r[5]=c->r[5]+0xFFFFFFE8u; // 800B7BA8
  c->r[6]=0u+0x00000000u; // 800B7BAC
  c->lr=0x800B7BB4u; f_80078D6C(c); // 800B7BB0
  c->r[3]=c->r[31]|c->r[31]; // 800B7BB4
  c->r[4]=0u+0x00000000u; // 800B7BB8
  c->r[5]=0u+0x000000FFu; // 800B7BBC
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B7BC0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B7BC4
  c->ctr=c->r[12]; // 800B7BC8
  if (true) { c->lr=0x800B7BD0u; dispatch(c,c->ctr); } // 800B7BCC
  c->r[0]=0u+0x00000000u; // 800B7BD0
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800B7BD4
  c->r[3]=c->r[31]|c->r[31]; // 800B7BD8
  c->lr=0x800B7BE0u; f_800B7CC4(c); // 800B7BDC
  c->r[3]=c->r[13]+0xFFFF87E8u; // 800B7BE0
  c->r[4]=0u+0x800B0000u; // 800B7BE4
  c->r[4]=c->r[4]+0x00007B38u; // 800B7BE8
  c->lr=0x800B7BF0u; f_801E6734(c); // 800B7BEC
  c->r[3]=c->r[31]|c->r[31]; // 800B7BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7BF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7BF8
  c->lr=c->r[0]; // 800B7BFC
  c->r[1]=c->r[1]+0x00000010u; // 800B7C00
  return; // 800B7C04
}

// fn_800B7C08
void f_800B7C08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7C08
  c->r[0]=c->lr; // 800B7C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7C10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7C14
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B7C18
  c->r[30]=c->r[3]|c->r[3]; // 800B7C1C
  c->r[31]=c->r[4]|c->r[4]; // 800B7C20
  cmps(c,0,(int32_t)c->r[3],0); // 800B7C24
  if (crb(c,2)) { goto L_800B7CA8; } // 800B7C28
  c->r[4]=0u+0x80460000u; // 800B7C2C
  c->r[0]=c->r[4]+0xFFFFFFF4u; // 800B7C30
  W32(c->r[3]+0x00000058u,c->r[0]); // 800B7C34
  c->r[4]=0u+0x00000000u; // 800B7C38
  c->r[12]=R32(c->r[3]+0x00000058u); // 800B7C3C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800B7C40
  c->ctr=c->r[12]; // 800B7C44
  if (true) { c->lr=0x800B7C4Cu; dispatch(c,c->ctr); } // 800B7C48
  c->r[3]=c->r[30]|c->r[30]; // 800B7C4C
  c->lr=0x800B7C54u; f_800B7CC4(c); // 800B7C50
  c->r[3]=c->r[30]+0x000000E8u; // 800B7C54
  c->lr=0x800B7C5Cu; f_800E2938(c); // 800B7C58
  c->r[3]=c->r[30]|c->r[30]; // 800B7C5C
  c->lr=0x800B7C64u; f_80078DF4(c); // 800B7C60
  c->r[3]=c->r[30]+0x000000B8u; // 800B7C64
  c->r[4]=0u+0x00000000u; // 800B7C68
  c->lr=0x800B7C70u; f_800BB8E4(c); // 800B7C6C
  c->r[3]=c->r[30]+0x000000E8u; // 800B7C70
  c->r[4]=0u+0xFFFFFFFFu; // 800B7C74
  c->lr=0x800B7C7Cu; f_800E25FC(c); // 800B7C78
  c->r[3]=c->r[30]+0x000000B8u; // 800B7C7C
  c->r[4]=0u+0xFFFFFFFFu; // 800B7C80
  c->lr=0x800B7C88u; f_800BB850(c); // 800B7C84
  c->r[3]=c->r[30]|c->r[30]; // 800B7C88
  c->r[4]=0u+0x00000000u; // 800B7C8C
  c->lr=0x800B7C94u; f_80078BF0(c); // 800B7C90
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800B7C94
  cmps(c,0,(int32_t)c->r[0],0); // 800B7C98
  if (!crb(c,1)) { goto L_800B7CA8; } // 800B7C9C
  c->r[3]=c->r[30]|c->r[30]; // 800B7CA0
  c->lr=0x800B7CA8u; f_80047B20(c); // 800B7CA4
L_800B7CA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800B7CA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7CAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B7CB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7CB4
  c->lr=c->r[0]; // 800B7CB8
  c->r[1]=c->r[1]+0x00000010u; // 800B7CBC
  return; // 800B7CC0
}

// fn_800B7CC4
void f_800B7CC4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B7CC4
  W32(c->r[3]+0x000000C4u,c->r[0]); // 800B7CC8
  W32(c->r[3]+0x000000C8u,c->r[0]); // 800B7CCC
  W32(c->r[3]+0x000000CCu,c->r[0]); // 800B7CD0
  W32(c->r[3]+0x000000D0u,c->r[0]); // 800B7CD4
  W32(c->r[3]+0x000000D8u,c->r[0]); // 800B7CD8
  W32(c->r[3]+0x000000DCu,c->r[0]); // 800B7CDC
  c->r[3]=c->r[3]+0x000000B8u; // 800B7CE0
  c->r[4]=0u+0x00000000u; // 800B7CE4
  f_800BB8E4(c); return; // 800B7CE8
}

// fn_800B7CEC
void f_800B7CEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7CEC
  c->r[0]=c->lr; // 800B7CF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7CF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7CF8
  c->r[31]=c->r[3]|c->r[3]; // 800B7CFC
  c->r[0]=R32(c->r[3]+0x000000DCu); // 800B7D00
  cmps(c,0,(int32_t)c->r[0],0); // 800B7D04
  if (crb(c,2)) { goto L_800B7D30; } // 800B7D08
  c->lr=0x800B7D10u; f_800B7CC4(c); // 800B7D0C
  c->r[3]=c->r[31]+0x000000E8u; // 800B7D10
  c->lr=0x800B7D18u; f_800E2728(c); // 800B7D14
  c->r[3]=c->r[31]+0x000000E8u; // 800B7D18
  c->lr=0x800B7D20u; f_800E2938(c); // 800B7D1C
  c->r[3]=c->r[31]+0x000000E8u; // 800B7D20
  c->lr=0x800B7D28u; f_800E293C(c); // 800B7D24
  c->r[0]=0u+0x00000000u; // 800B7D28
  W32(c->r[31]+0x000000DCu,c->r[0]); // 800B7D2C
L_800B7D30:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7D34
  c->lr=c->r[0]; // 800B7D38
  c->r[1]=c->r[1]+0x00000010u; // 800B7D3C
  return; // 800B7D40
}

// fn_800B7D44
void f_800B7D44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7D44
  c->r[0]=c->lr; // 800B7D48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7D50
  c->r[31]=c->r[3]|c->r[3]; // 800B7D54
  c->lr=0x800B7D5Cu; f_800A23BC(c); // 800B7D58
  cmps(c,0,(int32_t)c->r[3],0); // 800B7D5C
  if (crb(c,2)) { goto L_800B7D6C; } // 800B7D60
  c->lr=0x800B7D68u; f_800A23BC(c); // 800B7D64
  c->lr=0x800B7D6Cu; f_800E2DEC(c); // 800B7D68
L_800B7D6C:;
  c->lr=0x800B7D70u; f_8007B524(c); // 800B7D6C
  c->lr=0x800B7D74u; f_8023BBE0(c); // 800B7D70
  cmps(c,0,(int32_t)c->r[3],0); // 800B7D74
  if (crb(c,2)) { goto L_800B7D88; } // 800B7D78
  c->r[0]=0u+0x00000001u; // 800B7D7C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 800B7D80
  goto L_800B7D90; // 800B7D84
L_800B7D88:;
  c->r[0]=0u+0x00000001u; // 800B7D88
  W32(c->r[31]+0x000000D8u,c->r[0]); // 800B7D8C
L_800B7D90:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7D94
  c->lr=c->r[0]; // 800B7D98
  c->r[1]=c->r[1]+0x00000010u; // 800B7D9C
  return; // 800B7DA0
}

// fn_800B7DA4
void f_800B7DA4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000E8u; // 800B7DA4
  f_800BB7E8(c); return; // 800B7DA8
}

// fn_800B7DAC
void f_800B7DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7DAC
  c->r[0]=c->lr; // 800B7DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7DB4
  c->lr=0x800B7DBCu; f_8007B524(c); // 800B7DB8
  c->lr=0x800B7DC0u; f_8023BC10(c); // 800B7DBC
  cmps(c,0,(int32_t)c->r[3],0); // 800B7DC0
  if (!crb(c,2)) { goto L_800B7DD0; } // 800B7DC4
  c->lr=0x800B7DCCu; f_800B7AC0(c); // 800B7DC8
  goto L_800B7DD4; // 800B7DCC
L_800B7DD0:;
  c->r[3]=0u+0x00000001u; // 800B7DD0
L_800B7DD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7DD4
  c->lr=c->r[0]; // 800B7DD8
  c->r[1]=c->r[1]+0x00000010u; // 800B7DDC
  return; // 800B7DE0
}

// fn_800B7DE4
void f_800B7DE4(Ctx* __restrict c) {
  return; // 800B7DE4
}

// fn_800B7DE8
void f_800B7DE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7DE8
  c->r[0]=c->lr; // 800B7DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7DF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7DF4
  c->r[31]=c->r[3]|c->r[3]; // 800B7DF8
  c->r[3]=c->r[3]+0x000000B8u; // 800B7DFC
  c->lr=0x800B7E04u; f_800BB8EC(c); // 800B7E00
  cmps(c,0,(int32_t)c->r[3],0); // 800B7E04
  if (crb(c,2)) { goto L_800B7E1C; } // 800B7E08
  c->lr=0x800B7E10u; f_800A23BC(c); // 800B7E0C
  c->lr=0x800B7E14u; f_800A23B4(c); // 800B7E10
  c->lr=0x800B7E18u; f_800DE6B8(c); // 800B7E14
  goto L_800B7EAC; // 800B7E18
L_800B7E1C:;
  c->lr=0x800B7E20u; f_800A23BC(c); // 800B7E1C
  c->lr=0x800B7E24u; f_800BB7F0(c); // 800B7E20
  c->lr=0x800B7E28u; f_800C2B94(c); // 800B7E24
  cmps(c,0,(int32_t)c->r[3],0); // 800B7E28
  if (crb(c,2)) { goto L_800B7EAC; } // 800B7E2C
  c->lr=0x800B7E34u; f_800A23BC(c); // 800B7E30
  c->lr=0x800B7E38u; f_800A23C8(c); // 800B7E34
  c->lr=0x800B7E3Cu; f_800CDEF0(c); // 800B7E38
  cmps(c,0,(int32_t)c->r[3],0); // 800B7E3C
  if (!crb(c,2)) { goto L_800B7EAC; } // 800B7E40
  c->lr=0x800B7E48u; f_800A23BC(c); // 800B7E44
  c->lr=0x800B7E4Cu; f_800A23B4(c); // 800B7E48
  c->lr=0x800B7E50u; f_800DECBC(c); // 800B7E4C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7E50
  if (crb(c,2)) { goto L_800B7EAC; } // 800B7E54
  c->r[0]=R32(c->r[31]+0x000000D0u); // 800B7E58
  cmps(c,0,(int32_t)c->r[0],0); // 800B7E5C
  if (crb(c,2)) { goto L_800B7E88; } // 800B7E60
  c->lr=0x800B7E68u; f_800A23BC(c); // 800B7E64
  c->r[4]=R32(c->r[31]+0x000000E0u); // 800B7E68
  c->lr=0x800B7E70u; f_800BB774(c); // 800B7E6C
  c->lr=0x800B7E74u; f_800A23BC(c); // 800B7E70
  c->lr=0x800B7E78u; f_800A23B4(c); // 800B7E74
  c->r[4]=R32(c->r[31]+0x000000E4u); // 800B7E78
  c->lr=0x800B7E80u; f_800BB840(c); // 800B7E7C
  c->r[0]=0u+0x00000000u; // 800B7E80
  W32(c->r[31]+0x000000D0u,c->r[0]); // 800B7E84
L_800B7E88:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 800B7E88
  cmps(c,0,(int32_t)c->r[0],0); // 800B7E8C
  if (!crb(c,2)) { goto L_800B7EA0; } // 800B7E90
  c->lr=0x800B7E98u; f_800B7B00(c); // 800B7E94
  c->r[0]=0u+0x00000001u; // 800B7E98
  W32(c->r[31]+0x000000CCu,c->r[0]); // 800B7E9C
L_800B7EA0:;
  c->r[3]=c->r[31]+0x000000B8u; // 800B7EA0
  c->r[4]=0u+0x00000002u; // 800B7EA4
  c->lr=0x800B7EACu; f_800BB8E4(c); // 800B7EA8
L_800B7EAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7EAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7EB0
  c->lr=c->r[0]; // 800B7EB4
  c->r[1]=c->r[1]+0x00000010u; // 800B7EB8
  return; // 800B7EBC
}

// fn_800B7EC0
void f_800B7EC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7EC0
  c->r[0]=c->lr; // 800B7EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7ECC
  c->r[31]=c->r[3]|c->r[3]; // 800B7ED0
  c->r[3]=c->r[3]+0x000000B8u; // 800B7ED4
  c->lr=0x800B7EDCu; f_800BB8EC(c); // 800B7ED8
  cmps(c,0,(int32_t)c->r[3],0); // 800B7EDC
  if (crb(c,2)) { goto L_800B7EF4; } // 800B7EE0
  c->lr=0x800B7EE8u; f_800A23BC(c); // 800B7EE4
  c->lr=0x800B7EECu; f_800A23B4(c); // 800B7EE8
  c->lr=0x800B7EF0u; f_800DE6D8(c); // 800B7EEC
  goto L_800B7F3C; // 800B7EF0
L_800B7EF4:;
  c->lr=0x800B7EF8u; f_800A23BC(c); // 800B7EF4
  c->lr=0x800B7EFCu; f_800BB7F0(c); // 800B7EF8
  c->lr=0x800B7F00u; f_800C2B94(c); // 800B7EFC
  cmps(c,0,(int32_t)c->r[3],0); // 800B7F00
  if (crb(c,2)) { goto L_800B7F3C; } // 800B7F04
  c->lr=0x800B7F0Cu; f_800A23BC(c); // 800B7F08
  c->lr=0x800B7F10u; f_800A23C8(c); // 800B7F0C
  c->lr=0x800B7F14u; f_800CDEF0(c); // 800B7F10
  cmps(c,0,(int32_t)c->r[3],0); // 800B7F14
  if (!crb(c,2)) { goto L_800B7F3C; } // 800B7F18
  c->lr=0x800B7F20u; f_800A23BC(c); // 800B7F1C
  c->lr=0x800B7F24u; f_800A23B4(c); // 800B7F20
  c->lr=0x800B7F28u; f_800DECBC(c); // 800B7F24
  cmps(c,0,(int32_t)c->r[3],0); // 800B7F28
  if (crb(c,2)) { goto L_800B7F3C; } // 800B7F2C
  c->r[3]=c->r[31]+0x000000B8u; // 800B7F30
  c->r[4]=0u+0x00000000u; // 800B7F34
  c->lr=0x800B7F3Cu; f_800BB8E4(c); // 800B7F38
L_800B7F3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7F3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7F40
  c->lr=c->r[0]; // 800B7F44
  c->r[1]=c->r[1]+0x00000010u; // 800B7F48
  return; // 800B7F4C
}

// fn_800B7F50
void f_800B7F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7F50
  c->r[0]=c->lr; // 800B7F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7F5C
  c->r[31]=c->r[3]|c->r[3]; // 800B7F60
  c->r[3]=c->r[3]+0x000000B8u; // 800B7F64
  c->lr=0x800B7F6Cu; f_800BB8EC(c); // 800B7F68
  cmps(c,0,(int32_t)c->r[3],0); // 800B7F6C
  if (crb(c,2)) { goto L_800B7F84; } // 800B7F70
  c->lr=0x800B7F78u; f_800A23BC(c); // 800B7F74
  c->lr=0x800B7F7Cu; f_800A23B4(c); // 800B7F78
  c->lr=0x800B7F80u; f_800DE6E4(c); // 800B7F7C
  goto L_800B7FCC; // 800B7F80
L_800B7F84:;
  c->lr=0x800B7F88u; f_800A23BC(c); // 800B7F84
  c->lr=0x800B7F8Cu; f_800BB7F0(c); // 800B7F88
  c->lr=0x800B7F90u; f_800C2B94(c); // 800B7F8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7F90
  if (crb(c,2)) { goto L_800B7FCC; } // 800B7F94
  c->lr=0x800B7F9Cu; f_800A23BC(c); // 800B7F98
  c->lr=0x800B7FA0u; f_800A23C8(c); // 800B7F9C
  c->lr=0x800B7FA4u; f_800CDEF0(c); // 800B7FA0
  cmps(c,0,(int32_t)c->r[3],0); // 800B7FA4
  if (!crb(c,2)) { goto L_800B7FCC; } // 800B7FA8
  c->lr=0x800B7FB0u; f_800A23BC(c); // 800B7FAC
  c->lr=0x800B7FB4u; f_800A23B4(c); // 800B7FB0
  c->lr=0x800B7FB8u; f_800DECBC(c); // 800B7FB4
  cmps(c,0,(int32_t)c->r[3],0); // 800B7FB8
  if (crb(c,2)) { goto L_800B7FCC; } // 800B7FBC
  c->r[3]=c->r[31]+0x000000B8u; // 800B7FC0
  c->r[4]=0u+0x00000000u; // 800B7FC4
  c->lr=0x800B7FCCu; f_800BB8E4(c); // 800B7FC8
L_800B7FCC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7FD0
  c->lr=c->r[0]; // 800B7FD4
  c->r[1]=c->r[1]+0x00000010u; // 800B7FD8
  return; // 800B7FDC
}

// fn_800B7FE0
void f_800B7FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7FE0
  c->r[0]=c->lr; // 800B7FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7FE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7FEC
  c->r[31]=c->r[3]|c->r[3]; // 800B7FF0
  c->lr=0x800B7FF8u; f_800B7CEC(c); // 800B7FF4
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800B7FF8
  cmps(c,0,(int32_t)c->r[0],0); // 800B7FFC
  if (!crb(c,2)) { goto L_800B8030; } // 800B8000
  c->r[3]=c->r[31]|c->r[31]; // 800B8004
  c->lr=0x800B800Cu; f_80065DB4(c); // 800B8008
  c->r[4]=c->r[3]|c->r[3]; // 800B800C
  c->r[3]=c->r[31]+0x000000E8u; // 800B8010
  c->lr=0x800B8018u; f_800E27C8(c); // 800B8014
  c->r[3]=c->r[31]+0x000000B8u; // 800B8018
  c->r[4]=0u+0x00000001u; // 800B801C
  c->lr=0x800B8024u; f_800BB8E4(c); // 800B8020
  c->r[0]=0u+0x00000001u; // 800B8024
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800B8028
  goto L_800B8078; // 800B802C
L_800B8030:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 800B8030
  cmps(c,0,(int32_t)c->r[0],0); // 800B8034
  if (!crb(c,2)) { goto L_800B806C; } // 800B8038
  c->r[3]=c->r[31]|c->r[31]; // 800B803C
  c->lr=0x800B8044u; f_800B7DA4(c); // 800B8040
  cmps(c,0,(int32_t)c->r[3],0); // 800B8044
  if (!crb(c,2)) { goto L_800B805C; } // 800B8048
  c->r[3]=c->r[31]+0x000000B8u; // 800B804C
  c->r[4]=0u+0x00000002u; // 800B8050
  c->lr=0x800B8058u; f_800BB8E4(c); // 800B8054
  goto L_800B8078; // 800B8058
L_800B805C:;
  c->r[3]=c->r[31]+0x000000B8u; // 800B805C
  c->r[4]=0u+0x00000003u; // 800B8060
  c->lr=0x800B8068u; f_800BB8E4(c); // 800B8064
  goto L_800B8078; // 800B8068
L_800B806C:;
  c->r[3]=c->r[31]+0x000000B8u; // 800B806C
  c->r[4]=0u+0x00000003u; // 800B8070
  c->lr=0x800B8078u; f_800BB8E4(c); // 800B8074
L_800B8078:;
  c->r[0]=0u+0x00000000u; // 800B8078
  W32(c->r[31]+0x000000D8u,c->r[0]); // 800B807C
  c->r[3]=c->r[31]+0x000000E8u; // 800B8080
  c->lr=0x800B8088u; f_800E2A04(c); // 800B8084
  c->r[0]=0u+0x00000001u; // 800B8088
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800B808C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8090
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8094
  c->lr=c->r[0]; // 800B8098
  c->r[1]=c->r[1]+0x00000010u; // 800B809C
  return; // 800B80A0
}

// fn_800B80A4
void f_800B80A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B80A4
  c->r[0]=c->lr; // 800B80A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B80AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B80B0
  c->r[31]=c->r[3]|c->r[3]; // 800B80B4
  c->r[0]=R32(c->r[3]+0x000000C8u); // 800B80B8
  cmps(c,0,(int32_t)c->r[0],0); // 800B80BC
  if (crb(c,2)) { goto L_800B80D4; } // 800B80C0
  c->r[3]=c->r[3]+0x000000E8u; // 800B80C4
  c->lr=0x800B80CCu; f_800E2938(c); // 800B80C8
  c->r[0]=0u+0x00000000u; // 800B80CC
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800B80D0
L_800B80D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B80D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B80D8
  c->lr=c->r[0]; // 800B80DC
  c->r[1]=c->r[1]+0x00000010u; // 800B80E0
  return; // 800B80E4
}

// fn_800B80E8
void f_800B80E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B80E8
  c->r[0]=c->lr; // 800B80EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B80F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B80F4
  c->r[31]=c->r[3]|c->r[3]; // 800B80F8
  c->r[3]=c->r[3]+0x000000B8u; // 800B80FC
  c->lr=0x800B8104u; f_800BB910(c); // 800B8100
  c->r[3]=c->r[31]+0x000000B8u; // 800B8104
  c->lr=0x800B810Cu; f_800BB904(c); // 800B8108
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800B810C
  c->r[3]=0u+0x80430000u; // 800B8110
  c->r[0]=c->r[3]+0xFFFFD630u; // 800B8114
  c->r[12]=c->r[0]+c->r[4]; // 800B8118
  c->r[3]=c->r[31]|c->r[31]; // 800B811C
  c->lr=0x800B8124u; f_802F09D0(c); // 800B8120
  c->r[0]=c->r[0]|0x00000000u; // 800B8124
  c->r[3]=c->r[31]+0x000000E8u; // 800B8128
  c->lr=0x800B8130u; f_800E2B0C(c); // 800B812C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8130
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8134
  c->lr=c->r[0]; // 800B8138
  c->r[1]=c->r[1]+0x00000010u; // 800B813C
  return; // 800B8140
}

// fn_800B8144
void f_800B8144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8144
  c->r[0]=c->lr; // 800B8148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B814C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8150
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8154
  c->r[30]=c->r[3]|c->r[3]; // 800B8158
  c->r[0]=0u+0x00000000u; // 800B815C
  W32(c->r[3]+0x000000D4u,c->r[0]); // 800B8160
  c->r[3]=c->r[13]+0xFFFF87E8u; // 800B8164
  c->lr=0x800B816Cu; f_801E65E8(c); // 800B8168
  cmps(c,0,(int32_t)c->r[3],0); // 800B816C
  if (!crb(c,2)) { goto L_800B8198; } // 800B8170
  c->lr=0x800B8178u; f_8007B524(c); // 800B8174
  c->lr=0x800B817Cu; f_8023BC10(c); // 800B8178
  cmps(c,0,(int32_t)c->r[3],0); // 800B817C
  if (crb(c,2)) { goto L_800B8188; } // 800B8180
  goto L_800B8190; // 800B8184
L_800B8188:;
  c->r[31]=0u+0x00000001u; // 800B8188
  goto L_800B81D8; // 800B818C
L_800B8190:;
  c->r[31]=0u+0x00000000u; // 800B8190
  goto L_800B81D8; // 800B8194
L_800B8198:;
  c->r[31]=0u+0x00000000u; // 800B8198
  c->lr=0x800B81A0u; f_800A23BC(c); // 800B819C
  cmps(c,0,(int32_t)c->r[3],0); // 800B81A0
  if (!crb(c,2)) { goto L_800B81B0; } // 800B81A4
  c->r[31]=0u+0x00000001u; // 800B81A8
  goto L_800B81C4; // 800B81AC
L_800B81B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800B81B0
  c->lr=0x800B81B8u; f_800B7DA4(c); // 800B81B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B81B8
  if (!crb(c,2)) { goto L_800B81C4; } // 800B81BC
  c->r[31]=0u+0x00000001u; // 800B81C0
L_800B81C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800B81C4
  c->lr=0x800B81CCu; f_800BBF38(c); // 800B81C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B81CC
  if (crb(c,2)) { goto L_800B81D8; } // 800B81D0
  c->r[31]=0u+0x00000000u; // 800B81D4
L_800B81D8:;
  W32(c->r[30]+0x000000D4u,c->r[31]); // 800B81D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B81DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B81E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B81E4
  c->lr=c->r[0]; // 800B81E8
  c->r[1]=c->r[1]+0x00000010u; // 800B81EC
  return; // 800B81F0
}

// fn_800B81F4
void f_800B81F4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800B81F4
  W32(c->r[3]+0x000000D4u,c->r[0]); // 800B81F8
  return; // 800B81FC
}

// fn_800B8200
void f_800B8200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8200
  c->r[0]=c->lr; // 800B8204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8208
  c->r[3]=R32(c->r[2]+0xFFFF87E8u); // 800B820C
  c->r[0]=R32(c->r[2]+0xFFFF87ECu); // 800B8210
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B8214
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B8218
  c->lr=0x800B8220u; f_800A23BC(c); // 800B821C
  c->lr=0x800B8224u; f_800BB7F8(c); // 800B8220
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800B8224
  c->r[3]=c->r[1]+0x00000008u; // 800B8228
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B822C
  c->lr=0x800B8234u; f_80173F68(c); // 800B8230
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8234
  c->lr=c->r[0]; // 800B8238
  c->r[1]=c->r[1]+0x00000010u; // 800B823C
  return; // 800B8240
}

// fn_800B8244
void f_800B8244(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8244
  c->r[0]=c->lr; // 800B8248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B824C
  c->lr=0x800B8254u; f_800B8200(c); // 800B8250
  c->lr=0x800B8258u; f_80174AC4(c); // 800B8254
  c->r[0]=cntlz(c->r[3]); // 800B8258
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B825C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8260
  c->lr=c->r[0]; // 800B8264
  c->r[1]=c->r[1]+0x00000010u; // 800B8268
  return; // 800B826C
}

// fn_800B8270
void f_800B8270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8270
  c->r[0]=c->lr; // 800B8274
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8278
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B827C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B8280
  c->r[30]=c->r[3]|c->r[3]; // 800B8284
  c->r[3]=c->r[1]+0x0000000Cu; // 800B8288
  c->r[4]=0u+0x00000000u; // 800B828C
  c->r[5]=0u+0x00000000u; // 800B8290
  c->r[6]=0u+0x00000000u; // 800B8294
  c->r[7]=0u+0x00000000u; // 800B8298
  c->lr=0x800B82A0u; f_8004E248(c); // 800B829C
  c->lr=0x800B82A4u; f_800B8200(c); // 800B82A0
  c->r[31]=c->r[3]|c->r[3]; // 800B82A4
  c->r[3]=0u+0x00000001u; // 800B82A8
  c->lr=0x800B82B0u; f_80173F68(c); // 800B82AC
  c->r[4]=c->r[3]|c->r[3]; // 800B82B0
  c->r[3]=c->r[1]+0x00000008u; // 800B82B4
  c->lr=0x800B82BCu; f_8017494C(c); // 800B82B8
  c->r[3]=c->r[1]+0x0000000Cu; // 800B82BC
  c->r[4]=c->r[1]+0x00000008u; // 800B82C0
  c->lr=0x800B82C8u; f_8005D48C(c); // 800B82C4
  c->r[3]=c->r[1]+0x00000008u; // 800B82C8
  c->r[4]=0u+0xFFFFFFFFu; // 800B82CC
  c->lr=0x800B82D4u; f_80047BD4(c); // 800B82D0
  c->r[3]=c->r[31]|c->r[31]; // 800B82D4
  c->r[0]=cntlz(c->r[30]); // 800B82D8
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B82DC
  c->lr=0x800B82E4u; f_80174ADC(c); // 800B82E0
  c->r[3]=c->r[1]+0x0000000Cu; // 800B82E4
  c->r[4]=0u+0xFFFFFFFFu; // 800B82E8
  c->lr=0x800B82F0u; f_80047BD4(c); // 800B82EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B82F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B82F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B82F8
  c->lr=c->r[0]; // 800B82FC
  c->r[1]=c->r[1]+0x00000020u; // 800B8300
  return; // 800B8304
}

// fn_800B8308
void f_800B8308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8308
  c->r[0]=c->lr; // 800B830C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B8310
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800B8314
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800B8318
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B831C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800B8320
  W32(c->r[1]+0x00000024u,c->r[29]); // 800B8324
  c->r[29]=c->r[3]|c->r[3]; // 800B8328
  c->r[30]=c->r[4]|c->r[4]; // 800B832C
  c->r[31]=c->r[5]|c->r[5]; // 800B8330
  c->f[31]=c->f[1]; // 800B8334
  c->r[3]=c->r[1]+0x00000018u; // 800B8338
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800B833C
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 800B8340
  c->r[6]=rotl(c->r[31],0)&0x000000FFu; // 800B8344
  c->r[7]=0u+0x000000FFu; // 800B8348
  c->lr=0x800B8350u; f_8004E248(c); // 800B834C
  c->r[3]=c->r[1]+0x00000014u; // 800B8350
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800B8354
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 800B8358
  c->r[6]=rotl(c->r[31],0)&0x000000FFu; // 800B835C
  c->r[7]=0u+0x00000000u; // 800B8360
  c->lr=0x800B8368u; f_8004E248(c); // 800B8364
  c->lr=0x800B836Cu; f_800B8200(c); // 800B8368
  c->r[31]=c->r[3]|c->r[3]; // 800B836C
  c->lr=0x800B8374u; f_80174AC4(c); // 800B8370
  cmps(c,0,(int32_t)c->r[3],0); // 800B8374
  if (!crb(c,2)) { goto L_800B8400; } // 800B8378
  c->r[3]=c->r[1]+0x00000010u; // 800B837C
  c->r[4]=c->r[31]|c->r[31]; // 800B8380
  c->lr=0x800B8388u; f_8017494C(c); // 800B8384
  c->r[3]=c->r[1]+0x00000018u; // 800B8388
  c->r[4]=c->r[1]+0x00000010u; // 800B838C
  c->lr=0x800B8394u; f_8005D48C(c); // 800B8390
  c->r[3]=c->r[1]+0x00000010u; // 800B8394
  c->r[4]=0u+0xFFFFFFFFu; // 800B8398
  c->lr=0x800B83A0u; f_80047BD4(c); // 800B839C
  c->r[0]=R8(c->r[1]+0x00000014u); // 800B83A0
  W8(c->r[1]+0x00000018u,c->r[0]); // 800B83A4
  c->r[0]=R8(c->r[1]+0x00000015u); // 800B83A8
  W8(c->r[1]+0x00000019u,c->r[0]); // 800B83AC
  c->r[0]=R8(c->r[1]+0x00000016u); // 800B83B0
  W8(c->r[1]+0x0000001Au,c->r[0]); // 800B83B4
  c->r[3]=c->r[1]+0x0000000Cu; // 800B83B8
  c->r[4]=c->r[1]+0x00000018u; // 800B83BC
  c->lr=0x800B83C4u; f_800549FC(c); // 800B83C0
  c->r[3]=c->r[1]+0x00000008u; // 800B83C4
  c->r[4]=c->r[1]+0x00000014u; // 800B83C8
  c->lr=0x800B83D0u; f_800549FC(c); // 800B83CC
  c->r[3]=c->r[31]|c->r[31]; // 800B83D0
  c->r[4]=c->r[1]+0x0000000Cu; // 800B83D4
  c->r[5]=c->r[1]+0x00000008u; // 800B83D8
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B83DC
  c->f[2]=c->f[31]; // 800B83E0
  c->lr=0x800B83E8u; f_80174758(c); // 800B83E4
  c->r[3]=c->r[1]+0x00000008u; // 800B83E8
  c->r[4]=0u+0xFFFFFFFFu; // 800B83EC
  c->lr=0x800B83F4u; f_80047BD4(c); // 800B83F0
  c->r[3]=c->r[1]+0x0000000Cu; // 800B83F4
  c->r[4]=0u+0xFFFFFFFFu; // 800B83F8
  c->lr=0x800B8400u; f_80047BD4(c); // 800B83FC
L_800B8400:;
  c->r[3]=c->r[1]+0x00000014u; // 800B8400
  c->r[4]=0u+0xFFFFFFFFu; // 800B8404
  c->lr=0x800B840Cu; f_80047BD4(c); // 800B8408
  c->r[3]=c->r[1]+0x00000018u; // 800B840C
  c->r[4]=0u+0xFFFFFFFFu; // 800B8410
  c->lr=0x800B8418u; f_80047BD4(c); // 800B8414
  c->r[0]=0u+0x00000038u; // 800B8418
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B841C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800B8420
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B8424
  c->r[30]=R32(c->r[1]+0x00000028u); // 800B8428
  c->r[29]=R32(c->r[1]+0x00000024u); // 800B842C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B8430
  c->lr=c->r[0]; // 800B8434
  c->r[1]=c->r[1]+0x00000040u; // 800B8438
  return; // 800B843C
}

// fn_800B8440
void f_800B8440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8440
  c->r[0]=c->lr; // 800B8444
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B8448
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800B844C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800B8450
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B8454
  W32(c->r[1]+0x00000028u,c->r[30]); // 800B8458
  W32(c->r[1]+0x00000024u,c->r[29]); // 800B845C
  c->r[29]=c->r[3]|c->r[3]; // 800B8460
  c->r[30]=c->r[4]|c->r[4]; // 800B8464
  c->r[31]=c->r[5]|c->r[5]; // 800B8468
  c->f[31]=c->f[1]; // 800B846C
  c->r[3]=c->r[1]+0x00000018u; // 800B8470
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800B8474
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 800B8478
  c->r[6]=rotl(c->r[31],0)&0x000000FFu; // 800B847C
  c->r[7]=0u+0x00000000u; // 800B8480
  c->lr=0x800B8488u; f_8004E248(c); // 800B8484
  c->r[3]=c->r[1]+0x00000014u; // 800B8488
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800B848C
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 800B8490
  c->r[6]=rotl(c->r[31],0)&0x000000FFu; // 800B8494
  c->r[7]=0u+0x000000FFu; // 800B8498
  c->lr=0x800B84A0u; f_8004E248(c); // 800B849C
  c->lr=0x800B84A4u; f_800B8200(c); // 800B84A0
  c->r[31]=c->r[3]|c->r[3]; // 800B84A4
  c->lr=0x800B84ACu; f_80174AC4(c); // 800B84A8
  cmps(c,0,(int32_t)c->r[3],0); // 800B84AC
  if (!crb(c,2)) { goto L_800B8538; } // 800B84B0
  c->r[3]=c->r[1]+0x00000010u; // 800B84B4
  c->r[4]=c->r[31]|c->r[31]; // 800B84B8
  c->lr=0x800B84C0u; f_8017494C(c); // 800B84BC
  c->r[3]=c->r[1]+0x00000018u; // 800B84C0
  c->r[4]=c->r[1]+0x00000010u; // 800B84C4
  c->lr=0x800B84CCu; f_8005D48C(c); // 800B84C8
  c->r[3]=c->r[1]+0x00000010u; // 800B84CC
  c->r[4]=0u+0xFFFFFFFFu; // 800B84D0
  c->lr=0x800B84D8u; f_80047BD4(c); // 800B84D4
  c->r[0]=R8(c->r[1]+0x00000014u); // 800B84D8
  W8(c->r[1]+0x00000018u,c->r[0]); // 800B84DC
  c->r[0]=R8(c->r[1]+0x00000015u); // 800B84E0
  W8(c->r[1]+0x00000019u,c->r[0]); // 800B84E4
  c->r[0]=R8(c->r[1]+0x00000016u); // 800B84E8
  W8(c->r[1]+0x0000001Au,c->r[0]); // 800B84EC
  c->r[3]=c->r[1]+0x0000000Cu; // 800B84F0
  c->r[4]=c->r[1]+0x00000018u; // 800B84F4
  c->lr=0x800B84FCu; f_800549FC(c); // 800B84F8
  c->r[3]=c->r[1]+0x00000008u; // 800B84FC
  c->r[4]=c->r[1]+0x00000014u; // 800B8500
  c->lr=0x800B8508u; f_800549FC(c); // 800B8504
  c->r[3]=c->r[31]|c->r[31]; // 800B8508
  c->r[4]=c->r[1]+0x0000000Cu; // 800B850C
  c->r[5]=c->r[1]+0x00000008u; // 800B8510
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8514
  c->f[2]=c->f[31]; // 800B8518
  c->lr=0x800B8520u; f_80174758(c); // 800B851C
  c->r[3]=c->r[1]+0x00000008u; // 800B8520
  c->r[4]=0u+0xFFFFFFFFu; // 800B8524
  c->lr=0x800B852Cu; f_80047BD4(c); // 800B8528
  c->r[3]=c->r[1]+0x0000000Cu; // 800B852C
  c->r[4]=0u+0xFFFFFFFFu; // 800B8530
  c->lr=0x800B8538u; f_80047BD4(c); // 800B8534
L_800B8538:;
  c->r[3]=c->r[1]+0x00000014u; // 800B8538
  c->r[4]=0u+0xFFFFFFFFu; // 800B853C
  c->lr=0x800B8544u; f_80047BD4(c); // 800B8540
  c->r[3]=c->r[1]+0x00000018u; // 800B8544
  c->r[4]=0u+0xFFFFFFFFu; // 800B8548
  c->lr=0x800B8550u; f_80047BD4(c); // 800B854C
  c->r[0]=0u+0x00000038u; // 800B8550
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B8554
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800B8558
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B855C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800B8560
  c->r[29]=R32(c->r[1]+0x00000024u); // 800B8564
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B8568
  c->lr=c->r[0]; // 800B856C
  c->r[1]=c->r[1]+0x00000040u; // 800B8570
  return; // 800B8574
}

// fn_800B8578
void f_800B8578(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8578
  c->r[0]=c->lr; // 800B857C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8584
  c->lr=0x800B858Cu; f_800B8200(c); // 800B8588
  c->r[31]=c->r[3]|c->r[3]; // 800B858C
  c->lr=0x800B8594u; f_800B8244(c); // 800B8590
  cmps(c,0,(int32_t)c->r[3],0); // 800B8594
  if (crb(c,2)) { goto L_800B85AC; } // 800B8598
  c->r[3]=c->r[31]|c->r[31]; // 800B859C
  c->r[4]=0u+0x00000000u; // 800B85A0
  c->lr=0x800B85A8u; f_801748B8(c); // 800B85A4
  goto L_800B85B0; // 800B85A8
L_800B85AC:;
  c->r[3]=0u+0x00000001u; // 800B85AC
L_800B85B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B85B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B85B4
  c->lr=c->r[0]; // 800B85B8
  c->r[1]=c->r[1]+0x00000010u; // 800B85BC
  return; // 800B85C0
}

// fn_800B85C4
void f_800B85C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B85C4
  c->r[0]=c->lr; // 800B85C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B85CC
  c->r[3]=c->r[1]+0x0000000Cu; // 800B85D0
  c->lr=0x800B85D8u; f_80047C5C(c); // 800B85D4
  c->lr=0x800B85DCu; f_800B8200(c); // 800B85D8
  c->r[4]=c->r[3]|c->r[3]; // 800B85DC
  c->r[3]=c->r[1]+0x00000008u; // 800B85E0
  c->lr=0x800B85E8u; f_8017494C(c); // 800B85E4
  c->r[3]=c->r[1]+0x0000000Cu; // 800B85E8
  c->r[4]=c->r[1]+0x00000008u; // 800B85EC
  c->lr=0x800B85F4u; f_8005D48C(c); // 800B85F0
  c->r[3]=c->r[1]+0x00000008u; // 800B85F4
  c->r[4]=0u+0xFFFFFFFFu; // 800B85F8
  c->lr=0x800B8600u; f_80047BD4(c); // 800B85FC
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 800B8600
  {uint32_t ea=c->r[2]+0xFFFF87F8u; c->f[1]=RF64(ea);} // 800B8604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8608
  c->r[0]=0u+0x43300000u; // 800B860C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B8610
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800B8614
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800B8618
  {uint32_t ea=c->r[2]+0xFFFF87F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B861C
  fcmp(c,0,c->f[1],c->f[0]); // 800B8620
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B8624
  if (!crb(c,2)) { goto L_800B8640; } // 800B8628
  c->r[3]=c->r[1]+0x0000000Cu; // 800B862C
  c->r[4]=0u+0xFFFFFFFFu; // 800B8630
  c->lr=0x800B8638u; f_80047BD4(c); // 800B8634
  c->r[3]=0u+0x00000001u; // 800B8638
  goto L_800B8650; // 800B863C
L_800B8640:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800B8640
  c->r[4]=0u+0xFFFFFFFFu; // 800B8644
  c->lr=0x800B864Cu; f_80047BD4(c); // 800B8648
  c->r[3]=0u+0x00000000u; // 800B864C
L_800B8650:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8650
  c->lr=c->r[0]; // 800B8654
  c->r[1]=c->r[1]+0x00000020u; // 800B8658
  return; // 800B865C
}

// fn_800B8660
void f_800B8660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8660
  c->r[0]=c->lr; // 800B8664
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B866C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8670
  c->r[30]=c->r[3]|c->r[3]; // 800B8674
  c->lr=0x800B867Cu; f_800A23BC(c); // 800B8678
  c->r[4]=0u+0x00000000u; // 800B867C
  c->lr=0x800B8684u; f_800E3050(c); // 800B8680
  c->r[31]=c->r[3]|c->r[3]; // 800B8684
  c->lr=0x800B868Cu; f_800A23BC(c); // 800B8688
  c->lr=0x800B8690u; f_800BB7F0(c); // 800B868C
  c->r[4]=c->r[30]|c->r[30]; // 800B8690
  c->r[5]=0u+0x00000009u; // 800B8694
  c->r[6]=0u+0x00000001u; // 800B8698
  c->lr=0x800B86A0u; f_800C29FC(c); // 800B869C
  c->r[30]=c->r[3]|c->r[3]; // 800B86A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B86A4
  if (crb(c,2)) { goto L_800B86C4; } // 800B86A8
  c->lr=0x800B86B0u; f_800A23BC(c); // 800B86AC
  c->lr=0x800B86B4u; f_800BB7F0(c); // 800B86B0
  c->r[4]=c->r[30]|c->r[30]; // 800B86B4
  c->lr=0x800B86BCu; f_800BBE24(c); // 800B86B8
  c->r[4]=c->r[31]|c->r[31]; // 800B86BC
  c->lr=0x800B86C4u; f_800BBF64(c); // 800B86C0
L_800B86C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800B86C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B86C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B86CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B86D0
  c->lr=c->r[0]; // 800B86D4
  c->r[1]=c->r[1]+0x00000010u; // 800B86D8
  return; // 800B86DC
}

// fn_800B86E0
void f_800B86E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B86E0
  c->r[0]=c->lr; // 800B86E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B86E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B86EC
  c->r[31]=c->r[3]|c->r[3]; // 800B86F0
  c->lr=0x800B86F8u; f_800A23BC(c); // 800B86F4
  c->lr=0x800B86FCu; f_800BB7F0(c); // 800B86F8
  c->r[4]=c->r[31]|c->r[31]; // 800B86FC
  c->r[5]=0u+0x00000000u; // 800B8700
  c->lr=0x800B8708u; f_800C2C24(c); // 800B8704
  c->r[31]=c->r[3]|c->r[3]; // 800B8708
  cmps(c,0,(int32_t)c->r[3],0); // 800B870C
  if (crb(c,2)) { goto L_800B8724; } // 800B8710
  c->lr=0x800B8718u; f_800A23BC(c); // 800B8714
  c->lr=0x800B871Cu; f_800BB7F0(c); // 800B8718
  c->r[4]=c->r[31]|c->r[31]; // 800B871C
  c->lr=0x800B8724u; f_800C2B04(c); // 800B8720
L_800B8724:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8724
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8728
  c->lr=c->r[0]; // 800B872C
  c->r[1]=c->r[1]+0x00000010u; // 800B8730
  return; // 800B8734
}

// fn_800B8738
void f_800B8738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8738
  c->r[0]=c->lr; // 800B873C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8744
  c->r[31]=c->r[3]|c->r[3]; // 800B8748
  c->lr=0x800B8750u; f_800A23BC(c); // 800B874C
  c->lr=0x800B8754u; f_800BB7F0(c); // 800B8750
  c->r[4]=c->r[31]|c->r[31]; // 800B8754
  c->r[5]=c->r[1]+0x00000008u; // 800B8758
  c->lr=0x800B8760u; f_800C2C24(c); // 800B875C
  cmps(c,0,(int32_t)c->r[3],0); // 800B8760
  if (crb(c,2)) { goto L_800B8780; } // 800B8764
  c->r[31]=R32(c->r[1]+0x00000008u); // 800B8768
  cmps(c,0,(int32_t)c->r[31],0); // 800B876C
  if (crb(c,2)) { goto L_800B8780; } // 800B8770
  c->lr=0x800B8778u; f_8007B524(c); // 800B8774
  c->r[4]=c->r[31]|c->r[31]; // 800B8778
  c->lr=0x800B8780u; f_800ED528(c); // 800B877C
L_800B8780:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8780
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8784
  c->lr=c->r[0]; // 800B8788
  c->r[1]=c->r[1]+0x00000020u; // 800B878C
  return; // 800B8790
}

// fn_800B8794
void f_800B8794(Ctx* __restrict c) {
  return; // 800B8794
}

// fn_800B8798
void f_800B8798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8798
  c->r[0]=c->lr; // 800B879C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B87A0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B87A4
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B87A8
  W32(c->r[1]+0x00000010u,c->r[30]); // 800B87AC
  c->r[30]=c->r[3]|c->r[3]; // 800B87B0
  c->r[31]=c->r[4]|c->r[4]; // 800B87B4
  c->f[31]=c->f[1]; // 800B87B8
  c->lr=0x800B87C0u; f_800A23BC(c); // 800B87BC
  c->lr=0x800B87C4u; f_800BB800(c); // 800B87C0
  c->r[4]=c->r[30]|c->r[30]; // 800B87C4
  c->r[5]=c->r[31]|c->r[31]; // 800B87C8
  c->r[6]=0u+0x00000000u; // 800B87CC
  c->f[1]=c->f[31]; // 800B87D0
  c->r[7]=0u+0xFFFFFFFFu; // 800B87D4
  c->lr=0x800B87DCu; f_800C98E0(c); // 800B87D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B87DC
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B87E0
  c->r[30]=R32(c->r[1]+0x00000010u); // 800B87E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B87E8
  c->lr=c->r[0]; // 800B87EC
  c->r[1]=c->r[1]+0x00000020u; // 800B87F0
  return; // 800B87F4
}

// fn_800B87F8
void f_800B87F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B87F8
  c->r[0]=c->lr; // 800B87FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8800
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B8804
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B8808
  W32(c->r[1]+0x00000010u,c->r[30]); // 800B880C
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800B8810
  c->r[29]=c->r[3]|c->r[3]; // 800B8814
  c->r[30]=c->r[4]|c->r[4]; // 800B8818
  c->r[31]=c->r[5]|c->r[5]; // 800B881C
  c->f[31]=c->f[1]; // 800B8820
  c->lr=0x800B8828u; f_800A23BC(c); // 800B8824
  c->lr=0x800B882Cu; f_800BB800(c); // 800B8828
  c->r[4]=c->r[29]|c->r[29]; // 800B882C
  c->r[5]=c->r[30]|c->r[30]; // 800B8830
  c->r[6]=c->r[31]|c->r[31]; // 800B8834
  c->f[1]=c->f[31]; // 800B8838
  c->r[7]=0u+0xFFFFFFFFu; // 800B883C
  c->lr=0x800B8844u; f_800C98E0(c); // 800B8840
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B8844
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B8848
  c->r[30]=R32(c->r[1]+0x00000010u); // 800B884C
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 800B8850
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8854
  c->lr=c->r[0]; // 800B8858
  c->r[1]=c->r[1]+0x00000020u; // 800B885C
  return; // 800B8860
}

// fn_800B8864
void f_800B8864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8864
  c->r[0]=c->lr; // 800B8868
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B886C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8870
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8874
  c->r[31]=c->r[3]|c->r[3]; // 800B8878
  c->r[30]=c->r[4]|c->r[4]; // 800B887C
  c->lr=0x800B8884u; f_800A23BC(c); // 800B8880
  c->lr=0x800B8888u; f_800BB800(c); // 800B8884
  c->r[4]=c->r[31]|c->r[31]; // 800B8888
  c->lr=0x800B8890u; f_800BBD98(c); // 800B888C
  c->r[31]=c->r[3]|c->r[3]; // 800B8890
  c->lr=0x800B8898u; f_800A23BC(c); // 800B8894
  c->lr=0x800B889Cu; f_800BB800(c); // 800B8898
  c->r[4]=c->r[31]|c->r[31]; // 800B889C
  c->lr=0x800B88A4u; f_800BBD58(c); // 800B88A0
  c->r[4]=c->r[30]|c->r[30]; // 800B88A4
  c->lr=0x800B88ACu; f_800C84B8(c); // 800B88A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B88AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B88B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B88B4
  c->lr=c->r[0]; // 800B88B8
  c->r[1]=c->r[1]+0x00000010u; // 800B88BC
  return; // 800B88C0
}

// fn_800B88C4
void f_800B88C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B88C4
  c->r[0]=c->lr; // 800B88C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B88CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B88D0
  c->r[31]=c->r[3]|c->r[3]; // 800B88D4
  c->lr=0x800B88DCu; f_800A23BC(c); // 800B88D8
  c->lr=0x800B88E0u; f_800BB800(c); // 800B88DC
  c->r[4]=c->r[31]|c->r[31]; // 800B88E0
  c->lr=0x800B88E8u; f_800BBD98(c); // 800B88E4
  c->r[31]=c->r[3]|c->r[3]; // 800B88E8
  c->lr=0x800B88F0u; f_800A23BC(c); // 800B88EC
  c->lr=0x800B88F4u; f_800BB800(c); // 800B88F0
  c->r[4]=c->r[31]|c->r[31]; // 800B88F4
  c->lr=0x800B88FCu; f_800BBD58(c); // 800B88F8
  c->lr=0x800B8900u; f_800C85F0(c); // 800B88FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8900
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8904
  c->lr=c->r[0]; // 800B8908
  c->r[1]=c->r[1]+0x00000010u; // 800B890C
  return; // 800B8910
}

// fn_800B8914
void f_800B8914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8914
  c->r[0]=c->lr; // 800B8918
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B891C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8920
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B8924
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B8928
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B892C
  c->r[30]=c->r[3]|c->r[3]; // 800B8930
  c->r[28]=c->r[4]|c->r[4]; // 800B8934
  c->r[29]=c->r[5]|c->r[5]; // 800B8938
  c->lr=0x800B8940u; f_800A23BC(c); // 800B893C
  c->lr=0x800B8944u; f_800BB800(c); // 800B8940
  c->r[4]=c->r[30]|c->r[30]; // 800B8944
  c->lr=0x800B894Cu; f_800BBD98(c); // 800B8948
  c->r[31]=c->r[3]|c->r[3]; // 800B894C
  c->lr=0x800B8954u; f_800A23BC(c); // 800B8950
  c->lr=0x800B8958u; f_800BB800(c); // 800B8954
  c->r[4]=c->r[29]|c->r[29]; // 800B8958
  c->lr=0x800B8960u; f_800BBD98(c); // 800B895C
  c->r[30]=c->r[3]|c->r[3]; // 800B8960
  c->lr=0x800B8968u; f_800A23BC(c); // 800B8964
  c->lr=0x800B896Cu; f_800BB800(c); // 800B8968
  c->r[4]=c->r[31]|c->r[31]; // 800B896C
  c->lr=0x800B8974u; f_800BBD58(c); // 800B8970
  c->r[4]=c->r[28]|c->r[28]; // 800B8974
  c->r[5]=0u+0x00000000u; // 800B8978
  c->lr=0x800B8980u; f_800C6EF0(c); // 800B897C
  c->r[29]=c->r[3]|c->r[3]; // 800B8980
  c->lr=0x800B8988u; f_800A23BC(c); // 800B8984
  c->lr=0x800B898Cu; f_800BB800(c); // 800B8988
  c->r[4]=c->r[30]|c->r[30]; // 800B898C
  c->lr=0x800B8994u; f_800BBD58(c); // 800B8990
  c->r[4]=c->r[31]|c->r[31]; // 800B8994
  c->r[5]=c->r[29]|c->r[29]; // 800B8998
  c->lr=0x800B89A0u; f_800BB94C(c); // 800B899C
  c->lr=0x800B89A4u; f_800A23BC(c); // 800B89A0
  c->lr=0x800B89A8u; f_800BB800(c); // 800B89A4
  c->r[4]=c->r[31]|c->r[31]; // 800B89A8
  c->lr=0x800B89B0u; f_800BBD58(c); // 800B89AC
  c->r[4]=c->r[30]|c->r[30]; // 800B89B0
  c->lr=0x800B89B8u; f_800C8658(c); // 800B89B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B89B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B89BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B89C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B89C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B89C8
  c->lr=c->r[0]; // 800B89CC
  c->r[1]=c->r[1]+0x00000020u; // 800B89D0
  return; // 800B89D4
}

// fn_800B89D8
void f_800B89D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B89D8
  c->r[0]=c->lr; // 800B89DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B89E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B89E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B89E8
  c->r[31]=c->r[3]|c->r[3]; // 800B89EC
  c->r[30]=c->r[4]|c->r[4]; // 800B89F0
  c->lr=0x800B89F8u; f_800A23BC(c); // 800B89F4
  c->lr=0x800B89FCu; f_800BB800(c); // 800B89F8
  c->r[4]=c->r[31]|c->r[31]; // 800B89FC
  c->lr=0x800B8A04u; f_800BBD98(c); // 800B8A00
  c->r[31]=c->r[3]|c->r[3]; // 800B8A04
  c->lr=0x800B8A0Cu; f_800A23BC(c); // 800B8A08
  c->lr=0x800B8A10u; f_800BB800(c); // 800B8A0C
  c->r[4]=c->r[30]|c->r[30]; // 800B8A10
  c->lr=0x800B8A18u; f_800BBD98(c); // 800B8A14
  c->r[30]=c->r[3]|c->r[3]; // 800B8A18
  cmps(c,0,(int32_t)c->r[31],0); // 800B8A1C
  if (crb(c,2)) { goto L_800B8A60; } // 800B8A20
  cmps(c,0,(int32_t)c->r[3],0); // 800B8A24
  if (crb(c,2)) { goto L_800B8A60; } // 800B8A28
  c->lr=0x800B8A30u; f_800A23BC(c); // 800B8A2C
  c->lr=0x800B8A34u; f_800BB800(c); // 800B8A30
  c->r[4]=c->r[31]|c->r[31]; // 800B8A34
  c->lr=0x800B8A3Cu; f_800BBD58(c); // 800B8A38
  c->r[4]=c->r[30]|c->r[30]; // 800B8A3C
  c->lr=0x800B8A44u; f_800C885C(c); // 800B8A40
  c->lr=0x800B8A48u; f_800A23BC(c); // 800B8A44
  c->lr=0x800B8A4Cu; f_800BB800(c); // 800B8A48
  c->r[4]=c->r[30]|c->r[30]; // 800B8A4C
  c->lr=0x800B8A54u; f_800BBD58(c); // 800B8A50
  c->r[4]=0u+0x00000000u; // 800B8A54
  c->r[5]=0u+0xFFFFFFFFu; // 800B8A58
  c->lr=0x800B8A60u; f_800BB94C(c); // 800B8A5C
L_800B8A60:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8A60
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8A64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8A68
  c->lr=c->r[0]; // 800B8A6C
  c->r[1]=c->r[1]+0x00000010u; // 800B8A70
  return; // 800B8A74
}

// fn_800B8A78
void f_800B8A78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8A78
  c->r[0]=c->lr; // 800B8A7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8A80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8A84
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B8A88
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B8A8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B8A90
  c->r[30]=c->r[3]|c->r[3]; // 800B8A94
  c->r[28]=c->r[4]|c->r[4]; // 800B8A98
  c->r[29]=c->r[5]|c->r[5]; // 800B8A9C
  c->lr=0x800B8AA4u; f_800A23BC(c); // 800B8AA0
  c->lr=0x800B8AA8u; f_800BB800(c); // 800B8AA4
  c->r[4]=c->r[30]|c->r[30]; // 800B8AA8
  c->lr=0x800B8AB0u; f_800BBD98(c); // 800B8AAC
  c->r[31]=c->r[3]|c->r[3]; // 800B8AB0
  c->lr=0x800B8AB8u; f_800A23BC(c); // 800B8AB4
  c->lr=0x800B8ABCu; f_800BB808(c); // 800B8AB8
  c->r[4]=c->r[29]|c->r[29]; // 800B8ABC
  c->lr=0x800B8AC4u; f_800BBCCC(c); // 800B8AC0
  c->r[30]=c->r[3]|c->r[3]; // 800B8AC4
  c->lr=0x800B8ACCu; f_800A23BC(c); // 800B8AC8
  c->lr=0x800B8AD0u; f_800BB800(c); // 800B8ACC
  c->r[4]=c->r[31]|c->r[31]; // 800B8AD0
  c->lr=0x800B8AD8u; f_800BBD58(c); // 800B8AD4
  c->r[4]=c->r[28]|c->r[28]; // 800B8AD8
  c->r[5]=0u+0x00000000u; // 800B8ADC
  c->lr=0x800B8AE4u; f_800C6EF0(c); // 800B8AE0
  c->r[29]=c->r[3]|c->r[3]; // 800B8AE4
  c->lr=0x800B8AECu; f_800A23BC(c); // 800B8AE8
  c->lr=0x800B8AF0u; f_800BB808(c); // 800B8AEC
  c->r[4]=c->r[30]|c->r[30]; // 800B8AF0
  c->lr=0x800B8AF8u; f_800BBC8C(c); // 800B8AF4
  c->r[4]=c->r[31]|c->r[31]; // 800B8AF8
  c->r[5]=c->r[29]|c->r[29]; // 800B8AFC
  c->lr=0x800B8B04u; f_800BB94C(c); // 800B8B00
  c->lr=0x800B8B08u; f_800A23BC(c); // 800B8B04
  c->lr=0x800B8B0Cu; f_800BB800(c); // 800B8B08
  c->r[4]=c->r[31]|c->r[31]; // 800B8B0C
  c->lr=0x800B8B14u; f_800BBD58(c); // 800B8B10
  c->r[4]=c->r[30]|c->r[30]; // 800B8B14
  c->r[5]=0u+0x00000001u; // 800B8B18
  c->lr=0x800B8B20u; f_800C8A3C(c); // 800B8B1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8B20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B8B24
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B8B28
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B8B2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8B30
  c->lr=c->r[0]; // 800B8B34
  c->r[1]=c->r[1]+0x00000020u; // 800B8B38
  return; // 800B8B3C
}

// fn_800B8B40
void f_800B8B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8B40
  c->r[0]=c->lr; // 800B8B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8B48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8B4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8B50
  c->r[31]=c->r[3]|c->r[3]; // 800B8B54
  c->r[30]=c->r[4]|c->r[4]; // 800B8B58
  c->lr=0x800B8B60u; f_800A23BC(c); // 800B8B5C
  c->lr=0x800B8B64u; f_800BB800(c); // 800B8B60
  c->r[4]=c->r[31]|c->r[31]; // 800B8B64
  c->lr=0x800B8B6Cu; f_800BBD98(c); // 800B8B68
  c->r[31]=c->r[3]|c->r[3]; // 800B8B6C
  c->lr=0x800B8B74u; f_800A23BC(c); // 800B8B70
  c->lr=0x800B8B78u; f_800BB808(c); // 800B8B74
  c->r[4]=c->r[30]|c->r[30]; // 800B8B78
  c->lr=0x800B8B80u; f_800BBCCC(c); // 800B8B7C
  c->r[30]=c->r[3]|c->r[3]; // 800B8B80
  cmps(c,0,(int32_t)c->r[31],0); // 800B8B84
  if (crb(c,2)) { goto L_800B8BC8; } // 800B8B88
  cmps(c,0,(int32_t)c->r[3],0); // 800B8B8C
  if (crb(c,2)) { goto L_800B8BC8; } // 800B8B90
  c->lr=0x800B8B98u; f_800A23BC(c); // 800B8B94
  c->lr=0x800B8B9Cu; f_800BB800(c); // 800B8B98
  c->r[4]=c->r[31]|c->r[31]; // 800B8B9C
  c->lr=0x800B8BA4u; f_800BBD58(c); // 800B8BA0
  c->r[4]=c->r[30]|c->r[30]; // 800B8BA4
  c->lr=0x800B8BACu; f_800C8B58(c); // 800B8BA8
  c->lr=0x800B8BB0u; f_800A23BC(c); // 800B8BAC
  c->lr=0x800B8BB4u; f_800BB808(c); // 800B8BB0
  c->r[4]=c->r[30]|c->r[30]; // 800B8BB4
  c->lr=0x800B8BBCu; f_800BBC8C(c); // 800B8BB8
  c->r[4]=0u+0x00000000u; // 800B8BBC
  c->r[5]=0u+0xFFFFFFFFu; // 800B8BC0
  c->lr=0x800B8BC8u; f_800BB94C(c); // 800B8BC4
L_800B8BC8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8BC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B8BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8BD0
  c->lr=c->r[0]; // 800B8BD4
  c->r[1]=c->r[1]+0x00000010u; // 800B8BD8
  return; // 800B8BDC
}

// fn_800B8BE0
void f_800B8BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8BE0
  c->r[0]=c->lr; // 800B8BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8BE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8BEC
  c->r[31]=c->r[3]|c->r[3]; // 800B8BF0
  c->lr=0x800B8BF8u; f_800A23BC(c); // 800B8BF4
  c->lr=0x800B8BFCu; f_800BB800(c); // 800B8BF8
  c->r[4]=c->r[31]|c->r[31]; // 800B8BFC
  c->lr=0x800B8C04u; f_800BBD98(c); // 800B8C00
  c->r[31]=c->r[3]|c->r[3]; // 800B8C04
  cmps(c,0,(int32_t)c->r[3],0); // 800B8C08
  if (crb(c,2)) { goto L_800B8C20; } // 800B8C0C
  c->lr=0x800B8C14u; f_800A23BC(c); // 800B8C10
  c->lr=0x800B8C18u; f_800BB800(c); // 800B8C14
  c->r[4]=c->r[31]|c->r[31]; // 800B8C18
  c->lr=0x800B8C20u; f_800C9ADC(c); // 800B8C1C
L_800B8C20:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8C20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8C24
  c->lr=c->r[0]; // 800B8C28
  c->r[1]=c->r[1]+0x00000010u; // 800B8C2C
  return; // 800B8C30
}

// fn_800B8C34
void f_800B8C34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8C34
  c->r[0]=c->lr; // 800B8C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8C3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8C40
  c->r[31]=c->r[3]|c->r[3]; // 800B8C44
  c->lr=0x800B8C4Cu; f_800A23BC(c); // 800B8C48
  c->lr=0x800B8C50u; f_800BB800(c); // 800B8C4C
  c->r[4]=c->r[31]|c->r[31]; // 800B8C50
  c->lr=0x800B8C58u; f_800BBD98(c); // 800B8C54
  c->r[31]=c->r[3]|c->r[3]; // 800B8C58
  cmps(c,0,(int32_t)c->r[3],0); // 800B8C5C
  if (crb(c,2)) { goto L_800B8C9C; } // 800B8C60
  c->lr=0x800B8C68u; f_800A23BC(c); // 800B8C64
  c->lr=0x800B8C6Cu; f_800BB800(c); // 800B8C68
  c->r[4]=c->r[31]|c->r[31]; // 800B8C6C
  c->lr=0x800B8C74u; f_800BBD58(c); // 800B8C70
  c->r[4]=0u+0x00000001u; // 800B8C74
  c->lr=0x800B8C7Cu; f_800BB958(c); // 800B8C78
  c->lr=0x800B8C80u; f_800A23BC(c); // 800B8C7C
  c->lr=0x800B8C84u; f_800A23C4(c); // 800B8C80
  c->lr=0x800B8C88u; f_800BBF6C(c); // 800B8C84
  cmpu(c,0,c->r[31],c->r[3]); // 800B8C88
  if (!crb(c,2)) { goto L_800B8C9C; } // 800B8C8C
  c->lr=0x800B8C94u; f_8007B524(c); // 800B8C90
  c->r[4]=0u+0x00000001u; // 800B8C94
  c->lr=0x800B8C9Cu; f_8009CCFC(c); // 800B8C98
L_800B8C9C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8CA0
  c->lr=c->r[0]; // 800B8CA4
  c->r[1]=c->r[1]+0x00000010u; // 800B8CA8
  return; // 800B8CAC
}

// fn_800B8CB0
void f_800B8CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8CB0
  c->r[0]=c->lr; // 800B8CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8CBC
  c->r[31]=c->r[3]|c->r[3]; // 800B8CC0
  c->lr=0x800B8CC8u; f_800A23BC(c); // 800B8CC4
  c->lr=0x800B8CCCu; f_800BB800(c); // 800B8CC8
  c->r[4]=c->r[31]|c->r[31]; // 800B8CCC
  c->lr=0x800B8CD4u; f_800BBD98(c); // 800B8CD0
  c->r[31]=c->r[3]|c->r[3]; // 800B8CD4
  cmps(c,0,(int32_t)c->r[3],0); // 800B8CD8
  if (crb(c,2)) { goto L_800B8D18; } // 800B8CDC
  c->lr=0x800B8CE4u; f_800A23BC(c); // 800B8CE0
  c->lr=0x800B8CE8u; f_800BB800(c); // 800B8CE4
  c->r[4]=c->r[31]|c->r[31]; // 800B8CE8
  c->lr=0x800B8CF0u; f_800BBD58(c); // 800B8CEC
  c->r[4]=0u+0x00000000u; // 800B8CF0
  c->lr=0x800B8CF8u; f_800BB958(c); // 800B8CF4
  c->lr=0x800B8CFCu; f_800A23BC(c); // 800B8CF8
  c->lr=0x800B8D00u; f_800A23C4(c); // 800B8CFC
  c->lr=0x800B8D04u; f_800BBF6C(c); // 800B8D00
  cmpu(c,0,c->r[31],c->r[3]); // 800B8D04
  if (!crb(c,2)) { goto L_800B8D18; } // 800B8D08
  c->lr=0x800B8D10u; f_8007B524(c); // 800B8D0C
  c->r[4]=0u+0x00000000u; // 800B8D10
  c->lr=0x800B8D18u; f_8009CCFC(c); // 800B8D14
L_800B8D18:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8D1C
  c->lr=c->r[0]; // 800B8D20
  c->r[1]=c->r[1]+0x00000010u; // 800B8D24
  return; // 800B8D28
}

// fn_800B8D2C
void f_800B8D2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8D2C
  c->r[0]=c->lr; // 800B8D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8D34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8D38
  c->r[31]=c->r[3]|c->r[3]; // 800B8D3C
  c->r[3]=c->r[1]+0x00000008u; // 800B8D40
  c->lr=0x800B8D48u; f_8004E34C(c); // 800B8D44
  c->lr=0x800B8D4Cu; f_800A23BC(c); // 800B8D48
  c->lr=0x800B8D50u; f_800BB800(c); // 800B8D4C
  c->r[4]=c->r[31]|c->r[31]; // 800B8D50
  c->lr=0x800B8D58u; f_800BBD98(c); // 800B8D54
  c->r[31]=c->r[3]|c->r[3]; // 800B8D58
  cmps(c,0,(int32_t)c->r[3],0); // 800B8D5C
  if (crb(c,2)) { goto L_800B8D90; } // 800B8D60
  c->lr=0x800B8D68u; f_800A23BC(c); // 800B8D64
  c->lr=0x800B8D6Cu; f_800BB800(c); // 800B8D68
  c->r[4]=c->r[31]|c->r[31]; // 800B8D6C
  c->lr=0x800B8D74u; f_800BBD58(c); // 800B8D70
  c->r[4]=c->r[1]+0x00000008u; // 800B8D74
  c->lr=0x800B8D7Cu; f_800BCDE8(c); // 800B8D78
  c->lr=0x800B8D80u; f_800A23BC(c); // 800B8D7C
  c->lr=0x800B8D84u; f_800BB800(c); // 800B8D80
  c->r[4]=c->r[31]|c->r[31]; // 800B8D84
  c->lr=0x800B8D8Cu; f_800BBD58(c); // 800B8D88
  c->lr=0x800B8D90u; f_800C65EC(c); // 800B8D8C
L_800B8D90:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8D90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8D94
  c->lr=c->r[0]; // 800B8D98
  c->r[1]=c->r[1]+0x00000020u; // 800B8D9C
  return; // 800B8DA0
}

// fn_800B8DA4
void f_800B8DA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8DA4
  c->r[0]=c->lr; // 800B8DA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8DAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8DB0
  c->r[31]=c->r[3]|c->r[3]; // 800B8DB4
  c->r[3]=c->r[1]+0x00000008u; // 800B8DB8
  c->lr=0x800B8DC0u; f_8004E34C(c); // 800B8DBC
  c->lr=0x800B8DC4u; f_800A23BC(c); // 800B8DC0
  c->lr=0x800B8DC8u; f_800BB800(c); // 800B8DC4
  c->r[4]=c->r[31]|c->r[31]; // 800B8DC8
  c->lr=0x800B8DD0u; f_800BBD98(c); // 800B8DCC
  c->r[31]=c->r[3]|c->r[3]; // 800B8DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800B8DD4
  if (crb(c,2)) { goto L_800B8DF4; } // 800B8DD8
  c->lr=0x800B8DE0u; f_800A23BC(c); // 800B8DDC
  c->lr=0x800B8DE4u; f_800BB800(c); // 800B8DE0
  c->r[4]=c->r[31]|c->r[31]; // 800B8DE4
  c->lr=0x800B8DECu; f_800BBD58(c); // 800B8DE8
  c->r[4]=c->r[1]+0x00000008u; // 800B8DEC
  c->lr=0x800B8DF4u; f_800BCF2C(c); // 800B8DF0
L_800B8DF4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8DF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8DF8
  c->lr=c->r[0]; // 800B8DFC
  c->r[1]=c->r[1]+0x00000020u; // 800B8E00
  return; // 800B8E04
}

// fn_800B8E08
void f_800B8E08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8E08
  c->r[0]=c->lr; // 800B8E0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8E10
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B8E14
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B8E18
  c->r[31]=c->r[3]|c->r[3]; // 800B8E1C
  c->f[31]=c->f[1]; // 800B8E20
  c->lr=0x800B8E28u; f_800A23BC(c); // 800B8E24
  c->lr=0x800B8E2Cu; f_800BB800(c); // 800B8E28
  c->r[4]=c->r[31]|c->r[31]; // 800B8E2C
  c->lr=0x800B8E34u; f_800BBD98(c); // 800B8E30
  c->r[31]=c->r[3]|c->r[3]; // 800B8E34
  cmps(c,0,(int32_t)c->r[3],0); // 800B8E38
  if (crb(c,2)) { goto L_800B8E58; } // 800B8E3C
  c->lr=0x800B8E44u; f_800A23BC(c); // 800B8E40
  c->lr=0x800B8E48u; f_800BB800(c); // 800B8E44
  c->r[4]=c->r[31]|c->r[31]; // 800B8E48
  c->lr=0x800B8E50u; f_800BBD58(c); // 800B8E4C
  c->f[1]=c->f[31]; // 800B8E50
  c->lr=0x800B8E58u; f_800BCFE0(c); // 800B8E54
L_800B8E58:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B8E58
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B8E5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8E60
  c->lr=c->r[0]; // 800B8E64
  c->r[1]=c->r[1]+0x00000020u; // 800B8E68
  return; // 800B8E6C
}

// fn_800B8E70
void f_800B8E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8E70
  c->r[0]=c->lr; // 800B8E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B8E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B8E7C
  c->r[31]=c->r[3]|c->r[3]; // 800B8E80
  c->lr=0x800B8E88u; f_800A23BC(c); // 800B8E84
  c->lr=0x800B8E8Cu; f_800BB800(c); // 800B8E88
  c->r[4]=c->r[31]|c->r[31]; // 800B8E8C
  c->lr=0x800B8E94u; f_800BBD98(c); // 800B8E90
  c->r[31]=c->r[3]|c->r[3]; // 800B8E94
  cmps(c,0,(int32_t)c->r[3],0); // 800B8E98
  if (crb(c,2)) { goto L_800B8EB4; } // 800B8E9C
  c->lr=0x800B8EA4u; f_800A23BC(c); // 800B8EA0
  c->lr=0x800B8EA8u; f_800BB800(c); // 800B8EA4
  c->r[4]=c->r[31]|c->r[31]; // 800B8EA8
  c->lr=0x800B8EB0u; f_800BBD58(c); // 800B8EAC
  c->lr=0x800B8EB4u; f_800BD094(c); // 800B8EB0
L_800B8EB4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B8EB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B8EB8
  c->lr=c->r[0]; // 800B8EBC
  c->r[1]=c->r[1]+0x00000010u; // 800B8EC0
  return; // 800B8EC4
}

// fn_800B8EC8
void f_800B8EC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8EC8
  c->r[0]=c->lr; // 800B8ECC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8ED0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8ED4
  c->r[31]=c->r[3]|c->r[3]; // 800B8ED8
  c->r[3]=c->r[1]+0x00000008u; // 800B8EDC
  c->lr=0x800B8EE4u; f_8004E34C(c); // 800B8EE0
  c->lr=0x800B8EE8u; f_800A23BC(c); // 800B8EE4
  c->lr=0x800B8EECu; f_800BB800(c); // 800B8EE8
  c->r[4]=c->r[31]|c->r[31]; // 800B8EEC
  c->lr=0x800B8EF4u; f_800BBD98(c); // 800B8EF0
  c->r[31]=c->r[3]|c->r[3]; // 800B8EF4
  cmps(c,0,(int32_t)c->r[3],0); // 800B8EF8
  if (crb(c,2)) { goto L_800B8F18; } // 800B8EFC
  c->lr=0x800B8F04u; f_800A23BC(c); // 800B8F00
  c->lr=0x800B8F08u; f_800BB800(c); // 800B8F04
  c->r[4]=c->r[31]|c->r[31]; // 800B8F08
  c->lr=0x800B8F10u; f_800BBD58(c); // 800B8F0C
  c->r[4]=c->r[1]+0x00000008u; // 800B8F10
  c->lr=0x800B8F18u; f_800BD0E8(c); // 800B8F14
L_800B8F18:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8F18
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8F1C
  c->lr=c->r[0]; // 800B8F20
  c->r[1]=c->r[1]+0x00000020u; // 800B8F24
  return; // 800B8F28
}

// fn_800B8F2C
void f_800B8F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8F2C
  c->r[0]=c->lr; // 800B8F30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8F34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8F38
  c->r[31]=c->r[3]|c->r[3]; // 800B8F3C
  c->r[3]=c->r[1]+0x00000008u; // 800B8F40
  c->lr=0x800B8F48u; f_8004E34C(c); // 800B8F44
  c->lr=0x800B8F4Cu; f_800A23BC(c); // 800B8F48
  c->lr=0x800B8F50u; f_800BB800(c); // 800B8F4C
  c->r[4]=c->r[31]|c->r[31]; // 800B8F50
  c->lr=0x800B8F58u; f_800BBD98(c); // 800B8F54
  c->r[31]=c->r[3]|c->r[3]; // 800B8F58
  cmps(c,0,(int32_t)c->r[3],0); // 800B8F5C
  if (crb(c,2)) { goto L_800B8F7C; } // 800B8F60
  c->lr=0x800B8F68u; f_800A23BC(c); // 800B8F64
  c->lr=0x800B8F6Cu; f_800BB800(c); // 800B8F68
  c->r[4]=c->r[31]|c->r[31]; // 800B8F6C
  c->lr=0x800B8F74u; f_800BBD58(c); // 800B8F70
  c->r[4]=c->r[1]+0x00000008u; // 800B8F74
  c->lr=0x800B8F7Cu; f_800BD1F0(c); // 800B8F78
L_800B8F7C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B8F7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8F80
  c->lr=c->r[0]; // 800B8F84
  c->r[1]=c->r[1]+0x00000020u; // 800B8F88
  return; // 800B8F8C
}

// fn_800B8F90
void f_800B8F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8F90
  c->r[0]=c->lr; // 800B8F94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B8F98
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B8F9C
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B8FA0
  c->r[31]=c->r[3]|c->r[3]; // 800B8FA4
  c->f[31]=c->f[1]; // 800B8FA8
  c->lr=0x800B8FB0u; f_800A23BC(c); // 800B8FAC
  c->lr=0x800B8FB4u; f_800BB800(c); // 800B8FB0
  c->r[4]=c->r[31]|c->r[31]; // 800B8FB4
  c->lr=0x800B8FBCu; f_800BBD98(c); // 800B8FB8
  c->r[31]=c->r[3]|c->r[3]; // 800B8FBC
  cmps(c,0,(int32_t)c->r[3],0); // 800B8FC0
  if (crb(c,2)) { goto L_800B8FE0; } // 800B8FC4
  c->lr=0x800B8FCCu; f_800A23BC(c); // 800B8FC8
  c->lr=0x800B8FD0u; f_800BB800(c); // 800B8FCC
  c->r[4]=c->r[31]|c->r[31]; // 800B8FD0
  c->lr=0x800B8FD8u; f_800BBD58(c); // 800B8FD4
  c->f[1]=c->f[31]; // 800B8FD8
  c->lr=0x800B8FE0u; f_800BD3A0(c); // 800B8FDC
L_800B8FE0:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B8FE0
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B8FE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B8FE8
  c->lr=c->r[0]; // 800B8FEC
  c->r[1]=c->r[1]+0x00000020u; // 800B8FF0
  return; // 800B8FF4
}

// fn_800B8FF8
void f_800B8FF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8FF8
  c->r[0]=c->lr; // 800B8FFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9004
  c->r[31]=c->r[3]|c->r[3]; // 800B9008
  c->lr=0x800B9010u; f_800A23BC(c); // 800B900C
  c->lr=0x800B9014u; f_800BB800(c); // 800B9010
  c->r[4]=c->r[31]|c->r[31]; // 800B9014
  c->lr=0x800B901Cu; f_800BBD98(c); // 800B9018
  c->r[31]=c->r[3]|c->r[3]; // 800B901C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9020
  if (crb(c,2)) { goto L_800B903C; } // 800B9024
  c->lr=0x800B902Cu; f_800A23BC(c); // 800B9028
  c->lr=0x800B9030u; f_800BB800(c); // 800B902C
  c->r[4]=c->r[31]|c->r[31]; // 800B9030
  c->lr=0x800B9038u; f_800BBD58(c); // 800B9034
  c->lr=0x800B903Cu; f_800BD454(c); // 800B9038
L_800B903C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B903C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9040
  c->lr=c->r[0]; // 800B9044
  c->r[1]=c->r[1]+0x00000010u; // 800B9048
  return; // 800B904C
}

// fn_800B9050
void f_800B9050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9050
  c->r[0]=c->lr; // 800B9054
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B905C
  c->r[31]=c->r[3]|c->r[3]; // 800B9060
  c->r[3]=c->r[1]+0x00000008u; // 800B9064
  c->lr=0x800B906Cu; f_8004E34C(c); // 800B9068
  c->lr=0x800B9070u; f_800A23BC(c); // 800B906C
  c->lr=0x800B9074u; f_800BB800(c); // 800B9070
  c->r[4]=c->r[31]|c->r[31]; // 800B9074
  c->lr=0x800B907Cu; f_800BBD98(c); // 800B9078
  c->r[31]=c->r[3]|c->r[3]; // 800B907C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9080
  if (crb(c,2)) { goto L_800B90A0; } // 800B9084
  c->lr=0x800B908Cu; f_800A23BC(c); // 800B9088
  c->lr=0x800B9090u; f_800BB800(c); // 800B908C
  c->r[4]=c->r[31]|c->r[31]; // 800B9090
  c->lr=0x800B9098u; f_800BBD58(c); // 800B9094
  c->r[4]=c->r[1]+0x00000008u; // 800B9098
  c->lr=0x800B90A0u; f_800BD4A8(c); // 800B909C
L_800B90A0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B90A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B90A4
  c->lr=c->r[0]; // 800B90A8
  c->r[1]=c->r[1]+0x00000020u; // 800B90AC
  return; // 800B90B0
}

// fn_800B90B4
void f_800B90B4(Ctx* __restrict c) {
  return; // 800B90B4
}

// fn_800B90B8
void f_800B90B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B90B8
  c->r[0]=c->lr; // 800B90BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B90C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B90C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B90C8
  c->r[31]=c->r[3]|c->r[3]; // 800B90CC
  c->r[30]=c->r[4]|c->r[4]; // 800B90D0
  c->r[3]=c->r[1]+0x00000008u; // 800B90D4
  c->lr=0x800B90DCu; f_8004B0A4(c); // 800B90D8
  c->lr=0x800B90E0u; f_800A23BC(c); // 800B90DC
  c->lr=0x800B90E4u; f_800BB800(c); // 800B90E0
  c->r[4]=c->r[31]|c->r[31]; // 800B90E4
  c->lr=0x800B90ECu; f_800BBD98(c); // 800B90E8
  c->r[31]=c->r[3]|c->r[3]; // 800B90EC
  c->lr=0x800B90F4u; f_800A23BC(c); // 800B90F0
  c->lr=0x800B90F8u; f_800BB800(c); // 800B90F4
  c->r[4]=c->r[30]|c->r[30]; // 800B90F8
  c->lr=0x800B9100u; f_800BBD98(c); // 800B90FC
  c->r[30]=c->r[3]|c->r[3]; // 800B9100
  c->lr=0x800B9108u; f_800A23BC(c); // 800B9104
  c->lr=0x800B910Cu; f_800BB800(c); // 800B9108
  c->r[4]=c->r[30]|c->r[30]; // 800B910C
  c->lr=0x800B9114u; f_800BBD58(c); // 800B9110
  c->r[4]=c->r[1]+0x00000008u; // 800B9114
  c->lr=0x800B911Cu; f_800BD664(c); // 800B9118
  c->lr=0x800B9120u; f_800A23BC(c); // 800B911C
  c->lr=0x800B9124u; f_800BB800(c); // 800B9120
  c->r[4]=c->r[31]|c->r[31]; // 800B9124
  c->lr=0x800B912Cu; f_800BBD58(c); // 800B9128
  c->r[4]=c->r[1]+0x00000008u; // 800B912C
  c->lr=0x800B9134u; f_800C7988(c); // 800B9130
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9134
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B9138
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B913C
  c->lr=c->r[0]; // 800B9140
  c->r[1]=c->r[1]+0x00000020u; // 800B9144
  return; // 800B9148
}

// fn_800B914C
void f_800B914C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B914C
  c->r[0]=c->lr; // 800B9150
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9154
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9158
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B915C
  c->r[31]=c->r[3]|c->r[3]; // 800B9160
  c->r[30]=c->r[4]|c->r[4]; // 800B9164
  c->r[3]=c->r[1]+0x00000008u; // 800B9168
  c->lr=0x800B9170u; f_8004B0A4(c); // 800B916C
  c->lr=0x800B9174u; f_800A23BC(c); // 800B9170
  c->lr=0x800B9178u; f_800BB800(c); // 800B9174
  c->r[4]=c->r[31]|c->r[31]; // 800B9178
  c->lr=0x800B9180u; f_800BBD98(c); // 800B917C
  c->r[31]=c->r[3]|c->r[3]; // 800B9180
  c->lr=0x800B9188u; f_800A23BC(c); // 800B9184
  c->lr=0x800B918Cu; f_800BB810(c); // 800B9188
  c->r[4]=c->r[30]|c->r[30]; // 800B918C
  c->lr=0x800B9194u; f_800BBB34(c); // 800B9190
  c->r[30]=c->r[3]|c->r[3]; // 800B9194
  c->lr=0x800B919Cu; f_800A23BC(c); // 800B9198
  c->lr=0x800B91A0u; f_800BB810(c); // 800B919C
  c->r[4]=c->r[30]|c->r[30]; // 800B91A0
  c->lr=0x800B91A8u; f_800BBAF4(c); // 800B91A4
  c->r[4]=c->r[1]+0x00000008u; // 800B91A8
  c->lr=0x800B91B0u; f_800CFF48(c); // 800B91AC
  c->lr=0x800B91B4u; f_800A23BC(c); // 800B91B0
  c->lr=0x800B91B8u; f_800BB800(c); // 800B91B4
  c->r[4]=c->r[31]|c->r[31]; // 800B91B8
  c->lr=0x800B91C0u; f_800BBD58(c); // 800B91BC
  c->r[4]=c->r[1]+0x00000008u; // 800B91C0
  c->lr=0x800B91C8u; f_800C7988(c); // 800B91C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B91C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B91CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B91D0
  c->lr=c->r[0]; // 800B91D4
  c->r[1]=c->r[1]+0x00000020u; // 800B91D8
  return; // 800B91DC
}

// fn_800B91E0
void f_800B91E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B91E0
  c->r[0]=c->lr; // 800B91E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B91E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B91EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B91F0
  c->r[31]=c->r[3]|c->r[3]; // 800B91F4
  c->r[30]=c->r[4]|c->r[4]; // 800B91F8
  c->lr=0x800B9200u; f_800A23BC(c); // 800B91FC
  c->lr=0x800B9204u; f_800BB800(c); // 800B9200
  c->r[4]=c->r[31]|c->r[31]; // 800B9204
  c->lr=0x800B920Cu; f_800BBD98(c); // 800B9208
  c->r[31]=c->r[3]|c->r[3]; // 800B920C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9210
  if (crb(c,2)) { goto L_800B9234; } // 800B9214
  c->lr=0x800B921Cu; f_800A23BC(c); // 800B9218
  c->lr=0x800B9220u; f_800BB800(c); // 800B921C
  c->r[4]=c->r[31]|c->r[31]; // 800B9220
  c->lr=0x800B9228u; f_800BBD58(c); // 800B9224
  c->r[4]=c->r[30]|c->r[30]; // 800B9228
  c->r[5]=0u+0x00000006u; // 800B922C
  c->lr=0x800B9234u; f_800C7C34(c); // 800B9230
L_800B9234:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9234
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9238
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B923C
  c->lr=c->r[0]; // 800B9240
  c->r[1]=c->r[1]+0x00000010u; // 800B9244
  return; // 800B9248
}

// fn_800B924C
void f_800B924C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B924C
  c->r[0]=c->lr; // 800B9250
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9258
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B925C
  c->r[31]=c->r[3]|c->r[3]; // 800B9260
  c->r[30]=c->r[4]|c->r[4]; // 800B9264
  c->lr=0x800B926Cu; f_800A23BC(c); // 800B9268
  c->lr=0x800B9270u; f_800BB800(c); // 800B926C
  c->r[4]=c->r[31]|c->r[31]; // 800B9270
  c->lr=0x800B9278u; f_800BBD98(c); // 800B9274
  c->r[31]=c->r[3]|c->r[3]; // 800B9278
  cmps(c,0,(int32_t)c->r[3],0); // 800B927C
  if (crb(c,2)) { goto L_800B92A0; } // 800B9280
  c->lr=0x800B9288u; f_800A23BC(c); // 800B9284
  c->lr=0x800B928Cu; f_800BB800(c); // 800B9288
  c->r[4]=c->r[31]|c->r[31]; // 800B928C
  c->lr=0x800B9294u; f_800BBD58(c); // 800B9290
  c->r[4]=c->r[30]|c->r[30]; // 800B9294
  c->r[5]=0u+0x00000006u; // 800B9298
  c->lr=0x800B92A0u; f_800C7E90(c); // 800B929C
L_800B92A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B92A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B92A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B92A8
  c->lr=c->r[0]; // 800B92AC
  c->r[1]=c->r[1]+0x00000010u; // 800B92B0
  return; // 800B92B4
}

// fn_800B92B8
void f_800B92B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B92B8
  c->r[0]=c->lr; // 800B92BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B92C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B92C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B92C8
  c->r[31]=c->r[3]|c->r[3]; // 800B92CC
  c->r[30]=c->r[4]|c->r[4]; // 800B92D0
  c->lr=0x800B92D8u; f_800A23BC(c); // 800B92D4
  c->lr=0x800B92DCu; f_800BB800(c); // 800B92D8
  c->r[4]=c->r[31]|c->r[31]; // 800B92DC
  c->lr=0x800B92E4u; f_800BBD98(c); // 800B92E0
  c->r[31]=c->r[3]|c->r[3]; // 800B92E4
  cmps(c,0,(int32_t)c->r[3],0); // 800B92E8
  if (crb(c,2)) { goto L_800B930C; } // 800B92EC
  c->lr=0x800B92F4u; f_800A23BC(c); // 800B92F0
  c->lr=0x800B92F8u; f_800BB800(c); // 800B92F4
  c->r[4]=c->r[31]|c->r[31]; // 800B92F8
  c->lr=0x800B9300u; f_800BBD58(c); // 800B92FC
  c->r[4]=c->r[30]|c->r[30]; // 800B9300
  c->r[5]=0u+0x00000006u; // 800B9304
  c->lr=0x800B930Cu; f_800C81FC(c); // 800B9308
L_800B930C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B930C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9310
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9314
  c->lr=c->r[0]; // 800B9318
  c->r[1]=c->r[1]+0x00000010u; // 800B931C
  return; // 800B9320
}

// fn_800B9324
void f_800B9324(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9324
  c->r[0]=c->lr; // 800B9328
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B932C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9330
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9334
  c->r[31]=c->r[3]|c->r[3]; // 800B9338
  c->r[30]=c->r[4]|c->r[4]; // 800B933C
  c->lr=0x800B9344u; f_800A23BC(c); // 800B9340
  c->lr=0x800B9348u; f_800BB800(c); // 800B9344
  c->r[4]=c->r[31]|c->r[31]; // 800B9348
  c->lr=0x800B9350u; f_800BBD98(c); // 800B934C
  c->r[31]=c->r[3]|c->r[3]; // 800B9350
  cmps(c,0,(int32_t)c->r[3],0); // 800B9354
  if (crb(c,2)) { goto L_800B9378; } // 800B9358
  c->lr=0x800B9360u; f_800A23BC(c); // 800B935C
  c->lr=0x800B9364u; f_800BB800(c); // 800B9360
  c->r[4]=c->r[31]|c->r[31]; // 800B9364
  c->lr=0x800B936Cu; f_800BBD58(c); // 800B9368
  c->r[4]=c->r[30]|c->r[30]; // 800B936C
  c->r[5]=0u+0x00000006u; // 800B9370
  c->lr=0x800B9378u; f_800C8270(c); // 800B9374
L_800B9378:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9378
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B937C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9380
  c->lr=c->r[0]; // 800B9384
  c->r[1]=c->r[1]+0x00000010u; // 800B9388
  return; // 800B938C
}

// fn_800B9390
void f_800B9390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9390
  c->r[0]=c->lr; // 800B9394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B939C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B93A0
  c->r[31]=c->r[3]|c->r[3]; // 800B93A4
  c->r[30]=c->r[4]|c->r[4]; // 800B93A8
  c->lr=0x800B93B0u; f_800A23BC(c); // 800B93AC
  c->lr=0x800B93B4u; f_800BB800(c); // 800B93B0
  c->r[4]=c->r[31]|c->r[31]; // 800B93B4
  c->lr=0x800B93BCu; f_800BBD98(c); // 800B93B8
  c->r[31]=c->r[3]|c->r[3]; // 800B93BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B93C0
  if (crb(c,2)) { goto L_800B93E4; } // 800B93C4
  c->lr=0x800B93CCu; f_800A23BC(c); // 800B93C8
  c->lr=0x800B93D0u; f_800BB800(c); // 800B93CC
  c->r[4]=c->r[31]|c->r[31]; // 800B93D0
  c->lr=0x800B93D8u; f_800BBD58(c); // 800B93D4
  c->r[4]=c->r[30]|c->r[30]; // 800B93D8
  c->r[5]=0u+0x00000006u; // 800B93DC
  c->lr=0x800B93E4u; f_800C7F10(c); // 800B93E0
L_800B93E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B93E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B93E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B93EC
  c->lr=c->r[0]; // 800B93F0
  c->r[1]=c->r[1]+0x00000010u; // 800B93F4
  return; // 800B93F8
}

// fn_800B93FC
void f_800B93FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B93FC
  c->r[0]=c->lr; // 800B9400
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9404
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800B9408
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800B940C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9410
  c->r[31]=c->r[3]|c->r[3]; // 800B9414
  c->f[31]=c->f[1]; // 800B9418
  c->lr=0x800B9420u; f_800A23BC(c); // 800B941C
  c->lr=0x800B9424u; f_800BB800(c); // 800B9420
  c->r[4]=c->r[31]|c->r[31]; // 800B9424
  c->lr=0x800B942Cu; f_800BBD98(c); // 800B9428
  c->r[31]=c->r[3]|c->r[3]; // 800B942C
  cmps(c,0,(int32_t)c->r[3],0); // 800B9430
  if (crb(c,2)) { goto L_800B9490; } // 800B9434
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9438
  fcmp(c,0,c->f[0],c->f[31]); // 800B943C
  if (!crb(c,2)) { goto L_800B9460; } // 800B9440
  c->lr=0x800B9448u; f_800A23BC(c); // 800B9444
  c->lr=0x800B944Cu; f_800BB800(c); // 800B9448
  c->r[4]=c->r[31]|c->r[31]; // 800B944C
  c->lr=0x800B9454u; f_800BBD58(c); // 800B9450
  c->r[4]=0u+0x00000000u; // 800B9454
  c->lr=0x800B945Cu; f_800C7730(c); // 800B9458
  goto L_800B9478; // 800B945C
L_800B9460:;
  c->lr=0x800B9464u; f_800A23BC(c); // 800B9460
  c->lr=0x800B9468u; f_800BB800(c); // 800B9464
  c->r[4]=c->r[31]|c->r[31]; // 800B9468
  c->lr=0x800B9470u; f_800BBD58(c); // 800B946C
  c->r[4]=0u+0x00000001u; // 800B9470
  c->lr=0x800B9478u; f_800C7730(c); // 800B9474
L_800B9478:;
  c->lr=0x800B947Cu; f_800A23BC(c); // 800B9478
  c->lr=0x800B9480u; f_800BB800(c); // 800B947C
  c->r[4]=c->r[31]|c->r[31]; // 800B9480
  c->lr=0x800B9488u; f_800BBD58(c); // 800B9484
  c->f[1]=c->f[31]; // 800B9488
  c->lr=0x800B9490u; f_800C84A8(c); // 800B948C
L_800B9490:;
  c->r[0]=0u+0x00000018u; // 800B9490
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B9494
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800B9498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B949C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B94A0
  c->lr=c->r[0]; // 800B94A4
  c->r[1]=c->r[1]+0x00000020u; // 800B94A8
  return; // 800B94AC
}

// fn_800B94B0
void f_800B94B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B94B0
  c->r[0]=c->lr; // 800B94B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B94B8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B94BC
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B94C0
  c->r[31]=c->r[3]|c->r[3]; // 800B94C4
  c->f[31]=c->f[1]; // 800B94C8
  c->lr=0x800B94D0u; f_800A23BC(c); // 800B94CC
  c->lr=0x800B94D4u; f_800BB800(c); // 800B94D0
  c->r[4]=c->r[31]|c->r[31]; // 800B94D4
  c->lr=0x800B94DCu; f_800BBD98(c); // 800B94D8
  c->r[31]=c->r[3]|c->r[3]; // 800B94DC
  cmps(c,0,(int32_t)c->r[3],0); // 800B94E0
  if (crb(c,2)) { goto L_800B9500; } // 800B94E4
  c->lr=0x800B94ECu; f_800A23BC(c); // 800B94E8
  c->lr=0x800B94F0u; f_800BB800(c); // 800B94EC
  c->r[4]=c->r[31]|c->r[31]; // 800B94F0
  c->lr=0x800B94F8u; f_800BBD58(c); // 800B94F4
  c->f[1]=c->f[31]; // 800B94F8
  c->lr=0x800B9500u; f_800BD730(c); // 800B94FC
L_800B9500:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B9500
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B9504
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9508
  c->lr=c->r[0]; // 800B950C
  c->r[1]=c->r[1]+0x00000020u; // 800B9510
  return; // 800B9514
}

// fn_800B9518
void f_800B9518(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9518
  c->r[0]=c->lr; // 800B951C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9520
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B9524
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B9528
  c->r[31]=c->r[3]|c->r[3]; // 800B952C
  c->f[31]=c->f[1]; // 800B9530
  c->lr=0x800B9538u; f_800A23BC(c); // 800B9534
  c->lr=0x800B953Cu; f_800BB800(c); // 800B9538
  c->r[4]=c->r[31]|c->r[31]; // 800B953C
  c->lr=0x800B9544u; f_800BBD98(c); // 800B9540
  c->r[31]=c->r[3]|c->r[3]; // 800B9544
  cmps(c,0,(int32_t)c->r[3],0); // 800B9548
  if (crb(c,2)) { goto L_800B9568; } // 800B954C
  c->lr=0x800B9554u; f_800A23BC(c); // 800B9550
  c->lr=0x800B9558u; f_800BB800(c); // 800B9554
  c->r[4]=c->r[31]|c->r[31]; // 800B9558
  c->lr=0x800B9560u; f_800BBD58(c); // 800B955C
  c->f[1]=c->f[31]; // 800B9560
  c->lr=0x800B9568u; f_800BD78C(c); // 800B9564
L_800B9568:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B9568
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B956C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9570
  c->lr=c->r[0]; // 800B9574
  c->r[1]=c->r[1]+0x00000020u; // 800B9578
  return; // 800B957C
}

// fn_800B9580
void f_800B9580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9580
  c->r[0]=c->lr; // 800B9584
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B958C
  c->r[31]=c->r[3]|c->r[3]; // 800B9590
  c->lr=0x800B9598u; f_800A23BC(c); // 800B9594
  c->lr=0x800B959Cu; f_800BB800(c); // 800B9598
  c->r[4]=c->r[31]|c->r[31]; // 800B959C
  c->lr=0x800B95A4u; f_800BBD98(c); // 800B95A0
  c->r[31]=c->r[3]|c->r[3]; // 800B95A4
  cmps(c,0,(int32_t)c->r[3],0); // 800B95A8
  if (crb(c,2)) { goto L_800B95C8; } // 800B95AC
  c->lr=0x800B95B4u; f_800A23BC(c); // 800B95B0
  c->lr=0x800B95B8u; f_800BB800(c); // 800B95B4
  c->r[4]=c->r[31]|c->r[31]; // 800B95B8
  c->lr=0x800B95C0u; f_800BBD58(c); // 800B95BC
  c->lr=0x800B95C4u; f_800BDC10(c); // 800B95C0
  goto L_800B95CC; // 800B95C4
L_800B95C8:;
  c->r[3]=0u+0x00000001u; // 800B95C8
L_800B95CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B95CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B95D0
  c->lr=c->r[0]; // 800B95D4
  c->r[1]=c->r[1]+0x00000010u; // 800B95D8
  return; // 800B95DC
}

// fn_800B95E0
void f_800B95E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B95E0
  c->r[0]=c->lr; // 800B95E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B95E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B95EC
  c->r[31]=c->r[3]|c->r[3]; // 800B95F0
  c->lr=0x800B95F8u; f_800A23BC(c); // 800B95F4
  c->lr=0x800B95FCu; f_800BB800(c); // 800B95F8
  c->r[4]=c->r[31]|c->r[31]; // 800B95FC
  c->lr=0x800B9604u; f_800BBD98(c); // 800B9600
  c->r[31]=c->r[3]|c->r[3]; // 800B9604
  cmps(c,0,(int32_t)c->r[3],0); // 800B9608
  if (crb(c,2)) { goto L_800B9628; } // 800B960C
  c->lr=0x800B9614u; f_800A23BC(c); // 800B9610
  c->lr=0x800B9618u; f_800BB800(c); // 800B9614
  c->r[4]=c->r[31]|c->r[31]; // 800B9618
  c->lr=0x800B9620u; f_800BBD58(c); // 800B961C
  c->lr=0x800B9624u; f_800BDC80(c); // 800B9620
  goto L_800B962C; // 800B9624
L_800B9628:;
  c->r[3]=0u+0x00000001u; // 800B9628
L_800B962C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B962C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9630
  c->lr=c->r[0]; // 800B9634
  c->r[1]=c->r[1]+0x00000010u; // 800B9638
  return; // 800B963C
}

// fn_800B9640
void f_800B9640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9640
  c->r[0]=c->lr; // 800B9644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B964C
  c->r[31]=c->r[3]|c->r[3]; // 800B9650
  c->lr=0x800B9658u; f_800A23BC(c); // 800B9654
  c->lr=0x800B965Cu; f_800BB800(c); // 800B9658
  c->r[4]=c->r[31]|c->r[31]; // 800B965C
  c->lr=0x800B9664u; f_800BBD98(c); // 800B9660
  c->r[31]=c->r[3]|c->r[3]; // 800B9664
  cmps(c,0,(int32_t)c->r[3],0); // 800B9668
  if (crb(c,2)) { goto L_800B968C; } // 800B966C
  c->lr=0x800B9674u; f_800A23BC(c); // 800B9670
  c->lr=0x800B9678u; f_800BB800(c); // 800B9674
  c->r[4]=c->r[31]|c->r[31]; // 800B9678
  c->lr=0x800B9680u; f_800BBD58(c); // 800B967C
  c->r[4]=0u+0x00000006u; // 800B9680
  c->lr=0x800B9688u; f_800C7308(c); // 800B9684
  goto L_800B9690; // 800B9688
L_800B968C:;
  c->r[3]=0u+0x00000001u; // 800B968C
L_800B9690:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9690
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9694
  c->lr=c->r[0]; // 800B9698
  c->r[1]=c->r[1]+0x00000010u; // 800B969C
  return; // 800B96A0
}

// fn_800B96A4
void f_800B96A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B96A4
  c->r[0]=c->lr; // 800B96A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B96AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B96B0
  c->r[31]=c->r[3]|c->r[3]; // 800B96B4
  c->lr=0x800B96BCu; f_800A23BC(c); // 800B96B8
  c->lr=0x800B96C0u; f_800BB7F0(c); // 800B96BC
  c->r[4]=c->r[31]|c->r[31]; // 800B96C0
  c->r[5]=c->r[1]+0x00000008u; // 800B96C4
  c->lr=0x800B96CCu; f_800C2C24(c); // 800B96C8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800B96CC
  c->lr=0x800B96D4u; f_8006E56C(c); // 800B96D0
  c->lr=0x800B96D8u; f_8006E564(c); // 800B96D4
  c->r[31]=c->r[3]|c->r[3]; // 800B96D8
  c->lr=0x800B96E0u; f_800A23BC(c); // 800B96DC
  c->lr=0x800B96E4u; f_800BB818(c); // 800B96E0
  c->r[4]=0u+0x00000001u; // 800B96E4
  c->lr=0x800B96ECu; f_800BBF74(c); // 800B96E8
  c->r[4]=c->r[31]|c->r[31]; // 800B96EC
  c->r[5]=0u+0x00000001u; // 800B96F0
  c->lr=0x800B96F8u; f_800D348C(c); // 800B96F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B96F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B96FC
  c->lr=c->r[0]; // 800B9700
  c->r[1]=c->r[1]+0x00000020u; // 800B9704
  return; // 800B9708
}

// fn_800B970C
void f_800B970C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B970C
  c->r[0]=c->lr; // 800B9710
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9714
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9718
  c->r[31]=c->r[3]|c->r[3]; // 800B971C
  c->lr=0x800B9724u; f_800A23BC(c); // 800B9720
  c->lr=0x800B9728u; f_800BB7F0(c); // 800B9724
  c->r[4]=c->r[31]|c->r[31]; // 800B9728
  c->r[5]=c->r[1]+0x00000008u; // 800B972C
  c->lr=0x800B9734u; f_800C2C24(c); // 800B9730
  c->r[3]=R32(c->r[1]+0x00000008u); // 800B9734
  c->lr=0x800B973Cu; f_8006E56C(c); // 800B9738
  c->lr=0x800B9740u; f_8006E564(c); // 800B973C
  c->r[31]=c->r[3]|c->r[3]; // 800B9740
  c->lr=0x800B9748u; f_800A23BC(c); // 800B9744
  c->lr=0x800B974Cu; f_800BB818(c); // 800B9748
  c->r[4]=0u+0x00000002u; // 800B974C
  c->lr=0x800B9754u; f_800BBF74(c); // 800B9750
  c->r[4]=c->r[31]|c->r[31]; // 800B9754
  c->r[5]=0u+0x00000001u; // 800B9758
  c->lr=0x800B9760u; f_800D348C(c); // 800B975C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9760
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9764
  c->lr=c->r[0]; // 800B9768
  c->r[1]=c->r[1]+0x00000020u; // 800B976C
  return; // 800B9770
}

// fn_800B9774
void f_800B9774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9774
  c->r[0]=c->lr; // 800B9778
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B977C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9780
  c->r[31]=c->r[3]|c->r[3]; // 800B9784
  c->lr=0x800B978Cu; f_800A23BC(c); // 800B9788
  c->lr=0x800B9790u; f_800BB818(c); // 800B978C
  c->r[4]=0u+0x00000001u; // 800B9790
  c->lr=0x800B9798u; f_800BBF74(c); // 800B9794
  c->r[4]=c->r[31]|c->r[31]; // 800B9798
  c->r[5]=0u+0x00000000u; // 800B979C
  c->lr=0x800B97A4u; f_800D3578(c); // 800B97A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B97A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B97A8
  c->lr=c->r[0]; // 800B97AC
  c->r[1]=c->r[1]+0x00000010u; // 800B97B0
  return; // 800B97B4
}

// fn_800B97B8
void f_800B97B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B97B8
  c->r[0]=c->lr; // 800B97BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B97C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B97C4
  c->r[31]=c->r[3]|c->r[3]; // 800B97C8
  c->lr=0x800B97D0u; f_800A23BC(c); // 800B97CC
  c->lr=0x800B97D4u; f_800BB818(c); // 800B97D0
  c->r[4]=0u+0x00000002u; // 800B97D4
  c->lr=0x800B97DCu; f_800BBF74(c); // 800B97D8
  c->r[4]=c->r[31]|c->r[31]; // 800B97DC
  c->r[5]=0u+0x00000000u; // 800B97E0
  c->lr=0x800B97E8u; f_800D3578(c); // 800B97E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B97E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B97EC
  c->lr=c->r[0]; // 800B97F0
  c->r[1]=c->r[1]+0x00000010u; // 800B97F4
  return; // 800B97F8
}

// fn_800B97FC
void f_800B97FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B97FC
  c->r[0]=c->lr; // 800B9800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9808
  c->r[31]=c->r[3]|c->r[3]; // 800B980C
  c->lr=0x800B9814u; f_800A23BC(c); // 800B9810
  c->lr=0x800B9818u; f_800BB800(c); // 800B9814
  c->r[4]=c->r[31]|c->r[31]; // 800B9818
  c->lr=0x800B9820u; f_800BBD98(c); // 800B981C
  c->r[31]=c->r[3]|c->r[3]; // 800B9820
  c->lr=0x800B9828u; f_800A23BC(c); // 800B9824
  c->lr=0x800B982Cu; f_800A23C8(c); // 800B9828
  c->r[4]=c->r[31]|c->r[31]; // 800B982C
  c->r[5]=0u+0x00000000u; // 800B9830
  c->lr=0x800B9838u; f_800CDF80(c); // 800B9834
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9838
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B983C
  c->lr=c->r[0]; // 800B9840
  c->r[1]=c->r[1]+0x00000010u; // 800B9844
  return; // 800B9848
}

// fn_800B984C
void f_800B984C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B984C
  c->r[0]=c->lr; // 800B9850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9854
  c->lr=0x800B985Cu; f_800A23BC(c); // 800B9858
  c->lr=0x800B9860u; f_800A23C8(c); // 800B985C
  c->lr=0x800B9864u; f_800CEC50(c); // 800B9860
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9864
  c->lr=c->r[0]; // 800B9868
  c->r[1]=c->r[1]+0x00000010u; // 800B986C
  return; // 800B9870
}

// fn_800B9874
void f_800B9874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9874
  c->r[0]=c->lr; // 800B9878
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B987C
  c->lr=0x800B9884u; f_800A23BC(c); // 800B9880
  c->lr=0x800B9888u; f_800A23C8(c); // 800B9884
  c->lr=0x800B988Cu; f_800CEF54(c); // 800B9888
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B988C
  c->lr=c->r[0]; // 800B9890
  c->r[1]=c->r[1]+0x00000010u; // 800B9894
  return; // 800B9898
}

// fn_800B989C
void f_800B989C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B989C
  c->r[0]=c->lr; // 800B98A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B98A4
  c->lr=0x800B98ACu; f_800A23BC(c); // 800B98A8
  c->lr=0x800B98B0u; f_800A23C8(c); // 800B98AC
  c->lr=0x800B98B4u; f_800CF044(c); // 800B98B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B98B4
  c->lr=c->r[0]; // 800B98B8
  c->r[1]=c->r[1]+0x00000010u; // 800B98BC
  return; // 800B98C0
}

// fn_800B98C4
void f_800B98C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B98C4
  c->r[0]=c->lr; // 800B98C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B98CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B98D0
  c->r[31]=c->r[3]|c->r[3]; // 800B98D4
  c->lr=0x800B98DCu; f_800A23BC(c); // 800B98D8
  c->lr=0x800B98E0u; f_800A23C8(c); // 800B98DC
  c->r[4]=c->r[31]|c->r[31]; // 800B98E0
  c->lr=0x800B98E8u; f_800CDE0C(c); // 800B98E4
  c->r[31]=c->r[3]|c->r[3]; // 800B98E8
  c->lr=0x800B98F0u; f_800A23BC(c); // 800B98EC
  c->lr=0x800B98F4u; f_800A23C8(c); // 800B98F0
  c->r[4]=c->r[31]|c->r[31]; // 800B98F4
  c->lr=0x800B98FCu; f_800BBBC0(c); // 800B98F8
  c->lr=0x800B9900u; f_800CCEF8(c); // 800B98FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9900
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9904
  c->lr=c->r[0]; // 800B9908
  c->r[1]=c->r[1]+0x00000010u; // 800B990C
  return; // 800B9910
}

// fn_800B9914
void f_800B9914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9914
  c->r[0]=c->lr; // 800B9918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B991C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9920
  c->r[31]=c->r[3]|c->r[3]; // 800B9924
  c->lr=0x800B992Cu; f_800A23BC(c); // 800B9928
  c->lr=0x800B9930u; f_800A23C8(c); // 800B992C
  c->r[4]=c->r[31]|c->r[31]; // 800B9930
  c->lr=0x800B9938u; f_800BBC00(c); // 800B9934
  c->r[31]=c->r[3]|c->r[3]; // 800B9938
  c->lr=0x800B9940u; f_800A23BC(c); // 800B993C
  c->lr=0x800B9944u; f_800A23C8(c); // 800B9940
  c->r[4]=c->r[31]|c->r[31]; // 800B9944
  c->lr=0x800B994Cu; f_800BBBC0(c); // 800B9948
  c->lr=0x800B9950u; f_800CCFA0(c); // 800B994C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9950
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9954
  c->lr=c->r[0]; // 800B9958
  c->r[1]=c->r[1]+0x00000010u; // 800B995C
  return; // 800B9960
}

// fn_800B9964
void f_800B9964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9964
  c->r[0]=c->lr; // 800B9968
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B996C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B9970
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B9974
  W32(c->r[1]+0x00000010u,c->r[30]); // 800B9978
  c->r[31]=c->r[3]|c->r[3]; // 800B997C
  c->r[30]=c->r[4]|c->r[4]; // 800B9980
  c->f[31]=c->f[1]; // 800B9984
  c->lr=0x800B998Cu; f_800A23BC(c); // 800B9988
  c->lr=0x800B9990u; f_800A23C8(c); // 800B998C
  c->r[4]=c->r[31]|c->r[31]; // 800B9990
  c->lr=0x800B9998u; f_800BBC00(c); // 800B9994
  c->r[31]=c->r[3]|c->r[3]; // 800B9998
  c->lr=0x800B99A0u; f_800A23BC(c); // 800B999C
  c->lr=0x800B99A4u; f_800BB800(c); // 800B99A0
  c->r[4]=c->r[30]|c->r[30]; // 800B99A4
  c->lr=0x800B99ACu; f_800BBD98(c); // 800B99A8
  c->r[30]=c->r[3]|c->r[3]; // 800B99AC
  c->lr=0x800B99B4u; f_800A23BC(c); // 800B99B0
  c->lr=0x800B99B8u; f_800A23C8(c); // 800B99B4
  c->r[4]=c->r[31]|c->r[31]; // 800B99B8
  c->lr=0x800B99C0u; f_800BBBC0(c); // 800B99BC
  c->r[4]=c->r[30]|c->r[30]; // 800B99C0
  c->f[1]=c->f[31]; // 800B99C4
  c->lr=0x800B99CCu; f_800CCFB0(c); // 800B99C8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800B99CC
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B99D0
  c->r[30]=R32(c->r[1]+0x00000010u); // 800B99D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B99D8
  c->lr=c->r[0]; // 800B99DC
  c->r[1]=c->r[1]+0x00000020u; // 800B99E0
  return; // 800B99E4
}

// fn_800B99E8
void f_800B99E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B99E8
  c->r[0]=c->lr; // 800B99EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B99F0
  c->r[11]=c->r[1]+0x00000030u; // 800B99F4
  c->lr=0x800B99FCu; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 800B99F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B99FC
  c->r[31]=c->r[3]|c->r[3]; // 800B9A00
  c->f[28]=c->f[1]; // 800B9A04
  c->f[29]=c->f[2]; // 800B9A08
  c->f[30]=c->f[3]; // 800B9A0C
  c->f[31]=c->f[4]; // 800B9A10
  c->lr=0x800B9A18u; f_800A23BC(c); // 800B9A14
  c->lr=0x800B9A1Cu; f_800A23C8(c); // 800B9A18
  c->r[4]=c->r[31]|c->r[31]; // 800B9A1C
  c->lr=0x800B9A24u; f_800BBC00(c); // 800B9A20
  c->r[31]=c->r[3]|c->r[3]; // 800B9A24
  c->lr=0x800B9A2Cu; f_800A23BC(c); // 800B9A28
  c->lr=0x800B9A30u; f_800A23C8(c); // 800B9A2C
  c->r[4]=c->r[31]|c->r[31]; // 800B9A30
  c->lr=0x800B9A38u; f_800BBBC0(c); // 800B9A34
  c->f[1]=c->f[28]; // 800B9A38
  c->f[2]=c->f[29]; // 800B9A3C
  c->f[3]=c->f[30]; // 800B9A40
  c->f[4]=c->f[31]; // 800B9A44
  c->lr=0x800B9A4Cu; f_800CCFD8(c); // 800B9A48
  c->r[11]=c->r[1]+0x00000030u; // 800B9A4C
  c->lr=0x800B9A54u; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 800B9A50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9A54
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B9A58
  c->lr=c->r[0]; // 800B9A5C
  c->r[1]=c->r[1]+0x00000030u; // 800B9A60
  return; // 800B9A64
}

// fn_800B9A68
void f_800B9A68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9A68
  c->r[0]=c->lr; // 800B9A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9A70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9A74
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9A78
  c->r[31]=c->r[3]|c->r[3]; // 800B9A7C
  c->r[30]=c->r[4]|c->r[4]; // 800B9A80
  c->lr=0x800B9A88u; f_800A23BC(c); // 800B9A84
  c->lr=0x800B9A8Cu; f_800A23C8(c); // 800B9A88
  c->r[4]=c->r[31]|c->r[31]; // 800B9A8C
  c->lr=0x800B9A94u; f_800BBC00(c); // 800B9A90
  c->r[31]=c->r[3]|c->r[3]; // 800B9A94
  c->lr=0x800B9A9Cu; f_800A23BC(c); // 800B9A98
  c->lr=0x800B9AA0u; f_800BB820(c); // 800B9A9C
  c->r[4]=c->r[30]|c->r[30]; // 800B9AA0
  c->lr=0x800B9AA8u; f_800BBA68(c); // 800B9AA4
  c->r[30]=c->r[3]|c->r[3]; // 800B9AA8
  c->lr=0x800B9AB0u; f_800A23BC(c); // 800B9AAC
  c->lr=0x800B9AB4u; f_800A23C8(c); // 800B9AB0
  c->r[4]=c->r[31]|c->r[31]; // 800B9AB4
  c->lr=0x800B9ABCu; f_800BBBC0(c); // 800B9AB8
  c->r[4]=c->r[30]|c->r[30]; // 800B9ABC
  c->lr=0x800B9AC4u; f_800CD008(c); // 800B9AC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9AC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9AC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9ACC
  c->lr=c->r[0]; // 800B9AD0
  c->r[1]=c->r[1]+0x00000010u; // 800B9AD4
  return; // 800B9AD8
}

// fn_800B9ADC
void f_800B9ADC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9ADC
  c->r[0]=c->lr; // 800B9AE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9AE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9AE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B9AEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B9AF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B9AF4
  c->r[31]=c->r[3]|c->r[3]; // 800B9AF8
  c->r[28]=c->r[4]|c->r[4]; // 800B9AFC
  c->r[29]=c->r[5]|c->r[5]; // 800B9B00
  c->r[30]=c->r[6]|c->r[6]; // 800B9B04
  c->lr=0x800B9B0Cu; f_800A23BC(c); // 800B9B08
  c->lr=0x800B9B10u; f_800A23C8(c); // 800B9B0C
  c->r[4]=c->r[31]|c->r[31]; // 800B9B10
  c->lr=0x800B9B18u; f_800BBC00(c); // 800B9B14
  c->r[31]=c->r[3]|c->r[3]; // 800B9B18
  c->lr=0x800B9B20u; f_800A23BC(c); // 800B9B1C
  c->lr=0x800B9B24u; f_800A23C8(c); // 800B9B20
  c->r[4]=c->r[31]|c->r[31]; // 800B9B24
  c->lr=0x800B9B2Cu; f_800BBBC0(c); // 800B9B28
  c->r[4]=c->r[28]|c->r[28]; // 800B9B2C
  c->r[5]=c->r[29]|c->r[29]; // 800B9B30
  c->r[6]=c->r[30]|c->r[30]; // 800B9B34
  c->lr=0x800B9B3Cu; f_800CD024(c); // 800B9B38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9B3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B9B40
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B9B44
  c->r[28]=R32(c->r[1]+0x00000010u); // 800B9B48
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9B4C
  c->lr=c->r[0]; // 800B9B50
  c->r[1]=c->r[1]+0x00000020u; // 800B9B54
  return; // 800B9B58
}

// fn_800B9B5C
void f_800B9B5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9B5C
  c->r[0]=c->lr; // 800B9B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9B64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9B68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9B6C
  c->r[31]=c->r[3]|c->r[3]; // 800B9B70
  c->r[30]=c->r[4]|c->r[4]; // 800B9B74
  c->lr=0x800B9B7Cu; f_800A23BC(c); // 800B9B78
  c->lr=0x800B9B80u; f_800A23C8(c); // 800B9B7C
  c->r[4]=c->r[31]|c->r[31]; // 800B9B80
  c->lr=0x800B9B88u; f_800BBC00(c); // 800B9B84
  c->r[31]=c->r[3]|c->r[3]; // 800B9B88
  c->lr=0x800B9B90u; f_800A23BC(c); // 800B9B8C
  c->lr=0x800B9B94u; f_800A23C8(c); // 800B9B90
  c->r[4]=c->r[31]|c->r[31]; // 800B9B94
  c->lr=0x800B9B9Cu; f_800BBBC0(c); // 800B9B98
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 800B9B9C
  c->lr=0x800B9BA4u; f_800CD06C(c); // 800B9BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9BA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9BA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9BAC
  c->lr=c->r[0]; // 800B9BB0
  c->r[1]=c->r[1]+0x00000010u; // 800B9BB4
  return; // 800B9BB8
}

// fn_800B9BBC
void f_800B9BBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9BBC
  c->r[0]=c->lr; // 800B9BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9BC8
  c->r[31]=c->r[3]|c->r[3]; // 800B9BCC
  c->lr=0x800B9BD4u; f_800A23BC(c); // 800B9BD0
  c->lr=0x800B9BD8u; f_800A23C8(c); // 800B9BD4
  c->r[4]=c->r[31]|c->r[31]; // 800B9BD8
  c->lr=0x800B9BE0u; f_800BBC00(c); // 800B9BDC
  c->r[31]=c->r[3]|c->r[3]; // 800B9BE0
  c->lr=0x800B9BE8u; f_800A23BC(c); // 800B9BE4
  c->lr=0x800B9BECu; f_800A23C8(c); // 800B9BE8
  c->r[4]=c->r[31]|c->r[31]; // 800B9BEC
  c->lr=0x800B9BF4u; f_800BBBC0(c); // 800B9BF0
  c->lr=0x800B9BF8u; f_800CD0A0(c); // 800B9BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9BFC
  c->lr=c->r[0]; // 800B9C00
  c->r[1]=c->r[1]+0x00000010u; // 800B9C04
  return; // 800B9C08
}

// fn_800B9C0C
void f_800B9C0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9C0C
  c->r[0]=c->lr; // 800B9C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9C14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9C18
  c->r[31]=c->r[3]|c->r[3]; // 800B9C1C
  c->lr=0x800B9C24u; f_800A23BC(c); // 800B9C20
  c->lr=0x800B9C28u; f_800A23C8(c); // 800B9C24
  c->r[4]=c->r[31]|c->r[31]; // 800B9C28
  c->lr=0x800B9C30u; f_800BBC00(c); // 800B9C2C
  c->r[31]=c->r[3]|c->r[3]; // 800B9C30
  c->lr=0x800B9C38u; f_800A23BC(c); // 800B9C34
  c->lr=0x800B9C3Cu; f_800A23C8(c); // 800B9C38
  c->r[4]=c->r[31]|c->r[31]; // 800B9C3C
  c->lr=0x800B9C44u; f_800BBBC0(c); // 800B9C40
  c->lr=0x800B9C48u; f_800CD0B0(c); // 800B9C44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9C48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9C4C
  c->lr=c->r[0]; // 800B9C50
  c->r[1]=c->r[1]+0x00000010u; // 800B9C54
  return; // 800B9C58
}

// fn_800B9C5C
void f_800B9C5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9C5C
  c->r[0]=c->lr; // 800B9C60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9C64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9C68
  c->r[31]=c->r[3]|c->r[3]; // 800B9C6C
  c->lr=0x800B9C74u; f_800A23BC(c); // 800B9C70
  c->lr=0x800B9C78u; f_800A23C8(c); // 800B9C74
  c->r[4]=c->r[31]|c->r[31]; // 800B9C78
  c->lr=0x800B9C80u; f_800BBC00(c); // 800B9C7C
  c->r[31]=c->r[3]|c->r[3]; // 800B9C80
  c->lr=0x800B9C88u; f_800A23BC(c); // 800B9C84
  c->lr=0x800B9C8Cu; f_800A23C8(c); // 800B9C88
  c->r[4]=c->r[31]|c->r[31]; // 800B9C8C
  c->lr=0x800B9C94u; f_800BBBC0(c); // 800B9C90
  c->lr=0x800B9C98u; f_800CD0C0(c); // 800B9C94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9C98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9C9C
  c->lr=c->r[0]; // 800B9CA0
  c->r[1]=c->r[1]+0x00000010u; // 800B9CA4
  return; // 800B9CA8
}

// fn_800B9CAC
void f_800B9CAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9CAC
  c->r[0]=c->lr; // 800B9CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9CB8
  c->r[31]=c->r[3]|c->r[3]; // 800B9CBC
  c->lr=0x800B9CC4u; f_800A23BC(c); // 800B9CC0
  c->lr=0x800B9CC8u; f_800A23C8(c); // 800B9CC4
  c->r[4]=c->r[31]|c->r[31]; // 800B9CC8
  c->lr=0x800B9CD0u; f_800BBC00(c); // 800B9CCC
  c->r[31]=c->r[3]|c->r[3]; // 800B9CD0
  c->lr=0x800B9CD8u; f_800A23BC(c); // 800B9CD4
  c->lr=0x800B9CDCu; f_800A23C8(c); // 800B9CD8
  c->r[4]=c->r[31]|c->r[31]; // 800B9CDC
  c->lr=0x800B9CE4u; f_800BBBC0(c); // 800B9CE0
  c->lr=0x800B9CE8u; f_800CD0D0(c); // 800B9CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9CE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9CEC
  c->lr=c->r[0]; // 800B9CF0
  c->r[1]=c->r[1]+0x00000010u; // 800B9CF4
  return; // 800B9CF8
}

// fn_800B9CFC
void f_800B9CFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9CFC
  c->r[0]=c->lr; // 800B9D00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9D04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9D08
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9D0C
  c->r[31]=c->r[3]|c->r[3]; // 800B9D10
  c->r[30]=c->r[4]|c->r[4]; // 800B9D14
  c->lr=0x800B9D1Cu; f_800A23BC(c); // 800B9D18
  c->lr=0x800B9D20u; f_800A23C8(c); // 800B9D1C
  c->r[4]=c->r[31]|c->r[31]; // 800B9D20
  c->lr=0x800B9D28u; f_800BBC00(c); // 800B9D24
  c->r[31]=c->r[3]|c->r[3]; // 800B9D28
  c->lr=0x800B9D30u; f_800A23BC(c); // 800B9D2C
  c->lr=0x800B9D34u; f_800A23C8(c); // 800B9D30
  c->r[4]=c->r[31]|c->r[31]; // 800B9D34
  c->lr=0x800B9D3Cu; f_800BBBC0(c); // 800B9D38
  c->r[4]=c->r[30]|c->r[30]; // 800B9D3C
  c->lr=0x800B9D44u; f_800CD120(c); // 800B9D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9D44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9D48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9D4C
  c->lr=c->r[0]; // 800B9D50
  c->r[1]=c->r[1]+0x00000010u; // 800B9D54
  return; // 800B9D58
}

// fn_800B9D5C
void f_800B9D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9D5C
  c->r[0]=c->lr; // 800B9D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9D64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9D68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B9D6C
  c->r[31]=c->r[3]|c->r[3]; // 800B9D70
  c->r[30]=c->r[4]|c->r[4]; // 800B9D74
  c->lr=0x800B9D7Cu; f_800A23BC(c); // 800B9D78
  c->lr=0x800B9D80u; f_800A23C8(c); // 800B9D7C
  c->r[4]=c->r[31]|c->r[31]; // 800B9D80
  c->lr=0x800B9D88u; f_800BBC00(c); // 800B9D84
  c->r[31]=c->r[3]|c->r[3]; // 800B9D88
  c->lr=0x800B9D90u; f_800A23BC(c); // 800B9D8C
  c->lr=0x800B9D94u; f_800A23C8(c); // 800B9D90
  c->r[4]=c->r[31]|c->r[31]; // 800B9D94
  c->lr=0x800B9D9Cu; f_800BBBC0(c); // 800B9D98
  c->r[4]=c->r[30]|c->r[30]; // 800B9D9C
  c->lr=0x800B9DA4u; f_800CD174(c); // 800B9DA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9DA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B9DA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9DAC
  c->lr=c->r[0]; // 800B9DB0
  c->r[1]=c->r[1]+0x00000010u; // 800B9DB4
  return; // 800B9DB8
}

// fn_800B9DBC
void f_800B9DBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9DBC
  c->r[0]=c->lr; // 800B9DC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9DC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9DC8
  c->r[31]=c->r[3]|c->r[3]; // 800B9DCC
  c->lr=0x800B9DD4u; f_800A23BC(c); // 800B9DD0
  c->lr=0x800B9DD8u; f_800BB700(c); // 800B9DD4
  c->r[4]=c->r[31]|c->r[31]; // 800B9DD8
  c->lr=0x800B9DE0u; f_800BBEA4(c); // 800B9DDC
  c->r[31]=c->r[3]|c->r[3]; // 800B9DE0
  c->lr=0x800B9DE8u; f_800A23BC(c); // 800B9DE4
  c->lr=0x800B9DECu; f_800BB700(c); // 800B9DE8
  c->r[4]=c->r[31]|c->r[31]; // 800B9DEC
  c->lr=0x800B9DF4u; f_800D3078(c); // 800B9DF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9DF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9DF8
  c->lr=c->r[0]; // 800B9DFC
  c->r[1]=c->r[1]+0x00000010u; // 800B9E00
  return; // 800B9E04
}

// fn_800B9E08
void f_800B9E08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9E08
  c->r[0]=c->lr; // 800B9E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9E10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9E14
  c->r[31]=c->r[3]|c->r[3]; // 800B9E18
  c->lr=0x800B9E20u; f_800A23BC(c); // 800B9E1C
  c->lr=0x800B9E24u; f_800BB700(c); // 800B9E20
  c->r[4]=c->r[31]|c->r[31]; // 800B9E24
  c->lr=0x800B9E2Cu; f_800BBEA4(c); // 800B9E28
  c->r[31]=c->r[3]|c->r[3]; // 800B9E2C
  c->lr=0x800B9E34u; f_800A23BC(c); // 800B9E30
  c->lr=0x800B9E38u; f_800BB700(c); // 800B9E34
  c->r[4]=c->r[31]|c->r[31]; // 800B9E38
  c->lr=0x800B9E40u; f_800BBE64(c); // 800B9E3C
  c->r[4]=0u+0x00000000u; // 800B9E40
  c->lr=0x800B9E48u; f_800D2748(c); // 800B9E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9E4C
  c->lr=c->r[0]; // 800B9E50
  c->r[1]=c->r[1]+0x00000010u; // 800B9E54
  return; // 800B9E58
}

// fn_800B9E5C
void f_800B9E5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9E5C
  c->r[0]=c->lr; // 800B9E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9E64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9E68
  c->r[31]=c->r[3]|c->r[3]; // 800B9E6C
  c->lr=0x800B9E74u; f_800A23BC(c); // 800B9E70
  c->lr=0x800B9E78u; f_800BB700(c); // 800B9E74
  c->r[4]=c->r[31]|c->r[31]; // 800B9E78
  c->lr=0x800B9E80u; f_800BBEA4(c); // 800B9E7C
  c->r[31]=c->r[3]|c->r[3]; // 800B9E80
  c->lr=0x800B9E88u; f_800A23BC(c); // 800B9E84
  c->lr=0x800B9E8Cu; f_800BB700(c); // 800B9E88
  c->r[4]=c->r[31]|c->r[31]; // 800B9E8C
  c->lr=0x800B9E94u; f_800BBE64(c); // 800B9E90
  c->r[4]=0u+0x00000001u; // 800B9E94
  c->lr=0x800B9E9Cu; f_800D2748(c); // 800B9E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9EA0
  c->lr=c->r[0]; // 800B9EA4
  c->r[1]=c->r[1]+0x00000010u; // 800B9EA8
  return; // 800B9EAC
}

// fn_800B9EB0
void f_800B9EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9EB0
  c->r[0]=c->lr; // 800B9EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9EB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B9EBC
  c->r[31]=c->r[3]|c->r[3]; // 800B9EC0
  c->lr=0x800B9EC8u; f_800A23BC(c); // 800B9EC4
  c->lr=0x800B9ECCu; f_800BB700(c); // 800B9EC8
  c->r[4]=c->r[31]|c->r[31]; // 800B9ECC
  c->lr=0x800B9ED4u; f_800BBEA4(c); // 800B9ED0
  c->r[31]=c->r[3]|c->r[3]; // 800B9ED4
  c->lr=0x800B9EDCu; f_800A23BC(c); // 800B9ED8
  c->lr=0x800B9EE0u; f_800BB700(c); // 800B9EDC
  c->r[4]=c->r[31]|c->r[31]; // 800B9EE0
  c->lr=0x800B9EE8u; f_800BBE64(c); // 800B9EE4
  c->r[4]=0u+0x00000002u; // 800B9EE8
  c->lr=0x800B9EF0u; f_800D2748(c); // 800B9EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9EF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B9EF4
  c->lr=c->r[0]; // 800B9EF8
  c->r[1]=c->r[1]+0x00000010u; // 800B9EFC
  return; // 800B9F00
}

// fn_800B9F04
void f_800B9F04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9F04
  c->r[0]=c->lr; // 800B9F08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9F0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9F10
  c->r[31]=c->r[3]|c->r[3]; // 800B9F14
  c->r[3]=c->r[1]+0x00000008u; // 800B9F18
  c->lr=0x800B9F20u; f_8004E34C(c); // 800B9F1C
  c->lr=0x800B9F24u; f_800A23BC(c); // 800B9F20
  c->lr=0x800B9F28u; f_800BB700(c); // 800B9F24
  c->r[4]=c->r[31]|c->r[31]; // 800B9F28
  c->lr=0x800B9F30u; f_800BBEA4(c); // 800B9F2C
  c->r[31]=c->r[3]|c->r[3]; // 800B9F30
  c->lr=0x800B9F38u; f_800A23BC(c); // 800B9F34
  c->lr=0x800B9F3Cu; f_800BB700(c); // 800B9F38
  c->r[4]=c->r[31]|c->r[31]; // 800B9F3C
  c->lr=0x800B9F44u; f_800BBE64(c); // 800B9F40
  c->r[4]=c->r[1]+0x00000008u; // 800B9F44
  c->lr=0x800B9F4Cu; f_800BB238(c); // 800B9F48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9F4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9F50
  c->lr=c->r[0]; // 800B9F54
  c->r[1]=c->r[1]+0x00000020u; // 800B9F58
  return; // 800B9F5C
}

// fn_800B9F60
void f_800B9F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9F60
  c->r[0]=c->lr; // 800B9F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9F68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B9F6C
  c->r[31]=c->r[3]|c->r[3]; // 800B9F70
  c->r[3]=c->r[1]+0x00000008u; // 800B9F74
  c->lr=0x800B9F7Cu; f_8004E34C(c); // 800B9F78
  c->lr=0x800B9F80u; f_800A23BC(c); // 800B9F7C
  c->lr=0x800B9F84u; f_800BB700(c); // 800B9F80
  c->r[4]=c->r[31]|c->r[31]; // 800B9F84
  c->lr=0x800B9F8Cu; f_800BBEA4(c); // 800B9F88
  c->r[31]=c->r[3]|c->r[3]; // 800B9F8C
  c->lr=0x800B9F94u; f_800A23BC(c); // 800B9F90
  c->lr=0x800B9F98u; f_800BB700(c); // 800B9F94
  c->r[4]=c->r[31]|c->r[31]; // 800B9F98
  c->lr=0x800B9FA0u; f_800BBE64(c); // 800B9F9C
  c->r[4]=c->r[1]+0x00000008u; // 800B9FA0
  c->lr=0x800B9FA8u; f_800BB248(c); // 800B9FA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B9FA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B9FAC
  c->lr=c->r[0]; // 800B9FB0
  c->r[1]=c->r[1]+0x00000020u; // 800B9FB4
  return; // 800B9FB8
}

// fn_800B9FBC
void f_800B9FBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9FBC
  c->r[0]=c->lr; // 800B9FC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B9FC4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800B9FC8
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B9FCC
  c->r[31]=c->r[3]|c->r[3]; // 800B9FD0
  c->f[31]=c->f[1]; // 800B9FD4
  c->lr=0x800B9FDCu; f_800A23BC(c); // 800B9FD8
  c->lr=0x800B9FE0u; f_800BB700(c); // 800B9FDC
  c->r[4]=c->r[31]|c->r[31]; // 800B9FE0
  c->lr=0x800B9FE8u; f_800BBEA4(c); // 800B9FE4
  c->r[31]=c->r[3]|c->r[3]; // 800B9FE8
  c->lr=0x800B9FF0u; f_800A23BC(c); // 800B9FEC
  c->lr=0x800B9FF4u; f_800BB700(c); // 800B9FF0
  c->r[4]=c->r[31]|c->r[31]; // 800B9FF4
  c->lr=0x800B9FFCu; f_800BBE64(c); // 800B9FF8
  c->f[1]=c->f[31]; // 800B9FFC
  c->lr=0x800BA004u; f_800BB258(c); // 800BA000
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA004
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA008
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA00C
  c->lr=c->r[0]; // 800BA010
  c->r[1]=c->r[1]+0x00000020u; // 800BA014
  return; // 800BA018
}

// fn_800BA01C
void f_800BA01C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA01C
  c->r[0]=c->lr; // 800BA020
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA028
  c->r[31]=c->r[3]|c->r[3]; // 800BA02C
  c->lr=0x800BA034u; f_800A23BC(c); // 800BA030
  c->lr=0x800BA038u; f_800BB700(c); // 800BA034
  c->r[4]=c->r[31]|c->r[31]; // 800BA038
  c->lr=0x800BA040u; f_800BBEA4(c); // 800BA03C
  c->r[31]=c->r[3]|c->r[3]; // 800BA040
  c->lr=0x800BA048u; f_800A23BC(c); // 800BA044
  c->lr=0x800BA04Cu; f_800BB700(c); // 800BA048
  c->r[4]=c->r[31]|c->r[31]; // 800BA04C
  c->lr=0x800BA054u; f_800BBE64(c); // 800BA050
  c->lr=0x800BA058u; f_800BB274(c); // 800BA054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA058
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA05C
  c->lr=c->r[0]; // 800BA060
  c->r[1]=c->r[1]+0x00000010u; // 800BA064
  return; // 800BA068
}

// fn_800BA06C
void f_800BA06C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA06C
  c->r[0]=c->lr; // 800BA070
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA074
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BA078
  c->r[31]=c->r[3]|c->r[3]; // 800BA07C
  c->r[3]=c->r[1]+0x00000008u; // 800BA080
  c->lr=0x800BA088u; f_8004E34C(c); // 800BA084
  c->lr=0x800BA08Cu; f_800A23BC(c); // 800BA088
  c->lr=0x800BA090u; f_800BB700(c); // 800BA08C
  c->r[4]=c->r[31]|c->r[31]; // 800BA090
  c->lr=0x800BA098u; f_800BBEA4(c); // 800BA094
  c->r[31]=c->r[3]|c->r[3]; // 800BA098
  c->lr=0x800BA0A0u; f_800A23BC(c); // 800BA09C
  c->lr=0x800BA0A4u; f_800BB700(c); // 800BA0A0
  c->r[4]=c->r[31]|c->r[31]; // 800BA0A4
  c->lr=0x800BA0ACu; f_800BBE64(c); // 800BA0A8
  c->r[4]=c->r[1]+0x00000008u; // 800BA0AC
  c->lr=0x800BA0B4u; f_800BB27C(c); // 800BA0B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BA0B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA0B8
  c->lr=c->r[0]; // 800BA0BC
  c->r[1]=c->r[1]+0x00000020u; // 800BA0C0
  return; // 800BA0C4
}

// fn_800BA0C8
void f_800BA0C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA0C8
  c->r[0]=c->lr; // 800BA0CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA0D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BA0D4
  c->r[31]=c->r[3]|c->r[3]; // 800BA0D8
  c->r[3]=c->r[1]+0x00000008u; // 800BA0DC
  c->lr=0x800BA0E4u; f_8004E34C(c); // 800BA0E0
  c->lr=0x800BA0E8u; f_800A23BC(c); // 800BA0E4
  c->lr=0x800BA0ECu; f_800BB700(c); // 800BA0E8
  c->r[4]=c->r[31]|c->r[31]; // 800BA0EC
  c->lr=0x800BA0F4u; f_800BBEA4(c); // 800BA0F0
  c->r[31]=c->r[3]|c->r[3]; // 800BA0F4
  c->lr=0x800BA0FCu; f_800A23BC(c); // 800BA0F8
  c->lr=0x800BA100u; f_800BB700(c); // 800BA0FC
  c->r[4]=c->r[31]|c->r[31]; // 800BA100
  c->lr=0x800BA108u; f_800BBE64(c); // 800BA104
  c->r[4]=c->r[1]+0x00000008u; // 800BA108
  c->lr=0x800BA110u; f_800BB318(c); // 800BA10C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BA110
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA114
  c->lr=c->r[0]; // 800BA118
  c->r[1]=c->r[1]+0x00000020u; // 800BA11C
  return; // 800BA120
}

// fn_800BA124
void f_800BA124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA124
  c->r[0]=c->lr; // 800BA128
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA12C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA130
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA134
  c->r[31]=c->r[3]|c->r[3]; // 800BA138
  c->f[31]=c->f[1]; // 800BA13C
  c->lr=0x800BA144u; f_800A23BC(c); // 800BA140
  c->lr=0x800BA148u; f_800BB700(c); // 800BA144
  c->r[4]=c->r[31]|c->r[31]; // 800BA148
  c->lr=0x800BA150u; f_800BBEA4(c); // 800BA14C
  c->r[31]=c->r[3]|c->r[3]; // 800BA150
  c->lr=0x800BA158u; f_800A23BC(c); // 800BA154
  c->lr=0x800BA15Cu; f_800BB700(c); // 800BA158
  c->r[4]=c->r[31]|c->r[31]; // 800BA15C
  c->lr=0x800BA164u; f_800BBE64(c); // 800BA160
  c->f[1]=c->f[31]; // 800BA164
  c->lr=0x800BA16Cu; f_800BB504(c); // 800BA168
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA16C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA170
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA174
  c->lr=c->r[0]; // 800BA178
  c->r[1]=c->r[1]+0x00000020u; // 800BA17C
  return; // 800BA180
}

// fn_800BA184
void f_800BA184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA184
  c->r[0]=c->lr; // 800BA188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA18C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA190
  c->r[31]=c->r[3]|c->r[3]; // 800BA194
  c->lr=0x800BA19Cu; f_800A23BC(c); // 800BA198
  c->lr=0x800BA1A0u; f_800BB700(c); // 800BA19C
  c->r[4]=c->r[31]|c->r[31]; // 800BA1A0
  c->lr=0x800BA1A8u; f_800BBEA4(c); // 800BA1A4
  c->r[31]=c->r[3]|c->r[3]; // 800BA1A8
  c->lr=0x800BA1B0u; f_800A23BC(c); // 800BA1AC
  c->lr=0x800BA1B4u; f_800BB700(c); // 800BA1B0
  c->r[4]=c->r[31]|c->r[31]; // 800BA1B4
  c->lr=0x800BA1BCu; f_800BBE64(c); // 800BA1B8
  c->lr=0x800BA1C0u; f_800BB520(c); // 800BA1BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA1C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA1C4
  c->lr=c->r[0]; // 800BA1C8
  c->r[1]=c->r[1]+0x00000010u; // 800BA1CC
  return; // 800BA1D0
}

// fn_800BA1D4
void f_800BA1D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA1D4
  c->r[0]=c->lr; // 800BA1D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA1DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BA1E0
  c->r[31]=c->r[3]|c->r[3]; // 800BA1E4
  c->r[3]=c->r[1]+0x00000008u; // 800BA1E8
  c->lr=0x800BA1F0u; f_8004E34C(c); // 800BA1EC
  c->lr=0x800BA1F4u; f_800A23BC(c); // 800BA1F0
  c->lr=0x800BA1F8u; f_800BB700(c); // 800BA1F4
  c->r[4]=c->r[31]|c->r[31]; // 800BA1F8
  c->lr=0x800BA200u; f_800BBEA4(c); // 800BA1FC
  c->r[31]=c->r[3]|c->r[3]; // 800BA200
  c->lr=0x800BA208u; f_800A23BC(c); // 800BA204
  c->lr=0x800BA20Cu; f_800BB700(c); // 800BA208
  c->r[4]=c->r[31]|c->r[31]; // 800BA20C
  c->lr=0x800BA214u; f_800BBE64(c); // 800BA210
  c->r[4]=c->r[1]+0x00000008u; // 800BA214
  c->lr=0x800BA21Cu; f_800BB528(c); // 800BA218
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BA21C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA220
  c->lr=c->r[0]; // 800BA224
  c->r[1]=c->r[1]+0x00000020u; // 800BA228
  return; // 800BA22C
}

// fn_800BA230
void f_800BA230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA230
  c->r[0]=c->lr; // 800BA234
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA238
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BA23C
  c->r[31]=c->r[3]|c->r[3]; // 800BA240
  c->r[3]=c->r[1]+0x00000008u; // 800BA244
  c->lr=0x800BA24Cu; f_8004E34C(c); // 800BA248
  c->lr=0x800BA250u; f_800A23BC(c); // 800BA24C
  c->lr=0x800BA254u; f_800BB700(c); // 800BA250
  c->r[4]=c->r[31]|c->r[31]; // 800BA254
  c->lr=0x800BA25Cu; f_800BBEA4(c); // 800BA258
  c->r[31]=c->r[3]|c->r[3]; // 800BA25C
  c->lr=0x800BA264u; f_800A23BC(c); // 800BA260
  c->lr=0x800BA268u; f_800BB700(c); // 800BA264
  c->r[4]=c->r[31]|c->r[31]; // 800BA268
  c->lr=0x800BA270u; f_800BBE64(c); // 800BA26C
  c->r[4]=c->r[1]+0x00000008u; // 800BA270
  c->lr=0x800BA278u; f_800BB538(c); // 800BA274
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BA278
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA27C
  c->lr=c->r[0]; // 800BA280
  c->r[1]=c->r[1]+0x00000020u; // 800BA284
  return; // 800BA288
}

// fn_800BA28C
void f_800BA28C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA28C
  c->r[0]=c->lr; // 800BA290
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA294
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA298
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA29C
  c->r[31]=c->r[3]|c->r[3]; // 800BA2A0
  c->f[31]=c->f[1]; // 800BA2A4
  c->lr=0x800BA2ACu; f_800A23BC(c); // 800BA2A8
  c->lr=0x800BA2B0u; f_800BB700(c); // 800BA2AC
  c->r[4]=c->r[31]|c->r[31]; // 800BA2B0
  c->lr=0x800BA2B8u; f_800BBEA4(c); // 800BA2B4
  c->r[31]=c->r[3]|c->r[3]; // 800BA2B8
  c->lr=0x800BA2C0u; f_800A23BC(c); // 800BA2BC
  c->lr=0x800BA2C4u; f_800BB700(c); // 800BA2C0
  c->r[4]=c->r[31]|c->r[31]; // 800BA2C4
  c->lr=0x800BA2CCu; f_800BBE64(c); // 800BA2C8
  c->f[1]=c->f[31]; // 800BA2CC
  c->lr=0x800BA2D4u; f_800BB548(c); // 800BA2D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA2D4
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA2D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA2DC
  c->lr=c->r[0]; // 800BA2E0
  c->r[1]=c->r[1]+0x00000020u; // 800BA2E4
  return; // 800BA2E8
}

// fn_800BA2EC
void f_800BA2EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA2EC
  c->r[0]=c->lr; // 800BA2F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA2F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA2F8
  c->r[31]=c->r[3]|c->r[3]; // 800BA2FC
  c->lr=0x800BA304u; f_800A23BC(c); // 800BA300
  c->lr=0x800BA308u; f_800BB700(c); // 800BA304
  c->r[4]=c->r[31]|c->r[31]; // 800BA308
  c->lr=0x800BA310u; f_800BBEA4(c); // 800BA30C
  c->r[31]=c->r[3]|c->r[3]; // 800BA310
  c->lr=0x800BA318u; f_800A23BC(c); // 800BA314
  c->lr=0x800BA31Cu; f_800BB700(c); // 800BA318
  c->r[4]=c->r[31]|c->r[31]; // 800BA31C
  c->lr=0x800BA324u; f_800BBE64(c); // 800BA320
  c->lr=0x800BA328u; f_800BB564(c); // 800BA324
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA328
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA32C
  c->lr=c->r[0]; // 800BA330
  c->r[1]=c->r[1]+0x00000010u; // 800BA334
  return; // 800BA338
}

// fn_800BA33C
void f_800BA33C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA33C
  c->r[0]=c->lr; // 800BA340
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA344
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BA348
  c->r[31]=c->r[3]|c->r[3]; // 800BA34C
  c->r[3]=c->r[1]+0x00000008u; // 800BA350
  c->lr=0x800BA358u; f_8004E34C(c); // 800BA354
  c->lr=0x800BA35Cu; f_800A23BC(c); // 800BA358
  c->lr=0x800BA360u; f_800BB700(c); // 800BA35C
  c->r[4]=c->r[31]|c->r[31]; // 800BA360
  c->lr=0x800BA368u; f_800BBEA4(c); // 800BA364
  c->r[31]=c->r[3]|c->r[3]; // 800BA368
  c->lr=0x800BA370u; f_800A23BC(c); // 800BA36C
  c->lr=0x800BA374u; f_800BB700(c); // 800BA370
  c->r[4]=c->r[31]|c->r[31]; // 800BA374
  c->lr=0x800BA37Cu; f_800BBE64(c); // 800BA378
  c->r[4]=c->r[1]+0x00000008u; // 800BA37C
  c->lr=0x800BA384u; f_800BB56C(c); // 800BA380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BA384
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA388
  c->lr=c->r[0]; // 800BA38C
  c->r[1]=c->r[1]+0x00000020u; // 800BA390
  return; // 800BA394
}

// fn_800BA398
void f_800BA398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA398
  c->r[0]=c->lr; // 800BA39C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA3A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BA3A4
  c->r[31]=c->r[3]|c->r[3]; // 800BA3A8
  c->r[3]=c->r[1]+0x00000008u; // 800BA3AC
  c->lr=0x800BA3B4u; f_8004E34C(c); // 800BA3B0
  c->lr=0x800BA3B8u; f_800A23BC(c); // 800BA3B4
  c->lr=0x800BA3BCu; f_800BB700(c); // 800BA3B8
  c->r[4]=c->r[31]|c->r[31]; // 800BA3BC
  c->lr=0x800BA3C4u; f_800BBEA4(c); // 800BA3C0
  c->r[31]=c->r[3]|c->r[3]; // 800BA3C4
  c->lr=0x800BA3CCu; f_800A23BC(c); // 800BA3C8
  c->lr=0x800BA3D0u; f_800BB700(c); // 800BA3CC
  c->r[4]=c->r[31]|c->r[31]; // 800BA3D0
  c->lr=0x800BA3D8u; f_800BBE64(c); // 800BA3D4
  c->r[4]=c->r[1]+0x00000008u; // 800BA3D8
  c->lr=0x800BA3E0u; f_800BB57C(c); // 800BA3DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BA3E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA3E4
  c->lr=c->r[0]; // 800BA3E8
  c->r[1]=c->r[1]+0x00000020u; // 800BA3EC
  return; // 800BA3F0
}

// fn_800BA3F4
void f_800BA3F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA3F4
  c->r[0]=c->lr; // 800BA3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA3FC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA400
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA404
  c->r[31]=c->r[3]|c->r[3]; // 800BA408
  c->f[31]=c->f[1]; // 800BA40C
  c->lr=0x800BA414u; f_800A23BC(c); // 800BA410
  c->lr=0x800BA418u; f_800BB700(c); // 800BA414
  c->r[4]=c->r[31]|c->r[31]; // 800BA418
  c->lr=0x800BA420u; f_800BBEA4(c); // 800BA41C
  c->r[31]=c->r[3]|c->r[3]; // 800BA420
  c->lr=0x800BA428u; f_800A23BC(c); // 800BA424
  c->lr=0x800BA42Cu; f_800BB700(c); // 800BA428
  c->r[4]=c->r[31]|c->r[31]; // 800BA42C
  c->lr=0x800BA434u; f_800BBE64(c); // 800BA430
  c->f[1]=c->f[31]; // 800BA434
  c->lr=0x800BA43Cu; f_800BB58C(c); // 800BA438
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA43C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA440
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA444
  c->lr=c->r[0]; // 800BA448
  c->r[1]=c->r[1]+0x00000020u; // 800BA44C
  return; // 800BA450
}

// fn_800BA454
void f_800BA454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA454
  c->r[0]=c->lr; // 800BA458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BA45C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BA460
  c->r[31]=c->r[3]|c->r[3]; // 800BA464
  c->lr=0x800BA46Cu; f_800A23BC(c); // 800BA468
  c->lr=0x800BA470u; f_800BB700(c); // 800BA46C
  c->r[4]=c->r[31]|c->r[31]; // 800BA470
  c->lr=0x800BA478u; f_800BBEA4(c); // 800BA474
  c->r[31]=c->r[3]|c->r[3]; // 800BA478
  c->lr=0x800BA480u; f_800A23BC(c); // 800BA47C
  c->lr=0x800BA484u; f_800BB700(c); // 800BA480
  c->r[4]=c->r[31]|c->r[31]; // 800BA484
  c->lr=0x800BA48Cu; f_800BBE64(c); // 800BA488
  c->lr=0x800BA490u; f_800BB5A8(c); // 800BA48C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BA490
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BA494
  c->lr=c->r[0]; // 800BA498
  c->r[1]=c->r[1]+0x00000010u; // 800BA49C
  return; // 800BA4A0
}

// fn_800BA4A4
void f_800BA4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA4A4
  c->r[0]=c->lr; // 800BA4A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA4AC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA4B0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA4B4
  c->r[31]=c->r[3]|c->r[3]; // 800BA4B8
  c->f[31]=c->f[1]; // 800BA4BC
  c->lr=0x800BA4C4u; f_800A23BC(c); // 800BA4C0
  c->lr=0x800BA4C8u; f_800BB700(c); // 800BA4C4
  c->r[4]=c->r[31]|c->r[31]; // 800BA4C8
  c->lr=0x800BA4D0u; f_800BBEA4(c); // 800BA4CC
  c->r[31]=c->r[3]|c->r[3]; // 800BA4D0
  c->lr=0x800BA4D8u; f_800A23BC(c); // 800BA4D4
  c->lr=0x800BA4DCu; f_800BB700(c); // 800BA4D8
  c->r[4]=c->r[31]|c->r[31]; // 800BA4DC
  c->lr=0x800BA4E4u; f_800BBE64(c); // 800BA4E0
  c->f[1]=c->f[31]; // 800BA4E4
  c->lr=0x800BA4ECu; f_800BB5B0(c); // 800BA4E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA4EC
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA4F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA4F4
  c->lr=c->r[0]; // 800BA4F8
  c->r[1]=c->r[1]+0x00000020u; // 800BA4FC
  return; // 800BA500
}

// fn_800BA504
void f_800BA504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA504
  c->r[0]=c->lr; // 800BA508
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA50C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA510
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA514
  c->r[31]=c->r[3]|c->r[3]; // 800BA518
  c->f[31]=c->f[1]; // 800BA51C
  c->lr=0x800BA524u; f_800A23BC(c); // 800BA520
  c->lr=0x800BA528u; f_800BB700(c); // 800BA524
  c->r[4]=c->r[31]|c->r[31]; // 800BA528
  c->lr=0x800BA530u; f_800BBEA4(c); // 800BA52C
  c->r[31]=c->r[3]|c->r[3]; // 800BA530
  c->lr=0x800BA538u; f_800A23BC(c); // 800BA534
  c->lr=0x800BA53Cu; f_800BB700(c); // 800BA538
  c->r[4]=c->r[31]|c->r[31]; // 800BA53C
  c->lr=0x800BA544u; f_800BBE64(c); // 800BA540
  c->f[1]=c->f[31]; // 800BA544
  c->lr=0x800BA54Cu; f_800BB600(c); // 800BA548
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA54C
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA550
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA554
  c->lr=c->r[0]; // 800BA558
  c->r[1]=c->r[1]+0x00000020u; // 800BA55C
  return; // 800BA560
}

// fn_800BA564
void f_800BA564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA564
  c->r[0]=c->lr; // 800BA568
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BA56C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BA570
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BA574
  c->r[31]=c->r[3]|c->r[3]; // 800BA578
  c->f[31]=c->f[1]; // 800BA57C
  c->lr=0x800BA584u; f_800A23BC(c); // 800BA580
  c->lr=0x800BA588u; f_800BB700(c); // 800BA584
  c->r[4]=c->r[31]|c->r[31]; // 800BA588
  c->lr=0x800BA590u; f_800BBEA4(c); // 800BA58C
  c->r[31]=c->r[3]|c->r[3]; // 800BA590
  c->lr=0x800BA598u; f_800A23BC(c); // 800BA594
  c->lr=0x800BA59Cu; f_800BB700(c); // 800BA598
  c->r[4]=c->r[31]|c->r[31]; // 800BA59C
  c->lr=0x800BA5A4u; f_800BBE64(c); // 800BA5A0
  c->f[1]=c->f[31]; // 800BA5A4
  c->lr=0x800BA5ACu; f_800BB650(c); // 800BA5A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BA5AC
  c->r[31]=R32(c->r[1]+0x00000014u); // 800BA5B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BA5B4
  c->lr=c->r[0]; // 800BA5B8
  c->r[1]=c->r[1]+0x00000020u; // 800BA5BC
  return; // 800BA5C0
}

