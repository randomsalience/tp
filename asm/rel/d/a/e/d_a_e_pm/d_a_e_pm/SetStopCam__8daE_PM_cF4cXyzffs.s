lbl_80743294:
/* 80743294  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80743298  7C 08 02 A6 */	mflr r0
/* 8074329C  90 01 00 44 */	stw r0, 0x44(r1)
/* 807432A0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 807432A4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 807432A8  7C 7E 1B 78 */	mr r30, r3
/* 807432AC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 807432B0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 807432B4  88 03 5D B0 */	lbz r0, 0x5db0(r3)
/* 807432B8  7C 00 07 74 */	extsb r0, r0
/* 807432BC  1C 00 00 38 */	mulli r0, r0, 0x38
/* 807432C0  7C 63 02 14 */	add r3, r3, r0
/* 807432C4  83 E3 5D 74 */	lwz r31, 0x5d74(r3)
/* 807432C8  3C 60 80 75 */	lis r3, lit_3911@ha /* 0x8074BF40@ha */
/* 807432CC  C0 03 BF 40 */	lfs f0, lit_3911@l(r3)  /* 0x8074BF40@l */
/* 807432D0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 807432D4  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 807432D8  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 807432DC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 807432E0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 807432E4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 807432E8  C0 44 00 08 */	lfs f2, 8(r4)
/* 807432EC  C0 24 00 04 */	lfs f1, 4(r4)
/* 807432F0  C0 04 00 00 */	lfs f0, 0(r4)
/* 807432F4  D0 1E 06 8C */	stfs f0, 0x68c(r30)
/* 807432F8  D0 3E 06 90 */	stfs f1, 0x690(r30)
/* 807432FC  D0 5E 06 94 */	stfs f2, 0x694(r30)
/* 80743300  C0 1E 06 8C */	lfs f0, 0x68c(r30)
/* 80743304  D0 1E 06 A4 */	stfs f0, 0x6a4(r30)
/* 80743308  C0 1E 06 90 */	lfs f0, 0x690(r30)
/* 8074330C  D0 1E 06 A8 */	stfs f0, 0x6a8(r30)
/* 80743310  C0 1E 06 94 */	lfs f0, 0x694(r30)
/* 80743314  D0 1E 06 AC */	stfs f0, 0x6ac(r30)
/* 80743318  C0 1E 06 8C */	lfs f0, 0x68c(r30)
/* 8074331C  D0 1E 06 BC */	stfs f0, 0x6bc(r30)
/* 80743320  C0 1E 06 90 */	lfs f0, 0x690(r30)
/* 80743324  D0 1E 06 C0 */	stfs f0, 0x6c0(r30)
/* 80743328  C0 1E 06 94 */	lfs f0, 0x694(r30)
/* 8074332C  D0 1E 06 C4 */	stfs f0, 0x6c4(r30)
/* 80743330  38 61 00 20 */	addi r3, r1, 0x20
/* 80743334  38 9E 06 8C */	addi r4, r30, 0x68c
/* 80743338  38 C1 00 2C */	addi r6, r1, 0x2c
/* 8074333C  4B B2 DA 85 */	bl cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz
/* 80743340  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80743344  D0 1E 06 98 */	stfs f0, 0x698(r30)
/* 80743348  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8074334C  D0 1E 06 9C */	stfs f0, 0x69c(r30)
/* 80743350  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80743354  D0 1E 06 A0 */	stfs f0, 0x6a0(r30)
/* 80743358  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8074335C  D0 1E 06 B0 */	stfs f0, 0x6b0(r30)
/* 80743360  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80743364  D0 1E 06 B4 */	stfs f0, 0x6b4(r30)
/* 80743368  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8074336C  D0 1E 06 B8 */	stfs f0, 0x6b8(r30)
/* 80743370  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80743374  D0 1E 06 C8 */	stfs f0, 0x6c8(r30)
/* 80743378  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8074337C  D0 1E 06 CC */	stfs f0, 0x6cc(r30)
/* 80743380  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80743384  D0 1E 06 D0 */	stfs f0, 0x6d0(r30)
/* 80743388  C0 1E 06 8C */	lfs f0, 0x68c(r30)
/* 8074338C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80743390  C0 1E 06 90 */	lfs f0, 0x690(r30)
/* 80743394  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80743398  C0 1E 06 94 */	lfs f0, 0x694(r30)
/* 8074339C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 807433A0  C0 1E 06 98 */	lfs f0, 0x698(r30)
/* 807433A4  D0 01 00 08 */	stfs f0, 8(r1)
/* 807433A8  C0 1E 06 9C */	lfs f0, 0x69c(r30)
/* 807433AC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 807433B0  C0 1E 06 A0 */	lfs f0, 0x6a0(r30)
/* 807433B4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 807433B8  38 7F 02 48 */	addi r3, r31, 0x248
/* 807433BC  38 81 00 14 */	addi r4, r1, 0x14
/* 807433C0  38 A1 00 08 */	addi r5, r1, 8
/* 807433C4  C0 3E 06 D4 */	lfs f1, 0x6d4(r30)
/* 807433C8  38 C0 00 00 */	li r6, 0
/* 807433CC  4B A3 D7 15 */	bl Set__9dCamera_cF4cXyz4cXyzfs
/* 807433D0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 807433D4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 807433D8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 807433DC  7C 08 03 A6 */	mtlr r0
/* 807433E0  38 21 00 40 */	addi r1, r1, 0x40
/* 807433E4  4E 80 00 20 */	blr 
