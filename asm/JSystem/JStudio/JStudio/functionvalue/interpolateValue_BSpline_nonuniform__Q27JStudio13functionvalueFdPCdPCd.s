lbl_802817D8:
/* 802817D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802817DC  DB E1 00 08 */	stfd f31, 8(r1)
/* 802817E0  C8 C4 00 00 */	lfd f6, 0(r4)
/* 802817E4  C8 A4 00 08 */	lfd f5, 8(r4)
/* 802817E8  C8 E4 00 10 */	lfd f7, 0x10(r4)
/* 802817EC  C9 04 00 18 */	lfd f8, 0x18(r4)
/* 802817F0  C9 24 00 20 */	lfd f9, 0x20(r4)
/* 802817F4  C9 44 00 28 */	lfd f10, 0x28(r4)
/* 802817F8  FD 61 28 28 */	fsub f11, f1, f5
/* 802817FC  FD 81 38 28 */	fsub f12, f1, f7
/* 80281800  FC 08 08 28 */	fsub f0, f8, f1
/* 80281804  FC 49 08 28 */	fsub f2, f9, f1
/* 80281808  C8 82 BA 08 */	lfd f4, lit_792(r2)
/* 8028180C  FC 68 38 28 */	fsub f3, f8, f7
/* 80281810  FD A4 18 24 */	fdiv f13, f4, f3
/* 80281814  FC 80 03 72 */	fmul f4, f0, f13
/* 80281818  FC 68 28 28 */	fsub f3, f8, f5
/* 8028181C  FF E4 18 24 */	fdiv f31, f4, f3
/* 80281820  FC 8C 03 72 */	fmul f4, f12, f13
/* 80281824  FC 69 38 28 */	fsub f3, f9, f7
/* 80281828  FD A4 18 24 */	fdiv f13, f4, f3
/* 8028182C  FC 80 07 F2 */	fmul f4, f0, f31
/* 80281830  FC 68 30 28 */	fsub f3, f8, f6
/* 80281834  FD 04 18 24 */	fdiv f8, f4, f3
/* 80281838  FC 8B 07 F2 */	fmul f4, f11, f31
/* 8028183C  FC 62 03 72 */	fmul f3, f2, f13
/* 80281840  FC 84 18 2A */	fadd f4, f4, f3
/* 80281844  FC 69 28 28 */	fsub f3, f9, f5
/* 80281848  FD 24 18 24 */	fdiv f9, f4, f3
/* 8028184C  FC 8C 03 72 */	fmul f4, f12, f13
/* 80281850  FC 6A 38 28 */	fsub f3, f10, f7
/* 80281854  FC E4 18 24 */	fdiv f7, f4, f3
/* 80281858  FC 8C 01 F2 */	fmul f4, f12, f7
/* 8028185C  C8 63 00 18 */	lfd f3, 0x18(r3)
/* 80281860  FC A4 00 F2 */	fmul f5, f4, f3
/* 80281864  FC 8B 02 72 */	fmul f4, f11, f9
/* 80281868  FC 6A 08 28 */	fsub f3, f10, f1
/* 8028186C  FC 63 01 F2 */	fmul f3, f3, f7
/* 80281870  FC 84 18 2A */	fadd f4, f4, f3
/* 80281874  C8 63 00 10 */	lfd f3, 0x10(r3)
/* 80281878  FC 84 00 F2 */	fmul f4, f4, f3
/* 8028187C  FC 60 02 32 */	fmul f3, f0, f8
/* 80281880  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281884  FC 63 00 32 */	fmul f3, f3, f0
/* 80281888  FC 01 30 28 */	fsub f0, f1, f6
/* 8028188C  FC 20 02 32 */	fmul f1, f0, f8
/* 80281890  FC 02 02 72 */	fmul f0, f2, f9
/* 80281894  FC 21 00 2A */	fadd f1, f1, f0
/* 80281898  C8 03 00 08 */	lfd f0, 8(r3)
/* 8028189C  FC 01 00 32 */	fmul f0, f1, f0
/* 802818A0  FC 03 00 2A */	fadd f0, f3, f0
/* 802818A4  FC 04 00 2A */	fadd f0, f4, f0
/* 802818A8  FC 25 00 2A */	fadd f1, f5, f0
/* 802818AC  CB E1 00 08 */	lfd f31, 8(r1)
/* 802818B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802818B4  4E 80 00 20 */	blr 
