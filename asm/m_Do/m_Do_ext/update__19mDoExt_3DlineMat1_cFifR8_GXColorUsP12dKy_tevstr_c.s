lbl_8001373C:
/* 8001373C  94 21 FE 00 */	stwu r1, -0x200(r1)
/* 80013740  7C 08 02 A6 */	mflr r0
/* 80013744  90 01 02 04 */	stw r0, 0x204(r1)
/* 80013748  DB E1 01 F0 */	stfd f31, 0x1f0(r1)
/* 8001374C  F3 E1 01 F8 */	psq_st f31, 504(r1), 0, 0 /* qr0 */
/* 80013750  DB C1 01 E0 */	stfd f30, 0x1e0(r1)
/* 80013754  F3 C1 01 E8 */	psq_st f30, 488(r1), 0, 0 /* qr0 */
/* 80013758  DB A1 01 D0 */	stfd f29, 0x1d0(r1)
/* 8001375C  F3 A1 01 D8 */	psq_st f29, 472(r1), 0, 0 /* qr0 */
/* 80013760  DB 81 01 C0 */	stfd f28, 0x1c0(r1)
/* 80013764  F3 81 01 C8 */	psq_st f28, 456(r1), 0, 0 /* qr0 */
/* 80013768  DB 61 01 B0 */	stfd f27, 0x1b0(r1)
/* 8001376C  F3 61 01 B8 */	psq_st f27, 440(r1), 0, 0 /* qr0 */
/* 80013770  DB 41 01 A0 */	stfd f26, 0x1a0(r1)
/* 80013774  F3 41 01 A8 */	psq_st f26, 424(r1), 0, 0 /* qr0 */
/* 80013778  DB 21 01 90 */	stfd f25, 0x190(r1)
/* 8001377C  F3 21 01 98 */	psq_st f25, 408(r1), 0, 0 /* qr0 */
/* 80013780  DB 01 01 80 */	stfd f24, 0x180(r1)
/* 80013784  F3 01 01 88 */	psq_st f24, 392(r1), 0, 0 /* qr0 */
/* 80013788  39 61 01 80 */	addi r11, r1, 0x180
/* 8001378C  48 34 EA 19 */	bl _savegpr_15
/* 80013790  7C 6F 1B 78 */	mr r15, r3
/* 80013794  FF 00 08 90 */	fmr f24, f1
/* 80013798  88 05 00 00 */	lbz r0, 0(r5)
/* 8001379C  98 03 00 28 */	stb r0, 0x28(r3)
/* 800137A0  88 05 00 01 */	lbz r0, 1(r5)
/* 800137A4  98 03 00 29 */	stb r0, 0x29(r3)
/* 800137A8  88 05 00 02 */	lbz r0, 2(r5)
/* 800137AC  98 03 00 2A */	stb r0, 0x2a(r3)
/* 800137B0  88 05 00 03 */	lbz r0, 3(r5)
/* 800137B4  98 03 00 2B */	stb r0, 0x2b(r3)
/* 800137B8  90 E3 00 2C */	stw r7, 0x2c(r3)
/* 800137BC  2C 04 00 00 */	cmpwi r4, 0
/* 800137C0  40 80 00 10 */	bge lbl_800137D0
/* 800137C4  A0 0F 00 32 */	lhz r0, 0x32(r15)
/* 800137C8  B0 0F 00 34 */	sth r0, 0x34(r15)
/* 800137CC  48 00 00 1C */	b lbl_800137E8
lbl_800137D0:
/* 800137D0  A0 0F 00 32 */	lhz r0, 0x32(r15)
/* 800137D4  7C 04 00 00 */	cmpw r4, r0
/* 800137D8  40 81 00 0C */	ble lbl_800137E4
/* 800137DC  B0 0F 00 34 */	sth r0, 0x34(r15)
/* 800137E0  48 00 00 08 */	b lbl_800137E8
lbl_800137E4:
/* 800137E4  B0 8F 00 34 */	sth r4, 0x34(r15)
lbl_800137E8:
/* 800137E8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800137EC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 800137F0  83 E3 61 B0 */	lwz r31, 0x61b0(r3)
/* 800137F4  83 AF 00 38 */	lwz r29, 0x38(r15)
/* 800137F8  54 C0 04 3F */	clrlwi. r0, r6, 0x10
/* 800137FC  41 82 00 24 */	beq lbl_80013820
/* 80013800  C8 22 81 38 */	lfd f1, lit_7406(r2)
/* 80013804  90 01 01 1C */	stw r0, 0x11c(r1)
/* 80013808  3C 00 43 30 */	lis r0, 0x4330
/* 8001380C  90 01 01 18 */	stw r0, 0x118(r1)
/* 80013810  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 80013814  EC 00 08 28 */	fsubs f0, f0, f1
/* 80013818  EF 78 00 24 */	fdivs f27, f24, f0
/* 8001381C  48 00 00 08 */	b lbl_80013824
lbl_80013820:
/* 80013820  C3 62 81 1C */	lfs f27, lit_3876(r2)
lbl_80013824:
/* 80013824  A0 0F 00 34 */	lhz r0, 0x34(r15)
/* 80013828  54 03 08 3C */	slwi r3, r0, 1
/* 8001382C  1F 83 00 0C */	mulli r28, r3, 0xc
/* 80013830  1F 63 00 03 */	mulli r27, r3, 3
/* 80013834  54 1A 20 36 */	slwi r26, r0, 4
/* 80013838  C3 22 81 1C */	lfs f25, lit_3876(r2)
/* 8001383C  3A 20 00 00 */	li r17, 0
/* 80013840  54 DE 04 3E */	clrlwi r30, r6, 0x10
/* 80013844  FF A0 C8 90 */	fmr f29, f25
/* 80013848  C3 C2 81 68 */	lfs f30, lit_7924(r2)
/* 8001384C  C3 E2 81 30 */	lfs f31, lit_7404(r2)
/* 80013850  FF 80 C8 90 */	fmr f28, f25
/* 80013854  48 00 06 F8 */	b lbl_80013F4C
lbl_80013858:
/* 80013858  83 3D 00 00 */	lwz r25, 0(r29)
/* 8001385C  88 0F 00 36 */	lbz r0, 0x36(r15)
/* 80013860  54 00 10 3A */	slwi r0, r0, 2
/* 80013864  7C 7D 02 14 */	add r3, r29, r0
/* 80013868  82 E3 00 08 */	lwz r23, 8(r3)
/* 8001386C  82 83 00 10 */	lwz r20, 0x10(r3)
/* 80013870  7E 96 A3 78 */	mr r22, r20
/* 80013874  3A B4 00 03 */	addi r21, r20, 3
/* 80013878  82 43 00 18 */	lwz r18, 0x18(r3)
/* 8001387C  FF 40 C0 90 */	fmr f26, f24
/* 80013880  D3 32 00 04 */	stfs f25, 4(r18)
/* 80013884  D3 32 00 0C */	stfs f25, 0xc(r18)
/* 80013888  38 61 00 DC */	addi r3, r1, 0xdc
/* 8001388C  38 99 00 0C */	addi r4, r25, 0xc
/* 80013890  7F 25 CB 78 */	mr r5, r25
/* 80013894  3A 72 00 10 */	addi r19, r18, 0x10
/* 80013898  48 25 32 9D */	bl __mi__4cXyzCFRC3Vec
/* 8001389C  C0 01 00 DC */	lfs f0, 0xdc(r1)
/* 800138A0  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 800138A4  C0 01 00 E0 */	lfs f0, 0xe0(r1)
/* 800138A8  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 800138AC  C0 01 00 E4 */	lfs f0, 0xe4(r1)
/* 800138B0  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 800138B4  38 61 01 00 */	addi r3, r1, 0x100
/* 800138B8  48 33 38 81 */	bl PSVECSquareMag
/* 800138BC  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 800138C0  40 81 00 58 */	ble lbl_80013918
/* 800138C4  FC 00 08 34 */	frsqrte f0, f1
/* 800138C8  C8 82 81 48 */	lfd f4, lit_7919(r2)
/* 800138CC  FC 44 00 32 */	fmul f2, f4, f0
/* 800138D0  C8 62 81 50 */	lfd f3, lit_7920(r2)
/* 800138D4  FC 00 00 32 */	fmul f0, f0, f0
/* 800138D8  FC 01 00 32 */	fmul f0, f1, f0
/* 800138DC  FC 03 00 28 */	fsub f0, f3, f0
/* 800138E0  FC 02 00 32 */	fmul f0, f2, f0
/* 800138E4  FC 44 00 32 */	fmul f2, f4, f0
/* 800138E8  FC 00 00 32 */	fmul f0, f0, f0
/* 800138EC  FC 01 00 32 */	fmul f0, f1, f0
/* 800138F0  FC 03 00 28 */	fsub f0, f3, f0
/* 800138F4  FC 02 00 32 */	fmul f0, f2, f0
/* 800138F8  FC 44 00 32 */	fmul f2, f4, f0
/* 800138FC  FC 00 00 32 */	fmul f0, f0, f0
/* 80013900  FC 01 00 32 */	fmul f0, f1, f0
/* 80013904  FC 03 00 28 */	fsub f0, f3, f0
/* 80013908  FC 02 00 32 */	fmul f0, f2, f0
/* 8001390C  FC 21 00 32 */	fmul f1, f1, f0
/* 80013910  FC 20 08 18 */	frsp f1, f1
/* 80013914  48 00 00 88 */	b lbl_8001399C
lbl_80013918:
/* 80013918  C8 02 81 58 */	lfd f0, lit_7921(r2)
/* 8001391C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80013920  40 80 00 10 */	bge lbl_80013930
/* 80013924  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80013928  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 8001392C  48 00 00 70 */	b lbl_8001399C
lbl_80013930:
/* 80013930  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80013934  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80013938  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8001393C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80013940  7C 03 00 00 */	cmpw r3, r0
/* 80013944  41 82 00 14 */	beq lbl_80013958
/* 80013948  40 80 00 40 */	bge lbl_80013988
/* 8001394C  2C 03 00 00 */	cmpwi r3, 0
/* 80013950  41 82 00 20 */	beq lbl_80013970
/* 80013954  48 00 00 34 */	b lbl_80013988
lbl_80013958:
/* 80013958  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8001395C  41 82 00 0C */	beq lbl_80013968
/* 80013960  38 00 00 01 */	li r0, 1
/* 80013964  48 00 00 28 */	b lbl_8001398C
lbl_80013968:
/* 80013968  38 00 00 02 */	li r0, 2
/* 8001396C  48 00 00 20 */	b lbl_8001398C
lbl_80013970:
/* 80013970  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80013974  41 82 00 0C */	beq lbl_80013980
/* 80013978  38 00 00 05 */	li r0, 5
/* 8001397C  48 00 00 10 */	b lbl_8001398C
lbl_80013980:
/* 80013980  38 00 00 03 */	li r0, 3
/* 80013984  48 00 00 08 */	b lbl_8001398C
lbl_80013988:
/* 80013988  38 00 00 04 */	li r0, 4
lbl_8001398C:
/* 8001398C  2C 00 00 01 */	cmpwi r0, 1
/* 80013990  40 82 00 0C */	bne lbl_8001399C
/* 80013994  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80013998  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_8001399C:
/* 8001399C  FC 18 F0 40 */	fcmpo cr0, f24, f30
/* 800139A0  40 80 00 14 */	bge lbl_800139B4
/* 800139A4  C0 02 81 60 */	lfs f0, lit_7922(r2)
/* 800139A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 800139AC  EF 39 00 2A */	fadds f25, f25, f0
/* 800139B0  48 00 00 18 */	b lbl_800139C8
lbl_800139B4:
/* 800139B4  C0 02 81 64 */	lfs f0, lit_7923(r2)
/* 800139B8  EC 20 00 72 */	fmuls f1, f0, f1
/* 800139BC  EC 1E C0 24 */	fdivs f0, f30, f24
/* 800139C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800139C4  EF 39 00 2A */	fadds f25, f25, f0
lbl_800139C8:
/* 800139C8  38 61 00 D0 */	addi r3, r1, 0xd0
/* 800139CC  7F 24 CB 78 */	mr r4, r25
/* 800139D0  38 BF 00 D8 */	addi r5, r31, 0xd8
/* 800139D4  48 25 31 61 */	bl __mi__4cXyzCFRC3Vec
/* 800139D8  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 800139DC  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 800139E0  C0 01 00 D4 */	lfs f0, 0xd4(r1)
/* 800139E4  D0 01 01 10 */	stfs f0, 0x110(r1)
/* 800139E8  C0 01 00 D8 */	lfs f0, 0xd8(r1)
/* 800139EC  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 800139F0  38 61 00 C4 */	addi r3, r1, 0xc4
/* 800139F4  38 81 01 00 */	addi r4, r1, 0x100
/* 800139F8  38 A1 01 0C */	addi r5, r1, 0x10c
/* 800139FC  48 25 32 C1 */	bl outprod__4cXyzCFRC3Vec
/* 80013A00  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 80013A04  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80013A08  C0 01 00 C8 */	lfs f0, 0xc8(r1)
/* 80013A0C  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80013A10  C0 01 00 CC */	lfs f0, 0xcc(r1)
/* 80013A14  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80013A18  38 61 00 B8 */	addi r3, r1, 0xb8
/* 80013A1C  38 81 01 00 */	addi r4, r1, 0x100
/* 80013A20  48 25 35 29 */	bl normalizeZP__4cXyzFv
/* 80013A24  C0 01 01 00 */	lfs f0, 0x100(r1)
/* 80013A28  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80013A2C  FC 00 00 1E */	fctiwz f0, f0
/* 80013A30  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 80013A34  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 80013A38  98 14 00 00 */	stb r0, 0(r20)
/* 80013A3C  C0 01 01 04 */	lfs f0, 0x104(r1)
/* 80013A40  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80013A44  FC 00 00 1E */	fctiwz f0, f0
/* 80013A48  D8 01 01 20 */	stfd f0, 0x120(r1)
/* 80013A4C  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80013A50  98 14 00 01 */	stb r0, 1(r20)
/* 80013A54  C0 01 01 08 */	lfs f0, 0x108(r1)
/* 80013A58  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80013A5C  FC 00 00 1E */	fctiwz f0, f0
/* 80013A60  D8 01 01 28 */	stfd f0, 0x128(r1)
/* 80013A64  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 80013A68  98 14 00 02 */	stb r0, 2(r20)
/* 80013A6C  88 14 00 00 */	lbz r0, 0(r20)
/* 80013A70  7C 00 00 D0 */	neg r0, r0
/* 80013A74  98 15 00 00 */	stb r0, 0(r21)
/* 80013A78  88 14 00 01 */	lbz r0, 1(r20)
/* 80013A7C  7C 00 00 D0 */	neg r0, r0
/* 80013A80  98 15 00 01 */	stb r0, 1(r21)
/* 80013A84  88 14 00 02 */	lbz r0, 2(r20)
/* 80013A88  7C 00 00 D0 */	neg r0, r0
/* 80013A8C  98 15 00 02 */	stb r0, 2(r21)
/* 80013A90  38 61 01 00 */	addi r3, r1, 0x100
/* 80013A94  7C 64 1B 78 */	mr r4, r3
/* 80013A98  FC 20 C0 90 */	fmr f1, f24
/* 80013A9C  48 33 36 3D */	bl PSVECScale
/* 80013AA0  38 61 00 AC */	addi r3, r1, 0xac
/* 80013AA4  7F 24 CB 78 */	mr r4, r25
/* 80013AA8  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013AAC  48 25 30 39 */	bl __pl__4cXyzCFRC3Vec
/* 80013AB0  C0 01 00 AC */	lfs f0, 0xac(r1)
/* 80013AB4  D0 17 00 00 */	stfs f0, 0(r23)
/* 80013AB8  C0 01 00 B0 */	lfs f0, 0xb0(r1)
/* 80013ABC  D0 17 00 04 */	stfs f0, 4(r23)
/* 80013AC0  C0 01 00 B4 */	lfs f0, 0xb4(r1)
/* 80013AC4  D0 17 00 08 */	stfs f0, 8(r23)
/* 80013AC8  38 61 00 A0 */	addi r3, r1, 0xa0
/* 80013ACC  7F 24 CB 78 */	mr r4, r25
/* 80013AD0  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013AD4  48 25 30 61 */	bl __mi__4cXyzCFRC3Vec
/* 80013AD8  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 80013ADC  D0 17 00 0C */	stfs f0, 0xc(r23)
/* 80013AE0  C0 01 00 A4 */	lfs f0, 0xa4(r1)
/* 80013AE4  D0 17 00 10 */	stfs f0, 0x10(r23)
/* 80013AE8  C0 01 00 A8 */	lfs f0, 0xa8(r1)
/* 80013AEC  D0 17 00 14 */	stfs f0, 0x14(r23)
/* 80013AF0  3B 39 00 0C */	addi r25, r25, 0xc
/* 80013AF4  38 61 00 94 */	addi r3, r1, 0x94
/* 80013AF8  7F 24 CB 78 */	mr r4, r25
/* 80013AFC  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013B00  3B 17 00 18 */	addi r24, r23, 0x18
/* 80013B04  48 25 2F E1 */	bl __pl__4cXyzCFRC3Vec
/* 80013B08  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80013B0C  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 80013B10  C0 01 00 98 */	lfs f0, 0x98(r1)
/* 80013B14  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 80013B18  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 80013B1C  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80013B20  38 61 00 88 */	addi r3, r1, 0x88
/* 80013B24  7F 24 CB 78 */	mr r4, r25
/* 80013B28  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013B2C  48 25 30 09 */	bl __mi__4cXyzCFRC3Vec
/* 80013B30  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 80013B34  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 80013B38  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 80013B3C  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 80013B40  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 80013B44  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 80013B48  A0 6F 00 34 */	lhz r3, 0x34(r15)
/* 80013B4C  3A 03 FF FE */	addi r16, r3, -2
/* 80013B50  48 00 03 24 */	b lbl_80013E74
lbl_80013B54:
/* 80013B54  7C 10 F0 00 */	cmpw r16, r30
/* 80013B58  40 80 00 08 */	bge lbl_80013B60
/* 80013B5C  EF 5A D8 28 */	fsubs f26, f26, f27
lbl_80013B60:
/* 80013B60  D3 33 00 04 */	stfs f25, 4(r19)
/* 80013B64  D3 33 00 0C */	stfs f25, 0xc(r19)
/* 80013B68  38 61 00 7C */	addi r3, r1, 0x7c
/* 80013B6C  38 99 00 0C */	addi r4, r25, 0xc
/* 80013B70  7F 25 CB 78 */	mr r5, r25
/* 80013B74  3A 73 00 10 */	addi r19, r19, 0x10
/* 80013B78  48 25 2F BD */	bl __mi__4cXyzCFRC3Vec
/* 80013B7C  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 80013B80  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80013B84  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80013B88  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80013B8C  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80013B90  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80013B94  38 61 01 00 */	addi r3, r1, 0x100
/* 80013B98  48 33 35 A1 */	bl PSVECSquareMag
/* 80013B9C  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 80013BA0  40 81 00 58 */	ble lbl_80013BF8
/* 80013BA4  FC 00 08 34 */	frsqrte f0, f1
/* 80013BA8  C8 82 81 48 */	lfd f4, lit_7919(r2)
/* 80013BAC  FC 44 00 32 */	fmul f2, f4, f0
/* 80013BB0  C8 62 81 50 */	lfd f3, lit_7920(r2)
/* 80013BB4  FC 00 00 32 */	fmul f0, f0, f0
/* 80013BB8  FC 01 00 32 */	fmul f0, f1, f0
/* 80013BBC  FC 03 00 28 */	fsub f0, f3, f0
/* 80013BC0  FC 02 00 32 */	fmul f0, f2, f0
/* 80013BC4  FC 44 00 32 */	fmul f2, f4, f0
/* 80013BC8  FC 00 00 32 */	fmul f0, f0, f0
/* 80013BCC  FC 01 00 32 */	fmul f0, f1, f0
/* 80013BD0  FC 03 00 28 */	fsub f0, f3, f0
/* 80013BD4  FC 02 00 32 */	fmul f0, f2, f0
/* 80013BD8  FC 44 00 32 */	fmul f2, f4, f0
/* 80013BDC  FC 00 00 32 */	fmul f0, f0, f0
/* 80013BE0  FC 01 00 32 */	fmul f0, f1, f0
/* 80013BE4  FC 03 00 28 */	fsub f0, f3, f0
/* 80013BE8  FC 02 00 32 */	fmul f0, f2, f0
/* 80013BEC  FC 21 00 32 */	fmul f1, f1, f0
/* 80013BF0  FC 20 08 18 */	frsp f1, f1
/* 80013BF4  48 00 00 88 */	b lbl_80013C7C
lbl_80013BF8:
/* 80013BF8  C8 02 81 58 */	lfd f0, lit_7921(r2)
/* 80013BFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80013C00  40 80 00 10 */	bge lbl_80013C10
/* 80013C04  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80013C08  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80013C0C  48 00 00 70 */	b lbl_80013C7C
lbl_80013C10:
/* 80013C10  D0 21 00 08 */	stfs f1, 8(r1)
/* 80013C14  80 81 00 08 */	lwz r4, 8(r1)
/* 80013C18  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80013C1C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80013C20  7C 03 00 00 */	cmpw r3, r0
/* 80013C24  41 82 00 14 */	beq lbl_80013C38
/* 80013C28  40 80 00 40 */	bge lbl_80013C68
/* 80013C2C  2C 03 00 00 */	cmpwi r3, 0
/* 80013C30  41 82 00 20 */	beq lbl_80013C50
/* 80013C34  48 00 00 34 */	b lbl_80013C68
lbl_80013C38:
/* 80013C38  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80013C3C  41 82 00 0C */	beq lbl_80013C48
/* 80013C40  38 00 00 01 */	li r0, 1
/* 80013C44  48 00 00 28 */	b lbl_80013C6C
lbl_80013C48:
/* 80013C48  38 00 00 02 */	li r0, 2
/* 80013C4C  48 00 00 20 */	b lbl_80013C6C
lbl_80013C50:
/* 80013C50  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80013C54  41 82 00 0C */	beq lbl_80013C60
/* 80013C58  38 00 00 05 */	li r0, 5
/* 80013C5C  48 00 00 10 */	b lbl_80013C6C
lbl_80013C60:
/* 80013C60  38 00 00 03 */	li r0, 3
/* 80013C64  48 00 00 08 */	b lbl_80013C6C
lbl_80013C68:
/* 80013C68  38 00 00 04 */	li r0, 4
lbl_80013C6C:
/* 80013C6C  2C 00 00 01 */	cmpwi r0, 1
/* 80013C70  40 82 00 0C */	bne lbl_80013C7C
/* 80013C74  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80013C78  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80013C7C:
/* 80013C7C  FC 18 F0 40 */	fcmpo cr0, f24, f30
/* 80013C80  40 80 00 14 */	bge lbl_80013C94
/* 80013C84  C0 02 81 60 */	lfs f0, lit_7922(r2)
/* 80013C88  EC 00 00 72 */	fmuls f0, f0, f1
/* 80013C8C  EF 39 00 2A */	fadds f25, f25, f0
/* 80013C90  48 00 00 18 */	b lbl_80013CA8
lbl_80013C94:
/* 80013C94  C0 02 81 64 */	lfs f0, lit_7923(r2)
/* 80013C98  EC 20 00 72 */	fmuls f1, f0, f1
/* 80013C9C  EC 1E C0 24 */	fdivs f0, f30, f24
/* 80013CA0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80013CA4  EF 39 00 2A */	fadds f25, f25, f0
lbl_80013CA8:
/* 80013CA8  38 61 00 70 */	addi r3, r1, 0x70
/* 80013CAC  7F 24 CB 78 */	mr r4, r25
/* 80013CB0  38 BF 00 D8 */	addi r5, r31, 0xd8
/* 80013CB4  48 25 2E 81 */	bl __mi__4cXyzCFRC3Vec
/* 80013CB8  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80013CBC  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 80013CC0  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 80013CC4  D0 01 01 10 */	stfs f0, 0x110(r1)
/* 80013CC8  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 80013CCC  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 80013CD0  38 61 00 64 */	addi r3, r1, 0x64
/* 80013CD4  38 81 01 00 */	addi r4, r1, 0x100
/* 80013CD8  38 A1 01 0C */	addi r5, r1, 0x10c
/* 80013CDC  48 25 2F E1 */	bl outprod__4cXyzCFRC3Vec
/* 80013CE0  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 80013CE4  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80013CE8  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80013CEC  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80013CF0  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 80013CF4  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80013CF8  38 61 00 58 */	addi r3, r1, 0x58
/* 80013CFC  38 81 01 00 */	addi r4, r1, 0x100
/* 80013D00  48 25 32 49 */	bl normalizeZP__4cXyzFv
/* 80013D04  C0 01 01 00 */	lfs f0, 0x100(r1)
/* 80013D08  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80013D0C  FC 00 00 1E */	fctiwz f0, f0
/* 80013D10  D8 01 01 28 */	stfd f0, 0x128(r1)
/* 80013D14  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 80013D18  98 16 00 06 */	stb r0, 6(r22)
/* 80013D1C  C0 01 01 04 */	lfs f0, 0x104(r1)
/* 80013D20  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80013D24  FC 00 00 1E */	fctiwz f0, f0
/* 80013D28  D8 01 01 20 */	stfd f0, 0x120(r1)
/* 80013D2C  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80013D30  98 16 00 07 */	stb r0, 7(r22)
/* 80013D34  C0 01 01 08 */	lfs f0, 0x108(r1)
/* 80013D38  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80013D3C  FC 00 00 1E */	fctiwz f0, f0
/* 80013D40  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 80013D44  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 80013D48  98 16 00 08 */	stb r0, 8(r22)
/* 80013D4C  88 16 00 06 */	lbz r0, 6(r22)
/* 80013D50  7C 00 00 D0 */	neg r0, r0
/* 80013D54  98 15 00 06 */	stb r0, 6(r21)
/* 80013D58  88 16 00 07 */	lbz r0, 7(r22)
/* 80013D5C  7C 00 00 D0 */	neg r0, r0
/* 80013D60  98 15 00 07 */	stb r0, 7(r21)
/* 80013D64  88 16 00 08 */	lbz r0, 8(r22)
/* 80013D68  7C 00 00 D0 */	neg r0, r0
/* 80013D6C  98 15 00 08 */	stb r0, 8(r21)
/* 80013D70  38 61 01 00 */	addi r3, r1, 0x100
/* 80013D74  7C 64 1B 78 */	mr r4, r3
/* 80013D78  FC 20 D0 90 */	fmr f1, f26
/* 80013D7C  3A D6 00 06 */	addi r22, r22, 6
/* 80013D80  3A B5 00 06 */	addi r21, r21, 6
/* 80013D84  48 33 33 55 */	bl PSVECScale
/* 80013D88  38 61 00 4C */	addi r3, r1, 0x4c
/* 80013D8C  7F 24 CB 78 */	mr r4, r25
/* 80013D90  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013D94  48 25 2D 51 */	bl __pl__4cXyzCFRC3Vec
/* 80013D98  38 61 00 F4 */	addi r3, r1, 0xf4
/* 80013D9C  38 81 00 4C */	addi r4, r1, 0x4c
/* 80013DA0  7C 65 1B 78 */	mr r5, r3
/* 80013DA4  48 33 32 ED */	bl PSVECAdd
/* 80013DA8  38 61 00 40 */	addi r3, r1, 0x40
/* 80013DAC  7F 24 CB 78 */	mr r4, r25
/* 80013DB0  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013DB4  48 25 2D 81 */	bl __mi__4cXyzCFRC3Vec
/* 80013DB8  38 61 00 E8 */	addi r3, r1, 0xe8
/* 80013DBC  38 81 00 40 */	addi r4, r1, 0x40
/* 80013DC0  7C 65 1B 78 */	mr r5, r3
/* 80013DC4  48 33 32 CD */	bl PSVECAdd
/* 80013DC8  38 61 00 34 */	addi r3, r1, 0x34
/* 80013DCC  38 81 00 F4 */	addi r4, r1, 0xf4
/* 80013DD0  C0 22 81 2C */	lfs f1, lit_6819(r2)
/* 80013DD4  48 25 2D B1 */	bl __ml__4cXyzCFf
/* 80013DD8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80013DDC  D0 18 00 00 */	stfs f0, 0(r24)
/* 80013DE0  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80013DE4  D0 18 00 04 */	stfs f0, 4(r24)
/* 80013DE8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80013DEC  D0 18 00 08 */	stfs f0, 8(r24)
/* 80013DF0  38 61 00 28 */	addi r3, r1, 0x28
/* 80013DF4  38 81 00 E8 */	addi r4, r1, 0xe8
/* 80013DF8  C0 22 81 2C */	lfs f1, lit_6819(r2)
/* 80013DFC  48 25 2D 89 */	bl __ml__4cXyzCFf
/* 80013E00  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80013E04  D0 18 00 0C */	stfs f0, 0xc(r24)
/* 80013E08  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80013E0C  D0 18 00 10 */	stfs f0, 0x10(r24)
/* 80013E10  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80013E14  D0 18 00 14 */	stfs f0, 0x14(r24)
/* 80013E18  3B 39 00 0C */	addi r25, r25, 0xc
/* 80013E1C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80013E20  7F 24 CB 78 */	mr r4, r25
/* 80013E24  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013E28  3B 18 00 18 */	addi r24, r24, 0x18
/* 80013E2C  48 25 2C B9 */	bl __pl__4cXyzCFRC3Vec
/* 80013E30  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80013E34  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 80013E38  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80013E3C  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 80013E40  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80013E44  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80013E48  38 61 00 10 */	addi r3, r1, 0x10
/* 80013E4C  7F 24 CB 78 */	mr r4, r25
/* 80013E50  38 A1 01 00 */	addi r5, r1, 0x100
/* 80013E54  48 25 2C E1 */	bl __mi__4cXyzCFRC3Vec
/* 80013E58  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80013E5C  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 80013E60  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80013E64  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 80013E68  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80013E6C  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 80013E70  3A 10 FF FF */	addi r16, r16, -1
lbl_80013E74:
/* 80013E74  2C 10 00 00 */	cmpwi r16, 0
/* 80013E78  41 81 FC DC */	bgt lbl_80013B54
/* 80013E7C  D3 33 00 04 */	stfs f25, 4(r19)
/* 80013E80  D3 33 00 0C */	stfs f25, 0xc(r19)
/* 80013E84  88 16 00 00 */	lbz r0, 0(r22)
/* 80013E88  98 15 00 03 */	stb r0, 3(r21)
/* 80013E8C  88 16 00 01 */	lbz r0, 1(r22)
/* 80013E90  98 15 00 04 */	stb r0, 4(r21)
/* 80013E94  88 16 00 02 */	lbz r0, 2(r22)
/* 80013E98  98 15 00 05 */	stb r0, 5(r21)
/* 80013E9C  88 16 00 03 */	lbz r0, 3(r22)
/* 80013EA0  98 15 00 06 */	stb r0, 6(r21)
/* 80013EA4  88 16 00 04 */	lbz r0, 4(r22)
/* 80013EA8  98 15 00 07 */	stb r0, 7(r21)
/* 80013EAC  88 16 00 05 */	lbz r0, 5(r22)
/* 80013EB0  98 15 00 08 */	stb r0, 8(r21)
/* 80013EB4  28 1E 00 00 */	cmplwi r30, 0
/* 80013EB8  41 82 00 38 */	beq lbl_80013EF0
/* 80013EBC  C0 19 00 00 */	lfs f0, 0(r25)
/* 80013EC0  D0 18 00 00 */	stfs f0, 0(r24)
/* 80013EC4  C0 19 00 04 */	lfs f0, 4(r25)
/* 80013EC8  D0 18 00 04 */	stfs f0, 4(r24)
/* 80013ECC  C0 19 00 08 */	lfs f0, 8(r25)
/* 80013ED0  D0 18 00 08 */	stfs f0, 8(r24)
/* 80013ED4  C0 19 00 00 */	lfs f0, 0(r25)
/* 80013ED8  D0 18 00 0C */	stfs f0, 0xc(r24)
/* 80013EDC  C0 19 00 04 */	lfs f0, 4(r25)
/* 80013EE0  D0 18 00 10 */	stfs f0, 0x10(r24)
/* 80013EE4  C0 19 00 08 */	lfs f0, 8(r25)
/* 80013EE8  D0 18 00 14 */	stfs f0, 0x14(r24)
/* 80013EEC  48 00 00 34 */	b lbl_80013F20
lbl_80013EF0:
/* 80013EF0  C0 01 00 F4 */	lfs f0, 0xf4(r1)
/* 80013EF4  D0 18 00 00 */	stfs f0, 0(r24)
/* 80013EF8  C0 01 00 F8 */	lfs f0, 0xf8(r1)
/* 80013EFC  D0 18 00 04 */	stfs f0, 4(r24)
/* 80013F00  C0 01 00 FC */	lfs f0, 0xfc(r1)
/* 80013F04  D0 18 00 08 */	stfs f0, 8(r24)
/* 80013F08  C0 01 00 E8 */	lfs f0, 0xe8(r1)
/* 80013F0C  D0 18 00 0C */	stfs f0, 0xc(r24)
/* 80013F10  C0 01 00 EC */	lfs f0, 0xec(r1)
/* 80013F14  D0 18 00 10 */	stfs f0, 0x10(r24)
/* 80013F18  C0 01 00 F0 */	lfs f0, 0xf0(r1)
/* 80013F1C  D0 18 00 14 */	stfs f0, 0x14(r24)
lbl_80013F20:
/* 80013F20  7E E3 BB 78 */	mr r3, r23
/* 80013F24  7F 84 E3 78 */	mr r4, r28
/* 80013F28  48 32 77 11 */	bl DCStoreRangeNoSync
/* 80013F2C  7E 83 A3 78 */	mr r3, r20
/* 80013F30  7F 64 DB 78 */	mr r4, r27
/* 80013F34  48 32 77 05 */	bl DCStoreRangeNoSync
/* 80013F38  7E 43 93 78 */	mr r3, r18
/* 80013F3C  7F 44 D3 78 */	mr r4, r26
/* 80013F40  48 32 76 F9 */	bl DCStoreRangeNoSync
/* 80013F44  3B BD 00 20 */	addi r29, r29, 0x20
/* 80013F48  3A 31 00 01 */	addi r17, r17, 1
lbl_80013F4C:
/* 80013F4C  A0 0F 00 30 */	lhz r0, 0x30(r15)
/* 80013F50  7C 11 00 00 */	cmpw r17, r0
/* 80013F54  41 80 F9 04 */	blt lbl_80013858
/* 80013F58  E3 E1 01 F8 */	psq_l f31, 504(r1), 0, 0 /* qr0 */
/* 80013F5C  CB E1 01 F0 */	lfd f31, 0x1f0(r1)
/* 80013F60  E3 C1 01 E8 */	psq_l f30, 488(r1), 0, 0 /* qr0 */
/* 80013F64  CB C1 01 E0 */	lfd f30, 0x1e0(r1)
/* 80013F68  E3 A1 01 D8 */	psq_l f29, 472(r1), 0, 0 /* qr0 */
/* 80013F6C  CB A1 01 D0 */	lfd f29, 0x1d0(r1)
/* 80013F70  E3 81 01 C8 */	psq_l f28, 456(r1), 0, 0 /* qr0 */
/* 80013F74  CB 81 01 C0 */	lfd f28, 0x1c0(r1)
/* 80013F78  E3 61 01 B8 */	psq_l f27, 440(r1), 0, 0 /* qr0 */
/* 80013F7C  CB 61 01 B0 */	lfd f27, 0x1b0(r1)
/* 80013F80  E3 41 01 A8 */	psq_l f26, 424(r1), 0, 0 /* qr0 */
/* 80013F84  CB 41 01 A0 */	lfd f26, 0x1a0(r1)
/* 80013F88  E3 21 01 98 */	psq_l f25, 408(r1), 0, 0 /* qr0 */
/* 80013F8C  CB 21 01 90 */	lfd f25, 0x190(r1)
/* 80013F90  E3 01 01 88 */	psq_l f24, 392(r1), 0, 0 /* qr0 */
/* 80013F94  CB 01 01 80 */	lfd f24, 0x180(r1)
/* 80013F98  39 61 01 80 */	addi r11, r1, 0x180
/* 80013F9C  48 34 E2 55 */	bl _restgpr_15
/* 80013FA0  80 01 02 04 */	lwz r0, 0x204(r1)
/* 80013FA4  7C 08 03 A6 */	mtlr r0
/* 80013FA8  38 21 02 00 */	addi r1, r1, 0x200
/* 80013FAC  4E 80 00 20 */	blr 