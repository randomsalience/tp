/* 802685B0 002654F0  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 802685B4 002654F4  7C 08 02 A6 */ mflr r0
/* 802685B8 002654F8  90 01 00 34 */ stw r0, 0x34(r1)
/* 802685BC 002654FC  DB E1 00 28 */ stfd f31, 0x28(r1)
/* 802685C0 00265500  93 E1 00 24 */ stw r31, 0x24(r1)
/* 802685C4 00265504  93 C1 00 20 */ stw r30, 0x20(r1)
/* 802685C8 00265508  7C 7E 1B 78 */ mr r30, r3
/* 802685CC 0026550C  FF E0 08 90 */ fmr f31, f1
/* 802685D0 00265510  7C BF 2B 78 */ mr r31, r5
/* 802685D4 00265514  7C 83 23 78 */ mr r3, r4
/* 802685D8 00265518  7F C4 F3 78 */ mr r4, r30
/* 802685DC 0026551C  38 A1 00 08 */ addi r5, r1, 8
/* 802685E0 00265520  48 0D EA D5 */ bl PSVECSubtract
/* 802685E4 00265524  7F C3 F3 78 */ mr r3, r30
/* 802685E8 00265528  38 81 00 08 */ addi r4, r1, 8
/* 802685EC 0026552C  FC 20 F8 90 */ fmr f1, f31
/* 802685F0 00265530  7F E5 FB 78 */ mr r5, r31
/* 802685F4 00265534  4B FF FF 6D */ bl cM3d_InDivPos1__FPC3VecPC3VecfP3Vec
/* 802685F8 00265538  CB E1 00 28 */ lfd f31, 0x28(r1)
/* 802685FC 0026553C  83 E1 00 24 */ lwz r31, 0x24(r1)
/* 80268600 00265540  83 C1 00 20 */ lwz r30, 0x20(r1)
/* 80268604 00265544  80 01 00 34 */ lwz r0, 0x34(r1)
/* 80268608 00265548  7C 08 03 A6 */ mtlr r0
/* 8026860C 0026554C  38 21 00 30 */ addi r1, r1, 0x30
/* 80268610 00265550  4E 80 00 20 */ blr