#include "FH2_funcs.20.h"

DEFINE_REX_FUNC(sub_880501D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_15) {
	REX_FUNC_PROLOGUE();
	// std r15,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88051FB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x88243670
	ctx.lr = 0x88051FDC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88052014
	goto loc_88052014;
loc_88052014:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88052738) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,1032
	ctx.r10.s64 = ctx.r11.s64 + 1032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88053e38
	ctx.lr = 0x88052778;
	sub_88053E38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88053720
	ctx.lr = 0x88052788;
	sub_88053720(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880527b0
	if (!ctx.cr0.eq) goto loc_880527B0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880527a0
	if (!ctx.cr6.eq) goto loc_880527A0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x880527c8
	goto loc_880527C8;
loc_880527A0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x880527c4
	if (!ctx.cr6.eq) goto loc_880527C4;
loc_880527A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x880527c8
	goto loc_880527C8;
loc_880527B0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880527a8
	if (!ctx.cr0.eq) goto loc_880527A8;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x880527c8
	if (!ctx.cr0.eq) goto loc_880527C8;
loc_880527C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_880527C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_88057110) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880571bc
	if (ctx.cr6.eq) goto loc_880571BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88050000
	ctx.lr = 0x8805714C;
	sub_88050000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88050130
	ctx.lr = 0x88057158;
	sub_88050130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x880500e8
	ctx.lr = 0x88057164;
	sub_880500E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x880500d0
	ctx.lr = 0x88057170;
	sub_880500D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88050118
	ctx.lr = 0x8805717C;
	sub_88050118(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88050058
	ctx.lr = 0x88057194;
	sub_88050058(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88050058
	ctx.lr = 0x880571A8;
	sub_88050058(ctx, base);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x88050058
	ctx.lr = 0x880571BC;
	sub_88050058(ctx, base);
loc_880571BC:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880571d4
	if (ctx.cr6.eq) goto loc_880571D4;
	// bl 0x88050298
	ctx.lr = 0x880571D0;
	sub_88050298(ctx, base);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_880571D4:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880571e8
	if (ctx.cr6.eq) goto loc_880571E8;
	// bl 0x88050298
	ctx.lr = 0x880571E4;
	sub_88050298(ctx, base);
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_880571E8:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880571fc
	if (ctx.cr6.eq) goto loc_880571FC;
	// bl 0x88050298
	ctx.lr = 0x880571F8;
	sub_88050298(ctx, base);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_880571FC:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88057210
	if (ctx.cr6.eq) goto loc_88057210;
	// bl 0x88050298
	ctx.lr = 0x8805720C;
	sub_88050298(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_88057210:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88057224
	if (ctx.cr6.eq) goto loc_88057224;
	// bl 0x88050298
	ctx.lr = 0x88057220;
	sub_88050298(ctx, base);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_88057224:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88057238
	if (ctx.cr6.eq) goto loc_88057238;
	// bl 0x88050028
	ctx.lr = 0x88057234;
	sub_88050028(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_88057238:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805724C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88057260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8805A408) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a43c
	if (ctx.cr6.eq) goto loc_8805A43C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x88050358
	ctx.lr = 0x8805A434;
	sub_88050358(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8805A43C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A450;
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
	ctx.lr = 0x8805A464;
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
	ctx.lr = 0x8805A478;
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

DEFINE_REX_FUNC(sub_8805B748) {
	REX_FUNC_PROLOGUE();
	// ld r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805B888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805B890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8805b8d4
	if (ctx.cr6.eq) goto loc_8805B8D4;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805b8cc
	if (ctx.cr6.eq) goto loc_8805B8CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B8CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B8CC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8805B8D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8805b904
	if (ctx.cr6.eq) goto loc_8805B904;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805b8fc
	if (ctx.cr6.eq) goto loc_8805B8FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B8FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B8FC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8805B904:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8805b934
	if (ctx.cr6.eq) goto loc_8805B934;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805b92c
	if (ctx.cr6.eq) goto loc_8805B92C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B92C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8805B934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C328) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805CCF8) {
	REX_FUNC_PROLOGUE();
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8805cd24
	if (ctx.cr6.gt) goto loc_8805CD24;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x8805cd28
	if (!ctx.cr6.lt) goto loc_8805CD28;
loc_8805CD24:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8805CD28:
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805DA30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805DA38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8805da90
	if (ctx.cr6.eq) goto loc_8805DA90;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805da90
	if (ctx.cr6.eq) goto loc_8805DA90;
	// lwz r11,152(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r11,156(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,44(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8805DA90:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r28,-30683
	ctx.r28.s64 = -2010841088;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,9628
	ctx.r4.s64 = ctx.r10.s64 + 9628;
	// lwz r3,2840(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 2840);
	// bl 0x8806c290
	ctx.lr = 0x8805DAB4;
	sub_8806C290(ctx, base);
	// lwz r11,2840(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2840);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r9,9604
	ctx.r4.s64 = ctx.r9.s64 + 9604;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8806c290
	ctx.lr = 0x8805DAD0;
	sub_8806C290(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x8805db1c
	if (!ctx.cr6.eq) goto loc_8805DB1C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x8805db24
	goto loc_8805DB24;
loc_8805DB1C:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_8805DB24:
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8805db44
	if (ctx.cr6.lt) goto loc_8805DB44;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x8805db48
	if (!ctx.cr6.gt) goto loc_8805DB48;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// b 0x8805db48
	goto loc_8805DB48;
loc_8805DB44:
	// li r11,16
	ctx.r11.s64 = 16;
loc_8805DB48:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8805db74
	if (ctx.cr6.lt) goto loc_8805DB74;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x8805db78
	if (!ctx.cr6.gt) goto loc_8805DB78;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8805DB74:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8805DB78:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8805DB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880628B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,568(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// bl 0x880cb730
	ctx.lr = 0x880628EC;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062934
	if (ctx.cr6.lt) goto loc_88062934;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x88062904;
	sub_880CB730(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88062928
	if (ctx.cr6.eq) goto loc_88062928;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88062928
	if (ctx.cr6.eq) goto loc_88062928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x880cb6b0
	ctx.lr = 0x88062928;
	sub_880CB6B0(ctx, base);
loc_88062928:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x880cb6b0
	ctx.lr = 0x88062934;
	sub_880CB6B0(ctx, base);
loc_88062934:
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

DEFINE_REX_FUNC(sub_880642D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880642E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88064324
	if (!ctx.cr6.eq) goto loc_88064324;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064324:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88064340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x880cb730
	ctx.lr = 0x88064358;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x88064370;
	sub_880CB730(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88064388
	if (ctx.cr6.eq) goto loc_88064388;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
loc_88064388:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880643ac
	if (!ctx.cr6.eq) goto loc_880643AC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88063f30
	ctx.lr = 0x880643A4;
	sub_88063F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
loc_880643AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x880643BC;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x88064410
	if (ctx.cr6.eq) goto loc_88064410;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88064568
	if (ctx.cr6.gt) goto loc_88064568;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88064420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88064420;
	// bdzf 4*cr6+eq,0x88064410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88064410;
	// bne cr6,0x88064440
	if (!ctx.cr6.eq) goto loc_88064440;
loc_88064410:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064420:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r27.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r30.u8);
	// b 0x880644b4
	goto loc_880644B4;
loc_88064440:
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// lbz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// bl 0x880cb730
	ctx.lr = 0x88064458;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r27.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r8)
	REX_STORE_U8(ctx.r8.u32 + 20, ctx.r30.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r7)
	REX_STORE_U8(ctx.r7.u32 + 20, ctx.r29.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r29.u32);
	// bl 0x880628b8
	ctx.lr = 0x880644A8;
	sub_880628B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_880644B4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88064568
	if (ctx.cr6.gt) goto loc_88064568;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88064410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88064410;
	// bdzf 4*cr6+eq,0x880644f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880644F8;
	// bne cr6,0x88064410
	if (!ctx.cr6.eq) goto loc_88064410;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r27.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880644F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880628b8
	ctx.lr = 0x88064504;
	sub_880628B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88063f30
	ctx.lr = 0x88064520;
	sub_88063F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x88064538;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064570
	if (ctx.cr6.lt) goto loc_88064570;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064568:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_88064570:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069278) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88069388) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880693B8) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069468) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880694F8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069B48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88069B50;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88069e34
	if (!ctx.cr6.eq) goto loc_88069E34;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88069B78:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88069dd8
	if (ctx.cr6.eq) goto loc_88069DD8;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069BC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,260(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88069d84
	if (!ctx.cr6.eq) goto loc_88069D84;
loc_88069BE4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a20
	ctx.lr = 0x88069C00;
	sub_88067A20(ctx, base);
	// lwz r9,248(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88069d0c
	if (!ctx.cr6.gt) goto loc_88069D0C;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a80
	ctx.lr = 0x88069C14;
	sub_88067A80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,136(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88069C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r28,0(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bctrl 
	ctx.lr = 0x88069C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,120(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88069CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// blt cr6,0x88069d58
	if (ctx.cr6.lt) goto loc_88069D58;
	// bctrl 
	ctx.lr = 0x88069CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067b80
	ctx.lr = 0x88069CD4;
	sub_88067B80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,208(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 208);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88069d84
	if (ctx.cr6.eq) goto loc_88069D84;
	// b 0x88069d34
	goto loc_88069D34;
loc_88069D0C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88069be4
	if (ctx.cr6.eq) goto loc_88069BE4;
	// b 0x88069d84
	goto loc_88069D84;
loc_88069D58:
	// bctrl 
	ctx.lr = 0x88069D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D84:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069D98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88069db8
	if (ctx.cr6.eq) goto loc_88069DB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_88069DB8:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88069dd8
	if (ctx.cr6.eq) goto loc_88069DD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_88069DD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88069e34
	if (!ctx.cr6.eq) goto loc_88069E34;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,268(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x881ec608
	ctx.lr = 0x88069E14;
	sub_881EC608(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,260(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88069b78
	if (ctx.cr6.eq) goto loc_88069B78;
loc_88069E34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88071708) {
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
	// lwz r11,28492(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28492);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88071738
	if (ctx.cr6.eq) goto loc_88071738;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x88071738;
	sub_880E6960(ctx, base);
loc_88071738:
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807175c
	if (ctx.cr6.eq) goto loc_8807175C;
	// lwz r11,30432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807175c
	if (!ctx.cr6.eq) goto loc_8807175C;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x88071764
	goto loc_88071764;
loc_8807175C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,15
	ctx.r4.s64 = 15;
loc_88071764:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8807176C;
	sub_880E6960(ctx, base);
	// lwz r11,28488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880717bc
	if (ctx.cr6.eq) goto loc_880717BC;
	// lwz r11,28492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880717ac
	if (ctx.cr6.eq) goto loc_880717AC;
	// lwz r11,28540(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880717ac
	if (!ctx.cr6.eq) goto loc_880717AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28496(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28496);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880717A0;
	sub_880E6960(ctx, base);
	// lwz r4,28500(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28500);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880717b4
	goto loc_880717B4;
loc_880717AC:
	// lwz r4,28512(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28512);
	// li r5,2
	ctx.r5.s64 = 2;
loc_880717B4:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880717BC;
	sub_880E6960(ctx, base);
loc_880717BC:
	// lwz r11,1276(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880717d0
	if (ctx.cr6.eq) goto loc_880717D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88070410
	ctx.lr = 0x880717D0;
	sub_88070410(ctx, base);
loc_880717D0:
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

DEFINE_REX_FUNC(sub_880747F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880747F8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef284
	ctx.lr = 0x88074800;
	__savefpr_27(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,780(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// stw r7,596(r1)
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r7.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r16,-1
	ctx.r16.s64 = -1;
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r3,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r3.u32);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r24,-100
	ctx.r24.s64 = -100;
	// stw r11,628(r31)
	REX_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r4.u32);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,632(r31)
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r10.u32);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// stw r7,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r7.u32);
	// stw r6,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
	// stw r4,652(r31)
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r4.u32);
	// stw r16,648(r31)
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r16.u32);
	// stw r5,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// std r30,736(r31)
	REX_STORE_U64(ctx.r31.u32 + 736, ctx.r30.u64);
	// stw r30,768(r31)
	REX_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,772(r31)
	REX_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,780(r31)
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r30,788(r31)
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r30,792(r31)
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stw r20,836(r31)
	REX_STORE_U32(ctx.r31.u32 + 836, ctx.r20.u32);
	// stw r30,868(r31)
	REX_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,872(r31)
	REX_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// stw r30,1260(r31)
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// stw r30,1264(r31)
	REX_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// stw r30,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r30.u32);
	// stw r30,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r30.u32);
	// stw r30,1276(r31)
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r30.u32);
	// stw r30,1424(r31)
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1436(r31)
	REX_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stw r30,1440(r31)
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1444(r31)
	REX_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1448(r31)
	REX_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r20,1480(r31)
	REX_STORE_U32(ctx.r31.u32 + 1480, ctx.r20.u32);
	// stw r30,1488(r31)
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// stw r30,1492(r31)
	REX_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	REX_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1504(r31)
	REX_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// stw r30,1508(r31)
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	REX_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1536(r31)
	REX_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r20,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r20.u32);
	// stw r30,1560(r31)
	REX_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1564(r31)
	REX_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	REX_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	REX_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	REX_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1580(r31)
	REX_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r30,1584(r31)
	REX_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1604(r31)
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// stw r30,1608(r31)
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	REX_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1620(r31)
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// stw r20,1624(r31)
	REX_STORE_U32(ctx.r31.u32 + 1624, ctx.r20.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r30,1628(r31)
	REX_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// stw r5,1632(r31)
	REX_STORE_U32(ctx.r31.u32 + 1632, ctx.r5.u32);
	// stw r29,1640(r31)
	REX_STORE_U32(ctx.r31.u32 + 1640, ctx.r29.u32);
	// stw r30,1656(r31)
	REX_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	REX_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r31)
	REX_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r31)
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1672(r31)
	REX_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r30,1676(r31)
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r30,1680(r31)
	REX_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r24,1684(r31)
	REX_STORE_U32(ctx.r31.u32 + 1684, ctx.r24.u32);
	// stw r24,1688(r31)
	REX_STORE_U32(ctx.r31.u32 + 1688, ctx.r24.u32);
	// stw r24,1692(r31)
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r24.u32);
	// stw r24,1696(r31)
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r24.u32);
	// stw r30,1700(r31)
	REX_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r16,2088(r31)
	REX_STORE_U32(ctx.r31.u32 + 2088, ctx.r16.u32);
	// stw r16,2092(r31)
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r16.u32);
	// stw r30,2096(r31)
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2100(r31)
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// stw r30,2108(r31)
	REX_STORE_U32(ctx.r31.u32 + 2108, ctx.r30.u32);
	// stw r30,2112(r31)
	REX_STORE_U32(ctx.r31.u32 + 2112, ctx.r30.u32);
	// stw r30,2116(r31)
	REX_STORE_U32(ctx.r31.u32 + 2116, ctx.r30.u32);
	// stw r30,2120(r31)
	REX_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r30,2124(r31)
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// stw r30,2148(r31)
	REX_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r16,2152(r31)
	REX_STORE_U32(ctx.r31.u32 + 2152, ctx.r16.u32);
	// stw r30,2164(r31)
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	REX_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	REX_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r30,2176(r31)
	REX_STORE_U32(ctx.r31.u32 + 2176, ctx.r30.u32);
	// stw r16,2180(r31)
	REX_STORE_U32(ctx.r31.u32 + 2180, ctx.r16.u32);
	// stw r16,2184(r31)
	REX_STORE_U32(ctx.r31.u32 + 2184, ctx.r16.u32);
	// stw r30,2188(r31)
	REX_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// stw r30,2204(r31)
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// stw r30,2260(r31)
	REX_STORE_U32(ctx.r31.u32 + 2260, ctx.r30.u32);
	// stw r30,2268(r31)
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r30.u32);
	// stw r30,2272(r31)
	REX_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// stw r30,2276(r31)
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r30.u32);
	// stw r30,2280(r31)
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r30.u32);
	// stw r30,2284(r31)
	REX_STORE_U32(ctx.r31.u32 + 2284, ctx.r30.u32);
	// stw r30,2288(r31)
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r30.u32);
	// stw r30,2296(r31)
	REX_STORE_U32(ctx.r31.u32 + 2296, ctx.r30.u32);
	// stw r20,2300(r31)
	REX_STORE_U32(ctx.r31.u32 + 2300, ctx.r20.u32);
	// stw r30,2312(r31)
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r30.u32);
	// stw r30,2324(r31)
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r30.u32);
	// stw r30,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// stw r30,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// stw r30,2340(r31)
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2344(r31)
	REX_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// stw r30,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
	// stw r30,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r30.u32);
	// stb r30,2432(r31)
	REX_STORE_U8(ctx.r31.u32 + 2432, ctx.r30.u8);
	// stw r30,2436(r31)
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r30.u32);
	// stw r30,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r30.u32);
	// stw r30,2444(r31)
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r30.u32);
	// stw r30,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r30.u32);
	// stw r30,2456(r31)
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r30.u32);
	// stw r30,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r30.u32);
	// stw r30,2472(r31)
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r30.u32);
	// stw r30,2480(r31)
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// stw r30,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r30.u32);
	// stw r30,2544(r31)
	REX_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r30.u32);
	// stw r30,2564(r31)
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r30.u32);
	// stw r30,2568(r31)
	REX_STORE_U32(ctx.r31.u32 + 2568, ctx.r30.u32);
	// stw r30,2572(r31)
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r30.u32);
	// stw r30,2576(r31)
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r30.u32);
	// stw r30,2580(r31)
	REX_STORE_U32(ctx.r31.u32 + 2580, ctx.r30.u32);
	// stw r30,2584(r31)
	REX_STORE_U32(ctx.r31.u32 + 2584, ctx.r30.u32);
	// stw r30,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r30.u32);
	// stw r30,2592(r31)
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// stw r16,2620(r31)
	REX_STORE_U32(ctx.r31.u32 + 2620, ctx.r16.u32);
	// stw r30,2624(r31)
	REX_STORE_U32(ctx.r31.u32 + 2624, ctx.r30.u32);
	// stw r30,2628(r31)
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r30.u32);
	// stw r30,2632(r31)
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r30.u32);
	// stw r30,2636(r31)
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r30.u32);
	// stw r30,2640(r31)
	REX_STORE_U32(ctx.r31.u32 + 2640, ctx.r30.u32);
	// stw r30,2644(r31)
	REX_STORE_U32(ctx.r31.u32 + 2644, ctx.r30.u32);
	// stw r30,2648(r31)
	REX_STORE_U32(ctx.r31.u32 + 2648, ctx.r30.u32);
	// stw r30,2792(r31)
	REX_STORE_U32(ctx.r31.u32 + 2792, ctx.r30.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r30,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// stw r30,2812(r31)
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r30.u32);
	// stw r30,2816(r31)
	REX_STORE_U32(ctx.r31.u32 + 2816, ctx.r30.u32);
	// stw r30,2820(r31)
	REX_STORE_U32(ctx.r31.u32 + 2820, ctx.r30.u32);
	// stw r30,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r30.u32);
	// stw r8,6720(r31)
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r8.u32);
	// lfd f31,1488(r6)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r6.u32 + 1488);
	// stw r30,6724(r31)
	REX_STORE_U32(ctx.r31.u32 + 6724, ctx.r30.u32);
	// stw r30,6728(r31)
	REX_STORE_U32(ctx.r31.u32 + 6728, ctx.r30.u32);
	// stw r20,6736(r31)
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r20.u32);
	// stw r30,6740(r31)
	REX_STORE_U32(ctx.r31.u32 + 6740, ctx.r30.u32);
	// stw r30,6768(r31)
	REX_STORE_U32(ctx.r31.u32 + 6768, ctx.r30.u32);
	// stw r30,6772(r31)
	REX_STORE_U32(ctx.r31.u32 + 6772, ctx.r30.u32);
	// stw r30,6776(r31)
	REX_STORE_U32(ctx.r31.u32 + 6776, ctx.r30.u32);
	// stw r30,6780(r31)
	REX_STORE_U32(ctx.r31.u32 + 6780, ctx.r30.u32);
	// stw r30,6784(r31)
	REX_STORE_U32(ctx.r31.u32 + 6784, ctx.r30.u32);
	// stw r30,6788(r31)
	REX_STORE_U32(ctx.r31.u32 + 6788, ctx.r30.u32);
	// stw r30,6792(r31)
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// stw r30,6796(r31)
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// stw r30,6804(r31)
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r30.u32);
	// stw r30,6808(r31)
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r30.u32);
	// stw r30,6812(r31)
	REX_STORE_U32(ctx.r31.u32 + 6812, ctx.r30.u32);
	// stw r30,6816(r31)
	REX_STORE_U32(ctx.r31.u32 + 6816, ctx.r30.u32);
	// stw r30,6820(r31)
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r30.u32);
	// stw r30,6824(r31)
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r30.u32);
	// stw r30,6836(r31)
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r30.u32);
	// stw r30,6840(r31)
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r30.u32);
	// stw r30,6844(r31)
	REX_STORE_U32(ctx.r31.u32 + 6844, ctx.r30.u32);
	// lwz r5,772(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r27,580(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r28,812(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r4,652(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r3,676(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r11,6720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6720);
	// stw r11,6856(r31)
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// stw r16,6860(r31)
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r16.u32);
	// stw r30,6864(r31)
	REX_STORE_U32(ctx.r31.u32 + 6864, ctx.r30.u32);
	// stw r30,6876(r31)
	REX_STORE_U32(ctx.r31.u32 + 6876, ctx.r30.u32);
	// stw r30,6880(r31)
	REX_STORE_U32(ctx.r31.u32 + 6880, ctx.r30.u32);
	// stw r30,6888(r31)
	REX_STORE_U32(ctx.r31.u32 + 6888, ctx.r30.u32);
	// stw r30,6908(r31)
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// stw r30,7048(r31)
	REX_STORE_U32(ctx.r31.u32 + 7048, ctx.r30.u32);
	// stw r30,7052(r31)
	REX_STORE_U32(ctx.r31.u32 + 7052, ctx.r30.u32);
	// stw r30,7072(r31)
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r30.u32);
	// stw r30,7076(r31)
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r30.u32);
	// stw r20,7080(r31)
	REX_STORE_U32(ctx.r31.u32 + 7080, ctx.r20.u32);
	// stw r30,7140(r31)
	REX_STORE_U32(ctx.r31.u32 + 7140, ctx.r30.u32);
	// stw r20,7144(r31)
	REX_STORE_U32(ctx.r31.u32 + 7144, ctx.r20.u32);
	// stw r30,7148(r31)
	REX_STORE_U32(ctx.r31.u32 + 7148, ctx.r30.u32);
	// stw r30,7152(r31)
	REX_STORE_U32(ctx.r31.u32 + 7152, ctx.r30.u32);
	// stw r30,7156(r31)
	REX_STORE_U32(ctx.r31.u32 + 7156, ctx.r30.u32);
	// std r30,7160(r31)
	REX_STORE_U64(ctx.r31.u32 + 7160, ctx.r30.u64);
	// stw r30,7176(r31)
	REX_STORE_U32(ctx.r31.u32 + 7176, ctx.r30.u32);
	// stw r30,7184(r31)
	REX_STORE_U32(ctx.r31.u32 + 7184, ctx.r30.u32);
	// stw r29,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r29.u32);
	// stw r30,7192(r31)
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// stw r5,7196(r31)
	REX_STORE_U32(ctx.r31.u32 + 7196, ctx.r5.u32);
	// stw r30,7200(r31)
	REX_STORE_U32(ctx.r31.u32 + 7200, ctx.r30.u32);
	// stw r30,7204(r31)
	REX_STORE_U32(ctx.r31.u32 + 7204, ctx.r30.u32);
	// stw r30,7208(r31)
	REX_STORE_U32(ctx.r31.u32 + 7208, ctx.r30.u32);
	// stw r20,7212(r31)
	REX_STORE_U32(ctx.r31.u32 + 7212, ctx.r20.u32);
	// stw r20,7216(r31)
	REX_STORE_U32(ctx.r31.u32 + 7216, ctx.r20.u32);
	// stw r30,7220(r31)
	REX_STORE_U32(ctx.r31.u32 + 7220, ctx.r30.u32);
	// stw r30,7224(r31)
	REX_STORE_U32(ctx.r31.u32 + 7224, ctx.r30.u32);
	// stw r30,7228(r31)
	REX_STORE_U32(ctx.r31.u32 + 7228, ctx.r30.u32);
	// stw r30,7232(r31)
	REX_STORE_U32(ctx.r31.u32 + 7232, ctx.r30.u32);
	// stw r7,7572(r31)
	REX_STORE_U32(ctx.r31.u32 + 7572, ctx.r7.u32);
	// stw r27,7596(r31)
	REX_STORE_U32(ctx.r31.u32 + 7596, ctx.r27.u32);
	// stw r30,7604(r31)
	REX_STORE_U32(ctx.r31.u32 + 7604, ctx.r30.u32);
	// stw r30,7608(r31)
	REX_STORE_U32(ctx.r31.u32 + 7608, ctx.r30.u32);
	// stw r30,7612(r31)
	REX_STORE_U32(ctx.r31.u32 + 7612, ctx.r30.u32);
	// stw r30,7624(r31)
	REX_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
	// stw r30,7628(r31)
	REX_STORE_U32(ctx.r31.u32 + 7628, ctx.r30.u32);
	// stw r30,7632(r31)
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r30.u32);
	// stfd f31,7640(r31)
	REX_STORE_U64(ctx.r31.u32 + 7640, ctx.f31.u64);
	// stfd f31,7648(r31)
	REX_STORE_U64(ctx.r31.u32 + 7648, ctx.f31.u64);
	// stfd f31,7656(r31)
	REX_STORE_U64(ctx.r31.u32 + 7656, ctx.f31.u64);
	// stw r30,7664(r31)
	REX_STORE_U32(ctx.r31.u32 + 7664, ctx.r30.u32);
	// stw r30,7676(r31)
	REX_STORE_U32(ctx.r31.u32 + 7676, ctx.r30.u32);
	// stfd f3,7688(r31)
	REX_STORE_U64(ctx.r31.u32 + 7688, ctx.f3.u64);
	// stw r30,7696(r31)
	REX_STORE_U32(ctx.r31.u32 + 7696, ctx.r30.u32);
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// stw r30,7700(r31)
	REX_STORE_U32(ctx.r31.u32 + 7700, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r30,7712(r31)
	REX_STORE_U64(ctx.r31.u32 + 7712, ctx.r30.u64);
	// addi r9,r10,26088
	ctx.r9.s64 = ctx.r10.s64 + 26088;
	// std r30,7736(r31)
	REX_STORE_U64(ctx.r31.u32 + 7736, ctx.r30.u64);
	// stw r30,7756(r31)
	REX_STORE_U32(ctx.r31.u32 + 7756, ctx.r30.u32);
	// stw r30,7764(r31)
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r30.u32);
	// stw r30,7768(r31)
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r30.u32);
	// stw r30,7772(r31)
	REX_STORE_U32(ctx.r31.u32 + 7772, ctx.r30.u32);
	// stw r30,7844(r31)
	REX_STORE_U32(ctx.r31.u32 + 7844, ctx.r30.u32);
	// stw r30,7848(r31)
	REX_STORE_U32(ctx.r31.u32 + 7848, ctx.r30.u32);
	// stw r30,7852(r31)
	REX_STORE_U32(ctx.r31.u32 + 7852, ctx.r30.u32);
	// stw r30,7856(r31)
	REX_STORE_U32(ctx.r31.u32 + 7856, ctx.r30.u32);
	// stw r30,7864(r31)
	REX_STORE_U32(ctx.r31.u32 + 7864, ctx.r30.u32);
	// lwz r8,668(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// stw r30,7868(r31)
	REX_STORE_U32(ctx.r31.u32 + 7868, ctx.r30.u32);
	// stfd f1,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f1.u64);
	// stfd f2,7896(r31)
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f2.u64);
	// stw r4,7904(r31)
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r4.u32);
	// lwz r7,684(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// stw r8,7936(r31)
	REX_STORE_U32(ctx.r31.u32 + 7936, ctx.r8.u32);
	// stw r30,7972(r31)
	REX_STORE_U32(ctx.r31.u32 + 7972, ctx.r30.u32);
	// stw r30,7976(r31)
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r30.u32);
	// stw r30,7980(r31)
	REX_STORE_U32(ctx.r31.u32 + 7980, ctx.r30.u32);
	// stw r30,7984(r31)
	REX_STORE_U32(ctx.r31.u32 + 7984, ctx.r30.u32);
	// stw r30,7988(r31)
	REX_STORE_U32(ctx.r31.u32 + 7988, ctx.r30.u32);
	// stw r30,7992(r31)
	REX_STORE_U32(ctx.r31.u32 + 7992, ctx.r30.u32);
	// stw r30,8024(r31)
	REX_STORE_U32(ctx.r31.u32 + 8024, ctx.r30.u32);
	// stw r30,8028(r31)
	REX_STORE_U32(ctx.r31.u32 + 8028, ctx.r30.u32);
	// stw r30,8032(r31)
	REX_STORE_U32(ctx.r31.u32 + 8032, ctx.r30.u32);
	// stfd f31,8040(r31)
	REX_STORE_U64(ctx.r31.u32 + 8040, ctx.f31.u64);
	// stw r30,8048(r31)
	REX_STORE_U32(ctx.r31.u32 + 8048, ctx.r30.u32);
	// stw r3,8104(r31)
	REX_STORE_U32(ctx.r31.u32 + 8104, ctx.r3.u32);
	// stw r7,8108(r31)
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r7.u32);
	// stw r30,8176(r31)
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r30.u32);
	// stw r28,8180(r31)
	REX_STORE_U32(ctx.r31.u32 + 8180, ctx.r28.u32);
	// stw r30,8236(r31)
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r30.u32);
	// stw r30,17536(r31)
	REX_STORE_U32(ctx.r31.u32 + 17536, ctx.r30.u32);
	// stw r30,17540(r31)
	REX_STORE_U32(ctx.r31.u32 + 17540, ctx.r30.u32);
	// stw r30,19108(r31)
	REX_STORE_U32(ctx.r31.u32 + 19108, ctx.r30.u32);
	// stw r30,19112(r31)
	REX_STORE_U32(ctx.r31.u32 + 19112, ctx.r30.u32);
	// stw r30,19196(r31)
	REX_STORE_U32(ctx.r31.u32 + 19196, ctx.r30.u32);
	// stw r30,19200(r31)
	REX_STORE_U32(ctx.r31.u32 + 19200, ctx.r30.u32);
	// stw r30,19204(r31)
	REX_STORE_U32(ctx.r31.u32 + 19204, ctx.r30.u32);
	// stw r30,19208(r31)
	REX_STORE_U32(ctx.r31.u32 + 19208, ctx.r30.u32);
	// stw r30,19212(r31)
	REX_STORE_U32(ctx.r31.u32 + 19212, ctx.r30.u32);
	// stw r30,19216(r31)
	REX_STORE_U32(ctx.r31.u32 + 19216, ctx.r30.u32);
	// stw r30,19456(r31)
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r30.u32);
	// stw r20,19468(r31)
	REX_STORE_U32(ctx.r31.u32 + 19468, ctx.r20.u32);
	// stw r30,20196(r31)
	REX_STORE_U32(ctx.r31.u32 + 20196, ctx.r30.u32);
	// stw r30,20200(r31)
	REX_STORE_U32(ctx.r31.u32 + 20200, ctx.r30.u32);
	// stw r30,20204(r31)
	REX_STORE_U32(ctx.r31.u32 + 20204, ctx.r30.u32);
	// stw r30,20212(r31)
	REX_STORE_U32(ctx.r31.u32 + 20212, ctx.r30.u32);
	// stw r30,20216(r31)
	REX_STORE_U32(ctx.r31.u32 + 20216, ctx.r30.u32);
	// stw r30,20256(r31)
	REX_STORE_U32(ctx.r31.u32 + 20256, ctx.r30.u32);
	// stw r30,20268(r31)
	REX_STORE_U32(ctx.r31.u32 + 20268, ctx.r30.u32);
	// stw r30,20272(r31)
	REX_STORE_U32(ctx.r31.u32 + 20272, ctx.r30.u32);
	// stw r30,20276(r31)
	REX_STORE_U32(ctx.r31.u32 + 20276, ctx.r30.u32);
	// stw r30,20280(r31)
	REX_STORE_U32(ctx.r31.u32 + 20280, ctx.r30.u32);
	// stw r20,20284(r31)
	REX_STORE_U32(ctx.r31.u32 + 20284, ctx.r20.u32);
	// stw r9,20820(r31)
	REX_STORE_U32(ctx.r31.u32 + 20820, ctx.r9.u32);
	// stw r30,20836(r31)
	REX_STORE_U32(ctx.r31.u32 + 20836, ctx.r30.u32);
	// stw r30,20840(r31)
	REX_STORE_U32(ctx.r31.u32 + 20840, ctx.r30.u32);
	// stw r30,20844(r31)
	REX_STORE_U32(ctx.r31.u32 + 20844, ctx.r30.u32);
	// stw r30,20872(r31)
	REX_STORE_U32(ctx.r31.u32 + 20872, ctx.r30.u32);
	// stw r30,20912(r31)
	REX_STORE_U32(ctx.r31.u32 + 20912, ctx.r30.u32);
	// stw r30,20916(r31)
	REX_STORE_U32(ctx.r31.u32 + 20916, ctx.r30.u32);
	// stw r11,21004(r31)
	REX_STORE_U32(ctx.r31.u32 + 21004, ctx.r11.u32);
	// stw r30,21072(r31)
	REX_STORE_U32(ctx.r31.u32 + 21072, ctx.r30.u32);
	// stw r30,21076(r31)
	REX_STORE_U32(ctx.r31.u32 + 21076, ctx.r30.u32);
	// stw r20,21080(r31)
	REX_STORE_U32(ctx.r31.u32 + 21080, ctx.r20.u32);
	// stw r20,21084(r31)
	REX_STORE_U32(ctx.r31.u32 + 21084, ctx.r20.u32);
	// stw r30,21088(r31)
	REX_STORE_U32(ctx.r31.u32 + 21088, ctx.r30.u32);
	// stw r30,21092(r31)
	REX_STORE_U32(ctx.r31.u32 + 21092, ctx.r30.u32);
	// stw r30,21096(r31)
	REX_STORE_U32(ctx.r31.u32 + 21096, ctx.r30.u32);
	// stw r30,21104(r31)
	REX_STORE_U32(ctx.r31.u32 + 21104, ctx.r30.u32);
	// stw r30,21108(r31)
	REX_STORE_U32(ctx.r31.u32 + 21108, ctx.r30.u32);
	// stw r30,21140(r31)
	REX_STORE_U32(ctx.r31.u32 + 21140, ctx.r30.u32);
	// addi r3,r31,30308
	ctx.r3.s64 = ctx.r31.s64 + 30308;
	// stw r30,21156(r31)
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r30.u32);
	// stw r30,21160(r31)
	REX_STORE_U32(ctx.r31.u32 + 21160, ctx.r30.u32);
	// stw r30,21256(r31)
	REX_STORE_U32(ctx.r31.u32 + 21256, ctx.r30.u32);
	// stw r20,27968(r31)
	REX_STORE_U32(ctx.r31.u32 + 27968, ctx.r20.u32);
	// stw r30,27988(r31)
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r30.u32);
	// stw r30,27992(r31)
	REX_STORE_U32(ctx.r31.u32 + 27992, ctx.r30.u32);
	// stw r30,27996(r31)
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r30.u32);
	// stw r20,28000(r31)
	REX_STORE_U32(ctx.r31.u32 + 28000, ctx.r20.u32);
	// stw r20,28004(r31)
	REX_STORE_U32(ctx.r31.u32 + 28004, ctx.r20.u32);
	// stw r20,28008(r31)
	REX_STORE_U32(ctx.r31.u32 + 28008, ctx.r20.u32);
	// stw r20,28012(r31)
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r20.u32);
	// stw r30,28016(r31)
	REX_STORE_U32(ctx.r31.u32 + 28016, ctx.r30.u32);
	// stw r30,28020(r31)
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r30.u32);
	// stw r30,28024(r31)
	REX_STORE_U32(ctx.r31.u32 + 28024, ctx.r30.u32);
	// stw r30,28028(r31)
	REX_STORE_U32(ctx.r31.u32 + 28028, ctx.r30.u32);
	// stw r30,28032(r31)
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r30.u32);
	// stw r30,28036(r31)
	REX_STORE_U32(ctx.r31.u32 + 28036, ctx.r30.u32);
	// stw r20,28040(r31)
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r20.u32);
	// stw r30,28044(r31)
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r30.u32);
	// stw r30,28048(r31)
	REX_STORE_U32(ctx.r31.u32 + 28048, ctx.r30.u32);
	// stw r30,28052(r31)
	REX_STORE_U32(ctx.r31.u32 + 28052, ctx.r30.u32);
	// stw r20,28056(r31)
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r20.u32);
	// stw r30,28060(r31)
	REX_STORE_U32(ctx.r31.u32 + 28060, ctx.r30.u32);
	// stw r30,28064(r31)
	REX_STORE_U32(ctx.r31.u32 + 28064, ctx.r30.u32);
	// stw r30,28068(r31)
	REX_STORE_U32(ctx.r31.u32 + 28068, ctx.r30.u32);
	// stfd f31,28072(r31)
	REX_STORE_U64(ctx.r31.u32 + 28072, ctx.f31.u64);
	// stfd f31,28080(r31)
	REX_STORE_U64(ctx.r31.u32 + 28080, ctx.f31.u64);
	// stw r30,28088(r31)
	REX_STORE_U32(ctx.r31.u32 + 28088, ctx.r30.u32);
	// stw r30,28092(r31)
	REX_STORE_U32(ctx.r31.u32 + 28092, ctx.r30.u32);
	// stw r30,28096(r31)
	REX_STORE_U32(ctx.r31.u32 + 28096, ctx.r30.u32);
	// stw r11,28100(r31)
	REX_STORE_U32(ctx.r31.u32 + 28100, ctx.r11.u32);
	// stw r20,28104(r31)
	REX_STORE_U32(ctx.r31.u32 + 28104, ctx.r20.u32);
	// stw r20,28108(r31)
	REX_STORE_U32(ctx.r31.u32 + 28108, ctx.r20.u32);
	// stw r30,28132(r31)
	REX_STORE_U32(ctx.r31.u32 + 28132, ctx.r30.u32);
	// stw r30,28136(r31)
	REX_STORE_U32(ctx.r31.u32 + 28136, ctx.r30.u32);
	// stw r30,28148(r31)
	REX_STORE_U32(ctx.r31.u32 + 28148, ctx.r30.u32);
	// stw r20,28164(r31)
	REX_STORE_U32(ctx.r31.u32 + 28164, ctx.r20.u32);
	// stw r30,28168(r31)
	REX_STORE_U32(ctx.r31.u32 + 28168, ctx.r30.u32);
	// stw r30,28172(r31)
	REX_STORE_U32(ctx.r31.u32 + 28172, ctx.r30.u32);
	// stw r30,28176(r31)
	REX_STORE_U32(ctx.r31.u32 + 28176, ctx.r30.u32);
	// stw r30,28180(r31)
	REX_STORE_U32(ctx.r31.u32 + 28180, ctx.r30.u32);
	// stw r30,28184(r31)
	REX_STORE_U32(ctx.r31.u32 + 28184, ctx.r30.u32);
	// stw r30,28188(r31)
	REX_STORE_U32(ctx.r31.u32 + 28188, ctx.r30.u32);
	// stw r30,28192(r31)
	REX_STORE_U32(ctx.r31.u32 + 28192, ctx.r30.u32);
	// stw r30,28196(r31)
	REX_STORE_U32(ctx.r31.u32 + 28196, ctx.r30.u32);
	// stw r30,28200(r31)
	REX_STORE_U32(ctx.r31.u32 + 28200, ctx.r30.u32);
	// stw r30,28204(r31)
	REX_STORE_U32(ctx.r31.u32 + 28204, ctx.r30.u32);
	// stw r30,28208(r31)
	REX_STORE_U32(ctx.r31.u32 + 28208, ctx.r30.u32);
	// stw r30,28212(r31)
	REX_STORE_U32(ctx.r31.u32 + 28212, ctx.r30.u32);
	// stw r30,28216(r31)
	REX_STORE_U32(ctx.r31.u32 + 28216, ctx.r30.u32);
	// stw r30,28220(r31)
	REX_STORE_U32(ctx.r31.u32 + 28220, ctx.r30.u32);
	// stw r30,28224(r31)
	REX_STORE_U32(ctx.r31.u32 + 28224, ctx.r30.u32);
	// stw r30,28228(r31)
	REX_STORE_U32(ctx.r31.u32 + 28228, ctx.r30.u32);
	// stw r30,28416(r31)
	REX_STORE_U32(ctx.r31.u32 + 28416, ctx.r30.u32);
	// stw r30,28424(r31)
	REX_STORE_U32(ctx.r31.u32 + 28424, ctx.r30.u32);
	// stw r30,28428(r31)
	REX_STORE_U32(ctx.r31.u32 + 28428, ctx.r30.u32);
	// stw r20,28488(r31)
	REX_STORE_U32(ctx.r31.u32 + 28488, ctx.r20.u32);
	// stw r30,28492(r31)
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r30.u32);
	// stw r20,28496(r31)
	REX_STORE_U32(ctx.r31.u32 + 28496, ctx.r20.u32);
	// stw r30,28500(r31)
	REX_STORE_U32(ctx.r31.u32 + 28500, ctx.r30.u32);
	// stw r30,28504(r31)
	REX_STORE_U32(ctx.r31.u32 + 28504, ctx.r30.u32);
	// stw r20,28508(r31)
	REX_STORE_U32(ctx.r31.u32 + 28508, ctx.r20.u32);
	// stw r30,28512(r31)
	REX_STORE_U32(ctx.r31.u32 + 28512, ctx.r30.u32);
	// stw r16,28516(r31)
	REX_STORE_U32(ctx.r31.u32 + 28516, ctx.r16.u32);
	// stw r30,28520(r31)
	REX_STORE_U32(ctx.r31.u32 + 28520, ctx.r30.u32);
	// stw r30,28524(r31)
	REX_STORE_U32(ctx.r31.u32 + 28524, ctx.r30.u32);
	// stw r30,28528(r31)
	REX_STORE_U32(ctx.r31.u32 + 28528, ctx.r30.u32);
	// stw r30,28532(r31)
	REX_STORE_U32(ctx.r31.u32 + 28532, ctx.r30.u32);
	// stw r30,28536(r31)
	REX_STORE_U32(ctx.r31.u32 + 28536, ctx.r30.u32);
	// stw r30,28540(r31)
	REX_STORE_U32(ctx.r31.u32 + 28540, ctx.r30.u32);
	// stw r30,28552(r31)
	REX_STORE_U32(ctx.r31.u32 + 28552, ctx.r30.u32);
	// stw r30,28556(r31)
	REX_STORE_U32(ctx.r31.u32 + 28556, ctx.r30.u32);
	// stw r30,28560(r31)
	REX_STORE_U32(ctx.r31.u32 + 28560, ctx.r30.u32);
	// stw r30,28564(r31)
	REX_STORE_U32(ctx.r31.u32 + 28564, ctx.r30.u32);
	// stw r30,28568(r31)
	REX_STORE_U32(ctx.r31.u32 + 28568, ctx.r30.u32);
	// stw r30,30220(r31)
	REX_STORE_U32(ctx.r31.u32 + 30220, ctx.r30.u32);
	// stw r30,30224(r31)
	REX_STORE_U32(ctx.r31.u32 + 30224, ctx.r30.u32);
	// stw r30,30228(r31)
	REX_STORE_U32(ctx.r31.u32 + 30228, ctx.r30.u32);
	// stw r30,30304(r31)
	REX_STORE_U32(ctx.r31.u32 + 30304, ctx.r30.u32);
	// bl 0x880fc800
	ctx.lr = 0x88074E5C;
	sub_880FC800(ctx, base);
	// addi r3,r31,30344
	ctx.r3.s64 = ctx.r31.s64 + 30344;
	// bl 0x880fc818
	ctx.lr = 0x88074E64;
	sub_880FC818(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// stw r30,30396(r31)
	REX_STORE_U32(ctx.r31.u32 + 30396, ctx.r30.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r30,30400(r31)
	REX_STORE_U32(ctx.r31.u32 + 30400, ctx.r30.u32);
	// li r5,5000
	ctx.r5.s64 = 5000;
	// stw r30,30404(r31)
	REX_STORE_U32(ctx.r31.u32 + 30404, ctx.r30.u32);
	// stw r11,30408(r31)
	REX_STORE_U32(ctx.r31.u32 + 30408, ctx.r11.u32);
	// stw r11,30412(r31)
	REX_STORE_U32(ctx.r31.u32 + 30412, ctx.r11.u32);
	// stw r30,30416(r31)
	REX_STORE_U32(ctx.r31.u32 + 30416, ctx.r30.u32);
	// stw r30,30420(r31)
	REX_STORE_U32(ctx.r31.u32 + 30420, ctx.r30.u32);
	// stw r30,30424(r31)
	REX_STORE_U32(ctx.r31.u32 + 30424, ctx.r30.u32);
	// stw r20,30428(r31)
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r20.u32);
	// stfd f31,30440(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 30440, ctx.f31.u64);
	// stfd f31,30448(r31)
	REX_STORE_U64(ctx.r31.u32 + 30448, ctx.f31.u64);
	// stfd f31,30456(r31)
	REX_STORE_U64(ctx.r31.u32 + 30456, ctx.f31.u64);
	// stfd f31,30464(r31)
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f31.u64);
	// stfd f31,30472(r31)
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f31.u64);
	// stw r6,30480(r31)
	REX_STORE_U32(ctx.r31.u32 + 30480, ctx.r6.u32);
	// stfd f31,30488(r31)
	REX_STORE_U64(ctx.r31.u32 + 30488, ctx.f31.u64);
	// stfd f31,30496(r31)
	REX_STORE_U64(ctx.r31.u32 + 30496, ctx.f31.u64);
	// stfd f31,30504(r31)
	REX_STORE_U64(ctx.r31.u32 + 30504, ctx.f31.u64);
	// stw r30,30512(r31)
	REX_STORE_U32(ctx.r31.u32 + 30512, ctx.r30.u32);
	// stw r20,30516(r31)
	REX_STORE_U32(ctx.r31.u32 + 30516, ctx.r20.u32);
	// std r30,30520(r31)
	REX_STORE_U64(ctx.r31.u32 + 30520, ctx.r30.u64);
	// std r30,30528(r31)
	REX_STORE_U64(ctx.r31.u32 + 30528, ctx.r30.u64);
	// std r30,30536(r31)
	REX_STORE_U64(ctx.r31.u32 + 30536, ctx.r30.u64);
	// stw r20,30544(r31)
	REX_STORE_U32(ctx.r31.u32 + 30544, ctx.r20.u32);
	// std r5,30552(r31)
	REX_STORE_U64(ctx.r31.u32 + 30552, ctx.r5.u64);
	// stw r30,30584(r31)
	REX_STORE_U32(ctx.r31.u32 + 30584, ctx.r30.u32);
	// stw r20,30588(r31)
	REX_STORE_U32(ctx.r31.u32 + 30588, ctx.r20.u32);
	// stw r30,30592(r31)
	REX_STORE_U32(ctx.r31.u32 + 30592, ctx.r30.u32);
	// stw r30,30596(r31)
	REX_STORE_U32(ctx.r31.u32 + 30596, ctx.r30.u32);
	// stw r30,30864(r31)
	REX_STORE_U32(ctx.r31.u32 + 30864, ctx.r30.u32);
	// stw r30,30868(r31)
	REX_STORE_U32(ctx.r31.u32 + 30868, ctx.r30.u32);
	// stw r30,30872(r31)
	REX_STORE_U32(ctx.r31.u32 + 30872, ctx.r30.u32);
	// stw r30,30876(r31)
	REX_STORE_U32(ctx.r31.u32 + 30876, ctx.r30.u32);
	// stw r30,30880(r31)
	REX_STORE_U32(ctx.r31.u32 + 30880, ctx.r30.u32);
	// stw r30,30884(r31)
	REX_STORE_U32(ctx.r31.u32 + 30884, ctx.r30.u32);
	// stw r30,30888(r31)
	REX_STORE_U32(ctx.r31.u32 + 30888, ctx.r30.u32);
	// stw r30,30892(r31)
	REX_STORE_U32(ctx.r31.u32 + 30892, ctx.r30.u32);
	// stw r30,30896(r31)
	REX_STORE_U32(ctx.r31.u32 + 30896, ctx.r30.u32);
	// stw r30,30900(r31)
	REX_STORE_U32(ctx.r31.u32 + 30900, ctx.r30.u32);
	// stw r30,30904(r31)
	REX_STORE_U32(ctx.r31.u32 + 30904, ctx.r30.u32);
	// stw r30,30908(r31)
	REX_STORE_U32(ctx.r31.u32 + 30908, ctx.r30.u32);
	// stw r30,30912(r31)
	REX_STORE_U32(ctx.r31.u32 + 30912, ctx.r30.u32);
	// stw r30,30916(r31)
	REX_STORE_U32(ctx.r31.u32 + 30916, ctx.r30.u32);
	// stw r16,30920(r31)
	REX_STORE_U32(ctx.r31.u32 + 30920, ctx.r16.u32);
	// stw r16,30924(r31)
	REX_STORE_U32(ctx.r31.u32 + 30924, ctx.r16.u32);
	// stw r16,30928(r31)
	REX_STORE_U32(ctx.r31.u32 + 30928, ctx.r16.u32);
	// stw r16,30932(r31)
	REX_STORE_U32(ctx.r31.u32 + 30932, ctx.r16.u32);
	// stw r30,30936(r31)
	REX_STORE_U32(ctx.r31.u32 + 30936, ctx.r30.u32);
	// stw r30,30940(r31)
	REX_STORE_U32(ctx.r31.u32 + 30940, ctx.r30.u32);
	// stw r30,30944(r31)
	REX_STORE_U32(ctx.r31.u32 + 30944, ctx.r30.u32);
	// stw r30,30948(r31)
	REX_STORE_U32(ctx.r31.u32 + 30948, ctx.r30.u32);
	// stw r30,30952(r31)
	REX_STORE_U32(ctx.r31.u32 + 30952, ctx.r30.u32);
	// stw r30,30956(r31)
	REX_STORE_U32(ctx.r31.u32 + 30956, ctx.r30.u32);
	// stw r16,30960(r31)
	REX_STORE_U32(ctx.r31.u32 + 30960, ctx.r16.u32);
	// stw r16,30964(r31)
	REX_STORE_U32(ctx.r31.u32 + 30964, ctx.r16.u32);
	// stw r16,30968(r31)
	REX_STORE_U32(ctx.r31.u32 + 30968, ctx.r16.u32);
	// stw r16,30972(r31)
	REX_STORE_U32(ctx.r31.u32 + 30972, ctx.r16.u32);
	// stw r29,30976(r31)
	REX_STORE_U32(ctx.r31.u32 + 30976, ctx.r29.u32);
	// stw r29,30980(r31)
	REX_STORE_U32(ctx.r31.u32 + 30980, ctx.r29.u32);
	// stw r29,30984(r31)
	REX_STORE_U32(ctx.r31.u32 + 30984, ctx.r29.u32);
	// stw r29,30988(r31)
	REX_STORE_U32(ctx.r31.u32 + 30988, ctx.r29.u32);
	// stw r29,30992(r31)
	REX_STORE_U32(ctx.r31.u32 + 30992, ctx.r29.u32);
	// stw r30,30996(r31)
	REX_STORE_U32(ctx.r31.u32 + 30996, ctx.r30.u32);
	// stw r29,31000(r31)
	REX_STORE_U32(ctx.r31.u32 + 31000, ctx.r29.u32);
	// stw r29,31004(r31)
	REX_STORE_U32(ctx.r31.u32 + 31004, ctx.r29.u32);
	// stw r29,31008(r31)
	REX_STORE_U32(ctx.r31.u32 + 31008, ctx.r29.u32);
	// stw r29,31012(r31)
	REX_STORE_U32(ctx.r31.u32 + 31012, ctx.r29.u32);
	// stw r29,31016(r31)
	REX_STORE_U32(ctx.r31.u32 + 31016, ctx.r29.u32);
	// stw r29,31020(r31)
	REX_STORE_U32(ctx.r31.u32 + 31020, ctx.r29.u32);
	// stw r20,31024(r31)
	REX_STORE_U32(ctx.r31.u32 + 31024, ctx.r20.u32);
	// stw r29,31028(r31)
	REX_STORE_U32(ctx.r31.u32 + 31028, ctx.r29.u32);
	// stw r29,31032(r31)
	REX_STORE_U32(ctx.r31.u32 + 31032, ctx.r29.u32);
	// stw r30,31036(r31)
	REX_STORE_U32(ctx.r31.u32 + 31036, ctx.r30.u32);
	// stw r30,31040(r31)
	REX_STORE_U32(ctx.r31.u32 + 31040, ctx.r30.u32);
	// stw r29,31044(r31)
	REX_STORE_U32(ctx.r31.u32 + 31044, ctx.r29.u32);
	// stw r16,31048(r31)
	REX_STORE_U32(ctx.r31.u32 + 31048, ctx.r16.u32);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// stw r16,31052(r31)
	REX_STORE_U32(ctx.r31.u32 + 31052, ctx.r16.u32);
	// addi r11,r31,552
	ctx.r11.s64 = ctx.r31.s64 + 552;
	// stw r16,31056(r31)
	REX_STORE_U32(ctx.r31.u32 + 31056, ctx.r16.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r16,31060(r31)
	REX_STORE_U32(ctx.r31.u32 + 31060, ctx.r16.u32);
	// stw r16,31064(r31)
	REX_STORE_U32(ctx.r31.u32 + 31064, ctx.r16.u32);
	// stw r16,31068(r31)
	REX_STORE_U32(ctx.r31.u32 + 31068, ctx.r16.u32);
	// lfd f28,8624(r4)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r4.u32 + 8624);
	// stw r16,31072(r31)
	REX_STORE_U32(ctx.r31.u32 + 31072, ctx.r16.u32);
	// stw r16,31076(r31)
	REX_STORE_U32(ctx.r31.u32 + 31076, ctx.r16.u32);
	// stw r29,31080(r31)
	REX_STORE_U32(ctx.r31.u32 + 31080, ctx.r29.u32);
	// stw r30,31084(r31)
	REX_STORE_U32(ctx.r31.u32 + 31084, ctx.r30.u32);
	// stw r30,31092(r31)
	REX_STORE_U32(ctx.r31.u32 + 31092, ctx.r30.u32);
	// stw r30,31096(r31)
	REX_STORE_U32(ctx.r31.u32 + 31096, ctx.r30.u32);
	// stw r30,31100(r31)
	REX_STORE_U32(ctx.r31.u32 + 31100, ctx.r30.u32);
	// stw r30,31104(r31)
	REX_STORE_U32(ctx.r31.u32 + 31104, ctx.r30.u32);
	// stw r30,31108(r31)
	REX_STORE_U32(ctx.r31.u32 + 31108, ctx.r30.u32);
	// stw r20,31112(r31)
	REX_STORE_U32(ctx.r31.u32 + 31112, ctx.r20.u32);
	// stw r30,31116(r31)
	REX_STORE_U32(ctx.r31.u32 + 31116, ctx.r30.u32);
	// stw r30,31472(r31)
	REX_STORE_U32(ctx.r31.u32 + 31472, ctx.r30.u32);
	// stw r30,31476(r31)
	REX_STORE_U32(ctx.r31.u32 + 31476, ctx.r30.u32);
	// stw r30,31480(r31)
	REX_STORE_U32(ctx.r31.u32 + 31480, ctx.r30.u32);
	// stw r30,31484(r31)
	REX_STORE_U32(ctx.r31.u32 + 31484, ctx.r30.u32);
	// stw r30,31488(r31)
	REX_STORE_U32(ctx.r31.u32 + 31488, ctx.r30.u32);
	// stw r30,31492(r31)
	REX_STORE_U32(ctx.r31.u32 + 31492, ctx.r30.u32);
	// stw r30,31496(r31)
	REX_STORE_U32(ctx.r31.u32 + 31496, ctx.r30.u32);
	// stw r30,31500(r31)
	REX_STORE_U32(ctx.r31.u32 + 31500, ctx.r30.u32);
	// stw r30,31504(r31)
	REX_STORE_U32(ctx.r31.u32 + 31504, ctx.r30.u32);
	// stfd f28,31512(r31)
	REX_STORE_U64(ctx.r31.u32 + 31512, ctx.f28.u64);
	// stfd f28,31520(r31)
	REX_STORE_U64(ctx.r31.u32 + 31520, ctx.f28.u64);
	// stw r30,31532(r31)
	REX_STORE_U32(ctx.r31.u32 + 31532, ctx.r30.u32);
	// stb r30,31536(r31)
	REX_STORE_U8(ctx.r31.u32 + 31536, ctx.r30.u8);
	// stb r30,31537(r31)
	REX_STORE_U8(ctx.r31.u32 + 31537, ctx.r30.u8);
	// stb r30,31538(r31)
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r30.u8);
	// stb r30,31539(r31)
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r30.u8);
	// stw r30,31540(r31)
	REX_STORE_U32(ctx.r31.u32 + 31540, ctx.r30.u32);
	// stw r30,31544(r31)
	REX_STORE_U32(ctx.r31.u32 + 31544, ctx.r30.u32);
	// stw r30,31548(r31)
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r30.u32);
	// stw r30,31552(r31)
	REX_STORE_U32(ctx.r31.u32 + 31552, ctx.r30.u32);
	// stw r20,30432(r31)
	REX_STORE_U32(ctx.r31.u32 + 30432, ctx.r20.u32);
	// stw r30,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// beq cr6,0x88075090
	if (ctx.cr6.eq) goto loc_88075090;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8176(r31)
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r11.u32);
	// lwz r10,124(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807507c
	if (ctx.cr6.eq) goto loc_8807507C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,19212(r31)
	REX_STORE_U32(ctx.r31.u32 + 19212, ctx.r11.u32);
