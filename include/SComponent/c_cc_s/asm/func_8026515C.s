/* 8026515C 0026209C  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80265160 002620A0  7C 08 02 A6 */ mflr r0
/* 80265164 002620A4  90 01 00 24 */ stw r0, 0x24(r1)
/* 80265168 002620A8  39 61 00 20 */ addi r11, r1, 0x20
/* 8026516C 002620AC  48 0F D0 6D */ bl _savegpr_28
/* 80265170 002620B0  7C 7C 1B 78 */ mr r28, r3
/* 80265174 002620B4  7C 9D 23 78 */ mr r29, r4
/* 80265178 002620B8  7C BE 2B 78 */ mr r30, r5
/* 8026517C 002620BC  7F A3 EB 78 */ mr r3, r29
/* 80265180 002620C0  4B FF E8 C9 */ bl GetAc__8cCcD_ObjFv
/* 80265184 002620C4  7C 7F 1B 78 */ mr r31, r3
/* 80265188 002620C8  7F C3 F3 78 */ mr r3, r30
/* 8026518C 002620CC  4B FF E8 BD */ bl GetAc__8cCcD_ObjFv
/* 80265190 002620D0  28 1F 00 00 */ cmplwi r31, 0
/* 80265194 002620D4  41 82 00 2C */ beq lbl_802651C0
/* 80265198 002620D8  28 03 00 00 */ cmplwi r3, 0
/* 8026519C 002620DC  41 82 00 24 */ beq lbl_802651C0
/* 802651A0 002620E0  7C 1F 18 40 */ cmplw r31, r3
/* 802651A4 002620E4  40 82 00 1C */ bne lbl_802651C0
/* 802651A8 002620E8  80 1D 00 2C */ lwz r0, 0x2c(r29)
/* 802651AC 002620EC  54 00 05 6B */ rlwinm. r0, r0, 0, 0x15, 0x15
/* 802651B0 002620F0  40 82 00 10 */ bne lbl_802651C0
/* 802651B4 002620F4  80 1E 00 2C */ lwz r0, 0x2c(r30)
/* 802651B8 002620F8  54 00 05 6B */ rlwinm. r0, r0, 0, 0x15, 0x15
/* 802651BC 002620FC  41 82 00 50 */ beq lbl_8026520C
lbl_802651C0:
/* 802651C0 00262100  80 BD 00 2C */ lwz r5, 0x2c(r29)
/* 802651C4 00262104  54 A3 07 3C */ rlwinm r3, r5, 0, 0x1c, 0x1e
/* 802651C8 00262108  80 9E 00 2C */ lwz r4, 0x2c(r30)
/* 802651CC 0026210C  54 80 EF 3C */ rlwinm r0, r4, 0x1d, 0x1c, 0x1e
/* 802651D0 00262110  7C 60 00 39 */ and. r0, r3, r0
/* 802651D4 00262114  41 82 00 38 */ beq lbl_8026520C
/* 802651D8 00262118  54 A3 EF 3C */ rlwinm r3, r5, 0x1d, 0x1c, 0x1e
/* 802651DC 0026211C  54 80 07 3C */ rlwinm r0, r4, 0, 0x1c, 0x1e
/* 802651E0 00262120  7C 60 00 39 */ and. r0, r3, r0
/* 802651E4 00262124  41 82 00 28 */ beq lbl_8026520C
/* 802651E8 00262128  7F 83 E3 78 */ mr r3, r28
/* 802651EC 0026212C  7F A4 EB 78 */ mr r4, r29
/* 802651F0 00262130  7F C5 F3 78 */ mr r5, r30
/* 802651F4 00262134  81 9C 28 48 */ lwz r12, 0x2848(r28)
/* 802651F8 00262138  81 8C 00 20 */ lwz r12, 0x20(r12)
/* 802651FC 0026213C  7D 89 03 A6 */ mtctr r12
/* 80265200 00262140  4E 80 04 21 */ bctrl
/* 80265204 00262144  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80265208 00262148  41 82 00 0C */ beq lbl_80265214
lbl_8026520C:
/* 8026520C 0026214C  38 60 00 01 */ li r3, 1
/* 80265210 00262150  48 00 00 08 */ b lbl_80265218
lbl_80265214:
/* 80265214 00262154  38 60 00 00 */ li r3, 0
lbl_80265218:
/* 80265218 00262158  39 61 00 20 */ addi r11, r1, 0x20
/* 8026521C 0026215C  48 0F D0 09 */ bl _restgpr_28
/* 80265220 00262160  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80265224 00262164  7C 08 03 A6 */ mtlr r0
/* 80265228 00262168  38 21 00 20 */ addi r1, r1, 0x20
/* 8026522C 0026216C  4E 80 00 20 */ blr