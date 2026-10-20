#include "FH2_funcs.38.h"

DEFINE_REX_FUNC(sub_88050388) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_15) {
	REX_FUNC_PROLOGUE();
	// ld r15,-144(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
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

DEFINE_REX_FUNC(sub_880520D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880520E0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x881e9150
	ctx.lr = 0x880520F8;
	sub_881E9150(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x88052114
	if (!ctx.cr0.eq) goto loc_88052114;
	// bl 0x880525b8
	ctx.lr = 0x88052104;
	sub_880525B8(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x88052588
	ctx.lr = 0x8805210C;
	sub_88052588(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88050cc8
	ctx.lr = 0x88052114;
	sub_88050CC8(ctx, base);
loc_88052114:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88052134
	if (ctx.cr6.eq) goto loc_88052134;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x880521c4
	goto loc_880521C4;
loc_88052134:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88052e38
	ctx.lr = 0x8805213C;
	sub_88052E38(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8805215c
	if (!ctx.cr0.eq) goto loc_8805215C;
	// bl 0x880529c8
	ctx.lr = 0x88052148;
	sub_880529C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x880521c4
	goto loc_880521C4;
loc_8805215C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x88052218
	ctx.lr = 0x88052164;
	sub_88052218(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x880521b0
	if (!ctx.cr6.eq) goto loc_880521B0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x88051fb8
	ctx.lr = 0x88052180;
	sub_88051FB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x880521a8
	if (!ctx.cr0.eq) goto loc_880521A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88052278
	ctx.lr = 0x88052190;
	sub_88052278(ctx, base);
	// bl 0x880529c8
	ctx.lr = 0x88052194;
	sub_880529C8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x880521b4
	goto loc_880521B4;
loc_880521A8:
	// stwx r28,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x880521b4
	goto loc_880521B4;
loc_880521B0:
	// bl 0x88052278
	ctx.lr = 0x880521B4;
	sub_88052278(ctx, base);
loc_880521B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x880521e8
	ctx.lr = 0x880521C0;
	sub_880521E8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_880521C4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057410) {
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
	// beq cr6,0x880574b8
	if (ctx.cr6.eq) goto loc_880574B8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88050100
	ctx.lr = 0x88057444;
	sub_88050100(ctx, base);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88050000
	ctx.lr = 0x88057464;
	sub_88050000(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880502b0
	ctx.lr = 0x88057478;
	sub_880502B0(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x880547a0
	ctx.lr = 0x88057484;
	sub_880547A0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x880502c8
	ctx.lr = 0x8805748C;
	sub_880502C8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88050000
	ctx.lr = 0x880574A8;
	sub_88050000(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880574b8
	if (ctx.cr6.eq) goto loc_880574B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050298
	ctx.lr = 0x880574B8;
	sub_88050298(ctx, base);
loc_880574B8:
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

DEFINE_REX_FUNC(sub_88058830) {
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
	// bl 0x880570d8
	ctx.lr = 0x88058848;
	sub_880570D8(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8200
	ctx.r10.s64 = ctx.r11.s64 + 8200;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x880586d8
	ctx.lr = 0x8805885C;
	sub_880586D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_88059418) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88059700) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880597C8) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88059A10) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88059C08) {
	REX_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88059CD0) {
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
	// bl 0x88061fb8
	ctx.lr = 0x88059CE8;
	sub_88061FB8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x88062268
	ctx.lr = 0x88059CF0;
	sub_88062268(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x88057970
	ctx.lr = 0x88059CF8;
	sub_88057970(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x880654b0
	ctx.lr = 0x88059D00;
	sub_880654B0(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8312
	ctx.r10.s64 = ctx.r11.s64 + 8312;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88062320
	ctx.lr = 0x88059D14;
	sub_88062320(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r9,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	REX_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r8,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8805B0B8) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B1C8) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// lwz r8,48(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805B204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,212(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// lwz r6,48(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8805B218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,52(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805B258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,112(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8805B26C;
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

DEFINE_REX_FUNC(sub_8805BDD0) {
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
	// bl 0x88069348
	ctx.lr = 0x8805BDE8;
	sub_88069348(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8896
	ctx.r10.s64 = ctx.r11.s64 + 8896;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8805C048) {
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
	// addi r10,r11,9192
	ctx.r10.s64 = ctx.r11.s64 + 9192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805C07C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8805C084;
	sub_88062000(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8805c0a4
	if (ctx.cr6.eq) goto loc_8805C0A4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x88050358
	ctx.lr = 0x8805C0A0;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8805C0A4:
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

DEFINE_REX_FUNC(sub_8805D978) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8806fd10
	sub_8806FD10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805D9D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8805da10
	if (ctx.cr6.eq) goto loc_8805DA10;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805da10
	if (ctx.cr6.eq) goto loc_8805DA10;
	// lwz r11,208(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805da08
	if (ctx.cr6.eq) goto loc_8805DA08;
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8805DA08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8805DA10:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,9584
	ctx.r4.s64 = ctx.r9.s64 + 9584;
	// lwz r3,2840(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 2840);
	// b 0x8806c290
	sub_8806C290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805E6D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805E6E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,552(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r5,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lwz r28,264(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// beq cr6,0x8805e788
	if (ctx.cr6.eq) goto loc_8805E788;
	// lwz r3,232(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8805e940
	if (!ctx.cr6.eq) goto loc_8805E940;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e940
	if (!ctx.cr6.eq) goto loc_8805E940;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8805e734
	if (!ctx.cr6.eq) goto loc_8805E734;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8805E734:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8805e788
	if (!ctx.cr6.gt) goto loc_8805E788;
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x8807cf10
	ctx.lr = 0x8805E754;
	sub_8807CF10(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8805e788
	if (!ctx.cr6.eq) goto loc_8805E788;
loc_8805E75C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8805e788
	if (ctx.cr6.eq) goto loc_8805E788;
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x8807cf10
	ctx.lr = 0x8805E780;
	sub_8807CF10(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8805e75c
	if (ctx.cr6.eq) goto loc_8805E75C;
loc_8805E788:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lfd f0,1488(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8805e93c
	if (ctx.cr6.gt) goto loc_8805E93C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8807c288
	ctx.lr = 0x8805E7D8;
	sub_8807C288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805e818
	if (!ctx.cr6.eq) goto loc_8805E818;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880714e8
	ctx.lr = 0x8805E80C;
	sub_880714E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805E818:
	// lwz r10,568(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// bl 0x8805dff0
	ctx.lr = 0x8805E830;
	sub_8805DFF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805e864
	if (!ctx.cr6.eq) goto loc_8805E864;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880714e8
	ctx.lr = 0x8805E858;
	sub_880714E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805E864:
	// lwz r10,568(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// bl 0x8805dff0
	ctx.lr = 0x8805E87C;
	sub_8805DFF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805e93c
	if (ctx.cr6.eq) goto loc_8805E93C;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8805e8b0
	if (!ctx.cr6.eq) goto loc_8805E8B0;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880714e8
	ctx.lr = 0x8805E8A4;
	sub_880714E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805E8B0:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E8CC;
	sub_880B28E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E8E4;
	sub_880B28E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E8FC;
	sub_880B28E0(ctx, base);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880b28e0
	ctx.lr = 0x8805E914;
	sub_880B28E0(ctx, base);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fadd f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x8805e93c
	if (ctx.cr6.lt) goto loc_8805E93C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8805E93C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8805E940:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88065650) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88065678;
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

DEFINE_REX_FUNC(sub_88066938) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88066958
	if (ctx.cr6.eq) goto loc_88066958;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88066958
	if (ctx.cr6.eq) goto loc_88066958;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_88066958:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067658) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,10640
	ctx.r10.s64 = ctx.r11.s64 + 10640;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x880cd4f8
	sub_880CD4F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676E8) {
	REX_FUNC_PROLOGUE();
	// b 0x88067668
	sub_88067668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676F0) {
	REX_FUNC_PROLOGUE();
	// stw r4,444(r3)
	REX_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880676F8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067708) {
	REX_FUNC_PROLOGUE();
	// lwz r3,448(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067730) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88067758) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880677A8) {
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
	// addi r10,r11,10640
	ctx.r10.s64 = ctx.r11.s64 + 10640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x880cd4f8
	ctx.lr = 0x880677D4;
	sub_880CD4F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880677f4
	if (ctx.cr6.eq) goto loc_880677F4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32823
	ctx.r4.u64 = ctx.r4.u64 | 32823;
	// bl 0x88050358
	ctx.lr = 0x880677F0;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_880677F4:
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

DEFINE_REX_FUNC(sub_88067B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88067bc4
	if (ctx.cr6.lt) goto loc_88067BC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_88067BA4:
	// mfmsr r9
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint32_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u32, __builtin_bswap32(ctx.r10.u32), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88067ba4
	if (!ctx.cr0.eq) goto loc_88067BA4;
	// blr 
	return;
loc_88067BC4:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_88067BC8:
	// mfmsr r9
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint32_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u32, __builtin_bswap32(ctx.r10.u32), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88067bc8
	if (!ctx.cr0.eq) goto loc_88067BC8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069268) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88069348) {
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
	// bl 0x88061fb8
	ctx.lr = 0x88069360;
	sub_88061FB8(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,10896
	ctx.r10.s64 = ctx.r11.s64 + 10896;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88067f28
	ctx.lr = 0x88069374;
	sub_88067F28(ctx, base);
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

DEFINE_REX_FUNC(sub_880694F0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880697E0) {
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
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
loc_880697F8:
	// mfmsr r9
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = reinterpret_cast<std::atomic<uint32_t>*>(REX_RAW_ADDR(ea))->compare_exchange_strong(ctx.reserved.u32, __builtin_bswap32(ctx.r10.u32), std::memory_order_acq_rel, std::memory_order_acquire);
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x880697f8
	if (!ctx.cr0.eq) goto loc_880697F8;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88069828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,200(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 200);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8806983C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88069850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8806CA38) {
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
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806cb24
	if (!ctx.cr6.eq) goto loc_8806CB24;
	// lwz r11,800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lfd f13,7896(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7896);
	// lwz r10,796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r5,7936(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 7936);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfd f0,9656(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9656);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fmul f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fdiv f1,f9,f8
	ctx.f1.f64 = ctx.f9.f64 / ctx.f8.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8806cb24
	if (!ctx.cr6.lt) goto loc_8806CB24;
	// lwz r11,30408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806cb1c
	if (ctx.cr6.eq) goto loc_8806CB1C;
	// lwz r11,31012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31012);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806cacc
	if (ctx.cr6.eq) goto loc_8806CACC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30724(r3)
	REX_STORE_U32(ctx.r3.u32 + 30724, ctx.r11.u32);
	// stw r11,30720(r3)
	REX_STORE_U32(ctx.r3.u32 + 30720, ctx.r11.u32);
	// stw r11,30732(r3)
	REX_STORE_U32(ctx.r3.u32 + 30732, ctx.r11.u32);
	// b 0x8806cad8
	goto loc_8806CAD8;
loc_8806CACC:
	// stw r10,30724(r3)
	REX_STORE_U32(ctx.r3.u32 + 30724, ctx.r10.u32);
	// stw r10,30720(r3)
	REX_STORE_U32(ctx.r3.u32 + 30720, ctx.r10.u32);
	// stw r10,30732(r3)
	REX_STORE_U32(ctx.r3.u32 + 30732, ctx.r10.u32);
loc_8806CAD8:
	// lwz r11,31016(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806caf8
	if (ctx.cr6.eq) goto loc_8806CAF8;
	// lwz r11,30624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30624);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,30628(r3)
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r9.u32);
	// b 0x8806cafc
	goto loc_8806CAFC;
loc_8806CAF8:
	// stw r10,30628(r3)
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r10.u32);
loc_8806CAFC:
	// lwz r11,8104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806cb24
	if (!ctx.cr6.gt) goto loc_8806CB24;
	// bl 0x8807e080
	ctx.lr = 0x8806CB0C;
	sub_8807E080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8806CB1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2812(r3)
	REX_STORE_U32(ctx.r3.u32 + 2812, ctx.r11.u32);
loc_8806CB24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806F670) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,5003
	ctx.r11.s64 = ctx.r4.s64 + 5003;
	// addi r10,r4,5006
	ctx.r10.s64 = ctx.r4.s64 + 5006;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,20140(r3)
	REX_STORE_U32(ctx.r3.u32 + 20140, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,20144(r3)
	REX_STORE_U32(ctx.r3.u32 + 20144, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,20148(r3)
	REX_STORE_U32(ctx.r3.u32 + 20148, ctx.r11.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,20132(r3)
	REX_STORE_U32(ctx.r3.u32 + 20132, ctx.r10.u32);
	// lwz r9,20(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r9,20136(r3)
	REX_STORE_U32(ctx.r3.u32 + 20136, ctx.r9.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,20164(r3)
	REX_STORE_U32(ctx.r3.u32 + 20164, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,20168(r3)
	REX_STORE_U32(ctx.r3.u32 + 20168, ctx.r7.u32);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,20172(r3)
	REX_STORE_U32(ctx.r3.u32 + 20172, ctx.r5.u32);
	// lwz r4,12(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,20176(r3)
	REX_STORE_U32(ctx.r3.u32 + 20176, ctx.r4.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,20152(r3)
	REX_STORE_U32(ctx.r3.u32 + 20152, ctx.r11.u32);
	// lwz r10,20(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,20156(r3)
	REX_STORE_U32(ctx.r3.u32 + 20156, ctx.r10.u32);
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r9,20160(r3)
	REX_STORE_U32(ctx.r3.u32 + 20160, ctx.r9.u32);
	// lwz r8,28(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// stw r8,20180(r3)
	REX_STORE_U32(ctx.r3.u32 + 20180, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806FF18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11424
	ctx.r9.s64 = ctx.r11.s64 + 11424;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r6,r7,r4
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// addis r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 131072;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880701B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1380(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,1384(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// beq cr6,0x880701e4
	if (ctx.cr6.eq) goto loc_880701E4;
	// lwz r9,1360(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,1372(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// stw r8,1380(r3)
	REX_STORE_U32(ctx.r3.u32 + 1380, ctx.r8.u32);
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// stw r6,1384(r3)
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r6.u32);
	// b 0x880701fc
	goto loc_880701FC;
loc_880701E4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,1360(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r4,1372(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// stw r9,1380(r3)
	REX_STORE_U32(ctx.r3.u32 + 1380, ctx.r9.u32);
	// stw r8,1384(r3)
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r8.u32);
loc_880701FC:
	// lwz r9,1624(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// divwu r11,r5,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r5.u32 / ctx.r9.u32 : 0);
	// divwu r10,r4,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r4.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,3028(r3)
	REX_STORE_U32(ctx.r3.u32 + 3028, ctx.r11.u32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,3036(r3)
	REX_STORE_U32(ctx.r3.u32 + 3036, ctx.r10.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,3992(r3)
	REX_STORE_U32(ctx.r3.u32 + 3992, ctx.r11.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,4000(r3)
	REX_STORE_U32(ctx.r3.u32 + 4000, ctx.r10.u32);
	// stw r8,3996(r3)
	REX_STORE_U32(ctx.r3.u32 + 3996, ctx.r8.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// stw r7,4004(r3)
	REX_STORE_U32(ctx.r3.u32 + 4004, ctx.r7.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,4960(r3)
	REX_STORE_U32(ctx.r3.u32 + 4960, ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,4968(r3)
	REX_STORE_U32(ctx.r3.u32 + 4968, ctx.r7.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,5932(r3)
	REX_STORE_U32(ctx.r3.u32 + 5932, ctx.r5.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,5940(r3)
	REX_STORE_U32(ctx.r3.u32 + 5940, ctx.r4.u32);
	// stw r11,4964(r3)
	REX_STORE_U32(ctx.r3.u32 + 4964, ctx.r11.u32);
	// stw r10,4972(r3)
	REX_STORE_U32(ctx.r3.u32 + 4972, ctx.r10.u32);
	// stw r11,5928(r3)
	REX_STORE_U32(ctx.r3.u32 + 5928, ctx.r11.u32);
	// stw r10,5936(r3)
	REX_STORE_U32(ctx.r3.u32 + 5936, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88072E70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88072E78;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r6.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r7,312(r1)
	REX_STORE_U64(ctx.r1.u32 + 312, ctx.r7.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r8,320(r1)
	REX_STORE_U64(ctx.r1.u32 + 320, ctx.r8.u64);
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// std r9,328(r1)
	REX_STORE_U64(ctx.r1.u32 + 328, ctx.r9.u64);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r10,336(r1)
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x880547a0
	ctx.lr = 0x88072EC8;
	sub_880547A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806c640
	ctx.lr = 0x88072EEC;
	sub_8806C640(ctx, base);
	// bl 0x8806c510
	ctx.lr = 0x88072EF0;
	sub_8806C510(ctx, base);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lis r8,-30681
	ctx.r8.s64 = -2010710016;
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// addi r6,r11,-368
	ctx.r6.s64 = ctx.r11.s64 + -368;
	// addi r5,r10,-104
	ctx.r5.s64 = ctx.r10.s64 + -104;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r6.u32);
	// addi r4,r9,152
	ctx.r4.s64 = ctx.r9.s64 + 152;
	// stw r5,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r5.u32);
	// addi r3,r8,-1656
	ctx.r3.s64 = ctx.r8.s64 + -1656;
	// stw r29,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
	// addi r11,r7,-1400
	ctx.r11.s64 = ctx.r7.s64 + -1400;
	// stw r4,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r4.u32);
	// stw r3,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r3.u32);
	// stw r11,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x88072fd4
	if (!ctx.cr6.eq) goto loc_88072FD4;
	// lwz r11,27988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88072f90
	if (ctx.cr6.eq) goto loc_88072F90;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lis r8,-30681
	ctx.r8.s64 = -2010710016;
	// addi r3,r11,1616
	ctx.r3.s64 = ctx.r11.s64 + 1616;
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// addi r11,r10,2136
	ctx.r11.s64 = ctx.r10.s64 + 2136;
	// lis r6,-30681
	ctx.r6.s64 = -2010710016;
	// addi r10,r9,2408
	ctx.r10.s64 = ctx.r9.s64 + 2408;
	// lis r5,-30681
	ctx.r5.s64 = -2010710016;
	// addi r9,r8,2680
	ctx.r9.s64 = ctx.r8.s64 + 2680;
	// lis r4,-30681
	ctx.r4.s64 = -2010710016;
	// addi r8,r7,1880
	ctx.r8.s64 = ctx.r7.s64 + 1880;
	// addi r7,r6,2272
	ctx.r7.s64 = ctx.r6.s64 + 2272;
	// addi r6,r5,2544
	ctx.r6.s64 = ctx.r5.s64 + 2544;
	// addi r5,r4,2752
	ctx.r5.s64 = ctx.r4.s64 + 2752;
	// b 0x88073014
	goto loc_88073014;
loc_88072F90:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lis r8,-30681
	ctx.r8.s64 = -2010710016;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// addi r11,r10,928
	ctx.r11.s64 = ctx.r10.s64 + 928;
	// lis r6,-30681
	ctx.r6.s64 = -2010710016;
	// addi r10,r9,1200
	ctx.r10.s64 = ctx.r9.s64 + 1200;
	// lis r5,-30681
	ctx.r5.s64 = -2010710016;
	// addi r9,r8,1472
	ctx.r9.s64 = ctx.r8.s64 + 1472;
	// lis r4,-30681
	ctx.r4.s64 = -2010710016;
	// addi r8,r7,672
	ctx.r8.s64 = ctx.r7.s64 + 672;
	// addi r7,r6,1064
	ctx.r7.s64 = ctx.r6.s64 + 1064;
	// addi r6,r5,1336
	ctx.r6.s64 = ctx.r5.s64 + 1336;
	// addi r5,r4,1544
	ctx.r5.s64 = ctx.r4.s64 + 1544;
	// b 0x88073014
	goto loc_88073014;
loc_88072FD4:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lis r8,-30681
	ctx.r8.s64 = -2010710016;
	// addi r3,r11,-632
	ctx.r3.s64 = ctx.r11.s64 + -632;
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// addi r11,r10,2824
	ctx.r11.s64 = ctx.r10.s64 + 2824;
	// lis r6,-30681
	ctx.r6.s64 = -2010710016;
	// addi r10,r9,2960
	ctx.r10.s64 = ctx.r9.s64 + 2960;
	// lis r5,-30681
	ctx.r5.s64 = -2010710016;
	// addi r9,r8,3640
	ctx.r9.s64 = ctx.r8.s64 + 3640;
	// lis r4,-30681
	ctx.r4.s64 = -2010710016;
	// addi r8,r7,-888
	ctx.r8.s64 = ctx.r7.s64 + -888;
	// addi r7,r6,3096
	ctx.r7.s64 = ctx.r6.s64 + 3096;
	// addi r6,r5,3232
	ctx.r6.s64 = ctx.r5.s64 + 3232;
	// addi r5,r4,3712
	ctx.r5.s64 = ctx.r4.s64 + 3712;
loc_88073014:
	// stw r11,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,8104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// stw r3,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r3.u32);
	// stw r10,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r9,616(r31)
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r9.u32);
	// stw r8,592(r31)
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r8.u32);
	// stw r7,608(r31)
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r7.u32);
	// stw r6,612(r31)
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r6.u32);
	// stw r5,620(r31)
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r5.u32);
	// bgt cr6,0x8807308c
	if (ctx.cr6.gt) goto loc_8807308C;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lfd f13,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfd f0,12312(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12312);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// fmul f8,f10,f9
	ctx.f8.f64 = ctx.f10.f64 * ctx.f9.f64;
	// fmul f7,f8,f13
	ctx.f7.f64 = ctx.f8.f64 * ctx.f13.f64;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bgt cr6,0x88073090
	if (ctx.cr6.gt) goto loc_88073090;
loc_8807308C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88073090:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f13,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// stw r11,8056(r31)
	REX_STORE_U32(ctx.r31.u32 + 8056, ctx.r11.u32);
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lfd f0,12088(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f11.u64);
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r30,r6,r10
	ctx.r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x880730dc
	if (ctx.cr6.eq) goto loc_880730DC;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_880730DC:
	// lwz r11,30412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88073104
	if (!ctx.cr6.eq) goto loc_88073104;
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88073104
	if (!ctx.cr6.eq) goto loc_88073104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d290
	ctx.lr = 0x88073100;
	sub_8806D290(ctx, base);
	// b 0x8807310c
	goto loc_8807310C;
loc_88073104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806ca38
	ctx.lr = 0x8807310C;
	sub_8806CA38(ctx, base);
loc_8807310C:
	// lwz r11,30304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807315c
	if (ctx.cr6.eq) goto loc_8807315C;
	// lis r11,70
	ctx.r11.s64 = 4587520;
	// ori r10,r11,20480
	ctx.r10.u64 = ctx.r11.u64 | 20480;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88073158
	if (ctx.cr6.gt) goto loc_88073158;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f0,12304(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12304);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x88073158
	if (ctx.cr6.gt) goto loc_88073158;
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073158
	if (ctx.cr6.eq) goto loc_88073158;
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88073158
	if (ctx.cr6.eq) goto loc_88073158;
	// stw r28,2812(r31)
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r28.u32);
loc_88073158:
	// stw r28,30228(r31)
	REX_STORE_U32(ctx.r31.u32 + 30228, ctx.r28.u32);
loc_8807315C:
	// lwz r11,2124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// stw r28,21096(r31)
	REX_STORE_U32(ctx.r31.u32 + 21096, ctx.r28.u32);
	// stw r29,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r29.u32);
	// stw r29,1436(r31)
	REX_STORE_U32(ctx.r31.u32 + 1436, ctx.r29.u32);
	// stw r29,1440(r31)
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r29.u32);
	// stw r29,1432(r31)
	REX_STORE_U32(ctx.r31.u32 + 1432, ctx.r29.u32);
	// ble cr6,0x880731bc
	if (!ctx.cr6.gt) goto loc_880731BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880731a8
	if (!ctx.cr6.eq) goto loc_880731A8;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// stw r11,7840(r31)
	REX_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,4960
	ctx.r8.s64 = ctx.r10.s64 + 4960;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,2128(r31)
	REX_STORE_U32(ctx.r31.u32 + 2128, ctx.r7.u32);
	// b 0x880731bc
	goto loc_880731BC;
loc_880731A8:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// stw r29,7840(r31)
	REX_STORE_U32(ctx.r31.u32 + 7840, ctx.r29.u32);
	// stw r29,2124(r31)
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r29.u32);
	// lwz r11,4960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4960);
	// stw r11,2128(r31)
	REX_STORE_U32(ctx.r31.u32 + 2128, ctx.r11.u32);
loc_880731BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806c948
	ctx.lr = 0x880731C8;
	sub_8806C948(ctx, base);
	// bl 0x8806c7d8
	ctx.lr = 0x880731CC;
	sub_8806C7D8(ctx, base);
	// bl 0x8806cb38
	ctx.lr = 0x880731D0;
	sub_8806CB38(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,796(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,2124(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,1,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10;
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xori r7,r8,24
	ctx.r7.u64 = ctx.r8.u64 ^ 24;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// stw r6,7996(r31)
	REX_STORE_U32(ctx.r31.u32 + 7996, ctx.r6.u32);
	// ble cr6,0x88073208
	if (!ctx.cr6.gt) goto loc_88073208;
	// stw r29,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r29.u32);
loc_88073208:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,7820(r31)
	REX_STORE_U32(ctx.r31.u32 + 7820, ctx.r29.u32);
	// stw r29,7860(r31)
	REX_STORE_U32(ctx.r31.u32 + 7860, ctx.r29.u32);
	// lis r30,-30680
	ctx.r30.s64 = -2010644480;
	// stw r11,7828(r31)
	REX_STORE_U32(ctx.r31.u32 + 7828, ctx.r11.u32);
	// stw r29,2800(r31)
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r29.u32);
	// lwz r11,18412(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807323c
	if (!ctx.cr6.eq) goto loc_8807323C;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073250
	if (ctx.cr6.eq) goto loc_88073250;
loc_8807323C:
	// stw r29,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r29.u32);
	// stw r28,1604(r31)
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r28.u32);
	// stw r29,21076(r31)
	REX_STORE_U32(ctx.r31.u32 + 21076, ctx.r29.u32);
	// stw r29,21072(r31)
	REX_STORE_U32(ctx.r31.u32 + 21072, ctx.r29.u32);
	// stw r29,7080(r31)
	REX_STORE_U32(ctx.r31.u32 + 7080, ctx.r29.u32);
loc_88073250:
	// lwz r10,8176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880732bc
	if (ctx.cr6.eq) goto loc_880732BC;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,184(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88073274
	if (ctx.cr6.eq) goto loc_88073274;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,1604(r31)
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
loc_88073274:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880732bc
	if (ctx.cr6.eq) goto loc_880732BC;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,176(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8807329c
	if (ctx.cr6.eq) goto loc_8807329C;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,7976(r31)
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r8.u32);
loc_8807329C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880732bc
	if (ctx.cr6.eq) goto loc_880732BC;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880732bc
	if (ctx.cr6.eq) goto loc_880732BC;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stw r11,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r11.u32);
loc_880732BC:
	// stw r28,1572(r31)
	REX_STORE_U32(ctx.r31.u32 + 1572, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f828
	ctx.lr = 0x880732C8;
	sub_8806F828(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r29,2592(r31)
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r29.u32);
	// stw r11,6896(r31)
	REX_STORE_U32(ctx.r31.u32 + 6896, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,6900(r31)
	REX_STORE_U32(ctx.r31.u32 + 6900, ctx.r11.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r29,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r29.u32);
	// li r6,511
	ctx.r6.s64 = 511;
	// stw r10,2596(r31)
	REX_STORE_U32(ctx.r31.u32 + 2596, ctx.r10.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r9,2600(r31)
	REX_STORE_U32(ctx.r31.u32 + 2600, ctx.r9.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r8,2604(r31)
	REX_STORE_U32(ctx.r31.u32 + 2604, ctx.r8.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r7,2608(r31)
	REX_STORE_U32(ctx.r31.u32 + 2608, ctx.r7.u32);
	// stw r6,2612(r31)
	REX_STORE_U32(ctx.r31.u32 + 2612, ctx.r6.u32);
	// stw r5,2616(r31)
	REX_STORE_U32(ctx.r31.u32 + 2616, ctx.r5.u32);
	// stw r4,6892(r31)
	REX_STORE_U32(ctx.r31.u32 + 6892, ctx.r4.u32);
	// stw r3,6904(r31)
	REX_STORE_U32(ctx.r31.u32 + 6904, ctx.r3.u32);
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073334
	if (ctx.cr6.eq) goto loc_88073334;
	// lwz r11,2824(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073338
	if (ctx.cr6.eq) goto loc_88073338;
loc_88073334:
	// stw r29,21096(r31)
	REX_STORE_U32(ctx.r31.u32 + 21096, ctx.r29.u32);
loc_88073338:
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88073378
	if (!ctx.cr6.eq) goto loc_88073378;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073378
	if (ctx.cr6.eq) goto loc_88073378;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88073378
	if (ctx.cr6.eq) goto loc_88073378;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88073378
	if (ctx.cr6.lt) goto loc_88073378;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x88073378
	if (!ctx.cr6.lt) goto loc_88073378;
	// stw r11,2152(r31)
	REX_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
loc_88073378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806ccc0
	ctx.lr = 0x88073380;
	sub_8806CCC0(ctx, base);
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880733a4
	if (ctx.cr6.eq) goto loc_880733A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880733a4
	if (!ctx.cr6.eq) goto loc_880733A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d050
	ctx.lr = 0x880733A0;
	sub_8806D050(ctx, base);
	// stw r28,6788(r31)
	REX_STORE_U32(ctx.r31.u32 + 6788, ctx.r28.u32);
loc_880733A4:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073454
	if (ctx.cr6.eq) goto loc_88073454;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,312(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,320(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r6,328(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r5,332(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r4,336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r27,344(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r26,348(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r25,352(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r24,360(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r23,364(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r22,368(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r21,372(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r20,4(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,1604(r31)
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r10,1580(r31)
	REX_STORE_U32(ctx.r31.u32 + 1580, ctx.r10.u32);
	// cmpwi cr6,r20,8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 8, ctx.xer);
	// stw r9,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r9.u32);
	// stw r8,1576(r31)
	REX_STORE_U32(ctx.r31.u32 + 1576, ctx.r8.u32);
	// stw r7,788(r31)
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r7.u32);
	// stw r6,2564(r31)
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r6.u32);
	// stw r5,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r5.u32);
	// stw r4,1608(r31)
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r4.u32);
	// stw r3,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r3.u32);
	// stw r27,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r27.u32);
	// stw r26,2260(r31)
	REX_STORE_U32(ctx.r31.u32 + 2260, ctx.r26.u32);
	// stw r25,2812(r31)
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r25.u32);
	// stw r24,1432(r31)
	REX_STORE_U32(ctx.r31.u32 + 1432, ctx.r24.u32);
	// stw r23,1436(r31)
	REX_STORE_U32(ctx.r31.u32 + 1436, ctx.r23.u32);
	// stw r22,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r22.u32);
	// stw r21,1440(r31)
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r21.u32);
	// beq cr6,0x88073454
	if (ctx.cr6.eq) goto loc_88073454;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88073454
	if (!ctx.cr6.eq) goto loc_88073454;
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,2124(r31)
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r31)
	REX_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
loc_88073454:
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x88073464
	if (!ctx.cr6.gt) goto loc_88073464;
	// stw r29,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r29.u32);
loc_88073464:
	// lwz r10,8176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880734f0
	if (ctx.cr6.eq) goto loc_880734F0;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880734bc
	if (ctx.cr6.eq) goto loc_880734BC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88073494
	if (!ctx.cr6.gt) goto loc_88073494;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x880734a0
	if (ctx.cr6.lt) goto loc_880734A0;
loc_88073494:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x880734bc
	if (!ctx.cr6.eq) goto loc_880734BC;
	// b 0x880734a8
	goto loc_880734A8;
loc_880734A0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x880734b0
	if (!ctx.cr6.eq) goto loc_880734B0;
loc_880734A8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,2648(r31)
	REX_STORE_U32(ctx.r31.u32 + 2648, ctx.r28.u32);
loc_880734B0:
	// stw r11,2592(r31)
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// stw r11,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// stw r28,2564(r31)
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r28.u32);
loc_880734BC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880734f0
	if (ctx.cr6.eq) goto loc_880734F0;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,136(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880734f0
	if (ctx.cr6.eq) goto loc_880734F0;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880734f0
	if (!ctx.cr6.gt) goto loc_880734F0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x880734f0
	if (!ctx.cr6.lt) goto loc_880734F0;
	// stw r11,2576(r31)
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// stw r28,2568(r31)
	REX_STORE_U32(ctx.r31.u32 + 2568, ctx.r28.u32);
loc_880734F0:
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807351c
	if (!ctx.cr6.eq) goto loc_8807351C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807351c
	if (ctx.cr6.eq) goto loc_8807351C;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807351c
	if (ctx.cr6.eq) goto loc_8807351C;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,28036(r31)
	REX_STORE_U32(ctx.r31.u32 + 28036, ctx.r11.u32);
loc_8807351C:
	// stw r29,6768(r31)
	REX_STORE_U32(ctx.r31.u32 + 6768, ctx.r29.u32);
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073544
	if (ctx.cr6.eq) goto loc_88073544;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88073544
	if (ctx.cr6.eq) goto loc_88073544;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,6768(r31)
	REX_STORE_U32(ctx.r31.u32 + 6768, ctx.r11.u32);
loc_88073544:
	// lwz r10,30408(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880735cc
	if (!ctx.cr6.eq) goto loc_880735CC;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073574
	if (ctx.cr6.eq) goto loc_88073574;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88073574
	if (ctx.cr6.eq) goto loc_88073574;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,28044(r31)
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r11.u32);
loc_88073574:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880735cc
	if (!ctx.cr6.eq) goto loc_880735CC;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880735a0
	if (ctx.cr6.eq) goto loc_880735A0;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,204(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880735a0
	if (ctx.cr6.eq) goto loc_880735A0;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r11,28052(r31)
	REX_STORE_U32(ctx.r31.u32 + 28052, ctx.r11.u32);
loc_880735A0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880735cc
	if (!ctx.cr6.eq) goto loc_880735CC;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880735cc
	if (ctx.cr6.eq) goto loc_880735CC;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,216(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880735cc
	if (ctx.cr6.eq) goto loc_880735CC;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,28100(r31)
	REX_STORE_U32(ctx.r31.u32 + 28100, ctx.r11.u32);
loc_880735CC:
	// lwz r11,18412(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880735e0
	if (ctx.cr6.eq) goto loc_880735E0;
	// stw r29,28064(r31)
	REX_STORE_U32(ctx.r31.u32 + 28064, ctx.r29.u32);
	// b 0x8807360c
	goto loc_8807360C;
loc_880735E0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88073664
	if (!ctx.cr6.eq) goto loc_88073664;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807360c
	if (ctx.cr6.eq) goto loc_8807360C;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,220(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8807360c
	if (ctx.cr6.eq) goto loc_8807360C;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,28064(r31)
	REX_STORE_U32(ctx.r31.u32 + 28064, ctx.r11.u32);
loc_8807360C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88073664
	if (!ctx.cr6.eq) goto loc_88073664;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073638
	if (ctx.cr6.eq) goto loc_88073638;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r9,228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88073638
	if (ctx.cr6.eq) goto loc_88073638;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// stw r11,28088(r31)
	REX_STORE_U32(ctx.r31.u32 + 28088, ctx.r11.u32);
loc_88073638:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88073664
	if (!ctx.cr6.eq) goto loc_88073664;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073664
	if (ctx.cr6.eq) goto loc_88073664;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,232(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88073664
	if (ctx.cr6.eq) goto loc_88073664;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r11,28068(r31)
	REX_STORE_U32(ctx.r31.u32 + 28068, ctx.r11.u32);
loc_88073664:
	// lwz r11,1616(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88073674
	if (ctx.cr6.eq) goto loc_88073674;
	// stw r28,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r28.u32);
loc_88073674:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880941F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88094200;
	__savegprlr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r9.u32);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r9,564(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lis r26,4095
	ctx.r26.s64 = 268369920;
	// addi r19,r11,6848
	ctx.r19.s64 = ctx.r11.s64 + 6848;
	// stw r10,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// li r15,0
	ctx.r15.s64 = 0;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// lwz r24,628(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r14,556(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r23,8(r9)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r22,12(r9)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r9,572(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// stw r4,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r4.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r5,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// li r27,16
	ctx.r27.s64 = 16;
	// stw r15,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r15.u32);
	// addi r30,r7,256
	ctx.r30.s64 = ctx.r7.s64 + 256;
	// lwz r21,8(r9)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r20,12(r9)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,636(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// stw r15,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r15.u32);
	// stw r15,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r15.u32);
	// stw r15,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r15.u32);
	// stw r26,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// ble cr6,0x880945ec
	if (!ctx.cr6.gt) goto loc_880945EC;
	// lwz r29,604(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r16,596(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// stw r29,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
loc_880942AC:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,540(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r6,532(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x8810a970
	ctx.lr = 0x880942E4;
	sub_8810A970(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x88094330
	if (!ctx.cr6.eq) goto loc_88094330;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809432C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8809435c
	goto loc_8809435C;
loc_88094330:
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809435C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809435C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x880945c4
	if (!ctx.cr6.gt) goto loc_880945C4;
	// lwz r18,612(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
loc_88094368:
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// lhz r10,2(r18)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + 2);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,540(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r6,532(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x8810a970
	ctx.lr = 0x880943A0;
	sub_8810A970(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r7,232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880943ec
	if (!ctx.cr6.eq) goto loc_880943EC;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x880943E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88094418
	goto loc_88094418;
loc_880943EC:
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88094418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094418:
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x88094444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,2604(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r6,2608(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// subf r10,r23,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r23.u64;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// subf r8,r22,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r22.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,2612(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,2616(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// and r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// subf r29,r7,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r21,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r21.u64;
	// subf r8,r20,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r20.u64;
	// srawi r28,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 31;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// srawi r14,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r3.s32 >> 31;
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// and r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 & ctx.r4.u64;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r28.u64;
	// xor r4,r3,r14
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r14.u64;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r8,r6,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r10,r14,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r14.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880944f4
	if (ctx.cr6.gt) goto loc_880944F4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880944f4
	if (ctx.cr6.gt) goto loc_880944F4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r19
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r6,r10,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r10,r4,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880944fc
	goto loc_880944FC;
loc_880944F4:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880944FC:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809454c
	if (ctx.cr6.gt) goto loc_8809454C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8809454c
	if (ctx.cr6.gt) goto loc_8809454C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r8,r10,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88094554
	goto loc_88094554;
loc_8809454C:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88094554:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,580(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,492(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88094574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880945a4
	if (!ctx.cr6.lt) goto loc_880945A4;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r15,224(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r9,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stw r8,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
loc_880945A4:
	// lwz r14,556(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// bne 0x88094368
	if (!ctx.cr0.eq) goto loc_88094368;
	// lwz r18,500(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r28,256(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r16,596(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r29,240(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
loc_880945C4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stw r29,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// bne 0x880942ac
	if (!ctx.cr0.eq) goto loc_880942AC;
	// lwz r16,492(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r9,636(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r29,524(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r26,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// stw r15,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r15.u32);
loc_880945EC:
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// stw r6,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r4,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r7,r19,-1424
	ctx.r7.s64 = ctx.r19.s64 + -1424;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r29,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r24,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r14,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880892d0
	ctx.lr = 0x8809466C;
	sub_880892D0(ctx, base);
	// lwz r26,548(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x88094728
	if (!ctx.cr6.eq) goto loc_88094728;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r9,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// addi r28,r1,240
	ctx.r28.s64 = ctx.r1.s64 + 240;
	// stw r7,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// addi r15,r1,252
	ctx.r15.s64 = ctx.r1.s64 + 252;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r14,r1,248
	ctx.r14.s64 = ctx.r1.s64 + 248;
	// stw r28,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// addi r7,r19,-1360
	ctx.r7.s64 = ctx.r19.s64 + -1360;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r11,636(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r29,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r15,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// stw r14,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r14.u32);
	// stw r24,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// lwz r28,264(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r28,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lwz r28,268(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r28,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// bl 0x880892d0
	ctx.lr = 0x8809471C;
	sub_880892D0(ctx, base);
	// lwz r16,492(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r18,500(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r14,556(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
loc_88094728:
	// lwz r29,620(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lwz r15,540(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r28,532(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x8809475C;
	sub_8810A970(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x880947a8
	if (!ctx.cr6.eq) goto loc_880947A8;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880947A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880947c0
	goto loc_880947C0;
loc_880947A8:
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880947C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880947C0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r10,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// bl 0x8810a970
	ctx.lr = 0x880947E8;
	sub_8810A970(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// lwz r7,232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x88094834
	if (!ctx.cr6.eq) goto loc_88094834;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88094830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8809484c
	goto loc_8809484C;
loc_88094834:
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,2496(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x8809484C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809484C:
	// lwz r11,2844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x88094878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,2604(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r6,2608(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r8,224(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// subf r9,r23,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r23.u64;
	// lwz r5,2612(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// subf r11,r22,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r22.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,2616(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subf r29,r7,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r9,r21,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r21.u64;
	// subf r11,r20,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r20.u64;
	// srawi r28,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 31;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lwz r8,232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// xor r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// xor r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88094928
	if (ctx.cr6.gt) goto loc_88094928;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88094928
	if (ctx.cr6.gt) goto loc_88094928;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r19
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r6,r10,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r11,r4,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88094930
	goto loc_88094930;
loc_88094928:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88094930:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88094980
	if (ctx.cr6.gt) goto loc_88094980;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88094980
	if (ctx.cr6.gt) goto loc_88094980;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwzx r8,r10,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88094988
	goto loc_88094988;
loc_88094980:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88094988:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,580(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880949A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880949d4
	if (!ctx.cr6.lt) goto loc_880949D4;
	// lwz r30,224(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r29,228(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r28,232(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r27,236(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x880949e4
	goto loc_880949E4;
loc_880949D4:
	// lwz r30,256(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r29,244(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r28,248(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r27,252(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880949E4:
	// lwz r10,28020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88094a5c
	if (ctx.cr6.eq) goto loc_88094A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,564(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r31,636(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r23,r1,288
	ctx.r23.s64 = ctx.r1.s64 + 288;
	// stw r30,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r27,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r24,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r28,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r10,572(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r9,532(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r8,524(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,540(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x88093bc8
	ctx.lr = 0x88094A5C;
	sub_88093BC8(ctx, base);
loc_88094A5C:
	// lwz r11,676(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,644(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r8,652(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r7,660(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r6,668(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r29,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// stw r27,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BAB58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880BAB60;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,2527
	ctx.r11.s64 = ctx.r1.s64 + 2527;
	// stw r6,4380(r1)
	REX_STORE_U32(ctx.r1.u32 + 4380, ctx.r6.u32);
	// addi r6,r1,2879
	ctx.r6.s64 = ctx.r1.s64 + 2879;
	// stw r7,4388(r1)
	REX_STORE_U32(ctx.r1.u32 + 4388, ctx.r7.u32);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r7,1380(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// stw r8,4396(r1)
	REX_STORE_U32(ctx.r1.u32 + 4396, ctx.r8.u32);
	// rlwinm r8,r6,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,4372(r1)
	REX_STORE_U32(ctx.r1.u32 + 4372, ctx.r5.u32);
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// stw r4,4364(r1)
	REX_STORE_U32(ctx.r1.u32 + 4364, ctx.r4.u32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,6804(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6804);
	// addi r5,r8,256
	ctx.r5.s64 = ctx.r8.s64 + 256;
	// lwz r9,6808(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6808);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// lwz r4,720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// addi r5,r5,256
	ctx.r5.s64 = ctx.r5.s64 + 256;
	// lis r26,-30720
	ctx.r26.s64 = -2013265920;
	// lwz r29,6844(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// stw r6,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r6.u32);
	// mullw r8,r4,r27
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// lwz r28,784(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r25,7816(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 7816);
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// lwz r7,7764(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lfd f31,1488(r26)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r26.u32 + 1488);
	// stw r8,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stw r29,624(r1)
	REX_STORE_U32(ctx.r1.u32 + 624, ctx.r29.u32);
	// stw r28,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r28.u32);
	// stw r25,612(r1)
	REX_STORE_U32(ctx.r1.u32 + 612, ctx.r25.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28044(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r5,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r5.u32);
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// mulli r8,r8,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// stw r20,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r20.u32);
	// stw r6,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// stw r20,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// stw r20,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880bacdc
	if (ctx.cr6.eq) goto loc_880BACDC;
	// lwz r10,6820(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6820);
	// lwz r8,6824(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6824);
	// lwz r7,6836(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1400(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,6840(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r26,r5,r10
	ctx.r26.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r9,7808(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7808);
	// lwz r5,7812(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7812);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r25,6848(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r24,6852(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stw r28,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r28.u32);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// stw r26,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r26.u32);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r6,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r6.u32);
	// stw r25,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r25.u32);
	// stw r9,660(r1)
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r9.u32);
	// stw r24,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r24.u32);
	// stw r5,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r5.u32);
	// stw r10,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// stw r8,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r8.u32);
	// stw r7,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r7.u32);
loc_880BACDC:
	// lwz r11,2204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x880bacf8
	if (!ctx.cr6.eq) goto loc_880BACF8;
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// b 0x880bad00
	goto loc_880BAD00;
loc_880BACF8:
	// stw r20,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r20.u32);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
loc_880BAD00:
	// lwz r10,20820(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20820);
	// lwz r9,2144(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2144);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// lwz r8,580(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 580);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r8.u32);
	// bne cr6,0x880bad28
	if (!ctx.cr6.eq) goto loc_880BAD28;
	// stw r11,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
	// stw r10,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// b 0x880bad30
	goto loc_880BAD30;
loc_880BAD28:
	// stw r11,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// stw r10,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
loc_880BAD30:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x880bc564
	if (!ctx.cr6.lt) goto loc_880BC564;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f29,12088(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
loc_880BAD40:
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mullw r8,r11,r27
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// lwz r9,1380(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r7,672(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r6,624(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 624);
	// lwz r5,632(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r30,604(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r28,612(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// stw r20,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r20.u32);
	// stw r20,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r20.u32);
	// stw r20,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// stw r20,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r20.u32);
	// mullw r11,r27,r10
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r8,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r6.u32);
	// stw r5,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// stw r10,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// beq cr6,0x880bae5c
	if (ctx.cr6.eq) goto loc_880BAE5C;
	// lwz r10,796(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r9,1384(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r7,676(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// mullw r6,r9,r27
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// lwz r5,656(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r30,608(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// lwz r28,648(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r23,628(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r22,652(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r26,616(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r25,660(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r24,668(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r21,636(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// stw r20,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r20.u32);
	// mullw r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// stw r20,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r20.u32);
	// stw r20,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r20.u32);
	// stw r20,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r20.u32);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r8,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r8.u32);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r7,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r7.u32);
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r5,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r5.u32);
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r6,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r6.u32);
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r5,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r5.u32);
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r9,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r8,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// stw r7,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
loc_880BAE5C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880bc524
	if (ctx.cr6.eq) goto loc_880BC524;
	// lwz r10,4364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 4364);
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r27,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subfic r8,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r8.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,600(r1)
	REX_STORE_U32(ctx.r1.u32 + 600, ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r6.u32);
loc_880BAE88:
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,6892(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6892);
	// clrlwi r25,r26,31
	ctx.r25.u64 = ctx.r26.u32 & 0x1;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r23,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r23.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + ctx.r26.u64;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// stw r6,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// bge cr6,0x880baec0
	if (!ctx.cr6.lt) goto loc_880BAEC0;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
loc_880BAEC0:
	// lwz r9,1352(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r21,r11,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880baed8
	if (!ctx.cr6.gt) goto loc_880BAED8;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_880BAED8:
	// lwz r11,6896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6896);
	// lwz r22,600(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880baef0
	if (!ctx.cr6.lt) goto loc_880BAEF0;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_880BAEF0:
	// lwz r9,1360(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880baf0c
	if (!ctx.cr6.gt) goto loc_880BAF0C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_880BAF0C:
	// srawi r19,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r23.s32 >> 2;
	// srawi r18,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r21.s32 >> 2;
	// srawi r17,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 2;
	// srawi r16,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r24.s32 >> 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880bb24c
	if (!ctx.cr6.eq) goto loc_880BB24C;
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r6,r26,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r26.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r5,r27,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r27.u64;
	// beq cr6,0x880bb004
	if (ctx.cr6.eq) goto loc_880BB004;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r30,532(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r15,320(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// lwz r8,396(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BAF88;
	sub_880C3EC8(ctx, base);
	// lwz r4,7200(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880bafb0
	if (ctx.cr6.eq) goto loc_880BAFB0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bafb0
	if (!ctx.cr6.eq) goto loc_880BAFB0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BAFB0;
	sub_880EB138(ctx, base);
loc_880BAFB0:
	// lwz r11,7088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r15,360(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BAFD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7088(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// addi r6,r15,32
	ctx.r6.s64 = ctx.r15.s64 + 32;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880BAFFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,320(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// b 0x880bb068
	goto loc_880BB068;
loc_880BB004:
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r28,320(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BB040;
	sub_880C3EC8(ctx, base);
	// lwz r10,7200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb068
	if (ctx.cr6.eq) goto loc_880BB068;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bb068
	if (!ctx.cr6.eq) goto loc_880BB068;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BB068;
	sub_880EB138(ctx, base);
loc_880BB068:
	// lwz r11,7084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r6,276(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB08C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x880bb238
	if (!ctx.cr6.lt) goto loc_880BB238;
	// lwz r9,148(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// beq cr6,0x880bb194
	if (ctx.cr6.eq) goto loc_880BB194;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,320(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r28,516(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// subf r5,r27,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r27.u64;
	// lwz r6,380(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r30,r8,256
	ctx.r30.s64 = ctx.r8.s64 + 256;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r15,r28,64
	ctx.r15.s64 = ctx.r28.s64 + 64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r6,8
	ctx.r9.s64 = ctx.r6.s64 + 8;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BB110;
	sub_880C3EC8(ctx, base);
	// lwz r7,7200(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880bb138
	if (ctx.cr6.eq) goto loc_880BB138;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bb138
	if (!ctx.cr6.eq) goto loc_880BB138;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BB138;
	sub_880EB138(ctx, base);
loc_880BB138:
	// lwz r11,7088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r10,360(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,360(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,7088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,320(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// b 0x880bb210
	goto loc_880BB210;
loc_880BB194:
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r3,r27,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// subf r4,r11,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r30,r28,256
	ctx.r30.s64 = ctx.r28.s64 + 256;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r7,r6,16
	ctx.r7.s64 = ctx.r6.s64 + 16;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BB1E8;
	sub_880C3EC8(ctx, base);
	// lwz r7,7200(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880bb210
	if (ctx.cr6.eq) goto loc_880BB210;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bb210
	if (!ctx.cr6.eq) goto loc_880BB210;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BB210;
	sub_880EB138(ctx, base);
loc_880BB210:
	// lwz r11,7084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB238:
	// lwz r11,28044(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb26c
	if (ctx.cr6.eq) goto loc_880BB26C;
	// lwz r11,532(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// b 0x880bb260
	goto loc_880BB260;
loc_880BB24C:
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// beq cr6,0x880bb26c
	if (ctx.cr6.eq) goto loc_880BB26C;
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
loc_880BB260:
	// stw r11,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
loc_880BB26C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x880BB280;
	sub_880EB9E0(ctx, base);
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb4b8
	if (ctx.cr6.eq) goto loc_880BB4B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ebc20
	ctx.lr = 0x880BB298;
	sub_880EBC20(ctx, base);
	// addi r5,r1,664
	ctx.r5.s64 = ctx.r1.s64 + 664;
	// addi r10,r1,488
	ctx.r10.s64 = ctx.r1.s64 + 488;
	// lwz r6,96(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// stw r5,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,524
	ctx.r11.s64 = ctx.r1.s64 + 524;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r9,524(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,488(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x880f6078
	ctx.lr = 0x880BB2E8;
	sub_880F6078(ctx, base);
	// lwz r10,644(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r9,504(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r6,112(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r5,620(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,664(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 664);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r4,148(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r10,r7
	ctx.r15.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r3,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r15,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r15.u32);
	// beq cr6,0x880bb450
	if (ctx.cr6.eq) goto loc_880BB450;
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// stw r20,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r20,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r20.u32);
	// stw r20,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r20.u32);
	// stw r20,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb3a8
	if (ctx.cr6.eq) goto loc_880BB3A8;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,2520(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB36C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// lwz r7,96(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lwz r9,432(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,464(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x880f6d30
	ctx.lr = 0x880BB3A8;
	sub_880F6D30(ctx, base);
loc_880BB3A8:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb414
	if (ctx.cr6.eq) goto loc_880BB414;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,2520(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB3D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,428
	ctx.r8.s64 = ctx.r1.s64 + 428;
	// lwz r7,96(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,452(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x880f6d30
	ctx.lr = 0x880BB414;
	sub_880F6D30(ctx, base);
loc_880BB414:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,336(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r8,368(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,432(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stw r3,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// stw r6,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r6.u32);
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
loc_880BB450:
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB47C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,7136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880BB494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,7136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880BB4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r15,r3,r30
	ctx.r15.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r15,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r15.u32);
	// b 0x880bb604
	goto loc_880BB604;
loc_880BB4B8:
	// lwz r11,28024(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28024);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb520
	if (ctx.cr6.eq) goto loc_880BB520;
	// bl 0x880856c8
	ctx.lr = 0x880BB4CC;
	sub_880856C8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,1416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// std r11,712(r1)
	REX_STORE_U64(ctx.r1.u32 + 712, ctx.r11.u64);
	// lfd f0,712(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 712);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r9,504(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r15,368(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadd f11,f12,f29
	ctx.f11.f64 = ctx.f12.f64 + ctx.f29.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,480(r1)
	REX_STORE_U64(ctx.r1.u32 + 480, ctx.f10.u64);
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r7,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// b 0x880bb604
	goto loc_880BB604;
loc_880BB520:
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,7136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880BB560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,7136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880BB578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,19228(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19228);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r6,148(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r30,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// beq cr6,0x880bb5f8
	if (ctx.cr6.eq) goto loc_880BB5F8;
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb5cc
	if (ctx.cr6.eq) goto loc_880BB5CC;
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB5C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r30,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
loc_880BB5CC:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb5f8
	if (ctx.cr6.eq) goto loc_880BB5F8;
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r30,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
loc_880BB5F8:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
loc_880BB604:
	// stw r15,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r15.u32);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,100(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085888
	ctx.lr = 0x880BB61C;
	sub_88085888(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880bb6e8
	if (!ctx.cr6.eq) goto loc_880BB6E8;
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb6a0
	if (ctx.cr6.eq) goto loc_880BB6A0;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r15,r1,1728
	ctx.r15.s64 = ctx.r1.s64 + 1728;
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// addi r30,r1,2112
	ctx.r30.s64 = ctx.r1.s64 + 2112;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r15,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r16,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// lwz r10,456(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r5,360(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r9,384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x880d9d48
	ctx.lr = 0x880BB694;
	sub_880D9D48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// b 0x880bb6ec
	goto loc_880BB6EC;
loc_880BB6A0:
	// addi r11,r1,2112
	ctx.r11.s64 = ctx.r1.s64 + 2112;
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// addi r30,r1,1728
	ctx.r30.s64 = ctx.r1.s64 + 1728;
	// lwz r7,364(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,384(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x880d9a38
	ctx.lr = 0x880BB6DC;
	sub_880D9A38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// b 0x880bb6ec
	goto loc_880BB6EC;
loc_880BB6E8:
	// lwz r30,436(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880BB6EC:
	// lwz r11,496(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,2460(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,2456(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880BB718;
	sub_88243CB0(ctx, base);
	// lwz r10,28032(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb87c
	if (ctx.cr6.eq) goto loc_880BB87C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb7f0
	if (ctx.cr6.eq) goto loc_880BB7F0;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r14,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// stw r6,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r6.u32);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// addi r15,r1,332
	ctx.r15.s64 = ctx.r1.s64 + 332;
	// stw r5,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r5.u32);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// stw r15,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r15.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r4,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r4.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// rlwinm r30,r8,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r3,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r20,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r15,336(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// stw r15,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// lwz r15,356(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r15,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// lwz r15,460(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// stw r15,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// lwz r15,468(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// bl 0x880b48f0
	ctx.lr = 0x880BB7EC;
	sub_880B48F0(ctx, base);
	// b 0x880bb990
	goto loc_880BB990;
loc_880BB7F0:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r9,r1,328
	ctx.r9.s64 = ctx.r1.s64 + 328;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,332
	ctx.r8.s64 = ctx.r1.s64 + 332;
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// add r6,r25,r10
	ctx.r6.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r5,296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// rlwinm r30,r6,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// stw r20,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3830
	ctx.lr = 0x880BB878;
	sub_880B3830(ctx, base);
	// b 0x880bb990
	goto loc_880BB990;
loc_880BB87C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880bb91c
	if (ctx.cr6.eq) goto loc_880BB91C;
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r9,r1,816
	ctx.r9.s64 = ctx.r1.s64 + 816;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r14,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// add r5,r25,r10
	ctx.r5.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// rlwinm r30,r5,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r6,r1,332
	ctx.r6.s64 = ctx.r1.s64 + 332;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r15,r1,352
	ctx.r15.s64 = ctx.r1.s64 + 352;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r6,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r20,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// stw r15,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// bl 0x880b43d8
	ctx.lr = 0x880BB918;
	sub_880B43D8(ctx, base);
	// b 0x880bb990
	goto loc_880BB990;
loc_880BB91C:
	// addi r10,r1,328
	ctx.r10.s64 = ctx.r1.s64 + 328;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r1,332
	ctx.r9.s64 = ctx.r1.s64 + 332;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// add r5,r25,r10
	ctx.r5.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r20,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// rlwinm r30,r5,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x880b3028
	ctx.lr = 0x880BB990;
	sub_880B3028(ctx, base);
loc_880BB990:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb9b8
	if (ctx.cr6.eq) goto loc_880BB9B8;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,508(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r9,328(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r15,r11,r9
	ctx.r15.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r15,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r15.u32);
	// b 0x880bb9bc
	goto loc_880BB9BC;
loc_880BB9B8:
	// lwz r15,328(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
loc_880BB9BC:
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
	// stw r10,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// bne cr6,0x880bba88
	if (!ctx.cr6.eq) goto loc_880BBA88;
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bba48
	if (ctx.cr6.eq) goto loc_880BBA48;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// lwz r9,472(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// addi r6,r1,960
	ctx.r6.s64 = ctx.r1.s64 + 960;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r6,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r16,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,360(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r10,440(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// lwz r9,392(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x880d9d48
	ctx.lr = 0x880BBA44;
	sub_880D9D48(ctx, base);
	// b 0x880bba84
	goto loc_880BBA84;
loc_880BBA48:
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r11,r1,1344
	ctx.r11.s64 = ctx.r1.s64 + 1344;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r25,r1,960
	ctx.r25.s64 = ctx.r1.s64 + 960;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,364(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,392(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// bl 0x880d9a38
	ctx.lr = 0x880BBA84;
	sub_880D9A38(ctx, base);
loc_880BBA84:
	// stw r3,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
loc_880BBA88:
	// lwz r11,496(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,2468(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,2464(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880BBAB4;
	sub_88243CB0(ctx, base);
	// lwz r10,28032(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bbbe0
	if (ctx.cr6.eq) goto loc_880BBBE0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// beq cr6,0x880bbb64
	if (ctx.cr6.eq) goto loc_880BBB64;
	// addi r8,r1,348
	ctx.r8.s64 = ctx.r1.s64 + 348;
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r8,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// addi r6,r1,408
	ctx.r6.s64 = ctx.r1.s64 + 408;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// stw r7,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r6,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// addi r8,r1,736
	ctx.r8.s64 = ctx.r1.s64 + 736;
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r14,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r20,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// bl 0x880b48f0
	ctx.lr = 0x880BBB60;
	sub_880B48F0(ctx, base);
	// b 0x880bbce8
	goto loc_880BBCE8;
loc_880BBB64:
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stw r20,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x880b3830
	ctx.lr = 0x880BBBDC;
	sub_880B3830(ctx, base);
	// b 0x880bbce8
	goto loc_880BBCE8;
loc_880BBBE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// beq cr6,0x880bbc78
	if (ctx.cr6.eq) goto loc_880BBC78;
	// addi r8,r1,576
	ctx.r8.s64 = ctx.r1.s64 + 576;
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r10,r1,408
	ctx.r10.s64 = ctx.r1.s64 + 408;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,348
	ctx.r6.s64 = ctx.r1.s64 + 348;
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r6,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r20,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// bl 0x880b43d8
	ctx.lr = 0x880BBC74;
	sub_880B43D8(ctx, base);
	// b 0x880bbce8
	goto loc_880BBCE8;
loc_880BBC78:
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r10,r1,348
	ctx.r10.s64 = ctx.r1.s64 + 348;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stw r20,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x880b3028
	ctx.lr = 0x880BBCE8;
	sub_880B3028(ctx, base);
loc_880BBCE8:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bbd10
	if (ctx.cr6.eq) goto loc_880BBD10;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,500(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r25,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r25.u32);
	// b 0x880bbd14
	goto loc_880BBD14;
loc_880BBD10:
	// lwz r25,348(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_880BBD14:
	// lwz r24,408(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// cmpw cr6,r15,r25
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r25.s32, ctx.xer);
	// lwz r23,416(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// li r17,3
	ctx.r17.s64 = 3;
	// stw r24,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r24.u32);
	// stw r23,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r23.u32);
	// bge cr6,0x880bbd44
	if (!ctx.cr6.lt) goto loc_880BBD44;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// rlwimi r11,r18,30,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x880bbd4c
	goto loc_880BBD4C;
loc_880BBD44:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwimi r11,r17,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
loc_880BBD4C:
	// lwz r16,352(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r11,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r16,16384
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 16384, ctx.xer);
	// beq cr6,0x880bc070
	if (ctx.cr6.eq) goto loc_880BC070;
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// beq cr6,0x880bc070
	if (ctx.cr6.eq) goto loc_880BC070;
	// lwz r11,28032(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// lwz r22,276(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// beq cr6,0x880bbf30
	if (ctx.cr6.eq) goto loc_880BBF30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// beq cr6,0x880bbe88
	if (ctx.cr6.eq) goto loc_880BBE88;
	// addi r9,r1,344
	ctx.r9.s64 = ctx.r1.s64 + 344;
	// lwz r10,316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r7,r1,492
	ctx.r7.s64 = ctx.r1.s64 + 492;
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r9,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r9,r1,896
	ctx.r9.s64 = ctx.r1.s64 + 896;
	// stw r7,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// stw r9,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// stw r7,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r7.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r5,r1,520
	ctx.r5.s64 = ctx.r1.s64 + 520;
	// stw r4,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r4.u32);
	// addi r16,r1,528
	ctx.r16.s64 = ctx.r1.s64 + 528;
	// stw r5,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r5.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r16,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// addi r19,r1,688
	ctx.r19.s64 = ctx.r1.s64 + 688;
	// stw r3,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r3.u32);
	// addi r21,r1,736
	ctx.r21.s64 = ctx.r1.s64 + 736;
	// stw r19,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r19.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// lwz r19,280(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r21,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// lwz r16,468(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// stw r16,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// lwz r16,460(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r21,296(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r16,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r16.u32);
	// lwz r16,336(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r16,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r16.u32);
	// lwz r16,356(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r16,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r16.u32);
	// lwz r16,640(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// stw r16,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// lwz r16,480(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// stw r16,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r16.u32);
	// lwz r16,280(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r16,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// bl 0x880b0990
	ctx.lr = 0x880BBE80;
	sub_880B0990(ctx, base);
	// lwz r16,352(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// b 0x880bc02c
	goto loc_880BC02C;
loc_880BBE88:
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r1,492
	ctx.r9.s64 = ctx.r1.s64 + 492;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,520
	ctx.r7.s64 = ctx.r1.s64 + 520;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lwz r19,280(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// lwz r21,296(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r8,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r7,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x880941f8
	ctx.lr = 0x880BBF2C;
	sub_880941F8(ctx, base);
	// b 0x880bc02c
	goto loc_880BC02C;
loc_880BBF30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r19,280(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880bbfd0
	if (ctx.cr6.eq) goto loc_880BBFD0;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r8,316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// stw r4,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r4.u32);
	// addi r9,r1,544
	ctx.r9.s64 = ctx.r1.s64 + 544;
	// lwz r6,308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r21,r1,816
	ctx.r21.s64 = ctx.r1.s64 + 816;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// lwz r21,296(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,480(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x880b0090
	ctx.lr = 0x880BBFCC;
	sub_880B0090(ctx, base);
	// b 0x880bc02c
	goto loc_880BC02C;
loc_880BBFD0:
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r21,296(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x88093bc8
	ctx.lr = 0x880BC02C;
	sub_88093BC8(ctx, base);
loc_880BC02C:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bc050
	if (ctx.cr6.eq) goto loc_880BC050;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,344(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// b 0x880bc054
	goto loc_880BC054;
loc_880BC050:
	// lwz r11,344(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
loc_880BC054:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880bc07c
	if (!ctx.cr6.lt) goto loc_880BC07C;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r18,29,0,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 29) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
	// b 0x880bc07c
	goto loc_880BC07C;
loc_880BC070:
	// lwz r19,280(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r21,296(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r22,276(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_880BC07C:
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r10,2448(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,2452(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// bne cr6,0x880bc0b4
	if (!ctx.cr6.eq) goto loc_880BC0B4;
	// sthx r20,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r20.u16);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r9,2448(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// sthx r20,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r20.u16);
	// b 0x880bc0bc
	goto loc_880BC0BC;
loc_880BC0B4:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
loc_880BC0BC:
	// addi r9,r1,388
	ctx.r9.s64 = ctx.r1.s64 + 388;
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r11,r1,404
	ctx.r11.s64 = ctx.r1.s64 + 404;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r9,r1,412
	ctx.r9.s64 = ctx.r1.s64 + 412;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810cea8
	ctx.lr = 0x880BC0E8;
	sub_8810CEA8(ctx, base);
	// lwz r8,148(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880bc184
	if (ctx.cr6.eq) goto loc_880BC184;
	// lwz r7,412(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r9,r1,376
	ctx.r9.s64 = ctx.r1.s64 + 376;
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,388(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r7,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r7.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r4,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,400(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r28,308(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r6,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r9,480(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x880b1810
	ctx.lr = 0x880BC180;
	sub_880B1810(ctx, base);
	// b 0x880bc1dc
	goto loc_880BC1DC;
loc_880BC184:
	// lwz r6,388(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r8,r1,376
	ctx.r8.s64 = ctx.r1.s64 + 376;
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// lwz r3,412(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x88094a90
	ctx.lr = 0x880BC1DC;
	sub_88094A90(ctx, base);
loc_880BC1DC:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bc1fc
	if (ctx.cr6.eq) goto loc_880BC1FC;
	// lwz r10,376(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// b 0x880bc200
	goto loc_880BC200;
loc_880BC1FC:
	// lwz r11,376(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
loc_880BC200:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880bc218
	if (!ctx.cr6.lt) goto loc_880BC218;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r18,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
loc_880BC218:
	// lwz r11,6856(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880bc234
	if (!ctx.cr6.eq) goto loc_880BC234;
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// rlwimi r11,r18,30,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x880bc248
	goto loc_880BC248;
loc_880BC234:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880bc24c
	if (!ctx.cr6.eq) goto loc_880BC24C;
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwimi r11,r17,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
loc_880BC248:
	// stw r11,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
loc_880BC24C:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,448(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880bc298
	if (!ctx.cr6.lt) goto loc_880BC298;
	// lwz r10,6792(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,372(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r6,424(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// rlwimi r11,r7,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r4,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r4.u32);
	// stw r3,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// stw r17,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r17.u32);
	// stw r11,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// b 0x880bc2c4
	goto loc_880BC2C4;
loc_880BC298:
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stbx r20,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r20.u8);
	// stw r20,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r20.u32);
	// stw r8,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// lwz r7,28044(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880bc2c4
	if (ctx.cr6.eq) goto loc_880BC2C4;
	// stw r20,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r20.u32);
	// stw r20,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r20.u32);
loc_880BC2C4:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r8,r11,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880bc2f4
	if (ctx.cr6.eq) goto loc_880BC2F4;
	// lwz r10,6856(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x880bc2ec
	if (ctx.cr6.eq) goto loc_880BC2EC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880bc2f4
	if (!ctx.cr6.eq) goto loc_880BC2F4;
loc_880BC2EC:
	// rlwimi r11,r10,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
loc_880BC2F4:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880bc338
	if (!ctx.cr6.eq) goto loc_880BC338;
	// lwz r11,2456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,332(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// sthx r16,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r16.u16);
	// lwz r5,2460(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r7,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u16);
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r3,2464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r4,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u16);
	// lwz r7,2468(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// lwz r8,404(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// sthx r8,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC338:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880bc370
	if (!ctx.cr6.eq) goto loc_880BC370;
	// lwz r11,2464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u16);
	// lwz r6,2468(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r23,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r23.u16);
	// lwz r4,2456(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// lwz r5,412(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// sthx r5,r4,r10
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u16);
	// lwz r11,400(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r7,2460(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC370:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880bc3e0
	if (!ctx.cr6.eq) goto loc_880BC3E0;
	// lwz r11,28032(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// beq cr6,0x880bc3bc
	if (ctx.cr6.eq) goto loc_880BC3BC;
	// lwz r8,520(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,512(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r5,528(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r3,492(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// sthx r8,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r7,2460(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r4,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u16);
	// lwz r6,2464(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r5,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u16);
	// lwz r5,2468(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r3,r5,r10
	REX_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r3.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC3BC:
	// sthx r16,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r16.u16);
	// lwz r3,2460(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lwz r7,332(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// sthx r7,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u16);
	// lwz r11,2464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r24,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u16);
	// lwz r8,2468(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r23,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r23.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC3E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880bc420
	if (!ctx.cr6.eq) goto loc_880BC420;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2456(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// sthx r11,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r6,400(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r5,2460(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r6,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// lwz r3,388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,2464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r3,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwz r7,404(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,2468(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r7,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC420:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880bc450
	if (!ctx.cr6.eq) goto loc_880BC450;
	// lwz r10,2464(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// sthx r11,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r7,2456(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// sthx r11,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r6,2468(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r11,r6,r8
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r5,2460(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r11,r8,r5
	REX_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u16);
loc_880BC450:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// lwz r3,28044(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// stw r8,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r7,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// beq cr6,0x880bc4f0
	if (ctx.cr6.eq) goto loc_880BC4F0;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwz r6,304(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// lwz r10,316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// lwz r30,456(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r28,440(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r25,472(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r7,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r7.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r7,r25,4
	ctx.r7.s64 = ctx.r25.s64 + 4;
	// stw r5,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r5.u32);
	// stw r11,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r8,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// stw r4,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r4.u32);
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// stw r6,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r6.u32);
	// stw r30,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r28,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r28.u32);
	// stw r7,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r7.u32);
loc_880BC4F0:
	// lwz r11,384(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,392(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r9,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// stw r8,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// addi r29,r29,276
	ctx.r29.s64 = ctx.r29.s64 + 276;
	// stw r7,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r7.u32);
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x880bae88
	if (ctx.cr6.lt) goto loc_880BAE88;
loc_880BC524:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,4372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 4372);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,728(r1)
	REX_STORE_U64(ctx.r1.u32 + 728, ctx.r9.u64);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// std r7,720(r1)
	REX_STORE_U64(ctx.r1.u32 + 720, ctx.r7.u64);
	// lfd f0,728(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 728);
	// lfd f13,720(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 720);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fadd f30,f12,f30
	ctx.f30.f64 = ctx.f12.f64 + ctx.f30.f64;
	// fadd f31,f11,f31
	ctx.f31.f64 = ctx.f11.f64 + ctx.f31.f64;
	// blt cr6,0x880bad40
	if (ctx.cr6.lt) goto loc_880BAD40;
loc_880BC564:
	// lwz r11,424(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r10,4380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 4380);
	// lwz r9,4396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 4396);
	// lwz r8,4388(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 4388);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stfd f31,0(r9)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.f31.u64);
	// stfd f30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.f30.u64);
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// lfd f29,-176(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E24E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880E24F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// lis r9,-30706
	ctx.r9.s64 = -2012348416;
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// lis r7,-30706
	ctx.r7.s64 = -2012348416;
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// lis r5,-30706
	ctx.r5.s64 = -2012348416;
	// addi r11,r11,26088
	ctx.r11.s64 = ctx.r11.s64 + 26088;
	// addi r10,r10,-13928
	ctx.r10.s64 = ctx.r10.s64 + -13928;
	// addi r9,r9,-18776
	ctx.r9.s64 = ctx.r9.s64 + -18776;
	// stw r11,20828(r31)
	REX_STORE_U32(ctx.r31.u32 + 20828, ctx.r11.u32);
	// addi r8,r8,-17960
	ctx.r8.s64 = ctx.r8.s64 + -17960;
	// stw r11,20824(r31)
	REX_STORE_U32(ctx.r31.u32 + 20824, ctx.r11.u32);
	// addi r7,r7,-18160
	ctx.r7.s64 = ctx.r7.s64 + -18160;
	// stw r11,20816(r31)
	REX_STORE_U32(ctx.r31.u32 + 20816, ctx.r11.u32);
	// addi r6,r6,-14272
	ctx.r6.s64 = ctx.r6.s64 + -14272;
	// stw r10,7092(r31)
	REX_STORE_U32(ctx.r31.u32 + 7092, ctx.r10.u32);
	// addi r5,r5,-15400
	ctx.r5.s64 = ctx.r5.s64 + -15400;
	// stw r9,7096(r31)
	REX_STORE_U32(ctx.r31.u32 + 7096, ctx.r9.u32);
	// lis r4,-30706
	ctx.r4.s64 = -2012348416;
	// stw r8,7104(r31)
	REX_STORE_U32(ctx.r31.u32 + 7104, ctx.r8.u32);
	// lis r3,-30706
	ctx.r3.s64 = -2012348416;
	// stw r7,7100(r31)
	REX_STORE_U32(ctx.r31.u32 + 7100, ctx.r7.u32);
	// lis r30,-30706
	ctx.r30.s64 = -2012348416;
	// stw r6,7108(r31)
	REX_STORE_U32(ctx.r31.u32 + 7108, ctx.r6.u32);
	// lis r29,-30706
	ctx.r29.s64 = -2012348416;
	// stw r5,7112(r31)
	REX_STORE_U32(ctx.r31.u32 + 7112, ctx.r5.u32);
	// lis r28,-30706
	ctx.r28.s64 = -2012348416;
	// lis r27,-30706
	ctx.r27.s64 = -2012348416;
	// lis r26,-30706
	ctx.r26.s64 = -2012348416;
	// lis r25,-30706
	ctx.r25.s64 = -2012348416;
	// lis r24,-30706
	ctx.r24.s64 = -2012348416;
	// addi r4,r4,-12888
	ctx.r4.s64 = ctx.r4.s64 + -12888;
	// addi r3,r3,-11648
	ctx.r3.s64 = ctx.r3.s64 + -11648;
	// addi r11,r30,-3360
	ctx.r11.s64 = ctx.r30.s64 + -3360;
	// stw r4,21144(r31)
	REX_STORE_U32(ctx.r31.u32 + 21144, ctx.r4.u32);
	// addi r10,r29,-2744
	ctx.r10.s64 = ctx.r29.s64 + -2744;
	// stw r3,21148(r31)
	REX_STORE_U32(ctx.r31.u32 + 21148, ctx.r3.u32);
	// addi r9,r28,-10552
	ctx.r9.s64 = ctx.r28.s64 + -10552;
	// stw r11,28472(r31)
	REX_STORE_U32(ctx.r31.u32 + 28472, ctx.r11.u32);
	// addi r8,r27,-9352
	ctx.r8.s64 = ctx.r27.s64 + -9352;
	// stw r10,28476(r31)
	REX_STORE_U32(ctx.r31.u32 + 28476, ctx.r10.u32);
	// addi r7,r26,-13656
	ctx.r7.s64 = ctx.r26.s64 + -13656;
	// stw r9,27944(r31)
	REX_STORE_U32(ctx.r31.u32 + 27944, ctx.r9.u32);
	// addi r6,r25,-1544
	ctx.r6.s64 = ctx.r25.s64 + -1544;
	// stw r8,27948(r31)
	REX_STORE_U32(ctx.r31.u32 + 27948, ctx.r8.u32);
	// addi r5,r24,-8136
	ctx.r5.s64 = ctx.r24.s64 + -8136;
	// stw r7,28484(r31)
	REX_STORE_U32(ctx.r31.u32 + 28484, ctx.r7.u32);
	// lis r23,-30706
	ctx.r23.s64 = -2012348416;
	// stw r6,28480(r31)
	REX_STORE_U32(ctx.r31.u32 + 28480, ctx.r6.u32);
	// lis r22,-30706
	ctx.r22.s64 = -2012348416;
	// stw r5,27952(r31)
	REX_STORE_U32(ctx.r31.u32 + 27952, ctx.r5.u32);
	// lis r21,-30706
	ctx.r21.s64 = -2012348416;
	// lis r20,-30706
	ctx.r20.s64 = -2012348416;
	// lis r19,-30706
	ctx.r19.s64 = -2012348416;
	// lis r18,-30706
	ctx.r18.s64 = -2012348416;
	// lis r17,-30706
	ctx.r17.s64 = -2012348416;
	// lis r16,-30706
	ctx.r16.s64 = -2012348416;
	// lis r15,-30706
	ctx.r15.s64 = -2012348416;
	// addi r4,r23,-6504
	ctx.r4.s64 = ctx.r23.s64 + -6504;
	// addi r3,r22,-4864
	ctx.r3.s64 = ctx.r22.s64 + -4864;
	// lis r14,-30706
	ctx.r14.s64 = -2012348416;
	// stw r4,27956(r31)
	REX_STORE_U32(ctx.r31.u32 + 27956, ctx.r4.u32);
	// addi r11,r21,-4264
	ctx.r11.s64 = ctx.r21.s64 + -4264;
	// stw r3,27960(r31)
	REX_STORE_U32(ctx.r31.u32 + 27960, ctx.r3.u32);
	// addi r10,r20,8728
	ctx.r10.s64 = ctx.r20.s64 + 8728;
	// addi r9,r19,9352
	ctx.r9.s64 = ctx.r19.s64 + 9352;
	// stw r11,27964(r31)
	REX_STORE_U32(ctx.r31.u32 + 27964, ctx.r11.u32);
	// addi r8,r18,-17840
	ctx.r8.s64 = ctx.r18.s64 + -17840;
	// stw r10,7136(r31)
	REX_STORE_U32(ctx.r31.u32 + 7136, ctx.r10.u32);
	// addi r7,r17,-15832
	ctx.r7.s64 = ctx.r17.s64 + -15832;
	// stw r9,28544(r31)
	REX_STORE_U32(ctx.r31.u32 + 28544, ctx.r9.u32);
	// addi r6,r16,-15808
	ctx.r6.s64 = ctx.r16.s64 + -15808;
	// stw r8,7116(r31)
	REX_STORE_U32(ctx.r31.u32 + 7116, ctx.r8.u32);
	// addi r5,r15,-17960
	ctx.r5.s64 = ctx.r15.s64 + -17960;
	// stw r7,7120(r31)
	REX_STORE_U32(ctx.r31.u32 + 7120, ctx.r7.u32);
	// addi r4,r14,-15560
	ctx.r4.s64 = ctx.r14.s64 + -15560;
	// stw r6,7128(r31)
	REX_STORE_U32(ctx.r31.u32 + 7128, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,7124(r31)
	REX_STORE_U32(ctx.r31.u32 + 7124, ctx.r5.u32);
	// lwz r11,7096(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7096);
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// stw r4,7132(r31)
	REX_STORE_U32(ctx.r31.u32 + 7132, ctx.r4.u32);
	// stw r11,-28376(r10)
	REX_STORE_U32(ctx.r10.u32 + -28376, ctx.r11.u32);
	// bl 0x8813a8a0
	ctx.lr = 0x880E264C;
	sub_8813A8A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6040
	ctx.lr = 0x880E2654;
	sub_880F6040(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E4530) {
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
	// lwz r11,30872(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e4564
	if (ctx.cr6.eq) goto loc_880E4564;
	// lwz r11,30928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30928);
	// stw r11,7572(r3)
	REX_STORE_U32(ctx.r3.u32 + 7572, ctx.r11.u32);
	// bl 0x880e43b8
	ctx.lr = 0x880E4554;
	sub_880E43B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_880E4564:
	// lwz r11,7904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,14752(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 14752);
	// lfd f13,14864(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 14864);
	// fnmsub f0,f12,f0,f13
	ctx.f0.f64 = -std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64);
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r11,7572(r3)
	REX_STORE_U32(ctx.r3.u32 + 7572, ctx.r11.u32);
	// bgt cr6,0x880e45cc
	if (ctx.cr6.gt) goto loc_880E45CC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsub f10,f0,f11
	ctx.f10.f64 = ctx.f0.f64 - ctx.f11.f64;
	// lfd f13,12088(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x880e45d0
	if (ctx.cr6.gt) goto loc_880E45D0;
loc_880E45CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880E45D0:
	// stw r11,1424(r3)
	REX_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// bl 0x880e43b8
	ctx.lr = 0x880E45D8;
	sub_880E43B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880E5D48) {
	REX_FUNC_PROLOGUE();
	// lwz r9,768(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// lwz r8,772(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,1396(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r11,1400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// stw r9,772(r3)
	REX_STORE_U32(ctx.r3.u32 + 772, ctx.r9.u32);
	// stw r8,768(r3)
	REX_STORE_U32(ctx.r3.u32 + 768, ctx.r8.u32);
	// lwz r9,64(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,19092(r3)
	REX_STORE_U32(ctx.r3.u32 + 19092, ctx.r6.u32);
	// lwz r10,88(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 88);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,19096(r3)
	REX_STORE_U32(ctx.r3.u32 + 19096, ctx.r5.u32);
	// lwz r10,112(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,19100(r3)
	REX_STORE_U32(ctx.r3.u32 + 19100, ctx.r4.u32);
	// b 0x880e4858
	sub_880E4858(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E6460) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880E6468;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,18412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e6838
	if (!ctx.cr6.eq) goto loc_880E6838;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e6838
	if (!ctx.cr6.eq) goto loc_880E6838;
	// lwz r11,796(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// srawi r27,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 1;
	// srawi r21,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r8.s32 >> 1;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x880e64c4
	if (ctx.cr6.lt) goto loc_880E64C4;
	// lwz r11,800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x880e64d0
	if (!ctx.cr6.lt) goto loc_880E64D0;
loc_880E64C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21156(r31)
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r11.u32);
	// stw r11,21160(r31)
	REX_STORE_U32(ctx.r31.u32 + 21160, ctx.r11.u32);
loc_880E64D0:
	// lwz r11,21156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e64f8
	if (!ctx.cr6.eq) goto loc_880E64F8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5a70
	ctx.lr = 0x880E64F0;
	sub_880E5A70(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E64F8:
	// lwz r11,21160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e6660
	if (ctx.cr6.eq) goto loc_880E6660;
	// lwz r11,28492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e6838
	if (!ctx.cr6.eq) goto loc_880E6838;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x880E651C;
	sub_880F40C0(ctx, base);
	// ld r11,736(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x880e6540
	if (!ctx.cr6.gt) goto loc_880E6540;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x880e4e78
	ctx.lr = 0x880E6540;
	sub_880E4E78(ctx, base);
loc_880E6540:
	// lwz r11,804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,21164(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21164);
	// addi r29,r31,21164
	ctx.r29.s64 = ctx.r31.s64 + 21164;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x880547a0
	ctx.lr = 0x880E6560;
	sub_880547A0(ctx, base);
	// ld r10,736(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r10,5
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 5, ctx.xer);
	// blt cr6,0x880e659c
	if (ctx.cr6.lt) goto loc_880E659C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r9,r31,21204
	ctx.r9.s64 = ctx.r31.s64 + 21204;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r8,r31,21184
	ctx.r8.s64 = ctx.r31.s64 + 21184;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4f48
	ctx.lr = 0x880E659C;
	sub_880E4F48(ctx, base);
loc_880E659C:
	// lwz r10,21176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21176);
	// lwz r9,21196(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21196);
	// lwz r8,21216(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21216);
	// lwz r7,21172(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21172);
	// lwz r6,21192(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21192);
	// lwz r5,21212(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21212);
	// lwz r4,21168(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21168);
	// lwz r3,21188(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21188);
	// lwz r30,21208(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 21208);
	// lwz r28,0(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,21184(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 21184);
	// lwz r26,21204(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 21204);
	// lwz r11,21180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21180);
	// stw r10,21180(r31)
	REX_STORE_U32(ctx.r31.u32 + 21180, ctx.r10.u32);
	// stw r8,21220(r31)
	REX_STORE_U32(ctx.r31.u32 + 21220, ctx.r8.u32);
	// stw r5,21216(r31)
	REX_STORE_U32(ctx.r31.u32 + 21216, ctx.r5.u32);
	// stw r9,21200(r31)
	REX_STORE_U32(ctx.r31.u32 + 21200, ctx.r9.u32);
	// stw r7,21176(r31)
	REX_STORE_U32(ctx.r31.u32 + 21176, ctx.r7.u32);
	// stw r6,21196(r31)
	REX_STORE_U32(ctx.r31.u32 + 21196, ctx.r6.u32);
	// stw r4,21172(r31)
	REX_STORE_U32(ctx.r31.u32 + 21172, ctx.r4.u32);
	// stw r3,21192(r31)
	REX_STORE_U32(ctx.r31.u32 + 21192, ctx.r3.u32);
	// stw r30,21212(r31)
	REX_STORE_U32(ctx.r31.u32 + 21212, ctx.r30.u32);
	// stw r28,21168(r31)
	REX_STORE_U32(ctx.r31.u32 + 21168, ctx.r28.u32);
	// stw r27,21188(r31)
	REX_STORE_U32(ctx.r31.u32 + 21188, ctx.r27.u32);
	// stw r26,21208(r31)
	REX_STORE_U32(ctx.r31.u32 + 21208, ctx.r26.u32);
	// lwz r10,804(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r11,21184(r31)
	REX_STORE_U32(ctx.r31.u32 + 21184, ctx.r11.u32);
	// lwz r9,21240(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21240);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,21204(r31)
	REX_STORE_U32(ctx.r31.u32 + 21204, ctx.r8.u32);
	// lwz r7,21228(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21228);
	// lwz r6,21224(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21224);
	// lwz r5,21232(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21232);
	// lwz r4,21236(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21236);
	// stw r5,21236(r31)
	REX_STORE_U32(ctx.r31.u32 + 21236, ctx.r5.u32);
	// stw r4,21240(r31)
	REX_STORE_U32(ctx.r31.u32 + 21240, ctx.r4.u32);
	// stw r7,21232(r31)
	REX_STORE_U32(ctx.r31.u32 + 21232, ctx.r7.u32);
	// stw r6,21228(r31)
	REX_STORE_U32(ctx.r31.u32 + 21228, ctx.r6.u32);
	// lwz r4,6800(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6800);
	// lwz r3,21256(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21256);
	// stw r9,21224(r31)
	REX_STORE_U32(ctx.r31.u32 + 21224, ctx.r9.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x880547a0
	ctx.lr = 0x880E6658;
	sub_880547A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E6660:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880e66b8
	if (!ctx.cr6.eq) goto loc_880E66B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x880e669c
	if (ctx.cr6.eq) goto loc_880E669C;
	// lwz r11,8104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880e669c
	if (!ctx.cr6.gt) goto loc_880E669C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d90
	ctx.lr = 0x880E6694;
	sub_880E5D90(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E669C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e61c8
	ctx.lr = 0x880E66B0;
	sub_880E61C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E66B8:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// mullw r29,r21,r30
	ctx.r29.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r30.s32);
	// ori r20,r11,32768
	ctx.r20.u64 = ctx.r11.u64 | 32768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050340
	ctx.lr = 0x880E66D0;
	sub_88050340(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880e6838
	if (ctx.cr6.eq) goto loc_880E6838;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x880E66E8;
	sub_88050340(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880e6708
	if (!ctx.cr6.eq) goto loc_880E6708;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050358
	ctx.lr = 0x880E6700;
	sub_88050358(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E6708:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880e6760
	if (!ctx.cr6.gt) goto loc_880E6760;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_880E6728:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6738;
	sub_880547A0(ctx, base);
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6750;
	sub_880547A0(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r27,r27,r30
	ctx.r27.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// bne 0x880e6728
	if (!ctx.cr0.eq) goto loc_880E6728;
loc_880E6760:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x880e67a4
	if (ctx.cr6.eq) goto loc_880E67A4;
	// lwz r11,8104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880e67a4
	if (!ctx.cr6.gt) goto loc_880E67A4;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d90
	ctx.lr = 0x880E678C;
	sub_880E5D90(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d90
	ctx.lr = 0x880E67A0;
	sub_880E5D90(ctx, base);
	// b 0x880e67cc
	goto loc_880E67CC;
loc_880E67A4:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e61c8
	ctx.lr = 0x880E67B8;
	sub_880E61C8(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e61c8
	ctx.lr = 0x880E67CC;
	sub_880E61C8(ctx, base);
loc_880E67CC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880e6820
	if (!ctx.cr6.gt) goto loc_880E6820;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_880E67E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E67F8;
	sub_880547A0(ctx, base);
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6810;
	sub_880547A0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bne 0x880e67e8
	if (!ctx.cr0.eq) goto loc_880E67E8;
loc_880E6820:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88050358
	ctx.lr = 0x880E682C;
	sub_88050358(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050358
	ctx.lr = 0x880E6838;
	sub_88050358(ctx, base);
loc_880E6838:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F04E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880F04E8;
	__savegprlr_14(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r4,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r22,r3
	ctx.r9.u64 = ctx.r22.u64 + ctx.r3.u64;
	// addi r30,r1,-416
	ctx.r30.s64 = ctx.r1.s64 + -416;
	// addi r5,r5,256
	ctx.r5.s64 = ctx.r5.s64 + 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,-424(r1)
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r5.u32);
	// add r21,r4,r8
	ctx.r21.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r20,r4,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r19,r4,r7
	ctx.r19.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r18,r6,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r4,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r4.u64;
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// addi r24,r9,-2
	ctx.r24.s64 = ctx.r9.s64 + -2;
	// subf r16,r30,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r30.u64;
loc_880F0540:
	// add r7,r22,r10
	ctx.r7.u64 = ctx.r22.u64 + ctx.r10.u64;
	// lhzx r8,r16,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r11.u32);
	// add r6,r19,r10
	ctx.r6.u64 = ctx.r19.u64 + ctx.r10.u64;
	// lhzu r30,2(r24)
	ea = 2 + ctx.r24.u32;
	ctx.r30.u64 = REX_LOAD_U16(ea);
	ctx.r24.u32 = ea;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r17,r10
	ctx.r9.u64 = ctx.r17.u64 + ctx.r10.u64;
	// add r5,r21,r10
	ctx.r5.u64 = ctx.r21.u64 + ctx.r10.u64;
	// add r4,r20,r10
	ctx.r4.u64 = ctx.r20.u64 + ctx.r10.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r7,r3
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r18,r10
	ctx.r31.u64 = ctx.r18.u64 + ctx.r10.u64;
	// lhzx r28,r6,r3
	ctx.r28.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// lhzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r29,r4,r3
	ctx.r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// lhzx r31,r31,r3
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r3.u32);
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r25,r6,r9
	ctx.r25.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// add r26,r30,r31
	ctx.r26.u64 = ctx.r30.u64 + ctx.r31.u64;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// add r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// subf r6,r30,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// add r23,r26,r27
	ctx.r23.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// extsh r31,r23
	ctx.r31.s64 = ctx.r23.s16;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r31.u64;
	// rlwinm r23,r9,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r25,r30
	ctx.r15.u64 = ctx.r25.u64 + ctx.r30.u64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r5,r9,r23
	ctx.r5.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r15
	ctx.r9.s64 = ctx.r15.s16;
	// subf r31,r25,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r25.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r30,r29,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r29.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// subf r25,r26,r27
	ctx.r25.u64 = ctx.r27.u64 - ctx.r26.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// extsh r23,r5
	ctx.r23.s64 = ctx.r5.s16;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r6,r28
	ctx.r29.u64 = ctx.r6.u64 + ctx.r28.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r29,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r29.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r8,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r8.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// addi r28,r6,1
	ctx.r28.s64 = ctx.r6.s64 + 1;
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r26,r9,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r25,r30,-3
	ctx.r25.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(-3));
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r29,r6,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r6.u64;
	// subf r4,r26,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r26.u64;
	// subf r6,r31,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r8,r28,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r28.u64;
	// srawi r31,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r27.s32 >> 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// srawi r30,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 3;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// sth r23,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r23.u16);
	// sth r8,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r8.u16);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// sth r4,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r4.u16);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// sth r5,64(r11)
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r5.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// sth r4,80(r11)
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r4.u16);
	// sth r9,96(r11)
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r8,112(r11)
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0540;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-290
	ctx.r10.s64 = ctx.r1.s64 + -290;
	// addi r11,r1,-386
	ctx.r11.s64 = ctx.r1.s64 + -386;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F0790:
	// lhz r8,-14(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
	// lhz r7,-30(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -30);
	// lhz r6,18(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r4,-12(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -12);
	// lhz r3,-28(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -28);
	// lhz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// sth r7,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r6,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// sth r5,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// sth r4,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// sth r3,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r31,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r31.u16);
	// sthu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880f0790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0790;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// addi r9,r1,-400
	ctx.r9.s64 = ctx.r1.s64 + -400;
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r1,-416
	ctx.r7.s64 = ctx.r1.s64 + -416;
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// addi r5,r1,-368
	ctx.r5.s64 = ctx.r1.s64 + -368;
loc_880F07F8:
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// lhzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r31,r11,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r30,r1,-384
	ctx.r30.s64 = ctx.r1.s64 + -384;
	// lhzx r29,r11,r6
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sthx r3,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r31,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u16);
	// sthx r29,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u16);
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f07f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F07F8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-290
	ctx.r10.s64 = ctx.r1.s64 + -290;
	// addi r11,r1,-354
	ctx.r11.s64 = ctx.r1.s64 + -354;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F0838:
	// lhz r8,50(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// lhz r7,34(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// lhz r6,18(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// lhz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lhz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// sth r7,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r6,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// sth r5,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// sth r4,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// sth r3,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r31,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r31.u16);
	// sthu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880f0838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0838;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r1,-320
	ctx.r7.s64 = ctx.r1.s64 + -320;
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// addi r5,r1,-336
	ctx.r5.s64 = ctx.r1.s64 + -336;
loc_880F08A0:
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// lhzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r31,r11,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r30,r1,-352
	ctx.r30.s64 = ctx.r1.s64 + -352;
	// lhzx r29,r11,r6
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sthx r3,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r31,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u16);
	// sthx r29,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u16);
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f08a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F08A0;
	// lhz r9,-366(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -366);
	// li r11,4
	ctx.r11.s64 = 4;
	// lhz r7,-358(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -358);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,-364(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -364);
	// addi r6,r1,-400
	ctx.r6.s64 = ctx.r1.s64 + -400;
	// lhz r3,-356(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -356);
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// lhz r10,-360(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -360);
	// addi r31,r1,-392
	ctx.r31.s64 = ctx.r1.s64 + -392;
	// sth r9,-460(r1)
	REX_STORE_U16(ctx.r1.u32 + -460, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sth r7,-464(r1)
	REX_STORE_U16(ctx.r1.u32 + -464, ctx.r7.u16);
	// sth r5,-462(r1)
	REX_STORE_U16(ctx.r1.u32 + -462, ctx.r5.u16);
	// sth r3,-458(r1)
	REX_STORE_U16(ctx.r1.u32 + -458, ctx.r3.u16);
	// sth r10,-454(r1)
	REX_STORE_U16(ctx.r1.u32 + -454, ctx.r10.u16);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// lhz r16,-352(r1)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -352);
	// lhz r17,-370(r1)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + -370);
	// lhz r18,-378(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + -378);
	// lhz r19,-372(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -372);
	// lhz r9,-368(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -368);
	// lhz r7,-362(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -362);
	// lhz r5,-354(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -354);
	// lhz r3,-336(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -336);
	// lhz r11,-328(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -328);
	// lhz r30,-334(r1)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + -334);
	// lhz r29,-326(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -326);
	// lhz r28,-332(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -332);
	// lhz r27,-324(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + -324);
	// lhz r26,-330(r1)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + -330);
	// lhz r25,-322(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + -322);
	// lhz r14,-460(r1)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + -460);
	// sth r16,-460(r1)
	REX_STORE_U16(ctx.r1.u32 + -460, ctx.r16.u16);
	// lhz r16,-464(r1)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -464);
	// sth r17,-464(r1)
	REX_STORE_U16(ctx.r1.u32 + -464, ctx.r17.u16);
	// lhz r17,-462(r1)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + -462);
	// sth r18,-462(r1)
	REX_STORE_U16(ctx.r1.u32 + -462, ctx.r18.u16);
	// lhz r18,-458(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + -458);
	// sth r19,-458(r1)
	REX_STORE_U16(ctx.r1.u32 + -458, ctx.r19.u16);
	// lhz r19,-344(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -344);
	// lhz r15,-454(r1)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r1.u32 + -454);
	// lhz r24,-384(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + -384);
	// lhz r23,-376(r1)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + -376);
	// lhz r22,-382(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + -382);
	// sth r19,-454(r1)
	REX_STORE_U16(ctx.r1.u32 + -454, ctx.r19.u16);
	// lhz r19,-350(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -350);
	// lhz r21,-374(r1)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r1.u32 + -374);
	// lhz r20,-380(r1)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + -380);
	// stw r8,-432(r1)
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r8.u32);
	// stw r6,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r6.u32);
	// sth r19,-428(r1)
	REX_STORE_U16(ctx.r1.u32 + -428, ctx.r19.u16);
	// lhz r19,-342(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -342);
	// stw r4,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r4.u32);
	// stw r31,-448(r1)
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r31.u32);
	// stw r10,-440(r1)
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r10.u32);
	// sth r9,-224(r1)
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// sth r19,-436(r1)
	REX_STORE_U16(ctx.r1.u32 + -436, ctx.r19.u16);
	// lhz r19,-348(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -348);
	// sth r15,-208(r1)
	REX_STORE_U16(ctx.r1.u32 + -208, ctx.r15.u16);
	// sth r14,-222(r1)
	REX_STORE_U16(ctx.r1.u32 + -222, ctx.r14.u16);
	// sth r16,-206(r1)
	REX_STORE_U16(ctx.r1.u32 + -206, ctx.r16.u16);
	// sth r17,-220(r1)
	REX_STORE_U16(ctx.r1.u32 + -220, ctx.r17.u16);
	// sth r19,-444(r1)
	REX_STORE_U16(ctx.r1.u32 + -444, ctx.r19.u16);
	// lhz r19,-340(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -340);
	// sth r18,-204(r1)
	REX_STORE_U16(ctx.r1.u32 + -204, ctx.r18.u16);
	// sth r7,-218(r1)
	REX_STORE_U16(ctx.r1.u32 + -218, ctx.r7.u16);
	// sth r5,-202(r1)
	REX_STORE_U16(ctx.r1.u32 + -202, ctx.r5.u16);
	// sth r3,-216(r1)
	REX_STORE_U16(ctx.r1.u32 + -216, ctx.r3.u16);
	// sth r19,-452(r1)
	REX_STORE_U16(ctx.r1.u32 + -452, ctx.r19.u16);
	// lhz r19,-346(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -346);
	// sth r11,-200(r1)
	REX_STORE_U16(ctx.r1.u32 + -200, ctx.r11.u16);
	// sth r30,-214(r1)
	REX_STORE_U16(ctx.r1.u32 + -214, ctx.r30.u16);
	// sth r29,-198(r1)
	REX_STORE_U16(ctx.r1.u32 + -198, ctx.r29.u16);
	// sth r28,-212(r1)
	REX_STORE_U16(ctx.r1.u32 + -212, ctx.r28.u16);
	// sth r19,-456(r1)
	REX_STORE_U16(ctx.r1.u32 + -456, ctx.r19.u16);
	// lhz r19,-338(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -338);
	// sth r27,-196(r1)
	REX_STORE_U16(ctx.r1.u32 + -196, ctx.r27.u16);
	// sth r26,-210(r1)
	REX_STORE_U16(ctx.r1.u32 + -210, ctx.r26.u16);
	// sth r25,-194(r1)
	REX_STORE_U16(ctx.r1.u32 + -194, ctx.r25.u16);
	// sth r24,-192(r1)
	REX_STORE_U16(ctx.r1.u32 + -192, ctx.r24.u16);
	// lhz r10,-458(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -458);
	// lhz r9,-462(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -462);
	// lhz r8,-464(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -464);
	// lhz r7,-460(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -460);
	// lhz r11,-452(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -452);
	// sth r10,-172(r1)
	REX_STORE_U16(ctx.r1.u32 + -172, ctx.r10.u16);
	// lhz r10,-456(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -456);
	// lhz r6,-454(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + -454);
	// lhz r5,-428(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -428);
	// lhz r4,-436(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + -436);
	// lhz r3,-444(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -444);
	// sth r9,-186(r1)
	REX_STORE_U16(ctx.r1.u32 + -186, ctx.r9.u16);
	// sth r8,-170(r1)
	REX_STORE_U16(ctx.r1.u32 + -170, ctx.r8.u16);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// sth r7,-184(r1)
	REX_STORE_U16(ctx.r1.u32 + -184, ctx.r7.u16);
	// sth r11,-164(r1)
	REX_STORE_U16(ctx.r1.u32 + -164, ctx.r11.u16);
	// sth r10,-178(r1)
	REX_STORE_U16(ctx.r1.u32 + -178, ctx.r10.u16);
	// lwz r10,-156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r7,-440(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// lwz r11,-432(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// sth r23,-176(r1)
	REX_STORE_U16(ctx.r1.u32 + -176, ctx.r23.u16);
	// sth r22,-190(r1)
	REX_STORE_U16(ctx.r1.u32 + -190, ctx.r22.u16);
	// sth r21,-174(r1)
	REX_STORE_U16(ctx.r1.u32 + -174, ctx.r21.u16);
	// sth r20,-188(r1)
	REX_STORE_U16(ctx.r1.u32 + -188, ctx.r20.u16);
	// sth r6,-168(r1)
	REX_STORE_U16(ctx.r1.u32 + -168, ctx.r6.u16);
	// sth r5,-182(r1)
	REX_STORE_U16(ctx.r1.u32 + -182, ctx.r5.u16);
	// sth r4,-166(r1)
	REX_STORE_U16(ctx.r1.u32 + -166, ctx.r4.u16);
	// sth r3,-180(r1)
	REX_STORE_U16(ctx.r1.u32 + -180, ctx.r3.u16);
	// sth r19,-162(r1)
	REX_STORE_U16(ctx.r1.u32 + -162, ctx.r19.u16);
loc_880F0A8C:
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// sthx r6,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u16);
	// sthx r5,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0A8C;
	// li r10,8
	ctx.r10.s64 = 8;
	// lhz r20,-304(r1)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + -304);
	// lhz r19,-296(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -296);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r18,-302(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + -302);
	// addi r22,r1,-272
	ctx.r22.s64 = ctx.r1.s64 + -272;
	// lhz r17,-294(r1)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + -294);
	// addi r21,r1,-400
	ctx.r21.s64 = ctx.r1.s64 + -400;
	// lhz r16,-300(r1)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lhz r15,-292(r1)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r1.u32 + -292);
	// lhz r10,-298(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -298);
	// lhz r14,-290(r1)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + -290);
	// lhz r9,-416(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -416);
	// lhz r8,-408(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -408);
	// lhz r7,-414(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -414);
	// lhz r6,-406(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + -406);
	// lhz r5,-412(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -412);
	// lhz r4,-404(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + -404);
	// lhz r3,-410(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -410);
	// lhz r31,-402(r1)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + -402);
	// lhz r30,-320(r1)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + -320);
	// lhz r29,-312(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -312);
	// lhz r28,-318(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -318);
	// lhz r27,-310(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + -310);
	// lhz r26,-316(r1)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + -316);
	// lhz r25,-308(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + -308);
	// lhz r24,-314(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + -314);
	// lhz r23,-306(r1)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + -306);
	// sth r9,-256(r1)
	REX_STORE_U16(ctx.r1.u32 + -256, ctx.r9.u16);
	// sth r8,-240(r1)
	REX_STORE_U16(ctx.r1.u32 + -240, ctx.r8.u16);
	// sth r7,-254(r1)
	REX_STORE_U16(ctx.r1.u32 + -254, ctx.r7.u16);
	// sth r6,-238(r1)
	REX_STORE_U16(ctx.r1.u32 + -238, ctx.r6.u16);
	// sth r5,-252(r1)
	REX_STORE_U16(ctx.r1.u32 + -252, ctx.r5.u16);
	// sth r4,-236(r1)
	REX_STORE_U16(ctx.r1.u32 + -236, ctx.r4.u16);
	// sth r3,-250(r1)
	REX_STORE_U16(ctx.r1.u32 + -250, ctx.r3.u16);
	// sth r31,-234(r1)
	REX_STORE_U16(ctx.r1.u32 + -234, ctx.r31.u16);
	// sth r30,-248(r1)
	REX_STORE_U16(ctx.r1.u32 + -248, ctx.r30.u16);
	// sth r29,-232(r1)
	REX_STORE_U16(ctx.r1.u32 + -232, ctx.r29.u16);
	// sth r28,-246(r1)
	REX_STORE_U16(ctx.r1.u32 + -246, ctx.r28.u16);
	// sth r27,-230(r1)
	REX_STORE_U16(ctx.r1.u32 + -230, ctx.r27.u16);
	// sth r26,-244(r1)
	REX_STORE_U16(ctx.r1.u32 + -244, ctx.r26.u16);
	// sth r25,-228(r1)
	REX_STORE_U16(ctx.r1.u32 + -228, ctx.r25.u16);
	// sth r24,-242(r1)
	REX_STORE_U16(ctx.r1.u32 + -242, ctx.r24.u16);
	// sth r23,-226(r1)
	REX_STORE_U16(ctx.r1.u32 + -226, ctx.r23.u16);
	// sth r20,-280(r1)
	REX_STORE_U16(ctx.r1.u32 + -280, ctx.r20.u16);
	// sth r19,-264(r1)
	REX_STORE_U16(ctx.r1.u32 + -264, ctx.r19.u16);
	// sth r18,-278(r1)
	REX_STORE_U16(ctx.r1.u32 + -278, ctx.r18.u16);
	// sth r17,-262(r1)
	REX_STORE_U16(ctx.r1.u32 + -262, ctx.r17.u16);
	// sth r16,-276(r1)
	REX_STORE_U16(ctx.r1.u32 + -276, ctx.r16.u16);
	// sth r15,-260(r1)
	REX_STORE_U16(ctx.r1.u32 + -260, ctx.r15.u16);
	// sth r10,-274(r1)
	REX_STORE_U16(ctx.r1.u32 + -274, ctx.r10.u16);
	// sth r14,-258(r1)
	REX_STORE_U16(ctx.r1.u32 + -258, ctx.r14.u16);
loc_880F0B78:
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// lhzx r20,r11,r22
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lhzx r19,r11,r10
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r1,-416
	ctx.r10.s64 = ctx.r1.s64 + -416;
	// sthx r20,r11,r21
	REX_STORE_U16(ctx.r11.u32 + ctx.r21.u32, ctx.r20.u16);
	// sthx r19,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0B78;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// sth r31,-362(r1)
	REX_STORE_U16(ctx.r1.u32 + -362, ctx.r31.u16);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r30,-376(r1)
	REX_STORE_U16(ctx.r1.u32 + -376, ctx.r30.u16);
	// addi r10,r10,17680
	ctx.r10.s64 = ctx.r10.s64 + 17680;
	// sth r9,-384(r1)
	REX_STORE_U16(ctx.r1.u32 + -384, ctx.r9.u16);
	// sth r8,-368(r1)
	REX_STORE_U16(ctx.r1.u32 + -368, ctx.r8.u16);
	// addi r22,r1,-416
	ctx.r22.s64 = ctx.r1.s64 + -416;
	// lwz r8,-424(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r31,r10,80
	ctx.r31.s64 = ctx.r10.s64 + 80;
	// sth r3,-378(r1)
	REX_STORE_U16(ctx.r1.u32 + -378, ctx.r3.u16);
	// addi r30,r10,64
	ctx.r30.s64 = ctx.r10.s64 + 64;
	// sth r6,-366(r1)
	REX_STORE_U16(ctx.r1.u32 + -366, ctx.r6.u16);
	// sth r7,-382(r1)
	REX_STORE_U16(ctx.r1.u32 + -382, ctx.r7.u16);
	// subf r17,r8,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r20,r1,-400
	ctx.r20.s64 = ctx.r1.s64 + -400;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// sth r4,-364(r1)
	REX_STORE_U16(ctx.r1.u32 + -364, ctx.r4.u16);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// sth r5,-380(r1)
	REX_STORE_U16(ctx.r1.u32 + -380, ctx.r5.u16);
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// sth r29,-360(r1)
	REX_STORE_U16(ctx.r1.u32 + -360, ctx.r29.u16);
	// subf r31,r8,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r8.u64;
	// sth r27,-358(r1)
	REX_STORE_U16(ctx.r1.u32 + -358, ctx.r27.u16);
	// subf r30,r8,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r8.u64;
	// sth r28,-374(r1)
	REX_STORE_U16(ctx.r1.u32 + -374, ctx.r28.u16);
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// sth r25,-356(r1)
	REX_STORE_U16(ctx.r1.u32 + -356, ctx.r25.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r26,-372(r1)
	REX_STORE_U16(ctx.r1.u32 + -372, ctx.r26.u16);
	// subf r21,r8,r22
	ctx.r21.u64 = ctx.r22.u64 - ctx.r8.u64;
	// sth r23,-354(r1)
	REX_STORE_U16(ctx.r1.u32 + -354, ctx.r23.u16);
	// subf r20,r8,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r8.u64;
	// sth r24,-370(r1)
	REX_STORE_U16(ctx.r1.u32 + -370, ctx.r24.u16);
	// subf r19,r8,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stw r3,-448(r1)
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r3.u32);
	// subf r18,r8,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r31,-440(r1)
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r31.u32);
	// stw r30,-432(r1)
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r30.u32);
	// stw r17,-424(r1)
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r17.u32);
	// b 0x880f0c54
	goto loc_880F0C54;
loc_880F0C44:
	// lwz r17,-424(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// lwz r30,-432(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// lwz r31,-440(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// lwz r3,-448(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
loc_880F0C54:
	// addi r8,r1,-416
	ctx.r8.s64 = ctx.r1.s64 + -416;
	// lhzx r16,r3,r11
	ctx.r16.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// addi r7,r1,-400
	ctx.r7.s64 = ctx.r1.s64 + -400;
	// lhzx r6,r20,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// lhzx r5,r21,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r15,r31,r11
	ctx.r15.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r14,r30,r11
	ctx.r14.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// lhzx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhzx r30,r19,r11
	ctx.r30.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// lhzx r29,r18,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhzx r17,r17,r11
	ctx.r17.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r11.u32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r26,r30
	ctx.r26.s64 = ctx.r30.s16;
	// lhz r30,0(r8)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r25,16(r8)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// subf r24,r31,r3
	ctx.r24.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lhz r28,-16(r8)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r8.u32 + -16);
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lhz r8,32(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 32);
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r23,r3,r8
	ctx.r23.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r6,r8,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r8.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// subf r8,r30,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// extsh r24,r29
	ctx.r24.s64 = ctx.r29.s16;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r31,r26,r27
	ctx.r31.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// extsh r29,r23
	ctx.r29.s64 = ctx.r23.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// add r30,r24,r25
	ctx.r30.u64 = ctx.r24.u64 + ctx.r25.u64;
	// srawi r4,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r31.s32 >> 3;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// srawi r3,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 3;
	// subf r29,r28,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r28.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subf r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r23,r27,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r22,r25,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r5,r4,r23
	ctx.r5.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r4,r3,r22
	ctx.r4.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// add r31,r26,r8
	ctx.r31.u64 = ctx.r26.u64 + ctx.r8.u64;
	// lhzx r26,r9,r10
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r24,r7
	ctx.r29.u64 = ctx.r24.u64 + ctx.r7.u64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 3;
	// srawi r29,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 3;
	// sth r6,-456(r1)
	REX_STORE_U16(ctx.r1.u32 + -456, ctx.r6.u16);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r25,r16
	ctx.r25.s64 = ctx.r16.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r16,r26
	ctx.r16.s64 = ctx.r26.s16;
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r28,r25,r3
	ctx.r28.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r3.s32);
	// extsh r5,r15
	ctx.r5.s64 = ctx.r15.s16;
	// add r29,r7,r27
	ctx.r29.u64 = ctx.r7.u64 + ctx.r27.u64;
	// mullw r24,r16,r31
	ctx.r24.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r31.s32);
	// extsh r4,r14
	ctx.r4.s64 = ctx.r14.s16;
	// mullw r15,r25,r30
	ctx.r15.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r27,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 16;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// srawi r25,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 16;
	// srawi r24,r15,16
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r15.s32 >> 16;
	// srawi r15,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r8.s32 >> 2;
	// extsh r6,r23
	ctx.r6.s64 = ctx.r23.s16;
	// srawi r29,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 2;
	// addi r14,r10,16
	ctx.r14.s64 = ctx.r10.s64 + 16;
	// extsh r8,r22
	ctx.r8.s64 = ctx.r22.s16;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r22,r9,r14
	ctx.r22.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r14.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// extsh r28,r22
	ctx.r28.s64 = ctx.r22.s16;
	// lhz r22,-456(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + -456);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// srawi r26,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 2;
	// mullw r29,r28,r6
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// srawi r5,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 16;
	// subf r7,r15,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r15.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add r7,r27,r3
	ctx.r7.u64 = ctx.r27.u64 + ctx.r3.u64;
	// sth r6,-16(r11)
	REX_STORE_U16(ctx.r11.u32 + -16, ctx.r6.u16);
	// add r3,r25,r31
	ctx.r3.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// add r31,r24,r30
	ctx.r31.u64 = ctx.r24.u64 + ctx.r30.u64;
	// sth r3,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// extsh r30,r17
	ctx.r30.s64 = ctx.r17.s16;
	// sth r31,64(r11)
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r31.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mullw r4,r30,r8
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// extsh r5,r22
	ctx.r5.s64 = ctx.r22.s16;
	// mullw r3,r28,r7
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r31,r30,r6
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// mullw r30,r16,r5
	ctx.r30.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r5.s32);
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r4,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r4.u16);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r3,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r3.u16);
	// sth r8,80(r11)
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sth r7,-32(r11)
	REX_STORE_U16(ctx.r11.u32 + -32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f0c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0C44;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r20,36(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r23,r20,32
	ctx.r23.s64 = ctx.r20.s64 + 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F0F14:
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r19,r7,96
	ctx.r19.s64 = ctx.r7.s64 + 96;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// addi r29,r10,128
	ctx.r29.s64 = ctx.r10.s64 + 128;
	// addi r28,r8,64
	ctx.r28.s64 = ctx.r8.s64 + 64;
	// lhz r7,-32(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -32);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r5,80(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 80);
	// addi r21,r10,128
	ctx.r21.s64 = ctx.r10.s64 + 128;
	// lhz r3,48(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 48);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r31,16(r9)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lhz r27,64(r9)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + 64);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// lhz r30,-16(r9)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + -16);
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// lhz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lhzx r18,r11,r29
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r22,r11,r28
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// add r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r26,r3,r9
	ctx.r26.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r25,r4,r5
	ctx.r25.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// extsh r28,r26
	ctx.r28.s64 = ctx.r26.s16;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// extsh r26,r24
	ctx.r26.s64 = ctx.r24.s16;
	// add r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r24,r26,r27
	ctx.r24.u64 = ctx.r26.u64 + ctx.r27.u64;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// extsh r22,r22
	ctx.r22.s64 = ctx.r22.s16;
	// add r17,r24,r25
	ctx.r17.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r25,r24,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r24.u64;
	// extsh r24,r17
	ctx.r24.s64 = ctx.r17.s16;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r18,r18
	ctx.r18.s64 = ctx.r18.s16;
	// add r22,r22,r24
	ctx.r22.u64 = ctx.r22.u64 + ctx.r24.u64;
	// subf r30,r30,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r17,r18,r25
	ctx.r17.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r25.s32);
	// mullw r4,r22,r18
	ctx.r4.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r18.s32);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// srawi r31,r17,16
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r17.s32 >> 16;
	// srawi r30,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 16;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r4,r22
	ctx.r4.s64 = ctx.r22.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// subf r6,r3,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r3,r29,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r29.u64;
	// subf r9,r26,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r26.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r27,r4,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// sth r4,32(r8)
	REX_STORE_U16(ctx.r8.u32 + 32, ctx.r4.u16);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// sthx r31,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r31.u16);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r26,r9,112
	ctx.r26.s64 = ctx.r9.s64 + 112;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r24,r21,32
	ctx.r24.s64 = ctx.r21.s64 + 32;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r6,128
	ctx.r22.s64 = ctx.r6.s64 + 128;
	// addi r21,r5,160
	ctx.r21.s64 = ctx.r5.s64 + 160;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r17,r5,192
	ctx.r17.s64 = ctx.r5.s64 + 192;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// addi r18,r6,176
	ctx.r18.s64 = ctx.r6.s64 + 176;
	// addi r16,r5,144
	ctx.r16.s64 = ctx.r5.s64 + 144;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// lhzx r31,r11,r26
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// lhzx r30,r11,r19
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subf r30,r25,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r25.u64;
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// lhzx r27,r11,r24
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// subf r7,r7,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r7.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r30,r31,r9
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r31,r7
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// srawi r31,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 16;
	// srawi r30,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 16;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// sth r9,64(r8)
	REX_STORE_U16(ctx.r8.u32 + 64, ctx.r9.u16);
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// sthx r7,r11,r23
	REX_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r7.u16);
	// addi r28,r10,128
	ctx.r28.s64 = ctx.r10.s64 + 128;
	// lhzx r7,r11,r22
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// addi r31,r10,128
	ctx.r31.s64 = ctx.r10.s64 + 128;
	// addi r29,r28,208
	ctx.r29.s64 = ctx.r28.s64 + 208;
	// lhzx r28,r11,r21
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// lhzx r27,r11,r18
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// addi r30,r10,128
	ctx.r30.s64 = ctx.r10.s64 + 128;
	// lhzx r26,r11,r17
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r17.u32);
	// lhzx r9,r11,r16
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r16.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r25,r9,r6
	ctx.r25.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lhzx r24,r11,r29
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// srawi r7,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 2;
	// add r29,r9,r5
	ctx.r29.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r9,r7,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// add r28,r9,r5
	ctx.r28.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// subf r6,r29,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r27,r9,r3
	ctx.r27.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// srawi r5,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 2;
	// subf r29,r3,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r7,r5,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r5.u64;
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// subf r3,r3,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lhzx r31,r11,r7
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// lhzx r30,r11,r6
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// addi r28,r9,240
	ctx.r28.s64 = ctx.r9.s64 + 240;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// mullw r31,r31,r5
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// sth r5,80(r8)
	REX_STORE_U16(ctx.r8.u32 + 80, ctx.r5.u16);
	// add r9,r29,r4
	ctx.r9.u64 = ctx.r29.u64 + ctx.r4.u64;
	// sth r3,-16(r8)
	REX_STORE_U16(ctx.r8.u32 + -16, ctx.r3.u16);
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// lhzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// addi r7,r5,224
	ctx.r7.s64 = ctx.r5.s64 + 224;
	// lhzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r31,r5
	ctx.r31.s64 = ctx.r5.s16;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lhzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// add r5,r25,r9
	ctx.r5.u64 = ctx.r25.u64 + ctx.r9.u64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r6,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 2;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r6,r3,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r3.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mullw r5,r31,r9
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// srawi r5,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 16;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r7,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r7.u16);
	// sth r6,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r6.u16);
	// bdnz 0x880f0f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F0F14;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810D030) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r3,255
	ctx.r3.s64 = 255;
loc_8810D048:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8810D05C:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhz r10,-4(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -4);
	// lbz r7,-2(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x8810d08c
	if (!ctx.cr6.gt) goto loc_8810D08C;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_8810D08C:
	// stb r10,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r10.u8);
	// lbzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lhz r10,-2(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810d0bc
	if (!ctx.cr6.gt) goto loc_8810D0BC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8810D0BC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stbx r8,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u8);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810d0f0
	if (!ctx.cr6.gt) goto loc_8810D0F0;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8810D0F0:
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stbx r10,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// lhz r10,2(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810d124
	if (!ctx.cr6.gt) goto loc_8810D124;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8810D124:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8810d05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810D05C;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// bne 0x8810d048
	if (!ctx.cr0.eq) goto loc_8810D048;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8810E9E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8810E9E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// lwz r10,20080(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20080);
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
	// bgt cr6,0x8810ea60
	if (ctx.cr6.gt) goto loc_8810EA60;
	// lwz r11,20088(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20088);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8810eabc
	if (!ctx.cr6.gt) goto loc_8810EABC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,20124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20124);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bgt cr6,0x8810eb18
	if (ctx.cr6.gt) goto loc_8810EB18;
	// lwz r9,20120(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20120);
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
	ctx.lr = 0x8810EA58;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8810eab0
	goto loc_8810EAB0;
loc_8810EA60:
	// lwz r11,20084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20084);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8810eb10
	if (ctx.cr6.gt) goto loc_8810EB10;
	// lwz r11,20092(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20092);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8810eb10
	if (ctx.cr6.gt) goto loc_8810EB10;
	// lwz r10,20120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20120);
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lwz r9,20124(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20124);
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
	ctx.lr = 0x8810EAAC;
	sub_880E6960(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_8810EAB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EABC;
	sub_880E6960(ctx, base);
loc_8810EABC:
	// lwz r11,20096(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20096);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810EAF0;
	sub_880E6960(ctx, base);
	// neg r7,r27
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// orc r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 | ~ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8810EB08;
	sub_880E6960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8810EB10:
	// lwz r10,20124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8810EB18:
	// lwz r11,20120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20120);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810EB30;
	sub_880E6960(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EB40;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EB50;
	sub_880E6960(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810eb6c
	if (ctx.cr6.eq) goto loc_8810EB6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810e8a0
	ctx.lr = 0x8810EB64;
	sub_8810E8A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8810EB6C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,1552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1552);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EB7C;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x8810eb94
	if (ctx.cr6.lt) goto loc_8810EB94;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8810EB94:
	// bl 0x880e6960
	ctx.lr = 0x8810EB98;
	sub_880E6960(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1548);
	// bl 0x880e6960
	ctx.lr = 0x8810EBA8;
	sub_880E6960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111E28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88111E30;
	__savegprlr_22(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r7,96(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,120(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,132(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r10,r4
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// divw r30,r10,r7
	ctx.r30.u64 = uint32_t((ctx.r7.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r10.s32 / ctx.r7.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r29,r9,r7
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rotlwi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// rlwinm r27,r31,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// mullw r11,r27,r4
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addi r25,r9,-1
	ctx.r25.s64 = ctx.r9.s64 + -1;
	// andc r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// twlgei r28,-1
	if (ctx.r28.s32 == -1 || ctx.r28.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r26,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r26.s64 = temp.s64;
	// divw r28,r29,r31
	ctx.r28.u64 = uint32_t((ctx.r31.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r29.s32 / ctx.r31.s32 : 0);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// and r7,r25,r30
	ctx.r7.u64 = ctx.r25.u64 & ctx.r30.u64;
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bge cr6,0x88112000
	if (!ctx.cr6.lt) goto loc_88112000;
	// subf r25,r4,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_88111EC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88111f98
	if (!ctx.cr6.gt) goto loc_88111F98;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// addi r29,r9,6
	ctx.r29.s64 = ctx.r9.s64 + 6;
loc_88111EE8:
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// clrlwi r3,r10,25
	ctx.r3.u64 = ctx.r10.u32 & 0x7F;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subfic r4,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r3.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r24,r10,25
	ctx.r24.u64 = ctx.r10.u32 & 0x7F;
	// lbzx r23,r6,r8
	ctx.r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// clrlwi r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// mullw r4,r23,r4
	ctx.r4.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 7;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// stb r4,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// subfic r4,r24,128
	ctx.xer.ca = ctx.r24.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r24.u64;
	// rlwinm r3,r8,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r23,r8,0,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r24.s32);
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 7;
	// subfic r8,r22,256
	ctx.xer.ca = ctx.r22.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r22.u64;
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbzx r3,r31,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// lbzx r4,r23,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r9.u32);
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r22
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// lbzx r4,r29,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r23.u32);
	// lbzx r3,r30,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r22
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r22.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88111ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111EE8;
loc_88111F98:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88111ff4
	if (!ctx.cr6.lt) goto loc_88111FF4;
	// subf r8,r28,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r28.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88111FAC:
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r3,r8,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,1(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lbz r4,1(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbzx r8,r3,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// lbzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// stbu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88111fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111FAC;
loc_88111FF4:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bne 0x88111ec4
	if (!ctx.cr0.eq) goto loc_88111EC4;
loc_88112000:
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118AE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88118AF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118bec
	if (ctx.cr6.eq) goto loc_88118BEC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x880cb730
	ctx.lr = 0x88118B20;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88118bf4
	if (ctx.cr6.lt) goto loc_88118BF4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88118b68
	if (ctx.cr6.eq) goto loc_88118B68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88118b68
	if (ctx.cr6.eq) goto loc_88118B68;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88118bec
	if (!ctx.cr6.eq) goto loc_88118BEC;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88118b78
	if (ctx.cr6.eq) goto loc_88118B78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118b8c
	if (ctx.cr6.eq) goto loc_88118B8C;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x88118b8c
	goto loc_88118B8C;
loc_88118B68:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,188
	ctx.r3.u64 = ctx.r3.u64 | 188;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88118B78:
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x88118b8c
	if (!ctx.cr6.lt) goto loc_88118B8C;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_88118B8C:
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x88118bac
	if (!ctx.cr6.gt) goto loc_88118BAC;
loc_88118B9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88118BAC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x88118b9c
	if (ctx.cr6.gt) goto loc_88118B9C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r9,0(r28)
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.r9.u64);
	// stw r30,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88118BEC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,187
	ctx.r3.u64 = ctx.r3.u64 | 187;
loc_88118BF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811B2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8811B2E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r26,r4,-24
	ctx.r26.s64 = ctx.r4.s64 + -24;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8811B320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// cmplwi cr6,r26,24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 24, ctx.xer);
	// bge cr6,0x8811b348
	if (!ctx.cr6.lt) goto loc_8811B348;
loc_8811B334:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8811B348:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811B360;
	sub_881196F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811B384;
	sub_88119390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811B3A8;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811B3CC;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// li r30,24
	ctx.r30.s64 = 24;
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// lwz r24,104(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r24,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r24.u32);
	// bne cr6,0x8811b44c
	if (!ctx.cr6.eq) goto loc_8811B44C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// addic. r30,r10,-24
	ctx.xer.ca = ctx.r10.u32 > 23;
	ctx.r30.s64 = ctx.r10.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811b7c8
	if (ctx.cr0.eq) goto loc_8811B7C8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811B428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// ld r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r25)
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8811B44C:
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8811b488
	if (ctx.cr6.eq) goto loc_8811B488;
	// addi r30,r5,24
	ctx.r30.s64 = ctx.r5.s64 + 24;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811B47C;
	sub_881198A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
loc_8811B488:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B4C0;
	sub_880CB2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8811B4DC;
	sub_88052D90(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x8811b774
	if (ctx.cr6.eq) goto loc_8811B774;
loc_8811B500:
	// addi r30,r30,18
	ctx.r30.s64 = ctx.r30.s64 + 18;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119528
	ctx.lr = 0x8811B524;
	sub_88119528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bl 0x88119528
	ctx.lr = 0x8811B554;
	sub_88119528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x88119210
	ctx.lr = 0x8811B584;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x8811b760
	if (ctx.cr6.lt) goto loc_8811B760;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811B5D0;
	sub_88119390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x88119390
	ctx.lr = 0x8811B600;
	sub_88119390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x88119390
	ctx.lr = 0x8811B630;
	sub_88119390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811b718
	if (ctx.cr6.eq) goto loc_8811B718;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r30
	ctx.r28.u64 = ctx.r5.u64 + ctx.r30.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B68C;
	sub_880CB2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x8811B6B0;
	sub_88052D90(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811b714
	if (ctx.cr6.eq) goto loc_8811B714;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8811B6C8:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811B6E0;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// sthx r10,r9,r29
	REX_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u16);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8811b6c8
	if (ctx.cr6.lt) goto loc_8811B6C8;
loc_8811B714:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8811B718:
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addic. r5,r7,-12
	ctx.xer.ca = ctx.r7.u32 > 11;
	ctx.r5.s64 = ctx.r7.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8811b760
	if (ctx.cr0.eq) goto loc_8811B760;
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811b334
	if (ctx.cr6.gt) goto loc_8811B334;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811B750;
	sub_881198A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8811B760:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x8811b500
	if (ctx.cr6.lt) goto loc_8811B500;
loc_8811B774:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,52(r11)
	REX_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r7.u64;
	// subf. r30,r30,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811b7c8
	if (ctx.cr0.eq) goto loc_8811B7C8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811B7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b7c8
	if (ctx.cr6.lt) goto loc_8811B7C8;
	// ld r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
loc_8811B7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124298) {
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
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88123a90
	ctx.lr = 0x881242B8;
	sub_88123A90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88124308
	if (ctx.cr6.lt) goto loc_88124308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88123ec0
	ctx.lr = 0x881242C8;
	sub_88123EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88124308
	if (ctx.cr6.lt) goto loc_88124308;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// std r11,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// std r11,128(r31)
	REX_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// std r11,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_88124308:
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

DEFINE_REX_FUNC(sub_88125030) {
	REX_FUNC_PROLOGUE();
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812507c
	if (!ctx.cr6.eq) goto loc_8812507C;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_8812507C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x881250c8
	if (!ctx.cr6.lt) goto loc_881250C8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881250a8
	if (!ctx.cr6.eq) goto loc_881250A8;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r4,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
loc_881250A8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812507c
	if (!ctx.cr6.eq) goto loc_8812507C;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_881250C8:
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881250e4
	if (ctx.cr6.eq) goto loc_881250E4;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_881250E4:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88126188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88126190;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88126208
	if (ctx.cr6.eq) goto loc_88126208;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126208
	if (ctx.cr6.eq) goto loc_88126208;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88126200
	if (ctx.cr6.eq) goto loc_88126200;
	// li r29,0
	ctx.r29.s64 = 0;
loc_881261BC:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_881261C8:
	// mulli r11,r31,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bl 0x88141198
	ctx.lr = 0x881261D8;
	sub_88141198(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x881261c8
	if (ctx.cr6.lt) goto loc_881261C8;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881261bc
	if (ctx.cr6.lt) goto loc_881261BC;
loc_88126200:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88125e70
	ctx.lr = 0x88126208;
	sub_88125E70(ctx, base);
loc_88126208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127F98) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88127FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,110(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 110);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfsx f8,r9,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88129828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88129830;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,244(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6708(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fdivs f29,f0,f12
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// ble cr6,0x88129918
	if (!ctx.cr6.gt) goto loc_88129918;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f30,6728(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,23960(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 23960);
	ctx.f31.f64 = double(temp.f32);
loc_88129890:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 252);
	// slw r10,r27,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// divw r31,r11,r10
	ctx.r31.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// extsw r9,r31
	ctx.r9.s64 = ctx.r31.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// andc r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmadds f1,f11,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f31.f64, ctx.f30.f64)));
	// bl 0x881ef210
	ctx.lr = 0x881298D0;
	sub_881EF210(ctx, base);
	// fctiwz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x881298e8
	if (!ctx.cr6.lt) goto loc_881298E8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_881298E8:
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881298fc
	if (ctx.cr6.lt) goto loc_881298FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881298FC:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r11,r28,r10
	REX_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,244(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 244);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88129890
	if (ctx.cr6.lt) goto loc_88129890;
loc_88129918:
	// lwz r11,352(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,312(r29)
	REX_STORE_U32(ctx.r29.u32 + 312, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BE50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812be94
	if (ctx.cr6.eq) goto loc_8812BE94;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,704(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812be8c
	if (ctx.cr6.eq) goto loc_8812BE8C;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8812be94
	if (ctx.cr6.lt) goto loc_8812BE94;
loc_8812BE8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8812BE94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8812C990) {
	REX_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lhz r11,34(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r6,r4,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8812C9B0:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r9,424(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r7,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// sth r7,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r7.u16);
	// lhz r4,34(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8812c9b0
	if (ctx.cr6.lt) goto loc_8812C9B0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8812D038) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8812D040;
	__savegprlr_14(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r5,25
	ctx.r5.s64 = 25;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8812d054
	if (!ctx.cr6.gt) goto loc_8812D054;
	// li r5,28
	ctx.r5.s64 = 28;
loc_8812D054:
	// stw r5,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8812d06c
	if (ctx.cr6.gt) goto loc_8812D06C;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r10,r10,-13840
	ctx.r10.s64 = ctx.r10.s64 + -13840;
	// b 0x8812d074
	goto loc_8812D074;
loc_8812D06C:
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r10,r10,9600
	ctx.r10.s64 = ctx.r10.s64 + 9600;
loc_8812D074:
	// stw r10,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f0,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6708(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bne cr6,0x8812d144
	if (!ctx.cr6.eq) goto loc_8812D144;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ble cr6,0x8812d2f0
	if (!ctx.cr6.gt) goto loc_8812D2F0;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lwz r10,-240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f0,6728(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
loc_8812D0CC:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r4,r8,r7
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r8,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f13,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f9,f10,f11,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64)));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f8.u64);
	// lwz r4,-220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8812d128
	if (ctx.cr6.gt) goto loc_8812D128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8812d0cc
	if (ctx.cr6.lt) goto loc_8812D0CC;
	// b 0x8812d2f0
	goto loc_8812D2F0;
loc_8812D128:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,340(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x8812d2f0
	goto loc_8812D2F0;
loc_8812D144:
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r8.u32);
	// ble cr6,0x8812d2f0
	if (!ctx.cr6.gt) goto loc_8812D2F0;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r26,17
	ctx.r26.s64 = 17;
	// li r31,5
	ctx.r31.s64 = 5;
	// li r30,12
	ctx.r30.s64 = 12;
	// lfs f12,12444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12444);
	ctx.f12.f64 = double(temp.f32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lfs f13,12180(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// li r4,34
	ctx.r4.s64 = 34;
	// li r14,46
	ctx.r14.s64 = 46;
	// li r15,63
	ctx.r15.s64 = 63;
	// li r16,86
	ctx.r16.s64 = 86;
	// li r28,102
	ctx.r28.s64 = 102;
	// li r29,123
	ctx.r29.s64 = 123;
	// li r17,149
	ctx.r17.s64 = 149;
	// li r18,179
	ctx.r18.s64 = 179;
	// li r19,221
	ctx.r19.s64 = 221;
	// li r21,512
	ctx.r21.s64 = 512;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r24,11
	ctx.r24.s64 = 11;
	// li r25,37
	ctx.r25.s64 = 37;
	// li r20,74
	ctx.r20.s64 = 74;
	// li r27,256
	ctx.r27.s64 = 256;
	// li r22,128
	ctx.r22.s64 = 128;
loc_8812D1C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r7,252(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lwz r10,-236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// andc r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// divw r6,r7,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bgt cr6,0x8812d718
	if (ctx.cr6.gt) goto loc_8812D718;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// ori r7,r8,44100
	ctx.r7.u64 = ctx.r8.u64 | 44100;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812d45c
	if (ctx.cr6.lt) goto loc_8812D45C;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bne cr6,0x8812d328
	if (!ctx.cr6.eq) goto loc_8812D328;
	// lwz r8,340(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r10,279
	ctx.r10.s64 = 279;
	// std r3,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// li r3,360
	ctx.r3.s64 = 360;
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stwx r26,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r26.u32);
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// ld r3,-208(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r14.u32);
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r15,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r15.u32);
	// stw r16,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r16.u32);
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r17,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r17.u32);
	// stw r18,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r18.u32);
	// stw r19,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r19.u32);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r21,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r21.u32);
loc_8812D280:
	// lwz r7,340(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812d2c4
	if (!ctx.cr6.gt) goto loc_8812D2C4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8812D298:
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwz r7,340(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8812d298
	if (ctx.cr6.lt) goto loc_8812D298;
loc_8812D2C4:
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,244(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stw r10,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// stw r6,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r6.u32);
	// blt cr6,0x8812d1c0
	if (ctx.cr6.lt) goto loc_8812D1C0;
loc_8812D2F0:
	// lwz r10,344(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,340(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r8,244(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,308(r3)
	REX_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r7.u32);
	// ble cr6,0x8812d324
	if (!ctx.cr6.gt) goto loc_8812D324;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_8812D318:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812d318
	if (ctx.cr6.lt) goto loc_8812D318;
loc_8812D324:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8812D328:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x8812d3d0
	if (!ctx.cr6.eq) goto loc_8812D3D0;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,23
	ctx.r8.s64 = 23;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// li r5,51
	ctx.r5.s64 = 51;
	// std r4,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r4.u64);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r3,89
	ctx.r3.s64 = 89;
	// std r9,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r9.u64);
	// li r7,31
	ctx.r7.s64 = 31;
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// li r10,110
	ctx.r10.s64 = 110;
	// std r31,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// li r9,139
	ctx.r9.s64 = 139;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r6,43
	ctx.r6.s64 = 43;
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r31,180
	ctx.r31.s64 = 180;
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// stw r3,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r31,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r20,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r20.u32);
	// ld r5,-208(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// ld r4,-200(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-184(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// stw r27,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// ld r31,-176(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D3D0:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x8812d718
	if (!ctx.cr6.eq) goto loc_8812D718;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,9
	ctx.r7.s64 = 9;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,26
	ctx.r4.s64 = 26;
	// stwx r30,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r3,45
	ctx.r3.s64 = 45;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// li r8,70
	ctx.r8.s64 = 70;
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r6,-216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r25,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r22,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r22.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D45C:
	// cmpwi cr6,r10,32000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32000, ctx.xer);
	// blt cr6,0x8812d644
	if (ctx.cr6.lt) goto loc_8812D644;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bne cr6,0x8812d518
	if (!ctx.cr6.eq) goto loc_8812D518;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r8,16
	ctx.r8.s64 = 16;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r7,6
	ctx.r7.s64 = 6;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r4,29
	ctx.r4.s64 = 29;
	// li r3,41
	ctx.r3.s64 = 41;
	// li r6,13
	ctx.r6.s64 = 13;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r8,101
	ctx.r8.s64 = 101;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r7,141
	ctx.r7.s64 = 141;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// li r10,304
	ctx.r10.s64 = 304;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r5,205
	ctx.r5.s64 = 205;
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// li r4,246
	ctx.r4.s64 = 246;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// li r6,170
	ctx.r6.s64 = 170;
	// li r8,496
	ctx.r8.s64 = 496;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r7,-216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r4,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r20,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r21,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r21.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D518:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x8812d5b8
	if (!ctx.cr6.eq) goto loc_8812D5B8;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,10
	ctx.r8.s64 = 10;
	// li r7,20
	ctx.r7.s64 = 20;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r5,50
	ctx.r5.s64 = 50;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r4,70
	ctx.r4.s64 = 70;
	// std r9,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r9.u64);
	// li r3,85
	ctx.r3.s64 = 85;
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// li r10,152
	ctx.r10.s64 = 152;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r8,248
	ctx.r8.s64 = 248;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r7,-216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r3,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r8,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stw r27,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D5B8:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x8812d718
	if (!ctx.cr6.eq) goto loc_8812D718;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r7,9
	ctx.r7.s64 = 9;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,25
	ctx.r4.s64 = 25;
	// li r3,35
	ctx.r3.s64 = 35;
	// stwx r24,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r24.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// li r6,124
	ctx.r6.s64 = 124;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r5,-216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r22,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r22.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D644:
	// cmpwi cr6,r10,22050
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22050, ctx.xer);
	// blt cr6,0x8812d718
	if (ctx.cr6.lt) goto loc_8812D718;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x8812d6a4
	if (!ctx.cr6.eq) goto loc_8812D6A4;
	// lwz r8,340(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,25
	ctx.r6.s64 = 25;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r14.u32);
	// stw r15,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r15.u32);
	// stw r16,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r16.u32);
	// stw r28,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r28.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stw r17,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r17.u32);
	// stw r18,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r18.u32);
	// stw r19,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r19.u32);
	// stw r27,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D6A4:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x8812d718
	if (!ctx.cr6.eq) goto loc_8812D718;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,10
	ctx.r8.s64 = 10;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r5,43
	ctx.r5.s64 = 43;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r3,89
	ctx.r3.s64 = 89;
	// li r7,23
	ctx.r7.s64 = 23;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r8,110
	ctx.r8.s64 = 110;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r22,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r22.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D718:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lwz r7,-240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r10,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
loc_8812D744:
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8812d788
	if (ctx.cr6.gt) goto loc_8812D788;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// std r10,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r10.u64);
	// lfd f10,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f5.u64);
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8812d7b4
	goto loc_8812D7B4;
loc_8812D788:
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// lwz r14,80(r3)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// divwu r10,r10,r14
	ctx.r10.u64 = uint32_t(ctx.r14.u32 ? ctx.r10.u32 / ctx.r14.u32 : 0);
	// twllei r14,0
	if (ctx.r14.s32 == 0 || ctx.r14.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r14,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r10.s32 >> 2;
	// addze r14,r14
	temp.s64 = ctx.r14.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r14.u32;
	ctx.r14.s64 = temp.s64;
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r14,r10
	ctx.r14.u64 = ctx.r10.u64 - ctx.r14.u64;
	// subf r10,r14,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r14.u64;
loc_8812D7B4:
	// lwz r14,0(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x8812d7c8
	if (!ctx.cr6.gt) goto loc_8812D7C8;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8812D7C8:
	// lwz r10,-232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812d7e8
	if (!ctx.cr6.lt) goto loc_8812D7E8;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r14,0(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812d744
	if (ctx.cr6.lt) goto loc_8812D744;
loc_8812D7E8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r14,46
	ctx.r14.s64 = 46;
	// li r4,34
	ctx.r4.s64 = 34;
	// stw r6,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r6.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r8,340(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x8812d2c4
	goto loc_8812D2C4;
}

DEFINE_REX_FUNC(sub_8813FDE0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8813fe14
	if (!ctx.cr6.eq) goto loc_8813FE14;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8813fe0c
	if (ctx.cr6.eq) goto loc_8813FE0C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
loc_8813FE0C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8813fcd0
	sub_8813FCD0(ctx, base);
	return;
loc_8813FE14:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88140488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88140490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,0(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mullw. r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble 0x881404e0
	if (!ctx.cr0.gt) goto loc_881404E0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_881404BC:
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mullw r6,r7,r7
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x881404bc
	if (ctx.cr6.lt) goto loc_881404BC;
loc_881404E0:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mullw. r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x88140514
	if (!ctx.cr0.gt) goto loc_88140514;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_881404F4:
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mullw r6,r7,r7
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881404f4
	if (ctx.cr6.lt) goto loc_881404F4;
loc_88140514:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88140544
	if (!ctx.cr6.gt) goto loc_88140544;
loc_88140524:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88140524
	if (ctx.cr6.lt) goto loc_88140524;
loc_88140544:
	// lwz r10,660(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 660);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881405d4
	if (!ctx.cr6.eq) goto loc_881405D4;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,664(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw. r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8814059c
	if (!ctx.cr0.gt) goto loc_8814059C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8814056C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,692(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// lhzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r6,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r5,664(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8814056c
	if (ctx.cr6.lt) goto loc_8814056C;
loc_8814059C:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mullw. r8,r10,r10
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x881405d4
	if (!ctx.cr0.gt) goto loc_881405D4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_881405AC:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,700(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sthx r7,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mullw r6,r11,r11
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881405ac
	if (ctx.cr6.lt) goto loc_881405AC;
loc_881405D4:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881405E8;
	sub_88052D90(ctx, base);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88140600;
	sub_88052D90(ctx, base);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// stw r5,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lhz r4,34(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// stw r7,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// mullw r3,r4,r29
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// sth r10,48(r30)
	REX_STORE_U16(ctx.r30.u32 + 48, ctx.r10.u16);
	// stw r3,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881438A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881438B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r4)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r28,0(r7)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8814396c
	if (!ctx.cr6.lt) goto loc_8814396C;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r26,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r26.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_881438F4:
	// lhz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8814391c
	if (!ctx.cr6.lt) goto loc_8814391C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x88143928
	goto loc_88143928;
loc_8814391C:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88143928
	if (!ctx.cr6.gt) goto loc_88143928;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_88143928:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88143940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r11,r9,r25
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r7.u16);
	// bne 0x881438f4
	if (!ctx.cr0.eq) goto loc_881438F4;
loc_8814396C:
	// stw r26,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// stw r27,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// stw r28,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88144B50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88144B58;
	__savegprlr_26(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// ble cr6,0x88144bd8
	if (!ctx.cr6.gt) goto loc_88144BD8;
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r27,r10,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r10.u64;
loc_88144B74:
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88144bd8
	if (!ctx.cr6.lt) goto loc_88144BD8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// blt cr6,0x88144bc8
	if (ctx.cr6.lt) goto loc_88144BC8;
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88144B9C:
	// lwzu r31,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// mulld r31,r31,r30
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * ctx.r30.u64);
	// sradi r31,r31,30
	ctx.xer.ca = (ctx.r31.s64 < 0) & ((ctx.r31.u64 & 0x3FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s64 >> 30;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bdnz 0x88144b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144B9C;
loc_88144BC8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88144b74
	if (ctx.cr6.lt) goto loc_88144B74;
loc_88144BD8:
	// add r28,r5,r7
	ctx.r28.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88144c58
	if (!ctx.cr6.lt) goto loc_88144C58;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r30,r3,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r29,r5,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r5.u64;
loc_88144C04:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// ble cr6,0x88144c4c
	if (!ctx.cr6.gt) goto loc_88144C4C;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_88144C20:
	// lwzu r6,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r6,r6,r3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bdnz 0x88144c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144C20;
loc_88144C4C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x88144c04
	if (!ctx.cr0.eq) goto loc_88144C04;
loc_88144C58:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x88144cb4
	if (!ctx.cr0.gt) goto loc_88144CB4;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_88144C7C:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88144c7c
	if (ctx.cr6.lt) goto loc_88144C7C;
loc_88144CB4:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88148EE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// sth r8,-2(r1)
	REX_STORE_U16(ctx.r1.u32 + -2, ctx.r8.u16);
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x7)));
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v9,v10,7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0x100))));
	// vadduhm v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x88149010
	if (!ctx.cr6.eq) goto loc_88149010;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v59,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vperm128 v7,v62,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88148F6C:
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vperm128 v7,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v3,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v2,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v30,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v31,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vadduhm v8,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v7,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v27,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vpkshus128 v57,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vadduhm v26,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvewx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v25,v63,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v24,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubshs v23,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v22,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsrah v21,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v56,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// stvewx128 v56,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stvewx128 v56,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x88148f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148F6C;
	// blr 
	return;
loc_88149010:
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,8
	ctx.r7.s64 = 8;
	// lvx128 v53,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v55,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vperm128 v9,v52,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v5,v54,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88149054:
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// lvx128 v48,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v47,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v4,v49,v48,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vslh v30,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vor v3,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v28,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v23,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubshs v25,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v24,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor v7,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v4,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vadduhm v31,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v21,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v8,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vor128 v9,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vsrah v20,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v6,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v5,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vpkshus128 v46,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v17,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v6,v17
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v15,v5,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvx128 v46,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v44,v45,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v16,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrglb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v4,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v6,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vadduhm v30,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v31,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubshs v28,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v29,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v26,v28,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v27,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v24,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v25,v24
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvx128 v43,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x88149054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88149054;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8814F688) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8814f720
	if (ctx.cr6.eq) goto loc_8814F720;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8814f720
	if (ctx.cr6.eq) goto loc_8814F720;
loc_8814F6C0:
	// lwz r30,80(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x88185458
	ctx.lr = 0x8814F6E0;
	sub_88185458(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r10,15536(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8814f714
	if (!ctx.cr6.eq) goto loc_8814F714;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x88184cb0
	ctx.lr = 0x8814F714;
	sub_88184CB0(ctx, base);
loc_8814F714:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8814f6c0
	if (!ctx.cr6.eq) goto loc_8814F6C0;
loc_8814F720:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_88150998) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881509A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3980(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,15620(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r11,20528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20528);
	// rlwinm r8,r10,28,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi. r11,r8,28
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20528(r3)
	REX_STORE_U32(ctx.r3.u32 + 20528, ctx.r9.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// blt 0x881509e8
	if (ctx.cr0.lt) goto loc_881509E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x881509f0
	if (!ctx.cr6.gt) goto loc_881509F0;
loc_881509E8:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x88150aa4
	if (!ctx.cr6.eq) goto loc_88150AA4;
loc_881509F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x88150a00
	if (!ctx.cr6.lt) goto loc_88150A00;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x88150a0c
	goto loc_88150A0C;
loc_88150A00:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x88150a0c
	if (!ctx.cr6.gt) goto loc_88150A0C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_88150A0C:
	// lwz r10,15612(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88150a3c
	if (ctx.cr6.eq) goto loc_88150A3C;
	// bge cr6,0x88150a38
	if (!ctx.cr6.lt) goto loc_88150A38;
	// lwz r10,20536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// mulli r9,r10,218
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(218));
	// mulli r8,r10,243
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(243));
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r7,20540(r31)
	REX_STORE_U32(ctx.r31.u32 + 20540, ctx.r7.u32);
	// stw r6,20536(r31)
	REX_STORE_U32(ctx.r31.u32 + 20536, ctx.r6.u32);
loc_88150A38:
	// stw r11,15612(r31)
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r11.u32);
loc_88150A3C:
	// lwz r11,20472(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88150a64
	if (ctx.cr6.eq) goto loc_88150A64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x88150A50;
	sub_881EC8B0(ctx, base);
	// ld r10,20448(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r24,20472(r31)
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r24.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,20448(r31)
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r11.u64);
loc_88150A64:
	// lwz r11,20472(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20472);
	// std r24,20456(r31)
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r24.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r24,20448(r31)
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r24.u64);
	// stw r24,3460(r31)
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r24.u32);
	// bne cr6,0x88150f24
	if (!ctx.cr6.eq) goto loc_88150F24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x88150A84;
	sub_881EC8B0(ctx, base);
	// ld r10,20448(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20472(r31)
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// std r8,20448(r31)
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r8.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88150AA4:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bge cr6,0x88150ae4
	if (!ctx.cr6.lt) goto loc_88150AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88150AB4;
	sub_8814CD10(ctx, base);
	// lwz r11,20528(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20528);
	// std r24,20448(r31)
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r24.u64);
	// std r24,20456(r31)
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r24.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r24,3460(r31)
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r24.u32);
	// bgt cr6,0x88150f1c
	if (ctx.cr6.gt) goto loc_88150F1C;
	// bl 0x881ed218
	ctx.lr = 0x88150AD0;
	sub_881ED218(ctx, base);
	// stw r3,20636(r31)
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814ccb0
	ctx.lr = 0x88150ADC;
	sub_8814CCB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88150AE4:
	// bl 0x881ed218
	ctx.lr = 0x88150AE8;
	sub_881ED218(ctx, base);
	// lwz r11,20640(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20640);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,8000
	ctx.r11.s64 = ctx.r11.s64 + 8000;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88150b60
	if (!ctx.cr6.gt) goto loc_88150B60;
	// stw r3,20640(r31)
	REX_STORE_U32(ctx.r31.u32 + 20640, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8817d628
	ctx.lr = 0x88150B10;
	sub_8817D628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8817d628
	ctx.lr = 0x88150B24;
	sub_8817D628(ctx, base);
	// stw r3,20436(r31)
	REX_STORE_U32(ctx.r31.u32 + 20436, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88150b60
	if (ctx.cr6.lt) goto loc_88150B60;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bgt cr6,0x88150b60
	if (ctx.cr6.gt) goto loc_88150B60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,15612(r31)
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,15608(r31)
	REX_STORE_U32(ctx.r31.u32 + 15608, ctx.r11.u32);
	// bl 0x8817d3e0
	ctx.lr = 0x88150B4C;
	sub_8817D3E0(ctx, base);
	// lwz r11,20436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20436);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,20428(r31)
	REX_STORE_U32(ctx.r31.u32 + 20428, ctx.r8.u32);
loc_88150B60:
	// lwz r11,20428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88150f24
	if (ctx.cr6.eq) goto loc_88150F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd10
	ctx.lr = 0x88150B74;
	sub_8814CD10(ctx, base);
	// lwz r11,20432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bgt cr6,0x88150b88
	if (ctx.cr6.gt) goto loc_88150B88;
	// lwz r28,15612(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
loc_88150B88:
	// lwz r11,20516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20516);
	// lwz r10,20512(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20512);
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// ld r8,20448(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,20512(r31)
	REX_STORE_U32(ctx.r31.u32 + 20512, ctx.r6.u32);
	// stwx r5,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r9,20512(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20512);
	// ld r3,20456(r31)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r31.u32 + 20456);
	// lwz r11,20516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20516);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// lwz r11,3460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3460);
	// extsw r30,r3
	ctx.r30.s64 = ctx.r3.s32;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// stw r10,20516(r31)
	REX_STORE_U32(ctx.r31.u32 + 20516, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88150bf4
	if (ctx.cr6.gt) goto loc_88150BF4;
	// lwz r10,15620(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15620);
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// rlwinm r8,r10,16,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000000;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88150c6c
	if (ctx.cr6.lt) goto loc_88150C6C;
loc_88150BF4:
	// lwz r10,20532(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20532);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20532(r31)
	REX_STORE_U32(ctx.r31.u32 + 20532, ctx.r11.u32);
	// ble cr6,0x88150c34
	if (!ctx.cr6.gt) goto loc_88150C34;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x88150c14
	if (!ctx.cr0.gt) goto loc_88150C14;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_88150C14:
	// lwz r11,20536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// mulli r10,r11,230
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// mulli r9,r11,230
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// stw r11,20536(r31)
	REX_STORE_U32(ctx.r31.u32 + 20536, ctx.r11.u32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stw r8,20540(r31)
	REX_STORE_U32(ctx.r31.u32 + 20540, ctx.r8.u32);
	// b 0x88150c3c
	goto loc_88150C3C;
loc_88150C34:
	// stw r26,20636(r31)
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r26.u32);
	// stw r24,20628(r31)
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r24.u32);
loc_88150C3C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88150c68
	if (!ctx.cr6.gt) goto loc_88150C68;
	// addi r11,r28,5137
	ctx.r11.s64 = ctx.r28.s64 + 5137;
	// addi r10,r28,5136
	ctx.r10.s64 = ctx.r28.s64 + 5136;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x88150c68
	if (!ctx.cr6.eq) goto loc_88150C68;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_88150C68:
	// stw r24,3460(r31)
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r24.u32);
loc_88150C6C:
	// lwz r7,15620(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15620);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// srawi r6,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x88150cac
	if (!ctx.cr6.eq) goto loc_88150CAC;
	// lwz r11,20524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20524);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88150cac
	if (!ctx.cr6.gt) goto loc_88150CAC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88150ca8
	if (!ctx.cr6.gt) goto loc_88150CA8;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_88150CA8:
	// stw r26,20636(r31)
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r26.u32);
loc_88150CAC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88150d28
	if (!ctx.cr6.gt) goto loc_88150D28;
	// addi r11,r28,5136
	ctx.r11.s64 = ctx.r28.s64 + 5136;
	// lwz r8,20536(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_88150CC4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88150d28
	if (!ctx.cr6.gt) goto loc_88150D28;
	// lwz r29,20520(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20520);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// ble cr6,0x88150cf8
	if (!ctx.cr6.gt) goto loc_88150CF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88150cf8
	if (!ctx.cr6.gt) goto loc_88150CF8;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// b 0x88150d20
	goto loc_88150D20;
loc_88150CF8:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88150d28
	if (!ctx.cr6.gt) goto loc_88150D28;
	// lwz r11,20432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20432);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// bgt cr6,0x88150d20
	if (ctx.cr6.gt) goto loc_88150D20;
	// lwz r25,15612(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
loc_88150D20:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x88150cc4
	if (ctx.cr6.gt) goto loc_88150CC4;
loc_88150D28:
	// lwz r8,15612(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r29,r11,18116
	ctx.r29.s64 = ctx.r11.s64 + 18116;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88150e00
	if (!ctx.cr6.eq) goto loc_88150E00;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88150e00
	if (!ctx.cr6.lt) goto loc_88150E00;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x88150d6c
	if (!ctx.cr6.gt) goto loc_88150D6C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x88150e00
	if (!ctx.cr6.eq) goto loc_88150E00;
	// lwz r11,20524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20524);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x88150e00
	if (!ctx.cr6.gt) goto loc_88150E00;
loc_88150D6C:
	// lwz r11,20636(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20636);
	// lwz r6,20628(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20628);
	// subf r7,r11,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88150d88
	if (!ctx.cr6.lt) goto loc_88150D88;
	// lwz r10,20536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// b 0x88150d8c
	goto loc_88150D8C;
loc_88150D88:
	// lwz r10,20540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20540);
loc_88150D8C:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// addi r11,r9,5136
	ctx.r11.s64 = ctx.r9.s64 + 5136;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88150df0
	if (!ctx.cr6.lt) goto loc_88150DF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88150df0
	if (!ctx.cr6.lt) goto loc_88150DF0;
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x88150dd0
	if (ctx.cr6.gt) goto loc_88150DD0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88150e00
	if (!ctx.cr6.lt) goto loc_88150E00;
loc_88150DD0:
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88150df0
	if (!ctx.cr6.gt) goto loc_88150DF0;
	// addi r11,r26,-500
	ctx.r11.s64 = ctx.r26.s64 + -500;
	// stw r11,20636(r31)
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r11.u32);
loc_88150DF0:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88150e00
	if (!ctx.cr6.lt) goto loc_88150E00;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stw r11,20628(r31)
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r11.u32);
loc_88150E00:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x88150e48
	if (!ctx.cr6.gt) goto loc_88150E48;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88150e48
	if (!ctx.cr6.gt) goto loc_88150E48;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x88150e48
	if (ctx.cr6.gt) goto loc_88150E48;
	// addi r11,r8,2571
	ctx.r11.s64 = ctx.r8.s64 + 2571;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// addi r9,r11,5152
	ctx.r9.s64 = ctx.r11.s64 + 5152;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_88150E48:
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88150e70
	if (!ctx.cr6.eq) goto loc_88150E70;
	// lwz r10,20432(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88150e70
	if (ctx.cr6.gt) goto loc_88150E70;
	// lwz r11,20520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20520(r31)
	REX_STORE_U32(ctx.r31.u32 + 20520, ctx.r11.u32);
	// b 0x88150f14
	goto loc_88150F14;
loc_88150E70:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwzx r9,r30,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,15572(r31)
	REX_STORE_U32(ctx.r31.u32 + 15572, ctx.r8.u32);
	// lwzx r7,r30,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// stw r6,15576(r31)
	REX_STORE_U32(ctx.r31.u32 + 15576, ctx.r6.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88150eb8
	if (ctx.cr6.eq) goto loc_88150EB8;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r4,3980(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// bl 0x8818be18
	ctx.lr = 0x88150EB8;
	sub_8818BE18(ctx, base);
loc_88150EB8:
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88150f04
	if (!ctx.cr6.lt) goto loc_88150F04;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,20636(r31)
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r26.u32);
	// ble cr6,0x88150ef0
	if (!ctx.cr6.gt) goto loc_88150EF0;
	// addi r10,r29,-20
	ctx.r10.s64 = ctx.r29.s64 + -20;
	// addi r9,r29,-20
	ctx.r9.s64 = ctx.r29.s64 + -20;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r5,20636(r31)
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r5.u32);
loc_88150EF0:
	// lwz r10,20628(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20628);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88150f04
	if (!ctx.cr6.lt) goto loc_88150F04;
	// stw r11,20628(r31)
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r11.u32);
loc_88150F04:
	// stw r28,15612(r31)
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r28.u32);
	// stw r28,3700(r31)
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r28.u32);
	// stw r25,20432(r31)
	REX_STORE_U32(ctx.r31.u32 + 20432, ctx.r25.u32);
	// stw r24,20520(r31)
	REX_STORE_U32(ctx.r31.u32 + 20520, ctx.r24.u32);
loc_88150F14:
	// std r24,20448(r31)
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r24.u64);
	// std r24,20456(r31)
	REX_STORE_U64(ctx.r31.u32 + 20456, ctx.r24.u64);
loc_88150F1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814ccb0
	ctx.lr = 0x88150F24;
	sub_8814CCB0(ctx, base);
loc_88150F24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88161458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88161460;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,11
	ctx.r30.s64 = 11;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x881614e0
	if (!ctx.cr6.lt) goto loc_881614E0;
loc_88161488:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881614e0
	if (ctx.cr6.eq) goto loc_881614E0;
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
	// bge 0x881614d0
	if (!ctx.cr0.lt) goto loc_881614D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881614D0;
	sub_88156678(ctx, base);
loc_881614D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161488
	if (ctx.cr6.gt) goto loc_88161488;
loc_881614E0:
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
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88161518
	if (!ctx.cr0.lt) goto loc_88161518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161518;
	sub_88156678(ctx, base);
loc_88161518:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,11
	ctx.r30.s64 = 11;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x8816158c
	if (!ctx.cr6.lt) goto loc_8816158C;
loc_88161534:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816158c
	if (ctx.cr6.eq) goto loc_8816158C;
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
	// bge 0x8816157c
	if (!ctx.cr0.lt) goto loc_8816157C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816157C;
	sub_88156678(ctx, base);
loc_8816157C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161534
	if (ctx.cr6.gt) goto loc_88161534;
loc_8816158C:
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
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881615c4
	if (!ctx.cr0.lt) goto loc_881615C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881615C4;
	sub_88156678(ctx, base);
loc_881615C4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881615d4
	if (ctx.cr6.eq) goto loc_881615D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x881615e0
	if (!ctx.cr6.eq) goto loc_881615E0;
loc_881615D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881615E0:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// stw r28,156(r27)
	REX_STORE_U32(ctx.r27.u32 + 156, ctx.r28.u32);
	// stw r29,160(r27)
	REX_STORE_U32(ctx.r27.u32 + 160, ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x88161640
	if (!ctx.cr6.lt) goto loc_88161640;
loc_88161600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88161640
	if (ctx.cr6.eq) goto loc_88161640;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x88161630
	if (!ctx.cr0.lt) goto loc_88161630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161630;
	sub_88156678(ctx, base);
loc_88161630:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161600
	if (ctx.cr6.gt) goto loc_88161600;
loc_88161640:
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
	// bge 0x88161664
	if (!ctx.cr0.lt) goto loc_88161664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161664;
	sub_88156678(ctx, base);
loc_88161664:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,3944(r27)
	REX_STORE_U32(ctx.r27.u32 + 3944, ctx.r26.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,3956(r27)
	REX_STORE_U32(ctx.r27.u32 + 3956, ctx.r11.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,440(r27)
	REX_STORE_U32(ctx.r27.u32 + 440, ctx.r26.u32);
	// stw r26,3948(r27)
	REX_STORE_U32(ctx.r27.u32 + 3948, ctx.r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881616ec
	if (!ctx.cr6.lt) goto loc_881616EC;
loc_88161694:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881616ec
	if (ctx.cr6.eq) goto loc_881616EC;
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
	// bge 0x881616dc
	if (!ctx.cr0.lt) goto loc_881616DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881616DC;
	sub_88156678(ctx, base);
loc_881616DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161694
	if (ctx.cr6.gt) goto loc_88161694;
loc_881616EC:
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
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88161724
	if (!ctx.cr0.lt) goto loc_88161724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161724;
	sub_88156678(ctx, base);
loc_88161724:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,3940(r27)
	REX_STORE_U32(ctx.r27.u32 + 3940, ctx.r29.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816179c
	if (!ctx.cr6.lt) goto loc_8816179C;
loc_88161744:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816179c
	if (ctx.cr6.eq) goto loc_8816179C;
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
	// bge 0x8816178c
	if (!ctx.cr0.lt) goto loc_8816178C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816178C;
	sub_88156678(ctx, base);
loc_8816178C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161744
	if (ctx.cr6.gt) goto loc_88161744;
loc_8816179C:
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
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881617d4
	if (!ctx.cr0.lt) goto loc_881617D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881617D4;
	sub_88156678(ctx, base);
loc_881617D4:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,400(r27)
	REX_STORE_U32(ctx.r27.u32 + 400, ctx.r29.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8816184c
	if (!ctx.cr6.lt) goto loc_8816184C;
loc_881617F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816184c
	if (ctx.cr6.eq) goto loc_8816184C;
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
	// bge 0x8816183c
	if (!ctx.cr0.lt) goto loc_8816183C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816183C;
	sub_88156678(ctx, base);
loc_8816183C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881617f4
	if (ctx.cr6.gt) goto loc_881617F4;
loc_8816184C:
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
	// bge 0x88161884
	if (!ctx.cr0.lt) goto loc_88161884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161884;
	sub_88156678(ctx, base);
loc_88161884:
	// stw r30,15528(r27)
	REX_STORE_U32(ctx.r27.u32 + 15528, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88172548) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88172550;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef288
	ctx.lr = 0x88172558;
	__savefpr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// bne cr6,0x88172588
	if (!ctx.cr6.eq) goto loc_88172588;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d4
	ctx.lr = 0x88172584;
	__restfpr_28(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88172588:
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r9,15408(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15408);
	// lwz r8,15412(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15412);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r6,15392(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// lfd f31,1488(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// srawi r28,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// fsel f1,f0,f0,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x881725C4;
	sub_881EF210(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r3,15392(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x88172600
	if (!ctx.cr6.lt) goto loc_88172600;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88172600:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88172608;
	sub_881F0228(ctx, base);
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r29,156(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f13,f11,f29
	ctx.f13.f64 = ctx.f11.f64 - ctx.f29.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8817264c
	if (ctx.cr6.lt) goto loc_8817264C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8817264C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88172654;
	sub_881F0228(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x88172678;
	sub_881EF210(ctx, base);
	// fneg f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fctiwz f10,f1
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f10.u64);
	// lwz r30,156(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// fsel f1,f11,f11,f31
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x88172690;
	sub_881EF210(ctx, base);
	// fctiwz f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f9.u64);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lwz r7,15396(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f8,152(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f8
	ctx.f0.f64 = double(ctx.f8.s64);
	// lfd f7,144(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f7
	ctx.f13.f64 = double(ctx.f7.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x881726cc
	if (ctx.cr6.lt) goto loc_881726CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_881726CC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x881726D4;
	sub_881F0228(ctx, base);
	// lwz r11,15396(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,15388(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r31,156(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f0,f11,f30
	ctx.f0.f64 = ctx.f11.f64 - ctx.f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x88172718
	if (!ctx.cr6.lt) goto loc_88172718;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88172718:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88172720;
	sub_881F0228(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// rlwinm r21,r11,0,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r31,r10,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r14,r30,0,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// bl 0x881ef210
	ctx.lr = 0x88172760;
	sub_881EF210(ctx, base);
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f11.u64);
	// lwz r7,156(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r30,r7,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x88172784
	if (!ctx.cr6.lt) goto loc_88172784;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_88172784:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r4,15420(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 15420);
	// rlwinm r10,r21,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 11) & 0xFFFFF800;
	// lwz r6,15424(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 15424);
	// rlwinm r9,r31,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// lwz r17,15416(r23)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r23.u32 + 15416);
	// srawi r8,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 1;
	// srawi r7,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r14.s32 >> 1;
	// lfd f0,23424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 23424);
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// fmul f12,f29,f0
	ctx.f12.f64 = ctx.f29.f64 * ctx.f0.f64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fmul f13,f30,f0
	ctx.f13.f64 = ctx.f30.f64 * ctx.f0.f64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lfd f0,8624(r5)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8624);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f11.u64);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r8,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 11;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// clrlwi r19,r9,21
	ctx.r19.u64 = ctx.r9.u32 & 0x7FF;
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// srawi r3,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 11;
	// srawi r11,r5,12
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 12;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// srawi r8,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 12;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// clrlwi r18,r5,21
	ctx.r18.u64 = ctx.r5.u32 & 0x7FF;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// clrlwi r25,r7,21
	ctx.r25.u64 = ctx.r7.u32 & 0x7FF;
	// clrlwi r24,r10,21
	ctx.r24.u64 = ctx.r10.u32 & 0x7FF;
	// subfic r5,r25,2048
	ctx.xer.ca = ctx.r25.u32 <= 2048;
	ctx.r5.u64 = static_cast<uint64_t>(2048) - ctx.r25.u64;
	// subfic r3,r18,2048
	ctx.xer.ca = ctx.r18.u32 <= 2048;
	ctx.r3.u64 = static_cast<uint64_t>(2048) - ctx.r18.u64;
	// mullw r16,r25,r24
	ctx.r16.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// subf r26,r24,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r22,r19,r3
	ctx.r22.u64 = ctx.r3.u64 - ctx.r19.u64;
	// mullw r15,r18,r19
	ctx.r15.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r19.s32);
	// ble cr6,0x88172854
	if (!ctx.cr6.gt) goto loc_88172854;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x88172860
	goto loc_88172860;
loc_88172854:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bge cr6,0x88172860
	if (!ctx.cr6.lt) goto loc_88172860;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_88172860:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lfd f0,23440(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 23440);
	// fmul f0,f28,f0
	ctx.f0.f64 = ctx.f28.f64 * ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r27,156(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// ble cr6,0x88172928
	if (!ctx.cr6.gt) goto loc_88172928;
loc_8817288C:
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881728b4
	if (!ctx.cr6.gt) goto loc_881728B4;
	// addi r10,r17,-1
	ctx.r10.s64 = ctx.r17.s64 + -1;
loc_881728A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881728a0
	if (ctx.cr6.lt) goto loc_881728A0;
loc_881728B4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881728d8
	if (!ctx.cr6.gt) goto loc_881728D8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_881728C8:
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881728c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881728C8;
loc_881728D8:
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r8,r11,r17
	ctx.r8.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88172910
	if (!ctx.cr6.gt) goto loc_88172910;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_881728FC:
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881728fc
	if (ctx.cr6.lt) goto loc_881728FC;
loc_88172910:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r17,r11,r8
	ctx.r17.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8817288c
	if (ctx.cr6.lt) goto loc_8817288C;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
loc_88172928:
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8817305c
	if (!ctx.cr6.lt) goto loc_8817305C;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,128(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
loc_88172948:
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r10,r20,r10
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r10.s32);
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x88172990
	if (!ctx.cr6.gt) goto loc_88172990;
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8817298c
	if (ctx.cr6.eq) goto loc_8817298C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172984:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88172984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172984;
loc_8817298C:
	// add r11,r17,r8
	ctx.r11.u64 = ctx.r17.u64 + ctx.r8.u64;
loc_88172990:
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x881729e0
	if (!ctx.cr6.eq) goto loc_881729E0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172a28
	if (!ctx.cr6.eq) goto loc_88172A28;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881729C0:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881729c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881729C0;
	// b 0x88172ad8
	goto loc_88172AD8;
loc_881729E0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172a74
	if (!ctx.cr6.eq) goto loc_88172A74;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r9,r8,r14
	ctx.r9.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881729F8:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r7,r22
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// mullw r8,r6,r19
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r19.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 11;
	// mullw r3,r4,r27
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881729f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881729F8;
	// b 0x88172ad8
	goto loc_88172AD8;
loc_88172A28:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88172A40:
	// lbzx r7,r6,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r7,r7,r22
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r3,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 11;
	// mullw r9,r3,r27
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172A40;
	// b 0x88172ad8
	goto loc_88172AD8;
loc_88172A74:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88172ad8
	if (!ctx.cr6.lt) goto loc_88172AD8;
	// subf r8,r8,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172A84:
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r6,r8,r22
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r22.s32);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mullw r5,r5,r18
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r3,r19
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r19.s32);
	// mullw r3,r4,r15
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// srawi r8,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 11;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// mullw r6,r7,r27
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172A84;
loc_88172AD8:
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88172b04
	if (!ctx.cr6.lt) goto loc_88172B04;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88172AF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lwz r8,15392(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88172af0
	if (ctx.cr6.lt) goto loc_88172AF0;
loc_88172B04:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// srawi r10,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 1;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// ble cr6,0x88172b58
	if (!ctx.cr6.gt) goto loc_88172B58;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r9,128
	ctx.r9.s64 = 128;
loc_88172B44:
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172B44;
loc_88172B58:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bne cr6,0x88172bf0
	if (!ctx.cr6.eq) goto loc_88172BF0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88172c84
	if (!ctx.cr6.eq) goto loc_88172C84;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r5,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_88172BA4:
	// lbzx r8,r6,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-128
	ctx.r8.s64 = ctx.r8.s64 + -128;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r5,r8,r27
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// mullw r4,r7,r27
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r8,r5,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r4,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// addi r8,r7,128
	ctx.r8.s64 = ctx.r7.s64 + 128;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172BA4;
	// b 0x88172e2c
	goto loc_88172E2C;
loc_88172BF0:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88172d38
	if (!ctx.cr6.eq) goto loc_88172D38;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_88172C14:
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzu r5,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// mullw r7,r4,r26
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r3,r26
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// mullw r5,r5,r25
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// addi r4,r6,-128
	ctx.r4.s64 = ctx.r6.s64 + -128;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// rlwinm r7,r3,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r7,128
	ctx.r5.s64 = ctx.r7.s64 + 128;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172C14;
	// b 0x88172e2c
	goto loc_88172E2C;
loc_88172C84:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r31,r11,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_88172CC4:
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r30,r3,r8
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// mullw r9,r5,r24
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r24.s32);
	// lbzu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r4,r26
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mullw r5,r30,r24
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// addi r5,r9,-128
	ctx.r5.s64 = ctx.r9.s64 + -128;
	// addi r4,r6,-128
	ctx.r4.s64 = ctx.r6.s64 + -128;
	// mullw r9,r5,r27
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172CC4;
	// b 0x88172e2c
	goto loc_88172E2C;
loc_88172D38:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88172e2c
	if (!ctx.cr6.lt) goto loc_88172E2C;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r31,r7,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subfic r3,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88172D64:
	// lbz r31,0(r7)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbzx r30,r4,r9
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mullw r28,r31,r24
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r24.s32);
	// lbzx r29,r3,r7
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mullw r30,r5,r26
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r26.s32);
	// subf r31,r29,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r29.u64;
	// mullw r29,r29,r25
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r16.s32);
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r31,r4,r8
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// lbzx r28,r3,r6
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r30,0(r6)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r29,r30,r24
	ctx.r29.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// subf r31,r30,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mullw r30,r5,r26
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r26.s32);
	// subf r31,r28,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r28.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mullw r31,r28,r25
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r16.s32);
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88172d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172D64;
loc_88172E2C:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88172e60
	if (!ctx.cr6.lt) goto loc_88172E60;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r7,128
	ctx.r7.s64 = 128;
loc_88172E50:
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88172e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172E50;
loc_88172E60:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// addi r3,r20,1
	ctx.r3.s64 = ctx.r20.s64 + 1;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r21,1
	ctx.r31.s64 = ctx.r21.s64 + 1;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + ctx.r17.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88172ed0
	if (!ctx.cr6.gt) goto loc_88172ED0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88172ecc
	if (ctx.cr6.eq) goto loc_88172ECC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172EC4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88172ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172EC4;
loc_88172ECC:
	// add r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 + ctx.r8.u64;
loc_88172ED0:
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x88172f20
	if (!ctx.cr6.eq) goto loc_88172F20;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172f68
	if (!ctx.cr6.eq) goto loc_88172F68;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88172F00:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172F00;
	// b 0x88173018
	goto loc_88173018;
loc_88172F20:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x88172fb4
	if (!ctx.cr6.eq) goto loc_88172FB4;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r9,r8,r14
	ctx.r9.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88172F38:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r7,r22
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// mullw r8,r6,r19
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r19.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r9,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 11;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172F38;
	// b 0x88173018
	goto loc_88173018;
loc_88172F68:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r7,r8,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r8.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88172F80:
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r7,r6,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// mullw r7,r7,r22
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 11;
	// mullw r5,r7,r27
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172F80;
	// b 0x88173018
	goto loc_88173018;
loc_88172FB4:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88173018
	if (!ctx.cr6.lt) goto loc_88173018;
	// subf r8,r8,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r8.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88172FC4:
	// lbz r30,0(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r6,r30,r18
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r18.s32);
	// lbzu r29,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r30,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r30.u64;
	// mullw r5,r8,r22
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r22.s32);
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r29.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r29,r19
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// mullw r8,r8,r15
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r15.s32);
	// srawi r8,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 11;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r6,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 11;
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88172fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88172FC4;
loc_88173018:
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88173044
	if (!ctx.cr6.lt) goto loc_88173044;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88173030:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88173030
	if (ctx.cr6.lt) goto loc_88173030;
loc_88173044:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 1;
	// add r17,r10,r4
	ctx.r17.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r20,r3,1
	ctx.r20.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88172948
	if (ctx.cr6.lt) goto loc_88172948;
loc_8817305C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881732ac
	if (ctx.cr6.lt) goto loc_881732AC;
	// lwz r31,124(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,15396(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881732ac
	if (!ctx.cr6.lt) goto loc_881732AC;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r15,128
	ctx.r15.s64 = 128;
	// lwz r24,108(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r21,96(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r18,100(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r20,104(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,112(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r16,136(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r19,144(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_881730C4:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r8,15392(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble cr6,0x88173144
	if (!ctx.cr6.gt) goto loc_88173144;
	// subf r7,r24,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r24.u64;
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
loc_881730F0:
	// lwz r9,15388(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88173130
	if (!ctx.cr6.lt) goto loc_88173130;
	// lwz r6,20(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88173130
	if (!ctx.cr6.lt) goto loc_88173130;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x88173130
	if (ctx.cr6.lt) goto loc_88173130;
	// subf r9,r24,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r24.u64;
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x88173134
	goto loc_88173134;
loc_88173130:
	// stbu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r11.u32 = ea;
loc_88173134:
	// lwz r9,15392(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881730f0
	if (ctx.cr6.lt) goto loc_881730F0;
loc_88173144:
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r11,r5,r18
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r18.s32);
	// add r7,r11,r19
	ctx.r7.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ble cr6,0x881731f8
	if (!ctx.cr6.gt) goto loc_881731F8;
	// subf r6,r25,r19
	ctx.r6.u64 = ctx.r19.u64 - ctx.r25.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_88173170:
	// lwz r9,15388(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881731e8
	if (!ctx.cr6.lt) goto loc_881731E8;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x881731e8
	if (!ctx.cr6.lt) goto loc_881731E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x881731e8
	if (ctx.cr6.lt) goto loc_881731E8;
	// subf r9,r25,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r25.u64;
	// add r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lbzx r9,r14,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r21.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lwz r14,152(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r14,r20
	ctx.r9.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r20.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x881731f0
	goto loc_881731F0;
loc_881731E8:
	// stbu r15,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r15.u8);
	ctx.r11.u32 = ea;
	// stbu r15,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r15.u8);
	ctx.r10.u32 = ea;
loc_881731F0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x88173170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88173170;
loc_881731F8:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 15404);
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r11,r17
	ctx.r7.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88173290
	if (!ctx.cr6.gt) goto loc_88173290;
	// subf r3,r24,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r24.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_8817323C:
	// lwz r11,15388(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15388);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8817327c
	if (!ctx.cr6.lt) goto loc_8817327C;
	// lwz r31,20(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8817327c
	if (!ctx.cr6.lt) goto loc_8817327C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8817327c
	if (ctx.cr6.lt) goto loc_8817327C;
	// subf r11,r24,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r24.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x88173280
	goto loc_88173280;
loc_8817327C:
	// stbu r22,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r9.u32 = ea;
loc_88173280:
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 15392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817323c
	if (ctx.cr6.lt) goto loc_8817323C;
loc_88173290:
	// lwz r10,15396(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 15396);
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// add r17,r11,r7
	ctx.r17.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881730c4
	if (ctx.cr6.lt) goto loc_881730C4;
loc_881732AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d4
	ctx.lr = 0x881732BC;
	__restfpr_28(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88190EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88190EB8;
	__savegprlr_23(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r23,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r23.u32);
	// stw r23,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// bne cr6,0x88191010
	if (!ctx.cr6.eq) goto loc_88191010;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88190f10
	if (!ctx.cr6.eq) goto loc_88190F10;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r8,13
	ctx.r8.s64 = 13;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_88190F04:
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88190f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88190F04;
	// b 0x8819120c
	goto loc_8819120C;
loc_88190F10:
	// addic. r31,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r31.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r31,24(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,257
	ctx.r11.u64 = ctx.r11.u64 | 257;
	// ble 0x88190f74
	if (!ctx.cr0.gt) goto loc_88190F74;
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// b 0x88190fa0
	goto loc_88190FA0;
loc_88190F74:
	// lbz r30,7(r8)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 7);
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r30,r30,r11
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
loc_88190FA0:
	// lwz r29,24(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lbz r5,7(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 7);
	// lbz r8,6(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 6);
	// lbz r4,5(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r31,3(r29)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r29.u32 + 3);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r4,2(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r30,1(r29)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// mullw r8,r4,r28
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// stw r8,-4(r29)
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r8.u32);
	// stw r8,-8(r29)
	REX_STORE_U32(ctx.r29.u32 + -8, ctx.r8.u32);
	// stw r8,-12(r29)
	REX_STORE_U32(ctx.r29.u32 + -12, ctx.r8.u32);
	// stw r8,-16(r29)
	REX_STORE_U32(ctx.r29.u32 + -16, ctx.r8.u32);
	// stw r8,-20(r29)
	REX_STORE_U32(ctx.r29.u32 + -20, ctx.r8.u32);
	// b 0x8819120c
	goto loc_8819120C;
loc_88191010:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// bne cr6,0x8819112c
	if (!ctx.cr6.eq) goto loc_8819112C;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// add r29,r5,r8
	ctx.r29.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r8
	ctx.r28.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r5,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lis r8,257
	ctx.r8.s64 = 16842752;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ori r25,r8,257
	ctx.r25.u64 = ctx.r8.u64 | 257;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r27,r5,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r8,-1(r31)
	REX_STORE_U8(ctx.r31.u32 + -1, ctx.r8.u8);
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbz r8,-1(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// stb r5,-2(r31)
	REX_STORE_U8(ctx.r31.u32 + -2, ctx.r5.u8);
	// lbzx r31,r30,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwz r30,20(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r5,-2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + -2);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r31,-3(r30)
	REX_STORE_U8(ctx.r30.u32 + -3, ctx.r31.u8);
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r5,-3(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -3);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r30,r29,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r30,-4(r31)
	REX_STORE_U8(ctx.r31.u32 + -4, ctx.r30.u8);
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbzx r30,r27,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -4);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r30,-5(r31)
	REX_STORE_U8(ctx.r31.u32 + -5, ctx.r30.u8);
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbzx r30,r28,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbz r5,-5(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -5);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r30,-6(r31)
	REX_STORE_U8(ctx.r31.u32 + -6, ctx.r30.u8);
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbz r5,-6(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -6);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r4,-7(r31)
	REX_STORE_U8(ctx.r31.u32 + -7, ctx.r4.u8);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbzx r31,r26,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// lbz r5,-7(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + -7);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stb r31,-8(r4)
	REX_STORE_U8(ctx.r4.u32 + -8, ctx.r31.u8);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lbz r8,-8(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + -8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// mullw r4,r11,r25
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x8819120c
	goto loc_8819120C;
loc_8819112C:
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bge cr6,0x88191174
	if (!ctx.cr6.lt) goto loc_88191174;
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// subf r31,r5,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x881911a8
	goto loc_881911A8;
loc_88191174:
	// lbz r28,7(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r29,r5,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// lis r31,257
	ctx.r31.s64 = 16842752;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// ori r31,r31,257
	ctx.r31.u64 = ctx.r31.u64 | 257;
	// mullw r31,r28,r31
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// stw r31,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// stw r31,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_881911A8:
	// stw r11,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r5,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lbz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stb r31,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
	// lbz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r31,-5(r11)
	REX_STORE_U8(ctx.r11.u32 + -5, ctx.r31.u8);
	// lbzux r31,r8,r5
	ea = ctx.r8.u32 + ctx.r5.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r31,-2(r11)
	REX_STORE_U8(ctx.r11.u32 + -2, ctx.r31.u8);
	// lbzux r31,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stb r31,-6(r11)
	REX_STORE_U8(ctx.r11.u32 + -6, ctx.r31.u8);
	// lbzux r31,r8,r5
	ea = ctx.r8.u32 + ctx.r5.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r31,-3(r11)
	REX_STORE_U8(ctx.r11.u32 + -3, ctx.r31.u8);
	// lbzux r31,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stb r31,-7(r11)
	REX_STORE_U8(ctx.r11.u32 + -7, ctx.r31.u8);
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stb r8,-4(r11)
	REX_STORE_U8(ctx.r11.u32 + -4, ctx.r8.u8);
	// lbzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r5,-8(r11)
	REX_STORE_U8(ctx.r11.u32 + -8, ctx.r5.u8);
loc_8819120C:
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r25,24(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r26,r11,-8
	ctx.r26.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r24,r26,1
	ctx.r24.s64 = ctx.r26.s64 + 1;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_88191238:
	// lbzx r11,r25,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r30.u32);
	// add r31,r25,r30
	ctx.r31.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lbzx r5,r26,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// ble cr6,0x8819125c
	if (!ctx.cr6.gt) goto loc_8819125C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x88191268
	goto loc_88191268;
loc_8819125C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88191268
	if (!ctx.cr6.lt) goto loc_88191268;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_88191268:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88191278
	if (!ctx.cr6.gt) goto loc_88191278;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x88191284
	goto loc_88191284;
loc_88191278:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88191284
	if (!ctx.cr6.lt) goto loc_88191284;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_88191284:
	// lbzx r5,r24,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r4,r27,r5
	ctx.r4.u64 = ctx.r27.u64 + ctx.r5.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// add r27,r4,r11
	ctx.r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// ble cr6,0x881912a4
	if (!ctx.cr6.gt) goto loc_881912A4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x881912b0
	goto loc_881912B0;
loc_881912A4:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881912b0
	if (!ctx.cr6.lt) goto loc_881912B0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_881912B0:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881912c0
	if (!ctx.cr6.gt) goto loc_881912C0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x881912cc
	goto loc_881912CC;
loc_881912C0:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881912cc
	if (!ctx.cr6.lt) goto loc_881912CC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_881912CC:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bdnz 0x88191238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88191238;
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r4,r29,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r29.u64;
	// add r5,r27,r28
	ctx.r5.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x881912f0
	if (ctx.cr6.lt) goto loc_881912F0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bge cr6,0x88191354
	if (!ctx.cr6.lt) goto loc_88191354;
loc_881912F0:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// stw r23,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// bge cr6,0x88191354
	if (!ctx.cr6.lt) goto loc_88191354;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lbz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r8,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 5;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
loc_88191354:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x88191374
	if (ctx.cr6.eq) goto loc_88191374;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88191374:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8819138c
	if (!ctx.cr6.eq) goto loc_8819138C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r11,r11,25248
	ctx.r11.s64 = ctx.r11.s64 + 25248;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// b 0x881913a8
	goto loc_881913A8;
loc_8819138C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// bne cr6,0x881913a4
	if (!ctx.cr6.eq) goto loc_881913A4;
	// addi r11,r11,25248
	ctx.r11.s64 = ctx.r11.s64 + 25248;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// b 0x881913a8
	goto loc_881913A8;
loc_881913A4:
	// addi r8,r11,25248
	ctx.r8.s64 = ctx.r11.s64 + 25248;
loc_881913A8:
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// bge cr6,0x88191410
	if (!ctx.cr6.lt) goto loc_88191410;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88191404
	if (ctx.cr6.eq) goto loc_88191404;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88191404
	if (ctx.cr6.eq) goto loc_88191404;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881913ec
	if (!ctx.cr6.eq) goto loc_881913EC;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881913EC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88191408
	if (!ctx.cr6.eq) goto loc_88191408;
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88191404:
	// stw r23,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
loc_88191408:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88191410:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819A030) {
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
	// addi r4,r3,3748
	ctx.r4.s64 = ctx.r3.s64 + 3748;
	// addi r3,r3,3744
	ctx.r3.s64 = ctx.r3.s64 + 3744;
	// bl 0x88171680
	ctx.lr = 0x8819A050;
	sub_88171680(ctx, base);
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// lwz r10,3748(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3776(r31)
	REX_STORE_U32(ctx.r31.u32 + 3776, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3780(r31)
	REX_STORE_U32(ctx.r31.u32 + 3780, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3784(r31)
	REX_STORE_U32(ctx.r31.u32 + 3784, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,3816(r31)
	REX_STORE_U32(ctx.r31.u32 + 3816, ctx.r6.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,3820(r31)
	REX_STORE_U32(ctx.r31.u32 + 3820, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,3824(r31)
	REX_STORE_U32(ctx.r31.u32 + 3824, ctx.r4.u32);
	// beq cr6,0x8819a0a0
	if (ctx.cr6.eq) goto loc_8819A0A0;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8819a0a4
	goto loc_8819A0A4;
loc_8819A0A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819A0A4:
	// lwz r11,3776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// stw r10,3828(r31)
	REX_STORE_U32(ctx.r31.u32 + 3828, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819a0c0
	if (ctx.cr6.eq) goto loc_8819A0C0;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8819a0c4
	goto loc_8819A0C4;
loc_8819A0C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819A0C4:
	// lwz r11,3780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// stw r10,3856(r31)
	REX_STORE_U32(ctx.r31.u32 + 3856, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819a0e0
	if (ctx.cr6.eq) goto loc_8819A0E0;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8819a0e4
	goto loc_8819A0E4;
loc_8819A0E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819A0E4:
	// lwz r11,3784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// stw r10,3860(r31)
	REX_STORE_U32(ctx.r31.u32 + 3860, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819a100
	if (ctx.cr6.eq) goto loc_8819A100;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8819a104
	goto loc_8819A104;
loc_8819A100:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8819A104:
	// lwz r10,3820(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// lwz r8,3824(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// stw r11,3864(r31)
	REX_STORE_U32(ctx.r31.u32 + 3864, ctx.r11.u32);
	// stw r9,14824(r31)
	REX_STORE_U32(ctx.r31.u32 + 14824, ctx.r9.u32);
	// stw r10,14828(r31)
	REX_STORE_U32(ctx.r31.u32 + 14828, ctx.r10.u32);
	// stw r8,14832(r31)
	REX_STORE_U32(ctx.r31.u32 + 14832, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8819BE08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8819BE10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r10,288(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8819be58
	if (!ctx.cr6.eq) goto loc_8819BE58;
	// lwz r10,20684(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819be6c
	if (ctx.cr6.eq) goto loc_8819BE6C;
loc_8819BE58:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x8819beec
	if (!ctx.cr6.eq) goto loc_8819BEEC;
loc_8819BE6C:
	// li r30,8
	ctx.r30.s64 = 8;
loc_8819BE70:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88052d90
	ctx.lr = 0x8819BE80;
	sub_88052D90(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x88052d90
	ctx.lr = 0x8819BE94;
	sub_88052D90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8819BEB0:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8819beb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819BEB0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8819BEC8:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8819bec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819BEC8;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x8819be70
	if (!ctx.cr0.eq) goto loc_8819BE70;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8819BEEC:
	// lwz r10,1776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r7,15536(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8819bf38
	if (!ctx.cr6.eq) goto loc_8819BF38;
	// bl 0x881c1c38
	ctx.lr = 0x8819BF34;
	sub_881C1C38(ctx, base);
	// b 0x8819bf3c
	goto loc_8819BF3C;
loc_8819BF38:
	// bl 0x881c1b70
	ctx.lr = 0x8819BF3C;
	sub_881C1B70(ctx, base);
loc_8819BF3C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,204(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,3812(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819bc88
	ctx.lr = 0x8819BF90;
	sub_8819BC88(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,1784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// mullw r11,r29,r8
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// lwz r6,1788(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1788);
	// lwz r5,15536(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r7,r4
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhzx r10,r6,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x8819bff8
	if (!ctx.cr6.eq) goto loc_8819BFF8;
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22184);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8819bff4
	if (ctx.cr6.eq) goto loc_8819BFF4;
	// bl 0x881c2a68
	ctx.lr = 0x8819BFF0;
	sub_881C2A68(ctx, base);
	// b 0x8819bff8
	goto loc_8819BFF8;
loc_8819BFF4:
	// bl 0x881c2b58
	ctx.lr = 0x8819BFF8;
	sub_881C2B58(ctx, base);
loc_8819BFF8:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,208(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r5,30
	ctx.r9.u64 = ctx.r5.u32 & 0x3;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bl 0x881c2c28
	ctx.lr = 0x8819C058;
	sub_881C2C28(ctx, base);
	// lwz r11,3796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// bl 0x881c2c28
	ctx.lr = 0x8819C088;
	sub_881C2C28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A34D0) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// lhz r8,50(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lhz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// srawi r4,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 16;
	// srw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// srw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a3514
	if (!ctx.cr6.eq) goto loc_881A3514;
	// li r11,1
	ctx.r11.s64 = 1;
loc_881A3514:
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r31,16(r6)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r6.u32 + 16);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r6,18(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 18);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srw r8,r31,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r30.u8 & 0x3F));
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srw r9,r6,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// subfic r7,r11,-7
	ctx.xer.ca = ctx.r11.u32 <= 4294967289;
	ctx.r7.u64 = static_cast<uint64_t>(-7) - ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881a3580
	if (!ctx.cr6.gt) goto loc_881A3580;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// b 0x881a3594
	goto loc_881A3594;
loc_881A3580:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// not r5,r11
	ctx.r5.u64 = ~ctx.r11.u64;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// and r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
loc_881A3594:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881a35a4
	if (!ctx.cr6.lt) goto loc_881A35A4;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x881a35b0
	goto loc_881A35B0;
loc_881A35A4:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881a35b4
	if (!ctx.cr6.gt) goto loc_881A35B4;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_881A35B0:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_881A35B4:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881a35d4
	if (!ctx.cr6.lt) goto loc_881A35D4;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_881A35D4:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881a35e4
	if (!ctx.cr6.gt) goto loc_881A35E4;
	// subf r11,r6,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_881A35E4:
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881A59D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A59D8;
	__savegprlr_14(ctx, base);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r25,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r25.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// subfic r24,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r24.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfic r23,r4,-2
	ctx.xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r23.u64 = static_cast<uint64_t>(-2) - ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r22,r4,-3
	ctx.xer.ca = ctx.r4.u32 <= 4294967293;
	ctx.r22.u64 = static_cast<uint64_t>(-3) - ctx.r4.u64;
	// subfic r21,r4,-4
	ctx.xer.ca = ctx.r4.u32 <= 4294967292;
	ctx.r21.u64 = static_cast<uint64_t>(-4) - ctx.r4.u64;
	// subfic r20,r4,-5
	ctx.xer.ca = ctx.r4.u32 <= 4294967291;
	ctx.r20.u64 = static_cast<uint64_t>(-5) - ctx.r4.u64;
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r7,r9,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subfic r6,r4,-6
	ctx.xer.ca = ctx.r4.u32 <= 4294967290;
	ctx.r6.u64 = static_cast<uint64_t>(-6) - ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// stw r6,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r19,r4,1
	ctx.r19.s64 = ctx.r4.s64 + 1;
	// addi r18,r4,-1
	ctx.r18.s64 = ctx.r4.s64 + -1;
	// addi r17,r4,-2
	ctx.r17.s64 = ctx.r4.s64 + -2;
	// addi r16,r4,-3
	ctx.r16.s64 = ctx.r4.s64 + -3;
	// addi r15,r4,-4
	ctx.r15.s64 = ctx.r4.s64 + -4;
	// addi r14,r4,-5
	ctx.r14.s64 = ctx.r4.s64 + -5;
	// addi r5,r4,-6
	ctx.r5.s64 = ctx.r4.s64 + -6;
	// b 0x881a5a50
	goto loc_881A5A50;
loc_881A5A4C:
	// lwz r6,-160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
loc_881A5A50:
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r31,r20,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// lbzx r30,r21,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r3,-5(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r6,-6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r29,r22,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r30,-4(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbzx r29,r17,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lbzx r3,r16,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// lbzx r30,r23,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbz r28,-3(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r29,r18,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbz r28,-5(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// lbz r30,-6(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbzx r27,r24,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r29,-2(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbzx r28,r19,r11
	ctx.r28.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r11.u32);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lbz r27,-4(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// lbzx r29,r25,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r28,-1(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbzx r27,r5,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbz r29,-3(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// lbzux r6,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r26,1(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r27,r11,r4
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbz r6,-2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbzx r31,r14,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r11.u32);
	// lbz r27,-1(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lbzx r29,r15,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// lbz r30,1(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x881a5a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A5A4C;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r3,r9,r11
	ctx.r3.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A8DE8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,-10072(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -10072);
	// ble cr6,0x881a8e34
	if (!ctx.cr6.gt) goto loc_881A8E34;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881A8E18:
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r7,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r3,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a8e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A8E18;
loc_881A8E34:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881a8e60
	if (!ctx.cr6.gt) goto loc_881A8E60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881A8E44:
	// lbzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r4,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a8e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A8E44;
loc_881A8E60:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881A8E70:
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r7,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a8e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A8E70;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881A9838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881A9840;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,3744(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r9,220(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,3776(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r30,3836(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// lwz r27,616(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 616);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,3780(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r29,3840(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// lwz r28,3760(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,204(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// srawi r25,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r3.s32 >> 1;
	// lwz r3,3832(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r27,616(r28)
	REX_STORE_U32(ctx.r28.u32 + 616, ctx.r27.u32);
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mullw r8,r25,r8
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r8.s32);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r24,r4,r8
	ctx.r24.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r27,r6,r11
	ctx.r27.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r25,r7,r8
	ctx.r25.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x881a995c
	if (!ctx.cr6.gt) goto loc_881A995C;
loc_881A98D4:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x881ece80
	ctx.lr = 0x881A98E8;
	sub_881ECE80(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x881ece80
	ctx.lr = 0x881A9904;
	sub_881ECE80(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881ece80
	ctx.lr = 0x881A9924;
	sub_881ECE80(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881ece80
	ctx.lr = 0x881A9940;
	sub_881ECE80(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881a98d4
	if (ctx.cr6.lt) goto loc_881A98D4;
loc_881A995C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AB5E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x881AB5F0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r18,128(r3)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r17,132(r3)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ab618
	if (!ctx.cr6.eq) goto loc_881AB618;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_881AB618:
	// lwz r7,3772(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3772);
	// lwz r10,15692(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15692);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r24,r10,r4
	ctx.r24.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,15956(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15956);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r7,r11
	ctx.r22.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq cr6,0x881ab6d8
	if (ctx.cr6.eq) goto loc_881AB6D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,156(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r29,160(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x8814d328
	ctx.lr = 0x881AB660;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881ab670
	if (ctx.cr6.eq) goto loc_881AB670;
	// lwz r28,15372(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// lwz r29,15376(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
loc_881AB670:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881ab85c
	if (ctx.cr6.eq) goto loc_881AB85C;
loc_881AB67C:
	// lwz r11,15956(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15956);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881AB69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,15684(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// add r25,r9,r25
	ctx.r25.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// blt cr6,0x881ab67c
	if (ctx.cr6.lt) goto loc_881AB67C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_881AB6D8:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x881ab85c
	if (ctx.cr6.eq) goto loc_881AB85C;
loc_881AB6E4:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x881ab834
	if (ctx.cr6.eq) goto loc_881AB834;
	// addi r20,r18,-1
	ctx.r20.s64 = ctx.r18.s64 + -1;
	// addi r19,r17,-1
	ctx.r19.s64 = ctx.r17.s64 + -1;
	// subf r23,r26,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r26.u64;
loc_881AB708:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x881ab748
	if (ctx.cr6.eq) goto loc_881AB748;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x881ab748
	if (ctx.cr6.eq) goto loc_881AB748;
	// lwz r11,15936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15936);
	// add r7,r23,r30
	ctx.r7.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,15684(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881AB744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x881ab818
	goto loc_881AB818;
loc_881AB748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x881AB750;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881ab794
	if (ctx.cr6.eq) goto loc_881AB794;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x881ab768
	if (ctx.cr6.eq) goto loc_881AB768;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x881ab778
	goto loc_881AB778;
loc_881AB768:
	// lwz r10,15380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15380);
	// lwz r11,15372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_881AB778:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x881ab788
	if (ctx.cr6.eq) goto loc_881AB788;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881ab7ec
	goto loc_881AB7EC;
loc_881AB788:
	// lwz r11,15384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15384);
	// lwz r9,15376(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// b 0x881ab7cc
	goto loc_881AB7CC;
loc_881AB794:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x881ab7a4
	if (ctx.cr6.eq) goto loc_881AB7A4;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x881ab7b4
	goto loc_881AB7B4;
loc_881AB7A4:
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_881AB7B4:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x881ab7c4
	if (ctx.cr6.eq) goto loc_881AB7C4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881ab7ec
	goto loc_881AB7EC;
loc_881AB7C4:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
loc_881AB7CC:
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r11,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r6.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_881AB7EC:
	// lwz r16,15940(r31)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 15940);
	// add r7,r23,r30
	ctx.r7.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x881AB818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB818:
	// lwz r11,15696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15696);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x881ab708
	if (ctx.cr6.lt) goto loc_881AB708;
loc_881AB834:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,15708(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15708);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x881ab6e4
	if (ctx.cr6.lt) goto loc_881AB6E4;
loc_881AB85C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AEA88) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
loc_881AEA8C:
	// subf. r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bge 0x881aea8c
	if (!ctx.cr0.lt) goto loc_881AEA8C;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881AEC30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881AEC38;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r22,356(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r21,84(r3)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stb r11,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881af194
	if (ctx.cr6.lt) goto loc_881AF194;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x881af194
	if (ctx.cr6.gt) goto loc_881AF194;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,352(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881aecf8
	if (!ctx.cr6.eq) goto loc_881AECF8;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881aece4
	if (!ctx.cr0.lt) goto loc_881AECE4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AECE4;
	sub_88156678(ctx, base);
loc_881AECE4:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r9,8,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
loc_881AECF8:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r19,r11,24,29,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// bne cr6,0x881aed44
	if (!ctx.cr6.eq) goto loc_881AED44;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881aed38
	if (!ctx.cr0.lt) goto loc_881AED38;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AED38;
	sub_88156678(ctx, base);
loc_881AED38:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_881AED44:
	// lwz r11,22340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22340);
	// li r18,5
	ctx.r18.s64 = 5;
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881aede8
	if (ctx.cr6.eq) goto loc_881AEDE8;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x881aede8
	if (!ctx.cr6.eq) goto loc_881AEDE8;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881aed90
	if (!ctx.cr0.lt) goto loc_881AED90;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AED90;
	sub_88156678(ctx, base);
loc_881AED90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881aeddc
	if (!ctx.cr6.eq) goto loc_881AEDDC;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881aedc0
	if (!ctx.cr0.lt) goto loc_881AEDC0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AEDC0;
	sub_88156678(ctx, base);
loc_881AEDC0:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881aedd4
	if (ctx.cr6.eq) goto loc_881AEDD4;
	// rlwimi r11,r18,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x881aedd8
	goto loc_881AEDD8;
loc_881AEDD4:
	// rlwimi r11,r28,9,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
loc_881AEDD8:
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_881AEDDC:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
loc_881AEDE8:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881af160
	if (ctx.cr6.eq) goto loc_881AF160;
	// sth r29,14(r15)
	REX_STORE_U16(ctx.r15.u32 + 14, ctx.r29.u16);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// sth r29,16(r15)
	REX_STORE_U16(ctx.r15.u32 + 16, ctx.r29.u16);
	// sth r29,18(r15)
	REX_STORE_U16(ctx.r15.u32 + 18, ctx.r29.u16);
	// bne cr6,0x881aee84
	if (!ctx.cr6.eq) goto loc_881AEE84;
	// stw r29,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r14,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r20,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AEE2C;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881aee74
	if (ctx.cr6.eq) goto loc_881AEE74;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881aee5c
	if (!ctx.cr0.lt) goto loc_881AEE5C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AEE5C;
	sub_88156678(ctx, base);
loc_881AEE5C:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// b 0x881afe68
	goto loc_881AFE68;
loc_881AEE74:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x881afe68
	goto loc_881AFE68;
loc_881AEE84:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r24,r20,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x881aef8c
	if (!ctx.cr6.eq) goto loc_881AEF8C;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r23,r14,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_881AEEB4:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// add r28,r11,r23
	ctx.r28.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r27,r10,r24
	ctx.r27.u64 = ctx.r10.u64 + ctx.r24.u64;
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r26,r11,r27
	ctx.r26.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AEEF0;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881aef38
	if (ctx.cr6.eq) goto loc_881AEF38;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881aef20
	if (!ctx.cr0.lt) goto loc_881AEF20;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AEF20;
	sub_88156678(ctx, base);
loc_881AEF20:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_881AEF38:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AEF54;
	sub_8819B8E0(ctx, base);
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// blt cr6,0x881aeeb4
	if (ctx.cr6.lt) goto loc_881AEEB4;
	// b 0x881afe60
	goto loc_881AFE60;
loc_881AEF8C:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x881af09c
	if (!ctx.cr6.eq) goto loc_881AF09C;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r23,r14,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_881AEFAC:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// add r28,r11,r23
	ctx.r28.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r27,r10,r24
	ctx.r27.u64 = ctx.r10.u64 + ctx.r24.u64;
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r26,r11,r27
	ctx.r26.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AEFE8;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af030
	if (ctx.cr6.eq) goto loc_881AF030;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af018
	if (!ctx.cr0.lt) goto loc_881AF018;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF018;
	sub_88156678(ctx, base);
loc_881AF018:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_881AF030:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AF04C;
	sub_8819B8E0(ctx, base);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,1776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// sthx r6,r5,r8
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u16);
	// lwz r4,1780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r4
	REX_STORE_U16(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u16);
	// blt cr6,0x881aefac
	if (ctx.cr6.lt) goto loc_881AEFAC;
	// b 0x881afe60
	goto loc_881AFE60;
loc_881AF09C:
	// stw r29,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// rlwinm r25,r14,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r22)
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r29.u32);
	// stw r29,8(r22)
	REX_STORE_U32(ctx.r22.u32 + 8, ctx.r29.u32);
	// stw r29,12(r22)
	REX_STORE_U32(ctx.r22.u32 + 12, ctx.r29.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_881AF0B4:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r27,r10,r24
	ctx.r27.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AF0E0;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af128
	if (ctx.cr6.eq) goto loc_881AF128;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r26,r10,1,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af110
	if (!ctx.cr0.lt) goto loc_881AF110;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF110;
	sub_88156678(ctx, base);
loc_881AF110:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x881af134
	goto loc_881AF134;
loc_881AF128:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_881AF134:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AF14C;
	sub_8819B8E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x881af0b4
	if (ctx.cr6.lt) goto loc_881AF0B4;
	// b 0x881afe60
	goto loc_881AFE60;
loc_881AF160:
	// li r16,1
	ctx.r16.s64 = 1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x881af328
	if (!ctx.cr6.eq) goto loc_881AF328;
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af1a0
	if (ctx.cr6.eq) goto loc_881AF1A0;
	// lwz r5,356(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x88185a60
	ctx.lr = 0x881AF188;
	sub_88185A60(ctx, base);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af1ac
	if (ctx.cr6.eq) goto loc_881AF1AC;
loc_881AF194:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881AF1A0:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x881c4d10
	ctx.lr = 0x881AF1AC;
	sub_881C4D10(ctx, base);
loc_881AF1AC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// rlwinm r5,r14,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r20,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AF1D4;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af228
	if (ctx.cr6.eq) goto loc_881AF228;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881af228
	if (!ctx.cr6.eq) goto loc_881AF228;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af214
	if (!ctx.cr0.lt) goto loc_881AF214;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF214;
	sub_88156678(ctx, base);
loc_881AF214:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
loc_881AF228:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881af2c0
	if (!ctx.cr6.eq) goto loc_881AF2C0;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881af274
	if (ctx.cr6.eq) goto loc_881AF274;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881af274
	if (ctx.cr6.eq) goto loc_881AF274;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881aeaa0
	ctx.lr = 0x881AF26C;
	sub_881AEAA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
loc_881AF274:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881afe1c
	if (ctx.cr6.eq) goto loc_881AFE1C;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af2ac
	if (!ctx.cr0.lt) goto loc_881AF2AC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF2AC;
	sub_88156678(ctx, base);
loc_881AF2AC:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// b 0x881afe1c
	goto loc_881AFE1C;
loc_881AF2C0:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r27,396(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881af2e0
	if (ctx.cr6.eq) goto loc_881AF2E0;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881af2e4
	if (ctx.cr6.eq) goto loc_881AF2E4;
loc_881AF2E0:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881AF2E4:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881af328
	if (ctx.cr6.eq) goto loc_881AF328;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af318
	if (!ctx.cr0.lt) goto loc_881AF318;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF318;
	sub_88156678(ctx, base);
loc_881AF318:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_881AF328:
	// lwz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2144);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r14,r10,32768
	ctx.r14.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881af348
	if (!ctx.cr6.eq) goto loc_881AF348;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// stw r28,20(r21)
	REX_STORE_U32(ctx.r21.u32 + 20, ctx.r28.u32);
	// b 0x881af470
	goto loc_881AF470;
loc_881AF348:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
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
	// blt cr6,0x881af434
	if (ctx.cr6.lt) goto loc_881AF434;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881af42c
	if (!ctx.cr6.lt) goto loc_881AF42C;
loc_881AF394:
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881af3c0
	if (ctx.cr6.lt) goto loc_881AF3C0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156440
	ctx.lr = 0x881AF3B0;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881af394
	if (ctx.cr6.eq) goto loc_881AF394;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881af46c
	goto loc_881AF46C;
loc_881AF3C0:
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
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// stw r3,12(r21)
	REX_STORE_U32(ctx.r21.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
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
	// stw r10,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
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
	// std r7,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r7.u64);
loc_881AF42C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881af46c
	goto loc_881AF46C;
loc_881AF434:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156500
	ctx.lr = 0x881AF43C;
	sub_88156500(ctx, base);
loc_881AF43C:
	// ld r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881AF454;
	sub_88156500(ctx, base);
	// add r10,r30,r14
	ctx.r10.u64 = ctx.r30.u64 + ctx.r14.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881af43c
	if (ctx.cr6.lt) goto loc_881AF43C;
loc_881AF46C:
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
loc_881AF470:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af4a4
	if (ctx.cr6.eq) goto loc_881AF4A4;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x881af4a4
	if (!ctx.cr6.eq) goto loc_881AF4A4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881aeaa0
	ctx.lr = 0x881AF49C;
	sub_881AEAA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
loc_881AF4A4:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// bne cr6,0x881af7c0
	if (!ctx.cr6.eq) goto loc_881AF7C0;
	// lwz r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r20,r17,0,26,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// lwz r18,292(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_881AF4D8:
	// slw r11,r16,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r28.u8 & 0x3F));
	// and r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 & ctx.r17.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881af528
	if (ctx.cr6.eq) goto loc_881AF528;
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af518
	if (ctx.cr6.eq) goto loc_881AF518;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// add r5,r24,r11
	ctx.r5.u64 = ctx.r24.u64 + ctx.r11.u64;
	// bl 0x88185a60
	ctx.lr = 0x881AF508;
	sub_88185A60(ctx, base);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
	// b 0x881af52c
	goto loc_881AF52C;
loc_881AF518:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x881c4d10
	ctx.lr = 0x881AF524;
	sub_881C4D10(ctx, base);
	// b 0x881af52c
	goto loc_881AF52C;
loc_881AF528:
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_881AF52C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// clrlwi r8,r28,31
	ctx.r8.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// rlwinm r9,r18,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AF570;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af5c4
	if (ctx.cr6.eq) goto loc_881AF5C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881af5c4
	if (!ctx.cr6.eq) goto loc_881AF5C4;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af5b0
	if (!ctx.cr0.lt) goto loc_881AF5B0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF5B0;
	sub_88156678(ctx, base);
loc_881AF5B0:
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_881AF5C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AF5DC;
	sub_8819B8E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af5fc
	if (ctx.cr6.eq) goto loc_881AF5FC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819d220
	ctx.lr = 0x881AF5F8;
	sub_8819D220(ctx, base);
	// or r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 | ctx.r19.u64;
loc_881AF5FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// slw r10,r25,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// slw r8,r9,r28
	ctx.r8.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r28.u8 & 0x3F));
	// add r22,r25,r22
	ctx.r22.u64 = ctx.r25.u64 + ctx.r22.u64;
	// or r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 | ctx.r23.u64;
	// or r20,r8,r20
	ctx.r20.u64 = ctx.r8.u64 | ctx.r20.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r24,16
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16, ctx.xer);
	// blt cr6,0x881af4d8
	if (ctx.cr6.lt) goto loc_881AF4D8;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// li r9,48
	ctx.r9.s64 = 48;
	// xoris r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r7,r11,r22
	ctx.r7.u64 = ctx.r22.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addc r6,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// or r11,r3,r23
	ctx.r11.u64 = ctx.r3.u64 | ctx.r23.u64;
	// beq cr6,0x881af664
	if (ctx.cr6.eq) goto loc_881AF664;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// bne cr6,0x881af668
	if (!ctx.cr6.eq) goto loc_881AF668;
loc_881AF664:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_881AF668:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881af684
	if (ctx.cr6.eq) goto loc_881AF684;
	// andc r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af688
	if (!ctx.cr6.eq) goto loc_881AF688;
loc_881AF684:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881AF688:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x881af69c
	if (!ctx.cr6.eq) goto loc_881AF69C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq cr6,0x881af6a0
	if (ctx.cr6.eq) goto loc_881AF6A0;
loc_881AF69C:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_881AF6A0:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// ble cr6,0x881af6bc
	if (!ctx.cr6.gt) goto loc_881AF6BC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819d2b0
	ctx.lr = 0x881AF6B8;
	sub_8819D2B0(ctx, base);
	// or r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 | ctx.r19.u64;
loc_881AF6BC:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af6e8
	if (ctx.cr6.eq) goto loc_881AF6E8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881af6e8
	if (ctx.cr6.eq) goto loc_881AF6E8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881aeaa0
	ctx.lr = 0x881AF6E0;
	sub_881AEAA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
loc_881AF6E8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x881af728
	if (ctx.cr6.eq) goto loc_881AF728;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af718
	if (!ctx.cr0.lt) goto loc_881AF718;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF718;
	sub_88156678(ctx, base);
loc_881AF718:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_881AF728:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881af79c
	if (ctx.cr6.eq) goto loc_881AF79C;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af758
	if (!ctx.cr0.lt) goto loc_881AF758;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF758;
	sub_88156678(ctx, base);
loc_881AF758:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881af790
	if (ctx.cr6.eq) goto loc_881AF790;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af78c
	if (!ctx.cr0.lt) goto loc_881AF78C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF78C;
	sub_88156678(ctx, base);
loc_881AF78C:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_881AF790:
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
loc_881AF79C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x881afe0c
	if (ctx.cr6.eq) goto loc_881AFE0C;
	// lwz r11,2520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881afc7c
	if (!ctx.cr6.eq) goto loc_881AFC7C;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,20(r21)
	REX_STORE_U32(ctx.r21.u32 + 20, ctx.r11.u32);
	// b 0x881afda0
	goto loc_881AFDA0;
loc_881AF7C0:
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,1280
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1280, ctx.xer);
	// bne cr6,0x881afa38
	if (!ctx.cr6.eq) goto loc_881AFA38;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r19,r17,0,26,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x3E;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// rlwinm r19,r19,0,30,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// rlwinm r23,r10,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// rlwinm r22,r9,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// li r18,3
	ctx.r18.s64 = 3;
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_881AF808:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// slw r9,r16,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r28.u8 & 0x3F));
	// add r27,r11,r22
	ctx.r27.u64 = ctx.r11.u64 + ctx.r22.u64;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mullw r8,r27,r10
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// add r26,r11,r23
	ctx.r26.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r9,r17
	ctx.r7.u64 = ctx.r9.u64 & ctx.r17.u64;
	// add r24,r11,r26
	ctx.r24.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881af874
	if (ctx.cr6.eq) goto loc_881AF874;
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// beq cr6,0x881af85c
	if (ctx.cr6.eq) goto loc_881AF85C;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x88185a60
	ctx.lr = 0x881AF858;
	sub_88185A60(ctx, base);
	// b 0x881af868
	goto loc_881AF868;
loc_881AF85C:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x881c4d10
	ctx.lr = 0x881AF868;
	sub_881C4D10(ctx, base);
loc_881AF868:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
loc_881AF874:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AF890;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af8ec
	if (ctx.cr6.eq) goto loc_881AF8EC;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881af8ec
	if (!ctx.cr6.eq) goto loc_881AF8EC;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881af8d4
	if (!ctx.cr0.lt) goto loc_881AF8D4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AF8D4;
	sub_88156678(ctx, base);
loc_881AF8D4:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_881AF8EC:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AF908;
	sub_8819B8E0(ctx, base);
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// beq cr6,0x881af954
	if (ctx.cr6.eq) goto loc_881AF954;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// slw r10,r18,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r28.u8 & 0x3F));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// or r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 | ctx.r20.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_881AF954:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// slw r8,r9,r28
	ctx.r8.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r28.u8 & 0x3F));
	// or r19,r8,r19
	ctx.r19.u64 = ctx.r8.u64 | ctx.r19.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// blt cr6,0x881af808
	if (ctx.cr6.lt) goto loc_881AF808;
	// cmpwi cr6,r20,15
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 15, ctx.xer);
	// bne cr6,0x881af984
	if (!ctx.cr6.eq) goto loc_881AF984;
	// li r20,63
	ctx.r20.s64 = 63;
loc_881AF984:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af9a0
	if (ctx.cr6.eq) goto loc_881AF9A0;
	// andc r11,r19,r20
	ctx.r11.u64 = ctx.r19.u64 & ~ctx.r20.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af9a4
	if (!ctx.cr6.eq) goto loc_881AF9A4;
loc_881AF9A0:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881AF9A4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881af9b8
	if (!ctx.cr6.eq) goto loc_881AF9B8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x881af9bc
	if (ctx.cr6.eq) goto loc_881AF9BC;
loc_881AF9B8:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_881AF9BC:
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881af9f4
	if (ctx.cr6.eq) goto loc_881AF9F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af9f4
	if (ctx.cr6.eq) goto loc_881AF9F4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881aeaa0
	ctx.lr = 0x881AF9E0;
	sub_881AEAA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af9f4
	if (ctx.cr6.eq) goto loc_881AF9F4;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881AF9F4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x881af79c
	if (ctx.cr6.eq) goto loc_881AF79C;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881afa24
	if (!ctx.cr0.lt) goto loc_881AFA24;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AFA24;
	sub_88156678(ctx, base);
loc_881AFA24:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// b 0x881af79c
	goto loc_881AF79C;
loc_881AFA38:
	// rlwinm r11,r11,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// bne cr6,0x881af728
	if (!ctx.cr6.eq) goto loc_881AF728;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r19,r17,0,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x3C;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// rlwinm r23,r10,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r9,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_881AFA78:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// slw r9,r16,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r28.u8 & 0x3F));
	// add r27,r11,r22
	ctx.r27.u64 = ctx.r11.u64 + ctx.r22.u64;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mullw r8,r27,r10
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// add r26,r11,r23
	ctx.r26.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r9,r17
	ctx.r7.u64 = ctx.r9.u64 & ctx.r17.u64;
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881afae4
	if (ctx.cr6.eq) goto loc_881AFAE4;
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// beq cr6,0x881afacc
	if (ctx.cr6.eq) goto loc_881AFACC;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x88185a60
	ctx.lr = 0x881AFAC8;
	sub_88185A60(ctx, base);
	// b 0x881afad8
	goto loc_881AFAD8;
loc_881AFACC:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x881c4d10
	ctx.lr = 0x881AFAD8;
	sub_881C4D10(ctx, base);
loc_881AFAD8:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
loc_881AFAE4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c5318
	ctx.lr = 0x881AFB00;
	sub_881C5318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881afb5c
	if (ctx.cr6.eq) goto loc_881AFB5C;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881afb5c
	if (!ctx.cr6.eq) goto loc_881AFB5C;
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r24,r10,1,63
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bge 0x881afb44
	if (!ctx.cr0.lt) goto loc_881AFB44;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156678
	ctx.lr = 0x881AFB44;
	sub_88156678(ctx, base);
loc_881AFB44:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// extsb r10,r24
	ctx.r10.s64 = ctx.r24.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_881AFB5C:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AFB78;
	sub_8819B8E0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,1776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r4,1780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// beq cr6,0x881afbdc
	if (ctx.cr6.eq) goto loc_881AFBDC;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// slw r10,r18,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r28.u8 & 0x3F));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// or r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 | ctx.r20.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_881AFBDC:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// slw r8,r9,r28
	ctx.r8.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r28.u8 & 0x3F));
	// or r19,r8,r19
	ctx.r19.u64 = ctx.r8.u64 | ctx.r19.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// blt cr6,0x881afa78
	if (ctx.cr6.lt) goto loc_881AFA78;
	// cmpwi cr6,r20,15
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 15, ctx.xer);
	// bne cr6,0x881afc0c
	if (!ctx.cr6.eq) goto loc_881AFC0C;
	// li r20,63
	ctx.r20.s64 = 63;
loc_881AFC0C:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881afc28
	if (ctx.cr6.eq) goto loc_881AFC28;
	// andc r11,r19,r20
	ctx.r11.u64 = ctx.r19.u64 & ~ctx.r20.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881afc2c
	if (!ctx.cr6.eq) goto loc_881AFC2C;
loc_881AFC28:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881AFC2C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881afc40
	if (!ctx.cr6.eq) goto loc_881AFC40;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x881afc44
	if (ctx.cr6.eq) goto loc_881AFC44;
loc_881AFC40:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_881AFC44:
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881af9f4
	if (ctx.cr6.eq) goto loc_881AF9F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881af9f4
	if (ctx.cr6.eq) goto loc_881AF9F4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881aeaa0
	ctx.lr = 0x881AFC68;
	sub_881AEAA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881af9f4
	if (ctx.cr6.eq) goto loc_881AF9F4;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881AFC7C:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
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
	// blt cr6,0x881afd68
	if (ctx.cr6.lt) goto loc_881AFD68;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881afd60
	if (!ctx.cr6.lt) goto loc_881AFD60;
loc_881AFCC8:
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881afcf4
	if (ctx.cr6.lt) goto loc_881AFCF4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156440
	ctx.lr = 0x881AFCE4;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881afcc8
	if (ctx.cr6.eq) goto loc_881AFCC8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881afda0
	goto loc_881AFDA0;
loc_881AFCF4:
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
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// stw r3,12(r21)
	REX_STORE_U32(ctx.r21.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
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
	// stw r10,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r5.u64);
loc_881AFD60:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881afda0
	goto loc_881AFDA0;
loc_881AFD68:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x88156500
	ctx.lr = 0x881AFD70;
	sub_88156500(ctx, base);
loc_881AFD70:
	// ld r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881AFD88;
	sub_88156500(ctx, base);
	// add r10,r30,r14
	ctx.r10.u64 = ctx.r30.u64 + ctx.r14.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881afd70
	if (ctx.cr6.lt) goto loc_881AFD70;
loc_881AFDA0:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881af194
	if (!ctx.cr6.eq) goto loc_881AF194;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x881af194
	if (ctx.cr6.gt) goto loc_881AF194;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// subfc r8,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r30.u64 - ctx.r11.u64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// addi r11,r9,26864
	ctx.r11.s64 = ctx.r9.s64 + 26864;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwimi r10,r9,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwimi r8,r7,24,5,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x7000000) | (ctx.r8.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r8,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r8.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r5,r6,20,10,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x300000) | (ctx.r5.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwinm r4,r5,0,5,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r4,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r4.u32);
loc_881AFE0C:
	// lwz r20,292(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r14,300(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r19,92(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881AFE1C:
	// srawi r11,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 1;
	// clrlwi r10,r17,31
	ctx.r10.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r10,14(r15)
	REX_STORE_U8(ctx.r15.u32 + 14, ctx.r10.u8);
	// stb r9,15(r15)
	REX_STORE_U8(ctx.r15.u32 + 15, ctx.r9.u8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r8,16(r15)
	REX_STORE_U8(ctx.r15.u32 + 16, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r7,17(r15)
	REX_STORE_U8(ctx.r15.u32 + 17, ctx.r7.u8);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// stb r5,18(r15)
	REX_STORE_U8(ctx.r15.u32 + 18, ctx.r5.u8);
	// stb r4,19(r15)
	REX_STORE_U8(ctx.r15.u32 + 19, ctx.r4.u8);
loc_881AFE60:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x881afec8
	if (!ctx.cr6.eq) goto loc_881AFEC8;
loc_881AFE68:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r5,r14,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r20,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b8e0
	ctx.lr = 0x881AFE80;
	sub_8819B8E0(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// mullw r10,r9,r14
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r14.s32);
	// add r7,r10,r20
	ctx.r7.u64 = ctx.r10.u64 + ctx.r20.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthux r5,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthux r4,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sth r5,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r5.u16);
	// sth r4,-2(r10)
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r4.u16);
loc_881AFEC8:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DD5F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881DD600;
	__savegprlr_20(ctx, base);
	// lwz r11,14588(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// subf. r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,14604(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r7,14608(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// lwz r29,14492(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r31,14500(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// srawi r27,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 2;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addze r7,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r27,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 1;
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// addze r29,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addze r31,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r31.s64 = temp.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r21,r30,r3
	ctx.r21.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r22,r11,r5
	ctx.r22.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r20,r11,r6
	ctx.r20.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// ble 0x881dd6bc
	if (!ctx.cr0.gt) goto loc_881DD6BC;
	// lwz r7,14524(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_881DD674:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881dd6a8
	if (!ctx.cr6.gt) goto loc_881DD6A8;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
loc_881DD688:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lwz r7,14524(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881dd688
	if (ctx.cr6.lt) goto loc_881DD688;
loc_881DD6A8:
	// lwz r11,14492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x881dd674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DD674;
loc_881DD6BC:
	// lwz r7,14496(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// li r24,2
	ctx.r24.s64 = 2;
	// addze r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r23.s64 = temp.s64;
	// add r8,r7,r21
	ctx.r8.u64 = ctx.r7.u64 + ctx.r21.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r26,r10,r22
	ctx.r26.u64 = ctx.r10.u64 + ctx.r22.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r25,r10,r20
	ctx.r25.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// ble cr6,0x881dd800
	if (!ctx.cr6.gt) goto loc_881DD800;
	// addi r10,r23,-3
	ctx.r10.s64 = ctx.r23.s64 + -3;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r24,r7,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881DD70C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881dd7dc
	if (!ctx.cr6.gt) goto loc_881DD7DC;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// subf r31,r11,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r8,r11,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_881DD730:
	// lbzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r30,r6,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r29,r5,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r6,r5,r29
	ctx.r6.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stbu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r3.u32 = ea;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r30,r5,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// subf r5,r5,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r5.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r29,r5,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r6,r5,r29
	ctx.r6.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbx r6,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r30,r6,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881dd730
	if (ctx.cr6.lt) goto loc_881DD730;
loc_881DD7DC:
	// lwz r7,14496(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bdnz 0x881dd70c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DD70C;
loc_881DD800:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x881dd83c
	if (!ctx.cr6.eq) goto loc_881DD83C;
	// lwz r7,14524(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881dd83c
	if (!ctx.cr6.gt) goto loc_881DD83C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_881DD81C:
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r7,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// lwz r4,14524(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881dd81c
	if (ctx.cr6.lt) goto loc_881DD81C;
loc_881DD83C:
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r11,14492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r6,14496(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r8,r22
	ctx.r11.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r7,r8,r20
	ctx.r7.u64 = ctx.r8.u64 + ctx.r20.u64;
	// add r8,r5,r21
	ctx.r8.u64 = ctx.r5.u64 + ctx.r21.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r25,r10,r7
	ctx.r25.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r27,r6,r8
	ctx.r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// ble cr6,0x881dd988
	if (!ctx.cr6.gt) goto loc_881DD988;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r5,3
	ctx.r24.s64 = ctx.r5.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881DD898:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881dd964
	if (!ctx.cr6.gt) goto loc_881DD964;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// subf r31,r11,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r8,r11,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r11.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881DD8BC:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r30,r6,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r30,r6,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r29,r5,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbx r6,r10,r28
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r6.u8);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881dd8bc
	if (ctx.cr6.lt) goto loc_881DD8BC;
loc_881DD964:
	// lwz r5,14496(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r5,r27
	ctx.r8.u64 = ctx.r5.u64 + ctx.r27.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r5,r8
	ctx.r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bdnz 0x881dd898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DD898;
loc_881DD988:
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881dd9e8
	if (!ctx.cr6.gt) goto loc_881DD9E8;
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// subf r4,r8,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r8.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881DD9A4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// stb r8,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// bne cr6,0x881dd9d0
	if (!ctx.cr6.eq) goto loc_881DD9D0;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r6,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r6.u8);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r3,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r3.u8);
loc_881DD9D0:
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881dd9a4
	if (ctx.cr6.lt) goto loc_881DD9A4;
loc_881DD9E8:
	// lwz r8,14588(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r22
	ctx.r6.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r5,r10,r20
	ctx.r5.u64 = ctx.r10.u64 + ctx.r20.u64;
	// ble cr6,0x881dda5c
	if (!ctx.cr6.gt) goto loc_881DDA5C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r21,-1
	ctx.r10.s64 = ctx.r21.s64 + -1;
	// subf r3,r22,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r22.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_881DDA28:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lbzu r4,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stb r4,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// lbzu r4,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stbu r4,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r8.u32 = ea;
	// lwz r4,14524(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881dda28
	if (ctx.cr6.lt) goto loc_881DDA28;
loc_881DDA5C:
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E26A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x881E26A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,292(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subf r19,r9,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r10,14588(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// lwz r28,14596(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r29,14540(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14540);
	// lwz r27,14544(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r26,14548(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 14548);
	// lwz r25,14504(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 14504);
	// lwz r23,14512(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// lwz r24,14508(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r21,52(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mullw r30,r28,r11
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// add r26,r26,r11
	ctx.r26.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r27,r27,r11
	ctx.r27.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r9,r24,r10
	ctx.r9.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lwz r24,14480(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 14480);
	// add r11,r23,r10
	ctx.r11.u64 = ctx.r23.u64 + ctx.r10.u64;
	// add r22,r26,r5
	ctx.r22.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r25,r27,r4
	ctx.r25.u64 = ctx.r27.u64 + ctx.r4.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r26,r9,r7
	ctx.r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r23,r11,r8
	ctx.r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881e276c
	if (ctx.cr6.eq) goto loc_881E276C;
	// lwz r28,14624(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14624);
	// cmpw cr6,r24,r28
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x881e2738
	if (ctx.cr6.lt) goto loc_881E2738;
	// rotlwi r24,r28,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
loc_881E2738:
	// lwz r11,14488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14488);
	// lwz r20,14628(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 14628);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x881e2750
	if (ctx.cr6.lt) goto loc_881E2750;
	// rotlwi r21,r20,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
loc_881E2750:
	// lwz r17,14632(r31)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 14632);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x881e2764
	if (!ctx.cr6.lt) goto loc_881E2764;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// b 0x881e2784
	goto loc_881E2784;
loc_881E2764:
	// lwz r18,14632(r31)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 14632);
	// b 0x881e2784
	goto loc_881E2784;
loc_881E276C:
	// lwz r11,14648(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14648);
	// lwz r10,14488(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14488);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
loc_881E2784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881ed210
	ctx.lr = 0x881E278C;
	sub_881ED210(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881e27dc
	if (ctx.cr6.eq) goto loc_881E27DC;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881e27dc
	if (ctx.cr6.eq) goto loc_881E27DC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e280c
	if (!ctx.cr6.gt) goto loc_881E280C;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_881E27B4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b75c8
	ctx.lr = 0x881E27C4;
	sub_881B75C8(ctx, base);
	// lwz r11,14588(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x881e27b4
	if (!ctx.cr0.eq) goto loc_881E27B4;
	// b 0x881e280c
	goto loc_881E280C;
loc_881E27DC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e280c
	if (!ctx.cr6.gt) goto loc_881E280C;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_881E27E8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b7898
	ctx.lr = 0x881E27F8;
	sub_881B7898(ctx, base);
	// lwz r11,14588(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x881e27e8
	if (!ctx.cr0.eq) goto loc_881E27E8;
loc_881E280C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881ed210
	ctx.lr = 0x881E2814;
	sub_881ED210(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881e286c
	if (ctx.cr6.eq) goto loc_881E286C;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881e286c
	if (ctx.cr6.eq) goto loc_881E286C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e28a4
	if (!ctx.cr6.gt) goto loc_881E28A4;
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_881E2844:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881b75c8
	ctx.lr = 0x881E2854;
	sub_881B75C8(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x881e2844
	if (!ctx.cr0.eq) goto loc_881E2844;
	// b 0x881e28a4
	goto loc_881E28A4;
loc_881E286C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e28a4
	if (!ctx.cr6.gt) goto loc_881E28A4;
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_881E2880:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881b7898
	ctx.lr = 0x881E2890;
	sub_881B7898(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x881e2880
	if (!ctx.cr0.eq) goto loc_881E2880;
loc_881E28A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881ed210
	ctx.lr = 0x881E28AC;
	sub_881ED210(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881e2908
	if (ctx.cr6.eq) goto loc_881E2908;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881e2908
	if (ctx.cr6.eq) goto loc_881E2908;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e2940
	if (!ctx.cr6.gt) goto loc_881E2940;
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_881E28DC:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881b75c8
	ctx.lr = 0x881E28EC;
	sub_881B75C8(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r23,r17,r23
	ctx.r23.u64 = ctx.r17.u64 + ctx.r23.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bne 0x881e28dc
	if (!ctx.cr0.eq) goto loc_881E28DC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881E2908:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881e2940
	if (!ctx.cr6.gt) goto loc_881E2940;
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_881E291C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881b7898
	ctx.lr = 0x881E292C;
	sub_881B7898(ctx, base);
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r23,r17,r23
	ctx.r23.u64 = ctx.r17.u64 + ctx.r23.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bne 0x881e291c
	if (!ctx.cr0.eq) goto loc_881E291C;
loc_881E2940:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E8F40) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lwz r11,1096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1096);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881e8f98
	if (ctx.cr6.eq) goto loc_881E8F98;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x88243700
	ctx.lr = 0x881E8F7C;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881e8f98
	if (ctx.cr0.eq) goto loc_881E8F98;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881e8f98
	if (!ctx.cr6.eq) goto loc_881E8F98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881e8ffc
	goto loc_881E8FFC;
loc_881E8F98:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E8FA8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x881e8fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E8FA8;
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,24020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881e8fe8
	if (!ctx.cr6.eq) goto loc_881E8FE8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x881eaad0
	ctx.lr = 0x881E8FE4;
	sub_881EAAD0(ctx, base);
	// stw r3,24020(r31)
	REX_STORE_U32(ctx.r31.u32 + 24020, ctx.r3.u32);
loc_881E8FE8:
	// bl 0x881ed3d0
	ctx.lr = 0x881E8FEC;
	sub_881ED3D0(ctx, base);
	// lwz r11,24020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24020);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_881E8FFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_881E9C80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881E9C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881e9d88
	if (ctx.cr6.eq) goto loc_881E9D88;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881e9ccc
	if (ctx.cr0.eq) goto loc_881E9CCC;
	// bl 0x88243740
	ctx.lr = 0x881E9CA8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x881e9ccc
	if (ctx.cr6.eq) goto loc_881E9CCC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1312
	ctx.r6.s64 = 1312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x88243730
	ctx.lr = 0x881E9CCC;
	__imp__KeBugCheckEx(ctx, base);
loc_881E9CCC:
	// lwz r30,88(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881e9d00
	goto loc_881E9D00;
loc_881E9CDC:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x88243750
	ctx.lr = 0x881E9D00;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_881E9D00:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881e9cdc
	if (!ctx.cr6.eq) goto loc_881E9CDC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881e9d18
	if (!ctx.cr0.eq) goto loc_881E9D18;
	// stw r28,1408(r31)
	REX_STORE_U32(ctx.r31.u32 + 1408, ctx.r28.u32);
loc_881E9D18:
	// lwz r30,72(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r28,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// b 0x881e9d48
	goto loc_881E9D48;
loc_881E9D24:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x88243750
	ctx.lr = 0x881E9D48;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_881E9D48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881e9d24
	if (!ctx.cr6.eq) goto loc_881E9D24;
	// lwz r29,1424(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r30,64
	ctx.r30.s64 = 64;
loc_881E9D58:
	// addi r11,r30,255
	ctx.r11.s64 = ctx.r30.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881e9d80
	if (ctx.cr6.eq) goto loc_881E9D80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x881e96e8
	ctx.lr = 0x881E9D80;
	sub_881E96E8(ctx, base);
loc_881E9D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881e9d58
	if (!ctx.cr6.eq) goto loc_881E9D58;
loc_881E9D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EBC90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881EBC98;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r6,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// beq 0x881ebd00
	if (ctx.cr0.eq) goto loc_881EBD00;
	// bl 0x88243740
	ctx.lr = 0x881EBCDC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x881ebd00
	if (ctx.cr6.eq) goto loc_881EBD00;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3196
	ctx.r6.s64 = 3196;
	// lwz r5,312(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x88243730
	ctx.lr = 0x881EBD00;
	__imp__KeBugCheckEx(ctx, base);
loc_881EBD00:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x881ebd10
	if (!ctx.cr6.eq) goto loc_881EBD10;
loc_881EBD08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ec4d0
	goto loc_881EC4D0;
loc_881EBD10:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ebd08
	if (ctx.cr6.gt) goto loc_881EBD08;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x881ebd3c
	if (!ctx.cr6.eq) goto loc_881EBD3C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881EBD3C:
	// lwz r10,80(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x881ebd74
	if (!ctx.cr0.eq) goto loc_881EBD74;
	// lwz r11,380(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ebd74
	if (!ctx.cr6.eq) goto loc_881EBD74;
	// lbz r11,-11(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ebd7c
	if (ctx.cr0.eq) goto loc_881EBD7C;
loc_881EBD74:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_881EBD7C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881ebda0
	if (!ctx.cr0.eq) goto loc_881EBDA0;
	// lwz r3,1408(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x88243680
	ctx.lr = 0x881EBD94;
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_881EBDA0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec4a4
	if (ctx.cr0.eq) goto loc_881EC4A4;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x881ebe08
	if (ctx.cr0.eq) goto loc_881EBE08;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r9,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881ebe18
	goto loc_881EBE18;
loc_881EBE08:
	// lbz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881EBE18:
	// stw r25,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x881ec274
	if (ctx.cr6.gt) goto loc_881EC274;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x881ebe48
	if (!ctx.cr6.eq) goto loc_881EBE48;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_881EBE48:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881ebe64
	if (ctx.cr6.eq) goto loc_881EBE64;
	// subf r11,r26,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r26.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x881ebea4
	goto loc_881EBEA4;
loc_881EBE64:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ebe9c
	if (ctx.cr0.eq) goto loc_881EBE9C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r26.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x881ebea4
	goto loc_881EBEA4;
loc_881EBE9C:
	// subf r11,r26,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r26.u64;
	// stb r11,6(r30)
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_881EBEA4:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x881ebec4
	if (!ctx.cr6.gt) goto loc_881EBEC4;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ebec4
	if (ctx.cr0.eq) goto loc_881EBEC4;
	// subf r5,r25,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x88052d90
	ctx.lr = 0x881EBEC4;
	sub_88052D90(ctx, base);
loc_881EBEC4:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881ec470
	if (ctx.cr6.eq) goto loc_881EC470;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ebf28
	if (ctx.cr0.eq) goto loc_881EBF28;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1424);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x88243750
	ctx.lr = 0x881EBF0C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ec470
	if (ctx.cr0.lt) goto loc_881EC470;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x881ec470
	goto loc_881EC470;
loc_881EBF28:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r28.u64;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x881ebfdc
	if (ctx.cr0.eq) goto loc_881EBFDC;
	// lbz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881ebfa4
	if (!ctx.cr6.lt) goto loc_881EBFA4;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x881ec018
	goto loc_881EC018;
loc_881EBFA4:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_881EBFB0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881ec050
	if (ctx.cr6.eq) goto loc_881EC050;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ec050
	if (!ctx.cr6.gt) goto loc_881EC050;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ebfb0
	goto loc_881EBFB0;
loc_881EBFDC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ec0ac
	if (ctx.cr0.eq) goto loc_881EC0AC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881ec074
	if (!ctx.cr6.lt) goto loc_881EC074;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_881EC018:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ec050
	if (!ctx.cr6.eq) goto loc_881EC050;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_881EC050:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// b 0x881ec25c
	goto loc_881EC25C;
loc_881EC074:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_881EC080:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881ec050
	if (ctx.cr6.eq) goto loc_881EC050;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ec050
	if (!ctx.cr6.gt) goto loc_881EC050;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec080
	goto loc_881EC080;
loc_881EC0AC:
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881ec110
	if (!ctx.cr6.eq) goto loc_881EC110;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ec110
	if (!ctx.cr6.eq) goto loc_881EC110;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881ec110
	if (!ctx.cr6.eq) goto loc_881EC110;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881ec110
	if (!ctx.cr6.lt) goto loc_881EC110;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_881EC110:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ec154
	if (ctx.cr0.eq) goto loc_881EC154;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x881ec144
	if (ctx.cr0.eq) goto loc_881EC144;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881ec144
	if (!ctx.cr6.gt) goto loc_881EC144;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_881EC144:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x88243760
	ctx.lr = 0x881EC154;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881EC154:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x881ec264
	if (ctx.cr6.gt) goto loc_881EC264;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881ec198
	if (!ctx.cr0.eq) goto loc_881EC198;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x881ec1ac
	goto loc_881EC1AC;
loc_881EC198:
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_881EC1AC:
	// lbz r9,5(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881ec204
	if (!ctx.cr6.lt) goto loc_881EC204;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ec23c
	if (!ctx.cr6.eq) goto loc_881EC23C;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x881ec23c
	goto loc_881EC23C;
loc_881EC204:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_881EC210:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881ec23c
	if (ctx.cr6.eq) goto loc_881EC23C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ec23c
	if (!ctx.cr6.gt) goto loc_881EC23C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec210
	goto loc_881EC210;
loc_881EC23C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_881EC25C:
	// stw r11,48(r21)
	REX_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x881ec470
	goto loc_881EC470;
loc_881EC264:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881EC270;
	sub_881E9B48(ctx, base);
	// b 0x881ec470
	goto loc_881EC470;
loc_881EC274:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x881ec29c
	if (!ctx.cr6.eq) goto loc_881EC29C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881e9d98
	ctx.lr = 0x881EC294;
	sub_881E9D98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881ec470
	if (!ctx.cr0.eq) goto loc_881EC470;
loc_881EC29C:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec2ac
	if (ctx.cr0.eq) goto loc_881EC2AC;
	// stw r19,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x881ec478
	goto loc_881EC478;
loc_881EC2AC:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec374
	if (ctx.cr0.eq) goto loc_881EC374;
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x881ec2f0
	if (ctx.cr0.eq) goto loc_881EC2F0;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x881ec300
	goto loc_881EC300;
loc_881EC2F0:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_881EC300:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881ec32c
	if (ctx.cr0.eq) goto loc_881EC32C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881ec32c
	if (!ctx.cr0.eq) goto loc_881EC32C;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_881EC32C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec38c
	goto loc_881EC38C;
loc_881EC374:
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881ec38c
	if (ctx.cr0.eq) goto loc_881EC38C;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_881EC38C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881eb0a0
	ctx.lr = 0x881EC39C;
	sub_881EB0A0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x881ec468
	if (ctx.cr0.eq) goto loc_881EC468;
	// lbz r10,-11(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x881ec41c
	if (ctx.cr0.eq) goto loc_881EC41C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ec3c8
	if (ctx.cr0.eq) goto loc_881EC3C8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x881ec3d8
	goto loc_881EC3D8;
loc_881EC3C8:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_881EC3D8:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x881ec414
	if (ctx.cr0.eq) goto loc_881EC414;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec3f8
	if (ctx.cr0.eq) goto loc_881EC3F8;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x881ec408
	goto loc_881EC408;
loc_881EC3F8:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_881EC408:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x881ec41c
	goto loc_881EC41C;
loc_881EC414:
	// std r19,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_881EC41C:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x881ec42c
	if (ctx.cr6.lt) goto loc_881EC42C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_881EC42C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880527e0
	ctx.lr = 0x881EC438;
	sub_880527E0(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x881ec458
	if (!ctx.cr6.gt) goto loc_881EC458;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec458
	if (ctx.cr0.eq) goto loc_881EC458;
	// subf r5,r25,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x88052d90
	ctx.lr = 0x881EC458;
	sub_88052D90(ctx, base);
loc_881EC458:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881eb998
	ctx.lr = 0x881EC468;
	sub_881EB998(ctx, base);
loc_881EC468:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r29,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
loc_881EC470:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x881ec4a4
	if (!ctx.cr6.eq) goto loc_881EC4A4;
loc_881EC478:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec4a4
	if (ctx.cr0.eq) goto loc_881EC4A4;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x88243780
	ctx.lr = 0x881EC4A4;
	__imp__RtlRaiseException(ctx, base);
loc_881EC4A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec4c0
	goto loc_881EC4C0;
loc_881EC4C0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x881ec4f8
	ctx.lr = 0x881EC4CC;
	sub_881EC4F8(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
loc_881EC4D0:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_104) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_117) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_112) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_125) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_26) {
	REX_FUNC_PROLOGUE();
	// stfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881EF4A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r3,r11,15456
	ctx.r3.s64 = ctx.r11.s64 + 15456;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881EF940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x881ef27c
	ctx.lr = 0x881EF954;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfd f1,192(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f1.u64);
	// stfd f2,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f2.u64);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfd f27,1488(r11)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f2,f27
	ctx.cr6.compare(ctx.f2.f64, ctx.f27.f64);
	// bne cr6,0x881ef984
	if (!ctx.cr6.eq) goto loc_881EF984;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f1,8624(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF984:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x881ef9d8
	if (!ctx.cr6.eq) goto loc_881EF9D8;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EF994;
	sub_881EF748(ctx, base);
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x881ef9b8
	if (!ctx.cr6.lt) goto loc_881EF9B8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f1,16672(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// bne cr6,0x881efe08
	if (!ctx.cr6.eq) goto loc_881EFE08;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x881f1280
	ctx.lr = 0x881EF9B4;
	sub_881F1280(ctx, base);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF9B8:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x881ef9d8
	if (!ctx.cr6.gt) goto loc_881EF9D8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881ef9d0
	if (!ctx.cr6.eq) goto loc_881EF9D0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF9D0:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF9D8:
	// lhz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x881efd94
	if (ctx.cr6.eq) goto loc_881EFD94;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x881efd94
	if (ctx.cr6.eq) goto loc_881EFD94;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lfd f26,8624(r11)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// bge cr6,0x881efa3c
	if (!ctx.cr6.lt) goto loc_881EFA3C;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EFA14;
	sub_881EF748(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x881efa30
	if (ctx.cr6.eq) goto loc_881EFA30;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x881efa38
	if (ctx.cr6.eq) goto loc_881EFA38;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f1,16680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA30:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f25,12544(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + 12544);
loc_881EFA38:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
loc_881EFA3C:
	// fabs f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16096(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16096);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x881efa8c
	if (!ctx.cr6.gt) goto loc_881EFA8C;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x881efa5c
	if (!ctx.cr6.lt) goto loc_881EFA5C;
	// fdiv f28,f26,f28
	ctx.f28.f64 = ctx.f26.f64 / ctx.f28.f64;
loc_881EFA5C:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// ble cr6,0x881efa74
	if (!ctx.cr6.gt) goto loc_881EFA74;
loc_881EFA64:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
loc_881EFA6C:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f25.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA74:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// bge cr6,0x881efa84
	if (!ctx.cr6.lt) goto loc_881EFA84;
loc_881EFA7C:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64 * ctx.f27.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA84:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881f0c40
	ctx.lr = 0x881EFA98;
	sub_881F0C40(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfd f0,17600(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 17600);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x881efb44
	if (ctx.cr6.gt) goto loc_881EFB44;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EFAB4;
	sub_881EF748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x881efb44
	if (ctx.cr0.eq) goto loc_881EFB44;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EFAC4;
	sub_881EF748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x881efb44
	if (ctx.cr0.eq) goto loc_881EFB44;
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x881efb44
	if (!ctx.cr6.gt) goto loc_881EFB44;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f29
	ctx.f0.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x881efb0c
	if (ctx.cr6.eq) goto loc_881EFB0C;
loc_881EFAF4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881efb00
	if (ctx.cr0.eq) goto loc_881EFB00;
	// fmul f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f30.f64;
loc_881EFB00:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmul f30,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f30.f64 * ctx.f30.f64;
	// bne 0x881efaf4
	if (!ctx.cr0.eq) goto loc_881EFAF4;
loc_881EFB0C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881f0c28
	ctx.lr = 0x881EFB14;
	sub_881F0C28(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x881efb30
	if (!ctx.cr6.gt) goto loc_881EFB30;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x881efa6c
	goto loc_881EFA6C;
loc_881EFB30:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x881efd74
	if (!ctx.cr6.lt) goto loc_881EFD74;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = ctx.f0.f64 * ctx.f27.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFB44:
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,-30560
	ctx.r31.s64 = ctx.r10.s64 + -30560;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x881efb60
	if (ctx.cr6.gt) goto loc_881EFB60;
	// li r11,9
	ctx.r11.s64 = 9;
loc_881EFB60:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x881efb78
	if (ctx.cr6.gt) goto loc_881EFB78;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_881EFB78:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x881efb90
	if (ctx.cr6.gt) goto loc_881EFB90;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_881EFB90:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfd f31,19224(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 19224);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881efbd0
	if (!ctx.cr6.eq) goto loc_881EFBD0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x881EFBC0;
	sub_881EF2E8(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x881efc60
	goto loc_881EFC60;
loc_881EFBD0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f10,248(r31)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f9,240(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 240);
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// lfd f8,232(r31)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 232);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfd f12,224(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 224);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f7,216(r31)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// lfdx f0,r9,r8
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsub f6,f30,f0
	ctx.f6.f64 = ctx.f30.f64 - ctx.f0.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 + ctx.f30.f64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,12296(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 12296);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfdx f4,r11,r7
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// fdiv f6,f6,f5
	ctx.f6.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fmul f13,f6,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fmul f6,f13,f13
	ctx.f6.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmadd f11,f6,f11,f10
	ctx.f11.f64 = std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f10.f64);
	// fmadd f11,f11,f6,f9
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f9.f64);
	// fmadd f11,f11,f6,f8
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f8.f64);
	// fmul f11,f11,f6
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f12,f11,f7,f12
	ctx.f12.f64 = std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64);
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
loc_881EFC60:
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// fmul f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 * ctx.f29.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 320);
	// lfd f13,-30224(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -30224);
	// fmul f10,f29,f13
	ctx.f10.f64 = ctx.f29.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f9,f29,f10
	ctx.f9.f64 = ctx.f29.f64 - ctx.f10.f64;
	// fmadd f11,f9,f0,f11
	ctx.f11.f64 = std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64);
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctid f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fmul f9,f9,f31
	ctx.f9.f64 = ctx.f9.f64 * ctx.f31.f64;
	// fmadd f0,f10,f0,f9
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64);
	// fsub f11,f11,f9
	ctx.f11.f64 = ctx.f11.f64 - ctx.f9.f64;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
	// fmul f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fadd f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x881efa64
	if (ctx.cr6.gt) goto loc_881EFA64;
	// lfd f12,328(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 328);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x881efa7c
	if (ctx.cr6.lt) goto loc_881EFA7C;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ble cr6,0x881efd04
	if (!ctx.cr6.gt) goto loc_881EFD04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - ctx.f31.f64;
loc_881EFD04:
	// lfd f13,312(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 312);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lfd f12,304(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 304);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmadd f8,f0,f13,f12
	ctx.f8.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// lfd f13,296(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// lfd f12,288(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f11,280(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 280);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lfd f10,272(r31)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 272);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f9,264(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 264);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fmadd f13,f8,f0,f13
	ctx.f13.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f8,r11,r8
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fmadd f13,f13,f0,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// fmadd f13,f13,f0,f11
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64);
	// fmadd f13,f13,f0,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64);
	// fmadd f13,f13,f0,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64);
	// fmadd f0,f13,f0,f26
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f26.f64);
	// fmul f31,f0,f8
	ctx.f31.f64 = ctx.f0.f64 * ctx.f8.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881f0c28
	ctx.lr = 0x881EFD70;
	sub_881F0C28(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_881EFD74:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bgt cr6,0x881efa64
	if (ctx.cr6.gt) goto loc_881EFA64;
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// blt cr6,0x881efa7c
	if (ctx.cr6.lt) goto loc_881EFA7C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881f0c00
	ctx.lr = 0x881EFD8C;
	sub_881F0C00(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f25.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFD94:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x881efdb8
	if (!ctx.cr6.eq) goto loc_881EFDB8;
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881efe04
	if (!ctx.cr0.eq) goto loc_881EFE04;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881efe04
	if (!ctx.cr6.eq) goto loc_881EFE04;
loc_881EFDB8:
	// rlwinm r11,r9,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x881efddc
	if (!ctx.cr6.eq) goto loc_881EFDDC;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x881efe04
	if (!ctx.cr0.eq) goto loc_881EFE04;
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881efe04
	if (!ctx.cr6.eq) goto loc_881EFE04;
loc_881EFDDC:
	// cmplwi cr6,r10,32760
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32760, ctx.xer);
	// beq cr6,0x881efe04
	if (ctx.cr6.eq) goto loc_881EFE04;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// beq cr6,0x881efe04
	if (ctx.cr6.eq) goto loc_881EFE04;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881ef7b8
	ctx.lr = 0x881EFDFC;
	sub_881EF7B8(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFE04:
	// fadd f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64 + ctx.f29.f64;
loc_881EFE08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x881ef2c8
	ctx.lr = 0x881EFE14;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88217CC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r12,64
	ctx.r12.s64 = 64;
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x2)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v2,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v5,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v6,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// li r6,80
	ctx.r6.s64 = 80;
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v8,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r10,32
	ctx.r10.s64 = 32;
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v7,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx v4,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx v3,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
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
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
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
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_load_si128((simde__m128i*)ctx.v72.u8));
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
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
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
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
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
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
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
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglh v21,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglh v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglh v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrglw v27,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vmrghw v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v20.u32)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vspltish v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_set1_epi16(short(0x4)));
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
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
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
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
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v25,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v25,v25,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v24,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx v25,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_8821EF88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8821EF90;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// vslh v11,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stvx128 v9,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x882186f8
	ctx.lr = 0x8821EFF4;
	sub_882186F8(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v4,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// vslh v2,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8821f0f0
	if (!ctx.cr6.eq) goto loc_8821F0F0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8821f1e8
	if (!ctx.cr6.gt) goto loc_8821F1E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8821F054:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x8821f054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821F054;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8821F0F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8821f1e8
	if (!ctx.cr6.gt) goto loc_8821F1E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_8821F108:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x8821f108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821F108;
loc_8821F1E8:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88224BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88224BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x88224BE0;
	sub_8821B4B8(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88223088
	ctx.lr = 0x88224C00;
	sub_88223088(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88224D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88224D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,28
	ctx.r11.u64 = ctx.r5.u32 & 0xF;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88224db8
	if (ctx.cr6.eq) goto loc_88224DB8;
	// bl 0x88224c08
	ctx.lr = 0x88224DB0;
	sub_88224C08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88224DB8:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r30,r5,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r5,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r5.u64;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r5,r31,r3
	ctx.r5.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvx128 v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvx128 v6,r30,r3
	ea = (ctx.r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r29,r3,28
	ctx.r29.u64 = ctx.r3.u32 & 0xF;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r30,r3
	ctx.r31.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x88224e50
	if (!ctx.cr6.eq) goto loc_88224E50;
	// vmrghb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x88224e70
	goto loc_88224E70;
loc_88224E50:
	// vmrglb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88224E70:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	ctx.r30.s64 = 32;
	// vaddshs v5,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// li r29,48
	ctx.r29.s64 = 48;
	// li r28,64
	ctx.r28.s64 = 64;
	// li r27,80
	ctx.r27.s64 = 80;
	// lvx128 v4,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,96
	ctx.r11.s64 = 96;
	// lvx128 v3,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v1,r4,r29
	ea = (ctx.r4.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v63,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v30,r4,r28
	ea = (ctx.r4.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,112
	ctx.r30.s64 = 112;
	// vaddshs v29,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v26,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v62,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v28,r4,r27
	ea = (ctx.r4.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vaddshs v27,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vpkshus128 v61,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v25,v8,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vpkshus128 v60,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// lvx128 v24,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v22,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vpkshus128 v59,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvewx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v58,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvewx128 v62,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v57,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvewx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v56,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// stvewx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88227138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1144(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1144);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x8821e9c8
	ctx.lr = 0x8822717C;
	sub_8821E9C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88228860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88228868;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
	// lbz r8,35(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 35);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stvx128 v0,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x882288E0;
	sub_88218F60(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & ctx.r27.u64;
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// vslh v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// bne cr6,0x88228998
	if (!ctx.cr6.eq) goto loc_88228998;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88228a44
	if (!ctx.cr6.gt) goto loc_88228A44;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88228934:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x88228934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88228934;
	// b 0x88228a44
	goto loc_88228A44;
loc_88228998:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88228a44
	if (!ctx.cr6.gt) goto loc_88228A44;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_882289B0:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v26,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x882289b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882289B0;
loc_88228A44:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822AE90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8822AE98;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r26,668(r8)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 668);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r3,232
	ctx.r27.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822af0c
	if (ctx.cr6.lt) goto loc_8822AF0C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822AF04;
	sub_8817DB68(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822af6c
	goto loc_8822AF6C;
loc_8822AF0C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822af68
	if (!ctx.cr6.gt) goto loc_8822AF68;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822AF18:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822af18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822AF18;
loc_8822AF68:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822AF6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822afd8
	if (!ctx.cr6.eq) goto loc_8822AFD8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822aff4
	goto loc_8822AFF4;
loc_8822AFD8:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822AFF4;
	sub_88218590(ctx, base);
loc_8822AFF4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822b050
	if (ctx.cr6.lt) goto loc_8822B050;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822B048;
	sub_8817DB68(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822b0b0
	goto loc_8822B0B0;
loc_8822B050:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822b0ac
	if (!ctx.cr6.gt) goto loc_8822B0AC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822B05C:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822b05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B05C;
loc_8822B0AC:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822B0B0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822b11c
	if (!ctx.cr6.eq) goto loc_8822B11C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822b138
	goto loc_8822B138;
loc_8822B11C:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822B138;
	sub_88218590(ctx, base);
loc_8822B138:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822b194
	if (ctx.cr6.lt) goto loc_8822B194;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822B18C;
	sub_8817DB68(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822b1f4
	goto loc_8822B1F4;
loc_8822B194:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822b1f0
	if (!ctx.cr6.gt) goto loc_8822B1F0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822B1A0:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822b1a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B1A0;
loc_8822B1F0:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822B1F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822b260
	if (!ctx.cr6.eq) goto loc_8822B260;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822b27c
	goto loc_8822B27C;
loc_8822B260:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822B27C;
	sub_88218590(ctx, base);
loc_8822B27C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r26,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822b2d8
	if (ctx.cr6.lt) goto loc_8822B2D8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822B2D0;
	sub_8817DB68(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822b338
	goto loc_8822B338;
loc_8822B2D8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822b334
	if (!ctx.cr6.gt) goto loc_8822B334;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822B2E4:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r27,r3
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822b2e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B2E4;
loc_8822B334:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822B338:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822b3a8
	if (!ctx.cr6.eq) goto loc_8822B3A8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r3,r4,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8822B3A8:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822B3C4;
	sub_88218590(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

