lbl_80182D28:
/* 80182D28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80182D2C  C0 02 9D 20 */	lfs f0, lit_8529(r2)
/* 80182D30  EC 00 00 72 */	fmuls f0, f0, f1
/* 80182D34  FC 00 00 1E */	fctiwz f0, f0
/* 80182D38  D8 01 00 08 */	stfd f0, 8(r1)
/* 80182D3C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80182D40  38 21 00 10 */	addi r1, r1, 0x10
/* 80182D44  4E 80 00 20 */	blr 