loc_8807507C:
	// lwz r11,196(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88075090
	if (ctx.cr6.eq) goto loc_88075090;
	// lwz r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 88);
	// stw r11,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
loc_88075090:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880750b4
	if (ctx.cr6.eq) goto loc_880750B4;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880750b4
	if (ctx.cr6.eq) goto loc_880750B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,21156(r31)
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r11.u32);
loc_880750B4:
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x880750c4
	if (ctx.cr6.eq) goto loc_880750C4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880750d0
	if (!ctx.cr6.eq) goto loc_880750D0;
loc_880750C4:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x880750d0
	if (ctx.cr6.gt) goto loc_880750D0;
	// stfd f29,7896(r31)
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f29.u64);
loc_880750D0:
	// stw r30,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r30,856(r31)
	REX_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// stw r30,840(r31)
	REX_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r30,844(r31)
	REX_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// lwz r26,588(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// stw r30,6748(r31)
	REX_STORE_U32(ctx.r31.u32 + 6748, ctx.r30.u32);
	// beq cr6,0x88075100
	if (ctx.cr6.eq) goto loc_88075100;
	// stw r11,808(r31)
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// b 0x88075104
	goto loc_88075104;
loc_88075100:
	// stw r26,808(r31)
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r26.u32);
loc_88075104:
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r27,596(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807511c
	if (ctx.cr6.eq) goto loc_8807511C;
	// stw r11,812(r31)
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
	// b 0x88075120
	goto loc_88075120;
loc_8807511C:
	// stw r27,812(r31)
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r27.u32);
loc_88075120:
	// lwz r17,572(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// stw r17,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// lwz r11,30432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075144
	if (!ctx.cr6.eq) goto loc_88075144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807df68
	ctx.lr = 0x88075144;
	sub_8807DF68(ctx, base);
loc_88075144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c04f0
	ctx.lr = 0x8807514C;
	sub_880C04F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88075160
	if (!ctx.cr6.eq) goto loc_88075160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880823d0
	ctx.lr = 0x88075160;
	sub_880823D0(ctx, base);
loc_88075160:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807df18
	ctx.lr = 0x88075170;
	sub_8807DF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807de70
	ctx.lr = 0x88075178;
	sub_8807DE70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807de90
	ctx.lr = 0x88075180;
	sub_8807DE90(ctx, base);
	// li r5,3872
	ctx.r5.s64 = 3872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2848
	ctx.r3.s64 = ctx.r31.s64 + 2848;
	// bl 0x88052d90
	ctx.lr = 0x88075190;
	sub_88052D90(ctx, base);
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880751dc
	if (!ctx.cr6.eq) goto loc_880751DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880751c0
	if (!ctx.cr6.eq) goto loc_880751C0;
	// lfd f0,7896(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x880751c0
	if (ctx.cr6.eq) goto loc_880751C0;
	// lfd f0,7888(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x880751dc
	if (!ctx.cr6.eq) goto loc_880751DC;
loc_880751C0:
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x880751D8;
	__restfpr_27(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880751DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88075218
	if (!ctx.cr6.eq) goto loc_88075218;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r20,30408(r31)
	REX_STORE_U32(ctx.r31.u32 + 30408, ctx.r20.u32);
	// lwz r10,30432(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807520c
	if (!ctx.cr6.eq) goto loc_8807520C;
	// stw r20,31548(r31)
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r20.u32);
	// stw r20,30428(r31)
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r20.u32);
	// b 0x88075214
	goto loc_88075214;
loc_8807520C:
	// stw r30,31548(r31)
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r30.u32);
	// stw r30,30428(r31)
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r30.u32);
loc_88075214:
	// stw r20,1620(r31)
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r20.u32);
loc_88075218:
	// lwz r11,8108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8108);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88075228
	if (!ctx.cr6.eq) goto loc_88075228;
	// stw r20,8108(r31)
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r20.u32);
loc_88075228:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,756(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// bne cr6,0x880752a0
	if (!ctx.cr6.eq) goto loc_880752A0;
	// lwz r10,716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// stw r11,28492(r31)
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r11.u32);
	// stw r11,27988(r31)
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r11.u32);
	// stw r20,2572(r31)
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r20.u32);
	// stw r10,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r10.u32);
	// lwz r9,30408(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88075284
	if (ctx.cr6.eq) goto loc_88075284;
	// lwz r11,30432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075284
	if (!ctx.cr6.eq) goto loc_88075284;
	// lwz r28,740(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f9ee8
	ctx.lr = 0x88075280;
	sub_880F9EE8(ctx, base);
	// b 0x880752dc
	goto loc_880752DC;
loc_88075284:
	// lwz r28,740(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806faf0
	ctx.lr = 0x8807529C;
	sub_8806FAF0(ctx, base);
	// b 0x880752dc
	goto loc_880752DC;
loc_880752A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880752c4
	if (ctx.cr6.eq) goto loc_880752C4;
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x880752C0;
	__restfpr_27(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880752C4:
	// lwz r11,716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r28,740(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// bl 0x8806f8c8
	ctx.lr = 0x880752DC;
	sub_8806F8C8(ctx, base);
loc_880752DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88075328
	if (ctx.cr6.eq) goto loc_88075328;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x88075314
	if (!ctx.cr6.eq) goto loc_88075314;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88075328
	if (!ctx.cr6.eq) goto loc_88075328;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,2124(r31)
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r31)
	REX_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
	// b 0x88075328
	goto loc_88075328;
loc_88075314:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88075328
	if (!ctx.cr6.eq) goto loc_88075328;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,28492(r31)
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r11.u32);
	// stw r11,27988(r31)
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r11.u32);
loc_88075328:
	// lwz r11,708(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,2176(r31)
	REX_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// lfd f0,9672(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 9672);
	// stw r26,796(r31)
	REX_STORE_U32(ctx.r31.u32 + 796, ctx.r26.u32);
	// stw r27,800(r31)
	REX_STORE_U32(ctx.r31.u32 + 800, ctx.r27.u32);
	// lwz r9,796(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// stw r8,804(r31)
	REX_STORE_U32(ctx.r31.u32 + 804, ctx.r8.u32);
	// lfd f13,7688(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8807535c
	if (!ctx.cr6.lt) goto loc_8807535C;
	// stfd f0,7688(r31)
	REX_STORE_U64(ctx.r31.u32 + 7688, ctx.f0.u64);
loc_8807535C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lwz r22,644(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lfd f0,12400(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12400);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x88075380
	if (!ctx.cr6.gt) goto loc_88075380;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x88075380
	if (ctx.cr6.eq) goto loc_88075380;
	// stfd f0,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_88075380:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,7596(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f29,632(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lfd f27,12392(r11)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 12392);
	// lfd f30,12000(r9)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 12000);
	// bne cr6,0x8807546c
	if (!ctx.cr6.eq) goto loc_8807546C;
	// lfd f0,7896(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x880753c8
	if (!ctx.cr6.gt) goto loc_880753C8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,7888(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,12384(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12384);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x880753c8
	if (ctx.cr6.gt) goto loc_880753C8;
	// stw r30,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_880753C8:
	// fcfid f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f29.s64);
	// lfd f12,7688(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12096(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12096);
	// fmul f11,f13,f12
	ctx.f11.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x880753ec
	if (!ctx.cr6.lt) goto loc_880753EC;
	// stw r30,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_880753EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// beq cr6,0x88075430
	if (ctx.cr6.eq) goto loc_88075430;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fmul f13,f0,f27
	ctx.f13.f64 = ctx.f0.f64 * ctx.f27.f64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lfd f0,12376(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12376);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadd f10,f11,f0,f28
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f28.f64);
	// fdiv f0,f13,f10
	ctx.f0.f64 = ctx.f13.f64 / ctx.f10.f64;
	// b 0x88075458
	goto loc_88075458;
loc_88075430:
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lfd f13,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fmul f12,f0,f27
	ctx.f12.f64 = ctx.f0.f64 * ctx.f27.f64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmadd f9,f10,f13,f28
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f28.f64);
	// fdiv f0,f12,f9
	ctx.f0.f64 = ctx.f12.f64 / ctx.f9.f64;
loc_88075458:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12368);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807546c
	if (!ctx.cr6.lt) goto loc_8807546C;
	// stw r30,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_8807546C:
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807547c
	if (ctx.cr6.eq) goto loc_8807547C;
	// stw r29,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r29.u32);
loc_8807547C:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88075494
	if (ctx.cr6.eq) goto loc_88075494;
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075498
	if (!ctx.cr6.eq) goto loc_88075498;
loc_88075494:
	// stw r20,30304(r31)
	REX_STORE_U32(ctx.r31.u32 + 30304, ctx.r20.u32);
loc_88075498:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880754b0
	if (!ctx.cr6.eq) goto loc_880754B0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12360);
	// stfd f0,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_880754B0:
	// lwz r11,8104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r16,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r16.u32);
	// stw r16,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r16.u32);
	// stw r30,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r16,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// stw r16,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// blt cr6,0x88076d78
	if (ctx.cr6.lt) goto loc_88076D78;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x88076d78
	if (ctx.cr6.gt) goto loc_88076D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806c380
	ctx.lr = 0x880754F0;
	sub_8806C380(ctx, base);
	// stw r30,6868(r31)
	REX_STORE_U32(ctx.r31.u32 + 6868, ctx.r30.u32);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,60
	ctx.r3.s64 = 60;
	// ori r19,r11,32768
	ctx.r19.u64 = ctx.r11.u64 | 32768;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075508;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88075530
	if (ctx.cr6.eq) goto loc_88075530;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x880e6920
	ctx.lr = 0x8807552C;
	sub_880E6920(ctx, base);
	// b 0x88075534
	goto loc_88075534;
loc_88075530:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88075534:
	// stw r3,7868(r31)
	REX_STORE_U32(ctx.r31.u32 + 7868, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// bl 0x880e6900
	ctx.lr = 0x88075544;
	sub_880E6900(ctx, base);
	// fcfid f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f29.s64);
	// lfd f13,7688(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f13,12088(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x88075578
	if (!ctx.cr6.gt) goto loc_88075578;
	// fmadd f0,f0,f30,f13
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f13.f64);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x88075588
	goto loc_88075588;
loc_88075578:
	// fmsub f0,f0,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, -ctx.f13.f64);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_88075588:
	// lwz r4,764(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// stw r11,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880755a0
	if (ctx.cr6.eq) goto loc_880755A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806cbe8
	ctx.lr = 0x880755A0;
	sub_8806CBE8(ctx, base);
