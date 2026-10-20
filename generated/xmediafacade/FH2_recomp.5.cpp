#include "FH2_funcs.5.h"

DEFINE_REX_FUNC(sub_88050070) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880503D8) {
	REX_FUNC_PROLOGUE();
	// b 0x88055b70
	sub_88055B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restgprlr_21) {
	REX_FUNC_PROLOGUE();
	// ld r21,-96(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88051300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88051338
	if (ctx.cr6.eq) goto loc_88051338;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88052690
	ctx.lr = 0x8805132C;
	sub_88052690(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x88051348
	goto loc_88051348;
loc_88051338:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88052738
	ctx.lr = 0x88051340;
	sub_88052738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88051348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880527E0) {
	REX_FUNC_PROLOGUE();
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) return;
	// bge+ 0x880527f0
	if (!ctx.cr0.lt) goto loc_880527F0;
	// b 0x880547a0
	sub_880547A0(ctx, base);
	return;
loc_880527F0:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x88052818
	goto loc_88052818;
loc_88052804:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_88052818:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x88052804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_88052804;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x88052848
	if (ctx.cr0.eq) goto loc_88052848;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x8805286c
	if (!ctx.cr0.eq) goto loc_8805286C;
loc_88052834:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x88052834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052834;
loc_88052848:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_88052854:
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x88052854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052854;
	// blr 
	return;
loc_8805286C:
	// lbz r7,-1(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x8805286c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805286C;
	// b 0x88052848
	goto loc_88052848;
}

