lbl_80027170:
/* 80027170  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80027174  7C 08 02 A6 */	mflr r0
/* 80027178  90 01 00 54 */	stw r0, 0x54(r1)
/* 8002717C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80027180  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 80027184  39 61 00 40 */	addi r11, r1, 0x40
/* 80027188  48 33 B0 45 */	bl _savegpr_25
/* 8002718C  7C 79 1B 78 */	mr r25, r3
/* 80027190  FF E0 08 90 */	fmr f31, f1
/* 80027194  7C 9D 23 78 */	mr r29, r4
/* 80027198  7C DE 33 78 */	mr r30, r6
/* 8002719C  7C FF 3B 78 */	mr r31, r7
/* 800271A0  7C A4 07 74 */	extsb r4, r5
/* 800271A4  2C 04 FF FF */	cmpwi r4, -1
/* 800271A8  40 82 00 20 */	bne lbl_800271C8
/* 800271AC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800271B0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800271B4  85 83 4E 20 */	lwzu r12, 0x4e20(r3)
/* 800271B8  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 800271BC  7D 89 03 A6 */	mtctr r12
/* 800271C0  4E 80 04 21 */	bctrl 
/* 800271C4  48 00 00 24 */	b lbl_800271E8
lbl_800271C8:
/* 800271C8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800271CC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800271D0  38 63 4E C4 */	addi r3, r3, 0x4ec4
/* 800271D4  4B FF D1 B1 */	bl getStatusRoomDt__20dStage_roomControl_cFi
/* 800271D8  81 83 00 00 */	lwz r12, 0(r3)
/* 800271DC  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 800271E0  7D 89 03 A6 */	mtctr r12
/* 800271E4  4E 80 04 21 */	bctrl 
lbl_800271E8:
/* 800271E8  28 03 00 00 */	cmplwi r3, 0
/* 800271EC  40 82 00 0C */	bne lbl_800271F8
/* 800271F0  38 60 00 00 */	li r3, 0
/* 800271F4  48 00 00 CC */	b lbl_800272C0
lbl_800271F8:
/* 800271F8  80 63 00 04 */	lwz r3, 4(r3)
/* 800271FC  1C 19 00 0D */	mulli r0, r25, 0xd
/* 80027200  7F 43 02 14 */	add r26, r3, r0
/* 80027204  8B 9A 00 0C */	lbz r28, 0xc(r26)
/* 80027208  88 9A 00 0B */	lbz r4, 0xb(r26)
/* 8002720C  54 9B DF 7E */	rlwinm r27, r4, 0x1b, 0x1d, 0x1f
/* 80027210  54 83 07 3E */	clrlwi r3, r4, 0x1c
/* 80027214  7C 79 1B 78 */	mr r25, r3
/* 80027218  88 1A 00 0A */	lbz r0, 0xa(r26)
/* 8002721C  54 84 06 F6 */	rlwinm r4, r4, 0, 0x1b, 0x1b
/* 80027220  50 04 E7 3E */	rlwimi r4, r0, 0x1c, 0x1c, 0x1f
/* 80027224  2C 03 00 0F */	cmpwi r3, 0xf
/* 80027228  41 80 00 08 */	blt lbl_80027230
/* 8002722C  3B 20 FF FF */	li r25, -1
lbl_80027230:
/* 80027230  2C 19 FF FF */	cmpwi r25, -1
/* 80027234  40 82 00 10 */	bne lbl_80027244
/* 80027238  2C 1F FF FF */	cmpwi r31, -1
/* 8002723C  41 82 00 08 */	beq lbl_80027244
/* 80027240  7F F9 FB 78 */	mr r25, r31
lbl_80027244:
/* 80027244  2C 04 00 1F */	cmpwi r4, 0x1f
/* 80027248  40 80 00 2C */	bge lbl_80027274
/* 8002724C  C0 42 82 94 */	lfs f2, lit_5315(r2)
/* 80027250  C8 22 82 98 */	lfd f1, lit_5317(r2)
/* 80027254  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80027258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002725C  3C 00 43 30 */	lis r0, 0x4330
/* 80027260  90 01 00 10 */	stw r0, 0x10(r1)
/* 80027264  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80027268  EC 00 08 28 */	fsubs f0, f0, f1
/* 8002726C  EC 22 00 32 */	fmuls f1, f2, f0
/* 80027270  48 18 18 E9 */	bl dKy_set_nexttime__Ff
lbl_80027274:
/* 80027274  38 00 00 01 */	li r0, 1
/* 80027278  90 01 00 08 */	stw r0, 8(r1)
/* 8002727C  93 61 00 0C */	stw r27, 0xc(r1)
/* 80027280  7F 43 D3 78 */	mr r3, r26
/* 80027284  88 9A 00 08 */	lbz r4, 8(r26)
/* 80027288  88 1A 00 09 */	lbz r0, 9(r26)
/* 8002728C  7C 05 07 74 */	extsb r5, r0
/* 80027290  7F 26 07 74 */	extsb r6, r25
/* 80027294  FC 20 F8 90 */	fmr f1, f31
/* 80027298  7F A7 EB 78 */	mr r7, r29
/* 8002729C  39 00 00 01 */	li r8, 1
/* 800272A0  38 1C FF F1 */	addi r0, r28, -15
/* 800272A4  30 00 FF FF */	addic r0, r0, -1
/* 800272A8  7C 00 01 10 */	subfe r0, r0, r0
/* 800272AC  7F 80 00 78 */	andc r0, r28, r0
/* 800272B0  7C 09 07 74 */	extsb r9, r0
/* 800272B4  7F CA F3 78 */	mr r10, r30
/* 800272B8  48 00 60 45 */	bl dComIfGp_setNextStage__FPCcsScScfUliScsii
/* 800272BC  38 60 00 01 */	li r3, 1
lbl_800272C0:
/* 800272C0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 800272C4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 800272C8  39 61 00 40 */	addi r11, r1, 0x40
/* 800272CC  48 33 AF 4D */	bl _restgpr_25
/* 800272D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 800272D4  7C 08 03 A6 */	mtlr r0
/* 800272D8  38 21 00 50 */	addi r1, r1, 0x50
/* 800272DC  4E 80 00 20 */	blr 
