/* 80120B00 0011DA40  94 21 FF 80 */ stwu r1, -0x80(r1)
/* 80120B04 0011DA44  7C 08 02 A6 */ mflr r0
/* 80120B08 0011DA48  90 01 00 84 */ stw r0, 0x84(r1)
/* 80120B0C 0011DA4C  DB E1 00 70 */ stfd f31, 0x70(r1)
/* 80120B10 0011DA50  F3 E1 00 78 */ psq_st f31, 120(r1), 0, 0
/* 80120B14 0011DA54  DB C1 00 60 */ stfd f30, 0x60(r1)
/* 80120B18 0011DA58  F3 C1 00 68 */ psq_st f30, 104(r1), 0, 0
/* 80120B1C 0011DA5C  39 61 00 60 */ addi r11, r1, 0x60
/* 80120B20 0011DA60  48 24 16 A1 */ bl _savegpr_22
/* 80120B24 0011DA64  7C 7D 1B 78 */ mr r29, r3
/* 80120B28 0011DA68  3C 60 80 39 */ lis r3, lbl_8038D658@ha
/* 80120B2C 0011DA6C  3B 23 D6 58 */ addi r25, r3, lbl_8038D658@l
/* 80120B30 0011DA70  3B C0 00 00 */ li r30, 0
/* 80120B34 0011DA74  3B 80 00 00 */ li r28, 0
/* 80120B38 0011DA78  3C 60 80 3B */ lis r3, lbl_803A86D0@ha
/* 80120B3C 0011DA7C  3B 43 86 D0 */ addi r26, r3, lbl_803A86D0@l
/* 80120B40 0011DA80  3C 60 80 3B */ lis r3, lbl_803A8748@ha
/* 80120B44 0011DA84  3B 63 87 48 */ addi r27, r3, lbl_803A8748@l
lbl_80120B48:
/* 80120B48 0011DA88  3B E0 00 00 */ li r31, 0
/* 80120B4C 0011DA8C  7F 1A E2 14 */ add r24, r26, r28
/* 80120B50 0011DA90  7E FB E2 14 */ add r23, r27, r28
lbl_80120B54:
/* 80120B54 0011DA94  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120B58 0011DA98  7F E4 FB 78 */ mr r4, r31
/* 80120B5C 0011DA9C  7F 0C C3 78 */ mr r12, r24
/* 80120B60 0011DAA0  48 24 15 25 */ bl func_80362084
/* 80120B64 0011DAA4  60 00 00 00 */ nop
/* 80120B68 0011DAA8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80120B6C 0011DAAC  40 82 00 30 */ bne lbl_80120B9C
/* 80120B70 0011DAB0  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120B74 0011DAB4  7F E4 FB 78 */ mr r4, r31
/* 80120B78 0011DAB8  38 A0 00 00 */ li r5, 0
/* 80120B7C 0011DABC  7E EC BB 78 */ mr r12, r23
/* 80120B80 0011DAC0  48 24 15 05 */ bl func_80362084
/* 80120B84 0011DAC4  60 00 00 00 */ nop
/* 80120B88 0011DAC8  28 03 00 00 */ cmplwi r3, 0
/* 80120B8C 0011DACC  41 82 01 E0 */ beq lbl_80120D6C
/* 80120B90 0011DAD0  C0 02 92 C4 */ lfs f0, lbl_80452CC4-_SDA2_BASE_(r2)
/* 80120B94 0011DAD4  D0 03 00 28 */ stfs f0, 0x28(r3)
/* 80120B98 0011DAD8  48 00 01 D4 */ b lbl_80120D6C
lbl_80120B9C:
/* 80120B9C 0011DADC  28 00 00 01 */ cmplwi r0, 1
/* 80120BA0 0011DAE0  40 82 00 30 */ bne lbl_80120BD0
/* 80120BA4 0011DAE4  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120BA8 0011DAE8  7F E4 FB 78 */ mr r4, r31
/* 80120BAC 0011DAEC  38 A0 00 00 */ li r5, 0
/* 80120BB0 0011DAF0  7E EC BB 78 */ mr r12, r23
/* 80120BB4 0011DAF4  48 24 14 D1 */ bl func_80362084
/* 80120BB8 0011DAF8  60 00 00 00 */ nop
/* 80120BBC 0011DAFC  28 03 00 00 */ cmplwi r3, 0
/* 80120BC0 0011DB00  41 82 01 AC */ beq lbl_80120D6C
/* 80120BC4 0011DB04  C0 02 93 24 */ lfs f0, lbl_80452D24-_SDA2_BASE_(r2)
/* 80120BC8 0011DB08  D0 03 00 28 */ stfs f0, 0x28(r3)
/* 80120BCC 0011DB0C  48 00 01 A0 */ b lbl_80120D6C
lbl_80120BD0:
/* 80120BD0 0011DB10  28 00 00 02 */ cmplwi r0, 2
/* 80120BD4 0011DB14  40 82 00 68 */ bne lbl_80120C3C
/* 80120BD8 0011DB18  3A C0 00 00 */ li r22, 0
/* 80120BDC 0011DB1C  38 79 45 6C */ addi r3, r25, 0x456c
/* 80120BE0 0011DB20  E3 C3 00 00 */ psq_l f30, 0(r3), 0, 0
/* 80120BE4 0011DB24  C3 E3 00 08 */ lfs f31, 8(r3)
lbl_80120BE8:
/* 80120BE8 0011DB28  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120BEC 0011DB2C  7F E4 FB 78 */ mr r4, r31
/* 80120BF0 0011DB30  7E C5 B3 78 */ mr r5, r22
/* 80120BF4 0011DB34  7E EC BB 78 */ mr r12, r23
/* 80120BF8 0011DB38  48 24 14 8D */ bl func_80362084
/* 80120BFC 0011DB3C  60 00 00 00 */ nop
/* 80120C00 0011DB40  28 03 00 00 */ cmplwi r3, 0
/* 80120C04 0011DB44  41 82 01 68 */ beq lbl_80120D6C
/* 80120C08 0011DB48  F3 C1 00 20 */ psq_st f30, 32(r1), 0, 0
/* 80120C0C 0011DB4C  D3 E1 00 28 */ stfs f31, 0x28(r1)
/* 80120C10 0011DB50  C0 21 00 20 */ lfs f1, 0x20(r1)
/* 80120C14 0011DB54  D0 23 00 98 */ stfs f1, 0x98(r3)
/* 80120C18 0011DB58  C0 01 00 24 */ lfs f0, 0x24(r1)
/* 80120C1C 0011DB5C  D0 03 00 9C */ stfs f0, 0x9c(r3)
/* 80120C20 0011DB60  D3 E3 00 A0 */ stfs f31, 0xa0(r3)
/* 80120C24 0011DB64  D0 23 00 B0 */ stfs f1, 0xb0(r3)
/* 80120C28 0011DB68  D0 03 00 B4 */ stfs f0, 0xb4(r3)
/* 80120C2C 0011DB6C  3A D6 00 01 */ addi r22, r22, 1
/* 80120C30 0011DB70  2C 16 00 04 */ cmpwi r22, 4
/* 80120C34 0011DB74  41 80 FF B4 */ blt lbl_80120BE8
/* 80120C38 0011DB78  48 00 01 34 */ b lbl_80120D6C
lbl_80120C3C:
/* 80120C3C 0011DB7C  28 00 00 05 */ cmplwi r0, 5
/* 80120C40 0011DB80  40 82 00 68 */ bne lbl_80120CA8
/* 80120C44 0011DB84  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120C48 0011DB88  7F E4 FB 78 */ mr r4, r31
/* 80120C4C 0011DB8C  38 A0 00 00 */ li r5, 0
/* 80120C50 0011DB90  7E EC BB 78 */ mr r12, r23
/* 80120C54 0011DB94  48 24 14 31 */ bl func_80362084
/* 80120C58 0011DB98  60 00 00 00 */ nop
/* 80120C5C 0011DB9C  28 03 00 00 */ cmplwi r3, 0
/* 80120C60 0011DBA0  41 82 01 0C */ beq lbl_80120D6C
/* 80120C64 0011DBA4  C0 02 93 30 */ lfs f0, lbl_80452D30-_SDA2_BASE_(r2)
/* 80120C68 0011DBA8  D0 03 00 28 */ stfs f0, 0x28(r3)
/* 80120C6C 0011DBAC  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80120C70 0011DBB0  D0 03 00 38 */ stfs f0, 0x38(r3)
/* 80120C74 0011DBB4  38 99 45 84 */ addi r4, r25, 0x4584
/* 80120C78 0011DBB8  E0 04 00 00 */ psq_l f0, 0(r4), 0, 0
/* 80120C7C 0011DBBC  C0 44 00 08 */ lfs f2, 8(r4)
/* 80120C80 0011DBC0  F0 01 00 14 */ psq_st f0, 20(r1), 0, 0
/* 80120C84 0011DBC4  D0 41 00 1C */ stfs f2, 0x1c(r1)
/* 80120C88 0011DBC8  C0 21 00 14 */ lfs f1, 0x14(r1)
/* 80120C8C 0011DBCC  D0 23 00 98 */ stfs f1, 0x98(r3)
/* 80120C90 0011DBD0  C0 01 00 18 */ lfs f0, 0x18(r1)
/* 80120C94 0011DBD4  D0 03 00 9C */ stfs f0, 0x9c(r3)
/* 80120C98 0011DBD8  D0 43 00 A0 */ stfs f2, 0xa0(r3)
/* 80120C9C 0011DBDC  D0 23 00 B0 */ stfs f1, 0xb0(r3)
/* 80120CA0 0011DBE0  D0 03 00 B4 */ stfs f0, 0xb4(r3)
/* 80120CA4 0011DBE4  48 00 00 C8 */ b lbl_80120D6C
lbl_80120CA8:
/* 80120CA8 0011DBE8  28 00 00 10 */ cmplwi r0, 0x10
/* 80120CAC 0011DBEC  40 82 00 68 */ bne lbl_80120D14
/* 80120CB0 0011DBF0  3A C0 00 00 */ li r22, 0
/* 80120CB4 0011DBF4  38 79 45 78 */ addi r3, r25, 0x4578
/* 80120CB8 0011DBF8  E3 E3 00 00 */ psq_l f31, 0(r3), 0, 0
/* 80120CBC 0011DBFC  C3 C3 00 08 */ lfs f30, 8(r3)
lbl_80120CC0:
/* 80120CC0 0011DC00  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120CC4 0011DC04  7F E4 FB 78 */ mr r4, r31
/* 80120CC8 0011DC08  7E C5 B3 78 */ mr r5, r22
/* 80120CCC 0011DC0C  7E EC BB 78 */ mr r12, r23
/* 80120CD0 0011DC10  48 24 13 B5 */ bl func_80362084
/* 80120CD4 0011DC14  60 00 00 00 */ nop
/* 80120CD8 0011DC18  28 03 00 00 */ cmplwi r3, 0
/* 80120CDC 0011DC1C  41 82 00 90 */ beq lbl_80120D6C
/* 80120CE0 0011DC20  F3 E1 00 08 */ psq_st f31, 8(r1), 0, 0
/* 80120CE4 0011DC24  D3 C1 00 10 */ stfs f30, 0x10(r1)
/* 80120CE8 0011DC28  C0 21 00 08 */ lfs f1, 8(r1)
/* 80120CEC 0011DC2C  D0 23 00 98 */ stfs f1, 0x98(r3)
/* 80120CF0 0011DC30  C0 01 00 0C */ lfs f0, 0xc(r1)
/* 80120CF4 0011DC34  D0 03 00 9C */ stfs f0, 0x9c(r3)
/* 80120CF8 0011DC38  D3 C3 00 A0 */ stfs f30, 0xa0(r3)
/* 80120CFC 0011DC3C  D0 23 00 B0 */ stfs f1, 0xb0(r3)
/* 80120D00 0011DC40  D0 03 00 B4 */ stfs f0, 0xb4(r3)
/* 80120D04 0011DC44  3A D6 00 01 */ addi r22, r22, 1
/* 80120D08 0011DC48  2C 16 00 04 */ cmpwi r22, 4
/* 80120D0C 0011DC4C  41 80 FF B4 */ blt lbl_80120CC0
/* 80120D10 0011DC50  48 00 00 5C */ b lbl_80120D6C
lbl_80120D14:
/* 80120D14 0011DC54  28 00 00 03 */ cmplwi r0, 3
/* 80120D18 0011DC58  40 82 00 54 */ bne lbl_80120D6C
/* 80120D1C 0011DC5C  38 7D 2E 54 */ addi r3, r29, 0x2e54
/* 80120D20 0011DC60  7F E4 FB 78 */ mr r4, r31
/* 80120D24 0011DC64  38 A0 00 00 */ li r5, 0
/* 80120D28 0011DC68  7E EC BB 78 */ mr r12, r23
/* 80120D2C 0011DC6C  48 24 13 59 */ bl func_80362084
/* 80120D30 0011DC70  60 00 00 00 */ nop
/* 80120D34 0011DC74  28 03 00 00 */ cmplwi r3, 0
/* 80120D38 0011DC78  41 82 00 34 */ beq lbl_80120D6C
/* 80120D3C 0011DC7C  80 1D 05 74 */ lwz r0, 0x574(r29)
/* 80120D40 0011DC80  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 80120D44 0011DC84  41 82 00 20 */ beq lbl_80120D64
/* 80120D48 0011DC88  C0 02 93 14 */ lfs f0, lbl_80452D14-_SDA2_BASE_(r2)
/* 80120D4C 0011DC8C  D0 03 00 28 */ stfs f0, 0x28(r3)
/* 80120D50 0011DC90  C0 02 93 8C */ lfs f0, lbl_80452D8C-_SDA2_BASE_(r2)
/* 80120D54 0011DC94  D0 03 00 3C */ stfs f0, 0x3c(r3)
/* 80120D58 0011DC98  C0 02 93 A0 */ lfs f0, lbl_80452DA0-_SDA2_BASE_(r2)
/* 80120D5C 0011DC9C  D0 03 00 40 */ stfs f0, 0x40(r3)
/* 80120D60 0011DCA0  48 00 00 0C */ b lbl_80120D6C
lbl_80120D64:
/* 80120D64 0011DCA4  C0 02 93 3C */ lfs f0, lbl_80452D3C-_SDA2_BASE_(r2)
/* 80120D68 0011DCA8  D0 03 00 28 */ stfs f0, 0x28(r3)
lbl_80120D6C:
/* 80120D6C 0011DCAC  3B FF 00 01 */ addi r31, r31, 1
/* 80120D70 0011DCB0  2C 1F 00 02 */ cmpwi r31, 2
/* 80120D74 0011DCB4  41 80 FD E0 */ blt lbl_80120B54
/* 80120D78 0011DCB8  3B DE 00 01 */ addi r30, r30, 1
/* 80120D7C 0011DCBC  2C 1E 00 05 */ cmpwi r30, 5
/* 80120D80 0011DCC0  3B 9C 00 0C */ addi r28, r28, 0xc
/* 80120D84 0011DCC4  41 80 FD C4 */ blt lbl_80120B48
/* 80120D88 0011DCC8  E3 E1 00 78 */ psq_l f31, 120(r1), 0, 0
/* 80120D8C 0011DCCC  CB E1 00 70 */ lfd f31, 0x70(r1)
/* 80120D90 0011DCD0  E3 C1 00 68 */ psq_l f30, 104(r1), 0, 0
/* 80120D94 0011DCD4  CB C1 00 60 */ lfd f30, 0x60(r1)
/* 80120D98 0011DCD8  39 61 00 60 */ addi r11, r1, 0x60
/* 80120D9C 0011DCDC  48 24 14 71 */ bl func_8036220C
/* 80120DA0 0011DCE0  80 01 00 84 */ lwz r0, 0x84(r1)
/* 80120DA4 0011DCE4  7C 08 03 A6 */ mtlr r0
/* 80120DA8 0011DCE8  38 21 00 80 */ addi r1, r1, 0x80
/* 80120DAC 0011DCEC  4E 80 00 20 */ blr