DEFINE_REX_FUNC(sub_880579D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6736
	ctx.r10.s64 = ctx.r11.s64 + 6736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88062228
	ctx.lr = 0x88057A04;
	sub_88062228(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88057a24
	if (ctx.cr6.eq) goto loc_88057A24;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x88050358
	ctx.lr = 0x88057A20;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88057A24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880586C8) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880587A0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFFFFF;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88059110) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88059218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,524(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805924c
	if (ctx.cr6.eq) goto loc_8805924C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x88050358
	ctx.lr = 0x88059244;
	sub_88050358(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
loc_8805924C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88059260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88059288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805A498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805A4A0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A4D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r29,672
	ctx.r28.s64 = ctx.r29.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88065e48
	ctx.lr = 0x8805A4F0;
	sub_88065E48(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x8805a568
	if (!ctx.cr6.eq) goto loc_8805A568;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805a558
	if (ctx.cr6.eq) goto loc_8805A558;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,0
	ctx.r9.s64 = ctx.r3.s64 + 0;
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_8805A558:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065ed8
	ctx.lr = 0x8805A564;
	sub_88065ED8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A568:
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r27,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,660(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 660);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88065f08
	ctx.lr = 0x8805A5B4;
	sub_88065F08(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x8805a650
	if (!ctx.cr6.gt) goto loc_8805A650;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88065bb0
	ctx.lr = 0x8805A5D4;
	sub_88065BB0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A5F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,676(r29)
	REX_STORE_U32(ctx.r29.u32 + 676, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,664(r29)
	REX_STORE_U32(ctx.r29.u32 + 664, ctx.r27.u32);
	// stw r27,668(r29)
	REX_STORE_U32(ctx.r29.u32 + 668, ctx.r27.u32);
	// stw r27,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// bl 0x88065e48
	ctx.lr = 0x8805A610;
	sub_88065E48(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,63
	ctx.r7.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,660(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 660);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x88065f08
	ctx.lr = 0x8805A64C;
	sub_88065F08(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A650:
	// sth r27,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// addi r30,r29,124
	ctx.r30.s64 = ctx.r29.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x88057aa8
	ctx.lr = 0x8805A69C;
	sub_88057AA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x88057ab0
	ctx.lr = 0x8805A6A8;
	sub_88057AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x88057ac8
	ctx.lr = 0x8805A6B4;
	sub_88057AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x88057ab8
	ctx.lr = 0x8805A6C8;
	sub_88057AB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,124(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r11,44(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805A6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88057ac0
	ctx.lr = 0x8805A6EC;
	sub_88057AC0(ctx, base);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,6732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x88057ad8
	ctx.lr = 0x8805A6FC;
	sub_88057AD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ad0
	ctx.lr = 0x8805A708;
	sub_88057AD0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065b60
	ctx.lr = 0x8805A714;
	sub_88065B60(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// lhz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8805a734
	if (!ctx.cr6.eq) goto loc_8805A734;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A734:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065b88
	ctx.lr = 0x8805A748;
	sub_88065B88(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A74C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a77c
	if (ctx.cr6.eq) goto loc_8805A77C;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x8805a770
	if (!ctx.cr6.gt) goto loc_8805A770;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x8805a770
	if (ctx.cr6.gt) goto loc_8805A770;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,10416
	ctx.r11.u64 = ctx.r11.u64 | 10416;
	// b 0x8805a780
	goto loc_8805A780;
loc_8805A770:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x8805a780
	goto loc_8805A780;
loc_8805A77C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8805A780:
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805a7a0
	goto loc_8805A7A0;
loc_8805A7A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88062250) {
	REX_FUNC_PROLOGUE();
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062260) {
	REX_FUNC_PROLOGUE();
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88062380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880623A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r7,10
	ctx.r5.u64 = ctx.r7.u64 | 10;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88063748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880637c8
	if (ctx.cr6.eq) goto loc_880637C8;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880637c8
	if (ctx.cr6.eq) goto loc_880637C8;
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880cb210
	ctx.lr = 0x88063784;
	sub_880CB210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,608(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880625e8
	ctx.lr = 0x88063790;
	sub_880625E8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880637b0
	if (ctx.cr6.eq) goto loc_880637B0;
	// bl 0x880cd1f0
	ctx.lr = 0x880637A0;
	sub_880CD1F0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cb318
	ctx.lr = 0x880637B0;
	sub_880CB318(ctx, base);
loc_880637B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x880cb360
	ctx.lr = 0x880637C0;
	sub_880CB360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880637cc
	goto loc_880637CC;
loc_880637C8:
	// li r3,4
	ctx.r3.s64 = 4;
loc_880637CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88064ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88064EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r10,528(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88064fd8
	if (ctx.cr6.eq) goto loc_88064FD8;
	// lwz r3,536(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88064f6c
	if (!ctx.cr6.eq) goto loc_88064F6C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x880638b8
	ctx.lr = 0x88064F64;
	sub_880638B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88064F6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x880cc2c0
	ctx.lr = 0x88064F74;
	sub_880CC2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064fcc
	if (ctx.cr6.lt) goto loc_88064FCC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064F90;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064fcc
	if (ctx.cr6.lt) goto loc_88064FCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064fd8
	if (!ctx.cr6.eq) goto loc_88064FD8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062ec8
	ctx.lr = 0x88064FCC;
	sub_88062EC8(ctx, base);
loc_88064FCC:
	// bl 0x880638b8
	ctx.lr = 0x88064FD0;
	sub_880638B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88064FD8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880674D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880674D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// lwz r3,584(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// lwz r11,588(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 588);
	// addi r28,r30,588
	ctx.r28.s64 = ctx.r30.s64 + 588;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8806764c
	if (!ctx.cr6.eq) goto loc_8806764C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880675bc
	if (ctx.cr6.eq) goto loc_880675BC;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880675bc
	if (ctx.cr6.eq) goto loc_880675BC;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x880675bc
	if (!ctx.cr6.gt) goto loc_880675BC;
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r4,31,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880d85b0
	ctx.lr = 0x88067574;
	sub_880D85B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880675ec
	if (ctx.cr6.lt) goto loc_880675EC;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880675e4
	if (ctx.cr6.eq) goto loc_880675E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r27,-2
	ctx.r9.s64 = ctx.r27.s64 + -2;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
loc_88067594:
	// lhz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lhzu r8,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x88067594
	if (ctx.cr6.lt) goto loc_88067594;
	// b 0x880675e4
	goto loc_880675E4;
loc_880675BC:
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880d85b0
	ctx.lr = 0x880675E0;
	sub_880D85B0(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_880675E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8806761c
	if (!ctx.cr6.lt) goto loc_8806761C;
loc_880675EC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,556(r30)
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,392(r30)
	REX_STORE_U32(ctx.r30.u32 + 392, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,584(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// bl 0x880d1df0
	ctx.lr = 0x8806760C;
	sub_880D1DF0(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806761C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8806763c
	if (!ctx.cr6.eq) goto loc_8806763C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,556(r30)
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r29.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806763C:
	// stw r7,556(r30)
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806764C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880693D0) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880694B8) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880695D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | ctx.r30.u64;
	// stw r7,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806C080) {
	REX_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806C0B8) {
	REX_FUNC_PROLOGUE();
	// std r4,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r4.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806C290) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806C510) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2824(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2824);
	// lis r6,-30680
	ctx.r6.s64 = -2010644480;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c534
	if (ctx.cr6.eq) goto loc_8806C534;
	// lwz r11,31532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// stw r10,31532(r3)
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r10.u32);
	// b 0x8806c62c
	goto loc_8806C62C;
loc_8806C534:
	// lwz r11,8176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c558
	if (ctx.cr6.eq) goto loc_8806C558;
	// lwz r11,8180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8806c558
	if (ctx.cr6.eq) goto loc_8806C558;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x8806c55c
	goto loc_8806C55C;
loc_8806C558:
	// lwz r11,31092(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31092);
loc_8806C55C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8806c584
	if (!ctx.cr6.lt) goto loc_8806C584;
	// lwz r11,31532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r7,7980(r3)
	REX_STORE_U32(ctx.r3.u32 + 7980, ctx.r7.u32);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,31536(r3)
	REX_STORE_U8(ctx.r3.u32 + 31536, ctx.r10.u8);
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,31532(r3)
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r9.u32);
	// b 0x8806c62c
	goto loc_8806C62C;
loc_8806C584:
	// rlwinm r8,r11,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8806c5d8
	if (ctx.cr6.eq) goto loc_8806C5D8;
	// lwz r8,18412(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 18412);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8806c5d8
	if (!ctx.cr6.eq) goto loc_8806C5D8;
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// lwz r8,18416(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 18416);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8806c5d8
	if (!ctx.cr6.eq) goto loc_8806C5D8;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8806c5d8
	if (!ctx.cr6.eq) goto loc_8806C5D8;
	// rlwinm r8,r11,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,30992(r3)
	REX_STORE_U32(ctx.r3.u32 + 30992, ctx.r10.u32);
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r9,30996(r3)
	REX_STORE_U32(ctx.r3.u32 + 30996, ctx.r9.u32);
	// stb r8,31536(r3)
	REX_STORE_U8(ctx.r3.u32 + 31536, ctx.r8.u8);
	// stb r5,31537(r3)
	REX_STORE_U8(ctx.r3.u32 + 31537, ctx.r5.u8);
loc_8806C5D8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806c5fc
	if (!ctx.cr6.eq) goto loc_8806C5FC;
	// lwz r11,31532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r7,7980(r3)
	REX_STORE_U32(ctx.r3.u32 + 7980, ctx.r7.u32);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,31532(r3)
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r10.u32);
	// b 0x8806c62c
	goto loc_8806C62C;
loc_8806C5FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8806c614
	if (ctx.cr6.eq) goto loc_8806C614;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8806c614
	if (ctx.cr6.eq) goto loc_8806C614;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8806c62c
	if (!ctx.cr6.eq) goto loc_8806C62C;
loc_8806C614:
	// lwz r11,31532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r10,7980(r3)
	REX_STORE_U32(ctx.r3.u32 + 7980, ctx.r10.u32);
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// stw r10,30992(r3)
	REX_STORE_U32(ctx.r3.u32 + 30992, ctx.r10.u32);
	// stw r9,30996(r3)
	REX_STORE_U32(ctx.r3.u32 + 30996, ctx.r9.u32);
	// stw r8,31532(r3)
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r8.u32);
loc_8806C62C:
	// lwz r11,18412(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r7,31532(r3)
	REX_STORE_U32(ctx.r3.u32 + 31532, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806F6F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r10,1608(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// addi r9,r11,5216
	ctx.r9.s64 = ctx.r11.s64 + 5216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8080(r3)
	REX_STORE_U32(ctx.r3.u32 + 8080, ctx.r9.u32);
	// beq cr6,0x8806f738
	if (ctx.cr6.eq) goto loc_8806F738;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// lis r10,-30705
	ctx.r10.s64 = -2012282880;
	// lis r9,-30705
	ctx.r9.s64 = -2012282880;
	// addi r8,r11,-3456
	ctx.r8.s64 = ctx.r11.s64 + -3456;
	// addi r7,r10,1248
	ctx.r7.s64 = ctx.r10.s64 + 1248;
	// addi r6,r9,4720
	ctx.r6.s64 = ctx.r9.s64 + 4720;
	// stw r8,8068(r3)
	REX_STORE_U32(ctx.r3.u32 + 8068, ctx.r8.u32);
	// stw r7,8076(r3)
	REX_STORE_U32(ctx.r3.u32 + 8076, ctx.r7.u32);
	// stw r6,8080(r3)
	REX_STORE_U32(ctx.r3.u32 + 8080, ctx.r6.u32);
	// b 0x8806f74c
	goto loc_8806F74C;
loc_8806F738:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8068(r3)
	REX_STORE_U32(ctx.r3.u32 + 8068, ctx.r10.u32);
	// stw r9,8076(r3)
	REX_STORE_U32(ctx.r3.u32 + 8076, ctx.r9.u32);
loc_8806F74C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8068(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8068);
	// lis r9,-30705
	ctx.r9.s64 = -2012282880;
	// lis r8,-30705
	ctx.r8.s64 = -2012282880;
	// stw r10,760(r3)
	REX_STORE_U32(ctx.r3.u32 + 760, ctx.r10.u32);
	// stw r10,752(r3)
	REX_STORE_U32(ctx.r3.u32 + 752, ctx.r10.u32);
	// addi r7,r9,-4040
	ctx.r7.s64 = ctx.r9.s64 + -4040;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,8060(r3)
	REX_STORE_U32(ctx.r3.u32 + 8060, ctx.r7.u32);
	// addi r4,r8,-5696
	ctx.r4.s64 = ctx.r8.s64 + -5696;
	// stw r6,764(r3)
	REX_STORE_U32(ctx.r3.u32 + 764, ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,756(r3)
	REX_STORE_U32(ctx.r3.u32 + 756, ctx.r5.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// stw r10,28556(r3)
	REX_STORE_U32(ctx.r3.u32 + 28556, ctx.r10.u32);
	// bne cr6,0x8806f7a0
	if (!ctx.cr6.eq) goto loc_8806F7A0;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r9,r11,-6944
	ctx.r9.s64 = ctx.r11.s64 + -6944;
	// stw r9,8072(r3)
	REX_STORE_U32(ctx.r3.u32 + 8072, ctx.r9.u32);
	// blr 
	return;
loc_8806F7A0:
	// stw r11,8072(r3)
	REX_STORE_U32(ctx.r3.u32 + 8072, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88070410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88070418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7868(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880704a8
	if (ctx.cr6.eq) goto loc_880704A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x8807043C;
	sub_880E6960(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880704b0
	if (!ctx.cr6.gt) goto loc_880704B0;
	// addi r30,r31,1272
	ctx.r30.s64 = ctx.r31.s64 + 1272;
loc_88070450:
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88070460;
	sub_880E6960(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x880e6960
	ctx.lr = 0x88070470;
	sub_880E6960(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x880e6960
	ctx.lr = 0x88070480;
	sub_880E6960(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwzu r4,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88070490;
	sub_880E6960(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88070450
	if (ctx.cr6.lt) goto loc_88070450;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880704A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880704B0;
	sub_880E6960(ctx, base);
loc_880704B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88071AE8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,4997
	ctx.r11.s64 = ctx.r4.s64 + 4997;
	// addi r10,r4,5000
	ctx.r10.s64 = ctx.r4.s64 + 5000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,5003
	ctx.r7.s64 = ctx.r5.s64 + 5003;
	// addi r6,r5,5006
	ctx.r6.s64 = ctx.r5.s64 + 5006;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,20088(r3)
	REX_STORE_U32(ctx.r3.u32 + 20088, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,20092(r3)
	REX_STORE_U32(ctx.r3.u32 + 20092, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,20096(r3)
	REX_STORE_U32(ctx.r3.u32 + 20096, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,20080(r3)
	REX_STORE_U32(ctx.r3.u32 + 20080, ctx.r6.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r4,20084(r3)
	REX_STORE_U32(ctx.r3.u32 + 20084, ctx.r4.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,20108(r3)
	REX_STORE_U32(ctx.r3.u32 + 20108, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,20112(r3)
	REX_STORE_U32(ctx.r3.u32 + 20112, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,20116(r3)
	REX_STORE_U32(ctx.r3.u32 + 20116, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,20124(r3)
	REX_STORE_U32(ctx.r3.u32 + 20124, ctx.r6.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r4,20100(r3)
	REX_STORE_U32(ctx.r3.u32 + 20100, ctx.r4.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,20104(r3)
	REX_STORE_U32(ctx.r3.u32 + 20104, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,20120(r3)
	REX_STORE_U32(ctx.r3.u32 + 20120, ctx.r8.u32);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r7,20128(r3)
	REX_STORE_U32(ctx.r3.u32 + 20128, ctx.r7.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,20140(r3)
	REX_STORE_U32(ctx.r3.u32 + 20140, ctx.r4.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,20144(r3)
	REX_STORE_U32(ctx.r3.u32 + 20144, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,20148(r3)
	REX_STORE_U32(ctx.r3.u32 + 20148, ctx.r10.u32);
	// lwz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r9,20132(r3)
	REX_STORE_U32(ctx.r3.u32 + 20132, ctx.r9.u32);
	// lwz r8,20(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r8,20136(r3)
	REX_STORE_U32(ctx.r3.u32 + 20136, ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,20164(r3)
	REX_STORE_U32(ctx.r3.u32 + 20164, ctx.r7.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,20168(r3)
	REX_STORE_U32(ctx.r3.u32 + 20168, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,20172(r3)
	REX_STORE_U32(ctx.r3.u32 + 20172, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,20176(r3)
	REX_STORE_U32(ctx.r3.u32 + 20176, ctx.r11.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,20152(r3)
	REX_STORE_U32(ctx.r3.u32 + 20152, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,20156(r3)
	REX_STORE_U32(ctx.r3.u32 + 20156, ctx.r9.u32);
	// lwz r8,24(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// stw r8,20160(r3)
	REX_STORE_U32(ctx.r3.u32 + 20160, ctx.r8.u32);
	// lwz r7,28(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r7,20180(r3)
	REX_STORE_U32(ctx.r3.u32 + 20180, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88078168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88078170;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28152);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,28148(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28148);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x8807818C;
	sub_88052D90(ctx, base);
	// lwz r10,2292(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 2292);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r3,2268(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 2268);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,28156(r29)
	REX_STORE_U32(ctx.r29.u32 + 28156, ctx.r25.u32);
	// bl 0x88052d90
	ctx.lr = 0x880781A8;
	sub_88052D90(ctx, base);
	// lwz r9,2268(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2268);
	// lwz r8,2272(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 2272);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,2264(r29)
	REX_STORE_U32(ctx.r29.u32 + 2264, ctx.r9.u32);
	// beq cr6,0x88078340
	if (ctx.cr6.eq) goto loc_88078340;
	// lwz r11,1360(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1360);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// lwz r10,31544(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 31544);
	// srawi r27,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880781e4
	if (ctx.cr6.eq) goto loc_880781E4;
	// rlwinm r31,r27,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880781ec
	goto loc_880781EC;
loc_880781E4:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r31,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 4;
loc_880781EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880781f8
	if (ctx.cr6.eq) goto loc_880781F8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_880781F8:
	// lwz r11,31024(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31024);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88078230
	if (!ctx.cr6.eq) goto loc_88078230;
	// bl 0x881ee8e8
	ctx.lr = 0x88078208;
	sub_881EE8E8(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r31
	ctx.r10.u64 = uint32_t((ctx.r31.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r3.s32 / ctx.r31.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	// andc r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x8807823c
	goto loc_8807823C;
loc_88078230:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8807823c
	if (ctx.cr6.lt) goto loc_8807823C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8807823C:
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ble 0x88078294
	if (!ctx.cr0.gt) goto loc_88078294;
loc_88078248:
	// bl 0x881ee8e8
	ctx.lr = 0x8807824C;
	sub_881EE8E8(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r31
	ctx.r10.u64 = uint32_t((ctx.r31.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r3.s32 / ctx.r31.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// andc r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x8807828c
	if (!ctx.cr0.gt) goto loc_8807828C;
	// lwz r10,2268(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 2268);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8807828c
	if (!ctx.cr6.eq) goto loc_8807828C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_8807828C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x88078248
	if (ctx.cr6.lt) goto loc_88078248;
loc_88078294:
	// lwz r11,31544(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88078340
	if (ctx.cr6.eq) goto loc_88078340;
	// lwz r11,31024(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31024);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880782d8
	if (!ctx.cr6.eq) goto loc_880782D8;
	// bl 0x881ee8e8
	ctx.lr = 0x880782B0;
	sub_881EE8E8(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r31
	ctx.r10.u64 = uint32_t((ctx.r31.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r3.s32 / ctx.r31.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	// andc r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x880782e4
	goto loc_880782E4;
loc_880782D8:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x880782e4
	if (ctx.cr6.lt) goto loc_880782E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_880782E4:
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ble 0x88078340
	if (!ctx.cr0.gt) goto loc_88078340;
loc_880782F0:
	// bl 0x881ee8e8
	ctx.lr = 0x880782F4;
	sub_881EE8E8(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r31
	ctx.r10.u64 = uint32_t((ctx.r31.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r3.s32 / ctx.r31.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// andc r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x88078338
	if (!ctx.cr0.gt) goto loc_88078338;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,2268(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 2268);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88078338
	if (!ctx.cr6.eq) goto loc_88078338;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_88078338:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x880782f0
	if (ctx.cr6.lt) goto loc_880782F0;
loc_88078340:
	// lwz r11,2292(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2276(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 2276);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88078354;
	sub_88052D90(ctx, base);
	// stw r25,2288(r29)
	REX_STORE_U32(ctx.r29.u32 + 2288, ctx.r25.u32);
	// stw r25,2296(r29)
	REX_STORE_U32(ctx.r29.u32 + 2296, ctx.r25.u32);
	// stw r26,2300(r29)
	REX_STORE_U32(ctx.r29.u32 + 2300, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807D510) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8807d77c
	if (!ctx.cr6.gt) goto loc_8807D77C;
	// lis r10,12483
	ctx.r10.s64 = 818085888;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// fabs f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// ori r9,r10,3121
	ctx.r9.u64 = ctx.r10.u64 | 3121;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mulhw r7,r11,r9
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stw r8,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r6,21
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(21));
	// subf r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8807d57c
	if (!ctx.cr6.eq) goto loc_8807D57C;
	// bl 0x8807cc18
	ctx.lr = 0x8807D57C;
	sub_8807CC18(ctx, base);
loc_8807D57C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807d5b8
	if (!ctx.cr6.eq) goto loc_8807D5B8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12472);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8807d77c
	if (!ctx.cr6.lt) goto loc_8807D77C;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8807D5B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bge cr6,0x8807d62c
	if (!ctx.cr6.lt) goto loc_8807D62C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807d600
	if (!ctx.cr6.eq) goto loc_8807D600;
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,12180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8807d604
	if (!ctx.cr6.gt) goto loc_8807D604;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8807d604
	goto loc_8807D604;
loc_8807D600:
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
loc_8807D604:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfs f2,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lfs f0,6732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x8807d6cc
	goto loc_8807D6CC;
loc_8807D62C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8807d644
	if (!ctx.cr6.gt) goto loc_8807D644;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// blt cr6,0x8807d654
	if (ctx.cr6.lt) goto loc_8807D654;
loc_8807D644:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8807d660
	if (!ctx.cr6.lt) goto loc_8807D660;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8807d660
	if (!ctx.cr6.gt) goto loc_8807D660;
loc_8807D654:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_8807D660:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8807d778
	if (ctx.cr6.gt) goto loc_8807D778;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x8807d6b8
	if (!ctx.cr6.gt) goto loc_8807D6B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8807d778
	if (ctx.cr6.gt) goto loc_8807D778;
	// lfs f0,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8807d690
	if (!ctx.cr6.lt) goto loc_8807D690;
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_8807D690:
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lfs f0,12180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8807d6cc
	if (!ctx.cr6.gt) goto loc_8807D6CC;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8807d6cc
	goto loc_8807D6CC;
loc_8807D6B8:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
loc_8807D6CC:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lfs f12,12464(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12464);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8807d724
	if (!ctx.cr6.lt) goto loc_8807D724;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8807d720
	if (!ctx.cr6.lt) goto loc_8807D720;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f6,f12
	ctx.cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// bgt cr6,0x8807d724
	if (ctx.cr6.gt) goto loc_8807D724;
loc_8807D720:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8807D724:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8807d758
	if (!ctx.cr6.lt) goto loc_8807D758;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// ble cr6,0x8807d758
	if (!ctx.cr6.gt) goto loc_8807D758;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8807D758:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8807d78c
	if (ctx.cr6.lt) goto loc_8807D78C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12456);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807d7b0
	if (!ctx.cr6.lt) goto loc_8807D7B0;
loc_8807D778:
	// bl 0x8807d4b0
	ctx.lr = 0x8807D77C;
	sub_8807D4B0(ctx, base);
loc_8807D77C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8807D78C:
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x8807d77c
	if (ctx.cr6.lt) goto loc_8807D77C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8807d778
	if (ctx.cr6.lt) goto loc_8807D778;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12456);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8807d778
	if (!ctx.cr6.gt) goto loc_8807D778;
loc_8807D7B0:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8807d7bc
	if (!ctx.cr6.lt) goto loc_8807D7BC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8807D7BC:
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8807d778
	if (ctx.cr6.lt) goto loc_8807D778;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8807d778
	if (!ctx.cr6.eq) goto loc_8807D778;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807d778
	if (!ctx.cr6.eq) goto loc_8807D778;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88085820) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// xor r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88085878
	if (ctx.cr6.gt) goto loc_88085878;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88085878
	if (ctx.cr6.gt) goto loc_88085878;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,6848
	ctx.r7.s64 = ctx.r9.s64 + 6848;
	// lwzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_88085878:
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88085FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88085FA8;
	__savegprlr_14(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r4,6792(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6792);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r29,r11,8532
	ctx.r29.s64 = ctx.r11.s64 + 8532;
	// lwz r11,728(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r29,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r14,r9,1
	ctx.r14.s64 = ctx.r9.s64 + 1;
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r17,r9,1
	ctx.r17.s64 = ctx.r9.s64 + 1;
	// lwz r7,20(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// add r15,r11,r8
	ctx.r15.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// lwz r10,6796(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 6796);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r27,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r27.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r17.u32);
	// stw r15,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r15.u32);
	// stw r8,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// stw r7,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r7.u32);
	// ble cr6,0x88086084
	if (!ctx.cr6.gt) goto loc_88086084;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_88086038:
	// lbzx r11,r7,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8808605c
	if (ctx.cr6.eq) goto loc_8808605C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8808605c
	if (ctx.cr6.eq) goto loc_8808605C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x88086060
	if (!ctx.cr6.eq) goto loc_88086060;
loc_8808605C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_88086060:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r11,728(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 728);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88086038
	if (ctx.cr6.lt) goto loc_88086038;
loc_88086084:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,724(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subfc r6,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r5,r9,r11
	ctx.r5.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// stw r6,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// ble cr6,0x88086154
	if (!ctx.cr6.gt) goto loc_88086154;
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
loc_880860B8:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88086144
	if (!ctx.cr6.gt) goto loc_88086144;
loc_880860C4:
	// add. r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x88086114
	if (ctx.cr0.eq) goto loc_88086114;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x880860e0
	if (!ctx.cr6.eq) goto loc_880860E0;
	// lbz r11,-1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x88086118
	goto loc_88086118;
loc_880860E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880860f8
	if (!ctx.cr6.eq) goto loc_880860F8;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// b 0x88086118
	goto loc_88086118;
loc_880860F8:
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbz r4,-1(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// lbz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x88086118
	if (ctx.cr6.eq) goto loc_88086118;
loc_88086114:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_88086118:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfe r11,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// lwz r11,720(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880860c4
	if (ctx.cr6.lt) goto loc_880860C4;
loc_88086144:
	// lwz r9,724(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880860b8
	if (ctx.cr6.lt) goto loc_880860B8;
loc_88086154:
	// lwz r5,728(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 728);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// subf r11,r5,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r5.u32);
	// ble cr6,0x8808619c
	if (!ctx.cr6.gt) goto loc_8808619C;
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
loc_88086170:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// stb r6,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lwz r5,728(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 728);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// stw r5,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r5.u32);
	// blt cr6,0x88086170
	if (ctx.cr6.lt) goto loc_88086170;
loc_8808619C:
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880861b0
	if (ctx.cr6.eq) goto loc_880861B0;
	// li r14,2
	ctx.r14.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
loc_880861B0:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88086320
	if (!ctx.cr6.lt) goto loc_88086320;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,23344
	ctx.r8.s64 = ctx.r7.s64 + 23344;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x880862a4
	if (ctx.cr6.lt) goto loc_880862A4;
	// lwz r7,-240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// addi r21,r10,1
	ctx.r21.s64 = ctx.r10.s64 + 1;
	// addi r16,r7,-2
	ctx.r16.s64 = ctx.r7.s64 + -2;
	// addi r20,r11,3
	ctx.r20.s64 = ctx.r11.s64 + 3;
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// addi r18,r10,3
	ctx.r18.s64 = ctx.r10.s64 + 3;
	// addi r17,r10,2
	ctx.r17.s64 = ctx.r10.s64 + 2;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r15,r10,r11
	ctx.r15.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8808620C:
	// lbzx r6,r22,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r9.u32);
	// lbzx r4,r15,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r7.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbzx r29,r18,r9
	ctx.r29.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// lbzx r30,r19,r9
	ctx.r30.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r9.u32);
	// lbzx r28,r20,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r9.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbzx r5,r17,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r9.u32);
	// lbzx r31,r21,r9
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r27,r5
	ctx.r27.s64 = ctx.r5.s8;
	// stb r29,-256(r1)
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r29.u8);
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// lbz r5,-256(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r30,r28
	ctx.r30.s64 = ctx.r28.s8;
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r26,r6,r26
	ctx.r26.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lwzx r4,r5,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// lwzx r5,r30,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r25,r4,r25
	ctx.r25.u64 = ctx.r4.u64 + ctx.r25.u64;
	// add r24,r5,r24
	ctx.r24.u64 = ctx.r5.u64 + ctx.r24.u64;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// blt cr6,0x8808620c
	if (ctx.cr6.lt) goto loc_8808620C;
loc_880862A4:
	// lwz r7,-240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880862f8
	if (!ctx.cr6.lt) goto loc_880862F8;
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r4,1(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r5,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r9,r4,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r14,r9,r14
	ctx.r14.u64 = ctx.r9.u64 + ctx.r14.u64;
loc_880862F8:
	// add r8,r25,r23
	ctx.r8.u64 = ctx.r25.u64 + ctx.r23.u64;
	// lwz r30,20(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r26,r24
	ctx.r9.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lwz r27,-248(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r17,-244(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r14,r8,r14
	ctx.r14.u64 = ctx.r8.u64 + ctx.r14.u64;
	// lwz r15,-236(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r5,-240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r29,-232(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
loc_88086320:
	// cmpw cr6,r3,r15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086338
	if (!ctx.cr6.lt) goto loc_88086338;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r3.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r9,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r9.u32);
loc_88086338:
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086350
	if (!ctx.cr6.lt) goto loc_88086350;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r14,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r14.u32);
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
	// stw r9,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r9.u32);
loc_88086350:
	// lis r9,-21846
	ctx.r9.s64 = -1431699456;
	// lwz r14,724(r30)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r9,r9,43691
	ctx.r9.u64 = ctx.r9.u64 | 43691;
	// stw r24,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r24.u32);
	// mulhwu r8,r14,r9
	ctx.r8.u64 = (uint64_t(ctx.r14.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// stw r14,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r14.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r8,r7,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// bne 0x880866d0
	if (!ctx.cr0.eq) goto loc_880866D0;
	// lwz r16,720(r30)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// mulhwu r8,r16,r9
	ctx.r8.u64 = (uint64_t(ctx.r16.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r26,r7,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r26,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r26.u32);
	// beq 0x880866d0
	if (ctx.cr0.eq) goto loc_880866D0;
	// clrlwi r3,r16,31
	ctx.r3.u64 = ctx.r16.u32 & 0x1;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086a64
	if (!ctx.cr6.gt) goto loc_88086A64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r4,r9,13320
	ctx.r4.s64 = ctx.r9.s64 + 13320;
loc_880863BC:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880866c0
	if (!ctx.cr6.lt) goto loc_880866C0;
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x880865b0
	if (ctx.cr6.lt) goto loc_880865B0;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r17,r16,-2
	ctx.r17.s64 = ctx.r16.s64 + -2;
	// lwz r5,720(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
loc_88086404:
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r29,r9,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r28,r7,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r27,r9,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r23,r29
	ctx.r23.s64 = ctx.r29.s8;
	// lbzx r30,r8,r9
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lbzx r29,r6,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r24,r27
	ctx.r24.s64 = ctx.r27.s8;
	// lbzx r27,r7,r6
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// extsb r25,r29
	ctx.r25.s64 = ctx.r29.s8;
	// lbzx r15,r6,r10
	ctx.r15.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r26,r8,r6
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbzx r29,r9,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// lbzx r14,r8,r9
	ctx.r14.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r29,-255(r1)
	REX_STORE_U8(ctx.r1.u32 + -255, ctx.r29.u8);
	// extsb r29,r28
	ctx.r29.s64 = ctx.r28.s8;
	// lbzx r28,r7,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r23,r7,r6
	ctx.r23.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// stb r28,-254(r1)
	REX_STORE_U8(ctx.r1.u32 + -254, ctx.r28.u8);
	// extsb r28,r27
	ctx.r28.s64 = ctx.r27.s8;
	// lbzx r27,r9,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stb r27,-253(r1)
	REX_STORE_U8(ctx.r1.u32 + -253, ctx.r27.u8);
	// extsb r27,r15
	ctx.r27.s64 = ctx.r15.s8;
	// lbzx r15,r8,r6
	ctx.r15.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// lbzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// add r24,r28,r27
	ctx.r24.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r28,r8,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r27,r23
	ctx.r27.s64 = ctx.r23.s8;
	// stb r6,-256(r1)
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r6.u8);
	// add r6,r26,r25
	ctx.r6.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r26,r7,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r25,r3
	ctx.r25.s64 = ctx.r3.s8;
	// lbz r23,-256(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// stb r28,-256(r1)
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r28.u8);
	// extsb r28,r15
	ctx.r28.s64 = ctx.r15.s8;
	// stb r26,-252(r1)
	REX_STORE_U8(ctx.r1.u32 + -252, ctx.r26.u8);
	// extsb r26,r23
	ctx.r26.s64 = ctx.r23.s8;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lbzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r30,r24,r29
	ctx.r30.u64 = ctx.r24.u64 + ctx.r29.u64;
	// lbzx r23,r9,r10
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r29,r27,r26
	ctx.r29.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbz r15,-255(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + -255);
	// add r26,r28,r6
	ctx.r26.u64 = ctx.r28.u64 + ctx.r6.u64;
	// extsb r6,r14
	ctx.r6.s64 = ctx.r14.s8;
	// lbz r14,-256(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// add r27,r29,r30
	ctx.r27.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stb r23,-255(r1)
	REX_STORE_U8(ctx.r1.u32 + -255, ctx.r23.u8);
	// extsb r28,r15
	ctx.r28.s64 = ctx.r15.s8;
	// lbzx r25,r8,r9
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// lbzx r24,r9,r11
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r30,r14
	ctx.r30.s64 = ctx.r14.s8;
	// lbzx r15,r7,r9
	ctx.r15.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbzx r14,r9,r10
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// lbz r6,-254(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -254);
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r27,r25
	ctx.r27.s64 = ctx.r25.s8;
	// extsb r25,r6
	ctx.r25.s64 = ctx.r6.s8;
	// lbz r6,-253(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -253);
	// lwzx r28,r29,r4
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// extsb r23,r24
	ctx.r23.s64 = ctx.r24.s8;
	// extsb r24,r6
	ctx.r24.s64 = ctx.r6.s8;
	// lwzx r29,r26,r4
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	// lbz r6,-252(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -252);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r21,r29,r21
	ctx.r21.u64 = ctx.r29.u64 + ctx.r21.u64;
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// extsb r30,r6
	ctx.r30.s64 = ctx.r6.s8;
	// lbz r6,-255(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -255);
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// extsb r26,r6
	ctx.r26.s64 = ctx.r6.s8;
	// add r6,r25,r24
	ctx.r6.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// extsb r6,r15
	ctx.r6.s64 = ctx.r15.s8;
	// extsb r30,r14
	ctx.r30.s64 = ctx.r14.s8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwzx r6,r29,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// add r22,r28,r22
	ctx.r22.u64 = ctx.r28.u64 + ctx.r22.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r6,r20
	ctx.r20.u64 = ctx.r6.u64 + ctx.r20.u64;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// add r19,r9,r19
	ctx.r19.u64 = ctx.r9.u64 + ctx.r19.u64;
	// blt cr6,0x88086404
	if (ctx.cr6.lt) goto loc_88086404;
	// lwz r14,-200(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
loc_880865B0:
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086684
	if (!ctx.cr6.lt) goto loc_88086684;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r27,-248(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r26,-244(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r6,720(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
	// mullw r9,r6,r18
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r18.s32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r30,r9,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r31,r5
	ctx.r31.s64 = ctx.r5.s8;
	// lbzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r28,r8,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// extsb r5,r28
	ctx.r5.s64 = ctx.r28.s8;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// lbzx r29,r8,r9
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r25,r9,r11
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r30,r7,r9
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r28,r29
	ctx.r28.s64 = ctx.r29.s8;
	// lbzx r24,r9,r10
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsb r6,r25
	ctx.r6.s64 = ctx.r25.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// extsb r29,r24
	ctx.r29.s64 = ctx.r24.s8;
	// lbzx r28,r8,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r6,r28
	ctx.r6.s64 = ctx.r28.s8;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r9,r5,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r6,r8,r27
	ctx.r6.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + ctx.r26.u64;
	// b 0x8808668c
	goto loc_8808668C;
loc_88086684:
	// lwz r6,-248(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r7,-244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
loc_8808668C:
	// add r8,r19,r21
	ctx.r8.u64 = ctx.r19.u64 + ctx.r21.u64;
	// lwz r30,20(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r20,r22
	ctx.r9.u64 = ctx.r20.u64 + ctx.r22.u64;
	// lwz r15,-236(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,-240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r29,-232(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r24,-228(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rotlwi r17,r8,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r8.u32);
	// rotlwi r27,r7,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
loc_880866C0:
	// addi r18,r18,3
	ctx.r18.s64 = ctx.r18.s64 + 3;
	// cmpw cr6,r18,r14
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x880863bc
	if (ctx.cr6.lt) goto loc_880863BC;
	// b 0x88086a60
	goto loc_88086A60;
loc_880866D0:
	// lwz r16,720(r30)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// clrlwi r24,r14,31
	ctx.r24.u64 = ctx.r14.u32 & 0x1;
	// mulhwu r9,r16,r9
	ctx.r9.u64 = (uint64_t(ctx.r16.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// stw r24,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r24.u32);
	// stw r24,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// stw r16,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r16.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r24,r14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r14.s32, ctx.xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r26,r7,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r7.u64;
	// stw r26,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// bge cr6,0x88086a64
	if (!ctx.cr6.lt) goto loc_88086A64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r7,r9,13320
	ctx.r7.s64 = ctx.r9.s64 + 13320;
loc_88086718:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r25,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r25.u32);
	// stw r28,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r28.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r26,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086a50
	if (!ctx.cr6.lt) goto loc_88086A50;
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// divw r9,r4,r5
	ctx.r9.u64 = uint32_t((ctx.r5.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r4.s32 / ctx.r5.s32 : 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8808693c
	if (ctx.cr6.lt) goto loc_8808693C;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lwz r29,720(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
loc_88086770:
	// mullw r9,r29,r8
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// std r29,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r29.u64);
	// lwz r3,-212(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r17,-208(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lbzx r28,r4,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r27,r5,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// lbzx r24,r4,r8
	ctx.r24.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// lbzx r23,r5,r8
	ctx.r23.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// extsb r25,r27
	ctx.r25.s64 = ctx.r27.s8;
	// extsb r28,r24
	ctx.r28.s64 = ctx.r24.s8;
	// lbzx r24,r30,r8
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// add r20,r26,r25
	ctx.r20.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r16,r31,r8
	ctx.r16.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r27,r23
	ctx.r27.s64 = ctx.r23.s8;
	// lbzx r25,r8,r10
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r21,r8,r11
	ctx.r21.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// add r22,r28,r27
	ctx.r22.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r26,r9,r11
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r28,r30,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// lbzx r27,r31,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r19,r26
	ctx.r19.s64 = ctx.r26.s8;
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// lbzx r15,r9,r10
	ctx.r15.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r23,r27
	ctx.r23.s64 = ctx.r27.s8;
	// lbzx r28,r5,r8
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r27,r8,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lbzx r14,r4,r8
	ctx.r14.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r28,-252(r1)
	REX_STORE_U8(ctx.r1.u32 + -252, ctx.r28.u8);
	// extsb r28,r24
	ctx.r28.s64 = ctx.r24.s8;
	// stb r27,-253(r1)
	REX_STORE_U8(ctx.r1.u32 + -253, ctx.r27.u8);
	// extsb r27,r16
	ctx.r27.s64 = ctx.r16.s8;
	// lbzx r24,r30,r8
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r16,r8,r10
	ctx.r16.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r28,r9,r11
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r29,-252(r1)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + -252);
	// stb r24,-255(r1)
	REX_STORE_U8(ctx.r1.u32 + -255, ctx.r24.u8);
	// extsb r24,r29
	ctx.r24.s64 = ctx.r29.s8;
	// stb r8,-254(r1)
	REX_STORE_U8(ctx.r1.u32 + -254, ctx.r8.u8);
	// add r8,r20,r19
	ctx.r8.u64 = ctx.r20.u64 + ctx.r19.u64;
	// lbzx r19,r4,r9
	ctx.r19.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// add r20,r22,r21
	ctx.r20.u64 = ctx.r22.u64 + ctx.r21.u64;
	// stb r28,-252(r1)
	REX_STORE_U8(ctx.r1.u32 + -252, ctx.r28.u8);
	// add r22,r26,r23
	ctx.r22.u64 = ctx.r26.u64 + ctx.r23.u64;
	// extsb r28,r19
	ctx.r28.s64 = ctx.r19.s8;
	// lbz r19,-252(r1)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r1.u32 + -252);
	// extsb r21,r15
	ctx.r21.s64 = ctx.r15.s8;
	// lbzx r26,r31,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r29,r5,r9
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r23,r25
	ctx.r23.s64 = ctx.r25.s8;
	// lbzx r15,r30,r9
	ctx.r15.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// extsb r25,r14
	ctx.r25.s64 = ctx.r14.s8;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// lbz r14,-253(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -253);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// stb r26,-256(r1)
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r26.u8);
	// extsb r26,r29
	ctx.r26.s64 = ctx.r29.s8;
	// extsb r24,r14
	ctx.r24.s64 = ctx.r14.s8;
	// lbz r14,-254(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -254);
	// stb r9,-251(r1)
	REX_STORE_U8(ctx.r1.u32 + -251, ctx.r9.u8);
	// add r9,r22,r21
	ctx.r9.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// extsb r26,r19
	ctx.r26.s64 = ctx.r19.s8;
	// add r27,r20,r8
	ctx.r27.u64 = ctx.r20.u64 + ctx.r8.u64;
	// add r8,r25,r24
	ctx.r8.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r8,r14
	ctx.r8.s64 = ctx.r14.s8;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r9,r7
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lbz r14,-255(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + -255);
	// add r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lbz r3,-256(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -256);
	// extsb r26,r16
	ctx.r26.s64 = ctx.r16.s8;
	// extsb r9,r14
	ctx.r9.s64 = ctx.r14.s8;
	// lwzx r24,r27,r7
	ctx.r24.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// lwzx r28,r28,r7
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r3,-251(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -251);
	// extsb r8,r15
	ctx.r8.s64 = ctx.r15.s8;
	// lwz r16,-196(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// ld r29,-168(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// add r26,r28,r17
	ctx.r26.u64 = ctx.r28.u64 + ctx.r17.u64;
	// stw r25,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r25.u32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// extsb r28,r3
	ctx.r28.s64 = ctx.r3.s8;
	// lwz r3,-204(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// stw r26,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r18,r24,r18
	ctx.r18.u64 = ctx.r24.u64 + ctx.r18.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r16,-3
	ctx.r9.s64 = ctx.r16.s64 + -3;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// lwzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,-224(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r28,r9,r3
	ctx.r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r28,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r28.u32);
	// blt cr6,0x88086770
	if (ctx.cr6.lt) goto loc_88086770;
	// lwz r14,-200(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
loc_8808693C:
	// cmpw cr6,r6,r16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086a14
	if (!ctx.cr6.lt) goto loc_88086A14;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r21,-248(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r20,-244(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r30,720(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 720);
	// mullw r9,r30,r8
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lbzx r29,r4,r9
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r24,r5,r9
	ctx.r24.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// extsb r23,r29
	ctx.r23.s64 = ctx.r29.s8;
	// lbzx r27,r6,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r29,r31,r9
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r22,r24
	ctx.r22.s64 = ctx.r24.s8;
	// lbzx r19,r9,r11
	ctx.r19.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lbzx r17,r9,r10
	ctx.r17.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// add r30,r23,r22
	ctx.r30.u64 = ctx.r23.u64 + ctx.r22.u64;
	// extsb r24,r19
	ctx.r24.s64 = ctx.r19.s8;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbzx r27,r5,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// add r5,r30,r24
	ctx.r5.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r30,r31,r9
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbzx r24,r9,r11
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r31,r27
	ctx.r31.s64 = ctx.r27.s8;
	// lbzx r23,r9,r10
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// extsb r6,r30
	ctx.r6.s64 = ctx.r30.s8;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// extsb r30,r24
	ctx.r30.s64 = ctx.r24.s8;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsb r27,r17
	ctx.r27.s64 = ctx.r17.s8;
	// extsb r31,r23
	ctx.r31.s64 = ctx.r23.s8;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r9,r29,r27
	ctx.r9.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r6,r21
	ctx.r4.u64 = ctx.r6.u64 + ctx.r21.u64;
	// add r5,r9,r20
	ctx.r5.u64 = ctx.r9.u64 + ctx.r20.u64;
	// b 0x88086a1c
	goto loc_88086A1C;
loc_88086A14:
	// lwz r4,-248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r5,-244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
loc_88086A1C:
	// add r6,r28,r25
	ctx.r6.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lwz r30,20(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r26,r18
	ctx.r9.u64 = ctx.r26.u64 + ctx.r18.u64;
	// lwz r15,-236(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r5,-240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r29,-232(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r24,-228(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rotlwi r17,r6,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r6.u32);
	// rotlwi r27,r4,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
loc_88086A50:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r8,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086718
	if (ctx.cr6.lt) goto loc_88086718;
loc_88086A60:
	// lwz r26,-220(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
loc_88086A64:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88086aec
	if (!ctx.cr6.gt) goto loc_88086AEC;
loc_88086A70:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086aa4
	if (!ctx.cr6.gt) goto loc_88086AA4;
loc_88086A7C:
	// mullw r8,r16,r9
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88086aa0
	if (!ctx.cr6.eq) goto loc_88086AA0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086a7c
	if (ctx.cr6.lt) goto loc_88086A7C;
	// b 0x88086aa4
	goto loc_88086AA4;
loc_88086AA0:
	// add r27,r14,r27
	ctx.r27.u64 = ctx.r14.u64 + ctx.r27.u64;
loc_88086AA4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086ad8
	if (!ctx.cr6.gt) goto loc_88086AD8;
loc_88086AB0:
	// mullw r8,r16,r9
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88086ad4
	if (!ctx.cr6.eq) goto loc_88086AD4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086ab0
	if (ctx.cr6.lt) goto loc_88086AB0;
	// b 0x88086ad8
	goto loc_88086AD8;
loc_88086AD4:
	// add r17,r14,r17
	ctx.r17.u64 = ctx.r14.u64 + ctx.r17.u64;
loc_88086AD8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88086a70
	if (ctx.cr6.lt) goto loc_88086A70;
loc_88086AEC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88086b54
	if (ctx.cr6.eq) goto loc_88086B54;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086b24
	if (!ctx.cr6.lt) goto loc_88086B24;
loc_88086B00:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88086b1c
	if (!ctx.cr6.eq) goto loc_88086B1C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086b00
	if (ctx.cr6.lt) goto loc_88086B00;
	// b 0x88086b24
	goto loc_88086B24;
loc_88086B1C:
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
loc_88086B24:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086b54
	if (!ctx.cr6.lt) goto loc_88086B54;
loc_88086B30:
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88086b4c
	if (!ctx.cr6.eq) goto loc_88086B4C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086b30
	if (ctx.cr6.lt) goto loc_88086B30;
	// b 0x88086b54
	goto loc_88086B54;
loc_88086B4C:
	// subf r9,r3,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r3.u64;
	// add r17,r9,r17
	ctx.r17.u64 = ctx.r9.u64 + ctx.r17.u64;
loc_88086B54:
	// cmpw cr6,r27,r15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086b68
	if (!ctx.cr6.lt) goto loc_88086B68;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x88086b6c
	goto loc_88086B6C;
loc_88086B68:
	// lwz r4,-216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
loc_88086B6C:
	// cmpw cr6,r17,r15
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086b7c
	if (!ctx.cr6.lt) goto loc_88086B7C;
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// li r4,4
	ctx.r4.s64 = 4;
loc_88086B7C:
	// lwz r9,-184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// add r6,r14,r9
	ctx.r6.u64 = ctx.r14.u64 + ctx.r9.u64;
	// ble cr6,0x88086bd0
	if (!ctx.cr6.gt) goto loc_88086BD0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
loc_88086B94:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88086bc8
	if (!ctx.cr6.gt) goto loc_88086BC8;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_88086BA4:
	// lbzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88086bc4
	if (!ctx.cr6.eq) goto loc_88086BC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// blt cr6,0x88086ba4
	if (ctx.cr6.lt) goto loc_88086BA4;
	// b 0x88086bc8
	goto loc_88086BC8;
loc_88086BC4:
	// add r6,r16,r6
	ctx.r6.u64 = ctx.r16.u64 + ctx.r6.u64;
loc_88086BC8:
	// add r7,r7,r16
	ctx.r7.u64 = ctx.r7.u64 + ctx.r16.u64;
	// bdnz 0x88086b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086B94;
loc_88086BD0:
	// cmpw cr6,r6,r15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086be0
	if (!ctx.cr6.lt) goto loc_88086BE0;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// li r4,5
	ctx.r4.s64 = 5;
loc_88086BE0:
	// lwz r9,-180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// add r6,r16,r9
	ctx.r6.u64 = ctx.r16.u64 + ctx.r9.u64;
	// ble cr6,0x88086c34
	if (!ctx.cr6.gt) goto loc_88086C34;
loc_88086BF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086c28
	if (!ctx.cr6.gt) goto loc_88086C28;
loc_88086C00:
	// mullw r8,r16,r9
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88086c24
	if (!ctx.cr6.eq) goto loc_88086C24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086c00
	if (ctx.cr6.lt) goto loc_88086C00;
	// b 0x88086c28
	goto loc_88086C28;
loc_88086C24:
	// add r6,r14,r6
	ctx.r6.u64 = ctx.r14.u64 + ctx.r6.u64;
loc_88086C28:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086bf4
	if (ctx.cr6.lt) goto loc_88086BF4;
loc_88086C34:
	// cmpw cr6,r6,r15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88086c40
	if (!ctx.cr6.lt) goto loc_88086C40;
	// li r4,6
	ctx.r4.s64 = 6;
loc_88086C40:
	// lwz r11,2260(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88086c54
	if (ctx.cr6.eq) goto loc_88086C54;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x88086c68
	goto loc_88086C68;
loc_88086C54:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88086c68
	if (ctx.cr6.eq) goto loc_88086C68;
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_88086C68:
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// lwz r9,6796(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 6796);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// lwzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// bgt cr6,0x8808716c
	if (ctx.cr6.gt) goto loc_8808716C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88086cac
	if (ctx.cr6.eq) goto loc_88086CAC;
	// bdz 0x88086ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086CA8;
	// bdz 0x88086e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086E64;
	// bdz 0x88086e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086E60;
	// bdz 0x88086d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88086D98;
	// b 0x88086dfc
	goto loc_88086DFC;
loc_88086CA8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_88086CAC:
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88086cbc
	if (ctx.cr6.eq) goto loc_88086CBC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_88086CBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8808716c
	if (!ctx.cr6.lt) goto loc_8808716C;
	// subf r8,r11,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,13216
	ctx.r10.s64 = ctx.r10.s64 + 13216;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x88086d54
	if (ctx.cr6.lt) goto loc_88086D54;
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// addi r29,r9,3
	ctx.r29.s64 = ctx.r9.s64 + 3;
	// addi r28,r9,2
	ctx.r28.s64 = ctx.r9.s64 + 2;
	// addi r27,r8,-2
	ctx.r27.s64 = ctx.r8.s64 + -2;
loc_88086D00:
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbzx r26,r28,r11
	ctx.r26.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r6,r26
	ctx.r6.s64 = ctx.r26.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// lwzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// blt cr6,0x88086d00
	if (ctx.cr6.lt) goto loc_88086D00;
loc_88086D54:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88086d88
	if (!ctx.cr6.lt) goto loc_88086D88;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_88086D88:
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88086D98:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x8808716c
	if (!ctx.cr6.gt) goto loc_8808716C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
loc_88086DA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88086dd4
	if (!ctx.cr6.gt) goto loc_88086DD4;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_88086DB8:
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88086dd4
	if (!ctx.cr6.eq) goto loc_88086DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x88086db8
	if (ctx.cr6.lt) goto loc_88086DB8;
loc_88086DD4:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88086dec
	if (ctx.cr6.eq) goto loc_88086DEC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x88086dec
	if (!ctx.cr6.gt) goto loc_88086DEC;
	// add r7,r16,r7
	ctx.r7.u64 = ctx.r16.u64 + ctx.r7.u64;
loc_88086DEC:
	// add r8,r16,r8
	ctx.r8.u64 = ctx.r16.u64 + ctx.r8.u64;
	// bdnz 0x88086da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086DA8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88086DFC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x8808716c
	if (!ctx.cr6.gt) goto loc_8808716C;
loc_88086E08:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086e34
	if (!ctx.cr6.gt) goto loc_88086E34;
loc_88086E14:
	// mullw r10,r16,r11
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88086e34
	if (!ctx.cr6.eq) goto loc_88086E34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086e14
	if (ctx.cr6.lt) goto loc_88086E14;
loc_88086E34:
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88086e4c
	if (ctx.cr6.eq) goto loc_88086E4C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88086e4c
	if (!ctx.cr6.gt) goto loc_88086E4C;
	// add r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 + ctx.r7.u64;
loc_88086E4C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88086e08
	if (ctx.cr6.lt) goto loc_88086E08;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88086E60:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_88086E64:
	// lwz r11,-172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88086fa0
	if (!ctx.cr6.eq) goto loc_88086FA0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88086fa0
	if (ctx.cr6.eq) goto loc_88086FA0;
	// clrlwi r26,r16,31
	ctx.r26.u64 = ctx.r16.u32 & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x880870c8
	if (!ctx.cr6.gt) goto loc_880870C8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r28,r10,23356
	ctx.r28.s64 = ctx.r10.s64 + 23356;
	// addi r31,r11,12704
	ctx.r31.s64 = ctx.r11.s64 + 12704;
loc_88086E9C:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88086f90
	if (!ctx.cr6.lt) goto loc_88086F90;
	// subf r11,r26,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r26.u64;
	// lwz r10,720(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88086EC4:
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// lbzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r25,r4
	ctx.r25.s64 = ctx.r4.s8;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r25,r8,r11
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r23,r5,r4
	ctx.r23.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88086f88
	if (!ctx.cr6.eq) goto loc_88086F88;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r11,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// lwzx r5,r4,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x88086f74
	if (!ctx.cr6.eq) goto loc_88086F74;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// b 0x88086f88
	goto loc_88086F88;
loc_88086F74:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// xori r5,r11,504
	ctx.r5.u64 = ctx.r11.u64 ^ 504;
	// lwzx r11,r5,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_88086F88:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bdnz 0x88086ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086EC4;
loc_88086F90:
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r29,r14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086e9c
	if (ctx.cr6.lt) goto loc_88086E9C;
	// b 0x880870c8
	goto loc_880870C8;
loc_88086FA0:
	// clrlwi r24,r14,31
	ctx.r24.u64 = ctx.r14.u32 & 0x1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880870c8
	if (!ctx.cr6.lt) goto loc_880870C8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r27,r10,23356
	ctx.r27.s64 = ctx.r10.s64 + 23356;
	// addi r30,r11,12704
	ctx.r30.s64 = ctx.r11.s64 + 12704;
	// li r25,3
	ctx.r25.s64 = 3;
loc_88086FC8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880870bc
	if (!ctx.cr6.lt) goto loc_880870BC;
	// subf r11,r26,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r26.u64;
	// lwz r5,720(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(ctx.r25.u32 ? ctx.r11.u32 / ctx.r25.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88086FF4:
	// mullw r11,r5,r28
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r23,r30,4
	ctx.r23.s64 = ctx.r30.s64 + 4;
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbzx r22,r11,r4
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r21,r10,r8
	ctx.r21.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r22,r22
	ctx.r22.s64 = ctx.r22.s8;
	// lbzx r20,r11,r9
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r20
	ctx.r8.s64 = ctx.r20.s8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880870b4
	if (!ctx.cr6.eq) goto loc_880870B4;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r8,r11,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r8,r6,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880870a0
	if (!ctx.cr6.eq) goto loc_880870A0;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// b 0x880870b4
	goto loc_880870B4;
loc_880870A0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// xori r8,r11,504
	ctx.r8.u64 = ctx.r11.u64 ^ 504;
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_880870B4:
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// bdnz 0x88086ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88086FF4;
loc_880870BC:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x88086fc8
	if (ctx.cr6.lt) goto loc_88086FC8;
loc_880870C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88087124
	if (!ctx.cr6.gt) goto loc_88087124;
loc_880870D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88087100
	if (!ctx.cr6.gt) goto loc_88087100;
loc_880870E0:
	// mullw r10,r16,r11
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x88087100
	if (!ctx.cr6.eq) goto loc_88087100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x880870e0
	if (ctx.cr6.lt) goto loc_880870E0;
loc_88087100:
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x88087118
	if (ctx.cr6.eq) goto loc_88087118;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x88087118
	if (!ctx.cr6.gt) goto loc_88087118;
	// add r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 + ctx.r7.u64;
loc_88087118:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x880870d4
	if (ctx.cr6.lt) goto loc_880870D4;
loc_88087124:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8808716c
	if (ctx.cr6.eq) goto loc_8808716C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x88087150
	if (!ctx.cr6.lt) goto loc_88087150;
loc_88087138:
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88087150
	if (!ctx.cr6.eq) goto loc_88087150;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x88087138
	if (ctx.cr6.lt) goto loc_88087138;
loc_88087150:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x8808716c
	if (ctx.cr6.eq) goto loc_8808716C;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x8808716c
	if (!ctx.cr6.lt) goto loc_8808716C;
	// subf r11,r26,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r26.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_8808716C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6520) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880c6554
	if (!ctx.cr6.eq) goto loc_880C6554;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_880C6554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6180
	ctx.lr = 0x880C655C;
	sub_880C6180(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880C656C;
	sub_88050358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880C6AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x880c6bb0
	if (!ctx.cr6.eq) goto loc_880C6BB0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c6ba0
	if (ctx.cr6.eq) goto loc_880C6BA0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x880c6ba0
	if (ctx.cr6.eq) goto loc_880C6BA0;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c6ba0
	if (ctx.cr6.eq) goto loc_880C6BA0;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6ba8
	if (ctx.cr6.eq) goto loc_880C6BA8;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6ba8
	if (ctx.cr6.eq) goto loc_880C6BA8;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r10,r11,12850
	ctx.r10.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c6ba8
	if (ctx.cr6.eq) goto loc_880C6BA8;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r10,r11,12598
	ctx.r10.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c6ba8
	if (ctx.cr6.eq) goto loc_880C6BA8;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6b88
	if (ctx.cr6.eq) goto loc_880C6B88;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6b88
	if (ctx.cr6.eq) goto loc_880C6B88;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6b88
	if (ctx.cr6.eq) goto loc_880C6B88;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880c6ba0
	if (!ctx.cr6.eq) goto loc_880C6BA0;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x880c6b80
	if (!ctx.cr0.eq) goto loc_880C6B80;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x880c6ba0
	if (ctx.cr0.eq) goto loc_880C6BA0;
loc_880C6B80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_880C6B88:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c6b80
	if (!ctx.cr6.eq) goto loc_880C6B80;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c6b80
	if (!ctx.cr6.eq) goto loc_880C6B80;
loc_880C6BA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_880C6BA8:
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
loc_880C6BB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c6cac
	if (ctx.cr6.eq) goto loc_880C6CAC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x880c6cac
	if (ctx.cr6.eq) goto loc_880C6CAC;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c6cac
	if (ctx.cr6.eq) goto loc_880C6CAC;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6c88
	if (ctx.cr6.eq) goto loc_880C6C88;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6c88
	if (ctx.cr6.eq) goto loc_880C6C88;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r10,r11,12598
	ctx.r10.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c6c88
	if (ctx.cr6.eq) goto loc_880C6C88;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6c64
	if (ctx.cr6.eq) goto loc_880C6C64;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6c64
	if (ctx.cr6.eq) goto loc_880C6C64;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c6c64
	if (ctx.cr6.eq) goto loc_880C6C64;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880c6ba0
	if (!ctx.cr6.eq) goto loc_880C6BA0;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c6c5c
	if (!ctx.cr6.eq) goto loc_880C6C5C;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_880C6C5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_880C6C64:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c6c80
	if (!ctx.cr6.eq) goto loc_880C6C80;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_880C6C80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_880C6C88:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c6ca4
	if (!ctx.cr6.eq) goto loc_880C6CA4;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_880C6CA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_880C6CAC:
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880C8758) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880c8778
	if (ctx.cr6.gt) goto loc_880C8778;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_880C8778:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x880c83e0
	ctx.lr = 0x880C87A8;
	sub_880C83E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880C8E68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880C8E70;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef284
	ctx.lr = 0x880C8E78;
	__savefpr_27(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,14464(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14464);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,8312
	ctx.r11.s64 = ctx.r3.s64 + 8312;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x880c8fc0
	if (!ctx.cr6.eq) goto loc_880C8FC0;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f6,13880(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + 13880);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfd f0,13872(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 13872);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f7,13864(r6)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 13864);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f5,13856(r9)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + 13856);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f8,13848(r5)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r5.u32 + 13848);
	// lfd f9,13840(r4)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r4.u32 + 13840);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f10,13832(r3)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r3.u32 + 13832);
	// lfd f11,13824(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 13824);
	// lfd f12,13816(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 13816);
	// lfd f13,13808(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 13808);
loc_880C8EE8:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// lfd f4,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f4,f3,f9
	ctx.f4.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fmadd f1,f3,f11,f10
	ctx.f1.f64 = std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f10.f64);
	// fmul f31,f3,f8
	ctx.f31.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f30,f3,f6
	ctx.f30.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f29,f3,f13
	ctx.f29.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fnmsub f28,f3,f5,f0
	ctx.f28.f64 = -std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmul f3,f3,f12
	ctx.f3.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fadd f27,f2,f0
	ctx.f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f1.u64);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f1.u64);
	// fctiwz f2,f30
	ctx.f2.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f2,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f2.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r6,-108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stfd f1,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f1.u64);
	// fctiwz f4,f28
	ctx.f4.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f4,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f2,f27
	ctx.f2.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f2,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f2.u64);
	// lwz r4,-100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stfd f3,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f3.u64);
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r8,-84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r31,-76(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r30,-108(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r5,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// stw r6,-7164(r11)
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r6.u32);
	// stw r7,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r7.u32);
	// stw r4,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r4.u32);
	// stw r3,-6140(r11)
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// stw r8,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r8.u32);
	// stw r31,-8188(r11)
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r31.u32);
	// stw r29,-5116(r11)
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r29.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880c8ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C8EE8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2d0
	ctx.lr = 0x880C8FBC;
	__restfpr_27(ctx, base);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880C8FC0:
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f6,13800(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + 13800);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfd f7,13792(r7)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + 13792);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f8,13784(r6)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + 13784);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f5,13776(r9)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + 13776);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f9,13768(r5)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r5.u32 + 13768);
	// lfd f10,13760(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 13760);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f11,13752(r3)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r3.u32 + 13752);
	// lfd f12,13744(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 13744);
	// lfd f0,13872(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 13872);
	// lfd f13,13832(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 13832);
loc_880C9014:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
	// lfd f4,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f1,f3,f8
	ctx.f1.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f4,f3,f12
	ctx.f4.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fnmsub f30,f3,f5,f0
	ctx.f30.f64 = -std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmadd f31,f3,f10,f13
	ctx.f31.f64 = std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f13.f64);
	// fmul f29,f3,f11
	ctx.f29.f64 = ctx.f3.f64 * ctx.f11.f64;
	// fmul f28,f3,f6
	ctx.f28.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f3,f3,f9
	ctx.f3.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fadd f27,f2,f0
	ctx.f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// lwz r7,-84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f4,f30
	ctx.f4.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f4,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// lwz r4,-84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stfd f1,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// fctiwz f1,f3
	ctx.f1.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r31,-100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f27
	ctx.f4.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f4,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r3,-84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stfd f1,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// lwz r8,-84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f2,f28
	ctx.f2.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// stfd f2,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f2.u64);
	// lwz r30,-108(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r7,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r7.u32);
	// stw r5,-8188(r11)
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r5.u32);
	// stw r6,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r6.u32);
	// stw r31,-6140(r11)
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r31.u32);
	// stw r3,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r3.u32);
	// stw r8,-7164(r11)
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r8.u32);
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stw r8,-5116(r11)
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r8.u32);
	// stw r30,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r30.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880c9014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C9014;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2d0
	ctx.lr = 0x880C90E8;
	__restfpr_27(ctx, base);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CBCB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880CBCB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x880cb730
	ctx.lr = 0x880CBCEC;
	sub_880CB730(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cbec0
	if (ctx.cr6.lt) goto loc_880CBEC0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x880cbd28
	if (!ctx.cr6.eq) goto loc_880CBD28;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880cbf1c
	if (ctx.cr6.eq) goto loc_880CBF1C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880cbf1c
	if (!ctx.cr6.eq) goto loc_880CBF1C;
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
loc_880CBD28:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb2c0
	ctx.lr = 0x880CBD3C;
	sub_880CB2C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cbec0
	if (ctx.cr6.lt) goto loc_880CBEC0;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880CBD5C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x880cbd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CBD5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880cbe10
	if (ctx.cr6.eq) goto loc_880CBE10;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb2c0
	ctx.lr = 0x880CBD94;
	sub_880CB2C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cbec0
	if (ctx.cr6.lt) goto loc_880CBEC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x880cb2c0
	ctx.lr = 0x880CBDCC;
	sub_880CB2C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cbec0
	if (ctx.cr6.lt) goto loc_880CBEC0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880547a0
	ctx.lr = 0x880CBDF0;
	sub_880547A0(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
loc_880CBE10:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// sth r6,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r6.u16);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,52(r6)
	REX_STORE_U32(ctx.r6.u32 + 52, ctx.r30.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r30.u32);
	// ld r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r4,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ble cr6,0x880cbf48
	if (!ctx.cr6.gt) goto loc_880CBF48;
	// lwz r10,44(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880cbf48
	if (ctx.cr6.eq) goto loc_880CBF48;
	// lis r28,-32688
	ctx.r28.s64 = -2142240768;
	// ori r28,r28,214
	ctx.r28.u64 = ctx.r28.u64 | 214;
loc_880CBEC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cbedc
	if (ctx.cr6.eq) goto loc_880CBEDC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb318
	ctx.lr = 0x880CBEDC;
	sub_880CB318(ctx, base);
loc_880CBEDC:
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880cbf10
	if (ctx.cr6.eq) goto loc_880CBF10;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cbf00
	if (ctx.cr6.eq) goto loc_880CBF00;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x880cb318
	ctx.lr = 0x880CBF00;
	sub_880CB318(ctx, base);
loc_880CBF00:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb318
	ctx.lr = 0x880CBF10;
	sub_880CB318(ctx, base);
loc_880CBF10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CBF1C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CBF34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cbec0
	if (ctx.cr6.lt) goto loc_880CBEC0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CBF48:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x880cbf88
	if (!ctx.cr6.eq) goto loc_880CBF88;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x880cbfa8
	goto loc_880CBFA8;
loc_880CBF88:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_880CBFA8:
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lwz r8,48(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,32(r29)
	REX_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// bne cr6,0x880cbf10
	if (!ctx.cr6.eq) goto loc_880CBF10;
	// std r11,40(r29)
	REX_STORE_U64(ctx.r29.u32 + 40, ctx.r11.u64);
	// stw r26,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880D1708;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x88125e60
	ctx.lr = 0x880D1728;
	sub_88125E60(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880d1744
	if (!ctx.cr6.eq) goto loc_880D1744;
loc_880D1734:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880D1744:
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d1818
	if (ctx.cr6.eq) goto loc_880D1818;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880D1754:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1776));
	// li r3,28
	ctx.r3.s64 = 28;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D1764;
	sub_88125E60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// beq cr6,0x880d1734
	if (ctx.cr6.eq) goto loc_880D1734;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D1780:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880d1780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D1780;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// bl 0x88125e60
	ctx.lr = 0x880D1798;
	sub_88125E60(ctx, base);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,424(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1734
	if (ctx.cr6.eq) goto loc_880D1734;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// bl 0x88052d90
	ctx.lr = 0x880D17C4;
	sub_88052D90(ctx, base);
	// lwz r8,424(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r6,424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d1754
	if (ctx.cr6.lt) goto loc_880D1754;
loc_880D1818:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D2FC0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d2fe4
	if (ctx.cr6.eq) goto loc_880D2FE4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x880d2fe4
	if (!ctx.cr6.gt) goto loc_880D2FE4;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_880D2FE4:
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r7,328(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r10,r6,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880D3C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880D3C48;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef250
	ctx.lr = 0x880D3C50;
	__savefpr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r20,360(r3)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r27,384(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r25,34(r31)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// beq cr6,0x880d4220
	if (ctx.cr6.eq) goto loc_880D4220;
	// lwz r11,424(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d3c8c
	if (ctx.cr6.eq) goto loc_880D3C8C;
	// li r20,6
	ctx.r20.s64 = 6;
loc_880D3C8C:
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// bne cr6,0x880d3f44
	if (!ctx.cr6.eq) goto loc_880D3F44;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x880d3f44
	if (!ctx.cr6.eq) goto loc_880D3F44;
	// lwz r11,372(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 372);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f18.f64 = double(temp.f32);
	// ble cr6,0x880d4220
	if (!ctx.cr6.gt) goto loc_880D4220;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,6728(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,6732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_880D3CF8:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880D3D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f17,f11
	ctx.f17.f64 = double(float(ctx.f11.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880D3D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f16,f9
	ctx.f16.f64 = double(float(ctx.f9.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f8,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f15,f7
	ctx.f15.f64 = double(float(ctx.f7.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880D3DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,5
	ctx.r6.s64 = 5;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// std r8,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f6,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f14,f5
	ctx.f14.f64 = double(float(ctx.f5.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880D3E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fmuls f4,f14,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f25.f64));
	// fmuls f3,f14,f19
	ctx.f3.f64 = double(float(ctx.f14.f64 * ctx.f19.f64));
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f2,128(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f13,f0,f24,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f24.f64, ctx.f4.f64)));
	// fmadds f12,f0,f18,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f18.f64, ctx.f3.f64)));
	// fmadds f11,f15,f26,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f15.f64, ctx.f26.f64, ctx.f13.f64)));
	// fmadds f10,f15,f20,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f15.f64, ctx.f20.f64, ctx.f12.f64)));
	// fmadds f9,f16,f27,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f16.f64, ctx.f27.f64, ctx.f11.f64)));
	// fmadds f8,f17,f28,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f17.f64, ctx.f28.f64, ctx.f9.f64)));
	// fmadds f0,f31,f29,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, ctx.f8.f64)));
	// fmadds f7,f16,f21,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f16.f64, ctx.f21.f64, ctx.f10.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// fmadds f6,f17,f22,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f17.f64, ctx.f22.f64, ctx.f7.f64)));
	// lfs f17,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f31,f31,f23,f6
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f23.f64, ctx.f6.f64)));
	// bge cr6,0x880d3e68
	if (!ctx.cr6.lt) goto loc_880D3E68;
	// fsubs f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x880d3e78
	goto loc_880D3E78;
loc_880D3E68:
	// fadds f0,f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880D3E78:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d3e90
	if (ctx.cr6.lt) goto loc_880D3E90;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d3e94
	if (!ctx.cr6.gt) goto loc_880D3E94;
loc_880D3E90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D3E94:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x880d3ec8
	if (!ctx.cr6.lt) goto loc_880D3EC8;
	// fsubs f0,f31,f17
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x880d3ed8
	goto loc_880D3ED8;
loc_880D3EC8:
	// fadds f0,f31,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880D3ED8:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d3ef0
	if (ctx.cr6.lt) goto loc_880D3EF0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d3ef4
	if (!ctx.cr6.gt) goto loc_880D3EF4;
loc_880D3EF0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D3EF4:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3F0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x880d3cf8
	if (!ctx.cr0.eq) goto loc_880D3CF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef29c
	ctx.lr = 0x880D3F40;
	__restfpr_14(ctx, base);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880D3F44:
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880d40b4
	if (ctx.cr6.lt) goto loc_880D40B4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880d4220
	if (!ctx.cr6.gt) goto loc_880D4220;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f31,6728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
loc_880D3F6C:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D3F7C;
	sub_88052D90(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4000
	if (!ctx.cr6.gt) goto loc_880D4000;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_880D3F8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d3ff4
	if (!ctx.cr6.gt) goto loc_880D3FF4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880D3F9C:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3FB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwzx r8,r28,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfsx f10,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f9,f11,f10,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfsx f9,r28,r27
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// blt cr6,0x880d3f9c
	if (ctx.cr6.lt) goto loc_880D3F9C;
loc_880D3FF4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x880d3f8c
	if (!ctx.cr0.eq) goto loc_880D3F8C;
loc_880D4000:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4084
	if (!ctx.cr6.gt) goto loc_880D4084;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880D4010:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x880d4030
	if (!ctx.cr6.lt) goto loc_880D4030;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x880d4040
	goto loc_880D4040;
loc_880D4030:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880D4040:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d4058
	if (ctx.cr6.lt) goto loc_880D4058;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d405c
	if (!ctx.cr6.gt) goto loc_880D405C;
loc_880D4058:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D405C:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D4074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880d4010
	if (ctx.cr6.lt) goto loc_880D4010;
loc_880D4084:
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bne 0x880d3f6c
	if (!ctx.cr0.eq) goto loc_880D3F6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef29c
	ctx.lr = 0x880D40B0;
	__restfpr_14(ctx, base);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880D40B4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
	// mullw r10,r22,r11
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// blt cr6,0x880d4220
	if (ctx.cr6.lt) goto loc_880D4220;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,6728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
loc_880D40EC:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88052d90
	ctx.lr = 0x880D40FC;
	sub_88052D90(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4180
	if (!ctx.cr6.gt) goto loc_880D4180;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_880D410C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d4174
	if (!ctx.cr6.gt) goto loc_880D4174;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880D411C:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D4138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwzx r8,r28,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfsx f13,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsx f9,r28,r27
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// blt cr6,0x880d411c
	if (ctx.cr6.lt) goto loc_880D411C;
loc_880D4174:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x880d410c
	if (!ctx.cr0.eq) goto loc_880D410C;
loc_880D4180:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880d4204
	if (!ctx.cr6.gt) goto loc_880D4204;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_880D4190:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x880d41b0
	if (!ctx.cr6.lt) goto loc_880D41B0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x880d41c0
	goto loc_880D41C0;
loc_880D41B0:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880D41C0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d41d8
	if (ctx.cr6.lt) goto loc_880D41D8;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d41dc
	if (!ctx.cr6.gt) goto loc_880D41DC;
loc_880D41D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_880D41DC:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D41F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880d4190
	if (ctx.cr6.lt) goto loc_880D4190;
loc_880D4204:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mullw r10,r11,r25
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// mullw r9,r11,r20
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// subf r26,r10,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r10.u64;
	// subf r23,r9,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r9.u64;
	// bge 0x880d40ec
	if (!ctx.cr0.lt) goto loc_880D40EC;
loc_880D4220:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x881ef29c
	ctx.lr = 0x880D4230;
	__restfpr_14(ctx, base);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DF9F8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DFA00;
	__savegprlr_14(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// stw r31,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r31.u32);
	// stw r31,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r31.u32);
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r31.u32);
	// stw r31,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// stw r31,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r31.u32);
	// stw r31,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// stw r31,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// stw r31,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// stw r31,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r31.u32);
	// stw r31,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r31,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// stw r31,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r31.u32);
	// stw r31,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r31.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// lbz r31,2(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r30,8(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// stw r9,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r9.u32);
	// stw r3,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// lbz r9,7(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r6,3(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// stw r31,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r31.u32);
	// stw r30,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r30.u32);
	// b 0x880dfad4
	goto loc_880DFAD4;
loc_880DFAC4:
	// lwz r3,-300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r4,-292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r5,-256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r6,-240(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
loc_880DFAD4:
	// lbz r31,3(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lbz r29,5(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// subf r5,r5,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r5.u64;
	// lbz r26,6(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r27,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r6.s32 >> 31;
	// lbz r28,7(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r4,r4,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lbz r24,1(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// xor r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// lbz r23,2(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// srawi r25,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r5.s32 >> 31;
	// lbz r22,9(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r6,r27,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r27.u64;
	// lbz r27,10(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// xor r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r25.u64;
	// lbz r21,11(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// stw r6,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r6.u32);
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// subf r3,r3,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r3.u64;
	// lbz r19,12(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r20,r9,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r9.u64;
	// lbz r18,15(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// lbz r16,9(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// subf r9,r25,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r25.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r17,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r3.s32 >> 31;
	// lbz r25,13(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lbz r15,10(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// xor r4,r3,r17
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r17.u64;
	// lbz r6,11(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lbz r10,13(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// subf r8,r8,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r8.u64;
	// stw r5,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// srawi r14,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r20.s32 >> 31;
	// lwz r5,-288(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r15,r15,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r15.u64;
	// stw r24,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r24.u32);
	// xor r20,r20,r14
	ctx.r20.u64 = ctx.r20.u64 ^ ctx.r14.u64;
	// subf r5,r5,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r5.u64;
	// stw r23,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r23.u32);
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r6,r6,r21
	ctx.r6.u64 = ctx.r21.u64 - ctx.r6.u64;
	// lwz r10,-320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r3,r3,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r3.u64;
	// stw r28,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r28.u32);
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// stw r31,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r31.u32);
	// subf r31,r16,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r16.u64;
	// srawi r16,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r8.s32 >> 31;
	// stw r22,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// srawi r22,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 31;
	// stw r27,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r27.u32);
	// lbz r24,14(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// lbz r23,8(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r27,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r31.s32 >> 31;
	// lwz r10,-312(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// stw r21,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r21.u32);
	// srawi r21,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r15.s32 >> 31;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r19,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r19.u32);
	// xor r9,r8,r16
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r16.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r10.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r17,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r17.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r10.u32);
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r14,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r14.u64;
	// xor r8,r31,r27
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r27.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r28,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r28.u64;
	// xor r7,r15,r21
	ctx.r7.u64 = ctx.r15.u64 ^ ctx.r21.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r16,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r16.u64;
	// lwz r9,-180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// xor r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r22.u64;
	// stw r25,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r25.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r20,-300(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r11,r22,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r22.u64;
	// lwz r22,-280(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r27.u64;
	// lwz r5,-304(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r23.u32);
	// subf r22,r22,r25
	ctx.r22.u64 = ctx.r25.u64 - ctx.r22.u64;
	// stw r24,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r24.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r9,r21,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r21.u64;
	// stw r22,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r22.u32);
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// xor r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r18,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r18.u32);
	// srawi r31,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 31;
	// lbz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// srawi r25,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r22.s32 >> 31;
	// lbz r6,15(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r9,r7,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r7.u64;
	// subf r7,r6,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r6.u64;
	// stw r11,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// stw r9,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lbz r27,3(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// subf r5,r5,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r5.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// lbz r23,4(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r4,r27,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r27.u64;
	// lbz r22,5(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// lbz r21,6(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r10,r31,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lbz r19,7(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r18,0(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r24,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r5.s32 >> 31;
	// stw r23,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r23.u32);
	// srawi r20,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r4.s32 >> 31;
	// stw r22,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r22.u32);
	// subf r30,r23,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r23.u64;
	// lwz r23,-292(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// xor r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r20.u64;
	// lbz r16,1(r11)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r17,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r30.s32 >> 31;
	// lbz r15,2(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// lbz r3,14(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r31,r22,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r22.u64;
	// lbz r8,15(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// xor r30,r30,r17
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r17.u64;
	// stw r4,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r4.u32);
	// stw r10,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// srawi r22,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 31;
	// subf r10,r17,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r17.u64;
	// lbz r29,13(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// subf r4,r21,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r21.u64;
	// lwz r26,-312(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lbz r14,12(r11)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// lbz r20,11(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// srawi r17,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r4.s32 >> 31;
	// lbz r30,9(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stw r9,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r9.u32);
	// xor r9,r31,r22
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r22.u64;
	// stw r6,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r6.u32);
	// add r6,r26,r10
	ctx.r6.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stw r6,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// srawi r10,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 31;
	// lwz r6,-280(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// xor r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r24.u64;
	// stw r11,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// subf r11,r22,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r22.u64;
	// xor r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r25.u64;
	// lwz r31,-256(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// xor r9,r4,r17
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r17.u64;
	// lwz r22,-240(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r25.u64;
	// lwz r26,-312(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// subf r4,r17,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r17.u64;
	// stw r21,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r21.u32);
	// xor r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r10.u64;
	// lwz r23,-300(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r31,r18,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r18.u64;
	// stw r6,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// lwz r25,-292(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// xor r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r23.u64;
	// srawi r21,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r31.s32 >> 31;
	// stw r4,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r4.u32);
	// add r4,r25,r11
	ctx.r4.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r6,-288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r4,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r4.u32);
	// xor r9,r31,r21
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r21.u64;
	// stw r8,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// xor r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// stw r10,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// subf r11,r23,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r23.u64;
	// stw r11,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// subf r7,r16,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r16.u64;
	// lwz r10,-244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// subf r11,r21,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r21.u64;
	// stw r11,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// lwz r23,-276(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// subf r6,r15,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r15.u64;
	// lwz r31,-204(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// xor r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// stw r9,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// lwz r9,-304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,-248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// subf r22,r3,r9
	ctx.r22.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r25,-320(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r9,r24,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r24.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// subf r5,r8,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r10,-312(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// xor r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// add r8,r26,r8
	ctx.r8.u64 = ctx.r26.u64 + ctx.r8.u64;
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// stw r3,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// srawi r3,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r22.s32 >> 31;
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r18,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r18.u32);
	// lwz r26,-292(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// stw r16,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r16.u32);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lwz r26,-256(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r24,-300(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r10,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + ctx.r24.u64;
	// stw r15,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r15.u32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r26,-244(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r10,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r26,-240(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lwz r26,-260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r11,r28,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r28.u64;
	// lwz r15,-332(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r31,-272(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// stw r7,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r7.u32);
	// add r11,r25,r6
	ctx.r11.u64 = ctx.r25.u64 + ctx.r6.u64;
	// lwz r7,-232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// xor r4,r22,r3
	ctx.r4.u64 = ctx.r22.u64 ^ ctx.r3.u64;
	// lwz r6,-200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r9,r26,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r26.u64;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// stw r8,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r9,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r9.u32);
	// subf r8,r30,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r30.u64;
	// lwz r6,-264(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// stw r10,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r10.u32);
	// srawi r28,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 31;
	// stw r4,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r4.u32);
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// lbz r24,3(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// lbz r23,4(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// lbz r25,6(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r22,5(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r9,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 31;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lbz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r8,r20,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r20.u64;
	// lbz r19,1(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r6,r14,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r14.u64;
	// lbz r31,7(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r17,2(r11)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// srawi r18,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r8.s32 >> 31;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lwz r4,-268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r3,r27,r24
	ctx.r3.u64 = ctx.r24.u64 - ctx.r27.u64;
	// lwz r27,-284(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// srawi r16,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r6.s32 >> 31;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// stw r10,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// subf r10,r27,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r27.u64;
	// stw r23,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// lwz r5,-252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// srawi r23,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r4.s32 >> 31;
	// stw r7,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r7.u32);
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// stw r30,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r30.u32);
	// srawi r30,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 31;
	// stw r26,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r26.u32);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// stw r29,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r29.u32);
	// lwz r26,-264(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r5,r5,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r5.u64;
	// stw r20,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r20.u32);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lwz r20,-272(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// xor r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// stw r10,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r10.u32);
	// add r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r29,-260(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// stw r24,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r24.u32);
	// lwz r24,-344(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r27,-296(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// xor r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// lwz r29,-268(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// stw r14,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r14.u32);
	// stw r25,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r25.u32);
	// stw r11,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r7,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r7.u32);
	// subf r28,r27,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r27,-332(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r3,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 31;
	// lwz r29,-344(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r7,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r3.u64;
	// stw r11,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r11.u32);
	// xor r11,r8,r18
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r18.u64;
	// lwz r25,-348(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r8,r3,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r3.u64;
	// lwz r7,-332(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lwz r24,-284(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// lwz r20,-252(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// stw r30,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r30.u32);
	// subf r11,r18,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r18.u64;
	// lwz r10,-344(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r3,r29,r10
	ctx.r3.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r8,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r8.u32);
	// xor r6,r6,r16
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r16.u64;
	// stw r3,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r3.u32);
	// xor r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r10,-296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// xor r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r23.u64;
	// lwz r5,-288(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r27,r15,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r15.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,-224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// subf r5,r5,r19
	ctx.r5.u64 = ctx.r19.u64 - ctx.r5.u64;
	// lwz r7,-316(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r16,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r16.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r30,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r23.u64;
	// lwz r4,-236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r26,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r27.s32 >> 31;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r8,-304(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r10,r5,r23
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r23.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r3,r8,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r8.u64;
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r23.u64;
	// stw r5,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r5.u32);
	// xor r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r30.u64;
	// lwz r28,-324(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// lwz r8,-344(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// xor r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// lwz r23,-332(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r5,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 31;
	// lbz r18,14(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// lbz r23,15(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// subf r28,r28,r18
	ctx.r28.u64 = ctx.r18.u64 - ctx.r28.u64;
	// lbz r16,8(r11)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r15,9(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r9,r30,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r30.u64;
	// lbz r30,10(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// subf r29,r25,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r25.u64;
	// lbz r25,11(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r14,12(r11)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r9,r26,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r26.u64;
	// lbz r27,13(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r24,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r24.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r7,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 31;
	// lbz r26,3(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// xor r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// lbz r24,4(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r6,r20,r15
	ctx.r6.u64 = ctx.r15.u64 - ctx.r20.u64;
	// stw r16,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r16.u32);
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// lbz r16,5(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// xor r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// stw r23,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// subf r4,r4,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r4.u64;
	// stw r26,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// subf r11,r7,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r7.u64;
	// lbz r23,6(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// stw r24,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r24.u32);
	// stw r28,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r28.u32);
	// stw r16,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r16.u32);
	// stw r18,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r18.u32);
	// stw r23,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r23.u32);
	// lbz r18,7(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r26,2(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r9.u32);
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// srawi r20,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r6.s32 >> 31;
	// lwz r28,-272(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r31,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r31.u32);
	// srawi r29,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 31;
	// xor r7,r6,r20
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r20.u64;
	// lwz r6,-264(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lbz r23,1(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r28,r28,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r28.u64;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r6,r6,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r6.u64;
	// lwz r31,-188(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// lwz r24,-232(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// xor r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r29.u64;
	// stw r15,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r15.u32);
	// lwz r15,-276(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r24,r24,r27
	ctx.r24.u64 = ctx.r27.u64 - ctx.r24.u64;
	// lwz r16,-240(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// stw r14,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r14.u32);
	// stw r17,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r17.u32);
	// subf r16,r16,r15
	ctx.r16.u64 = ctx.r15.u64 - ctx.r16.u64;
	// lwz r14,-256(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r17,-248(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// stw r18,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r18.u32);
	// srawi r18,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r6.s32 >> 31;
	// lwz r10,-324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r17,r14,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r14.u64;
	// stw r30,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r30.u32);
	// xor r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r18.u64;
	// stw r25,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// srawi r25,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r28.s32 >> 31;
	// lwz r30,-292(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r19.u32);
	// srawi r19,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r24.s32 >> 31;
	// stw r31,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r31.u32);
	// srawi r31,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r16.s32 >> 31;
	// stw r27,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r27.u32);
	// subf r30,r30,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r30.u64;
	// stw r26,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// srawi r26,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r17.s32 >> 31;
	// lwz r27,-200(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r15,-300(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// xor r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r25.u64;
	// stw r21,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r21.u32);
	// xor r24,r24,r19
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r19.u64;
	// stw r23,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r23.u32);
	// srawi r23,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r30.s32 >> 31;
	// lwz r14,-348(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r21,-196(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// xor r22,r16,r31
	ctx.r22.u64 = ctx.r16.u64 ^ ctx.r31.u64;
	// xor r8,r17,r26
	ctx.r8.u64 = ctx.r17.u64 ^ ctx.r26.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r20,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lwz r16,-208(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r29.u64;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r7.u32);
	// subf r7,r31,r22
	ctx.r7.u64 = ctx.r22.u64 - ctx.r31.u64;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r11,r18,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r18.u64;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r3.u32);
	// xor r6,r30,r23
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r23.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r25,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r25.u64;
	// lwz r25,-260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r8,r26,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r26.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r19,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r19.u64;
	// lwz r24,-268(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// srawi r5,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 31;
	// lwz r19,-272(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r23,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r23.u64;
	// lwz r6,-344(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 + ctx.r9.u64;
	// lwz r14,-176(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,-280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,-332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// xor r4,r27,r5
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r5.u64;
	// add r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 + ctx.r21.u64;
	// lwz r9,-304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r3,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r3.u32);
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// stw r10,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// stw r8,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r8.u32);
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// lwz r8,-312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r10,-316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r5,-284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r6,-296(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r30,r8,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwz r11,-288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// lwz r5,-252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// subf r31,r7,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lbz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// subf r28,r11,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lbz r11,9(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r5,10(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// srawi r27,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r31.s32 >> 31;
	// subf r11,r11,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r11.u64;
	// lbz r25,11(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// lbz r22,13(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// subf r5,r5,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r5.u64;
	// stw r6,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r6.u32);
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// lbz r24,12(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// lbz r20,14(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// srawi r21,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r5.s32 >> 31;
	// xor r18,r11,r6
	ctx.r18.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// lwz r11,-264(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r25,r25,r19
	ctx.r25.u64 = ctx.r19.u64 - ctx.r25.u64;
	// lbz r19,15(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// xor r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r21.u64;
	// srawi r15,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r25.s32 >> 31;
	// lwz r29,-348(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r24,r24,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r24.u64;
	// lwz r17,-324(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r11,r21,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r21.u64;
	// subf r6,r6,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r6.u64;
	// xor r5,r25,r15
	ctx.r5.u64 = ctx.r25.u64 ^ ctx.r15.u64;
	// srawi r25,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 31;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r21,-236(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r11,r15,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r15.u64;
	// xor r5,r24,r25
	ctx.r5.u64 = ctx.r24.u64 ^ ctx.r25.u64;
	// subf r22,r22,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r22.u64;
	// lwz r21,-244(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r25.u64;
	// lwz r5,-340(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// srawi r24,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 31;
	// subf r21,r20,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r20.u64;
	// xor r25,r22,r24
	ctx.r25.u64 = ctx.r22.u64 ^ ctx.r24.u64;
	// lwz r22,-304(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r19,r19,r5
	ctx.r19.u64 = ctx.r5.u64 - ctx.r19.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r4,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r4.u64;
	// srawi r20,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r21.s32 >> 31;
	// subf r11,r24,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r24.u64;
	// lwz r25,-352(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r4,r29,r17
	ctx.r4.u64 = ctx.r29.u64 + ctx.r17.u64;
	// xor r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r27.u64;
	// xor r31,r21,r20
	ctx.r31.u64 = ctx.r21.u64 ^ ctx.r20.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r29,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 31;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r27,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r27.u64;
	// subf r25,r22,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r22.u64;
	// subf r11,r20,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r20.u64;
	// xor r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// xor r31,r19,r29
	ctx.r31.u64 = ctx.r19.u64 ^ ctx.r29.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r30,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r25.s32 >> 31;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r26,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r26.u64;
	// subf r11,r29,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r29.u64;
	// xor r3,r28,r23
	ctx.r3.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// xor r31,r25,r30
	ctx.r31.u64 = ctx.r25.u64 ^ ctx.r30.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r23,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r23.u64;
	// lwz r3,44(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r4,-320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r5,r16
	ctx.r6.u64 = ctx.r5.u64 + ctx.r16.u64;
	// add r5,r11,r14
	ctx.r5.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r6,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// stw r5,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x880dfac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DFAC4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880E0484:
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r5,-240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r5,-256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lbz r31,5(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// lwz r29,-292(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lbz r28,7(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// lbz r27,6(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r26,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 31;
	// lwz r25,-300(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r3,r30,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lbz r30,1(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r29,r29,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r29.u64;
	// lbz r24,2(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stw r3,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// xor r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r26.u64;
	// subf r22,r9,r28
	ctx.r22.u64 = ctx.r28.u64 - ctx.r9.u64;
	// lbz r20,0(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// lbz r23,9(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r9,r26,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r5,11(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// subf r26,r25,r27
	ctx.r26.u64 = ctx.r27.u64 - ctx.r25.u64;
	// lbz r21,10(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// xor r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// lbz r25,12(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// srawi r18,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r26.s32 >> 31;
	// lbz r19,13(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r17,15(r11)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// subf r11,r3,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r3.u64;
	// xor r29,r26,r18
	ctx.r29.u64 = ctx.r26.u64 ^ ctx.r18.u64;
	// lbz r26,10(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// lbz r3,9(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// subf r7,r7,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r7.u64;
	// lbz r15,11(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// subf r8,r8,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lbz r14,12(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r16,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r22.s32 >> 31;
	// lbz r10,13(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// stw r31,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r31.u32);
	// subf r15,r15,r5
	ctx.r15.u64 = ctx.r5.u64 - ctx.r15.u64;
	// stw r28,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r28.u32);
	// xor r22,r22,r16
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r16.u64;
	// lwz r28,-288(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// stw r10,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// subf r6,r28,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r28.u64;
	// lwz r10,-320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r20,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r20.u32);
	// srawi r20,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r7.s32 >> 31;
	// lwz r31,-352(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r27,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// srawi r27,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 31;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r30,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r30.u32);
	// subf r30,r26,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r26.u64;
	// stw r24,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r24.u32);
	// stw r9,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbz r28,14(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// srawi r26,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r6.s32 >> 31;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r24,8(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// stw r9,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// subf r11,r18,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r18.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// srawi r31,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 31;
	// stw r23,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r23.u32);
	// xor r7,r7,r20
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r20.u64;
	// stw r21,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r21.u32);
	// srawi r5,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r15.s32 >> 31;
	// subf r29,r14,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r14.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r16,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r16.u64;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// xor r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// stw r25,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r25.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r25,-340(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r11,r20,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lwz r7,-352(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r28,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r28.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// subf r11,r27,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r27.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// xor r8,r6,r26
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r26.u64;
	// lwz r6,-304(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r17,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r17.u32);
	// subf r11,r26,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r26.u64;
	// lwz r8,-348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwz r14,-344(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r19.u32);
	// subf r8,r8,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// srawi r10,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// stw r8,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r9,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// subf r8,r7,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r7.u64;
	// xor r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// lbz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r6,r6,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r6.u64;
	// lbz r3,15(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// subf r3,r3,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r3.u64;
	// lwz r17,-324(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// stw r7,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r7.u32);
	// srawi r31,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 31;
	// stw r11,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// lbz r30,3(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// lbz r27,4(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
	// lbz r23,5(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// xor r24,r15,r5
	ctx.r24.u64 = ctx.r15.u64 ^ ctx.r5.u64;
	// lbz r22,6(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r21,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r25.s32 >> 31;
	// lbz r20,7(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r19,0(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// xor r25,r25,r21
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r21.u64;
	// lbz r18,1(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r9,r5,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r5.u64;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// xor r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r10.u64;
	// lbz r24,14(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r25,r21,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r21.u64;
	// lbz r21,15(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r16,12(r11)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r27.u64;
	// stw r25,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r25.u32);
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lbz r29,13(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// srawi r25,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r4.s32 >> 31;
	// lbz r15,11(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,9(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r17,r23,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r23.u64;
	// stw r23,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r23.u32);
	// subf r8,r22,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r22.u64;
	// lbz r14,10(r11)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// srawi r23,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r17.s32 >> 31;
	// xor r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r25.u64;
	// stw r10,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r10.u32);
	// stw r31,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r31.u32);
	// srawi r31,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 31;
	// lwz r10,-332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// stw r20,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r20.u32);
	// subf r10,r20,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r20.u64;
	// lwz r20,-296(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r30,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r30.u32);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// stw r10,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// subf r10,r25,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r25.u64;
	// xor r4,r17,r23
	ctx.r4.u64 = ctx.r17.u64 ^ ctx.r23.u64;
	// lwz r17,-348(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// stw r29,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r29.u32);
	// subf r20,r19,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r19.u64;
	// lwz r25,-352(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// xor r17,r17,r26
	ctx.r17.u64 = ctx.r17.u64 ^ ctx.r26.u64;
	// lwz r29,-284(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// stw r22,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r22.u32);
	// srawi r22,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r25.s32 >> 31;
	// lwz r30,-324(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r26,r26,r17
	ctx.r26.u64 = ctx.r17.u64 - ctx.r26.u64;
	// stw r19,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r19.u32);
	// xor r3,r25,r22
	ctx.r3.u64 = ctx.r25.u64 ^ ctx.r22.u64;
	// xor r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r30.u64;
	// lwz r19,-340(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// stw r16,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r16.u32);
	// subf r3,r22,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r22.u64;
	// lwz r16,-344(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r30,r30,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r30.u64;
	// stw r27,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r27.u32);
	// srawi r27,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r20.s32 >> 31;
	// stw r26,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r26.u32);
	// add r10,r19,r10
	ctx.r10.u64 = ctx.r19.u64 + ctx.r10.u64;
	// stw r11,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r23.u64;
	// lwz r26,-252(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// xor r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// stw r30,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r30.u32);
	// xor r20,r20,r27
	ctx.r20.u64 = ctx.r20.u64 ^ ctx.r27.u64;
	// stw r3,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// subf r3,r18,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r18.u64;
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r27,r27,r20
	ctx.r27.u64 = ctx.r20.u64 - ctx.r27.u64;
	// stw r10,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// lwz r8,-352(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// lwz r11,-348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stw r27,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r27.u32);
	// stw r10,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r10.u32);
	// xor r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// stw r4,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,-352(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r11,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	// lwz r8,-340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// lwz r20,-260(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// stw r3,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// xor r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// stw r10,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r10.u32);
	// subf r4,r5,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r5.u64;
	// lwz r10,-352(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r27,r27,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r8,-324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r31,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 31;
	// stw r9,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r9.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r29,-172(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// subf r9,r28,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r28.u64;
	// add r10,r6,r27
	ctx.r10.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lwz r3,-340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r31.u64;
	// stw r5,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// add r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,-268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r7,r24,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lwz r10,44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,-212(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r31,-348(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r19,-244(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// lwz r7,-344(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r10,-264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r8,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// subf r8,r21,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r21.u64;
	// stw r6,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r6.u32);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r10,r31,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r31.u64;
	// stw r5,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r5.u32);
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// stw r6,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r6.u32);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lwz r4,-232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// lbz r27,3(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r4,r14,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r14.u64;
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// lwz r30,-276(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r29,-248(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// subf r5,r5,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r5.u64;
	// lwz r22,-296(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r10,r19,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r19.u64;
	// lbz r26,4(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stw r5,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r5.u32);
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r15.u64;
	// lwz r5,-332(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r29,r22,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r22.u64;
	// lbz r19,2(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stw r18,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r18.u32);
	// subf r30,r5,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r5.u64;
	// stw r24,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r24.u32);
	// lbz r28,6(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r25,5(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r24,7(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r23,0(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r20,1(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r18,-280(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// stw r4,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r4.u32);
	// srawi r4,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 31;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// stw r27,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r27.u32);
	// subf r18,r18,r26
	ctx.r18.u64 = ctx.r26.u64 - ctx.r18.u64;
	// stw r21,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r21.u32);
	// srawi r16,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r30.s32 >> 31;
	// stw r26,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r26.u32);
	// srawi r27,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 31;
	// stw r7,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// srawi r21,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r10.s32 >> 31;
	// stw r31,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r31.u32);
	// stw r19,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r19.u32);
	// srawi r7,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 31;
	// lwz r3,-312(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r17,-300(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r26,-292(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r31,-352(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r19,-256(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// xor r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r21.u64;
	// stw r14,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r14.u32);
	// lwz r14,-340(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r10,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// xor r18,r18,r7
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r7.u64;
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r28,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r28.u32);
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stw r5,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r5.u32);
	// subf r6,r3,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r3.u64;
	// lwz r5,-348(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r19,r19,r25
	ctx.r19.u64 = ctx.r25.u64 - ctx.r19.u64;
	// stw r22,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// stw r3,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r3.u32);
	// subf r7,r7,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r7.u64;
	// lwz r28,-340(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// srawi r11,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 31;
	// stw r7,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r7.u32);
	// xor r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r3,-352(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// xor r5,r19,r11
	ctx.r5.u64 = ctx.r19.u64 ^ ctx.r11.u64;
	// subf r3,r21,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r21.u64;
	// lwz r21,-344(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r3,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r11,-340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// stw r10,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r10,-352(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r5.u32);
	// xor r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r22,-352(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// srawi r3,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// subf r31,r17,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r17.u64;
	// stw r4,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// xor r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// lwz r6,-352(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r10,-348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// srawi r28,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r3,-316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r7,r30,r16
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r16.u64;
	// lwz r30,-252(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// lwz r22,-260(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// xor r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r28.u64;
	// lwz r19,-332(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r26,r26,r23
	ctx.r26.u64 = ctx.r23.u64 - ctx.r26.u64;
	// stw r15,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r15.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r11,r16,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r16.u64;
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r4,-192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// srawi r31,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r26.s32 >> 31;
	// xor r7,r29,r27
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// lwz r29,-296(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r27,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r27.u64;
	// xor r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// xor r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r31.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r31,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r31.u64;
	// subf r10,r28,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r28.u64;
	// lwz r5,-268(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r30,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r8,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r8.u32);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// stw r4,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// lwz r4,-272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lbz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r31,15(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r3,14(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r7,r21,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r21.u64;
	// lbz r14,11(r11)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// subf r21,r19,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r19.u64;
	// lbz r28,9(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stw r30,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r30.u32);
	// subf r8,r22,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r22.u64;
	// lbz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r29,r29,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r29.u64;
	// lbz r15,10(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// srawi r18,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r7.s32 >> 31;
	// lbz r27,3(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r16,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r21.s32 >> 31;
	// lbz r22,4(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// xor r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r18.u64;
	// lbz r19,5(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// xor r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r26.u64;
	// lbz r17,6(r10)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// stw r11,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r18,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r18.u64;
	// stw r27,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r27.u32);
	// subf r7,r4,r15
	ctx.r7.u64 = ctx.r15.u64 - ctx.r4.u64;
	// stw r22,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r22.u32);
	// subf r8,r26,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r26.u64;
	// lwz r27,-264(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// stw r19,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r19.u32);
	// subf r4,r27,r14
	ctx.r4.u64 = ctx.r14.u64 - ctx.r27.u64;
	// stw r17,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// stw r31,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r31.u32);
	// srawi r31,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 31;
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// stw r8,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// srawi r22,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r4.s32 >> 31;
	// lbz r8,7(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r26,2(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// xor r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r22.u64;
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// lwz r19,-236(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r18,-232(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// subf r4,r22,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r22.u64;
	// stw r7,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r7.u32);
	// xor r7,r21,r16
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r16.u64;
	// stw r30,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r30.u32);
	// stw r4,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// subf r21,r19,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r19.u64;
	// xor r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// lwz r30,-248(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lbz r29,1(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r10,r16,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r16.u64;
	// srawi r16,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r21.s32 >> 31;
	// stw r3,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r3.u32);
	// lwz r17,-352(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r27,-240(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// subf r7,r18,r17
	ctx.r7.u64 = ctx.r17.u64 - ctx.r18.u64;
	// lwz r22,-256(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// stw r14,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r14.u32);
	// subf r30,r22,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r22.u64;
	// lwz r18,-292(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// stw r17,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r17.u32);
	// srawi r14,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r7.s32 >> 31;
	// lwz r17,-276(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r3,-200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r27,r27,r17
	ctx.r27.u64 = ctx.r17.u64 - ctx.r27.u64;
	// lwz r17,-300(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r22,-340(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// stw r28,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r28.u32);
	// srawi r28,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 31;
	// stw r8,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r8.u32);
	// srawi r8,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// stw r26,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// xor r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 ^ ctx.r16.u64;
	// lwz r26,-348(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// stw r5,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r5.u32);
	// subf r25,r18,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r18.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r29,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r29.u32);
	// lwz r29,-344(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r15,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r15.u32);
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// lwz r31,-324(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r28.u64;
	// lwz r15,-228(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// subf r10,r16,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r16.u64;
	// stw r19,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r19.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r14.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r28,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r28.u64;
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// subf r3,r17,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r17.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// lwz r6,-352(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 + ctx.r8.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// subf r10,r6,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r6.u64;
	// lwz r27,-340(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r6,r25,r4
	ctx.r6.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lwz r25,-296(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r6,r8,r15
	ctx.r6.u64 = ctx.r8.u64 + ctx.r15.u64;
	// lwz r8,-312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// stw r6,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r6.u32);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,-304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r6,-288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r7,r19,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r11,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// subf r31,r8,r20
	ctx.r31.u64 = ctx.r20.u64 - ctx.r8.u64;
	// lbz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// subf r27,r6,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r6.u64;
	// stw r5,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// subf r5,r9,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r9.u64;
	// lbz r30,9(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// subf r3,r7,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r7.u64;
	// lwz r6,-332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// lbz r28,10(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// stw r4,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// stw r11,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// srawi r29,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 31;
	// lbz r30,11(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// subf r11,r28,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r28.u64;
	// lbz r28,12(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r26,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r31.s32 >> 31;
	// lbz r24,13(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r25,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 31;
	// lbz r22,14(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// srawi r23,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r6.s32 >> 31;
	// lwz r20,-352(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r19,-284(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// srawi r21,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 31;
	// xor r18,r6,r23
	ctx.r18.u64 = ctx.r6.u64 ^ ctx.r23.u64;
	// lwz r15,-252(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// subf r30,r30,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r30.u64;
	// lbz r19,15(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// xor r6,r11,r21
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r21.u64;
	// lwz r17,-164(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// srawi r16,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r30.s32 >> 31;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// lwz r18,-260(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r28,r28,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r28.u64;
	// subf r6,r21,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r21.u64;
	// lwz r21,-348(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r30,r30,r16
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r16.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// subf r24,r24,r18
	ctx.r24.u64 = ctx.r18.u64 - ctx.r24.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// xor r18,r5,r4
	ctx.r18.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r5,-268(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r6,r16,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r16.u64;
	// lwz r16,-304(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r30,r28,r23
	ctx.r30.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r22,r22,r5
	ctx.r22.u64 = ctx.r5.u64 - ctx.r22.u64;
	// srawi r28,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r24.s32 >> 31;
	// subf r5,r23,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r23.u64;
	// lwz r23,-244(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// subf r4,r4,r18
	ctx.r4.u64 = ctx.r18.u64 - ctx.r4.u64;
	// add r6,r20,r21
	ctx.r6.u64 = ctx.r20.u64 + ctx.r21.u64;
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// xor r30,r24,r28
	ctx.r30.u64 = ctx.r24.u64 ^ ctx.r28.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r24,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 31;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r4,r29,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// subf r5,r28,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r28.u64;
	// xor r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r26.u64;
	// xor r3,r22,r24
	ctx.r3.u64 = ctx.r22.u64 ^ ctx.r24.u64;
	// srawi r30,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r23.s32 >> 31;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r29,r16,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r16.u64;
	// subf r5,r24,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r24.u64;
	// subf r4,r26,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r26.u64;
	// xor r3,r23,r30
	ctx.r3.u64 = ctx.r23.u64 ^ ctx.r30.u64;
	// xor r28,r27,r25
	ctx.r28.u64 = ctx.r27.u64 ^ ctx.r25.u64;
	// srawi r31,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 31;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r5,r30,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r30.u64;
	// subf r4,r25,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r25.u64;
	// xor r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r5,r31,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lwz r31,44(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r4,r6,r17
	ctx.r4.u64 = ctx.r6.u64 + ctx.r17.u64;
	// lwz r6,-168(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r5,-320(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r4,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x880e0484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E0484;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e2144
	if (!ctx.cr6.eq) goto loc_880E2144;
	// lwz r11,-328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,-336(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r7,68(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r6,36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r5,76(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// stw r6,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r6.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r11,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// stw r4,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r4.u32);
	// lbz r6,3(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
loc_880E0ED4:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,5(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,4(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// stw r29,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-344(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-348(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-324(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-332(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-316(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r5.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-352(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r16,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r16.u64;
	// lbz r21,1(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r18,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lbz r19,3(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r29,7(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r23,r14,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r14.u64;
	// lbz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r31,r26,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lwz r3,-180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// stw r11,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-204(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r23,-328(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r16,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r16.u64;
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r21,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// lwz r10,-316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// stw r9,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-316(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r4,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// stw r27,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r9,r18,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r18.u64;
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r3,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// lbz r6,3(r15)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// srawi r18,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 31;
	// lwz r27,-196(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r24,-224(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// xor r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r21.u64;
	// lwz r31,-308(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r3,-324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// stw r8,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r18
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r18.u64;
	// subf r17,r14,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r22,-188(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// subf r6,r18,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lwz r8,-312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r4,-336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r25,-348(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r4,-352(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r30,-340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r5,r21,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-332(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r7,-280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r21,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r17.s32 >> 31;
	// xor r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r6,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// xor r18,r17,r21
	ctx.r18.u64 = ctx.r17.u64 ^ ctx.r21.u64;
	// lwz r5,-300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r31,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 31;
	// subf r3,r7,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r21,6(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r6,-292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// stw r4,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r25,-176(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// subf r31,r30,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r30.u64;
	// stw r11,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r30,r6,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-288(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r3,r27,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r11,r21,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lwz r21,-208(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// srawi r27,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 31;
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// srawi r23,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// xor r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// srawi r17,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r29.s32 >> 31;
	// subf r28,r9,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r9.u64;
	// subf r3,r20,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r20.u64;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// xor r29,r29,r17
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r17.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// xor r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r17,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r17.u64;
	// subf r31,r27,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r27.u64;
	// xor r29,r28,r23
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// xor r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r23,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r31,r26,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r3,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// stw r4,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r11,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// bdnz 0x880e0ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E0ED4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_880E1368:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,5(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,4(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// stw r29,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-344(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-348(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-324(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-332(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-316(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-352(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r16,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r16.u64;
	// lbz r21,1(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r18,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lbz r19,3(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r29,7(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r23,r14,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r14.u64;
	// lbz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r31,r26,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lwz r3,-220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// stw r11,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-212(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r23,-328(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r16,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r16.u64;
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r21,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// lwz r10,-316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// stw r9,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-316(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r4,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// stw r27,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r9,r18,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r18.u64;
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r3,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r3.u32);
	// lbz r6,3(r15)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// srawi r18,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 31;
	// lwz r27,-228(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r24,-192(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// xor r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r21.u64;
	// lwz r31,-308(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r3,-324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// stw r8,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r18
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r18.u64;
	// subf r17,r14,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r22,-216(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// subf r6,r18,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lwz r8,-312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r4,-336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r25,-348(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r4,-352(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r30,-340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r5,r21,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-332(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r7,-280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r21,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r17.s32 >> 31;
	// xor r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r6,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r6.u32);
	// xor r18,r17,r21
	ctx.r18.u64 = ctx.r17.u64 ^ ctx.r21.u64;
	// lwz r5,-300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r31,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 31;
	// subf r3,r7,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r21,6(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r6,-292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// stw r4,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r25,-168(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r31,r30,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r30.u64;
	// stw r11,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r30,r6,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-288(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r3,r27,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r11,r21,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lwz r21,-164(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// srawi r27,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 31;
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// srawi r23,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// xor r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// srawi r17,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r29.s32 >> 31;
	// subf r28,r9,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r9.u64;
	// subf r3,r20,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r20.u64;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// xor r29,r29,r17
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r17.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// xor r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r17,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r17.u64;
	// subf r31,r27,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r27.u64;
	// xor r29,r28,r23
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// xor r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r23,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r31,r26,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r4,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// stw r11,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// bdnz 0x880e1368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1368;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,-320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r6,3(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r11,-304(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
loc_880E1818:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,4(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,5(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// stw r29,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-324(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-352(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-344(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-320(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r5.u32);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-332(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r14,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r14.u64;
	// lbz r21,1(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r16,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r16.u64;
	// lbz r19,3(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r29,6(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r23,r18,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r18.u64;
	// lbz r28,7(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r31,r26,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lwz r3,-180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-204(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r23,-328(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r14,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r14.u64;
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r21,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// lwz r10,-320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// stw r3,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-320(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r4,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// stw r27,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r9,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// lbz r6,3(r15)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r17,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 31;
	// subf r9,r16,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r16.u64;
	// lwz r27,-196(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r24,-224(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// xor r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r21.u64;
	// lwz r31,-308(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r3,-324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// stw r8,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r17
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r17.u64;
	// subf r18,r18,r28
	ctx.r18.u64 = ctx.r28.u64 - ctx.r18.u64;
	// lwz r22,-188(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// subf r6,r17,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r17.u64;
	// lwz r8,-312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r4,-336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r25,-348(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r4,-352(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r30,-340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r5,r21,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-332(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r7,-280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r21,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r18.s32 >> 31;
	// xor r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r6,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// xor r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r21.u64;
	// lwz r5,-300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r31,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 31;
	// subf r3,r7,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r21,6(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r6,-292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// stw r4,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r25,-176(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// subf r31,r30,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r30.u64;
	// stw r11,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r30,r6,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-304(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r3,r27,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subf r11,r21,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r21.u64;
	// lwz r21,-208(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// srawi r27,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 31;
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// srawi r23,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// subf r28,r24,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// xor r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// srawi r17,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r28.s32 >> 31;
	// subf r26,r9,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r9.u64;
	// subf r3,r20,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r20.u64;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// xor r28,r28,r17
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r17.u64;
	// srawi r23,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r26.s32 >> 31;
	// xor r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r17,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r31,r27,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r27.u64;
	// xor r28,r26,r23
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r23.u64;
	// xor r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r23,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r23.u64;
	// subf r31,r29,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r3,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// stw r4,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r11,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// bdnz 0x880e1818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1818;
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_880E1CAC:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,4(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,5(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// stw r29,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-324(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-352(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-344(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-320(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-332(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r14,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r14.u64;
	// lbz r21,1(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r16,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r16.u64;
	// lbz r19,3(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r29,r26,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lbz r28,7(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r23,r18,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r18.u64;
	// lwz r31,-220(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r3,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r25.s32 >> 31;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-212(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r23,-328(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r14,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r14.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r31,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r3.u64;
	// stw r10,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// lwz r10,-320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-320(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// xor r3,r24,r6
	ctx.r3.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// stw r27,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// stw r9,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// srawi r21,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 31;
	// lbz r6,3(r15)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r17,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 31;
	// subf r9,r16,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r16.u64;
	// lwz r27,-228(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// xor r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// lwz r24,-192(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// xor r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r21.u64;
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r29,-308(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r6,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r21.u64;
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// subf r18,r18,r28
	ctx.r18.u64 = ctx.r28.u64 - ctx.r18.u64;
	// stw r8,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r17
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r17.u64;
	// srawi r21,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r18.s32 >> 31;
	// lwz r22,-216(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r3,-336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r6,r17,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r17.u64;
	// stw r4,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// lwz r25,-348(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,-312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// subf r5,r30,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r3,-352(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r30,-340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r31,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-324(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r29,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r3,-344(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r29,-332(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// xor r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r21.u64;
	// add r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwz r7,-280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// xor r17,r30,r29
	ctx.r17.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subf r4,r29,r17
	ctx.r4.u64 = ctx.r17.u64 - ctx.r29.u64;
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// stw r30,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r30.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r5,-300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r31,r7,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r7.u64;
	// lbz r21,5(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r27,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r3.s32 >> 31;
	// lbz r18,6(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,-292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lbz r24,7(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r25,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r31.s32 >> 31;
	// xor r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r27.u64;
	// stw r4,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r27,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lwz r3,-336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r25.u64;
	// lwz r17,-304(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r29,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// subf r27,r6,r19
	ctx.r27.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-164(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// subf r31,r25,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r25.u64;
	// subf r11,r21,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lwz r21,-168(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r3,r18,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r18.u64;
	// srawi r25,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r22.s32 >> 31;
	// srawi r23,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r27.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// srawi r18,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r3.s32 >> 31;
	// subf r28,r24,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// xor r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r18.u64;
	// srawi r16,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r28.s32 >> 31;
	// subf r26,r9,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r9.u64;
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r20.u64;
	// subf r3,r18,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r18.u64;
	// xor r28,r28,r16
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r16.u64;
	// srawi r20,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r26.s32 >> 31;
	// xor r22,r22,r25
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r25.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r16,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r16.u64;
	// subf r31,r25,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r25.u64;
	// xor r28,r26,r20
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r20.u64;
	// xor r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r23.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r20,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r20.u64;
	// subf r31,r23,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r23.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + ctx.r19.u64;
	// add r11,r17,r24
	ctx.r11.u64 = ctx.r17.u64 + ctx.r24.u64;
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r4,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// stw r11,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// bdnz 0x880e1cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1CAC;
	// b 0x880e214c
	goto loc_880E214C;
loc_880E2144:
	// lwz r29,-216(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r30,-228(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
loc_880E214C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,-220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r6,-212(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lwz r31,-196(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// add r9,r29,r6
	ctx.r9.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lwz r5,-204(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r27,-188(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r9,-180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add r8,r27,r5
	ctx.r8.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// add r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r26,-172(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r25,-184(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// add r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r24,-224(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r5,r29,r27
	ctx.r5.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwz r23,-192(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r22,-208(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r29,-176(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r31,r26,r25
	ctx.r31.u64 = ctx.r26.u64 + ctx.r25.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// add r30,r23,r24
	ctx.r30.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r31,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r4,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r7,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r6,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// stw r5,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FE30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8813FE38;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4240
	ctx.r5.s64 = 4240;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8813FE74;
	sub_880CB2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88140174
	if (ctx.cr6.lt) goto loc_88140174;
	// li r5,4240
	ctx.r5.s64 = 4240;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8813FE8C;
	sub_88052D90(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r30.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r30.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r30.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r30.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,4224(r3)
	REX_STORE_U32(ctx.r3.u32 + 4224, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r7,40(r6)
	REX_STORE_U16(ctx.r6.u32 + 40, ctx.r7.u16);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r4,18(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r4,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, ctx.r4.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,60(r6)
	REX_STORE_U32(ctx.r6.u32 + 60, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,92(r9)
	REX_STORE_U32(ctx.r9.u32 + 92, ctx.r10.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r29.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, ctx.r30.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r5,48(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88140010
	if (ctx.cr6.eq) goto loc_88140010;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r6,r10,84
	ctx.r6.s64 = ctx.r10.s64 + 84;
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x880cb2c0
	ctx.lr = 0x8813FFE0;
	sub_880CB2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88140174
	if (ctx.cr6.lt) goto loc_88140174;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// lwz r3,84(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x880547a0
	ctx.lr = 0x88140000;
	sub_880547A0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r7,48(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 48);
	// sth r7,88(r8)
	REX_STORE_U16(ctx.r8.u32 + 88, ctx.r7.u16);
loc_88140010:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,22358
	ctx.r10.s64 = 1465253888;
	// ori r9,r10,17201
	ctx.r9.u64 = ctx.r10.u64 | 17201;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22081
	ctx.r8.u64 = ctx.r9.u64 | 22081;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22067
	ctx.r8.u64 = ctx.r9.u64 | 22067;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22066
	ctx.r8.u64 = ctx.r9.u64 | 22066;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,22358
	ctx.r9.s64 = 1465253888;
	// ori r8,r9,20530
	ctx.r8.u64 = ctx.r9.u64 | 20530;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22096
	ctx.r8.u64 = ctx.r9.u64 | 22096;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22098
	ctx.r8.u64 = ctx.r9.u64 | 22098;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88140098
	if (ctx.cr6.eq) goto loc_88140098;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13395
	ctx.r8.u64 = ctx.r9.u64 | 13395;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881400a4
	if (!ctx.cr6.eq) goto loc_881400A4;
loc_88140098:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_881400A4:
	// stw r11,32(r26)
	REX_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r26,36
	ctx.r4.s64 = ctx.r26.s64 + 36;
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,6732(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6732);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,84(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lhz r7,48(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x88151a70
	ctx.lr = 0x881400FC;
	sub_88151A70(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8813f6e8
	ctx.lr = 0x88140104;
	sub_8813F6E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88140174
	if (ctx.cr6.lt) goto loc_88140174;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8814012c
	if (ctx.cr6.eq) goto loc_8814012C;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x88151db0
	ctx.lr = 0x88140124;
	sub_88151DB0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8814012C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// bl 0x8813f6e8
	ctx.lr = 0x88140138;
	sub_8813F6E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88140174
	if (ctx.cr6.lt) goto loc_88140174;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r10,-544
	ctx.r4.s64 = ctx.r10.s64 + -544;
	// stw r25,4228(r11)
	REX_STORE_U32(ctx.r11.u32 + 4228, ctx.r25.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r5,4232
	ctx.r6.s64 = ctx.r5.s64 + 4232;
	// bl 0x880cae18
	ctx.lr = 0x88140160;
	sub_880CAE18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88140174
	if (ctx.cr6.lt) goto loc_88140174;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,4232(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4232);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_88140174:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88145D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88145D40;
	__savegprlr_23(ctx, base);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r7,r10,7696
	ctx.r7.s64 = ctx.r10.s64 + 7696;
	// addi r4,r8,7680
	ctx.r4.s64 = ctx.r8.s64 + 7680;
	// addi r28,r3,34
	ctx.r28.s64 = ctx.r3.s64 + 34;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x88146030
	if (ctx.cr6.eq) goto loc_88146030;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x88145e60
	if (ctx.cr6.eq) goto loc_88145E60;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8814620c
	if (!ctx.cr6.gt) goto loc_8814620C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,6728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6732(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
loc_88145D9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88145e44
	if (!ctx.cr6.gt) goto loc_88145E44;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
loc_88145DB8:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r8,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x88145e04
	if (!ctx.cr6.lt) goto loc_88145E04;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88145e28
	if (!ctx.cr6.lt) goto loc_88145E28;
	// b 0x88145e24
	goto loc_88145E24;
loc_88145E04:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88145e28
	if (!ctx.cr6.gt) goto loc_88145E28;
loc_88145E24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88145E28:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// sthu r11,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r7.u32 = ea;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88145db8
	if (ctx.cr6.lt) goto loc_88145DB8;
loc_88145E44:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88145d9c
	if (ctx.cr6.lt) goto loc_88145D9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88145E60:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// ble cr6,0x88145f50
	if (!ctx.cr6.gt) goto loc_88145F50;
	// addi r30,r3,320
	ctx.r30.s64 = ctx.r3.s64 + 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_88145E8C:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// lwz r8,1836(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 1836);
	// addi r23,r1,-96
	ctx.r23.s64 = ctx.r1.s64 + -96;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r26,r1,-112
	ctx.r26.s64 = ctx.r1.s64 + -112;
	// addi r24,r1,-112
	ctx.r24.s64 = ctx.r1.s64 + -112;
	// lfsx f0,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f13,r27,r10
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,-92(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f7,-84(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v60,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f12,r5,r8
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lfsx f11,r27,r8
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// stfs f12,-108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lvx128 v61,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v58,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v59,v63,v60
	simde_mm_store_ps(ctx.v59.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v56,v62,v58
	simde_mm_store_ps(ctx.v56.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vminfp128 v57,v62,v59
	simde_mm_store_ps(ctx.v57.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vcfpsxws128 v61,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v60,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v61,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v55,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// stvx128 v60,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v55,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x88145e8c
	if (ctx.cr6.lt) goto loc_88145E8C;
loc_88145F50:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8814620c
	if (!ctx.cr6.lt) goto loc_8814620C;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,6728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6732(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
loc_88145F80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88146014
	if (!ctx.cr6.gt) goto loc_88146014;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88145F90:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x88145fdc
	if (!ctx.cr6.lt) goto loc_88145FDC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88145ff8
	if (!ctx.cr6.lt) goto loc_88145FF8;
	// b 0x88145ff4
	goto loc_88145FF4;
loc_88145FDC:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88145ff8
	if (!ctx.cr6.gt) goto loc_88145FF8;
loc_88145FF4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88145FF8:
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88145f90
	if (ctx.cr6.lt) goto loc_88145F90;
loc_88146014:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88145f80
	if (ctx.cr6.lt) goto loc_88145F80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88146030:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r11,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// ble cr6,0x88146138
	if (!ctx.cr6.gt) goto loc_88146138;
	// addi r6,r3,320
	ctx.r6.s64 = ctx.r3.s64 + 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8814605C:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 6;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 5;
	// addi r29,r11,7
	ctx.r29.s64 = ctx.r11.s64 + 7;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,-112
	ctx.r26.s64 = ctx.r1.s64 + -112;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r27,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r31,r10
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r29,r10
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r1,-112
	ctx.r27.s64 = ctx.r1.s64 + -112;
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// lvx128 v52,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f10,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lfsx f8,r30,r10
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r31,r10
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// stfs f9,-92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f8,-88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f7,-84(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v54,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v53,v63,v54
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmaxfp128 v50,v63,v52
	simde_mm_store_ps(ctx.v50.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vminfp128 v51,v62,v53
	simde_mm_store_ps(ctx.v51.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vminfp128 v49,v62,v50
	simde_mm_store_ps(ctx.v49.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vcfpsxws128 v61,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v60,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// stvx128 v61,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v48,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// stvx128 v60,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v48,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x8814605c
	if (ctx.cr6.lt) goto loc_8814605C;
loc_88146138:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8814620c
	if (!ctx.cr6.lt) goto loc_8814620C;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,6728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6732(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
loc_88146168:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881461f8
	if (!ctx.cr6.gt) goto loc_881461F8;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88146178:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x881461c4
	if (!ctx.cr6.lt) goto loc_881461C4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881461e0
	if (!ctx.cr6.lt) goto loc_881461E0;
	// b 0x881461dc
	goto loc_881461DC;
loc_881461C4:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881461e0
	if (!ctx.cr6.gt) goto loc_881461E0;
loc_881461DC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881461E0:
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88146178
	if (ctx.cr6.lt) goto loc_88146178;
loc_881461F8:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88146168
	if (ctx.cr6.lt) goto loc_88146168;
loc_8814620C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814C968) {
	REX_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x8814aee0
	sub_8814AEE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814C9D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814C9D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8814baf8
	ctx.lr = 0x8814CA00;
	sub_8814BAF8(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814c150
	ctx.lr = 0x8814CA1C;
	sub_8814C150(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CA90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814CA98;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8814b8f8
	ctx.lr = 0x8814CAC0;
	sub_8814B8F8(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814c338
	ctx.lr = 0x8814CADC;
	sub_8814C338(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CB98) {
	REX_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x8814b6a8
	sub_8814B6A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CC58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814CC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8814bf48
	ctx.lr = 0x8814CC88;
	sub_8814BF48(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814c750
	ctx.lr = 0x8814CCA4;
	sub_8814C750(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CE48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8814cee8
	if (ctx.cr6.eq) goto loc_8814CEE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ce84
	if (ctx.cr6.eq) goto loc_8814CE84;
	// bl 0x8815d0c0
	ctx.lr = 0x8814CE80;
	sub_8815D0C0(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8814CE84:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ce98
	if (ctx.cr6.eq) goto loc_8814CE98;
	// bl 0x8815d398
	ctx.lr = 0x8814CE94;
	sub_8815D398(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8814CE98:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ceac
	if (ctx.cr6.eq) goto loc_8814CEAC;
	// bl 0x8815d268
	ctx.lr = 0x8814CEA8;
	sub_8815D268(ctx, base);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_8814CEAC:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cec0
	if (ctx.cr6.eq) goto loc_8814CEC0;
	// bl 0x8815d398
	ctx.lr = 0x8814CEBC;
	sub_8815D398(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8814CEC0:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ced4
	if (ctx.cr6.eq) goto loc_8814CED4;
	// bl 0x8815d398
	ctx.lr = 0x8814CED0;
	sub_8815D398(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8814CED4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cee8
	if (ctx.cr6.eq) goto loc_8814CEE8;
	// bl 0x8815d268
	ctx.lr = 0x8814CEE4;
	sub_8815D268(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8814CEE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8814FB28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8814FB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8814fb48
	if (!ctx.cr6.eq) goto loc_8814FB48;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8814FB48:
	// lwz r31,736(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8814fb64
	if (ctx.cr6.eq) goto loc_8814FB64;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8814FB64:
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3724(r31)
	REX_STORE_U32(ctx.r31.u32 + 3724, ctx.r11.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// sth r11,3740(r31)
	REX_STORE_U16(ctx.r31.u32 + 3740, ctx.r11.u16);
	// stw r11,15616(r31)
	REX_STORE_U32(ctx.r31.u32 + 15616, ctx.r11.u32);
	// bne cr6,0x8814fc50
	if (!ctx.cr6.eq) goto loc_8814FC50;
	// lwz r10,15364(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15364);
	// li r9,-3
	ctx.r9.s64 = -3;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,3632(r31)
	REX_STORE_U64(ctx.r31.u32 + 3632, ctx.r11.u64);
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,3412(r31)
	REX_STORE_U32(ctx.r31.u32 + 3412, ctx.r9.u32);
	// stw r11,3416(r31)
	REX_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// stw r11,3432(r31)
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// stw r8,14852(r31)
	REX_STORE_U32(ctx.r31.u32 + 14852, ctx.r8.u32);
	// stw r11,3420(r31)
	REX_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// stw r11,3436(r31)
	REX_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// stw r11,3492(r31)
	REX_STORE_U32(ctx.r31.u32 + 3492, ctx.r11.u32);
	// beq cr6,0x8814fc50
	if (ctx.cr6.eq) goto loc_8814FC50;
	// lwz r11,20400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r8,180(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,20404(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,3776(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// mullw r30,r6,r5
	ctx.r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r29,r9,r8
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// bl 0x88052d90
	ctx.lr = 0x8814FC00;
	sub_88052D90(ctx, base);
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x88052d90
	ctx.lr = 0x8814FC10;
	sub_88052D90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,3784(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// bl 0x88052d90
	ctx.lr = 0x8814FC20;
	sub_88052D90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3788(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// bl 0x88052d90
	ctx.lr = 0x8814FC30;
	sub_88052D90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,3792(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// bl 0x88052d90
	ctx.lr = 0x8814FC40;
	sub_88052D90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,3796(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// bl 0x88052d90
	ctx.lr = 0x8814FC50;
	sub_88052D90(ctx, base);
loc_8814FC50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88151250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// bl 0x88150f30
	ctx.lr = 0x8815126C;
	sub_88150F30(ctx, base);
	// lbz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 640);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stb r10,640(r31)
	REX_STORE_U8(ctx.r31.u32 + 640, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88151480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88151488;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881514a4
	if (!ctx.cr6.eq) goto loc_881514A4;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881514A4:
	// lwz r10,24688(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r9,712(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881514c0
	if (ctx.cr6.eq) goto loc_881514C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881514C0:
	// lwz r9,22036(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881514ec
	if (!ctx.cr6.eq) goto loc_881514EC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,-7
	ctx.r10.s64 = -7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881514EC:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,21888(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// lwz r8,14836(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r9,45384
	ctx.r5.u64 = ctx.r9.u64 | 45384;
	// lwz r9,22032(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// addic r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r29.s64 = ctx.r7.s64 + -1;
	// lwz r31,21912(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21912);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lwz r30,156(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// subfe r7,r29,r7
	temp.u8 = (~ctx.r29.u32 + ctx.r7.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r29.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r28,160(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r27,22068(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 22068);
	// andc r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,22072(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 22072);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// lwz r26,22076(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 22076);
	// lwz r25,22080(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 22080);
	// lwz r24,21916(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 21916);
	// lwz r23,21924(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 21924);
	// lwz r22,21920(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 21920);
	// lwz r21,21928(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 21928);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// lwz r7,192(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x881515A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88156440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881564a0
	if (ctx.cr6.gt) goto loc_881564A0;
loc_8815645C:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// subfic r6,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r6.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8815645c
	if (!ctx.cr6.gt) goto loc_8815645C;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x881564ec
	if (!ctx.cr6.lt) goto loc_881564EC;
loc_881564A0:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881564c4
	if (!ctx.cr6.eq) goto loc_881564C4;
	// bl 0x88156188
	ctx.lr = 0x881564B0;
	sub_88156188(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_881564C4:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bge cr6,0x881564ec
	if (!ctx.cr6.lt) goto loc_881564EC;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881564e4
	if (!ctx.cr6.eq) goto loc_881564E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_881564E4:
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_881564EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88159E48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88159E50;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3376);
	// addi r4,r3,1992
	ctx.r4.s64 = ctx.r3.s64 + 1992;
	// addi r6,r11,-22512
	ctx.r6.s64 = ctx.r11.s64 + -22512;
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159E70;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-26920
	ctx.r6.s64 = ctx.r11.s64 + -26920;
	// addi r4,r31,2004
	ctx.r4.s64 = ctx.r31.s64 + 2004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159E94;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-16024
	ctx.r6.s64 = ctx.r11.s64 + -16024;
	// addi r4,r31,2120
	ctx.r4.s64 = ctx.r31.s64 + 2120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159EB8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-16544
	ctx.r6.s64 = ctx.r11.s64 + -16544;
	// addi r4,r31,2132
	ctx.r4.s64 = ctx.r31.s64 + 2132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159EDC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-18104
	ctx.r6.s64 = ctx.r11.s64 + -18104;
	// addi r4,r31,2148
	ctx.r4.s64 = ctx.r31.s64 + 2148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F00;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-17584
	ctx.r6.s64 = ctx.r11.s64 + -17584;
	// addi r4,r31,2160
	ctx.r4.s64 = ctx.r31.s64 + 2160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F24;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-17064
	ctx.r6.s64 = ctx.r11.s64 + -17064;
	// addi r4,r31,2172
	ctx.r4.s64 = ctx.r31.s64 + 2172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F48;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,2284
	ctx.r30.s64 = ctx.r31.s64 + 2284;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13808
	ctx.r6.s64 = ctx.r11.s64 + -13808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F70;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,2296
	ctx.r27.s64 = ctx.r31.s64 + 2296;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13544
	ctx.r6.s64 = ctx.r11.s64 + -13544;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F98;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,2308
	ctx.r28.s64 = ctx.r31.s64 + 2308;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13280
	ctx.r6.s64 = ctx.r11.s64 + -13280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159FC0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,2320
	ctx.r29.s64 = ctx.r31.s64 + 2320;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13016
	ctx.r6.s64 = ctx.r11.s64 + -13016;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159FE8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,2384(r31)
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r27.u32);
	// addi r30,r31,2332
	ctx.r30.s64 = ctx.r31.s64 + 2332;
	// stw r28,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r28.u32);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r29,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r29.u32);
	// addi r6,r11,-12752
	ctx.r6.s64 = ctx.r11.s64 + -12752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A020;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,2344
	ctx.r27.s64 = ctx.r31.s64 + 2344;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12456
	ctx.r6.s64 = ctx.r11.s64 + -12456;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A048;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,2356
	ctx.r28.s64 = ctx.r31.s64 + 2356;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12160
	ctx.r6.s64 = ctx.r11.s64 + -12160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A070;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,2368
	ctx.r29.s64 = ctx.r31.s64 + 2368;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-11864
	ctx.r6.s64 = ctx.r11.s64 + -11864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A098;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// stw r30,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r27.u32);
	// stw r28,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r28.u32);
	// stw r29,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r29.u32);
	// beq cr6,0x8815a16c
	if (ctx.cr6.eq) goto loc_8815A16C;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,22360
	ctx.r27.s64 = ctx.r31.s64 + 22360;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-11568
	ctx.r6.s64 = ctx.r11.s64 + -11568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A0DC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,22372
	ctx.r28.s64 = ctx.r31.s64 + 22372;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-11264
	ctx.r6.s64 = ctx.r11.s64 + -11264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A104;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,22384
	ctx.r29.s64 = ctx.r31.s64 + 22384;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10960
	ctx.r6.s64 = ctx.r11.s64 + -10960;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A12C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,22396
	ctx.r30.s64 = ctx.r31.s64 + 22396;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10656
	ctx.r6.s64 = ctx.r11.s64 + -10656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A154;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r27,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r27.u32);
	// stw r28,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r28.u32);
	// stw r29,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r29.u32);
	// stw r30,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r30.u32);
loc_8815A16C:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10352
	ctx.r6.s64 = ctx.r11.s64 + -10352;
	// addi r4,r31,22348
	ctx.r4.s64 = ctx.r31.s64 + 22348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A188;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10160
	ctx.r6.s64 = ctx.r11.s64 + -10160;
	// addi r4,r31,2444
	ctx.r4.s64 = ctx.r31.s64 + 2444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A1AC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10224
	ctx.r6.s64 = ctx.r11.s64 + -10224;
	// addi r4,r31,2456
	ctx.r4.s64 = ctx.r31.s64 + 2456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A1D0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10288
	ctx.r6.s64 = ctx.r11.s64 + -10288;
	// addi r4,r31,2468
	ctx.r4.s64 = ctx.r31.s64 + 2468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A1F4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-10096
	ctx.r6.s64 = ctx.r11.s64 + -10096;
	// addi r4,r31,2484
	ctx.r4.s64 = ctx.r31.s64 + 2484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A218;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-10024
	ctx.r6.s64 = ctx.r11.s64 + -10024;
	// addi r4,r31,2496
	ctx.r4.s64 = ctx.r31.s64 + 2496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A23C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-9952
	ctx.r6.s64 = ctx.r11.s64 + -9952;
	// addi r4,r31,2508
	ctx.r4.s64 = ctx.r31.s64 + 2508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A260;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9884
	ctx.r6.s64 = ctx.r11.s64 + -9884;
	// addi r4,r31,2524
	ctx.r4.s64 = ctx.r31.s64 + 2524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A284;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9848
	ctx.r6.s64 = ctx.r11.s64 + -9848;
	// addi r4,r31,2536
	ctx.r4.s64 = ctx.r31.s64 + 2536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A2A8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9812
	ctx.r6.s64 = ctx.r11.s64 + -9812;
	// addi r4,r31,2548
	ctx.r4.s64 = ctx.r31.s64 + 2548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A2CC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8815ab70
	if (!ctx.cr6.eq) goto loc_8815AB70;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,20788
	ctx.r30.s64 = ctx.r31.s64 + 20788;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-1512
	ctx.r6.s64 = ctx.r11.s64 + -1512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A300;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,20800
	ctx.r27.s64 = ctx.r31.s64 + 20800;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-1448
	ctx.r6.s64 = ctx.r11.s64 + -1448;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A328;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,20812
	ctx.r28.s64 = ctx.r31.s64 + 20812;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-1384
	ctx.r6.s64 = ctx.r11.s64 + -1384;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A350;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,20824
	ctx.r29.s64 = ctx.r31.s64 + 20824;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1320
	ctx.r6.s64 = ctx.r11.s64 + -1320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A378;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20772(r31)
	REX_STORE_U32(ctx.r31.u32 + 20772, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,20776(r31)
	REX_STORE_U32(ctx.r31.u32 + 20776, ctx.r27.u32);
	// addi r30,r31,20852
	ctx.r30.s64 = ctx.r31.s64 + 20852;
	// stw r28,20780(r31)
	REX_STORE_U32(ctx.r31.u32 + 20780, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20784(r31)
	REX_STORE_U32(ctx.r31.u32 + 20784, ctx.r29.u32);
	// addi r6,r11,-1256
	ctx.r6.s64 = ctx.r11.s64 + -1256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A3B0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,20864
	ctx.r27.s64 = ctx.r31.s64 + 20864;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1216
	ctx.r6.s64 = ctx.r11.s64 + -1216;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A3D8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,20876
	ctx.r28.s64 = ctx.r31.s64 + 20876;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1176
	ctx.r6.s64 = ctx.r11.s64 + -1176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A400;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,20888
	ctx.r29.s64 = ctx.r31.s64 + 20888;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1136
	ctx.r6.s64 = ctx.r11.s64 + -1136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A428;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20836(r31)
	REX_STORE_U32(ctx.r31.u32 + 20836, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,20840(r31)
	REX_STORE_U32(ctx.r31.u32 + 20840, ctx.r27.u32);
	// addi r26,r31,21008
	ctx.r26.s64 = ctx.r31.s64 + 21008;
	// stw r28,20844(r31)
	REX_STORE_U32(ctx.r31.u32 + 20844, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20848(r31)
	REX_STORE_U32(ctx.r31.u32 + 20848, ctx.r29.u32);
	// addi r6,r11,-1096
	ctx.r6.s64 = ctx.r11.s64 + -1096;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A460;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r23,r31,21020
	ctx.r23.s64 = ctx.r31.s64 + 21020;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-840
	ctx.r6.s64 = ctx.r11.s64 + -840;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A488;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r24,r31,21032
	ctx.r24.s64 = ctx.r31.s64 + 21032;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-584
	ctx.r6.s64 = ctx.r11.s64 + -584;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A4B0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r25,r31,21044
	ctx.r25.s64 = ctx.r31.s64 + 21044;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-328
	ctx.r6.s64 = ctx.r11.s64 + -328;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A4D8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21056
	ctx.r27.s64 = ctx.r31.s64 + 21056;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-72
	ctx.r6.s64 = ctx.r11.s64 + -72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A500;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21068
	ctx.r28.s64 = ctx.r31.s64 + 21068;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,184
	ctx.r6.s64 = ctx.r11.s64 + 184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A528;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21080
	ctx.r29.s64 = ctx.r31.s64 + 21080;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,440
	ctx.r6.s64 = ctx.r11.s64 + 440;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A550;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,21092
	ctx.r30.s64 = ctx.r31.s64 + 21092;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,696
	ctx.r6.s64 = ctx.r11.s64 + 696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A578;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r26,21720(r31)
	REX_STORE_U32(ctx.r31.u32 + 21720, ctx.r26.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r23,21724(r31)
	REX_STORE_U32(ctx.r31.u32 + 21724, ctx.r23.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r24,21728(r31)
	REX_STORE_U32(ctx.r31.u32 + 21728, ctx.r24.u32);
	// addi r6,r11,952
	ctx.r6.s64 = ctx.r11.s64 + 952;
	// stw r25,21732(r31)
	REX_STORE_U32(ctx.r31.u32 + 21732, ctx.r25.u32);
	// addi r4,r31,21104
	ctx.r4.s64 = ctx.r31.s64 + 21104;
	// stw r27,21736(r31)
	REX_STORE_U32(ctx.r31.u32 + 21736, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,21740(r31)
	REX_STORE_U32(ctx.r31.u32 + 21740, ctx.r28.u32);
	// stw r29,21744(r31)
	REX_STORE_U32(ctx.r31.u32 + 21744, ctx.r29.u32);
	// stw r30,21748(r31)
	REX_STORE_U32(ctx.r31.u32 + 21748, ctx.r30.u32);
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b5c98
	ctx.lr = 0x8815A5BC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,1464
	ctx.r6.s64 = ctx.r11.s64 + 1464;
	// addi r4,r31,21116
	ctx.r4.s64 = ctx.r31.s64 + 21116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A5E0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,1976
	ctx.r6.s64 = ctx.r11.s64 + 1976;
	// addi r4,r31,21128
	ctx.r4.s64 = ctx.r31.s64 + 21128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A604;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,2488
	ctx.r6.s64 = ctx.r11.s64 + 2488;
	// addi r4,r31,21140
	ctx.r4.s64 = ctx.r31.s64 + 21140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A628;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,3000
	ctx.r6.s64 = ctx.r11.s64 + 3000;
	// addi r4,r31,21152
	ctx.r4.s64 = ctx.r31.s64 + 21152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A64C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,3512
	ctx.r6.s64 = ctx.r11.s64 + 3512;
	// addi r4,r31,21164
	ctx.r4.s64 = ctx.r31.s64 + 21164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A670;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4024
	ctx.r6.s64 = ctx.r11.s64 + 4024;
	// addi r4,r31,21176
	ctx.r4.s64 = ctx.r31.s64 + 21176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A694;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4536
	ctx.r6.s64 = ctx.r11.s64 + 4536;
	// addi r4,r31,21188
	ctx.r4.s64 = ctx.r31.s64 + 21188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A6B8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5048
	ctx.r6.s64 = ctx.r11.s64 + 5048;
	// addi r4,r31,21200
	ctx.r4.s64 = ctx.r31.s64 + 21200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A6DC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5344
	ctx.r6.s64 = ctx.r11.s64 + 5344;
	// addi r4,r31,21212
	ctx.r4.s64 = ctx.r31.s64 + 21212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A700;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,5640
	ctx.r6.s64 = ctx.r11.s64 + 5640;
	// addi r4,r31,21224
	ctx.r4.s64 = ctx.r31.s64 + 21224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A724;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5936
	ctx.r6.s64 = ctx.r11.s64 + 5936;
	// addi r4,r31,21236
	ctx.r4.s64 = ctx.r31.s64 + 21236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A748;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,21248
	ctx.r30.s64 = ctx.r31.s64 + 21248;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2308
	ctx.r6.s64 = ctx.r11.s64 + -2308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A770;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r23,r31,21260
	ctx.r23.s64 = ctx.r31.s64 + 21260;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2212
	ctx.r6.s64 = ctx.r11.s64 + -2212;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A798;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r24,r31,21272
	ctx.r24.s64 = ctx.r31.s64 + 21272;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2116
	ctx.r6.s64 = ctx.r11.s64 + -2116;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A7C0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r25,r31,21284
	ctx.r25.s64 = ctx.r31.s64 + 21284;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2020
	ctx.r6.s64 = ctx.r11.s64 + -2020;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A7E8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,21296
	ctx.r26.s64 = ctx.r31.s64 + 21296;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1992
	ctx.r6.s64 = ctx.r11.s64 + -1992;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A810;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21308
	ctx.r27.s64 = ctx.r31.s64 + 21308;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1964
	ctx.r6.s64 = ctx.r11.s64 + -1964;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A838;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21320
	ctx.r28.s64 = ctx.r31.s64 + 21320;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1936
	ctx.r6.s64 = ctx.r11.s64 + -1936;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A860;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21332
	ctx.r29.s64 = ctx.r31.s64 + 21332;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1908
	ctx.r6.s64 = ctx.r11.s64 + -1908;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A888;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20936(r31)
	REX_STORE_U32(ctx.r31.u32 + 20936, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r23,20940(r31)
	REX_STORE_U32(ctx.r31.u32 + 20940, ctx.r23.u32);
	// addi r30,r31,21344
	ctx.r30.s64 = ctx.r31.s64 + 21344;
	// stw r24,20944(r31)
	REX_STORE_U32(ctx.r31.u32 + 20944, ctx.r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,20948(r31)
	REX_STORE_U32(ctx.r31.u32 + 20948, ctx.r25.u32);
	// addi r6,r11,-1880
	ctx.r6.s64 = ctx.r11.s64 + -1880;
	// stw r26,20952(r31)
	REX_STORE_U32(ctx.r31.u32 + 20952, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,20956(r31)
	REX_STORE_U32(ctx.r31.u32 + 20956, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20960(r31)
	REX_STORE_U32(ctx.r31.u32 + 20960, ctx.r28.u32);
	// stw r29,20964(r31)
	REX_STORE_U32(ctx.r31.u32 + 20964, ctx.r29.u32);
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b5c98
	ctx.lr = 0x8815A8D0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r23,r31,21356
	ctx.r23.s64 = ctx.r31.s64 + 21356;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1844
	ctx.r6.s64 = ctx.r11.s64 + -1844;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A8F8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r24,r31,21368
	ctx.r24.s64 = ctx.r31.s64 + 21368;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1808
	ctx.r6.s64 = ctx.r11.s64 + -1808;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A920;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r25,r31,21380
	ctx.r25.s64 = ctx.r31.s64 + 21380;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1772
	ctx.r6.s64 = ctx.r11.s64 + -1772;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A948;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,21392
	ctx.r26.s64 = ctx.r31.s64 + 21392;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1736
	ctx.r6.s64 = ctx.r11.s64 + -1736;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A970;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21404
	ctx.r27.s64 = ctx.r31.s64 + 21404;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1700
	ctx.r6.s64 = ctx.r11.s64 + -1700;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A998;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21416
	ctx.r28.s64 = ctx.r31.s64 + 21416;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1664
	ctx.r6.s64 = ctx.r11.s64 + -1664;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A9C0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21428
	ctx.r29.s64 = ctx.r31.s64 + 21428;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1628
	ctx.r6.s64 = ctx.r11.s64 + -1628;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A9E8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20904(r31)
	REX_STORE_U32(ctx.r31.u32 + 20904, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r23,20908(r31)
	REX_STORE_U32(ctx.r31.u32 + 20908, ctx.r23.u32);
	// addi r30,r31,21440
	ctx.r30.s64 = ctx.r31.s64 + 21440;
	// stw r24,20912(r31)
	REX_STORE_U32(ctx.r31.u32 + 20912, ctx.r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,20916(r31)
	REX_STORE_U32(ctx.r31.u32 + 20916, ctx.r25.u32);
	// addi r6,r11,-2376
	ctx.r6.s64 = ctx.r11.s64 + -2376;
	// stw r26,20920(r31)
	REX_STORE_U32(ctx.r31.u32 + 20920, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,20924(r31)
	REX_STORE_U32(ctx.r31.u32 + 20924, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20928(r31)
	REX_STORE_U32(ctx.r31.u32 + 20928, ctx.r28.u32);
	// stw r29,20932(r31)
	REX_STORE_U32(ctx.r31.u32 + 20932, ctx.r29.u32);
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b5c98
	ctx.lr = 0x8815AA30;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21452
	ctx.r27.s64 = ctx.r31.s64 + 21452;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2280
	ctx.r6.s64 = ctx.r11.s64 + -2280;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AA58;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21464
	ctx.r28.s64 = ctx.r31.s64 + 21464;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2184
	ctx.r6.s64 = ctx.r11.s64 + -2184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AA80;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21476
	ctx.r29.s64 = ctx.r31.s64 + 21476;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2088
	ctx.r6.s64 = ctx.r11.s64 + -2088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AAA8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20972(r31)
	REX_STORE_U32(ctx.r31.u32 + 20972, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,20976(r31)
	REX_STORE_U32(ctx.r31.u32 + 20976, ctx.r27.u32);
	// addi r30,r31,21488
	ctx.r30.s64 = ctx.r31.s64 + 21488;
	// stw r28,20980(r31)
	REX_STORE_U32(ctx.r31.u32 + 20980, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20984(r31)
	REX_STORE_U32(ctx.r31.u32 + 20984, ctx.r29.u32);
	// addi r6,r11,-1592
	ctx.r6.s64 = ctx.r11.s64 + -1592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AAE0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21500
	ctx.r27.s64 = ctx.r31.s64 + 21500;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1572
	ctx.r6.s64 = ctx.r11.s64 + -1572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB08;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21512
	ctx.r28.s64 = ctx.r31.s64 + 21512;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1552
	ctx.r6.s64 = ctx.r11.s64 + -1552;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB30;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21524
	ctx.r29.s64 = ctx.r31.s64 + 21524;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1532
	ctx.r6.s64 = ctx.r11.s64 + -1532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB58;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20992(r31)
	REX_STORE_U32(ctx.r31.u32 + 20992, ctx.r30.u32);
	// stw r27,20996(r31)
	REX_STORE_U32(ctx.r31.u32 + 20996, ctx.r27.u32);
	// stw r28,21000(r31)
	REX_STORE_U32(ctx.r31.u32 + 21000, ctx.r28.u32);
	// stw r29,21004(r31)
	REX_STORE_U32(ctx.r31.u32 + 21004, ctx.r29.u32);
loc_8815AB70:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-15760
	ctx.r6.s64 = ctx.r11.s64 + -15760;
	// addi r4,r31,2044
	ctx.r4.s64 = ctx.r31.s64 + 2044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB8C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-15272
	ctx.r6.s64 = ctx.r11.s64 + -15272;
	// addi r4,r31,2056
	ctx.r4.s64 = ctx.r31.s64 + 2056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ABB0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-14784
	ctx.r6.s64 = ctx.r11.s64 + -14784;
	// addi r4,r31,2068
	ctx.r4.s64 = ctx.r31.s64 + 2068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ABD4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-14296
	ctx.r6.s64 = ctx.r11.s64 + -14296;
	// addi r4,r31,2080
	ctx.r4.s64 = ctx.r31.s64 + 2080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ABF8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-31680
	ctx.r6.s64 = ctx.r11.s64 + -31680;
	// addi r4,r31,2184
	ctx.r4.s64 = ctx.r31.s64 + 2184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC1C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-31000
	ctx.r6.s64 = ctx.r11.s64 + -31000;
	// addi r4,r31,2196
	ctx.r4.s64 = ctx.r31.s64 + 2196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC40;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-30248
	ctx.r6.s64 = ctx.r11.s64 + -30248;
	// addi r4,r31,2208
	ctx.r4.s64 = ctx.r31.s64 + 2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC64;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-29648
	ctx.r6.s64 = ctx.r11.s64 + -29648;
	// addi r4,r31,2220
	ctx.r4.s64 = ctx.r31.s64 + 2220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC88;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-29112
	ctx.r6.s64 = ctx.r11.s64 + -29112;
	// addi r4,r31,2232
	ctx.r4.s64 = ctx.r31.s64 + 2232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ACAC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-28696
	ctx.r6.s64 = ctx.r11.s64 + -28696;
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ACD0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-28280
	ctx.r6.s64 = ctx.r11.s64 + -28280;
	// addi r4,r31,2432
	ctx.r4.s64 = ctx.r31.s64 + 2432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ACF4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-27576
	ctx.r6.s64 = ctx.r11.s64 + -27576;
	// addi r4,r31,2256
	ctx.r4.s64 = ctx.r31.s64 + 2256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AD18;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815ad2c
	if (ctx.cr6.eq) goto loc_8815AD2C;
loc_8815AD20:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8815AD2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817A3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8817a6c8
	if (!ctx.cr6.gt) goto loc_8817A6C8;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8817a6c8
	if (!ctx.cr6.gt) goto loc_8817A6C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f0,12088(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfs f13,6728(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f13,7000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fsubs f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8817a430
	if (!ctx.cr6.gt) goto loc_8817A430;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8817A430:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f12,6708(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x8817a4a8
	if (ctx.cr6.lt) goto loc_8817A4A8;
	// fadds f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A46C:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8817a46c
	if (ctx.cr6.lt) goto loc_8817A46C;
loc_8817A4A8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a4e4
	if (!ctx.cr6.lt) goto loc_8817A4E4;
	// fadds f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A4D4:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A4D4;
loc_8817A4E4:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8817a508
	if (ctx.cr6.gt) goto loc_8817A508;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8817A508:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a5b4
	if (!ctx.cr6.lt) goto loc_8817A5B4;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8817a57c
	if (ctx.cr6.lt) goto loc_8817A57C;
	// fadd f13,f10,f0
	ctx.f13.f64 = ctx.f10.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A540:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8817a540
	if (ctx.cr6.lt) goto loc_8817A540;
loc_8817A57C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a5b4
	if (!ctx.cr6.lt) goto loc_8817A5B4;
	// fadd f13,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A5A4:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a5a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A5A4;
loc_8817A5B4:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a5f4
	if (!ctx.cr6.lt) goto loc_8817A5F4;
	// fadds f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A5D8:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a5d8
	if (ctx.cr6.lt) goto loc_8817A5D8;
loc_8817A5F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a630
	if (!ctx.cr6.gt) goto loc_8817A630;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A614:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a614
	if (ctx.cr6.lt) goto loc_8817A614;
loc_8817A630:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a758
	if (!ctx.cr6.gt) goto loc_8817A758;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8817A64C:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadd f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f6,-8(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fadd f2,f3,f0
	ctx.f2.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8817a64c
	if (ctx.cr6.lt) goto loc_8817A64C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8817A6C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a758
	if (!ctx.cr6.gt) goto loc_8817A758;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,12088(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A724:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a724
	if (ctx.cr6.lt) goto loc_8817A724;
loc_8817A758:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881833C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881833C8;
	__savegprlr_23(ctx, base);
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r5,-16
	ctx.r10.s64 = ctx.r5.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881833E4:
	// lhz r7,22(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r6,26(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r9,18(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r8,30(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,20(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,24(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r27,28(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzu r4,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r31,r3,2408
	ctx.r31.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// mulli r8,r8,3406
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3406));
	// mulli r5,r5,565
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(565));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// mulli r9,r9,2276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(2276));
	// subf r3,r6,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r30,r8,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r31,r7,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r5,r31,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r31.u64;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// rlwinm r4,r4,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// add r27,r5,r8
	ctx.r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r24,r5,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r5,r28
	ctx.r5.s64 = ctx.r28.s16;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// mulli r4,r29,1108
	ctx.r4.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1108));
	// mulli r7,r7,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1568));
	// rlwinm r5,r5,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// mulli r23,r6,3784
	ctx.r23.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3784));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r28,r27,181
	ctx.r28.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(181));
	// subf r29,r5,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mulli r27,r24,181
	ctx.r27.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(181));
	// subf r8,r23,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r23.u64;
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// subf r28,r6,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r29,r8
	ctx.r6.u64 = ctx.r29.u64 + ctx.r8.u64;
	// subf r3,r8,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r8.u64;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 8;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r28,r8
	ctx.r27.u64 = ctx.r28.u64 + ctx.r8.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r3,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 8;
	// subf r8,r8,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r8.u64;
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sth r4,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// sth r29,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r29.u16);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r6,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r4,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bdnz 0x881833e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881833E4;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r5,r11,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r11.u64;
	// add r8,r26,r10
	ctx.r8.u64 = ctx.r26.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_88183564:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// lhzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lhzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r6,r31,1892
	ctx.r6.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1892));
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r7,r30,784
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(784));
	// subf r28,r8,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r30,r30,1892
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1892));
	// mulli r31,r31,784
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(784));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r8,r29,1448
	ctx.r8.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r28,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(1448));
	// subf r7,r30,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// sthx r6,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u16);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sthx r7,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r6,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x88183564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88183564;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88187F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88187f74
	if (!ctx.cr6.eq) goto loc_88187F74;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_88187F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88187b98
	ctx.lr = 0x88187F7C;
	sub_88187B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815ba70
	ctx.lr = 0x88187F84;
	sub_8815BA70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881886A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881886A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,296(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8818872c
	if (!ctx.cr6.eq) goto loc_8818872C;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x881886ec
	if (!ctx.cr6.eq) goto loc_881886EC;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x881886f4
	if (ctx.cr6.eq) goto loc_881886F4;
loc_881886EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
loc_881886F4:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88188710
	if (!ctx.cr6.eq) goto loc_88188710;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818871c
	if (ctx.cr6.eq) goto loc_8818871C;
loc_88188710:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_8818871C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x88188750
	goto loc_88188750;
loc_8818872C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 1;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
loc_88188750:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x88188600
	ctx.lr = 0x88188770;
	sub_88188600(ctx, base);
	// stw r3,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x881887a8
	if (ctx.cr6.eq) goto loc_881887A8;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x881cea20
	ctx.lr = 0x8818879C;
	sub_881CEA20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881887A8:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x881cebb0
	ctx.lr = 0x881887B0;
	sub_881CEBB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818A038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A048:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8818a048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A048;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A06C:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A06C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A090:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A090;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A0B4:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A0B4;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A0D8:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A0D8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A0FC:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A0FC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A120:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A120;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A144:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8818a144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A144;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8818D418) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8818D448:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818d478
	if (ctx.cr6.eq) goto loc_8818D478;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// ble cr6,0x8818d470
	if (!ctx.cr6.gt) goto loc_8818D470;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x8818d478
	goto loc_8818D478;
loc_8818D470:
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_8818D478:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8818d448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818D448;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88191418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88191420;
	__savegprlr_21(ctx, base);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r8,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r8.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// sth r6,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r6.u16);
	// lbz r5,-1(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lbz r4,1(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// sth r4,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r4.u16);
	// lbz r3,-2(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lbz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// sth r6,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r6.u16);
	// lbz r5,-3(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// sth r5,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// sth r4,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r4.u16);
	// lbz r3,-4(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -4);
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lbz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// sth r6,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// lbz r5,-5(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -5);
	// sth r5,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// sth r4,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r4.u16);
	// lbz r3,-6(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -6);
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// sth r6,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r6.u16);
	// lbz r5,-7(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -7);
	// sth r5,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r5.u16);
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// sth r4,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r4.u16);
	// lbz r3,-8(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -8);
	// sth r3,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r3.u16);
	// lbzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// sth r9,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// sth r8,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// sth r6,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r6.u16);
	// sth r8,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// sth r5,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r5.u16);
	// sth r8,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// sth r4,46(r11)
	REX_STORE_U16(ctx.r11.u32 + 46, ctx.r4.u16);
	// sth r8,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r8.u16);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,32(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r3.u32);
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
	// stw r9,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwzu r6,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r9,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 1;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// srawi r30,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 1;
	// lwz r25,-8(r10)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r7,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 1;
	// lwz r24,-12(r10)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r28,44(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r23,40(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r4,r26,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,4(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r5,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 1;
	// stw r9,-124(r1)
	REX_STORE_U32(ctx.r1.u32 + -124, ctx.r9.u32);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// lwz r22,12(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r25,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,36(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// stw r29,-120(r1)
	REX_STORE_U32(ctx.r1.u32 + -120, ctx.r29.u32);
	// rlwinm r4,r3,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,-132(r1)
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// stw r7,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r23,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r26,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// add r8,r5,r28
	ctx.r8.u64 = ctx.r5.u64 + ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r5,r21,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r4,r24,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,-116(r1)
	REX_STORE_U32(ctx.r1.u32 + -116, ctx.r6.u32);
	// rlwinm r26,r22,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r5,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r5.u32);
	// rlwinm r31,r25,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// stw r6,-140(r1)
	REX_STORE_U32(ctx.r1.u32 + -140, ctx.r6.u32);
	// addi r4,r9,-2
	ctx.r4.s64 = ctx.r9.s64 + -2;
	// stw r8,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r8.u32);
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// stw r5,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stw r4,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r4.u32);
	// li r28,10
	ctx.r28.s64 = 10;
loc_88191670:
	// clrlwi r27,r28,31
	ctx.r27.u64 = ctx.r28.u32 & 0x1;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x88191684
	if (!ctx.cr6.eq) goto loc_88191684;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_88191684:
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r26,r28,-1
	ctx.r26.s64 = ctx.r28.s64 + -1;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// clrlwi r29,r26,31
	ctx.r29.u64 = ctx.r26.u32 & 0x1;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x88191724
	if (!ctx.cr6.eq) goto loc_88191724;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_88191724:
	// lhz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x881917bc
	if (!ctx.cr6.eq) goto loc_881917BC;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_881917BC:
	// lhz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x88191854
	if (!ctx.cr6.eq) goto loc_88191854;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_88191854:
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x881918ec
	if (!ctx.cr6.eq) goto loc_881918EC;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_881918EC:
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r28,r28,-5
	ctx.r28.s64 = ctx.r28.s64 + -5;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// bdnz 0x88191670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88191670;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819A1F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8819A1F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,228(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r9,220(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r10,3776(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,232(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r9,r1,236
	ctx.r9.s64 = ctx.r1.s64 + 236;
	// stw r5,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r30,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// stw r7,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// addi r29,r1,248
	ctx.r29.s64 = ctx.r1.s64 + 248;
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r10,3784(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// addi r28,r1,348
	ctx.r28.s64 = ctx.r1.s64 + 348;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// stw r8,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r3,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// addi r26,r1,228
	ctx.r26.s64 = ctx.r1.s64 + 228;
	// lwz r23,3828(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 3828);
	// addi r25,r1,388
	ctx.r25.s64 = ctx.r1.s64 + 388;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// stw r9,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// addi r24,r1,232
	ctx.r24.s64 = ctx.r1.s64 + 232;
	// stw r29,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r22,r1,408
	ctx.r22.s64 = ctx.r1.s64 + 408;
	// stw r30,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// stw r3,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// addi r21,r1,216
	ctx.r21.s64 = ctx.r1.s64 + 216;
	// lwz r10,3820(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// stw r23,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// li r16,1
	ctx.r16.s64 = 1;
	// stw r30,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r29,r1,428
	ctx.r29.s64 = ctx.r1.s64 + 428;
	// stw r7,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r7.u32);
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r10,3824(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// stw r26,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stw r3,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// lwz r9,3812(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r24,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r24.u32);
	// stw r5,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r5.u32);
	// stw r3,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// stw r30,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// stw r30,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// lwz r10,3792(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// stw r9,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// stw r4,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r4.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stw r7,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// stw r30,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// lwz r9,3796(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// stw r6,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r6.u32);
	// stw r3,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r3.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r21,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r21.u32);
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// stw r30,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// addi r10,r1,468
	ctx.r10.s64 = ctx.r1.s64 + 468;
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r3,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r3.u32);
	// addi r29,r1,488
	ctx.r29.s64 = ctx.r1.s64 + 488;
	// stw r11,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// addi r28,r1,528
	ctx.r28.s64 = ctx.r1.s64 + 528;
	// stw r4,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r4.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r30,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// stw r7,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// rlwinm r21,r11,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r8.u32);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r30,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// li r26,192
	ctx.r26.s64 = 192;
	// lwz r23,14872(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// addi r25,r1,244
	ctx.r25.s64 = ctx.r1.s64 + 244;
	// lwz r22,3084(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// li r24,144
	ctx.r24.s64 = 144;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,2964(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// lwz r19,1896(r31)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// lwz r15,1900(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// stw r3,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// addi r20,r1,584
	ctx.r20.s64 = ctx.r1.s64 + 584;
	// stw r4,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r4.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r8.u32);
	// addi r3,r11,738
	ctx.r3.s64 = ctx.r11.s64 + 738;
	// stw r30,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r23,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r23.u32);
	// stw r22,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r22.u32);
	// stw r27,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r27.u32);
	// stw r9,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r9.u32);
	// stw r30,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// stw r21,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r21.u32);
	// stw r5,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r5.u32);
	// stw r7,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r7.u32);
	// stw r30,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r10,2092(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// stw r30,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r30,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r19,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r19.u32);
	// stw r15,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r15.u32);
	// stw r6,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r6.u32);
	// stw r26,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r26.u32);
	// stw r30,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// stw r21,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r21.u32);
	// stw r25,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r25.u32);
	// stw r24,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r24.u32);
	// stw r30,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r21,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r21.u32);
	// addi r8,r10,263
	ctx.r8.s64 = ctx.r10.s64 + 263;
	// stw r30,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r30.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r30,0(r20)
	REX_STORE_U64(ctx.r20.u32 + 0, ctx.r30.u64);
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwzx r5,r4,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r5,2916(r31)
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r5.u32);
	// lwzx r4,r3,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r4,2928(r31)
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r4.u32);
	// lwzx r3,r7,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r3,2096(r31)
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r3.u32);
	// lwz r10,2108(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 2108);
	// stw r10,2100(r31)
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// bne cr6,0x8819a4b4
	if (!ctx.cr6.eq) goto loc_8819A4B4;
	// stw r30,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// b 0x8819a4b8
	goto loc_8819A4B8;
loc_8819A4B4:
	// stw r16,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r16.u32);
loc_8819A4B8:
	// lwz r10,14840(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14840);
	// lwz r8,3428(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3428);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8819a4e0
	if (ctx.cr6.eq) goto loc_8819A4E0;
	// stw r9,14848(r31)
	REX_STORE_U32(ctx.r31.u32 + 14848, ctx.r9.u32);
	// stw r10,14844(r31)
	REX_STORE_U32(ctx.r31.u32 + 14844, ctx.r10.u32);
	// b 0x8819a4e8
	goto loc_8819A4E8;
loc_8819A4E0:
	// stw r9,14844(r31)
	REX_STORE_U32(ctx.r31.u32 + 14844, ctx.r9.u32);
	// stw r10,14848(r31)
	REX_STORE_U32(ctx.r31.u32 + 14848, ctx.r10.u32);
loc_8819A4E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8819a4fc
	if (ctx.cr6.eq) goto loc_8819A4FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8819a500
	if (!ctx.cr6.eq) goto loc_8819A500;
loc_8819A4FC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8819A500:
	// lwz r10,1976(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x8819A518;
	sub_881B58F8(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8819a534
	if (!ctx.cr6.lt) goto loc_8819A534;
	// addi r11,r31,2468
	ctx.r11.s64 = ctx.r31.s64 + 2468;
	// addi r10,r31,2484
	ctx.r10.s64 = ctx.r31.s64 + 2484;
	// addi r9,r31,2524
	ctx.r9.s64 = ctx.r31.s64 + 2524;
	// b 0x8819a558
	goto loc_8819A558;
loc_8819A534:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x8819a54c
	if (!ctx.cr6.lt) goto loc_8819A54C;
	// addi r11,r31,2456
	ctx.r11.s64 = ctx.r31.s64 + 2456;
	// addi r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 + 2496;
	// addi r9,r31,2536
	ctx.r9.s64 = ctx.r31.s64 + 2536;
	// b 0x8819a558
	goto loc_8819A558;
loc_8819A54C:
	// addi r11,r31,2444
	ctx.r11.s64 = ctx.r31.s64 + 2444;
	// addi r10,r31,2508
	ctx.r10.s64 = ctx.r31.s64 + 2508;
	// addi r9,r31,2548
	ctx.r9.s64 = ctx.r31.s64 + 2548;
loc_8819A558:
	// stw r9,2560(r31)
	REX_STORE_U32(ctx.r31.u32 + 2560, ctx.r9.u32);
	// stw r10,2520(r31)
	REX_STORE_U32(ctx.r31.u32 + 2520, ctx.r10.u32);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,2480(r31)
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r9,3820(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,3824(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,3792(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r9,3796(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r29,3828(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3828);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r28,3812(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r27,15964(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// stw r6,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// stw r5,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r4,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// stw r3,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// stw r7,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r29,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r9,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// stw r28,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// beq cr6,0x8819a61c
	if (ctx.cr6.eq) goto loc_8819A61C;
	// lwz r9,15968(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15968);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8819a61c
	if (ctx.cr6.eq) goto loc_8819A61C;
	// lwz r9,15972(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15972);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8819a61c
	if (!ctx.cr6.eq) goto loc_8819A61C;
	// lwz r8,15976(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15976);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
loc_8819A61C:
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,280(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r6,14872(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// lwz r4,3084(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// subfe r10,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,1896(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r5,1900(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r6,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// stw r3,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stw r5,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// stw r9,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// stw r10,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// beq cr6,0x8819a67c
	if (ctx.cr6.eq) goto loc_8819A67C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8819a680
	if (!ctx.cr6.eq) goto loc_8819A680;
loc_8819A67C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8819A680:
	// lwz r10,1976(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x8819A698;
	sub_881B58F8(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x88052d90
	ctx.lr = 0x8819A6B4;
	sub_88052D90(ctx, base);
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// ble cr6,0x8819b228
	if (!ctx.cr6.gt) goto loc_8819B228;
	// li r14,2
	ctx.r14.s64 = 2;
	// li r15,128
	ctx.r15.s64 = 128;
	// li r19,16384
	ctx.r19.s64 = 16384;
loc_8819A6DC:
	// lwz r22,252(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r21,236(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r27,248(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// beq cr6,0x8819a708
	if (ctx.cr6.eq) goto loc_8819A708;
	// lwz r10,21968(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819a70c
	if (ctx.cr6.eq) goto loc_8819A70C;
loc_8819A708:
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
loc_8819A70C:
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r8.u32);
	// bne cr6,0x8819a73c
	if (!ctx.cr6.eq) goto loc_8819A73C;
	// lwz r10,1896(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r9,1900(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// lwz r8,14872(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
loc_8819A73C:
	// lwz r10,21940(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819a8ac
	if (ctx.cr6.eq) goto loc_8819A8AC;
	// lwz r10,21968(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819a8ac
	if (ctx.cr6.eq) goto loc_8819A8AC;
	// lwz r11,21976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// lwz r29,84(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r31)
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819a7f0
	if (ctx.cr6.eq) goto loc_8819A7F0;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8819a7cc
	if (!ctx.cr6.lt) goto loc_8819A7CC;
loc_8819A78C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819a7cc
	if (ctx.cr6.eq) goto loc_8819A7CC;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// std r6,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r6.u64);
	// stw r7,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// bge 0x8819a7bc
	if (!ctx.cr0.lt) goto loc_8819A7BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x8819A7BC;
	sub_88156678(ctx, base);
loc_8819A7BC:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819a78c
	if (ctx.cr6.gt) goto loc_8819A78C;
loc_8819A7CC:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// subf. r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r7.u64);
	// stw r8,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// bge 0x8819a7f0
	if (!ctx.cr0.lt) goto loc_8819A7F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x8819A7F0;
	sub_88156678(ctx, base);
loc_8819A7F0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x8819A800;
	sub_88156500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x881adb80
	ctx.lr = 0x8819A80C;
	sub_881ADB80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r16,1948(r31)
	REX_STORE_U32(ctx.r31.u32 + 1948, ctx.r16.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8819a884
	if (ctx.cr6.eq) goto loc_8819A884;
	// stw r30,20680(r31)
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,20684(r31)
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r30.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stw r14,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r14.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x8819A84C;
	sub_8819B310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b24c
	if (!ctx.cr6.eq) goto loc_8819B24C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8819a864
	if (ctx.cr6.eq) goto loc_8819A864;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// bne cr6,0x8819a868
	if (!ctx.cr6.eq) goto loc_8819A868;
loc_8819A864:
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8819A868:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8819b228
	if (ctx.cr6.eq) goto loc_8819B228;
	// lwz r11,21976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21976(r31)
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x8819b204
	goto loc_8819B204;
loc_8819A884:
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819aa88
	if (!ctx.cr6.eq) goto loc_8819AA88;
	// lwz r11,20684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819aa88
	if (!ctx.cr6.eq) goto loc_8819AA88;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8819aa88
	if (!ctx.cr6.eq) goto loc_8819AA88;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
loc_8819A8AC:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r15,3000(r31)
	REX_STORE_U32(ctx.r31.u32 + 3000, ctx.r15.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r15,2996(r31)
	REX_STORE_U32(ctx.r31.u32 + 2996, ctx.r15.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r15,2992(r31)
	REX_STORE_U32(ctx.r31.u32 + 2992, ctx.r15.u32);
	// ble cr6,0x8819b190
	if (!ctx.cr6.gt) goto loc_8819B190;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8819A8D4:
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,3416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3416);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// beq cr6,0x8819a918
	if (ctx.cr6.eq) goto loc_8819A918;
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8819a918
	if (ctx.cr6.eq) goto loc_8819A918;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8819a924
	if (!ctx.cr6.eq) goto loc_8819A924;
loc_8819A918:
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
loc_8819A924:
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x88199800
	ctx.lr = 0x8819A954;
	sub_88199800(ctx, base);
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8819a96c
	if (ctx.cr6.eq) goto loc_8819A96C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8819a9c4
	if (!ctx.cr6.eq) goto loc_8819A9C4;
loc_8819A96C:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r6,356(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,1,16,26
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFE0) | (ctx.r4.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r3,r4,0,28,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r6,1,16,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8819A9C4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8819b148
	if (!ctx.cr6.eq) goto loc_8819B148;
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,24,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8819b01c
	if (!ctx.cr6.eq) goto loc_8819B01C;
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8819aa38
	if (!ctx.cr6.eq) goto loc_8819AA38;
	// stb r30,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r30.u8);
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,10(r10)
	REX_STORE_U8(ctx.r10.u32 + 10, ctx.r30.u8);
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,11(r9)
	REX_STORE_U8(ctx.r9.u32 + 11, ctx.r30.u8);
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,12(r8)
	REX_STORE_U8(ctx.r8.u32 + 12, ctx.r30.u8);
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r30,13(r7)
	REX_STORE_U8(ctx.r7.u32 + 13, ctx.r30.u8);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8819AA38:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8819ad58
	if (ctx.cr6.eq) goto loc_8819AD58;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8819aa6c
	if (!ctx.cr6.eq) goto loc_8819AA6C;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r11,r9,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8819AA6C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8819aae8
	if (!ctx.cr6.eq) goto loc_8819AAE8;
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r9,1780(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// b 0x8819aaf0
	goto loc_8819AAF0;
loc_8819AA88:
	// stw r30,20680(r31)
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r30.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stw r30,20684(r31)
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r30.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// stw r14,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r14.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x8819AAB8;
	sub_8819B310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b258
	if (!ctx.cr6.eq) goto loc_8819B258;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8819aacc
	if (!ctx.cr6.eq) goto loc_8819AACC;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
loc_8819AACC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8819b228
	if (ctx.cr6.eq) goto loc_8819B228;
	// lwz r11,21976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21976(r31)
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x8819b204
	goto loc_8819B204;
loc_8819AAE8:
	// lwz r11,1784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lwz r9,1788(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
loc_8819AAF0:
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x8819ab2c
	if (ctx.cr6.lt) goto loc_8819AB2C;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x881c2008
	ctx.lr = 0x8819AB28;
	sub_881C2008(ctx, base);
	// b 0x8819ab5c
	goto loc_8819AB5C;
loc_8819AB2C:
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c1d18
	ctx.lr = 0x8819AB5C;
	sub_881C1D18(ctx, base);
loc_8819AB5C:
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819abd8
	if (!ctx.cr6.eq) goto loc_8819ABD8;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,428(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subf r3,r11,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r11.u64;
	// sth r3,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r3.u16);
	// lwz r6,356(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r8,432(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 & ctx.r8.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// sth r9,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// b 0x8819abf0
	goto loc_8819ABF0;
loc_8819ABD8:
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// sth r8,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
loc_8819ABF0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8819ad58
	if (!ctx.cr6.eq) goto loc_8819AD58;
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwimi r9,r16,7,24,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 7) & 0xE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF1F);
	// lhz r27,2(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r30,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r30.u16);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r30,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r30.u16);
	// lwz r6,15536(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// blt cr6,0x8819ac64
	if (ctx.cr6.lt) goto loc_8819AC64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,1780(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r8,1776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x881c2008
	ctx.lr = 0x8819AC60;
	sub_881C2008(ctx, base);
	// b 0x8819ac8c
	goto loc_8819AC8C;
loc_8819AC64:
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,1780(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,1776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// bl 0x881c1d18
	ctx.lr = 0x8819AC8C;
	sub_881C1D18(ctx, base);
loc_8819AC8C:
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8819ad18
	if (!ctx.cr6.eq) goto loc_8819AD18;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8819ad18
	if (ctx.cr6.eq) goto loc_8819AD18;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,428(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r4,r11,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r11.u64;
	// sth r4,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r4.u16);
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r8,432(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// sth r11,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r11.u16);
	// b 0x8819ad30
	goto loc_8819AD30;
loc_8819AD18:
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r8,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
loc_8819AD30:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r25,2(r11)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r16,6,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 6) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8819AD58:
	// addi r9,r1,268
	ctx.r9.s64 = ctx.r1.s64 + 268;
	// lwz r10,4016(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,264
	ctx.r10.s64 = ctx.r1.s64 + 264;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r9,r1,260
	ctx.r9.s64 = ctx.r1.s64 + 260;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c4298
	ctx.lr = 0x8819ADA4;
	sub_881C4298(ctx, base);
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r3,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r29,3100(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3100);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bne cr6,0x8819ae64
	if (!ctx.cr6.eq) goto loc_8819AE64;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r27,192(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8819AE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,1776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r5,264(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// sthx r5,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r9,256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1784(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// sthx r9,r6,r8
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,1788(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u16);
	// b 0x8819b00c
	goto loc_8819B00C;
loc_8819AE64:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bne cr6,0x8819af0c
	if (!ctx.cr6.eq) goto loc_8819AF0C;
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// lhz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bctrl 
	ctx.lr = 0x8819AEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,1776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u16);
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,1780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r6,r8
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r25.u16);
	// lwz r4,1784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,1788(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lhz r5,2(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// sthx r5,r7,r6
	REX_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u16);
	// b 0x8819b00c
	goto loc_8819B00C;
loc_8819AF0C:
	// lhz r27,2(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x8819AF44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,24,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0;
	// lwz r9,1776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x8819afb8
	if (!ctx.cr6.eq) goto loc_8819AFB8;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r7,r8,r9
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,1780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// sthx r11,r3,r4
	REX_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u16);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r8,1784(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,1788(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// sthx r4,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u16);
	// b 0x8819b00c
	goto loc_8819B00C;
loc_8819AFB8:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r9
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,264(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,1780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r3,r4
	REX_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u16);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r7,1784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// sthx r6,r9,r7
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u16);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,1788(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lhz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
loc_8819B00C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8819b0a0
	if (ctx.cr6.eq) goto loc_8819B0A0;
	// li r5,-2
	ctx.r5.s64 = -2;
	// b 0x8819b154
	goto loc_8819B154;
loc_8819B01C:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,1788(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r19,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1784(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1780(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r19.u16);
	// lwz r9,188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x881a0640
	ctx.lr = 0x8819B094;
	sub_881A0640(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b150
	if (!ctx.cr6.eq) goto loc_8819B150;
loc_8819B0A0:
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8819b0d4
	if (!ctx.cr6.eq) goto loc_8819B0D4;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r30,160(r11)
	REX_STORE_U16(ctx.r11.u32 + 160, ctx.r30.u16);
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r30,128(r10)
	REX_STORE_U16(ctx.r10.u32 + 128, ctx.r30.u16);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r30,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r30.u16);
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8819B0D4:
	// lwz r8,204(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// lwz r5,244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r7,192
	ctx.r10.s64 = ctx.r7.s64 + 192;
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r7,r5,144
	ctx.r7.s64 = ctx.r5.s64 + 144;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// stw r9,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r6,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r7,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// blt cr6,0x8819a8d4
	if (ctx.cr6.lt) goto loc_8819A8D4;
	// b 0x8819b190
	goto loc_8819B190;
loc_8819B148:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8819b154
	goto loc_8819B154;
loc_8819B150:
	// li r5,-3
	ctx.r5.s64 = -3;
loc_8819B154:
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x8819B174;
	sub_8819B310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819b24c
	if (!ctx.cr6.eq) goto loc_8819B24C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8819b18c
	if (ctx.cr6.eq) goto loc_8819B18C;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// bne cr6,0x8819b190
	if (!ctx.cr6.eq) goto loc_8819B190;
loc_8819B18C:
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8819B190:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r7,248(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,212(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,216(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r8,220(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r29,228(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r28,232(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r4,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// stw r9,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r3,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// stw r8,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r5,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r6,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
loc_8819B204:
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// blt cr6,0x8819a6dc
	if (ctx.cr6.lt) goto loc_8819A6DC;
loc_8819B228:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819b2f4
	if (ctx.cr6.eq) goto loc_8819B2F4;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8819b264
	if (!ctx.cr6.eq) goto loc_8819B264;
	// bl 0x8819d640
	ctx.lr = 0x8819B248;
	sub_8819D640(ctx, base);
	// b 0x8819b268
	goto loc_8819B268;
loc_8819B24C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B264:
	// bl 0x8819d578
	ctx.lr = 0x8819B268;
	sub_8819D578(ctx, base);
loc_8819B268:
	// lwz r29,15792(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,3868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3868);
	// lwz r9,15800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// lwz r8,15776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15776);
	// lwz r7,3972(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lwz r5,15784(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// lwz r4,15816(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// lwz r29,15760(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r6,15808(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// lwz r10,15824(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15824);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3784(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,3780(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r8,3776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,15744(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,15768(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// lwz r8,15752(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// lwz r7,15736(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// bl 0x881aa218
	ctx.lr = 0x8819B2F4;
	sub_881AA218(ctx, base);
loc_8819B2F4:
	// stw r16,15624(r31)
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r16.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r30.u32);
	// stw r16,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r16.u32);
	// stw r16,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r16.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C1D18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881C1D20;
	__savegprlr_24(ctx, base);
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r27,r4,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r26,r5,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881c1f74
	if (!ctx.cr6.eq) goto loc_881C1F74;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881c1d60
	if (ctx.cr6.eq) goto loc_881C1D60;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r31,r9
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r31
	ctx.r28.s64 = ctx.r31.s16;
	// b 0x881c1dc0
	goto loc_881C1DC0;
loc_881C1D60:
	// lwz r31,136(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x881c1db8
	if (!ctx.cr6.eq) goto loc_881C1DB8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881c1db8
	if (!ctx.cr6.gt) goto loc_881C1DB8;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_881C1D7C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_881C1D90:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881c1f84
	if (!ctx.cr6.eq) goto loc_881C1F84;
loc_881C1D98:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881C1DB8:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_881C1DC0:
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r31,r9
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r25,r31,r10
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// extsh r29,r25
	ctx.r29.s64 = ctx.r25.s16;
	// blt cr6,0x881c1e40
	if (ctx.cr6.lt) goto loc_881C1E40;
	// beq cr6,0x881c1e14
	if (ctx.cr6.eq) goto loc_881C1E14;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x881c1e84
	if (!ctx.cr6.lt) goto loc_881C1E84;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfc r3,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// eqv r5,r5,r4
	ctx.r5.u64 = ~(ctx.r5.u64 ^ ctx.r4.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r5,r5,1,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x881c1e84
	goto loc_881C1E84;
loc_881C1E14:
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// subfc r3,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// eqv r5,r5,r4
	ctx.r5.u64 = ~(ctx.r5.u64 ^ ctx.r4.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r5,r3,31
	ctx.r5.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x881c1e84
	goto loc_881C1E84;
loc_881C1E40:
	// lwz r3,3400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881c1e54
	if (!ctx.cr6.eq) goto loc_881C1E54;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881c1e80
	if (ctx.cr6.eq) goto loc_881C1E80;
loc_881C1E54:
	// xor r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881c1e74
	if (ctx.cr6.eq) goto loc_881C1E74;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// blt cr6,0x881c1e78
	if (ctx.cr6.lt) goto loc_881C1E78;
loc_881C1E74:
	// li r5,1
	ctx.r5.s64 = 1;
loc_881C1E78:
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_881C1E80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_881C1E84:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,-16384
	ctx.r5.s64 = ctx.r31.s64 + -16384;
	// addi r4,r30,-16384
	ctx.r4.s64 = ctx.r30.s64 + -16384;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lhzx r25,r11,r9
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lhzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r3,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x881c1d98
	if (ctx.cr6.gt) goto loc_881C1D98;
	// bne cr6,0x881c1f08
	if (!ctx.cr6.eq) goto loc_881C1F08;
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// bne cr6,0x881c1ee4
	if (!ctx.cr6.eq) goto loc_881C1EE4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x881c1f08
	goto loc_881C1F08;
loc_881C1EE4:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881c1ef8
	if (!ctx.cr6.eq) goto loc_881C1EF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881c1f08
	goto loc_881C1F08;
loc_881C1EF8:
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// bne cr6,0x881c1f08
	if (!ctx.cr6.eq) goto loc_881C1F08;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_881C1F08:
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// subf r5,r30,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r3,r29,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r29.u64;
	// subf r25,r28,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r28.u64;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// subf r24,r29,r28
	ctx.r24.u64 = ctx.r28.u64 - ctx.r29.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// xor r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r3.u64;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// xor r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 ^ ctx.r3.u64;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// srawi r3,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 31;
	// or r25,r9,r5
	ctx.r25.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// or r24,r4,r3
	ctx.r24.u64 = ctx.r4.u64 | ctx.r3.u64;
	// andc r9,r30,r25
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r25.u64;
	// and r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	// andc r4,r28,r24
	ctx.r4.u64 = ctx.r28.u64 & ~ctx.r24.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 & ctx.r31.u64;
	// or r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 | ctx.r10.u64;
	// and r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 & ctx.r29.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// b 0x881c1d90
	goto loc_881C1D90;
loc_881C1F74:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x881c1d7c
	if (ctx.cr6.gt) goto loc_881C1D7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C1F84:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r6,-60
	ctx.r6.s64 = -60;
	// beq cr6,0x881c1f9c
	if (ctx.cr6.eq) goto loc_881C1F9C;
	// li r6,-28
	ctx.r6.s64 = -28;
loc_881C1F9C:
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881c1fbc
	if (!ctx.cr6.lt) goto loc_881C1FBC;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// b 0x881c1fc8
	goto loc_881C1FC8;
loc_881C1FBC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881c1fcc
	if (!ctx.cr6.gt) goto loc_881C1FCC;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_881C1FC8:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_881C1FCC:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881c1fdc
	if (!ctx.cr6.lt) goto loc_881C1FDC;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// b 0x881c1fe8
	goto loc_881C1FE8;
loc_881C1FDC:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881c1fec
	if (!ctx.cr6.gt) goto loc_881C1FEC;
	// subf r9,r5,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r5.u64;
loc_881C1FE8:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_881C1FEC:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C4D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881C4D18;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x881c4d48
	if (!ctx.cr6.eq) goto loc_881C4D48;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c4e78
	goto loc_881C4E78;
loc_881C4D48:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c4e34
	if (ctx.cr6.lt) goto loc_881C4E34;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881c4e2c
	if (!ctx.cr6.lt) goto loc_881C4E2C;
loc_881C4D94:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c4dc0
	if (ctx.cr6.lt) goto loc_881C4DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C4DB0;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c4d94
	if (ctx.cr6.eq) goto loc_881C4D94;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c4e74
	goto loc_881C4E74;
loc_881C4DC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881C4E2C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c4e74
	goto loc_881C4E74;
loc_881C4E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C4E3C;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881C4E44:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881C4E5C;
	sub_88156500(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c4e44
	if (ctx.cr6.lt) goto loc_881C4E44;
loc_881C4E74:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_881C4E78:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// bne cr6,0x881c4e94
	if (!ctx.cr6.eq) goto loc_881C4E94;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,37
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 37, ctx.xer);
	// blt cr6,0x881c4fb4
	if (ctx.cr6.lt) goto loc_881C4FB4;
	// addi r27,r27,-37
	ctx.r27.s64 = ctx.r27.s64 + -37;
loc_881C4E94:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_881C4E98:
	// rlwinm r24,r11,0,30,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881c5304
	if (ctx.cr6.eq) goto loc_881C5304;
	// cmpwi cr6,r27,35
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 35, ctx.xer);
	// beq cr6,0x881c5140
	if (ctx.cr6.eq) goto loc_881C5140;
	// cmpwi cr6,r27,36
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 36, ctx.xer);
	// beq cr6,0x881c5128
	if (ctx.cr6.eq) goto loc_881C5128;
	// lwz r11,1976(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1976);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,76(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x881aea60
	ctx.lr = 0x881C4EC8;
	sub_881AEA60(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x881c4edc
	if (ctx.cr6.eq) goto loc_881C4EDC;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x881c4ee0
	if (ctx.cr6.eq) goto loc_881C4EE0;
loc_881C4EDC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_881C4EE0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,13752
	ctx.r25.s64 = ctx.r11.s64 + 13752;
	// lwzx r11,r28,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// subf. r30,r10,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881c4fbc
	if (!ctx.cr0.gt) goto loc_881C4FBC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x881c4fbc
	if (ctx.cr6.gt) goto loc_881C4FBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c4fbc
	if (ctx.cr6.eq) goto loc_881C4FBC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c4f74
	if (!ctx.cr6.gt) goto loc_881C4F74;
loc_881C4F1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c4f74
	if (ctx.cr6.eq) goto loc_881C4F74;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c4f64
	if (!ctx.cr0.lt) goto loc_881C4F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4F64;
	sub_88156678(ctx, base);
loc_881C4F64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c4f1c
	if (ctx.cr6.gt) goto loc_881C4F1C;
loc_881C4F74:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c4fac
	if (!ctx.cr0.lt) goto loc_881C4FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C4FAC;
	sub_88156678(ctx, base);
loc_881C4FAC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881c4fc0
	goto loc_881C4FC0;
loc_881C4FB4:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x881c4e98
	goto loc_881C4E98;
loc_881C4FBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C4FC0:
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r8,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwimi r9,r24,0,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// subf r28,r5,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwimi r28,r9,0,16,31
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFF0000);
	// bl 0x881aea88
	ctx.lr = 0x881C5000;
	sub_881AEA88(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x881c5014
	if (ctx.cr6.eq) goto loc_881C5014;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x881c5018
	if (ctx.cr6.eq) goto loc_881C5018;
loc_881C5014:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C5018:
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	// subf. r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881c50e4
	if (!ctx.cr0.gt) goto loc_881C50E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x881c50e4
	if (ctx.cr6.gt) goto loc_881C50E4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c50e4
	if (ctx.cr6.eq) goto loc_881C50E4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c50a4
	if (!ctx.cr6.gt) goto loc_881C50A4;
loc_881C504C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c50a4
	if (ctx.cr6.eq) goto loc_881C50A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c5094
	if (!ctx.cr0.lt) goto loc_881C5094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5094;
	sub_88156678(ctx, base);
loc_881C5094:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c504c
	if (ctx.cr6.gt) goto loc_881C504C;
loc_881C50A4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c50dc
	if (!ctx.cr0.lt) goto loc_881C50DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C50DC;
	sub_88156678(ctx, base);
loc_881C50DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881c50e8
	goto loc_881C50E8;
loc_881C50E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881C50E8:
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwzx r7,r27,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwimi r11,r28,0,28,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r11.u64 & 0xFFF0);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwimi r10,r11,0,28,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r10.u64 & 0xFFF0);
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5128:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5140:
	// lwz r9,1976(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 1976);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,412(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 412);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r28,76(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// subf r30,r28,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r28.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881c516c
	if (!ctx.cr6.gt) goto loc_881C516C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881c5218
	goto loc_881C5218;
loc_881C516C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c517c
	if (!ctx.cr6.eq) goto loc_881C517C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881c5218
	goto loc_881C5218;
loc_881C517C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c51dc
	if (!ctx.cr6.gt) goto loc_881C51DC;
loc_881C5184:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c51dc
	if (ctx.cr6.eq) goto loc_881C51DC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c51cc
	if (!ctx.cr0.lt) goto loc_881C51CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C51CC;
	sub_88156678(ctx, base);
loc_881C51CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5184
	if (ctx.cr6.gt) goto loc_881C5184;
loc_881C51DC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c5214
	if (!ctx.cr0.lt) goto loc_881C5214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5214;
	sub_88156678(ctx, base);
loc_881C5214:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881C5218:
	// lwz r9,416(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 416);
	// rlwimi r24,r11,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r30,r28,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r28.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881c5250
	if (!ctx.cr6.gt) goto loc_881C5250;
loc_881C523C:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r28,r11,4,16,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFF0) | (ctx.r28.u64 & 0xFFFFFFFFFFFF000F);
	// stw r28,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5250:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c523c
	if (ctx.cr6.eq) goto loc_881C523C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c52b8
	if (!ctx.cr6.gt) goto loc_881C52B8;
loc_881C5260:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c52b8
	if (ctx.cr6.eq) goto loc_881C52B8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c52a8
	if (!ctx.cr0.lt) goto loc_881C52A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C52A8;
	sub_88156678(ctx, base);
loc_881C52A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5260
	if (ctx.cr6.gt) goto loc_881C5260;
loc_881C52B8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c52f0
	if (!ctx.cr0.lt) goto loc_881C52F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C52F0;
	sub_88156678(ctx, base);
loc_881C52F0:
	// rlwimi r28,r30,4,16,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFF0) | (ctx.r28.u64 & 0xFFFFFFFFFFFF000F);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r28,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C5304:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D6008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881D6010;
	__savegprlr_18(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// stw r5,48(r1)
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r5.u32);
	// addi r27,r1,32
	ctx.r27.s64 = ctx.r1.s64 + 32;
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// stw r10,32(r1)
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x8)));
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltisb v6,-9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_set1_epi8(char(0xF7)));
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r26,-30717
	ctx.r26.s64 = -2013069312;
	// lvrx128 v61,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r28,r4,r7
	ctx.r28.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lvrx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vor128 v11,v63,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vor128 v12,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v10,v60,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// li r31,-16
	ctx.r31.s64 = -16;
	// lvlx128 v57,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v54,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v5,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r26,-26096
	ctx.r27.s64 = ctx.r26.s64 + -26096;
	// subf r29,r4,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r4.u64;
	// lvrx128 v52,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltb v13,v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_set1_epi8(char(0xC))));
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// vsplth v3,v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lvlx128 v56,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// lvx128 v43,r27,r31
	ea = (ctx.r27.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lvrx128 v55,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-32
	ctx.r28.s64 = -32;
	// lvlx128 v53,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r23,r1,48
	ctx.r23.s64 = ctx.r1.s64 + 48;
	// lvrx128 v51,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// lvrx128 v50,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stvx128 v8,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stvx128 v7,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v63,r27,r28
	ea = (ctx.r27.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v9,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v49,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v48,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v7,v57,v51
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v47,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvrx128 v46,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v53,v50
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// stvx128 v63,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v20,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vmrghb v15,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v48,v46
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vmrglb v14,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v5,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vmrghb v18,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v17,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgtub v31,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvrx128 v45,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v11,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcmpgtub v19,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v30,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrglb v29,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgtub v2,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vmrghb v26,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// vmrglb v25,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// vcmpgtub v10,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r30,r1,368
	ctx.r30.s64 = ctx.r1.s64 + 368;
	// vmrghb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,384
	ctx.r28.s64 = ctx.r1.s64 + 384;
	// vmrghb v21,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,400
	ctx.r26.s64 = ctx.r1.s64 + 400;
	// vcmpgtub v8,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r24,r1,416
	ctx.r24.s64 = ctx.r1.s64 + 416;
	// vmrghb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r22,r1,432
	ctx.r22.s64 = ctx.r1.s64 + 432;
	// stvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// vmrglb v27,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmrghb v24,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vmrglb v23,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// vmrghb v16,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r25,r1,240
	ctx.r25.s64 = ctx.r1.s64 + 240;
	// vor128 v42,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// addi r23,r1,256
	ctx.r23.s64 = ctx.r1.s64 + 256;
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stvx128 v14,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,64
	ctx.r5.s64 = ctx.r1.s64 + 64;
	// vmrglb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stvx128 v11,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v0,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v11,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// vcmpgtub v9,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v17,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// vaddsbs v7,v20,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// stvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// vcmpgtub v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v29,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v20,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v13,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// lvx128 v40,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,112
	ctx.r20.s64 = ctx.r1.s64 + 112;
	// vaddsbs v12,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.s8), simde_mm_load_si128((simde__m128i*)ctx.v19.s8)));
	// stvx128 v40,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,880
	ctx.r18.s64 = ctx.r1.s64 + 880;
	// stvx128 v31,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v31,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// stvx128 v12,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v0,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// vaddsbs v11,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.s8), simde_mm_load_si128((simde__m128i*)ctx.v20.s8)));
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// stvx128 v2,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v17,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddsbs v12,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.s8), simde_mm_load_si128((simde__m128i*)ctx.v31.s8)));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// vaddshs v7,v18,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// vaddshs v20,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// vaddsbs v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v9.s8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// vaddshs v19,v27,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// addi r31,r1,512
	ctx.r31.s64 = ctx.r1.s64 + 512;
	// vaddshs v18,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// addi r30,r1,528
	ctx.r30.s64 = ctx.r1.s64 + 528;
	// vaddsbs v13,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// addi r29,r1,544
	ctx.r29.s64 = ctx.r1.s64 + 544;
	// vaddshs v17,v23,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r28,r1,560
	ctx.r28.s64 = ctx.r1.s64 + 560;
	// vaddsbs v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v8.s8)));
	// vaddsbs v10,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v31.s8)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// vaddshs v31,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// addi r27,r1,720
	ctx.r27.s64 = ctx.r1.s64 + 720;
	// vaddshs v8,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// addi r26,r1,736
	ctx.r26.s64 = ctx.r1.s64 + 736;
	// vaddshs v14,v4,v27
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v15,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// vaddshs v4,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v30,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v20,v24
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// lvx128 v7,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v21,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v29,v19,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v20,v18,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// addi r25,r1,752
	ctx.r25.s64 = ctx.r1.s64 + 752;
	// addi r24,r1,592
	ctx.r24.s64 = ctx.r1.s64 + 592;
	// vaddshs v16,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r23,r1,608
	ctx.r23.s64 = ctx.r1.s64 + 608;
	// stvx128 v38,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,624
	ctx.r22.s64 = ctx.r1.s64 + 624;
	// vaddsbs v24,v11,v15
	simde_mm_store_si128((simde__m128i*)ctx.v24.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v15.s8)));
	// addi r21,r1,768
	ctx.r21.s64 = ctx.r1.s64 + 768;
	// stvx128 v9,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// stvx128 v13,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// stvx128 v12,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// stvx128 v10,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,800
	ctx.r20.s64 = ctx.r1.s64 + 800;
	// vaddshs v19,v17,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// addi r19,r1,672
	ctx.r19.s64 = ctx.r1.s64 + 672;
	// vaddshs v18,v18,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,464
	ctx.r9.s64 = ctx.r1.s64 + 464;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// stvx128 v23,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,704
	ctx.r6.s64 = ctx.r1.s64 + 704;
	// stvx128 v19,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// vaddshs v15,v2,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v17,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v8,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v31,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v16,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v1,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// stvx128 v4,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvx128 v29,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,4
	ctx.r10.s64 = 4;
	// stvx128 v27,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881D6454:
	// addi r8,r1,48
	ctx.r8.s64 = ctx.r1.s64 + 48;
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// vperm v13,v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// lvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v7,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vperm v5,v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v11,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vaddsbs v2,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vperm128 v4,v11,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v13,v10,v62,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v10,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v29,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,64
	ctx.r5.s64 = ctx.r1.s64 + 64;
	// vaddshs v27,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vaddsbs v12,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// vaddshs v26,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v25,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v24,v11,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v23,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequb v22,v31,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v21,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vcmpequb v20,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v19,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v18,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor v12,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// vaddshs v16,v25,v17
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vmrghb v15,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v14,v16,v29
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vandc128 v37,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v12,v14,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vcmpgtsh v11,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtsh v10,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vandc128 v36,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v35,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vand128 v34,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor128 v33,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vandc128 v32,v33,v10
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v63,v32,v34
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vand128 v62,v63,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vor128 v61,v62,v37
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vpkshus128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// stvewx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bdnz 0x881d6454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D6454;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC4B4) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r21,84(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x881ec4f8
	ctx.lr = 0x881EC4CC;
	sub_881EC4F8(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC4F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ec524
	if (ctx.cr6.eq) goto loc_881EC524;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x88243660
	ctx.lr = 0x881EC524;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881EC524:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EC710) {
	REX_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EC718) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1100);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ec758
	if (ctx.cr6.eq) goto loc_881EC758;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881EC754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x881ec75c
	goto loc_881EC75C;
loc_881EC758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881EC75C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881ec790
	if (!ctx.cr6.eq) goto loc_881EC790;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r10,24028(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881ec790
	if (ctx.cr6.eq) goto loc_881EC790;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881EC784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x881ec794
	if (ctx.cr6.eq) goto loc_881EC794;
loc_881EC790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881EC794:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ECE40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88243860
	ctx.lr = 0x881ECE54;
	__imp__NtSetEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ece64
	if (ctx.cr0.lt) goto loc_881ECE64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881ece6c
	goto loc_881ECE6C;
loc_881ECE64:
	// bl 0x881ed488
	ctx.lr = 0x881ECE68;
	sub_881ED488(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_881ECE6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED470) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED4C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ed4d8
	if (!ctx.cr6.eq) goto loc_881ED4D8;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_881ED4D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881ED568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881ED570;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x881ed628
	ctx.lr = 0x881ED584;
	sub_881ED628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
loc_881ED58C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243840
	ctx.lr = 0x881ED5A0;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ed5bc
	if (ctx.cr0.lt) goto loc_881ED5BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881ed5c4
	if (ctx.cr6.eq) goto loc_881ED5C4;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x881ed58c
	if (ctx.cr6.eq) goto loc_881ED58C;
	// b 0x881ed5c4
	goto loc_881ED5C4;
loc_881ED5BC:
	// bl 0x881ed488
	ctx.lr = 0x881ED5C0;
	sub_881ED488(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_881ED5C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EE6F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	ctx.r12.s64 = 128;
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (ctx.cr0.lt) return;
loc_881EE714:
	// cmplwi cr7,r5,256
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// cmplwi r5,1024
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr7,0x881ee72c
	if (ctx.cr7.lt) goto loc_881EE72C;
	// ble 0x881ee728
	if (!ctx.cr0.gt) goto loc_881EE728;
	// dcbt r10,r4
loc_881EE728:
	// dcbzl r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_881EE72C:
	// lvx v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// stvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge 0x881ee714
	if (!ctx.cr0.lt) goto loc_881EE714;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_26) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_76) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_85) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_15) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_86) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_93) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EF6E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,15456
	ctx.r11.s64 = ctx.r11.s64 + 15456;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881ef718
	if (ctx.cr6.lt) goto loc_881EF718;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881ef718
	if (ctx.cr6.gt) goto loc_881EF718;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x88051f98
	sub_88051F98(ctx, base);
	return;
loc_881EF718:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x88243660
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F0AA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881F0AA8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x881f0ae4
	if (!ctx.cr6.eq) goto loc_881F0AE4;
	// bl 0x88052a00
	ctx.lr = 0x881F0AC4;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F0AD0;
	sub_880529C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f0ba0
	goto loc_881F0BA0;
loc_881F0AE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f0afc
	if (ctx.cr6.lt) goto loc_881F0AFC;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f0b20
	if (ctx.cr6.lt) goto loc_881F0B20;
loc_881F0AFC:
	// bl 0x88052a00
	ctx.lr = 0x881F0B00;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F0B0C;
	sub_880529C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F0B18;
	sub_880523E8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f0ba0
	goto loc_881F0BA0;
loc_881F0B20:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,24064
	ctx.r28.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f0afc
	if (ctx.cr0.eq) goto loc_881F0AFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1b20
	ctx.lr = 0x881F0B54;
	sub_881F1B20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f0b7c
	if (ctx.cr0.eq) goto loc_881F0B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f09b8
	ctx.lr = 0x881F0B74;
	sub_881F09B8(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x881f0b90
	goto loc_881F0B90;
loc_881F0B7C:
	// bl 0x880529c8
	ctx.lr = 0x881F0B80;
	sub_880529C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_881F0B90:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x881f0bc8
	ctx.lr = 0x881F0B9C;
	sub_881F0BC8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F0BA0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F9540) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881F9548;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// addi r26,r5,20
	ctx.r26.s64 = ctx.r5.s64 + 20;
	// lhz r10,50(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// rlwinm r25,r10,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r8,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// bne cr6,0x881f95c0
	if (!ctx.cr6.eq) goto loc_881F95C0;
	// lwz r11,22264(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 22264);
	// lwz r24,272(r28)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r28.u32 + 272);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,22276(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 22276);
	// stw r10,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r9,22268(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 22268);
	// stw r9,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lwz r8,22280(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 22280);
	// stw r8,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r8.u32);
	// b 0x881f9604
	goto loc_881F9604;
loc_881F95C0:
	// addi r11,r22,92
	ctx.r11.s64 = ctx.r22.s64 + 92;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r25,r7
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r4.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lwz r11,272(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 272);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_881F9604:
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x881fb850
	if (!ctx.cr6.lt) goto loc_881FB850;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// ori r19,r10,32768
	ctx.r19.u64 = ctx.r10.u64 | 32768;
	// addi r15,r11,26488
	ctx.r15.s64 = ctx.r11.s64 + 26488;
loc_881F9628:
	// lwz r11,21940(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21940);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f9848
	if (ctx.cr6.eq) goto loc_881F9848;
	// lwz r11,21968(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21968);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f9848
	if (ctx.cr6.eq) goto loc_881F9848;
	// lwz r11,21976(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21976);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,21976(r28)
	REX_STORE_U32(ctx.r28.u32 + 21976, ctx.r9.u32);
	// ld r8,104(r23)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r23.u32 + 104);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,112(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 112);
	// stw r6,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,116(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 116);
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,120(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 120);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,124(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 124);
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,128(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 128);
	// stw r7,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,132(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// stw r5,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r3,136(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 136);
	// stw r3,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r3.u32);
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,140(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 140);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,144(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 144);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,148(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 148);
	// stw r6,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,152(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 152);
	// stw r4,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r4.u32);
	// lwz r31,84(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881f978c
	if (ctx.cr6.eq) goto loc_881F978C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f9768
	if (!ctx.cr6.lt) goto loc_881F9768;
loc_881F9710:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f9768
	if (ctx.cr6.eq) goto loc_881F9768;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f9758
	if (!ctx.cr0.lt) goto loc_881F9758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9758;
	sub_88156678(ctx, base);
loc_881F9758:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f9710
	if (ctx.cr6.gt) goto loc_881F9710;
loc_881F9768:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881f978c
	if (!ctx.cr0.lt) goto loc_881F978C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F978C;
	sub_88156678(ctx, base);
loc_881F978C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x881F979C;
	sub_88156500(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881adb80
	ctx.lr = 0x881F97A8;
	sub_881ADB80(ctx, base);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,104(r23)
	REX_STORE_U64(ctx.r23.u32 + 104, ctx.r9.u64);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,112(r23)
	REX_STORE_U32(ctx.r23.u32 + 112, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r5,116(r23)
	REX_STORE_U32(ctx.r23.u32 + 116, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,120(r23)
	REX_STORE_U32(ctx.r23.u32 + 120, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,124(r23)
	REX_STORE_U32(ctx.r23.u32 + 124, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r7,128(r23)
	REX_STORE_U32(ctx.r23.u32 + 128, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,28(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// stw r5,132(r23)
	REX_STORE_U32(ctx.r23.u32 + 132, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,136(r23)
	REX_STORE_U32(ctx.r23.u32 + 136, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,140(r23)
	REX_STORE_U32(ctx.r23.u32 + 140, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// stw r7,144(r23)
	REX_STORE_U32(ctx.r23.u32 + 144, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,44(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// stw r5,148(r23)
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,152(r23)
	REX_STORE_U32(ctx.r23.u32 + 152, ctx.r11.u32);
	// stw r18,1948(r28)
	REX_STORE_U32(ctx.r28.u32 + 1948, ctx.r18.u32);
	// stb r18,1251(r23)
	REX_STORE_U8(ctx.r23.u32 + 1251, ctx.r18.u8);
	// bne cr6,0x881fb918
	if (!ctx.cr6.eq) goto loc_881FB918;
loc_881F9848:
	// lwz r11,3988(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f9994
	if (ctx.cr6.eq) goto loc_881F9994;
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881f9994
	if (ctx.cr6.eq) goto loc_881F9994;
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r10,104(r23)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r23.u32 + 104);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,112(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 112);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,116(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 116);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,120(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 120);
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r9,124(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 124);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,128(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 128);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,132(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// lwz r5,84(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r6,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,136(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 136);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,140(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 140);
	// stw r8,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,144(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 144);
	// stw r6,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,148(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 148);
	// stw r11,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lwz r10,152(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 152);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r10,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r10.u32);
	// bl 0x881adf70
	ctx.lr = 0x881F98FC;
	sub_881ADF70(ctx, base);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,104(r23)
	REX_STORE_U64(ctx.r23.u32 + 104, ctx.r7.u64);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,112(r23)
	REX_STORE_U32(ctx.r23.u32 + 112, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,116(r23)
	REX_STORE_U32(ctx.r23.u32 + 116, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,120(r23)
	REX_STORE_U32(ctx.r23.u32 + 120, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,124(r23)
	REX_STORE_U32(ctx.r23.u32 + 124, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,128(r23)
	REX_STORE_U32(ctx.r23.u32 + 128, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,132(r23)
	REX_STORE_U32(ctx.r23.u32 + 132, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,136(r23)
	REX_STORE_U32(ctx.r23.u32 + 136, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// stw r7,140(r23)
	REX_STORE_U32(ctx.r23.u32 + 140, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// stw r5,144(r23)
	REX_STORE_U32(ctx.r23.u32 + 144, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,148(r23)
	REX_STORE_U32(ctx.r23.u32 + 148, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,152(r23)
	REX_STORE_U32(ctx.r23.u32 + 152, ctx.r9.u32);
	// bne cr6,0x881fb918
	if (!ctx.cr6.eq) goto loc_881FB918;
loc_881F9994:
	// lwz r10,1304(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 1304);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r27
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// addi r18,r11,-1
	ctx.r18.s64 = ctx.r11.s64 + -1;
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// beq cr6,0x881fb840
	if (ctx.cr6.eq) goto loc_881FB840;
	// b 0x881f99d0
	goto loc_881F99D0;
loc_881F99CC:
	// lwz r18,88(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881F99D0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// dcbt r10,r9
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r8,r9
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r6,r7,0,15,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r6,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r6.u32);
	// lwz r5,1380(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 1380);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881f9ac0
	if (!ctx.cr6.eq) goto loc_881F9AC0;
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f9a74
	if (!ctx.cr6.lt) goto loc_881F9A74;
loc_881F9A1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f9a74
	if (ctx.cr6.eq) goto loc_881F9A74;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f9a64
	if (!ctx.cr0.lt) goto loc_881F9A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9A64;
	sub_88156678(ctx, base);
loc_881F9A64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f9a1c
	if (ctx.cr6.gt) goto loc_881F9A1C;
loc_881F9A74:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f9aac
	if (!ctx.cr0.lt) goto loc_881F9AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9AAC;
	sub_88156678(ctx, base);
loc_881F9AAC:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r9,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_881F9AC0:
	// lwz r11,1232(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 1232);
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f9ae0
	if (!ctx.cr6.eq) goto loc_881F9AE0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881f9c18
	goto loc_881F9C18;
loc_881F9AE0:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f9bcc
	if (ctx.cr6.lt) goto loc_881F9BCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881f9bc4
	if (!ctx.cr6.lt) goto loc_881F9BC4;
loc_881F9B2C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881f9b58
	if (ctx.cr6.lt) goto loc_881F9B58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881F9B48;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881f9b2c
	if (ctx.cr6.eq) goto loc_881F9B2C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881f9c04
	goto loc_881F9C04;
loc_881F9B58:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_881F9BC4:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881f9c04
	goto loc_881F9C04;
loc_881F9BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881F9BD4;
	sub_88156500(ctx, base);
loc_881F9BD4:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881F9BEC;
	sub_88156500(ctx, base);
	// add r10,r30,r19
	ctx.r10.u64 = ctx.r30.u64 + ctx.r19.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f9bd4
	if (ctx.cr6.lt) goto loc_881F9BD4;
loc_881F9C04:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881fb920
	if (ctx.cr6.lt) goto loc_881FB920;
	// cmpwi cr6,r30,63
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 63, ctx.xer);
	// bgt cr6,0x881fb920
	if (ctx.cr6.gt) goto loc_881FB920;
loc_881F9C18:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881fb920
	if (!ctx.cr6.eq) goto loc_881FB920;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,6(r24)
	REX_STORE_U16(ctx.r24.u32 + 6, ctx.r11.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lhz r5,50(r23)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r23.u32 + 50);
	// lwz r3,1264(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 1264);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 & ctx.r18.u64;
	// lbzx r7,r3,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r9.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// and r9,r6,r18
	ctx.r9.u64 = ctx.r6.u64 & ctx.r18.u64;
	// beq cr6,0x881f9c78
	if (ctx.cr6.eq) goto loc_881F9C78;
	// lbz r11,-19(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19);
	// lbz r10,-19(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + -19);
	// and r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 & ctx.r18.u64;
loc_881F9C78:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r6,1260(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1260);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r11,r10,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// rlwimi r5,r11,3,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r8,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// rlwinm r9,r5,1,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x70;
	// clrlwi r3,r7,28
	ctx.r3.u64 = ctx.r7.u32 & 0xF;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// lbzx r11,r6,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// beq cr6,0x881f9cb8
	if (ctx.cr6.eq) goto loc_881F9CB8;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_881F9CB8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbz r10,1254(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 1254);
	// rlwimi r11,r7,0,24,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x881f9d08
	if (!ctx.cr6.eq) goto loc_881F9D08;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f9cf8
	if (!ctx.cr0.lt) goto loc_881F9CF8;
	// bl 0x88156678
	ctx.lr = 0x881F9CF8;
	sub_88156678(ctx, base);
loc_881F9CF8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_881F9D08:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// stb r30,5(r24)
	REX_STORE_U8(ctx.r24.u32 + 5, ctx.r30.u8);
	// rlwinm r9,r11,0,10,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r9,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// lbz r8,28(r23)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f9d98
	if (ctx.cr6.eq) goto loc_881F9D98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881f9d98
	if (ctx.cr6.eq) goto loc_881F9D98;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f9d54
	if (!ctx.cr0.lt) goto loc_881F9D54;
	// bl 0x88156678
	ctx.lr = 0x881F9D54;
	sub_88156678(ctx, base);
loc_881F9D54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881f9d8c
	if (ctx.cr6.eq) goto loc_881F9D8C;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f9d88
	if (!ctx.cr0.lt) goto loc_881F9D88;
	// bl 0x88156678
	ctx.lr = 0x881F9D88;
	sub_88156678(ctx, base);
loc_881F9D88:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_881F9D8C:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_881F9D98:
	// lbz r11,33(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 33);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f9de8
	if (ctx.cr6.eq) goto loc_881F9DE8;
	// lbz r11,1255(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1255);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f9de8
	if (!ctx.cr6.eq) goto loc_881F9DE8;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881f9ddc
	if (!ctx.cr0.lt) goto loc_881F9DDC;
	// bl 0x88156678
	ctx.lr = 0x881F9DDC;
	sub_88156678(ctx, base);
loc_881F9DDC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwimi r11,r31,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_881F9DE8:
	// lbz r11,24(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 24);
	// stb r11,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r11.u8);
	// lbz r10,27(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 27);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881fa0bc
	if (ctx.cr6.eq) goto loc_881FA0BC;
	// lbz r11,1245(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1245);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f9e4c
	if (ctx.cr6.eq) goto loc_881F9E4C;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f9e30
	if (ctx.cr6.eq) goto loc_881F9E30;
	// lbz r11,1246(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r10.u8);
	// b 0x881fa0a8
	goto loc_881FA0A8;
loc_881F9E30:
	// lbz r10,1244(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 1244);
	// lbz r11,1249(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r9.u8);
	// b 0x881fa0a8
	goto loc_881FA0A8;
loc_881F9E4C:
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,1250(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1250);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881f9f3c
	if (ctx.cr6.eq) goto loc_881F9F3C;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f9ecc
	if (!ctx.cr6.lt) goto loc_881F9ECC;
loc_881F9E74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f9ecc
	if (ctx.cr6.eq) goto loc_881F9ECC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f9ebc
	if (!ctx.cr0.lt) goto loc_881F9EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9EBC;
	sub_88156678(ctx, base);
loc_881F9EBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f9e74
	if (ctx.cr6.gt) goto loc_881F9E74;
loc_881F9ECC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f9f04
	if (!ctx.cr0.lt) goto loc_881F9F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9F04;
	sub_88156678(ctx, base);
loc_881F9F04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f9f20
	if (ctx.cr6.eq) goto loc_881F9F20;
	// lbz r11,1246(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r11.u8);
	// b 0x881fa0a8
	goto loc_881FA0A8;
loc_881F9F20:
	// lbz r10,1244(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 1244);
	// lbz r11,1249(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r11.u8);
	// b 0x881fa0a8
	goto loc_881FA0A8;
loc_881F9F3C:
	// li r30,3
	ctx.r30.s64 = 3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881f9fa0
	if (!ctx.cr6.lt) goto loc_881F9FA0;
loc_881F9F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f9fa0
	if (ctx.cr6.eq) goto loc_881F9FA0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f9f90
	if (!ctx.cr0.lt) goto loc_881F9F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9F90;
	sub_88156678(ctx, base);
loc_881F9F90:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f9f48
	if (ctx.cr6.gt) goto loc_881F9F48;
loc_881F9FA0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f9fd8
	if (!ctx.cr0.lt) goto loc_881F9FD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F9FD8;
	sub_88156678(ctx, base);
loc_881F9FD8:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x881fa094
	if (!ctx.cr6.eq) goto loc_881FA094;
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x881fa054
	if (!ctx.cr6.lt) goto loc_881FA054;
loc_881F9FFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fa054
	if (ctx.cr6.eq) goto loc_881FA054;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881fa044
	if (!ctx.cr0.lt) goto loc_881FA044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FA044;
	sub_88156678(ctx, base);
loc_881FA044:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f9ffc
	if (ctx.cr6.gt) goto loc_881F9FFC;
loc_881FA054:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881fa08c
	if (!ctx.cr0.lt) goto loc_881FA08C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FA08C;
	sub_88156678(ctx, base);
loc_881FA08C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881fa09c
	goto loc_881FA09C;
loc_881FA094:
	// lbz r11,1244(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_881FA09C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r11.u8);
loc_881FA0A8:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881fb920
	if (ctx.cr6.lt) goto loc_881FB920;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x881fb920
	if (ctx.cr6.gt) goto loc_881FB920;
loc_881FA0BC:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// li r14,0
	ctx.r14.s64 = 0;
	// lbz r9,5(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 5);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,388(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_881FA0E8:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r10,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r14.s32 >> 1;
	// lhz r11,50(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 50);
	// li r20,119
	ctx.r20.s64 = 119;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,432(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 432);
	// rotlwi r4,r11,5
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,1224(r23)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + 1224);
	// lwz r19,16(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r9,r14,31
	ctx.r9.u64 = ctx.r14.u32 & 0x1;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add. r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrlwi r16,r30,31
	ctx.r16.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r17,r3,29,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x3;
	// add r18,r9,r6
	ctx.r18.u64 = ctx.r9.u64 + ctx.r6.u64;
	// neg r9,r31
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r28,r18,-16
	ctx.r28.s64 = ctx.r18.s64 + -16;
	// subf r29,r4,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881fa374
	if (ctx.cr0.eq) goto loc_881FA374;
	// beq cr6,0x881fa368
	if (ctx.cr6.eq) goto loc_881FA368;
	// lhz r10,-32(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + -32);
	// lhz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r4,27(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 27);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881fa340
	if (ctx.cr6.eq) goto loc_881FA340;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881fa290
	if (ctx.cr6.eq) goto loc_881FA290;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881fa290
	if (ctx.cr6.eq) goto loc_881FA290;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881fa290
	if (ctx.cr6.eq) goto loc_881FA290;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x881fa228
	if (!ctx.cr6.eq) goto loc_881FA228;
	// lbz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,388(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rotlwi r3,r10,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r3,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r3.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r4,r3,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r4,r15
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mullw r4,r7,r9
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r7,r6
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r4,r8
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// srawi r9,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 18;
	// srawi r6,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 18;
	// b 0x881fa340
	goto loc_881FA340;
loc_881FA228:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x881fa340
	if (!ctx.cr6.eq) goto loc_881FA340;
	// lbz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// lbz r8,-20(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,388(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r10,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r7,r15
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r15.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r5,r8,r21
	ctx.r5.u64 = ctx.r8.u64 + ctx.r21.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// b 0x881fa340
	goto loc_881FA340;
loc_881FA290:
	// lbz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r11,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lbz r7,-20(r24)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// rotlwi r31,r8,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r10,388(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r4,r24
	ctx.r3.u64 = ctx.r24.u64 - ctx.r4.u64;
	// rotlwi r4,r7,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r8,-20(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rotlwi r4,r8,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r30,16(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r3,r30,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFC;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mullw r4,r10,r9
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r3,r15
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r15.u32);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r9,r7,r5
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r4,r3
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r9,r3
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// add r5,r8,r21
	ctx.r5.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r4,r7,r21
	ctx.r4.u64 = ctx.r7.u64 + ctx.r21.u64;
	// add r3,r6,r21
	ctx.r3.u64 = ctx.r6.u64 + ctx.r21.u64;
	// srawi r9,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 18;
	// srawi r6,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 18;
	// srawi r5,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 18;
loc_881FA340:
	// subf r10,r5,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x881fa378
	if (ctx.cr6.lt) goto loc_881FA378;
loc_881FA368:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x881fa380
	goto loc_881FA380;
loc_881FA374:
	// beq cr6,0x881fa6c0
	if (ctx.cr6.eq) goto loc_881FA6C0;
loc_881FA378:
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_881FA380:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881fa6c0
	if (ctx.cr6.eq) goto loc_881FA6C0;
	// lbz r10,27(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 27);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881fa6c0
	if (ctx.cr6.eq) goto loc_881FA6C0;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881fa518
	if (!ctx.cr6.eq) goto loc_881FA518;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881fa3dc
	if (ctx.cr6.eq) goto loc_881FA3DC;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x881fa3dc
	if (ctx.cr6.eq) goto loc_881FA3DC;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881fa3dc
	if (ctx.cr6.eq) goto loc_881FA3DC;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881fa3dc
	if (ctx.cr6.eq) goto loc_881FA3DC;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,126
	ctx.r10.s64 = ctx.r1.s64 + 126;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881FA3CC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881fa3cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FA3CC;
	// b 0x881fa6bc
	goto loc_881FA6BC;
loc_881FA3DC:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r9,-20(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r8,388(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r31,r1,130
	ctx.r31.s64 = ctx.r1.s64 + 130;
	// rlwinm r5,r5,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// addi r29,r1,132
	ctx.r29.s64 = ctx.r1.s64 + 132;
	// lwzx r9,r7,r15
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r15.u32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwzx r8,r5,r15
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r15.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r5,r7,r21
	ctx.r5.u64 = ctx.r7.u64 + ctx.r21.u64;
	// addi r8,r4,-10
	ctx.r8.s64 = ctx.r4.s64 + -10;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r30.u64;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// sth r4,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r4.u16);
	// subf r6,r30,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r5,r30,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r30.u64;
loc_881FA470:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r31,-2(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r29,2(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r10
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// mullw r28,r9,r28
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r4.u16);
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r30,r7,r11
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r29,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r29.u16);
	// sthx r4,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r31,10(r8)
	ea = 10 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881fa470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FA470;
	// b 0x881fa6b4
	goto loc_881FA6B4;
loc_881FA518:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881fa558
	if (ctx.cr6.eq) goto loc_881FA558;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x881fa558
	if (ctx.cr6.eq) goto loc_881FA558;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881fa558
	if (ctx.cr6.eq) goto loc_881FA558;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881fa558
	if (ctx.cr6.eq) goto loc_881FA558;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,126
	ctx.r10.s64 = ctx.r1.s64 + 126;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881FA548:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881fa548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FA548;
	// b 0x881fa6bc
	goto loc_881FA6BC;
loc_881FA558:
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r8,50(r23)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r23.u32 + 50);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,388(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// lhz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r4,r7,r24
	ctx.r4.u64 = ctx.r24.u64 - ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r7,r4,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r4.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r31,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r29,r9,2,24,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFC;
	// lbz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwzx r8,r4,r15
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// addi r10,r1,122
	ctx.r10.s64 = ctx.r1.s64 + 122;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r1,130
	ctx.r28.s64 = ctx.r1.s64 + 130;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwzx r11,r29,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r15.u32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r7,r6,r21
	ctx.r7.u64 = ctx.r6.u64 + ctx.r21.u64;
	// srawi r6,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 18;
	// subf r7,r30,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r30.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// sth r5,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r5.u16);
	// subf r6,r30,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
loc_881FA618:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// mullw r31,r8,r9
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r30,-2(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,2(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// mullw r30,r30,r31
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r31
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// mullw r31,r26,r31
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mullw r29,r8,r29
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// sth r4,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// sthx r28,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u16);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// sthx r31,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u16);
	// sthx r4,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r30,10(r10)
	ea = 10 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881fa618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FA618;
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881FA6B4:
	// lhz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// sth r11,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
loc_881FA6BC:
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
loc_881FA6C0:
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
	// stw r29,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r29.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r0,r29
	// dcbt r0,r30
	// dcbt r0,r18
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x881fa704
	if (!ctx.cr6.eq) goto loc_881FA704;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881fa830
	goto loc_881FA830;
loc_881FA704:
	// lbz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r27,0(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r27.u32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881fa7f0
	if (ctx.cr6.lt) goto loc_881FA7F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881fa7e8
	if (!ctx.cr6.lt) goto loc_881FA7E8;
loc_881FA750:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881fa77c
	if (ctx.cr6.lt) goto loc_881FA77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881FA76C;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881fa750
	if (ctx.cr6.eq) goto loc_881FA750;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881fa830
	goto loc_881FA830;
loc_881FA77C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_881FA7E8:
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881fa830
	goto loc_881FA830;
loc_881FA7F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881FA7F8;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
loc_881FA800:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88156500
	ctx.lr = 0x881FA818;
	sub_88156500(ctx, base);
	// add r10,r28,r26
	ctx.r10.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881fa800
	if (ctx.cr6.lt) goto loc_881FA800;
loc_881FA830:
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x881fa958
	if (ctx.cr6.eq) goto loc_881FA958;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881faa7c
	if (ctx.cr6.eq) goto loc_881FAA7C;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bne cr6,0x881fa890
	if (!ctx.cr6.eq) goto loc_881FA890;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fa878
	if (!ctx.cr0.lt) goto loc_881FA878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FA878;
	sub_88156678(ctx, base);
loc_881FA878:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881faa40
	goto loc_881FAA40;
loc_881FA890:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881faa40
	if (!ctx.cr6.eq) goto loc_881FAA40;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881fa908
	if (!ctx.cr6.lt) goto loc_881FA908;
loc_881FA8B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fa908
	if (ctx.cr6.eq) goto loc_881FA908;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881fa8f8
	if (!ctx.cr0.lt) goto loc_881FA8F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FA8F8;
	sub_88156678(ctx, base);
loc_881FA8F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fa8b0
	if (ctx.cr6.gt) goto loc_881FA8B0;
loc_881FA908:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881fa940
	if (!ctx.cr0.lt) goto loc_881FA940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FA940;
	sub_88156678(ctx, base);
loc_881FA940:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881faa40
	goto loc_881FAA40;
loc_881FA958:
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bgt cr6,0x881fa96c
	if (ctx.cr6.gt) goto loc_881FA96C;
	// srawi r11,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x881fa970
	goto loc_881FA970;
loc_881FA96C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881FA970:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881fa990
	if (!ctx.cr6.gt) goto loc_881FA990;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881faa3c
	goto loc_881FAA3C;
loc_881FA990:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x881fa9a0
	if (!ctx.cr6.eq) goto loc_881FA9A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881faa3c
	goto loc_881FAA3C;
loc_881FA9A0:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881faa00
	if (!ctx.cr6.gt) goto loc_881FAA00;
loc_881FA9A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881faa00
	if (ctx.cr6.eq) goto loc_881FAA00;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881fa9f0
	if (!ctx.cr0.lt) goto loc_881FA9F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FA9F0;
	sub_88156678(ctx, base);
loc_881FA9F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fa9a8
	if (ctx.cr6.gt) goto loc_881FA9A8;
loc_881FAA00:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881faa38
	if (!ctx.cr0.lt) goto loc_881FAA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FAA38;
	sub_88156678(ctx, base);
loc_881FAA38:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881FAA3C:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_881FAA40:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// rldicl r27,r10,1,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881faa68
	if (!ctx.cr0.lt) goto loc_881FAA68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FAA68;
	sub_88156678(ctx, base);
loc_881FAA68:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
loc_881FAA7C:
	// sth r25,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881fb920
	if (!ctx.cr6.eq) goto loc_881FB920;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x881faaa4
	if (!ctx.cr6.eq) goto loc_881FAAA4;
	// lwz r6,1268(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1268);
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x881faad4
	goto loc_881FAAD4;
loc_881FAAA4:
	// addi r11,r22,317
	ctx.r11.s64 = ctx.r22.s64 + 317;
	// lbz r10,1252(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 1252);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r6,r9,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// beq cr6,0x881faad4
	if (ctx.cr6.eq) goto loc_881FAAD4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881faad4
	if (ctx.cr6.eq) goto loc_881FAAD4;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// li r22,8
	ctx.r22.s64 = 8;
	// bne cr6,0x881faad4
	if (!ctx.cr6.eq) goto loc_881FAAD4;
	// li r22,1
	ctx.r22.s64 = 1;
loc_881FAAD4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x881faaf4
	if (ctx.cr6.eq) goto loc_881FAAF4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,416(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 416);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x882153a8
	ctx.lr = 0x881FAAEC;
	sub_882153A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881fb920
	if (ctx.cr6.lt) goto loc_881FB920;
loc_881FAAF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881fabac
	if (ctx.cr6.eq) goto loc_881FABAC;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x881fab9c
	if (ctx.cr6.eq) goto loc_881FAB9C;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// beq cr6,0x881fab20
	if (ctx.cr6.eq) goto loc_881FAB20;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// b 0x881fabac
	goto loc_881FABAC;
loc_881FAB20:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// lhz r7,32(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,16(r29)
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// lhz r8,48(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// lhz r4,64(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// lhz r6,80(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// lhz r5,96(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// lhz r31,112(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r11,32(r29)
	REX_STORE_U16(ctx.r29.u32 + 32, ctx.r11.u16);
	// lhz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sth r8,48(r29)
	REX_STORE_U16(ctx.r29.u32 + 48, ctx.r8.u16);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r10,64(r29)
	REX_STORE_U16(ctx.r29.u32 + 64, ctx.r10.u16);
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r7,80(r29)
	REX_STORE_U16(ctx.r29.u32 + 80, ctx.r7.u16);
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 12);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r11,96(r29)
	REX_STORE_U16(ctx.r29.u32 + 96, ctx.r11.u16);
	// lhz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r8,112(r29)
	REX_STORE_U16(ctx.r29.u32 + 112, ctx.r8.u16);
	// b 0x881fabac
	goto loc_881FABAC;
loc_881FAB9C:
	// lvx128 v0,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881FABAC:
	// lbz r11,1252(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fac08
	if (ctx.cr6.eq) goto loc_881FAC08;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r11,0(r18)
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r11.u16);
	// lhz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// sth r9,2(r18)
	REX_STORE_U16(ctx.r18.u32 + 2, ctx.r9.u16);
	// lhz r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r8,4(r18)
	REX_STORE_U16(ctx.r18.u32 + 4, ctx.r8.u16);
	// lhz r7,48(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r7,6(r18)
	REX_STORE_U16(ctx.r18.u32 + 6, ctx.r7.u16);
	// lhz r6,64(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// sth r6,8(r18)
	REX_STORE_U16(ctx.r18.u32 + 8, ctx.r6.u16);
	// lhz r5,80(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// sth r5,10(r18)
	REX_STORE_U16(ctx.r18.u32 + 10, ctx.r5.u16);
	// lhz r4,96(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r4,12(r18)
	REX_STORE_U16(ctx.r18.u32 + 12, ctx.r4.u16);
	// lhz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// sth r3,14(r18)
	REX_STORE_U16(ctx.r18.u32 + 14, ctx.r3.u16);
	// lvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r18,r10
	ea = (ctx.r18.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x881fac50
	goto loc_881FAC50;
loc_881FAC08:
	// lvx128 v62,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,16(r18)
	REX_STORE_U16(ctx.r18.u32 + 16, ctx.r11.u16);
	// lhz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// sth r10,18(r18)
	REX_STORE_U16(ctx.r18.u32 + 18, ctx.r10.u16);
	// lhz r9,32(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r9,20(r18)
	REX_STORE_U16(ctx.r18.u32 + 20, ctx.r9.u16);
	// lhz r8,48(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r8,22(r18)
	REX_STORE_U16(ctx.r18.u32 + 22, ctx.r8.u16);
	// lhz r7,64(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// sth r7,24(r18)
	REX_STORE_U16(ctx.r18.u32 + 24, ctx.r7.u16);
	// lhz r6,80(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// sth r6,26(r18)
	REX_STORE_U16(ctx.r18.u32 + 26, ctx.r6.u16);
	// lhz r5,96(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r5,28(r18)
	REX_STORE_U16(ctx.r18.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// sth r4,30(r18)
	REX_STORE_U16(ctx.r18.u32 + 30, ctx.r4.u16);
loc_881FAC50:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r14,r24
	ctx.r10.u64 = ctx.r14.u64 + ctx.r24.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// stb r8,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r8.u8);
	// blt cr6,0x881fa0e8
	if (ctx.cr6.lt) goto loc_881FA0E8;
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 6, ctx.xer);
	// bge cr6,0x881fb800
	if (!ctx.cr6.lt) goto loc_881FB800;
loc_881FAC80:
	// lhz r11,50(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 50);
	// addi r10,r14,105
	ctx.r10.s64 = ctx.r14.s64 + 105;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r20,119
	ctx.r20.s64 = 119;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,1228(r23)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + 1228);
	// lwzx r9,r7,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwz r19,16(r6)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r16,r4,31
	ctx.r16.u64 = ctx.r4.u32 & 0x1;
	// add r18,r9,r10
	ctx.r18.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r17,r5,29,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x3;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r28,r18,-16
	ctx.r28.s64 = ctx.r18.s64 + -16;
	// subf r29,r7,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// beq cr6,0x881faef4
	if (ctx.cr6.eq) goto loc_881FAEF4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881faee8
	if (ctx.cr6.eq) goto loc_881FAEE8;
	// lhz r10,-32(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + -32);
	// lhz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r4,27(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 27);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881faec0
	if (ctx.cr6.eq) goto loc_881FAEC0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881fae14
	if (ctx.cr6.eq) goto loc_881FAE14;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881fae14
	if (ctx.cr6.eq) goto loc_881FAE14;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881fae14
	if (ctx.cr6.eq) goto loc_881FAE14;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x881fadac
	if (!ctx.cr6.eq) goto loc_881FADAC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// lwz r8,388(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r7,r3,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r3,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r3,r7,r15
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r15.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r9,r3
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r8,r3
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r4,r7,r21
	ctx.r4.u64 = ctx.r7.u64 + ctx.r21.u64;
	// add r3,r6,r21
	ctx.r3.u64 = ctx.r6.u64 + ctx.r21.u64;
	// srawi r9,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 18;
	// srawi r6,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 18;
	// b 0x881faec0
	goto loc_881FAEC0;
loc_881FADAC:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x881faec0
	if (!ctx.cr6.eq) goto loc_881FAEC0;
	// lbz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// lbz r8,-20(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,388(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r10,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r7,r15
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r15.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r5,r8,r21
	ctx.r5.u64 = ctx.r8.u64 + ctx.r21.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// b 0x881faec0
	goto loc_881FAEC0;
loc_881FAE14:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,4(r24)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// lbz r8,-20(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,388(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rotlwi r4,r7,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r3,r3,r24
	ctx.r3.u64 = ctx.r24.u64 - ctx.r3.u64;
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r30,r4,r10
	ctx.r30.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lbz r7,-20(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rotlwi r31,r7,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r8,r31,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwzx r9,r8,r15
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r15.u32);
	// mullw r8,r4,r6
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r3,r5
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r7,r9
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r3,r6,r21
	ctx.r3.u64 = ctx.r6.u64 + ctx.r21.u64;
	// add r10,r5,r21
	ctx.r10.u64 = ctx.r5.u64 + ctx.r21.u64;
	// add r8,r4,r21
	ctx.r8.u64 = ctx.r4.u64 + ctx.r21.u64;
	// srawi r9,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 18;
	// srawi r6,r10,18
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 18;
	// srawi r5,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 18;
loc_881FAEC0:
	// subf r10,r5,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x881faefc
	if (ctx.cr6.lt) goto loc_881FAEFC;
loc_881FAEE8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x881faf04
	goto loc_881FAF04;
loc_881FAEF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881fb23c
	if (ctx.cr6.eq) goto loc_881FB23C;
loc_881FAEFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_881FAF04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881fb23c
	if (ctx.cr6.eq) goto loc_881FB23C;
	// lbz r10,27(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 27);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881fb23c
	if (ctx.cr6.eq) goto loc_881FB23C;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881fb09c
	if (!ctx.cr6.eq) goto loc_881FB09C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881faf60
	if (ctx.cr6.eq) goto loc_881FAF60;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x881faf60
	if (ctx.cr6.eq) goto loc_881FAF60;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881faf60
	if (ctx.cr6.eq) goto loc_881FAF60;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881faf60
	if (ctx.cr6.eq) goto loc_881FAF60;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,158
	ctx.r10.s64 = ctx.r1.s64 + 158;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881FAF50:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881faf50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FAF50;
	// b 0x881fb238
	goto loc_881FB238;
loc_881FAF60:
	// lbz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r9,-20(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// rotlwi r4,r8,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r11,388(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,-20(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + -20);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// addi r29,r1,162
	ctx.r29.s64 = ctx.r1.s64 + 162;
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r9,16(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// addi r28,r1,164
	ctx.r28.s64 = ctx.r1.s64 + 164;
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// lwzx r9,r4,r15
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// lwzx r5,r8,r15
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r15.u32);
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r11,r4,r21
	ctx.r11.u64 = ctx.r4.u64 + ctx.r21.u64;
	// addi r8,r6,-10
	ctx.r8.s64 = ctx.r6.s64 + -10;
	// srawi r5,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 18;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// sth r5,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r5.u16);
	// subf r7,r30,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r6,r30,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r30.u64;
	// subf r5,r30,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r30.u64;
loc_881FAFF4:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r31,-2(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r29,2(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r10
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r4.u16);
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r30,r7,r11
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r29,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r29.u16);
	// sthx r4,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r31,10(r8)
	ea = 10 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881faff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FAFF4;
	// b 0x881fb230
	goto loc_881FB230;
loc_881FB09C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881fb0dc
	if (ctx.cr6.eq) goto loc_881FB0DC;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x881fb0dc
	if (ctx.cr6.eq) goto loc_881FB0DC;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881fb0dc
	if (ctx.cr6.eq) goto loc_881FB0DC;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881fb0dc
	if (ctx.cr6.eq) goto loc_881FB0DC;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,158
	ctx.r10.s64 = ctx.r1.s64 + 158;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881FB0CC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881fb0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FB0CC;
	// b 0x881fb238
	goto loc_881FB238;
loc_881FB0DC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,50(r23)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r23.u32 + 50);
	// lwz r10,388(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r7,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r7.u64;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r29,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r4,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r4.u64;
	// rlwinm r5,r5,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// lwz r4,16(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// addi r10,r1,154
	ctx.r10.s64 = ctx.r1.s64 + 154;
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// lwzx r8,r5,r15
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r15.u32);
	// addi r29,r1,162
	ctx.r29.s64 = ctx.r1.s64 + 162;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r31,r1,164
	ctx.r31.s64 = ctx.r1.s64 + 164;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r4,r4,r15
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r4,r11
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r5,r7,r21
	ctx.r5.u64 = ctx.r7.u64 + ctx.r21.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r30.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// subf r6,r30,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r30.u64;
	// sth r4,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r4.u16);
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
loc_881FB194:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// mullw r31,r8,r9
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r30,-2(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,2(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// mullw r30,r30,r31
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r31
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// mullw r31,r26,r31
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mullw r29,r8,r29
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// sth r4,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// sthx r28,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u16);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// sthx r31,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u16);
	// sthx r4,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r30,10(r10)
	ea = 10 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881fb194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881FB194;
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881FB230:
	// lhz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 160);
	// sth r11,176(r1)
	REX_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
loc_881FB238:
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
loc_881FB23C:
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
	// stw r29,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r29.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r0,r29
	// dcbt r0,r30
	// dcbt r0,r18
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x881fb280
	if (!ctx.cr6.eq) goto loc_881FB280;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881fb3ac
	goto loc_881FB3AC;
loc_881FB280:
	// lbz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r27,0(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r27.u32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881fb36c
	if (ctx.cr6.lt) goto loc_881FB36C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881fb364
	if (!ctx.cr6.lt) goto loc_881FB364;
loc_881FB2CC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881fb2f8
	if (ctx.cr6.lt) goto loc_881FB2F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881FB2E8;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881fb2cc
	if (ctx.cr6.eq) goto loc_881FB2CC;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881fb3ac
	goto loc_881FB3AC;
loc_881FB2F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
loc_881FB364:
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881fb3ac
	goto loc_881FB3AC;
loc_881FB36C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881FB374;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
loc_881FB37C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88156500
	ctx.lr = 0x881FB394;
	sub_88156500(ctx, base);
	// add r10,r28,r26
	ctx.r10.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881fb37c
	if (ctx.cr6.lt) goto loc_881FB37C;
loc_881FB3AC:
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x881fb4d4
	if (ctx.cr6.eq) goto loc_881FB4D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881fb5f8
	if (ctx.cr6.eq) goto loc_881FB5F8;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bne cr6,0x881fb40c
	if (!ctx.cr6.eq) goto loc_881FB40C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fb3f4
	if (!ctx.cr0.lt) goto loc_881FB3F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FB3F4;
	sub_88156678(ctx, base);
loc_881FB3F4:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881fb5bc
	goto loc_881FB5BC;
loc_881FB40C:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881fb5bc
	if (!ctx.cr6.eq) goto loc_881FB5BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881fb484
	if (!ctx.cr6.lt) goto loc_881FB484;
loc_881FB42C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fb484
	if (ctx.cr6.eq) goto loc_881FB484;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881fb474
	if (!ctx.cr0.lt) goto loc_881FB474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FB474;
	sub_88156678(ctx, base);
loc_881FB474:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fb42c
	if (ctx.cr6.gt) goto loc_881FB42C;
loc_881FB484:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881fb4bc
	if (!ctx.cr0.lt) goto loc_881FB4BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FB4BC;
	sub_88156678(ctx, base);
loc_881FB4BC:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881fb5bc
	goto loc_881FB5BC;
loc_881FB4D4:
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bgt cr6,0x881fb4e8
	if (ctx.cr6.gt) goto loc_881FB4E8;
	// srawi r11,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x881fb4ec
	goto loc_881FB4EC;
loc_881FB4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881FB4EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881fb50c
	if (!ctx.cr6.gt) goto loc_881FB50C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881fb5b8
	goto loc_881FB5B8;
loc_881FB50C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x881fb51c
	if (!ctx.cr6.eq) goto loc_881FB51C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881fb5b8
	goto loc_881FB5B8;
loc_881FB51C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881fb57c
	if (!ctx.cr6.gt) goto loc_881FB57C;
loc_881FB524:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fb57c
	if (ctx.cr6.eq) goto loc_881FB57C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881fb56c
	if (!ctx.cr0.lt) goto loc_881FB56C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FB56C;
	sub_88156678(ctx, base);
loc_881FB56C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fb524
	if (ctx.cr6.gt) goto loc_881FB524;
loc_881FB57C:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881fb5b4
	if (!ctx.cr0.lt) goto loc_881FB5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FB5B4;
	sub_88156678(ctx, base);
loc_881FB5B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881FB5B8:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_881FB5BC:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// rldicl r27,r10,1,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fb5e4
	if (!ctx.cr0.lt) goto loc_881FB5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FB5E4;
	sub_88156678(ctx, base);
loc_881FB5E4:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
loc_881FB5F8:
	// sth r25,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881fb920
	if (!ctx.cr6.eq) goto loc_881FB920;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x881fb620
	if (!ctx.cr6.eq) goto loc_881FB620;
	// lwz r6,1268(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 1268);
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x881fb650
	goto loc_881FB650;
loc_881FB620:
	// addi r11,r22,317
	ctx.r11.s64 = ctx.r22.s64 + 317;
	// lbz r10,1252(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 1252);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r6,r9,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// beq cr6,0x881fb650
	if (ctx.cr6.eq) goto loc_881FB650;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881fb650
	if (ctx.cr6.eq) goto loc_881FB650;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// li r22,8
	ctx.r22.s64 = 8;
	// bne cr6,0x881fb650
	if (!ctx.cr6.eq) goto loc_881FB650;
	// li r22,1
	ctx.r22.s64 = 1;
loc_881FB650:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x881fb670
	if (ctx.cr6.eq) goto loc_881FB670;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,404(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 404);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x882153a8
	ctx.lr = 0x881FB668;
	sub_882153A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881fb920
	if (ctx.cr6.lt) goto loc_881FB920;
loc_881FB670:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881fb734
	if (ctx.cr6.eq) goto loc_881FB734;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x881fb724
	if (ctx.cr6.eq) goto loc_881FB724;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// beq cr6,0x881fb69c
	if (ctx.cr6.eq) goto loc_881FB69C;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// b 0x881fb734
	goto loc_881FB734;
loc_881FB69C:
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r5,32(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// lhz r3,96(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r9,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// lhz r6,48(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lhz r7,64(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// lhz r8,80(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// lhz r31,112(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r4,16(r29)
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r4.u16);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r11,32(r29)
	REX_STORE_U16(ctx.r29.u32 + 32, ctx.r11.u16);
	// lhz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r3,48(r29)
	REX_STORE_U16(ctx.r29.u32 + 48, ctx.r3.u16);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r5,64(r29)
	REX_STORE_U16(ctx.r29.u32 + 64, ctx.r5.u16);
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sth r11,80(r29)
	REX_STORE_U16(ctx.r29.u32 + 80, ctx.r11.u16);
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 12);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,96(r29)
	REX_STORE_U16(ctx.r29.u32 + 96, ctx.r6.u16);
	// lhz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r3,112(r29)
	REX_STORE_U16(ctx.r29.u32 + 112, ctx.r3.u16);
	// b 0x881fb734
	goto loc_881FB734;
loc_881FB724:
	// lvx128 v0,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881FB734:
	// lbz r11,1252(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 1252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fb790
	if (ctx.cr6.eq) goto loc_881FB790;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r11,0(r18)
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r11.u16);
	// lhz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// sth r9,2(r18)
	REX_STORE_U16(ctx.r18.u32 + 2, ctx.r9.u16);
	// lhz r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r8,4(r18)
	REX_STORE_U16(ctx.r18.u32 + 4, ctx.r8.u16);
	// lhz r7,48(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r7,6(r18)
	REX_STORE_U16(ctx.r18.u32 + 6, ctx.r7.u16);
	// lhz r6,64(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// sth r6,8(r18)
	REX_STORE_U16(ctx.r18.u32 + 8, ctx.r6.u16);
	// lhz r5,80(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// sth r5,10(r18)
	REX_STORE_U16(ctx.r18.u32 + 10, ctx.r5.u16);
	// lhz r4,96(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r4,12(r18)
	REX_STORE_U16(ctx.r18.u32 + 12, ctx.r4.u16);
	// lhz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// sth r3,14(r18)
	REX_STORE_U16(ctx.r18.u32 + 14, ctx.r3.u16);
	// lvx128 v61,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r18,r10
	ea = (ctx.r18.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x881fb7d8
	goto loc_881FB7D8;
loc_881FB790:
	// lvx128 v60,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,16(r18)
	REX_STORE_U16(ctx.r18.u32 + 16, ctx.r11.u16);
	// lhz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// sth r10,18(r18)
	REX_STORE_U16(ctx.r18.u32 + 18, ctx.r10.u16);
	// lhz r9,32(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r9,20(r18)
	REX_STORE_U16(ctx.r18.u32 + 20, ctx.r9.u16);
	// lhz r8,48(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r8,22(r18)
	REX_STORE_U16(ctx.r18.u32 + 22, ctx.r8.u16);
	// lhz r7,64(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// sth r7,24(r18)
	REX_STORE_U16(ctx.r18.u32 + 24, ctx.r7.u16);
	// lhz r6,80(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// sth r6,26(r18)
	REX_STORE_U16(ctx.r18.u32 + 26, ctx.r6.u16);
	// lhz r5,96(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r5,28(r18)
	REX_STORE_U16(ctx.r18.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// sth r4,30(r18)
	REX_STORE_U16(ctx.r18.u32 + 30, ctx.r4.u16);
loc_881FB7D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r14,r24
	ctx.r10.u64 = ctx.r14.u64 + ctx.r24.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 6, ctx.xer);
	// stb r8,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r8.u8);
	// blt cr6,0x881fac80
	if (ctx.cr6.lt) goto loc_881FAC80;
loc_881FB800:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r24,r24,24
	ctx.r24.s64 = ctx.r24.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r19,r11,32768
	ctx.r19.u64 = ctx.r11.u64 | 32768;
	// blt cr6,0x881f99cc
	if (ctx.cr6.lt) goto loc_881F99CC;
	// lwz r20,412(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// rotlwi r25,r10,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r22,396(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r28,372(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r26,108(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_881FB840:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x881f9628
	if (ctx.cr6.lt) goto loc_881F9628;
loc_881FB850:
	// addi r11,r22,93
	ctx.r11.s64 = ctx.r22.s64 + 93;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bne cr6,0x881fb918
	if (!ctx.cr6.eq) goto loc_881FB918;
	// ld r11,104(r23)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r23.u32 + 104);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,112(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 112);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,116(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 116);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r7,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// lwz r5,84(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,120(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 120);
	// stw r4,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,124(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 124);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,128(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 128);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,132(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// lwz r6,84(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r7,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// lwz r5,136(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 136);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r5,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r5.u32);
	// lwz r11,140(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 140);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r8,144(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 144);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r6,148(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 148);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r6,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,152(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 152);
	// stw r4,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r4.u32);
loc_881FB918:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881FB920:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

