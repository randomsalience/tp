lbl_808624E8:
/* 808624E8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 808624EC  7C 08 02 A6 */	mflr r0
/* 808624F0  90 01 00 64 */	stw r0, 0x64(r1)
/* 808624F4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 808624F8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 808624FC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80862500  F3 C1 00 48 */	psq_st f30, 72(r1), 0, 0 /* qr0 */
/* 80862504  39 61 00 40 */	addi r11, r1, 0x40
/* 80862508  4B AF FC CD */	bl _savegpr_27
/* 8086250C  7C 7B 1B 78 */	mr r27, r3
/* 80862510  3C 60 80 86 */	lis r3, lit_3815@ha /* 0x80862C4C@ha */
/* 80862514  3B E3 2C 4C */	addi r31, r3, lit_3815@l /* 0x80862C4C@l */
/* 80862518  80 7B 25 A0 */	lwz r3, 0x25a0(r27)
/* 8086251C  38 03 00 01 */	addi r0, r3, 1
/* 80862520  90 1B 25 A0 */	stw r0, 0x25a0(r27)
/* 80862524  3C 60 80 87 */	lis r3, data_8086BF70@ha /* 0x8086BF70@ha */
/* 80862528  38 83 BF 70 */	addi r4, r3, data_8086BF70@l /* 0x8086BF70@l */
/* 8086252C  88 64 00 00 */	lbz r3, 0(r4)
/* 80862530  38 03 00 01 */	addi r0, r3, 1
/* 80862534  98 04 00 00 */	stb r0, 0(r4)
/* 80862538  A8 7B 39 9E */	lha r3, 0x399e(r27)
/* 8086253C  2C 03 00 00 */	cmpwi r3, 0
/* 80862540  41 82 00 0C */	beq lbl_8086254C
/* 80862544  38 03 FF FF */	addi r0, r3, -1
/* 80862548  B0 1B 39 9E */	sth r0, 0x399e(r27)
lbl_8086254C:
/* 8086254C  80 1B 04 A4 */	lwz r0, 0x4a4(r27)
/* 80862550  90 01 00 08 */	stw r0, 8(r1)
/* 80862554  3C 60 80 02 */	lis r3, fpcSch_JudgeByID__FPvPv@ha /* 0x80023590@ha */
/* 80862558  38 63 35 90 */	addi r3, r3, fpcSch_JudgeByID__FPvPv@l /* 0x80023590@l */
/* 8086255C  38 81 00 08 */	addi r4, r1, 8
/* 80862560  4B 7B 72 99 */	bl fopAcIt_Judge__FPFPvPv_PvPv
/* 80862564  28 03 00 00 */	cmplwi r3, 0
/* 80862568  41 82 00 34 */	beq lbl_8086259C
/* 8086256C  80 03 1F C4 */	lwz r0, 0x1fc4(r3)
/* 80862570  2C 00 00 00 */	cmpwi r0, 0
/* 80862574  41 82 00 28 */	beq lbl_8086259C
/* 80862578  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 8086257C  D0 1B 39 4C */	stfs f0, 0x394c(r27)
/* 80862580  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80862584  D0 1B 39 50 */	stfs f0, 0x3950(r27)
/* 80862588  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 8086258C  D0 1B 39 58 */	stfs f0, 0x3958(r27)
/* 80862590  C0 1F 00 A4 */	lfs f0, 0xa4(r31)
/* 80862594  D0 1B 39 54 */	stfs f0, 0x3954(r27)
/* 80862598  48 00 00 70 */	b lbl_80862608
lbl_8086259C:
/* 8086259C  C0 7F 00 A8 */	lfs f3, 0xa8(r31)
/* 808625A0  D0 7B 39 4C */	stfs f3, 0x394c(r27)
/* 808625A4  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 808625A8  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 808625AC  C0 1B 39 5C */	lfs f0, 0x395c(r27)
/* 808625B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 808625B4  EC 02 00 2A */	fadds f0, f2, f0
/* 808625B8  D0 1B 39 50 */	stfs f0, 0x3950(r27)
/* 808625BC  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 808625C0  C0 1B 39 5C */	lfs f0, 0x395c(r27)
/* 808625C4  EC 03 00 32 */	fmuls f0, f3, f0
/* 808625C8  EC 01 00 2A */	fadds f0, f1, f0
/* 808625CC  D0 1B 39 58 */	stfs f0, 0x3958(r27)
/* 808625D0  C0 5F 00 B0 */	lfs f2, 0xb0(r31)
/* 808625D4  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 808625D8  C0 1B 39 5C */	lfs f0, 0x395c(r27)
/* 808625DC  EC 01 00 32 */	fmuls f0, f1, f0
/* 808625E0  EC 02 00 28 */	fsubs f0, f2, f0
/* 808625E4  D0 1B 39 54 */	stfs f0, 0x3954(r27)
/* 808625E8  38 7B 39 5C */	addi r3, r27, 0x395c
/* 808625EC  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 808625F0  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 808625F4  4B A0 D4 8D */	bl cLib_addCalc0__FPfff
/* 808625F8  38 7B 39 60 */	addi r3, r27, 0x3960
/* 808625FC  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 80862600  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 80862604  4B A0 D4 7D */	bl cLib_addCalc0__FPfff
lbl_80862608:
/* 80862608  88 1B 39 65 */	lbz r0, 0x3965(r27)
/* 8086260C  28 00 00 00 */	cmplwi r0, 0
/* 80862610  41 82 00 14 */	beq lbl_80862624
/* 80862614  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80862618  D0 1B 39 54 */	stfs f0, 0x3954(r27)
/* 8086261C  C0 1F 00 90 */	lfs f0, 0x90(r31)
/* 80862620  D0 1B 39 58 */	stfs f0, 0x3958(r27)
lbl_80862624:
/* 80862624  7F 63 DB 78 */	mr r3, r27
/* 80862628  4B FF FD FD */	bl mant_move__FP10mant_class
/* 8086262C  38 00 00 00 */	li r0, 0
/* 80862630  98 1B 39 65 */	stb r0, 0x3965(r27)
/* 80862634  98 1B 39 66 */	stb r0, 0x3966(r27)
/* 80862638  C0 1B 04 D0 */	lfs f0, 0x4d0(r27)
/* 8086263C  D0 1B 39 40 */	stfs f0, 0x3940(r27)
/* 80862640  C0 1B 04 D4 */	lfs f0, 0x4d4(r27)
/* 80862644  D0 1B 39 44 */	stfs f0, 0x3944(r27)
/* 80862648  C0 1B 04 D8 */	lfs f0, 0x4d8(r27)
/* 8086264C  D0 1B 39 48 */	stfs f0, 0x3948(r27)
/* 80862650  3B C0 00 00 */	li r30, 0
/* 80862654  88 1B 39 67 */	lbz r0, 0x3967(r27)
/* 80862658  28 00 00 00 */	cmplwi r0, 0
/* 8086265C  41 82 00 80 */	beq lbl_808626DC
/* 80862660  3C 60 80 87 */	lis r3, mant_cut_type@ha /* 0x8086BF74@ha */
/* 80862664  38 83 BF 74 */	addi r4, r3, mant_cut_type@l /* 0x8086BF74@l */
/* 80862668  90 04 00 00 */	stw r0, 0(r4)
/* 8086266C  88 7B 39 68 */	lbz r3, 0x3968(r27)
/* 80862670  28 03 00 0F */	cmplwi r3, 0xf
/* 80862674  40 80 00 60 */	bge lbl_808626D4
/* 80862678  38 03 00 01 */	addi r0, r3, 1
/* 8086267C  98 1B 39 68 */	stb r0, 0x3968(r27)
/* 80862680  80 04 00 00 */	lwz r0, 0(r4)
/* 80862684  2C 00 00 00 */	cmpwi r0, 0
/* 80862688  40 82 00 0C */	bne lbl_80862694
/* 8086268C  3B C0 00 28 */	li r30, 0x28
/* 80862690  48 00 00 18 */	b lbl_808626A8
lbl_80862694:
/* 80862694  2C 00 00 01 */	cmpwi r0, 1
/* 80862698  40 82 00 0C */	bne lbl_808626A4
/* 8086269C  3B C0 00 1E */	li r30, 0x1e
/* 808626A0  48 00 00 08 */	b lbl_808626A8
lbl_808626A4:
/* 808626A4  3B C0 00 14 */	li r30, 0x14
lbl_808626A8:
/* 808626A8  C0 3F 00 B8 */	lfs f1, 0xb8(r31)
/* 808626AC  4B A0 52 A9 */	bl cM_rndF__Ff
/* 808626B0  FC 00 08 1E */	fctiwz f0, f1
/* 808626B4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 808626B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 808626BC  C0 3F 00 BC */	lfs f1, 0xbc(r31)
/* 808626C0  4B A0 52 CD */	bl cM_rndFX__Ff
/* 808626C4  FF E0 08 90 */	fmr f31, f1
/* 808626C8  C0 3F 00 BC */	lfs f1, 0xbc(r31)
/* 808626CC  4B A0 52 C1 */	bl cM_rndFX__Ff
/* 808626D0  FF C0 08 90 */	fmr f30, f1
lbl_808626D4:
/* 808626D4  38 00 00 00 */	li r0, 0
/* 808626D8  98 1B 39 67 */	stb r0, 0x3967(r27)
lbl_808626DC:
/* 808626DC  38 60 00 00 */	li r3, 0
/* 808626E0  57 A5 04 38 */	rlwinm r5, r29, 0, 0x10, 0x1c
/* 808626E4  3C 80 80 44 */	lis r4, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 808626E8  38 04 9A 20 */	addi r0, r4, sincosTable___5JMath@l /* 0x80439A20@l */
/* 808626EC  7D 20 2A 14 */	add r9, r0, r5
/* 808626F0  38 E9 00 04 */	addi r7, r9, 4
/* 808626F4  3C 80 80 87 */	lis r4, mant_cut_type@ha /* 0x8086BF74@ha */
/* 808626F8  81 04 BF 74 */	lwz r8, mant_cut_type@l(r4)  /* 0x8086BF74@l */
/* 808626FC  C0 3F 00 C0 */	lfs f1, 0xc0(r31)
/* 80862700  48 00 01 D4 */	b lbl_808628D4
lbl_80862704:
/* 80862704  C0 09 00 00 */	lfs f0, 0(r9)
/* 80862708  EF FF 00 2A */	fadds f31, f31, f0
/* 8086270C  C0 07 00 00 */	lfs f0, 0(r7)
/* 80862710  EF DE 00 28 */	fsubs f30, f30, f0
/* 80862714  EC 01 F8 2A */	fadds f0, f1, f31
/* 80862718  FC 00 00 1E */	fctiwz f0, f0
/* 8086271C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80862720  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80862724  EC 01 F0 2A */	fadds f0, f1, f30
/* 80862728  FC 00 00 1E */	fctiwz f0, f0
/* 8086272C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80862730  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80862734  54 00 38 30 */	slwi r0, r0, 7
/* 80862738  7C 8A 03 78 */	or r10, r4, r0
/* 8086273C  2C 08 00 00 */	cmpwi r8, 0
/* 80862740  40 82 00 3C */	bne lbl_8086277C
/* 80862744  2C 03 00 03 */	cmpwi r3, 3
/* 80862748  40 81 00 0C */	ble lbl_80862754
/* 8086274C  2C 03 00 24 */	cmpwi r3, 0x24
/* 80862750  41 80 00 0C */	blt lbl_8086275C
lbl_80862754:
/* 80862754  38 00 00 01 */	li r0, 1
/* 80862758  48 00 00 80 */	b lbl_808627D8
lbl_8086275C:
/* 8086275C  2C 03 00 0C */	cmpwi r3, 0xc
/* 80862760  41 80 00 14 */	blt lbl_80862774
/* 80862764  2C 03 00 1C */	cmpwi r3, 0x1c
/* 80862768  41 81 00 0C */	bgt lbl_80862774
/* 8086276C  38 00 00 09 */	li r0, 9
/* 80862770  48 00 00 68 */	b lbl_808627D8
lbl_80862774:
/* 80862774  38 00 00 04 */	li r0, 4
/* 80862778  48 00 00 60 */	b lbl_808627D8
lbl_8086277C:
/* 8086277C  2C 08 00 01 */	cmpwi r8, 1
/* 80862780  40 82 00 3C */	bne lbl_808627BC
/* 80862784  2C 03 00 03 */	cmpwi r3, 3
/* 80862788  40 81 00 0C */	ble lbl_80862794
/* 8086278C  2C 03 00 1A */	cmpwi r3, 0x1a
/* 80862790  41 80 00 0C */	blt lbl_8086279C
lbl_80862794:
/* 80862794  38 00 00 01 */	li r0, 1
/* 80862798  48 00 00 40 */	b lbl_808627D8
lbl_8086279C:
/* 8086279C  2C 03 00 0C */	cmpwi r3, 0xc
/* 808627A0  41 80 00 14 */	blt lbl_808627B4
/* 808627A4  2C 03 00 12 */	cmpwi r3, 0x12
/* 808627A8  41 81 00 0C */	bgt lbl_808627B4
/* 808627AC  38 00 00 09 */	li r0, 9
/* 808627B0  48 00 00 28 */	b lbl_808627D8
lbl_808627B4:
/* 808627B4  38 00 00 04 */	li r0, 4
/* 808627B8  48 00 00 20 */	b lbl_808627D8
lbl_808627BC:
/* 808627BC  2C 03 00 03 */	cmpwi r3, 3
/* 808627C0  40 81 00 0C */	ble lbl_808627CC
/* 808627C4  2C 03 00 10 */	cmpwi r3, 0x10
/* 808627C8  41 80 00 0C */	blt lbl_808627D4
lbl_808627CC:
/* 808627CC  38 00 00 01 */	li r0, 1
/* 808627D0  48 00 00 08 */	b lbl_808627D8
lbl_808627D4:
/* 808627D4  38 00 00 04 */	li r0, 4
lbl_808627D8:
/* 808627D8  39 60 00 00 */	li r11, 0
/* 808627DC  7C 09 03 A6 */	mtctr r0
/* 808627E0  2C 00 00 00 */	cmpwi r0, 0
/* 808627E4  40 81 00 EC */	ble lbl_808628D0
lbl_808627E8:
/* 808627E8  2C 0B 00 00 */	cmpwi r11, 0
/* 808627EC  40 82 00 0C */	bne lbl_808627F8
/* 808627F0  7D 5C 53 78 */	mr r28, r10
/* 808627F4  48 00 00 8C */	b lbl_80862880
lbl_808627F8:
/* 808627F8  2C 0B 00 01 */	cmpwi r11, 1
/* 808627FC  40 82 00 0C */	bne lbl_80862808
/* 80862800  3B 8A 00 01 */	addi r28, r10, 1
/* 80862804  48 00 00 7C */	b lbl_80862880
lbl_80862808:
/* 80862808  2C 0B 00 02 */	cmpwi r11, 2
/* 8086280C  40 82 00 0C */	bne lbl_80862818
/* 80862810  3B 8A 00 80 */	addi r28, r10, 0x80
/* 80862814  48 00 00 6C */	b lbl_80862880
lbl_80862818:
/* 80862818  2C 0B 00 03 */	cmpwi r11, 3
/* 8086281C  40 82 00 0C */	bne lbl_80862828
/* 80862820  3B 8A 00 81 */	addi r28, r10, 0x81
/* 80862824  48 00 00 5C */	b lbl_80862880
lbl_80862828:
/* 80862828  40 82 00 0C */	bne lbl_80862834
/* 8086282C  3B 8A 00 81 */	addi r28, r10, 0x81
/* 80862830  48 00 00 50 */	b lbl_80862880
lbl_80862834:
/* 80862834  2C 0B 00 04 */	cmpwi r11, 4
/* 80862838  40 82 00 0C */	bne lbl_80862844
/* 8086283C  3B 8A 00 02 */	addi r28, r10, 2
/* 80862840  48 00 00 40 */	b lbl_80862880
lbl_80862844:
/* 80862844  2C 0B 00 05 */	cmpwi r11, 5
/* 80862848  40 82 00 0C */	bne lbl_80862854
/* 8086284C  3B 8A 00 82 */	addi r28, r10, 0x82
/* 80862850  48 00 00 30 */	b lbl_80862880
lbl_80862854:
/* 80862854  2C 0B 00 06 */	cmpwi r11, 6
/* 80862858  40 82 00 0C */	bne lbl_80862864
/* 8086285C  3B 8A 01 02 */	addi r28, r10, 0x102
/* 80862860  48 00 00 20 */	b lbl_80862880
lbl_80862864:
/* 80862864  2C 0B 00 07 */	cmpwi r11, 7
/* 80862868  40 82 00 0C */	bne lbl_80862874
/* 8086286C  3B 8A 01 01 */	addi r28, r10, 0x101
/* 80862870  48 00 00 10 */	b lbl_80862880
lbl_80862874:
/* 80862874  2C 0B 00 08 */	cmpwi r11, 8
/* 80862878  40 82 00 08 */	bne lbl_80862880
/* 8086287C  3B 8A 01 00 */	addi r28, r10, 0x100
lbl_80862880:
/* 80862880  2C 1C 00 00 */	cmpwi r28, 0
/* 80862884  41 80 00 44 */	blt lbl_808628C8
/* 80862888  2C 1C 40 00 */	cmpwi r28, 0x4000
/* 8086288C  40 80 00 3C */	bge lbl_808628C8
/* 80862890  57 86 04 AC */	rlwinm r6, r28, 0, 0x12, 0x16
/* 80862894  57 85 E6 F8 */	rlwinm r5, r28, 0x1c, 0x1b, 0x1c
/* 80862898  57 84 07 7E */	clrlwi r4, r28, 0x1d
/* 8086289C  57 80 15 F4 */	rlwinm r0, r28, 2, 0x17, 0x1a
/* 808628A0  7C 00 2A 14 */	add r0, r0, r5
/* 808628A4  7C A0 32 14 */	add r5, r0, r6
/* 808628A8  7C A4 2A 14 */	add r5, r4, r5
/* 808628AC  38 00 00 00 */	li r0, 0
/* 808628B0  3C 80 80 86 */	lis r4, l_Egnd_mantTEX_U@ha /* 0x80866D40@ha */
/* 808628B4  38 84 6D 40 */	addi r4, r4, l_Egnd_mantTEX_U@l /* 0x80866D40@l */
/* 808628B8  7C 04 29 AE */	stbx r0, r4, r5
/* 808628BC  3C 80 80 86 */	lis r4, l_Egnd_mantTEX@ha /* 0x80862D40@ha */
/* 808628C0  38 84 2D 40 */	addi r4, r4, l_Egnd_mantTEX@l /* 0x80862D40@l */
/* 808628C4  7C 04 29 AE */	stbx r0, r4, r5
lbl_808628C8:
/* 808628C8  39 6B 00 01 */	addi r11, r11, 1
/* 808628CC  42 00 FF 1C */	bdnz lbl_808627E8
lbl_808628D0:
/* 808628D0  38 63 00 01 */	addi r3, r3, 1
lbl_808628D4:
/* 808628D4  7C 03 F0 00 */	cmpw r3, r30
/* 808628D8  41 80 FE 2C */	blt lbl_80862704
/* 808628DC  38 60 00 01 */	li r3, 1
/* 808628E0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 808628E4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 808628E8  E3 C1 00 48 */	psq_l f30, 72(r1), 0, 0 /* qr0 */
/* 808628EC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 808628F0  39 61 00 40 */	addi r11, r1, 0x40
/* 808628F4  4B AF F9 2D */	bl _restgpr_27
/* 808628F8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 808628FC  7C 08 03 A6 */	mtlr r0
/* 80862900  38 21 00 60 */	addi r1, r1, 0x60
/* 80862904  4E 80 00 20 */	blr 
