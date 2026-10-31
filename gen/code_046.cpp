#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801C13E4
void f_801C13E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C13E4
  c->r[0]=c->lr; // 801C13E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C13EC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C13F0
  c->f[31]=c->f[1]; // 801C13F4
  c->r[4]=0u+0x00000008u; // 801C13F8
  c->lr=0x801C1400u; f_8011B718(c); // 801C13FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1400
  if (crb(c,2)) { goto L_801C1410; } // 801C1404
  c->f[1]=c->f[31]; // 801C1408
  c->lr=0x801C1410u; f_801C0EC4(c); // 801C140C
L_801C1410:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1410
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1414
  c->lr=c->r[0]; // 801C1418
  c->r[1]=c->r[1]+0x00000010u; // 801C141C
  return; // 801C1420
}

// fn_801C1424
void f_801C1424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1424
  c->r[0]=c->lr; // 801C1428
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C142C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1430
  c->r[31]=c->r[4]|c->r[4]; // 801C1434
  c->r[4]=0u+0x00000008u; // 801C1438
  c->lr=0x801C1440u; f_8011B718(c); // 801C143C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1440
  if (crb(c,2)) { goto L_801C1450; } // 801C1444
  c->r[4]=c->r[31]|c->r[31]; // 801C1448
  c->lr=0x801C1450u; f_801C0EF4(c); // 801C144C
L_801C1450:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1450
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1454
  c->lr=c->r[0]; // 801C1458
  c->r[1]=c->r[1]+0x00000010u; // 801C145C
  return; // 801C1460
}

// fn_801C1464
void f_801C1464(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1464
  c->r[0]=c->lr; // 801C1468
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C146C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1470
  c->f[31]=c->f[1]; // 801C1474
  c->r[4]=0u+0x00000008u; // 801C1478
  c->lr=0x801C1480u; f_8011B718(c); // 801C147C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1480
  if (crb(c,2)) { goto L_801C1490; } // 801C1484
  c->f[1]=c->f[31]; // 801C1488
  c->lr=0x801C1490u; f_801C0EFC(c); // 801C148C
L_801C1490:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1490
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1494
  c->lr=c->r[0]; // 801C1498
  c->r[1]=c->r[1]+0x00000010u; // 801C149C
  return; // 801C14A0
}

// fn_801C14A4
void f_801C14A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C14A4
  c->r[0]=c->lr; // 801C14A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C14AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C14B0
  c->f[31]=c->f[1]; // 801C14B4
  c->r[4]=0u+0x00000008u; // 801C14B8
  c->lr=0x801C14C0u; f_8011B718(c); // 801C14BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C14C0
  if (crb(c,2)) { goto L_801C14D0; } // 801C14C4
  c->f[1]=c->f[31]; // 801C14C8
  c->lr=0x801C14D0u; f_801C0F1C(c); // 801C14CC
L_801C14D0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C14D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C14D4
  c->lr=c->r[0]; // 801C14D8
  c->r[1]=c->r[1]+0x00000010u; // 801C14DC
  return; // 801C14E0
}

// fn_801C14E4
void f_801C14E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C14E4
  c->r[0]=c->lr; // 801C14E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C14EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C14F0
  c->r[31]=c->r[4]|c->r[4]; // 801C14F4
  c->r[4]=0u+0x00000008u; // 801C14F8
  c->lr=0x801C1500u; f_8011B718(c); // 801C14FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1500
  if (crb(c,2)) { goto L_801C1510; } // 801C1504
  c->r[4]=c->r[31]|c->r[31]; // 801C1508
  c->lr=0x801C1510u; f_801C0F24(c); // 801C150C
L_801C1510:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1510
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1514
  c->lr=c->r[0]; // 801C1518
  c->r[1]=c->r[1]+0x00000010u; // 801C151C
  return; // 801C1520
}

// fn_801C1524
void f_801C1524(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1524
  c->r[0]=c->lr; // 801C1528
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C152C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1530
  c->f[31]=c->f[1]; // 801C1534
  c->r[4]=0u+0x00000008u; // 801C1538
  c->lr=0x801C1540u; f_8011B718(c); // 801C153C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1540
  if (crb(c,2)) { goto L_801C1550; } // 801C1544
  c->f[1]=c->f[31]; // 801C1548
  c->lr=0x801C1550u; f_801C0F2C(c); // 801C154C
L_801C1550:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1550
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1554
  c->lr=c->r[0]; // 801C1558
  c->r[1]=c->r[1]+0x00000010u; // 801C155C
  return; // 801C1560
}

// fn_801C1564
void f_801C1564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1564
  c->r[0]=c->lr; // 801C1568
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C156C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1570
  c->f[31]=c->f[1]; // 801C1574
  c->r[4]=0u+0x00000008u; // 801C1578
  c->lr=0x801C1580u; f_8011B718(c); // 801C157C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1580
  if (crb(c,2)) { goto L_801C1590; } // 801C1584
  c->f[1]=c->f[31]; // 801C1588
  c->lr=0x801C1590u; f_801C0F5C(c); // 801C158C
L_801C1590:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1590
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1594
  c->lr=c->r[0]; // 801C1598
  c->r[1]=c->r[1]+0x00000010u; // 801C159C
  return; // 801C15A0
}

// fn_801C15A4
void f_801C15A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C15A4
  c->r[0]=c->lr; // 801C15A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C15AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C15B0
  c->r[31]=c->r[4]|c->r[4]; // 801C15B4
  c->r[4]=0u+0x00000008u; // 801C15B8
  c->lr=0x801C15C0u; f_8011B718(c); // 801C15BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C15C0
  if (crb(c,2)) { goto L_801C15D0; } // 801C15C4
  c->r[4]=c->r[31]|c->r[31]; // 801C15C8
  c->lr=0x801C15D0u; f_801C0F64(c); // 801C15CC
L_801C15D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C15D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C15D4
  c->lr=c->r[0]; // 801C15D8
  c->r[1]=c->r[1]+0x00000010u; // 801C15DC
  return; // 801C15E0
}

// fn_801C15E4
void f_801C15E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C15E4
  c->r[0]=c->lr; // 801C15E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C15EC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C15F0
  c->f[31]=c->f[1]; // 801C15F4
  c->r[4]=0u+0x00000008u; // 801C15F8
  c->lr=0x801C1600u; f_8011B718(c); // 801C15FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1600
  if (crb(c,2)) { goto L_801C1610; } // 801C1604
  c->f[1]=c->f[31]; // 801C1608
  c->lr=0x801C1610u; f_801C0F6C(c); // 801C160C
L_801C1610:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1610
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1614
  c->lr=c->r[0]; // 801C1618
  c->r[1]=c->r[1]+0x00000010u; // 801C161C
  return; // 801C1620
}

// fn_801C1624
void f_801C1624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1624
  c->r[0]=c->lr; // 801C1628
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C162C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1630
  c->f[31]=c->f[1]; // 801C1634
  c->r[4]=0u+0x00000008u; // 801C1638
  c->lr=0x801C1640u; f_8011B718(c); // 801C163C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1640
  if (crb(c,2)) { goto L_801C1650; } // 801C1644
  c->f[1]=c->f[31]; // 801C1648
  c->lr=0x801C1650u; f_801C0F9C(c); // 801C164C
L_801C1650:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1650
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1654
  c->lr=c->r[0]; // 801C1658
  c->r[1]=c->r[1]+0x00000010u; // 801C165C
  return; // 801C1660
}

// fn_801C1664
void f_801C1664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1664
  c->r[0]=c->lr; // 801C1668
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C166C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1670
  c->r[31]=c->r[4]|c->r[4]; // 801C1674
  c->r[4]=0u+0x00000008u; // 801C1678
  c->lr=0x801C1680u; f_8011B718(c); // 801C167C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1680
  if (crb(c,2)) { goto L_801C1690; } // 801C1684
  c->r[4]=c->r[31]|c->r[31]; // 801C1688
  c->lr=0x801C1690u; f_801C0FA4(c); // 801C168C
L_801C1690:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1690
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1694
  c->lr=c->r[0]; // 801C1698
  c->r[1]=c->r[1]+0x00000010u; // 801C169C
  return; // 801C16A0
}

// fn_801C16A4
void f_801C16A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C16A4
  c->r[0]=c->lr; // 801C16A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C16AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C16B0
  c->f[31]=c->f[1]; // 801C16B4
  c->r[4]=0u+0x00000008u; // 801C16B8
  c->lr=0x801C16C0u; f_8011B718(c); // 801C16BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C16C0
  if (crb(c,2)) { goto L_801C16D0; } // 801C16C4
  c->f[1]=c->f[31]; // 801C16C8
  c->lr=0x801C16D0u; f_801C0FAC(c); // 801C16CC
L_801C16D0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C16D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C16D4
  c->lr=c->r[0]; // 801C16D8
  c->r[1]=c->r[1]+0x00000010u; // 801C16DC
  return; // 801C16E0
}

// fn_801C16E4
void f_801C16E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C16E4
  c->r[0]=c->lr; // 801C16E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C16EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C16F0
  c->r[31]=c->r[4]|c->r[4]; // 801C16F4
  c->r[4]=0u+0x00000008u; // 801C16F8
  c->lr=0x801C1700u; f_8011B718(c); // 801C16FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1700
  if (crb(c,2)) { goto L_801C1710; } // 801C1704
  c->r[4]=c->r[31]|c->r[31]; // 801C1708
  c->lr=0x801C1710u; f_801C0FDC(c); // 801C170C
L_801C1710:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1710
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1714
  c->lr=c->r[0]; // 801C1718
  c->r[1]=c->r[1]+0x00000010u; // 801C171C
  return; // 801C1720
}

// fn_801C1724
void f_801C1724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1724
  c->r[0]=c->lr; // 801C1728
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C172C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1730
  c->f[31]=c->f[1]; // 801C1734
  c->r[4]=0u+0x00000008u; // 801C1738
  c->lr=0x801C1740u; f_8011B718(c); // 801C173C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1740
  if (crb(c,2)) { goto L_801C1750; } // 801C1744
  c->f[1]=c->f[31]; // 801C1748
  c->lr=0x801C1750u; f_801C0FE4(c); // 801C174C
L_801C1750:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1750
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1754
  c->lr=c->r[0]; // 801C1758
  c->r[1]=c->r[1]+0x00000010u; // 801C175C
  return; // 801C1760
}

// fn_801C1764
void f_801C1764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1764
  c->r[0]=c->lr; // 801C1768
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C176C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1770
  c->f[31]=c->f[1]; // 801C1774
  c->r[4]=0u+0x00000008u; // 801C1778
  c->lr=0x801C1780u; f_8011B718(c); // 801C177C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1780
  if (crb(c,2)) { goto L_801C1790; } // 801C1784
  c->f[1]=c->f[31]; // 801C1788
  c->lr=0x801C1790u; f_801C1004(c); // 801C178C
L_801C1790:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1790
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1794
  c->lr=c->r[0]; // 801C1798
  c->r[1]=c->r[1]+0x00000010u; // 801C179C
  return; // 801C17A0
}

// fn_801C17A4
void f_801C17A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C17A4
  c->r[0]=c->lr; // 801C17A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C17AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C17B0
  c->r[31]=c->r[4]|c->r[4]; // 801C17B4
  c->r[4]=0u+0x00000008u; // 801C17B8
  c->lr=0x801C17C0u; f_8011B718(c); // 801C17BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C17C0
  if (crb(c,2)) { goto L_801C17D0; } // 801C17C4
  c->r[4]=c->r[31]|c->r[31]; // 801C17C8
  c->lr=0x801C17D0u; f_801C100C(c); // 801C17CC
L_801C17D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C17D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C17D4
  c->lr=c->r[0]; // 801C17D8
  c->r[1]=c->r[1]+0x00000010u; // 801C17DC
  return; // 801C17E0
}

// fn_801C17E4
void f_801C17E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C17E4
  c->r[0]=c->lr; // 801C17E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C17EC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C17F0
  c->f[31]=c->f[1]; // 801C17F4
  c->r[4]=0u+0x00000008u; // 801C17F8
  c->lr=0x801C1800u; f_8011B718(c); // 801C17FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1800
  if (crb(c,2)) { goto L_801C1810; } // 801C1804
  c->f[1]=c->f[31]; // 801C1808
  c->lr=0x801C1810u; f_801C1014(c); // 801C180C
L_801C1810:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1810
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1814
  c->lr=c->r[0]; // 801C1818
  c->r[1]=c->r[1]+0x00000010u; // 801C181C
  return; // 801C1820
}

// fn_801C1824
void f_801C1824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1824
  c->r[0]=c->lr; // 801C1828
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C182C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1830
  c->f[31]=c->f[1]; // 801C1834
  c->r[4]=0u+0x00000008u; // 801C1838
  c->lr=0x801C1840u; f_8011B718(c); // 801C183C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1840
  if (crb(c,2)) { goto L_801C1850; } // 801C1844
  c->f[1]=c->f[31]; // 801C1848
  c->lr=0x801C1850u; f_801C1044(c); // 801C184C
L_801C1850:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1850
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1854
  c->lr=c->r[0]; // 801C1858
  c->r[1]=c->r[1]+0x00000010u; // 801C185C
  return; // 801C1860
}

// fn_801C1864
void f_801C1864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1864
  c->r[0]=c->lr; // 801C1868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C186C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1870
  c->r[31]=c->r[4]|c->r[4]; // 801C1874
  c->r[4]=0u+0x00000008u; // 801C1878
  c->lr=0x801C1880u; f_8011B718(c); // 801C187C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1880
  if (crb(c,2)) { goto L_801C1890; } // 801C1884
  c->r[4]=c->r[31]|c->r[31]; // 801C1888
  c->lr=0x801C1890u; f_801C104C(c); // 801C188C
L_801C1890:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1890
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1894
  c->lr=c->r[0]; // 801C1898
  c->r[1]=c->r[1]+0x00000010u; // 801C189C
  return; // 801C18A0
}

// fn_801C18A4
void f_801C18A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C18A4
  c->r[0]=c->lr; // 801C18A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C18AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C18B0
  c->f[31]=c->f[1]; // 801C18B4
  c->r[4]=0u+0x00000008u; // 801C18B8
  c->lr=0x801C18C0u; f_8011B718(c); // 801C18BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C18C0
  if (crb(c,2)) { goto L_801C18D0; } // 801C18C4
  c->f[1]=c->f[31]; // 801C18C8
  c->lr=0x801C18D0u; f_801C1054(c); // 801C18CC
L_801C18D0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C18D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C18D4
  c->lr=c->r[0]; // 801C18D8
  c->r[1]=c->r[1]+0x00000010u; // 801C18DC
  return; // 801C18E0
}

// fn_801C18E4
void f_801C18E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C18E4
  c->r[0]=c->lr; // 801C18E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C18EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C18F0
  c->r[31]=c->r[4]|c->r[4]; // 801C18F4
  c->r[4]=0u+0x00000008u; // 801C18F8
  c->lr=0x801C1900u; f_8011B718(c); // 801C18FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1900
  if (crb(c,2)) { goto L_801C1910; } // 801C1904
  c->r[4]=c->r[31]|c->r[31]; // 801C1908
  c->lr=0x801C1910u; f_801C1084(c); // 801C190C
L_801C1910:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1910
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1914
  c->lr=c->r[0]; // 801C1918
  c->r[1]=c->r[1]+0x00000010u; // 801C191C
  return; // 801C1920
}

// fn_801C1924
void f_801C1924(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1924
  c->r[0]=c->lr; // 801C1928
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C192C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1930
  c->f[31]=c->f[1]; // 801C1934
  c->r[4]=0u+0x00000008u; // 801C1938
  c->lr=0x801C1940u; f_8011B718(c); // 801C193C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1940
  if (crb(c,2)) { goto L_801C1950; } // 801C1944
  c->f[1]=c->f[31]; // 801C1948
  c->lr=0x801C1950u; f_801C108C(c); // 801C194C
L_801C1950:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1950
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1954
  c->lr=c->r[0]; // 801C1958
  c->r[1]=c->r[1]+0x00000010u; // 801C195C
  return; // 801C1960
}

// fn_801C1964
void f_801C1964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1964
  c->r[0]=c->lr; // 801C1968
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C196C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1970
  c->r[31]=c->r[4]|c->r[4]; // 801C1974
  c->r[4]=0u+0x00000008u; // 801C1978
  c->lr=0x801C1980u; f_8011B718(c); // 801C197C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1980
  if (crb(c,2)) { goto L_801C1990; } // 801C1984
  c->r[4]=c->r[31]|c->r[31]; // 801C1988
  c->lr=0x801C1990u; f_801C10AC(c); // 801C198C
L_801C1990:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1990
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1994
  c->lr=c->r[0]; // 801C1998
  c->r[1]=c->r[1]+0x00000010u; // 801C199C
  return; // 801C19A0
}

// fn_801C19A4
void f_801C19A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C19A4
  c->r[0]=c->lr; // 801C19A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C19AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C19B0
  c->f[31]=c->f[1]; // 801C19B4
  c->r[4]=0u+0x00000008u; // 801C19B8
  c->lr=0x801C19C0u; f_8011B718(c); // 801C19BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C19C0
  if (crb(c,2)) { goto L_801C19D0; } // 801C19C4
  c->f[1]=c->f[31]; // 801C19C8
  c->lr=0x801C19D0u; f_801C10B4(c); // 801C19CC
L_801C19D0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C19D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C19D4
  c->lr=c->r[0]; // 801C19D8
  c->r[1]=c->r[1]+0x00000010u; // 801C19DC
  return; // 801C19E0
}

// fn_801C19E4
void f_801C19E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C19E4
  c->r[0]=c->lr; // 801C19E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C19EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C19F0
  c->r[31]=c->r[4]|c->r[4]; // 801C19F4
  c->r[4]=0u+0x00000008u; // 801C19F8
  c->lr=0x801C1A00u; f_8011B718(c); // 801C19FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1A00
  if (crb(c,2)) { goto L_801C1A10; } // 801C1A04
  c->r[4]=c->r[31]|c->r[31]; // 801C1A08
  c->lr=0x801C1A10u; f_801C10D4(c); // 801C1A0C
L_801C1A10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1A10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1A14
  c->lr=c->r[0]; // 801C1A18
  c->r[1]=c->r[1]+0x00000010u; // 801C1A1C
  return; // 801C1A20
}

// fn_801C1A24
void f_801C1A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A24
  c->r[0]=c->lr; // 801C1A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1A2C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1A30
  c->f[31]=c->f[1]; // 801C1A34
  c->r[4]=0u+0x00000008u; // 801C1A38
  c->lr=0x801C1A40u; f_8011B718(c); // 801C1A3C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1A40
  if (crb(c,2)) { goto L_801C1A50; } // 801C1A44
  c->f[1]=c->f[31]; // 801C1A48
  c->lr=0x801C1A50u; f_801C10DC(c); // 801C1A4C
L_801C1A50:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1A54
  c->lr=c->r[0]; // 801C1A58
  c->r[1]=c->r[1]+0x00000010u; // 801C1A5C
  return; // 801C1A60
}

// fn_801C1A64
void f_801C1A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A64
  c->r[0]=c->lr; // 801C1A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1A6C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1A70
  c->f[31]=c->f[1]; // 801C1A74
  c->r[4]=0u+0x00000008u; // 801C1A78
  c->lr=0x801C1A80u; f_8011B718(c); // 801C1A7C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1A80
  if (crb(c,2)) { goto L_801C1A90; } // 801C1A84
  c->f[1]=c->f[31]; // 801C1A88
  c->lr=0x801C1A90u; f_801C10FC(c); // 801C1A8C
L_801C1A90:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1A90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1A94
  c->lr=c->r[0]; // 801C1A98
  c->r[1]=c->r[1]+0x00000010u; // 801C1A9C
  return; // 801C1AA0
}

// fn_801C1AA4
void f_801C1AA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1AA4
  c->r[0]=c->lr; // 801C1AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1AAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1AB0
  c->r[31]=c->r[4]|c->r[4]; // 801C1AB4
  c->r[4]=0u+0x00000008u; // 801C1AB8
  c->lr=0x801C1AC0u; f_8011B718(c); // 801C1ABC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1AC0
  if (crb(c,2)) { goto L_801C1AD0; } // 801C1AC4
  c->r[4]=c->r[31]|c->r[31]; // 801C1AC8
  c->lr=0x801C1AD0u; f_801C110C(c); // 801C1ACC
L_801C1AD0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1AD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1AD4
  c->lr=c->r[0]; // 801C1AD8
  c->r[1]=c->r[1]+0x00000010u; // 801C1ADC
  return; // 801C1AE0
}

// fn_801C1AE4
void f_801C1AE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1AE4
  c->r[0]=c->lr; // 801C1AE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1AEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1AF0
  c->r[31]=c->r[4]|c->r[4]; // 801C1AF4
  c->r[4]=0u+0x00000008u; // 801C1AF8
  c->lr=0x801C1B00u; f_8011B718(c); // 801C1AFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1B00
  if (crb(c,2)) { goto L_801C1B10; } // 801C1B04
  c->r[4]=c->r[31]|c->r[31]; // 801C1B08
  c->lr=0x801C1B10u; f_801C1124(c); // 801C1B0C
L_801C1B10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1B14
  c->lr=c->r[0]; // 801C1B18
  c->r[1]=c->r[1]+0x00000010u; // 801C1B1C
  return; // 801C1B20
}

// fn_801C1B24
void f_801C1B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B24
  c->r[0]=c->lr; // 801C1B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1B30
  c->r[31]=c->r[3]|c->r[3]; // 801C1B34
  c->lr=0x801C1B3Cu; f_8011B41C(c); // 801C1B38
  c->r[4]=c->r[31]|c->r[31]; // 801C1B3C
  c->lr=0x801C1B44u; f_801C1264(c); // 801C1B40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1B44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1B48
  c->lr=c->r[0]; // 801C1B4C
  c->r[1]=c->r[1]+0x00000010u; // 801C1B50
  return; // 801C1B54
}

// fn_801C1B58
void f_801C1B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B58
  c->r[0]=c->lr; // 801C1B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1B60
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1B64
  c->f[31]=c->f[1]; // 801C1B68
  c->lr=0x801C1B70u; f_8011B41C(c); // 801C1B6C
  c->f[1]=c->f[31]; // 801C1B70
  c->lr=0x801C1B78u; f_801C12A4(c); // 801C1B74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1B78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1B7C
  c->lr=c->r[0]; // 801C1B80
  c->r[1]=c->r[1]+0x00000010u; // 801C1B84
  return; // 801C1B88
}

// fn_801C1B8C
void f_801C1B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B8C
  c->r[0]=c->lr; // 801C1B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1B98
  c->r[31]=c->r[3]|c->r[3]; // 801C1B9C
  c->lr=0x801C1BA4u; f_8011B41C(c); // 801C1BA0
  c->r[4]=c->r[31]|c->r[31]; // 801C1BA4
  c->lr=0x801C1BACu; f_801C12E4(c); // 801C1BA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1BAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1BB0
  c->lr=c->r[0]; // 801C1BB4
  c->r[1]=c->r[1]+0x00000010u; // 801C1BB8
  return; // 801C1BBC
}

// fn_801C1BC0
void f_801C1BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1BC0
  c->r[0]=c->lr; // 801C1BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1BC8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1BCC
  c->f[31]=c->f[1]; // 801C1BD0
  c->lr=0x801C1BD8u; f_8011B41C(c); // 801C1BD4
  c->f[1]=c->f[31]; // 801C1BD8
  c->lr=0x801C1BE0u; f_801C1324(c); // 801C1BDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1BE4
  c->lr=c->r[0]; // 801C1BE8
  c->r[1]=c->r[1]+0x00000010u; // 801C1BEC
  return; // 801C1BF0
}

// fn_801C1BF4
void f_801C1BF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1BF4
  c->r[0]=c->lr; // 801C1BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1BFC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1C00
  c->f[31]=c->f[1]; // 801C1C04
  c->lr=0x801C1C0Cu; f_8011B41C(c); // 801C1C08
  c->f[1]=c->f[31]; // 801C1C0C
  c->lr=0x801C1C14u; f_801C1364(c); // 801C1C10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1C14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1C18
  c->lr=c->r[0]; // 801C1C1C
  c->r[1]=c->r[1]+0x00000010u; // 801C1C20
  return; // 801C1C24
}

// fn_801C1C28
void f_801C1C28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C28
  c->r[0]=c->lr; // 801C1C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1C30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1C34
  c->r[31]=c->r[3]|c->r[3]; // 801C1C38
  c->lr=0x801C1C40u; f_8011B41C(c); // 801C1C3C
  c->r[4]=c->r[31]|c->r[31]; // 801C1C40
  c->lr=0x801C1C48u; f_801C13A4(c); // 801C1C44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1C48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1C4C
  c->lr=c->r[0]; // 801C1C50
  c->r[1]=c->r[1]+0x00000010u; // 801C1C54
  return; // 801C1C58
}

// fn_801C1C5C
void f_801C1C5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C5C
  c->r[0]=c->lr; // 801C1C60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1C64
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1C68
  c->f[31]=c->f[1]; // 801C1C6C
  c->lr=0x801C1C74u; f_8011B41C(c); // 801C1C70
  c->f[1]=c->f[31]; // 801C1C74
  c->lr=0x801C1C7Cu; f_801C13E4(c); // 801C1C78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1C80
  c->lr=c->r[0]; // 801C1C84
  c->r[1]=c->r[1]+0x00000010u; // 801C1C88
  return; // 801C1C8C
}

// fn_801C1C90
void f_801C1C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C90
  c->r[0]=c->lr; // 801C1C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1C98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1C9C
  c->r[31]=c->r[3]|c->r[3]; // 801C1CA0
  c->lr=0x801C1CA8u; f_8011B41C(c); // 801C1CA4
  c->r[4]=c->r[31]|c->r[31]; // 801C1CA8
  c->lr=0x801C1CB0u; f_801C1424(c); // 801C1CAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1CB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1CB4
  c->lr=c->r[0]; // 801C1CB8
  c->r[1]=c->r[1]+0x00000010u; // 801C1CBC
  return; // 801C1CC0
}

// fn_801C1CC4
void f_801C1CC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1CC4
  c->r[0]=c->lr; // 801C1CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1CCC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1CD0
  c->f[31]=c->f[1]; // 801C1CD4
  c->lr=0x801C1CDCu; f_8011B41C(c); // 801C1CD8
  c->f[1]=c->f[31]; // 801C1CDC
  c->lr=0x801C1CE4u; f_801C1464(c); // 801C1CE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1CE8
  c->lr=c->r[0]; // 801C1CEC
  c->r[1]=c->r[1]+0x00000010u; // 801C1CF0
  return; // 801C1CF4
}

// fn_801C1CF8
void f_801C1CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1CF8
  c->r[0]=c->lr; // 801C1CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1D00
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1D04
  c->f[31]=c->f[1]; // 801C1D08
  c->lr=0x801C1D10u; f_8011B41C(c); // 801C1D0C
  c->f[1]=c->f[31]; // 801C1D10
  c->lr=0x801C1D18u; f_801C14A4(c); // 801C1D14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1D1C
  c->lr=c->r[0]; // 801C1D20
  c->r[1]=c->r[1]+0x00000010u; // 801C1D24
  return; // 801C1D28
}

// fn_801C1D2C
void f_801C1D2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1D2C
  c->r[0]=c->lr; // 801C1D30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1D34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1D38
  c->r[31]=c->r[3]|c->r[3]; // 801C1D3C
  c->lr=0x801C1D44u; f_8011B41C(c); // 801C1D40
  c->r[4]=c->r[31]|c->r[31]; // 801C1D44
  c->lr=0x801C1D4Cu; f_801C14E4(c); // 801C1D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1D50
  c->lr=c->r[0]; // 801C1D54
  c->r[1]=c->r[1]+0x00000010u; // 801C1D58
  return; // 801C1D5C
}

// fn_801C1D60
void f_801C1D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1D60
  c->r[0]=c->lr; // 801C1D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1D68
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1D6C
  c->f[31]=c->f[1]; // 801C1D70
  c->lr=0x801C1D78u; f_8011B41C(c); // 801C1D74
  c->f[1]=c->f[31]; // 801C1D78
  c->lr=0x801C1D80u; f_801C1524(c); // 801C1D7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1D84
  c->lr=c->r[0]; // 801C1D88
  c->r[1]=c->r[1]+0x00000010u; // 801C1D8C
  return; // 801C1D90
}

// fn_801C1D94
void f_801C1D94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1D94
  c->r[0]=c->lr; // 801C1D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1D9C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1DA0
  c->f[31]=c->f[1]; // 801C1DA4
  c->lr=0x801C1DACu; f_8011B41C(c); // 801C1DA8
  c->f[1]=c->f[31]; // 801C1DAC
  c->lr=0x801C1DB4u; f_801C1564(c); // 801C1DB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1DB8
  c->lr=c->r[0]; // 801C1DBC
  c->r[1]=c->r[1]+0x00000010u; // 801C1DC0
  return; // 801C1DC4
}

// fn_801C1DC8
void f_801C1DC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1DC8
  c->r[0]=c->lr; // 801C1DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1DD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1DD4
  c->r[31]=c->r[3]|c->r[3]; // 801C1DD8
  c->lr=0x801C1DE0u; f_8011B41C(c); // 801C1DDC
  c->r[4]=c->r[31]|c->r[31]; // 801C1DE0
  c->lr=0x801C1DE8u; f_801C15A4(c); // 801C1DE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1DE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1DEC
  c->lr=c->r[0]; // 801C1DF0
  c->r[1]=c->r[1]+0x00000010u; // 801C1DF4
  return; // 801C1DF8
}

// fn_801C1DFC
void f_801C1DFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1DFC
  c->r[0]=c->lr; // 801C1E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1E04
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1E08
  c->f[31]=c->f[1]; // 801C1E0C
  c->lr=0x801C1E14u; f_8011B41C(c); // 801C1E10
  c->f[1]=c->f[31]; // 801C1E14
  c->lr=0x801C1E1Cu; f_801C15E4(c); // 801C1E18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1E20
  c->lr=c->r[0]; // 801C1E24
  c->r[1]=c->r[1]+0x00000010u; // 801C1E28
  return; // 801C1E2C
}

// fn_801C1E30
void f_801C1E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1E30
  c->r[0]=c->lr; // 801C1E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1E38
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1E3C
  c->f[31]=c->f[1]; // 801C1E40
  c->lr=0x801C1E48u; f_8011B41C(c); // 801C1E44
  c->f[1]=c->f[31]; // 801C1E48
  c->lr=0x801C1E50u; f_801C1624(c); // 801C1E4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1E50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1E54
  c->lr=c->r[0]; // 801C1E58
  c->r[1]=c->r[1]+0x00000010u; // 801C1E5C
  return; // 801C1E60
}

// fn_801C1E64
void f_801C1E64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1E64
  c->r[0]=c->lr; // 801C1E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1E6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1E70
  c->r[31]=c->r[3]|c->r[3]; // 801C1E74
  c->lr=0x801C1E7Cu; f_8011B41C(c); // 801C1E78
  c->r[4]=c->r[31]|c->r[31]; // 801C1E7C
  c->lr=0x801C1E84u; f_801C1664(c); // 801C1E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1E88
  c->lr=c->r[0]; // 801C1E8C
  c->r[1]=c->r[1]+0x00000010u; // 801C1E90
  return; // 801C1E94
}

// fn_801C1E98
void f_801C1E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1E98
  c->r[0]=c->lr; // 801C1E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1EA0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1EA4
  c->f[31]=c->f[1]; // 801C1EA8
  c->lr=0x801C1EB0u; f_8011B41C(c); // 801C1EAC
  c->f[1]=c->f[31]; // 801C1EB0
  c->lr=0x801C1EB8u; f_801C16A4(c); // 801C1EB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1EB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1EBC
  c->lr=c->r[0]; // 801C1EC0
  c->r[1]=c->r[1]+0x00000010u; // 801C1EC4
  return; // 801C1EC8
}

// fn_801C1ECC
void f_801C1ECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1ECC
  c->r[0]=c->lr; // 801C1ED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1ED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1ED8
  c->r[31]=c->r[3]|c->r[3]; // 801C1EDC
  c->lr=0x801C1EE4u; f_8011B41C(c); // 801C1EE0
  c->r[4]=c->r[31]|c->r[31]; // 801C1EE4
  c->lr=0x801C1EECu; f_801C16E4(c); // 801C1EE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1EF0
  c->lr=c->r[0]; // 801C1EF4
  c->r[1]=c->r[1]+0x00000010u; // 801C1EF8
  return; // 801C1EFC
}

// fn_801C1F00
void f_801C1F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F00
  c->r[0]=c->lr; // 801C1F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1F08
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1F0C
  c->f[31]=c->f[1]; // 801C1F10
  c->lr=0x801C1F18u; f_8011B41C(c); // 801C1F14
  c->f[1]=c->f[31]; // 801C1F18
  c->lr=0x801C1F20u; f_801C1724(c); // 801C1F1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1F20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1F24
  c->lr=c->r[0]; // 801C1F28
  c->r[1]=c->r[1]+0x00000010u; // 801C1F2C
  return; // 801C1F30
}

// fn_801C1F34
void f_801C1F34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F34
  c->r[0]=c->lr; // 801C1F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1F3C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1F40
  c->f[31]=c->f[1]; // 801C1F44
  c->lr=0x801C1F4Cu; f_8011B41C(c); // 801C1F48
  c->f[1]=c->f[31]; // 801C1F4C
  c->lr=0x801C1F54u; f_801C1764(c); // 801C1F50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1F58
  c->lr=c->r[0]; // 801C1F5C
  c->r[1]=c->r[1]+0x00000010u; // 801C1F60
  return; // 801C1F64
}

// fn_801C1F68
void f_801C1F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F68
  c->r[0]=c->lr; // 801C1F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1F74
  c->r[31]=c->r[3]|c->r[3]; // 801C1F78
  c->lr=0x801C1F80u; f_8011B41C(c); // 801C1F7C
  c->r[4]=c->r[31]|c->r[31]; // 801C1F80
  c->lr=0x801C1F88u; f_801C17A4(c); // 801C1F84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1F8C
  c->lr=c->r[0]; // 801C1F90
  c->r[1]=c->r[1]+0x00000010u; // 801C1F94
  return; // 801C1F98
}

// fn_801C1F9C
void f_801C1F9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F9C
  c->r[0]=c->lr; // 801C1FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1FA4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1FA8
  c->f[31]=c->f[1]; // 801C1FAC
  c->lr=0x801C1FB4u; f_8011B41C(c); // 801C1FB0
  c->f[1]=c->f[31]; // 801C1FB4
  c->lr=0x801C1FBCu; f_801C17E4(c); // 801C1FB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1FBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1FC0
  c->lr=c->r[0]; // 801C1FC4
  c->r[1]=c->r[1]+0x00000010u; // 801C1FC8
  return; // 801C1FCC
}

// fn_801C1FD0
void f_801C1FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1FD0
  c->r[0]=c->lr; // 801C1FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1FD8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C1FDC
  c->f[31]=c->f[1]; // 801C1FE0
  c->lr=0x801C1FE8u; f_8011B41C(c); // 801C1FE4
  c->f[1]=c->f[31]; // 801C1FE8
  c->lr=0x801C1FF0u; f_801C1824(c); // 801C1FEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C1FF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1FF4
  c->lr=c->r[0]; // 801C1FF8
  c->r[1]=c->r[1]+0x00000010u; // 801C1FFC
  return; // 801C2000
}

// fn_801C2004
void f_801C2004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2004
  c->r[0]=c->lr; // 801C2008
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C200C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2010
  c->r[31]=c->r[3]|c->r[3]; // 801C2014
  c->lr=0x801C201Cu; f_8011B41C(c); // 801C2018
  c->r[4]=c->r[31]|c->r[31]; // 801C201C
  c->lr=0x801C2024u; f_801C1864(c); // 801C2020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2024
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2028
  c->lr=c->r[0]; // 801C202C
  c->r[1]=c->r[1]+0x00000010u; // 801C2030
  return; // 801C2034
}

// fn_801C2038
void f_801C2038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2038
  c->r[0]=c->lr; // 801C203C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2040
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C2044
  c->f[31]=c->f[1]; // 801C2048
  c->lr=0x801C2050u; f_8011B41C(c); // 801C204C
  c->f[1]=c->f[31]; // 801C2050
  c->lr=0x801C2058u; f_801C18A4(c); // 801C2054
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C2058
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C205C
  c->lr=c->r[0]; // 801C2060
  c->r[1]=c->r[1]+0x00000010u; // 801C2064
  return; // 801C2068
}

// fn_801C206C
void f_801C206C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C206C
  c->r[0]=c->lr; // 801C2070
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2078
  c->r[31]=c->r[3]|c->r[3]; // 801C207C
  c->lr=0x801C2084u; f_8011B41C(c); // 801C2080
  c->r[4]=c->r[31]|c->r[31]; // 801C2084
  c->lr=0x801C208Cu; f_801C18E4(c); // 801C2088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C208C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2090
  c->lr=c->r[0]; // 801C2094
  c->r[1]=c->r[1]+0x00000010u; // 801C2098
  return; // 801C209C
}

// fn_801C20A0
void f_801C20A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C20A0
  c->r[0]=c->lr; // 801C20A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C20A8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C20AC
  c->f[31]=c->f[1]; // 801C20B0
  c->lr=0x801C20B8u; f_8011B41C(c); // 801C20B4
  c->f[1]=c->f[31]; // 801C20B8
  c->lr=0x801C20C0u; f_801C1924(c); // 801C20BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C20C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C20C4
  c->lr=c->r[0]; // 801C20C8
  c->r[1]=c->r[1]+0x00000010u; // 801C20CC
  return; // 801C20D0
}

// fn_801C20D4
void f_801C20D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C20D4
  c->r[0]=c->lr; // 801C20D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C20DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C20E0
  c->r[31]=c->r[3]|c->r[3]; // 801C20E4
  c->lr=0x801C20ECu; f_8011B41C(c); // 801C20E8
  c->r[4]=c->r[31]|c->r[31]; // 801C20EC
  c->lr=0x801C20F4u; f_801C1964(c); // 801C20F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C20F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C20F8
  c->lr=c->r[0]; // 801C20FC
  c->r[1]=c->r[1]+0x00000010u; // 801C2100
  return; // 801C2104
}

// fn_801C2108
void f_801C2108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2108
  c->r[0]=c->lr; // 801C210C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2110
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C2114
  c->f[31]=c->f[1]; // 801C2118
  c->lr=0x801C2120u; f_8011B41C(c); // 801C211C
  c->f[1]=c->f[31]; // 801C2120
  c->lr=0x801C2128u; f_801C19A4(c); // 801C2124
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C2128
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C212C
  c->lr=c->r[0]; // 801C2130
  c->r[1]=c->r[1]+0x00000010u; // 801C2134
  return; // 801C2138
}

// fn_801C213C
void f_801C213C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C213C
  c->r[0]=c->lr; // 801C2140
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2148
  c->r[31]=c->r[3]|c->r[3]; // 801C214C
  c->lr=0x801C2154u; f_8011B41C(c); // 801C2150
  c->r[4]=c->r[31]|c->r[31]; // 801C2154
  c->lr=0x801C215Cu; f_801C19E4(c); // 801C2158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C215C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2160
  c->lr=c->r[0]; // 801C2164
  c->r[1]=c->r[1]+0x00000010u; // 801C2168
  return; // 801C216C
}

// fn_801C2170
void f_801C2170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2170
  c->r[0]=c->lr; // 801C2174
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2178
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C217C
  c->f[31]=c->f[1]; // 801C2180
  c->lr=0x801C2188u; f_8011B41C(c); // 801C2184
  c->f[1]=c->f[31]; // 801C2188
  c->lr=0x801C2190u; f_801C1A24(c); // 801C218C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C2190
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2194
  c->lr=c->r[0]; // 801C2198
  c->r[1]=c->r[1]+0x00000010u; // 801C219C
  return; // 801C21A0
}

// fn_801C21A4
void f_801C21A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C21A4
  c->r[0]=c->lr; // 801C21A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C21AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801C21B0
  c->f[31]=c->f[1]; // 801C21B4
  c->lr=0x801C21BCu; f_8011B41C(c); // 801C21B8
  c->f[1]=c->f[31]; // 801C21BC
  c->lr=0x801C21C4u; f_801C1A64(c); // 801C21C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801C21C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C21C8
  c->lr=c->r[0]; // 801C21CC
  c->r[1]=c->r[1]+0x00000010u; // 801C21D0
  return; // 801C21D4
}

// fn_801C21D8
void f_801C21D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C21D8
  c->r[0]=c->lr; // 801C21DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C21E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C21E4
  c->r[31]=c->r[3]|c->r[3]; // 801C21E8
  c->lr=0x801C21F0u; f_8011B41C(c); // 801C21EC
  c->r[4]=c->r[31]|c->r[31]; // 801C21F0
  c->lr=0x801C21F8u; f_801C1AA4(c); // 801C21F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C21F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C21FC
  c->lr=c->r[0]; // 801C2200
  c->r[1]=c->r[1]+0x00000010u; // 801C2204
  return; // 801C2208
}

// fn_801C220C
void f_801C220C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C220C
  c->r[0]=c->lr; // 801C2210
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2218
  c->r[31]=c->r[3]|c->r[3]; // 801C221C
  c->lr=0x801C2224u; f_8011B41C(c); // 801C2220
  c->r[4]=c->r[31]|c->r[31]; // 801C2224
  c->lr=0x801C222Cu; f_801C1AE4(c); // 801C2228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C222C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2230
  c->lr=c->r[0]; // 801C2234
  c->r[1]=c->r[1]+0x00000010u; // 801C2238
  return; // 801C223C
}

// fn_801C2240
void f_801C2240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2240
  c->r[0]=c->lr; // 801C2244
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C224C
  c->r[31]=c->r[3]|c->r[3]; // 801C2250
  c->lr=0x801C2258u; f_80130F14(c); // 801C2254
  c->r[3]=0u+0x80470000u; // 801C2258
  c->r[0]=c->r[3]+0x00002094u; // 801C225C
  W32(c->r[31]+0x00000058u,c->r[0]); // 801C2260
  c->r[3]=c->r[31]|c->r[31]; // 801C2264
  c->r[4]=0u+0x80470000u; // 801C2268
  c->r[4]=c->r[4]+0x00001B30u; // 801C226C
  c->lr=0x801C2274u; f_80131078(c); // 801C2270
  c->r[0]=0u+0x00000000u; // 801C2274
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801C2278
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801C227C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C2280
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801C2284
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801C2288
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801C228C
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2290
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 801C2294
  c->r[3]=c->r[31]|c->r[31]; // 801C2298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C229C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C22A0
  c->lr=c->r[0]; // 801C22A4
  c->r[1]=c->r[1]+0x00000010u; // 801C22A8
  return; // 801C22AC
}

// fn_801C22B0
void f_801C22B0(Ctx* __restrict c) {
  return; // 801C22B0
}

// fn_801C22B4
void f_801C22B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C22B4
  c->r[0]=c->lr; // 801C22B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C22BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C22C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C22C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C22C8
  c->r[29]=c->r[3]|c->r[3]; // 801C22CC
  c->r[3]=0u+0x00000008u; // 801C22D0
  c->lr=0x801C22D8u; f_801F1364(c); // 801C22D4
  c->r[3]=c->r[29]|c->r[29]; // 801C22D8
  c->r[4]=0u+0x00000000u; // 801C22DC
  c->lr=0x801C22E4u; f_80131168(c); // 801C22E0
  c->r[3]=c->r[29]|c->r[29]; // 801C22E4
  c->r[4]=0u+0x00000000u; // 801C22E8
  c->lr=0x801C22F0u; f_80131184(c); // 801C22EC
  c->lr=0x801C22F4u; f_80056B5C(c); // 801C22F0
  c->r[30]=c->r[3]|c->r[3]; // 801C22F4
  c->lr=0x801C22FCu; f_801F1340(c); // 801C22F8
  c->lr=0x801C2300u; f_80056B54(c); // 801C22FC
  c->r[3]=0u+0x000000CCu; // 801C2300
  c->lr=0x801C2308u; f_80047B64(c); // 801C2304
  c->r[31]=c->r[3]|c->r[3]; // 801C2308
  cmps(c,0,(int32_t)c->r[3],0); // 801C230C
  if (crb(c,2)) { goto L_801C2318; } // 801C2310
  c->lr=0x801C2318u; f_801B1D50(c); // 801C2314
L_801C2318:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801C2318
  c->r[3]=c->r[30]|c->r[30]; // 801C231C
  c->lr=0x801C2324u; f_80056B54(c); // 801C2320
  c->lr=0x801C2328u; f_80056B5C(c); // 801C2324
  c->r[30]=c->r[3]|c->r[3]; // 801C2328
  c->lr=0x801C2330u; f_801F1340(c); // 801C232C
  c->lr=0x801C2334u; f_80056B54(c); // 801C2330
  c->r[3]=0u+0x00000104u; // 801C2334
  c->lr=0x801C233Cu; f_80047B64(c); // 801C2338
  c->r[31]=c->r[3]|c->r[3]; // 801C233C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2340
  if (crb(c,2)) { goto L_801C234C; } // 801C2344
  c->lr=0x801C234Cu; f_801B3B14(c); // 801C2348
L_801C234C:;
  W32(c->r[29]+0x000000ECu,c->r[31]); // 801C234C
  c->r[3]=c->r[30]|c->r[30]; // 801C2350
  c->lr=0x801C2358u; f_80056B54(c); // 801C2354
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C2358
  c->lr=0x801C2360u; f_801B3B98(c); // 801C235C
  c->r[3]=c->r[29]|c->r[29]; // 801C2360
  c->r[4]=0u+0x00000001u; // 801C2364
  c->lr=0x801C236Cu; f_801311BC(c); // 801C2368
  c->r[3]=c->r[29]|c->r[29]; // 801C236C
  c->r[4]=0u+0x00000000u; // 801C2370
  c->lr=0x801C2378u; f_8013114C(c); // 801C2374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2378
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C237C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2380
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2384
  c->lr=c->r[0]; // 801C2388
  c->r[1]=c->r[1]+0x00000020u; // 801C238C
  return; // 801C2390
}

// fn_801C2394
void f_801C2394(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2394
  c->r[0]=c->lr; // 801C2398
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C239C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C23A0
  c->r[31]=c->r[3]|c->r[3]; // 801C23A4
  c->r[0]=0u+0x00000005u; // 801C23A8
  W32(c->r[3]+0x000000F0u,c->r[0]); // 801C23AC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C23B0
  c->r[4]=0u+0x00000000u; // 801C23B4
  c->lr=0x801C23BCu; f_801B7E44(c); // 801C23B8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C23BC
  c->lr=0x801C23C4u; f_801B6038(c); // 801C23C0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C23C4
  c->lr=0x801C23CCu; f_801B6448(c); // 801C23C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C23CC
  c->lr=0x801C23D4u; f_801B1ED4(c); // 801C23D0
  c->r[3]=c->r[31]|c->r[31]; // 801C23D4
  c->r[4]=0u+0x00000005u; // 801C23D8
  c->lr=0x801C23E0u; f_8013114C(c); // 801C23DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C23E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C23E4
  c->lr=c->r[0]; // 801C23E8
  c->r[1]=c->r[1]+0x00000010u; // 801C23EC
  return; // 801C23F0
}

// fn_801C23F4
void f_801C23F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C23F4
  c->r[0]=c->lr; // 801C23F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C23FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2400
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C2404
  c->r[30]=c->r[3]|c->r[3]; // 801C2408
  c->r[3]=0u+0x00000008u; // 801C240C
  c->lr=0x801C2414u; f_801F1364(c); // 801C2410
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C2414
  cmps(c,0,(int32_t)c->r[3],0); // 801C2418
  if (crb(c,2)) { goto L_801C2424; } // 801C241C
  c->lr=0x801C2424u; f_801B4034(c); // 801C2420
L_801C2424:;
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801C2424
  cmps(c,0,(int32_t)c->r[0],0); // 801C2428
  if (crb(c,2)) { goto L_801C245C; } // 801C242C
  c->lr=0x801C2434u; f_80056B5C(c); // 801C2430
  c->r[31]=c->r[3]|c->r[3]; // 801C2434
  c->lr=0x801C243Cu; f_801F1340(c); // 801C2438
  c->lr=0x801C2440u; f_80056B54(c); // 801C243C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C2440
  c->r[4]=0u+0x00000001u; // 801C2444
  c->lr=0x801C244Cu; f_801B1D98(c); // 801C2448
  c->r[3]=c->r[31]|c->r[31]; // 801C244C
  c->lr=0x801C2454u; f_80056B54(c); // 801C2450
  c->r[0]=0u+0x00000000u; // 801C2454
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801C2458
L_801C245C:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801C245C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2460
  if (crb(c,2)) { goto L_801C24A8; } // 801C2464
  c->lr=0x801C246Cu; f_80056B5C(c); // 801C2468
  c->r[31]=c->r[3]|c->r[3]; // 801C246C
  c->lr=0x801C2474u; f_801F1340(c); // 801C2470
  c->lr=0x801C2478u; f_80056B54(c); // 801C2474
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C2478
  cmps(c,0,(int32_t)c->r[3],0); // 801C247C
  if (crb(c,2)) { goto L_801C2498; } // 801C2480
  c->r[4]=0u+0x00000001u; // 801C2484
  c->r[12]=R32(c->r[3]+0x00000058u); // 801C2488
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C248C
  c->ctr=c->r[12]; // 801C2490
  if (true) { c->lr=0x801C2498u; dispatch(c,c->ctr); } // 801C2494
L_801C2498:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2498
  c->lr=0x801C24A0u; f_80056B54(c); // 801C249C
  c->r[0]=0u+0x00000000u; // 801C24A0
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801C24A4
L_801C24A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801C24A8
  c->r[4]=0u+0x00000071u; // 801C24AC
  c->lr=0x801C24B4u; f_8013114C(c); // 801C24B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C24B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C24B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C24BC
  c->lr=c->r[0]; // 801C24C0
  c->r[1]=c->r[1]+0x00000010u; // 801C24C4
  return; // 801C24C8
}

// fn_801C24CC
void f_801C24CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C24CC
  c->r[0]=c->lr; // 801C24D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C24D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C24D8
  c->r[31]=c->r[3]|c->r[3]; // 801C24DC
  c->r[4]=0u+0x00000001u; // 801C24E0
  c->lr=0x801C24E8u; f_80131168(c); // 801C24E4
  c->r[3]=c->r[31]|c->r[31]; // 801C24E8
  c->r[4]=0u+0x00000001u; // 801C24EC
  c->lr=0x801C24F4u; f_80131184(c); // 801C24F0
  c->r[3]=c->r[31]|c->r[31]; // 801C24F4
  c->r[4]=0u+0x00000000u; // 801C24F8
  c->lr=0x801C2500u; f_8013114C(c); // 801C24FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2500
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2504
  c->lr=c->r[0]; // 801C2508
  c->r[1]=c->r[1]+0x00000010u; // 801C250C
  return; // 801C2510
}

// fn_801C2514
void f_801C2514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2514
  c->r[0]=c->lr; // 801C2518
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C251C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2520
  c->r[31]=c->r[3]|c->r[3]; // 801C2524
  c->r[3]=0u+0x00000001u; // 801C2528
  c->lr=0x801C2530u; f_8005D714(c); // 801C252C
  {uint32_t ea=c->r[31]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2530
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801C2534
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[1]);} // 801C2538
  {uint32_t ea=c->r[2]+0xFFFF9364u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C253C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2540
  if (!crb(c,0)) { goto L_801C2558; } // 801C2544
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2548
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 801C254C
  c->r[3]=0u+0x00000001u; // 801C2550
  goto L_801C255C; // 801C2554
L_801C2558:;
  c->r[3]=0u+0x00000000u; // 801C2558
L_801C255C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C255C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2560
  c->lr=c->r[0]; // 801C2564
  c->r[1]=c->r[1]+0x00000010u; // 801C2568
  return; // 801C256C
}

// fn_801C2570
void f_801C2570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2570
  c->r[0]=c->lr; // 801C2574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C257C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C2580
  c->r[30]=c->r[3]|c->r[3]; // 801C2584
  c->r[31]=0u+0x00000000u; // 801C2588
L_801C258C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C258C
  c->r[4]=c->r[31]|c->r[31]; // 801C2590
  c->lr=0x801C2598u; f_801B3AA8(c); // 801C2594
  cmps(c,0,(int32_t)c->r[3],0); // 801C2598
  if (crb(c,2)) { goto L_801C25B0; } // 801C259C
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C25A0
  c->r[4]=c->r[31]|c->r[31]; // 801C25A4
  c->lr=0x801C25ACu; f_801B5228(c); // 801C25A8
  goto L_801C25BC; // 801C25AC
L_801C25B0:;
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C25B0
  c->r[4]=c->r[31]|c->r[31]; // 801C25B4
  c->lr=0x801C25BCu; f_801B5230(c); // 801C25B8
L_801C25BC:;
  c->r[31]=c->r[31]+0x00000001u; // 801C25BC
  cmps(c,0,(int32_t)c->r[31],3); // 801C25C0
  if (crb(c,0)) { IRQCHK(c); goto L_801C258C; } // 801C25C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C25C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C25CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C25D0
  c->lr=c->r[0]; // 801C25D4
  c->r[1]=c->r[1]+0x00000010u; // 801C25D8
  return; // 801C25DC
}

// fn_801C25E0
void f_801C25E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C25E0
  c->r[0]=c->lr; // 801C25E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C25E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C25EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C25F0
  c->r[30]=c->r[3]|c->r[3]; // 801C25F4
  c->r[31]=0u+0x00000000u; // 801C25F8
L_801C25FC:;
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C25FC
  c->r[4]=c->r[31]|c->r[31]; // 801C2600
  c->lr=0x801C2608u; f_801B5230(c); // 801C2604
  c->r[31]=c->r[31]+0x00000001u; // 801C2608
  cmps(c,0,(int32_t)c->r[31],3); // 801C260C
  if (crb(c,0)) { IRQCHK(c); goto L_801C25FC; } // 801C2610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2614
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C2618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C261C
  c->lr=c->r[0]; // 801C2620
  c->r[1]=c->r[1]+0x00000010u; // 801C2624
  return; // 801C2628
}

// fn_801C262C
void f_801C262C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C262C
  c->r[0]=c->lr; // 801C2630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2638
  c->r[31]=c->r[3]|c->r[3]; // 801C263C
  c->r[4]=0u+0x00000000u; // 801C2640
  c->lr=0x801C2648u; f_801311BC(c); // 801C2644
  c->r[3]=c->r[31]|c->r[31]; // 801C2648
  c->r[4]=0u+0x00000001u; // 801C264C
  c->lr=0x801C2654u; f_8013114C(c); // 801C2650
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2654
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2658
  c->lr=c->r[0]; // 801C265C
  c->r[1]=c->r[1]+0x00000010u; // 801C2660
  return; // 801C2664
}

// fn_801C2668
void f_801C2668(Ctx* __restrict c) {
  c->r[4]=0u+0x00000070u; // 801C2668
  f_8013114C(c); return; // 801C266C
}

// fn_801C2670
void f_801C2670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2670
  c->r[0]=c->lr; // 801C2674
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C267C
  c->r[31]=c->r[3]|c->r[3]; // 801C2680
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C2684
  cmps(c,0,(int32_t)c->r[3],0); // 801C2688
  if (crb(c,2)) { goto L_801C2694; } // 801C268C
  c->lr=0x801C2694u; f_801B3AAC(c); // 801C2690
L_801C2694:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2694
  c->r[4]=0u+0x00000002u; // 801C2698
  c->lr=0x801C26A0u; f_8013114C(c); // 801C269C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C26A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C26A4
  c->lr=c->r[0]; // 801C26A8
  c->r[1]=c->r[1]+0x00000010u; // 801C26AC
  return; // 801C26B0
}

// fn_801C26B4
void f_801C26B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C26B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C26B8
  if (crb(c,2)) { goto L_801C26C4; } // 801C26BC
  f_801B1EC4(c); return; // 801C26C0
L_801C26C4:;
  c->r[3]=0u+0x00000001u; // 801C26C4
  return; // 801C26C8
}

// fn_801C26CC
void f_801C26CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C26CC
  c->r[0]=c->lr; // 801C26D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C26D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C26D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C26DC
  c->r[30]=c->r[3]|c->r[3]; // 801C26E0
  c->r[31]=c->r[4]|c->r[4]; // 801C26E4
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801C26E8
  cmps(c,0,(int32_t)c->r[0],0); // 801C26EC
  if (crb(c,2)) { goto L_801C2734; } // 801C26F0
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C26F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C26F8
  if (crb(c,2)) { goto L_801C2734; } // 801C26FC
  cmps(c,0,(int32_t)c->r[5],0); // 801C2700
  if (!crb(c,2)) { goto L_801C2720; } // 801C2704
  c->lr=0x801C270Cu; f_801B5228(c); // 801C2708
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C270C
  c->r[4]=c->r[31]|c->r[31]; // 801C2710
  c->r[5]=0u+0x00000001u; // 801C2714
  c->lr=0x801C271Cu; f_801B3A98(c); // 801C2718
  goto L_801C2734; // 801C271C
L_801C2720:;
  c->lr=0x801C2724u; f_801B5230(c); // 801C2720
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C2724
  c->r[4]=c->r[31]|c->r[31]; // 801C2728
  c->r[5]=0u+0x00000000u; // 801C272C
  c->lr=0x801C2734u; f_801B3A98(c); // 801C2730
L_801C2734:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2734
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C2738
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C273C
  c->lr=c->r[0]; // 801C2740
  c->r[1]=c->r[1]+0x00000010u; // 801C2744
  return; // 801C2748
}

// fn_801C274C
void f_801C274C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C274C
  c->r[0]=c->lr; // 801C2750
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2754
  c->lr=0x801C275Cu; f_8011C12C(c); // 801C2758
  c->r[4]=0u+0x00000008u; // 801C275C
  c->lr=0x801C2764u; f_8011CFF4(c); // 801C2760
  c->r[12]=R32(c->r[3]+0x00000058u); // 801C2764
  c->r[12]=R32(c->r[12]+0x00000048u); // 801C2768
  c->ctr=c->r[12]; // 801C276C
  if (true) { c->lr=0x801C2774u; dispatch(c,c->ctr); } // 801C2770
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2774
  c->lr=c->r[0]; // 801C2778
  c->r[1]=c->r[1]+0x00000010u; // 801C277C
  return; // 801C2780
}

// fn_801C2784
void f_801C2784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2784
  c->r[0]=c->lr; // 801C2788
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C278C
  c->lr=0x801C2794u; f_8011C12C(c); // 801C2790
  c->r[4]=0u+0x00000008u; // 801C2794
  c->lr=0x801C279Cu; f_8011CFF4(c); // 801C2798
  c->lr=0x801C27A0u; f_801C26B4(c); // 801C279C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C27A0
  c->lr=c->r[0]; // 801C27A4
  c->r[1]=c->r[1]+0x00000010u; // 801C27A8
  return; // 801C27AC
}

// fn_801C27B0
void f_801C27B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C27B0
  c->r[0]=c->lr; // 801C27B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C27B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C27BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C27C0
  c->r[30]=c->r[3]|c->r[3]; // 801C27C4
  c->r[31]=c->r[4]|c->r[4]; // 801C27C8
  c->lr=0x801C27D0u; f_8011C12C(c); // 801C27CC
  c->r[4]=0u+0x00000008u; // 801C27D0
  c->lr=0x801C27D8u; f_8011CFF4(c); // 801C27D4
  c->r[4]=c->r[30]|c->r[30]; // 801C27D8
  c->r[5]=c->r[31]|c->r[31]; // 801C27DC
  c->lr=0x801C27E4u; f_801C26CC(c); // 801C27E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C27E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C27E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C27EC
  c->lr=c->r[0]; // 801C27F0
  c->r[1]=c->r[1]+0x00000010u; // 801C27F4
  return; // 801C27F8
}

// fn_801C27FC
void f_801C27FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C27FC
  c->r[0]=c->lr; // 801C2800
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2808
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C280C
  c->r[30]=c->r[3]|c->r[3]; // 801C2810
  c->r[31]=c->r[4]|c->r[4]; // 801C2814
  cmps(c,0,(int32_t)c->r[3],0); // 801C2818
  if (crb(c,2)) { goto L_801C283C; } // 801C281C
  c->r[4]=0u+0x00000000u; // 801C2820
  c->lr=0x801C2828u; f_80130F88(c); // 801C2824
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801C2828
  cmps(c,0,(int32_t)c->r[0],0); // 801C282C
  if (!crb(c,1)) { goto L_801C283C; } // 801C2830
  c->r[3]=c->r[30]|c->r[30]; // 801C2834
  c->lr=0x801C283Cu; f_80047B20(c); // 801C2838
L_801C283C:;
  c->r[3]=c->r[30]|c->r[30]; // 801C283C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2840
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C2844
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2848
  c->lr=c->r[0]; // 801C284C
  c->r[1]=c->r[1]+0x00000010u; // 801C2850
  return; // 801C2854
}

// fn_801C2858
void f_801C2858(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801C2858
  c->r[5]=c->r[3]+0x00001B30u; // 801C285C
  c->r[3]=0u+0x80440000u; // 801C2860
  c->r[4]=c->r[3]+0xFFFFD898u; // 801C2864
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C2868
  c->r[0]=R32(c->r[4]+0x00000004u); // 801C286C
  W32(c->r[5]+0x00000558u,c->r[3]); // 801C2870
  W32(c->r[5]+0x0000055Cu,c->r[0]); // 801C2874
  c->r[0]=R32(c->r[4]+0x00000008u); // 801C2878
  W32(c->r[5]+0x00000560u,c->r[0]); // 801C287C
  return; // 801C2880
}

// fn_801C2884
void f_801C2884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2884
  c->r[0]=c->lr; // 801C2888
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C288C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2890
  c->r[31]=c->r[3]|c->r[3]; // 801C2894
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2898
  c->r[4]=0u+0x00000001u; // 801C289C
  c->lr=0x801C28A4u; f_801B7E44(c); // 801C28A0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C28A4
  c->lr=0x801C28ACu; f_801B6038(c); // 801C28A8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C28AC
  c->lr=0x801C28B4u; f_801B7704(c); // 801C28B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C28B4
  c->lr=0x801C28BCu; f_801B1F6C(c); // 801C28B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C28BC
  c->lr=0x801C28C4u; f_801B1ED4(c); // 801C28C0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C28C4
  c->lr=0x801C28CCu; f_801B5220(c); // 801C28C8
  c->r[4]=c->r[3]|c->r[3]; // 801C28CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C28D0
  c->lr=0x801C28D8u; f_801B2E44(c); // 801C28D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C28D8
  c->lr=0x801C28E0u; f_801B2E3C(c); // 801C28DC
  c->r[4]=c->r[3]|c->r[3]; // 801C28E0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C28E4
  c->lr=0x801C28ECu; f_801B5AFC(c); // 801C28E8
  c->r[3]=c->r[31]|c->r[31]; // 801C28EC
  c->r[4]=0u+0x0000004Au; // 801C28F0
  c->lr=0x801C28F8u; f_8013114C(c); // 801C28F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C28F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C28FC
  c->lr=c->r[0]; // 801C2900
  c->r[1]=c->r[1]+0x00000010u; // 801C2904
  return; // 801C2908
}

// fn_801C290C
void f_801C290C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C290C
  c->r[0]=c->lr; // 801C2910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2914
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2918
  c->r[31]=c->r[3]|c->r[3]; // 801C291C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2920
  c->lr=0x801C2928u; f_801B7784(c); // 801C2924
  cmps(c,0,(int32_t)c->r[3],0); // 801C2928
  if (crb(c,2)) { goto L_801C2950; } // 801C292C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2930
  c->lr=0x801C2938u; f_801B2E3C(c); // 801C2934
  c->r[4]=c->r[3]|c->r[3]; // 801C2938
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C293C
  c->lr=0x801C2944u; f_801B5B50(c); // 801C2940
  c->r[3]=c->r[31]|c->r[31]; // 801C2944
  c->r[4]=0u+0x0000004Bu; // 801C2948
  c->lr=0x801C2950u; f_8013114C(c); // 801C294C
L_801C2950:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2950
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2954
  c->lr=c->r[0]; // 801C2958
  c->r[1]=c->r[1]+0x00000010u; // 801C295C
  return; // 801C2960
}

// fn_801C2964
void f_801C2964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2964
  c->r[0]=c->lr; // 801C2968
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C296C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2970
  c->r[31]=c->r[3]|c->r[3]; // 801C2974
  c->r[3]=0u+0x00000001u; // 801C2978
  c->lr=0x801C2980u; f_8019CD1C(c); // 801C297C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2980
  if (crb(c,2)) { goto L_801C29A0; } // 801C2984
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2988
  c->lr=0x801C2990u; f_801B1ECC(c); // 801C298C
  c->r[3]=c->r[31]|c->r[31]; // 801C2990
  c->r[4]=0u+0x0000004Eu; // 801C2994
  c->lr=0x801C299Cu; f_8013114C(c); // 801C2998
  goto L_801C2A3C; // 801C299C
L_801C29A0:;
  c->r[3]=0u+0x00000000u; // 801C29A0
  c->lr=0x801C29A8u; f_8019CD1C(c); // 801C29A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C29A8
  if (crb(c,2)) { goto L_801C29F0; } // 801C29AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C29B0
  c->lr=0x801C29B8u; f_801B21CC(c); // 801C29B4
  c->r[4]=c->r[3]|c->r[3]; // 801C29B8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C29BC
  c->lr=0x801C29C4u; f_801B5238(c); // 801C29C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C29C4
  if (crb(c,2)) { goto L_801C29D8; } // 801C29C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C29CC
  c->lr=0x801C29D4u; f_801B2008(c); // 801C29D0
  goto L_801C2A3C; // 801C29D4
L_801C29D8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C29D8
  c->lr=0x801C29E0u; f_801B1FD4(c); // 801C29DC
  c->r[3]=c->r[31]|c->r[31]; // 801C29E0
  c->r[4]=0u+0x0000004Cu; // 801C29E4
  c->lr=0x801C29ECu; f_8013114C(c); // 801C29E8
  goto L_801C2A3C; // 801C29EC
L_801C29F0:;
  c->r[3]=0u+0x00000003u; // 801C29F0
  c->lr=0x801C29F8u; f_8019CD1C(c); // 801C29F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C29F8
  if (crb(c,2)) { goto L_801C2A08; } // 801C29FC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2A00
  c->lr=0x801C2A08u; f_801B2DF0(c); // 801C2A04
L_801C2A08:;
  c->r[3]=0u+0x00000004u; // 801C2A08
  c->lr=0x801C2A10u; f_8019CD1C(c); // 801C2A0C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2A10
  if (crb(c,2)) { goto L_801C2A20; } // 801C2A14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2A18
  c->lr=0x801C2A20u; f_801B2DA4(c); // 801C2A1C
L_801C2A20:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2A20
  c->lr=0x801C2A28u; f_801B774C(c); // 801C2A24
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2A28
  c->lr=0x801C2A30u; f_801B2E3C(c); // 801C2A2C
  c->r[4]=c->r[3]|c->r[3]; // 801C2A30
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2A34
  c->lr=0x801C2A3Cu; f_801B5B50(c); // 801C2A38
L_801C2A3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2A40
  c->lr=c->r[0]; // 801C2A44
  c->r[1]=c->r[1]+0x00000010u; // 801C2A48
  return; // 801C2A4C
}

// fn_801C2A50
void f_801C2A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2A50
  c->r[0]=c->lr; // 801C2A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2A5C
  c->r[31]=c->r[3]|c->r[3]; // 801C2A60
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C2A64
  c->lr=0x801C2A6Cu; f_801B2E3C(c); // 801C2A68
  c->r[4]=c->r[3]|c->r[3]; // 801C2A6C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2A70
  c->lr=0x801C2A78u; f_801B5B0C(c); // 801C2A74
  c->r[3]=c->r[31]|c->r[31]; // 801C2A78
  c->r[4]=0u+0x0000004Du; // 801C2A7C
  c->lr=0x801C2A84u; f_8013114C(c); // 801C2A80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2A84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2A88
  c->lr=c->r[0]; // 801C2A8C
  c->r[1]=c->r[1]+0x00000010u; // 801C2A90
  return; // 801C2A94
}

// fn_801C2A98
void f_801C2A98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2A98
  c->r[0]=c->lr; // 801C2A9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2AA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2AA4
  c->r[31]=c->r[3]|c->r[3]; // 801C2AA8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2AAC
  c->lr=0x801C2AB4u; f_801B7784(c); // 801C2AB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C2AB4
  if (crb(c,2)) { goto L_801C2AD4; } // 801C2AB8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2ABC
  c->r[4]=0u+0x00000000u; // 801C2AC0
  c->lr=0x801C2AC8u; f_801B635C(c); // 801C2AC4
  c->r[3]=c->r[31]|c->r[31]; // 801C2AC8
  c->r[4]=0u+0x0000004Eu; // 801C2ACC
  c->lr=0x801C2AD4u; f_8013114C(c); // 801C2AD0
L_801C2AD4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2AD8
  c->lr=c->r[0]; // 801C2ADC
  c->r[1]=c->r[1]+0x00000010u; // 801C2AE0
  return; // 801C2AE4
}

// fn_801C2AE8
void f_801C2AE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2AE8
  c->r[0]=c->lr; // 801C2AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2AF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2AF4
  c->r[31]=c->r[3]|c->r[3]; // 801C2AF8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2AFC
  c->r[4]=0u+0x00000000u; // 801C2B00
  c->lr=0x801C2B08u; f_801B635C(c); // 801C2B04
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2B08
  c->lr=0x801C2B10u; f_801B1FA0(c); // 801C2B0C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2B10
  c->lr=0x801C2B18u; f_801B7748(c); // 801C2B14
  c->r[3]=c->r[31]|c->r[31]; // 801C2B18
  c->r[4]=0u+0x0000004Fu; // 801C2B1C
  c->lr=0x801C2B24u; f_8013114C(c); // 801C2B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2B24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2B28
  c->lr=c->r[0]; // 801C2B2C
  c->r[1]=c->r[1]+0x00000010u; // 801C2B30
  return; // 801C2B34
}

// fn_801C2B38
void f_801C2B38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2B38
  c->r[0]=c->lr; // 801C2B3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2B40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2B44
  c->r[31]=c->r[3]|c->r[3]; // 801C2B48
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2B4C
  c->lr=0x801C2B54u; f_801B7784(c); // 801C2B50
  cmps(c,0,(int32_t)c->r[3],0); // 801C2B54
  if (crb(c,2)) { goto L_801C2C20; } // 801C2B58
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2B5C
  c->r[4]=0u+0x00000000u; // 801C2B60
  c->lr=0x801C2B68u; f_801B6328(c); // 801C2B64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2B68
  c->lr=0x801C2B70u; f_801B1EDC(c); // 801C2B6C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2B70
  if (crb(c,2)) { goto L_801C2B9C; } // 801C2B74
  c->r[0]=0u+0x00000005u; // 801C2B78
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C2B7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2B80
  c->r[4]=0u+0x00000008u; // 801C2B84
  c->lr=0x801C2B8Cu; f_801B38BC(c); // 801C2B88
  c->r[3]=c->r[31]|c->r[31]; // 801C2B8C
  c->r[4]=0u+0x0000006Bu; // 801C2B90
  c->lr=0x801C2B98u; f_8013114C(c); // 801C2B94
  goto L_801C2C20; // 801C2B98
L_801C2B9C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2B9C
  c->lr=0x801C2BA4u; f_801B2E3C(c); // 801C2BA0
  cmps(c,0,(int32_t)c->r[3],1); // 801C2BA4
  if (crb(c,2)) { goto L_801C2C00; } // 801C2BA8
  if (!crb(c,0)) { goto L_801C2C20; } // 801C2BAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C2BB0
  if (!crb(c,0)) { goto L_801C2BBC; } // 801C2BB4
  goto L_801C2C20; // 801C2BB8
L_801C2BBC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2BBC
  c->lr=0x801C2BC4u; f_801B35FC(c); // 801C2BC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C2BC4
  if (crb(c,2)) { goto L_801C2BF0; } // 801C2BC8
  c->r[0]=0u+0x00000005u; // 801C2BCC
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C2BD0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2BD4
  c->r[4]=0u+0x00000004u; // 801C2BD8
  c->lr=0x801C2BE0u; f_801B396C(c); // 801C2BDC
  c->r[3]=c->r[31]|c->r[31]; // 801C2BE0
  c->r[4]=0u+0x0000006Bu; // 801C2BE4
  c->lr=0x801C2BECu; f_8013114C(c); // 801C2BE8
  goto L_801C2C20; // 801C2BEC
L_801C2BF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2BF0
  c->r[4]=0u+0x00000050u; // 801C2BF4
  c->lr=0x801C2BFCu; f_8013114C(c); // 801C2BF8
  goto L_801C2C20; // 801C2BFC
L_801C2C00:;
  c->r[0]=0u+0x00000005u; // 801C2C00
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C2C04
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2C08
  c->r[4]=0u+0x00000008u; // 801C2C0C
  c->lr=0x801C2C14u; f_801B38BC(c); // 801C2C10
  c->r[3]=c->r[31]|c->r[31]; // 801C2C14
  c->r[4]=0u+0x0000006Bu; // 801C2C18
  c->lr=0x801C2C20u; f_8013114C(c); // 801C2C1C
L_801C2C20:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2C20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2C24
  c->lr=c->r[0]; // 801C2C28
  c->r[1]=c->r[1]+0x00000010u; // 801C2C2C
  return; // 801C2C30
}

// fn_801C2C34
void f_801C2C34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2C34
  c->r[0]=c->lr; // 801C2C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2C3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2C40
  c->r[31]=c->r[3]|c->r[3]; // 801C2C44
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2C48
  c->r[4]=0u+0x00000004u; // 801C2C4C
  c->lr=0x801C2C54u; f_801B7E44(c); // 801C2C50
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2C54
  c->r[4]=0u+0x00000000u; // 801C2C58
  c->lr=0x801C2C60u; f_801B5D40(c); // 801C2C5C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2C60
  c->lr=0x801C2C68u; f_801B6038(c); // 801C2C64
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2C68
  c->lr=0x801C2C70u; f_801B7788(c); // 801C2C6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2C70
  c->lr=0x801C2C78u; f_801B1F6C(c); // 801C2C74
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2C78
  c->lr=0x801C2C80u; f_801B1ED4(c); // 801C2C7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2C80
  c->lr=0x801C2C88u; f_801B2F88(c); // 801C2C84
  c->r[4]=c->r[3]|c->r[3]; // 801C2C88
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2C8C
  c->lr=0x801C2C94u; f_801B5AFC(c); // 801C2C90
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2C94
  c->lr=0x801C2C9Cu; f_801B2F88(c); // 801C2C98
  c->r[4]=c->r[3]|c->r[3]; // 801C2C9C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2CA0
  c->lr=0x801C2CA8u; f_801B5B94(c); // 801C2CA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2CA8
  c->lr=0x801C2CB0u; f_801B3030(c); // 801C2CAC
  c->r[4]=c->r[3]|c->r[3]; // 801C2CB0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2CB4
  c->lr=0x801C2CBCu; f_801B5C44(c); // 801C2CB8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2CBC
  c->lr=0x801C2CC4u; f_801B5F8C(c); // 801C2CC0
  c->r[4]=c->r[3]|c->r[3]; // 801C2CC4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2CC8
  c->lr=0x801C2CD0u; f_801B3048(c); // 801C2CCC
  c->r[3]=c->r[31]|c->r[31]; // 801C2CD0
  c->r[4]=0u+0x00000051u; // 801C2CD4
  c->lr=0x801C2CDCu; f_8013114C(c); // 801C2CD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2CDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2CE0
  c->lr=c->r[0]; // 801C2CE4
  c->r[1]=c->r[1]+0x00000010u; // 801C2CE8
  return; // 801C2CEC
}

// fn_801C2CF0
void f_801C2CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2CF0
  c->r[0]=c->lr; // 801C2CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2CFC
  c->r[31]=c->r[3]|c->r[3]; // 801C2D00
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2D04
  c->lr=0x801C2D0Cu; f_801B7900(c); // 801C2D08
  cmps(c,0,(int32_t)c->r[3],0); // 801C2D0C
  if (crb(c,2)) { goto L_801C2D50; } // 801C2D10
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2D14
  c->lr=0x801C2D1Cu; f_801B2F88(c); // 801C2D18
  c->r[4]=c->r[3]|c->r[3]; // 801C2D1C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2D20
  c->lr=0x801C2D28u; f_801B5B94(c); // 801C2D24
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2D28
  c->lr=0x801C2D30u; f_801B3030(c); // 801C2D2C
  c->r[4]=c->r[3]|c->r[3]; // 801C2D30
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2D34
  c->lr=0x801C2D3Cu; f_801B5C44(c); // 801C2D38
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2D3C
  c->lr=0x801C2D44u; f_801B78A8(c); // 801C2D40
  c->r[3]=c->r[31]|c->r[31]; // 801C2D44
  c->r[4]=0u+0x00000052u; // 801C2D48
  c->lr=0x801C2D50u; f_8013114C(c); // 801C2D4C
L_801C2D50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2D54
  c->lr=c->r[0]; // 801C2D58
  c->r[1]=c->r[1]+0x00000010u; // 801C2D5C
  return; // 801C2D60
}

// fn_801C2D64
void f_801C2D64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2D64
  c->r[0]=c->lr; // 801C2D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2D70
  c->r[31]=c->r[3]|c->r[3]; // 801C2D74
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2D78
  c->lr=0x801C2D80u; f_801B5F08(c); // 801C2D7C
  c->r[4]=c->r[3]|c->r[3]; // 801C2D80
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2D84
  c->lr=0x801C2D8Cu; f_801B3038(c); // 801C2D88
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2D8C
  c->lr=0x801C2D94u; f_801B5E84(c); // 801C2D90
  c->r[4]=c->r[3]|c->r[3]; // 801C2D94
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2D98
  c->lr=0x801C2DA0u; f_801B3040(c); // 801C2D9C
  c->r[3]=c->r[31]|c->r[31]; // 801C2DA0
  c->r[4]=0u+0x00000053u; // 801C2DA4
  c->lr=0x801C2DACu; f_8013114C(c); // 801C2DA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2DB0
  c->lr=c->r[0]; // 801C2DB4
  c->r[1]=c->r[1]+0x00000010u; // 801C2DB8
  return; // 801C2DBC
}

// fn_801C2DC0
void f_801C2DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2DC0
  c->r[0]=c->lr; // 801C2DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2DC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2DCC
  c->r[31]=c->r[3]|c->r[3]; // 801C2DD0
  c->r[3]=0u+0x00000001u; // 801C2DD4
  c->lr=0x801C2DDCu; f_8019CD1C(c); // 801C2DD8
  cmps(c,0,(int32_t)c->r[3],0); // 801C2DDC
  if (crb(c,2)) { goto L_801C2DFC; } // 801C2DE0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2DE4
  c->lr=0x801C2DECu; f_801B1ECC(c); // 801C2DE8
  c->r[3]=c->r[31]|c->r[31]; // 801C2DEC
  c->r[4]=0u+0x00000054u; // 801C2DF0
  c->lr=0x801C2DF8u; f_8013114C(c); // 801C2DF4
  goto L_801C2F04; // 801C2DF8
L_801C2DFC:;
  c->r[3]=0u+0x00000000u; // 801C2DFC
  c->lr=0x801C2E04u; f_8019CD1C(c); // 801C2E00
  cmps(c,0,(int32_t)c->r[3],0); // 801C2E04
  if (crb(c,2)) { goto L_801C2E54; } // 801C2E08
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2E0C
  c->lr=0x801C2E14u; f_801B2F88(c); // 801C2E10
  c->r[4]=c->r[3]|c->r[3]; // 801C2E14
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2E18
  c->lr=0x801C2E20u; f_801B5B94(c); // 801C2E1C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2E20
  c->lr=0x801C2E28u; f_801B3030(c); // 801C2E24
  c->r[4]=c->r[3]|c->r[3]; // 801C2E28
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2E2C
  c->lr=0x801C2E34u; f_801B5C44(c); // 801C2E30
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2E34
  c->lr=0x801C2E3Cu; f_801B78A8(c); // 801C2E38
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2E3C
  c->lr=0x801C2E44u; f_801B1FD4(c); // 801C2E40
  c->r[3]=c->r[31]|c->r[31]; // 801C2E44
  c->r[4]=0u+0x00000054u; // 801C2E48
  c->lr=0x801C2E50u; f_8013114C(c); // 801C2E4C
  goto L_801C2F04; // 801C2E50
L_801C2E54:;
  c->r[3]=0u+0x00000003u; // 801C2E54
  c->lr=0x801C2E5Cu; f_8019CD1C(c); // 801C2E58
  cmps(c,0,(int32_t)c->r[3],0); // 801C2E5C
  if (crb(c,2)) { goto L_801C2E6C; } // 801C2E60
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2E64
  c->lr=0x801C2E6Cu; f_801B2EE8(c); // 801C2E68
L_801C2E6C:;
  c->r[3]=0u+0x00000004u; // 801C2E6C
  c->lr=0x801C2E74u; f_8019CD1C(c); // 801C2E70
  cmps(c,0,(int32_t)c->r[3],0); // 801C2E74
  if (crb(c,2)) { goto L_801C2E84; } // 801C2E78
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2E7C
  c->lr=0x801C2E84u; f_801B2E88(c); // 801C2E80
L_801C2E84:;
  c->r[3]=0u+0x00000006u; // 801C2E84
  c->lr=0x801C2E8Cu; f_8019CD1C(c); // 801C2E88
  cmps(c,0,(int32_t)c->r[3],0); // 801C2E8C
  if (crb(c,2)) { goto L_801C2EAC; } // 801C2E90
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2E94
  c->lr=0x801C2E9Cu; f_801B6028(c); // 801C2E98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2E9C
  c->lr=0x801C2EA4u; f_801B2FE0(c); // 801C2EA0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2EA4
  c->lr=0x801C2EACu; f_801B2F48(c); // 801C2EA8
L_801C2EAC:;
  c->r[3]=0u+0x00000005u; // 801C2EAC
  c->lr=0x801C2EB4u; f_8019CD1C(c); // 801C2EB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C2EB4
  if (crb(c,2)) { goto L_801C2ED4; } // 801C2EB8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2EBC
  c->lr=0x801C2EC4u; f_801B6030(c); // 801C2EC0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2EC4
  c->lr=0x801C2ECCu; f_801B2F90(c); // 801C2EC8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2ECC
  c->lr=0x801C2ED4u; f_801B2F48(c); // 801C2ED0
L_801C2ED4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2ED4
  c->lr=0x801C2EDCu; f_801B2F88(c); // 801C2ED8
  c->r[4]=c->r[3]|c->r[3]; // 801C2EDC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2EE0
  c->lr=0x801C2EE8u; f_801B5B94(c); // 801C2EE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2EE8
  c->lr=0x801C2EF0u; f_801B3030(c); // 801C2EEC
  c->r[4]=c->r[3]|c->r[3]; // 801C2EF0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2EF4
  c->lr=0x801C2EFCu; f_801B5C44(c); // 801C2EF8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2EFC
  c->lr=0x801C2F04u; f_801B78A8(c); // 801C2F00
L_801C2F04:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2F04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2F08
  c->lr=c->r[0]; // 801C2F0C
  c->r[1]=c->r[1]+0x00000010u; // 801C2F10
  return; // 801C2F14
}

// fn_801C2F18
void f_801C2F18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2F18
  c->r[0]=c->lr; // 801C2F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2F20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2F24
  c->r[31]=c->r[3]|c->r[3]; // 801C2F28
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C2F2C
  c->lr=0x801C2F34u; f_801B1FA0(c); // 801C2F30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2F34
  c->lr=0x801C2F3Cu; f_801B1EDC(c); // 801C2F38
  cmps(c,0,(int32_t)c->r[3],0); // 801C2F3C
  if (crb(c,2)) { goto L_801C2F50; } // 801C2F40
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2F44
  c->lr=0x801C2F4Cu; f_801B77E8(c); // 801C2F48
  goto L_801C2F58; // 801C2F4C
L_801C2F50:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2F50
  c->lr=0x801C2F58u; f_801B7848(c); // 801C2F54
L_801C2F58:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2F58
  c->r[4]=0u+0x00000055u; // 801C2F5C
  c->lr=0x801C2F64u; f_8013114C(c); // 801C2F60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2F64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2F68
  c->lr=c->r[0]; // 801C2F6C
  c->r[1]=c->r[1]+0x00000010u; // 801C2F70
  return; // 801C2F74
}

// fn_801C2F78
void f_801C2F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2F78
  c->r[0]=c->lr; // 801C2F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2F84
  c->r[31]=c->r[3]|c->r[3]; // 801C2F88
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2F8C
  c->lr=0x801C2F94u; f_801B7900(c); // 801C2F90
  cmps(c,0,(int32_t)c->r[3],0); // 801C2F94
  if (crb(c,2)) { goto L_801C2FD4; } // 801C2F98
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C2F9C
  c->r[4]=0u+0x00000000u; // 801C2FA0
  c->lr=0x801C2FA8u; f_801B6330(c); // 801C2FA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C2FA8
  c->lr=0x801C2FB0u; f_801B1EDC(c); // 801C2FAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C2FB0
  if (crb(c,2)) { goto L_801C2FC8; } // 801C2FB4
  c->r[3]=c->r[31]|c->r[31]; // 801C2FB8
  c->r[4]=0u+0x00000005u; // 801C2FBC
  c->lr=0x801C2FC4u; f_8013114C(c); // 801C2FC0
  goto L_801C2FD4; // 801C2FC4
L_801C2FC8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2FC8
  c->r[4]=0u+0x00000056u; // 801C2FCC
  c->lr=0x801C2FD4u; f_8013114C(c); // 801C2FD0
L_801C2FD4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2FD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2FD8
  c->lr=c->r[0]; // 801C2FDC
  c->r[1]=c->r[1]+0x00000010u; // 801C2FE0
  return; // 801C2FE4
}

// fn_801C2FE8
void f_801C2FE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2FE8
  c->r[0]=c->lr; // 801C2FEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2FF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2FF4
  c->r[31]=c->r[3]|c->r[3]; // 801C2FF8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C2FFC
  c->lr=0x801C3004u; f_801B6038(c); // 801C3000
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3004
  c->lr=0x801C300Cu; f_801B30E8(c); // 801C3008
  cmps(c,0,(int32_t)c->r[3],1); // 801C300C
  if (!crb(c,2)) { goto L_801C3020; } // 801C3010
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3014
  c->lr=0x801C301Cu; f_801B7968(c); // 801C3018
  goto L_801C3028; // 801C301C
L_801C3020:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3020
  c->lr=0x801C3028u; f_801B7904(c); // 801C3024
L_801C3028:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3028
  c->lr=0x801C3030u; f_801B1F6C(c); // 801C302C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3030
  c->lr=0x801C3038u; f_801B1ED4(c); // 801C3034
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3038
  c->lr=0x801C3040u; f_801B5220(c); // 801C303C
  c->r[4]=c->r[3]|c->r[3]; // 801C3040
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3044
  c->lr=0x801C304Cu; f_801B30FC(c); // 801C3048
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C304C
  c->lr=0x801C3054u; f_801B30F0(c); // 801C3050
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3054
  c->lr=0x801C305Cu; f_801B30E8(c); // 801C3058
  c->r[4]=c->r[3]|c->r[3]; // 801C305C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3060
  c->lr=0x801C3068u; f_801B5AFC(c); // 801C3064
  c->r[3]=c->r[31]|c->r[31]; // 801C3068
  c->r[4]=0u+0x00000057u; // 801C306C
  c->lr=0x801C3074u; f_8013114C(c); // 801C3070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3074
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3078
  c->lr=c->r[0]; // 801C307C
  c->r[1]=c->r[1]+0x00000010u; // 801C3080
  return; // 801C3084
}

// fn_801C3088
void f_801C3088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3088
  c->r[0]=c->lr; // 801C308C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3090
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3094
  c->r[31]=c->r[3]|c->r[3]; // 801C3098
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C309C
  c->lr=0x801C30A4u; f_801B7AC8(c); // 801C30A0
  cmps(c,0,(int32_t)c->r[3],0); // 801C30A4
  if (crb(c,2)) { goto L_801C30CC; } // 801C30A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C30AC
  c->lr=0x801C30B4u; f_801B30E8(c); // 801C30B0
  c->r[4]=c->r[3]|c->r[3]; // 801C30B4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C30B8
  c->lr=0x801C30C0u; f_801B5B50(c); // 801C30BC
  c->r[3]=c->r[31]|c->r[31]; // 801C30C0
  c->r[4]=0u+0x00000058u; // 801C30C4
  c->lr=0x801C30CCu; f_8013114C(c); // 801C30C8
L_801C30CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C30CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C30D0
  c->lr=c->r[0]; // 801C30D4
  c->r[1]=c->r[1]+0x00000010u; // 801C30D8
  return; // 801C30DC
}

// fn_801C30E0
void f_801C30E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C30E0
  c->r[0]=c->lr; // 801C30E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C30E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C30EC
  c->r[31]=c->r[3]|c->r[3]; // 801C30F0
  c->r[3]=0u+0x00000001u; // 801C30F4
  c->lr=0x801C30FCu; f_8019CD1C(c); // 801C30F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C30FC
  if (crb(c,2)) { goto L_801C311C; } // 801C3100
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3104
  c->lr=0x801C310Cu; f_801B1ECC(c); // 801C3108
  c->r[3]=c->r[31]|c->r[31]; // 801C310C
  c->r[4]=0u+0x0000005Bu; // 801C3110
  c->lr=0x801C3118u; f_8013114C(c); // 801C3114
  goto L_801C31B8; // 801C3118
L_801C311C:;
  c->r[3]=0u+0x00000000u; // 801C311C
  c->lr=0x801C3124u; f_8019CD1C(c); // 801C3120
  cmps(c,0,(int32_t)c->r[3],0); // 801C3124
  if (crb(c,2)) { goto L_801C316C; } // 801C3128
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C312C
  c->lr=0x801C3134u; f_801B30E8(c); // 801C3130
  c->r[4]=c->r[3]|c->r[3]; // 801C3134
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3138
  c->lr=0x801C3140u; f_801B5238(c); // 801C313C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3140
  if (crb(c,2)) { goto L_801C3154; } // 801C3144
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3148
  c->lr=0x801C3150u; f_801B2008(c); // 801C314C
  goto L_801C31B8; // 801C3150
L_801C3154:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3154
  c->lr=0x801C315Cu; f_801B1FD4(c); // 801C3158
  c->r[3]=c->r[31]|c->r[31]; // 801C315C
  c->r[4]=0u+0x00000059u; // 801C3160
  c->lr=0x801C3168u; f_8013114C(c); // 801C3164
  goto L_801C31B8; // 801C3168
L_801C316C:;
  c->r[3]=0u+0x00000003u; // 801C316C
  c->lr=0x801C3174u; f_8019CD1C(c); // 801C3170
  cmps(c,0,(int32_t)c->r[3],0); // 801C3174
  if (crb(c,2)) { goto L_801C3184; } // 801C3178
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C317C
  c->lr=0x801C3184u; f_801B309C(c); // 801C3180
L_801C3184:;
  c->r[3]=0u+0x00000004u; // 801C3184
  c->lr=0x801C318Cu; f_8019CD1C(c); // 801C3188
  cmps(c,0,(int32_t)c->r[3],0); // 801C318C
  if (crb(c,2)) { goto L_801C319C; } // 801C3190
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3194
  c->lr=0x801C319Cu; f_801B3050(c); // 801C3198
L_801C319C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C319C
  c->lr=0x801C31A4u; f_801B7A80(c); // 801C31A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C31A4
  c->lr=0x801C31ACu; f_801B30E8(c); // 801C31A8
  c->r[4]=c->r[3]|c->r[3]; // 801C31AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C31B0
  c->lr=0x801C31B8u; f_801B5B50(c); // 801C31B4
L_801C31B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C31B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C31BC
  c->lr=c->r[0]; // 801C31C0
  c->r[1]=c->r[1]+0x00000010u; // 801C31C4
  return; // 801C31C8
}

// fn_801C31CC
void f_801C31CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C31CC
  c->r[0]=c->lr; // 801C31D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C31D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C31D8
  c->r[31]=c->r[3]|c->r[3]; // 801C31DC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C31E0
  c->lr=0x801C31E8u; f_801B30E8(c); // 801C31E4
  c->r[4]=c->r[3]|c->r[3]; // 801C31E8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C31EC
  c->lr=0x801C31F4u; f_801B5B0C(c); // 801C31F0
  c->r[3]=c->r[31]|c->r[31]; // 801C31F4
  c->r[4]=0u+0x0000005Au; // 801C31F8
  c->lr=0x801C3200u; f_8013114C(c); // 801C31FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3200
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3204
  c->lr=c->r[0]; // 801C3208
  c->r[1]=c->r[1]+0x00000010u; // 801C320C
  return; // 801C3210
}

// fn_801C3214
void f_801C3214(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3214
  c->r[0]=c->lr; // 801C3218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C321C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3220
  c->r[31]=c->r[3]|c->r[3]; // 801C3224
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3228
  c->lr=0x801C3230u; f_801B7AC8(c); // 801C322C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3230
  if (crb(c,2)) { goto L_801C3250; } // 801C3234
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3238
  c->r[4]=0u+0x00000000u; // 801C323C
  c->lr=0x801C3244u; f_801B635C(c); // 801C3240
  c->r[3]=c->r[31]|c->r[31]; // 801C3244
  c->r[4]=0u+0x0000005Bu; // 801C3248
  c->lr=0x801C3250u; f_8013114C(c); // 801C324C
L_801C3250:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3250
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3254
  c->lr=c->r[0]; // 801C3258
  c->r[1]=c->r[1]+0x00000010u; // 801C325C
  return; // 801C3260
}

// fn_801C3264
void f_801C3264(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3264
  c->r[0]=c->lr; // 801C3268
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C326C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3270
  c->r[31]=c->r[3]|c->r[3]; // 801C3274
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3278
  c->r[4]=0u+0x00000000u; // 801C327C
  c->lr=0x801C3284u; f_801B635C(c); // 801C3280
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3284
  c->lr=0x801C328Cu; f_801B1FA0(c); // 801C3288
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C328C
  c->lr=0x801C3294u; f_801B5DF0(c); // 801C3290
  c->r[4]=c->r[3]|c->r[3]; // 801C3294
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3298
  c->lr=0x801C32A0u; f_801B374C(c); // 801C329C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C32A0
  c->lr=0x801C32A8u; f_801B1EDC(c); // 801C32A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C32A8
  if (crb(c,2)) { goto L_801C32BC; } // 801C32AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C32B0
  c->lr=0x801C32B8u; f_801B79CC(c); // 801C32B4
  goto L_801C331C; // 801C32B8
L_801C32BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C32BC
  c->lr=0x801C32C4u; f_801B36BC(c); // 801C32C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C32C4
  if (!crb(c,2)) { goto L_801C32DC; } // 801C32C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C32CC
  c->lr=0x801C32D4u; f_801B3704(c); // 801C32D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C32D4
  if (crb(c,2)) { goto L_801C3314; } // 801C32D8
L_801C32DC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C32DC
  c->lr=0x801C32E4u; f_801B30E8(c); // 801C32E0
  cmps(c,0,(int32_t)c->r[3],1); // 801C32E4
  if (crb(c,2)) { goto L_801C3308; } // 801C32E8
  if (!crb(c,0)) { goto L_801C331C; } // 801C32EC
  cmps(c,0,(int32_t)c->r[3],0); // 801C32F0
  if (!crb(c,0)) { goto L_801C32FC; } // 801C32F4
  goto L_801C331C; // 801C32F8
L_801C32FC:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C32FC
  c->lr=0x801C3304u; f_801B7A44(c); // 801C3300
  goto L_801C331C; // 801C3304
L_801C3308:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3308
  c->lr=0x801C3310u; f_801B7A08(c); // 801C330C
  goto L_801C331C; // 801C3310
L_801C3314:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3314
  c->lr=0x801C331Cu; f_801B7A08(c); // 801C3318
L_801C331C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C331C
  c->r[4]=0u+0x0000005Cu; // 801C3320
  c->lr=0x801C3328u; f_8013114C(c); // 801C3324
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3328
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C332C
  c->lr=c->r[0]; // 801C3330
  c->r[1]=c->r[1]+0x00000010u; // 801C3334
  return; // 801C3338
}

// fn_801C333C
void f_801C333C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C333C
  c->r[0]=c->lr; // 801C3340
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3348
  c->r[31]=c->r[3]|c->r[3]; // 801C334C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3350
  c->lr=0x801C3358u; f_801B7AC8(c); // 801C3354
  cmps(c,0,(int32_t)c->r[3],0); // 801C3358
  if (crb(c,2)) { goto L_801C3430; } // 801C335C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3360
  c->r[4]=0u+0x00000000u; // 801C3364
  c->lr=0x801C336Cu; f_801B6338(c); // 801C3368
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C336C
  c->lr=0x801C3374u; f_801B1EDC(c); // 801C3370
  cmps(c,0,(int32_t)c->r[3],0); // 801C3374
  if (crb(c,2)) { goto L_801C338C; } // 801C3378
  c->r[3]=c->r[31]|c->r[31]; // 801C337C
  c->r[4]=0u+0x00000050u; // 801C3380
  c->lr=0x801C3388u; f_8013114C(c); // 801C3384
  goto L_801C3430; // 801C3388
L_801C338C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C338C
  c->lr=0x801C3394u; f_801B30E8(c); // 801C3390
  cmps(c,0,(int32_t)c->r[3],1); // 801C3394
  if (crb(c,2)) { goto L_801C3424; } // 801C3398
  if (!crb(c,0)) { goto L_801C3430; } // 801C339C
  cmps(c,0,(int32_t)c->r[3],0); // 801C33A0
  if (!crb(c,0)) { goto L_801C33AC; } // 801C33A4
  goto L_801C3430; // 801C33A8
L_801C33AC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C33AC
  c->lr=0x801C33B4u; f_801B36BC(c); // 801C33B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C33B4
  if (crb(c,2)) { goto L_801C33E0; } // 801C33B8
  c->r[0]=0u+0x00000050u; // 801C33BC
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C33C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C33C4
  c->r[4]=0u+0x00000005u; // 801C33C8
  c->lr=0x801C33D0u; f_801B396C(c); // 801C33CC
  c->r[3]=c->r[31]|c->r[31]; // 801C33D0
  c->r[4]=0u+0x0000006Bu; // 801C33D4
  c->lr=0x801C33DCu; f_8013114C(c); // 801C33D8
  goto L_801C3430; // 801C33DC
L_801C33E0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C33E0
  c->lr=0x801C33E8u; f_801B3704(c); // 801C33E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C33E8
  if (crb(c,2)) { goto L_801C3414; } // 801C33EC
  c->r[0]=0u+0x00000050u; // 801C33F0
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C33F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C33F8
  c->r[4]=0u+0x00000007u; // 801C33FC
  c->lr=0x801C3404u; f_801B396C(c); // 801C3400
  c->r[3]=c->r[31]|c->r[31]; // 801C3404
  c->r[4]=0u+0x0000006Bu; // 801C3408
  c->lr=0x801C3410u; f_8013114C(c); // 801C340C
  goto L_801C3430; // 801C3410
L_801C3414:;
  c->r[3]=c->r[31]|c->r[31]; // 801C3414
  c->r[4]=0u+0x00000062u; // 801C3418
  c->lr=0x801C3420u; f_8013114C(c); // 801C341C
  goto L_801C3430; // 801C3420
L_801C3424:;
  c->r[3]=c->r[31]|c->r[31]; // 801C3424
  c->r[4]=0u+0x0000005Du; // 801C3428
  c->lr=0x801C3430u; f_8013114C(c); // 801C342C
L_801C3430:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3430
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3434
  c->lr=c->r[0]; // 801C3438
  c->r[1]=c->r[1]+0x00000010u; // 801C343C
  return; // 801C3440
}

// fn_801C3444
void f_801C3444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3444
  c->r[0]=c->lr; // 801C3448
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C344C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3450
  c->r[31]=c->r[3]|c->r[3]; // 801C3454
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3458
  c->r[4]=0u+0x00000000u; // 801C345C
  c->lr=0x801C3464u; f_801B6018(c); // 801C3460
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3464
  c->lr=0x801C346Cu; f_801B7C4C(c); // 801C3468
  c->r[4]=c->r[3]|c->r[3]; // 801C346C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3470
  c->lr=0x801C3478u; f_801B31B8(c); // 801C3474
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3478
  c->lr=0x801C3480u; f_801B7ACC(c); // 801C347C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3480
  c->lr=0x801C3488u; f_801B31AC(c); // 801C3484
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3488
  c->lr=0x801C3490u; f_801B31A4(c); // 801C348C
  c->r[4]=c->r[3]|c->r[3]; // 801C3490
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3494
  c->lr=0x801C349Cu; f_801B5B04(c); // 801C3498
  c->r[3]=c->r[31]|c->r[31]; // 801C349C
  c->r[4]=0u+0x0000005Eu; // 801C34A0
  c->lr=0x801C34A8u; f_8013114C(c); // 801C34A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C34A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C34AC
  c->lr=c->r[0]; // 801C34B0
  c->r[1]=c->r[1]+0x00000010u; // 801C34B4
  return; // 801C34B8
}

// fn_801C34BC
void f_801C34BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C34BC
  c->r[0]=c->lr; // 801C34C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C34C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C34C8
  c->r[31]=c->r[3]|c->r[3]; // 801C34CC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C34D0
  c->lr=0x801C34D8u; f_801B7C48(c); // 801C34D4
  cmps(c,0,(int32_t)c->r[3],0); // 801C34D8
  if (crb(c,2)) { goto L_801C3500; } // 801C34DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C34E0
  c->lr=0x801C34E8u; f_801B31A4(c); // 801C34E4
  c->r[4]=c->r[3]|c->r[3]; // 801C34E8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C34EC
  c->lr=0x801C34F4u; f_801B7B8C(c); // 801C34F0
  c->r[3]=c->r[31]|c->r[31]; // 801C34F4
  c->r[4]=0u+0x0000005Fu; // 801C34F8
  c->lr=0x801C3500u; f_8013114C(c); // 801C34FC
L_801C3500:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3500
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3504
  c->lr=c->r[0]; // 801C3508
  c->r[1]=c->r[1]+0x00000010u; // 801C350C
  return; // 801C3510
}

// fn_801C3514
void f_801C3514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3514
  c->r[0]=c->lr; // 801C3518
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C351C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3520
  c->r[31]=c->r[3]|c->r[3]; // 801C3524
  c->r[3]=0u+0x00000001u; // 801C3528
  c->lr=0x801C3530u; f_8019CD1C(c); // 801C352C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3530
  if (crb(c,2)) { goto L_801C3550; } // 801C3534
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3538
  c->lr=0x801C3540u; f_801B1ECC(c); // 801C353C
  c->r[3]=c->r[31]|c->r[31]; // 801C3540
  c->r[4]=0u+0x00000060u; // 801C3544
  c->lr=0x801C354Cu; f_8013114C(c); // 801C3548
  goto L_801C3594; // 801C354C
L_801C3550:;
  c->r[3]=0u+0x00000006u; // 801C3550
  c->lr=0x801C3558u; f_8019CD1C(c); // 801C3554
  cmps(c,0,(int32_t)c->r[3],0); // 801C3558
  if (crb(c,2)) { goto L_801C3568; } // 801C355C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3560
  c->lr=0x801C3568u; f_801B3154(c); // 801C3564
L_801C3568:;
  c->r[3]=0u+0x00000005u; // 801C3568
  c->lr=0x801C3570u; f_8019CD1C(c); // 801C356C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3570
  if (crb(c,2)) { goto L_801C3580; } // 801C3574
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3578
  c->lr=0x801C3580u; f_801B3104(c); // 801C357C
L_801C3580:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3580
  c->lr=0x801C3588u; f_801B31A4(c); // 801C3584
  c->r[4]=c->r[3]|c->r[3]; // 801C3588
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C358C
  c->lr=0x801C3594u; f_801B7B8C(c); // 801C3590
L_801C3594:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3594
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3598
  c->lr=c->r[0]; // 801C359C
  c->r[1]=c->r[1]+0x00000010u; // 801C35A0
  return; // 801C35A4
}

// fn_801C35A8
void f_801C35A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C35A8
  c->r[0]=c->lr; // 801C35AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C35B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C35B4
  c->r[31]=c->r[3]|c->r[3]; // 801C35B8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C35BC
  c->lr=0x801C35C4u; f_801B7B40(c); // 801C35C0
  c->r[3]=c->r[31]|c->r[31]; // 801C35C4
  c->r[4]=0u+0x00000061u; // 801C35C8
  c->lr=0x801C35D0u; f_8013114C(c); // 801C35CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C35D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C35D4
  c->lr=c->r[0]; // 801C35D8
  c->r[1]=c->r[1]+0x00000010u; // 801C35DC
  return; // 801C35E0
}

// fn_801C35E4
void f_801C35E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C35E4
  c->r[0]=c->lr; // 801C35E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C35EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C35F0
  c->r[31]=c->r[3]|c->r[3]; // 801C35F4
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C35F8
  c->lr=0x801C3600u; f_801B7C48(c); // 801C35FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3600
  if (crb(c,2)) { goto L_801C3620; } // 801C3604
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3608
  c->r[4]=0u+0x00000000u; // 801C360C
  c->lr=0x801C3614u; f_801B6340(c); // 801C3610
  c->r[3]=c->r[31]|c->r[31]; // 801C3614
  c->r[4]=0u+0x00000056u; // 801C3618
  c->lr=0x801C3620u; f_8013114C(c); // 801C361C
L_801C3620:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3620
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3624
  c->lr=c->r[0]; // 801C3628
  c->r[1]=c->r[1]+0x00000010u; // 801C362C
  return; // 801C3630
}

// fn_801C3634
void f_801C3634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3634
  c->r[0]=c->lr; // 801C3638
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C363C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3640
  c->r[31]=c->r[3]|c->r[3]; // 801C3644
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C3648
  c->lr=0x801C3650u; f_801B1F6C(c); // 801C364C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3650
  c->lr=0x801C3658u; f_801B1ED4(c); // 801C3654
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3658
  c->lr=0x801C3660u; f_801B7C9C(c); // 801C365C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3660
  c->lr=0x801C3668u; f_801B7E38(c); // 801C3664
  c->r[4]=c->r[3]|c->r[3]; // 801C3668
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C366C
  c->lr=0x801C3674u; f_801B332C(c); // 801C3670
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3674
  c->lr=0x801C367Cu; f_801B3320(c); // 801C3678
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C367C
  c->lr=0x801C3684u; f_801B3318(c); // 801C3680
  c->r[4]=c->r[3]|c->r[3]; // 801C3684
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3688
  c->lr=0x801C3690u; f_801B5B04(c); // 801C368C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3690
  c->lr=0x801C3698u; f_801B5220(c); // 801C3694
  c->r[4]=c->r[3]|c->r[3]; // 801C3698
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C369C
  c->lr=0x801C36A4u; f_801B3270(c); // 801C36A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C36A4
  c->lr=0x801C36ACu; f_801B3268(c); // 801C36A8
  c->r[4]=c->r[3]|c->r[3]; // 801C36AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C36B0
  c->lr=0x801C36B8u; f_801B5AFC(c); // 801C36B4
  c->r[3]=c->r[31]|c->r[31]; // 801C36B8
  c->r[4]=0u+0x00000063u; // 801C36BC
  c->lr=0x801C36C4u; f_8013114C(c); // 801C36C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C36C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C36C8
  c->lr=c->r[0]; // 801C36CC
  c->r[1]=c->r[1]+0x00000010u; // 801C36D0
  return; // 801C36D4
}

// fn_801C36D8
void f_801C36D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C36D8
  c->r[0]=c->lr; // 801C36DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C36E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C36E4
  c->r[31]=c->r[3]|c->r[3]; // 801C36E8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C36EC
  c->lr=0x801C36F4u; f_801B7E34(c); // 801C36F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C36F4
  if (crb(c,2)) { goto L_801C3730; } // 801C36F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C36FC
  c->lr=0x801C3704u; f_801B3318(c); // 801C3700
  c->r[4]=c->r[3]|c->r[3]; // 801C3704
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3708
  c->lr=0x801C3710u; f_801B7D88(c); // 801C370C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3710
  c->lr=0x801C3718u; f_801B3268(c); // 801C3714
  c->r[4]=c->r[3]|c->r[3]; // 801C3718
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C371C
  c->lr=0x801C3724u; f_801B5B50(c); // 801C3720
  c->r[3]=c->r[31]|c->r[31]; // 801C3724
  c->r[4]=0u+0x00000064u; // 801C3728
  c->lr=0x801C3730u; f_8013114C(c); // 801C372C
L_801C3730:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3730
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3734
  c->lr=c->r[0]; // 801C3738
  c->r[1]=c->r[1]+0x00000010u; // 801C373C
  return; // 801C3740
}

// fn_801C3744
void f_801C3744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3744
  c->r[0]=c->lr; // 801C3748
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C374C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3750
  c->r[31]=c->r[3]|c->r[3]; // 801C3754
  c->r[3]=0u+0x00000001u; // 801C3758
  c->lr=0x801C3760u; f_8019CD1C(c); // 801C375C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3760
  if (crb(c,2)) { goto L_801C3780; } // 801C3764
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3768
  c->lr=0x801C3770u; f_801B1ECC(c); // 801C376C
  c->r[3]=c->r[31]|c->r[31]; // 801C3770
  c->r[4]=0u+0x00000067u; // 801C3774
  c->lr=0x801C377Cu; f_8013114C(c); // 801C3778
  goto L_801C388C; // 801C377C
L_801C3780:;
  c->r[3]=0u+0x00000000u; // 801C3780
  c->lr=0x801C3788u; f_8019CD1C(c); // 801C3784
  cmps(c,0,(int32_t)c->r[3],0); // 801C3788
  if (crb(c,2)) { goto L_801C3804; } // 801C378C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3790
  c->lr=0x801C3798u; f_801B5DF0(c); // 801C3794
  c->r[4]=c->r[3]|c->r[3]; // 801C3798
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C379C
  c->lr=0x801C37A4u; f_801B374C(c); // 801C37A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C37A4
  c->lr=0x801C37ACu; f_801B3268(c); // 801C37A8
  c->r[4]=c->r[3]|c->r[3]; // 801C37AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C37B0
  c->lr=0x801C37B8u; f_801B5238(c); // 801C37B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C37B8
  if (!crb(c,2)) { goto L_801C37E0; } // 801C37BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C37C0
  c->lr=0x801C37C8u; f_801B3268(c); // 801C37C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C37C8
  if (!crb(c,2)) { goto L_801C37EC; } // 801C37CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C37D0
  c->lr=0x801C37D8u; f_801B3670(c); // 801C37D4
  cmps(c,0,(int32_t)c->r[3],0); // 801C37D8
  if (crb(c,2)) { goto L_801C37EC; } // 801C37DC
L_801C37E0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C37E0
  c->lr=0x801C37E8u; f_801B2008(c); // 801C37E4
  goto L_801C388C; // 801C37E8
L_801C37EC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C37EC
  c->lr=0x801C37F4u; f_801B1FD4(c); // 801C37F0
  c->r[3]=c->r[31]|c->r[31]; // 801C37F4
  c->r[4]=0u+0x00000065u; // 801C37F8
  c->lr=0x801C3800u; f_8013114C(c); // 801C37FC
  goto L_801C388C; // 801C3800
L_801C3804:;
  c->r[3]=0u+0x00000003u; // 801C3804
  c->lr=0x801C380Cu; f_8019CD1C(c); // 801C3808
  cmps(c,0,(int32_t)c->r[3],0); // 801C380C
  if (crb(c,2)) { goto L_801C381C; } // 801C3810
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3814
  c->lr=0x801C381Cu; f_801B321C(c); // 801C3818
L_801C381C:;
  c->r[3]=0u+0x00000004u; // 801C381C
  c->lr=0x801C3824u; f_8019CD1C(c); // 801C3820
  cmps(c,0,(int32_t)c->r[3],0); // 801C3824
  if (crb(c,2)) { goto L_801C3834; } // 801C3828
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C382C
  c->lr=0x801C3834u; f_801B31D0(c); // 801C3830
L_801C3834:;
  c->r[3]=0u+0x00000006u; // 801C3834
  c->lr=0x801C383Cu; f_8019CD1C(c); // 801C3838
  cmps(c,0,(int32_t)c->r[3],0); // 801C383C
  if (crb(c,2)) { goto L_801C384C; } // 801C3840
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3844
  c->lr=0x801C384Cu; f_801B32C8(c); // 801C3848
L_801C384C:;
  c->r[3]=0u+0x00000005u; // 801C384C
  c->lr=0x801C3854u; f_8019CD1C(c); // 801C3850
  cmps(c,0,(int32_t)c->r[3],0); // 801C3854
  if (crb(c,2)) { goto L_801C3864; } // 801C3858
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C385C
  c->lr=0x801C3864u; f_801B3278(c); // 801C3860
L_801C3864:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3864
  c->lr=0x801C386Cu; f_801B3318(c); // 801C3868
  c->r[4]=c->r[3]|c->r[3]; // 801C386C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3870
  c->lr=0x801C3878u; f_801B7D88(c); // 801C3874
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3878
  c->lr=0x801C3880u; f_801B3268(c); // 801C387C
  c->r[4]=c->r[3]|c->r[3]; // 801C3880
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3884
  c->lr=0x801C388Cu; f_801B5B50(c); // 801C3888
L_801C388C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C388C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3890
  c->lr=c->r[0]; // 801C3894
  c->r[1]=c->r[1]+0x00000010u; // 801C3898
  return; // 801C389C
}

// fn_801C38A0
void f_801C38A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C38A0
  c->r[0]=c->lr; // 801C38A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C38A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C38AC
  c->r[31]=c->r[3]|c->r[3]; // 801C38B0
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C38B4
  c->lr=0x801C38BCu; f_801B3318(c); // 801C38B8
  c->r[4]=c->r[3]|c->r[3]; // 801C38BC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C38C0
  c->lr=0x801C38C8u; f_801B7D88(c); // 801C38C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C38C8
  c->lr=0x801C38D0u; f_801B3268(c); // 801C38CC
  c->r[4]=c->r[3]|c->r[3]; // 801C38D0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C38D4
  c->lr=0x801C38DCu; f_801B5B0C(c); // 801C38D8
  c->r[3]=c->r[31]|c->r[31]; // 801C38DC
  c->r[4]=0u+0x00000066u; // 801C38E0
  c->lr=0x801C38E8u; f_8013114C(c); // 801C38E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C38E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C38EC
  c->lr=c->r[0]; // 801C38F0
  c->r[1]=c->r[1]+0x00000010u; // 801C38F4
  return; // 801C38F8
}

// fn_801C38FC
void f_801C38FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C38FC
  c->r[0]=c->lr; // 801C3900
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3908
  c->r[31]=c->r[3]|c->r[3]; // 801C390C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3910
  c->lr=0x801C3918u; f_801B7E34(c); // 801C3914
  cmps(c,0,(int32_t)c->r[3],0); // 801C3918
  if (crb(c,2)) { goto L_801C3938; } // 801C391C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3920
  c->r[4]=0u+0x00000000u; // 801C3924
  c->lr=0x801C392Cu; f_801B635C(c); // 801C3928
  c->r[3]=c->r[31]|c->r[31]; // 801C392C
  c->r[4]=0u+0x00000067u; // 801C3930
  c->lr=0x801C3938u; f_8013114C(c); // 801C3934
L_801C3938:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3938
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C393C
  c->lr=c->r[0]; // 801C3940
  c->r[1]=c->r[1]+0x00000010u; // 801C3944
  return; // 801C3948
}

// fn_801C394C
void f_801C394C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C394C
  c->r[0]=c->lr; // 801C3950
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3958
  c->r[31]=c->r[3]|c->r[3]; // 801C395C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3960
  c->r[4]=0u+0x00000000u; // 801C3964
  c->lr=0x801C396Cu; f_801B635C(c); // 801C3968
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C396C
  c->lr=0x801C3974u; f_801B1FA0(c); // 801C3970
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3974
  c->lr=0x801C397Cu; f_801B7D38(c); // 801C3978
  c->r[3]=c->r[31]|c->r[31]; // 801C397C
  c->r[4]=0u+0x00000068u; // 801C3980
  c->lr=0x801C3988u; f_8013114C(c); // 801C3984
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3988
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C398C
  c->lr=c->r[0]; // 801C3990
  c->r[1]=c->r[1]+0x00000010u; // 801C3994
  return; // 801C3998
}

// fn_801C399C
void f_801C399C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C399C
  c->r[0]=c->lr; // 801C39A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C39A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C39A8
  c->r[31]=c->r[3]|c->r[3]; // 801C39AC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C39B0
  c->lr=0x801C39B8u; f_801B7E34(c); // 801C39B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C39B8
  if (crb(c,2)) { goto L_801C3A58; } // 801C39BC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C39C0
  c->r[4]=0u+0x00000000u; // 801C39C4
  c->lr=0x801C39CCu; f_801B6354(c); // 801C39C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C39CC
  c->lr=0x801C39D4u; f_801B1EDC(c); // 801C39D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C39D4
  if (crb(c,2)) { goto L_801C39EC; } // 801C39D8
  c->r[3]=c->r[31]|c->r[31]; // 801C39DC
  c->r[4]=0u+0x00000050u; // 801C39E0
  c->lr=0x801C39E8u; f_8013114C(c); // 801C39E4
  goto L_801C3A58; // 801C39E8
L_801C39EC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C39EC
  c->lr=0x801C39F4u; f_801B3268(c); // 801C39F0
  cmps(c,0,(int32_t)c->r[3],1); // 801C39F4
  if (crb(c,2)) { goto L_801C3A4C; } // 801C39F8
  if (!crb(c,0)) { goto L_801C3A58; } // 801C39FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3A00
  if (!crb(c,0)) { goto L_801C3A0C; } // 801C3A04
  goto L_801C3A58; // 801C3A08
L_801C3A0C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3A0C
  c->lr=0x801C3A14u; f_801B5DF0(c); // 801C3A10
  c->r[4]=c->r[3]|c->r[3]; // 801C3A14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3A18
  c->lr=0x801C3A20u; f_801B374C(c); // 801C3A1C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3A20
  c->lr=0x801C3A28u; f_801B3860(c); // 801C3A24
  c->r[0]=0u+0x00000005u; // 801C3A28
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C3A2C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3A30
  c->r[4]=0u+0x00000009u; // 801C3A34
  c->lr=0x801C3A3Cu; f_801B38BC(c); // 801C3A38
  c->r[3]=c->r[31]|c->r[31]; // 801C3A3C
  c->r[4]=0u+0x00000069u; // 801C3A40
  c->lr=0x801C3A48u; f_8013114C(c); // 801C3A44
  goto L_801C3A58; // 801C3A48
L_801C3A4C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C3A4C
  c->r[4]=0u+0x00000050u; // 801C3A50
  c->lr=0x801C3A58u; f_8013114C(c); // 801C3A54
L_801C3A58:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3A5C
  c->lr=c->r[0]; // 801C3A60
  c->r[1]=c->r[1]+0x00000010u; // 801C3A64
  return; // 801C3A68
}

// fn_801C3A6C
void f_801C3A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A6C
  c->r[0]=c->lr; // 801C3A70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3A74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3A78
  c->r[31]=c->r[3]|c->r[3]; // 801C3A7C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C3A80
  c->lr=0x801C3A88u; f_801B203C(c); // 801C3A84
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3A88
  c->lr=0x801C3A90u; f_801B2100(c); // 801C3A8C
  c->r[3]=c->r[31]|c->r[31]; // 801C3A90
  c->r[4]=0u+0x0000006Au; // 801C3A94
  c->lr=0x801C3A9Cu; f_8013114C(c); // 801C3A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3AA0
  c->lr=c->r[0]; // 801C3AA4
  c->r[1]=c->r[1]+0x00000010u; // 801C3AA8
  return; // 801C3AAC
}

// fn_801C3AB0
void f_801C3AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3AB0
  c->r[0]=c->lr; // 801C3AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3ABC
  c->r[31]=c->r[3]|c->r[3]; // 801C3AC0
  c->lr=0x801C3AC8u; f_801C2514(c); // 801C3AC4
  cmps(c,0,(int32_t)c->r[3],0); // 801C3AC8
  if (crb(c,2)) { goto L_801C3AE4; } // 801C3ACC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3AD0
  c->lr=0x801C3AD8u; f_801B7E3C(c); // 801C3AD4
  c->r[3]=c->r[31]|c->r[31]; // 801C3AD8
  c->r[4]=0u+0x0000006Bu; // 801C3ADC
  c->lr=0x801C3AE4u; f_8013114C(c); // 801C3AE0
L_801C3AE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3AE8
  c->lr=c->r[0]; // 801C3AEC
  c->r[1]=c->r[1]+0x00000010u; // 801C3AF0
  return; // 801C3AF4
}

// fn_801C3AF8
void f_801C3AF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3AF8
  c->r[0]=c->lr; // 801C3AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3B00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3B04
  c->r[31]=c->r[3]|c->r[3]; // 801C3B08
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3B0C
  c->r[4]=0u+0x00000003u; // 801C3B10
  c->lr=0x801C3B18u; f_801B7E44(c); // 801C3B14
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B18
  c->r[4]=0u+0x00000000u; // 801C3B1C
  c->lr=0x801C3B24u; f_801B5D40(c); // 801C3B20
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B24
  c->lr=0x801C3B2Cu; f_801B6038(c); // 801C3B28
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B2C
  c->lr=0x801C3B34u; f_801B6B48(c); // 801C3B30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B34
  c->lr=0x801C3B3Cu; f_801B1F6C(c); // 801C3B38
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B3C
  c->lr=0x801C3B44u; f_801B1ED4(c); // 801C3B40
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B44
  c->lr=0x801C3B4Cu; f_801B5F8C(c); // 801C3B48
  c->r[4]=c->r[3]|c->r[3]; // 801C3B4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B50
  c->lr=0x801C3B58u; f_801B2854(c); // 801C3B54
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B58
  c->lr=0x801C3B60u; f_801B2754(c); // 801C3B5C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B60
  c->lr=0x801C3B68u; f_801B2794(c); // 801C3B64
  c->r[4]=c->r[3]|c->r[3]; // 801C3B68
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B6C
  c->lr=0x801C3B74u; f_801B5AFC(c); // 801C3B70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B74
  c->lr=0x801C3B7Cu; f_801B2794(c); // 801C3B78
  c->r[4]=c->r[3]|c->r[3]; // 801C3B7C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B80
  c->lr=0x801C3B88u; f_801B5B94(c); // 801C3B84
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3B88
  c->lr=0x801C3B90u; f_801B283C(c); // 801C3B8C
  c->r[4]=c->r[3]|c->r[3]; // 801C3B90
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3B94
  c->lr=0x801C3B9Cu; f_801B5C44(c); // 801C3B98
  c->r[3]=c->r[31]|c->r[31]; // 801C3B9C
  c->r[4]=0u+0x00000029u; // 801C3BA0
  c->lr=0x801C3BA8u; f_8013114C(c); // 801C3BA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3BA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3BAC
  c->lr=c->r[0]; // 801C3BB0
  c->r[1]=c->r[1]+0x00000010u; // 801C3BB4
  return; // 801C3BB8
}

// fn_801C3BBC
void f_801C3BBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3BBC
  c->r[0]=c->lr; // 801C3BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3BC8
  c->r[31]=c->r[3]|c->r[3]; // 801C3BCC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3BD0
  c->lr=0x801C3BD8u; f_801B6CF4(c); // 801C3BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801C3BD8
  if (crb(c,2)) { goto L_801C3C1C; } // 801C3BDC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3BE0
  c->lr=0x801C3BE8u; f_801B2794(c); // 801C3BE4
  c->r[4]=c->r[3]|c->r[3]; // 801C3BE8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3BEC
  c->lr=0x801C3BF4u; f_801B5B94(c); // 801C3BF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3BF4
  c->lr=0x801C3BFCu; f_801B283C(c); // 801C3BF8
  c->r[4]=c->r[3]|c->r[3]; // 801C3BFC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3C00
  c->lr=0x801C3C08u; f_801B5C44(c); // 801C3C04
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3C08
  c->lr=0x801C3C10u; f_801B6C90(c); // 801C3C0C
  c->r[3]=c->r[31]|c->r[31]; // 801C3C10
  c->r[4]=0u+0x0000002Au; // 801C3C14
  c->lr=0x801C3C1Cu; f_8013114C(c); // 801C3C18
L_801C3C1C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3C20
  c->lr=c->r[0]; // 801C3C24
  c->r[1]=c->r[1]+0x00000010u; // 801C3C28
  return; // 801C3C2C
}

// fn_801C3C30
void f_801C3C30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3C30
  c->r[0]=c->lr; // 801C3C34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3C38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3C3C
  c->r[31]=c->r[3]|c->r[3]; // 801C3C40
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3C44
  c->lr=0x801C3C4Cu; f_801B5F08(c); // 801C3C48
  c->r[4]=c->r[3]|c->r[3]; // 801C3C4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3C50
  c->lr=0x801C3C58u; f_801B2844(c); // 801C3C54
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3C58
  c->lr=0x801C3C60u; f_801B5E84(c); // 801C3C5C
  c->r[4]=c->r[3]|c->r[3]; // 801C3C60
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3C64
  c->lr=0x801C3C6Cu; f_801B284C(c); // 801C3C68
  c->r[3]=c->r[31]|c->r[31]; // 801C3C6C
  c->r[4]=0u+0x0000002Bu; // 801C3C70
  c->lr=0x801C3C78u; f_8013114C(c); // 801C3C74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3C78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3C7C
  c->lr=c->r[0]; // 801C3C80
  c->r[1]=c->r[1]+0x00000010u; // 801C3C84
  return; // 801C3C88
}

// fn_801C3C8C
void f_801C3C8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3C8C
  c->r[0]=c->lr; // 801C3C90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3C94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3C98
  c->r[31]=c->r[3]|c->r[3]; // 801C3C9C
  c->r[3]=0u+0x00000001u; // 801C3CA0
  c->lr=0x801C3CA8u; f_8019CD1C(c); // 801C3CA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C3CA8
  if (crb(c,2)) { goto L_801C3CC8; } // 801C3CAC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3CB0
  c->lr=0x801C3CB8u; f_801B1ECC(c); // 801C3CB4
  c->r[3]=c->r[31]|c->r[31]; // 801C3CB8
  c->r[4]=0u+0x0000002Cu; // 801C3CBC
  c->lr=0x801C3CC4u; f_8013114C(c); // 801C3CC0
  goto L_801C3DD0; // 801C3CC4
L_801C3CC8:;
  c->r[3]=0u+0x00000000u; // 801C3CC8
  c->lr=0x801C3CD0u; f_8019CD1C(c); // 801C3CCC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3CD0
  if (crb(c,2)) { goto L_801C3D20; } // 801C3CD4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3CD8
  c->lr=0x801C3CE0u; f_801B2794(c); // 801C3CDC
  c->r[4]=c->r[3]|c->r[3]; // 801C3CE0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3CE4
  c->lr=0x801C3CECu; f_801B5B94(c); // 801C3CE8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3CEC
  c->lr=0x801C3CF4u; f_801B283C(c); // 801C3CF0
  c->r[4]=c->r[3]|c->r[3]; // 801C3CF4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3CF8
  c->lr=0x801C3D00u; f_801B5C44(c); // 801C3CFC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3D00
  c->lr=0x801C3D08u; f_801B6C90(c); // 801C3D04
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D08
  c->lr=0x801C3D10u; f_801B1FD4(c); // 801C3D0C
  c->r[3]=c->r[31]|c->r[31]; // 801C3D10
  c->r[4]=0u+0x0000002Cu; // 801C3D14
  c->lr=0x801C3D1Cu; f_8013114C(c); // 801C3D18
  goto L_801C3DD0; // 801C3D1C
L_801C3D20:;
  c->r[3]=0u+0x00000003u; // 801C3D20
  c->lr=0x801C3D28u; f_8019CD1C(c); // 801C3D24
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D28
  if (crb(c,2)) { goto L_801C3D38; } // 801C3D2C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D30
  c->lr=0x801C3D38u; f_801B26F4(c); // 801C3D34
L_801C3D38:;
  c->r[3]=0u+0x00000004u; // 801C3D38
  c->lr=0x801C3D40u; f_8019CD1C(c); // 801C3D3C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D40
  if (crb(c,2)) { goto L_801C3D50; } // 801C3D44
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D48
  c->lr=0x801C3D50u; f_801B2694(c); // 801C3D4C
L_801C3D50:;
  c->r[3]=0u+0x00000006u; // 801C3D50
  c->lr=0x801C3D58u; f_8019CD1C(c); // 801C3D54
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D58
  if (crb(c,2)) { goto L_801C3D78; } // 801C3D5C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3D60
  c->lr=0x801C3D68u; f_801B6028(c); // 801C3D64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D68
  c->lr=0x801C3D70u; f_801B27EC(c); // 801C3D6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D70
  c->lr=0x801C3D78u; f_801B2754(c); // 801C3D74
L_801C3D78:;
  c->r[3]=0u+0x00000005u; // 801C3D78
  c->lr=0x801C3D80u; f_8019CD1C(c); // 801C3D7C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D80
  if (crb(c,2)) { goto L_801C3DA0; } // 801C3D84
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3D88
  c->lr=0x801C3D90u; f_801B6030(c); // 801C3D8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D90
  c->lr=0x801C3D98u; f_801B279C(c); // 801C3D94
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3D98
  c->lr=0x801C3DA0u; f_801B2754(c); // 801C3D9C
L_801C3DA0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3DA0
  c->lr=0x801C3DA8u; f_801B2794(c); // 801C3DA4
  c->r[4]=c->r[3]|c->r[3]; // 801C3DA8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3DAC
  c->lr=0x801C3DB4u; f_801B5B94(c); // 801C3DB0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3DB4
  c->lr=0x801C3DBCu; f_801B283C(c); // 801C3DB8
  c->r[4]=c->r[3]|c->r[3]; // 801C3DBC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3DC0
  c->lr=0x801C3DC8u; f_801B5C44(c); // 801C3DC4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3DC8
  c->lr=0x801C3DD0u; f_801B6C90(c); // 801C3DCC
L_801C3DD0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3DD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3DD4
  c->lr=c->r[0]; // 801C3DD8
  c->r[1]=c->r[1]+0x00000010u; // 801C3DDC
  return; // 801C3DE0
}

// fn_801C3DE4
void f_801C3DE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3DE4
  c->r[0]=c->lr; // 801C3DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3DF0
  c->r[31]=c->r[3]|c->r[3]; // 801C3DF4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C3DF8
  c->lr=0x801C3E00u; f_801B1FA0(c); // 801C3DFC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3E00
  c->lr=0x801C3E08u; f_801B1EDC(c); // 801C3E04
  cmps(c,0,(int32_t)c->r[3],0); // 801C3E08
  if (crb(c,2)) { goto L_801C3E1C; } // 801C3E0C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3E10
  c->lr=0x801C3E18u; f_801B6BC0(c); // 801C3E14
  goto L_801C3E24; // 801C3E18
L_801C3E1C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3E1C
  c->lr=0x801C3E24u; f_801B6C2C(c); // 801C3E20
L_801C3E24:;
  c->r[3]=c->r[31]|c->r[31]; // 801C3E24
  c->r[4]=0u+0x0000002Du; // 801C3E28
  c->lr=0x801C3E30u; f_8013114C(c); // 801C3E2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3E34
  c->lr=c->r[0]; // 801C3E38
  c->r[1]=c->r[1]+0x00000010u; // 801C3E3C
  return; // 801C3E40
}

// fn_801C3E44
void f_801C3E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3E44
  c->r[0]=c->lr; // 801C3E48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3E4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3E50
  c->r[31]=c->r[3]|c->r[3]; // 801C3E54
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3E58
  c->lr=0x801C3E60u; f_801B6CF4(c); // 801C3E5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3E60
  if (crb(c,2)) { goto L_801C3EA0; } // 801C3E64
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3E68
  c->r[4]=0u+0x00000000u; // 801C3E6C
  c->lr=0x801C3E74u; f_801B6264(c); // 801C3E70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3E74
  c->lr=0x801C3E7Cu; f_801B1EDC(c); // 801C3E78
  cmps(c,0,(int32_t)c->r[3],0); // 801C3E7C
  if (crb(c,2)) { goto L_801C3E94; } // 801C3E80
  c->r[3]=c->r[31]|c->r[31]; // 801C3E84
  c->r[4]=0u+0x00000005u; // 801C3E88
  c->lr=0x801C3E90u; f_8013114C(c); // 801C3E8C
  goto L_801C3EA0; // 801C3E90
L_801C3E94:;
  c->r[3]=c->r[31]|c->r[31]; // 801C3E94
  c->r[4]=0u+0x0000002Eu; // 801C3E98
  c->lr=0x801C3EA0u; f_8013114C(c); // 801C3E9C
L_801C3EA0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3EA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3EA4
  c->lr=c->r[0]; // 801C3EA8
  c->r[1]=c->r[1]+0x00000010u; // 801C3EAC
  return; // 801C3EB0
}

// fn_801C3EB4
void f_801C3EB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3EB4
  c->r[0]=c->lr; // 801C3EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3EC0
  c->r[31]=c->r[3]|c->r[3]; // 801C3EC4
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3EC8
  c->lr=0x801C3ED0u; f_801B6038(c); // 801C3ECC
  c->r[0]=R32(c->r[31]+0x000000F4u); // 801C3ED0
  cmps(c,0,(int32_t)c->r[0],0); // 801C3ED4
  if (!crb(c,2)) { goto L_801C3EF0; } // 801C3ED8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3EDC
  c->lr=0x801C3EE4u; f_801B6CF8(c); // 801C3EE0
  c->r[0]=0u+0x00000001u; // 801C3EE4
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801C3EE8
  goto L_801C3F30; // 801C3EEC
L_801C3EF0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3EF0
  c->lr=0x801C3EF8u; f_801B2900(c); // 801C3EF4
  cmps(c,0,(int32_t)c->r[3],1); // 801C3EF8
  if (!crb(c,2)) { goto L_801C3F0C; } // 801C3EFC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3F00
  c->lr=0x801C3F08u; f_801B6D60(c); // 801C3F04
  goto L_801C3F30; // 801C3F08
L_801C3F0C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3F0C
  c->lr=0x801C3F14u; f_801B2900(c); // 801C3F10
  cmps(c,0,(int32_t)c->r[3],0); // 801C3F14
  if (!crb(c,2)) { goto L_801C3F28; } // 801C3F18
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3F1C
  c->lr=0x801C3F24u; f_801B6DC8(c); // 801C3F20
  goto L_801C3F30; // 801C3F24
L_801C3F28:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3F28
  c->lr=0x801C3F30u; f_801B6CF8(c); // 801C3F2C
L_801C3F30:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3F30
  c->lr=0x801C3F38u; f_801B1F6C(c); // 801C3F34
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3F38
  c->lr=0x801C3F40u; f_801B1ED4(c); // 801C3F3C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3F40
  c->lr=0x801C3F48u; f_801B5220(c); // 801C3F44
  c->r[4]=c->r[3]|c->r[3]; // 801C3F48
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3F4C
  c->lr=0x801C3F54u; f_801B2908(c); // 801C3F50
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3F54
  c->lr=0x801C3F5Cu; f_801B28F4(c); // 801C3F58
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3F5C
  c->lr=0x801C3F64u; f_801B2900(c); // 801C3F60
  c->r[4]=c->r[3]|c->r[3]; // 801C3F64
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3F68
  c->lr=0x801C3F70u; f_801B5AFC(c); // 801C3F6C
  c->r[3]=c->r[31]|c->r[31]; // 801C3F70
  c->r[4]=0u+0x0000002Fu; // 801C3F74
  c->lr=0x801C3F7Cu; f_8013114C(c); // 801C3F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3F80
  c->lr=c->r[0]; // 801C3F84
  c->r[1]=c->r[1]+0x00000010u; // 801C3F88
  return; // 801C3F8C
}

// fn_801C3F90
void f_801C3F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3F90
  c->r[0]=c->lr; // 801C3F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3F9C
  c->r[31]=c->r[3]|c->r[3]; // 801C3FA0
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C3FA4
  c->lr=0x801C3FACu; f_801B6F38(c); // 801C3FA8
  cmps(c,0,(int32_t)c->r[3],0); // 801C3FAC
  if (crb(c,2)) { goto L_801C3FDC; } // 801C3FB0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3FB4
  c->lr=0x801C3FBCu; f_801B6EF0(c); // 801C3FB8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C3FBC
  c->lr=0x801C3FC4u; f_801B2900(c); // 801C3FC0
  c->r[4]=c->r[3]|c->r[3]; // 801C3FC4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C3FC8
  c->lr=0x801C3FD0u; f_801B5B50(c); // 801C3FCC
  c->r[3]=c->r[31]|c->r[31]; // 801C3FD0
  c->r[4]=0u+0x00000030u; // 801C3FD4
  c->lr=0x801C3FDCu; f_8013114C(c); // 801C3FD8
L_801C3FDC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3FDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3FE0
  c->lr=c->r[0]; // 801C3FE4
  c->r[1]=c->r[1]+0x00000010u; // 801C3FE8
  return; // 801C3FEC
}

// fn_801C3FF0
void f_801C3FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3FF0
  c->r[0]=c->lr; // 801C3FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3FFC
  c->r[31]=c->r[3]|c->r[3]; // 801C4000
  c->r[3]=0u+0x00000001u; // 801C4004
  c->lr=0x801C400Cu; f_8019CD1C(c); // 801C4008
  cmps(c,0,(int32_t)c->r[3],0); // 801C400C
  if (crb(c,2)) { goto L_801C402C; } // 801C4010
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4014
  c->lr=0x801C401Cu; f_801B1ECC(c); // 801C4018
  c->r[3]=c->r[31]|c->r[31]; // 801C401C
  c->r[4]=0u+0x00000033u; // 801C4020
  c->lr=0x801C4028u; f_8013114C(c); // 801C4024
  goto L_801C40C8; // 801C4028
L_801C402C:;
  c->r[3]=0u+0x00000000u; // 801C402C
  c->lr=0x801C4034u; f_8019CD1C(c); // 801C4030
  cmps(c,0,(int32_t)c->r[3],0); // 801C4034
  if (crb(c,2)) { goto L_801C407C; } // 801C4038
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C403C
  c->lr=0x801C4044u; f_801B2900(c); // 801C4040
  c->r[4]=c->r[3]|c->r[3]; // 801C4044
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4048
  c->lr=0x801C4050u; f_801B5238(c); // 801C404C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4050
  if (crb(c,2)) { goto L_801C4064; } // 801C4054
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4058
  c->lr=0x801C4060u; f_801B2008(c); // 801C405C
  goto L_801C40C8; // 801C4060
L_801C4064:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4064
  c->lr=0x801C406Cu; f_801B1FD4(c); // 801C4068
  c->r[3]=c->r[31]|c->r[31]; // 801C406C
  c->r[4]=0u+0x00000031u; // 801C4070
  c->lr=0x801C4078u; f_8013114C(c); // 801C4074
  goto L_801C40C8; // 801C4078
L_801C407C:;
  c->r[3]=0u+0x00000003u; // 801C407C
  c->lr=0x801C4084u; f_8019CD1C(c); // 801C4080
  cmps(c,0,(int32_t)c->r[3],0); // 801C4084
  if (crb(c,2)) { goto L_801C4094; } // 801C4088
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C408C
  c->lr=0x801C4094u; f_801B28A8(c); // 801C4090
L_801C4094:;
  c->r[3]=0u+0x00000004u; // 801C4094
  c->lr=0x801C409Cu; f_8019CD1C(c); // 801C4098
  cmps(c,0,(int32_t)c->r[3],0); // 801C409C
  if (crb(c,2)) { goto L_801C40AC; } // 801C40A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C40A4
  c->lr=0x801C40ACu; f_801B285C(c); // 801C40A8
L_801C40AC:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C40AC
  c->lr=0x801C40B4u; f_801B6EF0(c); // 801C40B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C40B4
  c->lr=0x801C40BCu; f_801B2900(c); // 801C40B8
  c->r[4]=c->r[3]|c->r[3]; // 801C40BC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C40C0
  c->lr=0x801C40C8u; f_801B5B50(c); // 801C40C4
L_801C40C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C40C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C40CC
  c->lr=c->r[0]; // 801C40D0
  c->r[1]=c->r[1]+0x00000010u; // 801C40D4
  return; // 801C40D8
}

// fn_801C40DC
void f_801C40DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C40DC
  c->r[0]=c->lr; // 801C40E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C40E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C40E8
  c->r[31]=c->r[3]|c->r[3]; // 801C40EC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C40F0
  c->lr=0x801C40F8u; f_801B2900(c); // 801C40F4
  c->r[4]=c->r[3]|c->r[3]; // 801C40F8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C40FC
  c->lr=0x801C4104u; f_801B5B0C(c); // 801C4100
  c->r[3]=c->r[31]|c->r[31]; // 801C4104
  c->r[4]=0u+0x00000032u; // 801C4108
  c->lr=0x801C4110u; f_8013114C(c); // 801C410C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4110
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4114
  c->lr=c->r[0]; // 801C4118
  c->r[1]=c->r[1]+0x00000010u; // 801C411C
  return; // 801C4120
}

// fn_801C4124
void f_801C4124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4124
  c->r[0]=c->lr; // 801C4128
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C412C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4130
  c->r[31]=c->r[3]|c->r[3]; // 801C4134
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4138
  c->lr=0x801C4140u; f_801B6F38(c); // 801C413C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4140
  if (crb(c,2)) { goto L_801C4160; } // 801C4144
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4148
  c->r[4]=0u+0x00000000u; // 801C414C
  c->lr=0x801C4154u; f_801B635C(c); // 801C4150
  c->r[3]=c->r[31]|c->r[31]; // 801C4154
  c->r[4]=0u+0x00000033u; // 801C4158
  c->lr=0x801C4160u; f_8013114C(c); // 801C415C
L_801C4160:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4160
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4164
  c->lr=c->r[0]; // 801C4168
  c->r[1]=c->r[1]+0x00000010u; // 801C416C
  return; // 801C4170
}

// fn_801C4174
void f_801C4174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4174
  c->r[0]=c->lr; // 801C4178
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C417C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4180
  c->r[31]=c->r[3]|c->r[3]; // 801C4184
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4188
  c->r[4]=0u+0x00000000u; // 801C418C
  c->lr=0x801C4194u; f_801B635C(c); // 801C4190
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4194
  c->lr=0x801C419Cu; f_801B1EDC(c); // 801C4198
  cmps(c,0,(int32_t)c->r[3],0); // 801C419C
  if (crb(c,2)) { goto L_801C41B0; } // 801C41A0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C41A4
  c->lr=0x801C41ACu; f_801B6E30(c); // 801C41A8
  goto L_801C4220; // 801C41AC
L_801C41B0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C41B0
  c->lr=0x801C41B8u; f_801B2900(c); // 801C41B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C41B8
  if (!crb(c,2)) { goto L_801C4218; } // 801C41BC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C41C0
  c->lr=0x801C41C8u; f_801B5DF0(c); // 801C41C4
  c->r[4]=c->r[3]|c->r[3]; // 801C41C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C41CC
  c->lr=0x801C41D4u; f_801B374C(c); // 801C41D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C41D4
  c->lr=0x801C41DCu; f_801B36BC(c); // 801C41D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C41DC
  if (crb(c,2)) { goto L_801C41F0; } // 801C41E0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C41E4
  c->lr=0x801C41ECu; f_801B6E30(c); // 801C41E8
  goto L_801C4220; // 801C41EC
L_801C41F0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C41F0
  c->lr=0x801C41F8u; f_801B3704(c); // 801C41F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C41F8
  if (crb(c,2)) { goto L_801C420C; } // 801C41FC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4200
  c->lr=0x801C4208u; f_801B6E30(c); // 801C4204
  goto L_801C4220; // 801C4208
L_801C420C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C420C
  c->lr=0x801C4214u; f_801B6EB0(c); // 801C4210
  goto L_801C4220; // 801C4214
L_801C4218:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4218
  c->lr=0x801C4220u; f_801B6E78(c); // 801C421C
L_801C4220:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4220
  c->lr=0x801C4228u; f_801B1FA0(c); // 801C4224
  c->r[3]=c->r[31]|c->r[31]; // 801C4228
  c->r[4]=0u+0x00000034u; // 801C422C
  c->lr=0x801C4234u; f_8013114C(c); // 801C4230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4234
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4238
  c->lr=c->r[0]; // 801C423C
  c->r[1]=c->r[1]+0x00000010u; // 801C4240
  return; // 801C4244
}

// fn_801C4248
void f_801C4248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4248
  c->r[0]=c->lr; // 801C424C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4250
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4254
  c->r[31]=c->r[3]|c->r[3]; // 801C4258
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C425C
  c->lr=0x801C4264u; f_801B6F38(c); // 801C4260
  cmps(c,0,(int32_t)c->r[3],0); // 801C4264
  if (crb(c,2)) { goto L_801C4398; } // 801C4268
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C426C
  c->lr=0x801C4274u; f_801B1EDC(c); // 801C4270
  cmps(c,0,(int32_t)c->r[3],0); // 801C4274
  if (crb(c,2)) { goto L_801C42A0; } // 801C4278
  c->r[0]=0u+0x00000000u; // 801C427C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801C4280
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4284
  c->r[4]=0u+0x00000000u; // 801C4288
  c->lr=0x801C4290u; f_801B626C(c); // 801C428C
  c->r[3]=c->r[31]|c->r[31]; // 801C4290
  c->r[4]=0u+0x00000028u; // 801C4294
  c->lr=0x801C429Cu; f_8013114C(c); // 801C4298
  goto L_801C4398; // 801C429C
L_801C42A0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C42A0
  c->lr=0x801C42A8u; f_801B2900(c); // 801C42A4
  cmps(c,0,(int32_t)c->r[3],1); // 801C42A8
  if (crb(c,2)) { goto L_801C436C; } // 801C42AC
  if (!crb(c,0)) { goto L_801C4398; } // 801C42B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C42B4
  if (!crb(c,0)) { goto L_801C42C0; } // 801C42B8
  goto L_801C4398; // 801C42BC
L_801C42C0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C42C0
  c->lr=0x801C42C8u; f_801B36BC(c); // 801C42C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C42C8
  if (crb(c,2)) { goto L_801C4308; } // 801C42CC
  c->r[0]=0u+0x00000000u; // 801C42D0
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801C42D4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C42D8
  c->r[4]=0u+0x00000000u; // 801C42DC
  c->lr=0x801C42E4u; f_801B626C(c); // 801C42E0
  c->r[0]=0u+0x00000028u; // 801C42E4
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C42E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C42EC
  c->r[4]=0u+0x00000005u; // 801C42F0
  c->lr=0x801C42F8u; f_801B396C(c); // 801C42F4
  c->r[3]=c->r[31]|c->r[31]; // 801C42F8
  c->r[4]=0u+0x0000006Bu; // 801C42FC
  c->lr=0x801C4304u; f_8013114C(c); // 801C4300
  goto L_801C4398; // 801C4304
L_801C4308:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4308
  c->lr=0x801C4310u; f_801B3704(c); // 801C430C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4310
  if (crb(c,2)) { goto L_801C4350; } // 801C4314
  c->r[0]=0u+0x00000000u; // 801C4318
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801C431C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4320
  c->r[4]=0u+0x00000000u; // 801C4324
  c->lr=0x801C432Cu; f_801B626C(c); // 801C4328
  c->r[0]=0u+0x00000028u; // 801C432C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C4330
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4334
  c->r[4]=0u+0x00000007u; // 801C4338
  c->lr=0x801C4340u; f_801B396C(c); // 801C433C
  c->r[3]=c->r[31]|c->r[31]; // 801C4340
  c->r[4]=0u+0x0000006Bu; // 801C4344
  c->lr=0x801C434Cu; f_8013114C(c); // 801C4348
  goto L_801C4398; // 801C434C
L_801C4350:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4350
  c->r[4]=0u+0x00000000u; // 801C4354
  c->lr=0x801C435Cu; f_801B62B4(c); // 801C4358
  c->r[3]=c->r[31]|c->r[31]; // 801C435C
  c->r[4]=0u+0x0000003Au; // 801C4360
  c->lr=0x801C4368u; f_8013114C(c); // 801C4364
  goto L_801C4398; // 801C4368
L_801C436C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C436C
  c->r[4]=0u+0x00000000u; // 801C4370
  c->lr=0x801C4378u; f_801B6018(c); // 801C4374
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4378
  c->r[4]=0u+0x00000000u; // 801C437C
  c->lr=0x801C4384u; f_801B62B4(c); // 801C4380
  c->r[0]=0u+0x0000002Eu; // 801C4384
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C4388
  c->r[3]=c->r[31]|c->r[31]; // 801C438C
  c->r[4]=0u+0x00000035u; // 801C4390
  c->lr=0x801C4398u; f_8013114C(c); // 801C4394
L_801C4398:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4398
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C439C
  c->lr=c->r[0]; // 801C43A0
  c->r[1]=c->r[1]+0x00000010u; // 801C43A4
  return; // 801C43A8
}

// fn_801C43AC
void f_801C43AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C43AC
  c->r[0]=c->lr; // 801C43B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C43B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C43B8
  c->r[31]=c->r[3]|c->r[3]; // 801C43BC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C43C0
  c->lr=0x801C43C8u; f_801B6020(c); // 801C43C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C43C8
  if (crb(c,2)) { goto L_801C43F4; } // 801C43CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C43D0
  c->lr=0x801C43D8u; f_801B2D44(c); // 801C43D4
  c->r[4]=c->r[3]|c->r[3]; // 801C43D8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C43DC
  c->lr=0x801C43E4u; f_801B7224(c); // 801C43E0
  c->r[4]=c->r[3]|c->r[3]; // 801C43E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C43E8
  c->lr=0x801C43F0u; f_801B29C4(c); // 801C43EC
  goto L_801C440C; // 801C43F0
L_801C43F4:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C43F4
  c->r[4]=0u+0x00000000u; // 801C43F8
  c->lr=0x801C4400u; f_801B7224(c); // 801C43FC
  c->r[4]=c->r[3]|c->r[3]; // 801C4400
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4404
  c->lr=0x801C440Cu; f_801B29C4(c); // 801C4408
L_801C440C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C440C
  c->lr=0x801C4414u; f_801B6020(c); // 801C4410
  cmps(c,0,(int32_t)c->r[3],0); // 801C4414
  if (crb(c,2)) { goto L_801C4428; } // 801C4418
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C441C
  c->lr=0x801C4424u; f_801B6F90(c); // 801C4420
  goto L_801C4430; // 801C4424
L_801C4428:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4428
  c->lr=0x801C4430u; f_801B6F3C(c); // 801C442C
L_801C4430:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4430
  c->lr=0x801C4438u; f_801B29B8(c); // 801C4434
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4438
  c->lr=0x801C4440u; f_801B29B0(c); // 801C443C
  c->r[4]=c->r[3]|c->r[3]; // 801C4440
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4444
  c->lr=0x801C444Cu; f_801B5B04(c); // 801C4448
  c->r[3]=c->r[31]|c->r[31]; // 801C444C
  c->r[4]=0u+0x00000036u; // 801C4450
  c->lr=0x801C4458u; f_8013114C(c); // 801C4454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4458
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C445C
  c->lr=c->r[0]; // 801C4460
  c->r[1]=c->r[1]+0x00000010u; // 801C4464
  return; // 801C4468
}

// fn_801C446C
void f_801C446C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C446C
  c->r[0]=c->lr; // 801C4470
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4478
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C447C
  c->r[30]=c->r[3]|c->r[3]; // 801C4480
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4484
  c->lr=0x801C448Cu; f_801B7220(c); // 801C4488
  cmps(c,0,(int32_t)c->r[3],0); // 801C448C
  if (crb(c,2)) { goto L_801C44EC; } // 801C4490
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C4494
  c->lr=0x801C449Cu; f_801B6020(c); // 801C4498
  cmps(c,0,(int32_t)c->r[3],0); // 801C449C
  if (crb(c,2)) { goto L_801C44CC; } // 801C44A0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C44A4
  c->lr=0x801C44ACu; f_801B2D44(c); // 801C44A8
  c->r[31]=c->r[3]|c->r[3]; // 801C44AC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C44B0
  c->lr=0x801C44B8u; f_801B29B0(c); // 801C44B4
  c->r[4]=c->r[3]|c->r[3]; // 801C44B8
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C44BC
  c->r[5]=c->r[31]|c->r[31]; // 801C44C0
  c->lr=0x801C44C8u; f_801B7138(c); // 801C44C4
  goto L_801C44E0; // 801C44C8
L_801C44CC:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C44CC
  c->lr=0x801C44D4u; f_801B29B0(c); // 801C44D0
  c->r[4]=c->r[3]|c->r[3]; // 801C44D4
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C44D8
  c->lr=0x801C44E0u; f_801B707C(c); // 801C44DC
L_801C44E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801C44E0
  c->r[4]=0u+0x00000037u; // 801C44E4
  c->lr=0x801C44ECu; f_8013114C(c); // 801C44E8
L_801C44EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C44EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C44F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C44F4
  c->lr=c->r[0]; // 801C44F8
  c->r[1]=c->r[1]+0x00000010u; // 801C44FC
  return; // 801C4500
}

// fn_801C4504
void f_801C4504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4504
  c->r[0]=c->lr; // 801C4508
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C450C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4510
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4514
  c->r[30]=c->r[3]|c->r[3]; // 801C4518
  c->r[3]=0u+0x00000001u; // 801C451C
  c->lr=0x801C4524u; f_8019CD1C(c); // 801C4520
  cmps(c,0,(int32_t)c->r[3],0); // 801C4524
  if (crb(c,2)) { goto L_801C4544; } // 801C4528
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C452C
  c->lr=0x801C4534u; f_801B1ECC(c); // 801C4530
  c->r[3]=c->r[30]|c->r[30]; // 801C4534
  c->r[4]=0u+0x00000038u; // 801C4538
  c->lr=0x801C4540u; f_8013114C(c); // 801C453C
  goto L_801C45C0; // 801C4540
L_801C4544:;
  c->r[3]=0u+0x00000006u; // 801C4544
  c->lr=0x801C454Cu; f_8019CD1C(c); // 801C4548
  cmps(c,0,(int32_t)c->r[3],0); // 801C454C
  if (crb(c,2)) { goto L_801C455C; } // 801C4550
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C4554
  c->lr=0x801C455Cu; f_801B2960(c); // 801C4558
L_801C455C:;
  c->r[3]=0u+0x00000005u; // 801C455C
  c->lr=0x801C4564u; f_8019CD1C(c); // 801C4560
  cmps(c,0,(int32_t)c->r[3],0); // 801C4564
  if (crb(c,2)) { goto L_801C4574; } // 801C4568
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C456C
  c->lr=0x801C4574u; f_801B2910(c); // 801C4570
L_801C4574:;
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C4574
  c->lr=0x801C457Cu; f_801B6020(c); // 801C4578
  cmps(c,0,(int32_t)c->r[3],0); // 801C457C
  if (crb(c,2)) { goto L_801C45AC; } // 801C4580
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C4584
  c->lr=0x801C458Cu; f_801B2D44(c); // 801C4588
  c->r[31]=c->r[3]|c->r[3]; // 801C458C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C4590
  c->lr=0x801C4598u; f_801B29B0(c); // 801C4594
  c->r[4]=c->r[3]|c->r[3]; // 801C4598
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C459C
  c->r[5]=c->r[31]|c->r[31]; // 801C45A0
  c->lr=0x801C45A8u; f_801B7138(c); // 801C45A4
  goto L_801C45C0; // 801C45A8
L_801C45AC:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C45AC
  c->lr=0x801C45B4u; f_801B29B0(c); // 801C45B0
  c->r[4]=c->r[3]|c->r[3]; // 801C45B4
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C45B8
  c->lr=0x801C45C0u; f_801B707C(c); // 801C45BC
L_801C45C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C45C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C45C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C45C8
  c->lr=c->r[0]; // 801C45CC
  c->r[1]=c->r[1]+0x00000010u; // 801C45D0
  return; // 801C45D4
}

// fn_801C45D8
void f_801C45D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C45D8
  c->r[0]=c->lr; // 801C45DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C45E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C45E4
  c->r[31]=c->r[3]|c->r[3]; // 801C45E8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C45EC
  c->lr=0x801C45F4u; f_801B6020(c); // 801C45F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C45F4
  if (crb(c,2)) { goto L_801C4608; } // 801C45F8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C45FC
  c->lr=0x801C4604u; f_801B7030(c); // 801C4600
  goto L_801C4610; // 801C4604
L_801C4608:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4608
  c->lr=0x801C4610u; f_801B6FE4(c); // 801C460C
L_801C4610:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4610
  c->r[4]=0u+0x00000039u; // 801C4614
  c->lr=0x801C461Cu; f_8013114C(c); // 801C4618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C461C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4620
  c->lr=c->r[0]; // 801C4624
  c->r[1]=c->r[1]+0x00000010u; // 801C4628
  return; // 801C462C
}

// fn_801C4630
void f_801C4630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4630
  c->r[0]=c->lr; // 801C4634
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4638
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C463C
  c->r[31]=c->r[3]|c->r[3]; // 801C4640
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4644
  c->lr=0x801C464Cu; f_801B7220(c); // 801C4648
  cmps(c,0,(int32_t)c->r[3],0); // 801C464C
  if (crb(c,2)) { goto L_801C466C; } // 801C4650
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4654
  c->r[4]=0u+0x00000000u; // 801C4658
  c->lr=0x801C4660u; f_801B6304(c); // 801C465C
  c->r[3]=c->r[31]|c->r[31]; // 801C4660
  c->r[4]=R32(c->r[31]+0x000000F0u); // 801C4664
  c->lr=0x801C466Cu; f_8013114C(c); // 801C4668
L_801C466C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C466C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4670
  c->lr=c->r[0]; // 801C4674
  c->r[1]=c->r[1]+0x00000010u; // 801C4678
  return; // 801C467C
}

// fn_801C4680
void f_801C4680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4680
  c->r[0]=c->lr; // 801C4684
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C468C
  c->r[31]=c->r[3]|c->r[3]; // 801C4690
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4694
  c->r[4]=0u+0x00000001u; // 801C4698
  c->lr=0x801C46A0u; f_801B6010(c); // 801C469C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C46A0
  c->r[4]=0u+0x00000000u; // 801C46A4
  c->lr=0x801C46ACu; f_801B5D94(c); // 801C46A8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C46AC
  c->lr=0x801C46B4u; f_801B6038(c); // 801C46B0
  c->r[0]=R32(c->r[31]+0x000000F8u); // 801C46B4
  cmps(c,0,(int32_t)c->r[0],0); // 801C46B8
  if (crb(c,2)) { goto L_801C46D4; } // 801C46BC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C46C0
  c->lr=0x801C46C8u; f_801B72F4(c); // 801C46C4
  c->r[0]=0u+0x00000000u; // 801C46C8
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801C46CC
  goto L_801C46DC; // 801C46D0
L_801C46D4:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C46D4
  c->lr=0x801C46DCu; f_801B728C(c); // 801C46D8
L_801C46DC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C46DC
  c->lr=0x801C46E4u; f_801B1F6C(c); // 801C46E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C46E4
  c->lr=0x801C46ECu; f_801B1ED4(c); // 801C46E8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C46EC
  c->lr=0x801C46F4u; f_801B5F8C(c); // 801C46F0
  c->r[4]=c->r[3]|c->r[3]; // 801C46F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C46F8
  c->lr=0x801C4700u; f_801B2BE4(c); // 801C46FC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4700
  c->lr=0x801C4708u; f_801B2AD8(c); // 801C4704
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4708
  c->lr=0x801C4710u; f_801B2B24(c); // 801C470C
  c->r[4]=c->r[3]|c->r[3]; // 801C4710
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4714
  c->lr=0x801C471Cu; f_801B5AFC(c); // 801C4718
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C471C
  c->lr=0x801C4724u; f_801B2B24(c); // 801C4720
  c->r[4]=c->r[3]|c->r[3]; // 801C4724
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4728
  c->lr=0x801C4730u; f_801B5B94(c); // 801C472C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4730
  c->lr=0x801C4738u; f_801B2BCC(c); // 801C4734
  c->r[4]=c->r[3]|c->r[3]; // 801C4738
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C473C
  c->lr=0x801C4744u; f_801B5C44(c); // 801C4740
  c->r[3]=c->r[31]|c->r[31]; // 801C4744
  c->r[4]=0u+0x0000003Bu; // 801C4748
  c->lr=0x801C4750u; f_8013114C(c); // 801C474C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4750
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4754
  c->lr=c->r[0]; // 801C4758
  c->r[1]=c->r[1]+0x00000010u; // 801C475C
  return; // 801C4760
}

// fn_801C4764
void f_801C4764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4764
  c->r[0]=c->lr; // 801C4768
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C476C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4770
  c->r[31]=c->r[3]|c->r[3]; // 801C4774
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4778
  c->lr=0x801C4780u; f_801B7444(c); // 801C477C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4780
  if (crb(c,2)) { goto L_801C47C4; } // 801C4784
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4788
  c->lr=0x801C4790u; f_801B2B24(c); // 801C478C
  c->r[4]=c->r[3]|c->r[3]; // 801C4790
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4794
  c->lr=0x801C479Cu; f_801B5B94(c); // 801C4798
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C479C
  c->lr=0x801C47A4u; f_801B2BCC(c); // 801C47A0
  c->r[4]=c->r[3]|c->r[3]; // 801C47A4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C47A8
  c->lr=0x801C47B0u; f_801B5C44(c); // 801C47AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C47B0
  c->lr=0x801C47B8u; f_801B73C4(c); // 801C47B4
  c->r[3]=c->r[31]|c->r[31]; // 801C47B8
  c->r[4]=0u+0x0000003Cu; // 801C47BC
  c->lr=0x801C47C4u; f_8013114C(c); // 801C47C0
L_801C47C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C47C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C47C8
  c->lr=c->r[0]; // 801C47CC
  c->r[1]=c->r[1]+0x00000010u; // 801C47D0
  return; // 801C47D4
}

// fn_801C47D8
void f_801C47D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C47D8
  c->r[0]=c->lr; // 801C47DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C47E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C47E4
  c->r[31]=c->r[3]|c->r[3]; // 801C47E8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C47EC
  c->lr=0x801C47F4u; f_801B5F08(c); // 801C47F0
  c->r[4]=c->r[3]|c->r[3]; // 801C47F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C47F8
  c->lr=0x801C4800u; f_801B2BD4(c); // 801C47FC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4800
  c->lr=0x801C4808u; f_801B5E84(c); // 801C4804
  c->r[4]=c->r[3]|c->r[3]; // 801C4808
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C480C
  c->lr=0x801C4814u; f_801B2BDC(c); // 801C4810
  c->r[3]=c->r[31]|c->r[31]; // 801C4814
  c->r[4]=0u+0x0000003Du; // 801C4818
  c->lr=0x801C4820u; f_8013114C(c); // 801C481C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4820
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4824
  c->lr=c->r[0]; // 801C4828
  c->r[1]=c->r[1]+0x00000010u; // 801C482C
  return; // 801C4830
}

// fn_801C4834
void f_801C4834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4834
  c->r[0]=c->lr; // 801C4838
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C483C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4840
  c->r[31]=c->r[3]|c->r[3]; // 801C4844
  c->r[3]=0u+0x00000001u; // 801C4848
  c->lr=0x801C4850u; f_8019CD1C(c); // 801C484C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4850
  if (crb(c,2)) { goto L_801C4870; } // 801C4854
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4858
  c->lr=0x801C4860u; f_801B1ECC(c); // 801C485C
  c->r[3]=c->r[31]|c->r[31]; // 801C4860
  c->r[4]=0u+0x0000003Eu; // 801C4864
  c->lr=0x801C486Cu; f_8013114C(c); // 801C4868
  goto L_801C4994; // 801C486C
L_801C4870:;
  c->r[3]=0u+0x00000000u; // 801C4870
  c->lr=0x801C4878u; f_8019CD1C(c); // 801C4874
  cmps(c,0,(int32_t)c->r[3],0); // 801C4878
  if (crb(c,2)) { goto L_801C48E4; } // 801C487C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4880
  c->lr=0x801C4888u; f_801B2B24(c); // 801C4884
  c->r[4]=c->r[3]|c->r[3]; // 801C4888
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C488C
  c->lr=0x801C4894u; f_801B5B94(c); // 801C4890
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4894
  c->lr=0x801C489Cu; f_801B2BCC(c); // 801C4898
  c->r[4]=c->r[3]|c->r[3]; // 801C489C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C48A0
  c->lr=0x801C48A8u; f_801B5C44(c); // 801C48A4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C48A8
  c->lr=0x801C48B0u; f_801B73C4(c); // 801C48AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C48B0
  c->lr=0x801C48B8u; f_801B5F8C(c); // 801C48B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C48B8
  if (crb(c,1)) { goto L_801C48CC; } // 801C48BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C48C0
  c->lr=0x801C48C8u; f_801B2008(c); // 801C48C4
  goto L_801C4994; // 801C48C8
L_801C48CC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C48CC
  c->lr=0x801C48D4u; f_801B1FD4(c); // 801C48D0
  c->r[3]=c->r[31]|c->r[31]; // 801C48D4
  c->r[4]=0u+0x0000003Eu; // 801C48D8
  c->lr=0x801C48E0u; f_8013114C(c); // 801C48DC
  goto L_801C4994; // 801C48E0
L_801C48E4:;
  c->r[3]=0u+0x00000003u; // 801C48E4
  c->lr=0x801C48ECu; f_8019CD1C(c); // 801C48E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C48EC
  if (crb(c,2)) { goto L_801C48FC; } // 801C48F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C48F4
  c->lr=0x801C48FCu; f_801B2A78(c); // 801C48F8
L_801C48FC:;
  c->r[3]=0u+0x00000004u; // 801C48FC
  c->lr=0x801C4904u; f_8019CD1C(c); // 801C4900
  cmps(c,0,(int32_t)c->r[3],0); // 801C4904
  if (crb(c,2)) { goto L_801C4914; } // 801C4908
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C490C
  c->lr=0x801C4914u; f_801B2A18(c); // 801C4910
L_801C4914:;
  c->r[3]=0u+0x00000006u; // 801C4914
  c->lr=0x801C491Cu; f_8019CD1C(c); // 801C4918
  cmps(c,0,(int32_t)c->r[3],0); // 801C491C
  if (crb(c,2)) { goto L_801C493C; } // 801C4920
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4924
  c->lr=0x801C492Cu; f_801B6028(c); // 801C4928
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C492C
  c->lr=0x801C4934u; f_801B2B7C(c); // 801C4930
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4934
  c->lr=0x801C493Cu; f_801B2AD8(c); // 801C4938
L_801C493C:;
  c->r[3]=0u+0x00000005u; // 801C493C
  c->lr=0x801C4944u; f_8019CD1C(c); // 801C4940
  cmps(c,0,(int32_t)c->r[3],0); // 801C4944
  if (crb(c,2)) { goto L_801C4964; } // 801C4948
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C494C
  c->lr=0x801C4954u; f_801B6030(c); // 801C4950
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4954
  c->lr=0x801C495Cu; f_801B2B2C(c); // 801C4958
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C495C
  c->lr=0x801C4964u; f_801B2AD8(c); // 801C4960
L_801C4964:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4964
  c->lr=0x801C496Cu; f_801B2B24(c); // 801C4968
  c->r[4]=c->r[3]|c->r[3]; // 801C496C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4970
  c->lr=0x801C4978u; f_801B5B94(c); // 801C4974
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4978
  c->lr=0x801C4980u; f_801B2BCC(c); // 801C497C
  c->r[4]=c->r[3]|c->r[3]; // 801C4980
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4984
  c->lr=0x801C498Cu; f_801B5C44(c); // 801C4988
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C498C
  c->lr=0x801C4994u; f_801B73C4(c); // 801C4990
L_801C4994:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4994
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4998
  c->lr=c->r[0]; // 801C499C
  c->r[1]=c->r[1]+0x00000010u; // 801C49A0
  return; // 801C49A4
}

// fn_801C49A8
void f_801C49A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C49A8
  c->r[0]=c->lr; // 801C49AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C49B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C49B4
  c->r[31]=c->r[3]|c->r[3]; // 801C49B8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C49BC
  c->lr=0x801C49C4u; f_801B1FA0(c); // 801C49C0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C49C4
  c->lr=0x801C49CCu; f_801B735C(c); // 801C49C8
  c->r[3]=c->r[31]|c->r[31]; // 801C49CC
  c->r[4]=0u+0x0000003Fu; // 801C49D0
  c->lr=0x801C49D8u; f_8013114C(c); // 801C49D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C49D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C49DC
  c->lr=c->r[0]; // 801C49E0
  c->r[1]=c->r[1]+0x00000010u; // 801C49E4
  return; // 801C49E8
}

// fn_801C49EC
void f_801C49EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C49EC
  c->r[0]=c->lr; // 801C49F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C49F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C49F8
  c->r[31]=c->r[3]|c->r[3]; // 801C49FC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4A00
  c->lr=0x801C4A08u; f_801B7444(c); // 801C4A04
  cmps(c,0,(int32_t)c->r[3],0); // 801C4A08
  if (crb(c,2)) { goto L_801C4B00; } // 801C4A0C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4A10
  c->r[4]=0u+0x00000000u; // 801C4A14
  c->lr=0x801C4A1Cu; f_801B6318(c); // 801C4A18
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4A1C
  c->lr=0x801C4A24u; f_801B1EDC(c); // 801C4A20
  cmps(c,0,(int32_t)c->r[3],0); // 801C4A24
  if (crb(c,2)) { goto L_801C4A44; } // 801C4A28
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4A2C
  c->lr=0x801C4A34u; f_801B2B18(c); // 801C4A30
  c->r[3]=c->r[31]|c->r[31]; // 801C4A34
  c->r[4]=0u+0x0000002Eu; // 801C4A38
  c->lr=0x801C4A40u; f_8013114C(c); // 801C4A3C
  goto L_801C4AF4; // 801C4A40
L_801C4A44:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4A44
  c->lr=0x801C4A4Cu; f_801B5DF0(c); // 801C4A48
  c->r[4]=c->r[3]|c->r[3]; // 801C4A4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4A50
  c->lr=0x801C4A58u; f_801B374C(c); // 801C4A54
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4A58
  c->lr=0x801C4A60u; f_801B36BC(c); // 801C4A5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4A60
  if (crb(c,2)) { goto L_801C4AA0; } // 801C4A64
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4A68
  c->r[4]=0u+0x00000000u; // 801C4A6C
  c->lr=0x801C4A74u; f_801B62BC(c); // 801C4A70
  c->r[0]=0u+0x00000001u; // 801C4A74
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801C4A78
  c->r[0]=0u+0x0000003Au; // 801C4A7C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C4A80
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4A84
  c->r[4]=0u+0x00000005u; // 801C4A88
  c->lr=0x801C4A90u; f_801B396C(c); // 801C4A8C
  c->r[3]=c->r[31]|c->r[31]; // 801C4A90
  c->r[4]=0u+0x0000006Bu; // 801C4A94
  c->lr=0x801C4A9Cu; f_8013114C(c); // 801C4A98
  goto L_801C4AF4; // 801C4A9C
L_801C4AA0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4AA0
  c->lr=0x801C4AA8u; f_801B3704(c); // 801C4AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C4AA8
  if (crb(c,2)) { goto L_801C4AE8; } // 801C4AAC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4AB0
  c->r[4]=0u+0x00000000u; // 801C4AB4
  c->lr=0x801C4ABCu; f_801B62BC(c); // 801C4AB8
  c->r[0]=0u+0x00000001u; // 801C4ABC
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801C4AC0
  c->r[0]=0u+0x0000003Au; // 801C4AC4
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C4AC8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4ACC
  c->r[4]=0u+0x00000007u; // 801C4AD0
  c->lr=0x801C4AD8u; f_801B396C(c); // 801C4AD4
  c->r[3]=c->r[31]|c->r[31]; // 801C4AD8
  c->r[4]=0u+0x0000006Bu; // 801C4ADC
  c->lr=0x801C4AE4u; f_8013114C(c); // 801C4AE0
  goto L_801C4AF4; // 801C4AE4
L_801C4AE8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4AE8
  c->r[4]=0u+0x00000040u; // 801C4AEC
  c->lr=0x801C4AF4u; f_8013114C(c); // 801C4AF0
L_801C4AF4:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4AF4
  c->r[4]=0u+0x00000000u; // 801C4AF8
  c->lr=0x801C4B00u; f_801B6010(c); // 801C4AFC
L_801C4B00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4B00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4B04
  c->lr=c->r[0]; // 801C4B08
  c->r[1]=c->r[1]+0x00000010u; // 801C4B0C
  return; // 801C4B10
}

// fn_801C4B14
void f_801C4B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4B14
  c->r[0]=c->lr; // 801C4B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4B20
  c->r[31]=c->r[3]|c->r[3]; // 801C4B24
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4B28
  c->lr=0x801C4B30u; f_801B6038(c); // 801C4B2C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B30
  c->lr=0x801C4B38u; f_801B2D44(c); // 801C4B34
  c->r[4]=c->r[3]|c->r[3]; // 801C4B38
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4B3C
  c->lr=0x801C4B44u; f_801B7448(c); // 801C4B40
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B44
  c->lr=0x801C4B4Cu; f_801B1F6C(c); // 801C4B48
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B4C
  c->lr=0x801C4B54u; f_801B1ED4(c); // 801C4B50
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4B54
  c->lr=0x801C4B5Cu; f_801B5220(c); // 801C4B58
  c->r[4]=c->r[3]|c->r[3]; // 801C4B5C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B60
  c->lr=0x801C4B68u; f_801B2CA4(c); // 801C4B64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B68
  c->lr=0x801C4B70u; f_801B2C90(c); // 801C4B6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B70
  c->r[4]=0u+0x00000002u; // 801C4B74
  c->lr=0x801C4B7Cu; f_801B2D4C(c); // 801C4B78
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4B7C
  c->lr=0x801C4B84u; f_801B2C9C(c); // 801C4B80
  c->r[4]=c->r[3]|c->r[3]; // 801C4B84
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4B88
  c->lr=0x801C4B90u; f_801B5AFC(c); // 801C4B8C
  c->r[3]=c->r[31]|c->r[31]; // 801C4B90
  c->r[4]=0u+0x00000041u; // 801C4B94
  c->lr=0x801C4B9Cu; f_8013114C(c); // 801C4B98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4B9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4BA0
  c->lr=c->r[0]; // 801C4BA4
  c->r[1]=c->r[1]+0x00000010u; // 801C4BA8
  return; // 801C4BAC
}

// fn_801C4BB0
void f_801C4BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4BB0
  c->r[0]=c->lr; // 801C4BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4BB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4BBC
  c->r[31]=c->r[3]|c->r[3]; // 801C4BC0
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4BC4
  c->lr=0x801C4BCCu; f_801B76EC(c); // 801C4BC8
  cmps(c,0,(int32_t)c->r[3],0); // 801C4BCC
  if (crb(c,2)) { goto L_801C4C08; } // 801C4BD0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4BD4
  c->lr=0x801C4BDCu; f_801B2D44(c); // 801C4BD8
  c->r[4]=c->r[3]|c->r[3]; // 801C4BDC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4BE0
  c->lr=0x801C4BE8u; f_801B7670(c); // 801C4BE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4BE8
  c->lr=0x801C4BF0u; f_801B2C9C(c); // 801C4BEC
  c->r[4]=c->r[3]|c->r[3]; // 801C4BF0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4BF4
  c->lr=0x801C4BFCu; f_801B5B50(c); // 801C4BF8
  c->r[3]=c->r[31]|c->r[31]; // 801C4BFC
  c->r[4]=0u+0x00000042u; // 801C4C00
  c->lr=0x801C4C08u; f_8013114C(c); // 801C4C04
L_801C4C08:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4C08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4C0C
  c->lr=c->r[0]; // 801C4C10
  c->r[1]=c->r[1]+0x00000010u; // 801C4C14
  return; // 801C4C18
}

// fn_801C4C1C
void f_801C4C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4C1C
  c->r[0]=c->lr; // 801C4C20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4C24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4C28
  c->r[31]=c->r[3]|c->r[3]; // 801C4C2C
  c->r[3]=0u+0x00000001u; // 801C4C30
  c->lr=0x801C4C38u; f_8019CD1C(c); // 801C4C34
  cmps(c,0,(int32_t)c->r[3],0); // 801C4C38
  if (crb(c,2)) { goto L_801C4C58; } // 801C4C3C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4C40
  c->lr=0x801C4C48u; f_801B1ECC(c); // 801C4C44
  c->r[3]=c->r[31]|c->r[31]; // 801C4C48
  c->r[4]=0u+0x00000045u; // 801C4C4C
  c->lr=0x801C4C54u; f_8013114C(c); // 801C4C50
  goto L_801C4D30; // 801C4C54
L_801C4C58:;
  c->r[3]=0u+0x00000000u; // 801C4C58
  c->lr=0x801C4C60u; f_8019CD1C(c); // 801C4C5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4C60
  if (crb(c,2)) { goto L_801C4CA8; } // 801C4C64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4C68
  c->lr=0x801C4C70u; f_801B2C9C(c); // 801C4C6C
  c->r[4]=c->r[3]|c->r[3]; // 801C4C70
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4C74
  c->lr=0x801C4C7Cu; f_801B5238(c); // 801C4C78
  cmps(c,0,(int32_t)c->r[3],0); // 801C4C7C
  if (crb(c,2)) { goto L_801C4C90; } // 801C4C80
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4C84
  c->lr=0x801C4C8Cu; f_801B2008(c); // 801C4C88
  goto L_801C4D30; // 801C4C8C
L_801C4C90:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4C90
  c->lr=0x801C4C98u; f_801B1FD4(c); // 801C4C94
  c->r[3]=c->r[31]|c->r[31]; // 801C4C98
  c->r[4]=0u+0x00000043u; // 801C4C9C
  c->lr=0x801C4CA4u; f_8013114C(c); // 801C4CA0
  goto L_801C4D30; // 801C4CA4
L_801C4CA8:;
  c->r[3]=0u+0x00000003u; // 801C4CA8
  c->lr=0x801C4CB0u; f_8019CD1C(c); // 801C4CAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C4CB0
  if (crb(c,2)) { goto L_801C4CC0; } // 801C4CB4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4CB8
  c->lr=0x801C4CC0u; f_801B2C44(c); // 801C4CBC
L_801C4CC0:;
  c->r[3]=0u+0x00000004u; // 801C4CC0
  c->lr=0x801C4CC8u; f_8019CD1C(c); // 801C4CC4
  cmps(c,0,(int32_t)c->r[3],0); // 801C4CC8
  if (crb(c,2)) { goto L_801C4CD8; } // 801C4CCC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4CD0
  c->lr=0x801C4CD8u; f_801B2BF8(c); // 801C4CD4
L_801C4CD8:;
  c->r[3]=0u+0x00000006u; // 801C4CD8
  c->lr=0x801C4CE0u; f_8019CD1C(c); // 801C4CDC
  cmps(c,0,(int32_t)c->r[3],0); // 801C4CE0
  if (crb(c,2)) { goto L_801C4CF0; } // 801C4CE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4CE8
  c->lr=0x801C4CF0u; f_801B2CF8(c); // 801C4CEC
L_801C4CF0:;
  c->r[3]=0u+0x00000005u; // 801C4CF0
  c->lr=0x801C4CF8u; f_8019CD1C(c); // 801C4CF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C4CF8
  if (crb(c,2)) { goto L_801C4D08; } // 801C4CFC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4D00
  c->lr=0x801C4D08u; f_801B2CAC(c); // 801C4D04
L_801C4D08:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4D08
  c->lr=0x801C4D10u; f_801B2D44(c); // 801C4D0C
  c->r[4]=c->r[3]|c->r[3]; // 801C4D10
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4D14
  c->lr=0x801C4D1Cu; f_801B7670(c); // 801C4D18
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4D1C
  c->lr=0x801C4D24u; f_801B2C9C(c); // 801C4D20
  c->r[4]=c->r[3]|c->r[3]; // 801C4D24
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4D28
  c->lr=0x801C4D30u; f_801B5B50(c); // 801C4D2C
L_801C4D30:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4D34
  c->lr=c->r[0]; // 801C4D38
  c->r[1]=c->r[1]+0x00000010u; // 801C4D3C
  return; // 801C4D40
}

// fn_801C4D44
void f_801C4D44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4D44
  c->r[0]=c->lr; // 801C4D48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4D50
  c->r[31]=c->r[3]|c->r[3]; // 801C4D54
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C4D58
  c->lr=0x801C4D60u; f_801B2D44(c); // 801C4D5C
  c->r[4]=c->r[3]|c->r[3]; // 801C4D60
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4D64
  c->lr=0x801C4D6Cu; f_801B7670(c); // 801C4D68
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4D6C
  c->lr=0x801C4D74u; f_801B2C9C(c); // 801C4D70
  c->r[4]=c->r[3]|c->r[3]; // 801C4D74
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4D78
  c->lr=0x801C4D80u; f_801B5B0C(c); // 801C4D7C
  c->r[3]=c->r[31]|c->r[31]; // 801C4D80
  c->r[4]=0u+0x00000044u; // 801C4D84
  c->lr=0x801C4D8Cu; f_8013114C(c); // 801C4D88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4D8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4D90
  c->lr=c->r[0]; // 801C4D94
  c->r[1]=c->r[1]+0x00000010u; // 801C4D98
  return; // 801C4D9C
}

// fn_801C4DA0
void f_801C4DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4DA0
  c->r[0]=c->lr; // 801C4DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4DAC
  c->r[31]=c->r[3]|c->r[3]; // 801C4DB0
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4DB4
  c->lr=0x801C4DBCu; f_801B76EC(c); // 801C4DB8
  cmps(c,0,(int32_t)c->r[3],0); // 801C4DBC
  if (crb(c,2)) { goto L_801C4DDC; } // 801C4DC0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4DC4
  c->r[4]=0u+0x00000000u; // 801C4DC8
  c->lr=0x801C4DD0u; f_801B635C(c); // 801C4DCC
  c->r[3]=c->r[31]|c->r[31]; // 801C4DD0
  c->r[4]=0u+0x00000045u; // 801C4DD4
  c->lr=0x801C4DDCu; f_8013114C(c); // 801C4DD8
L_801C4DDC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4DE0
  c->lr=c->r[0]; // 801C4DE4
  c->r[1]=c->r[1]+0x00000010u; // 801C4DE8
  return; // 801C4DEC
}

// fn_801C4DF0
void f_801C4DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4DF0
  c->r[0]=c->lr; // 801C4DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4DFC
  c->r[31]=c->r[3]|c->r[3]; // 801C4E00
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4E04
  c->r[4]=0u+0x00000000u; // 801C4E08
  c->lr=0x801C4E10u; f_801B635C(c); // 801C4E0C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4E10
  c->lr=0x801C4E18u; f_801B1FA0(c); // 801C4E14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4E18
  c->lr=0x801C4E20u; f_801B1EDC(c); // 801C4E1C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4E20
  if (crb(c,2)) { goto L_801C4E34; } // 801C4E24
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4E28
  c->lr=0x801C4E30u; f_801B74E0(c); // 801C4E2C
  goto L_801C4EBC; // 801C4E30
L_801C4E34:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4E34
  c->lr=0x801C4E3Cu; f_801B2C9C(c); // 801C4E38
  cmps(c,0,(int32_t)c->r[3],1); // 801C4E3C
  if (crb(c,2)) { goto L_801C4EA8; } // 801C4E40
  if (!crb(c,0)) { goto L_801C4E54; } // 801C4E44
  cmps(c,0,(int32_t)c->r[3],0); // 801C4E48
  if (!crb(c,0)) { goto L_801C4E60; } // 801C4E4C
  goto L_801C4EBC; // 801C4E50
L_801C4E54:;
  cmps(c,0,(int32_t)c->r[3],3); // 801C4E54
  if (!crb(c,0)) { goto L_801C4EBC; } // 801C4E58
  goto L_801C4EB4; // 801C4E5C
L_801C4E60:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4E60
  c->lr=0x801C4E68u; f_801B3550(c); // 801C4E64
  cmps(c,0,(int32_t)c->r[3],0); // 801C4E68
  if (!crb(c,2)) { goto L_801C4E90; } // 801C4E6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4E70
  c->lr=0x801C4E78u; f_801B36BC(c); // 801C4E74
  cmps(c,0,(int32_t)c->r[3],0); // 801C4E78
  if (!crb(c,2)) { goto L_801C4E90; } // 801C4E7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C4E80
  c->lr=0x801C4E88u; f_801B3704(c); // 801C4E84
  cmps(c,0,(int32_t)c->r[3],0); // 801C4E88
  if (crb(c,2)) { goto L_801C4E9C; } // 801C4E8C
L_801C4E90:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4E90
  c->lr=0x801C4E98u; f_801B74E0(c); // 801C4E94
  goto L_801C4EBC; // 801C4E98
L_801C4E9C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4E9C
  c->lr=0x801C4EA4u; f_801B760C(c); // 801C4EA0
  goto L_801C4EBC; // 801C4EA4
L_801C4EA8:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4EA8
  c->lr=0x801C4EB0u; f_801B75A8(c); // 801C4EAC
  goto L_801C4EBC; // 801C4EB0
L_801C4EB4:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C4EB4
  c->lr=0x801C4EBCu; f_801B7544(c); // 801C4EB8
L_801C4EBC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4EBC
  c->r[4]=0u+0x00000046u; // 801C4EC0
  c->lr=0x801C4EC8u; f_8013114C(c); // 801C4EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4EC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4ECC
  c->lr=c->r[0]; // 801C4ED0
  c->r[1]=c->r[1]+0x00000010u; // 801C4ED4
  return; // 801C4ED8
}

// fn_801C4EDC
void f_801C4EDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4EDC
  c->r[0]=c->lr; // 801C4EE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4EE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4EE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4EEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C4EF0
  c->r[29]=c->r[3]|c->r[3]; // 801C4EF4
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C4EF8
  c->lr=0x801C4F00u; f_801B76EC(c); // 801C4EFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C4F00
  if (crb(c,2)) { goto L_801C514C; } // 801C4F04
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C4F08
  c->r[4]=0u+0x00000000u; // 801C4F0C
  c->lr=0x801C4F14u; f_801B6010(c); // 801C4F10
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C4F14
  c->lr=0x801C4F1Cu; f_801B5DF0(c); // 801C4F18
  c->r[31]=c->r[3]|c->r[3]; // 801C4F1C
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C4F20
  c->r[4]=0u+0x00000001u; // 801C4F24
  c->lr=0x801C4F2Cu; f_801B6010(c); // 801C4F28
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C4F2C
  c->lr=0x801C4F34u; f_801B5DF0(c); // 801C4F30
  c->r[30]=c->r[3]|c->r[3]; // 801C4F34
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C4F38
  c->r[4]=0u+0x00000000u; // 801C4F3C
  c->lr=0x801C4F44u; f_801B6010(c); // 801C4F40
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4F44
  c->lr=0x801C4F4Cu; f_801B2D44(c); // 801C4F48
  cmps(c,0,(int32_t)c->r[3],0); // 801C4F4C
  if (!crb(c,2)) { goto L_801C4F70; } // 801C4F50
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4F54
  c->r[4]=c->r[31]|c->r[31]; // 801C4F58
  c->lr=0x801C4F60u; f_801B374C(c); // 801C4F5C
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4F60
  c->r[4]=c->r[30]|c->r[30]; // 801C4F64
  c->lr=0x801C4F6Cu; f_801B3754(c); // 801C4F68
  goto L_801C4F88; // 801C4F6C
L_801C4F70:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4F70
  c->r[4]=c->r[30]|c->r[30]; // 801C4F74
  c->lr=0x801C4F7Cu; f_801B374C(c); // 801C4F78
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4F7C
  c->r[4]=c->r[31]|c->r[31]; // 801C4F80
  c->lr=0x801C4F88u; f_801B3754(c); // 801C4F84
L_801C4F88:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4F88
  c->lr=0x801C4F90u; f_801B1EDC(c); // 801C4F8C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4F90
  if (crb(c,2)) { goto L_801C4FC4; } // 801C4F94
  c->r[0]=0u+0x00000000u; // 801C4F98
  W32(c->r[29]+0x000000F4u,c->r[0]); // 801C4F9C
  c->r[0]=0u+0x00000001u; // 801C4FA0
  W32(c->r[29]+0x000000F8u,c->r[0]); // 801C4FA4
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C4FA8
  c->r[4]=0u+0x00000000u; // 801C4FAC
  c->lr=0x801C4FB4u; f_801B6320(c); // 801C4FB0
  c->r[3]=c->r[29]|c->r[29]; // 801C4FB4
  c->r[4]=0u+0x0000003Au; // 801C4FB8
  c->lr=0x801C4FC0u; f_8013114C(c); // 801C4FBC
  goto L_801C514C; // 801C4FC0
L_801C4FC4:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4FC4
  c->lr=0x801C4FCCu; f_801B2C9C(c); // 801C4FC8
  cmps(c,0,(int32_t)c->r[3],1); // 801C4FCC
  if (crb(c,2)) { goto L_801C50FC; } // 801C4FD0
  if (!crb(c,0)) { goto L_801C4FE4; } // 801C4FD4
  cmps(c,0,(int32_t)c->r[3],0); // 801C4FD8
  if (!crb(c,0)) { goto L_801C4FF0; } // 801C4FDC
  goto L_801C514C; // 801C4FE0
L_801C4FE4:;
  cmps(c,0,(int32_t)c->r[3],3); // 801C4FE4
  if (!crb(c,0)) { goto L_801C514C; } // 801C4FE8
  goto L_801C512C; // 801C4FEC
L_801C4FF0:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C4FF0
  c->lr=0x801C4FF8u; f_801B36BC(c); // 801C4FF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C4FF8
  if (crb(c,2)) { goto L_801C5038; } // 801C4FFC
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C5000
  c->r[4]=0u+0x00000000u; // 801C5004
  c->lr=0x801C500Cu; f_801B62BC(c); // 801C5008
  c->r[0]=0u+0x00000001u; // 801C500C
  W32(c->r[29]+0x000000F8u,c->r[0]); // 801C5010
  c->r[0]=0u+0x0000003Au; // 801C5014
  W32(c->r[29]+0x000000F0u,c->r[0]); // 801C5018
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C501C
  c->r[4]=0u+0x00000005u; // 801C5020
  c->lr=0x801C5028u; f_801B396C(c); // 801C5024
  c->r[3]=c->r[29]|c->r[29]; // 801C5028
  c->r[4]=0u+0x0000006Bu; // 801C502C
  c->lr=0x801C5034u; f_8013114C(c); // 801C5030
  goto L_801C514C; // 801C5034
L_801C5038:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C5038
  c->lr=0x801C5040u; f_801B3704(c); // 801C503C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5040
  if (crb(c,2)) { goto L_801C5080; } // 801C5044
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C5048
  c->r[4]=0u+0x00000000u; // 801C504C
  c->lr=0x801C5054u; f_801B62BC(c); // 801C5050
  c->r[0]=0u+0x00000001u; // 801C5054
  W32(c->r[29]+0x000000F8u,c->r[0]); // 801C5058
  c->r[0]=0u+0x0000003Au; // 801C505C
  W32(c->r[29]+0x000000F0u,c->r[0]); // 801C5060
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C5064
  c->r[4]=0u+0x00000007u; // 801C5068
  c->lr=0x801C5070u; f_801B396C(c); // 801C506C
  c->r[3]=c->r[29]|c->r[29]; // 801C5070
  c->r[4]=0u+0x0000006Bu; // 801C5074
  c->lr=0x801C507Cu; f_8013114C(c); // 801C5078
  goto L_801C514C; // 801C507C
L_801C5080:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C5080
  c->lr=0x801C5088u; f_801B3550(c); // 801C5084
  cmps(c,0,(int32_t)c->r[3],0); // 801C5088
  if (crb(c,2)) { goto L_801C50C8; } // 801C508C
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C5090
  c->r[4]=0u+0x00000000u; // 801C5094
  c->lr=0x801C509Cu; f_801B62BC(c); // 801C5098
  c->r[0]=0u+0x00000001u; // 801C509C
  W32(c->r[29]+0x000000F8u,c->r[0]); // 801C50A0
  c->r[0]=0u+0x0000003Au; // 801C50A4
  W32(c->r[29]+0x000000F0u,c->r[0]); // 801C50A8
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C50AC
  c->r[4]=0u+0x00000003u; // 801C50B0
  c->lr=0x801C50B8u; f_801B396C(c); // 801C50B4
  c->r[3]=c->r[29]|c->r[29]; // 801C50B8
  c->r[4]=0u+0x0000006Bu; // 801C50BC
  c->lr=0x801C50C4u; f_8013114C(c); // 801C50C0
  goto L_801C514C; // 801C50C4
L_801C50C8:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C50C8
  c->lr=0x801C50D0u; f_801B3804(c); // 801C50CC
  c->r[0]=0u+0x00000000u; // 801C50D0
  W32(c->r[29]+0x000000F4u,c->r[0]); // 801C50D4
  c->r[0]=0u+0x00000005u; // 801C50D8
  W32(c->r[29]+0x000000F0u,c->r[0]); // 801C50DC
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801C50E0
  c->r[4]=0u+0x00000007u; // 801C50E4
  c->lr=0x801C50ECu; f_801B38BC(c); // 801C50E8
  c->r[3]=c->r[29]|c->r[29]; // 801C50EC
  c->r[4]=0u+0x00000047u; // 801C50F0
  c->lr=0x801C50F8u; f_8013114C(c); // 801C50F4
  goto L_801C514C; // 801C50F8
L_801C50FC:;
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C50FC
  c->r[4]=0u+0x00000001u; // 801C5100
  c->lr=0x801C5108u; f_801B6018(c); // 801C5104
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C5108
  c->r[4]=0u+0x00000000u; // 801C510C
  c->lr=0x801C5114u; f_801B62B4(c); // 801C5110
  c->r[0]=0u+0x00000040u; // 801C5114
  W32(c->r[29]+0x000000F0u,c->r[0]); // 801C5118
  c->r[3]=c->r[29]|c->r[29]; // 801C511C
  c->r[4]=0u+0x00000035u; // 801C5120
  c->lr=0x801C5128u; f_8013114C(c); // 801C5124
  goto L_801C514C; // 801C5128
L_801C512C:;
  c->r[0]=0u+0x00000000u; // 801C512C
  W32(c->r[29]+0x000000F4u,c->r[0]); // 801C5130
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C5134
  c->r[4]=0u+0x00000000u; // 801C5138
  c->lr=0x801C5140u; f_801B6320(c); // 801C513C
  c->r[3]=c->r[29]|c->r[29]; // 801C5140
  c->r[4]=0u+0x00000028u; // 801C5144
  c->lr=0x801C514Cu; f_8013114C(c); // 801C5148
L_801C514C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C514C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5150
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5154
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5158
  c->lr=c->r[0]; // 801C515C
  c->r[1]=c->r[1]+0x00000020u; // 801C5160
  return; // 801C5164
}

// fn_801C5168
void f_801C5168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5168
  c->r[0]=c->lr; // 801C516C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5174
  c->r[31]=c->r[3]|c->r[3]; // 801C5178
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C517C
  c->lr=0x801C5184u; f_801B203C(c); // 801C5180
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5184
  c->lr=0x801C518Cu; f_801B20CC(c); // 801C5188
  c->r[3]=c->r[31]|c->r[31]; // 801C518C
  c->r[4]=0u+0x00000048u; // 801C5190
  c->lr=0x801C5198u; f_8013114C(c); // 801C5194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5198
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C519C
  c->lr=c->r[0]; // 801C51A0
  c->r[1]=c->r[1]+0x00000010u; // 801C51A4
  return; // 801C51A8
}

// fn_801C51AC
void f_801C51AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C51AC
  c->r[0]=c->lr; // 801C51B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C51B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C51B8
  c->r[31]=c->r[3]|c->r[3]; // 801C51BC
  c->lr=0x801C51C4u; f_801C2514(c); // 801C51C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C51C4
  if (crb(c,2)) { goto L_801C51E0; } // 801C51C8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C51CC
  c->lr=0x801C51D4u; f_801B76F4(c); // 801C51D0
  c->r[3]=c->r[31]|c->r[31]; // 801C51D4
  c->r[4]=0u+0x0000006Bu; // 801C51D8
  c->lr=0x801C51E0u; f_8013114C(c); // 801C51DC
L_801C51E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C51E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C51E4
  c->lr=c->r[0]; // 801C51E8
  c->r[1]=c->r[1]+0x00000010u; // 801C51EC
  return; // 801C51F0
}

// fn_801C51F4
void f_801C51F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C51F4
  c->r[0]=c->lr; // 801C51F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C51FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5200
  c->r[31]=c->r[3]|c->r[3]; // 801C5204
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5208
  c->lr=0x801C5210u; f_801B5220(c); // 801C520C
  c->r[4]=c->r[3]|c->r[3]; // 801C5210
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5214
  c->lr=0x801C521Cu; f_801B21D4(c); // 801C5218
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C521C
  c->lr=0x801C5224u; f_801B21CC(c); // 801C5220
  c->r[4]=c->r[3]|c->r[3]; // 801C5224
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5228
  c->lr=0x801C5230u; f_801B5AFC(c); // 801C522C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5230
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5234
  c->lr=c->r[0]; // 801C5238
  c->r[1]=c->r[1]+0x00000010u; // 801C523C
  return; // 801C5240
}

// fn_801C5244
void f_801C5244(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5244
  c->r[0]=c->lr; // 801C5248
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C524C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5250
  c->r[31]=c->r[3]|c->r[3]; // 801C5254
  c->lr=0x801C525Cu; f_801C2570(c); // 801C5258
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C525C
  c->r[4]=0u+0x00000001u; // 801C5260
  c->lr=0x801C5268u; f_801B7E44(c); // 801C5264
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5268
  c->lr=0x801C5270u; f_801B6038(c); // 801C526C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5270
  c->lr=0x801C5278u; f_801B64A4(c); // 801C5274
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5278
  c->lr=0x801C5280u; f_801B3AAC(c); // 801C527C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5280
  c->lr=0x801C5288u; f_801B1F6C(c); // 801C5284
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5288
  c->lr=0x801C5290u; f_801B1ED4(c); // 801C528C
  c->r[3]=c->r[31]|c->r[31]; // 801C5290
  c->lr=0x801C5298u; f_801C51F4(c); // 801C5294
  c->r[3]=c->r[31]|c->r[31]; // 801C5298
  c->r[4]=0u+0x00000006u; // 801C529C
  c->lr=0x801C52A4u; f_8013114C(c); // 801C52A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C52A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C52A8
  c->lr=c->r[0]; // 801C52AC
  c->r[1]=c->r[1]+0x00000010u; // 801C52B0
  return; // 801C52B4
}

// fn_801C52B8
void f_801C52B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C52B8
  c->r[0]=c->lr; // 801C52BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C52C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C52C4
  c->r[31]=c->r[3]|c->r[3]; // 801C52C8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C52CC
  c->lr=0x801C52D4u; f_801B64EC(c); // 801C52D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C52D4
  if (crb(c,2)) { goto L_801C52FC; } // 801C52D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C52DC
  c->lr=0x801C52E4u; f_801B21CC(c); // 801C52E0
  c->r[4]=c->r[3]|c->r[3]; // 801C52E4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C52E8
  c->lr=0x801C52F0u; f_801B5B50(c); // 801C52EC
  c->r[3]=c->r[31]|c->r[31]; // 801C52F0
  c->r[4]=0u+0x00000007u; // 801C52F4
  c->lr=0x801C52FCu; f_8013114C(c); // 801C52F8
L_801C52FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C52FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5300
  c->lr=c->r[0]; // 801C5304
  c->r[1]=c->r[1]+0x00000010u; // 801C5308
  return; // 801C530C
}

// fn_801C5310
void f_801C5310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5310
  c->r[0]=c->lr; // 801C5314
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C531C
  c->r[31]=c->r[3]|c->r[3]; // 801C5320
  c->r[3]=0u+0x00000001u; // 801C5324
  c->lr=0x801C532Cu; f_8019CD1C(c); // 801C5328
  cmps(c,0,(int32_t)c->r[3],0); // 801C532C
  if (crb(c,2)) { goto L_801C5368; } // 801C5330
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5334
  c->lr=0x801C533Cu; f_801B64F0(c); // 801C5338
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C533C
  c->lr=0x801C5344u; f_801B21CC(c); // 801C5340
  c->r[4]=c->r[3]|c->r[3]; // 801C5344
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5348
  c->lr=0x801C5350u; f_801B5B50(c); // 801C534C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5350
  c->lr=0x801C5358u; f_801B1ECC(c); // 801C5354
  c->r[3]=c->r[31]|c->r[31]; // 801C5358
  c->r[4]=0u+0x0000000Au; // 801C535C
  c->lr=0x801C5364u; f_8013114C(c); // 801C5360
  goto L_801C5420; // 801C5364
L_801C5368:;
  c->r[3]=0u+0x00000000u; // 801C5368
  c->lr=0x801C5370u; f_8019CD1C(c); // 801C536C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5370
  if (crb(c,2)) { goto L_801C53D4; } // 801C5374
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5378
  c->lr=0x801C5380u; f_801B64F0(c); // 801C537C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5380
  c->lr=0x801C5388u; f_801B21CC(c); // 801C5384
  c->r[4]=c->r[3]|c->r[3]; // 801C5388
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C538C
  c->lr=0x801C5394u; f_801B5B50(c); // 801C5390
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5394
  c->lr=0x801C539Cu; f_801B21CC(c); // 801C5398
  c->r[4]=c->r[3]|c->r[3]; // 801C539C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C53A0
  c->lr=0x801C53A8u; f_801B5238(c); // 801C53A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C53A8
  if (crb(c,2)) { goto L_801C53BC; } // 801C53AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C53B0
  c->lr=0x801C53B8u; f_801B2008(c); // 801C53B4
  goto L_801C5420; // 801C53B8
L_801C53BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C53BC
  c->lr=0x801C53C4u; f_801B1FD4(c); // 801C53C0
  c->r[3]=c->r[31]|c->r[31]; // 801C53C4
  c->r[4]=0u+0x00000008u; // 801C53C8
  c->lr=0x801C53D0u; f_8013114C(c); // 801C53CC
  goto L_801C5420; // 801C53D0
L_801C53D4:;
  c->r[3]=0u+0x00000003u; // 801C53D4
  c->lr=0x801C53DCu; f_8019CD1C(c); // 801C53D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C53DC
  if (crb(c,2)) { goto L_801C53EC; } // 801C53E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C53E4
  c->lr=0x801C53ECu; f_801B2180(c); // 801C53E8
L_801C53EC:;
  c->r[3]=0u+0x00000004u; // 801C53EC
  c->lr=0x801C53F4u; f_8019CD1C(c); // 801C53F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C53F4
  if (crb(c,2)) { goto L_801C5404; } // 801C53F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C53FC
  c->lr=0x801C5404u; f_801B2134(c); // 801C5400
L_801C5404:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5404
  c->lr=0x801C540Cu; f_801B64F0(c); // 801C5408
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C540C
  c->lr=0x801C5414u; f_801B21CC(c); // 801C5410
  c->r[4]=c->r[3]|c->r[3]; // 801C5414
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5418
  c->lr=0x801C5420u; f_801B5B50(c); // 801C541C
L_801C5420:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5420
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5424
  c->lr=c->r[0]; // 801C5428
  c->r[1]=c->r[1]+0x00000010u; // 801C542C
  return; // 801C5430
}

// fn_801C5434
void f_801C5434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5434
  c->r[0]=c->lr; // 801C5438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C543C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5440
  c->r[31]=c->r[3]|c->r[3]; // 801C5444
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C5448
  c->lr=0x801C5450u; f_801B21CC(c); // 801C544C
  c->r[4]=c->r[3]|c->r[3]; // 801C5450
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5454
  c->lr=0x801C545Cu; f_801B5B0C(c); // 801C5458
  c->r[3]=c->r[31]|c->r[31]; // 801C545C
  c->r[4]=0u+0x00000009u; // 801C5460
  c->lr=0x801C5468u; f_8013114C(c); // 801C5464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5468
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C546C
  c->lr=c->r[0]; // 801C5470
  c->r[1]=c->r[1]+0x00000010u; // 801C5474
  return; // 801C5478
}

// fn_801C547C
void f_801C547C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C547C
  c->r[0]=c->lr; // 801C5480
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5488
  c->r[31]=c->r[3]|c->r[3]; // 801C548C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5490
  c->lr=0x801C5498u; f_801B64EC(c); // 801C5494
  cmps(c,0,(int32_t)c->r[3],0); // 801C5498
  if (crb(c,2)) { goto L_801C54B8; } // 801C549C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C54A0
  c->r[4]=0u+0x00000000u; // 801C54A4
  c->lr=0x801C54ACu; f_801B635C(c); // 801C54A8
  c->r[3]=c->r[31]|c->r[31]; // 801C54AC
  c->r[4]=0u+0x0000000Au; // 801C54B0
  c->lr=0x801C54B8u; f_8013114C(c); // 801C54B4
L_801C54B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C54B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C54BC
  c->lr=c->r[0]; // 801C54C0
  c->r[1]=c->r[1]+0x00000010u; // 801C54C4
  return; // 801C54C8
}

// fn_801C54CC
void f_801C54CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C54CC
  c->r[0]=c->lr; // 801C54D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C54D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C54D8
  c->r[31]=c->r[3]|c->r[3]; // 801C54DC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C54E0
  c->r[4]=0u+0x00000000u; // 801C54E4
  c->lr=0x801C54ECu; f_801B635C(c); // 801C54E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C54EC
  c->lr=0x801C54F4u; f_801B1FA0(c); // 801C54F0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C54F4
  c->lr=0x801C54FCu; f_801B64E8(c); // 801C54F8
  c->r[3]=c->r[31]|c->r[31]; // 801C54FC
  c->r[4]=0u+0x0000000Bu; // 801C5500
  c->lr=0x801C5508u; f_8013114C(c); // 801C5504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5508
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C550C
  c->lr=c->r[0]; // 801C5510
  c->r[1]=c->r[1]+0x00000010u; // 801C5514
  return; // 801C5518
}

// fn_801C551C
void f_801C551C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C551C
  c->r[0]=c->lr; // 801C5520
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5528
  c->r[31]=c->r[3]|c->r[3]; // 801C552C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5530
  c->lr=0x801C5538u; f_801B64EC(c); // 801C5534
  cmps(c,0,(int32_t)c->r[3],0); // 801C5538
  if (crb(c,2)) { goto L_801C56DC; } // 801C553C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5540
  c->r[4]=0u+0x00000000u; // 801C5544
  c->lr=0x801C554Cu; f_801B61EC(c); // 801C5548
  c->r[3]=c->r[31]|c->r[31]; // 801C554C
  c->lr=0x801C5554u; f_801C25E0(c); // 801C5550
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5554
  c->lr=0x801C555Cu; f_801B1EDC(c); // 801C5558
  cmps(c,0,(int32_t)c->r[3],0); // 801C555C
  if (crb(c,2)) { goto L_801C5588; } // 801C5560
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5564
  c->r[4]=0u+0x0000000Bu; // 801C5568
  c->lr=0x801C5570u; f_801B38BC(c); // 801C556C
  c->r[0]=0u+0x00000000u; // 801C5570
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5574
  c->r[3]=c->r[31]|c->r[31]; // 801C5578
  c->r[4]=0u+0x00000003u; // 801C557C
  c->lr=0x801C5584u; f_8013114C(c); // 801C5580
  goto L_801C56DC; // 801C5584
L_801C5588:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5588
  c->lr=0x801C5590u; f_801B21CC(c); // 801C558C
  cmps(c,0,(int32_t)c->r[3],2); // 801C5590
  if (crb(c,2)) { goto L_801C565C; } // 801C5594
  if (!crb(c,0)) { goto L_801C55AC; } // 801C5598
  cmps(c,0,(int32_t)c->r[3],0); // 801C559C
  if (crb(c,2)) { goto L_801C55B8; } // 801C55A0
  if (!crb(c,0)) { goto L_801C55FC; } // 801C55A4
  goto L_801C56DC; // 801C55A8
L_801C55AC:;
  cmps(c,0,(int32_t)c->r[3],4); // 801C55AC
  if (!crb(c,0)) { goto L_801C56DC; } // 801C55B0
  goto L_801C56BC; // 801C55B4
L_801C55B8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C55B8
  c->lr=0x801C55C0u; f_801B34D4(c); // 801C55BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C55C0
  if (!crb(c,2)) { goto L_801C55EC; } // 801C55C4
  c->r[0]=0u+0x00000005u; // 801C55C8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C55CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C55D0
  c->r[4]=0u+0x00000000u; // 801C55D4
  c->lr=0x801C55DCu; f_801B396C(c); // 801C55D8
  c->r[3]=c->r[31]|c->r[31]; // 801C55DC
  c->r[4]=0u+0x0000006Bu; // 801C55E0
  c->lr=0x801C55E8u; f_8013114C(c); // 801C55E4
  goto L_801C56DC; // 801C55E8
L_801C55EC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C55EC
  c->r[4]=0u+0x0000000Cu; // 801C55F0
  c->lr=0x801C55F8u; f_8013114C(c); // 801C55F4
  goto L_801C56DC; // 801C55F8
L_801C55FC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C55FC
  c->lr=0x801C5604u; f_801B3518(c); // 801C5600
  cmps(c,0,(int32_t)c->r[3],0); // 801C5604
  if (!crb(c,2)) { goto L_801C5630; } // 801C5608
  c->r[0]=0u+0x00000005u; // 801C560C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5610
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5614
  c->r[4]=0u+0x00000001u; // 801C5618
  c->lr=0x801C5620u; f_801B396C(c); // 801C561C
  c->r[3]=c->r[31]|c->r[31]; // 801C5620
  c->r[4]=0u+0x0000006Bu; // 801C5624
  c->lr=0x801C562Cu; f_8013114C(c); // 801C5628
  goto L_801C56DC; // 801C562C
L_801C5630:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5630
  c->lr=0x801C5638u; f_801B6B40(c); // 801C5634
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5638
  c->r[4]=0u+0x00000006u; // 801C563C
  c->lr=0x801C5644u; f_801B38BC(c); // 801C5640
  c->r[0]=0u+0x00000028u; // 801C5644
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5648
  c->r[3]=c->r[31]|c->r[31]; // 801C564C
  c->r[4]=0u+0x0000006Bu; // 801C5650
  c->lr=0x801C5658u; f_8013114C(c); // 801C5654
  goto L_801C56DC; // 801C5658
L_801C565C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C565C
  c->lr=0x801C5664u; f_801B35C4(c); // 801C5660
  cmps(c,0,(int32_t)c->r[3],0); // 801C5664
  if (!crb(c,2)) { goto L_801C5690; } // 801C5668
  c->r[0]=0u+0x00000005u; // 801C566C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5670
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5674
  c->r[4]=0u+0x00000002u; // 801C5678
  c->lr=0x801C5680u; f_801B396C(c); // 801C567C
  c->r[3]=c->r[31]|c->r[31]; // 801C5680
  c->r[4]=0u+0x0000006Bu; // 801C5684
  c->lr=0x801C568Cu; f_8013114C(c); // 801C5688
  goto L_801C56DC; // 801C568C
L_801C5690:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5690
  c->lr=0x801C5698u; f_801B76FC(c); // 801C5694
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5698
  c->r[4]=0u+0x0000000Au; // 801C569C
  c->lr=0x801C56A4u; f_801B38BC(c); // 801C56A0
  c->r[0]=0u+0x00000049u; // 801C56A4
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C56A8
  c->r[3]=c->r[31]|c->r[31]; // 801C56AC
  c->r[4]=0u+0x0000006Bu; // 801C56B0
  c->lr=0x801C56B8u; f_8013114C(c); // 801C56B4
  goto L_801C56DC; // 801C56B8
L_801C56BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C56BC
  c->r[4]=0u+0x0000000Bu; // 801C56C0
  c->lr=0x801C56C8u; f_801B38BC(c); // 801C56C4
  c->r[0]=0u+0x00000000u; // 801C56C8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C56CC
  c->r[3]=c->r[31]|c->r[31]; // 801C56D0
  c->r[4]=0u+0x00000003u; // 801C56D4
  c->lr=0x801C56DCu; f_8013114C(c); // 801C56D8
L_801C56DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C56DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C56E0
  c->lr=c->r[0]; // 801C56E4
  c->r[1]=c->r[1]+0x00000010u; // 801C56E8
  return; // 801C56EC
}

// fn_801C56F0
void f_801C56F0(Ctx* __restrict c) {
  c->r[4]=0u+0x0000006Bu; // 801C56F0
  f_8013114C(c); return; // 801C56F4
}

// fn_801C56F8
void f_801C56F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C56F8
  c->r[0]=c->lr; // 801C56FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5704
  c->r[31]=c->r[3]|c->r[3]; // 801C5708
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C570C
  c->lr=0x801C5714u; f_801B64A0(c); // 801C5710
  cmps(c,0,(int32_t)c->r[3],0); // 801C5714
  if (crb(c,2)) { goto L_801C5730; } // 801C5718
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C571C
  c->lr=0x801C5724u; f_801B6498(c); // 801C5720
  c->r[3]=c->r[31]|c->r[31]; // 801C5724
  c->r[4]=0u+0x0000006Bu; // 801C5728
  c->lr=0x801C5730u; f_8013114C(c); // 801C572C
L_801C5730:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5730
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5734
  c->lr=c->r[0]; // 801C5738
  c->r[1]=c->r[1]+0x00000010u; // 801C573C
  return; // 801C5740
}

// fn_801C5744
void f_801C5744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5744
  c->r[0]=c->lr; // 801C5748
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C574C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5750
  c->r[31]=c->r[3]|c->r[3]; // 801C5754
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5758
  c->r[4]=0u+0x00000002u; // 801C575C
  c->lr=0x801C5764u; f_801B7E44(c); // 801C5760
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5764
  c->r[4]=0u+0x00000000u; // 801C5768
  c->lr=0x801C5770u; f_801B5CF8(c); // 801C576C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5770
  c->lr=0x801C5778u; f_801B6038(c); // 801C5774
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5778
  c->lr=0x801C5780u; f_801B6534(c); // 801C577C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5780
  c->lr=0x801C5788u; f_801B1F6C(c); // 801C5784
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5788
  c->lr=0x801C5790u; f_801B1ED4(c); // 801C578C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5790
  c->lr=0x801C5798u; f_801B2328(c); // 801C5794
  c->r[4]=c->r[3]|c->r[3]; // 801C5798
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C579C
  c->lr=0x801C57A4u; f_801B5AFC(c); // 801C57A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C57A4
  c->lr=0x801C57ACu; f_801B2328(c); // 801C57A8
  c->r[4]=c->r[3]|c->r[3]; // 801C57AC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C57B0
  c->lr=0x801C57B8u; f_801B5B94(c); // 801C57B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C57B8
  c->lr=0x801C57C0u; f_801B23D0(c); // 801C57BC
  c->r[4]=c->r[3]|c->r[3]; // 801C57C0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C57C4
  c->lr=0x801C57CCu; f_801B5C44(c); // 801C57C8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C57CC
  c->lr=0x801C57D4u; f_801B5F8C(c); // 801C57D0
  c->r[4]=c->r[3]|c->r[3]; // 801C57D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C57D8
  c->lr=0x801C57E0u; f_801B23E8(c); // 801C57DC
  c->r[3]=c->r[31]|c->r[31]; // 801C57E0
  c->r[4]=0u+0x0000000Du; // 801C57E4
  c->lr=0x801C57ECu; f_8013114C(c); // 801C57E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C57EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C57F0
  c->lr=c->r[0]; // 801C57F4
  c->r[1]=c->r[1]+0x00000010u; // 801C57F8
  return; // 801C57FC
}

// fn_801C5800
void f_801C5800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5800
  c->r[0]=c->lr; // 801C5804
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C580C
  c->r[31]=c->r[3]|c->r[3]; // 801C5810
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5814
  c->lr=0x801C581Cu; f_801B66B0(c); // 801C5818
  cmps(c,0,(int32_t)c->r[3],0); // 801C581C
  if (crb(c,2)) { goto L_801C5838; } // 801C5820
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5824
  c->lr=0x801C582Cu; f_801B6658(c); // 801C5828
  c->r[3]=c->r[31]|c->r[31]; // 801C582C
  c->r[4]=0u+0x0000000Eu; // 801C5830
  c->lr=0x801C5838u; f_8013114C(c); // 801C5834
L_801C5838:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5838
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C583C
  c->lr=c->r[0]; // 801C5840
  c->r[1]=c->r[1]+0x00000010u; // 801C5844
  return; // 801C5848
}

// fn_801C584C
void f_801C584C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C584C
  c->r[0]=c->lr; // 801C5850
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5854
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5858
  c->r[31]=c->r[3]|c->r[3]; // 801C585C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5860
  c->lr=0x801C5868u; f_801B5F08(c); // 801C5864
  c->r[4]=c->r[3]|c->r[3]; // 801C5868
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C586C
  c->lr=0x801C5874u; f_801B23D8(c); // 801C5870
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5874
  c->lr=0x801C587Cu; f_801B5E84(c); // 801C5878
  c->r[4]=c->r[3]|c->r[3]; // 801C587C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5880
  c->lr=0x801C5888u; f_801B23E0(c); // 801C5884
  c->r[3]=c->r[31]|c->r[31]; // 801C5888
  c->r[4]=0u+0x0000000Fu; // 801C588C
  c->lr=0x801C5894u; f_8013114C(c); // 801C5890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5894
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5898
  c->lr=c->r[0]; // 801C589C
  c->r[1]=c->r[1]+0x00000010u; // 801C58A0
  return; // 801C58A4
}

// fn_801C58A8
void f_801C58A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C58A8
  c->r[0]=c->lr; // 801C58AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C58B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C58B4
  c->r[31]=c->r[3]|c->r[3]; // 801C58B8
  c->r[3]=0u+0x00000001u; // 801C58BC
  c->lr=0x801C58C4u; f_8019CD1C(c); // 801C58C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C58C4
  if (crb(c,2)) { goto L_801C58E4; } // 801C58C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C58CC
  c->lr=0x801C58D4u; f_801B1ECC(c); // 801C58D0
  c->r[3]=c->r[31]|c->r[31]; // 801C58D4
  c->r[4]=0u+0x00000010u; // 801C58D8
  c->lr=0x801C58E0u; f_8013114C(c); // 801C58DC
  goto L_801C59EC; // 801C58E0
L_801C58E4:;
  c->r[3]=0u+0x00000000u; // 801C58E4
  c->lr=0x801C58ECu; f_8019CD1C(c); // 801C58E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C58EC
  if (crb(c,2)) { goto L_801C593C; } // 801C58F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C58F4
  c->lr=0x801C58FCu; f_801B2328(c); // 801C58F8
  c->r[4]=c->r[3]|c->r[3]; // 801C58FC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5900
  c->lr=0x801C5908u; f_801B5B94(c); // 801C5904
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5908
  c->lr=0x801C5910u; f_801B23D0(c); // 801C590C
  c->r[4]=c->r[3]|c->r[3]; // 801C5910
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5914
  c->lr=0x801C591Cu; f_801B5C44(c); // 801C5918
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C591C
  c->lr=0x801C5924u; f_801B6658(c); // 801C5920
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5924
  c->lr=0x801C592Cu; f_801B1FD4(c); // 801C5928
  c->r[3]=c->r[31]|c->r[31]; // 801C592C
  c->r[4]=0u+0x00000010u; // 801C5930
  c->lr=0x801C5938u; f_8013114C(c); // 801C5934
  goto L_801C59EC; // 801C5938
L_801C593C:;
  c->r[3]=0u+0x00000003u; // 801C593C
  c->lr=0x801C5944u; f_8019CD1C(c); // 801C5940
  cmps(c,0,(int32_t)c->r[3],0); // 801C5944
  if (crb(c,2)) { goto L_801C5954; } // 801C5948
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C594C
  c->lr=0x801C5954u; f_801B2288(c); // 801C5950
L_801C5954:;
  c->r[3]=0u+0x00000004u; // 801C5954
  c->lr=0x801C595Cu; f_8019CD1C(c); // 801C5958
  cmps(c,0,(int32_t)c->r[3],0); // 801C595C
  if (crb(c,2)) { goto L_801C596C; } // 801C5960
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5964
  c->lr=0x801C596Cu; f_801B2228(c); // 801C5968
L_801C596C:;
  c->r[3]=0u+0x00000006u; // 801C596C
  c->lr=0x801C5974u; f_8019CD1C(c); // 801C5970
  cmps(c,0,(int32_t)c->r[3],0); // 801C5974
  if (crb(c,2)) { goto L_801C5994; } // 801C5978
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C597C
  c->lr=0x801C5984u; f_801B6028(c); // 801C5980
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5984
  c->lr=0x801C598Cu; f_801B2380(c); // 801C5988
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C598C
  c->lr=0x801C5994u; f_801B22E8(c); // 801C5990
L_801C5994:;
  c->r[3]=0u+0x00000005u; // 801C5994
  c->lr=0x801C599Cu; f_8019CD1C(c); // 801C5998
  cmps(c,0,(int32_t)c->r[3],0); // 801C599C
  if (crb(c,2)) { goto L_801C59BC; } // 801C59A0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C59A4
  c->lr=0x801C59ACu; f_801B6030(c); // 801C59A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C59AC
  c->lr=0x801C59B4u; f_801B2330(c); // 801C59B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C59B4
  c->lr=0x801C59BCu; f_801B22E8(c); // 801C59B8
L_801C59BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C59BC
  c->lr=0x801C59C4u; f_801B2328(c); // 801C59C0
  c->r[4]=c->r[3]|c->r[3]; // 801C59C4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C59C8
  c->lr=0x801C59D0u; f_801B5B94(c); // 801C59CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C59D0
  c->lr=0x801C59D8u; f_801B23D0(c); // 801C59D4
  c->r[4]=c->r[3]|c->r[3]; // 801C59D8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C59DC
  c->lr=0x801C59E4u; f_801B5C44(c); // 801C59E0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C59E4
  c->lr=0x801C59ECu; f_801B6658(c); // 801C59E8
L_801C59EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C59EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C59F0
  c->lr=c->r[0]; // 801C59F4
  c->r[1]=c->r[1]+0x00000010u; // 801C59F8
  return; // 801C59FC
}

// fn_801C5A00
void f_801C5A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5A00
  c->r[0]=c->lr; // 801C5A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5A0C
  c->r[31]=c->r[3]|c->r[3]; // 801C5A10
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C5A14
  c->lr=0x801C5A1Cu; f_801B1FA0(c); // 801C5A18
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5A1C
  c->lr=0x801C5A24u; f_801B1EDC(c); // 801C5A20
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A24
  if (crb(c,2)) { goto L_801C5A38; } // 801C5A28
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5A2C
  c->lr=0x801C5A34u; f_801B65A0(c); // 801C5A30
  goto L_801C5A40; // 801C5A34
L_801C5A38:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5A38
  c->lr=0x801C5A40u; f_801B6600(c); // 801C5A3C
L_801C5A40:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5A40
  c->r[4]=0u+0x00000011u; // 801C5A44
  c->lr=0x801C5A4Cu; f_8013114C(c); // 801C5A48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5A4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5A50
  c->lr=c->r[0]; // 801C5A54
  c->r[1]=c->r[1]+0x00000010u; // 801C5A58
  return; // 801C5A5C
}

// fn_801C5A60
void f_801C5A60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5A60
  c->r[0]=c->lr; // 801C5A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5A68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5A6C
  c->r[31]=c->r[3]|c->r[3]; // 801C5A70
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5A74
  c->lr=0x801C5A7Cu; f_801B66B0(c); // 801C5A78
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A7C
  if (crb(c,2)) { goto L_801C5AC4; } // 801C5A80
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5A84
  c->r[4]=0u+0x00000000u; // 801C5A88
  c->lr=0x801C5A90u; f_801B61F4(c); // 801C5A8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5A90
  c->lr=0x801C5A98u; f_801B1EDC(c); // 801C5A94
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A98
  if (crb(c,2)) { goto L_801C5AB0; } // 801C5A9C
  c->r[3]=c->r[31]|c->r[31]; // 801C5AA0
  c->r[4]=0u+0x00000005u; // 801C5AA4
  c->lr=0x801C5AACu; f_8013114C(c); // 801C5AA8
  goto L_801C5AC4; // 801C5AAC
L_801C5AB0:;
  c->r[0]=0u+0x0000000Cu; // 801C5AB0
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5AB4
  c->r[3]=c->r[31]|c->r[31]; // 801C5AB8
  c->r[4]=0u+0x00000012u; // 801C5ABC
  c->lr=0x801C5AC4u; f_8013114C(c); // 801C5AC0
L_801C5AC4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5AC8
  c->lr=c->r[0]; // 801C5ACC
  c->r[1]=c->r[1]+0x00000010u; // 801C5AD0
  return; // 801C5AD4
}

// fn_801C5AD8
void f_801C5AD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5AD8
  c->r[0]=c->lr; // 801C5ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5AE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5AE4
  c->r[31]=c->r[3]|c->r[3]; // 801C5AE8
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5AEC
  c->lr=0x801C5AF4u; f_801B6038(c); // 801C5AF0
  c->r[0]=R32(c->r[31]+0x000000FCu); // 801C5AF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C5AF8
  if (crb(c,2)) { goto L_801C5B0C; } // 801C5AFC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5B00
  c->lr=0x801C5B08u; f_801B671C(c); // 801C5B04
  goto L_801C5B14; // 801C5B08
L_801C5B0C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5B0C
  c->lr=0x801C5B14u; f_801B66B4(c); // 801C5B10
L_801C5B14:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5B14
  c->lr=0x801C5B1Cu; f_801B1F6C(c); // 801C5B18
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5B1C
  c->lr=0x801C5B24u; f_801B1ED4(c); // 801C5B20
  c->r[0]=0u+0x00000000u; // 801C5B24
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801C5B28
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5B2C
  c->lr=0x801C5B34u; f_801B5220(c); // 801C5B30
  c->r[4]=c->r[3]|c->r[3]; // 801C5B34
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5B38
  c->lr=0x801C5B40u; f_801B249C(c); // 801C5B3C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5B40
  c->lr=0x801C5B48u; f_801B2488(c); // 801C5B44
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5B48
  c->lr=0x801C5B50u; f_801B2494(c); // 801C5B4C
  c->r[4]=c->r[3]|c->r[3]; // 801C5B50
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5B54
  c->lr=0x801C5B5Cu; f_801B5AFC(c); // 801C5B58
  c->r[3]=c->r[31]|c->r[31]; // 801C5B5C
  c->r[4]=0u+0x00000013u; // 801C5B60
  c->lr=0x801C5B68u; f_8013114C(c); // 801C5B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5B6C
  c->lr=c->r[0]; // 801C5B70
  c->r[1]=c->r[1]+0x00000010u; // 801C5B74
  return; // 801C5B78
}

// fn_801C5B7C
void f_801C5B7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5B7C
  c->r[0]=c->lr; // 801C5B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5B84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5B88
  c->r[31]=c->r[3]|c->r[3]; // 801C5B8C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5B90
  c->lr=0x801C5B98u; f_801B688C(c); // 801C5B94
  cmps(c,0,(int32_t)c->r[3],0); // 801C5B98
  if (crb(c,2)) { goto L_801C5BC8; } // 801C5B9C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5BA0
  c->lr=0x801C5BA8u; f_801B6844(c); // 801C5BA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5BA8
  c->lr=0x801C5BB0u; f_801B2494(c); // 801C5BAC
  c->r[4]=c->r[3]|c->r[3]; // 801C5BB0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5BB4
  c->lr=0x801C5BBCu; f_801B5B50(c); // 801C5BB8
  c->r[3]=c->r[31]|c->r[31]; // 801C5BBC
  c->r[4]=0u+0x00000014u; // 801C5BC0
  c->lr=0x801C5BC8u; f_8013114C(c); // 801C5BC4
L_801C5BC8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5BCC
  c->lr=c->r[0]; // 801C5BD0
  c->r[1]=c->r[1]+0x00000010u; // 801C5BD4
  return; // 801C5BD8
}

// fn_801C5BDC
void f_801C5BDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5BDC
  c->r[0]=c->lr; // 801C5BE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5BE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5BE8
  c->r[31]=c->r[3]|c->r[3]; // 801C5BEC
  c->r[3]=0u+0x00000001u; // 801C5BF0
  c->lr=0x801C5BF8u; f_8019CD1C(c); // 801C5BF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C5BF8
  if (crb(c,2)) { goto L_801C5C18; } // 801C5BFC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5C00
  c->lr=0x801C5C08u; f_801B1ECC(c); // 801C5C04
  c->r[3]=c->r[31]|c->r[31]; // 801C5C08
  c->r[4]=0u+0x00000017u; // 801C5C0C
  c->lr=0x801C5C14u; f_8013114C(c); // 801C5C10
  goto L_801C5CB4; // 801C5C14
L_801C5C18:;
  c->r[3]=0u+0x00000000u; // 801C5C18
  c->lr=0x801C5C20u; f_8019CD1C(c); // 801C5C1C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5C20
  if (crb(c,2)) { goto L_801C5C68; } // 801C5C24
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5C28
  c->lr=0x801C5C30u; f_801B2494(c); // 801C5C2C
  c->r[4]=c->r[3]|c->r[3]; // 801C5C30
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5C34
  c->lr=0x801C5C3Cu; f_801B5238(c); // 801C5C38
  cmps(c,0,(int32_t)c->r[3],0); // 801C5C3C
  if (crb(c,2)) { goto L_801C5C50; } // 801C5C40
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5C44
  c->lr=0x801C5C4Cu; f_801B2008(c); // 801C5C48
  goto L_801C5CB4; // 801C5C4C
L_801C5C50:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5C50
  c->lr=0x801C5C58u; f_801B1FD4(c); // 801C5C54
  c->r[3]=c->r[31]|c->r[31]; // 801C5C58
  c->r[4]=0u+0x00000015u; // 801C5C5C
  c->lr=0x801C5C64u; f_8013114C(c); // 801C5C60
  goto L_801C5CB4; // 801C5C64
L_801C5C68:;
  c->r[3]=0u+0x00000003u; // 801C5C68
  c->lr=0x801C5C70u; f_8019CD1C(c); // 801C5C6C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5C70
  if (crb(c,2)) { goto L_801C5C80; } // 801C5C74
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5C78
  c->lr=0x801C5C80u; f_801B243C(c); // 801C5C7C
L_801C5C80:;
  c->r[3]=0u+0x00000004u; // 801C5C80
  c->lr=0x801C5C88u; f_8019CD1C(c); // 801C5C84
  cmps(c,0,(int32_t)c->r[3],0); // 801C5C88
  if (crb(c,2)) { goto L_801C5C98; } // 801C5C8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5C90
  c->lr=0x801C5C98u; f_801B23F0(c); // 801C5C94
L_801C5C98:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5C98
  c->lr=0x801C5CA0u; f_801B6844(c); // 801C5C9C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5CA0
  c->lr=0x801C5CA8u; f_801B2494(c); // 801C5CA4
  c->r[4]=c->r[3]|c->r[3]; // 801C5CA8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5CAC
  c->lr=0x801C5CB4u; f_801B5B50(c); // 801C5CB0
L_801C5CB4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5CB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5CB8
  c->lr=c->r[0]; // 801C5CBC
  c->r[1]=c->r[1]+0x00000010u; // 801C5CC0
  return; // 801C5CC4
}

// fn_801C5CC8
void f_801C5CC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5CC8
  c->r[0]=c->lr; // 801C5CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5CD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5CD4
  c->r[31]=c->r[3]|c->r[3]; // 801C5CD8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C5CDC
  c->lr=0x801C5CE4u; f_801B2494(c); // 801C5CE0
  c->r[4]=c->r[3]|c->r[3]; // 801C5CE4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5CE8
  c->lr=0x801C5CF0u; f_801B5B0C(c); // 801C5CEC
  c->r[3]=c->r[31]|c->r[31]; // 801C5CF0
  c->r[4]=0u+0x00000016u; // 801C5CF4
  c->lr=0x801C5CFCu; f_8013114C(c); // 801C5CF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5CFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5D00
  c->lr=c->r[0]; // 801C5D04
  c->r[1]=c->r[1]+0x00000010u; // 801C5D08
  return; // 801C5D0C
}

// fn_801C5D10
void f_801C5D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5D10
  c->r[0]=c->lr; // 801C5D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5D18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5D1C
  c->r[31]=c->r[3]|c->r[3]; // 801C5D20
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5D24
  c->lr=0x801C5D2Cu; f_801B688C(c); // 801C5D28
  cmps(c,0,(int32_t)c->r[3],0); // 801C5D2C
  if (crb(c,2)) { goto L_801C5D4C; } // 801C5D30
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5D34
  c->r[4]=0u+0x00000000u; // 801C5D38
  c->lr=0x801C5D40u; f_801B635C(c); // 801C5D3C
  c->r[3]=c->r[31]|c->r[31]; // 801C5D40
  c->r[4]=0u+0x00000017u; // 801C5D44
  c->lr=0x801C5D4Cu; f_8013114C(c); // 801C5D48
L_801C5D4C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5D50
  c->lr=c->r[0]; // 801C5D54
  c->r[1]=c->r[1]+0x00000010u; // 801C5D58
  return; // 801C5D5C
}

// fn_801C5D60
void f_801C5D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5D60
  c->r[0]=c->lr; // 801C5D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5D68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5D6C
  c->r[31]=c->r[3]|c->r[3]; // 801C5D70
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5D74
  c->r[4]=0u+0x00000000u; // 801C5D78
  c->lr=0x801C5D80u; f_801B635C(c); // 801C5D7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5D80
  c->lr=0x801C5D88u; f_801B1EDC(c); // 801C5D84
  cmps(c,0,(int32_t)c->r[3],0); // 801C5D88
  if (crb(c,2)) { goto L_801C5D9C; } // 801C5D8C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5D90
  c->lr=0x801C5D98u; f_801B6784(c); // 801C5D94
  goto L_801C5DE8; // 801C5D98
L_801C5D9C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5D9C
  c->lr=0x801C5DA4u; f_801B2494(c); // 801C5DA0
  cmps(c,0,(int32_t)c->r[3],1); // 801C5DA4
  if (crb(c,2)) { goto L_801C5DD4; } // 801C5DA8
  if (!crb(c,0)) { goto L_801C5DBC; } // 801C5DAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C5DB0
  if (!crb(c,0)) { goto L_801C5DC8; } // 801C5DB4
  goto L_801C5DE8; // 801C5DB8
L_801C5DBC:;
  cmps(c,0,(int32_t)c->r[3],3); // 801C5DBC
  if (!crb(c,0)) { goto L_801C5DE8; } // 801C5DC0
  goto L_801C5DE0; // 801C5DC4
L_801C5DC8:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5DC8
  c->lr=0x801C5DD0u; f_801B67CC(c); // 801C5DCC
  goto L_801C5DE8; // 801C5DD0
L_801C5DD4:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5DD4
  c->lr=0x801C5DDCu; f_801B680C(c); // 801C5DD8
  goto L_801C5DE8; // 801C5DDC
L_801C5DE0:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5DE0
  c->lr=0x801C5DE8u; f_801B6784(c); // 801C5DE4
L_801C5DE8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5DE8
  c->lr=0x801C5DF0u; f_801B1FA0(c); // 801C5DEC
  c->r[3]=c->r[31]|c->r[31]; // 801C5DF0
  c->r[4]=0u+0x00000018u; // 801C5DF4
  c->lr=0x801C5DFCu; f_8013114C(c); // 801C5DF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5DFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5E00
  c->lr=c->r[0]; // 801C5E04
  c->r[1]=c->r[1]+0x00000010u; // 801C5E08
  return; // 801C5E0C
}

// fn_801C5E10
void f_801C5E10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5E10
  c->r[0]=c->lr; // 801C5E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5E1C
  c->r[31]=c->r[3]|c->r[3]; // 801C5E20
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C5E24
  c->lr=0x801C5E2Cu; f_801B688C(c); // 801C5E28
  cmps(c,0,(int32_t)c->r[3],0); // 801C5E2C
  if (crb(c,2)) { goto L_801C6060; } // 801C5E30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5E34
  c->lr=0x801C5E3Cu; f_801B1EDC(c); // 801C5E38
  cmps(c,0,(int32_t)c->r[3],0); // 801C5E3C
  if (crb(c,2)) { goto L_801C5E60; } // 801C5E40
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5E44
  c->r[4]=0u+0x00000000u; // 801C5E48
  c->lr=0x801C5E50u; f_801B61FC(c); // 801C5E4C
  c->r[3]=c->r[31]|c->r[31]; // 801C5E50
  c->r[4]=R32(c->r[31]+0x000000F0u); // 801C5E54
  c->lr=0x801C5E5Cu; f_8013114C(c); // 801C5E58
  goto L_801C6060; // 801C5E5C
L_801C5E60:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5E60
  c->lr=0x801C5E68u; f_801B2494(c); // 801C5E64
  cmps(c,0,(int32_t)c->r[3],1); // 801C5E68
  if (crb(c,2)) { goto L_801C6024; } // 801C5E6C
  if (!crb(c,0)) { goto L_801C5E80; } // 801C5E70
  cmps(c,0,(int32_t)c->r[3],0); // 801C5E74
  if (!crb(c,0)) { goto L_801C5E8C; } // 801C5E78
  goto L_801C6060; // 801C5E7C
L_801C5E80:;
  cmps(c,0,(int32_t)c->r[3],3); // 801C5E80
  if (!crb(c,0)) { goto L_801C6060; } // 801C5E84
  goto L_801C6048; // 801C5E88
L_801C5E8C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5E8C
  c->lr=0x801C5E94u; f_801B5DF0(c); // 801C5E90
  c->r[4]=c->r[3]|c->r[3]; // 801C5E94
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5E98
  c->lr=0x801C5EA0u; f_801B374C(c); // 801C5E9C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5EA0
  c->r[4]=0u+0xFFFFFFFFu; // 801C5EA4
  c->lr=0x801C5EACu; f_801B3754(c); // 801C5EA8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5EAC
  c->lr=0x801C5EB4u; f_801B33C0(c); // 801C5EB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C5EB4
  if (crb(c,2)) { goto L_801C5EEC; } // 801C5EB8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5EBC
  c->r[4]=0u+0x00000000u; // 801C5EC0
  c->lr=0x801C5EC8u; f_801B6244(c); // 801C5EC4
  c->r[0]=0u+0x00000005u; // 801C5EC8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5ECC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5ED0
  c->r[4]=0u+0x00000006u; // 801C5ED4
  c->lr=0x801C5EDCu; f_801B396C(c); // 801C5ED8
  c->r[3]=c->r[31]|c->r[31]; // 801C5EDC
  c->r[4]=0u+0x0000006Bu; // 801C5EE0
  c->lr=0x801C5EE8u; f_8013114C(c); // 801C5EE4
  goto L_801C6060; // 801C5EE8
L_801C5EEC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5EEC
  c->lr=0x801C5EF4u; f_801B3704(c); // 801C5EF0
  cmps(c,0,(int32_t)c->r[3],0); // 801C5EF4
  if (crb(c,2)) { goto L_801C5F2C; } // 801C5EF8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5EFC
  c->r[4]=0u+0x00000000u; // 801C5F00
  c->lr=0x801C5F08u; f_801B6244(c); // 801C5F04
  c->r[0]=0u+0x0000000Cu; // 801C5F08
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5F0C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5F10
  c->r[4]=0u+0x00000007u; // 801C5F14
  c->lr=0x801C5F1Cu; f_801B396C(c); // 801C5F18
  c->r[3]=c->r[31]|c->r[31]; // 801C5F1C
  c->r[4]=0u+0x0000006Bu; // 801C5F20
  c->lr=0x801C5F28u; f_8013114C(c); // 801C5F24
  goto L_801C6060; // 801C5F28
L_801C5F2C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5F2C
  c->lr=0x801C5F34u; f_801B3450(c); // 801C5F30
  cmps(c,0,(int32_t)c->r[3],0); // 801C5F34
  if (crb(c,2)) { goto L_801C5F6C; } // 801C5F38
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5F3C
  c->r[4]=0u+0x00000000u; // 801C5F40
  c->lr=0x801C5F48u; f_801B6244(c); // 801C5F44
  c->r[0]=0u+0x0000000Cu; // 801C5F48
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5F4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5F50
  c->r[4]=0u+0x00000003u; // 801C5F54
  c->lr=0x801C5F5Cu; f_801B396C(c); // 801C5F58
  c->r[3]=c->r[31]|c->r[31]; // 801C5F5C
  c->r[4]=0u+0x0000006Bu; // 801C5F60
  c->lr=0x801C5F68u; f_8013114C(c); // 801C5F64
  goto L_801C6060; // 801C5F68
L_801C5F6C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5F6C
  c->lr=0x801C5F74u; f_801B36BC(c); // 801C5F70
  cmps(c,0,(int32_t)c->r[3],0); // 801C5F74
  if (crb(c,2)) { goto L_801C5FAC; } // 801C5F78
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5F7C
  c->r[4]=0u+0x00000000u; // 801C5F80
  c->lr=0x801C5F88u; f_801B6244(c); // 801C5F84
  c->r[0]=0u+0x0000000Cu; // 801C5F88
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5F8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5F90
  c->r[4]=0u+0x00000005u; // 801C5F94
  c->lr=0x801C5F9Cu; f_801B396C(c); // 801C5F98
  c->r[3]=c->r[31]|c->r[31]; // 801C5F9C
  c->r[4]=0u+0x0000006Bu; // 801C5FA0
  c->lr=0x801C5FA8u; f_8013114C(c); // 801C5FA4
  goto L_801C6060; // 801C5FA8
L_801C5FAC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5FAC
  c->lr=0x801C5FB4u; f_801B3378(c); // 801C5FB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C5FB4
  if (crb(c,2)) { goto L_801C5FEC; } // 801C5FB8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5FBC
  c->r[4]=0u+0x00000000u; // 801C5FC0
  c->lr=0x801C5FC8u; f_801B6244(c); // 801C5FC4
  c->r[0]=0u+0x00000019u; // 801C5FC8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C5FCC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5FD0
  c->r[4]=0u+0x00000001u; // 801C5FD4
  c->lr=0x801C5FDCu; f_801B38BC(c); // 801C5FD8
  c->r[3]=c->r[31]|c->r[31]; // 801C5FDC
  c->r[4]=0u+0x0000006Bu; // 801C5FE0
  c->lr=0x801C5FE8u; f_8013114C(c); // 801C5FE4
  goto L_801C6060; // 801C5FE8
L_801C5FEC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C5FEC
  c->lr=0x801C5FF4u; f_801B375C(c); // 801C5FF0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C5FF4
  c->r[4]=0u+0x00000000u; // 801C5FF8
  c->lr=0x801C6000u; f_801B6244(c); // 801C5FFC
  c->r[0]=0u+0x00000005u; // 801C6000
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C6004
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6008
  c->r[4]=0u+0x00000000u; // 801C600C
  c->lr=0x801C6014u; f_801B38BC(c); // 801C6010
  c->r[3]=c->r[31]|c->r[31]; // 801C6014
  c->r[4]=0u+0x00000026u; // 801C6018
  c->lr=0x801C6020u; f_8013114C(c); // 801C601C
  goto L_801C6060; // 801C6020
L_801C6024:;
  c->r[0]=0u+0x00000001u; // 801C6024
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801C6028
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C602C
  c->r[4]=0u+0x00000000u; // 801C6030
  c->lr=0x801C6038u; f_801B6244(c); // 801C6034
  c->r[3]=c->r[31]|c->r[31]; // 801C6038
  c->r[4]=0u+0x00000021u; // 801C603C
  c->lr=0x801C6044u; f_8013114C(c); // 801C6040
  goto L_801C6060; // 801C6044
L_801C6048:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6048
  c->r[4]=0u+0x00000000u; // 801C604C
  c->lr=0x801C6054u; f_801B61FC(c); // 801C6050
  c->r[3]=c->r[31]|c->r[31]; // 801C6054
  c->r[4]=R32(c->r[31]+0x000000F0u); // 801C6058
  c->lr=0x801C6060u; f_8013114C(c); // 801C605C
L_801C6060:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6060
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6064
  c->lr=c->r[0]; // 801C6068
  c->r[1]=c->r[1]+0x00000010u; // 801C606C
  return; // 801C6070
}

// fn_801C6074
void f_801C6074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6074
  c->r[0]=c->lr; // 801C6078
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C607C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6080
  c->r[31]=c->r[3]|c->r[3]; // 801C6084
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6088
  c->lr=0x801C6090u; f_801B6890(c); // 801C608C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6090
  c->lr=0x801C6098u; f_801B1F6C(c); // 801C6094
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6098
  c->lr=0x801C60A0u; f_801B1ED4(c); // 801C609C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C60A0
  c->lr=0x801C60A8u; f_801B5220(c); // 801C60A4
  c->r[4]=c->r[3]|c->r[3]; // 801C60A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C60AC
  c->lr=0x801C60B4u; f_801B2550(c); // 801C60B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C60B4
  c->lr=0x801C60BCu; f_801B253C(c); // 801C60B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C60BC
  c->lr=0x801C60C4u; f_801B2548(c); // 801C60C0
  c->r[4]=c->r[3]|c->r[3]; // 801C60C4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C60C8
  c->lr=0x801C60D0u; f_801B5AFC(c); // 801C60CC
  c->r[3]=c->r[31]|c->r[31]; // 801C60D0
  c->r[4]=0u+0x0000001Au; // 801C60D4
  c->lr=0x801C60DCu; f_8013114C(c); // 801C60D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C60DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C60E0
  c->lr=c->r[0]; // 801C60E4
  c->r[1]=c->r[1]+0x00000010u; // 801C60E8
  return; // 801C60EC
}

// fn_801C60F0
void f_801C60F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C60F0
  c->r[0]=c->lr; // 801C60F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C60F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C60FC
  c->r[31]=c->r[3]|c->r[3]; // 801C6100
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6104
  c->lr=0x801C610Cu; f_801B6934(c); // 801C6108
  cmps(c,0,(int32_t)c->r[3],0); // 801C610C
  if (crb(c,2)) { goto L_801C613C; } // 801C6110
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6114
  c->lr=0x801C611Cu; f_801B6930(c); // 801C6118
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C611C
  c->lr=0x801C6124u; f_801B2548(c); // 801C6120
  c->r[4]=c->r[3]|c->r[3]; // 801C6124
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6128
  c->lr=0x801C6130u; f_801B5B50(c); // 801C612C
  c->r[3]=c->r[31]|c->r[31]; // 801C6130
  c->r[4]=0u+0x0000001Bu; // 801C6134
  c->lr=0x801C613Cu; f_8013114C(c); // 801C6138
L_801C613C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C613C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6140
  c->lr=c->r[0]; // 801C6144
  c->r[1]=c->r[1]+0x00000010u; // 801C6148
  return; // 801C614C
}

// fn_801C6150
void f_801C6150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6150
  c->r[0]=c->lr; // 801C6154
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C615C
  c->r[31]=c->r[3]|c->r[3]; // 801C6160
  c->r[3]=0u+0x00000001u; // 801C6164
  c->lr=0x801C616Cu; f_8019CD1C(c); // 801C6168
  cmps(c,0,(int32_t)c->r[3],0); // 801C616C
  if (crb(c,2)) { goto L_801C618C; } // 801C6170
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6174
  c->lr=0x801C617Cu; f_801B1ECC(c); // 801C6178
  c->r[3]=c->r[31]|c->r[31]; // 801C617C
  c->r[4]=0u+0x0000001Eu; // 801C6180
  c->lr=0x801C6188u; f_8013114C(c); // 801C6184
  goto L_801C6228; // 801C6188
L_801C618C:;
  c->r[3]=0u+0x00000000u; // 801C618C
  c->lr=0x801C6194u; f_8019CD1C(c); // 801C6190
  cmps(c,0,(int32_t)c->r[3],0); // 801C6194
  if (crb(c,2)) { goto L_801C61DC; } // 801C6198
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C619C
  c->lr=0x801C61A4u; f_801B2548(c); // 801C61A0
  c->r[4]=c->r[3]|c->r[3]; // 801C61A4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C61A8
  c->lr=0x801C61B0u; f_801B5238(c); // 801C61AC
  cmps(c,0,(int32_t)c->r[3],0); // 801C61B0
  if (crb(c,2)) { goto L_801C61C4; } // 801C61B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C61B8
  c->lr=0x801C61C0u; f_801B2008(c); // 801C61BC
  goto L_801C6228; // 801C61C0
L_801C61C4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C61C4
  c->lr=0x801C61CCu; f_801B1FD4(c); // 801C61C8
  c->r[3]=c->r[31]|c->r[31]; // 801C61CC
  c->r[4]=0u+0x0000001Cu; // 801C61D0
  c->lr=0x801C61D8u; f_8013114C(c); // 801C61D4
  goto L_801C6228; // 801C61D8
L_801C61DC:;
  c->r[3]=0u+0x00000003u; // 801C61DC
  c->lr=0x801C61E4u; f_8019CD1C(c); // 801C61E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C61E4
  if (crb(c,2)) { goto L_801C61F4; } // 801C61E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C61EC
  c->lr=0x801C61F4u; f_801B24F0(c); // 801C61F0
L_801C61F4:;
  c->r[3]=0u+0x00000004u; // 801C61F4
  c->lr=0x801C61FCu; f_8019CD1C(c); // 801C61F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C61FC
  if (crb(c,2)) { goto L_801C620C; } // 801C6200
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6204
  c->lr=0x801C620Cu; f_801B24A4(c); // 801C6208
L_801C620C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C620C
  c->lr=0x801C6214u; f_801B6930(c); // 801C6210
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6214
  c->lr=0x801C621Cu; f_801B2548(c); // 801C6218
  c->r[4]=c->r[3]|c->r[3]; // 801C621C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6220
  c->lr=0x801C6228u; f_801B5B50(c); // 801C6224
L_801C6228:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6228
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C622C
  c->lr=c->r[0]; // 801C6230
  c->r[1]=c->r[1]+0x00000010u; // 801C6234
  return; // 801C6238
}

// fn_801C623C
void f_801C623C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C623C
  c->r[0]=c->lr; // 801C6240
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6244
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6248
  c->r[31]=c->r[3]|c->r[3]; // 801C624C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C6250
  c->lr=0x801C6258u; f_801B2548(c); // 801C6254
  c->r[4]=c->r[3]|c->r[3]; // 801C6258
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C625C
  c->lr=0x801C6264u; f_801B5B0C(c); // 801C6260
  c->r[3]=c->r[31]|c->r[31]; // 801C6264
  c->r[4]=0u+0x0000001Du; // 801C6268
  c->lr=0x801C6270u; f_8013114C(c); // 801C626C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6270
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6274
  c->lr=c->r[0]; // 801C6278
  c->r[1]=c->r[1]+0x00000010u; // 801C627C
  return; // 801C6280
}

// fn_801C6284
void f_801C6284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6284
  c->r[0]=c->lr; // 801C6288
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C628C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6290
  c->r[31]=c->r[3]|c->r[3]; // 801C6294
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6298
  c->lr=0x801C62A0u; f_801B6934(c); // 801C629C
  cmps(c,0,(int32_t)c->r[3],0); // 801C62A0
  if (crb(c,2)) { goto L_801C62C0; } // 801C62A4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C62A8
  c->r[4]=0u+0x00000000u; // 801C62AC
  c->lr=0x801C62B4u; f_801B635C(c); // 801C62B0
  c->r[3]=c->r[31]|c->r[31]; // 801C62B4
  c->r[4]=0u+0x0000001Eu; // 801C62B8
  c->lr=0x801C62C0u; f_8013114C(c); // 801C62BC
L_801C62C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C62C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C62C4
  c->lr=c->r[0]; // 801C62C8
  c->r[1]=c->r[1]+0x00000010u; // 801C62CC
  return; // 801C62D0
}

// fn_801C62D4
void f_801C62D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C62D4
  c->r[0]=c->lr; // 801C62D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C62DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C62E0
  c->r[31]=c->r[3]|c->r[3]; // 801C62E4
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C62E8
  c->r[4]=0u+0x00000000u; // 801C62EC
  c->lr=0x801C62F4u; f_801B635C(c); // 801C62F0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C62F4
  c->lr=0x801C62FCu; f_801B68F0(c); // 801C62F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C62FC
  c->lr=0x801C6304u; f_801B1FA0(c); // 801C6300
  c->r[3]=c->r[31]|c->r[31]; // 801C6304
  c->r[4]=0u+0x0000001Fu; // 801C6308
  c->lr=0x801C6310u; f_8013114C(c); // 801C630C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6310
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6314
  c->lr=c->r[0]; // 801C6318
  c->r[1]=c->r[1]+0x00000010u; // 801C631C
  return; // 801C6320
}

// fn_801C6324
void f_801C6324(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6324
  c->r[0]=c->lr; // 801C6328
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C632C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6330
  c->r[31]=c->r[3]|c->r[3]; // 801C6334
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6338
  c->lr=0x801C6340u; f_801B6934(c); // 801C633C
  cmps(c,0,(int32_t)c->r[3],0); // 801C6340
  if (crb(c,2)) { goto L_801C63EC; } // 801C6344
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6348
  c->r[4]=0u+0x00000000u; // 801C634C
  c->lr=0x801C6354u; f_801B624C(c); // 801C6350
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6354
  c->lr=0x801C635Cu; f_801B1EDC(c); // 801C6358
  cmps(c,0,(int32_t)c->r[3],0); // 801C635C
  if (crb(c,2)) { goto L_801C6388; } // 801C6360
  c->r[0]=0u+0x0000000Cu; // 801C6364
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C6368
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C636C
  c->r[4]=0u+0x00000003u; // 801C6370
  c->lr=0x801C6378u; f_801B38BC(c); // 801C6374
  c->r[3]=c->r[31]|c->r[31]; // 801C6378
  c->r[4]=0u+0x0000006Bu; // 801C637C
  c->lr=0x801C6384u; f_8013114C(c); // 801C6380
  goto L_801C63EC; // 801C6384
L_801C6388:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6388
  c->lr=0x801C6390u; f_801B2548(c); // 801C638C
  cmps(c,0,(int32_t)c->r[3],1); // 801C6390
  if (crb(c,2)) { goto L_801C63CC; } // 801C6394
  if (!crb(c,0)) { goto L_801C63EC; } // 801C6398
  cmps(c,0,(int32_t)c->r[3],0); // 801C639C
  if (!crb(c,0)) { goto L_801C63A8; } // 801C63A0
  goto L_801C63EC; // 801C63A4
L_801C63A8:;
  c->r[0]=0u+0x00000020u; // 801C63A8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C63AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C63B0
  c->r[4]=0u+0x00000002u; // 801C63B4
  c->lr=0x801C63BCu; f_801B38BC(c); // 801C63B8
  c->r[3]=c->r[31]|c->r[31]; // 801C63BC
  c->r[4]=0u+0x0000006Bu; // 801C63C0
  c->lr=0x801C63C8u; f_8013114C(c); // 801C63C4
  goto L_801C63EC; // 801C63C8
L_801C63CC:;
  c->r[0]=0u+0x0000000Cu; // 801C63CC
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801C63D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C63D4
  c->r[4]=0u+0x00000003u; // 801C63D8
  c->lr=0x801C63E0u; f_801B38BC(c); // 801C63DC
  c->r[3]=c->r[31]|c->r[31]; // 801C63E0
  c->r[4]=0u+0x0000006Bu; // 801C63E4
  c->lr=0x801C63ECu; f_8013114C(c); // 801C63E8
L_801C63EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C63EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C63F0
  c->lr=c->r[0]; // 801C63F4
  c->r[1]=c->r[1]+0x00000010u; // 801C63F8
  return; // 801C63FC
}

// fn_801C6400
void f_801C6400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6400
  c->r[0]=c->lr; // 801C6404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C640C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6410
  c->r[30]=c->r[3]|c->r[3]; // 801C6414
  c->r[31]=0u+0x00000005u; // 801C6418
  W32(c->r[3]+0x000000F0u,c->r[31]); // 801C641C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6420
  c->lr=0x801C6428u; f_801B5DF0(c); // 801C6424
  c->r[4]=c->r[3]|c->r[3]; // 801C6428
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C642C
  c->lr=0x801C6434u; f_801B374C(c); // 801C6430
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C6434
  c->lr=0x801C643Cu; f_801B37AC(c); // 801C6438
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C643C
  c->lr=0x801C6444u; f_801B3408(c); // 801C6440
  cmps(c,0,(int32_t)c->r[3],0); // 801C6444
  if (crb(c,2)) { goto L_801C646C; } // 801C6448
  W32(c->r[30]+0x000000F0u,c->r[31]); // 801C644C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C6450
  c->r[4]=0u+0x00000004u; // 801C6454
  c->lr=0x801C645Cu; f_801B38BC(c); // 801C6458
  c->r[3]=c->r[30]|c->r[30]; // 801C645C
  c->r[4]=0u+0x00000026u; // 801C6460
  c->lr=0x801C6468u; f_8013114C(c); // 801C6464
  goto L_801C6488; // 801C6468
L_801C646C:;
  W32(c->r[30]+0x000000F0u,c->r[31]); // 801C646C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C6470
  c->r[4]=0u+0x00000005u; // 801C6474
  c->lr=0x801C647Cu; f_801B38BC(c); // 801C6478
  c->r[3]=c->r[30]|c->r[30]; // 801C647C
  c->r[4]=0u+0x00000026u; // 801C6480
  c->lr=0x801C6488u; f_8013114C(c); // 801C6484
L_801C6488:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6488
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C648C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6490
  c->lr=c->r[0]; // 801C6494
  c->r[1]=c->r[1]+0x00000010u; // 801C6498
  return; // 801C649C
}

// fn_801C64A0
void f_801C64A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C64A0
  c->r[0]=c->lr; // 801C64A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C64A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C64AC
  c->r[31]=c->r[3]|c->r[3]; // 801C64B0
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C64B4
  c->r[4]=0u+0x00000000u; // 801C64B8
  c->lr=0x801C64C0u; f_801B6018(c); // 801C64BC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C64C0
  c->lr=0x801C64C8u; f_801B6970(c); // 801C64C4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C64C8
  c->lr=0x801C64D0u; f_801B6AF0(c); // 801C64CC
  c->r[4]=c->r[3]|c->r[3]; // 801C64D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C64D4
  c->lr=0x801C64DCu; f_801B260C(c); // 801C64D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C64DC
  c->lr=0x801C64E4u; f_801B2600(c); // 801C64E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C64E4
  c->lr=0x801C64ECu; f_801B25F8(c); // 801C64E8
  c->r[4]=c->r[3]|c->r[3]; // 801C64EC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C64F0
  c->lr=0x801C64F8u; f_801B5B04(c); // 801C64F4
  c->r[3]=c->r[31]|c->r[31]; // 801C64F8
  c->r[4]=0u+0x00000022u; // 801C64FC
  c->lr=0x801C6504u; f_8013114C(c); // 801C6500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6504
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6508
  c->lr=c->r[0]; // 801C650C
  c->r[1]=c->r[1]+0x00000010u; // 801C6510
  return; // 801C6514
}

// fn_801C6518
void f_801C6518(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6518
  c->r[0]=c->lr; // 801C651C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6520
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6524
  c->r[31]=c->r[3]|c->r[3]; // 801C6528
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C652C
  c->lr=0x801C6534u; f_801B6AEC(c); // 801C6530
  cmps(c,0,(int32_t)c->r[3],0); // 801C6534
  if (crb(c,2)) { goto L_801C655C; } // 801C6538
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C653C
  c->lr=0x801C6544u; f_801B25F8(c); // 801C6540
  c->r[4]=c->r[3]|c->r[3]; // 801C6544
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6548
  c->lr=0x801C6550u; f_801B6A30(c); // 801C654C
  c->r[3]=c->r[31]|c->r[31]; // 801C6550
  c->r[4]=0u+0x00000023u; // 801C6554
  c->lr=0x801C655Cu; f_8013114C(c); // 801C6558
L_801C655C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C655C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6560
  c->lr=c->r[0]; // 801C6564
  c->r[1]=c->r[1]+0x00000010u; // 801C6568
  return; // 801C656C
}

// fn_801C6570
void f_801C6570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6570
  c->r[0]=c->lr; // 801C6574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C657C
  c->r[31]=c->r[3]|c->r[3]; // 801C6580
  c->r[3]=0u+0x00000001u; // 801C6584
  c->lr=0x801C658Cu; f_8019CD1C(c); // 801C6588
  cmps(c,0,(int32_t)c->r[3],0); // 801C658C
  if (crb(c,2)) { goto L_801C65AC; } // 801C6590
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6594
  c->lr=0x801C659Cu; f_801B1ECC(c); // 801C6598
  c->r[3]=c->r[31]|c->r[31]; // 801C659C
  c->r[4]=0u+0x00000024u; // 801C65A0
  c->lr=0x801C65A8u; f_8013114C(c); // 801C65A4
  goto L_801C65F0; // 801C65A8
L_801C65AC:;
  c->r[3]=0u+0x00000006u; // 801C65AC
  c->lr=0x801C65B4u; f_8019CD1C(c); // 801C65B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C65B4
  if (crb(c,2)) { goto L_801C65C4; } // 801C65B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C65BC
  c->lr=0x801C65C4u; f_801B25A8(c); // 801C65C0
L_801C65C4:;
  c->r[3]=0u+0x00000005u; // 801C65C4
  c->lr=0x801C65CCu; f_8019CD1C(c); // 801C65C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C65CC
  if (crb(c,2)) { goto L_801C65DC; } // 801C65D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C65D4
  c->lr=0x801C65DCu; f_801B2558(c); // 801C65D8
L_801C65DC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C65DC
  c->lr=0x801C65E4u; f_801B25F8(c); // 801C65E0
  c->r[4]=c->r[3]|c->r[3]; // 801C65E4
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C65E8
  c->lr=0x801C65F0u; f_801B6A30(c); // 801C65EC
L_801C65F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C65F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C65F4
  c->lr=c->r[0]; // 801C65F8
  c->r[1]=c->r[1]+0x00000010u; // 801C65FC
  return; // 801C6600
}

// fn_801C6604
void f_801C6604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6604
  c->r[0]=c->lr; // 801C6608
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C660C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6610
  c->r[31]=c->r[3]|c->r[3]; // 801C6614
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6618
  c->lr=0x801C6620u; f_801B69E4(c); // 801C661C
  c->r[3]=c->r[31]|c->r[31]; // 801C6620
  c->r[4]=0u+0x00000025u; // 801C6624
  c->lr=0x801C662Cu; f_8013114C(c); // 801C6628
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C662C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6630
  c->lr=c->r[0]; // 801C6634
  c->r[1]=c->r[1]+0x00000010u; // 801C6638
  return; // 801C663C
}

// fn_801C6640
void f_801C6640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6640
  c->r[0]=c->lr; // 801C6644
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C664C
  c->r[31]=c->r[3]|c->r[3]; // 801C6650
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801C6654
  c->lr=0x801C665Cu; f_801B6AEC(c); // 801C6658
  cmps(c,0,(int32_t)c->r[3],0); // 801C665C
  if (crb(c,2)) { goto L_801C667C; } // 801C6660
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C6664
  c->r[4]=0u+0x00000000u; // 801C6668
  c->lr=0x801C6670u; f_801B6250(c); // 801C666C
  c->r[3]=c->r[31]|c->r[31]; // 801C6670
  c->r[4]=0u+0x00000012u; // 801C6674
  c->lr=0x801C667Cu; f_8013114C(c); // 801C6678
L_801C667C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C667C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6680
  c->lr=c->r[0]; // 801C6684
  c->r[1]=c->r[1]+0x00000010u; // 801C6688
  return; // 801C668C
}

// fn_801C6690
void f_801C6690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6690
  c->r[0]=c->lr; // 801C6694
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C669C
  c->r[31]=c->r[3]|c->r[3]; // 801C66A0
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C66A4
  c->lr=0x801C66ACu; f_801B203C(c); // 801C66A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C66AC
  c->lr=0x801C66B4u; f_801B2098(c); // 801C66B0
  c->r[3]=c->r[31]|c->r[31]; // 801C66B4
  c->r[4]=0u+0x00000027u; // 801C66B8
  c->lr=0x801C66C0u; f_8013114C(c); // 801C66BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C66C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C66C4
  c->lr=c->r[0]; // 801C66C8
  c->r[1]=c->r[1]+0x00000010u; // 801C66CC
  return; // 801C66D0
}

// fn_801C66D4
void f_801C66D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C66D4
  c->r[0]=c->lr; // 801C66D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C66DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C66E0
  c->r[31]=c->r[3]|c->r[3]; // 801C66E4
  c->lr=0x801C66ECu; f_801C2514(c); // 801C66E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C66EC
  if (crb(c,2)) { goto L_801C6708; } // 801C66F0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C66F4
  c->lr=0x801C66FCu; f_801B6938(c); // 801C66F8
  c->r[3]=c->r[31]|c->r[31]; // 801C66FC
  c->r[4]=0u+0x0000006Bu; // 801C6700
  c->lr=0x801C6708u; f_8013114C(c); // 801C6704
L_801C6708:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6708
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C670C
  c->lr=c->r[0]; // 801C6710
  c->r[1]=c->r[1]+0x00000010u; // 801C6714
  return; // 801C6718
}

// fn_801C671C
void f_801C671C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C671C
  c->r[0]=c->lr; // 801C6720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6728
  c->r[31]=c->r[3]|c->r[3]; // 801C672C
  c->lr=0x801C6734u; f_8012FAAC(c); // 801C6730
  c->r[3]=0u+0x80470000u; // 801C6734
  c->r[0]=c->r[3]+0x00002110u; // 801C6738
  W32(c->r[31]+0x00000058u,c->r[0]); // 801C673C
  c->r[0]=0u+0x00000000u; // 801C6740
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801C6744
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801C6748
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801C674C
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801C6750
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801C6754
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801C6758
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801C675C
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801C6760
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801C6764
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801C6768
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801C676C
  c->r[3]=c->r[31]|c->r[31]; // 801C6770
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6774
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6778
  c->lr=c->r[0]; // 801C677C
  c->r[1]=c->r[1]+0x00000010u; // 801C6780
  return; // 801C6784
}

// fn_801C6788
void f_801C6788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6788
  c->r[0]=c->lr; // 801C678C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6790
  c->r[11]=c->r[1]+0x00000020u; // 801C6794
  c->lr=0x801C679Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6798
  c->r[27]=c->r[3]|c->r[3]; // 801C679C
  c->r[29]=0u+0x00000000u; // 801C67A0
  c->r[30]=c->r[27]|c->r[27]; // 801C67A4
L_801C67A8:;
  c->lr=0x801C67ACu; f_80056B5C(c); // 801C67A8
  c->r[28]=c->r[3]|c->r[3]; // 801C67AC
  c->lr=0x801C67B4u; f_801F1340(c); // 801C67B0
  c->lr=0x801C67B8u; f_80056B54(c); // 801C67B4
  c->r[3]=0u+0x00000B30u; // 801C67B8
  c->lr=0x801C67C0u; f_80047B64(c); // 801C67BC
  c->r[31]=c->r[3]|c->r[3]; // 801C67C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C67C4
  if (crb(c,2)) { goto L_801C67D0; } // 801C67C8
  c->lr=0x801C67D0u; f_8014CB60(c); // 801C67CC
L_801C67D0:;
  W32(c->r[30]+0x000000C0u,c->r[31]); // 801C67D0
  c->r[3]=c->r[28]|c->r[28]; // 801C67D4
  c->lr=0x801C67DCu; f_80056B54(c); // 801C67D8
  c->lr=0x801C67E0u; f_80114E10(c); // 801C67DC
  c->lr=0x801C67E4u; f_80116598(c); // 801C67E0
  c->r[4]=c->r[3]|c->r[3]; // 801C67E4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801C67E8
  c->lr=0x801C67F0u; f_80114AE0(c); // 801C67EC
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801C67F0
  c->r[4]=c->r[29]|c->r[29]; // 801C67F4
  c->lr=0x801C67FCu; f_80114AD8(c); // 801C67F8
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801C67FC
  c->r[4]=0u+0x00000009u; // 801C6800
  c->lr=0x801C6808u; f_80111F48(c); // 801C6804
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801C6808
  c->r[12]=R32(c->r[3]+0x00000020u); // 801C680C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801C6810
  c->ctr=c->r[12]; // 801C6814
  if (true) { c->lr=0x801C681Cu; dispatch(c,c->ctr); } // 801C6818
  c->r[30]=c->r[30]+0x00000004u; // 801C681C
  c->r[29]=c->r[29]+0x00000001u; // 801C6820
  cmps(c,0,(int32_t)c->r[29],5); // 801C6824
  if (crb(c,0)) { IRQCHK(c); goto L_801C67A8; } // 801C6828
  c->r[30]=0u+0x00000000u; // 801C682C
L_801C6830:;
  c->lr=0x801C6834u; f_80056B5C(c); // 801C6830
  c->r[28]=c->r[3]|c->r[3]; // 801C6834
  c->lr=0x801C683Cu; f_801F1340(c); // 801C6838
  c->lr=0x801C6840u; f_80056B54(c); // 801C683C
  c->r[3]=0u+0x00003208u; // 801C6840
  c->lr=0x801C6848u; f_80047B64(c); // 801C6844
  c->r[31]=c->r[3]|c->r[3]; // 801C6848
  cmps(c,0,(int32_t)c->r[3],0); // 801C684C
  if (crb(c,2)) { goto L_801C6858; } // 801C6850
  c->lr=0x801C6858u; f_8014CB24(c); // 801C6854
L_801C6858:;
  W32(c->r[27]+0x000000D4u,c->r[31]); // 801C6858
  c->r[3]=c->r[28]|c->r[28]; // 801C685C
  c->lr=0x801C6864u; f_80056B54(c); // 801C6860
  c->r[3]=R32(c->r[27]+0x000000D4u); // 801C6864
  c->r[12]=R32(c->r[3]+0x00000058u); // 801C6868
  c->r[12]=R32(c->r[12]+0x00000044u); // 801C686C
  c->ctr=c->r[12]; // 801C6870
  if (true) { c->lr=0x801C6878u; dispatch(c,c->ctr); } // 801C6874
  c->r[27]=c->r[27]+0x00000004u; // 801C6878
  c->r[30]=c->r[30]+0x00000001u; // 801C687C
  cmps(c,0,(int32_t)c->r[30],5); // 801C6880
  if (crb(c,0)) { IRQCHK(c); goto L_801C6830; } // 801C6884
  c->r[11]=c->r[1]+0x00000020u; // 801C6888
  c->lr=0x801C6890u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C688C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6890
  c->lr=c->r[0]; // 801C6894
  c->r[1]=c->r[1]+0x00000020u; // 801C6898
  return; // 801C689C
}

// fn_801C68A0
void f_801C68A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C68A0
  c->r[0]=c->lr; // 801C68A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C68A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C68AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C68B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C68B4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C68B8
  c->r[29]=0u+0x00000000u; // 801C68BC
  c->r[30]=c->r[3]|c->r[3]; // 801C68C0
  c->r[31]=0u+0x00000000u; // 801C68C4
L_801C68C8:;
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801C68C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C68CC
  if (crb(c,2)) { goto L_801C6914; } // 801C68D0
  c->lr=0x801C68D8u; f_8012DF80(c); // 801C68D4
  c->lr=0x801C68DCu; f_80056B5C(c); // 801C68D8
  c->r[28]=c->r[3]|c->r[3]; // 801C68DC
  c->lr=0x801C68E4u; f_801F1340(c); // 801C68E0
  c->lr=0x801C68E8u; f_80056B54(c); // 801C68E4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801C68E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C68EC
  if (crb(c,2)) { goto L_801C6908; } // 801C68F0
  c->r[4]=0u+0x00000001u; // 801C68F4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801C68F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C68FC
  c->ctr=c->r[12]; // 801C6900
  if (true) { c->lr=0x801C6908u; dispatch(c,c->ctr); } // 801C6904
L_801C6908:;
  c->r[3]=c->r[28]|c->r[28]; // 801C6908
  c->lr=0x801C6910u; f_80056B54(c); // 801C690C
  W32(c->r[30]+0x000000C0u,c->r[31]); // 801C6910
L_801C6914:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C6914
  cmps(c,0,(int32_t)c->r[3],0); // 801C6918
  if (crb(c,2)) { goto L_801C6960; } // 801C691C
  c->lr=0x801C6924u; f_80131384(c); // 801C6920
  c->lr=0x801C6928u; f_80056B5C(c); // 801C6924
  c->r[28]=c->r[3]|c->r[3]; // 801C6928
  c->lr=0x801C6930u; f_801F1340(c); // 801C692C
  c->lr=0x801C6934u; f_80056B54(c); // 801C6930
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C6934
  cmps(c,0,(int32_t)c->r[3],0); // 801C6938
  if (crb(c,2)) { goto L_801C6954; } // 801C693C
  c->r[4]=0u+0x00000001u; // 801C6940
  c->r[12]=R32(c->r[3]+0x00000058u); // 801C6944
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6948
  c->ctr=c->r[12]; // 801C694C
  if (true) { c->lr=0x801C6954u; dispatch(c,c->ctr); } // 801C6950
L_801C6954:;
  c->r[3]=c->r[28]|c->r[28]; // 801C6954
  c->lr=0x801C695Cu; f_80056B54(c); // 801C6958
  W32(c->r[30]+0x000000D4u,c->r[31]); // 801C695C
L_801C6960:;
  c->r[30]=c->r[30]+0x00000004u; // 801C6960
  c->r[29]=c->r[29]+0x00000001u; // 801C6964
  cmps(c,0,(int32_t)c->r[29],5); // 801C6968
  if (crb(c,0)) { IRQCHK(c); goto L_801C68C8; } // 801C696C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6970
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6974
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6978
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C697C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6980
  c->lr=c->r[0]; // 801C6984
  c->r[1]=c->r[1]+0x00000020u; // 801C6988
  return; // 801C698C
}

// fn_801C6990
void f_801C6990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6990
  c->r[0]=c->lr; // 801C6994
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6998
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C699C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C69A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C69A4
  c->r[29]=c->r[4]|c->r[4]; // 801C69A8
  c->r[30]=0u+0x00000000u; // 801C69AC
  c->r[31]=c->r[3]|c->r[3]; // 801C69B0
L_801C69B4:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801C69B4
  c->r[4]=c->r[29]|c->r[29]; // 801C69B8
  c->lr=0x801C69C0u; f_8012F910(c); // 801C69BC
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801C69C0
  c->r[4]=c->r[29]|c->r[29]; // 801C69C4
  c->lr=0x801C69CCu; f_80131388(c); // 801C69C8
  c->r[31]=c->r[31]+0x00000004u; // 801C69CC
  c->r[30]=c->r[30]+0x00000001u; // 801C69D0
  cmps(c,0,(int32_t)c->r[30],5); // 801C69D4
  if (crb(c,0)) { IRQCHK(c); goto L_801C69B4; } // 801C69D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C69DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C69E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C69E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C69E8
  c->lr=c->r[0]; // 801C69EC
  c->r[1]=c->r[1]+0x00000020u; // 801C69F0
  return; // 801C69F4
}

// fn_801C69F8
void f_801C69F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C69F8
  c->r[0]=c->lr; // 801C69FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6A00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6A04
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6A08
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C6A0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C6A10
  c->r[28]=c->r[3]|c->r[3]; // 801C6A14
  c->r[29]=c->r[4]|c->r[4]; // 801C6A18
  c->r[30]=0u+0x00000000u; // 801C6A1C
  c->r[31]=c->r[28]|c->r[28]; // 801C6A20
  goto L_801C6A3C; // 801C6A24
L_801C6A28:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801C6A28
  c->r[4]=c->r[29]|c->r[29]; // 801C6A2C
  c->lr=0x801C6A34u; f_8012F910(c); // 801C6A30
  c->r[31]=c->r[31]+0x00000004u; // 801C6A34
  c->r[30]=c->r[30]+0x00000001u; // 801C6A38
L_801C6A3C:;
  c->r[0]=R32(c->r[28]+0x000000E8u); // 801C6A3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C6A40
  if (crb(c,0)) { IRQCHK(c); goto L_801C6A28; } // 801C6A44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6A48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6A4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6A50
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C6A54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6A58
  c->lr=c->r[0]; // 801C6A5C
  c->r[1]=c->r[1]+0x00000020u; // 801C6A60
  return; // 801C6A64
}

// fn_801C6A68
void f_801C6A68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6A68
  c->r[0]=c->lr; // 801C6A6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6A70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6A74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6A78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C6A7C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C6A80
  c->r[28]=c->r[3]|c->r[3]; // 801C6A84
  c->r[29]=c->r[4]|c->r[4]; // 801C6A88
  c->r[30]=0u+0x00000000u; // 801C6A8C
  c->r[31]=c->r[28]|c->r[28]; // 801C6A90
  goto L_801C6AAC; // 801C6A94
L_801C6A98:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801C6A98
  c->r[4]=c->r[29]|c->r[29]; // 801C6A9C
  c->lr=0x801C6AA4u; f_80131388(c); // 801C6AA0
  c->r[31]=c->r[31]+0x00000004u; // 801C6AA4
  c->r[30]=c->r[30]+0x00000001u; // 801C6AA8
L_801C6AAC:;
  c->r[0]=R32(c->r[28]+0x000000E8u); // 801C6AAC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C6AB0
  if (crb(c,0)) { IRQCHK(c); goto L_801C6A98; } // 801C6AB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6AB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6ABC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6AC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C6AC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6AC8
  c->lr=c->r[0]; // 801C6ACC
  c->r[1]=c->r[1]+0x00000020u; // 801C6AD0
  return; // 801C6AD4
}

// fn_801C6AD8
void f_801C6AD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6AD8
  c->r[0]=c->lr; // 801C6ADC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6AE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6AE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6AE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C6AEC
  c->r[29]=c->r[3]|c->r[3]; // 801C6AF0
  c->r[30]=0u+0x00000000u; // 801C6AF4
  c->r[31]=c->r[29]|c->r[29]; // 801C6AF8
  goto L_801C6B10; // 801C6AFC
L_801C6B00:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801C6B00
  c->lr=0x801C6B08u; f_80111F50(c); // 801C6B04
  c->r[31]=c->r[31]+0x00000004u; // 801C6B08
  c->r[30]=c->r[30]+0x00000001u; // 801C6B0C
L_801C6B10:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C6B10
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C6B14
  if (crb(c,0)) { IRQCHK(c); goto L_801C6B00; } // 801C6B18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6B1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6B20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6B28
  c->lr=c->r[0]; // 801C6B2C
  c->r[1]=c->r[1]+0x00000020u; // 801C6B30
  return; // 801C6B34
}

// fn_801C6B38
void f_801C6B38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6B38
  c->r[0]=c->lr; // 801C6B3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6B40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6B44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6B48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C6B4C
  c->r[29]=c->r[3]|c->r[3]; // 801C6B50
  c->r[30]=0u+0x00000000u; // 801C6B54
  c->r[31]=c->r[29]|c->r[29]; // 801C6B58
  goto L_801C6B70; // 801C6B5C
L_801C6B60:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801C6B60
  c->lr=0x801C6B68u; f_80111FB4(c); // 801C6B64
  c->r[31]=c->r[31]+0x00000004u; // 801C6B68
  c->r[30]=c->r[30]+0x00000001u; // 801C6B6C
L_801C6B70:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C6B70
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C6B74
  if (crb(c,0)) { IRQCHK(c); goto L_801C6B60; } // 801C6B78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6B7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6B80
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6B84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6B88
  c->lr=c->r[0]; // 801C6B8C
  c->r[1]=c->r[1]+0x00000020u; // 801C6B90
  return; // 801C6B94
}

// fn_801C6B98
void f_801C6B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6B98
  c->r[0]=c->lr; // 801C6B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6BA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6BA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C6BAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C6BB0
  c->r[28]=c->r[3]|c->r[3]; // 801C6BB4
  c->r[29]=0u+0x00000000u; // 801C6BB8
  c->r[30]=0u+0x00000000u; // 801C6BBC
  c->r[31]=c->r[28]|c->r[28]; // 801C6BC0
  goto L_801C6BE4; // 801C6BC4
L_801C6BC8:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801C6BC8
  c->lr=0x801C6BD0u; f_80112018(c); // 801C6BCC
  cmps(c,0,(int32_t)c->r[3],0); // 801C6BD0
  if (crb(c,2)) { goto L_801C6BDC; } // 801C6BD4
  c->r[29]=c->r[29]+0x00000001u; // 801C6BD8
L_801C6BDC:;
  c->r[31]=c->r[31]+0x00000004u; // 801C6BDC
  c->r[30]=c->r[30]+0x00000001u; // 801C6BE0
L_801C6BE4:;
  c->r[0]=R32(c->r[28]+0x000000E8u); // 801C6BE4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C6BE8
  if (crb(c,0)) { IRQCHK(c); goto L_801C6BC8; } // 801C6BEC
  c->r[4]=sraw(c,c->r[29],31); // 801C6BF0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C6BF4
  c->r[0]=addc(c,~c->r[0],c->r[29],1); // 801C6BF8
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C6BFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6C00
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6C04
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6C08
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C6C0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6C10
  c->lr=c->r[0]; // 801C6C14
  c->r[1]=c->r[1]+0x00000020u; // 801C6C18
  return; // 801C6C1C
}

// fn_801C6C20
void f_801C6C20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C20
  c->r[0]=c->lr; // 801C6C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6C2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6C30
  c->r[30]=c->r[3]|c->r[3]; // 801C6C34
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C6C38
  c->r[3]=c->r[3]+c->r[31]; // 801C6C3C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801C6C40
  c->lr=0x801C6C48u; f_80112020(c); // 801C6C44
  c->r[3]=c->r[30]+c->r[31]; // 801C6C48
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801C6C4C
  c->lr=0x801C6C54u; f_80112228(c); // 801C6C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6C54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6C58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6C5C
  c->lr=c->r[0]; // 801C6C60
  c->r[1]=c->r[1]+0x00000010u; // 801C6C64
  return; // 801C6C68
}

// fn_801C6C6C
void f_801C6C6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C6C
  c->r[0]=c->lr; // 801C6C70
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6C74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6C78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6C7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C6C80
  c->r[29]=c->r[3]|c->r[3]; // 801C6C84
  c->r[30]=0u+0x00000000u; // 801C6C88
  c->r[31]=c->r[29]|c->r[29]; // 801C6C8C
  goto L_801C6CAC; // 801C6C90
L_801C6C94:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801C6C94
  c->lr=0x801C6C9Cu; f_8011203C(c); // 801C6C98
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801C6C9C
  c->lr=0x801C6CA4u; f_801122AC(c); // 801C6CA0
  c->r[31]=c->r[31]+0x00000004u; // 801C6CA4
  c->r[30]=c->r[30]+0x00000001u; // 801C6CA8
L_801C6CAC:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C6CAC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C6CB0
  if (crb(c,0)) { IRQCHK(c); goto L_801C6C94; } // 801C6CB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6CB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6CBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6CC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6CC4
  c->lr=c->r[0]; // 801C6CC8
  c->r[1]=c->r[1]+0x00000020u; // 801C6CCC
  return; // 801C6CD0
}

// fn_801C6CD4
void f_801C6CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6CD4
  c->r[0]=c->lr; // 801C6CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6CE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6CE4
  c->r[30]=c->r[3]|c->r[3]; // 801C6CE8
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C6CEC
  c->r[3]=c->r[3]+c->r[31]; // 801C6CF0
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801C6CF4
  c->lr=0x801C6CFCu; f_801120A0(c); // 801C6CF8
  c->r[3]=c->r[30]+c->r[31]; // 801C6CFC
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801C6D00
  c->lr=0x801C6D08u; f_801123A0(c); // 801C6D04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6D08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6D0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6D10
  c->lr=c->r[0]; // 801C6D14
  c->r[1]=c->r[1]+0x00000010u; // 801C6D18
  return; // 801C6D1C
}

// fn_801C6D20
void f_801C6D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6D20
  c->r[0]=c->lr; // 801C6D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6D2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6D30
  c->r[30]=c->r[3]|c->r[3]; // 801C6D34
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C6D38
  c->r[3]=c->r[3]+c->r[31]; // 801C6D3C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801C6D40
  c->lr=0x801C6D48u; f_801120F0(c); // 801C6D44
  c->r[3]=c->r[30]+c->r[31]; // 801C6D48
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801C6D4C
  c->lr=0x801C6D54u; f_80112424(c); // 801C6D50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6D54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6D5C
  c->lr=c->r[0]; // 801C6D60
  c->r[1]=c->r[1]+0x00000010u; // 801C6D64
  return; // 801C6D68
}

// fn_801C6D6C
void f_801C6D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6D6C
  c->r[0]=c->lr; // 801C6D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6D74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6D78
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6D7C
  c->r[30]=c->r[3]|c->r[3]; // 801C6D80
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C6D84
  c->r[3]=c->r[3]+c->r[31]; // 801C6D88
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801C6D8C
  c->lr=0x801C6D94u; f_801120FC(c); // 801C6D90
  c->r[3]=c->r[30]+c->r[31]; // 801C6D94
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801C6D98
  c->lr=0x801C6DA0u; f_80112430(c); // 801C6D9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6DA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6DA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6DA8
  c->lr=c->r[0]; // 801C6DAC
  c->r[1]=c->r[1]+0x00000010u; // 801C6DB0
  return; // 801C6DB4
}

// fn_801C6DB8
void f_801C6DB8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C6DB8
  c->r[3]=c->r[3]+c->r[0]; // 801C6DBC
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801C6DC0
  f_80112108(c); return; // 801C6DC4
}

// fn_801C6DC8
void f_801C6DC8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C6DC8
  return; // 801C6DCC
}

// fn_801C6DD0
void f_801C6DD0(Ctx* __restrict c) {
  f_8012FBA8(c); return; // 801C6DD0
}

// fn_801C6DD4
void f_801C6DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6DD4
  c->r[0]=c->lr; // 801C6DD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6DDC
  c->r[11]=c->r[1]+0x00000020u; // 801C6DE0
  c->lr=0x801C6DE8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6DE4
  c->r[27]=0u+0x804E0000u; // 801C6DE8
  c->r[29]=0u+0x80000000u; // 801C6DEC
  c->r[3]=0u+0x10620000u; // 801C6DF0
  c->r[28]=c->r[3]+0x00004DD3u; // 801C6DF4
  c->r[0]=0u+0x00000000u; // 801C6DF8
  c->r[30]=0u+0x0000000Au; // 801C6DFC
  c->r[31]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 801C6E00
  goto L_801C6E80; // 801C6E04
L_801C6E08:;
  c->r[3]=c->r[27]+0xFFFF9A10u; // 801C6E08
  c->lr=0x801C6E10u; f_8004B018(c); // 801C6E0C
  c->r[26]=c->r[3]|c->r[3]; // 801C6E10
  goto L_801C6E30; // 801C6E14
L_801C6E18:;
  c->r[3]=c->r[26]|c->r[26]; // 801C6E18
  c->lr=0x801C6E20u; f_801C6F18(c); // 801C6E1C
  c->r[3]=c->r[27]+0xFFFF9A10u; // 801C6E20
  c->r[4]=c->r[26]|c->r[26]; // 801C6E24
  c->lr=0x801C6E2Cu; f_8028CCD8(c); // 801C6E28
  c->r[26]=c->r[3]|c->r[3]; // 801C6E2C
L_801C6E30:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C6E30
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6E18; } // 801C6E34
  c->r[3]=c->r[27]+0xFFFF9A10u; // 801C6E38
  c->lr=0x801C6E40u; f_8004B018(c); // 801C6E3C
  c->r[26]=c->r[3]|c->r[3]; // 801C6E40
  cmps(c,0,(int32_t)c->r[3],0); // 801C6E44
  if (crb(c,2)) { goto L_801C6E60; } // 801C6E48
  c->lr=0x801C6E50u; f_801C6F00(c); // 801C6E4C
  cmps(c,0,(int32_t)c->r[3],0); // 801C6E50
  if (crb(c,2)) { goto L_801C6E60; } // 801C6E54
  c->r[3]=c->r[26]|c->r[26]; // 801C6E58
  c->lr=0x801C6E60u; f_801C6EA8(c); // 801C6E5C
L_801C6E60:;
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801C6E60
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C6E64
  c->r[0]=(uint32_t)(((uint64_t)c->r[28]*(uint64_t)c->r[0])>>32); // 801C6E68
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C6E6C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 801C6E70
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 801C6E74
  c->r[3]=c->r[0]+c->r[31]; // 801C6E78
  c->lr=0x801C6E80u; f_80361B40(c); // 801C6E7C
L_801C6E80:;
  c->r[0]=R32(c->r[13]+0xFFFFBAF0u); // 801C6E80
  cmps(c,0,(int32_t)c->r[0],0); // 801C6E84
  if (crb(c,2)) { IRQCHK(c); goto L_801C6E08; } // 801C6E88
  c->r[3]=0u+0x00000000u; // 801C6E8C
  c->r[11]=c->r[1]+0x00000020u; // 801C6E90
  c->lr=0x801C6E98u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6E94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6E98
  c->lr=c->r[0]; // 801C6E9C
  c->r[1]=c->r[1]+0x00000020u; // 801C6EA0
  return; // 801C6EA4
}

// fn_801C6EA8
void f_801C6EA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6EA8
  c->r[0]=c->lr; // 801C6EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6EB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6EB4
  c->r[31]=c->r[3]|c->r[3]; // 801C6EB8
  c->r[3]=0u+0x804E0000u; // 801C6EBC
  c->r[3]=c->r[3]+0xFFFF9A10u; // 801C6EC0
  c->r[4]=c->r[31]|c->r[31]; // 801C6EC4
  c->lr=0x801C6ECCu; f_8028CC6C(c); // 801C6EC8
  c->r[3]=c->r[31]|c->r[31]; // 801C6ECC
  c->lr=0x801C6ED4u; f_801C6EE8(c); // 801C6ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6ED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6ED8
  c->lr=c->r[0]; // 801C6EDC
  c->r[1]=c->r[1]+0x00000010u; // 801C6EE0
  return; // 801C6EE4
}

// fn_801C6EE8
void f_801C6EE8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801C6EE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C6EEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C6EF0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C6EF4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C6EF8
  return; // 801C6EFC
}

// fn_801C6F00
void f_801C6F00(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C6F00
  c->r[3]=rotl(c->r[0],0)&0x00000008u; // 801C6F04
  c->r[0]=0u-c->r[3]; // 801C6F08
  c->r[0]=c->r[0]|c->r[3]; // 801C6F0C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C6F10
  return; // 801C6F14
}

// fn_801C6F18
void f_801C6F18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6F18
  c->r[0]=c->lr; // 801C6F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6F20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6F24
  c->r[31]=c->r[3]|c->r[3]; // 801C6F28
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801C6F2C
  c->r[0]=rotl(c->r[4],0)&0x00000002u; // 801C6F30
  cmps(c,0,(int32_t)c->r[0],0); // 801C6F34
  if (!crb(c,2)) { goto L_801C6F8C; } // 801C6F38
  c->r[0]=c->r[4]|0x00000002u; // 801C6F3C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C6F40
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6F44
  c->lr=0x801C6F4Cu; f_80065CD0(c); // 801C6F48
  cmps(c,0,(int32_t)c->r[3],0); // 801C6F4C
  if (crb(c,2)) { goto L_801C6F64; } // 801C6F50
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C6F54
  c->r[4]=R32(c->r[31]+0x00000004u); // 801C6F58
  c->lr=0x801C6F60u; f_80065C24(c); // 801C6F5C
  goto L_801C6F80; // 801C6F60
L_801C6F64:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C6F64
  c->r[4]=R32(c->r[31]+0x00000000u); // 801C6F68
  c->r[5]=R32(c->r[31]+0x00000008u); // 801C6F6C
  c->lr=0x801C6F74u; f_80005FB4(c); // 801C6F70
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C6F74
  c->r[4]=R32(c->r[31]+0x00000008u); // 801C6F78
  c->lr=0x801C6F80u; f_80359BCC(c); // 801C6F7C
L_801C6F80:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C6F80
  c->r[0]=c->r[0]|0x00000004u; // 801C6F84
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C6F88
L_801C6F8C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6F90
  c->lr=c->r[0]; // 801C6F94
  c->r[1]=c->r[1]+0x00000010u; // 801C6F98
  return; // 801C6F9C
}

// fn_801C6FA0
void f_801C6FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6FA0
  c->r[0]=c->lr; // 801C6FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6FAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6FB0
  c->r[3]=0u+0x804E0000u; // 801C6FB4
  c->r[3]=c->r[3]+0xFFFF9A10u; // 801C6FB8
  c->r[4]=0u+0x00000010u; // 801C6FBC
  c->lr=0x801C6FC4u; f_8028CA58(c); // 801C6FC0
  c->r[30]=0u+0x00000000u; // 801C6FC4
  c->r[3]=0u+0x804E0000u; // 801C6FC8
  c->r[31]=c->r[3]+0xFFFF9A28u; // 801C6FCC
L_801C6FD0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6FD0
  c->lr=0x801C6FD8u; f_801C6EE8(c); // 801C6FD4
  c->r[31]=c->r[31]+0x00000018u; // 801C6FD8
  c->r[30]=c->r[30]+0x00000001u; // 801C6FDC
  cmps(c,0,(int32_t)c->r[30],16); // 801C6FE0
  if (crb(c,0)) { IRQCHK(c); goto L_801C6FD0; } // 801C6FE4
  c->r[31]=0u+0x804D0000u; // 801C6FE8
  c->r[3]=c->r[31]+0x000056F8u; // 801C6FEC
  c->r[4]=0u+0x801C0000u; // 801C6FF0
  c->r[4]=c->r[4]+0x00006DD4u; // 801C6FF4
  c->r[5]=0u+0x00000000u; // 801C6FF8
  c->r[6]=0u+0x804D0000u; // 801C6FFC
  c->r[6]=c->r[6]+0x00005A10u; // 801C7000
  c->r[6]=c->r[6]+0x00004000u; // 801C7004
  c->r[7]=0u+0x00004000u; // 801C7008
  c->r[8]=0u+0x00000018u; // 801C700C
  c->r[9]=0u+0x00000001u; // 801C7010
  c->lr=0x801C7018u; f_80360DB4(c); // 801C7014
  c->r[3]=c->r[31]+0x000056F8u; // 801C7018
  c->lr=0x801C7020u; f_8036141C(c); // 801C701C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7020
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7024
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7028
  c->lr=c->r[0]; // 801C702C
  c->r[1]=c->r[1]+0x00000010u; // 801C7030
  return; // 801C7034
}

// fn_801C7038
void f_801C7038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7038
  c->r[0]=c->lr; // 801C703C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7040
  c->r[11]=c->r[1]+0x00000020u; // 801C7044
  c->lr=0x801C704Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7048
  c->r[27]=c->r[3]|c->r[3]; // 801C704C
  c->r[28]=c->r[4]|c->r[4]; // 801C7050
  c->r[29]=c->r[5]|c->r[5]; // 801C7054
  c->r[30]=0u+0x00000000u; // 801C7058
  c->r[3]=0u+0x804E0000u; // 801C705C
  c->r[31]=c->r[3]+0xFFFF9A28u; // 801C7060
L_801C7064:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7064
  c->lr=0x801C706Cu; f_801C70F4(c); // 801C7068
  cmps(c,0,(int32_t)c->r[3],0); // 801C706C
  if (!crb(c,2)) { goto L_801C709C; } // 801C7070
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 801C7074
  c->r[3]=0u+0x804E0000u; // 801C7078
  c->r[0]=c->r[3]+0xFFFF9A28u; // 801C707C
  c->r[3]=c->r[0]+c->r[4]; // 801C7080
  c->r[4]=c->r[27]|c->r[27]; // 801C7084
  c->r[5]=c->r[28]|c->r[28]; // 801C7088
  c->r[6]=c->r[29]|c->r[29]; // 801C708C
  c->lr=0x801C7094u; f_801C70C8(c); // 801C7090
  c->r[3]=c->r[30]|c->r[30]; // 801C7094
  goto L_801C70B0; // 801C7098
L_801C709C:;
  c->r[31]=c->r[31]+0x00000018u; // 801C709C
  c->r[30]=c->r[30]+0x00000001u; // 801C70A0
  cmps(c,0,(int32_t)c->r[30],16); // 801C70A4
  if (crb(c,0)) { IRQCHK(c); goto L_801C7064; } // 801C70A8
  c->r[3]=0u+0xFFFFFFFFu; // 801C70AC
L_801C70B0:;
  c->r[11]=c->r[1]+0x00000020u; // 801C70B0
  c->lr=0x801C70B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C70B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C70B8
  c->lr=c->r[0]; // 801C70BC
  c->r[1]=c->r[1]+0x00000020u; // 801C70C0
  return; // 801C70C4
}

// fn_801C70C8
void f_801C70C8(Ctx* __restrict c) {
  c->r[7]=c->r[3]|c->r[3]; // 801C70C8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C70CC
  c->r[0]=c->r[0]|0x00000001u; // 801C70D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C70D4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C70D8
  W32(c->r[3]+0x00000004u,c->r[5]); // 801C70DC
  W32(c->r[3]+0x00000008u,c->r[6]); // 801C70E0
  c->r[3]=0u+0x804E0000u; // 801C70E4
  c->r[3]=c->r[3]+0xFFFF9A10u; // 801C70E8
  c->r[4]=c->r[7]|c->r[7]; // 801C70EC
  f_8028CA70(c); return; // 801C70F0
}

// fn_801C70F4
void f_801C70F4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C70F4
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801C70F8
  c->r[0]=0u-c->r[3]; // 801C70FC
  c->r[0]=c->r[0]|c->r[3]; // 801C7100
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C7104
  return; // 801C7108
}

// fn_801C710C
void f_801C710C(Ctx* __restrict c) {
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C710C
  c->r[3]=0u+0x804E0000u; // 801C7110
  c->r[0]=c->r[3]+0xFFFF9A28u; // 801C7114
  c->r[3]=c->r[0]+c->r[4]; // 801C7118
  goto L_801C7120; // 801C711C
L_801C7120:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C7120
  c->r[0]=c->r[0]|0x00000008u; // 801C7124
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C7128
  return; // 801C712C
}

// fn_801C7130
void f_801C7130(Ctx* __restrict c) {
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C7130
  c->r[3]=0u+0x804E0000u; // 801C7134
  c->r[0]=c->r[3]+0xFFFF9A28u; // 801C7138
  c->r[3]=c->r[0]+c->r[4]; // 801C713C
  goto L_801C7144; // 801C7140
L_801C7144:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C7144
  c->r[3]=rotl(c->r[0],0)&0x00000004u; // 801C7148
  c->r[0]=0u-c->r[3]; // 801C714C
  c->r[0]=c->r[0]|c->r[3]; // 801C7150
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C7154
  return; // 801C7158
}

// fn_801C715C
void f_801C715C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C715C
  c->r[0]=c->lr; // 801C7160
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7164
  c->r[3]=0u+0x804E0000u; // 801C7168
  c->r[3]=c->r[3]+0xFFFF9A28u; // 801C716C
  c->r[4]=0u+0x801C0000u; // 801C7170
  c->r[4]=c->r[4]+0x00007214u; // 801C7174
  c->r[5]=0u+0x801C0000u; // 801C7178
  c->r[5]=c->r[5]+0x000071D0u; // 801C717C
  c->r[6]=0u+0x00000018u; // 801C7180
  c->r[7]=0u+0x00000010u; // 801C7184
  c->lr=0x801C718Cu; f_802F07B0(c); // 801C7188
  c->r[3]=0u+0x00000000u; // 801C718C
  c->r[4]=0u+0x801C0000u; // 801C7190
  c->r[4]=c->r[4]+0x000071B4u; // 801C7194
  c->r[5]=0u+0x804E0000u; // 801C7198
  c->r[5]=c->r[5]+0xFFFF9A1Cu; // 801C719C
  c->lr=0x801C71A4u; f_802F0334(c); // 801C71A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C71A4
  c->lr=c->r[0]; // 801C71A8
  c->r[1]=c->r[1]+0x00000010u; // 801C71AC
  return; // 801C71B0
}

// fn_801C71B4
void f_801C71B4(Ctx* __restrict c) {
  c->r[3]=0u+0x804E0000u; // 801C71B4
  c->r[3]=c->r[3]+0xFFFF9A28u; // 801C71B8
  c->r[4]=0u+0x801C0000u; // 801C71BC
  c->r[4]=c->r[4]+0x000071D0u; // 801C71C0
  c->r[5]=0u+0x00000018u; // 801C71C4
  c->r[6]=0u+0x00000010u; // 801C71C8
  f_802F08A8(c); return; // 801C71CC
}

// fn_801C71D0
void f_801C71D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C71D0
  c->r[0]=c->lr; // 801C71D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C71D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C71DC
  c->r[31]=c->r[3]|c->r[3]; // 801C71E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C71E4
  if (crb(c,2)) { goto L_801C71FC; } // 801C71E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801C71EC
  cmps(c,0,(int32_t)c->r[0],0); // 801C71F0
  if (!crb(c,1)) { goto L_801C71FC; } // 801C71F4
  c->lr=0x801C71FCu; f_80047B20(c); // 801C71F8
L_801C71FC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C71FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7200
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7204
  c->lr=c->r[0]; // 801C7208
  c->r[1]=c->r[1]+0x00000010u; // 801C720C
  return; // 801C7210
}

// fn_801C7214
void f_801C7214(Ctx* __restrict c) {
  return; // 801C7214
}

// fn_801C7218
void f_801C7218(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801C7218
  c->r[3]=c->r[3]+0x00000C10u; // 801C721C
  return; // 801C7220
}

// fn_801C7224
void f_801C7224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7224
  c->r[0]=c->lr; // 801C7228
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C722C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7230
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7234
  c->r[30]=c->r[3]|c->r[3]; // 801C7238
  c->r[31]=0u+0x00000000u; // 801C723C
  goto L_801C7254; // 801C7240
L_801C7244:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7244
  c->r[4]=c->r[31]|c->r[31]; // 801C7248
  c->lr=0x801C7250u; f_801C727C(c); // 801C724C
  c->r[31]=c->r[31]+0x00000001u; // 801C7250
L_801C7254:;
  c->r[3]=R32(c->r[30]+0x00000034u); // 801C7254
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C7258
  cmpu(c,0,c->r[31],c->r[0]); // 801C725C
  if (crb(c,0)) { IRQCHK(c); goto L_801C7244; } // 801C7260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7264
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7268
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C726C
  c->lr=c->r[0]; // 801C7270
  c->r[1]=c->r[1]+0x00000010u; // 801C7274
  return; // 801C7278
}

// fn_801C727C
void f_801C727C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801C727C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801C7280
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C7284
  c->r[0]=c->r[4]-c->r[0]; // 801C7288
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C728C
  c->r[3]=c->r[5]+c->r[0]; // 801C7290
  return; // 801C7294
}

// fn_801C7298
void f_801C7298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7298
  c->r[0]=c->lr; // 801C729C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C72A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C72A4
  c->r[31]=c->r[3]|c->r[3]; // 801C72A8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C72AC
  c->r[4]=0u+0x00000002u; // 801C72B0
  c->lr=0x801C72B8u; f_801B39F4(c); // 801C72B4
  c->lr=0x801C72BCu; f_80156F98(c); // 801C72B8
  c->r[3]=0u+0x00000000u; // 801C72BC
  c->lr=0x801C72C4u; f_80157074(c); // 801C72C0
  c->r[3]=c->r[31]|c->r[31]; // 801C72C4
  c->r[4]=0u+0x0000006Cu; // 801C72C8
  c->lr=0x801C72D0u; f_8013114C(c); // 801C72CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C72D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C72D4
  c->lr=c->r[0]; // 801C72D8
  c->r[1]=c->r[1]+0x00000010u; // 801C72DC
  return; // 801C72E0
}

// fn_801C72E4
void f_801C72E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C72E4
  c->r[0]=c->lr; // 801C72E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C72EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C72F0
  c->r[31]=c->r[3]|c->r[3]; // 801C72F4
  c->lr=0x801C72FCu; f_80156FF0(c); // 801C72F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C72FC
  if (crb(c,2)) { goto L_801C7334; } // 801C7300
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7304
  c->lr=0x801C730Cu; f_801B39EC(c); // 801C7308
  c->r[4]=c->r[3]|c->r[3]; // 801C730C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7310
  c->lr=0x801C7318u; f_801B3A28(c); // 801C7314
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7318
  c->lr=0x801C7320u; f_801B39EC(c); // 801C731C
  c->lr=0x801C7324u; f_80156434(c); // 801C7320
  c->lr=0x801C7328u; f_80156F40(c); // 801C7324
  c->r[3]=c->r[31]|c->r[31]; // 801C7328
  c->r[4]=0u+0x0000006Du; // 801C732C
  c->lr=0x801C7334u; f_8013114C(c); // 801C7330
L_801C7334:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7334
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7338
  c->lr=c->r[0]; // 801C733C
  c->r[1]=c->r[1]+0x00000010u; // 801C7340
  return; // 801C7344
}

// fn_801C7348
void f_801C7348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7348
  c->r[0]=c->lr; // 801C734C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7354
  c->r[31]=c->r[3]|c->r[3]; // 801C7358
  c->lr=0x801C7360u; f_80157048(c); // 801C735C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7360
  if (crb(c,2)) { goto L_801C737C; } // 801C7364
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7368
  c->lr=0x801C7370u; f_801B3A68(c); // 801C736C
  c->r[3]=c->r[31]|c->r[31]; // 801C7370
  c->r[4]=0u+0x0000006Eu; // 801C7374
  c->lr=0x801C737Cu; f_8013114C(c); // 801C7378
L_801C737C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C737C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7380
  c->lr=c->r[0]; // 801C7384
  c->r[1]=c->r[1]+0x00000010u; // 801C7388
  return; // 801C738C
}

// fn_801C7390
void f_801C7390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7390
  c->r[0]=c->lr; // 801C7394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C739C
  c->r[31]=c->r[3]|c->r[3]; // 801C73A0
  c->lr=0x801C73A8u; f_80156FC4(c); // 801C73A4
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801C73A8
  cmps(c,0,(int32_t)c->r[0],12); // 801C73AC
  if (crb(c,2)) { goto L_801C7414; } // 801C73B0
  if (!crb(c,0)) { goto L_801C73D0; } // 801C73B4
  cmps(c,0,(int32_t)c->r[0],5); // 801C73B8
  if (crb(c,2)) { goto L_801C73F0; } // 801C73BC
  if (!crb(c,0)) { goto L_801C7438; } // 801C73C0
  cmps(c,0,(int32_t)c->r[0],0); // 801C73C4
  if (crb(c,2)) { goto L_801C73DC; } // 801C73C8
  goto L_801C7438; // 801C73CC
L_801C73D0:;
  cmps(c,0,(int32_t)c->r[0],80); // 801C73D0
  if (crb(c,2)) { goto L_801C7428; } // 801C73D4
  goto L_801C7438; // 801C73D8
L_801C73DC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C73DC
  c->lr=0x801C73E4u; f_801B1FA0(c); // 801C73E0
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C73E4
  c->lr=0x801C73ECu; f_801B648C(c); // 801C73E8
  goto L_801C7438; // 801C73EC
L_801C73F0:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C73F0
  c->lr=0x801C73F8u; f_801B7E4C(c); // 801C73F4
  cmps(c,0,(int32_t)c->r[3],2); // 801C73F8
  if (!crb(c,2)) { goto L_801C7438; } // 801C73FC
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C7400
  c->lr=0x801C7408u; f_801B6490(c); // 801C7404
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7408
  c->lr=0x801C7410u; f_801B1FA0(c); // 801C740C
  goto L_801C7438; // 801C7410
L_801C7414:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C7414
  c->lr=0x801C741Cu; f_801B6490(c); // 801C7418
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C741C
  c->lr=0x801C7424u; f_801B1FA0(c); // 801C7420
  goto L_801C7438; // 801C7424
L_801C7428:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C7428
  c->lr=0x801C7430u; f_801B6494(c); // 801C742C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7430
  c->lr=0x801C7438u; f_801B1FA0(c); // 801C7434
L_801C7438:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7438
  c->r[4]=0u+0x0000006Fu; // 801C743C
  c->lr=0x801C7444u; f_8013114C(c); // 801C7440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7444
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7448
  c->lr=c->r[0]; // 801C744C
  c->r[1]=c->r[1]+0x00000010u; // 801C7450
  return; // 801C7454
}

// fn_801C7458
void f_801C7458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7458
  c->r[0]=c->lr; // 801C745C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7464
  c->r[31]=c->r[3]|c->r[3]; // 801C7468
  c->lr=0x801C7470u; f_80156FF0(c); // 801C746C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7470
  if (crb(c,2)) { goto L_801C74B0; } // 801C7474
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C7478
  c->r[4]=0u+0x00000000u; // 801C747C
  c->lr=0x801C7484u; f_801B39F4(c); // 801C7480
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801C7484
  cmps(c,0,(int32_t)c->r[0],0); // 801C7488
  if (!crb(c,2)) { goto L_801C74A4; } // 801C748C
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801C7490
  c->r[4]=0u+0x00000000u; // 801C7494
  c->lr=0x801C749Cu; f_801B6364(c); // 801C7498
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C749C
  c->lr=0x801C74A4u; f_801B1EB4(c); // 801C74A0
L_801C74A4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C74A4
  c->r[4]=R32(c->r[31]+0x000000F0u); // 801C74A8
  c->lr=0x801C74B0u; f_8013114C(c); // 801C74AC
L_801C74B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C74B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C74B4
  c->lr=c->r[0]; // 801C74B8
  c->r[1]=c->r[1]+0x00000010u; // 801C74BC
  return; // 801C74C0
}

// fn_801C74C4
void f_801C74C4(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801C74C4
  c->r[3]=c->r[3]+0x00000C28u; // 801C74C8
  return; // 801C74CC
}

// fn_801C74D0
void f_801C74D0(Ctx* __restrict c) {
  goto L_801C74D4; // 801C74D0
L_801C74D4:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 801C74D4
  c->r[3]=R32(c->r[3]+0x00000034u); // 801C74D8
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C74DC
  c->r[0]=c->r[4]-c->r[0]; // 801C74E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801C74E4
  c->r[3]=c->r[5]+c->r[0]; // 801C74E8
  return; // 801C74EC
}

// fn_801C74F0
void f_801C74F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C74F0
  c->r[0]=c->lr; // 801C74F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C74F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C74FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7500
  c->r[31]=c->r[3]|c->r[3]; // 801C7504
  c->r[3]=c->r[4]|c->r[4]; // 801C7508
  c->lr=0x801C7510u; f_80073580(c); // 801C750C
  c->r[30]=c->r[3]|c->r[3]; // 801C7510
  c->lr=0x801C7518u; f_8007B524(c); // 801C7514
  c->r[4]=c->r[30]|c->r[30]; // 801C7518
  c->lr=0x801C7520u; f_800A3614(c); // 801C751C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7520
  if (crb(c,2)) { goto L_801C7538; } // 801C7524
  cmps(c,0,(int32_t)c->r[3],1); // 801C7528
  if (crb(c,2)) { goto L_801C7538; } // 801C752C
  c->r[3]=0u+0x00000000u; // 801C7530
  goto L_801C7544; // 801C7534
L_801C7538:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7538
  c->lr=0x801C7540u; f_801C7F38(c); // 801C753C
  c->r[3]=0u+0x00000000u; // 801C7540
L_801C7544:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7544
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7548
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C754C
  c->lr=c->r[0]; // 801C7550
  c->r[1]=c->r[1]+0x00000010u; // 801C7554
  return; // 801C7558
}

// fn_801C755C
void f_801C755C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C755C
  c->r[0]=c->lr; // 801C7560
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7564
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7568
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C756C
  c->r[31]=c->r[3]|c->r[3]; // 801C7570
  c->r[3]=c->r[4]|c->r[4]; // 801C7574
  c->lr=0x801C757Cu; f_80073580(c); // 801C7578
  c->r[30]=c->r[3]|c->r[3]; // 801C757C
  c->lr=0x801C7584u; f_8007B524(c); // 801C7580
  c->r[4]=c->r[30]|c->r[30]; // 801C7584
  c->lr=0x801C758Cu; f_800A3614(c); // 801C7588
  cmps(c,0,(int32_t)c->r[3],0); // 801C758C
  if (crb(c,2)) { goto L_801C75A4; } // 801C7590
  cmps(c,0,(int32_t)c->r[3],1); // 801C7594
  if (crb(c,2)) { goto L_801C75A4; } // 801C7598
  c->r[3]=0u+0x00000000u; // 801C759C
  goto L_801C75C4; // 801C75A0
L_801C75A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C75A4
  if (!crb(c,2)) { goto L_801C75B8; } // 801C75A8
  c->r[3]=c->r[31]|c->r[31]; // 801C75AC
  c->lr=0x801C75B4u; f_801C7F48(c); // 801C75B0
  goto L_801C75C0; // 801C75B4
L_801C75B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C75B8
  c->lr=0x801C75C0u; f_801C7F58(c); // 801C75BC
L_801C75C0:;
  c->r[3]=0u+0x00000000u; // 801C75C0
L_801C75C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C75C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C75C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C75CC
  c->lr=c->r[0]; // 801C75D0
  c->r[1]=c->r[1]+0x00000010u; // 801C75D4
  return; // 801C75D8
}

// fn_801C75DC
void f_801C75DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C75DC
  c->r[0]=c->lr; // 801C75E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C75E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C75E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C75EC
  c->r[0]=R32(c->r[13]+0xFFFFBAF8u); // 801C75F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C75F4
  if (!crb(c,2)) { goto L_801C7630; } // 801C75F8
  c->lr=0x801C7600u; f_80056B5C(c); // 801C75FC
  c->r[30]=c->r[3]|c->r[3]; // 801C7600
  c->lr=0x801C7608u; f_8005DEE8(c); // 801C7604
  c->lr=0x801C760Cu; f_80056B54(c); // 801C7608
  c->r[3]=0u+0x00000028u; // 801C760C
  c->lr=0x801C7614u; f_80047B64(c); // 801C7610
  c->r[31]=c->r[3]|c->r[3]; // 801C7614
  cmps(c,0,(int32_t)c->r[3],0); // 801C7618
  if (crb(c,2)) { goto L_801C7624; } // 801C761C
  c->lr=0x801C7624u; f_801C764C(c); // 801C7620
L_801C7624:;
  W32(c->r[13]+0xFFFFBAF8u,c->r[31]); // 801C7624
  c->r[3]=c->r[30]|c->r[30]; // 801C7628
  c->lr=0x801C7630u; f_80056B54(c); // 801C762C
L_801C7630:;
  c->r[3]=R32(c->r[13]+0xFFFFBAF8u); // 801C7630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7634
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7638
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C763C
  c->lr=c->r[0]; // 801C7640
  c->r[1]=c->r[1]+0x00000010u; // 801C7644
  return; // 801C7648
}

// fn_801C764C
void f_801C764C(Ctx* __restrict c) {
  c->r[4]=0u+0xFFFFFFFFu; // 801C764C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C7650
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C7654
  c->r[0]=0u+0x0000001Eu; // 801C7658
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C765C
  c->r[0]=0u+0x00000003u; // 801C7660
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C7664
  c->r[0]=0u+0xFFFFFFFDu; // 801C7668
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C766C
  c->r[0]=0u+0x00000005u; // 801C7670
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C7674
  c->r[0]=0u+0x00000000u; // 801C7678
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C767C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801C7680
  W32(c->r[3]+0x00000020u,c->r[0]); // 801C7684
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C7688
  return; // 801C768C
}

// fn_801C7690
void f_801C7690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7690
  c->r[0]=c->lr; // 801C7694
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C769C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C76A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C76A4
  c->r[29]=c->r[3]|c->r[3]; // 801C76A8
  c->lr=0x801C76B0u; f_80056B5C(c); // 801C76AC
  c->r[30]=c->r[3]|c->r[3]; // 801C76B0
  c->lr=0x801C76B8u; f_8005DEE8(c); // 801C76B4
  c->lr=0x801C76BCu; f_80056B54(c); // 801C76B8
  c->r[3]=0u+0x00000038u; // 801C76BC
  c->lr=0x801C76C4u; f_80047B64(c); // 801C76C0
  c->r[31]=c->r[3]|c->r[3]; // 801C76C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C76C8
  if (crb(c,2)) { goto L_801C76D4; } // 801C76CC
  c->lr=0x801C76D4u; f_8008E550(c); // 801C76D0
L_801C76D4:;
  W32(c->r[29]+0x00000020u,c->r[31]); // 801C76D4
  c->r[3]=c->r[30]|c->r[30]; // 801C76D8
  c->lr=0x801C76E0u; f_80056B54(c); // 801C76DC
  c->r[3]=c->r[29]|c->r[29]; // 801C76E0
  c->lr=0x801C76E8u; f_801C779C(c); // 801C76E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C76E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C76EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C76F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C76F4
  c->lr=c->r[0]; // 801C76F8
  c->r[1]=c->r[1]+0x00000020u; // 801C76FC
  return; // 801C7700
}

// fn_801C7704
void f_801C7704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7704
  c->r[0]=c->lr; // 801C7708
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C770C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7710
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7714
  c->r[30]=c->r[3]|c->r[3]; // 801C7718
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C771C
  c->r[4]=R32(c->r[30]+0x00000024u); // 801C7720
  c->lr=0x801C7728u; f_80179984(c); // 801C7724
  c->r[31]=c->r[3]|c->r[3]; // 801C7728
  c->lr=0x801C7730u; f_80074E68(c); // 801C772C
  c->r[4]=c->r[31]|c->r[31]; // 801C7730
  c->lr=0x801C7738u; f_8017A3C0(c); // 801C7734
  c->r[0]=R32(c->r[30]+0x00000020u); // 801C7738
  cmps(c,0,(int32_t)c->r[0],0); // 801C773C
  if (crb(c,2)) { goto L_801C7784; } // 801C7740
  c->lr=0x801C7748u; f_80056B5C(c); // 801C7744
  c->r[31]=c->r[3]|c->r[3]; // 801C7748
  c->lr=0x801C7750u; f_8005DEE8(c); // 801C774C
  c->lr=0x801C7754u; f_80056B54(c); // 801C7750
  c->r[3]=R32(c->r[30]+0x00000020u); // 801C7754
  cmps(c,0,(int32_t)c->r[3],0); // 801C7758
  if (crb(c,2)) { goto L_801C7774; } // 801C775C
  c->r[4]=0u+0x00000001u; // 801C7760
  c->r[12]=R32(c->r[3]+0x00000034u); // 801C7764
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C7768
  c->ctr=c->r[12]; // 801C776C
  if (true) { c->lr=0x801C7774u; dispatch(c,c->ctr); } // 801C7770
L_801C7774:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7774
  c->lr=0x801C777Cu; f_80056B54(c); // 801C7778
  c->r[0]=0u+0x00000000u; // 801C777C
  W32(c->r[30]+0x00000020u,c->r[0]); // 801C7780
L_801C7784:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7784
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7788
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C778C
  c->lr=c->r[0]; // 801C7790
  c->r[1]=c->r[1]+0x00000010u; // 801C7794
  return; // 801C7798
}

// fn_801C779C
void f_801C779C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C779C
  c->r[0]=c->lr; // 801C77A0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801C77A4
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801C77A8
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801C77AC
  c->r[30]=c->r[3]|c->r[3]; // 801C77B0
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C77B4
  c->r[4]=0u+0x00000001u; // 801C77B8
  c->lr=0x801C77C0u; f_801797EC(c); // 801C77BC
  c->r[3]=R32(c->r[30]+0x00000020u); // 801C77C0
  c->r[4]=0u+0x00000000u; // 801C77C4
  c->r[5]=0u+0x00000001u; // 801C77C8
  c->lr=0x801C77D0u; f_80179858(c); // 801C77CC
  c->r[3]=c->r[1]+0x00000008u; // 801C77D0
  c->lr=0x801C77D8u; f_8008A590(c); // 801C77D4
  c->lr=0x801C77DCu; f_80074E68(c); // 801C77D8
  c->lr=0x801C77E0u; f_8017A2D8(c); // 801C77DC
  c->r[31]=c->r[3]|c->r[3]; // 801C77E0
  c->r[3]=c->r[1]+0x00000008u; // 801C77E4
  c->r[4]=0u+0x000001F8u; // 801C77E8
  c->lr=0x801C77F0u; f_80178974(c); // 801C77EC
  c->r[0]=0u+0x00000000u; // 801C77F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C77F4
  c->r[3]=c->r[31]|c->r[31]; // 801C77F8
  c->r[4]=c->r[1]+0x00000008u; // 801C77FC
  c->r[5]=0u+0x00000001u; // 801C7800
  c->lr=0x801C7808u; f_80178F64(c); // 801C7804
  c->r[3]=R32(c->r[30]+0x00000020u); // 801C7808
  c->r[4]=c->r[31]|c->r[31]; // 801C780C
  c->lr=0x801C7814u; f_80179868(c); // 801C7810
  W32(c->r[30]+0x00000024u,c->r[3]); // 801C7814
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801C7818
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801C781C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801C7820
  c->lr=c->r[0]; // 801C7824
  c->r[1]=c->r[1]+0x000000B0u; // 801C7828
  return; // 801C782C
}

// fn_801C7830
void f_801C7830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7830
  c->r[0]=c->lr; // 801C7834
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C783C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7840
  c->r[30]=c->r[4]|c->r[4]; // 801C7844
  c->r[31]=c->r[5]|c->r[5]; // 801C7848
  c->lr=0x801C7850u; f_8007B524(c); // 801C784C
  c->r[4]=c->r[30]|c->r[30]; // 801C7850
  c->lr=0x801C7858u; f_800A3000(c); // 801C7854
  c->r[4]=c->r[3]|c->r[3]; // 801C7858
  cmps(c,0,(int32_t)c->r[3],0); // 801C785C
  if (!crb(c,2)) { goto L_801C786C; } // 801C7860
  c->r[3]=0u+0xFFFFFFFFu; // 801C7864
  goto L_801C7924; // 801C7868
L_801C786C:;
  c->r[3]=0u+0x00000000u; // 801C786C
  c->r[0]=0u+0x00000002u; // 801C7870
  c->ctr=c->r[0]; // 801C7874
L_801C7878:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 801C7878
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C787C
  if (!crb(c,2)) { goto L_801C7888; } // 801C7880
  goto L_801C7924; // 801C7884
L_801C7888:;
  c->r[3]=c->r[3]+0x00000001u; // 801C7888
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C788C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C7890
  if (!crb(c,2)) { goto L_801C789C; } // 801C7894
  goto L_801C7924; // 801C7898
L_801C789C:;
  c->r[3]=c->r[3]+0x00000001u; // 801C789C
  c->r[0]=R32(c->r[4]+0x00000024u); // 801C78A0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C78A4
  if (!crb(c,2)) { goto L_801C78B0; } // 801C78A8
  goto L_801C7924; // 801C78AC
L_801C78B0:;
  c->r[3]=c->r[3]+0x00000001u; // 801C78B0
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 801C78B4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C78B8
  if (!crb(c,2)) { goto L_801C78C4; } // 801C78BC
  goto L_801C7924; // 801C78C0
L_801C78C4:;
  c->r[3]=c->r[3]+0x00000001u; // 801C78C4
  c->r[0]=R32(c->r[4]+0x00000034u); // 801C78C8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C78CC
  if (!crb(c,2)) { goto L_801C78D8; } // 801C78D0
  goto L_801C7924; // 801C78D4
L_801C78D8:;
  c->r[3]=c->r[3]+0x00000001u; // 801C78D8
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801C78DC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C78E0
  if (!crb(c,2)) { goto L_801C78EC; } // 801C78E4
  goto L_801C7924; // 801C78E8
L_801C78EC:;
  c->r[3]=c->r[3]+0x00000001u; // 801C78EC
  c->r[0]=R32(c->r[4]+0x00000044u); // 801C78F0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C78F4
  if (!crb(c,2)) { goto L_801C7900; } // 801C78F8
  goto L_801C7924; // 801C78FC
L_801C7900:;
  c->r[3]=c->r[3]+0x00000001u; // 801C7900
  c->r[0]=R32(c->r[4]+0x0000004Cu); // 801C7904
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C7908
  if (!crb(c,2)) { goto L_801C7914; } // 801C790C
  goto L_801C7924; // 801C7910
L_801C7914:;
  c->r[4]=c->r[4]+0x00000040u; // 801C7914
  c->r[3]=c->r[3]+0x00000001u; // 801C7918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7878; } // 801C791C
  c->r[3]=0u+0xFFFFFFFFu; // 801C7920
L_801C7924:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7924
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7928
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C792C
  c->lr=c->r[0]; // 801C7930
  c->r[1]=c->r[1]+0x00000010u; // 801C7934
  return; // 801C7938
}

// fn_801C793C
void f_801C793C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C793C
  c->r[0]=c->lr; // 801C7940
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7944
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7948
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C794C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7950
  c->r[30]=c->r[4]|c->r[4]; // 801C7954
  c->r[29]=c->r[5]|c->r[5]; // 801C7958
  c->lr=0x801C7960u; f_8007B524(c); // 801C795C
  c->r[4]=c->r[30]|c->r[30]; // 801C7960
  c->lr=0x801C7968u; f_800A3000(c); // 801C7964
  c->r[31]=c->r[3]|c->r[3]; // 801C7968
  cmps(c,0,(int32_t)c->r[3],0); // 801C796C
  if (!crb(c,2)) { goto L_801C797C; } // 801C7970
  c->r[3]=0u+0x00000000u; // 801C7974
  goto L_801C79B0; // 801C7978
L_801C797C:;
  c->r[30]=0u+0x00000000u; // 801C797C
L_801C7980:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7980
  c->r[4]=c->r[29]|c->r[29]; // 801C7984
  c->r[5]=c->r[30]|c->r[30]; // 801C7988
  c->lr=0x801C7990u; f_80178BC4(c); // 801C798C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7990
  if (crb(c,2)) { goto L_801C79A0; } // 801C7994
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C7998
  goto L_801C79B0; // 801C799C
L_801C79A0:;
  c->r[30]=c->r[30]+0x00000001u; // 801C79A0
  cmps(c,0,(int32_t)c->r[30],16); // 801C79A4
  if (crb(c,0)) { IRQCHK(c); goto L_801C7980; } // 801C79A8
  c->r[3]=0u+0x00000000u; // 801C79AC
L_801C79B0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C79B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C79B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C79B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C79BC
  c->lr=c->r[0]; // 801C79C0
  c->r[1]=c->r[1]+0x00000020u; // 801C79C4
  return; // 801C79C8
}

// fn_801C79CC
void f_801C79CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C79CC
  c->r[0]=c->lr; // 801C79D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C79D4
  c->r[11]=c->r[1]+0x00000020u; // 801C79D8
  c->lr=0x801C79E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C79DC
  c->r[27]=c->r[3]|c->r[3]; // 801C79E0
  c->r[31]=c->r[4]|c->r[4]; // 801C79E4
  c->r[28]=c->r[5]|c->r[5]; // 801C79E8
  c->r[29]=c->r[6]|c->r[6]; // 801C79EC
  c->r[30]=c->r[7]|c->r[7]; // 801C79F0
  c->lr=0x801C79F8u; f_8007B524(c); // 801C79F4
  c->r[4]=c->r[31]|c->r[31]; // 801C79F8
  c->lr=0x801C7A00u; f_800A3000(c); // 801C79FC
  c->r[31]=c->r[3]|c->r[3]; // 801C7A00
  cmps(c,0,(int32_t)c->r[3],0); // 801C7A04
  if (crb(c,2)) { goto L_801C7A60; } // 801C7A08
  c->lr=0x801C7A10u; f_8007B524(c); // 801C7A0C
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7A10
  c->lr=0x801C7A18u; f_800A24C4(c); // 801C7A14
  cmps(c,0,(int32_t)c->r[3],0); // 801C7A18
  if (crb(c,2)) { goto L_801C7A60; } // 801C7A1C
  c->r[4]=0u+0x00000000u; // 801C7A20
  c->r[5]=0u+0x00000000u; // 801C7A24
  c->r[0]=0u+0x00000010u; // 801C7A28
  c->ctr=c->r[0]; // 801C7A2C
L_801C7A30:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C7A30
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801C7A34
  if (!crb(c,2)) { goto L_801C7A54; } // 801C7A38
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[28]); // 801C7A3C
  if (!crb(c,2)) { goto L_801C7A50; } // 801C7A40
  c->r[5]=c->r[30]|c->r[30]; // 801C7A44
  c->lr=0x801C7A4Cu; f_8008E59C(c); // 801C7A48
  goto L_801C7A60; // 801C7A4C
L_801C7A50:;
  c->r[5]=c->r[5]+0x00000001u; // 801C7A50
L_801C7A54:;
  c->r[31]=c->r[31]+0x00000008u; // 801C7A54
  c->r[4]=c->r[4]+0x00000001u; // 801C7A58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7A30; } // 801C7A5C
L_801C7A60:;
  c->r[11]=c->r[1]+0x00000020u; // 801C7A60
  c->lr=0x801C7A68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7A64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7A68
  c->lr=c->r[0]; // 801C7A6C
  c->r[1]=c->r[1]+0x00000020u; // 801C7A70
  return; // 801C7A74
}

// fn_801C7A78
void f_801C7A78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7A78
  c->r[0]=c->lr; // 801C7A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7A84
  c->r[31]=c->r[4]|c->r[4]; // 801C7A88
  c->lr=0x801C7A90u; f_8007B524(c); // 801C7A8C
  c->r[4]=c->r[31]|c->r[31]; // 801C7A90
  c->lr=0x801C7A98u; f_800A2420(c); // 801C7A94
  cmps(c,0,(int32_t)c->r[3],0); // 801C7A98
  if (crb(c,2)) { goto L_801C7AA8; } // 801C7A9C
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C7AA0
  goto L_801C7AAC; // 801C7AA4
L_801C7AA8:;
  c->r[3]=0u+0x00000000u; // 801C7AA8
L_801C7AAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7AAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7AB0
  c->lr=c->r[0]; // 801C7AB4
  c->r[1]=c->r[1]+0x00000010u; // 801C7AB8
  return; // 801C7ABC
}

// fn_801C7AC0
void f_801C7AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7AC0
  c->r[0]=c->lr; // 801C7AC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7AC8
  c->r[11]=c->r[1]+0x00000030u; // 801C7ACC
  c->lr=0x801C7AD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7AD0
  c->r[27]=c->r[3]|c->r[3]; // 801C7AD4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C7AD8
  c->r[5]=0u+0x00000001u; // 801C7ADC
  c->lr=0x801C7AE4u; f_801C7830(c); // 801C7AE0
  c->r[29]=c->r[3]|c->r[3]; // 801C7AE4
  c->r[0]=c->r[3]+0x00010000u; // 801C7AE8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801C7AEC
  if (!crb(c,2)) { goto L_801C7B08; } // 801C7AF0
  c->r[3]=c->r[27]|c->r[27]; // 801C7AF4
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7AF8
  c->r[5]=0u+0x00000000u; // 801C7AFC
  c->lr=0x801C7B04u; f_801C7830(c); // 801C7B00
  c->r[29]=c->r[3]|c->r[3]; // 801C7B04
L_801C7B08:;
  c->lr=0x801C7B0Cu; f_8007B524(c); // 801C7B08
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7B0C
  c->lr=0x801C7B14u; f_800A3000(c); // 801C7B10
  c->r[30]=c->r[3]|c->r[3]; // 801C7B14
  c->lr=0x801C7B1Cu; f_8007B524(c); // 801C7B18
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7B1C
  c->lr=0x801C7B24u; f_800A24C4(c); // 801C7B20
  c->r[28]=c->r[3]|c->r[3]; // 801C7B24
  c->lr=0x801C7B2Cu; f_8007B524(c); // 801C7B28
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7B2C
  c->lr=0x801C7B34u; f_800A34E4(c); // 801C7B30
  c->r[31]=c->r[3]|c->r[3]; // 801C7B34
  c->r[3]=c->r[27]|c->r[27]; // 801C7B38
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7B3C
  c->r[5]=0u+0x00000005u; // 801C7B40
  c->lr=0x801C7B48u; f_801C793C(c); // 801C7B44
  c->r[5]=c->r[3]|c->r[3]; // 801C7B48
  c->r[0]=0u+0x00000001u; // 801C7B4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C7B50
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801C7B54
  c->r[3]=c->r[30]+c->r[0]; // 801C7B58
  c->r[30]=R32(c->r[3]+0x00000018u); // 801C7B5C
  c->r[3]=c->r[30]+0x00000001u; // 801C7B60
  c->r[4]=0u+0x00000000u; // 801C7B64
  c->r[5]=c->r[31]+c->r[5]; // 801C7B68
  c->lr=0x801C7B70u; f_800EEE08(c); // 801C7B6C
  c->r[0]=c->r[30]+0x00000001u; // 801C7B70
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C7B74
  c->r[3]=c->r[28]|c->r[28]; // 801C7B78
  c->r[4]=c->r[29]|c->r[29]; // 801C7B7C
  c->r[5]=c->r[1]+0x00000008u; // 801C7B80
  c->lr=0x801C7B88u; f_8008E59C(c); // 801C7B84
  c->r[11]=c->r[1]+0x00000030u; // 801C7B88
  c->lr=0x801C7B90u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7B8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C7B90
  c->lr=c->r[0]; // 801C7B94
  c->r[1]=c->r[1]+0x00000030u; // 801C7B98
  return; // 801C7B9C
}

// fn_801C7BA0
void f_801C7BA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7BA0
  c->r[0]=c->lr; // 801C7BA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7BA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7BAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7BB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7BB4
  c->r[29]=c->r[3]|c->r[3]; // 801C7BB8
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C7BBC
  c->r[5]=0u+0x00000000u; // 801C7BC0
  c->lr=0x801C7BC8u; f_801C7830(c); // 801C7BC4
  c->r[31]=c->r[3]|c->r[3]; // 801C7BC8
  c->lr=0x801C7BD0u; f_8007B524(c); // 801C7BCC
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C7BD0
  c->lr=0x801C7BD8u; f_800A24C4(c); // 801C7BD4
  c->r[30]=c->r[3]|c->r[3]; // 801C7BD8
  cmps(c,0,(int32_t)c->r[3],0); // 801C7BDC
  if (crb(c,2)) { goto L_801C7C74; } // 801C7BE0
  c->r[0]=0u+0x00000005u; // 801C7BE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C7BE8
  c->r[0]=0u+0x00000001u; // 801C7BEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C7BF0
  c->r[4]=c->r[31]|c->r[31]; // 801C7BF4
  c->r[5]=c->r[1]+0x00000008u; // 801C7BF8
  c->lr=0x801C7C00u; f_8008E59C(c); // 801C7BFC
  c->r[3]=c->r[29]|c->r[29]; // 801C7C00
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C7C04
  c->r[5]=0u+0x00000001u; // 801C7C08
  c->lr=0x801C7C10u; f_801C7830(c); // 801C7C0C
  c->r[31]=c->r[3]|c->r[3]; // 801C7C10
  c->r[0]=c->r[3]+0x00010000u; // 801C7C14
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801C7C18
  if (!crb(c,2)) { goto L_801C7C34; } // 801C7C1C
  c->r[3]=c->r[29]|c->r[29]; // 801C7C20
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C7C24
  c->r[5]=0u+0x00000000u; // 801C7C28
  c->lr=0x801C7C30u; f_801C7830(c); // 801C7C2C
  c->r[31]=c->r[3]|c->r[3]; // 801C7C30
L_801C7C34:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7C34
  c->lr=0x801C7C3Cu; f_80089E24(c); // 801C7C38
  cmps(c,0,(int32_t)c->r[3],0); // 801C7C3C
  if (crb(c,2)) { goto L_801C7C74; } // 801C7C40
  c->r[0]=0u+0x00000001u; // 801C7C44
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C7C48
  c->r[4]=R32(c->r[29]+0x00000014u); // 801C7C4C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801C7C50
  c->r[3]=c->r[3]+c->r[0]; // 801C7C54
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C7C58
  c->r[4]=c->r[4]+c->r[0]; // 801C7C5C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801C7C60
  c->r[3]=c->r[30]|c->r[30]; // 801C7C64
  c->r[4]=c->r[31]|c->r[31]; // 801C7C68
  c->r[5]=c->r[1]+0x00000008u; // 801C7C6C
  c->lr=0x801C7C74u; f_8008E59C(c); // 801C7C70
L_801C7C74:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7C7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7C80
  c->lr=c->r[0]; // 801C7C84
  c->r[1]=c->r[1]+0x00000020u; // 801C7C88
  return; // 801C7C8C
}

// fn_801C7C90
void f_801C7C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C90
  c->r[0]=c->lr; // 801C7C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7C98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7C9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7CA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7CA4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C7CA8
  c->r[28]=c->r[3]|c->r[3]; // 801C7CAC
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C7CB0
  c->r[5]=0u+0x00000001u; // 801C7CB4
  c->lr=0x801C7CBCu; f_801C7830(c); // 801C7CB8
  c->r[30]=c->r[3]|c->r[3]; // 801C7CBC
  c->r[0]=c->r[3]+0x00010000u; // 801C7CC0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801C7CC4
  if (!crb(c,2)) { goto L_801C7CE0; } // 801C7CC8
  c->r[3]=c->r[28]|c->r[28]; // 801C7CCC
  c->r[4]=R32(c->r[28]+0x00000000u); // 801C7CD0
  c->r[5]=0u+0x00000000u; // 801C7CD4
  c->lr=0x801C7CDCu; f_801C7830(c); // 801C7CD8
  c->r[30]=c->r[3]|c->r[3]; // 801C7CDC
L_801C7CE0:;
  c->lr=0x801C7CE4u; f_8007B524(c); // 801C7CE0
  c->r[4]=R32(c->r[28]+0x00000000u); // 801C7CE4
  c->lr=0x801C7CECu; f_800A24C4(c); // 801C7CE8
  c->r[29]=c->r[3]|c->r[3]; // 801C7CEC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7CF0
  if (crb(c,2)) { goto L_801C7D50; } // 801C7CF4
  c->lr=0x801C7CFCu; f_80089E24(c); // 801C7CF8
  c->r[31]=c->r[3]|c->r[3]; // 801C7CFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7D00
  if (crb(c,2)) { goto L_801C7D50; } // 801C7D04
  c->r[0]=0u+0x00000001u; // 801C7D08
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C7D0C
  c->lr=0x801C7D14u; f_8005C538(c); // 801C7D10
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 801C7D14
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 801C7D18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801C7D1C
  c->r[3]=c->r[3]-c->r[0]; // 801C7D20
  c->r[0]=R32(c->r[28]+0x00000010u); // 801C7D24
  c->r[4]=c->r[0]-c->r[3]; // 801C7D28
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801C7D2C
  c->r[3]=c->r[31]+c->r[0]; // 801C7D30
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C7D34
  c->r[4]=c->r[4]+c->r[0]; // 801C7D38
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801C7D3C
  c->r[3]=c->r[29]|c->r[29]; // 801C7D40
  c->r[4]=c->r[30]|c->r[30]; // 801C7D44
  c->r[5]=c->r[1]+0x00000008u; // 801C7D48
  c->lr=0x801C7D50u; f_8008E59C(c); // 801C7D4C
L_801C7D50:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7D50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7D54
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7D58
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C7D5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7D60
  c->lr=c->r[0]; // 801C7D64
  c->r[1]=c->r[1]+0x00000020u; // 801C7D68
  return; // 801C7D6C
}

// fn_801C7D70
void f_801C7D70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7D70
  c->r[0]=c->lr; // 801C7D74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7D78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7D7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7D80
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7D84
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C7D88
  c->r[29]=c->r[3]|c->r[3]; // 801C7D8C
  c->r[28]=c->r[4]|c->r[4]; // 801C7D90
  c->lr=0x801C7D98u; f_8007B524(c); // 801C7D94
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C7D98
  c->lr=0x801C7DA0u; f_800A3574(c); // 801C7D9C
  c->r[31]=c->r[3]|c->r[3]; // 801C7DA0
  c->lr=0x801C7DA8u; f_8007B524(c); // 801C7DA4
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C7DA8
  c->lr=0x801C7DB0u; f_800A24C4(c); // 801C7DAC
  c->lr=0x801C7DB4u; f_80089E24(c); // 801C7DB0
  c->r[29]=c->r[3]|c->r[3]; // 801C7DB4
  c->r[30]=0u+0x00000000u; // 801C7DB8
  goto L_801C7DE8; // 801C7DBC
L_801C7DC0:;
  c->r[3]=c->r[29]|c->r[29]; // 801C7DC0
  c->r[4]=0u+0x00000002u; // 801C7DC4
  c->r[5]=c->r[30]|c->r[30]; // 801C7DC8
  c->lr=0x801C7DD0u; f_80178BC4(c); // 801C7DCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C7DD0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801C7DD4
  if (!crb(c,2)) { goto L_801C7DE4; } // 801C7DD8
  c->r[3]=0u+0x00000001u; // 801C7DDC
  goto L_801C7DF4; // 801C7DE0
L_801C7DE4:;
  c->r[30]=c->r[30]+0x00000001u; // 801C7DE4
L_801C7DE8:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801C7DE8
  if (crb(c,0)) { IRQCHK(c); goto L_801C7DC0; } // 801C7DEC
  c->r[3]=0u+0x00000000u; // 801C7DF0
L_801C7DF4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7DF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7DF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7DFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C7E00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7E04
  c->lr=c->r[0]; // 801C7E08
  c->r[1]=c->r[1]+0x00000020u; // 801C7E0C
  return; // 801C7E10
}

// fn_801C7E14
void f_801C7E14(Ctx* __restrict c) {
  return; // 801C7E14
}

// fn_801C7E18
void f_801C7E18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7E18
  c->r[0]=c->lr; // 801C7E1C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7E20
  c->r[11]=c->r[1]+0x00000030u; // 801C7E24
  c->lr=0x801C7E2Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7E28
  c->r[26]=c->r[3]|c->r[3]; // 801C7E2C
  c->lr=0x801C7E34u; f_8007B524(c); // 801C7E30
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C7E34
  c->lr=0x801C7E3Cu; f_800A24C4(c); // 801C7E38
  c->r[30]=c->r[3]|c->r[3]; // 801C7E3C
  c->lr=0x801C7E44u; f_80089E24(c); // 801C7E40
  c->r[28]=c->r[3]|c->r[3]; // 801C7E44
  c->lr=0x801C7E4Cu; f_8007B524(c); // 801C7E48
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C7E4C
  c->lr=0x801C7E54u; f_800A352C(c); // 801C7E50
  c->r[29]=c->r[3]|c->r[3]; // 801C7E54
  cmps(c,0,(int32_t)c->r[30],0); // 801C7E58
  if (crb(c,2)) { goto L_801C7F20; } // 801C7E5C
  cmps(c,0,(int32_t)c->r[28],0); // 801C7E60
  if (crb(c,2)) { goto L_801C7F20; } // 801C7E64
  c->r[27]=0u+0x00000000u; // 801C7E68
  c->r[31]=0u+0x00000000u; // 801C7E6C
  goto L_801C7F18; // 801C7E70
L_801C7E74:;
  c->r[3]=c->r[28]|c->r[28]; // 801C7E74
  c->r[4]=0u+0x00000000u; // 801C7E78
  c->r[5]=0u+0x00000000u; // 801C7E7C
  c->lr=0x801C7E84u; f_80178D48(c); // 801C7E80
  c->r[30]=c->r[3]|c->r[3]; // 801C7E84
  c->r[3]=c->r[28]|c->r[28]; // 801C7E88
  c->r[4]=0u+0x00000002u; // 801C7E8C
  c->r[5]=c->r[27]|c->r[27]; // 801C7E90
  c->lr=0x801C7E98u; f_80178D48(c); // 801C7E94
  c->r[0]=c->r[30]+0x00010000u; // 801C7E98
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801C7E9C
  if (crb(c,2)) { goto L_801C7F14; } // 801C7EA0
  c->r[0]=c->r[3]+0x00010000u; // 801C7EA4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801C7EA8
  if (crb(c,2)) { goto L_801C7F14; } // 801C7EAC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801C7EB0
  if (!crb(c,0)) { goto L_801C7F14; } // 801C7EB4
  c->r[3]=c->r[28]|c->r[28]; // 801C7EB8
  c->r[4]=0u+0x00000002u; // 801C7EBC
  c->r[5]=c->r[27]|c->r[27]; // 801C7EC0
  c->lr=0x801C7EC8u; f_80178BC4(c); // 801C7EC4
  c->r[4]=c->r[3]|c->r[3]; // 801C7EC8
  cmps(c,0,(int32_t)c->r[3],0); // 801C7ECC
  if (crb(c,2)) { goto L_801C7F20; } // 801C7ED0
  c->r[3]=c->r[1]+0x00000008u; // 801C7ED4
  c->lr=0x801C7EDCu; f_8008E5B4(c); // 801C7ED8
  W32(c->r[1]+0x00000010u,c->r[31]); // 801C7EDC
  W32(c->r[1]+0x00000014u,c->r[31]); // 801C7EE0
  c->r[3]=c->r[26]|c->r[26]; // 801C7EE4
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C7EE8
  c->r[5]=c->r[27]|c->r[27]; // 801C7EEC
  c->r[6]=0u+0x00000002u; // 801C7EF0
  c->r[7]=c->r[1]+0x00000010u; // 801C7EF4
  c->lr=0x801C7EFCu; f_801C79CC(c); // 801C7EF8
  c->r[3]=c->r[26]|c->r[26]; // 801C7EFC
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C7F00
  c->r[5]=0u+0x00000000u; // 801C7F04
  c->r[6]=0u+0x00000000u; // 801C7F08
  c->r[7]=c->r[1]+0x00000008u; // 801C7F0C
  c->lr=0x801C7F14u; f_801C79CC(c); // 801C7F10
L_801C7F14:;
  c->r[27]=c->r[27]+0x00000001u; // 801C7F14
L_801C7F18:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[29]); // 801C7F18
  if (crb(c,0)) { IRQCHK(c); goto L_801C7E74; } // 801C7F1C
L_801C7F20:;
  c->r[11]=c->r[1]+0x00000030u; // 801C7F20
  c->lr=0x801C7F28u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7F24
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C7F28
  c->lr=c->r[0]; // 801C7F2C
  c->r[1]=c->r[1]+0x00000030u; // 801C7F30
  return; // 801C7F34
}

// fn_801C7F38
void f_801C7F38(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000018u); // 801C7F38
  c->r[0]=c->r[4]+0x00000001u; // 801C7F3C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C7F40
  return; // 801C7F44
}

// fn_801C7F48
void f_801C7F48(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000018u); // 801C7F48
  c->r[0]=c->r[4]+0x00000001u; // 801C7F4C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C7F50
  return; // 801C7F54
}

// fn_801C7F58
void f_801C7F58(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801C7F58
  c->r[0]=c->r[4]+0x00000001u; // 801C7F5C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801C7F60
  return; // 801C7F64
}

// fn_801C7F68
void f_801C7F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7F68
  c->r[0]=c->lr; // 801C7F6C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801C7F70
  c->r[11]=c->r[1]+0x000000B0u; // 801C7F74
  c->lr=0x801C7F7Cu; f_802F0D94(c); // 801C7F78
  c->r[15]=c->r[3]|c->r[3]; // 801C7F7C
  c->lr=0x801C7F84u; f_8007B524(c); // 801C7F80
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C7F84
  c->lr=0x801C7F8Cu; f_800A24C4(c); // 801C7F88
  W32(c->r[1]+0x00000054u,c->r[3]); // 801C7F8C
  c->lr=0x801C7F94u; f_8007B524(c); // 801C7F90
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C7F94
  c->lr=0x801C7F9Cu; f_800A24C4(c); // 801C7F98
  W32(c->r[1]+0x00000050u,c->r[3]); // 801C7F9C
  c->lr=0x801C7FA4u; f_8007B524(c); // 801C7FA0
  c->lr=0x801C7FA8u; f_800A3488(c); // 801C7FA4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801C7FA8
  c->r[3]=R32(c->r[1]+0x00000054u); // 801C7FAC
  c->lr=0x801C7FB4u; f_80089E24(c); // 801C7FB0
  c->r[21]=c->r[3]|c->r[3]; // 801C7FB4
  c->r[3]=R32(c->r[1]+0x00000050u); // 801C7FB8
  c->lr=0x801C7FC0u; f_80089E24(c); // 801C7FBC
  W32(c->r[1]+0x00000048u,c->r[3]); // 801C7FC0
  c->lr=0x801C7FC8u; f_8007B524(c); // 801C7FC4
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C7FC8
  c->lr=0x801C7FD0u; f_800A3064(c); // 801C7FCC
  W32(c->r[1]+0x00000060u,c->r[3]); // 801C7FD0
  cmps(c,0,(int32_t)c->r[3],0); // 801C7FD4
  if (crb(c,2)) { goto L_801C7FEC; } // 801C7FD8
  c->lr=0x801C7FE0u; f_8007B524(c); // 801C7FDC
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C7FE0
  c->r[5]=0u+0x00000000u; // 801C7FE4
  c->lr=0x801C7FECu; f_800A30DC(c); // 801C7FE8
L_801C7FEC:;
  c->r[3]=c->r[15]|c->r[15]; // 801C7FEC
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C7FF0
  c->r[5]=0u+0x00000001u; // 801C7FF4
  c->lr=0x801C7FFCu; f_801C7830(c); // 801C7FF8
  c->r[16]=c->r[3]|c->r[3]; // 801C7FFC
  c->r[0]=c->r[3]+0x00010000u; // 801C8000
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801C8004
  if (!crb(c,2)) { goto L_801C8020; } // 801C8008
  c->r[3]=c->r[15]|c->r[15]; // 801C800C
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8010
  c->r[5]=0u+0x00000000u; // 801C8014
  c->lr=0x801C801Cu; f_801C7830(c); // 801C8018
  c->r[16]=c->r[3]|c->r[3]; // 801C801C
L_801C8020:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8020
  c->lr=0x801C8028u; f_801C9088(c); // 801C8024
  cmps(c,0,(int32_t)c->r[3],0); // 801C8028
  if (!crb(c,2)) { goto L_801C8094; } // 801C802C
  c->lr=0x801C8034u; f_8007B524(c); // 801C8030
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8034
  c->lr=0x801C803Cu; f_800A39E4(c); // 801C8038
  c->r[14]=c->r[3]|c->r[3]; // 801C803C
  c->lr=0x801C8044u; f_8007B524(c); // 801C8040
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C8044
  c->lr=0x801C804Cu; f_800A39E4(c); // 801C8048
  c->r[14]=c->r[14]+c->r[3]; // 801C804C
  c->lr=0x801C8054u; f_8007B524(c); // 801C8050
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8054
  c->lr=0x801C805Cu; f_800A34E4(c); // 801C8058
  cmps(c,0,(int32_t)c->r[14],-99); // 801C805C
  if (!crb(c,0)) { goto L_801C8068; } // 801C8060
  c->r[14]=0u+0xFFFFFF9Du; // 801C8064
L_801C8068:;
  cmps(c,0,(int32_t)c->r[14],(int32_t)c->r[3]); // 801C8068
  if (crb(c,0)) { goto L_801C8074; } // 801C806C
  c->r[14]=c->r[3]|c->r[3]; // 801C8070
L_801C8074:;
  c->r[0]=0u+0x00000001u; // 801C8074
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C8078
  W32(c->r[1]+0x0000001Cu,c->r[14]); // 801C807C
  c->r[3]=R32(c->r[1]+0x00000054u); // 801C8080
  c->r[4]=c->r[16]|c->r[16]; // 801C8084
  c->r[5]=c->r[1]+0x00000018u; // 801C8088
  c->lr=0x801C8090u; f_8008E59C(c); // 801C808C
  goto L_801C80BC; // 801C8090
L_801C8094:;
  c->lr=0x801C8098u; f_8007B524(c); // 801C8094
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8098
  c->lr=0x801C80A0u; f_800A39E4(c); // 801C809C
  c->r[0]=0u+0x00000001u; // 801C80A0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C80A4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801C80A8
  c->r[3]=R32(c->r[1]+0x00000054u); // 801C80AC
  c->r[4]=c->r[16]|c->r[16]; // 801C80B0
  c->r[5]=c->r[1]+0x00000018u; // 801C80B4
  c->lr=0x801C80BCu; f_8008E59C(c); // 801C80B8
L_801C80BC:;
  c->lr=0x801C80C0u; f_8007B524(c); // 801C80BC
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C80C0
  c->lr=0x801C80C8u; f_800A352C(c); // 801C80C4
  c->r[20]=c->r[3]|c->r[3]; // 801C80C8
  c->lr=0x801C80D0u; f_8007B524(c); // 801C80CC
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C80D0
  c->lr=0x801C80D8u; f_800A3574(c); // 801C80D4
  c->r[19]=0u+0x00000000u; // 801C80D8
  c->r[18]=0u+0x00000000u; // 801C80DC
  c->lr=0x801C80E4u; f_8007B524(c); // 801C80E0
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C80E4
  c->lr=0x801C80ECu; f_800A3574(c); // 801C80E8
  c->r[14]=c->r[3]|c->r[3]; // 801C80EC
  c->r[16]=0u+0x00000000u; // 801C80F0
  goto L_801C8130; // 801C80F4
L_801C80F8:;
  c->r[3]=c->r[21]|c->r[21]; // 801C80F8
  c->r[4]=0u+0x00000002u; // 801C80FC
  c->r[5]=c->r[16]|c->r[16]; // 801C8100
  c->lr=0x801C8108u; f_80178BC4(c); // 801C8104
  cmps(c,0,(int32_t)c->r[3],0); // 801C8108
  if (crb(c,2)) { goto L_801C812C; } // 801C810C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8110
  cmps(c,0,(int32_t)c->r[0],43); // 801C8114
  if (!crb(c,2)) { goto L_801C8120; } // 801C8118
  c->r[19]=0u+0x00000001u; // 801C811C
L_801C8120:;
  cmps(c,0,(int32_t)c->r[0],44); // 801C8120
  if (!crb(c,2)) { goto L_801C812C; } // 801C8124
  c->r[18]=0u+0x00000001u; // 801C8128
L_801C812C:;
  c->r[16]=c->r[16]+0x00000001u; // 801C812C
L_801C8130:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[14]); // 801C8130
  if (crb(c,0)) { IRQCHK(c); goto L_801C80F8; } // 801C8134
  c->lr=0x801C813Cu; f_8007B524(c); // 801C8138
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C813C
  c->lr=0x801C8144u; f_800A3574(c); // 801C8140
  c->r[14]=c->r[3]|c->r[3]; // 801C8144
  c->r[16]=0u+0x00000000u; // 801C8148
  goto L_801C8188; // 801C814C
L_801C8150:;
  c->r[3]=R32(c->r[1]+0x00000048u); // 801C8150
  c->r[4]=0u+0x00000002u; // 801C8154
  c->r[5]=c->r[16]|c->r[16]; // 801C8158
  c->lr=0x801C8160u; f_80178BC4(c); // 801C815C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8160
  if (crb(c,2)) { goto L_801C8184; } // 801C8164
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8168
  cmps(c,0,(int32_t)c->r[0],43); // 801C816C
  if (!crb(c,2)) { goto L_801C8178; } // 801C8170
  c->r[19]=0u+0x00000001u; // 801C8174
L_801C8178:;
  cmps(c,0,(int32_t)c->r[0],44); // 801C8178
  if (!crb(c,2)) { goto L_801C8184; } // 801C817C
  c->r[18]=0u+0x00000001u; // 801C8180
L_801C8184:;
  c->r[16]=c->r[16]+0x00000001u; // 801C8184
L_801C8188:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[14]); // 801C8188
  if (crb(c,0)) { IRQCHK(c); goto L_801C8150; } // 801C818C
  c->r[3]=c->r[15]|c->r[15]; // 801C8190
  c->lr=0x801C8198u; f_801C7E18(c); // 801C8194
  c->lr=0x801C819Cu; f_8007B524(c); // 801C8198
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C819C
  c->lr=0x801C81A4u; f_800A3574(c); // 801C81A0
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 801C81A4
  c->r[17]=c->r[3]|c->r[3]; // 801C81A8
  c->r[0]=0u+0x00000000u; // 801C81AC
  W32(c->r[1]+0x00000058u,c->r[0]); // 801C81B0
  c->r[16]=0u+0x00000000u; // 801C81B4
  c->r[3]=0u+0x80430000u; // 801C81B8
  c->r[14]=R32(c->r[3]+0x00000C40u); // 801C81BC
  c->r[3]=c->r[3]+0x00000C40u; // 801C81C0
  c->r[31]=R32(c->r[3]+0x00000004u); // 801C81C4
  c->r[30]=R32(c->r[3]+0x00000008u); // 801C81C8
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 801C81CC
  c->r[28]=R32(c->r[3]+0x00000010u); // 801C81D0
  c->r[3]=0u+0x80430000u; // 801C81D4
  c->r[27]=R32(c->r[3]+0x00000C54u); // 801C81D8
  c->r[3]=c->r[3]+0x00000C54u; // 801C81DC
  c->r[26]=R32(c->r[3]+0x00000004u); // 801C81E0
  c->r[25]=R32(c->r[3]+0x00000008u); // 801C81E4
  c->r[24]=R32(c->r[3]+0x0000000Cu); // 801C81E8
  c->r[23]=R32(c->r[3]+0x00000010u); // 801C81EC
  goto L_801C82A8; // 801C81F0
L_801C81F4:;
  c->r[3]=c->r[21]|c->r[21]; // 801C81F4
  c->r[4]=0u+0x00000002u; // 801C81F8
  c->r[5]=c->r[16]|c->r[16]; // 801C81FC
  c->lr=0x801C8204u; f_80178BC4(c); // 801C8200
  cmps(c,0,(int32_t)c->r[3],0); // 801C8204
  if (crb(c,2)) { goto L_801C8298; } // 801C8208
  c->r[22]=R32(c->r[3]+0x00000004u); // 801C820C
  cmps(c,0,(int32_t)c->r[19],0); // 801C8210
  if (crb(c,2)) { goto L_801C8254; } // 801C8214
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[14]); // 801C8218
  if (crb(c,2)) { goto L_801C8240; } // 801C821C
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[31]); // 801C8220
  if (crb(c,2)) { goto L_801C8240; } // 801C8224
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[30]); // 801C8228
  if (crb(c,2)) { goto L_801C8240; } // 801C822C
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[29]); // 801C8230
  if (crb(c,2)) { goto L_801C8240; } // 801C8234
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[28]); // 801C8238
  if (!crb(c,2)) { goto L_801C8254; } // 801C823C
L_801C8240:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8240
  c->r[4]=c->r[16]|c->r[16]; // 801C8244
  c->lr=0x801C824Cu; f_801C8E28(c); // 801C8248
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 801C824C
  c->r[16]=c->r[16]+0xFFFFFFFFu; // 801C8250
L_801C8254:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C8254
  if (crb(c,2)) { goto L_801C8298; } // 801C8258
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[27]); // 801C825C
  if (crb(c,2)) { goto L_801C8284; } // 801C8260
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[26]); // 801C8264
  if (crb(c,2)) { goto L_801C8284; } // 801C8268
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[25]); // 801C826C
  if (crb(c,2)) { goto L_801C8284; } // 801C8270
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[24]); // 801C8274
  if (crb(c,2)) { goto L_801C8284; } // 801C8278
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[23]); // 801C827C
  if (!crb(c,2)) { goto L_801C8298; } // 801C8280
L_801C8284:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8284
  c->r[4]=c->r[16]|c->r[16]; // 801C8288
  c->lr=0x801C8290u; f_801C8E28(c); // 801C828C
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 801C8290
  c->r[16]=c->r[16]+0xFFFFFFFFu; // 801C8294
L_801C8298:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 801C8298
  c->r[3]=c->r[3]+0x00000001u; // 801C829C
  W32(c->r[1]+0x00000058u,c->r[3]); // 801C82A0
  c->r[16]=c->r[16]+0x00000001u; // 801C82A4
L_801C82A8:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 801C82A8
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 801C82AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C82B0
  if (crb(c,0)) { IRQCHK(c); goto L_801C81F4; } // 801C82B4
  c->lr=0x801C82BCu; f_8007B524(c); // 801C82B8
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C82BC
  c->lr=0x801C82C4u; f_800A3574(c); // 801C82C0
  W32(c->r[1]+0x00000064u,c->r[3]); // 801C82C4
  c->r[16]=0u+0x00000000u; // 801C82C8
  goto L_801C83A0; // 801C82CC
L_801C82D0:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[20]); // 801C82D0
  if (!crb(c,0)) { goto L_801C83AC; } // 801C82D4
  c->r[3]=R32(c->r[1]+0x00000048u); // 801C82D8
  c->r[4]=0u+0x00000002u; // 801C82DC
  c->r[5]=c->r[16]|c->r[16]; // 801C82E0
  c->lr=0x801C82E8u; f_80178BC4(c); // 801C82E4
  c->r[22]=c->r[3]|c->r[3]; // 801C82E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C82EC
  if (crb(c,2)) { goto L_801C839C; } // 801C82F0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C82F4
  cmps(c,0,(int32_t)c->r[19],0); // 801C82F8
  if (crb(c,2)) { goto L_801C8328; } // 801C82FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[14]); // 801C8300
  if (crb(c,2)) { goto L_801C839C; } // 801C8304
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[31]); // 801C8308
  if (crb(c,2)) { goto L_801C839C; } // 801C830C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[30]); // 801C8310
  if (crb(c,2)) { goto L_801C839C; } // 801C8314
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[29]); // 801C8318
  if (crb(c,2)) { goto L_801C839C; } // 801C831C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 801C8320
  if (crb(c,2)) { goto L_801C839C; } // 801C8324
L_801C8328:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C8328
  if (crb(c,2)) { goto L_801C8358; } // 801C832C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 801C8330
  if (crb(c,2)) { goto L_801C839C; } // 801C8334
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[26]); // 801C8338
  if (crb(c,2)) { goto L_801C839C; } // 801C833C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[25]); // 801C8340
  if (crb(c,2)) { goto L_801C839C; } // 801C8344
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[24]); // 801C8348
  if (crb(c,2)) { goto L_801C839C; } // 801C834C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[23]); // 801C8350
  if (crb(c,2)) { goto L_801C839C; } // 801C8354
L_801C8358:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8358
  c->lr=0x801C8360u; f_801C7D70(c); // 801C835C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8360
  if (!crb(c,2)) { goto L_801C8390; } // 801C8364
  c->r[3]=c->r[21]|c->r[21]; // 801C8368
  c->r[4]=0u+0x00000000u; // 801C836C
  c->r[5]=0u+0x00000000u; // 801C8370
  c->lr=0x801C8378u; f_80178D48(c); // 801C8374
  c->r[4]=c->r[3]|c->r[3]; // 801C8378
  c->r[3]=R32(c->r[1]+0x00000054u); // 801C837C
  c->r[5]=c->r[22]|c->r[22]; // 801C8380
  c->lr=0x801C8388u; f_8008E59C(c); // 801C8384
  c->r[17]=c->r[17]+0x00000001u; // 801C8388
  goto L_801C839C; // 801C838C
L_801C8390:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8390
  c->r[4]=R32(c->r[1]+0x00000050u); // 801C8394
  c->lr=0x801C839Cu; f_801C7E14(c); // 801C8398
L_801C839C:;
  c->r[16]=c->r[16]+0x00000001u; // 801C839C
L_801C83A0:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C83A0
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 801C83A4
  if (crb(c,0)) { IRQCHK(c); goto L_801C82D0; } // 801C83A8
L_801C83AC:;
  cmps(c,0,(int32_t)c->r[20],5); // 801C83AC
  if (crb(c,0)) { goto L_801C8524; } // 801C83B0
  c->r[17]=0u+0x00000000u; // 801C83B4
  c->lr=0x801C83BCu; f_8007B524(c); // 801C83B8
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C83BC
  c->lr=0x801C83C4u; f_800A352C(c); // 801C83C0
  c->r[20]=c->r[3]|c->r[3]; // 801C83C4
  c->r[16]=0u+0x00000000u; // 801C83C8
  c->r[3]=0u+0x80430000u; // 801C83CC
  c->r[18]=c->r[3]+0x00000C40u; // 801C83D0
  goto L_801C8458; // 801C83D4
L_801C83D8:;
  c->r[3]=c->r[21]|c->r[21]; // 801C83D8
  c->r[4]=0u+0x00000002u; // 801C83DC
  c->r[5]=c->r[16]|c->r[16]; // 801C83E0
  c->lr=0x801C83E8u; f_80178BC4(c); // 801C83E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C83E8
  if (crb(c,2)) { goto L_801C8454; } // 801C83EC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C83F0
  c->r[0]=R32(c->r[18]+0x00000000u); // 801C83F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C83F8
  if (!crb(c,2)) { goto L_801C8408; } // 801C83FC
  c->r[17]=c->r[17]+0x00000001u; // 801C8400
  goto L_801C8454; // 801C8404
L_801C8408:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801C8408
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C840C
  if (!crb(c,2)) { goto L_801C841C; } // 801C8410
  c->r[17]=c->r[17]+0x00000001u; // 801C8414
  goto L_801C8454; // 801C8418
L_801C841C:;
  c->r[0]=R32(c->r[18]+0x00000008u); // 801C841C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8420
  if (!crb(c,2)) { goto L_801C8430; } // 801C8424
  c->r[17]=c->r[17]+0x00000001u; // 801C8428
  goto L_801C8454; // 801C842C
L_801C8430:;
  c->r[0]=R32(c->r[18]+0x0000000Cu); // 801C8430
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8434
  if (!crb(c,2)) { goto L_801C8444; } // 801C8438
  c->r[17]=c->r[17]+0x00000001u; // 801C843C
  goto L_801C8454; // 801C8440
L_801C8444:;
  c->r[0]=R32(c->r[18]+0x00000010u); // 801C8444
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8448
  if (!crb(c,2)) { goto L_801C8454; } // 801C844C
  c->r[17]=c->r[17]+0x00000001u; // 801C8450
L_801C8454:;
  c->r[16]=c->r[16]+0x00000001u; // 801C8454
L_801C8458:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[20]); // 801C8458
  if (crb(c,0)) { IRQCHK(c); goto L_801C83D8; } // 801C845C
  cmps(c,0,(int32_t)c->r[17],5); // 801C8460
  if (crb(c,0)) { goto L_801C8524; } // 801C8464
  c->r[18]=0u+0x00000000u; // 801C8468
  c->r[17]=0u+0x00000000u; // 801C846C
  c->r[16]=c->r[1]+0x00000034u; // 801C8470
  goto L_801C84D0; // 801C8474
L_801C8478:;
  c->r[3]=c->r[21]|c->r[21]; // 801C8478
  c->r[4]=0u+0x00000002u; // 801C847C
  c->r[5]=c->r[17]|c->r[17]; // 801C8480
  c->lr=0x801C8488u; f_80178BC4(c); // 801C8484
  cmps(c,0,(int32_t)c->r[3],0); // 801C8488
  if (crb(c,2)) { goto L_801C84CC; } // 801C848C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8490
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[14]); // 801C8494
  if (crb(c,2)) { goto L_801C84BC; } // 801C8498
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801C849C
  if (crb(c,2)) { goto L_801C84BC; } // 801C84A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801C84A4
  if (crb(c,2)) { goto L_801C84BC; } // 801C84A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801C84AC
  if (crb(c,2)) { goto L_801C84BC; } // 801C84B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801C84B4
  if (!crb(c,2)) { goto L_801C84C8; } // 801C84B8
L_801C84BC:;
  W32(c->r[16]+0x00000000u,c->r[18]); // 801C84BC
  c->r[16]=c->r[16]+0x00000004u; // 801C84C0
  goto L_801C84CC; // 801C84C4
L_801C84C8:;
  c->r[18]=c->r[18]+0x00000001u; // 801C84C8
L_801C84CC:;
  c->r[17]=c->r[17]+0x00000001u; // 801C84CC
L_801C84D0:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[20]); // 801C84D0
  if (crb(c,0)) { IRQCHK(c); goto L_801C8478; } // 801C84D4
  c->r[16]=0u+0x00000000u; // 801C84D8
  c->r[14]=c->r[1]+0x00000034u; // 801C84DC
L_801C84E0:;
  c->r[3]=c->r[15]|c->r[15]; // 801C84E0
  c->r[4]=R32(c->r[14]+0x00000000u); // 801C84E4
  c->lr=0x801C84ECu; f_801C8E28(c); // 801C84E8
  c->r[14]=c->r[14]+0x00000004u; // 801C84EC
  c->r[16]=c->r[16]+0x00000001u; // 801C84F0
  cmps(c,0,(int32_t)c->r[16],5); // 801C84F4
  if (crb(c,0)) { IRQCHK(c); goto L_801C84E0; } // 801C84F8
  c->r[0]=0u+0x00000002u; // 801C84FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C8500
  c->r[0]=0u+0x0000002Bu; // 801C8504
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8508
  c->r[3]=c->r[15]|c->r[15]; // 801C850C
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8510
  c->r[5]=0u+0x00000000u; // 801C8514
  c->r[6]=0u+0x00000000u; // 801C8518
  c->r[7]=c->r[1]+0x00000010u; // 801C851C
  c->lr=0x801C8524u; f_801C79CC(c); // 801C8520
L_801C8524:;
  cmps(c,0,(int32_t)c->r[20],5); // 801C8524
  if (crb(c,0)) { goto L_801C869C; } // 801C8528
  c->r[18]=0u+0x00000000u; // 801C852C
  c->lr=0x801C8534u; f_8007B524(c); // 801C8530
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8534
  c->lr=0x801C853Cu; f_800A352C(c); // 801C8538
  c->r[14]=c->r[3]|c->r[3]; // 801C853C
  c->r[17]=0u+0x00000000u; // 801C8540
  c->r[3]=0u+0x80430000u; // 801C8544
  c->r[16]=c->r[3]+0x00000C54u; // 801C8548
  goto L_801C85D0; // 801C854C
L_801C8550:;
  c->r[3]=c->r[21]|c->r[21]; // 801C8550
  c->r[4]=0u+0x00000002u; // 801C8554
  c->r[5]=c->r[17]|c->r[17]; // 801C8558
  c->lr=0x801C8560u; f_80178BC4(c); // 801C855C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8560
  if (crb(c,2)) { goto L_801C85CC; } // 801C8564
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C8568
  c->r[0]=R32(c->r[16]+0x00000000u); // 801C856C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8570
  if (!crb(c,2)) { goto L_801C8580; } // 801C8574
  c->r[18]=c->r[18]+0x00000001u; // 801C8578
  goto L_801C85CC; // 801C857C
L_801C8580:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 801C8580
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8584
  if (!crb(c,2)) { goto L_801C8594; } // 801C8588
  c->r[18]=c->r[18]+0x00000001u; // 801C858C
  goto L_801C85CC; // 801C8590
L_801C8594:;
  c->r[0]=R32(c->r[16]+0x00000008u); // 801C8594
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8598
  if (!crb(c,2)) { goto L_801C85A8; } // 801C859C
  c->r[18]=c->r[18]+0x00000001u; // 801C85A0
  goto L_801C85CC; // 801C85A4
L_801C85A8:;
  c->r[0]=R32(c->r[16]+0x0000000Cu); // 801C85A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C85AC
  if (!crb(c,2)) { goto L_801C85BC; } // 801C85B0
  c->r[18]=c->r[18]+0x00000001u; // 801C85B4
  goto L_801C85CC; // 801C85B8
L_801C85BC:;
  c->r[0]=R32(c->r[16]+0x00000010u); // 801C85BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C85C0
  if (!crb(c,2)) { goto L_801C85CC; } // 801C85C4
  c->r[18]=c->r[18]+0x00000001u; // 801C85C8
L_801C85CC:;
  c->r[17]=c->r[17]+0x00000001u; // 801C85CC
L_801C85D0:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[14]); // 801C85D0
  if (crb(c,0)) { IRQCHK(c); goto L_801C8550; } // 801C85D4
  cmps(c,0,(int32_t)c->r[18],5); // 801C85D8
  if (crb(c,0)) { goto L_801C869C; } // 801C85DC
  c->r[18]=0u+0x00000000u; // 801C85E0
  c->r[17]=0u+0x00000000u; // 801C85E4
  c->r[16]=c->r[1]+0x00000020u; // 801C85E8
  goto L_801C8648; // 801C85EC
L_801C85F0:;
  c->r[3]=c->r[21]|c->r[21]; // 801C85F0
  c->r[4]=0u+0x00000002u; // 801C85F4
  c->r[5]=c->r[17]|c->r[17]; // 801C85F8
  c->lr=0x801C8600u; f_80178BC4(c); // 801C85FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C8600
  if (crb(c,2)) { goto L_801C8644; } // 801C8604
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8608
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 801C860C
  if (crb(c,2)) { goto L_801C8634; } // 801C8610
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 801C8614
  if (crb(c,2)) { goto L_801C8634; } // 801C8618
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 801C861C
  if (crb(c,2)) { goto L_801C8634; } // 801C8620
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[24]); // 801C8624
  if (crb(c,2)) { goto L_801C8634; } // 801C8628
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[23]); // 801C862C
  if (!crb(c,2)) { goto L_801C8640; } // 801C8630
L_801C8634:;
  W32(c->r[16]+0x00000000u,c->r[18]); // 801C8634
  c->r[16]=c->r[16]+0x00000004u; // 801C8638
  goto L_801C8644; // 801C863C
L_801C8640:;
  c->r[18]=c->r[18]+0x00000001u; // 801C8640
L_801C8644:;
  c->r[17]=c->r[17]+0x00000001u; // 801C8644
L_801C8648:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[14]); // 801C8648
  if (crb(c,0)) { IRQCHK(c); goto L_801C85F0; } // 801C864C
  c->r[16]=0u+0x00000000u; // 801C8650
  c->r[14]=c->r[1]+0x00000020u; // 801C8654
L_801C8658:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8658
  c->r[4]=R32(c->r[14]+0x00000000u); // 801C865C
  c->lr=0x801C8664u; f_801C8E28(c); // 801C8660
  c->r[14]=c->r[14]+0x00000004u; // 801C8664
  c->r[16]=c->r[16]+0x00000001u; // 801C8668
  cmps(c,0,(int32_t)c->r[16],5); // 801C866C
  if (crb(c,0)) { IRQCHK(c); goto L_801C8658; } // 801C8670
  c->r[0]=0u+0x00000002u; // 801C8674
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C8678
  c->r[0]=0u+0x0000002Cu; // 801C867C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C8680
  c->r[3]=c->r[15]|c->r[15]; // 801C8684
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8688
  c->r[5]=0u+0x00000000u; // 801C868C
  c->r[6]=0u+0x00000000u; // 801C8690
  c->r[7]=c->r[1]+0x00000008u; // 801C8694
  c->lr=0x801C869Cu; f_801C79CC(c); // 801C8698
L_801C869C:;
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 801C869C
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C86A0
  c->lr=0x801C86A8u; f_80179984(c); // 801C86A4
  c->r[14]=c->r[3]|c->r[3]; // 801C86A8
  c->lr=0x801C86B0u; f_80074E68(c); // 801C86AC
  c->r[4]=c->r[14]|c->r[14]; // 801C86B0
  c->lr=0x801C86B8u; f_8017A3C0(c); // 801C86B4
  c->r[0]=R32(c->r[1]+0x00000060u); // 801C86B8
  cmps(c,0,(int32_t)c->r[0],0); // 801C86BC
  if (crb(c,2)) { goto L_801C86D4; } // 801C86C0
  c->lr=0x801C86C8u; f_8007B524(c); // 801C86C4
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C86C8
  c->r[5]=0u+0x00000001u; // 801C86CC
  c->lr=0x801C86D4u; f_800A30DC(c); // 801C86D0
L_801C86D4:;
  c->r[11]=c->r[1]+0x000000B0u; // 801C86D4
  c->lr=0x801C86DCu; f_802F0DE0(c); // 801C86D8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801C86DC
  c->lr=c->r[0]; // 801C86E0
  c->r[1]=c->r[1]+0x000000B0u; // 801C86E4
  return; // 801C86E8
}

// fn_801C86EC
void f_801C86EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C86EC
  c->r[0]=c->lr; // 801C86F0
  W32(c->r[1]+0x00000144u,c->r[0]); // 801C86F4
  c->r[11]=c->r[1]+0x00000140u; // 801C86F8
  c->lr=0x801C8700u; f_802F0D94(c); // 801C86FC
  c->r[15]=c->r[3]|c->r[3]; // 801C8700
  c->lr=0x801C8708u; f_8007B524(c); // 801C8704
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8708
  c->lr=0x801C8710u; f_800A24C4(c); // 801C870C
  c->r[14]=c->r[3]|c->r[3]; // 801C8710
  c->lr=0x801C8718u; f_8007B524(c); // 801C8714
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C8718
  c->lr=0x801C8720u; f_800A24C4(c); // 801C871C
  W32(c->r[1]+0x000000E4u,c->r[3]); // 801C8720
  c->r[3]=c->r[14]|c->r[14]; // 801C8724
  c->lr=0x801C872Cu; f_80089E24(c); // 801C8728
  c->r[14]=c->r[3]|c->r[3]; // 801C872C
  c->r[3]=R32(c->r[1]+0x000000E4u); // 801C8730
  c->lr=0x801C8738u; f_80089E24(c); // 801C8734
  W32(c->r[1]+0x000000E0u,c->r[3]); // 801C8738
  c->r[3]=c->r[1]+0x00000048u; // 801C873C
  c->lr=0x801C8744u; f_8008A590(c); // 801C8740
  c->r[3]=R32(c->r[15]+0x00000020u); // 801C8744
  c->r[4]=R32(c->r[15]+0x00000024u); // 801C8748
  c->lr=0x801C8750u; f_80179984(c); // 801C874C
  c->r[20]=c->r[3]|c->r[3]; // 801C8750
  c->r[3]=c->r[1]+0x00000048u; // 801C8754
  c->r[4]=0u+0x000001F8u; // 801C8758
  c->lr=0x801C8760u; f_80178974(c); // 801C875C
  c->r[0]=R32(c->r[14]+0x00000000u); // 801C8760
  W32(c->r[1]+0x00000048u,c->r[0]); // 801C8764
  c->r[3]=c->r[20]|c->r[20]; // 801C8768
  c->r[4]=c->r[1]+0x00000048u; // 801C876C
  c->r[5]=0u+0x00000001u; // 801C8770
  c->lr=0x801C8778u; f_80178F64(c); // 801C8774
  c->r[3]=c->r[20]|c->r[20]; // 801C8778
  c->lr=0x801C8780u; f_80089E24(c); // 801C877C
  W32(c->r[1]+0x000000DCu,c->r[3]); // 801C8780
  c->r[3]=c->r[15]|c->r[15]; // 801C8784
  c->lr=0x801C878Cu; f_801C9088(c); // 801C8788
  cmps(c,0,(int32_t)c->r[3],0); // 801C878C
  if (!crb(c,2)) { goto L_801C87F8; } // 801C8790
  c->lr=0x801C8798u; f_8007B524(c); // 801C8794
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8798
  c->lr=0x801C87A0u; f_800A39E4(c); // 801C879C
  c->r[16]=c->r[3]|c->r[3]; // 801C87A0
  c->lr=0x801C87A8u; f_8007B524(c); // 801C87A4
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C87A8
  c->lr=0x801C87B0u; f_800A39E4(c); // 801C87AC
  c->r[16]=c->r[16]+c->r[3]; // 801C87B0
  c->lr=0x801C87B8u; f_8007B524(c); // 801C87B4
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C87B8
  c->lr=0x801C87C0u; f_800A34E4(c); // 801C87BC
  cmps(c,0,(int32_t)c->r[16],-99); // 801C87C0
  if (!crb(c,0)) { goto L_801C87CC; } // 801C87C4
  c->r[16]=0u+0xFFFFFF9Du; // 801C87C8
L_801C87CC:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[3]); // 801C87CC
  if (crb(c,0)) { goto L_801C87D8; } // 801C87D0
  c->r[16]=c->r[3]|c->r[3]; // 801C87D4
L_801C87D8:;
  c->r[0]=0u+0x00000001u; // 801C87D8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C87DC
  W32(c->r[1]+0x0000001Cu,c->r[16]); // 801C87E0
  c->r[3]=c->r[20]|c->r[20]; // 801C87E4
  c->r[4]=0u+0x0000000Fu; // 801C87E8
  c->r[5]=c->r[1]+0x00000018u; // 801C87EC
  c->lr=0x801C87F4u; f_8008E59C(c); // 801C87F0
  goto L_801C8820; // 801C87F4
L_801C87F8:;
  c->lr=0x801C87FCu; f_8007B524(c); // 801C87F8
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C87FC
  c->lr=0x801C8804u; f_800A39E4(c); // 801C8800
  c->r[0]=0u+0x00000001u; // 801C8804
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C8808
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801C880C
  c->r[3]=c->r[20]|c->r[20]; // 801C8810
  c->r[4]=0u+0x0000000Fu; // 801C8814
  c->r[5]=c->r[1]+0x00000018u; // 801C8818
  c->lr=0x801C8820u; f_8008E59C(c); // 801C881C
L_801C8820:;
  c->r[19]=0u+0x00000000u; // 801C8820
  c->r[18]=0u+0x00000000u; // 801C8824
  c->lr=0x801C882Cu; f_8007B524(c); // 801C8828
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C882C
  c->lr=0x801C8834u; f_800A352C(c); // 801C8830
  c->r[17]=c->r[3]|c->r[3]; // 801C8834
  c->lr=0x801C883Cu; f_8007B524(c); // 801C8838
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C883C
  c->lr=0x801C8844u; f_800A3574(c); // 801C8840
  c->r[21]=c->r[3]|c->r[3]; // 801C8844
  c->r[16]=0u+0x00000000u; // 801C8848
  c->r[22]=0u+0x00000000u; // 801C884C
  goto L_801C888C; // 801C8850
L_801C8854:;
  c->r[3]=c->r[14]|c->r[14]; // 801C8854
  c->r[4]=0u+0x00000002u; // 801C8858
  c->r[5]=c->r[22]|c->r[22]; // 801C885C
  c->lr=0x801C8864u; f_80178BC4(c); // 801C8860
  cmps(c,0,(int32_t)c->r[3],0); // 801C8864
  if (crb(c,2)) { goto L_801C8888; } // 801C8868
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C886C
  cmps(c,0,(int32_t)c->r[0],43); // 801C8870
  if (!crb(c,2)) { goto L_801C887C; } // 801C8874
  c->r[19]=0u+0x00000001u; // 801C8878
L_801C887C:;
  cmps(c,0,(int32_t)c->r[0],44); // 801C887C
  if (!crb(c,2)) { goto L_801C8888; } // 801C8880
  c->r[18]=0u+0x00000001u; // 801C8884
L_801C8888:;
  c->r[22]=c->r[22]+0x00000001u; // 801C8888
L_801C888C:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[21]); // 801C888C
  if (crb(c,0)) { IRQCHK(c); goto L_801C8854; } // 801C8890
  c->lr=0x801C8898u; f_8007B524(c); // 801C8894
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C8898
  c->lr=0x801C88A0u; f_800A3574(c); // 801C889C
  c->r[21]=c->r[3]|c->r[3]; // 801C88A0
  c->r[22]=0u+0x00000000u; // 801C88A4
  goto L_801C88E4; // 801C88A8
L_801C88AC:;
  c->r[3]=R32(c->r[1]+0x000000E0u); // 801C88AC
  c->r[4]=0u+0x00000002u; // 801C88B0
  c->r[5]=c->r[22]|c->r[22]; // 801C88B4
  c->lr=0x801C88BCu; f_80178BC4(c); // 801C88B8
  cmps(c,0,(int32_t)c->r[3],0); // 801C88BC
  if (crb(c,2)) { goto L_801C88E0; } // 801C88C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C88C4
  cmps(c,0,(int32_t)c->r[0],43); // 801C88C8
  if (!crb(c,2)) { goto L_801C88D4; } // 801C88CC
  c->r[19]=0u+0x00000001u; // 801C88D0
L_801C88D4:;
  cmps(c,0,(int32_t)c->r[0],44); // 801C88D4
  if (!crb(c,2)) { goto L_801C88E0; } // 801C88D8
  c->r[18]=0u+0x00000001u; // 801C88DC
L_801C88E0:;
  c->r[22]=c->r[22]+0x00000001u; // 801C88E0
L_801C88E4:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[21]); // 801C88E4
  if (crb(c,0)) { IRQCHK(c); goto L_801C88AC; } // 801C88E8
  c->lr=0x801C88F0u; f_8007B524(c); // 801C88EC
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C88F0
  c->lr=0x801C88F8u; f_800A3574(c); // 801C88F4
  W32(c->r[1]+0x000000E8u,c->r[3]); // 801C88F8
  c->r[21]=0u+0x00000000u; // 801C88FC
  c->r[3]=0u+0x80430000u; // 801C8900
  c->r[31]=R32(c->r[3]+0x00000C40u); // 801C8904
  c->r[3]=c->r[3]+0x00000C40u; // 801C8908
  c->r[30]=R32(c->r[3]+0x00000004u); // 801C890C
  c->r[29]=R32(c->r[3]+0x00000008u); // 801C8910
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 801C8914
  c->r[27]=R32(c->r[3]+0x00000010u); // 801C8918
  c->r[3]=0u+0x80430000u; // 801C891C
  c->r[26]=R32(c->r[3]+0x00000C54u); // 801C8920
  c->r[3]=c->r[3]+0x00000C54u; // 801C8924
  c->r[25]=R32(c->r[3]+0x00000004u); // 801C8928
  c->r[24]=R32(c->r[3]+0x00000008u); // 801C892C
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 801C8930
  c->r[22]=R32(c->r[3]+0x00000010u); // 801C8934
  goto L_801C89D0; // 801C8938
L_801C893C:;
  c->r[3]=c->r[14]|c->r[14]; // 801C893C
  c->r[4]=0u+0x00000002u; // 801C8940
  c->r[5]=c->r[21]|c->r[21]; // 801C8944
  c->lr=0x801C894Cu; f_80178BC4(c); // 801C8948
  c->r[5]=c->r[3]|c->r[3]; // 801C894C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8950
  if (crb(c,2)) { goto L_801C89CC; } // 801C8954
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8958
  cmps(c,0,(int32_t)c->r[19],0); // 801C895C
  if (crb(c,2)) { goto L_801C898C; } // 801C8960
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801C8964
  if (crb(c,2)) { goto L_801C89CC; } // 801C8968
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801C896C
  if (crb(c,2)) { goto L_801C89CC; } // 801C8970
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801C8974
  if (crb(c,2)) { goto L_801C89CC; } // 801C8978
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801C897C
  if (crb(c,2)) { goto L_801C89CC; } // 801C8980
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 801C8984
  if (crb(c,2)) { goto L_801C89CC; } // 801C8988
L_801C898C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C898C
  if (crb(c,2)) { goto L_801C89BC; } // 801C8990
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 801C8994
  if (crb(c,2)) { goto L_801C89CC; } // 801C8998
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 801C899C
  if (crb(c,2)) { goto L_801C89CC; } // 801C89A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[24]); // 801C89A4
  if (crb(c,2)) { goto L_801C89CC; } // 801C89A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[23]); // 801C89AC
  if (crb(c,2)) { goto L_801C89CC; } // 801C89B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 801C89B4
  if (crb(c,2)) { goto L_801C89CC; } // 801C89B8
L_801C89BC:;
  c->r[3]=c->r[20]|c->r[20]; // 801C89BC
  c->r[4]=c->r[16]|c->r[16]; // 801C89C0
  c->lr=0x801C89C8u; f_8008E59C(c); // 801C89C4
  c->r[16]=c->r[16]+0x00000001u; // 801C89C8
L_801C89CC:;
  c->r[21]=c->r[21]+0x00000001u; // 801C89CC
L_801C89D0:;
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801C89D0
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[0]); // 801C89D4
  if (crb(c,0)) { IRQCHK(c); goto L_801C893C; } // 801C89D8
  c->lr=0x801C89E0u; f_8007B524(c); // 801C89DC
  c->r[4]=R32(c->r[15]+0x00000004u); // 801C89E0
  c->lr=0x801C89E8u; f_800A3574(c); // 801C89E4
  W32(c->r[1]+0x000000ECu,c->r[3]); // 801C89E8
  c->r[14]=0u+0x00000000u; // 801C89EC
  goto L_801C8AB4; // 801C89F0
L_801C89F4:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[17]); // 801C89F4
  if (!crb(c,0)) { goto L_801C8AC0; } // 801C89F8
  c->r[3]=R32(c->r[1]+0x000000E0u); // 801C89FC
  c->r[4]=0u+0x00000002u; // 801C8A00
  c->r[5]=c->r[14]|c->r[14]; // 801C8A04
  c->lr=0x801C8A0Cu; f_80178BC4(c); // 801C8A08
  c->r[21]=c->r[3]|c->r[3]; // 801C8A0C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A10
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A14
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C8A18
  cmps(c,0,(int32_t)c->r[19],0); // 801C8A1C
  if (crb(c,2)) { goto L_801C8A4C; } // 801C8A20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[31]); // 801C8A24
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A28
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[30]); // 801C8A2C
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[29]); // 801C8A34
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 801C8A3C
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A40
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 801C8A44
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A48
L_801C8A4C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C8A4C
  if (crb(c,2)) { goto L_801C8A7C; } // 801C8A50
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[26]); // 801C8A54
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[25]); // 801C8A5C
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A60
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[24]); // 801C8A64
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A68
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[23]); // 801C8A6C
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A70
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[22]); // 801C8A74
  if (crb(c,2)) { goto L_801C8AB0; } // 801C8A78
L_801C8A7C:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8A7C
  c->lr=0x801C8A84u; f_801C7D70(c); // 801C8A80
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A84
  if (!crb(c,2)) { goto L_801C8AA4; } // 801C8A88
  c->r[3]=c->r[20]|c->r[20]; // 801C8A8C
  c->r[4]=c->r[16]|c->r[16]; // 801C8A90
  c->r[5]=c->r[21]|c->r[21]; // 801C8A94
  c->lr=0x801C8A9Cu; f_8008E59C(c); // 801C8A98
  c->r[16]=c->r[16]+0x00000001u; // 801C8A9C
  goto L_801C8AB0; // 801C8AA0
L_801C8AA4:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8AA4
  c->r[4]=R32(c->r[1]+0x000000E4u); // 801C8AA8
  c->lr=0x801C8AB0u; f_801C7E14(c); // 801C8AAC
L_801C8AB0:;
  c->r[14]=c->r[14]+0x00000001u; // 801C8AB0
L_801C8AB4:;
  c->r[0]=R32(c->r[1]+0x000000ECu); // 801C8AB4
  cmps(c,0,(int32_t)c->r[14],(int32_t)c->r[0]); // 801C8AB8
  if (crb(c,0)) { IRQCHK(c); goto L_801C89F4; } // 801C8ABC
L_801C8AC0:;
  cmps(c,0,(int32_t)c->r[17],5); // 801C8AC0
  if (crb(c,0)) { goto L_801C8C60; } // 801C8AC4
  c->r[16]=0u+0x00000000u; // 801C8AC8
  c->lr=0x801C8AD0u; f_8007B524(c); // 801C8ACC
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8AD0
  c->lr=0x801C8AD8u; f_800A352C(c); // 801C8AD4
  c->r[17]=c->r[3]|c->r[3]; // 801C8AD8
  c->r[14]=0u+0x00000000u; // 801C8ADC
  c->r[3]=0u+0x80430000u; // 801C8AE0
  c->r[18]=c->r[3]+0x00000C40u; // 801C8AE4
  goto L_801C8B6C; // 801C8AE8
L_801C8AEC:;
  c->r[3]=R32(c->r[1]+0x000000DCu); // 801C8AEC
  c->r[4]=0u+0x00000002u; // 801C8AF0
  c->r[5]=c->r[14]|c->r[14]; // 801C8AF4
  c->lr=0x801C8AFCu; f_80178BC4(c); // 801C8AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801C8AFC
  if (crb(c,2)) { goto L_801C8B68; } // 801C8B00
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C8B04
  c->r[0]=R32(c->r[18]+0x00000000u); // 801C8B08
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8B0C
  if (!crb(c,2)) { goto L_801C8B1C; } // 801C8B10
  c->r[16]=c->r[16]+0x00000001u; // 801C8B14
  goto L_801C8B68; // 801C8B18
L_801C8B1C:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801C8B1C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8B20
  if (!crb(c,2)) { goto L_801C8B30; } // 801C8B24
  c->r[16]=c->r[16]+0x00000001u; // 801C8B28
  goto L_801C8B68; // 801C8B2C
L_801C8B30:;
  c->r[0]=R32(c->r[18]+0x00000008u); // 801C8B30
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8B34
  if (!crb(c,2)) { goto L_801C8B44; } // 801C8B38
  c->r[16]=c->r[16]+0x00000001u; // 801C8B3C
  goto L_801C8B68; // 801C8B40
L_801C8B44:;
  c->r[0]=R32(c->r[18]+0x0000000Cu); // 801C8B44
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8B48
  if (!crb(c,2)) { goto L_801C8B58; } // 801C8B4C
  c->r[16]=c->r[16]+0x00000001u; // 801C8B50
  goto L_801C8B68; // 801C8B54
L_801C8B58:;
  c->r[0]=R32(c->r[18]+0x00000010u); // 801C8B58
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8B5C
  if (!crb(c,2)) { goto L_801C8B68; } // 801C8B60
  c->r[16]=c->r[16]+0x00000001u; // 801C8B64
L_801C8B68:;
  c->r[14]=c->r[14]+0x00000001u; // 801C8B68
L_801C8B6C:;
  cmps(c,0,(int32_t)c->r[14],(int32_t)c->r[17]); // 801C8B6C
  if (crb(c,0)) { IRQCHK(c); goto L_801C8AEC; } // 801C8B70
  cmps(c,0,(int32_t)c->r[16],5); // 801C8B74
  if (crb(c,0)) { goto L_801C8C60; } // 801C8B78
  c->r[3]=c->r[20]|c->r[20]; // 801C8B7C
  c->lr=0x801C8B84u; f_80089E24(c); // 801C8B80
  c->r[14]=c->r[3]|c->r[3]; // 801C8B84
  c->r[18]=0u+0x00000000u; // 801C8B88
  c->r[16]=c->r[1]+0x00000034u; // 801C8B8C
  goto L_801C8BF4; // 801C8B90
L_801C8B94:;
  c->r[3]=c->r[14]|c->r[14]; // 801C8B94
  c->r[4]=0u+0x00000002u; // 801C8B98
  c->r[5]=c->r[18]|c->r[18]; // 801C8B9C
  c->lr=0x801C8BA4u; f_80178BC4(c); // 801C8BA0
  cmps(c,0,(int32_t)c->r[3],0); // 801C8BA4
  if (crb(c,2)) { goto L_801C8BF0; } // 801C8BA8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8BAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801C8BB0
  if (crb(c,2)) { goto L_801C8BD8; } // 801C8BB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801C8BB8
  if (crb(c,2)) { goto L_801C8BD8; } // 801C8BBC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801C8BC0
  if (crb(c,2)) { goto L_801C8BD8; } // 801C8BC4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801C8BC8
  if (crb(c,2)) { goto L_801C8BD8; } // 801C8BCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 801C8BD0
  if (!crb(c,2)) { goto L_801C8BF0; } // 801C8BD4
L_801C8BD8:;
  c->r[3]=c->r[14]|c->r[14]; // 801C8BD8
  c->r[4]=0u+0x00000002u; // 801C8BDC
  c->r[5]=c->r[18]|c->r[18]; // 801C8BE0
  c->lr=0x801C8BE8u; f_80178D48(c); // 801C8BE4
  W32(c->r[16]+0x00000000u,c->r[3]); // 801C8BE8
  c->r[16]=c->r[16]+0x00000004u; // 801C8BEC
L_801C8BF0:;
  c->r[18]=c->r[18]+0x00000001u; // 801C8BF0
L_801C8BF4:;
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[17]); // 801C8BF4
  if (crb(c,0)) { IRQCHK(c); goto L_801C8B94; } // 801C8BF8
  c->r[19]=0u+0x00000000u; // 801C8BFC
  c->r[18]=c->r[1]+0x00000034u; // 801C8C00
  c->r[16]=0u+0x00000000u; // 801C8C04
L_801C8C08:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 801C8C08
  W32(c->r[1]+0x00000014u,c->r[16]); // 801C8C0C
  c->r[3]=c->r[20]|c->r[20]; // 801C8C10
  c->r[4]=R32(c->r[18]+0x00000000u); // 801C8C14
  c->r[5]=c->r[1]+0x00000010u; // 801C8C18
  c->lr=0x801C8C20u; f_8008E59C(c); // 801C8C1C
  c->r[18]=c->r[18]+0x00000004u; // 801C8C20
  c->r[19]=c->r[19]+0x00000001u; // 801C8C24
  cmps(c,0,(int32_t)c->r[19],5); // 801C8C28
  if (crb(c,0)) { IRQCHK(c); goto L_801C8C08; } // 801C8C2C
  c->r[3]=c->r[14]|c->r[14]; // 801C8C30
  c->r[4]=0u+0x00000000u; // 801C8C34
  c->r[5]=c->r[17]+0xFFFFFFFFu; // 801C8C38
  c->lr=0x801C8C40u; f_80178D48(c); // 801C8C3C
  c->r[4]=c->r[3]|c->r[3]; // 801C8C40
  c->r[0]=0u+0x00000002u; // 801C8C44
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C8C48
  c->r[0]=0u+0x0000002Bu; // 801C8C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8C50
  c->r[3]=c->r[20]|c->r[20]; // 801C8C54
  c->r[5]=c->r[1]+0x00000010u; // 801C8C58
  c->lr=0x801C8C60u; f_8008E59C(c); // 801C8C5C
L_801C8C60:;
  cmps(c,0,(int32_t)c->r[17],5); // 801C8C60
  if (crb(c,0)) { goto L_801C8E00; } // 801C8C64
  c->r[18]=0u+0x00000000u; // 801C8C68
  c->lr=0x801C8C70u; f_8007B524(c); // 801C8C6C
  c->r[4]=R32(c->r[15]+0x00000000u); // 801C8C70
  c->lr=0x801C8C78u; f_800A352C(c); // 801C8C74
  c->r[16]=c->r[3]|c->r[3]; // 801C8C78
  c->r[17]=0u+0x00000000u; // 801C8C7C
  c->r[3]=0u+0x80430000u; // 801C8C80
  c->r[14]=c->r[3]+0x00000C54u; // 801C8C84
  goto L_801C8D0C; // 801C8C88
L_801C8C8C:;
  c->r[3]=R32(c->r[1]+0x000000DCu); // 801C8C8C
  c->r[4]=0u+0x00000002u; // 801C8C90
  c->r[5]=c->r[17]|c->r[17]; // 801C8C94
  c->lr=0x801C8C9Cu; f_80178BC4(c); // 801C8C98
  cmps(c,0,(int32_t)c->r[3],0); // 801C8C9C
  if (crb(c,2)) { goto L_801C8D08; } // 801C8CA0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C8CA4
  c->r[0]=R32(c->r[14]+0x00000000u); // 801C8CA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8CAC
  if (!crb(c,2)) { goto L_801C8CBC; } // 801C8CB0
  c->r[18]=c->r[18]+0x00000001u; // 801C8CB4
  goto L_801C8D08; // 801C8CB8
L_801C8CBC:;
  c->r[0]=R32(c->r[14]+0x00000004u); // 801C8CBC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8CC0
  if (!crb(c,2)) { goto L_801C8CD0; } // 801C8CC4
  c->r[18]=c->r[18]+0x00000001u; // 801C8CC8
  goto L_801C8D08; // 801C8CCC
L_801C8CD0:;
  c->r[0]=R32(c->r[14]+0x00000008u); // 801C8CD0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8CD4
  if (!crb(c,2)) { goto L_801C8CE4; } // 801C8CD8
  c->r[18]=c->r[18]+0x00000001u; // 801C8CDC
  goto L_801C8D08; // 801C8CE0
L_801C8CE4:;
  c->r[0]=R32(c->r[14]+0x0000000Cu); // 801C8CE4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8CE8
  if (!crb(c,2)) { goto L_801C8CF8; } // 801C8CEC
  c->r[18]=c->r[18]+0x00000001u; // 801C8CF0
  goto L_801C8D08; // 801C8CF4
L_801C8CF8:;
  c->r[0]=R32(c->r[14]+0x00000010u); // 801C8CF8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8CFC
  if (!crb(c,2)) { goto L_801C8D08; } // 801C8D00
  c->r[18]=c->r[18]+0x00000001u; // 801C8D04
L_801C8D08:;
  c->r[17]=c->r[17]+0x00000001u; // 801C8D08
L_801C8D0C:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[16]); // 801C8D0C
  if (crb(c,0)) { IRQCHK(c); goto L_801C8C8C; } // 801C8D10
  cmps(c,0,(int32_t)c->r[18],5); // 801C8D14
  if (crb(c,0)) { goto L_801C8E00; } // 801C8D18
  c->r[3]=c->r[20]|c->r[20]; // 801C8D1C
  c->lr=0x801C8D24u; f_80089E24(c); // 801C8D20
  c->r[19]=c->r[3]|c->r[3]; // 801C8D24
  c->r[17]=0u+0x00000000u; // 801C8D28
  c->r[14]=c->r[1]+0x00000020u; // 801C8D2C
  goto L_801C8D94; // 801C8D30
L_801C8D34:;
  c->r[3]=c->r[19]|c->r[19]; // 801C8D34
  c->r[4]=0u+0x00000002u; // 801C8D38
  c->r[5]=c->r[17]|c->r[17]; // 801C8D3C
  c->lr=0x801C8D44u; f_80178BC4(c); // 801C8D40
  cmps(c,0,(int32_t)c->r[3],0); // 801C8D44
  if (crb(c,2)) { goto L_801C8D90; } // 801C8D48
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C8D4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 801C8D50
  if (crb(c,2)) { goto L_801C8D78; } // 801C8D54
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 801C8D58
  if (crb(c,2)) { goto L_801C8D78; } // 801C8D5C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[24]); // 801C8D60
  if (crb(c,2)) { goto L_801C8D78; } // 801C8D64
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[23]); // 801C8D68
  if (crb(c,2)) { goto L_801C8D78; } // 801C8D6C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 801C8D70
  if (!crb(c,2)) { goto L_801C8D90; } // 801C8D74
L_801C8D78:;
  c->r[3]=c->r[19]|c->r[19]; // 801C8D78
  c->r[4]=0u+0x00000002u; // 801C8D7C
  c->r[5]=c->r[17]|c->r[17]; // 801C8D80
  c->lr=0x801C8D88u; f_80178D48(c); // 801C8D84
  W32(c->r[14]+0x00000000u,c->r[3]); // 801C8D88
  c->r[14]=c->r[14]+0x00000004u; // 801C8D8C
L_801C8D90:;
  c->r[17]=c->r[17]+0x00000001u; // 801C8D90
L_801C8D94:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[16]); // 801C8D94
  if (crb(c,0)) { IRQCHK(c); goto L_801C8D34; } // 801C8D98
  c->r[18]=0u+0x00000000u; // 801C8D9C
  c->r[17]=c->r[1]+0x00000020u; // 801C8DA0
  c->r[14]=0u+0x00000000u; // 801C8DA4
L_801C8DA8:;
  W32(c->r[1]+0x00000008u,c->r[14]); // 801C8DA8
  W32(c->r[1]+0x0000000Cu,c->r[14]); // 801C8DAC
  c->r[3]=c->r[20]|c->r[20]; // 801C8DB0
  c->r[4]=R32(c->r[17]+0x00000000u); // 801C8DB4
  c->r[5]=c->r[1]+0x00000008u; // 801C8DB8
  c->lr=0x801C8DC0u; f_8008E59C(c); // 801C8DBC
  c->r[17]=c->r[17]+0x00000004u; // 801C8DC0
  c->r[18]=c->r[18]+0x00000001u; // 801C8DC4
  cmps(c,0,(int32_t)c->r[18],5); // 801C8DC8
  if (crb(c,0)) { IRQCHK(c); goto L_801C8DA8; } // 801C8DCC
  c->r[3]=c->r[19]|c->r[19]; // 801C8DD0
  c->r[4]=0u+0x00000000u; // 801C8DD4
  c->r[5]=c->r[16]+0xFFFFFFFFu; // 801C8DD8
  c->lr=0x801C8DE0u; f_80178D48(c); // 801C8DDC
  c->r[4]=c->r[3]|c->r[3]; // 801C8DE0
  c->r[0]=0u+0x00000002u; // 801C8DE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C8DE8
  c->r[0]=0u+0x0000002Cu; // 801C8DEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C8DF0
  c->r[3]=c->r[20]|c->r[20]; // 801C8DF4
  c->r[5]=c->r[1]+0x00000008u; // 801C8DF8
  c->lr=0x801C8E00u; f_8008E59C(c); // 801C8DFC
L_801C8E00:;
  c->r[3]=R32(c->r[15]+0x00000020u); // 801C8E00
  c->r[4]=c->r[20]|c->r[20]; // 801C8E04
  c->lr=0x801C8E0Cu; f_80179868(c); // 801C8E08
  W32(c->r[15]+0x00000024u,c->r[3]); // 801C8E0C
  c->r[11]=c->r[1]+0x00000140u; // 801C8E10
  c->lr=0x801C8E18u; f_802F0DE0(c); // 801C8E14
  c->r[0]=R32(c->r[1]+0x00000144u); // 801C8E18
  c->lr=c->r[0]; // 801C8E1C
  c->r[1]=c->r[1]+0x00000140u; // 801C8E20
  return; // 801C8E24
}

// fn_801C8E28
void f_801C8E28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8E28
  c->r[0]=c->lr; // 801C8E2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8E30
  c->r[11]=c->r[1]+0x00000030u; // 801C8E34
  c->lr=0x801C8E3Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8E38
  c->r[27]=c->r[3]|c->r[3]; // 801C8E3C
  c->r[28]=c->r[4]|c->r[4]; // 801C8E40
  c->r[30]=0u+0x00000000u; // 801C8E44
  W32(c->r[1]+0x00000010u,c->r[30]); // 801C8E48
  W32(c->r[1]+0x00000014u,c->r[30]); // 801C8E4C
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C8E50
  c->r[5]=c->r[28]|c->r[28]; // 801C8E54
  c->r[6]=0u+0x00000002u; // 801C8E58
  c->r[7]=c->r[1]+0x00000010u; // 801C8E5C
  c->lr=0x801C8E64u; f_801C79CC(c); // 801C8E60
  c->lr=0x801C8E68u; f_8007B524(c); // 801C8E64
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C8E68
  c->lr=0x801C8E70u; f_800A352C(c); // 801C8E6C
  c->r[31]=c->r[3]|c->r[3]; // 801C8E70
  c->lr=0x801C8E78u; f_8007B524(c); // 801C8E74
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C8E78
  c->lr=0x801C8E80u; f_800A24C4(c); // 801C8E7C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8E80
  if (crb(c,2)) { goto L_801C8F04; } // 801C8E84
  c->lr=0x801C8E8Cu; f_80089E24(c); // 801C8E88
  c->r[29]=c->r[3]|c->r[3]; // 801C8E8C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8E90
  if (crb(c,2)) { goto L_801C8F04; } // 801C8E94
  goto L_801C8EFC; // 801C8E98
L_801C8E9C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8E9C
  c->r[4]=0u+0x00000002u; // 801C8EA0
  c->r[5]=c->r[28]|c->r[28]; // 801C8EA4
  c->lr=0x801C8EACu; f_80178BC4(c); // 801C8EA8
  c->r[4]=c->r[3]|c->r[3]; // 801C8EAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C8EB0
  if (crb(c,2)) { goto L_801C8F04; } // 801C8EB4
  c->r[3]=c->r[1]+0x00000008u; // 801C8EB8
  c->lr=0x801C8EC0u; f_8008E5B4(c); // 801C8EBC
  W32(c->r[1]+0x00000010u,c->r[30]); // 801C8EC0
  W32(c->r[1]+0x00000014u,c->r[30]); // 801C8EC4
  c->r[3]=c->r[27]|c->r[27]; // 801C8EC8
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C8ECC
  c->r[5]=c->r[28]|c->r[28]; // 801C8ED0
  c->r[6]=0u+0x00000002u; // 801C8ED4
  c->r[7]=c->r[1]+0x00000010u; // 801C8ED8
  c->lr=0x801C8EE0u; f_801C79CC(c); // 801C8EDC
  c->r[3]=c->r[27]|c->r[27]; // 801C8EE0
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C8EE4
  c->r[5]=0u+0x00000000u; // 801C8EE8
  c->r[6]=0u+0x00000000u; // 801C8EEC
  c->r[7]=c->r[1]+0x00000008u; // 801C8EF0
  c->lr=0x801C8EF8u; f_801C79CC(c); // 801C8EF4
  c->r[28]=c->r[28]+0x00000001u; // 801C8EF8
L_801C8EFC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 801C8EFC
  if (crb(c,0)) { IRQCHK(c); goto L_801C8E9C; } // 801C8F00
L_801C8F04:;
  c->r[11]=c->r[1]+0x00000030u; // 801C8F04
  c->lr=0x801C8F0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8F08
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C8F0C
  c->lr=c->r[0]; // 801C8F10
  c->r[1]=c->r[1]+0x00000030u; // 801C8F14
  return; // 801C8F18
}

// fn_801C8F1C
void f_801C8F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8F1C
  c->r[0]=c->lr; // 801C8F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8F28
  c->r[31]=c->r[3]|c->r[3]; // 801C8F2C
  c->lr=0x801C8F34u; f_801C9088(c); // 801C8F30
  cmps(c,0,(int32_t)c->r[3],0); // 801C8F34
  if (!crb(c,2)) { goto L_801C8F44; } // 801C8F38
  c->r[3]=c->r[31]|c->r[31]; // 801C8F3C
  c->lr=0x801C8F44u; f_801C7AC0(c); // 801C8F40
L_801C8F44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8F44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8F48
  c->lr=c->r[0]; // 801C8F4C
  c->r[1]=c->r[1]+0x00000010u; // 801C8F50
  return; // 801C8F54
}

// fn_801C8F58
void f_801C8F58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8F58
  c->r[0]=c->lr; // 801C8F5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8F60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8F64
  c->r[31]=c->r[3]|c->r[3]; // 801C8F68
  c->lr=0x801C8F70u; f_801C9088(c); // 801C8F6C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8F70
  if (crb(c,2)) { goto L_801C8F80; } // 801C8F74
  c->r[3]=0u+0x00000000u; // 801C8F78
  goto L_801C8FC4; // 801C8F7C
L_801C8F80:;
  c->r[3]=c->r[31]|c->r[31]; // 801C8F80
  c->lr=0x801C8F88u; f_801C8FFC(c); // 801C8F84
  cmps(c,0,(int32_t)c->r[3],0); // 801C8F88
  if (!crb(c,2)) { goto L_801C8F98; } // 801C8F8C
  c->r[3]=0u+0x00000000u; // 801C8F90
  goto L_801C8FC4; // 801C8F94
L_801C8F98:;
  c->r[3]=c->r[31]|c->r[31]; // 801C8F98
  c->lr=0x801C8FA0u; f_801C9110(c); // 801C8F9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8FA0
  if (crb(c,2)) { goto L_801C8FB8; } // 801C8FA4
  c->r[3]=c->r[31]|c->r[31]; // 801C8FA8
  c->lr=0x801C8FB0u; f_801C7BA0(c); // 801C8FAC
  c->r[3]=0u+0x00000001u; // 801C8FB0
  goto L_801C8FC4; // 801C8FB4
L_801C8FB8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C8FB8
  c->lr=0x801C8FC0u; f_801C7C90(c); // 801C8FBC
  c->r[3]=0u+0x00000000u; // 801C8FC0
L_801C8FC4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8FC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8FC8
  c->lr=c->r[0]; // 801C8FCC
  c->r[1]=c->r[1]+0x00000010u; // 801C8FD0
  return; // 801C8FD4
}

// fn_801C8FD8
void f_801C8FD8(Ctx* __restrict c) {
  f_801C7F68(c); return; // 801C8FD8
}

// fn_801C8FDC
void f_801C8FDC(Ctx* __restrict c) {
  f_801C86EC(c); return; // 801C8FDC
}

// fn_801C8FE0
void f_801C8FE0(Ctx* __restrict c) {
  f_801C8E28(c); return; // 801C8FE0
}

// fn_801C8FE4
void f_801C8FE4(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C8FE4
  return; // 801C8FE8
}

// fn_801C8FEC
void f_801C8FEC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C8FEC
  return; // 801C8FF0
}

// fn_801C8FF4
void f_801C8FF4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C8FF4
  return; // 801C8FF8
}

// fn_801C8FFC
void f_801C8FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8FFC
  c->r[0]=c->lr; // 801C9000
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9004
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9008
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C900C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9010
  c->r[29]=c->r[3]|c->r[3]; // 801C9014
  c->lr=0x801C901Cu; f_8007B524(c); // 801C9018
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C901C
  c->lr=0x801C9024u; f_800A39E4(c); // 801C9020
  c->r[30]=c->r[3]|c->r[3]; // 801C9024
  c->lr=0x801C902Cu; f_8007B524(c); // 801C9028
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C902C
  c->lr=0x801C9034u; f_800A34E4(c); // 801C9030
  c->r[31]=c->r[3]|c->r[3]; // 801C9034
  c->r[3]=c->r[29]|c->r[29]; // 801C9038
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C903C
  c->r[5]=0u+0x00000005u; // 801C9040
  c->lr=0x801C9048u; f_801C793C(c); // 801C9044
  cmps(c,0,(int32_t)c->r[3],0); // 801C9048
  if (!crb(c,1)) { goto L_801C9058; } // 801C904C
  c->r[3]=0u+0x00000000u; // 801C9050
  goto L_801C906C; // 801C9054
L_801C9058:;
  c->r[0]=c->r[31]+c->r[3]; // 801C9058
  c->r[4]=sraw(c,c->r[30],31); // 801C905C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C9060
  c->r[0]=addc(c,~c->r[0],c->r[30],1); // 801C9064
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C9068
L_801C906C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C906C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9070
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9074
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9078
  c->lr=c->r[0]; // 801C907C
  c->r[1]=c->r[1]+0x00000020u; // 801C9080
  return; // 801C9084
}

// fn_801C9088
void f_801C9088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9088
  c->r[0]=c->lr; // 801C908C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9090
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9094
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9098
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C909C
  c->r[29]=c->r[3]|c->r[3]; // 801C90A0
  c->lr=0x801C90A8u; f_8007B524(c); // 801C90A4
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C90A8
  c->lr=0x801C90B0u; f_800A39E4(c); // 801C90AC
  c->r[30]=c->r[3]|c->r[3]; // 801C90B0
  c->lr=0x801C90B8u; f_8007B524(c); // 801C90B4
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C90B8
  c->lr=0x801C90C0u; f_800A34E4(c); // 801C90BC
  c->r[31]=c->r[3]|c->r[3]; // 801C90C0
  c->r[3]=c->r[29]|c->r[29]; // 801C90C4
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C90C8
  c->r[5]=0u+0x00000005u; // 801C90CC
  c->lr=0x801C90D4u; f_801C793C(c); // 801C90D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C90D4
  if (crb(c,1)) { goto L_801C90E4; } // 801C90D8
  c->r[3]=0u+0x00000000u; // 801C90DC
  goto L_801C90F4; // 801C90E0
L_801C90E4:;
  c->r[4]=sraw(c,c->r[30],31); // 801C90E4
  c->r[3]=rotl(c->r[31],1)&0x00000001u; // 801C90E8
  c->r[0]=addc(c,~c->r[31],c->r[30],1); // 801C90EC
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C90F0
L_801C90F4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C90F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C90F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C90FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9100
  c->lr=c->r[0]; // 801C9104
  c->r[1]=c->r[1]+0x00000020u; // 801C9108
  return; // 801C910C
}

// fn_801C9110
void f_801C9110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9110
  c->r[0]=c->lr; // 801C9114
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C911C
  c->r[31]=c->r[3]|c->r[3]; // 801C9120
  c->lr=0x801C9128u; f_80361BF4(c); // 801C9124
  c->r[3]=c->r[4]|c->r[4]; // 801C9128
  c->lr=0x801C9130u; f_8005C2D0(c); // 801C912C
  c->lr=0x801C9134u; f_8005C538(c); // 801C9130
  c->r[4]=0u+0x51EC0000u; // 801C9134
  c->r[0]=c->r[4]+0xFFFF851Fu; // 801C9138
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 801C913C
  c->r[0]=sraw(c,c->r[0],5); // 801C9140
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C9144
  c->r[0]=c->r[0]+c->r[4]; // 801C9148
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C914C
  c->r[0]=c->r[3]-c->r[0]; // 801C9150
  c->r[4]=R32(c->r[31]+0x00000008u); // 801C9154
  c->r[0]=c->r[4]^c->r[0]; // 801C9158
  c->r[3]=sraw(c,c->r[0],1); // 801C915C
  c->r[0]=c->r[0]&c->r[4]; // 801C9160
  c->r[0]=c->r[3]-c->r[0]; // 801C9164
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C9168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C916C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9170
  c->lr=c->r[0]; // 801C9174
  c->r[1]=c->r[1]+0x00000010u; // 801C9178
  return; // 801C917C
}

// fn_801C9180
void f_801C9180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9180
  c->r[0]=c->lr; // 801C9184
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C918C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9190
  c->r[30]=c->r[3]|c->r[3]; // 801C9194
  c->r[31]=0u+0x00000000u; // 801C9198
  W32(c->r[3]+0x00000018u,c->r[31]); // 801C919C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801C91A0
  c->lr=0x801C91A8u; f_8007B524(c); // 801C91A4
  c->lr=0x801C91ACu; f_800A3488(c); // 801C91A8
  c->r[4]=0u+0x00000000u; // 801C91AC
  c->r[5]=c->r[30]|c->r[30]; // 801C91B0
  c->r[6]=0u+0x801C0000u; // 801C91B4
  c->r[6]=c->r[6]+0x0000755Cu; // 801C91B8
  c->lr=0x801C91C0u; f_80179BAC(c); // 801C91BC
  c->r[0]=R32(c->r[30]+0x00000018u); // 801C91C0
  cmps(c,0,(int32_t)c->r[0],2); // 801C91C4
  if (!crb(c,0)) { goto L_801C91D8; } // 801C91C8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C91CC
  cmps(c,0,(int32_t)c->r[0],2); // 801C91D0
  if (crb(c,0)) { goto L_801C91DC; } // 801C91D4
L_801C91D8:;
  c->r[31]=0u+0x00000001u; // 801C91D8
L_801C91DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C91DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C91E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C91E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C91E8
  c->lr=c->r[0]; // 801C91EC
  c->r[1]=c->r[1]+0x00000010u; // 801C91F0
  return; // 801C91F4
}

// fn_801C91F8
void f_801C91F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C91F8
  c->r[0]=c->lr; // 801C91FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9204
  c->r[31]=c->r[3]|c->r[3]; // 801C9208
  c->r[0]=0u+0x00000000u; // 801C920C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C9210
  c->lr=0x801C9218u; f_8007B524(c); // 801C9214
  c->lr=0x801C921Cu; f_800A3488(c); // 801C9218
  c->r[4]=0u+0x00000000u; // 801C921C
  c->r[5]=c->r[31]|c->r[31]; // 801C9220
  c->r[6]=0u+0x801C0000u; // 801C9224
  c->r[6]=c->r[6]+0x000074F0u; // 801C9228
  c->lr=0x801C9230u; f_80179BAC(c); // 801C922C
  c->r[3]=R32(c->r[31]+0x00000018u); // 801C9230
  c->r[0]=0u-c->r[3]; // 801C9234
  c->r[0]=c->r[0]&~c->r[3]; // 801C9238
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C923C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9240
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9244
  c->lr=c->r[0]; // 801C9248
  c->r[1]=c->r[1]+0x00000010u; // 801C924C
  return; // 801C9250
}

// fn_801C9254
void f_801C9254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9254
  c->r[0]=c->lr; // 801C9258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C925C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9260
  c->r[31]=c->r[3]|c->r[3]; // 801C9264
  c->lr=0x801C926Cu; f_8007B524(c); // 801C9268
  c->lr=0x801C9270u; f_800A303C(c); // 801C926C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9270
  if (crb(c,1)) { goto L_801C9280; } // 801C9274
  c->r[3]=0u+0x00000000u; // 801C9278
  goto L_801C92A8; // 801C927C
L_801C9280:;
  c->r[0]=0u+0x00000000u; // 801C9280
  W32(c->r[31]+0x00000018u,c->r[0]); // 801C9284
  c->lr=0x801C928Cu; f_8007B524(c); // 801C9288
  c->lr=0x801C9290u; f_800A3488(c); // 801C928C
  c->r[4]=0u+0x00000000u; // 801C9290
  c->r[5]=c->r[31]|c->r[31]; // 801C9294
  c->r[6]=0u+0x801C0000u; // 801C9298
  c->r[6]=c->r[6]+0x000074F0u; // 801C929C
  c->lr=0x801C92A4u; f_80179BAC(c); // 801C92A0
  c->r[3]=R32(c->r[31]+0x00000018u); // 801C92A4
L_801C92A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C92A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C92AC
  c->lr=c->r[0]; // 801C92B0
  c->r[1]=c->r[1]+0x00000010u; // 801C92B4
  return; // 801C92B8
}

// fn_801C92BC
void f_801C92BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C92BC
  c->r[0]=c->lr; // 801C92C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C92C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C92C8
  c->r[31]=c->r[3]|c->r[3]; // 801C92CC
  c->lr=0x801C92D4u; f_801C9088(c); // 801C92D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C92D4
  if (crb(c,2)) { goto L_801C92E4; } // 801C92D8
  c->r[3]=0u+0x00000000u; // 801C92DC
  goto L_801C9300; // 801C92E0
L_801C92E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C92E4
  c->lr=0x801C92ECu; f_801C8FFC(c); // 801C92E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C92EC
  if (crb(c,2)) { goto L_801C92FC; } // 801C92F0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801C92F4
  goto L_801C9300; // 801C92F8
L_801C92FC:;
  c->r[3]=0u+0x00000001u; // 801C92FC
L_801C9300:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9300
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9304
  c->lr=c->r[0]; // 801C9308
  c->r[1]=c->r[1]+0x00000010u; // 801C930C
  return; // 801C9310
}

// fn_801C9314
void f_801C9314(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801C9314
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C9318
  c->r[4]=R32(c->r[4]+0x00000024u); // 801C931C
  f_801799CC(c); return; // 801C9320
}

// fn_801C9324
void f_801C9324(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9324
  c->r[0]=c->lr; // 801C9328
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C932C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C9330
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C9334
  c->r[30]=c->r[3]|c->r[3]; // 801C9338
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C933C
  c->lr=0x801C9344u; f_801C7A78(c); // 801C9340
  c->r[31]=c->r[3]|c->r[3]; // 801C9344
  c->lr=0x801C934Cu; f_8007B524(c); // 801C9348
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C934C
  c->lr=0x801C9354u; f_800A39E4(c); // 801C9350
  cmps(c,0,(int32_t)c->r[3],0); // 801C9354
  if (!crb(c,0)) { goto L_801C9360; } // 801C9358
  c->r[3]=0u+0x00000000u; // 801C935C
L_801C9360:;
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[3]=RF64(ea);} // 801C9360
  c->r[0]=c->r[31]^0x80000000u; // 801C9364
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C9368
  c->r[4]=0u+0x43300000u; // 801C936C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801C9370
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C9374
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801C9378
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C937C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801C9380
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801C9384
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 801C9388
  {uint32_t ea=c->r[2]+0xFFFF936Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C938C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C9390
  c->r[0]=c->r[3]^0x80000000u; // 801C9394
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C9398
  W32(c->r[1]+0x00000018u,c->r[4]); // 801C939C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801C93A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801C93A4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C93A8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801C93AC
  {uint32_t ea=c->r[2]+0xFFFF9368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C93B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C93B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C93B8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C93BC
  c->r[3]=R32(c->r[1]+0x00000024u); // 801C93C0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C93C4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C93C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C93CC
  c->lr=c->r[0]; // 801C93D0
  c->r[1]=c->r[1]+0x00000030u; // 801C93D4
  return; // 801C93D8
}

// fn_801C93DC
void f_801C93DC(Ctx* __restrict c) {
  c->r[3]=0u+0x000003E8u; // 801C93DC
  return; // 801C93E0
}

// fn_801C93E4
void f_801C93E4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000064u; // 801C93E4
  return; // 801C93E8
}

// fn_801C93EC
void f_801C93EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C93EC
  c->r[0]=c->lr; // 801C93F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C93F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C93F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C93FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9400
  c->r[29]=c->r[4]|c->r[4]; // 801C9404
  c->lr=0x801C940Cu; f_8007B524(c); // 801C9408
  c->lr=0x801C9410u; f_800A25A8(c); // 801C940C
  c->r[31]=c->r[3]|c->r[3]; // 801C9410
  cmps(c,0,(int32_t)c->r[3],0); // 801C9414
  if (!crb(c,2)) { goto L_801C9424; } // 801C9418
  c->r[3]=0u+0x00000000u; // 801C941C
  goto L_801C9458; // 801C9420
L_801C9424:;
  c->r[30]=0u+0x00000000u; // 801C9424
L_801C9428:;
  c->r[3]=c->r[31]|c->r[31]; // 801C9428
  c->r[4]=c->r[29]|c->r[29]; // 801C942C
  c->r[5]=c->r[30]|c->r[30]; // 801C9430
  c->lr=0x801C9438u; f_80178BC4(c); // 801C9434
  cmps(c,0,(int32_t)c->r[3],0); // 801C9438
  if (crb(c,2)) { goto L_801C9448; } // 801C943C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C9440
  goto L_801C9458; // 801C9444
L_801C9448:;
  c->r[30]=c->r[30]+0x00000001u; // 801C9448
  cmps(c,0,(int32_t)c->r[30],16); // 801C944C
  if (crb(c,0)) { IRQCHK(c); goto L_801C9428; } // 801C9450
  c->r[3]=0u+0x00000000u; // 801C9454
L_801C9458:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9458
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C945C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9460
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9464
  c->lr=c->r[0]; // 801C9468
  c->r[1]=c->r[1]+0x00000020u; // 801C946C
  return; // 801C9470
}

// fn_801C9474
void f_801C9474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9474
  c->r[0]=c->lr; // 801C9478
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C947C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9480
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9484
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9488
  c->r[29]=c->r[3]|c->r[3]; // 801C948C
  c->lr=0x801C9494u; f_8007B524(c); // 801C9490
  c->lr=0x801C9498u; f_800A59AC(c); // 801C9494
  c->r[30]=c->r[3]|c->r[3]; // 801C9498
  c->lr=0x801C94A0u; f_8007B524(c); // 801C949C
  c->lr=0x801C94A4u; f_800A5754(c); // 801C94A0
  c->r[31]=c->r[3]|c->r[3]; // 801C94A4
  c->r[3]=c->r[29]|c->r[29]; // 801C94A8
  c->r[4]=0u+0x00000005u; // 801C94AC
  c->lr=0x801C94B4u; f_801C93EC(c); // 801C94B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C94B4
  if (crb(c,1)) { goto L_801C94C4; } // 801C94B8
  c->r[3]=0u+0x00000000u; // 801C94BC
  goto L_801C94D4; // 801C94C0
L_801C94C4:;
  c->r[4]=sraw(c,c->r[30],31); // 801C94C4
  c->r[3]=rotl(c->r[31],1)&0x00000001u; // 801C94C8
  c->r[0]=addc(c,~c->r[31],c->r[30],1); // 801C94CC
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C94D0
L_801C94D4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C94D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C94D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C94DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C94E0
  c->lr=c->r[0]; // 801C94E4
  c->r[1]=c->r[1]+0x00000020u; // 801C94E8
  return; // 801C94EC
}

// fn_801C94F0
void f_801C94F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C94F0
  c->r[0]=c->lr; // 801C94F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C94F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C94FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9500
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9504
  c->r[29]=c->r[4]|c->r[4]; // 801C9508
  c->r[30]=c->r[5]|c->r[5]; // 801C950C
  c->lr=0x801C9514u; f_8007B524(c); // 801C9510
  c->r[4]=c->r[30]|c->r[30]; // 801C9514
  c->lr=0x801C951Cu; f_800A6CE8(c); // 801C9518
  c->r[31]=c->r[3]|c->r[3]; // 801C951C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9520
  if (!crb(c,2)) { goto L_801C9530; } // 801C9524
  c->r[3]=0u+0x00000000u; // 801C9528
  goto L_801C9564; // 801C952C
L_801C9530:;
  c->r[30]=0u+0x00000000u; // 801C9530
L_801C9534:;
  c->r[3]=c->r[31]|c->r[31]; // 801C9534
  c->r[4]=c->r[29]|c->r[29]; // 801C9538
  c->r[5]=c->r[30]|c->r[30]; // 801C953C
  c->lr=0x801C9544u; f_80178BC4(c); // 801C9540
  cmps(c,0,(int32_t)c->r[3],0); // 801C9544
  if (crb(c,2)) { goto L_801C9554; } // 801C9548
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C954C
  goto L_801C9564; // 801C9550
L_801C9554:;
  c->r[30]=c->r[30]+0x00000001u; // 801C9554
  cmps(c,0,(int32_t)c->r[30],16); // 801C9558
  if (crb(c,0)) { IRQCHK(c); goto L_801C9534; } // 801C955C
  c->r[3]=0u+0x00000000u; // 801C9560
L_801C9564:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9564
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9568
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C956C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9570
  c->lr=c->r[0]; // 801C9574
  c->r[1]=c->r[1]+0x00000020u; // 801C9578
  return; // 801C957C
}

// fn_801C9580
void f_801C9580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9580
  c->r[0]=c->lr; // 801C9584
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C958C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9590
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9594
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C9598
  c->r[28]=c->r[3]|c->r[3]; // 801C959C
  c->r[29]=c->r[4]|c->r[4]; // 801C95A0
  c->lr=0x801C95A8u; f_8007B524(c); // 801C95A4
  c->r[4]=c->r[29]|c->r[29]; // 801C95A8
  c->lr=0x801C95B0u; f_800A6BEC(c); // 801C95AC
  c->r[30]=c->r[3]|c->r[3]; // 801C95B0
  c->lr=0x801C95B8u; f_8007B524(c); // 801C95B4
  c->r[4]=c->r[29]|c->r[29]; // 801C95B8
  c->lr=0x801C95C0u; f_800A6BA0(c); // 801C95BC
  c->r[31]=c->r[3]|c->r[3]; // 801C95C0
  c->r[3]=c->r[28]|c->r[28]; // 801C95C4
  c->r[4]=0u+0x00000005u; // 801C95C8
  c->r[5]=c->r[29]|c->r[29]; // 801C95CC
  c->lr=0x801C95D4u; f_801C94F0(c); // 801C95D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C95D4
  if (crb(c,1)) { goto L_801C95E4; } // 801C95D8
  c->r[3]=0u+0x00000000u; // 801C95DC
  goto L_801C95F4; // 801C95E0
L_801C95E4:;
  c->r[4]=sraw(c,c->r[30],31); // 801C95E4
  c->r[3]=rotl(c->r[31],1)&0x00000001u; // 801C95E8
  c->r[0]=addc(c,~c->r[31],c->r[30],1); // 801C95EC
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C95F0
L_801C95F4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C95F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C95F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C95FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C9600
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9604
  c->lr=c->r[0]; // 801C9608
  c->r[1]=c->r[1]+0x00000020u; // 801C960C
  return; // 801C9610
}

// fn_801C9614
void f_801C9614(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9614
  c->r[0]=c->lr; // 801C9618
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C961C
  c->lr=0x801C9624u; f_801C75DC(c); // 801C9620
  c->lr=0x801C9628u; f_801C7690(c); // 801C9624
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9628
  c->lr=c->r[0]; // 801C962C
  c->r[1]=c->r[1]+0x00000010u; // 801C9630
  return; // 801C9634
}

// fn_801C9638
void f_801C9638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9638
  c->r[0]=c->lr; // 801C963C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9640
  c->lr=0x801C9648u; f_801C75DC(c); // 801C9644
  c->lr=0x801C964Cu; f_801C7704(c); // 801C9648
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C964C
  c->lr=c->r[0]; // 801C9650
  c->r[1]=c->r[1]+0x00000010u; // 801C9654
  return; // 801C9658
}

// fn_801C965C
void f_801C965C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C965C
  c->r[0]=c->lr; // 801C9660
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9664
  c->lr=0x801C966Cu; f_801C75DC(c); // 801C9668
  c->lr=0x801C9670u; f_801C779C(c); // 801C966C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9670
  c->lr=c->r[0]; // 801C9674
  c->r[1]=c->r[1]+0x00000010u; // 801C9678
  return; // 801C967C
}

// fn_801C9680
void f_801C9680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9680
  c->r[0]=c->lr; // 801C9684
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C968C
  c->r[31]=c->r[3]|c->r[3]; // 801C9690
  c->lr=0x801C9698u; f_801C75DC(c); // 801C9694
  c->r[4]=c->r[31]|c->r[31]; // 801C9698
  c->lr=0x801C96A0u; f_801C8FE4(c); // 801C969C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C96A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C96A4
  c->lr=c->r[0]; // 801C96A8
  c->r[1]=c->r[1]+0x00000010u; // 801C96AC
  return; // 801C96B0
}

// fn_801C96B4
void f_801C96B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C96B4
  c->r[0]=c->lr; // 801C96B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C96BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C96C0
  c->r[31]=c->r[3]|c->r[3]; // 801C96C4
  c->lr=0x801C96CCu; f_801C75DC(c); // 801C96C8
  c->r[4]=c->r[31]|c->r[31]; // 801C96CC
  c->lr=0x801C96D4u; f_801C8FEC(c); // 801C96D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C96D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C96D8
  c->lr=c->r[0]; // 801C96DC
  c->r[1]=c->r[1]+0x00000010u; // 801C96E0
  return; // 801C96E4
}

// fn_801C96E8
void f_801C96E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C96E8
  c->r[0]=c->lr; // 801C96EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C96F0
  c->lr=0x801C96F8u; f_801C75DC(c); // 801C96F4
  c->lr=0x801C96FCu; f_801C8FF4(c); // 801C96F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C96FC
  c->lr=c->r[0]; // 801C9700
  c->r[1]=c->r[1]+0x00000010u; // 801C9704
  return; // 801C9708
}

// fn_801C970C
void f_801C970C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C970C
  c->r[0]=c->lr; // 801C9710
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9714
  c->lr=0x801C971Cu; f_801C75DC(c); // 801C9718
  c->lr=0x801C9720u; f_801C8F1C(c); // 801C971C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9720
  c->lr=c->r[0]; // 801C9724
  c->r[1]=c->r[1]+0x00000010u; // 801C9728
  return; // 801C972C
}

// fn_801C9730
void f_801C9730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9730
  c->r[0]=c->lr; // 801C9734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9738
  c->lr=0x801C9740u; f_801C75DC(c); // 801C973C
  c->lr=0x801C9744u; f_801C8F58(c); // 801C9740
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9744
  c->lr=c->r[0]; // 801C9748
  c->r[1]=c->r[1]+0x00000010u; // 801C974C
  return; // 801C9750
}

// fn_801C9754
void f_801C9754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9754
  c->r[0]=c->lr; // 801C9758
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C975C
  c->lr=0x801C9764u; f_801C75DC(c); // 801C9760
  c->lr=0x801C9768u; f_801C8FFC(c); // 801C9764
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9768
  c->lr=c->r[0]; // 801C976C
  c->r[1]=c->r[1]+0x00000010u; // 801C9770
  return; // 801C9774
}

// fn_801C9778
void f_801C9778(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9778
  c->r[0]=c->lr; // 801C977C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9780
  c->lr=0x801C9788u; f_801C75DC(c); // 801C9784
  c->lr=0x801C978Cu; f_801C9088(c); // 801C9788
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C978C
  c->lr=c->r[0]; // 801C9790
  c->r[1]=c->r[1]+0x00000010u; // 801C9794
  return; // 801C9798
}

// fn_801C979C
void f_801C979C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C979C
  c->r[0]=c->lr; // 801C97A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C97A4
  c->lr=0x801C97ACu; f_801C75DC(c); // 801C97A8
  c->lr=0x801C97B0u; f_801C9254(c); // 801C97AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C97B0
  c->lr=c->r[0]; // 801C97B4
  c->r[1]=c->r[1]+0x00000010u; // 801C97B8
  return; // 801C97BC
}

// fn_801C97C0
void f_801C97C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C97C0
  c->r[0]=c->lr; // 801C97C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C97C8
  c->lr=0x801C97D0u; f_801C75DC(c); // 801C97CC
  c->lr=0x801C97D4u; f_801C92BC(c); // 801C97D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C97D4
  c->lr=c->r[0]; // 801C97D8
  c->r[1]=c->r[1]+0x00000010u; // 801C97DC
  return; // 801C97E0
}

// fn_801C97E4
void f_801C97E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C97E4
  c->r[0]=c->lr; // 801C97E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C97EC
  c->lr=0x801C97F4u; f_801C75DC(c); // 801C97F0
  c->lr=0x801C97F8u; f_801C8FD8(c); // 801C97F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C97F8
  c->lr=c->r[0]; // 801C97FC
  c->r[1]=c->r[1]+0x00000010u; // 801C9800
  return; // 801C9804
}

// fn_801C9808
void f_801C9808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9808
  c->r[0]=c->lr; // 801C980C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9810
  c->lr=0x801C9818u; f_801C75DC(c); // 801C9814
  c->lr=0x801C981Cu; f_801C8FDC(c); // 801C9818
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C981C
  c->lr=c->r[0]; // 801C9820
  c->r[1]=c->r[1]+0x00000010u; // 801C9824
  return; // 801C9828
}

// fn_801C982C
void f_801C982C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C982C
  c->r[0]=c->lr; // 801C9830
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9834
  c->lr=0x801C983Cu; f_801C75DC(c); // 801C9838
  c->lr=0x801C9840u; f_801C9180(c); // 801C983C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9840
  c->lr=c->r[0]; // 801C9844
  c->r[1]=c->r[1]+0x00000010u; // 801C9848
  return; // 801C984C
}

// fn_801C9850
void f_801C9850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9850
  c->r[0]=c->lr; // 801C9854
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9858
  c->lr=0x801C9860u; f_801C75DC(c); // 801C985C
  c->lr=0x801C9864u; f_801C9314(c); // 801C9860
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9864
  c->lr=c->r[0]; // 801C9868
  c->r[1]=c->r[1]+0x00000010u; // 801C986C
  return; // 801C9870
}

// fn_801C9874
void f_801C9874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9874
  c->r[0]=c->lr; // 801C9878
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C987C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9880
  c->r[31]=c->r[3]|c->r[3]; // 801C9884
  c->lr=0x801C988Cu; f_801C75DC(c); // 801C9888
  c->r[4]=c->r[31]|c->r[31]; // 801C988C
  c->lr=0x801C9894u; f_801C8FE0(c); // 801C9890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9894
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9898
  c->lr=c->r[0]; // 801C989C
  c->r[1]=c->r[1]+0x00000010u; // 801C98A0
  return; // 801C98A4
}

// fn_801C98A8
void f_801C98A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C98A8
  c->r[0]=c->lr; // 801C98AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C98B0
  c->lr=0x801C98B8u; f_801C75DC(c); // 801C98B4
  c->lr=0x801C98BCu; f_801C91F8(c); // 801C98B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C98BC
  c->lr=c->r[0]; // 801C98C0
  c->r[1]=c->r[1]+0x00000010u; // 801C98C4
  return; // 801C98C8
}

// fn_801C98CC
void f_801C98CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C98CC
  c->r[0]=c->lr; // 801C98D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C98D4
  c->lr=0x801C98DCu; f_801C75DC(c); // 801C98D8
  c->lr=0x801C98E0u; f_801C9324(c); // 801C98DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C98E0
  c->lr=c->r[0]; // 801C98E4
  c->r[1]=c->r[1]+0x00000010u; // 801C98E8
  return; // 801C98EC
}

// fn_801C98F0
void f_801C98F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C98F0
  c->r[0]=c->lr; // 801C98F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C98F8
  c->lr=0x801C9900u; f_801C75DC(c); // 801C98FC
  c->lr=0x801C9904u; f_801C93DC(c); // 801C9900
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9904
  c->lr=c->r[0]; // 801C9908
  c->r[1]=c->r[1]+0x00000010u; // 801C990C
  return; // 801C9910
}

// fn_801C9914
void f_801C9914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9914
  c->r[0]=c->lr; // 801C9918
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C991C
  c->lr=0x801C9924u; f_801C75DC(c); // 801C9920
  c->lr=0x801C9928u; f_801C93E4(c); // 801C9924
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9928
  c->lr=c->r[0]; // 801C992C
  c->r[1]=c->r[1]+0x00000010u; // 801C9930
  return; // 801C9934
}

// fn_801C9938
void f_801C9938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9938
  c->r[0]=c->lr; // 801C993C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9940
  c->lr=0x801C9948u; f_801C75DC(c); // 801C9944
  c->lr=0x801C994Cu; f_801C9474(c); // 801C9948
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C994C
  c->lr=c->r[0]; // 801C9950
  c->r[1]=c->r[1]+0x00000010u; // 801C9954
  return; // 801C9958
}

// fn_801C995C
void f_801C995C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C995C
  c->r[0]=c->lr; // 801C9960
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9968
  c->r[31]=c->r[3]|c->r[3]; // 801C996C
  c->lr=0x801C9974u; f_801C75DC(c); // 801C9970
  c->r[4]=c->r[31]|c->r[31]; // 801C9974
  c->lr=0x801C997Cu; f_801C9580(c); // 801C9978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C997C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9980
  c->lr=c->r[0]; // 801C9984
  c->r[1]=c->r[1]+0x00000010u; // 801C9988
  return; // 801C998C
}

// fn_801C9990
void f_801C9990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9990
  c->r[0]=c->lr; // 801C9994
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C999C
  c->r[31]=c->r[3]|c->r[3]; // 801C99A0
  c->r[4]=0u+0x00000000u; // 801C99A4
  c->r[5]=0u+0x00000004u; // 801C99A8
  c->lr=0x801C99B0u; f_800060B8(c); // 801C99AC
  c->r[0]=0u+0x00000001u; // 801C99B0
  W32(c->r[31]+0x00000050u,c->r[0]); // 801C99B4
  W32(c->r[31]+0x00000054u,c->r[0]); // 801C99B8
  c->r[3]=c->r[31]|c->r[31]; // 801C99BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C99C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C99C4
  c->lr=c->r[0]; // 801C99C8
  c->r[1]=c->r[1]+0x00000010u; // 801C99CC
  return; // 801C99D0
}