loc_880755A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x880547a0
	ctx.lr = 0x880755B4;
	sub_880547A0(ctx, base);
	// ld r29,240(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// ld r28,248(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r27,256(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r26,264(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r25,272(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ld r24,280(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ld r23,288(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bl 0x8806c6e0
	ctx.lr = 0x880755F4;
	sub_8806C6E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x880547a0
	ctx.lr = 0x88075604;
	sub_880547A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072e70
	ctx.lr = 0x88075628;
	sub_88072E70(ctx, base);
	// stw r20,6864(r31)
	REX_STORE_U32(ctx.r31.u32 + 6864, ctx.r20.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88075690
	if (ctx.cr6.eq) goto loc_88075690;
	// lwz r11,724(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807564c
	if (!ctx.cr6.eq) goto loc_8807564C;
	// stw r20,7228(r31)
	REX_STORE_U32(ctx.r31.u32 + 7228, ctx.r20.u32);
	// b 0x88075690
	goto loc_88075690;
loc_8807564C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x8807565c
	if (ctx.cr6.eq) goto loc_8807565C;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
loc_8807565C:
	// lwz r10,732(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// beq cr6,0x88075670
	if (ctx.cr6.eq) goto loc_88075670;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
loc_88075670:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x8807567c
	if (!ctx.cr6.eq) goto loc_8807567C;
	// stw r20,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
loc_8807567C:
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x88075690
	if (!ctx.cr6.eq) goto loc_88075690;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_88075690:
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880756a4
	if (ctx.cr6.eq) goto loc_880756A4;
	// stw r30,7880(r31)
	REX_STORE_U32(ctx.r31.u32 + 7880, ctx.r30.u32);
	// b 0x880756b0
	goto loc_880756B0;
loc_880756A4:
	// lwz r11,692(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,7880(r31)
	REX_STORE_U32(ctx.r31.u32 + 7880, ctx.r10.u32);
loc_880756B0:
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// lis r24,-30680
	ctx.r24.s64 = -2010644480;
	// addi r10,r11,18712
	ctx.r10.s64 = ctx.r11.s64 + 18712;
	// lis r23,-30680
	ctx.r23.s64 = -2010644480;
	// stw r10,8184(r31)
	REX_STORE_U32(ctx.r31.u32 + 8184, ctx.r10.u32);
	// stw r16,748(r31)
	REX_STORE_U32(ctx.r31.u32 + 748, ctx.r16.u32);
	// lwz r11,18412(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880756e0
	if (!ctx.cr6.eq) goto loc_880756E0;
	// lwz r11,18416(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880756e4
	if (ctx.cr6.eq) goto loc_880756E4;
loc_880756E0:
	// stw r30,748(r31)
	REX_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
loc_880756E4:
	// lwz r11,7752(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880756fc
	if (!ctx.cr6.eq) goto loc_880756FC;
	// stw r20,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r20.u32);
	// stw r20,19464(r31)
	REX_STORE_U32(ctx.r31.u32 + 19464, ctx.r20.u32);
	// b 0x88075700
	goto loc_88075700;
loc_880756FC:
	// stw r30,19464(r31)
	REX_STORE_U32(ctx.r31.u32 + 19464, ctx.r30.u32);
loc_88075700:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8807571c
	if (ctx.cr6.eq) goto loc_8807571C;
	// lwz r11,7752(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x88075718
	if (ctx.cr6.lt) goto loc_88075718;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_88075718:
	// stw r11,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r11.u32);
loc_8807571C:
	// ld r11,632(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,7704(r31)
	REX_STORE_U64(ctx.r31.u32 + 7704, ctx.r11.u64);
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f13,f27,f0
	ctx.f13.f64 = ctx.f27.f64 / ctx.f0.f64;
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,7720(r31)
	REX_STORE_U64(ctx.r31.u32 + 7720, ctx.f12.u64);
	// stw r30,7872(r31)
	REX_STORE_U32(ctx.r31.u32 + 7872, ctx.r30.u32);
	// bl 0x88100f30
	ctx.lr = 0x88075740;
	sub_88100F30(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x88050340
	ctx.lr = 0x8807574C;
	sub_88050340(ctx, base);
	// stw r3,17536(r31)
	REX_STORE_U32(ctx.r31.u32 + 17536, ctx.r3.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x88050340
	ctx.lr = 0x8807575C;
	sub_88050340(ctx, base);
	// stw r3,17540(r31)
	REX_STORE_U32(ctx.r31.u32 + 17540, ctx.r3.u32);
	// lwz r11,17536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88052d90
	ctx.lr = 0x88075784;
	sub_88052D90(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17540(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// bl 0x88052d90
	ctx.lr = 0x88075794;
	sub_88052D90(ctx, base);
	// lwz r11,17536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// li r21,128
	ctx.r21.s64 = 128;
	// sth r21,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r21.u16);
	// lwz r10,17540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// sth r21,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r21.u16);
	// bl 0x880e2860
	ctx.lr = 0x880757AC;
	sub_880E2860(ctx, base);
	// lis r9,-30679
	ctx.r9.s64 = -2010578944;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,-23196(r9)
	REX_STORE_U32(ctx.r9.u32 + -23196, ctx.r20.u32);
	// bl 0x880e2860
	ctx.lr = 0x880757BC;
	sub_880E2860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f6f8
	ctx.lr = 0x880757C4;
	sub_8806F6F8(ctx, base);
	// lis r8,-30705
	ctx.r8.s64 = -2012282880;
	// lis r7,-30705
	ctx.r7.s64 = -2012282880;
	// lis r6,-30705
	ctx.r6.s64 = -2012282880;
	// addi r5,r8,-10064
	ctx.r5.s64 = ctx.r8.s64 + -10064;
	// addi r3,r7,-7880
	ctx.r3.s64 = ctx.r7.s64 + -7880;
	// addi r10,r6,-9888
	ctx.r10.s64 = ctx.r6.s64 + -9888;
	// stw r5,8084(r31)
	REX_STORE_U32(ctx.r31.u32 + 8084, ctx.r5.u32);
	// stw r3,8088(r31)
	REX_STORE_U32(ctx.r31.u32 + 8088, ctx.r3.u32);
	// lis r4,-30705
	ctx.r4.s64 = -2012282880;
	// stw r10,8092(r31)
	REX_STORE_U32(ctx.r31.u32 + 8092, ctx.r10.u32);
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r9,r4,-9096
	ctx.r9.s64 = ctx.r4.s64 + -9096;
	// lis r8,-30679
	ctx.r8.s64 = -2010578944;
	// addi r7,r11,-8328
	ctx.r7.s64 = ctx.r11.s64 + -8328;
	// stw r9,8096(r31)
	REX_STORE_U32(ctx.r31.u32 + 8096, ctx.r9.u32);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lis r5,-30705
	ctx.r5.s64 = -2012282880;
	// stw r7,8100(r31)
	REX_STORE_U32(ctx.r31.u32 + 8100, ctx.r7.u32);
	// lis r4,-30705
	ctx.r4.s64 = -2012282880;
	// stw r20,28552(r31)
	REX_STORE_U32(ctx.r31.u32 + 28552, ctx.r20.u32);
	// addi r10,r5,28664
	ctx.r10.s64 = ctx.r5.s64 + 28664;
	// addi r9,r4,30960
	ctx.r9.s64 = ctx.r4.s64 + 30960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-25280(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -25280);
	// stw r11,-22720(r6)
	REX_STORE_U32(ctx.r6.u32 + -22720, ctx.r11.u32);
	// stw r11,1600(r31)
	REX_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r10,1588(r31)
	REX_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// stw r9,1592(r31)
	REX_STORE_U32(ctx.r31.u32 + 1592, ctx.r9.u32);
	// bl 0x881054f8
	ctx.lr = 0x88075838;
	sub_881054F8(ctx, base);
	// lwz r8,2572(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88075858
	if (ctx.cr6.eq) goto loc_88075858;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// addi r9,r11,-31248
	ctx.r9.s64 = ctx.r11.s64 + -31248;
	// addi r8,r10,-30832
	ctx.r8.s64 = ctx.r10.s64 + -30832;
	// b 0x88075868
	goto loc_88075868;
loc_88075858:
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// addi r9,r11,-32024
	ctx.r9.s64 = ctx.r11.s64 + -32024;
	// addi r8,r10,-31728
	ctx.r8.s64 = ctx.r10.s64 + -31728;
loc_88075868:
	// stw r9,8188(r31)
	REX_STORE_U32(ctx.r31.u32 + 8188, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8192(r31)
	REX_STORE_U32(ctx.r31.u32 + 8192, ctx.r8.u32);
	// bl 0x880e6c70
	ctx.lr = 0x88075878;
	sub_880E6C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810e5c0
	ctx.lr = 0x88075880;
	sub_8810E5C0(ctx, base);
	// bl 0x8810a908
	ctx.lr = 0x88075884;
	sub_8810A908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806ee88
	ctx.lr = 0x8807588C;
	sub_8806EE88(ctx, base);
	// stw r30,7760(r31)
	REX_STORE_U32(ctx.r31.u32 + 7760, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d178
	ctx.lr = 0x88075898;
	sub_8806D178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072c48
	ctx.lr = 0x880758A0;
	sub_88072C48(ctx, base);
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,18420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18420);
	// stw r11,6776(r31)
	REX_STORE_U32(ctx.r31.u32 + 6776, ctx.r11.u32);
	// bl 0x8806c478
	ctx.lr = 0x880758C4;
	sub_8806C478(ctx, base);
	// bl 0x88061460
	ctx.lr = 0x880758C8;
	sub_88061460(ctx, base);
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x880758d8
	if (!ctx.cr6.gt) goto loc_880758D8;
	// stw r30,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
loc_880758D8:
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r22,r9,65535
	ctx.r22.u64 = ctx.r9.u64 | 65535;
	// rlwinm r11,r8,0,22,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380;
	// li r14,-1
	ctx.r14.s64 = -1;
	// addi r7,r11,640
	ctx.r7.s64 = ctx.r11.s64 + 640;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075910
	if (!ctx.cr6.gt) goto loc_88075910;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075910:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075918;
	sub_88050340(ctx, base);
	// stw r3,2344(r31)
	REX_STORE_U32(ctx.r31.u32 + 2344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,2348(r31)
	REX_STORE_U32(ctx.r31.u32 + 2348, ctx.r11.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2352(r31)
	REX_STORE_U32(ctx.r31.u32 + 2352, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2356(r31)
	REX_STORE_U32(ctx.r31.u32 + 2356, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2360(r31)
	REX_STORE_U32(ctx.r31.u32 + 2360, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2364(r31)
	REX_STORE_U32(ctx.r31.u32 + 2364, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2368(r31)
	REX_STORE_U32(ctx.r31.u32 + 2368, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2372(r31)
	REX_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x88075a74
	if (!ctx.cr6.gt) goto loc_88075A74;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2376(r31)
	REX_STORE_U32(ctx.r31.u32 + 2376, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2384(r31)
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r3.u32);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r8.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r4.u32);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r9.u32);
loc_88075A74:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075a94
	if (!ctx.cr6.gt) goto loc_88075A94;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075A94:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075A9C;
	sub_88050340(ctx, base);
	// stw r3,2312(r31)
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r15,r9,65535
	ctx.r15.u64 = ctx.r9.u64 | 65535;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x88075acc
	if (!ctx.cr6.gt) goto loc_88075ACC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075ACC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075AD4;
	sub_88050340(ctx, base);
	// stw r3,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r30,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// lwz r9,1360(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,160
	ctx.r3.s64 = ctx.r10.s64 + 160;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88075b10
	if (!ctx.cr6.lt) goto loc_88075B10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_88075B10:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075B18;
	sub_88050340(ctx, base);
	// stw r3,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,2332(r31)
	REX_STORE_U32(ctx.r31.u32 + 2332, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r11,2312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2316(r31)
	REX_STORE_U32(ctx.r31.u32 + 2316, ctx.r8.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,2320(r31)
	REX_STORE_U32(ctx.r31.u32 + 2320, ctx.r6.u32);
	// lwz r3,2312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x88052d90
	ctx.lr = 0x88075B74;
	sub_88052D90(ctx, base);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075b8c
	if (!ctx.cr6.gt) goto loc_88075B8C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075B8C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075B94;
	sub_88050340(ctx, base);
	// stw r3,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2444(r31)
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r10.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075bd4
	if (!ctx.cr6.gt) goto loc_88075BD4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075BD4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075BDC;
	sub_88050340(ctx, base);
	// stw r3,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88052d90
	ctx.lr = 0x88075C04;
	sub_88052D90(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,2448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,2452(r31)
	REX_STORE_U32(ctx.r31.u32 + 2452, ctx.r4.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075c48
	if (!ctx.cr6.gt) goto loc_88075C48;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075C48:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075C50;
	sub_88050340(ctx, base);
	// stw r3,7848(r31)
	REX_STORE_U32(ctx.r31.u32 + 7848, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88052d90
	ctx.lr = 0x88075C78;
	sub_88052D90(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,7848(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,7852(r31)
	REX_STORE_U32(ctx.r31.u32 + 7852, ctx.r4.u32);
	// lwz r3,728(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075cb0
	if (!ctx.cr6.gt) goto loc_88075CB0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075CB0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075CB8;
	sub_88050340(ctx, base);
	// stw r3,2472(r31)
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2476(r31)
	REX_STORE_U32(ctx.r31.u32 + 2476, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075cec
	if (!ctx.cr6.gt) goto loc_88075CEC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075CEC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075CF4;
	sub_88050340(ctx, base);
	// stw r3,2456(r31)
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2460(r31)
	REX_STORE_U32(ctx.r31.u32 + 2460, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88075d28
	if (!ctx.cr6.gt) goto loc_88075D28;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075D28:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075D30;
	sub_88050340(ctx, base);
	// stw r3,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,2468(r31)
	REX_STORE_U32(ctx.r31.u32 + 2468, ctx.r8.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x88075d70
	if (ctx.cr6.gt) goto loc_88075D70;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x88075d74
	goto loc_88075D74;
loc_88075D70:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075D74:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075D7C;
	sub_88050340(ctx, base);
	// stw r3,2164(r31)
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// ori r18,r10,65535
	ctx.r18.u64 = ctx.r10.u64 | 65535;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x88075db4
	if (!ctx.cr6.gt) goto loc_88075DB4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075DB4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075DBC;
	sub_88050340(ctx, base);
	// stw r3,1680(r31)
	REX_STORE_U32(ctx.r31.u32 + 1680, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r25,-5
	ctx.r25.s64 = -5;
	// ori r26,r11,29443
	ctx.r26.u64 = ctx.r11.u64 | 29443;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88075df0
	if (ctx.cr6.gt) goto loc_88075DF0;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x88075df4
	if (!ctx.cr6.gt) goto loc_88075DF4;
loc_88075DF0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075DF4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075DFC;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88075e34
	if (ctx.cr6.eq) goto loc_88075E34;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88075e2c
	if (ctx.cr0.lt) goto loc_88075E2C;
loc_88075E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88075E20;
	sub_880D90B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88075e18
	if (!ctx.cr0.lt) goto loc_88075E18;
loc_88075E2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x88075e38
	goto loc_88075E38;
loc_88075E34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88075E38:
	// stw r3,7764(r31)
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x88075E54;
	sub_88052D90(ctx, base);
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88075e70
	if (ctx.cr6.gt) goto loc_88075E70;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x88075e74
	if (!ctx.cr6.gt) goto loc_88075E74;
loc_88075E70:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88075E74:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88075E7C;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88075eb4
	if (ctx.cr6.eq) goto loc_88075EB4;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88075eac
	if (ctx.cr0.lt) goto loc_88075EAC;
loc_88075E98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88075EA0;
	sub_880D90B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88075e98
	if (!ctx.cr0.lt) goto loc_88075E98;
loc_88075EAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x88075eb8
	goto loc_88075EB8;
loc_88075EB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88075EB8:
	// stw r3,7768(r31)
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x88075ED4;
	sub_88052D90(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88075fc0
	if (ctx.cr6.eq) goto loc_88075FC0;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_88075EEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88075fb0
	if (ctx.cr6.eq) goto loc_88075FB0;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mulli r10,r6,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(276));
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_88075F04:
	// lwz r5,724(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r5,r5,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r5,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lwz r9,7768(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7768);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r3,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x2;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r5,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88075f04
	if (ctx.cr6.lt) goto loc_88075F04;
loc_88075FB0:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88075eec
	if (ctx.cr6.lt) goto loc_88075EEC;
loc_88075FC0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076060
	if (ctx.cr6.eq) goto loc_88076060;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_88075FD4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88076050
	if (ctx.cr6.eq) goto loc_88076050;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r8,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_88075FEC:
	// lwz r7,724(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r7.u32);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88075fec
	if (ctx.cr6.lt) goto loc_88075FEC;
loc_88076050:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88075fd4
	if (ctx.cr6.lt) goto loc_88075FD4;
loc_88076060:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x88050340
	ctx.lr = 0x8807606C;
	sub_88050340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076084
	if (ctx.cr6.eq) goto loc_88076084;
	// bl 0x880d90b8
	ctx.lr = 0x8807607C;
	sub_880D90B8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x88076088
	goto loc_88076088;
loc_88076084:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88076088:
	// stw r11,7772(r31)
	REX_STORE_U32(ctx.r31.u32 + 7772, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,7772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r10,7772(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r9,7772(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r8,7772(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// lwz r7,7772(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r30.u32);
	// lwz r6,6864(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880762f0
	if (ctx.cr6.eq) goto loc_880762F0;
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x880760e8
	if (ctx.cr6.gt) goto loc_880760E8;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x880760ec
	if (!ctx.cr6.gt) goto loc_880760EC;
loc_880760E8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880760EC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880760F4;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807612c
	if (ctx.cr6.eq) goto loc_8807612C;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88076124
	if (ctx.cr0.lt) goto loc_88076124;
loc_88076110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88076118;
	sub_880D90B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88076110
	if (!ctx.cr0.lt) goto loc_88076110;
loc_88076124:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x88076130
	goto loc_88076130;
loc_8807612C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88076130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,7788(r31)
	REX_STORE_U32(ctx.r31.u32 + 7788, ctx.r11.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x88076158
	if (ctx.cr6.gt) goto loc_88076158;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8807615c
	if (!ctx.cr6.gt) goto loc_8807615C;
loc_88076158:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_8807615C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076164;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807619c
	if (ctx.cr6.eq) goto loc_8807619C;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x88076194
	if (ctx.cr0.lt) goto loc_88076194;
loc_88076180:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880d90b8
	ctx.lr = 0x88076188;
	sub_880D90B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x88076180
	if (!ctx.cr0.lt) goto loc_88076180;
loc_88076194:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x880761a0
	goto loc_880761A0;
loc_8807619C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_880761A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,7792(r31)
	REX_STORE_U32(ctx.r31.u32 + 7792, ctx.r11.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,7788(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x880761C0;
	sub_88052D90(ctx, base);
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r3,7792(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r10,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// bl 0x88052d90
	ctx.lr = 0x880761D4;
	sub_88052D90(ctx, base);
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x88076284
	if (!ctx.cr6.gt) goto loc_88076284;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_880761EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88076274
	if (ctx.cr6.eq) goto loc_88076274;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r8,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_88076204:
	// lwz r7,724(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7788(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r7.u32);
	// lwz r9,7792(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,120(r4)
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r7.u32);
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88076204
	if (ctx.cr6.lt) goto loc_88076204;
loc_88076274:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880761ec
	if (ctx.cr6.lt) goto loc_880761EC;
loc_88076284:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88050340
	ctx.lr = 0x88076294;
	sub_88050340(ctx, base);
	// stw r3,7832(r31)
	REX_STORE_U32(ctx.r31.u32 + 7832, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r11,2796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,7780(r31)
	REX_STORE_U32(ctx.r31.u32 + 7780, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,728(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,7784(r31)
	REX_STORE_U32(ctx.r31.u32 + 7784, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,7796(r31)
	REX_STORE_U32(ctx.r31.u32 + 7796, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,7800(r31)
	REX_STORE_U32(ctx.r31.u32 + 7800, ctx.r3.u32);
loc_880762F0:
	// lwz r11,1612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807632c
	if (ctx.cr6.eq) goto loc_8807632C;
	// lwz r10,1360(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x88050340
	ctx.lr = 0x88076320;
	sub_88050340(ctx, base);
	// stw r3,7232(r31)
	REX_STORE_U32(ctx.r31.u32 + 7232, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
loc_8807632C:
	// lwz r11,2336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880763a0
	if (ctx.cr6.eq) goto loc_880763A0;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076350
	if (!ctx.cr6.eq) goto loc_88076350;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// b 0x88076368
	goto loc_88076368;
loc_88076350:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// bge cr6,0x88076364
	if (!ctx.cr6.lt) goto loc_88076364;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x88076368
	goto loc_88076368;
loc_88076364:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88076368:
	// stw r11,7072(r31)
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076384
	if (!ctx.cr6.eq) goto loc_88076384;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// b 0x8807639c
	goto loc_8807639C;
loc_88076384:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// bge cr6,0x88076398
	if (!ctx.cr6.lt) goto loc_88076398;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x8807639c
	goto loc_8807639C;
loc_88076398:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8807639C:
	// stw r11,7076(r31)
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r11.u32);
loc_880763A0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076428
	if (ctx.cr6.eq) goto loc_88076428;
	// stw r20,28568(r31)
	REX_STORE_U32(ctx.r31.u32 + 28568, ctx.r20.u32);
	// li r5,504
	ctx.r5.s64 = 504;
	// stw r30,28588(r31)
	REX_STORE_U32(ctx.r31.u32 + 28588, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,28592(r31)
	REX_STORE_U32(ctx.r31.u32 + 28592, ctx.r30.u32);
	// addi r3,r31,29412
	ctx.r3.s64 = ctx.r31.s64 + 29412;
	// stw r30,28596(r31)
	REX_STORE_U32(ctx.r31.u32 + 28596, ctx.r30.u32);
	// stw r30,28600(r31)
	REX_STORE_U32(ctx.r31.u32 + 28600, ctx.r30.u32);
	// stw r30,28640(r31)
	REX_STORE_U32(ctx.r31.u32 + 28640, ctx.r30.u32);
	// stw r30,28644(r31)
	REX_STORE_U32(ctx.r31.u32 + 28644, ctx.r30.u32);
	// stw r30,28648(r31)
	REX_STORE_U32(ctx.r31.u32 + 28648, ctx.r30.u32);
	// stw r30,30152(r31)
	REX_STORE_U32(ctx.r31.u32 + 30152, ctx.r30.u32);
	// stw r30,28652(r31)
	REX_STORE_U32(ctx.r31.u32 + 28652, ctx.r30.u32);
	// stw r30,28656(r31)
	REX_STORE_U32(ctx.r31.u32 + 28656, ctx.r30.u32);
	// stw r30,28660(r31)
	REX_STORE_U32(ctx.r31.u32 + 28660, ctx.r30.u32);
	// stw r30,28664(r31)
	REX_STORE_U32(ctx.r31.u32 + 28664, ctx.r30.u32);
	// stw r30,28672(r31)
	REX_STORE_U32(ctx.r31.u32 + 28672, ctx.r30.u32);
	// stw r30,28668(r31)
	REX_STORE_U32(ctx.r31.u32 + 28668, ctx.r30.u32);
	// stw r30,30160(r31)
	REX_STORE_U32(ctx.r31.u32 + 30160, ctx.r30.u32);
	// stw r30,30168(r31)
	REX_STORE_U32(ctx.r31.u32 + 30168, ctx.r30.u32);
	// stw r30,30176(r31)
	REX_STORE_U32(ctx.r31.u32 + 30176, ctx.r30.u32);
	// stw r30,30184(r31)
	REX_STORE_U32(ctx.r31.u32 + 30184, ctx.r30.u32);
	// stw r30,30196(r31)
	REX_STORE_U32(ctx.r31.u32 + 30196, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x88076410;
	sub_88052D90(ctx, base);
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,18436(r29)
	REX_STORE_U32(ctx.r29.u32 + 18436, ctx.r30.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x88076420;
	sub_881EF4A8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18436(r29)
	REX_STORE_U32(ctx.r29.u32 + 18436, ctx.r11.u32);
loc_88076428:
	// lwz r11,18412(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807644c
	if (ctx.cr6.eq) goto loc_8807644C;
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,18428(r29)
	REX_STORE_U32(ctx.r29.u32 + 18428, ctx.r30.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x88076444;
	sub_881EF4A8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18428(r29)
	REX_STORE_U32(ctx.r29.u32 + 18428, ctx.r11.u32);
loc_8807644C:
	// lwz r11,18416(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076470
	if (ctx.cr6.eq) goto loc_88076470;
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,18432(r29)
	REX_STORE_U32(ctx.r29.u32 + 18432, ctx.r30.u32);
	// bl 0x881ef4a8
	ctx.lr = 0x88076468;
	sub_881EF4A8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,18432(r29)
	REX_STORE_U32(ctx.r29.u32 + 18432, ctx.r11.u32);
loc_88076470:
	// cmpwi cr6,r17,7
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 7, ctx.xer);
	// beq cr6,0x88076480
	if (ctx.cr6.eq) goto loc_88076480;
	// cmpwi cr6,r17,8
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 8, ctx.xer);
	// bne cr6,0x88076490
	if (!ctx.cr6.eq) goto loc_88076490;
loc_88076480:
	// lwz r11,2112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88076490
	if (!ctx.cr6.eq) goto loc_88076490;
	// stw r30,2104(r31)
	REX_STORE_U32(ctx.r31.u32 + 2104, ctx.r30.u32);
loc_88076490:
	// lwz r11,18412(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880764a8
	if (!ctx.cr6.eq) goto loc_880764A8;
	// lwz r11,18416(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880764d8
	if (ctx.cr6.eq) goto loc_880764D8;
loc_880764A8:
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x88050340
	ctx.lr = 0x880764CC;
	sub_88050340(ctx, base);
	// stw r3,20216(r31)
	REX_STORE_U32(ctx.r31.u32 + 20216, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
loc_880764D8:
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x88050340
	ctx.lr = 0x880764FC;
	sub_88050340(ctx, base);
	// stw r3,20196(r31)
	REX_STORE_U32(ctx.r31.u32 + 20196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb120
	ctx.lr = 0x88076510;
	sub_880EB120(ctx, base);
	// stw r30,7192(r31)
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88109208
	ctx.lr = 0x8807651C;
	sub_88109208(ctx, base);
	// lwz r11,1584(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// bne cr6,0x88076538
	if (!ctx.cr6.eq) goto loc_88076538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x88076548
	goto loc_88076548;
loc_88076538:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_88076548:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x88050340
	ctx.lr = 0x88076554;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807656c
	if (ctx.cr6.eq) goto loc_8807656C;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880f9b78
	ctx.lr = 0x88076568;
	sub_880F9B78(ctx, base);
	// b 0x88076570
	goto loc_88076570;
loc_8807656C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88076570:
	// stw r3,7192(r31)
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880765a0
	if (!ctx.cr6.gt) goto loc_880765A0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880765A0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880765A8;
	sub_88050340(ctx, base);
	// stw r3,2324(r31)
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880765cc
	if (!ctx.cr6.gt) goto loc_880765CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880765CC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880765D4;
	sub_88050340(ctx, base);
	// stw r3,7856(r31)
	REX_STORE_U32(ctx.r31.u32 + 7856, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// bl 0x88050340
	ctx.lr = 0x880765F0;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2940(r31)
	REX_STORE_U32(ctx.r31.u32 + 2940, ctx.r3.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8807663c
	if (ctx.cr6.lt) goto loc_8807663C;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// stw r11,3908(r31)
	REX_STORE_U32(ctx.r31.u32 + 3908, ctx.r11.u32);
	// lwz r10,1624(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x8807663c
	if (!ctx.cr6.gt) goto loc_8807663C;
	// lwz r11,2940(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// stw r10,4876(r31)
	REX_STORE_U32(ctx.r31.u32 + 4876, ctx.r10.u32);
	// lwz r9,2940(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// addis r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 131072;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// stw r8,5844(r31)
	REX_STORE_U32(ctx.r31.u32 + 5844, ctx.r8.u32);
loc_8807663C:
	// stw r30,2944(r31)
	REX_STORE_U32(ctx.r31.u32 + 2944, ctx.r30.u32);
	// stw r30,3912(r31)
	REX_STORE_U32(ctx.r31.u32 + 3912, ctx.r30.u32);
	// stw r30,4880(r31)
	REX_STORE_U32(ctx.r31.u32 + 4880, ctx.r30.u32);
	// stw r30,5848(r31)
	REX_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88076758
	if (!ctx.cr6.eq) goto loc_88076758;
	// lwz r11,2564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076670
	if (ctx.cr6.eq) goto loc_88076670;
	// li r29,256
	ctx.r29.s64 = 256;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x88076678
	goto loc_88076678;
loc_88076670:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r28,64
	ctx.r28.s64 = 64;
loc_88076678:
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x88076694
	if (!ctx.cr6.gt) goto loc_88076694;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076694:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x8807669C;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r3.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880766c4
	if (!ctx.cr6.gt) goto loc_880766C4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880766C4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880766CC;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2952(r31)
	REX_STORE_U32(ctx.r31.u32 + 2952, ctx.r3.u32);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r9,2948(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x88076758
	if (ctx.cr6.lt) goto loc_88076758;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,3916(r31)
	REX_STORE_U32(ctx.r31.u32 + 3916, ctx.r9.u32);
	// lwz r9,2952(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,3920(r31)
	REX_STORE_U32(ctx.r31.u32 + 3920, ctx.r8.u32);
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// ble cr6,0x88076758
	if (!ctx.cr6.gt) goto loc_88076758;
	// lwz r8,2948(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4884(r31)
	REX_STORE_U32(ctx.r31.u32 + 4884, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2952(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4888(r31)
	REX_STORE_U32(ctx.r31.u32 + 4888, ctx.r6.u32);
	// lwz r10,2948(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,5852(r31)
	REX_STORE_U32(ctx.r31.u32 + 5852, ctx.r5.u32);
	// lwz r10,2952(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,5856(r31)
	REX_STORE_U32(ctx.r31.u32 + 5856, ctx.r4.u32);
loc_88076758:
	// stw r30,6908(r31)
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076774
	if (!ctx.cr6.gt) goto loc_88076774;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076774:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x8807677C;
	sub_88050340(ctx, base);
	// stw r3,6908(r31)
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x88052d90
	ctx.lr = 0x88076798;
	sub_88052D90(ctx, base);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r10,6908(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6912(r31)
	REX_STORE_U32(ctx.r31.u32 + 6912, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6916(r31)
	REX_STORE_U32(ctx.r31.u32 + 6916, ctx.r6.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,728(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,6920(r31)
	REX_STORE_U32(ctx.r31.u32 + 6920, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6924(r31)
	REX_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
	// stw r11,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6924(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6924);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6928(r31)
	REX_STORE_U32(ctx.r31.u32 + 6928, ctx.r11.u32);
	// stw r11,2556(r31)
	REX_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lwz r8,728(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6928);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,2544(r31)
	REX_STORE_U32(ctx.r31.u32 + 2544, ctx.r7.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,2548(r31)
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r5.u32);
	// lwz r3,6908(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// stw r3,7044(r31)
	REX_STORE_U32(ctx.r31.u32 + 7044, ctx.r3.u32);
	// lwz r3,728(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// bl 0x88050340
	ctx.lr = 0x88076840;
	sub_88050340(ctx, base);
	// stw r3,7048(r31)
	REX_STORE_U32(ctx.r31.u32 + 7048, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bl 0x88050340
	ctx.lr = 0x88076870;
	sub_88050340(ctx, base);
	// stw r3,7052(r31)
	REX_STORE_U32(ctx.r31.u32 + 7052, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,6908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r11,7532(r31)
	REX_STORE_U32(ctx.r31.u32 + 7532, ctx.r11.u32);
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,7536(r31)
	REX_STORE_U32(ctx.r31.u32 + 7536, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,728(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,7540(r31)
	REX_STORE_U32(ctx.r31.u32 + 7540, ctx.r7.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,7544(r31)
	REX_STORE_U32(ctx.r31.u32 + 7544, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,7548(r31)
	REX_STORE_U32(ctx.r31.u32 + 7548, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,7552(r31)
	REX_STORE_U32(ctx.r31.u32 + 7552, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,7524(r31)
	REX_STORE_U32(ctx.r31.u32 + 7524, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,7528(r31)
	REX_STORE_U32(ctx.r31.u32 + 7528, ctx.r6.u32);
	// lwz r5,1624(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x8807697c
	if (!ctx.cr6.gt) goto loc_8807697C;
	// addi r29,r31,2864
	ctx.r29.s64 = ctx.r31.s64 + 2864;
loc_88076920:
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x88050340
	ctx.lr = 0x88076930;
	sub_88050340(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// addi r9,r29,783
	ctx.r9.s64 = ctx.r29.s64 + 783;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r10,80
	ctx.r11.s64 = ctx.r10.s64 + 80;
	// stw r10,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r8,928(r29)
	REX_STORE_U32(ctx.r29.u32 + 928, ctx.r8.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// stw r7,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// addi r29,r29,968
	ctx.r29.s64 = ctx.r29.s64 + 968;
	// lwz r6,1624(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x88076920
	if (ctx.cr6.lt) goto loc_88076920;
loc_8807697C:
	// lwz r11,7832(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7832);
	// stw r11,7836(r31)
	REX_STORE_U32(ctx.r31.u32 + 7836, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x880769ec
	if (!ctx.cr6.eq) goto loc_880769EC;
	// lwz r11,6916(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6916);
	// stw r11,21136(r31)
	REX_STORE_U32(ctx.r31.u32 + 21136, ctx.r11.u32);
	// lwz r10,6920(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6920);
	// stw r10,28416(r31)
	REX_STORE_U32(ctx.r31.u32 + 28416, ctx.r10.u32);
	// lwz r9,6912(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6912);
	// stw r9,28424(r31)
	REX_STORE_U32(ctx.r31.u32 + 28424, ctx.r9.u32);
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x880769cc
	if (!ctx.cr6.gt) goto loc_880769CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880769CC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880769D4;
	sub_88050340(ctx, base);
	// stw r3,2480(r31)
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r10.u32);
loc_880769EC:
	// lwz r28,720(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r29,724(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r26,r29,r28
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88076a10
	if (!ctx.cr6.eq) goto loc_88076A10;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r29,r11,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r26,r29,r28
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
loc_88076A10:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x88050340
	ctx.lr = 0x88076A2C;
	sub_88050340(ctx, base);
	// stw r3,6804(r31)
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r29,r8,r10
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r28,r29,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,6800(r31)
	REX_STORE_U32(ctx.r31.u32 + 6800, ctx.r7.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x88076A68;
	sub_88050340(ctx, base);
	// stw r3,6808(r31)
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x88076A80;
	sub_88050340(ctx, base);
	// stw r3,6812(r31)
	REX_STORE_U32(ctx.r31.u32 + 6812, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r3,r11,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x88050340
	ctx.lr = 0x88076AA0;
	sub_88050340(ctx, base);
	// stw r3,6816(r31)
	REX_STORE_U32(ctx.r31.u32 + 6816, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r3,6820(r31)
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r3.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6824(r31)
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,6828(r31)
	REX_STORE_U32(ctx.r31.u32 + 6828, ctx.r9.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6832(r31)
	REX_STORE_U32(ctx.r31.u32 + 6832, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,6836(r31)
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r9.u32);
	// stw r11,6840(r31)
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// lwz r10,1480(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88076bf8
	if (ctx.cr6.eq) goto loc_88076BF8;
	// mulli r11,r29,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(84));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076b00
	if (!ctx.cr6.gt) goto loc_88076B00;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076B00:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076B08;
	sub_88050340(ctx, base);
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// stw r3,1484(r31)
	REX_STORE_U32(ctx.r31.u32 + 1484, ctx.r3.u32);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,1488(r31)
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r9,r29,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1492(r31)
	REX_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1496(r31)
	REX_STORE_U32(ctx.r31.u32 + 1496, ctx.r10.u32);
	// ble cr6,0x88076b48
	if (!ctx.cr6.gt) goto loc_88076B48;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076B48:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076B50;
	sub_88050340(ctx, base);
	// stw r3,1500(r31)
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x88052d90
	ctx.lr = 0x88076B6C;
	sub_88052D90(ctx, base);
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076b7c
	if (!ctx.cr6.gt) goto loc_88076B7C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076B7C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076B84;
	sub_88050340(ctx, base);
	// stw r3,1504(r31)
	REX_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x88052d90
	ctx.lr = 0x88076B9C;
	sub_88052D90(ctx, base);
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88076bac
	if (!ctx.cr6.gt) goto loc_88076BAC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88076BAC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88076BB4;
	sub_88050340(ctx, base);
	// stw r3,1508(r31)
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x88052d90
	ctx.lr = 0x88076BCC;
	sub_88052D90(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,29688
	ctx.r3.s64 = 29688;
	// bl 0x88050340
	ctx.lr = 0x88076BD8;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076be8
	if (ctx.cr6.eq) goto loc_88076BE8;
	// bl 0x88244148
	ctx.lr = 0x88076BE4;
	sub_88244148(ctx, base);
	// b 0x88076bec
	goto loc_88076BEC;
loc_88076BE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88076BEC:
	// stw r3,1512(r31)
	REX_STORE_U32(ctx.r31.u32 + 1512, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
loc_88076BF8:
	// stw r30,6792(r31)
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88050340
	ctx.lr = 0x88076C0C;
	sub_88050340(ctx, base);
	// stw r3,6792(r31)
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r30,6796(r31)
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88050340
	ctx.lr = 0x88076C2C;
	sub_88050340(ctx, base);
	// stw r3,6796(r31)
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88073680
	ctx.lr = 0x88076C40;
	sub_88073680(ctx, base);
	// lwz r25,748(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,19452(r31)
	REX_STORE_U32(ctx.r31.u32 + 19452, ctx.r10.u32);
	// lwz r8,7936(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7936);
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f9.u64);
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,7940(r31)
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r7.u32);
	// bgt cr6,0x88076c9c
	if (ctx.cr6.gt) goto loc_88076C9C;
	// stw r20,7940(r31)
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r20.u32);
loc_88076C9C:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88076ccc
	if (!ctx.cr6.eq) goto loc_88076CCC;
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88076ccc
	if (ctx.cr6.eq) goto loc_88076CCC;
	// lwz r11,7940(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7940);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x88076ccc
	if (!ctx.cr6.lt) goto loc_88076CCC;
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r24,7940(r31)
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r24.u32);
	// b 0x88076cd0
	goto loc_88076CD0;
loc_88076CCC:
	// li r24,8
	ctx.r24.s64 = 8;
loc_88076CD0:
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// lfd f0,7896(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88076d50
	if (!ctx.cr6.eq) goto loc_88076D50;
	// lfd f13,7888(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88076cf8
	if (!ctx.cr6.lt) goto loc_88076CF8;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x88076cf8
	if (!ctx.cr6.gt) goto loc_88076CF8;
	// stfd f0,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_88076CF8:
	// stfd f31,7896(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f31.u64);
	// lwz r9,668(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,12352(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12352);
	// lwz r8,7880(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f0,7688(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f12,7888(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f0,f10,f12,f7
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076f4c
	if (!ctx.cr6.gt) goto loc_88076F4C;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x88076f58
	goto loc_88076F58;
loc_88076D50:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x88076e24
	if (!ctx.cr6.gt) goto loc_88076E24;
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88076e24
	if (!ctx.cr6.eq) goto loc_88076E24;
	// lfd f13,7888(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88076dac
	if (!ctx.cr6.lt) goto loc_88076DAC;
	// li r11,-100
	ctx.r11.s64 = -100;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_88076D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071e98
	ctx.lr = 0x88076D80;
	sub_88071E98(ctx, base);
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d98
	if (!ctx.cr6.eq) goto loc_88076D98;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_88076D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x88076DA8;
	__restfpr_27(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88076DAC:
	// lwz r11,7880(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f12,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r7,668(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f13,12352(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 12352);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmadd f0,f8,f0,f7
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076e08
	if (!ctx.cr6.gt) goto loc_88076E08;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// lfd f0,7896(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7896(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// b 0x88076f64
	goto loc_88076F64;
loc_88076E08:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lfd f0,7896(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7896(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// b 0x88076f64
	goto loc_88076F64;
loc_88076E24:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88076ef4
	if (!ctx.cr6.eq) goto loc_88076EF4;
	// lwz r11,7880(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f12,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r7,668(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f13,12352(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 12352);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmadd f0,f8,f0,f7
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076e80
	if (!ctx.cr6.gt) goto loc_88076E80;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x88076e8c
	goto loc_88076E8C;
loc_88076E80:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_88076E8C:
	// lfd f0,7896(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// li r11,30576
	ctx.r11.s64 = 30576;
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// li r10,30560
	ctx.r10.s64 = 30560;
	// lfd f13,7896(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fmul f12,f13,f27
	ctx.f12.f64 = ctx.f13.f64 * ctx.f27.f64;
	// lfd f11,7688(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,7884
	ctx.r12.s64 = 7884;
	// stfiwx f9,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
	// lfd f8,7888(r31)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f8,30568(r31)
	REX_STORE_U64(ctx.r31.u32 + 30568, ctx.f8.u64);
	// lfd f7,7888(r31)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fmul f6,f7,f27
	ctx.f6.f64 = ctx.f7.f64 * ctx.f27.f64;
	// lfd f5,7688(r31)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f4,f6,f5
	ctx.f4.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f3.u32);
	// lfd f1,7888(r31)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fmul f0,f1,f27
	ctx.f0.f64 = ctx.f1.f64 * ctx.f27.f64;
	// lfd f2,7688(r31)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f13,f0,f2
	ctx.f13.f64 = ctx.f0.f64 / ctx.f2.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f12.u32);
	// b 0x88076f7c
	goto loc_88076F7C;
loc_88076EF4:
	// stfd f31,7896(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f31.u64);
	// lwz r9,668(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,12352(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12352);
	// lwz r8,7880(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f0,7688(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f12,7888(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f0,f10,f12,f7
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x88076f4c
	if (!ctx.cr6.gt) goto loc_88076F4C;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x88076f58
	goto loc_88076F58;
loc_88076F4C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_88076F58:
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7888(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
loc_88076F64:
	// fmul f12,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f27.f64;
	// lfd f11,7688(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,7884
	ctx.r12.s64 = 7884;
	// stfiwx f9,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
loc_88076F7C:
	// lwz r11,7952(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r9,8016
	ctx.r9.s64 = 8016;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// stw r11,8000(r31)
	REX_STORE_U32(ctx.r31.u32 + 8000, ctx.r11.u32);
	// lfd f0,12344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12344);
	// lfs f13,12336(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12336);
	ctx.f13.f64 = double(temp.f32);
	// li r7,7960
	ctx.r7.s64 = 7960;
	// li r5,7964
	ctx.r5.s64 = 7964;
	// lfs f12,12332(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12332);
	ctx.f12.f64 = double(temp.f32);
	// li r11,7968
	ctx.r11.s64 = 7968;
	// lfs f11,12328(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12328);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,7952(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f7.u32);
	// lwz r6,8000(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f2.u32);
	// lwz r10,8000(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f1,144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.f10.u32);
	// lwz r8,8000(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f9,144(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f5.u32);
	// lwz r6,8000(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// stw r6,7956(r31)
	REX_STORE_U32(ctx.r31.u32 + 7956, ctx.r6.u32);
	// lwz r5,7884(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7884);
	// stw r5,7944(r31)
	REX_STORE_U32(ctx.r31.u32 + 7944, ctx.r5.u32);
	// stw r5,7948(r31)
	REX_STORE_U32(ctx.r31.u32 + 7948, ctx.r5.u32);
	// bl 0x8806d1e8
	ctx.lr = 0x8807705C;
	sub_8806D1E8(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,636(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 636);
	// lwz r29,652(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x88077088
	if (!ctx.cr6.eq) goto loc_88077088;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
loc_88077088:
	// lwz r10,632(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// li r9,-32
	ctx.r9.s64 = -32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// bl 0x880cad40
	ctx.lr = 0x880770B4;
	sub_880CAD40(ctx, base);
	// li r11,-16
	ctx.r11.s64 = -16;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 648);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// bl 0x880cad40
	ctx.lr = 0x880770E0;
	sub_880CAD40(ctx, base);
	// lwz r7,21096(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21096);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880772a0
	if (ctx.cr6.eq) goto loc_880772A0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x88050340
	ctx.lr = 0x880770F8;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88077154
	if (ctx.cr6.eq) goto loc_88077154;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x88077158
	goto loc_88077158;
loc_88077154:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88077158:
	// stw r3,21104(r31)
	REX_STORE_U32(ctx.r31.u32 + 21104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x880fc618
	ctx.lr = 0x88077190;
	sub_880FC618(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,21104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,21112(r31)
	REX_STORE_U32(ctx.r31.u32 + 21112, ctx.r10.u32);
	// lwz r9,21104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,21116(r31)
	REX_STORE_U32(ctx.r31.u32 + 21116, ctx.r8.u32);
	// lwz r7,21104(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r6,112(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// stw r6,21120(r31)
	REX_STORE_U32(ctx.r31.u32 + 21120, ctx.r6.u32);
	// lwz r5,27988(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880772a0
	if (ctx.cr6.eq) goto loc_880772A0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x88050340
	ctx.lr = 0x880771D8;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88077234
	if (ctx.cr6.eq) goto loc_88077234;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x88077238
	goto loc_88077238;
loc_88077234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88077238:
	// stw r3,21108(r31)
	REX_STORE_U32(ctx.r31.u32 + 21108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x880fc618
	ctx.lr = 0x88077270;
	sub_880FC618(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,21108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,21124(r31)
	REX_STORE_U32(ctx.r31.u32 + 21124, ctx.r10.u32);
	// lwz r9,21108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,21128(r31)
	REX_STORE_U32(ctx.r31.u32 + 21128, ctx.r8.u32);
	// lwz r7,21108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r6,112(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// stw r6,21132(r31)
	REX_STORE_U32(ctx.r31.u32 + 21132, ctx.r6.u32);
loc_880772A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880772dc
	if (!ctx.cr6.eq) goto loc_880772DC;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x880772c4
	if (!ctx.cr6.gt) goto loc_880772C4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880772C4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880772CC;
	sub_88050340(ctx, base);
	// stw r3,28428(r31)
	REX_STORE_U32(ctx.r31.u32 + 28428, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// stw r3,28432(r31)
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r3.u32);
loc_880772DC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x88050340
	ctx.lr = 0x880772E8;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880772fc
	if (ctx.cr6.eq) goto loc_880772FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880bf788
	ctx.lr = 0x880772F8;
	sub_880BF788(ctx, base);
	// b 0x88077300
	goto loc_88077300;
loc_880772FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_88077300:
	// stw r3,31552(r31)
	REX_STORE_U32(ctx.r31.u32 + 31552, ctx.r3.u32);
	// lbz r6,31536(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 31536);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x88077314
	if (ctx.cr6.gt) goto loc_88077314;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_88077314:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,800(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r4,796(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// bl 0x880bf400
	ctx.lr = 0x88077324;
	sub_880BF400(ctx, base);
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28152(r31)
	REX_STORE_U32(ctx.r31.u32 + 28152, ctx.r11.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x88077348
	if (!ctx.cr6.gt) goto loc_88077348;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_88077348:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88077350;
	sub_88050340(ctx, base);
	// stw r3,28148(r31)
	REX_STORE_U32(ctx.r31.u32 + 28148, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2292(r31)
	REX_STORE_U32(ctx.r31.u32 + 2292, ctx.r11.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8807737c
	if (!ctx.cr6.gt) goto loc_8807737C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_8807737C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x88077384;
	sub_88050340(ctx, base);
	// stw r3,2268(r31)
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,2292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880773A0;
	sub_88052D90(ctx, base);
	// lwz r10,2268(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2268);
	// stw r10,2264(r31)
	REX_STORE_U32(ctx.r31.u32 + 2264, ctx.r10.u32);
	// lwz r11,2292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880773bc
	if (!ctx.cr6.gt) goto loc_880773BC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_880773BC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x88050340
	ctx.lr = 0x880773C4;
	sub_88050340(ctx, base);
	// stw r3,2276(r31)
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,2292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880773E0;
	sub_88052D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f4798
	ctx.lr = 0x880773E8;
	sub_880F4798(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880774b4
	if (!ctx.cr6.eq) goto loc_880774B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8806efc0
	ctx.lr = 0x8807740C;
	sub_8806EFC0(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r31,12928
	ctx.r4.s64 = ctx.r31.s64 + 12928;
	// lwz r5,8264(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// bl 0x880ec9e8
	ctx.lr = 0x8807741C;
	sub_880EC9E8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,14976
	ctx.r4.s64 = ctx.r31.s64 + 14976;
	// lwz r5,8268(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077430;
	sub_880EC9E8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,16000
	ctx.r4.s64 = ctx.r31.s64 + 16000;
	// lwz r5,8272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077444;
	sub_880EC9E8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,17024
	ctx.r4.s64 = ctx.r31.s64 + 17024;
	// lwz r5,8276(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077458;
	sub_880EC9E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806efc0
	ctx.lr = 0x88077464;
	sub_8806EFC0(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r31,8320
	ctx.r4.s64 = ctx.r31.s64 + 8320;
	// lwz r5,8264(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// bl 0x880ec9e8
	ctx.lr = 0x88077474;
	sub_880EC9E8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,10368
	ctx.r4.s64 = ctx.r31.s64 + 10368;
	// lwz r5,8268(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077488;
	sub_880EC9E8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,11392
	ctx.r4.s64 = ctx.r31.s64 + 11392;
	// lwz r5,8272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x8807749C;
	sub_880EC9E8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,12416
	ctx.r4.s64 = ctx.r31.s64 + 12416;
	// lwz r5,8276(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774B0;
	sub_880EC9E8(ctx, base);
	// b 0x88077520
	goto loc_88077520;
loc_880774B4:
	// addi r29,r31,8320
	ctx.r29.s64 = ctx.r31.s64 + 8320;
	// lwz r5,8264(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774C8;
	sub_880EC9E8(ctx, base);
	// addi r28,r31,10368
	ctx.r28.s64 = ctx.r31.s64 + 10368;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,8268(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774E0;
	sub_880EC9E8(ctx, base);
	// addi r27,r31,11392
	ctx.r27.s64 = ctx.r31.s64 + 11392;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,8272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x880774F8;
	sub_880EC9E8(ctx, base);
	// addi r26,r31,12416
	ctx.r26.s64 = ctx.r31.s64 + 12416;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,8276(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec9e8
	ctx.lr = 0x88077510;
	sub_880EC9E8(ctx, base);
	// stw r29,8304(r31)
	REX_STORE_U32(ctx.r31.u32 + 8304, ctx.r29.u32);
	// stw r28,8308(r31)
	REX_STORE_U32(ctx.r31.u32 + 8308, ctx.r28.u32);
	// stw r27,8312(r31)
	REX_STORE_U32(ctx.r31.u32 + 8312, ctx.r27.u32);
	// stw r26,8316(r31)
	REX_STORE_U32(ctx.r31.u32 + 8316, ctx.r26.u32);
loc_88077520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f108
	ctx.lr = 0x88077528;
	sub_8806F108(ctx, base);
	// lwz r11,6864(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880775e4
	if (ctx.cr6.eq) goto loc_880775E4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x88050340
	ctx.lr = 0x88077540;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807759c
	if (ctx.cr6.eq) goto loc_8807759C;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x880775a0
	goto loc_880775A0;
loc_8807759C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_880775A0:
	// stw r3,7776(r31)
	REX_STORE_U32(ctx.r31.u32 + 7776, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x880fc618
	ctx.lr = 0x880775D8;
	sub_880FC618(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88076d78
	if (!ctx.cr6.eq) goto loc_88076D78;
loc_880775E4:
	// lwz r11,7980(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880775f4
	if (ctx.cr6.eq) goto loc_880775F4;
	// stw r30,7976(r31)
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r30.u32);
loc_880775F4:
	// lwz r11,2940(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r11,2924(r31)
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// stw r30,2928(r31)
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r30.u32);
	// lwz r10,3112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// stw r10,2932(r31)
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// lwz r9,3116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// stw r9,2936(r31)
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r9.u32);
	// lwz r8,3908(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3908);
	// stw r8,3892(r31)
	REX_STORE_U32(ctx.r31.u32 + 3892, ctx.r8.u32);
	// stw r30,3896(r31)
	REX_STORE_U32(ctx.r31.u32 + 3896, ctx.r30.u32);
	// lwz r7,4080(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4080);
	// stw r7,3900(r31)
	REX_STORE_U32(ctx.r31.u32 + 3900, ctx.r7.u32);
	// lwz r6,4084(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4084);
	// stw r6,3904(r31)
	REX_STORE_U32(ctx.r31.u32 + 3904, ctx.r6.u32);
	// lwz r5,4876(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4876);
	// stw r5,4860(r31)
	REX_STORE_U32(ctx.r31.u32 + 4860, ctx.r5.u32);
	// stw r30,4864(r31)
	REX_STORE_U32(ctx.r31.u32 + 4864, ctx.r30.u32);
	// lwz r4,5048(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 5048);
	// stw r4,4868(r31)
	REX_STORE_U32(ctx.r31.u32 + 4868, ctx.r4.u32);
	// lwz r3,5052(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5052);
	// stw r3,4872(r31)
	REX_STORE_U32(ctx.r31.u32 + 4872, ctx.r3.u32);
	// lwz r11,5844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5844);
	// stw r11,5828(r31)
	REX_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// stw r30,5832(r31)
	REX_STORE_U32(ctx.r31.u32 + 5832, ctx.r30.u32);
	// lwz r10,6016(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6016);
	// stw r10,5836(r31)
	REX_STORE_U32(ctx.r31.u32 + 5836, ctx.r10.u32);
	// lwz r9,6020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6020);
	// stw r9,5840(r31)
	REX_STORE_U32(ctx.r31.u32 + 5840, ctx.r9.u32);
	// lwz r8,21160(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88077750
	if (ctx.cr6.eq) goto loc_88077750;
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88076d78
	if (!ctx.cr6.gt) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88076d78
	if (!ctx.cr6.gt) goto loc_88076D78;
	// stw r24,21244(r31)
	REX_STORE_U32(ctx.r31.u32 + 21244, ctx.r24.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r24,21248(r31)
	REX_STORE_U32(ctx.r31.u32 + 21248, ctx.r24.u32);
	// addi r29,r31,21200
	ctx.r29.s64 = ctx.r31.s64 + 21200;
	// stw r24,21252(r31)
	REX_STORE_U32(ctx.r31.u32 + 21252, ctx.r24.u32);
loc_8807769C:
	// lwz r11,804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// bl 0x88050340
	ctx.lr = 0x880776B4;
	sub_88050340(ctx, base);
	// stw r3,-36(r29)
	REX_STORE_U32(ctx.r29.u32 + -36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// stw r11,-16(r29)
	REX_STORE_U32(ctx.r29.u32 + -16, ctx.r11.u32);
	// lwz r10,804(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// blt cr6,0x8807769c
	if (ctx.cr6.lt) goto loc_8807769C;
	// addi r29,r31,21224
	ctx.r29.s64 = ctx.r31.s64 + 21224;
loc_880776EC:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88050340
	ctx.lr = 0x880776FC;
	sub_88050340(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88076d78
	if (ctx.cr6.eq) goto loc_88076D78;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88077718;
	sub_88052D90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x880776ec
	if (ctx.cr6.lt) goto loc_880776EC;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88050340
	ctx.lr = 0x88077738;
	sub_88050340(ctx, base);
	// stw r3,21256(r31)
	REX_STORE_U32(ctx.r31.u32 + 21256, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x8807774C;
	__restfpr_27(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88077750:
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r31,21220
	ctx.r11.s64 = ctx.r31.s64 + 21220;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8807775C:
	// stw r30,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r30.u32);
	// stw r30,-36(r11)
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r30.u32);
	// stw r30,-56(r11)
	REX_STORE_U32(ctx.r11.u32 + -56, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8807775c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807775C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x88077780;
	__restfpr_27(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5A18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880F5A20;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r25,r9,6296
	ctx.r25.s64 = ctx.r9.s64 + 6296;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// subf r4,r11,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8810f4a0
	ctx.lr = 0x880F5A74;
	sub_8810F4A0(ctx, base);
	// lhz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f4a0
	ctx.lr = 0x880F5A98;
	sub_8810F4A0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880f5b34
	if (!ctx.cr6.gt) goto loc_880F5B34;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880f5b04
	if (!ctx.cr6.gt) goto loc_880F5B04;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r26,r31,19540
	ctx.r26.s64 = ctx.r31.s64 + 19540;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r25,r10,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880F5AD4:
	// lhz r10,6(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x880F5AF8;
	sub_8810F120(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bne 0x880f5ad4
	if (!ctx.cr0.eq) goto loc_880F5AD4;
loc_880F5B04:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r31,19668
	ctx.r6.s64 = ctx.r31.s64 + 19668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810f240
	ctx.lr = 0x880F5B30;
	sub_8810F240(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880F5B34:
	// add r11,r22,r29
	ctx.r11.u64 = ctx.r22.u64 + ctx.r29.u64;
	// add r10,r21,r29
	ctx.r10.u64 = ctx.r21.u64 + ctx.r29.u64;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F8410) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x880F8418;
	__savegprlr_15(ctx, base);
	// add r31,r4,r7
	ctx.r31.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r17,r11,-16
	ctx.r17.s64 = ctx.r11.s64 + -16;
	// addi r19,r31,-16
	ctx.r19.s64 = ctx.r31.s64 + -16;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// addi r25,r7,-1
	ctx.r25.s64 = ctx.r7.s64 + -1;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880f8524
	if (!ctx.cr6.lt) goto loc_880F8524;
	// lwz r21,84(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r23,r4,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r22,r19,r17
	ctx.r22.u64 = ctx.r17.u64 - ctx.r19.u64;
	// subf r18,r5,r6
	ctx.r18.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_880F845C:
	// li r11,2
	ctx.r11.s64 = 2;
	// lbz r30,0(r26)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// lbzx r6,r23,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// add r7,r10,r21
	ctx.r7.u64 = ctx.r10.u64 + ctx.r21.u64;
	// lbz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// lbz r28,0(r25)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// rldicr r29,r6,8,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r27,r5,8,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rldicr r11,r30,8,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r30,r28,8,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// or r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 | ctx.r6.u64;
	// or r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 | ctx.r16.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// rldicr r29,r6,16,47
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r28,r5,16,47
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r27,r11,16,47
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r16,r30,16,47
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 | ctx.r6.u64;
	// or r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 | ctx.r5.u64;
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// or r27,r16,r30
	ctx.r27.u64 = ctx.r16.u64 | ctx.r30.u64;
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r30,r28,32,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r16,r11,32,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r15,r27,32,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// subf r6,r10,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r10.u64;
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | ctx.r29.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r29,r16,r11
	ctx.r29.u64 = ctx.r16.u64 | ctx.r11.u64;
	// or r28,r15,r27
	ctx.r28.u64 = ctx.r15.u64 | ctx.r27.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r27,r10,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_880F84F0:
	// stdx r5,r27,r11
	REX_STORE_U64(ctx.r27.u32 + ctx.r11.u32, ctx.r5.u64);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stdx r29,r6,r11
	REX_STORE_U64(ctx.r6.u32 + ctx.r11.u32, ctx.r29.u64);
	// stdx r28,r7,r11
	REX_STORE_U64(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x880f84f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F84F0;
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r24,r24,r20
	ctx.r24.u64 = ctx.r24.u64 + ctx.r20.u64;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r31,r31,r20
	ctx.r31.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 + ctx.r20.u64;
	// add r25,r25,r20
	ctx.r25.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bne 0x880f845c
	if (!ctx.cr0.eq) goto loc_880F845C;
loc_880F8524:
	// srawi r29,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r20.s32 >> 2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f8584
	if (ctx.cr6.eq) goto loc_880F8584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// neg r30,r20
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r20.u64);
	// subf r8,r3,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r3.u64;
	// subf r31,r19,r17
	ctx.r31.u64 = ctx.r17.u64 - ctx.r19.u64;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
loc_880F8548:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880f8574
	if (!ctx.cr6.gt) goto loc_880F8574;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_880F855C:
	// lwzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880f855c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F855C;
loc_880F8574:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 + ctx.r20.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// bne 0x880f8548
	if (!ctx.cr0.eq) goto loc_880F8548;
loc_880F8584:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f85e8
	if (ctx.cr6.eq) goto loc_880F85E8;
	// subf r11,r20,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r20.u64;
	// subf r8,r20,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r20.u64;
	// neg r4,r20
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r20.u64);
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// li r6,16
	ctx.r6.s64 = 16;
loc_880F85A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880f85d4
	if (!ctx.cr6.gt) goto loc_880F85D4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r7,r24,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r24.u64;
loc_880F85BC:
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880f85bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F85BC;
loc_880F85D4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r24,r24,r20
	ctx.r24.u64 = ctx.r24.u64 + ctx.r20.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// bne 0x880f85a4
	if (!ctx.cr0.eq) goto loc_880F85A4;
loc_880F85E8:
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FA49C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880FA4A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880FA4A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,2256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2256);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r23,7868(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// lis r29,4096
	ctx.r29.s64 = 268435456;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880fa4f4
	if (!ctx.cr6.eq) goto loc_880FA4F4;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// subf r9,r10,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r10.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x880FA4F4;
	sub_880E6960(ctx, base);
loc_880FA4F4:
	// lwz r11,2244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fa514
	if (!ctx.cr6.eq) goto loc_880FA514;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x880FA514;
	sub_880E6960(ctx, base);
loc_880FA514:
	// lbz r10,147(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 147);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lbz r9,146(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 146);
	// rlwinm r26,r30,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,92(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 92);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lwz r25,2324(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// rlwinm r5,r8,0,0,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000000;
	// or r24,r7,r6
	ctx.r24.u64 = ctx.r7.u64 | ctx.r6.u64;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// addi r28,r11,30824
	ctx.r28.s64 = ctx.r11.s64 + 30824;
	// beq cr6,0x880fa724
	if (ctx.cr6.eq) goto loc_880FA724;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fa6c8
	if (!ctx.cr6.eq) goto loc_880FA6C8;
	// lwz r10,7192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,20816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r30,0(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r29,r30,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FA580;
	sub_880E6960(ctx, base);
	// lwz r8,28568(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fa5c4
	if (ctx.cr6.eq) goto loc_880FA5C4;
	// lwz r11,20816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// addi r9,r30,7169
	ctx.r9.s64 = ctx.r30.s64 + 7169;
	// lwz r10,28620(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,28620(r31)
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880FA5C4:
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x880fa638
	if (ctx.cr6.eq) goto loc_880FA638;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// beq cr6,0x880fa638
	if (ctx.cr6.eq) goto loc_880FA638;
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,2560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mulli r10,r10,73
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(73));
	// lwz r9,88(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r8,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1FFFF;
	// lbzx r5,r7,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FA600;
	sub_880E6960(ctx, base);
	// lwz r6,28568(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880fa6b8
	if (ctx.cr6.eq) goto loc_880FA6B8;
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r10,28624(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// mulli r9,r9,73
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r7,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,28624(r31)
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r6.u32);
	// b 0x880fa6b8
	goto loc_880FA6B8;
loc_880FA638:
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lhzx r10,r25,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r26.u32);
	// lwz r9,2596(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA658;
	sub_880E6960(ctx, base);
	// lwz r7,7192(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwzx r6,r25,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// lwz r5,2600(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,36(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// srawi r4,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 20;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA67C;
	sub_880E6960(ctx, base);
	// lwz r10,28568(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fa6b8
	if (ctx.cr6.eq) goto loc_880FA6B8;
	// lwz r10,7192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,2596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r8,28628(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r9,2600(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r7,36(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28628(r31)
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// lwz r6,36(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28628(r31)
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r5.u32);
loc_880FA6B8:
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_880FA6C8:
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fa724
	if (!ctx.cr6.eq) goto loc_880FA724;
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r10,2144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2144);
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880fa6f4
	if (!ctx.cr6.eq) goto loc_880FA6F4;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x880fa718
	goto loc_880FA718;
loc_880FA6F4:
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880fa70c
	if (!ctx.cr6.eq) goto loc_880FA70C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x880fa71c
	goto loc_880FA71C;
loc_880FA70C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880fa724
	if (!ctx.cr6.eq) goto loc_880FA724;
	// li r4,3
	ctx.r4.s64 = 3;
loc_880FA718:
	// li r5,2
	ctx.r5.s64 = 2;
loc_880FA71C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA724;
	sub_880E6960(ctx, base);
loc_880FA724:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880faae4
	if (!ctx.cr6.eq) goto loc_880FAAE4;
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fa788
	if (!ctx.cr6.eq) goto loc_880FA788;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880faae4
	if (!ctx.cr6.eq) goto loc_880FAAE4;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880faae4
	if (ctx.cr6.eq) goto loc_880FAAE4;
	// lwz r11,2428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa770
	if (ctx.cr6.eq) goto loc_880FA770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880FA770;
	sub_880FA448(ctx, base);
loc_880FA770:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA780;
	sub_880E6960(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880FA788:
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 92);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880fa914
	if (!ctx.cr6.eq) goto loc_880FA914;
	// lwz r10,7192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,20816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r30,0(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r29,r30,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FA7C4;
	sub_880E6960(ctx, base);
	// lwz r8,28568(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fa808
	if (ctx.cr6.eq) goto loc_880FA808;
	// lwz r11,20816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880FA808:
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x880fa87c
	if (ctx.cr6.eq) goto loc_880FA87C;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// beq cr6,0x880fa87c
	if (ctx.cr6.eq) goto loc_880FA87C;
	// lwz r10,7192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mulli r11,r9,73
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFF;
	// lbzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FA844;
	sub_880E6960(ctx, base);
	// lwz r5,28568(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fa904
	if (ctx.cr6.eq) goto loc_880FA904;
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r10,28624(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// mulli r9,r9,73
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r7,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,28624(r31)
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r6.u32);
	// b 0x880fa904
	goto loc_880FA904;
loc_880FA87C:
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,7856(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// lwz r9,2596(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lhzx r7,r26,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r10.u32);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// bl 0x880e6960
	ctx.lr = 0x880FA8A0;
	sub_880E6960(ctx, base);
	// lwz r6,7856(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// lwz r5,7192(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r4,2600(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwzx r11,r26,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	// lwz r10,36(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r10,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r10.u64;
	// srawi r4,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// bl 0x880e6960
	ctx.lr = 0x880FA8C8;
	sub_880E6960(ctx, base);
	// lwz r8,28568(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fa904
	if (ctx.cr6.eq) goto loc_880FA904;
	// lwz r10,7192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,2596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r8,28628(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r9,2600(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r7,36(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28628(r31)
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// lwz r6,36(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28628(r31)
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r5.u32);
loc_880FA904:
	// lwz r11,7192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_880FA914:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880fa95c
	if (!ctx.cr6.eq) goto loc_880FA95C;
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880faae4
	if (ctx.cr6.eq) goto loc_880FAAE4;
	// lwz r11,2428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa770
	if (ctx.cr6.eq) goto loc_880FA770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880FA944;
	sub_880FA448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x880e6960
	ctx.lr = 0x880FA954;
	sub_880E6960(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880FA95C:
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa978
	if (ctx.cr6.eq) goto loc_880FA978;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FA978;
	sub_880E6960(ctx, base);
loc_880FA978:
	// lwz r11,1608(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r29,1536(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa9a8
	if (ctx.cr6.eq) goto loc_880FA9A8;
	// lwz r11,1564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fa9a8
	if (ctx.cr6.eq) goto loc_880FA9A8;
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fa9ac
	if (ctx.cr6.eq) goto loc_880FA9AC;
loc_880FA9A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_880FA9AC:
	// lwz r11,20800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20800);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20804(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20804);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r9,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FA9C8;
	sub_880E6960(ctx, base);
	// lwz r8,28568(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fa9e8
	if (ctx.cr6.eq) goto loc_880FA9E8;
	// lwz r11,20804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20804);
	// lwz r10,28604(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lbzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,28604(r31)
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r10.u32);
loc_880FA9E8:
	// lwz r11,2428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880faa00
	if (ctx.cr6.eq) goto loc_880FAA00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880FAA00;
	sub_880FA448(ctx, base);
loc_880FAA00:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880faa30
	if (ctx.cr6.eq) goto loc_880FAA30;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// rlwinm r8,r11,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r7,r10,2724
	ctx.r7.s64 = ctx.r10.s64 + 2724;
	// addi r6,r9,2720
	ctx.r6.s64 = ctx.r9.s64 + 2720;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbzx r4,r8,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FAA30;
	sub_880E6960(ctx, base);
loc_880FAA30:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880faae4
	if (ctx.cr6.eq) goto loc_880FAAE4;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r9,r8,7,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x8;
loc_880FAA4C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880faa68
	if (ctx.cr6.eq) goto loc_880FAA68;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r7,74(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 74);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880faa7c
	if (ctx.cr6.eq) goto loc_880FAA7C;
loc_880FAA68:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x880faa7c
	if (!ctx.cr6.lt) goto loc_880FAA7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x880faa4c
	goto loc_880FAA4C;
loc_880FAA7C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880faaa0
	if (!ctx.cr6.eq) goto loc_880FAAA0;
	// lbz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880faac8
	goto loc_880FAAC8;
loc_880FAAA0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x880faabc
	if (!ctx.cr6.eq) goto loc_880FAABC;
	// lbz r11,134(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// b 0x880faac8
	goto loc_880FAAC8;
loc_880FAABC:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x880faac8
	if (!ctx.cr6.eq) goto loc_880FAAC8;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
loc_880FAAC8:
	// lwz r11,30208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30208);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FAAE4;
	sub_880E6960(ctx, base);
loc_880FAAE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810B688) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,720(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,724(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x8810b740
	if (ctx.cr6.eq) goto loc_8810B740;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x8810b6e0
	if (!ctx.cr6.lt) goto loc_8810B6E0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x8810b6f4
	goto loc_8810B6F4;
loc_8810B6E0:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x8810b6f4
	if (!ctx.cr6.gt) goto loc_8810B6F4;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8810B6F4:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8810b71c
	if (!ctx.cr6.lt) goto loc_8810B71C;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8810B71C:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810b744
	if (!ctx.cr6.gt) goto loc_8810B744;
	// subf r9,r8,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8810B740:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8810B744:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8810CEA8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8810CEB0;
	__savegprlr_28(ctx, base);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,2128(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2128);
	// lwz r11,2132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2132);
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r11,-256
	ctx.r6.s64 = ctx.r11.s64 + -256;
	// beq cr6,0x8810cf18
	if (ctx.cr6.eq) goto loc_8810CF18;
	// mullw r31,r11,r4
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r11,r5
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// addi r31,r31,255
	ctx.r31.s64 = ctx.r31.s64 + 255;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r5,r4,255
	ctx.r5.s64 = ctx.r4.s64 + 255;
	// addi r6,r30,255
	ctx.r6.s64 = ctx.r30.s64 + 255;
	// srawi r4,r31,9
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r31.s32 >> 9;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// srawi r6,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 9;
	// srawi r5,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 9;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8810cf4c
	goto loc_8810CF4C;
loc_8810CF18:
	// mullw r30,r11,r4
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addi r5,r4,128
	ctx.r5.s64 = ctx.r4.s64 + 128;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// srawi r4,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 8;
loc_8810CF4C:
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r4,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// lwz r11,27988(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810d028
	if (!ctx.cr6.eq) goto loc_8810D028;
	// lwz r6,720(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r4,r8,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,724(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r6,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r3,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,-60
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -60, ctx.xer);
	// bge cr6,0x8810cfa4
	if (!ctx.cr6.lt) goto loc_8810CFA4;
	// subfic r8,r11,-60
	ctx.xer.ca = ctx.r11.u32 <= 4294967236;
	ctx.r8.u64 = static_cast<uint64_t>(-60) - ctx.r11.u64;
	// b 0x8810cfb0
	goto loc_8810CFB0;
loc_8810CFA4:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8810cfb4
	if (!ctx.cr6.gt) goto loc_8810CFB4;
	// subf r8,r11,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_8810CFB0:
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_8810CFB4:
	// cmpwi cr6,r7,-60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -60, ctx.xer);
	// bge cr6,0x8810cfc4
	if (!ctx.cr6.lt) goto loc_8810CFC4;
	// subfic r9,r4,-60
	ctx.xer.ca = ctx.r4.u32 <= 4294967236;
	ctx.r9.u64 = static_cast<uint64_t>(-60) - ctx.r4.u64;
	// b 0x8810cfd0
	goto loc_8810CFD0;
loc_8810CFC4:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8810cfd4
	if (!ctx.cr6.gt) goto loc_8810CFD4;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
loc_8810CFD0:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8810CFD4:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,-60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -60, ctx.xer);
	// bge cr6,0x8810cff4
	if (!ctx.cr6.lt) goto loc_8810CFF4;
	// subfic r11,r11,-60
	ctx.xer.ca = ctx.r11.u32 <= 4294967236;
	ctx.r11.u64 = static_cast<uint64_t>(-60) - ctx.r11.u64;
	// b 0x8810d000
	goto loc_8810D000;
loc_8810CFF4:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8810d004
	if (!ctx.cr6.gt) goto loc_8810D004;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_8810D000:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8810D004:
	// cmpwi cr6,r9,-60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -60, ctx.xer);
	// bge cr6,0x8810d018
	if (!ctx.cr6.lt) goto loc_8810D018;
	// subfic r11,r4,-60
	ctx.xer.ca = ctx.r4.u32 <= 4294967236;
	ctx.r11.u64 = static_cast<uint64_t>(-60) - ctx.r4.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8810D018:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8810d028
	if (!ctx.cr6.gt) goto loc_8810D028;
	// subf r11,r4,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r4.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8810D028:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810EF50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8810EF58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// lwz r10,20152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// xor r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// subf r28,r11,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bgt cr6,0x8810efd0
	if (ctx.cr6.gt) goto loc_8810EFD0;
	// lwz r11,20164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20164);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8810f02c
	if (!ctx.cr6.gt) goto loc_8810F02C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,20176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20176);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bgt cr6,0x8810f088
	if (ctx.cr6.gt) goto loc_8810F088;
	// lwz r9,20160(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20160);
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810EFC8;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8810f020
	goto loc_8810F020;
loc_8810EFD0:
	// lwz r11,20156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20156);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8810f080
	if (ctx.cr6.gt) goto loc_8810F080;
	// lwz r11,20168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20168);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8810f080
	if (ctx.cr6.gt) goto loc_8810F080;
	// lwz r10,20160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20160);
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lwz r9,20176(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x880e6960
	ctx.lr = 0x8810F01C;
	sub_880E6960(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_8810F020:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810F02C;
	sub_880E6960(ctx, base);
loc_8810F02C:
	// lwz r10,20172(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20172);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20180);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20176);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810F060;
	sub_880E6960(ctx, base);
	// neg r4,r27
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// orc r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 | ~ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8810F078;
	sub_880E6960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8810F080:
	// lwz r10,20176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8810F088:
	// lwz r11,20160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20160);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810F0A0;
	sub_880E6960(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810F0B0;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810F0C0;
	sub_880E6960(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810f0dc
	if (ctx.cr6.eq) goto loc_8810F0DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810e8a0
	ctx.lr = 0x8810F0D4;
	sub_8810E8A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8810F0DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,1552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1552);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810F0EC;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x8810f104
	if (ctx.cr6.lt) goto loc_8810F104;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8810F104:
	// bl 0x880e6960
	ctx.lr = 0x8810F108;
	sub_880E6960(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1548);
	// bl 0x880e6960
	ctx.lr = 0x8810F118;
	sub_880E6960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881131B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881131C0;
	__savegprlr_22(ctx, base);
	// lwz r6,116(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811353c
	if (ctx.cr6.eq) goto loc_8811353C;
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811353c
	if (ctx.cr6.eq) goto loc_8811353C;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811353c
	if (ctx.cr6.eq) goto loc_8811353C;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r7,14(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 14);
	// lwz r29,100(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r7,31
	ctx.r8.s64 = ctx.r7.s64 + 31;
	// mullw r28,r23,r29
	ctx.r28.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// rlwinm r30,r11,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r8,0,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// rotlwi r7,r28,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rotlwi r8,r30,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// srawi r31,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 3;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// divw r26,r28,r11
	ctx.r26.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 & ~ctx.r8.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// divw r24,r30,r29
	ctx.r24.u64 = uint32_t((ctx.r29.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r30.s32 / ctx.r29.s32 : 0);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8811326c
	if (!ctx.cr6.gt) goto loc_8811326C;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
loc_8811326C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8811353c
	if (!ctx.cr6.gt) goto loc_8811353C;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88113288
	if (!ctx.cr6.eq) goto loc_88113288;
	// li r27,10
	ctx.r27.s64 = 10;
	// b 0x881132b4
	goto loc_881132B4;
loc_88113288:
	// lwz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmplwi cr6,r11,31744
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31744, ctx.xer);
	// bne cr6,0x881132b0
	if (!ctx.cr6.eq) goto loc_881132B0;
	// lwz r11,44(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// cmplwi cr6,r11,992
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 992, ctx.xer);
	// bne cr6,0x881132b0
	if (!ctx.cr6.eq) goto loc_881132B0;
	// lwz r11,48(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// li r27,10
	ctx.r27.s64 = 10;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x881132b4
	if (ctx.cr6.eq) goto loc_881132B4;
loc_881132B0:
	// li r27,11
	ctx.r27.s64 = 11;
loc_881132B4:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881132d0
	if (ctx.cr6.eq) goto loc_881132D0;
	// addi r11,r24,-256
	ctx.r11.s64 = ctx.r24.s64 + -256;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// b 0x881132d4
	goto loc_881132D4;
loc_881132D0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_881132D4:
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// lwz r8,124(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// add. r25,r11,r7
	ctx.r25.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mullw r11,r31,r4
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bge 0x88113378
	if (!ctx.cr0.lt) goto loc_88113378;
	// subf r7,r25,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r25.u64;
	// twllei r24,0
	if (ctx.r24.s32 == 0 || ctx.r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r30,r7,r24
	ctx.r30.u64 = uint32_t((ctx.r24.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r7.s32 / ctx.r24.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// andc r7,r24,r6
	ctx.r7.u64 = ctx.r24.u64 & ~ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x88113370
	if (!ctx.cr6.lt) goto loc_88113370;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88113320:
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8811336c
	if (!ctx.cr6.gt) goto loc_8811336C;
loc_88113330:
	// lbz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// slw r6,r6,r27
	ctx.r6.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r27.u8 & 0x3F));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// sth r6,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88113330
	if (ctx.cr6.lt) goto loc_88113330;
loc_8811336C:
	// bdnz 0x88113320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88113320;
loc_88113370:
	// mullw r11,r30,r24
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_88113378:
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88113430
	if (!ctx.cr6.lt) goto loc_88113430;
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8811338C:
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// lwz r31,132(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r4,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// srawi r11,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ble cr6,0x88113428
	if (!ctx.cr6.gt) goto loc_88113428;
loc_881133B0:
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r30,r10,r7
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r29,r10,r7
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r31,r31,r4
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mullw r28,r28,r4
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mullw r29,r22,r4
	ctx.r29.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r4.s32);
	// slw r10,r10,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r27.u8 & 0x3F));
	// rlwinm r31,r31,29,3,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFE0;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r31,r30,24,8,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881133b0
	if (ctx.cr6.lt) goto loc_881133B0;
loc_88113428:
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// bdnz 0x8811338c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811338C;
loc_88113430:
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8811353c
	if (!ctx.cr6.lt) goto loc_8811353C;
	// subf r11,r26,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r26.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88113444:
	// srawi r7,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 8;
	// lwz r6,132(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x881134f0
	if (!ctx.cr6.lt) goto loc_881134F0;
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r5,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88113534
	if (!ctx.cr6.gt) goto loc_88113534;
loc_88113470:
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r31,r10,r7
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r30,r4,r7
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r5
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r29,r29,r5
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mullw r30,r28,r5
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// rlwinm r4,r4,29,3,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFE0;
	// slw r10,r10,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r27.u8 & 0x3F));
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r4,r31,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// sth r4,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r4.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88113470
	if (ctx.cr6.lt) goto loc_88113470;
	// b 0x88113534
	goto loc_88113534;
loc_881134F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88113534
	if (!ctx.cr6.gt) goto loc_88113534;
loc_881134FC:
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r4,r10,5
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// slw r10,r10,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r27.u8 & 0x3F));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sthu r5,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r8.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881134fc
	if (ctx.cr6.lt) goto loc_881134FC;
loc_88113534:
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// bdnz 0x88113444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88113444;
loc_8811353C:
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E2E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8811E2F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8811e320
	if (!ctx.cr6.eq) goto loc_8811E320;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e320
	if (ctx.cr6.eq) goto loc_8811E320;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// b 0x8811e33c
	goto loc_8811E33C;
loc_8811E320:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8811e358
	if (!ctx.cr6.eq) goto loc_8811E358;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e358
	if (ctx.cr6.eq) goto loc_8811E358;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
loc_8811E33C:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E348;
	sub_880CB318(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E358;
	sub_880CB318(ctx, base);
loc_8811E358:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e394
	if (ctx.cr6.eq) goto loc_8811E394;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8811e384
	if (ctx.cr6.eq) goto loc_8811E384;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E384;
	sub_880CB318(ctx, base);
loc_8811E384:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811E394;
	sub_880CB318(ctx, base);
loc_8811E394:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811EAF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8811EB00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne cr6,0x8811eb34
	if (!ctx.cr6.eq) goto loc_8811EB34;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EB34:
	// lwz r27,28(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x880cb758
	ctx.lr = 0x8811EB4C;
	sub_880CB758(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r28,r11,22
	ctx.r28.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8811eb74
	if (!ctx.cr6.eq) goto loc_8811EB74;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x880cb828
	ctx.lr = 0x8811EB68;
	sub_880CB828(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EB74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8811EB78:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811ec08
	if (ctx.cr6.eq) goto loc_8811EC08;
	// rlwinm r11,r29,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// slw r7,r30,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8811ec08
	if (!ctx.cr6.eq) goto loc_8811EC08;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8811ebc4
	if (ctx.cr6.eq) goto loc_8811EBC4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x8811ebc4
	if (ctx.cr6.eq) goto loc_8811EBC4;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x8811ebc8
	goto loc_8811EBC8;
loc_8811EBC4:
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_8811EBC8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r31.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,76(r4)
	REX_STORE_U32(ctx.r4.u32 + 76, ctx.r30.u32);
loc_8811EC08:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x8811EC1C;
	sub_880CB7C0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8811eb78
	if (!ctx.cr6.eq) goto loc_8811EB78;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x880cb828
	ctx.lr = 0x8811EC30;
	sub_880CB828(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8811ec3c
	if (!ctx.cr6.eq) goto loc_8811EC3C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8811EC3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88122290;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881222bc
	if (!ctx.cr6.eq) goto loc_881222BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881222BC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88122314
	if (ctx.cr6.eq) goto loc_88122314;
loc_881222CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r29.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x880cb318
	ctx.lr = 0x881222F8;
	sub_880CB318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122340
	if (ctx.cr6.lt) goto loc_88122340;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881222cc
	if (!ctx.cr6.eq) goto loc_881222CC;
loc_88122314:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x88122324;
	sub_880CB318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122340
	if (ctx.cr6.lt) goto loc_88122340;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_88122340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122A48) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88122288
	ctx.lr = 0x88122A68;
	sub_88122288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881226c8
	ctx.lr = 0x88122A70;
	sub_881226C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881225d0
	ctx.lr = 0x88122A7C;
	sub_881225D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88122aa0
	if (ctx.cr6.eq) goto loc_88122AA0;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x880cb318
	ctx.lr = 0x88122A9C;
	sub_880CB318(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88122AA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88122ab8
	if (ctx.cr6.eq) goto loc_88122AB8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x88122AB8;
	sub_880CB318(ctx, base);
loc_88122AB8:
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

DEFINE_REX_FUNC(sub_881238B8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881238dc
	if (!ctx.cr6.eq) goto loc_881238DC;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// b 0x88123964
	goto loc_88123964;
loc_881238DC:
	// ld r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x88123938
	if (!ctx.cr6.lt) goto loc_88123938;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88123918
	if (!ctx.cr6.eq) goto loc_88123918;
	// stw r11,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r9,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88123914
	if (!ctx.cr6.eq) goto loc_88123914;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_88123914:
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_88123918:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881238dc
	if (!ctx.cr6.eq) goto loc_881238DC;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_88123938:
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88123954
	if (ctx.cr6.eq) goto loc_88123954;
	// stw r4,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r4.u32);
loc_88123954:
	// stw r4,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88123968
	if (!ctx.cr6.eq) goto loc_88123968;
loc_88123964:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_88123968:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881243D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881243E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,44(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// ld r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r27.u32 + 40);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x8812441c
	if (!ctx.cr6.gt) goto loc_8812441C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8812441C:
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88124440
	if (ctx.cr6.eq) goto loc_88124440;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_88124440:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x88124468
	if (!ctx.cr6.lt) goto loc_88124468;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,212
	ctx.r3.u64 = ctx.r3.u64 | 212;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88124468:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb2c0
	ctx.lr = 0x8812447C;
	sub_880CB2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812450c
	if (ctx.cr6.lt) goto loc_8812450C;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8812449C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8812449c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812449C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x881238b8
	ctx.lr = 0x881244D4;
	sub_881238B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812450c
	if (ctx.cr6.lt) goto loc_8812450C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88123fc8
	ctx.lr = 0x881244F0;
	sub_88123FC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812450c
	if (ctx.cr6.lt) goto loc_8812450C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8812450C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124528
	if (ctx.cr6.eq) goto loc_88124528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb318
	ctx.lr = 0x88124528;
	sub_880CB318(ctx, base);
loc_88124528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88127218;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lhz r10,34(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,176(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// divwu r7,r7,r11
	ctx.r7.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// lwz r28,740(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// divwu r29,r7,r10
	ctx.r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8812729c
	if (!ctx.cr6.eq) goto loc_8812729C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x88126f68
	ctx.lr = 0x8812727C;
	sub_88126F68(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8812729c
	if (!ctx.cr6.lt) goto loc_8812729C;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r8,r11,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r8,0(r23)
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r8.u16);
loc_8812729C:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881272d8
	if (ctx.cr6.eq) goto loc_881272D8;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881272B0:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r7,492(r10)
	REX_STORE_U32(ctx.r10.u32 + 492, ctx.r7.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881272b0
	if (ctx.cr6.lt) goto loc_881272B0;
loc_881272D8:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88127528
	if (!ctx.cr6.eq) goto loc_88127528;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x88127304
	if (ctx.cr6.lt) goto loc_88127304;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88127304:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// blt cr6,0x88127310
	if (ctx.cr6.lt) goto loc_88127310;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_88127310:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88127320
	if (!ctx.cr6.gt) goto loc_88127320;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88127320:
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812733c
	if (ctx.cr6.eq) goto loc_8812733C;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// sraw r27,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r27.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8812735c
	goto loc_8812735C;
loc_8812733C:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88127358
	if (ctx.cr6.eq) goto loc_88127358;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r27,r10,r9
	ctx.r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x8812735c
	goto loc_8812735C;
loc_88127358:
	// lwz r27,256(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
loc_8812735C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88127374
	if (!ctx.cr6.eq) goto loc_88127374;
	// sth r30,0(r23)
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r30.u16);
	// b 0x881276ac
	goto loc_881276AC;
loc_88127374:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r28,0(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881273ec
	if (ctx.cr6.eq) goto loc_881273EC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 1;
loc_8812739C:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r6,388(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mulli r7,r11,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812739c
	if (ctx.cr6.lt) goto loc_8812739C;
loc_881273EC:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88127418
	if (ctx.cr6.eq) goto loc_88127418;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88127410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881276d0
	if (ctx.cr6.lt) goto loc_881276D0;
loc_88127418:
	// lhz r29,34(r31)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r26,34(r31)
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r26.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 488);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88127438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881276cc
	if (ctx.cr6.lt) goto loc_881276CC;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// sth r29,34(r31)
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r29.u16);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// sth r11,0(r23)
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881276ac
	if (ctx.cr6.lt) goto loc_881276AC;
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r10,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r8,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r8.u32);
	// blt 0x88127518
	if (ctx.cr0.lt) goto loc_88127518;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88127518
	if (!ctx.cr6.lt) goto loc_88127518;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881276ac
	if (ctx.cr6.eq) goto loc_881276AC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
loc_881274B8:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r7,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x881ece80
	ctx.lr = 0x881274FC;
	sub_881ECE80(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881274b8
	if (ctx.cr6.lt) goto loc_881274B8;
	// b 0x881276ac
	goto loc_881276AC;
loc_88127518:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_88127528:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rlwinm r7,r29,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88127630
	if (ctx.cr6.eq) goto loc_88127630;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_88127544:
	// mulli r8,r6,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r10,492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8812755c
	if (ctx.cr6.lt) goto loc_8812755C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8812755C:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x88127568
	if (ctx.cr6.lt) goto loc_88127568;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_88127568:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r28
	REX_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 210);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x881275a0
	if (ctx.cr6.lt) goto loc_881275A0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_881275A0:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x881275c0
	if (!ctx.cr6.lt) goto loc_881275C0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x881275b8
	if (!ctx.cr6.lt) goto loc_881275B8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x881275c4
	goto loc_881275C4;
loc_881275B8:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x881275c4
	goto loc_881275C4;
loc_881275C0:
	// li r9,32767
	ctx.r9.s64 = 32767;
loc_881275C4:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,210(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 210);
	// lwzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881275e8
	if (!ctx.cr6.lt) goto loc_881275E8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x88127614
	goto loc_88127614;
loc_881275E8:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x881275f8
	if (ctx.cr6.lt) goto loc_881275F8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_881275F8:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x88127610
	if (!ctx.cr6.lt) goto loc_88127610;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88127614
	if (ctx.cr6.lt) goto loc_88127614;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x88127614
	goto loc_88127614;
loc_88127610:
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_88127614:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88127544
	if (ctx.cr6.lt) goto loc_88127544;
loc_88127630:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812765c
	if (ctx.cr6.eq) goto loc_8812765C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88127654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881276d0
	if (ctx.cr6.lt) goto loc_881276D0;
loc_8812765C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88143b78
	ctx.lr = 0x88127670;
	sub_88143B78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881276cc
	if (ctx.cr6.lt) goto loc_881276CC;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// sth r11,0(r23)
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881276ac
	if (ctx.cr6.eq) goto loc_881276AC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88127698:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88127698
	if (ctx.cr6.lt) goto loc_88127698;
loc_881276AC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x881276d0
	if (!ctx.cr6.eq) goto loc_881276D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881276CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_881276D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88136A20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// blt cr6,0x88136a6c
	if (ctx.cr6.lt) goto loc_88136A6C;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88136A54:
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x88136a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88136A54;
loc_88136A6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88136a7c
	if (!ctx.cr6.gt) goto loc_88136A7C;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
loc_88136A7C:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88137BE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88137BE8;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lhz r26,34(r24)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r24.u32 + 34);
	// beq cr6,0x88137e48
	if (ctx.cr6.eq) goto loc_88137E48;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r25,4
	ctx.r25.s64 = 4;
	// lfs f29,6364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6364);
	ctx.f29.f64 = double(temp.f32);
	// li r22,3
	ctx.r22.s64 = 3;
	// lfs f30,6728(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f30.f64 = double(temp.f32);
	// li r23,-16
	ctx.r23.s64 = -16;
	// lfs f31,6708(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f31.f64 = double(temp.f32);
loc_88137C44:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88137e3c
	if (ctx.cr6.gt) goto loc_88137E3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88137cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88137CDC;
	// bdzf 4*cr6+eq,0x88137d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88137D24;
	// bne cr6,0x88137db0
	if (!ctx.cr6.eq) goto loc_88137DB0;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// beq cr6,0x88137c90
	if (ctx.cr6.eq) goto loc_88137C90;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88137c90
	if (ctx.cr6.eq) goto loc_88137C90;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x880547a0
	ctx.lr = 0x88137C90;
	sub_880547A0(ctx, base);
loc_88137C90:
	// lwz r3,448(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// stw r27,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r27.u32);
	// beq cr6,0x88137cb4
	if (ctx.cr6.eq) goto loc_88137CB4;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88137CB4;
	sub_88052D90(ctx, base);
loc_88137CB4:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88137e38
	if (!ctx.cr6.gt) goto loc_88137E38;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x88137e38
	if (ctx.cr6.lt) goto loc_88137E38;
	// lwz r11,176(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88137e38
	if (ctx.cr6.eq) goto loc_88137E38;
	// stw r21,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r21.u32);
	// b 0x88137e3c
	goto loc_88137E3C;
loc_88137CDC:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88137CF0;
	sub_8812C528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88137e48
	if (ctx.cr6.lt) goto loc_88137E48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r11,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r7.u32);
	// b 0x88137e3c
	goto loc_88137E3C;
loc_88137D24:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88137D38;
	sub_8812C528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88137e48
	if (ctx.cr6.lt) goto loc_88137E48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// beq 0x88137d64
	if (ctx.cr0.eq) goto loc_88137D64;
	// stw r27,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r27.u32);
	// stw r22,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r22.u32);
	// b 0x88137e3c
	goto loc_88137E3C;
loc_88137D64:
	// lhz r11,34(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 34);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x88137da8
	if (!ctx.cr6.eq) goto loc_88137DA8;
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x88137da8
	if (!ctx.cr6.eq) goto loc_88137DA8;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88137e38
	if (ctx.cr6.eq) goto loc_88137E38;
	// stfs f31,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,52(r11)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f30,48(r11)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x88137e38
	goto loc_88137E38;
loc_88137DA8:
	// stw r27,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r27.u32);
	// b 0x88137e38
	goto loc_88137E38;
loc_88137DB0:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// mullw r30,r26,r26
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r26.s32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88137e38
	if (!ctx.cr6.lt) goto loc_88137E38;
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
loc_88137DC4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88137DD4;
	sub_8812C528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88137e48
	if (ctx.cr6.lt) goto loc_88137E48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88137df8
	if (ctx.cr6.eq) goto loc_88137DF8;
	// or r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88137DF8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r9,448(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfsx f11,r8,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r7.u32);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x88137dc4
	if (ctx.cr6.lt) goto loc_88137DC4;
loc_88137E38:
	// stw r25,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r25.u32);
loc_88137E3C:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88137c44
	if (!ctx.cr6.eq) goto loc_88137C44;
loc_88137E48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D380) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v9,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vspltish v10,5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v8,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lvx128 v7,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-30678
	ctx.r4.s64 = -2010513408;
	// lvx128 v3,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v2,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v25,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v6,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v1,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v28,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lwz r11,25784(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 25784);
	// vsubshs v26,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lwz r10,25764(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 25764);
	// vaddshs v22,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v21,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v20,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v17,v26,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v19,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v4,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v18,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v6,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v23,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v24,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v16,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v6,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vsubshs v7,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vor v8,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vaddshs v3,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v9,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vslh v27,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v22,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v2,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vslh v29,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v7,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vaddshs v18,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v17,v23,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v6,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v19,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v29,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v14,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v16,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v28,v18,v20
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v3,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v17,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v26,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v16,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v24,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v23,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v31,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v1,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v19,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// li r3,32
	ctx.r3.s64 = 32;
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,64
	ctx.r11.s64 = 64;
	// vaddshs v16,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// li r10,96
	ctx.r10.s64 = 96;
	// vaddshs v17,v25,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vaddshs v15,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v29,v16,v26
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v26,v17,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vslh v30,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v14,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v22,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v24,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v21,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v20,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v18,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v19,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v17,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v14,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v9,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v15,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v8,v16,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v7,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v6,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v17,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v28,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v15,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v23,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v31,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v10,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v30,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghh v27,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrglh v26,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghh v25,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglh v24,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v23,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglh v22,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrghw128 v63,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrglw128 v62,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrghw128 v60,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw128 v61,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vmrghw128 v59,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v24.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vmrglw128 v58,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v23.u32)));
	// vmrglw128 v57,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrglw128 v56,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v24.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm128 v8,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v10,v63,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v60,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v6,v62,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v63,v61,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v3,v62,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v5,v57,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v4,v57,v56,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vsubshs v21,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v31,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v29,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v20,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v28,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v27,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v26,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v7,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v10,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v19,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v17,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v16,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor v8,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,80
	ctx.r7.s64 = 80;
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,112
	ctx.r6.s64 = 112;
	// vsubshs v6,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v14,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vor v5,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vslh v27,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v19,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v21,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v3,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v19,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v25,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v24,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v17,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v16,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v18,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v16,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v6,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v20,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v31,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v29,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v14,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v19,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v21,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v4,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v15,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v17,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v25,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v10,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v12,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubshs v9,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v27,v15,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v7,v3,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v8,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v23,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v16,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v19,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v12,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v11,v16,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v9,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v21,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v21,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v17,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v5,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v4,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v3,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v2,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88150F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r4,24(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// stw r6,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r4,56(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// stw r4,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,60(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,64(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lwz r8,76(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// lwz r7,80(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// stw r7,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// lwz r6,84(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// stw r6,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// lwz r4,88(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// beq cr6,0x88151018
	if (ctx.cr6.eq) goto loc_88151018;
	// bl 0x880547a0
	ctx.lr = 0x88151014;
	sub_880547A0(ctx, base);
	// b 0x88151020
	goto loc_88151020;
loc_88151018:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88151020;
	sub_88052D90(ctx, base);
loc_88151020:
	// lwz r11,21888(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21888);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,22056(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 22056);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,22060(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22060);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_88155378) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88155380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,22064(r3)
	REX_STORE_U32(ctx.r3.u32 + 22064, ctx.r28.u32);
	// bl 0x8815ad38
	ctx.lr = 0x88155394;
	sub_8815AD38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,156(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r29,160(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x881533f0
	ctx.lr = 0x881553AC;
	sub_881533F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88155484
	if (!ctx.cr6.eq) goto loc_88155484;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88155480
	if (ctx.cr6.gt) goto loc_88155480;
	// lwz r5,160(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88155480
	if (ctx.cr6.gt) goto loc_88155480;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x881553e4
	if (!ctx.cr6.eq) goto loc_881553E4;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x881553ec
	if (ctx.cr6.eq) goto loc_881553EC;
loc_881553E4:
	// stw r30,22084(r31)
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r30.u32);
	// stw r29,22088(r31)
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r29.u32);
loc_881553EC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x88155408
	if (!ctx.cr6.eq) goto loc_88155408;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88155408
	if (!ctx.cr6.eq) goto loc_88155408;
	// stw r27,21888(r31)
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r27.u32);
	// b 0x88155420
	goto loc_88155420;
loc_88155408:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// stw r28,21888(r31)
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r28.u32);
	// addi r10,r10,-20280
	ctx.r10.s64 = ctx.r10.s64 + -20280;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_88155420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815bc60
	ctx.lr = 0x88155428;
	sub_8815BC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815548c
	if (!ctx.cr6.eq) goto loc_8815548C;
	// lwz r11,21992(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21992);
	// stw r28,22064(r31)
	REX_STORE_U32(ctx.r31.u32 + 22064, ctx.r28.u32);
	// stw r28,3728(r31)
	REX_STORE_U32(ctx.r31.u32 + 3728, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88155464
	if (!ctx.cr6.gt) goto loc_88155464;
	// lwz r10,21984(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21984);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r27,21992(r31)
	REX_STORE_U32(ctx.r31.u32 + 21992, ctx.r27.u32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r27,21984(r31)
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r27.u32);
	// stw r11,21988(r31)
	REX_STORE_U32(ctx.r31.u32 + 21988, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155464:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,21988(r31)
	REX_STORE_U32(ctx.r31.u32 + 21988, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,21992(r31)
	REX_STORE_U32(ctx.r31.u32 + 21992, ctx.r27.u32);
	// stw r27,21984(r31)
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155480:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88155484:
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r30,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_8815548C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88157D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88157D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,22272(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 22272);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157dc4
	if (ctx.cr6.eq) goto loc_88157DC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157DC0;
	sub_8815E530(ctx, base);
	// stw r29,22272(r31)
	REX_STORE_U32(ctx.r31.u32 + 22272, ctx.r29.u32);
loc_88157DC4:
	// lwz r4,22276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ddc
	if (ctx.cr6.eq) goto loc_88157DDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157DD8;
	sub_8815E530(ctx, base);
	// stw r29,22276(r31)
	REX_STORE_U32(ctx.r31.u32 + 22276, ctx.r29.u32);
loc_88157DDC:
	// lwz r4,22280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157df4
	if (ctx.cr6.eq) goto loc_88157DF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157DF0;
	sub_8815E530(ctx, base);
	// stw r29,22280(r31)
	REX_STORE_U32(ctx.r31.u32 + 22280, ctx.r29.u32);
loc_88157DF4:
	// lwz r4,22284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157e0c
	if (ctx.cr6.eq) goto loc_88157E0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157E08;
	sub_8815E530(ctx, base);
	// stw r29,22284(r31)
	REX_STORE_U32(ctx.r31.u32 + 22284, ctx.r29.u32);
loc_88157E0C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45252
	ctx.r10.u64 = ctx.r11.u64 | 45252;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88157f98
	if (!ctx.cr6.eq) goto loc_88157F98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// addi r28,r31,3744
	ctx.r28.s64 = ctx.r31.s64 + 3744;
	// bl 0x88156df8
	ctx.lr = 0x88157E30;
	sub_88156DF8(ctx, base);
	// lwz r27,3744(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157e54
	if (ctx.cr6.eq) goto loc_88157E54;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157E48;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157E54;
	sub_8815E528(ctx, base);
loc_88157E54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// addi r28,r31,3752
	ctx.r28.s64 = ctx.r31.s64 + 3752;
	// bl 0x88156df8
	ctx.lr = 0x88157E64;
	sub_88156DF8(ctx, base);
	// lwz r27,3752(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157e88
	if (ctx.cr6.eq) goto loc_88157E88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157E7C;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157E88;
	sub_8815E528(ctx, base);
loc_88157E88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3748(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// addi r28,r31,3748
	ctx.r28.s64 = ctx.r31.s64 + 3748;
	// bl 0x88156df8
	ctx.lr = 0x88157E98;
	sub_88156DF8(ctx, base);
	// lwz r27,3748(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157ebc
	if (ctx.cr6.eq) goto loc_88157EBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157EB0;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157EBC;
	sub_8815E528(ctx, base);
loc_88157EBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// addi r28,r31,3756
	ctx.r28.s64 = ctx.r31.s64 + 3756;
	// bl 0x88156df8
	ctx.lr = 0x88157ECC;
	sub_88156DF8(ctx, base);
	// lwz r27,3756(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157ef0
	if (ctx.cr6.eq) goto loc_88157EF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157EE4;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157EF0;
	sub_8815E528(ctx, base);
loc_88157EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// addi r28,r31,3760
	ctx.r28.s64 = ctx.r31.s64 + 3760;
	// bl 0x88156df8
	ctx.lr = 0x88157F00;
	sub_88156DF8(ctx, base);
	// lwz r27,3760(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157f24
	if (ctx.cr6.eq) goto loc_88157F24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157F18;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157F24;
	sub_8815E528(ctx, base);
loc_88157F24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// addi r28,r31,3764
	ctx.r28.s64 = ctx.r31.s64 + 3764;
	// bl 0x88156df8
	ctx.lr = 0x88157F34;
	sub_88156DF8(ctx, base);
	// lwz r27,3764(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88157f58
	if (ctx.cr6.eq) goto loc_88157F58;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881715c8
	ctx.lr = 0x88157F4C;
	sub_881715C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157F58;
	sub_8815E528(ctx, base);
loc_88157F58:
	// lwz r11,22288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88157f98
	if (ctx.cr6.eq) goto loc_88157F98;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36a0
	ctx.lr = 0x88157F78;
	sub_881B36A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88156df8
	ctx.lr = 0x88157F84;
	sub_88156DF8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157f98
	if (ctx.cr6.eq) goto loc_88157F98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157F98;
	sub_8815E530(ctx, base);
loc_88157F98:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20080
	ctx.r28.s64 = ctx.r28.s64 + -20080;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157fb8
	if (ctx.cr6.eq) goto loc_88157FB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157FB4;
	sub_8815E528(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_88157FB8:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20060
	ctx.r28.s64 = ctx.r28.s64 + -20060;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157fd8
	if (ctx.cr6.eq) goto loc_88157FD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157FD4;
	sub_8815E530(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_88157FD8:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20056
	ctx.r28.s64 = ctx.r28.s64 + -20056;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ff8
	if (ctx.cr6.eq) goto loc_88157FF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157FF4;
	sub_8815E528(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_88157FF8:
	// lwz r4,21944(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158010
	if (ctx.cr6.eq) goto loc_88158010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x8815800C;
	sub_8815E528(ctx, base);
	// stw r29,21944(r31)
	REX_STORE_U32(ctx.r31.u32 + 21944, ctx.r29.u32);
loc_88158010:
	// lwz r4,21972(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158028
	if (ctx.cr6.eq) goto loc_88158028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158024;
	sub_8815E528(ctx, base);
	// stw r29,21972(r31)
	REX_STORE_U32(ctx.r31.u32 + 21972, ctx.r29.u32);
loc_88158028:
	// lwz r4,21956(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158040
	if (ctx.cr6.eq) goto loc_88158040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x8815803C;
	sub_8815E528(ctx, base);
	// stw r29,21956(r31)
	REX_STORE_U32(ctx.r31.u32 + 21956, ctx.r29.u32);
loc_88158040:
	// lwz r4,3972(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158058
	if (ctx.cr6.eq) goto loc_88158058;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158054;
	sub_8815E530(ctx, base);
	// stw r29,3972(r31)
	REX_STORE_U32(ctx.r31.u32 + 3972, ctx.r29.u32);
loc_88158058:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881580ac
	if (!ctx.cr6.eq) goto loc_881580AC;
	// lwz r4,20696(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20696);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815807c
	if (ctx.cr6.eq) goto loc_8815807C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158078;
	sub_8815E530(ctx, base);
	// stw r29,20696(r31)
	REX_STORE_U32(ctx.r31.u32 + 20696, ctx.r29.u32);
loc_8815807C:
	// lwz r4,20700(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20700);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158094
	if (ctx.cr6.eq) goto loc_88158094;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158090;
	sub_8815E530(ctx, base);
	// stw r29,20700(r31)
	REX_STORE_U32(ctx.r31.u32 + 20700, ctx.r29.u32);
loc_88158094:
	// lwz r4,20704(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20704);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580ac
	if (ctx.cr6.eq) goto loc_881580AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580A8;
	sub_8815E530(ctx, base);
	// stw r29,20704(r31)
	REX_STORE_U32(ctx.r31.u32 + 20704, ctx.r29.u32);
loc_881580AC:
	// lwz r4,464(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580c4
	if (ctx.cr6.eq) goto loc_881580C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580C0;
	sub_8815E530(ctx, base);
	// stw r29,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
loc_881580C4:
	// lwz r4,15248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15248);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580dc
	if (ctx.cr6.eq) goto loc_881580DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580D8;
	sub_8815E530(ctx, base);
	// stw r29,15248(r31)
	REX_STORE_U32(ctx.r31.u32 + 15248, ctx.r29.u32);
loc_881580DC:
	// lwz r4,3012(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3012);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881580f4
	if (ctx.cr6.eq) goto loc_881580F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881580F0;
	sub_8815E530(ctx, base);
	// stw r29,3012(r31)
	REX_STORE_U32(ctx.r31.u32 + 3012, ctx.r29.u32);
loc_881580F4:
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881581ec
	if (ctx.cr6.eq) goto loc_881581EC;
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881581a0
	if (!ctx.cr6.eq) goto loc_881581A0;
	// lwz r4,3084(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158128
	if (ctx.cr6.eq) goto loc_88158128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158124;
	sub_8815E530(ctx, base);
	// stw r29,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r29.u32);
loc_88158128:
	// lwz r4,15332(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158140
	if (ctx.cr6.eq) goto loc_88158140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815813C;
	sub_8815E530(ctx, base);
	// stw r29,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r29.u32);
loc_88158140:
	// lwz r4,15356(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158158
	if (ctx.cr6.eq) goto loc_88158158;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158154;
	sub_8815E530(ctx, base);
	// stw r29,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r29.u32);
loc_88158158:
	// lwz r4,15272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158170
	if (ctx.cr6.eq) goto loc_88158170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815816C;
	sub_8815E530(ctx, base);
	// stw r29,15272(r31)
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r29.u32);
loc_88158170:
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158188
	if (ctx.cr6.eq) goto loc_88158188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158184;
	sub_8815E530(ctx, base);
	// stw r29,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
loc_88158188:
	// lwz r4,1784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881581b8
	if (ctx.cr6.eq) goto loc_881581B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815819C;
	sub_8815E530(ctx, base);
	// b 0x881581b4
	goto loc_881581B4;
loc_881581A0:
	// stw r29,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r29.u32);
	// stw r29,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r29.u32);
	// stw r29,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r29.u32);
	// stw r29,15272(r31)
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r29.u32);
	// stw r29,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
loc_881581B4:
	// stw r29,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r29.u32);
loc_881581B8:
	// lwz r4,15340(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881581d0
	if (ctx.cr6.eq) goto loc_881581D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881581CC;
	sub_8815E530(ctx, base);
	// stw r29,15340(r31)
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r29.u32);
loc_881581D0:
	// lwz r4,15348(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582ac
	if (ctx.cr6.eq) goto loc_881582AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881581E4;
	sub_8815E530(ctx, base);
	// stw r29,15348(r31)
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r29.u32);
	// b 0x881582ac
	goto loc_881582AC;
loc_881581EC:
	// lwz r4,15272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158204
	if (ctx.cr6.eq) goto loc_88158204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158200;
	sub_8815E530(ctx, base);
	// stw r29,15272(r31)
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r29.u32);
loc_88158204:
	// lwz r4,3084(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815821c
	if (ctx.cr6.eq) goto loc_8815821C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158218;
	sub_8815E530(ctx, base);
	// stw r29,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r29.u32);
loc_8815821C:
	// lwz r4,15332(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158234
	if (ctx.cr6.eq) goto loc_88158234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158230;
	sub_8815E530(ctx, base);
	// stw r29,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r29.u32);
loc_88158234:
	// lwz r4,15356(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815824c
	if (ctx.cr6.eq) goto loc_8815824C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158248;
	sub_8815E530(ctx, base);
	// stw r29,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r29.u32);
loc_8815824C:
	// lwz r4,15340(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158264
	if (ctx.cr6.eq) goto loc_88158264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158260;
	sub_8815E530(ctx, base);
	// stw r29,15340(r31)
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r29.u32);
loc_88158264:
	// lwz r4,15348(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815827c
	if (ctx.cr6.eq) goto loc_8815827C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158278;
	sub_8815E530(ctx, base);
	// stw r29,15348(r31)
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r29.u32);
loc_8815827C:
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158294
	if (ctx.cr6.eq) goto loc_88158294;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158290;
	sub_8815E530(ctx, base);
	// stw r29,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
loc_88158294:
	// lwz r4,1784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582ac
	if (ctx.cr6.eq) goto loc_881582AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582A8;
	sub_8815E530(ctx, base);
	// stw r29,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r29.u32);
loc_881582AC:
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582c4
	if (ctx.cr6.eq) goto loc_881582C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582C0;
	sub_8815E530(ctx, base);
	// stw r29,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
loc_881582C4:
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881582dc
	if (ctx.cr6.eq) goto loc_881582DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582D8;
	sub_8815E530(ctx, base);
	// stw r29,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
loc_881582DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88158300
	if (!ctx.cr6.eq) goto loc_88158300;
	// lwz r4,3088(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158300
	if (ctx.cr6.eq) goto loc_88158300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881582FC;
	sub_8815E530(ctx, base);
	// stw r29,3088(r31)
	REX_STORE_U32(ctx.r31.u32 + 3088, ctx.r29.u32);
loc_88158300:
	// lwz r4,15304(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15304);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158318
	if (ctx.cr6.eq) goto loc_88158318;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158314;
	sub_8815E528(ctx, base);
	// stw r29,15304(r31)
	REX_STORE_U32(ctx.r31.u32 + 15304, ctx.r29.u32);
loc_88158318:
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815836c
	if (ctx.cr6.eq) goto loc_8815836C;
	// lwz r4,14872(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815833c
	if (ctx.cr6.eq) goto loc_8815833C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158338;
	sub_8815E530(ctx, base);
	// stw r29,14872(r31)
	REX_STORE_U32(ctx.r31.u32 + 14872, ctx.r29.u32);
loc_8815833C:
	// lwz r4,14876(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14876);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158354
	if (ctx.cr6.eq) goto loc_88158354;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158350;
	sub_8815E528(ctx, base);
	// stw r29,14876(r31)
	REX_STORE_U32(ctx.r31.u32 + 14876, ctx.r29.u32);
loc_88158354:
	// lwz r4,14880(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14880);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815836c
	if (ctx.cr6.eq) goto loc_8815836C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x88158368;
	sub_8815E528(ctx, base);
	// stw r29,14880(r31)
	REX_STORE_U32(ctx.r31.u32 + 14880, ctx.r29.u32);
loc_8815836C:
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158384
	if (ctx.cr6.eq) goto loc_88158384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158380;
	sub_8815E530(ctx, base);
	// stw r29,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
loc_88158384:
	// lwz r4,276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815839c
	if (ctx.cr6.eq) goto loc_8815839C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158398;
	sub_8815E530(ctx, base);
	// stw r29,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
loc_8815839C:
	// lwz r4,1896(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881583b4
	if (ctx.cr6.eq) goto loc_881583B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881583B0;
	sub_8815E530(ctx, base);
	// stw r29,1896(r31)
	REX_STORE_U32(ctx.r31.u32 + 1896, ctx.r29.u32);
loc_881583B4:
	// lwz r4,1900(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881583cc
	if (ctx.cr6.eq) goto loc_881583CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881583C8;
	sub_8815E528(ctx, base);
	// stw r29,1900(r31)
	REX_STORE_U32(ctx.r31.u32 + 1900, ctx.r29.u32);
loc_881583CC:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x881583e0
	if (ctx.cr6.lt) goto loc_881583E0;
	// addi r3,r31,1972
	ctx.r3.s64 = ctx.r31.s64 + 1972;
	// bl 0x881b4370
	ctx.lr = 0x881583E0;
	sub_881B4370(ctx, base);
loc_881583E0:
	// lwz r4,15720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15720);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881583f8
	if (ctx.cr6.eq) goto loc_881583F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881583F4;
	sub_8815E530(ctx, base);
	// stw r29,15720(r31)
	REX_STORE_U32(ctx.r31.u32 + 15720, ctx.r29.u32);
loc_881583F8:
	// lwz r4,15728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15728);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158410
	if (ctx.cr6.eq) goto loc_88158410;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815840C;
	sub_8815E530(ctx, base);
	// stw r29,15728(r31)
	REX_STORE_U32(ctx.r31.u32 + 15728, ctx.r29.u32);
loc_88158410:
	// lwz r4,15724(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158428
	if (ctx.cr6.eq) goto loc_88158428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158424;
	sub_8815E530(ctx, base);
	// stw r29,15724(r31)
	REX_STORE_U32(ctx.r31.u32 + 15724, ctx.r29.u32);
loc_88158428:
	// lwz r4,15732(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15732);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158440
	if (ctx.cr6.eq) goto loc_88158440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815843C;
	sub_8815E530(ctx, base);
	// stw r29,15732(r31)
	REX_STORE_U32(ctx.r31.u32 + 15732, ctx.r29.u32);
loc_88158440:
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815848c
	if (ctx.cr6.eq) goto loc_8815848C;
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8815848c
	if (ctx.cr6.eq) goto loc_8815848C;
	// stw r29,15736(r31)
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r29.u32);
	// stw r29,15744(r31)
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r29.u32);
	// stw r29,15752(r31)
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r29.u32);
	// stw r29,15760(r31)
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r29.u32);
	// stw r29,15768(r31)
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r29.u32);
	// stw r29,15776(r31)
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r29.u32);
	// stw r29,15784(r31)
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r29.u32);
	// stw r29,15792(r31)
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r29.u32);
	// stw r29,15800(r31)
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r29.u32);
	// stw r29,15808(r31)
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r29.u32);
	// stw r29,15816(r31)
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r29.u32);
	// b 0x881585a8
	goto loc_881585A8;
loc_8815848C:
	// lwz r4,15736(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584a4
	if (ctx.cr6.eq) goto loc_881584A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584A0;
	sub_8815E530(ctx, base);
	// stw r29,15736(r31)
	REX_STORE_U32(ctx.r31.u32 + 15736, ctx.r29.u32);
loc_881584A4:
	// lwz r4,15744(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584bc
	if (ctx.cr6.eq) goto loc_881584BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584B8;
	sub_8815E530(ctx, base);
	// stw r29,15744(r31)
	REX_STORE_U32(ctx.r31.u32 + 15744, ctx.r29.u32);
loc_881584BC:
	// lwz r4,15752(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15752);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584d4
	if (ctx.cr6.eq) goto loc_881584D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584D0;
	sub_8815E530(ctx, base);
	// stw r29,15752(r31)
	REX_STORE_U32(ctx.r31.u32 + 15752, ctx.r29.u32);
loc_881584D4:
	// lwz r4,15760(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15760);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881584ec
	if (ctx.cr6.eq) goto loc_881584EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881584E8;
	sub_8815E530(ctx, base);
	// stw r29,15760(r31)
	REX_STORE_U32(ctx.r31.u32 + 15760, ctx.r29.u32);
loc_881584EC:
	// lwz r4,15768(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158504
	if (ctx.cr6.eq) goto loc_88158504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158500;
	sub_8815E530(ctx, base);
	// stw r29,15768(r31)
	REX_STORE_U32(ctx.r31.u32 + 15768, ctx.r29.u32);
loc_88158504:
	// lwz r4,15776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815851c
	if (ctx.cr6.eq) goto loc_8815851C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158518;
	sub_8815E530(ctx, base);
	// stw r29,15776(r31)
	REX_STORE_U32(ctx.r31.u32 + 15776, ctx.r29.u32);
loc_8815851C:
	// lwz r4,15784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158534
	if (ctx.cr6.eq) goto loc_88158534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158530;
	sub_8815E530(ctx, base);
	// stw r29,15784(r31)
	REX_STORE_U32(ctx.r31.u32 + 15784, ctx.r29.u32);
loc_88158534:
	// lwz r4,15792(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815854c
	if (ctx.cr6.eq) goto loc_8815854C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158548;
	sub_8815E530(ctx, base);
	// stw r29,15792(r31)
	REX_STORE_U32(ctx.r31.u32 + 15792, ctx.r29.u32);
loc_8815854C:
	// lwz r4,15800(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158564
	if (ctx.cr6.eq) goto loc_88158564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158560;
	sub_8815E530(ctx, base);
	// stw r29,15800(r31)
	REX_STORE_U32(ctx.r31.u32 + 15800, ctx.r29.u32);
loc_88158564:
	// lwz r4,15808(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15808);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815857c
	if (ctx.cr6.eq) goto loc_8815857C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158578;
	sub_8815E530(ctx, base);
	// stw r29,15808(r31)
	REX_STORE_U32(ctx.r31.u32 + 15808, ctx.r29.u32);
loc_8815857C:
	// lwz r4,15816(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15816);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158594
	if (ctx.cr6.eq) goto loc_88158594;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158590;
	sub_8815E530(ctx, base);
	// stw r29,15816(r31)
	REX_STORE_U32(ctx.r31.u32 + 15816, ctx.r29.u32);
loc_88158594:
	// lwz r4,15824(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15824);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881585ac
	if (ctx.cr6.eq) goto loc_881585AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585A8;
	sub_8815E530(ctx, base);
loc_881585A8:
	// stw r29,15824(r31)
	REX_STORE_U32(ctx.r31.u32 + 15824, ctx.r29.u32);
loc_881585AC:
	// lwz r11,3392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3392);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x881586d8
	if (ctx.cr6.lt) goto loc_881586D8;
	// lwz r4,15740(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15740);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881585d0
	if (ctx.cr6.eq) goto loc_881585D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585CC;
	sub_8815E530(ctx, base);
	// stw r29,15740(r31)
	REX_STORE_U32(ctx.r31.u32 + 15740, ctx.r29.u32);
loc_881585D0:
	// lwz r4,15748(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15748);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881585e8
	if (ctx.cr6.eq) goto loc_881585E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585E4;
	sub_8815E530(ctx, base);
	// stw r29,15748(r31)
	REX_STORE_U32(ctx.r31.u32 + 15748, ctx.r29.u32);
loc_881585E8:
	// lwz r4,15756(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15756);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158600
	if (ctx.cr6.eq) goto loc_88158600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881585FC;
	sub_8815E530(ctx, base);
	// stw r29,15756(r31)
	REX_STORE_U32(ctx.r31.u32 + 15756, ctx.r29.u32);
loc_88158600:
	// lwz r4,15764(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15764);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158618
	if (ctx.cr6.eq) goto loc_88158618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158614;
	sub_8815E530(ctx, base);
	// stw r29,15764(r31)
	REX_STORE_U32(ctx.r31.u32 + 15764, ctx.r29.u32);
loc_88158618:
	// lwz r4,15772(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15772);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158630
	if (ctx.cr6.eq) goto loc_88158630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815862C;
	sub_8815E530(ctx, base);
	// stw r29,15772(r31)
	REX_STORE_U32(ctx.r31.u32 + 15772, ctx.r29.u32);
loc_88158630:
	// lwz r4,15780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15780);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158648
	if (ctx.cr6.eq) goto loc_88158648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158644;
	sub_8815E530(ctx, base);
	// stw r29,15780(r31)
	REX_STORE_U32(ctx.r31.u32 + 15780, ctx.r29.u32);
loc_88158648:
	// lwz r4,15788(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158660
	if (ctx.cr6.eq) goto loc_88158660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815865C;
	sub_8815E530(ctx, base);
	// stw r29,15788(r31)
	REX_STORE_U32(ctx.r31.u32 + 15788, ctx.r29.u32);
loc_88158660:
	// lwz r4,15796(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15796);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158678
	if (ctx.cr6.eq) goto loc_88158678;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x88158674;
	sub_8815E530(ctx, base);
	// stw r29,15796(r31)
	REX_STORE_U32(ctx.r31.u32 + 15796, ctx.r29.u32);
loc_88158678:
	// lwz r4,15804(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15804);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88158690
	if (ctx.cr6.eq) goto loc_88158690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815868C;
	sub_8815E530(ctx, base);
	// stw r29,15804(r31)
	REX_STORE_U32(ctx.r31.u32 + 15804, ctx.r29.u32);
loc_88158690:
	// lwz r4,15812(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15812);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586a8
	if (ctx.cr6.eq) goto loc_881586A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881586A4;
	sub_8815E530(ctx, base);
	// stw r29,15812(r31)
	REX_STORE_U32(ctx.r31.u32 + 15812, ctx.r29.u32);
loc_881586A8:
	// lwz r4,15820(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586c0
	if (ctx.cr6.eq) goto loc_881586C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881586BC;
	sub_8815E530(ctx, base);
	// stw r29,15820(r31)
	REX_STORE_U32(ctx.r31.u32 + 15820, ctx.r29.u32);
loc_881586C0:
	// lwz r4,15828(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15828);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586d8
	if (ctx.cr6.eq) goto loc_881586D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e530
	ctx.lr = 0x881586D4;
	sub_8815E530(ctx, base);
	// stw r29,15828(r31)
	REX_STORE_U32(ctx.r31.u32 + 15828, ctx.r29.u32);
loc_881586D8:
	// lwz r4,22124(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22124);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881586f0
	if (ctx.cr6.eq) goto loc_881586F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881586EC;
	sub_8815E528(ctx, base);
	// stw r29,22124(r31)
	REX_STORE_U32(ctx.r31.u32 + 22124, ctx.r29.u32);
loc_881586F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88176D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stb r7,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// ble 0x88176d60
	if (!ctx.cr0.gt) goto loc_88176D60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88176D3C:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vaddubs v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddubs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x88176d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176D3C;
loc_88176D60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r6,r11,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_88176D74:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88176d90
	if (!ctx.cr6.gt) goto loc_88176D90;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88176D90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88176d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176D74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88177CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88177CF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// ble cr6,0x88177f7c
	if (!ctx.cr6.gt) goto loc_88177F7C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88177f7c
	if (!ctx.cr6.gt) goto loc_88177F7C;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d48
	if (ctx.cr6.eq) goto loc_88177D48;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88177d60
	if (!ctx.cr6.lt) goto loc_88177D60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d48
	if (ctx.cr6.eq) goto loc_88177D48;
	// bl 0x8815ba70
	ctx.lr = 0x88177D44;
	sub_8815BA70(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_88177D48:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177D54;
	sub_8815B9F8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177D60:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d88
	if (ctx.cr6.eq) goto loc_88177D88;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177da0
	if (!ctx.cr6.lt) goto loc_88177DA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177d88
	if (ctx.cr6.eq) goto loc_88177D88;
	// bl 0x8815ba70
	ctx.lr = 0x88177D84;
	sub_8815BA70(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_88177D88:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177D94;
	sub_8815B9F8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177DA0:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177dc8
	if (ctx.cr6.eq) goto loc_88177DC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177de0
	if (!ctx.cr6.lt) goto loc_88177DE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177dc8
	if (ctx.cr6.eq) goto loc_88177DC8;
	// bl 0x8815ba70
	ctx.lr = 0x88177DC4;
	sub_8815BA70(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_88177DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177DD4;
	sub_8815B9F8(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177DE0:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e08
	if (ctx.cr6.eq) goto loc_88177E08;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88177e20
	if (!ctx.cr6.lt) goto loc_88177E20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e08
	if (ctx.cr6.eq) goto loc_88177E08;
	// bl 0x8815ba70
	ctx.lr = 0x88177E04;
	sub_8815BA70(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_88177E08:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E14;
	sub_8815B9F8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177E20:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e48
	if (ctx.cr6.eq) goto loc_88177E48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177e60
	if (!ctx.cr6.lt) goto loc_88177E60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e48
	if (ctx.cr6.eq) goto loc_88177E48;
	// bl 0x8815ba70
	ctx.lr = 0x88177E44;
	sub_8815BA70(ctx, base);
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_88177E48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E54;
	sub_8815B9F8(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177E60:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e88
	if (ctx.cr6.eq) goto loc_88177E88;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177ea0
	if (!ctx.cr6.lt) goto loc_88177EA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177e88
	if (ctx.cr6.eq) goto loc_88177E88;
	// bl 0x8815ba70
	ctx.lr = 0x88177E84;
	sub_8815BA70(ctx, base);
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_88177E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177E94;
	sub_8815B9F8(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ee0
	if (ctx.cr6.eq) goto loc_88177EE0;
loc_88177EA0:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ec8
	if (ctx.cr6.eq) goto loc_88177EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88177f70
	if (!ctx.cr6.lt) goto loc_88177F70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ec8
	if (ctx.cr6.eq) goto loc_88177EC8;
	// bl 0x8815ba70
	ctx.lr = 0x88177EC4;
	sub_8815BA70(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_88177EC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815b9f8
	ctx.lr = 0x88177ED4;
	sub_8815B9F8(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88177f70
	if (!ctx.cr6.eq) goto loc_88177F70;
loc_88177EE0:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,-9
	ctx.r27.s64 = -9;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177ef8
	if (ctx.cr6.eq) goto loc_88177EF8;
	// bl 0x8815ba70
	ctx.lr = 0x88177EF4;
	sub_8815BA70(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_88177EF8:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f0c
	if (ctx.cr6.eq) goto loc_88177F0C;
	// bl 0x8815ba70
	ctx.lr = 0x88177F08;
	sub_8815BA70(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_88177F0C:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f20
	if (ctx.cr6.eq) goto loc_88177F20;
	// bl 0x8815ba70
	ctx.lr = 0x88177F1C;
	sub_8815BA70(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_88177F20:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f34
	if (ctx.cr6.eq) goto loc_88177F34;
	// bl 0x8815ba70
	ctx.lr = 0x88177F30;
	sub_8815BA70(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_88177F34:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f48
	if (ctx.cr6.eq) goto loc_88177F48;
	// bl 0x8815ba70
	ctx.lr = 0x88177F44;
	sub_8815BA70(ctx, base);
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_88177F48:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f5c
	if (ctx.cr6.eq) goto loc_88177F5C;
	// bl 0x8815ba70
	ctx.lr = 0x88177F58;
	sub_8815BA70(ctx, base);
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_88177F5C:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88177f70
	if (ctx.cr6.eq) goto loc_88177F70;
	// bl 0x8815ba70
	ctx.lr = 0x88177F6C;
	sub_8815BA70(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_88177F70:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88177F7C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817A068) {
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
	// ble cr6,0x8817a308
	if (!ctx.cr6.gt) goto loc_8817A308;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8817a308
	if (!ctx.cr6.gt) goto loc_8817A308;
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
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,12088(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f11,f1,f12
	ctx.f11.f64 = ctx.f1.f64 + ctx.f12.f64;
	// lfs f0,6728(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,7000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
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
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// fsubs f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8817a0f8
	if (!ctx.cr6.gt) goto loc_8817A0F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8817A0F8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8817a164
	if (ctx.cr6.lt) goto loc_8817A164;
	// fadd f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A128:
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
	// blt cr6,0x8817a128
	if (ctx.cr6.lt) goto loc_8817A128;
loc_8817A164:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a19c
	if (!ctx.cr6.lt) goto loc_8817A19C;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A18C:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A18C;
loc_8817A19C:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8817a1c0
	if (ctx.cr6.gt) goto loc_8817A1C0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8817A1C0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a1f8
	if (!ctx.cr6.lt) goto loc_8817A1F8;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8817A1E4:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A1E4;
loc_8817A1F8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a234
	if (!ctx.cr6.lt) goto loc_8817A234;
	// fadd f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f12.f64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A218:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a218
	if (ctx.cr6.lt) goto loc_8817A218;
loc_8817A234:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a270
	if (!ctx.cr6.gt) goto loc_8817A270;
	// fadd f0,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 + ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A254:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a254
	if (ctx.cr6.lt) goto loc_8817A254;
loc_8817A270:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a398
	if (!ctx.cr6.gt) goto loc_8817A398;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,12180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8817A28C:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadd f8,f9,f12
	ctx.f8.f64 = ctx.f9.f64 + ctx.f12.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
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
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fadd f2,f3,f12
	ctx.f2.f64 = ctx.f3.f64 + ctx.f12.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8817a28c
	if (ctx.cr6.lt) goto loc_8817A28C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8817A308:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a398
	if (!ctx.cr6.gt) goto loc_8817A398;
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
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfd f0,12088(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
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
	// stfd f6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A364:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a364
	if (ctx.cr6.lt) goto loc_8817A364;
loc_8817A398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88182300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88182308;
	__savegprlr_27(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881fdb50
	ctx.lr = 0x88182314;
	sub_881FDB50(ctx, base);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lhz r10,16036(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
	// addi r27,r31,22432
	ctx.r27.s64 = ctx.r31.s64 + 22432;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x88182330;
	sub_881FC868(ctx, base);
	// addi r28,r31,17392
	ctx.r28.s64 = ctx.r31.s64 + 17392;
	// addi r29,r31,15984
	ctx.r29.s64 = ctx.r31.s64 + 15984;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881fdc38
	ctx.lr = 0x88182354;
	sub_881FDC38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882418e0
	ctx.lr = 0x88182378;
	sub_882418E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215bc0
	ctx.lr = 0x8818239C;
	sub_88215BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88182410
	if (ctx.cr6.eq) goto loc_88182410;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x881823d8
	if (!ctx.cr6.eq) goto loc_881823D8;
	// bl 0x8817fd58
	ctx.lr = 0x881823D4;
	sub_8817FD58(ctx, base);
	// b 0x881823dc
	goto loc_881823DC;
loc_881823D8:
	// bl 0x881803d8
	ctx.lr = 0x881823DC;
	sub_881803D8(ctx, base);
loc_881823DC:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x8817ea48
	ctx.lr = 0x88182410;
	sub_8817EA48(ctx, base);
loc_88182410:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88182438
	if (!ctx.cr6.eq) goto loc_88182438;
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88182438
	if (!ctx.cr6.eq) goto loc_88182438;
	// lwz r11,15260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8818243c
	if (ctx.cr6.eq) goto loc_8818243C;
loc_88182438:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8818243C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x8818245C;
	sub_881FCBB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_88182460:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88183890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88183898;
	__savegprlr_28(ctx, base);
	// rlwinm r9,r6,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x8;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// li r11,4
	ctx.r11.s64 = 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_881838C0:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r5,r3,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r9,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(784));
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r3,r3,784
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// mulli r29,r9,1892
	ctx.r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1892));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r30,1448
	ctx.r8.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1448));
	// subf r6,r29,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r29.u64;
	// mulli r7,r7,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1448));
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// addi r3,r7,64
	ctx.r3.s64 = ctx.r7.s64 + 64;
	// srawi r8,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 7;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// srawi r6,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 7;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// srawi r5,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 7;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bdnz 0x881838c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881838C0;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r5,r11,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
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
loc_88183968:
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r30,r3,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mulli r7,r6,1892
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1892));
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r31,r30,784
	ctx.r31.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(784));
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mulli r28,r6,784
	ctx.r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(784));
	// mulli r30,r30,1892
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1892));
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mulli r7,r8,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
	// subf r8,r30,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r30.u64;
	// add r31,r9,r6
	ctx.r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r8,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88183968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88183968;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881856C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881856D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mulhw r10,r22,r11
	ctx.r10.s64 = (int64_t(ctx.r22.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r8,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf. r6,r7,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88185810
	if (!ctx.cr0.eq) goto loc_88185810;
	// mulhw r10,r30,r11
	ctx.r10.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r9,r10,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x88185810
	if (ctx.cr0.eq) goto loc_88185810;
	// clrlwi r21,r30,31
	ctx.r21.u64 = ctx.r30.u32 & 0x1;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881858f0
	if (!ctx.cr6.gt) goto loc_881858F0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// add r24,r30,r11
	ctx.r24.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r26,r11,24640
	ctx.r26.s64 = ctx.r11.s64 + 24640;
loc_88185760:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881857fc
	if (!ctx.cr6.lt) goto loc_881857FC;
loc_8818576C:
	// addi r5,r26,64
	ctx.r5.s64 = ctx.r26.s64 + 64;
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bl 0x8815fdc8
	ctx.lr = 0x88185784;
	sub_8815FDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88185a58
	if (!ctx.cr6.eq) goto loc_88185A58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r31,r29
	ctx.r6.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r7,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r7.u8);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stbx r5,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r3,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stbx r7,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u8);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// stb r6,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// blt cr6,0x8818576c
	if (ctx.cr6.lt) goto loc_8818576C;
loc_881857FC:
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88185760
	if (ctx.cr6.lt) goto loc_88185760;
	// b 0x881858f0
	goto loc_881858F0;
loc_88185810:
	// mulhw r11,r30,r11
	ctx.r11.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r20,r22,31
	ctx.r20.u64 = ctx.r22.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r20,r22
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r22.s32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r21,r11,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r11.u64;
	// bge cr6,0x881858f0
	if (!ctx.cr6.lt) goto loc_881858F0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// mullw r27,r30,r20
	ctx.r27.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r20.s32);
	// rlwinm r24,r30,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,24640
	ctx.r26.s64 = ctx.r11.s64 + 24640;
loc_88185848:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881858e0
	if (!ctx.cr6.lt) goto loc_881858E0;
loc_88185854:
	// addi r5,r26,64
	ctx.r5.s64 = ctx.r26.s64 + 64;
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bl 0x8815fdc8
	ctx.lr = 0x8818586C;
	sub_8815FDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88185a58
	if (!ctx.cr6.eq) goto loc_88185A58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r8,r31,r29
	ctx.r8.u64 = ctx.r31.u64 + ctx.r29.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stb r6,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stb r5,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r5.u8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r3,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// stb r8,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// blt cr6,0x88185854
	if (ctx.cr6.lt) goto loc_88185854;
loc_881858E0:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88185848
	if (ctx.cr6.lt) goto loc_88185848;
loc_881858F0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881859a0
	if (!ctx.cr6.gt) goto loc_881859A0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_88185900:
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
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
	// bge 0x88185928
	if (!ctx.cr0.lt) goto loc_88185928;
	// bl 0x88156678
	ctx.lr = 0x88185928;
	sub_88156678(ctx, base);
loc_88185928:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8818597c
	if (ctx.cr6.eq) goto loc_8818597C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88185994
	if (!ctx.cr6.gt) goto loc_88185994;
	// subf r27,r30,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r30.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_88185940:
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
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
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88185968
	if (!ctx.cr0.lt) goto loc_88185968;
	// bl 0x88156678
	ctx.lr = 0x88185968;
	sub_88156678(ctx, base);
loc_88185968:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbux r11,r27,r30
	ea = ctx.r27.u32 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r27.u32 = ea;
	// bne 0x88185940
	if (!ctx.cr0.eq) goto loc_88185940;
	// b 0x88185994
	goto loc_88185994;
loc_8818597C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88185994
	if (!ctx.cr6.gt) goto loc_88185994;
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_8818598C:
	// stbux r19,r11,r30
	ea = ctx.r11.u32 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8818598c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818598C;
loc_88185994:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bne 0x88185900
	if (!ctx.cr0.eq) goto loc_88185900;
loc_881859A0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88185a54
	if (ctx.cr6.eq) goto loc_88185A54;
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
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
	// bge 0x881859d0
	if (!ctx.cr0.lt) goto loc_881859D0;
	// bl 0x88156678
	ctx.lr = 0x881859D0;
	sub_88156678(ctx, base);
loc_881859D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88185a2c
	if (ctx.cr6.eq) goto loc_88185A2C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88185a54
	if (!ctx.cr6.lt) goto loc_88185A54;
loc_881859E4:
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
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
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88185a0c
	if (!ctx.cr0.lt) goto loc_88185A0C;
	// bl 0x88156678
	ctx.lr = 0x88185A0C;
	sub_88156678(ctx, base);
loc_88185A0C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x881859e4
	if (ctx.cr6.lt) goto loc_881859E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88185A2C:
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88185a54
	if (!ctx.cr6.lt) goto loc_88185A54;
	// add r10,r21,r29
	ctx.r10.u64 = ctx.r21.u64 + ctx.r29.u64;
	// subf. r11,r21,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// beq 0x88185a54
	if (ctx.cr0.eq) goto loc_88185A54;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88185A4C:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x88185a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88185A4C;
loc_88185A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88185A58:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881930B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881930B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r30,84(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r15,r9,r10
	ctx.r15.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r10,3784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r8,3780(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r14,r8,r11
	ctx.r14.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88193164
	if (!ctx.cr6.lt) goto loc_88193164;
loc_8819310C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88193164
	if (ctx.cr6.eq) goto loc_88193164;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x88193154
	if (!ctx.cr0.lt) goto loc_88193154;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88193154;
	sub_88156678(ctx, base);
loc_88193154:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819310c
	if (ctx.cr6.gt) goto loc_8819310C;
loc_88193164:
	// subfic r11,r29,64
	ctx.xer.ca = ctx.r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r29.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8819319c
	if (!ctx.cr0.lt) goto loc_8819319C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8819319C;
	sub_88156678(ctx, base);
loc_8819319C:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stw r9,1964(r31)
	REX_STORE_U32(ctx.r31.u32 + 1964, ctx.r9.u32);
	// blt cr6,0x881931c4
	if (ctx.cr6.lt) goto loc_881931C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8815e728
	ctx.lr = 0x881931C0;
	sub_8815E728(ctx, base);
	// b 0x881931e4
	goto loc_881931E4;
loc_881931C4:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r8,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r8.u32);
	// stw r7,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_881931E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b58f8
	ctx.lr = 0x881931F4;
	sub_881B58F8(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// ble cr6,0x8819321c
	if (!ctx.cr6.gt) goto loc_8819321C;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
loc_8819321C:
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r3,1772(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r16,r7,r11
	ctx.r16.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r17,r6,r8
	ctx.r17.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x88052d90
	ctx.lr = 0x88193274;
	sub_88052D90(ctx, base);
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lwz r11,-11676(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -11676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r11,r11,-10108
	ctx.r11.s64 = ctx.r11.s64 + -10108;
	// beq cr6,0x881932a4
	if (ctx.cr6.eq) goto loc_881932A4;
	// lwz r10,1828(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1828);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1820(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1824(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// b 0x881932b8
	goto loc_881932B8;
loc_881932A4:
	// lwz r10,1832(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1812(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
loc_881932B8:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,1792(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881932e0
	if (ctx.cr6.eq) goto loc_881932E0;
	// lwz r10,1832(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1812(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_881932E0:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,1968(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r24,1772(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r27,84(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,1976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881935a0
	if (!ctx.cr6.gt) goto loc_881935A0;
	// li r18,255
	ctx.r18.s64 = 255;
loc_88193314:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r23,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r29.s32 >> 1;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r6,r23
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r10,r15
	ctx.r19.u64 = ctx.r10.u64 + ctx.r15.u64;
	// add r21,r11,r14
	ctx.r21.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r20,r11,r7
	ctx.r20.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8819358c
	if (!ctx.cr6.gt) goto loc_8819358C;
loc_88193354:
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r3,1972(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1972);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b43c8
	ctx.lr = 0x88193370;
	sub_881B43C8(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88190eb0
	ctx.lr = 0x881933A4;
	sub_88190EB0(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881933e4
	if (ctx.cr6.eq) goto loc_881933E4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5248
	ctx.lr = 0x881933C8;
	sub_881B5248(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881935d0
	if (!ctx.cr6.eq) goto loc_881935D0;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_881933E4:
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r8,300(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,160(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x88192c68
	ctx.lr = 0x88193434;
	sub_88192C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881935c4
	if (!ctx.cr6.eq) goto loc_881935C4;
	// and r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 & ctx.r29.u64;
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88193578
	if (ctx.cr6.eq) goto loc_88193578;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1972(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1972);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b45d0
	ctx.lr = 0x88193460;
	sub_881B45D0(ctx, base);
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r3,1968(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x88190eb0
	ctx.lr = 0x881934A0;
	sub_88190EB0(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x88192c68
	ctx.lr = 0x881934E8;
	sub_88192C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881935c4
	if (!ctx.cr6.eq) goto loc_881935C4;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88190eb0
	ctx.lr = 0x88193520;
	sub_88190EB0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x88192c68
	ctx.lr = 0x88193568;
	sub_88192C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881935c4
	if (!ctx.cr6.eq) goto loc_881935C4;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
loc_88193578:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88193354
	if (ctx.cr6.lt) goto loc_88193354;
loc_8819358C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88193314
	if (ctx.cr6.lt) goto loc_88193314;
loc_881935A0:
	// lwz r11,15572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881935e8
	if (ctx.cr6.eq) goto loc_881935E8;
	// stw r25,15592(r31)
	REX_STORE_U32(ctx.r31.u32 + 15592, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r25.u32);
	// stw r25,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881935C4:
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881935dc
	if (ctx.cr6.eq) goto loc_881935DC;
loc_881935D0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881935DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881935E8:
	// stw r22,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819B310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8819B318;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819b358
	if (ctx.cr6.eq) goto loc_8819B358;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r15,0
	ctx.r15.s64 = 0;
	// bne cr6,0x8819b35c
	if (!ctx.cr6.eq) goto loc_8819B35C;
loc_8819B358:
	// li r15,1
	ctx.r15.s64 = 1;
loc_8819B35C:
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8819b370
	if (!ctx.cr6.eq) goto loc_8819B370;
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// b 0x8819b374
	goto loc_8819B374;
loc_8819B370:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819B374:
	// lwz r8,3776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,3780(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r8,3792(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// srawi r30,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 1;
	// lwz r7,3796(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3812(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r21,r5,r9
	ctx.r21.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r20,r4,r10
	ctx.r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r19,r6,r10
	ctx.r19.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r18,r3,r9
	ctx.r18.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8819b3ec
	if (ctx.cr6.eq) goto loc_8819B3EC;
loc_8819B3E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B3EC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8819b3e0
	if (ctx.cr6.eq) goto loc_8819B3E0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8819b864
	if (!ctx.cr6.lt) goto loc_8819B864;
loc_8819B404:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mullw r24,r28,r23
	ctx.r24.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// lwz r8,232(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,21940(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r29,r9,r21
	ctx.r29.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r25,r11,r20
	ctx.r25.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r26,r11,r19
	ctx.r26.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8819b474
	if (ctx.cr6.eq) goto loc_8819B474;
	// lwz r8,21968(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8819b474
	if (ctx.cr6.eq) goto loc_8819B474;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8819b694
	if (ctx.cr6.eq) goto loc_8819B694;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8819b694
	if (ctx.cr6.gt) goto loc_8819B694;
loc_8819B474:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8819b48c
	if (!ctx.cr6.eq) goto loc_8819B48C;
	// lwz r10,3432(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819b64c
	if (ctx.cr6.eq) goto loc_8819B64C;
loc_8819B48C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8819b5e4
	if (ctx.cr6.eq) goto loc_8819B5E4;
	// ld r10,3632(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// bne cr6,0x8819b5e4
	if (!ctx.cr6.eq) goto loc_8819B5E4;
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8819b4cc
	if (!ctx.cr6.eq) goto loc_8819B4CC;
	// lwz r10,21704(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819b4d0
	if (!ctx.cr6.eq) goto loc_8819B4D0;
loc_8819B4CC:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8819B4D0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8819b5dc
	if (!ctx.cr6.eq) goto loc_8819B5DC;
	// lwz r30,20688(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x8819b648
	if (!ctx.cr6.lt) goto loc_8819B648;
loc_8819B4E4:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// mullw r6,r11,r27
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r3,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8819b5cc
	if (ctx.cr6.eq) goto loc_8819B5CC;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8819b5cc
	if (!ctx.cr6.lt) goto loc_8819B5CC;
loc_8819B550:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzu r3,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stwu r3,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r8.u32 = ea;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzu r3,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// blt cr6,0x8819b550
	if (ctx.cr6.lt) goto loc_8819B550;
loc_8819B5CC:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8819b4e4
	if (ctx.cr6.lt) goto loc_8819B4E4;
	// b 0x8819b648
	goto loc_8819B648;
loc_8819B5DC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8819b4e4
	goto loc_8819B4E4;
loc_8819B5E4:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8819b64c
	if (!ctx.cr6.lt) goto loc_8819B64C;
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r27,r29,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r29.u64;
	// subf r26,r30,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r30.u64;
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
loc_8819B604:
	// lwz r11,3156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3156);
	// add r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r6,r27,r29
	ctx.r6.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819B630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819b604
	if (ctx.cr6.lt) goto loc_8819B604;
loc_8819B648:
	// lwz r27,276(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8819B64C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x8819b664
	if (ctx.cr6.eq) goto loc_8819B664;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_8819B664:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8819b404
	if (ctx.cr6.lt) goto loc_8819B404;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B694:
	// lwz r5,22020(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 22020);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,21960(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21960);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,21976(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// li r10,4
	ctx.r10.s64 = 4;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_8819B6B0:
	// subfic r9,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r27.u64;
	// rlwinm r7,r27,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// addme r9,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8819b6e0
	if (ctx.cr6.gt) goto loc_8819B6E0;
	// lwz r9,21956(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x8819b6b0
	goto loc_8819B6B0;
loc_8819B6E0:
	// lwz r10,21948(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8819b710
	if (!ctx.cr6.lt) goto loc_8819B710;
	// lwz r8,21956(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,21948(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
loc_8819B6F8:
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8819b6f8
	if (ctx.cr6.lt) goto loc_8819B6F8;
loc_8819B710:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8819b3e0
	if (ctx.cr6.eq) goto loc_8819B3E0;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x88156260
	ctx.lr = 0x8819B73C;
	sub_88156260(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819B740:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8819b784
	if (!ctx.cr6.eq) goto loc_8819B784;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8819b740
	if (ctx.cr6.lt) goto loc_8819B740;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B784:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8819b3e0
	if (!ctx.cr6.lt) goto loc_8819B3E0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8819b7ac
	if (ctx.cr6.eq) goto loc_8819B7AC;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_8819B7AC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bge cr6,0x8819b7c8
	if (!ctx.cr6.lt) goto loc_8819B7C8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8819B7C8:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819b7d8
	if (ctx.cr6.eq) goto loc_8819B7D8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8819B7D8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8819b864
	if (ctx.cr6.eq) goto loc_8819B864;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8819B7EC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8819b830
	if (ctx.cr6.eq) goto loc_8819B830;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r3,-12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8819b854
	goto loc_8819B854;
loc_8819B830:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_8819B854:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,-12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8819b7ec
	if (!ctx.cr6.eq) goto loc_8819B7EC;
loc_8819B864:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A7A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A7A60;
	__savegprlr_14(ctx, base);
	// lwz r23,136(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// addi r6,r23,1
	ctx.r6.s64 = ctx.r23.s64 + 1;
	// stw r4,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r22,r6,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r23.u32);
	// add r3,r22,r7
	ctx.r3.u64 = ctx.r22.u64 + ctx.r7.u64;
	// stw r22,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// beq cr6,0x881a7e34
	if (ctx.cr6.eq) goto loc_881A7E34;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi. r11,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ble 0x881a7c80
	if (!ctx.cr0.gt) goto loc_881A7C80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881A7AB4:
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r11,9(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,8(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r29,3(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r27,13(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// lbz r26,18(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// extsb r24,r30
	ctx.r24.s64 = ctx.r30.s8;
	// lbz r25,19(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// lbz r22,21(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// extsb r20,r29
	ctx.r20.s64 = ctx.r29.s8;
	// lbz r21,20(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// srawi r28,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 6;
	// lbz r18,15(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lbz r19,2(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lbz r17,0(r10)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r24,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 4;
	// lbz r15,14(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// lbz r16,12(r10)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r27,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 2;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// rlwimi r4,r6,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// rlwimi r28,r24,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r6,r22
	ctx.r6.s64 = ctx.r22.s8;
	// rlwimi r27,r26,0,28,29
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r24,r21
	ctx.r24.s64 = ctx.r21.s8;
	// srawi r26,r25,6
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3F) != 0);
	ctx.r26.s64 = ctx.r25.s32 >> 6;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// srawi r25,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 4;
	// rlwimi r4,r5,0,30,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r6,r25,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r18
	ctx.r25.s64 = ctx.r18.s8;
	// rlwimi r29,r19,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// rlwimi r4,r17,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// srawi r5,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r25.s32 >> 2;
	// lbz r25,4(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r29,r29,2,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// stb r4,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// rlwimi r6,r5,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// lbz r29,22(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// rlwimi r28,r20,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r30,0,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// rlwimi r27,r26,0,30,31
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFC);
	// lbz r26,23(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwimi r6,r15,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwimi r28,r19,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lbz r5,10(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// rlwimi r27,r16,0,24,25
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xC0) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFF3F);
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r4,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// rlwinm r6,r22,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// lbz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// stbu r27,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r27.u8);
	ctx.r7.u32 = ea;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r28,11(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r27,17(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r24,5(r10)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r11,r27
	ctx.r11.s64 = ctx.r27.s8;
	// srawi r29,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 6;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// rlwimi r5,r4,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// rlwimi r18,r15,2,22,27
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3F0) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r28,r11,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 6;
	// rlwinm r4,r18,2,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xF0;
	// rlwimi r28,r11,0,30,31
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwimi r5,r29,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r6,r21,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// rlwimi r5,r25,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r28,r24,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// stbu r4,1(r31)
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r31.u32 = ea;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r6,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x881a7ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7AB4;
	// lwz r22,-200(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
loc_881A7C80:
	// clrlwi r6,r23,30
	ctx.r6.u64 = ctx.r23.u32 & 0x3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881a7e20
	if (ctx.cr6.eq) goto loc_881A7E20;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r23,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r29,r4
	ctx.r29.s64 = ctx.r4.s8;
	// lbz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lbz r27,4(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lbz r25,5(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r29,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 2;
	// rlwimi r11,r28,0,24,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r4,r30,2,22,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3F0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r26,r29,0,26,27
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x30) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r11,0,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r28,r4,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xF0;
	// rlwinm r29,r26,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF0;
	// rlwinm r11,r27,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r4,r25,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x881a7d70
	if (!ctx.cr6.eq) goto loc_881A7D70;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r26,0(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r25,2(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r27,3(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// extsb r20,r25
	ctx.r20.s64 = ctx.r25.s8;
	// lbz r21,4(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r24,r27,0,28,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// lbz r19,5(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// srawi r20,r20,4
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xF) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 4;
	// srawi r27,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 6;
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// extsb r19,r19
	ctx.r19.s64 = ctx.r19.s8;
	// srawi r24,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 2;
	// rlwimi r20,r27,0,30,31
	ctx.r20.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3) | (ctx.r20.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r5,r26,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r21,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 2;
	// rlwinm r27,r25,0,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// srawi r26,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r19.s32 >> 2;
	// or r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 | ctx.r27.u64;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// clrlwi r25,r20,28
	ctx.r25.u64 = ctx.r20.u32 & 0xF;
	// rlwinm r24,r21,0,26,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x30;
	// rlwinm r26,r26,0,26,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x30;
	// or r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 | ctx.r30.u64;
	// or r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 | ctx.r29.u64;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// or r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 | ctx.r11.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_881A7D70:
	// stb r28,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r30,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r30.u8);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// stb r29,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// bne cr6,0x881a7e10
	if (!ctx.cr6.eq) goto loc_881A7E10;
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r29,4(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// lbz r25,0(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r26,5(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwimi r5,r30,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// rlwimi r6,r25,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// extsb r27,r26
	ctx.r27.s64 = ctx.r26.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// rlwimi r30,r28,0,26,27
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// stb r5,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// rlwinm r6,r6,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// srawi r28,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 4;
	// rlwinm r5,r30,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0;
	// stb r6,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// rlwinm r30,r29,0,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// rlwinm r7,r28,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_881A7E10:
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_881A7E20:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r4,r22,r31
	ctx.r4.u64 = ctx.r22.u64 + ctx.r31.u64;
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
loc_881A7E34:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881a83e8
	if (!ctx.cr6.lt) goto loc_881A83E8;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r30,36(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r5,44(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// srawi r6,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r23.s32 >> 2;
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// stw r11,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r26,r5,-1
	ctx.r26.s64 = ctx.r5.s64 + -1;
	// stw r6,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// addi r25,r8,-1
	ctx.r25.s64 = ctx.r8.s64 + -1;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r27.u32);
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r26.u32);
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r25.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r24.u32);
	// b 0x881a7e88
	goto loc_881A7E88;
loc_881A7E84:
	// lwz r6,-176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_881A7E88:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881a8164
	if (!ctx.cr6.gt) goto loc_881A8164;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_881A7E94:
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lbz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lbz r31,9(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// extsb r30,r8
	ctx.r30.s64 = ctx.r8.s8;
	// lbz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// lbz r26,19(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r27,20(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r24,r31
	ctx.r24.s64 = ctx.r31.s8;
	// lbz r22,3(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// lbz r25,14(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r20,r29
	ctx.r20.s64 = ctx.r29.s8;
	// lbz r23,1(r11)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r28,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 6;
	// stb r26,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, ctx.r26.u8);
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r21,13(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lbz r16,22(r11)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// srawi r24,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 4;
	// lwz r19,-220(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// rlwimi r6,r4,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r17,21(r11)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// lbz r18,16(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r14,r27
	ctx.r14.s64 = ctx.r27.s8;
	// lbz r15,15(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// rlwimi r6,r30,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r14,r14,6
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3F) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 6;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// rlwimi r28,r24,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r29,r22,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwimi r6,r23,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r8,r23,2,22,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3F0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stb r6,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// rlwimi r14,r26,0,28,29
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwimi r28,r20,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r29,2,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// lbz r29,5(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r8,r8,2,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xF0;
	// or r6,r30,r5
	ctx.r6.u64 = ctx.r30.u64 | ctx.r5.u64;
	// lbz r30,11(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rlwimi r14,r4,0,26,27
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r22,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r5,r31,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// lbz r31,24(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lbz r28,17(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// rlwimi r14,r21,0,24,25
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC0) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stbu r14,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r14.u8);
	ctx.r7.u32 = ea;
	// or r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsb r5,r16
	ctx.r5.s64 = ctx.r16.s8;
	// extsb r10,r17
	ctx.r10.s64 = ctx.r17.s8;
	// stb r4,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r4.u8);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lbz r4,23(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// rlwinm r20,r27,0,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// lbz r27,6(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r14,r16,0,28,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xC;
	// extsb r26,r18
	ctx.r26.s64 = ctx.r18.s8;
	// lwz r22,-216(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// rlwimi r5,r10,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r24,12(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r23,r4,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r6,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// rotlwi r10,r19,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// lbz r19,18(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwimi r25,r21,2,22,27
	ctx.r25.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFC0F);
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// stb r3,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r3.u8);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// srawi r3,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 2;
	// stb r27,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, ctx.r27.u8);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwimi r22,r29,2,22,27
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3F0) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// srawi r14,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 2;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// rlwinm r16,r31,0,28,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// rlwinm r23,r22,2,24,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xF0;
	// lbz r22,-224(r1)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// rlwimi r11,r21,2,22,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r5,r3,0,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// extsb r27,r28
	ctx.r27.s64 = ctx.r28.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// or r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 | ctx.r6.u64;
	// srawi r3,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r16.s32 >> 2;
	// rlwinm r21,r11,2,24,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r28,0,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// rlwimi r5,r15,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// or r3,r21,r3
	ctx.r3.u64 = ctx.r21.u64 | ctx.r3.u64;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// rlwinm r26,r25,2,24,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xF0;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// rlwinm r23,r19,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// srawi r27,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 4;
	// stb r6,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// or r5,r3,r23
	ctx.r5.u64 = ctx.r3.u64 | ctx.r23.u64;
	// or r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 | ctx.r20.u64;
	// rlwinm r22,r22,0,28,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// rlwimi r4,r27,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// stb r5,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// extsb r31,r19
	ctx.r31.s64 = ctx.r19.s8;
	// or r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 | ctx.r22.u64;
	// rlwimi r4,r30,0,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// stbu r26,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r26.u8);
	ctx.r10.u32 = ea;
	// rlwimi r18,r15,2,22,27
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3F0) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// extsb r30,r24
	ctx.r30.s64 = ctx.r24.s8;
	// rlwinm r25,r18,2,24,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xF0;
	// srawi r5,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 2;
	// rlwimi r3,r31,0,28,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF3);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r10,60(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// or r27,r25,r14
	ctx.r27.u64 = ctx.r25.u64 | ctx.r14.u64;
	// rlwimi r3,r5,0,26,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r5,-223(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -223);
	// rlwinm r25,r17,0,28,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xC;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// rlwimi r4,r29,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 | ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r4,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// lwz r10,68(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// stbu r27,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r27.u8);
	ctx.r8.u32 = ea;
	// rlwimi r30,r5,0,24,25
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC0) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFF3F);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// ld r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// addi r27,r7,1
	ctx.r27.s64 = ctx.r7.s64 + 1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lwz r7,-192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r26,r6,1
	ctx.r26.s64 = ctx.r6.s64 + 1;
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r25.u32);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r27.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r26.u32);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r24.u32);
	// bdnz 0x881a7e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7E94;
	// lwz r22,-200(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r23,-184(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
loc_881A8164:
	// clrlwi r10,r23,30
	ctx.r10.u64 = ctx.r23.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881a83bc
	if (ctx.cr6.eq) goto loc_881A83BC;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r21,r23,0,30,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// lbz r20,5(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r19,6(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// rlwimi r29,r8,0,26,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r30,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r10,r6,2,22,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3F0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r9,r5,2,22,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r5,r29,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r28,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0;
	// rlwinm r30,r10,2,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r9,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xF0;
	// rlwinm r10,r20,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r9,r19,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r8,r20,4,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xC0;
	// rlwinm r6,r19,4,24,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xC0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// bne cr6,0x881a82d8
	if (!ctx.cr6.eq) goto loc_881A82D8;
	// lbz r21,1(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r25,2(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// extsb r23,r21
	ctx.r23.s64 = ctx.r21.s8;
	// std r7,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r7.u64);
	// rlwinm r16,r25,0,28,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// std r4,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// extsb r18,r25
	ctx.r18.s64 = ctx.r25.s8;
	// std r31,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r31.u64);
	// srawi r25,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r23.s32 >> 4;
	// std r3,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// lbz r19,3(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r18,r18,6
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3F) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 6;
	// stb r25,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, ctx.r25.u8);
	// srawi r16,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 2;
	// lbz r20,4(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r19,24
	ctx.r7.u64 = ctx.r19.u32 & 0xFF;
	// lbz r17,5(r11)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r21,r21,0,28,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// rlwinm r14,r20,0,28,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xC;
	// lbz r15,6(r11)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r20,r20
	ctx.r20.s64 = ctx.r20.s8;
	// stb r19,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, ctx.r19.u8);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// lwz r24,68(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// srawi r20,r20,6
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3F) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 6;
	// lwz r25,60(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// extsb r4,r17
	ctx.r4.s64 = ctx.r17.s8;
	// lwz r22,-200(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// extsb r3,r15
	ctx.r3.s64 = ctx.r15.s8;
	// lwz r23,-184(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// rlwimi r7,r20,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// srawi r14,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwinm r20,r19,0,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// srawi r19,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r3.s32 >> 2;
	// or r21,r16,r21
	ctx.r21.u64 = ctx.r16.u64 | ctx.r21.u64;
	// or r20,r14,r20
	ctx.r20.u64 = ctx.r14.u64 | ctx.r20.u64;
	// clrlwi r16,r7,28
	ctx.r16.u64 = ctx.r7.u32 & 0xF;
	// ld r7,-168(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// rlwinm r14,r4,0,26,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// ld r4,-192(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// rlwinm r19,r19,0,26,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x30;
	// ld r3,-208(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// or r30,r21,r30
	ctx.r30.u64 = ctx.r21.u64 | ctx.r30.u64;
	// lbz r31,-224(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// or r29,r16,r29
	ctx.r29.u64 = ctx.r16.u64 | ctx.r29.u64;
	// or r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 | ctx.r28.u64;
	// rlwimi r31,r18,0,30,31
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x3) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r18,r17,2,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x30;
	// rlwinm r17,r15,2,26,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x30;
	// clrlwi r15,r31,28
	ctx.r15.u64 = ctx.r31.u32 & 0xF;
	// ld r31,-216(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// or r8,r18,r8
	ctx.r8.u64 = ctx.r18.u64 | ctx.r8.u64;
	// or r6,r17,r6
	ctx.r6.u64 = ctx.r17.u64 | ctx.r6.u64;
	// or r5,r15,r5
	ctx.r5.u64 = ctx.r15.u64 | ctx.r5.u64;
	// or r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 | ctx.r10.u64;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_881A82D8:
	// stb r5,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// clrlwi r5,r23,30
	ctx.r5.u64 = ctx.r23.u32 & 0x3;
	// stb r30,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r29,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stb r28,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x881a839c
	if (!ctx.cr6.eq) goto loc_881A839C;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// lbz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r28,1(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r21,3(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r20,r29
	ctx.r20.s64 = ctx.r29.s8;
	// srawi r18,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r8.s32 >> 2;
	// lbz r19,5(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// lbzu r8,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// rlwimi r17,r18,0,26,27
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x30) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r5,r28,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r16,r20,0,26,27
	ctx.r16.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30) | (ctx.r16.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r20,r17,0,24,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xF0;
	// rlwimi r29,r21,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r15,r19
	ctx.r15.s64 = ctx.r19.s8;
	// stb r20,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r20.u8);
	// extsb r14,r8
	ctx.r14.s64 = ctx.r8.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// srawi r28,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r15.s32 >> 4;
	// rlwinm r7,r29,2,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// stb r5,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r5.u8);
	// srawi r21,r14,4
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0xF) != 0);
	ctx.r21.s64 = ctx.r14.s32 >> 4;
	// rlwinm r5,r8,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stb r7,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// rlwinm r8,r28,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// rlwinm r18,r16,0,24,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xF0;
	// rlwinm r7,r21,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// rlwinm r31,r19,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// stb r18,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r18.u8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_881A839C:
	// stbu r8,1(r27)
	ea = 1 + ctx.r27.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r27.u32 = ea;
	// stbu r6,1(r26)
	ea = 1 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r26.u32 = ea;
	// stbu r10,1(r25)
	ea = 1 + ctx.r25.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r25.u32 = ea;
	// stbu r9,1(r24)
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r24.u32 = ea;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r27.u32);
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r26.u32);
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r25.u32);
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r24.u32);
loc_881A83BC:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r4,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// bne 0x881a7e84
	if (!ctx.cr0.eq) goto loc_881A7E84;
loc_881A83E8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C2008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881C2010;
	__savegprlr_22(ctx, base);
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r25,r5,6,0,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r26,r4,6,0,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881c21f8
	if (!ctx.cr6.eq) goto loc_881C21F8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881c2058
	if (ctx.cr6.eq) goto loc_881C2058;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// b 0x881c20ac
	goto loc_881C20AC;
loc_881C2058:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x881c20a4
	if (!ctx.cr6.eq) goto loc_881C20A4;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_881C2070:
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lhzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_881C2088:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881c2218
	if (!ctx.cr6.eq) goto loc_881C2218;
	// stw r24,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C20A4:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_881C20AC:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subfc r31,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r31.u64 = ctx.r4.u64 - ctx.r11.u64;
	// eqv r4,r11,r4
	ctx.r4.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// addi r31,r3,-16384
	ctx.r31.s64 = ctx.r3.s64 + -16384;
	// rlwinm r5,r5,1,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lhzx r29,r4,r8
	ctx.r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rlwinm r30,r31,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r5,-16384
	ctx.r31.s64 = ctx.r5.s64 + -16384;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r31,r31,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r8,r11,-16384
	ctx.r8.s64 = ctx.r11.s64 + -16384;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x881c2148
	if (!ctx.cr6.gt) goto loc_881C2148;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r24,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C2148:
	// bne cr6,0x881c2184
	if (!ctx.cr6.eq) goto loc_881C2184;
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x881c2160
	if (!ctx.cr6.eq) goto loc_881C2160;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x881c2184
	goto loc_881C2184;
loc_881C2160:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881c2174
	if (!ctx.cr6.eq) goto loc_881C2174;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x881c2184
	goto loc_881C2184;
loc_881C2174:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x881c2184
	if (!ctx.cr6.eq) goto loc_881C2184;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_881C2184:
	// subf r8,r5,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r31,r3,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r30,r5,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r29,r4,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r23,r28,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r28.u64;
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// subf r22,r4,r28
	ctx.r22.u64 = ctx.r28.u64 - ctx.r4.u64;
	// xor r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// xor r23,r23,r29
	ctx.r23.u64 = ctx.r23.u64 ^ ctx.r29.u64;
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// xor r29,r22,r29
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r29.u64;
	// srawi r31,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 31;
	// srawi r30,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r23.s32 >> 31;
	// srawi r29,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 31;
	// or r23,r8,r31
	ctx.r23.u64 = ctx.r8.u64 | ctx.r31.u64;
	// or r22,r30,r29
	ctx.r22.u64 = ctx.r30.u64 | ctx.r29.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r23.u64;
	// andc r8,r28,r22
	ctx.r8.u64 = ctx.r28.u64 & ~ctx.r22.u64;
	// and r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 & ctx.r9.u64;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 & ctx.r5.u64;
	// and r8,r29,r4
	ctx.r8.u64 = ctx.r29.u64 & ctx.r4.u64;
	// or r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// b 0x881c2088
	goto loc_881C2088;
loc_881C21F8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881c2208
	if (!ctx.cr6.gt) goto loc_881C2208;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x881c2070
	goto loc_881C2070;
loc_881C2208:
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
loc_881C2218:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 + ctx.r25.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpwi cr6,r11,-60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -60, ctx.xer);
	// bge cr6,0x881c224c
	if (!ctx.cr6.lt) goto loc_881C224C;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// b 0x881c225c
	goto loc_881C225C;
loc_881C224C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881c2260
	if (!ctx.cr6.gt) goto loc_881C2260;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_881C225C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_881C2260:
	// cmpwi cr6,r5,-60
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -60, ctx.xer);
	// bge cr6,0x881c2280
	if (!ctx.cr6.lt) goto loc_881C2280;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C2280:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881c2298
	if (!ctx.cr6.gt) goto loc_881C2298;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_881C2298:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C44B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881C44B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,15984
	ctx.r30.s64 = ctx.r3.s64 + 15984;
	// li r31,2
	ctx.r31.s64 = 2;
loc_881C44C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881cd678
	ctx.lr = 0x881C44D4;
	sub_881CD678(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2208
	ctx.r30.s64 = ctx.r30.s64 + 2208;
	// bne 0x881c44c8
	if (!ctx.cr0.eq) goto loc_881C44C8;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-11668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c4508
	if (!ctx.cr6.eq) goto loc_881C4508;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// addi r9,r11,14760
	ctx.r9.s64 = ctx.r11.s64 + 14760;
	// addi r8,r10,15032
	ctx.r8.s64 = ctx.r10.s64 + 15032;
	// stw r9,3176(r29)
	REX_STORE_U32(ctx.r29.u32 + 3176, ctx.r9.u32);
	// stw r8,3184(r29)
	REX_STORE_U32(ctx.r29.u32 + 3184, ctx.r8.u32);
loc_881C4508:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lis r7,-30695
	ctx.r7.s64 = -2011627520;
	// lis r6,-30695
	ctx.r6.s64 = -2011627520;
	// addi r3,r9,15432
	ctx.r3.s64 = ctx.r9.s64 + 15432;
	// addi r5,r11,11536
	ctx.r5.s64 = ctx.r11.s64 + 11536;
	// addi r4,r10,15032
	ctx.r4.s64 = ctx.r10.s64 + 15032;
	// stw r3,3188(r29)
	REX_STORE_U32(ctx.r29.u32 + 3188, ctx.r3.u32);
	// addi r11,r8,16944
	ctx.r11.s64 = ctx.r8.s64 + 16944;
	// stw r5,3180(r29)
	REX_STORE_U32(ctx.r29.u32 + 3180, ctx.r5.u32);
	// addi r10,r7,32168
	ctx.r10.s64 = ctx.r7.s64 + 32168;
	// stw r4,3184(r29)
	REX_STORE_U32(ctx.r29.u32 + 3184, ctx.r4.u32);
	// addi r9,r6,32744
	ctx.r9.s64 = ctx.r6.s64 + 32744;
	// stw r11,3244(r29)
	REX_STORE_U32(ctx.r29.u32 + 3244, ctx.r11.u32);
	// stw r10,3236(r29)
	REX_STORE_U32(ctx.r29.u32 + 3236, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,3240(r29)
	REX_STORE_U32(ctx.r29.u32 + 3240, ctx.r9.u32);
	// bl 0x881e3de8
	ctx.lr = 0x881C4558;
	sub_881E3DE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C92A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881C92A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24688(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r9,8
	ctx.r25.s64 = ctx.r9.s64 + 8;
	// addi r11,r24,11429
	ctx.r11.s64 = ctx.r24.s64 + 11429;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r22,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c9308
	if (ctx.cr6.eq) goto loc_881C9308;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,11437
	ctx.r9.s64 = ctx.r24.s64 + 11437;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,45788
	ctx.r7.u64 = ctx.r10.u64 | 45788;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r8,45792
	ctx.r5.u64 = ctx.r8.u64 | 45792;
	// stwx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stwx r4,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881C9308:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r23,r11,18168
	ctx.r23.s64 = ctx.r11.s64 + 18168;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8815e468
	ctx.lr = 0x881C9320;
	sub_8815E468(ctx, base);
	// stwx r3,r22,r31
	REX_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881c9338
	if (!ctx.cr6.eq) goto loc_881C9338;
loc_881C932C:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881C9338:
	// addi r26,r3,512
	ctx.r26.s64 = ctx.r3.s64 + 512;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r26,-2
	ctx.r28.s64 = ctx.r26.s64 + -2;
	// addi r27,r26,2
	ctx.r27.s64 = ctx.r26.s64 + 2;
loc_881C9348:
	// lwz r11,21792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21792);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881c936c
	if (!ctx.cr6.lt) goto loc_881C936C;
	// lwz r11,21808(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21808);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// srawi r29,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 8;
	// b 0x881c9394
	goto loc_881C9394;
loc_881C936C:
	// lwz r10,21812(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21812);
	// lwz r11,21800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21800);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_881C9394:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C93A4;
	sub_88202468(ctx, base);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C93BC;
	sub_88202468(ctx, base);
	// extsh r11,r21
	ctx.r11.s64 = ctx.r21.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r11,2(r28)
	ea = 2 + ctx.r28.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r28.u32 = ea;
	// sthu r10,-2(r27)
	ea = -2 + ctx.r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x881c9348
	if (ctx.cr6.lt) goto loc_881C9348;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// li r4,-256
	ctx.r4.s64 = -256;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C93EC;
	sub_88202468(ctx, base);
	// sth r3,-512(r26)
	REX_STORE_U16(ctx.r26.u32 + -512, ctx.r3.u16);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8815e468
	ctx.lr = 0x881C9400;
	sub_8815E468(ctx, base);
	// addi r10,r24,11437
	ctx.r10.s64 = ctx.r24.s64 + 11437;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r3.u32);
	// beq cr6,0x881c932c
	if (ctx.cr6.eq) goto loc_881C932C;
	// addi r26,r3,128
	ctx.r26.s64 = ctx.r3.s64 + 128;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r26,-2
	ctx.r28.s64 = ctx.r26.s64 + -2;
	// addi r27,r26,2
	ctx.r27.s64 = ctx.r26.s64 + 2;
loc_881C9424:
	// lwz r11,21796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21796);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881c9450
	if (!ctx.cr6.lt) goto loc_881C9450;
	// lwz r11,21808(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21808);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// srawi r7,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 7;
	// rlwinm r4,r8,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r7,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x881c9488
	goto loc_881C9488;
loc_881C9450:
	// lwz r11,21812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21812);
	// lwz r9,21804(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21804);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// srawi r4,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 7;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r6,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_881C9488:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C9498;
	sub_88202468(ctx, base);
	// sthu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r28.u32 = ea;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C94B0;
	sub_88202468(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r10,-2(r27)
	ea = -2 + ctx.r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x881c9424
	if (ctx.cr6.lt) goto loc_881C9424;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// li r4,-128
	ctx.r4.s64 = -128;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C94D8;
	sub_88202468(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r3,-128(r26)
	REX_STORE_U16(ctx.r26.u32 + -128, ctx.r3.u16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r6,r22,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// ori r9,r11,45788
	ctx.r9.u64 = ctx.r11.u64 | 45788;
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// ori r7,r10,45792
	ctx.r7.u64 = ctx.r10.u64 | 45792;
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CC7F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// dcbt r0,r4
	// mr r12,r9
	ctx.r12.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,80
	ctx.r6.s64 = 80;
	// vspltish v29,-1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// rldicr r2,r7,32,31
	ctx.r2.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// vupkhsh v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16))));
	// lvx v9,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx v18,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r8,r2
	ctx.r2.u64 = ctx.r8.u64 + ctx.r2.u64;
	// lvx v19,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r12
	ctx.r5.u64 = ctx.r12.u64;
	// li r12,64
	ctx.r12.s64 = 64;
	// lvx v1,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16))));
	// lvx v5,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vupkhsh v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx v4,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vcfsx v11,v11,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx v6,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16))));
	// vcfsx v12,v12,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vcfsx v13,v13,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v15,v15,0
	simde_mm_store_ps(ctx.v15.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v15.u32)));
	// vupkhsh v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16))));
	// vupkhsh v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16))));
	// vcfsx v14,v14,0
	simde_mm_store_ps(ctx.v14.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v14.u32)));
	// vupklsh v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vupklsh v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vupklsh v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcfsx v16,v16,0
	simde_mm_store_ps(ctx.v16.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vupklsh v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcfsx v17,v17,0
	simde_mm_store_ps(ctx.v17.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v17.u32)));
	// vupklsh v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vupklsh v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcfsx v1,v1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vupklsh v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vcfsx v2,v2,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vupklsh v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vcfsx v3,v3,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vcfsx v4,v4,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vspltish v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x0)));
	// vcfsx v5,v5,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vcfsx v6,v6,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfsx v7,v7,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmulfp128 v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v12,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v14,v14,v8
	simde_mm_store_ps(ctx.v14.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v14.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v15,v15,v8
	simde_mm_store_ps(ctx.v15.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v15.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v16,v16,v8
	simde_mm_store_ps(ctx.v16.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v16.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v17,v17,v8
	simde_mm_store_ps(ctx.v17.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v17.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v1,v1,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v2,v2,v8
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v3,v3,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v4,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v5,v5,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v6,v6,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v7,v7,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vctsxs v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vctsxs v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v13.f32)));
	// vctsxs v14,v14,0
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v14.f32)));
	// vctsxs v15,v15,0
	simde_mm_store_si128((simde__m128i*)ctx.v15.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v15.f32)));
	// vctsxs v3,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vctsxs v4,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vctsxs v1,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vctsxs v17,v17,0
	simde_mm_store_si128((simde__m128i*)ctx.v17.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v17.f32)));
	// vctsxs v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vctsxs v2,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vctsxs v16,v16,0
	simde_mm_store_si128((simde__m128i*)ctx.v16.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v16.f32)));
	// vctsxs v5,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vctsxs v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vpkswss v23,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s32), simde_mm_load_si128((simde__m128i*)ctx.v13.s32)));
	// vpkswss v24,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s32), simde_mm_load_si128((simde__m128i*)ctx.v14.s32)));
	// vpkswss v21,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s32), simde_mm_load_si128((simde__m128i*)ctx.v11.s32)));
	// vpkswss v27,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s32), simde_mm_load_si128((simde__m128i*)ctx.v17.s32)));
	// vsrah v13,v23,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v22,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s32), simde_mm_load_si128((simde__m128i*)ctx.v12.s32)));
	// vsrah v14,v24,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v21,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v25,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s32), simde_mm_load_si128((simde__m128i*)ctx.v15.s32)));
	// vcmpequh v4,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vpkswss v26,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s32), simde_mm_load_si128((simde__m128i*)ctx.v16.s32)));
	// vsrah v17,v27,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v20,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v10.s32)));
	// vsrah v12,v22,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcmpequh v3,v30,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsrah v15,v25,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v26,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v20,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
	// vsel v13,v18,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v14,v18,v19,v14
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v11,v18,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vcmpequh v1,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vcmpequh v7,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsel v17,v18,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vcmpequh v5,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsel v10,v18,v19,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vcmpequh v6,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpequh v2,v30,v22
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vcmpequh v0,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsel v12,v18,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v15,v18,v19,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v16,v18,v19,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v13,v13,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v14,v14,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v11,v11,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v17,v17,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v12,v12,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v10,v10,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v15,v15,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v16,v16,v30,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v2,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v8,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// vaddshs v5,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vand v10,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v3,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v7,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_load_si128((simde__m128i*)ctx.v72.u8));
	// vslh v27,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubuhm v10,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vslh v26,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v24,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglh v21,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglh v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglh v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrghw v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrglw v27,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v18,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v18,v7,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v15,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx v24,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v15,v15,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v15,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v26,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v27,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v28,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v29,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v30,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v31,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EE840) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_881EE844:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x881ee844
	if (!ctx.cr0.eq) goto loc_881EE844;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EE8E8) {
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
	// bl 0x88050a80
	ctx.lr = 0x881EE8F8;
	sub_88050A80(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EEAD8) {
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
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30736
	ctx.r11.s64 = ctx.r11.s64 + -30736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x881eea70
	ctx.lr = 0x881EEB04;
	sub_881EEA70(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eeb14
	if (ctx.cr0.eq) goto loc_881EEB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ee958
	ctx.lr = 0x881EEB14;
	sub_881EE958(ctx, base);
loc_881EEB14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(__savevmx_16) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_64) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// stvx128 v64,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_109) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_99) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_25) {
	REX_FUNC_PROLOGUE();
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EF478) {
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
	// bl 0x881ef2e8
	ctx.lr = 0x881EF488;
	sub_881EF2E8(ctx, base);
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lfd f0,-30680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -30680);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F0610) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881F0618;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x88050cd0
	ctx.lr = 0x881F0628;
	sub_88050CD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-30678
	ctx.r24.s64 = -2010513408;
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// lwz r30,24332(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 24332);
	// lwz r28,24336(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 24336);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x881f06d4
	if (ctx.cr6.lt) goto loc_881F06D4;
	// subf r26,r28,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r28.u64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x881f06d4
	if (ctx.cr6.lt) goto loc_881F06D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881f1898
	ctx.lr = 0x881F065C;
	sub_881F1898(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x881f06c0
	if (!ctx.cr6.lt) goto loc_881F06C0;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x881f0678
	if (ctx.cr6.lt) goto loc_881F0678;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_881F0678:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x881f0694
	if (ctx.cr6.lt) goto loc_881F0694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881f17a8
	ctx.lr = 0x881F068C;
	sub_881F17A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881f06b0
	if (!ctx.cr0.eq) goto loc_881F06B0;
loc_881F0694:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x881f06d4
	if (ctx.cr6.lt) goto loc_881F06D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881f17a8
	ctx.lr = 0x881F06A8;
	sub_881F17A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881f06d4
	if (ctx.cr0.eq) goto loc_881F06D4;
loc_881F06B0:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,24336(r25)
	REX_STORE_U32(ctx.r25.u32 + 24336, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_881F06C0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,24332(r24)
	REX_STORE_U32(ctx.r24.u32 + 24332, ctx.r11.u32);
	// b 0x881f06dc
	goto loc_881F06DC;
loc_881F06D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_881F06DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x881f06f4
	ctx.lr = 0x881F06E8;
	sub_881F06F4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F1E00) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F6480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881F6488;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,376(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 376);
	// rlwinm r15,r11,31,1,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r18,r9,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r5,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r6,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// stw r8,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r15,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// beq cr6,0x881f64f4
	if (ctx.cr6.eq) goto loc_881F64F4;
	// lwz r8,1368(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 1368);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// b 0x881f64f8
	goto loc_881F64F8;
loc_881F64F4:
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
loc_881F64F8:
	// lwz r11,1368(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// lwz r9,272(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// mullw r11,r10,r18
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x881f662c
	if (!ctx.cr6.eq) goto loc_881F662C;
	// lbz r11,33(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 33);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f657c
	if (ctx.cr6.eq) goto loc_881F657C;
	// mullw r10,r15,r18
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r18.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881f655c
	if (!ctx.cr6.gt) goto loc_881F655C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881F654C:
	// lwz r9,348(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 348);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881f654c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F654C;
loc_881F655C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881f657c
	if (!ctx.cr6.gt) goto loc_881F657C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881F656C:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 352);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881f656c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F656C;
loc_881F657C:
	// mullw r11,r15,r18
	ctx.r11.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r18.s32);
	// lwz r8,1368(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// lwz r9,22264(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 22264);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r8,r5
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,22276(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 22276);
	// lwz r8,1368(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// mullw r6,r8,r5
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,28(r24)
	REX_STORE_U32(ctx.r24.u32 + 28, ctx.r4.u32);
	// stw r3,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r3.u32);
	// lwz r11,22280(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22280);
	// lwz r10,1368(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// mullw r9,r10,r5
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// stw r28,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r28,16(r24)
	REX_STORE_U16(ctx.r24.u32 + 16, ctx.r28.u16);
	// sth r28,18(r24)
	REX_STORE_U16(ctx.r24.u32 + 18, ctx.r28.u16);
	// stw r8,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r8.u32);
	// lwz r6,21940(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 21940);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881f66a8
	if (ctx.cr6.eq) goto loc_881F66A8;
	// lwz r11,1372(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881f66a8
	if (!ctx.cr6.eq) goto loc_881F66A8;
	// lwz r11,21976(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21976);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r26)
	REX_STORE_U32(ctx.r26.u32 + 21976, ctx.r11.u32);
	// b 0x881f66a8
	goto loc_881F66A8;
loc_881F662C:
	// addi r10,r6,92
	ctx.r10.s64 = ctx.r6.s64 + 92;
	// lhz r9,74(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// lhz r8,76(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// mullw r11,r18,r7
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r4,r9,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rotlwi r9,r8,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r20,r4,r7
	ctx.r20.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r8,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r8.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r18,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r7,1,16,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// mullw r19,r9,r7
	ctx.r19.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,24(r24)
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r4.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r3,28(r24)
	REX_STORE_U32(ctx.r24.u32 + 28, ctx.r3.u32);
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r10.u32);
	// stw r6,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r6.u32);
	// stw r11,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// sth r28,18(r24)
	REX_STORE_U16(ctx.r24.u32 + 18, ctx.r28.u16);
	// sth r8,16(r24)
	REX_STORE_U16(ctx.r24.u32 + 16, ctx.r8.u16);
loc_881F66A8:
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmplw cr6,r7,r14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x881f877c
	if (!ctx.cr6.lt) goto loc_881F877C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r17,r11,26488
	ctx.r17.s64 = ctx.r11.s64 + 26488;
	// ori r16,r10,32768
	ctx.r16.u64 = ctx.r10.u64 | 32768;
	// lis r23,2
	ctx.r23.s64 = 131072;
loc_881F66CC:
	// stw r20,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r20.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r19,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r19.u32);
	// sth r28,18(r24)
	REX_STORE_U16(ctx.r24.u32 + 18, ctx.r28.u16);
	// lwz r11,21940(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f69e4
	if (ctx.cr6.eq) goto loc_881F69E4;
	// lwz r11,1304(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1304);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f69e4
	if (ctx.cr6.eq) goto loc_881F69E4;
	// lwz r11,21976(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21976);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,21976(r26)
	REX_STORE_U32(ctx.r26.u32 + 21976, ctx.r9.u32);
	// beq cr6,0x881f67f4
	if (ctx.cr6.eq) goto loc_881F67F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45260
	ctx.r10.u64 = ctx.r11.u64 | 45260;
	// lwzx r9,r26,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881f67f4
	if (!ctx.cr6.eq) goto loc_881F67F4;
	// lwz r11,1588(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1588);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881f67f4
	if (!ctx.cr6.eq) goto loc_881F67F4;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f67d4
	if (ctx.cr6.eq) goto loc_881F67D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f67b0
	if (!ctx.cr6.lt) goto loc_881F67B0;
loc_881F6758:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f67b0
	if (ctx.cr6.eq) goto loc_881F67B0;
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
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f67a0
	if (!ctx.cr0.lt) goto loc_881F67A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F67A0;
	sub_88156678(ctx, base);
loc_881F67A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f6758
	if (ctx.cr6.gt) goto loc_881F6758;
loc_881F67B0:
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
	// bge 0x881f67d4
	if (!ctx.cr0.lt) goto loc_881F67D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F67D4;
	sub_88156678(ctx, base);
loc_881F67D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x881F67E4;
	sub_88156500(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8820ab38
	ctx.lr = 0x881F67F0;
	sub_8820AB38(ctx, base);
	// b 0x881f69d4
	goto loc_881F69D4;
loc_881F67F4:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 104);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,112(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,116(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// stw r4,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,132(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// stw r7,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,136(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// stw r5,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,140(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 140);
	// stw r3,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,148(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// stw r8,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,152(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// stw r6,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r6.u32);
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x881f6924
	if (ctx.cr6.eq) goto loc_881F6924;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f6900
	if (!ctx.cr6.lt) goto loc_881F6900;
loc_881F68A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f6900
	if (ctx.cr6.eq) goto loc_881F6900;
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
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f68f0
	if (!ctx.cr0.lt) goto loc_881F68F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F68F0;
	sub_88156678(ctx, base);
loc_881F68F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f68a8
	if (ctx.cr6.gt) goto loc_881F68A8;
loc_881F6900:
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
	// bge 0x881f6924
	if (!ctx.cr0.lt) goto loc_881F6924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F6924;
	sub_88156678(ctx, base);
loc_881F6924:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x881F6934;
	sub_88156500(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881adb80
	ctx.lr = 0x881F6940;
	sub_881ADB80(ctx, base);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,104(r29)
	REX_STORE_U64(ctx.r29.u32 + 104, ctx.r9.u64);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r5,116(r29)
	REX_STORE_U32(ctx.r29.u32 + 116, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r3,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,124(r29)
	REX_STORE_U32(ctx.r29.u32 + 124, ctx.r10.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// stw r6,132(r29)
	REX_STORE_U32(ctx.r29.u32 + 132, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,32(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r4,136(r29)
	REX_STORE_U32(ctx.r29.u32 + 136, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,140(r29)
	REX_STORE_U32(ctx.r29.u32 + 140, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r9.u32);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// stw r7,148(r29)
	REX_STORE_U32(ctx.r29.u32 + 148, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,48(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// stw r5,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r5.u32);
loc_881F69D4:
	// stw r21,1948(r26)
	REX_STORE_U32(ctx.r26.u32 + 1948, ctx.r21.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r21,1251(r29)
	REX_STORE_U8(ctx.r29.u32 + 1251, ctx.r21.u8);
	// bne cr6,0x881f8844
	if (!ctx.cr6.eq) goto loc_881F8844;
loc_881F69E4:
	// lwz r11,3988(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f6b34
	if (ctx.cr6.eq) goto loc_881F6B34;
	// lwz r11,288(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881f6b34
	if (ctx.cr6.eq) goto loc_881F6B34;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ld r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 104);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,112(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,116(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r7,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// lwz r5,120(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r10,124(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r8,128(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,132(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// stw r5,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r5.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,140(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 140);
	// stw r8,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,144(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// stw r6,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// stw r11,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,152(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// bl 0x881adf70
	ctx.lr = 0x881F6A98;
	sub_881ADF70(ctx, base);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,104(r29)
	REX_STORE_U64(ctx.r29.u32 + 104, ctx.r7.u64);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r3,116(r29)
	REX_STORE_U32(ctx.r29.u32 + 116, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r10.u32);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,124(r29)
	REX_STORE_U32(ctx.r29.u32 + 124, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,24(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// stw r6,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r4,132(r29)
	REX_STORE_U32(ctx.r29.u32 + 132, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,136(r29)
	REX_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,140(r29)
	REX_STORE_U32(ctx.r29.u32 + 140, ctx.r9.u32);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// stw r7,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r7.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,44(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// stw r5,148(r29)
	REX_STORE_U32(ctx.r29.u32 + 148, ctx.r5.u32);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r3,48(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// stw r3,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r3.u32);
	// bne cr6,0x881f8844
	if (!ctx.cr6.eq) goto loc_881F8844;
loc_881F6B34:
	// lwz r10,1304(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1304);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r22
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// lhz r7,50(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// clrlwi r6,r22,31
	ctx.r6.u64 = ctx.r22.u32 & 0x1;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// beq cr6,0x881f871c
	if (ctx.cr6.eq) goto loc_881F871C;
	// b 0x881f6b84
	goto loc_881F6B84;
loc_881F6B80:
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881F6B84:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// dcbt r11,r10
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r10
	// lwz r11,1232(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f6bb8
	if (!ctx.cr6.eq) goto loc_881F6BB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881f6ce8
	goto loc_881F6CE8;
loc_881F6BB8:
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
	// blt cr6,0x881f6ca4
	if (ctx.cr6.lt) goto loc_881F6CA4;
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
	// bge cr6,0x881f6c9c
	if (!ctx.cr6.lt) goto loc_881F6C9C;
loc_881F6C04:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881f6c30
	if (ctx.cr6.lt) goto loc_881F6C30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881F6C20;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881f6c04
	if (ctx.cr6.eq) goto loc_881F6C04;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881f6cdc
	goto loc_881F6CDC;
loc_881F6C30:
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
loc_881F6C9C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881f6cdc
	goto loc_881F6CDC;
loc_881F6CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881F6CAC;
	sub_88156500(ctx, base);
loc_881F6CAC:
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
	ctx.lr = 0x881F6CC4;
	sub_88156500(ctx, base);
	// add r10,r30,r16
	ctx.r10.u64 = ctx.r30.u64 + ctx.r16.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f6cac
	if (ctx.cr6.lt) goto loc_881F6CAC;
loc_881F6CDC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,63
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 63, ctx.xer);
	// bgt cr6,0x881f8770
	if (ctx.cr6.gt) goto loc_881F8770;
loc_881F6CE8:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r11,6(r25)
	REX_STORE_U16(ctx.r25.u32 + 6, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lhz r4,50(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// rlwinm r3,r4,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r3,r21
	ctx.r11.u64 = ctx.r3.u64 & ctx.r21.u64;
	// lwz r5,1264(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 1264);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r8,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r8.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// and r8,r6,r21
	ctx.r8.u64 = ctx.r6.u64 & ctx.r21.u64;
	// beq cr6,0x881f6d3c
	if (ctx.cr6.eq) goto loc_881F6D3C;
	// lbz r11,-19(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19);
	// lbz r9,-19(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + -19);
	// and r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 & ctx.r21.u64;
loc_881F6D3C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r6,1260(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1260);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwimi r11,r9,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// rlwimi r5,r11,3,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r7,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// rlwinm r8,r5,1,25,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x70;
	// clrlwi r3,r10,28
	ctx.r3.u64 = ctx.r10.u32 & 0xF;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// lbzx r11,r6,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// beq cr6,0x881f6d7c
	if (ctx.cr6.eq) goto loc_881F6D7C;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_881F6D7C:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r9,1168(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1168);
	// rlwimi r10,r11,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x881f6da0
	if (!ctx.cr6.eq) goto loc_881F6DA0;
	// lbz r11,1254(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1254);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f6dd8
	if (!ctx.cr6.eq) goto loc_881F6DD8;
loc_881F6DA0:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// bge 0x881f6dc8
	if (!ctx.cr0.lt) goto loc_881F6DC8;
	// bl 0x88156678
	ctx.lr = 0x881F6DC8;
	sub_88156678(ctx, base);
loc_881F6DC8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_881F6DD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881f8770
	if (!ctx.cr6.eq) goto loc_881F8770;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stb r30,5(r25)
	REX_STORE_U8(ctx.r25.u32 + 5, ctx.r30.u8);
	// rlwinm r9,r11,0,10,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// lbz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f6e78
	if (ctx.cr6.eq) goto loc_881F6E78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f6e78
	if (ctx.cr6.eq) goto loc_881F6E78;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// bge 0x881f6e34
	if (!ctx.cr0.lt) goto loc_881F6E34;
	// bl 0x88156678
	ctx.lr = 0x881F6E34;
	sub_88156678(ctx, base);
loc_881F6E34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881f6e6c
	if (ctx.cr6.eq) goto loc_881F6E6C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// bge 0x881f6e68
	if (!ctx.cr0.lt) goto loc_881F6E68;
	// bl 0x88156678
	ctx.lr = 0x881F6E68;
	sub_88156678(ctx, base);
loc_881F6E68:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_881F6E6C:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_881F6E78:
	// lbz r11,33(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 33);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f6ec8
	if (ctx.cr6.eq) goto loc_881F6EC8;
	// lbz r11,1255(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1255);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881f6ec8
	if (!ctx.cr6.eq) goto loc_881F6EC8;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// bge 0x881f6ebc
	if (!ctx.cr0.lt) goto loc_881F6EBC;
	// bl 0x88156678
	ctx.lr = 0x881F6EBC;
	sub_88156678(ctx, base);
loc_881F6EBC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwimi r11,r31,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_881F6EC8:
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 24);
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
	// lbz r10,27(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f719c
	if (ctx.cr6.eq) goto loc_881F719C;
	// lbz r11,1245(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1245);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f6f2c
	if (ctx.cr6.eq) goto loc_881F6F2C;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881f6f10
	if (ctx.cr6.eq) goto loc_881F6F10;
	// lbz r11,1246(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r10.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F6F10:
	// lbz r10,1244(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// lbz r11,1249(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r9.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F6F2C:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,1250(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1250);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881f701c
	if (ctx.cr6.eq) goto loc_881F701C;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881f6fac
	if (!ctx.cr6.lt) goto loc_881F6FAC;
loc_881F6F54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f6fac
	if (ctx.cr6.eq) goto loc_881F6FAC;
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
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f6f9c
	if (!ctx.cr0.lt) goto loc_881F6F9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F6F9C;
	sub_88156678(ctx, base);
loc_881F6F9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f6f54
	if (ctx.cr6.gt) goto loc_881F6F54;
loc_881F6FAC:
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
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f6fe4
	if (!ctx.cr0.lt) goto loc_881F6FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F6FE4;
	sub_88156678(ctx, base);
loc_881F6FE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f7000
	if (ctx.cr6.eq) goto loc_881F7000;
	// lbz r11,1246(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F7000:
	// lbz r10,1244(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// lbz r11,1249(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
	// b 0x881f7188
	goto loc_881F7188;
loc_881F701C:
	// li r30,3
	ctx.r30.s64 = 3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881f7080
	if (!ctx.cr6.lt) goto loc_881F7080;
loc_881F7028:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f7080
	if (ctx.cr6.eq) goto loc_881F7080;
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
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f7070
	if (!ctx.cr0.lt) goto loc_881F7070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F7070;
	sub_88156678(ctx, base);
loc_881F7070:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f7028
	if (ctx.cr6.gt) goto loc_881F7028;
loc_881F7080:
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
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f70b8
	if (!ctx.cr0.lt) goto loc_881F70B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F70B8;
	sub_88156678(ctx, base);
loc_881F70B8:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x881f7174
	if (!ctx.cr6.eq) goto loc_881F7174;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x881f7134
	if (!ctx.cr6.lt) goto loc_881F7134;
loc_881F70DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f7134
	if (ctx.cr6.eq) goto loc_881F7134;
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
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881f7124
	if (!ctx.cr0.lt) goto loc_881F7124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F7124;
	sub_88156678(ctx, base);
loc_881F7124:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f70dc
	if (ctx.cr6.gt) goto loc_881F70DC;
loc_881F7134:
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
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881f716c
	if (!ctx.cr0.lt) goto loc_881F716C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881F716C;
	sub_88156678(ctx, base);
loc_881F716C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x881f717c
	goto loc_881F717C;
loc_881F7174:
	// lbz r11,1244(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_881F717C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r11.u8);
loc_881F7188:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881f8770
	if (ctx.cr6.lt) goto loc_881F8770;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x881f8770
	if (ctx.cr6.gt) goto loc_881F8770;
loc_881F719C:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// lbz r9,5(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + 5);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,388(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// beq cr6,0x881f71f0
	if (ctx.cr6.eq) goto loc_881F71F0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,396(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 396);
	// lwz r9,400(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 400);
	// rlwinm r11,r11,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x881f7200
	goto loc_881F7200;
loc_881F71F0:
	// addi r11,r29,404
	ctx.r11.s64 = ctx.r29.s64 + 404;
	// addi r10,r29,416
	ctx.r10.s64 = ctx.r29.s64 + 416;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_881F7200:
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
loc_881F7208:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi. r11,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r16,119
	ctx.r16.s64 = 119;
	// bne 0x881f7284
	if (!ctx.cr0.eq) goto loc_881F7284;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r14,18
	ctx.r9.s64 = ctx.r14.s64 + 18;
	// srawi r11,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 1;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r8,r10,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// or r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r18,1224(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 1224);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,432(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 432);
	// addi r8,r10,184
	ctx.r8.s64 = ctx.r10.s64 + 184;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lhzx r9,r5,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r14,31
	ctx.r8.u64 = ctx.r14.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// neg r9,r3
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r4,r5,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r21,r10,r7
	ctx.r21.u64 = ctx.r10.u64 + ctx.r7.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// b 0x881f72d0
	goto loc_881F72D0;
loc_881F7284:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r14,105
	ctx.r10.s64 = ctx.r14.s64 + 105;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r11,182
	ctx.r5.s64 = ctx.r11.s64 + 182;
	// lwz r18,1228(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 1228);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lwzx r10,r8,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// neg r9,r4
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r8,r3,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_881F72D0:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,1168(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1168);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lwz r15,16(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bne cr6,0x881f78dc
	if (!ctx.cr6.eq) goto loc_881F78DC;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f7310
	if (ctx.cr6.eq) goto loc_881F7310;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// li r27,8
	ctx.r27.s64 = 8;
	// subf r30,r11,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881F7310:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881f7538
	if (ctx.cr6.eq) goto loc_881F7538;
	// addic. r28,r21,-32
	ctx.xer.ca = ctx.r21.u32 > 31;
	ctx.r28.s64 = ctx.r21.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq 0x881f78d0
	if (ctx.cr0.eq) goto loc_881F78D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f7538
	if (ctx.cr6.eq) goto loc_881F7538;
	// lhz r10,-16(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + -16);
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r6,27(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f7508
	if (ctx.cr6.eq) goto loc_881F7508;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7454
	if (ctx.cr6.eq) goto loc_881F7454;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7454
	if (ctx.cr6.eq) goto loc_881F7454;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7454
	if (ctx.cr6.eq) goto loc_881F7454;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x881f73ec
	if (!ctx.cr6.eq) goto loc_881F73EC;
	// lhz r8,50(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// lwz r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lbz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r3,r8,r6
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r5,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 18;
	// b 0x881f7508
	goto loc_881F7508;
loc_881F73EC:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x881f7508
	if (!ctx.cr6.eq) goto loc_881F7508;
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r3,r6,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwzx r7,r3,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r17.u32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r4,r23
	ctx.r10.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r8,r3,r23
	ctx.r8.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r9,r10,18
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 18;
	// srawi r4,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 18;
	// b 0x881f7508
	goto loc_881F7508;
loc_881F7454:
	// lhz r10,50(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,388(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbz r6,-20(r25)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// rotlwi r8,r6,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r26,16(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lbz r8,-20(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r26,r26,2,24,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFC;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r26,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r17.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r7,r6,r3
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r6,r10
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r6,r10
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r23
	ctx.r6.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r4,r7,r23
	ctx.r4.u64 = ctx.r7.u64 + ctx.r23.u64;
	// srawi r9,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 18;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
loc_881F7508:
	// subf r10,r5,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
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
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x881f7538
	if (!ctx.cr6.lt) goto loc_881F7538;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r27,8
	ctx.r27.s64 = 8;
loc_881F7538:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f78d0
	if (ctx.cr6.eq) goto loc_881F78D0;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r9,27(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// rlwinm r8,r10,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 & ctx.r27.u64;
	// beq cr6,0x881f78c4
	if (ctx.cr6.eq) goto loc_881F78C4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881f7704
	if (!ctx.cr6.eq) goto loc_881F7704;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f75b4
	if (ctx.cr6.eq) goto loc_881F75B4;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7598:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7598;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F75B4:
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r4,r8,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r1,146
	ctx.r5.s64 = ctx.r1.s64 + 146;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r30,r1,148
	ctx.r30.s64 = ctx.r1.s64 + 148;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwzx r7,r4,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r17.u32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// subf r6,r11,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r11.u64;
	// addi r7,r3,-10
	ctx.r7.s64 = ctx.r3.s64 + -10;
	// sth r4,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
loc_881F7648:
	// lhz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r3,-2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r28,r8,r28
	ctx.r28.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r31,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r30,r5,r10
	REX_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r30.u16);
	// sthx r4,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x881f7648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7648;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F7704:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7750
	if (ctx.cr6.eq) goto loc_881F7750;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7734:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7734;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F7750:
	// lhz r10,50(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r3,50(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lwz r8,388(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// addi r31,r1,146
	ctx.r31.s64 = ctx.r1.s64 + 146;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r6,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r6.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r6,16(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r5,r3,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r7.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r7,r5,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwzx r28,r9,r17
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r17.u32);
	// addi r26,r1,148
	ctx.r26.s64 = ctx.r1.s64 + 148;
	// addi r9,r10,-10
	ctx.r9.s64 = ctx.r10.s64 + -10;
	// lbz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// subf r5,r11,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r11.u64;
	// mullw r4,r3,r30
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r28,r4
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r23
	ctx.r4.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
loc_881F7814:
	// lhz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhz r31,-2(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r26,2(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// mullw r31,r31,r3
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r3
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r26,r3
	ctx.r3.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r4.u16);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// sthx r28,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r3,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r3.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// sthu r31,10(r9)
	ea = 10 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881f7814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7814;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F78C4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881f78d0
	if (!ctx.cr6.eq) goto loc_881F78D0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_881F78D0:
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x881f7f7c
	goto loc_881F7F7C;
loc_881F78DC:
	// lbz r11,33(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 33);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881f7908
	if (ctx.cr6.eq) goto loc_881F7908;
	// lbz r11,1244(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1244);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x881f7928
	if (!ctx.cr6.lt) goto loc_881F7928;
loc_881F7908:
	// srawi r11,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 1;
	// twllei r15,0
	if (ctx.r15.s32 == 0 || ctx.r15.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r27,r7,r15
	ctx.r27.u64 = uint32_t((ctx.r15.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r15.s32 == -1)) ? ctx.r7.s32 / ctx.r15.s32 : 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r4,r15,r5
	ctx.r4.u64 = ctx.r15.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_881F7928:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881f7970
	if (ctx.cr6.eq) goto loc_881F7970;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r9,1253(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1253);
	// li r26,1
	ctx.r26.s64 = 1;
	// subf r30,r11,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r11.u64;
	// li r24,8
	ctx.r24.s64 = 8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881f7970
	if (!ctx.cr6.lt) goto loc_881F7970;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_881F7970:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881f7ba4
	if (ctx.cr6.eq) goto loc_881F7BA4;
	// addic. r28,r21,-32
	ctx.xer.ca = ctx.r21.u32 > 31;
	ctx.r28.s64 = ctx.r21.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// beq 0x881f7f14
	if (ctx.cr0.eq) goto loc_881F7F14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881f7ba4
	if (ctx.cr6.eq) goto loc_881F7BA4;
	// lhz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + -16);
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lbz r6,27(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f7b70
	if (ctx.cr6.eq) goto loc_881F7B70;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7ab8
	if (ctx.cr6.eq) goto loc_881F7AB8;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7ab8
	if (ctx.cr6.eq) goto loc_881F7AB8;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7ab8
	if (ctx.cr6.eq) goto loc_881F7AB8;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// bne cr6,0x881f7a50
	if (!ctx.cr6.eq) goto loc_881F7A50;
	// lhz r8,50(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// lwz r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r5,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 18;
	// b 0x881f7b70
	goto loc_881F7B70;
loc_881F7A50:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// bne cr6,0x881f7b70
	if (!ctx.cr6.eq) goto loc_881F7B70;
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r11,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r7,r17
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r17.u32);
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi r9,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 18;
	// srawi r4,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 18;
	// b 0x881f7b70
	goto loc_881F7B70;
loc_881F7AB8:
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lbz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r6,-20(r25)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r11,388(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rotlwi r7,r6,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r22,r6,r11
	ctx.r22.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r8,-20(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// lbz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,16(r22)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r3,r31,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwzx r6,r3,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r17.u32);
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r7,r5
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r3,r6
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r11,r6
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r6,r9,r23
	ctx.r6.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r4,r7,r23
	ctx.r4.u64 = ctx.r7.u64 + ctx.r23.u64;
	// srawi r9,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 18;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
loc_881F7B70:
	// subf r11,r5,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x881f7ba4
	if (!ctx.cr6.lt) goto loc_881F7BA4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,8
	ctx.r24.s64 = 8;
loc_881F7BA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f7f14
	if (ctx.cr6.eq) goto loc_881F7F14;
	// lbz r11,27(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f7f04
	if (ctx.cr6.eq) goto loc_881F7F04;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881f7d50
	if (!ctx.cr6.eq) goto loc_881F7D50;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 2, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7c08
	if (ctx.cr6.eq) goto loc_881F7C08;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7BF4:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7BF4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7C08:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r8,-20(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + -20);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// rotlwi r4,r8,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,146
	ctx.r5.s64 = ctx.r1.s64 + 146;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r30,r1,148
	ctx.r30.s64 = ctx.r1.s64 + 148;
	// lwzx r8,r6,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r17.u32);
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwzx r7,r4,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r17.u32);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// subf r6,r10,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r7,r3,-10
	ctx.r7.s64 = ctx.r3.s64 + -10;
	// sth r4,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
loc_881F7C9C:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r31,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r30,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r30.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x881f7c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7C9C;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7D50:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// beq cr6,0x881f7d98
	if (ctx.cr6.eq) goto loc_881F7D98;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881F7D84:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881f7d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7D84;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7D98:
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r3,50(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// lwz r7,388(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// addi r31,r1,146
	ctx.r31.s64 = ctx.r1.s64 + 146;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r6,r6,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r6,16(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r5,r3,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r8,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r6,r5,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// lwzx r3,r9,r17
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r17.u32);
	// addi r28,r1,148
	ctx.r28.s64 = ctx.r1.s64 + 148;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lbz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lwz r27,16(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r5,r10,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r10.u64;
	// mullw r4,r27,r30
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r23
	ctx.r4.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r10,r10,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r10.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
loc_881F7E5C:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// mullw r3,r6,r8
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lhz r31,-2(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r27,2(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r31,r31,r3
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r3
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r27,r3
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// mullw r30,r30,r6
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r4.u16);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// sthx r28,r7,r11
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r3,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r31,10(r9)
	ea = 10 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881f7e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881F7E5C;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7F04:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881f7f1c
	if (!ctx.cr6.eq) goto loc_881F7F1C;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// b 0x881f7f1c
	goto loc_881F7F1C;
loc_881F7F14:
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// sth r27,1256(r29)
	REX_STORE_U16(ctx.r29.u32 + 1256, ctx.r27.u16);
loc_881F7F1C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// lbz r11,1252(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1252);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f7f5c
	if (ctx.cr6.eq) goto loc_881F7F5C;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x881f7f48
	if (ctx.cr6.eq) goto loc_881F7F48;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x881f7f70
	goto loc_881F7F70;
loc_881F7F48:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// b 0x881f7f70
	goto loc_881F7F70;
loc_881F7F5C:
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_881F7F70:
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_881F7F7C:
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r31,r11,-128
	ctx.r31.s64 = ctx.r11.s64 + -128;
	// stw r31,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r31.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x881f7fb0
	if (!ctx.cr6.eq) goto loc_881F7FB0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881f80dc
	goto loc_881F80DC;
loc_881F7FB0:
	// lbz r4,8(r18)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r18.u32 + 8);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r26,0(r18)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881f809c
	if (ctx.cr6.lt) goto loc_881F809C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881f8094
	if (!ctx.cr6.lt) goto loc_881F8094;
loc_881F7FFC:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881f8028
	if (ctx.cr6.lt) goto loc_881F8028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881F8018;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881f7ffc
	if (ctx.cr6.eq) goto loc_881F7FFC;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881f80dc
	goto loc_881F80DC;
loc_881F8028:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r6,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
loc_881F8094:
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x881f80dc
	goto loc_881F80DC;
loc_881F809C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881F80A4;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
loc_881F80AC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88156500
	ctx.lr = 0x881F80C4;
	sub_88156500(ctx, base);
	// add r10,r28,r24
	ctx.r10.u64 = ctx.r28.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x881f80ac
	if (ctx.cr6.lt) goto loc_881F80AC;
loc_881F80DC:
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x881f8204
	if (ctx.cr6.eq) goto loc_881F8204;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881f8328
	if (ctx.cr6.eq) goto loc_881F8328;
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// bne cr6,0x881f813c
	if (!ctx.cr6.eq) goto loc_881F813C;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x881f8124
	if (!ctx.cr0.lt) goto loc_881F8124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F8124;
	sub_88156678(ctx, base);
loc_881F8124:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881f82ec
	goto loc_881F82EC;
loc_881F813C:
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// bne cr6,0x881f82ec
	if (!ctx.cr6.eq) goto loc_881F82EC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881f81b4
	if (!ctx.cr6.lt) goto loc_881F81B4;
loc_881F815C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f81b4
	if (ctx.cr6.eq) goto loc_881F81B4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881f81a4
	if (!ctx.cr0.lt) goto loc_881F81A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F81A4;
	sub_88156678(ctx, base);
loc_881F81A4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f815c
	if (ctx.cr6.gt) goto loc_881F815C;
loc_881F81B4:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881f81ec
	if (!ctx.cr0.lt) goto loc_881F81EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F81EC;
	sub_88156678(ctx, base);
loc_881F81EC:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x881f82ec
	goto loc_881F82EC;
loc_881F8204:
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// bgt cr6,0x881f8218
	if (ctx.cr6.gt) goto loc_881F8218;
	// srawi r11,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x881f821c
	goto loc_881F821C;
loc_881F8218:
	// li r11,0
	ctx.r11.s64 = 0;
loc_881F821C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881f823c
	if (!ctx.cr6.gt) goto loc_881F823C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881f82e8
	goto loc_881F82E8;
loc_881F823C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x881f824c
	if (!ctx.cr6.eq) goto loc_881F824C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881f82e8
	goto loc_881F82E8;
loc_881F824C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881f82ac
	if (!ctx.cr6.gt) goto loc_881F82AC;
loc_881F8254:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f82ac
	if (ctx.cr6.eq) goto loc_881F82AC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881f829c
	if (!ctx.cr0.lt) goto loc_881F829C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F829C;
	sub_88156678(ctx, base);
loc_881F829C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881f8254
	if (ctx.cr6.gt) goto loc_881F8254;
loc_881F82AC:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881f82e4
	if (!ctx.cr0.lt) goto loc_881F82E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F82E4;
	sub_88156678(ctx, base);
loc_881F82E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881F82E8:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_881F82EC:
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// rldicl r26,r10,1,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x881f8314
	if (!ctx.cr0.lt) goto loc_881F8314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881F8314;
	sub_88156678(ctx, base);
loc_881F8314:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r22,r8
	ctx.r22.s64 = ctx.r8.s16;
loc_881F8328:
	// sth r22,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r22.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881f8770
	if (!ctx.cr6.eq) goto loc_881F8770;
	// lwz r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f83a0
	if (ctx.cr6.eq) goto loc_881F83A0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,1168(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1168);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x881f8380
	if (!ctx.cr6.eq) goto loc_881F8380;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// srawi r10,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 3;
	// rlwinm r9,r11,30,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x6;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r8,r11,317
	ctx.r8.s64 = ctx.r11.s64 + 317;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// b 0x881f838c
	goto loc_881F838C;
loc_881F8380:
	// addi r11,r19,317
	ctx.r11.s64 = ctx.r19.s64 + 317;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
loc_881F838C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x882153a8
	ctx.lr = 0x881F8398;
	sub_882153A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881f8770
	if (ctx.cr6.lt) goto loc_881F8770;
loc_881F83A0:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x881f8594
	if (ctx.cr6.eq) goto loc_881F8594;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// sth r8,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r8.u16);
	// sth r8,16(r21)
	REX_STORE_U16(ctx.r21.u32 + 16, ctx.r8.u16);
	// bne cr6,0x881f84b8
	if (!ctx.cr6.eq) goto loc_881F84B8;
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// sth r8,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r8.u16);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r4.u16);
	// sth r4,4(r21)
	REX_STORE_U16(ctx.r21.u32 + 4, ctx.r4.u16);
	// lhz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// sth r9,6(r21)
	REX_STORE_U16(ctx.r21.u32 + 6, ctx.r9.u16);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r5.u16);
	// sth r5,8(r21)
	REX_STORE_U16(ctx.r21.u32 + 8, ctx.r5.u16);
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 10);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r10,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// sth r10,10(r21)
	REX_STORE_U16(ctx.r21.u32 + 10, ctx.r10.u16);
	// lhz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// sth r6,12(r21)
	REX_STORE_U16(ctx.r21.u32 + 12, ctx.r6.u16);
	// lhz r5,14(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r4,14(r27)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r11,14(r21)
	REX_STORE_U16(ctx.r21.u32 + 14, ctx.r11.u16);
	// lhz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// sth r10,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r10.u16);
	// lhz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// sth r9,20(r21)
	REX_STORE_U16(ctx.r21.u32 + 20, ctx.r9.u16);
	// lhz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// sth r8,22(r21)
	REX_STORE_U16(ctx.r21.u32 + 22, ctx.r8.u16);
	// lhz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// sth r7,24(r21)
	REX_STORE_U16(ctx.r21.u32 + 24, ctx.r7.u16);
	// lhz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// sth r6,26(r21)
	REX_STORE_U16(ctx.r21.u32 + 26, ctx.r6.u16);
	// lhz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// sth r5,28(r21)
	REX_STORE_U16(ctx.r21.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 112);
	// sth r4,30(r21)
	REX_STORE_U16(ctx.r21.u32 + 30, ctx.r4.u16);
	// b 0x881f85ec
	goto loc_881F85EC;
loc_881F84B8:
	// cmpwi cr6,r20,8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 8, ctx.xer);
	// bne cr6,0x881f859c
	if (!ctx.cr6.eq) goto loc_881F859C;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// sth r11,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r21)
	REX_STORE_U64(ctx.r21.u32 + 8, ctx.r9.u64);
	// lhz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r5.u16);
	// sth r5,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r5.u16);
	// lhz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// lhz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r10,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// sth r10,20(r21)
	REX_STORE_U16(ctx.r21.u32 + 20, ctx.r10.u16);
	// lhz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,48(r31)
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r6.u16);
	// sth r6,22(r21)
	REX_STORE_U16(ctx.r21.u32 + 22, ctx.r6.u16);
	// lhz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 8);
	// lhz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// sth r11,24(r21)
	REX_STORE_U16(ctx.r21.u32 + 24, ctx.r11.u16);
	// lhz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 10);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r7.u16);
	// sth r7,26(r21)
	REX_STORE_U16(ctx.r21.u32 + 26, ctx.r7.u16);
	// lhz r6,12(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r3.u16);
	// sth r3,28(r21)
	REX_STORE_U16(ctx.r21.u32 + 28, ctx.r3.u16);
	// lhz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 112);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r9,14(r27)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r7.u16);
	// sth r7,30(r21)
	REX_STORE_U16(ctx.r21.u32 + 30, ctx.r7.u16);
	// b 0x881f85ec
	goto loc_881F85EC;
loc_881F8594:
	// sth r11,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// sth r11,16(r21)
	REX_STORE_U16(ctx.r21.u32 + 16, ctx.r11.u16);
loc_881F859C:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// sth r11,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r21)
	REX_STORE_U64(ctx.r21.u32 + 8, ctx.r9.u64);
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// sth r8,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r8.u16);
	// lhz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// sth r7,20(r21)
	REX_STORE_U16(ctx.r21.u32 + 20, ctx.r7.u16);
	// lhz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// sth r6,22(r21)
	REX_STORE_U16(ctx.r21.u32 + 22, ctx.r6.u16);
	// lhz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// sth r5,24(r21)
	REX_STORE_U16(ctx.r21.u32 + 24, ctx.r5.u16);
	// lhz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// sth r4,26(r21)
	REX_STORE_U16(ctx.r21.u32 + 26, ctx.r4.u16);
	// lhz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// sth r3,28(r21)
	REX_STORE_U16(ctx.r21.u32 + 28, ctx.r3.u16);
	// lhz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 112);
	// sth r11,30(r21)
	REX_STORE_U16(ctx.r21.u32 + 30, ctx.r11.u16);
loc_881F85EC:
	// add r11,r14,r25
	ctx.r11.u64 = ctx.r14.u64 + ctx.r25.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 6, ctx.xer);
	// stb r9,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blt cr6,0x881f7208
	if (ctx.cr6.lt) goto loc_881F7208;
	// lbz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881f8694
	if (ctx.cr6.eq) goto loc_881F8694;
	// lwz r11,1308(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1308);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881f8694
	if (ctx.cr6.eq) goto loc_881F8694;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f8770
	if (ctx.cr6.eq) goto loc_881F8770;
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lhz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 36);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhz r11,38(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 38);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 40);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,42(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 42);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x881f8698
	goto loc_881F8698;
loc_881F8694:
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_881F8698:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// lhz r10,18(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 18);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// sth r6,18(r8)
	REX_STORE_U16(ctx.r8.u32 + 18, ctx.r6.u16);
	// ori r16,r11,32768
	ctx.r16.u64 = ctx.r11.u64 | 32768;
	// stw r5,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// blt cr6,0x881f6b80
	if (ctx.cr6.lt) goto loc_881F6B80;
	// lwz r14,396(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// rotlwi r18,r9,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r24,372(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r26,356(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r15,136(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r19,96(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881F871C:
	// lhz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 16);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// cmplw cr6,r22,r14
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r14.u32, ctx.xer);
	// sth r11,16(r24)
	REX_STORE_U16(ctx.r24.u32 + 16, ctx.r11.u16);
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// lhz r7,74(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// rotlwi r11,r6,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// bge cr6,0x881f877c
	if (!ctx.cr6.lt) goto loc_881F877C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881f66cc
	goto loc_881F66CC;
loc_881F8770:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881F877C:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r9,r11,93
	ctx.r9.s64 = ctx.r11.s64 + 93;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,24(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,28(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,32(r24)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 32);
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bne cr6,0x881f8844
	if (!ctx.cr6.eq) goto loc_881F8844;
	// ld r11,104(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 104);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r9,84(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,112(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,116(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,84(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// stw r4,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,132(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r7,84(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r8,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r5,136(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// stw r5,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// lwz r3,140(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 140);
	// lwz r4,84(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r3,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,148(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r8,84(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r9,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// lwz r7,152(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r6,84(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// stw r7,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
loc_881F8844:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

