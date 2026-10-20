#include "FH2_funcs.6.h"

DEFINE_REX_FUNC(sub_88050088) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880503E0) {
	REX_FUNC_PROLOGUE();
	// b 0x88056d68
	sub_88056D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restgprlr_22) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_88051230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,1032(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1032);
	// beq 0x88051268
	if (ctx.cr0.eq) goto loc_88051268;
	// lwz r10,188(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_88051254:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88051268
	if (ctx.cr6.eq) goto loc_88051268;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88051254
	if (!ctx.cr0.eq) goto loc_88051254;
loc_88051268:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x88051290
	goto loc_88051290;
loc_8805127C:
	// cmpwi cr6,r10,101
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 101, ctx.xer);
	// beq cr6,0x88051298
	if (ctx.cr6.eq) goto loc_88051298;
	// cmpwi cr6,r10,69
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 69, ctx.xer);
	// beq cr6,0x88051298
	if (ctx.cr6.eq) goto loc_88051298;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_88051290:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8805127c
	if (!ctx.cr0.eq) goto loc_8805127C;
loc_88051298:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8805129C:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// beq cr6,0x8805129c
	if (ctx.cr6.eq) goto loc_8805129C;
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880512c8
	if (!ctx.cr6.eq) goto loc_880512C8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880512C8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_880512CC:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x880512cc
	if (!ctx.cr0.eq) goto loc_880512CC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88056D68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88056d9c
	if (!ctx.cr6.eq) goto loc_88056D9C;
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
loc_88056D9C:
	// bl 0x8805d978
	ctx.lr = 0x88056DA0;
	sub_8805D978(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_88057888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88057890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880578AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880578d8
	if (ctx.cr6.lt) goto loc_880578D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050010
	ctx.lr = 0x880578C0;
	sub_88050010(ctx, base);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057280
	ctx.lr = 0x880578CC;
	sub_88057280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x880578ec
	if (!ctx.cr6.lt) goto loc_880578EC;
loc_880578D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880578EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880578EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88058628) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88058660:
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88058660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88058660;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805867C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,660(r31)
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// blt cr6,0x88058698
	if (ctx.cr6.lt) goto loc_88058698;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_88058698:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880586AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_88059D58) {
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
	// addi r10,r11,8312
	ctx.r10.s64 = ctx.r11.s64 + 8312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88059218
	ctx.lr = 0x88059D84;
	sub_88059218(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x88065408
	ctx.lr = 0x88059D8C;
	sub_88065408(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x880578f8
	ctx.lr = 0x88059D94;
	sub_880578F8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x88062228
	ctx.lr = 0x88059D9C;
	sub_88062228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x88059DA4;
	sub_88062000(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88059dc4
	if (ctx.cr6.eq) goto loc_88059DC4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x88050358
	ctx.lr = 0x88059DC0;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88059DC4:
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

DEFINE_REX_FUNC(sub_8805B0C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,288(r3)
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,304(r3)
	REX_STORE_U64(ctx.r3.u32 + 304, ctx.r11.u64);
	// std r11,296(r3)
	REX_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// lfs f0,6732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// lfs f13,6708(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f13,340(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805BA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,-5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5000, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x8805bab4
	if (ctx.cr6.gt) goto loc_8805BAB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6708(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8805bac8
	if (ctx.cr6.gt) goto loc_8805BAC8;
loc_8805BAB4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8892(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8805bad8
	if (ctx.cr6.lt) goto loc_8805BAD8;
loc_8805BAC8:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8805BAD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805BF40) {
	REX_FUNC_PROLOGUE();
	// ld r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 48);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// std r8,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r8.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805BFE8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805C0C0) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C188) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805C460) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805C578) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805c5c4
	if (ctx.cr6.eq) goto loc_8805C5C4;
loc_8805C59C:
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bge cr6,0x8805c5c4
	if (!ctx.cr6.lt) goto loc_8805C5C4;
	// lhz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lhzu r10,2(r4)
	ea = 2 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r31,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8805c59c
	if (!ctx.cr6.eq) goto loc_8805C59C;
loc_8805C5C4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// stbx r31,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u8);
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805C5E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

DEFINE_REX_FUNC(sub_8805DF88) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x8807c0d8
	ctx.lr = 0x8805DFA8;
	sub_8807C0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805dfc8
	if (!ctx.cr6.eq) goto loc_8805DFC8;
	// li r3,-100
	ctx.r3.s64 = -100;
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
loc_8805DFC8:
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_880603B8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// lis r6,12849
	ctx.r6.s64 = 842072064;
	// lis r5,14677
	ctx.r5.s64 = 961871872;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ori r7,r10,13385
	ctx.r7.u64 = ctx.r10.u64 | 13385;
	// ori r6,r6,22105
	ctx.r6.u64 = ctx.r6.u64 | 22105;
	// ori r5,r5,22105
	ctx.r5.u64 = ctx.r5.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r4,r10,12592
	ctx.r4.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,16729
	ctx.r10.s64 = 1096351744;
	// ori r4,r10,21846
	ctx.r4.u64 = ctx.r10.u64 | 21846;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880604b8
	if (ctx.cr6.eq) goto loc_880604B8;
loc_880604B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_880604B8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880604e0
	if (ctx.cr6.eq) goto loc_880604E0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_880604E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880604f0
	if (ctx.cr6.eq) goto loc_880604F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88060514
	if (!ctx.cr6.eq) goto loc_88060514;
loc_880604F0:
	// lhz r9,14(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x88060514
	if (ctx.cr6.eq) goto loc_88060514;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x880604b0
	if (!ctx.cr6.eq) goto loc_880604B0;
loc_88060514:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88060524
	if (!ctx.cr6.eq) goto loc_88060524;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_88060524:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x88060548
	if (!ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x88060548
	if (ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x88060548
	if (ctx.cr6.eq) goto loc_88060548;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_88060548:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88064B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88064B18;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x88064B40;
	sub_88052D90(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x88052d90
	ctx.lr = 0x88064B54;
	sub_88052D90(ctx, base);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// lwz r11,528(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88064c00
	if (!ctx.cr6.gt) goto loc_88064C00;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_88064BAC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88064bcc
	if (!ctx.cr6.eq) goto loc_88064BCC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r23.u32);
	// b 0x88064be8
	goto loc_88064BE8;
loc_88064BCC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x88064be4
	if (!ctx.cr6.eq) goto loc_88064BE4;
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x88064be8
	goto loc_88064BE8;
loc_88064BE4:
	// stwx r24,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r24.u32);
loc_88064BE8:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88064bac
	if (ctx.cr6.lt) goto loc_88064BAC;
loc_88064C00:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
loc_88064C10:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88064c50
	if (ctx.cr6.eq) goto loc_88064C50;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88064c38
	if (!ctx.cr6.eq) goto loc_88064C38;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
loc_88064C38:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064c48
	if (!ctx.cr6.eq) goto loc_88064C48;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x88064ec8
	if (ctx.cr6.eq) goto loc_88064EC8;
loc_88064C48:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_88064C50:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x88064c10
	if (ctx.cr6.lt) goto loc_88064C10;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_88064C78:
	// lbzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x88064e70
	if (!ctx.cr6.eq) goto loc_88064E70;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064C98;
	sub_880CB730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// bge cr6,0x88064dc0
	if (!ctx.cr6.lt) goto loc_88064DC0;
loc_88064CB4:
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x88064CD8;
	sub_880CB730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88064d18
	if (ctx.cr6.eq) goto loc_88064D18;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064d5c
	if (!ctx.cr6.eq) goto loc_88064D5C;
loc_88064D18:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88064d5c
	if (!ctx.cr6.eq) goto loc_88064D5C;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x88064d5c
	if (!ctx.cr6.eq) goto loc_88064D5C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88064ddc
	if (ctx.cr6.eq) goto loc_88064DDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88064ddc
	if (ctx.cr6.eq) goto loc_88064DDC;
loc_88064D5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88064d80
	if (ctx.cr6.eq) goto loc_88064D80;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
loc_88064D80:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88064d9c
	if (ctx.cr6.eq) goto loc_88064D9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88064db0
	if (!ctx.cr6.eq) goto loc_88064DB0;
loc_88064D9C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88064e10
	if (ctx.cr6.eq) goto loc_88064E10;
loc_88064DB0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x88064cb4
	if (ctx.cr6.lt) goto loc_88064CB4;
loc_88064DC0:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88064e44
	if (!ctx.cr6.eq) goto loc_88064E44;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x88064e54
	goto loc_88064E54;
loc_88064DDC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x880642d8
	ctx.lr = 0x88064DFC;
	sub_880642D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// stbx r24,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r24.u8);
	// b 0x88064e70
	goto loc_88064E70;
loc_88064E10:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x880642d8
	ctx.lr = 0x88064E30;
	sub_880642D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
	// stbx r24,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r24.u8);
	// b 0x88064e70
	goto loc_88064E70;
loc_88064E44:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_88064E54:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880641f0
	ctx.lr = 0x88064E64;
	sub_880641F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88064eb8
	if (ctx.cr6.lt) goto loc_88064EB8;
loc_88064E70:
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x88064c78
	if (ctx.cr6.lt) goto loc_88064C78;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_88064E94:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r28
	REX_STORE_U32(ctx.r5.u32 + ctx.r28.u32, ctx.r7.u32);
	// blt cr6,0x88064e94
	if (ctx.cr6.lt) goto loc_88064E94;
loc_88064EB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880638b8
	ctx.lr = 0x88064EC0;
	sub_880638B8(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88064EC8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806D8E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8806D8F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d934
	if (ctx.cr6.eq) goto loc_8806D934;
	// stw r30,28492(r3)
	REX_STORE_U32(ctx.r3.u32 + 28492, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,1444(r3)
	REX_STORE_U32(ctx.r3.u32 + 1444, ctx.r30.u32);
	// stw r30,28504(r3)
	REX_STORE_U32(ctx.r3.u32 + 28504, ctx.r30.u32);
	// stw r30,28540(r3)
	REX_STORE_U32(ctx.r3.u32 + 28540, ctx.r30.u32);
	// stw r30,1264(r3)
	REX_STORE_U32(ctx.r3.u32 + 1264, ctx.r30.u32);
loc_8806D934:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8806d958
	if (ctx.cr6.eq) goto loc_8806D958;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x880e68e0
	ctx.lr = 0x8806D958;
	sub_880E68E0(ctx, base);
loc_8806D958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806d6c8
	ctx.lr = 0x8806D960;
	sub_8806D6C8(ctx, base);
	// lwz r8,2188(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2188);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12160
	ctx.r9.s64 = ctx.r11.s64 + 12160;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfd f13,12016(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12016);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r6,2624(r31)
	REX_STORE_U32(ctx.r31.u32 + 2624, ctx.r6.u32);
	// blt cr6,0x8806d994
	if (ctx.cr6.lt) goto loc_8806D994;
	// li r27,31
	ctx.r27.s64 = 31;
	// b 0x8806d9a0
	goto loc_8806D9A0;
loc_8806D994:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8806D9A0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,12008(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12008);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8806d9bc
	if (ctx.cr6.lt) goto loc_8806D9BC;
	// li r29,2047
	ctx.r29.s64 = 2047;
	// b 0x8806d9c8
	goto loc_8806D9C8;
loc_8806D9BC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8806D9C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,2184(r31)
	REX_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880e6960
	ctx.lr = 0x8806D9E0;
	sub_880E6960(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,2188(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2188);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806D9F0;
	sub_880E6960(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28508(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA00;
	sub_880E6960(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// srawi r4,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 2;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA10;
	sub_880E6960(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// srawi r4,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 6;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA20;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2176(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA30;
	sub_880E6960(ctx, base);
	// lwz r10,796(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DA4C;
	sub_880E6960(ctx, base);
	// lwz r8,800(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DA68;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28488(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28488);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA78;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28492(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA88;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28504(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28504);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DA98;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1444(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DAA8;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DAB8;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28540(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28540);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DAC8;
	sub_880E6960(ctx, base);
	// lwz r6,2824(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2824);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 & ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880e6960
	ctx.lr = 0x8806DAE8;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8806dc64
	if (ctx.cr6.eq) goto loc_8806DC64;
	// lwz r11,808(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 808);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DB04;
	sub_880E6960(ctx, base);
	// lwz r11,812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 812);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x8806DB18;
	sub_880E6960(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DB28;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8806db70
	if (ctx.cr6.eq) goto loc_8806DB70;
	// stw r25,28516(r31)
	REX_STORE_U32(ctx.r31.u32 + 28516, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DB44;
	sub_880E6960(ctx, base);
	// lwz r11,28516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28516);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8806db70
	if (!ctx.cr6.eq) goto loc_8806DB70;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28520(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28520);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DB60;
	sub_880E6960(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28524(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28524);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DB70;
	sub_880E6960(ctx, base);
loc_8806DB70:
	// lwz r29,268(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880e6960
	ctx.lr = 0x8806DB84;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8806dc18
	if (ctx.cr6.eq) goto loc_8806DC18;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,28528(r31)
	REX_STORE_U32(ctx.r31.u32 + 28528, ctx.r4.u32);
	// bl 0x880e6960
	ctx.lr = 0x8806DBA0;
	sub_880E6960(ctx, base);
	// lwz r11,28528(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806dbd4
	if (!ctx.cr6.eq) goto loc_8806DBD4;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,28532(r31)
	REX_STORE_U32(ctx.r31.u32 + 28532, ctx.r4.u32);
	// stw r11,28536(r31)
	REX_STORE_U32(ctx.r31.u32 + 28536, ctx.r11.u32);
	// bl 0x880e6960
	ctx.lr = 0x8806DBC8;
	sub_880E6960(ctx, base);
	// lwz r4,28536(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28536);
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8806dc10
	goto loc_8806DC10;
loc_8806DBD4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f0,12152(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12152);
	// lfd f13,12088(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fmadd f11,f12,f0,f13
	ctx.f11.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64);
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8806dc08
	if (!ctx.cr6.gt) goto loc_8806DC08;
	// lis r11,1
	ctx.r11.s64 = 65536;
loc_8806DC08:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_8806DC10:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DC18;
	sub_880E6960(ctx, base);
loc_8806DC18:
	// lwz r29,300(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880e6960
	ctx.lr = 0x8806DC2C;
	sub_880E6960(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8806dc64
	if (ctx.cr6.eq) goto loc_8806DC64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,319(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 319);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DC44;
	sub_880E6960(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,327(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 327);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DC54;
	sub_880E6960(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,335(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 335);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DC64;
	sub_880E6960(ctx, base);
loc_8806DC64:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1264);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DC74;
	sub_880E6960(ctx, base);
	// lwz r11,1264(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806dd30
	if (ctx.cr6.eq) goto loc_8806DD30;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,1260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// bl 0x880e6960
	ctx.lr = 0x8806DC90;
	sub_880E6960(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 868);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-6
	ctx.r4.s64 = ctx.r11.s64 + -6;
	// bl 0x880e6960
	ctx.lr = 0x8806DCA4;
	sub_880E6960(ctx, base);
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 872);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x880e6960
	ctx.lr = 0x8806DCB8;
	sub_880E6960(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,872(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r8,1260(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8806dd30
	if (!ctx.cr6.gt) goto loc_8806DD30;
	// addi r29,r31,1000
	ctx.r29.s64 = ctx.r31.s64 + 1000;
loc_8806DCE4:
	// lwz r10,132(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r9,872(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 872);
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r7,868(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 868);
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sraw r28,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r28.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// sraw r4,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r4.s64 = ctx.r6.s32 >> temp.u32;
	// bl 0x880e6960
	ctx.lr = 0x8806DD10;
	sub_880E6960(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x8806DD20;
	sub_880E6960(ctx, base);
	// lwz r5,1260(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8806dce4
	if (ctx.cr6.lt) goto loc_8806DCE4;
loc_8806DD30:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8806dd64
	if (ctx.cr6.eq) goto loc_8806DD64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8806DD40;
	sub_880E6B40(ctx, base);
	// lwz r11,7868(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r8,r9,39
	ctx.xer.ca = ctx.r9.u32 <= 39;
	ctx.r8.u64 = static_cast<uint64_t>(39) - ctx.r9.u64;
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8806DD64;
	sub_880E6900(ctx, base);
loc_8806DD64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807CCE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lfs f0,6732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x8807CD70;
	sub_88052D90(ctx, base);
	// stw r30,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_8807D9DC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8807D9E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8807D9E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,9356
	ctx.r10.s64 = 613154816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r27,r10,32768
	ctx.r27.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8807da4c
	if (!ctx.cr6.gt) goto loc_8807DA4C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8807DA10:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807da38
	if (ctx.cr6.eq) goto loc_8807DA38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x8807DA2C;
	sub_88050358(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_8807DA38:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8807da10
	if (ctx.cr6.lt) goto loc_8807DA10;
loc_8807DA4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807da64
	if (ctx.cr6.eq) goto loc_8807DA64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x8807DA60;
	sub_88050358(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8807DA64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807E6E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,30672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30672);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,30676(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30676);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8807EC78) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30632);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,30680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30680);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// bne cr6,0x8807ed48
	if (!ctx.cr6.eq) goto loc_8807ED48;
	// lwz r9,30668(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30668);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f2,30688(r3)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r3.u32 + 30688);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fdiv f1,f11,f12
	ctx.f1.f64 = ctx.f11.f64 / ctx.f12.f64;
	// bl 0x881ef940
	ctx.lr = 0x8807ECE0;
	sub_881EF940(ctx, base);
	// lwz r6,30680(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// lfd f9,30768(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// lfd f8,30776(r31)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 30776);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// fsub f3,f9,f8
	ctx.f3.f64 = ctx.f9.f64 - ctx.f8.f64;
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// lfd f13,1488(r4)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r4.u32 + 1488);
	// fnmsub f1,f1,f5,f4
	ctx.f1.f64 = -std::fma(ctx.f1.f64, ctx.f5.f64, -ctx.f4.f64);
	// fmul f0,f3,f2
	ctx.f0.f64 = ctx.f3.f64 * ctx.f2.f64;
	// fdiv f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 / ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8807ee00
	if (!ctx.cr6.gt) goto loc_8807EE00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,30800(r31)
	REX_STORE_U64(ctx.r31.u32 + 30800, ctx.f0.u64);
	// stw r11,30748(r31)
	REX_STORE_U32(ctx.r31.u32 + 30748, ctx.r11.u32);
	// stw r11,30632(r31)
	REX_STORE_U32(ctx.r31.u32 + 30632, ctx.r11.u32);
	// b 0x8807ee00
	goto loc_8807EE00;
loc_8807ED48:
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lfd f0,30768(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lfd f11,30776(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30776);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fsub f10,f0,f11
	ctx.f10.f64 = ctx.f0.f64 - ctx.f11.f64;
	// lfd f9,30800(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// fmul f6,f10,f9
	ctx.f6.f64 = ctx.f10.f64 * ctx.f9.f64;
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// fnmsub f3,f6,f5,f7
	ctx.f3.f64 = -std::fma(ctx.f6.f64, ctx.f5.f64, -ctx.f7.f64);
	// fdiv f1,f3,f4
	ctx.f1.f64 = ctx.f3.f64 / ctx.f4.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x8807ED94;
	sub_881EF2E8(ctx, base);
	// lwz r7,30668(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r6,30680(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f2,88(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f1,88(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f2
	ctx.f13.f64 = double(ctx.f2.s64);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x8807EDC8;
	sub_881EF2E8(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f13,12248(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 12248);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8807ee00
	if (!ctx.cr6.gt) goto loc_8807EE00;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12096(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12096);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807ee00
	if (!ctx.cr6.lt) goto loc_8807EE00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,30688(r31)
	REX_STORE_U64(ctx.r31.u32 + 30688, ctx.f0.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,30704(r31)
	REX_STORE_U32(ctx.r31.u32 + 30704, ctx.r11.u32);
	// stw r10,30632(r31)
	REX_STORE_U32(ctx.r31.u32 + 30632, ctx.r10.u32);
loc_8807EE00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880849F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880849F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88084a80
	if (ctx.cr6.eq) goto loc_88084A80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88084a80
	if (ctx.cr6.eq) goto loc_88084A80;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x88084a28
	if (ctx.cr6.lt) goto loc_88084A28;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// ble cr6,0x88084a30
	if (!ctx.cr6.gt) goto loc_88084A30;
loc_88084A28:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x88084a80
	if (!ctx.cr6.eq) goto loc_88084A80;
loc_88084A30:
	// stw r7,14684(r31)
	REX_STORE_U32(ctx.r31.u32 + 14684, ctx.r7.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x88084a50
	if (ctx.cr6.eq) goto loc_88084A50;
	// stw r6,14652(r31)
	REX_STORE_U32(ctx.r31.u32 + 14652, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c9600
	ctx.lr = 0x88084A48;
	sub_880C9600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88084a84
	if (!ctx.cr6.eq) goto loc_88084A84;
loc_88084A50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88061468
	ctx.lr = 0x88084A58;
	sub_88061468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88084a84
	if (!ctx.cr6.eq) goto loc_88084A84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cab60
	ctx.lr = 0x88084A78;
	sub_880CAB60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88084A80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88084A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085588) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88085590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,14
	ctx.r8.s64 = 14;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stb r11,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stb r9,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r8,3(r4)
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// and r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 & ctx.r7.u64;
	// bl 0x8805dd90
	ctx.lr = 0x880855D8;
	sub_8805DD90(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x880855fc
	if (!ctx.cr6.gt) goto loc_880855FC;
loc_880855F0:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880855FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8808563c
	if (ctx.cr6.eq) goto loc_8808563C;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,30
	ctx.r6.s64 = 30;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88084e80
	ctx.lr = 0x8808561C;
	sub_88084E80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880855f0
	if (!ctx.cr6.eq) goto loc_880855F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x880855f0
	if (ctx.cr6.gt) goto loc_880855F0;
loc_8808563C:
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880896D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880896E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// lwz r22,396(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r6,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r22.u64;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r19,476(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r28,12(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r25,0(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lwz r24,468(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lwz r23,460(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r18,452(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lwz r30,412(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r20,388(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r17,r10,6848
	ctx.r17.s64 = ctx.r10.s64 + 6848;
	// stw r7,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// beq cr6,0x88089aa8
	if (ctx.cr6.eq) goto loc_88089AA8;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// subf r11,r4,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r4.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x880898cc
	if (ctx.cr6.eq) goto loc_880898CC;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880897b4
	if (!ctx.cr6.eq) goto loc_880897B4;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r26,16
	ctx.r26.s64 = 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880897B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880897d0
	goto loc_880897D0;
loc_880897B4:
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880897CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,16
	ctx.r26.s64 = 16;
loc_880897D0:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880897EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089840
	if (ctx.cr6.eq) goto loc_88089840;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089824;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x8808983C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089840:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089890
	if (ctx.cr6.eq) goto loc_88089890;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089874;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x8808988C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089890:
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r18,-1
	ctx.r5.s64 = ctx.r18.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880898A8;
	sub_88085820(ctx, base);
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880898d4
	if (!ctx.cr6.lt) goto loc_880898D4;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x880898d4
	goto loc_880898D4;
loc_880898CC:
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r26,16
	ctx.r26.s64 = 16;
loc_880898D4:
	// lwz r11,1380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r27,r11,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r11.u64;
	// blt cr6,0x88089ab0
	if (ctx.cr6.lt) goto loc_88089AB0;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r26,r10,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88089900:
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88089940
	if (!ctx.cr6.eq) goto loc_88089940;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808993C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88089954
	goto loc_88089954;
loc_88089940:
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089954:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880899cc
	if (ctx.cr6.eq) goto loc_880899CC;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880899B0;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x880899C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880899CC:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089a20
	if (ctx.cr6.eq) goto loc_88089A20;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089A04;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089A20:
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089a70
	if (ctx.cr6.gt) goto loc_88089A70;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88089a70
	if (ctx.cr6.gt) goto loc_88089A70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r10,r6,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88089a78
	goto loc_88089A78;
loc_88089A70:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089A78:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089a94
	if (!ctx.cr6.lt) goto loc_88089A94;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_88089A94:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88089900
	if (!ctx.cr6.gt) goto loc_88089900;
	// b 0x88089aac
	goto loc_88089AAC;
loc_88089AA8:
	// lwz r21,364(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_88089AAC:
	// li r26,16
	ctx.r26.s64 = 16;
loc_88089AB0:
	// lwz r28,436(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88089c58
	if (ctx.cr6.eq) goto loc_88089C58;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88089afc
	if (!ctx.cr6.eq) goto loc_88089AFC;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88089b10
	goto loc_88089B10;
loc_88089AFC:
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089B10:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089b84
	if (ctx.cr6.eq) goto loc_88089B84;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089B68;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88089B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089B84:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089bd4
	if (ctx.cr6.eq) goto loc_88089BD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089BB8;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089BD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089BD4:
	// lwz r27,444(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r18.s32 >> 31;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r7,r18,r9
	ctx.r7.u64 = ctx.r18.u64 ^ ctx.r9.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089c2c
	if (ctx.cr6.gt) goto loc_88089C2C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089c2c
	if (ctx.cr6.gt) goto loc_88089C2C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089c34
	goto loc_88089C34;
loc_88089C2C:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089C34:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089c5c
	if (!ctx.cr6.lt) goto loc_88089C5C;
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x88089c5c
	goto loc_88089C5C;
loc_88089C58:
	// lwz r27,444(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
loc_88089C5C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88089df4
	if (ctx.cr6.eq) goto loc_88089DF4;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88089ca0
	if (!ctx.cr6.eq) goto loc_88089CA0;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88089cb4
	goto loc_88089CB4;
loc_88089CA0:
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089CB4:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089d28
	if (ctx.cr6.eq) goto loc_88089D28;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089D0C;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88089D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089D28:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089d78
	if (ctx.cr6.eq) goto loc_88089D78;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089D5C;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089D78:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r18.s32 >> 31;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r7,r18,r9
	ctx.r7.u64 = ctx.r18.u64 ^ ctx.r9.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089dcc
	if (ctx.cr6.gt) goto loc_88089DCC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089dcc
	if (ctx.cr6.gt) goto loc_88089DCC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089dd4
	goto loc_88089DD4;
loc_88089DCC:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089DD4:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089df4
	if (!ctx.cr6.lt) goto loc_88089DF4;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_88089DF4:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808a160
	if (ctx.cr6.eq) goto loc_8808A160;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88089fa0
	if (ctx.cr6.eq) goto loc_88089FA0;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x88089e48
	if (!ctx.cr6.eq) goto loc_88089E48;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x88089e5c
	goto loc_88089E5C;
loc_88089E48:
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089E5C:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089ed0
	if (ctx.cr6.eq) goto loc_88089ED0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089EB4;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x88089ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089ED0:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88089f20
	if (ctx.cr6.eq) goto loc_88089F20;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r23,-1
	ctx.r8.s64 = ctx.r23.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88089F04;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x88089F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_88089F20:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88089f78
	if (ctx.cr6.gt) goto loc_88089F78;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089f78
	if (ctx.cr6.gt) goto loc_88089F78;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089f80
	goto loc_88089F80;
loc_88089F78:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089F80:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88089fa0
	if (!ctx.cr6.lt) goto loc_88089FA0;
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_88089FA0:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8808a160
	if (ctx.cr6.lt) goto loc_8808A160;
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r27,r10,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88089FC0:
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808a000
	if (!ctx.cr6.eq) goto loc_8808A000;
	// lwz r11,2488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8808a010
	goto loc_8808A010;
loc_8808A000:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A010:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808a088
	if (ctx.cr6.eq) goto loc_8808A088;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808A06C;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x8808A084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808A088:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808a0dc
	if (ctx.cr6.eq) goto loc_8808A0DC;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r9,r24,1
	ctx.r9.s64 = ctx.r24.s64 + 1;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808A0C0;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x8808A0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808A0DC:
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808a12c
	if (ctx.cr6.gt) goto loc_8808A12C;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x8808a12c
	if (ctx.cr6.gt) goto loc_8808A12C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// lwzx r8,r10,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// lwzx r11,r6,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808a134
	goto loc_8808A134;
loc_8808A12C:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808A134:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x8808a150
	if (!ctx.cr6.lt) goto loc_8808A150;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_8808A150:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88089fc0
	if (!ctx.cr6.gt) goto loc_88089FC0;
loc_8808A160:
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,500(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,508(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r21,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r21.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B5658) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B5660;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef284
	ctx.lr = 0x880B5668;
	__savefpr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7632(r1)
	ea = -7632 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,7676(r1)
	REX_STORE_U32(ctx.r1.u32 + 7676, ctx.r6.u32);
	// addi r11,r1,6063
	ctx.r11.s64 = ctx.r1.s64 + 6063;
	// lwz r6,1380(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// addi r3,r1,6415
	ctx.r3.s64 = ctx.r1.s64 + 6415;
	// stw r10,7708(r1)
	REX_STORE_U32(ctx.r1.u32 + 7708, ctx.r10.u32);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,7692(r1)
	REX_STORE_U32(ctx.r1.u32 + 7692, ctx.r8.u32);
	// rlwinm r10,r3,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,7700(r1)
	REX_STORE_U32(ctx.r1.u32 + 7700, ctx.r9.u32);
	// lwz r29,20820(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20820);
	// srawi r30,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 2;
	// stw r11,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r10,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r10.u32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lwz r28,6844(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lwz r29,580(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 580);
	// stw r8,772(r1)
	REX_STORE_U32(ctx.r1.u32 + 772, ctx.r8.u32);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// mullw r3,r11,r4
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// lwz r9,6804(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6804);
	// stw r30,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r29,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r29.u32);
	// stw r7,7684(r1)
	REX_STORE_U32(ctx.r1.u32 + 7684, ctx.r7.u32);
	// stw r28,900(r1)
	REX_STORE_U32(ctx.r1.u32 + 900, ctx.r28.u32);
	// lwz r7,7764(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r27,784(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// lwz r6,28044(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// stw r4,7660(r1)
	REX_STORE_U32(ctx.r1.u32 + 7660, ctx.r4.u32);
	// lis r29,-30720
	ctx.r29.s64 = -2013265920;
	// stw r5,7668(r1)
	REX_STORE_U32(ctx.r1.u32 + 7668, ctx.r5.u32);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// addi r30,r8,64
	ctx.r30.s64 = ctx.r8.s64 + 64;
	// stw r27,868(r1)
	REX_STORE_U32(ctx.r1.u32 + 868, ctx.r27.u32);
	// addi r28,r11,31
	ctx.r28.s64 = ctx.r11.s64 + 31;
	// mulli r8,r3,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(276));
	// stw r30,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// lfd f31,1488(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r29.u32 + 1488);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r16,r7,r8
	ctx.r16.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r28,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x7FFFFFF;
	// stw r16,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r16.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r29,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// stw r29,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r29.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r29,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// stw r9,908(r1)
	REX_STORE_U32(ctx.r1.u32 + 908, ctx.r9.u32);
	// stw r8,864(r1)
	REX_STORE_U32(ctx.r1.u32 + 864, ctx.r8.u32);
	// beq cr6,0x880b57b0
	if (ctx.cr6.eq) goto loc_880B57B0;
	// lwz r9,6820(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6820);
	// lwz r8,6824(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6824);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,1400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r3,6848(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r30,6852(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,856(r1)
	REX_STORE_U32(ctx.r1.u32 + 856, ctx.r9.u32);
	// stw r7,852(r1)
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r7.u32);
	// stw r11,892(r1)
	REX_STORE_U32(ctx.r1.u32 + 892, ctx.r11.u32);
	// stw r3,884(r1)
	REX_STORE_U32(ctx.r1.u32 + 884, ctx.r3.u32);
	// stw r30,912(r1)
	REX_STORE_U32(ctx.r1.u32 + 912, ctx.r30.u32);
	// stw r10,904(r1)
	REX_STORE_U32(ctx.r1.u32 + 904, ctx.r10.u32);
loc_880B57B0:
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880ba49c
	if (!ctx.cr6.lt) goto loc_880BA49C;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r11,r11,6848
	ctx.r11.s64 = ctx.r11.s64 + 6848;
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
loc_880B57CC:
	// lwz r10,908(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 908);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,1680(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1680);
	// li r15,0
	ctx.r15.s64 = 0;
	// mullw r9,r14,r10
	ctx.r9.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r7,1380(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r5,516(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,900(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 900);
	// lwz r3,864(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// lwz r30,868(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 868);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r8,r14
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,880(r1)
	REX_STORE_U32(ctx.r1.u32 + 880, ctx.r8.u32);
	// mullw r5,r14,r5
	ctx.r5.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r7,r14
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r14.s32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r7.u32);
	// stw r5,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// stw r4,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
	// beq cr6,0x880b58ac
	if (ctx.cr6.eq) goto loc_880B58AC;
	// lwz r10,796(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r9,1384(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r7,856(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 856);
	// mullw r5,r9,r14
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r14.s32);
	// lwz r4,884(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 884);
	// lwz r3,912(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 912);
	// lwz r30,852(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r29,892(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 892);
	// lwz r28,904(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 904);
	// stw r15,708(r1)
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r15.u32);
	// stw r15,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r15.u32);
	// stw r15,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r15.u32);
	// stw r15,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r15.u32);
	// mullw r10,r8,r14
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r8.u32);
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r7.u32);
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r5,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r5.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r4,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// stw r3,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r11,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
loc_880B58AC:
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// stw r15,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r15.u32);
	// stw r15,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r15.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r15,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r15.u32);
	// stw r15,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r15.u32);
	// stw r15,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r15.u32);
	// stw r15,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r15.u32);
	// stw r15,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r15.u32);
	// stw r15,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r15.u32);
	// stw r15,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r15.u32);
	// stw r15,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r15.u32);
	// beq cr6,0x880ba410
	if (ctx.cr6.eq) goto loc_880BA410;
	// lwz r10,7660(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 7660);
	// rlwinm r11,r14,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r14,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r14.u64;
	// subfic r8,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r8.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,860(r1)
	REX_STORE_U32(ctx.r1.u32 + 860, ctx.r8.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r4,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r4.u32);
loc_880B5900:
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r11,r15,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,6892(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6892);
	// li r23,0
	ctx.r23.s64 = 0;
	// mullw r5,r8,r14
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// stw r23,776(r1)
	REX_STORE_U32(ctx.r1.u32 + 776, ctx.r23.u32);
	// stw r23,748(r1)
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r23.u32);
	// stw r23,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r23.u32);
	// stw r23,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r23.u32);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r15
	ctx.r3.u64 = ctx.r9.u64 + ctx.r15.u64;
	// subfic r4,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r4.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r4,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r5,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r5.u32);
	// clrlwi r24,r15,31
	ctx.r24.u64 = ctx.r15.u32 & 0x1;
	// stw r8,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r8.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880b5960
	if (!ctx.cr6.lt) goto loc_880B5960;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
loc_880B5960:
	// lwz r9,1352(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880b5980
	if (!ctx.cr6.gt) goto loc_880B5980;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
loc_880B5980:
	// lwz r9,860(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r11,6896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6896);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b59a0
	if (!ctx.cr6.lt) goto loc_880B59A0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
loc_880B59A0:
	// lwz r5,1360(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// rlwinm r10,r14,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880b59c4
	if (!ctx.cr6.gt) goto loc_880B59C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
loc_880B59C4:
	// srawi r29,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 2;
	// srawi r28,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 2;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880b5d00
	if (!ctx.cr6.eq) goto loc_880B5D00;
	// lwz r11,148(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// lwz r25,640(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r17,712(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// subf r7,r15,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r15.u64;
	// beq cr6,0x880b5abc
	if (ctx.cr6.eq) goto loc_880B5ABC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r22,704(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,648(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// subf r6,r14,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r14.u64;
	// lwz r9,636(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// addi r30,r22,64
	ctx.r30.s64 = ctx.r22.s64 + 64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5A44;
	sub_880C3EC8(ctx, base);
	// lwz r10,7200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5a6c
	if (ctx.cr6.eq) goto loc_880B5A6C;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5a6c
	if (!ctx.cr6.eq) goto loc_880B5A6C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5A6C;
	sub_880EB138(ctx, base);
loc_880B5A6C:
	// lwz r11,7088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r21,556(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7088(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// addi r6,r21,32
	ctx.r6.s64 = ctx.r21.s64 + 32;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B5AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880b5b30
	goto loc_880B5B30;
loc_880B5ABC:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r6,r14,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r14.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5B00;
	sub_880C3EC8(ctx, base);
	// lwz r11,7200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5b28
	if (ctx.cr6.eq) goto loc_880B5B28;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5b28
	if (!ctx.cr6.eq) goto loc_880B5B28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5B28;
	sub_880EB138(ctx, base);
loc_880B5B28:
	// lwz r22,704(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r21,556(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
loc_880B5B30:
	// lwz r11,7084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r19,336(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r15,1
	ctx.r11.s64 = ctx.r15.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x880b5cdc
	if (!ctx.cr6.lt) goto loc_880B5CDC;
	// lwz r9,148(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r17,256
	ctx.r30.s64 = ctx.r17.s64 + 256;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// beq cr6,0x880b5c4c
	if (ctx.cr6.eq) goto loc_880B5C4C;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// lwz r23,772(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r3,r14,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r14.u64;
	// lwz r5,636(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r4,648(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// addi r7,r25,16
	ctx.r7.s64 = ctx.r25.s64 + 16;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r25,r23,64
	ctx.r25.s64 = ctx.r23.s64 + 64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5BD4;
	sub_880C3EC8(ctx, base);
	// lwz r7,7200(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880b5bfc
	if (ctx.cr6.eq) goto loc_880B5BFC;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5bfc
	if (!ctx.cr6.eq) goto loc_880B5BFC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5BFC;
	sub_880EB138(ctx, base);
loc_880B5BFC:
	// lwz r11,7088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r21,4
	ctx.r6.s64 = ctx.r21.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,7088(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// addi r11,r21,32
	ctx.r11.s64 = ctx.r21.s64 + 32;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x880B5C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880b5cb8
	goto loc_880B5CB8;
loc_880B5C4C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r7,r14,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r14.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r25,16
	ctx.r7.s64 = ctx.r25.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5C90;
	sub_880C3EC8(ctx, base);
	// lwz r11,7200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5cb8
	if (ctx.cr6.eq) goto loc_880B5CB8;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5cb8
	if (!ctx.cr6.eq) goto loc_880B5CB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5CB8;
	sub_880EB138(ctx, base);
loc_880B5CB8:
	// lwz r11,7084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r19,4
	ctx.r6.s64 = ctx.r19.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5CDC:
	// lwz r11,28044(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// stw r17,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5d30
	if (ctx.cr6.eq) goto loc_880B5D30;
	// addi r18,r22,64
	ctx.r18.s64 = ctx.r22.s64 + 64;
	// stw r22,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r18,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r18.u32);
	// b 0x880b5d38
	goto loc_880B5D38;
loc_880B5D00:
	// lwz r11,712(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r19,336(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r17,r11,256
	ctx.r17.s64 = ctx.r11.s64 + 256;
	// stw r17,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// beq cr6,0x880b5d30
	if (ctx.cr6.eq) goto loc_880B5D30;
	// lwz r11,772(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// addi r18,r11,64
	ctx.r18.s64 = ctx.r11.s64 + 64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r18,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r18.u32);
	// stw r11,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// b 0x880b5d38
	goto loc_880B5D38;
loc_880B5D30:
	// lwz r20,436(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r18,444(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
loc_880B5D38:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x880B5D4C;
	sub_880EB9E0(ctx, base);
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5fac
	if (ctx.cr6.eq) goto loc_880B5FAC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ebc20
	ctx.lr = 0x880B5D64;
	sub_880EBC20(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r10,348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r7,r1,872
	ctx.r7.s64 = ctx.r1.s64 + 872;
	// addi r5,r1,876
	ctx.r5.s64 = ctx.r1.s64 + 876;
	// lwz r6,96(r16)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r30,r1,692
	ctx.r30.s64 = ctx.r1.s64 + 692;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,716(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r8,692(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r10,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r10.u32);
	// stw r11,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
	// bl 0x880f6078
	ctx.lr = 0x880B5DC0;
	sub_880F6078(ctx, base);
	// lwz r10,876(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 876);
	// lwz r9,524(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r6,112(r16)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r5,896(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 896);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,872(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 872);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r7,504(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,692(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r3,716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// stw r4,680(r1)
	REX_STORE_U32(ctx.r1.u32 + 680, ctx.r4.u32);
	// stw r3,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r3.u32);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r8,148(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r23,r9,r11
	ctx.r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r25,r10,r7
	ctx.r25.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r23,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r23.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r25,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r25.u32);
	// beq cr6,0x880b5f1c
	if (ctx.cr6.eq) goto loc_880B5F1C;
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5e7c
	if (ctx.cr6.eq) goto loc_880B5E7C;
	// lwz r11,2520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r19,256
	ctx.r30.s64 = ctx.r19.s64 + 256;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,540
	ctx.r10.s64 = ctx.r1.s64 + 540;
	// lwz r7,96(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r8,r1,776
	ctx.r8.s64 = ctx.r1.s64 + 776;
	// lwz r9,676(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// addi r6,r1,676
	ctx.r6.s64 = ctx.r1.s64 + 676;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,480(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6d30
	ctx.lr = 0x880B5E7C;
	sub_880F6D30(ctx, base);
loc_880B5E7C:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5ee4
	if (ctx.cr6.eq) goto loc_880B5EE4;
	// lwz r11,2520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r19,256
	ctx.r30.s64 = ctx.r19.s64 + 256;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5EA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,708
	ctx.r6.s64 = ctx.r1.s64 + 708;
	// lwz r7,96(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// lwz r9,708(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,492(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6d30
	ctx.lr = 0x880B5EE4;
	sub_880F6D30(ctx, base);
loc_880B5EE4:
	// lwz r11,532(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,776(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r9,748(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// add r8,r23,r11
	ctx.r8.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,540(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r7,676(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,708(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r5,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// stw r4,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r4.u32);
	// stw r7,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r7.u32);
	// stw r6,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
loc_880B5F1C:
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5F30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// addi r22,r17,8
	ctx.r22.s64 = ctx.r17.s64 + 8;
	// lwz r10,7136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B5F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// lwz r9,7136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r21,r17,128
	ctx.r21.s64 = ctx.r17.s64 + 128;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r21,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r21.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880B5F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// lwz r8,7136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r19,r17,136
	ctx.r19.s64 = ctx.r17.s64 + 136;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r19,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r19.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880B5F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,384(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r10,344(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r3.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880b60e0
	goto loc_880B60E0;
loc_880B5FAC:
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// addi r22,r17,8
	ctx.r22.s64 = ctx.r17.s64 + 8;
	// lwz r10,7136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B5FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// lwz r9,7136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r21,r17,128
	ctx.r21.s64 = ctx.r17.s64 + 128;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r21,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r21.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880B5FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// lwz r8,7136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r19,r17,136
	ctx.r19.s64 = ctx.r17.s64 + 136;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r19,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r19.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880B601C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,344(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r9,384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r8,332(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,19228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19228);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// add r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r10,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// lwz r9,148(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r25,r11,r30
	ctx.r25.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r25.u32);
	// beq cr6,0x880b60d4
	if (ctx.cr6.eq) goto loc_880B60D4;
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6098
	if (ctx.cr6.eq) goto loc_880B6098;
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B6094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
loc_880B6098:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b60c0
	if (ctx.cr6.eq) goto loc_880B60C0;
	// lwz r11,7136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B60BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
loc_880B60C0:
	// lwz r11,532(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,540(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r25.u32);
loc_880B60D4:
	// lwz r11,504(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r10,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r10.u32);
loc_880B60E0:
	// stw r30,152(r16)
	REX_STORE_U32(ctx.r16.u32 + 152, ctx.r30.u32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,100(r16)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085888
	ctx.lr = 0x880B60F8;
	sub_88085888(ctx, base);
	// lwz r11,28088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28088);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6184
	if (ctx.cr6.eq) goto loc_880B6184;
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x880b6120
	if (!ctx.cr6.eq) goto loc_880B6120;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_880B6120:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// rlwinm r6,r14,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r5,r15,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B6154;
	sub_88243CB0(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r30,336(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r6,r30,256
	ctx.r6.s64 = ctx.r30.s64 + 256;
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e26c8
	ctx.lr = 0x880B617C;
	sub_880E26C8(ctx, base);
	// stw r3,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// b 0x880b6188
	goto loc_880B6188;
loc_880B6184:
	// lwz r30,336(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
loc_880B6188:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880b6370
	if (!ctx.cr6.eq) goto loc_880B6370;
	// lwz r11,880(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 880);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b61ac
	if (ctx.cr6.eq) goto loc_880B61AC;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r23,760(r1)
	REX_STORE_U32(ctx.r1.u32 + 760, ctx.r23.u32);
	// b 0x880b61b0
	goto loc_880B61B0;
loc_880B61AC:
	// lwz r23,760(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 760);
loc_880B61B0:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b61c8
	if (ctx.cr6.eq) goto loc_880B61C8;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,752(r1)
	REX_STORE_U32(ctx.r1.u32 + 752, ctx.r25.u32);
	// b 0x880b61cc
	goto loc_880B61CC;
loc_880B61C8:
	// lwz r25,752(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
loc_880B61CC:
	// lwz r11,148(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b62c8
	if (ctx.cr6.eq) goto loc_880B62C8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880b6258
	if (!ctx.cr6.eq) goto loc_880B6258;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880b6258
	if (!ctx.cr6.eq) goto loc_880B6258;
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,652(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// addi r20,r1,1424
	ctx.r20.s64 = ctx.r1.s64 + 1424;
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r5,556(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r28,r1,1808
	ctx.r28.s64 = ctx.r1.s64 + 1808;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r10,628(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r9,500(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r26,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r20,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r28,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// bl 0x880d9d48
	ctx.lr = 0x880B6250;
	sub_880D9D48(ctx, base);
	// stw r3,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B6258:
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r10,r1,2192
	ctx.r10.s64 = ctx.r1.s64 + 2192;
	// lwz r9,652(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r29,r1,4112
	ctx.r29.s64 = ctx.r1.s64 + 4112;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r26,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// lwz r5,556(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r10,628(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// lwz r9,500(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// bl 0x880da788
	ctx.lr = 0x880B62C0;
	sub_880DA788(ctx, base);
	// stw r3,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B62C8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880b6324
	if (!ctx.cr6.eq) goto loc_880B6324;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880b6324
	if (!ctx.cr6.eq) goto loc_880B6324;
	// addi r11,r1,1808
	ctx.r11.s64 = ctx.r1.s64 + 1808;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,1424
	ctx.r4.s64 = ctx.r1.s64 + 1424;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r7,516(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,500(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x880d9a38
	ctx.lr = 0x880B631C;
	sub_880D9A38(ctx, base);
	// stw r3,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B6324:
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// lwz r7,516(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r11,r1,4112
	ctx.r11.s64 = ctx.r1.s64 + 4112;
	// lwz r6,500(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x880da1f0
	ctx.lr = 0x880B6368;
	sub_880DA1F0(ctx, base);
	// stw r3,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B6370:
	// lwz r25,752(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
	// lwz r23,760(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 760);
loc_880B6378:
	// lwz r11,2520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B6390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b63a4
	if (!ctx.cr6.eq) goto loc_880B63A4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_880B63A4:
	// stw r11,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8874
	if (ctx.cr6.eq) goto loc_880B8874;
	// lwz r29,484(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r23,r15,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r14,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B63E4;
	sub_88243CB0(ctx, base);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r11,r1,2192
	ctx.r11.s64 = ctx.r1.s64 + 2192;
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mulli r28,r24,1920
	ctx.r28.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(1920));
	// lwz r7,304(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r6,296(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r18,312(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r20,280(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b4110
	ctx.lr = 0x880B6474;
	sub_880B4110(ctx, base);
	// lwz r6,28020(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r26,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r26.u32);
	// beq cr6,0x880b64d0
	if (ctx.cr6.eq) goto loc_880B64D0;
	// addi r11,r1,644
	ctx.r11.s64 = ctx.r1.s64 + 644;
	// lwz r7,96(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// lwz r9,740(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r5,336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B64B4;
	sub_880F6AA8(ctx, base);
	// lwz r10,524(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r9,112(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r8,344(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// b 0x880b64d4
	goto loc_880B64D4;
loc_880B64D0:
	// lwz r10,344(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
loc_880B64D4:
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b6500
	if (!ctx.cr6.lt) goto loc_880B6500;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r10,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// b 0x880b6504
	goto loc_880B6504;
loc_880B6500:
	// stw r26,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r26.u32);
loc_880B6504:
	// lwz r10,576(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r25,r23,1
	ctx.r25.s64 = ctx.r23.s64 + 1;
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,888(r1)
	REX_STORE_U32(ctx.r1.u32 + 888, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r26.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r26,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r26.u32);
	// sthx r7,r8,r30
	REX_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u16);
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// lwz r7,2548(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r8,240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r8,r7,r30
	REX_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r8.u16);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r27,240(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r8,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r8.u32);
	// lwz r11,416(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// stw r27,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r11,780(r1)
	REX_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B6584;
	sub_88243CB0(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r8,304(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r11,r1,2576
	ctx.r11.s64 = ctx.r1.s64 + 2576;
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r20,8
	ctx.r5.s64 = ctx.r20.s64 + 8;
	// stw r10,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// addi r20,r1,244
	ctx.r20.s64 = ctx.r1.s64 + 244;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r27,416(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// stw r9,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r7,r1,1248
	ctx.r7.s64 = ctx.r1.s64 + 1248;
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// lwz r27,476(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r20,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bl 0x880b4110
	ctx.lr = 0x880B6618;
	sub_880B4110(ctx, base);
	// lwz r6,28020(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880b6670
	if (ctx.cr6.eq) goto loc_880B6670;
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r7,96(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,644(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B6654;
	sub_880F6AA8(ctx, base);
	// lwz r3,112(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r4,524(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r10,384(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// b 0x880b6674
	goto loc_880B6674;
loc_880B6670:
	// lwz r11,384(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
loc_880B6674:
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b66a4
	if (!ctx.cr6.lt) goto loc_880B66A4;
	// lwz r8,456(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r7,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// b 0x880b66a8
	goto loc_880B66A8;
loc_880B66A4:
	// stw r26,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r26.u32);
loc_880B66A8:
	// lwz r11,2544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r7,240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r7,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r7.u16);
	// lwz r4,28040(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,248(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// stw r11,528(r1)
	REX_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// stw r10,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r10.u32);
	// stw r3,744(r1)
	REX_STORE_U32(ctx.r1.u32 + 744, ctx.r3.u32);
	// beq cr6,0x880b6718
	if (ctx.cr6.eq) goto loc_880B6718;
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b6718
	if (!ctx.cr6.eq) goto loc_880B6718;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6718
	if (!ctx.cr6.eq) goto loc_880B6718;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r26,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r26.u32);
loc_880B6718:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B674C;
	sub_88243CB0(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r11,r1,2960
	ctx.r11.s64 = ctx.r1.s64 + 2960;
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,312(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r23,r1,244
	ctx.r23.s64 = ctx.r1.s64 + 244;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r22,r1,608
	ctx.r22.s64 = ctx.r1.s64 + 608;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r9,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r10,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,416(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r5,476(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r11,1380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r8,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r5,632(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x880b4110
	ctx.lr = 0x880B67F8;
	sub_880B4110(ctx, base);
	// lwz r4,28020(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880b689c
	if (ctx.cr6.eq) goto loc_880B689C;
	// lwz r9,644(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b6850
	if (ctx.cr6.eq) goto loc_880B6850;
	// lwz r10,736(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6854
	if (ctx.cr6.eq) goto loc_880B6854;
	// lwz r11,740(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880b6854
	if (!ctx.cr6.lt) goto loc_880B6854;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x880b6854
	goto loc_880B6854;
loc_880B6850:
	// lwz r9,736(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
loc_880B6854:
	// addi r11,r1,700
	ctx.r11.s64 = ctx.r1.s64 + 700;
	// lwz r8,336(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,332
	ctx.r10.s64 = ctx.r1.s64 + 332;
	// lwz r7,96(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r8,256
	ctx.r5.s64 = ctx.r8.s64 + 256;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B6880;
	sub_880F6AA8(ctx, base);
	// lwz r6,112(r16)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r7,524(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r5,332(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// b 0x880b68a0
	goto loc_880B68A0;
loc_880B689C:
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_880B68A0:
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b68d0
	if (!ctx.cr6.lt) goto loc_880B68D0;
	// lwz r8,456(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r7,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// b 0x880b68d4
	goto loc_880B68D4;
loc_880B68D0:
	// stw r30,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r30.u32);
loc_880B68D4:
	// lwz r10,536(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r30
	REX_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r9.u16);
	// lwz r4,2548(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r6,240(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r6,r4,r30
	REX_STORE_U16(ctx.r4.u32 + ctx.r30.u32, ctx.r6.u16);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,248(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r9,28040(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// stw r11,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// stw r3,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r3.u32);
	// beq cr6,0x880b6970
	if (ctx.cr6.eq) goto loc_880B6970;
	// lwz r9,472(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b6950
	if (ctx.cr6.eq) goto loc_880B6950;
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b6948
	if (!ctx.cr6.eq) goto loc_880B6948;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880b6950
	if (ctx.cr6.eq) goto loc_880B6950;
loc_880B6948:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r9.u32);
loc_880B6950:
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b6970
	if (!ctx.cr6.eq) goto loc_880B6970;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6970
	if (!ctx.cr6.eq) goto loc_880B6970;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r24,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r24.u32);
loc_880B6970:
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B699C;
	sub_88243CB0(ctx, base);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r5,304(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r25,r1,608
	ctx.r25.s64 = ctx.r1.s64 + 608;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// std r30,656(r1)
	REX_STORE_U64(ctx.r1.u32 + 656, ctx.r30.u64);
	// addi r7,r1,252
	ctx.r7.s64 = ctx.r1.s64 + 252;
	// stw r6,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r6.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r5,416(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// addi r30,r1,248
	ctx.r30.s64 = ctx.r1.s64 + 248;
	// lwz r11,312(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r9,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r25,476(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// addi r7,r1,1344
	ctx.r7.s64 = ctx.r1.s64 + 1344;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r25,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,3344
	ctx.r11.s64 = ctx.r1.s64 + 3344;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,1380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x880b4110
	ctx.lr = 0x880B6A48;
	sub_880B4110(ctx, base);
	// lwz r10,28020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// ld r30,656(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6ae8
	if (ctx.cr6.eq) goto loc_880B6AE8;
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r9,700(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6aa0
	if (ctx.cr6.eq) goto loc_880B6AA0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b6a9c
	if (ctx.cr6.eq) goto loc_880B6A9C;
	// lwz r10,644(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880b6aa0
	if (ctx.cr6.lt) goto loc_880B6AA0;
loc_880B6A9C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_880B6AA0:
	// lwz r5,336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r11,r1,404
	ctx.r11.s64 = ctx.r1.s64 + 404;
	// addi r10,r1,412
	ctx.r10.s64 = ctx.r1.s64 + 412;
	// lwz r7,96(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r5,272
	ctx.r5.s64 = ctx.r5.s64 + 272;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B6ACC;
	sub_880F6AA8(ctx, base);
	// lwz r3,112(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r4,524(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// b 0x880b6aec
	goto loc_880B6AEC;
loc_880B6AE8:
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
loc_880B6AEC:
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b6b1c
	if (!ctx.cr6.lt) goto loc_880B6B1C;
	// lwz r8,456(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r7,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// b 0x880b6b20
	goto loc_880B6B20;
loc_880B6B1C:
	// stw r23,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r23.u32);
loc_880B6B20:
	// lwz r11,2544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r6,240(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r6,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r6.u16);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,240(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,248(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lwz r11,28040(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// stw r10,684(r1)
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// stw r3,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// beq cr6,0x880b6bd8
	if (ctx.cr6.eq) goto loc_880B6BD8;
	// lwz r11,472(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6b9c
	if (ctx.cr6.eq) goto loc_880B6B9C;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6b94
	if (!ctx.cr6.eq) goto loc_880B6B94;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880b6b9c
	if (ctx.cr6.eq) goto loc_880B6B9C;
loc_880B6B94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
loc_880B6B9C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880b6bb8
	if (ctx.cr6.eq) goto loc_880B6BB8;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6bb4
	if (!ctx.cr6.eq) goto loc_880B6BB4;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880b6bb8
	if (ctx.cr6.eq) goto loc_880B6BB8;
loc_880B6BB4:
	// li r26,0
	ctx.r26.s64 = 0;
loc_880B6BB8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880b6bd8
	if (ctx.cr6.eq) goto loc_880B6BD8;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6bd0
	if (!ctx.cr6.eq) goto loc_880B6BD0;
	// cmpw cr6,r18,r9
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880b6bd8
	if (ctx.cr6.eq) goto loc_880B6BD8;
loc_880B6BD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
loc_880B6BD8:
	// lwz r11,19232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r7,148(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// add r25,r8,r11
	ctx.r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r25,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// beq cr6,0x880b6ee0
	if (ctx.cr6.eq) goto loc_880B6EE0;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r30,276(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r7,r1,548
	ctx.r7.s64 = ctx.r1.s64 + 548;
	// stw r20,1028(r1)
	REX_STORE_U32(ctx.r1.u32 + 1028, ctx.r20.u32);
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// stw r18,1012(r1)
	REX_STORE_U32(ctx.r1.u32 + 1012, ctx.r18.u32);
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// stw r22,1032(r1)
	REX_STORE_U32(ctx.r1.u32 + 1032, ctx.r22.u32);
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// stw r11,1024(r1)
	REX_STORE_U32(ctx.r1.u32 + 1024, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1008(r1)
	REX_STORE_U32(ctx.r1.u32 + 1008, ctx.r30.u32);
	// stw r21,1016(r1)
	REX_STORE_U32(ctx.r1.u32 + 1016, ctx.r21.u32);
	// stw r10,1036(r1)
	REX_STORE_U32(ctx.r1.u32 + 1036, ctx.r10.u32);
	// stw r9,1020(r1)
	REX_STORE_U32(ctx.r1.u32 + 1020, ctx.r9.u32);
	// bl 0x88095050
	ctx.lr = 0x880B6C34;
	sub_88095050(ctx, base);
	// lwz r10,464(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x880b6c58
	if (!ctx.cr6.eq) goto loc_880B6C58;
	// lwz r11,532(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,540(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// b 0x880b6ee0
	goto loc_880B6EE0;
loc_880B6C58:
	// addi r7,r1,548
	ctx.r7.s64 = ctx.r1.s64 + 548;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b598
	ctx.lr = 0x880B6C70;
	sub_8810B598(ctx, base);
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6e20
	if (ctx.cr6.eq) goto loc_880B6E20;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28088);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,764(r1)
	REX_STORE_U32(ctx.r1.u32 + 764, ctx.r30.u32);
	// stw r30,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r30,756(r1)
	REX_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// beq cr6,0x880b6ce0
	if (ctx.cr6.eq) goto loc_880B6CE0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b6cd8
	if (!ctx.cr6.eq) goto loc_880B6CD8;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b6cd8
	if (!ctx.cr6.eq) goto loc_880B6CD8;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b6cd0
	if (!ctx.cr6.eq) goto loc_880B6CD0;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6ce0
	if (ctx.cr6.eq) goto loc_880B6CE0;
loc_880B6CD0:
	// lwz r5,324(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// b 0x880b6ce4
	goto loc_880B6CE4;
loc_880B6CD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880b6ce4
	goto loc_880B6CE4;
loc_880B6CE0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_880B6CE4:
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2660
	ctx.lr = 0x880B6CF0;
	sub_880E2660(ctx, base);
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6d78
	if (ctx.cr6.eq) goto loc_880B6D78;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6D2C;
	sub_8810B7F8(ctx, base);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// lwz r4,436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r8,r1,264
	ctx.r8.s64 = ctx.r1.s64 + 264;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B6D70;
	sub_88085938(ctx, base);
	// lwz r29,496(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// lwz r30,264(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_880B6D78:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6e08
	if (ctx.cr6.eq) goto loc_880B6E08;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6DB4;
	sub_8810B7F8(ctx, base);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// addi r9,r1,764
	ctx.r9.s64 = ctx.r1.s64 + 764;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r8,r1,756
	ctx.r8.s64 = ctx.r1.s64 + 756;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r4,444(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B6DF8;
	sub_88085938(ctx, base);
	// lwz r10,756(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r11,764(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_880B6E08:
	// lwz r11,108(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 108);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// b 0x880b6ee0
	goto loc_880B6EE0;
loc_880B6E20:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6e80
	if (ctx.cr6.eq) goto loc_880B6E80;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,460(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6E5C;
	sub_8810B7F8(ctx, base);
	// lwz r10,608(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,436(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B6E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// stw r25,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
loc_880B6E80:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6ee0
	if (ctx.cr6.eq) goto loc_880B6EE0;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6EBC;
	sub_8810B7F8(ctx, base);
	// lwz r10,608(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,444(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B6ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r3,r25
	ctx.r9.u64 = ctx.r3.u64 + ctx.r25.u64;
	// stw r9,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
loc_880B6EE0:
	// lwz r11,21092(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8874
	if (ctx.cr6.eq) goto loc_880B8874;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,408(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r8,412(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r4,332(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r7,384(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r30,2544(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r6,344(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,28040(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r28,r4,r8
	ctx.r28.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r29,1340(r1)
	REX_STORE_U32(ctx.r1.u32 + 1340, ctx.r29.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r6,r4
	ctx.r17.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,1040(r1)
	REX_STORE_U32(ctx.r1.u32 + 1040, ctx.r10.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r22,r10,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,1048(r1)
	REX_STORE_U32(ctx.r1.u32 + 1048, ctx.r9.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r8,1044(r1)
	REX_STORE_U32(ctx.r1.u32 + 1044, ctx.r8.u32);
	// rlwinm r25,r8,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r9,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, ctx.r10.u32);
	// rlwinm r20,r10,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lhzx r18,r22,r30
	ctx.r18.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r30.u32);
	// lhzx r16,r22,r11
	ctx.r16.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r9,r25,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// lhzx r8,r21,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// lhzx r4,r20,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r30.u32);
	// lhzx r3,r20,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// lhzx r15,r21,r30
	ctx.r15.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r30.u32);
	// lhzx r14,r25,r30
	ctx.r14.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r30.u32);
	// sth r9,666(r1)
	REX_STORE_U16(ctx.r1.u32 + 666, ctx.r9.u16);
	// sth r8,668(r1)
	REX_STORE_U16(ctx.r1.u32 + 668, ctx.r8.u16);
	// sth r4,926(r1)
	REX_STORE_U16(ctx.r1.u32 + 926, ctx.r4.u16);
	// sth r3,670(r1)
	REX_STORE_U16(ctx.r1.u32 + 670, ctx.r3.u16);
	// beq cr6,0x880b772c
	if (ctx.cr6.eq) goto loc_880B772C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880b772c
	if (ctx.cr6.eq) goto loc_880B772C;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r19,372(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r24,1068(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r23,1064(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1064);
	// bne cr6,0x880b6fc8
	if (!ctx.cr6.eq) goto loc_880B6FC8;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x880b733c
	goto loc_880B733C;
loc_880B6FC8:
	// lwz r10,1056(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1056);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b7210
	if (ctx.cr6.eq) goto loc_880B7210;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r29,r23,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r9,1076(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r8,1072(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1072);
	// subf r30,r24,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r24.u64;
	// subf r28,r9,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880b7120
	if (!ctx.cr6.lt) goto loc_880B7120;
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b70dc
	if (ctx.cr6.eq) goto loc_880B70DC;
	// lwz r27,284(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,272(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b706c
	if (!ctx.cr6.eq) goto loc_880B706C;
	// bl 0x88085e60
	ctx.lr = 0x880B7064;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7090
	goto loc_880B7090;
loc_880B706C:
	// bl 0x88085e60
	ctx.lr = 0x880B7070;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B708C;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B7090:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b70a4
	if (!ctx.cr6.eq) goto loc_880B70A4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b70a8
	if (ctx.cr6.eq) goto loc_880B70A8;
loc_880B70A4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B70A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B70BC;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r8,264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r7
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x880b733c
	goto loc_880B733C;
loc_880B70DC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7334
	goto loc_880B7334;
loc_880B7120:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b71cc
	if (ctx.cr6.eq) goto loc_880B71CC;
	// lwz r29,284(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,272(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b715c
	if (!ctx.cr6.eq) goto loc_880B715C;
	// bl 0x88085e60
	ctx.lr = 0x880B7154;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7180
	goto loc_880B7180;
loc_880B715C:
	// bl 0x88085e60
	ctx.lr = 0x880B7160;
	sub_88085E60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B717C;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B7180:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880b7194
	if (!ctx.cr6.eq) goto loc_880B7194;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b7198
	if (ctx.cr6.eq) goto loc_880B7198;
loc_880B7194:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7198:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B71AC;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r8,264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r7
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x880b733c
	goto loc_880B733C;
loc_880B71CC:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7334
	goto loc_880B7334;
loc_880B7210:
	// lwz r10,28020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// beq cr6,0x880b72c8
	if (ctx.cr6.eq) goto loc_880B72C8;
	// lwz r27,284(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// subf r29,r23,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r26,272(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// subf r30,r24,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880b7258
	if (!ctx.cr6.eq) goto loc_880B7258;
	// bl 0x88085e60
	ctx.lr = 0x880B7250;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b727c
	goto loc_880B727C;
loc_880B7258:
	// bl 0x88085e60
	ctx.lr = 0x880B725C;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7278;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B727C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b7290
	if (!ctx.cr6.eq) goto loc_880B7290;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b7294
	if (ctx.cr6.eq) goto loc_880B7294;
loc_880B7290:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7294:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B72A8;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r8,264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r7
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x880b733c
	goto loc_880B733C;
loc_880B72C8:
	// subf r9,r23,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r23.u64;
	// subf r7,r24,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r24.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7334
	goto loc_880B7334;
loc_880B732C:
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B7334:
	// lwz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880B733C:
	// lwz r11,452(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b7360
	if (!ctx.cr6.eq) goto loc_880B7360;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// b 0x880b7bf4
	goto loc_880B7BF4;
loc_880B7360:
	// lwz r10,1168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b75cc
	if (ctx.cr6.eq) goto loc_880B75CC;
	// lwz r10,432(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r9,1188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r11,452(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r8,1184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1184);
	// subf r30,r9,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r7,1180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r6,1176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1176);
	// subf r28,r8,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r27,r7,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r26,r6,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r5,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 31;
	// srawi r4,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r28.s32 >> 31;
	// srawi r3,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 31;
	// srawi r8,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 31;
	// xor r7,r30,r5
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r5.u64;
	// xor r11,r26,r8
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// xor r6,r28,r4
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r4.u64;
	// stw r11,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// xor r9,r27,r3
	ctx.r9.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// subf r11,r5,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lwz r7,656(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// subf r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880b74d4
	if (!ctx.cr6.lt) goto loc_880B74D4;
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7490
	if (ctx.cr6.eq) goto loc_880B7490;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7418
	if (!ctx.cr6.eq) goto loc_880B7418;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88085e60
	ctx.lr = 0x880B7410;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7440
	goto loc_880B7440;
loc_880B7418:
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x88085e60
	ctx.lr = 0x880B7420;
	sub_88085E60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B743C;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B7440:
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b745c
	if (!ctx.cr6.eq) goto loc_880B745C;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7460
	if (ctx.cr6.eq) goto loc_880B7460;
loc_880B745C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7460:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7474;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// b 0x880b7708
	goto loc_880B7708;
loc_880B7490:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7700
	goto loc_880B7700;
loc_880B74D4:
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b7588
	if (ctx.cr6.eq) goto loc_880B7588;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7510
	if (!ctx.cr6.eq) goto loc_880B7510;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88085e60
	ctx.lr = 0x880B7508;
	sub_88085E60(ctx, base);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7538
	goto loc_880B7538;
loc_880B7510:
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x88085e60
	ctx.lr = 0x880B7518;
	sub_88085E60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7534;
	sub_88085E60(ctx, base);
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
loc_880B7538:
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7554
	if (!ctx.cr6.eq) goto loc_880B7554;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7558
	if (ctx.cr6.eq) goto loc_880B7558;
loc_880B7554:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7558:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B756C;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r27,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// b 0x880b7708
	goto loc_880B7708;
loc_880B7588:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7700
	goto loc_880B7700;
loc_880B75CC:
	// lwz r10,28020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,1176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1176);
	// beq cr6,0x880b7694
	if (ctx.cr6.eq) goto loc_880B7694;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,256(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,432(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,1180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r8,452(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// subf r30,r11,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r28,r10,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x880b7620
	if (!ctx.cr6.eq) goto loc_880B7620;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7618;
	sub_88085E60(ctx, base);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7648
	goto loc_880B7648;
loc_880B7620:
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x88085e60
	ctx.lr = 0x880B7628;
	sub_88085E60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7644;
	sub_88085E60(ctx, base);
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
loc_880B7648:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880b7660
	if (!ctx.cr6.eq) goto loc_880B7660;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7664
	if (ctx.cr6.eq) goto loc_880B7664;
loc_880B7660:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7664:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7678;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r27,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// b 0x880b7708
	goto loc_880B7708;
loc_880B7694:
	// lwz r8,1180(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// subf r6,r10,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r7,432(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// xor r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7700
	goto loc_880B7700;
loc_880B76FC:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B7700:
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// stw r11,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
loc_880B7708:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r9,452(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r7,432(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// sth r11,396(r1)
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r11.u16);
	// sth r10,376(r1)
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r10.u16);
	// sth r9,398(r1)
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r9.u16);
	// sth r7,378(r1)
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r7.u16);
	// b 0x880b7bf4
	goto loc_880B7BF4;
loc_880B772C:
	// lwz r10,28056(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28056);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b79b8
	if (!ctx.cr6.eq) goto loc_880B79B8;
	// extsh r10,r18
	ctx.r10.s64 = ctx.r18.s16;
	// stw r10,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r10.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,584
	ctx.r10.s64 = ctx.r1.s64 + 584;
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r19,r1,244
	ctx.r19.s64 = ctx.r1.s64 + 244;
	// stw r10,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r10.u32);
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// lwz r7,304(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r6,r1,1056
	ctx.r6.s64 = ctx.r1.s64 + 1056;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r7,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r7.u32);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lwz r26,268(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r23,280(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r19,656(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// lwz r19,728(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lhzx r19,r22,r11
	ctx.r19.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// extsh r19,r19
	ctx.r19.s64 = ctx.r19.s16;
	// stw r19,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r19.u32);
	// lhzx r30,r25,r30
	ctx.r30.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r30.u32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// stw r30,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r30.u32);
	// lhzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88081e50
	ctx.lr = 0x880B77E8;
	sub_88081E50(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r30,16384
	ctx.r30.s64 = 16384;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7804
	if (!ctx.cr6.lt) goto loc_880B7804;
	// stw r30,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r30,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// b 0x880b7808
	goto loc_880B7808;
loc_880B7804:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_880B7808:
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r5,r24,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r7,240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,396(r1)
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// sthx r11,r8,r22
	REX_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r11.u16);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// sth r7,376(r1)
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r7.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r11,r8,r22
	REX_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r11.u16);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r11,r8,r25
	REX_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r11.u16);
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r11,r8,r25
	REX_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r11.u16);
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lhzx r11,r21,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r7.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r11.u32);
	// lhzx r11,r21,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// lhzx r11,r20,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r7.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// lhzx r11,r20,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B78A4;
	sub_88243CB0(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r11,304(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r1,584
	ctx.r6.s64 = ctx.r1.s64 + 584;
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// std r30,728(r1)
	REX_STORE_U64(ctx.r1.u32 + 728, ctx.r30.u64);
	// stw r6,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r6.u32);
	// addi r19,r1,244
	ctx.r19.s64 = ctx.r1.s64 + 244;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r30,r1,568
	ctx.r30.s64 = ctx.r1.s64 + 568;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// lwz r27,656(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r4,688(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lwz r5,1380(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x88081e50
	ctx.lr = 0x880B7924;
	sub_88081E50(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// ld r30,728(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 728);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7944
	if (!ctx.cr6.lt) goto loc_880B7944;
	// stw r30,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r30,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// b 0x880b7948
	goto loc_880B7948;
loc_880B7944:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_880B7948:
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,19232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r7,240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lhz r5,666(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 666);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r18,r9,r22
	REX_STORE_U16(ctx.r9.u32 + ctx.r22.u32, ctx.r18.u16);
	// sth r8,398(r1)
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r8.u16);
	// lhz r11,668(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 668);
	// sth r7,378(r1)
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r7.u16);
	// stw r4,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r4.u32);
	// lhz r10,926(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 926);
	// lhz r9,670(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 670);
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r16,r8,r22
	REX_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r16.u16);
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r14,r7,r25
	REX_STORE_U16(ctx.r7.u32 + ctx.r25.u32, ctx.r14.u16);
	// lwz r6,2548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r5,r6,r25
	REX_STORE_U16(ctx.r6.u32 + ctx.r25.u32, ctx.r5.u16);
	// lwz r5,2544(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r15,r5,r21
	REX_STORE_U16(ctx.r5.u32 + ctx.r21.u32, ctx.r15.u16);
	// lwz r4,2548(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r11,r4,r21
	REX_STORE_U16(ctx.r4.u32 + ctx.r21.u32, ctx.r11.u16);
	// lwz r3,2544(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r10,r3,r20
	REX_STORE_U16(ctx.r3.u32 + ctx.r20.u32, ctx.r10.u16);
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r9,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r9.u16);
	// b 0x880b7be8
	goto loc_880B7BE8;
loc_880B79B8:
	// lwz r26,288(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r28,268(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r27,280(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r26,16384
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16384, ctx.xer);
	// bne cr6,0x880b79d4
	if (!ctx.cr6.eq) goto loc_880B79D4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x880b7a28
	goto loc_880B7A28;
loc_880B79D4:
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r10,r1,508
	ctx.r10.s64 = ctx.r1.s64 + 508;
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7A1C;
	sub_88094E80(ctx, base);
	// lwz r6,344(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r11,508(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B7A28:
	// lwz r10,780(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r29,528(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,16384
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16384, ctx.xer);
	// stw r30,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// bne cr6,0x880b7a48
	if (!ctx.cr6.eq) goto loc_880B7A48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x880b7a94
	goto loc_880B7A94;
loc_880B7A48:
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lwz r10,440(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7A8C;
	sub_88094E80(ctx, base);
	// lwz r11,592(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 592);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B7A94:
	// lwz r10,744(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 744);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7abc
	if (!ctx.cr6.lt) goto loc_880B7ABC;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// sth r26,396(r1)
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r26.u16);
	// sth r11,376(r1)
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r11.u16);
	// b 0x880b7ad0
	goto loc_880B7AD0;
loc_880B7ABC:
	// lwz r10,440(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// sth r9,396(r1)
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r9.u16);
	// sth r10,376(r1)
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r10.u16);
loc_880B7AD0:
	// lwz r26,452(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r26,16384
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16384, ctx.xer);
	// bne cr6,0x880b7ae4
	if (!ctx.cr6.eq) goto loc_880B7AE4;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// b 0x880b7b3c
	goto loc_880B7B3C;
loc_880B7AE4:
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// lwz r11,1380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r8,r1,508
	ctx.r8.s64 = ctx.r1.s64 + 508;
	// lwz r10,432(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r6,r1,1168
	ctx.r6.s64 = ctx.r1.s64 + 1168;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,728(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7B34;
	sub_88094E80(ctx, base);
	// lwz r11,508(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B7B3C:
	// lwz r10,632(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16384, ctx.xer);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// bne cr6,0x880b7b58
	if (!ctx.cr6.eq) goto loc_880B7B58;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// b 0x880b7ba8
	goto loc_880B7BA8;
loc_880B7B58:
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// lwz r10,1380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r8,r1,1168
	ctx.r8.s64 = ctx.r1.s64 + 1168;
	// lwz r4,688(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7BA4;
	sub_88094E80(ctx, base);
	// lwz r11,592(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 592);
loc_880B7BA8:
	// lwz r10,476(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7bd0
	if (!ctx.cr6.lt) goto loc_880B7BD0;
	// lwz r10,432(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// sth r26,398(r1)
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r26.u16);
	// sth r10,378(r1)
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r10.u16);
	// b 0x880b7bdc
	goto loc_880B7BDC;
loc_880B7BD0:
	// sth r23,398(r1)
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r23.u16);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r19,378(r1)
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r19.u16);
loc_880B7BDC:
	// lwz r10,19232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
loc_880B7BE8:
	// lwz r23,1064(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r24,1068(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r19,372(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_880B7BF4:
	// lwz r11,28040(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8370
	if (ctx.cr6.eq) goto loc_880B8370;
	// lwz r11,488(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8370
	if (ctx.cr6.eq) goto loc_880B8370;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b7c28
	if (!ctx.cr6.eq) goto loc_880B7C28;
	// lwz r11,344(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7C28:
	// lwz r10,1056(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1056);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b7e78
	if (ctx.cr6.eq) goto loc_880B7E78;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r29,r23,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r9,1076(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r8,1072(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1072);
	// subf r30,r24,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r24.u64;
	// subf r28,r9,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880b7d84
	if (!ctx.cr6.lt) goto loc_880B7D84;
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b7d40
	if (ctx.cr6.eq) goto loc_880B7D40;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7ccc
	if (!ctx.cr6.eq) goto loc_880B7CCC;
	// bl 0x88085e60
	ctx.lr = 0x880B7CC4;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7cf0
	goto loc_880B7CF0;
loc_880B7CCC:
	// bl 0x88085e60
	ctx.lr = 0x880B7CD0;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7CEC;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B7CF0:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7d0c
	if (!ctx.cr6.eq) goto loc_880B7D0C;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7d10
	if (ctx.cr6.eq) goto loc_880B7D10;
loc_880B7D0C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7D10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7D24;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7D40:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fa4
	goto loc_880B7FA4;
loc_880B7D84:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7e34
	if (ctx.cr6.eq) goto loc_880B7E34;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7dc0
	if (!ctx.cr6.eq) goto loc_880B7DC0;
	// bl 0x88085e60
	ctx.lr = 0x880B7DB8;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7de4
	goto loc_880B7DE4;
loc_880B7DC0:
	// bl 0x88085e60
	ctx.lr = 0x880B7DC4;
	sub_88085E60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7DE0;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B7DE4:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7e00
	if (!ctx.cr6.eq) goto loc_880B7E00;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7e04
	if (ctx.cr6.eq) goto loc_880B7E04;
loc_880B7E00:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7E04:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7E18;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7E34:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fa4
	goto loc_880B7FA4;
loc_880B7E78:
	// lwz r10,28020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b7f38
	if (ctx.cr6.eq) goto loc_880B7F38;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// subf r30,r24,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r29,r23,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x880b7ec4
	if (!ctx.cr6.eq) goto loc_880B7EC4;
	// bl 0x88085e60
	ctx.lr = 0x880B7EBC;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7ee8
	goto loc_880B7EE8;
loc_880B7EC4:
	// bl 0x88085e60
	ctx.lr = 0x880B7EC8;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7EE4;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B7EE8:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7f04
	if (!ctx.cr6.eq) goto loc_880B7F04;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7f08
	if (ctx.cr6.eq) goto loc_880B7F08;
loc_880B7F04:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7F08:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7F1C;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7F38:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r9,r23,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r23.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subf r7,r24,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r24.u64;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fa4
	goto loc_880B7FA4;
loc_880B7FA0:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B7FA4:
	// lwz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880B7FAC:
	// lwz r24,528(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r25,440(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// bne cr6,0x880b7fd4
	if (!ctx.cr6.eq) goto loc_880B7FD4;
	// lwz r11,384(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r9.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B7FD4:
	// lwz r11,1248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8220
	if (ctx.cr6.eq) goto loc_880B8220;
	// lwz r11,1268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// lwz r10,1264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1264);
	// lwz r9,1260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// subf r30,r11,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r11.u64;
	// lwz r8,1256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r28,r9,r25
	ctx.r28.u64 = ctx.r25.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b8130
	if (!ctx.cr6.lt) goto loc_880B8130;
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b80ec
	if (ctx.cr6.eq) goto loc_880B80EC;
	// lwz r29,272(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r23,252(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b807c
	if (!ctx.cr6.eq) goto loc_880B807C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8074;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b80a4
	goto loc_880B80A4;
loc_880B807C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8084;
	sub_88085E60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
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
	// bl 0x88085e60
	ctx.lr = 0x880B80A0;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B80A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880b80b8
	if (!ctx.cr6.eq) goto loc_880B80B8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b80bc
	if (ctx.cr6.eq) goto loc_880B80BC;
loc_880B80B8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B80BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B80D0;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B80EC:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b834c
	goto loc_880B834C;
loc_880B8130:
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b81dc
	if (ctx.cr6.eq) goto loc_880B81DC;
	// lwz r27,272(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r23,252(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b816c
	if (!ctx.cr6.eq) goto loc_880B816C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8164;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b8194
	goto loc_880B8194;
loc_880B816C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8174;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8190;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8194:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b81a8
	if (!ctx.cr6.eq) goto loc_880B81A8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b81ac
	if (ctx.cr6.eq) goto loc_880B81AC;
loc_880B81A8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B81AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B81C0;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B81DC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b834c
	goto loc_880B834C;
loc_880B8220:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b82dc
	if (ctx.cr6.eq) goto loc_880B82DC;
	// lwz r11,1260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,272(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// subf r30,r11,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r11.u64;
	// lwz r23,252(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x880b826c
	if (!ctx.cr6.eq) goto loc_880B826C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8264;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b8294
	goto loc_880B8294;
loc_880B826C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8274;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8290;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8294:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b82a8
	if (!ctx.cr6.eq) goto loc_880B82A8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b82ac
	if (ctx.cr6.eq) goto loc_880B82AC;
loc_880B82A8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B82AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B82C0;
	sub_88085E60(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B82DC:
	// lwz r11,1256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	// lwz r10,1260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
	// subf r7,r10,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b834c
	goto loc_880B834C;
loc_880B8348:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B834C:
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// stw r11,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
loc_880B8354:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sth r24,394(r1)
	REX_STORE_U16(ctx.r1.u32 + 394, ctx.r24.u16);
	// sth r25,402(r1)
	REX_STORE_U16(ctx.r1.u32 + 402, ctx.r25.u16);
	// sth r11,392(r1)
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r11.u16);
	// sth r9,400(r1)
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r9.u16);
	// b 0x880b8864
	goto loc_880B8864;
loc_880B8370:
	// lwz r11,28056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b862c
	if (!ctx.cr6.eq) goto loc_880B862C;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// lwz r30,316(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,408(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lhzx r28,r22,r7
	ctx.r28.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r7.u32);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r28,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r28.u32);
	// lhzx r11,r22,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// lhzx r11,r21,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r7.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// lhzx r11,r21,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B83E0;
	sub_88243CB0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r26,308(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r28,r1,568
	ctx.r28.s64 = ctx.r1.s64 + 568;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r27,r1,248
	ctx.r27.s64 = ctx.r1.s64 + 248;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// addi r24,r1,584
	ctx.r24.s64 = ctx.r1.s64 + 584;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,304(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,268(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x88081e50
	ctx.lr = 0x880B844C;
	sub_88081E50(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b846c
	if (!ctx.cr6.lt) goto loc_880B846C;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// b 0x880b8470
	goto loc_880B8470;
loc_880B846C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_880B8470:
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r11,r1,1032
	ctx.r11.s64 = ctx.r1.s64 + 1032;
	// sth r9,392(r1)
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r9.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// sth r8,400(r1)
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r8.u16);
loc_880B848C:
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sthx r6,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u16);
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,2548(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sthx r4,r3,r7
	REX_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u16);
	// bdnz 0x880b848c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880B848C;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r29,316(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,888(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 888);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B84E8;
	sub_88243CB0(ctx, base);
	// lwz r5,304(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r8,308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// lwz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r7,r1,584
	ctx.r7.s64 = ctx.r1.s64 + 584;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r8,408(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r7,268(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r11,2544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r29,2548(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lhzx r28,r25,r11
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r28,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r28.u32);
	// lhzx r28,r25,r29
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r29.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r28,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r28.u32);
	// lhzx r11,r20,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// lhzx r11,r20,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r29.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88081e50
	ctx.lr = 0x880B8594;
	sub_88081E50(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,1340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b85b8
	if (!ctx.cr6.lt) goto loc_880B85B8;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// b 0x880b85bc
	goto loc_880B85BC;
loc_880B85B8:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_880B85BC:
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,2544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lhz r7,666(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 666);
	// lhz r5,668(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 668);
	// sth r9,394(r1)
	REX_STORE_U16(ctx.r1.u32 + 394, ctx.r9.u16);
	// sthx r18,r11,r22
	REX_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r18.u16);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r16,r9,r22
	REX_STORE_U16(ctx.r9.u32 + ctx.r22.u32, ctx.r16.u16);
	// sth r8,402(r1)
	REX_STORE_U16(ctx.r1.u32 + 402, ctx.r8.u16);
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhz r3,926(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 926);
	// lhz r11,670(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 670);
	// sthx r14,r8,r25
	REX_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r14.u16);
	// lwz r6,2548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r7,r6,r25
	REX_STORE_U16(ctx.r6.u32 + ctx.r25.u32, ctx.r7.u16);
	// lwz r4,2544(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r15,r4,r21
	REX_STORE_U16(ctx.r4.u32 + ctx.r21.u32, ctx.r15.u16);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r5,r9,r21
	REX_STORE_U16(ctx.r9.u32 + ctx.r21.u32, ctx.r5.u16);
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r3,r8,r20
	REX_STORE_U16(ctx.r8.u32 + ctx.r20.u32, ctx.r3.u16);
	// lwz r7,2548(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r11,r7,r20
	REX_STORE_U16(ctx.r7.u32 + ctx.r20.u32, ctx.r11.u16);
	// lwz r11,19232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// b 0x880b8864
	goto loc_880B8864;
loc_880B862C:
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b8640
	if (!ctx.cr6.eq) goto loc_880B8640;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// b 0x880b8698
	goto loc_880B8698;
loc_880B8640:
	// addi r11,r1,520
	ctx.r11.s64 = ctx.r1.s64 + 520;
	// lwz r10,1380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r6,r1,488
	ctx.r6.s64 = ctx.r1.s64 + 488;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r8,316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x88094e80
	ctx.lr = 0x880B8694;
	sub_88094E80(ctx, base);
	// lwz r11,520(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
loc_880B8698:
	// lwz r10,780(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r9,452(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// stw r30,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// bne cr6,0x880b86b8
	if (!ctx.cr6.eq) goto loc_880B86B8;
	// lwz r11,344(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// b 0x880b8700
	goto loc_880B8700;
loc_880B86B8:
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// lwz r10,432(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// addi r8,r1,552
	ctx.r8.s64 = ctx.r1.s64 + 552;
	// lwz r9,452(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,1056
	ctx.r6.s64 = ctx.r1.s64 + 1056;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r8,316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,340(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x88094e80
	ctx.lr = 0x880B86FC;
	sub_88094E80(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
loc_880B8700:
	// lwz r10,632(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b872c
	if (!ctx.cr6.lt) goto loc_880B872C;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sth r11,392(r1)
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r11.u16);
	// sth r10,400(r1)
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r10.u16);
	// b 0x880b8740
	goto loc_880B8740;
loc_880B872C:
	// lwz r10,452(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r9,432(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// sth r10,392(r1)
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r10.u16);
	// sth r9,400(r1)
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r9.u16);
loc_880B8740:
	// lwz r11,528(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b8754
	if (!ctx.cr6.eq) goto loc_880B8754;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// b 0x880b87b0
	goto loc_880B87B0;
loc_880B8754:
	// addi r10,r1,488
	ctx.r10.s64 = ctx.r1.s64 + 488;
	// lwz r11,1380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r9,r1,520
	ctx.r9.s64 = ctx.r1.s64 + 520;
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,1248
	ctx.r7.s64 = ctx.r1.s64 + 1248;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r8,136
	ctx.r4.s64 = ctx.r8.s64 + 136;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,440(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,528(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r8,316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x88094e80
	ctx.lr = 0x880B87AC;
	sub_88094E80(ctx, base);
	// lwz r11,520(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
loc_880B87B0:
	// lwz r10,744(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r9,684(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// stw r30,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// bne cr6,0x880b87d0
	if (!ctx.cr6.eq) goto loc_880B87D0;
	// lwz r11,384(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// b 0x880b8820
	goto loc_880B8820;
loc_880B87D0:
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// lwz r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r9,r1,552
	ctx.r9.s64 = ctx.r1.s64 + 552;
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,1248
	ctx.r6.s64 = ctx.r1.s64 + 1248;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,416(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r9,684(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r8,316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x88094e80
	ctx.lr = 0x880B881C;
	sub_88094E80(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
loc_880B8820:
	// lwz r10,476(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b8844
	if (!ctx.cr6.lt) goto loc_880B8844;
	// lwz r10,528(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r9,440(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// b 0x880b8850
	goto loc_880B8850;
loc_880B8844:
	// lwz r10,684(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,416(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
loc_880B8850:
	// sth r10,394(r1)
	REX_STORE_U16(ctx.r1.u32 + 394, ctx.r10.u16);
	// lwz r10,19232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// sth r9,402(r1)
	REX_STORE_U16(ctx.r1.u32 + 402, ctx.r9.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
loc_880B8864:
	// lwz r16,268(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r17,340(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r15,408(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r14,316(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B8874:
	// lwz r21,484(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r6,r14,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r19,256(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r20,272(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r5,r15,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r18,284(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// lwz r8,2548(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,2544(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// bl 0x88243cb0
	ctx.lr = 0x880B88AC;
	sub_88243CB0(ctx, base);
	// lwz r11,28040(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b932c
	if (ctx.cr6.eq) goto loc_880B932C;
	// lwz r11,472(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b932c
	if (ctx.cr6.eq) goto loc_880B932C;
	// lwz r23,288(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r22,276(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16384, ctx.xer);
	// stw r23,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r23.u32);
	// stw r23,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r22,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r22.u32);
	// stw r22,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// bne cr6,0x880b88f4
	if (!ctx.cr6.eq) goto loc_880B88F4;
	// lwz r26,328(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r24,264(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// b 0x880b8de8
	goto loc_880B8DE8;
loc_880B88F4:
	// lwz r11,928(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8c20
	if (ctx.cr6.eq) goto loc_880B8C20;
	// lwz r11,948(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 948);
	// lwz r10,944(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 944);
	// lwz r9,940(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// lwz r8,936(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r28,r9,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b8ac0
	if (!ctx.cr6.lt) goto loc_880B8AC0;
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8a7c
	if (ctx.cr6.eq) goto loc_880B8A7C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8998
	if (!ctx.cr6.eq) goto loc_880B8998;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8998
	if (!ctx.cr6.eq) goto loc_880B8998;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8998
	if (!ctx.cr6.eq) goto loc_880B8998;
	// lwz r30,252(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880b899c
	if (!ctx.cr6.eq) goto loc_880B899C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x880b89b8
	goto loc_880B89B8;
loc_880B8998:
	// lwz r30,252(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B899C:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b89d8
	if (!ctx.cr6.eq) goto loc_880B89D8;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b89d8
	if (!ctx.cr6.eq) goto loc_880B89D8;
	// cmpw cr6,r19,r30
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880b89d8
	if (!ctx.cr6.eq) goto loc_880B89D8;
loc_880B89B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B89D0;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8a48
	goto loc_880B8A48;
loc_880B89D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B89F0;
	sub_88085E60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A0C;
	sub_88085E60(ctx, base);
	// add r30,r26,r3
	ctx.r30.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A28;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A44;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B8A48:
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
	// bl 0x88085e60
	ctx.lr = 0x880B8A60;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x880b8de0
	goto loc_880B8DE0;
loc_880B8A7C:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b8dd4
	goto loc_880B8DD4;
loc_880B8AC0:
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b8bdc
	if (ctx.cr6.eq) goto loc_880B8BDC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8af8
	if (!ctx.cr6.eq) goto loc_880B8AF8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8af8
	if (!ctx.cr6.eq) goto loc_880B8AF8;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8af8
	if (!ctx.cr6.eq) goto loc_880B8AF8;
	// lwz r28,252(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b8afc
	if (!ctx.cr6.eq) goto loc_880B8AFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b8b18
	goto loc_880B8B18;
loc_880B8AF8:
	// lwz r28,252(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B8AFC:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b8b38
	if (!ctx.cr6.eq) goto loc_880B8B38;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b8b38
	if (!ctx.cr6.eq) goto loc_880B8B38;
	// cmpw cr6,r19,r28
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880b8b38
	if (!ctx.cr6.eq) goto loc_880B8B38;
loc_880B8B18:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B30;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8ba8
	goto loc_880B8BA8;
loc_880B8B38:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B50;
	sub_88085E60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B6C;
	sub_88085E60(ctx, base);
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B88;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8BA4;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8BA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8BC0;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x880b8de0
	goto loc_880B8DE0;
loc_880B8BDC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b8dd4
	goto loc_880B8DD4;
loc_880B8C20:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8d5c
	if (ctx.cr6.eq) goto loc_880B8D5C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b8c78
	goto loc_880B8C78;
loc_880B8C58:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b8ca8
	if (!ctx.cr6.eq) goto loc_880B8CA8;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b8ca8
	if (!ctx.cr6.eq) goto loc_880B8CA8;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b8ca8
	if (!ctx.cr6.eq) goto loc_880B8CA8;
loc_880B8C78:
	// lwz r11,940(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,936(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8CA0;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8d28
	goto loc_880B8D28;
loc_880B8CA8:
	// lwz r11,940(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,936(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8CD0;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8CEC;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8D08;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8D24;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8D28:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8D40;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x880b8de0
	goto loc_880B8DE0;
loc_880B8D5C:
	// lwz r11,936(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r10,940(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// subf r9,r11,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r8,r10,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b8dd4
	goto loc_880B8DD4;
loc_880B8DC8:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B8DD4:
	// lwz r10,19232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_880B8DE0:
	// lwz r24,264(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r26,r11,r24
	ctx.r26.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_880B8DE8:
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// stw r26,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b9600
	if (ctx.cr6.eq) goto loc_880B9600;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7536(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7532(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B8E24;
	sub_88243CB0(ctx, base);
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16384, ctx.xer);
	// bne cr6,0x880b8e38
	if (!ctx.cr6.eq) goto loc_880B8E38;
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B8E38:
	// lwz r11,784(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9164
	if (ctx.cr6.eq) goto loc_880B9164;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,800(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,796(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// lwz r8,792(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r28,r9,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b9004
	if (!ctx.cr6.lt) goto loc_880B9004;
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8fc4
	if (ctx.cr6.eq) goto loc_880B8FC4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8edc
	if (!ctx.cr6.eq) goto loc_880B8EDC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8edc
	if (!ctx.cr6.eq) goto loc_880B8EDC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8edc
	if (!ctx.cr6.eq) goto loc_880B8EDC;
	// lwz r30,252(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880b8ee0
	if (!ctx.cr6.eq) goto loc_880B8EE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x880b8efc
	goto loc_880B8EFC;
loc_880B8EDC:
	// lwz r30,252(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B8EE0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b8f1c
	if (!ctx.cr6.eq) goto loc_880B8F1C;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b8f1c
	if (!ctx.cr6.eq) goto loc_880B8F1C;
	// cmpw cr6,r19,r30
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880b8f1c
	if (!ctx.cr6.eq) goto loc_880B8F1C;
loc_880B8EFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F14;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8f8c
	goto loc_880B8F8C;
loc_880B8F1C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F34;
	sub_88085E60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F50;
	sub_88085E60(ctx, base);
	// add r30,r25,r3
	ctx.r30.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F6C;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F88;
	sub_88085E60(ctx, base);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B8F8C:
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
	// bl 0x88085e60
	ctx.lr = 0x880B8FA4;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r7,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B8FC4:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b9314
	goto loc_880B9314;
loc_880B9004:
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b9124
	if (ctx.cr6.eq) goto loc_880B9124;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b903c
	if (!ctx.cr6.eq) goto loc_880B903C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b903c
	if (!ctx.cr6.eq) goto loc_880B903C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b903c
	if (!ctx.cr6.eq) goto loc_880B903C;
	// lwz r28,252(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b9040
	if (!ctx.cr6.eq) goto loc_880B9040;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b905c
	goto loc_880B905C;
loc_880B903C:
	// lwz r28,252(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B9040:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b907c
	if (!ctx.cr6.eq) goto loc_880B907C;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b907c
	if (!ctx.cr6.eq) goto loc_880B907C;
	// cmpw cr6,r19,r28
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880b907c
	if (!ctx.cr6.eq) goto loc_880B907C;
loc_880B905C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9074;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b90ec
	goto loc_880B90EC;
loc_880B907C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9094;
	sub_88085E60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B90B0;
	sub_88085E60(ctx, base);
	// add r28,r25,r3
	ctx.r28.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B90CC;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B90E8;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B90EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9104;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r7,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B9124:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b9314
	goto loc_880B9314;
loc_880B9164:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b92a4
	if (ctx.cr6.eq) goto loc_880B92A4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b91bc
	goto loc_880B91BC;
loc_880B919C:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b91ec
	if (!ctx.cr6.eq) goto loc_880B91EC;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b91ec
	if (!ctx.cr6.eq) goto loc_880B91EC;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b91ec
	if (!ctx.cr6.eq) goto loc_880B91EC;
loc_880B91BC:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B91E4;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b926c
	goto loc_880B926C;
loc_880B91EC:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9214;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9230;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B924C;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9268;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B926C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9284;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r7,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B92A4:
	// lwz r11,792(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r10,796(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r9,r11,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r8,r10,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b9314
	goto loc_880B9314;
loc_880B930C:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B9314:
	// lwz r10,19232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r8,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B932C:
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b94c4
	if (ctx.cr6.eq) goto loc_880B94C4;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7536(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7532(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B9364;
	sub_88243CB0(ctx, base);
	// lwz r11,148(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// lwz r9,312(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// beq cr6,0x880b9430
	if (ctx.cr6.eq) goto loc_880B9430;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// lwz r5,304(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r3,296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r8,r1,784
	ctx.r8.s64 = ctx.r1.s64 + 784;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r29,r1,696
	ctx.r29.s64 = ctx.r1.s64 + 696;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r28,r1,608
	ctx.r28.s64 = ctx.r1.s64 + 608;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r27,r1,928
	ctx.r27.s64 = ctx.r1.s64 + 928;
	// stw r29,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r28,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r30,r1,720
	ctx.r30.s64 = ctx.r1.s64 + 720;
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,436(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// bl 0x880b4e40
	ctx.lr = 0x880B942C;
	sub_880B4E40(ctx, base);
	// b 0x880b95fc
	goto loc_880B95FC;
loc_880B9430:
	// lwz r30,304(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r28,296(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r29,r1,720
	ctx.r29.s64 = ctx.r1.s64 + 720;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r27,r1,696
	ctx.r27.s64 = ctx.r1.s64 + 696;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r26,r1,608
	ctx.r26.s64 = ctx.r1.s64 + 608;
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r8,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r29,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r26,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r25,r1,352
	ctx.r25.s64 = ctx.r1.s64 + 352;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3bf0
	ctx.lr = 0x880B94C0;
	sub_880B3BF0(ctx, base);
	// b 0x880b95fc
	goto loc_880B95FC;
loc_880B94C4:
	// lwz r11,148(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lwz r9,312(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// beq cr6,0x880b9580
	if (ctx.cr6.eq) goto loc_880B9580;
	// lwz r3,304(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwz r29,296(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r28,r1,928
	ctx.r28.s64 = ctx.r1.s64 + 928;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r8,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// stw r6,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r4,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r27,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r26,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r15,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,436(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x880b43d8
	ctx.lr = 0x880B957C;
	sub_880B43D8(ctx, base);
	// b 0x880b95fc
	goto loc_880B95FC;
loc_880B9580:
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r30,304(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r28,296(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3028
	ctx.lr = 0x880B95FC;
	sub_880B3028(ctx, base);
loc_880B95FC:
	// lwz r26,320(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
loc_880B9600:
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b9678
	if (ctx.cr6.eq) goto loc_880B9678;
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,448(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b964c
	if (!ctx.cr6.lt) goto loc_880B964C;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,560(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r8,7532(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r6,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r6.u32);
	// sthx r11,r8,r7
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r5,7536(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// sthx r11,r5,r7
	REX_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u16);
	// b 0x880b9678
	goto loc_880B9678;
loc_880B964C:
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,7532(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// lwz r8,696(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 696);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,560(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r4,720(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 720);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sthx r8,r9,r7
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u16);
	// stw r3,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// lwz r10,7536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// sthx r4,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u16);
loc_880B9678:
	// lwz r9,264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,768(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 768);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b984c
	if (ctx.cr6.eq) goto loc_880B984C;
	// lwz r11,21092(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21092);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b96e0
	if (ctx.cr6.eq) goto loc_880B96E0;
	// lwz r11,424(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b96bc
	if (!ctx.cr6.lt) goto loc_880B96BC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_880B96BC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,424
	ctx.r8.s64 = ctx.r1.s64 + 424;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880b96dc
	if (!ctx.cr6.lt) goto loc_880B96DC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// b 0x880b96e0
	goto loc_880B96E0;
loc_880B96DC:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_880B96E0:
	// lwz r11,456(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r19,380(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x880b9734
	if (!ctx.cr6.eq) goto loc_880B9734;
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b9818
	if (!ctx.cr6.lt) goto loc_880B9818;
	// lwz r9,6792(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r5,680(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// lwz r3,672(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r8,r9,r19
	REX_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r8.u8);
	// stw r4,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// stw r11,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r5,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B9734:
	// lwz r8,328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b97c4
	if (!ctx.cr6.lt) goto loc_880B97C4;
	// lwz r7,388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// bge cr6,0x880b9780
	if (!ctx.cr6.lt) goto loc_880B9780;
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r5,680(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// lwz r3,672(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r4,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// stbx r9,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// stw r5,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B9780:
	// lwz r8,6792(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stbx r22,r8,r19
	REX_STORE_U8(ctx.r8.u32 + ctx.r19.u32, ctx.r22.u8);
	// stw r21,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r3,28044(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// lwz r11,464(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// stw r21,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B97C4:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b9818
	if (!ctx.cr6.lt) goto loc_880B9818;
	// lwz r8,6792(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r7,388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stbx r22,r8,r19
	REX_STORE_U8(ctx.r8.u32 + ctx.r19.u32, ctx.r22.u8);
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stw r21,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r3,28044(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// lwz r11,464(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// stw r21,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B9818:
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r8,r26,r9
	ctx.r8.u64 = ctx.r26.u64 + ctx.r9.u64;
	// stbx r21,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r21.u8);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// stw r21,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r7,28044(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// stw r21,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B984C:
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r19,380(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b9894
	if (!ctx.cr6.lt) goto loc_880B9894;
	// lwz r9,6792(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r5,680(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// lwz r3,672(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r8,r9,r19
	REX_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r8.u8);
	// stw r4,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// stw r11,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r5,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// b 0x880b98c4
	goto loc_880B98C4;
loc_880B9894:
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r8,r26,r9
	ctx.r8.u64 = ctx.r26.u64 + ctx.r9.u64;
	// stbx r21,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r21.u8);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// stw r21,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r7,28044(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880b98c4
	if (ctx.cr6.eq) goto loc_880B98C4;
	// stw r21,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
loc_880B98C4:
	// li r22,1
	ctx.r22.s64 = 1;
loc_880B98C8:
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lbzx r9,r11,r19
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880b995c
	if (ctx.cr6.eq) goto loc_880B995C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b9914
	if (!ctx.cr6.eq) goto loc_880B9914;
	// lhz r10,396(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 396);
	// li r9,5
	ctx.r9.s64 = 5;
	// lhz r8,398(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 398);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stbx r9,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// lhz r11,376(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 376);
	// lhz r9,378(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 378);
	// b 0x880b993c
	goto loc_880B993C;
loc_880B9914:
	// lhz r10,392(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 392);
	// li r9,6
	ctx.r9.s64 = 6;
	// lhz r8,394(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 394);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stbx r9,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// lhz r11,400(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 400);
	// lhz r9,402(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 402);
loc_880B993C:
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// lwz r9,6792(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// stbx r21,r9,r19
	REX_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r21.u8);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
loc_880B995C:
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x880b9aa0
	if (!ctx.cr6.eq) goto loc_880B9AA0;
	// lwz r11,576(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhz r8,396(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 396);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,376(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 376);
	// lwz r6,536(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r5,2548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r7,r5,r10
	REX_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
	// lhz r8,378(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 378);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,398(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 398);
	// sth r7,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// lwz r10,2544(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r9,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r7,2548(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r8,r7,r11
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u16);
	// lwz r10,2544(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// lwz r10,2548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r8.u16);
loc_880B99DC:
	// li r20,16384
	ctx.r20.s64 = 16384;
loc_880B99E0:
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba2b8
	if (ctx.cr6.eq) goto loc_880BA2B8;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7552(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7548(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B9A1C;
	sub_88243CB0(ctx, base);
	// lwz r10,28040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// lwz r24,288(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r23,276(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba148
	if (ctx.cr6.eq) goto loc_880BA148;
	// lwz r11,472(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba148
	if (ctx.cr6.eq) goto loc_880BA148;
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba148
	if (!ctx.cr6.eq) goto loc_880BA148;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba148
	if (!ctx.cr6.eq) goto loc_880BA148;
	// stw r24,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// stw r23,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// bne cr6,0x880b9c20
	if (!ctx.cr6.eq) goto loc_880B9C20;
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
loc_880B9A70:
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,7548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// lwz r7,544(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// sthx r11,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
	// lwz r5,7552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// lwz r6,240(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r6,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r3.u32);
	// b 0x880ba2c4
	goto loc_880BA2C4;
loc_880B9AA0:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x880b9b1c
	if (!ctx.cr6.eq) goto loc_880B9B1C;
	// lwz r11,576(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhz r7,392(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 392);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r6,400(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 400);
	// lhz r8,394(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 394);
	// lwz r5,536(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// sthx r7,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,2548(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r6,r4,r10
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r6.u16);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,402(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 402);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r5,2544(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r7,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u16);
	// lwz r4,2548(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r6,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r6.u16);
	// lwz r10,2544(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// lwz r10,2548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// b 0x880b99dc
	goto loc_880B99DC;
loc_880B9B1C:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x880b9b90
	if (!ctx.cr6.eq) goto loc_880B9B90;
	// stbx r21,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r21.u8);
	// li r20,16384
	ctx.r20.s64 = 16384;
	// lwz r10,576(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r8,536(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r20,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u16);
	// lwz r7,2548(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r20,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r20.u16);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r20,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r20.u16);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r20,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r20.u16);
	// lwz r4,2544(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r20,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r20.u16);
	// lwz r3,2548(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r20,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r20.u16);
	// lwz r10,2544(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r20,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r20.u16);
	// lwz r10,2548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r20,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r20.u16);
	// b 0x880b99e0
	goto loc_880B99E0;
loc_880B9B90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880b99dc
	if (!ctx.cr6.eq) goto loc_880B99DC;
	// lwz r11,576(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// li r20,16384
	ctx.r20.s64 = 16384;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,536(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r4,2548(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r5,r4,r10
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u16);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lwz r9,2548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r5,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,2544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r10,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r7,240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r6,2548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r7,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u16);
	// lwz r10,2544(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// sth r4,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lwz r10,2548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,240(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sth r9,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// b 0x880b99e0
	goto loc_880B99E0;
loc_880B9C20:
	// lwz r11,784(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9f6c
	if (ctx.cr6.eq) goto loc_880B9F6C;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,800(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,796(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// lwz r8,792(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r28,r9,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b9dfc
	if (!ctx.cr6.lt) goto loc_880B9DFC;
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9db8
	if (ctx.cr6.eq) goto loc_880B9DB8;
	// lwz r30,272(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x880b9cf0
	goto loc_880B9CF0;
loc_880B9CCC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880b9d10
	if (!ctx.cr6.eq) goto loc_880B9D10;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b9d10
	if (!ctx.cr6.eq) goto loc_880B9D10;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b9d10
	if (!ctx.cr6.eq) goto loc_880B9D10;
loc_880B9CF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D08;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b9d80
	goto loc_880B9D80;
loc_880B9D10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D28;
	sub_88085E60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D44;
	sub_88085E60(ctx, base);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D60;
	sub_88085E60(ctx, base);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D7C;
	sub_88085E60(ctx, base);
	// add r30,r26,r3
	ctx.r30.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880B9D80:
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
	// bl 0x88085e60
	ctx.lr = 0x880B9D98;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880ba280
	goto loc_880BA280;
loc_880B9DB8:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba130
	goto loc_880BA130;
loc_880B9DFC:
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b9f28
	if (ctx.cr6.eq) goto loc_880B9F28;
	// lwz r28,272(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880b9e60
	goto loc_880B9E60;
loc_880B9E3C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r28
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880b9e80
	if (!ctx.cr6.eq) goto loc_880B9E80;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b9e80
	if (!ctx.cr6.eq) goto loc_880B9E80;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b9e80
	if (!ctx.cr6.eq) goto loc_880B9E80;
loc_880B9E60:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9E78;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b9ef0
	goto loc_880B9EF0;
loc_880B9E80:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9E98;
	sub_88085E60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9EB4;
	sub_88085E60(ctx, base);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9ED0;
	sub_88085E60(ctx, base);
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9EEC;
	sub_88085E60(ctx, base);
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880B9EF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9F08;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880ba280
	goto loc_880BA280;
loc_880B9F28:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba130
	goto loc_880BA130;
loc_880B9F6C:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba0b8
	if (ctx.cr6.eq) goto loc_880BA0B8;
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880b9fd0
	goto loc_880B9FD0;
loc_880B9FAC:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba000
	if (!ctx.cr6.eq) goto loc_880BA000;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880ba000
	if (!ctx.cr6.eq) goto loc_880BA000;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba000
	if (!ctx.cr6.eq) goto loc_880BA000;
loc_880B9FD0:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9FF8;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba080
	goto loc_880BA080;
loc_880BA000:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA028;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA044;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA060;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA07C;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880BA080:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA098;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880ba280
	goto loc_880BA280;
loc_880BA0B8:
	// lwz r11,792(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r10,796(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
	// subf r8,r10,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba130
	goto loc_880BA130;
loc_880BA124:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880BA130:
	// lwz r10,19232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r8,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// b 0x880ba284
	goto loc_880BA284;
loc_880BA148:
	// lwz r11,148(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r9,r1,248
	ctx.r9.s64 = ctx.r1.s64 + 248;
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba1fc
	if (ctx.cr6.eq) goto loc_880BA1FC;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// lwz r30,304(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r27,r1,784
	ctx.r27.s64 = ctx.r1.s64 + 784;
	// lwz r28,296(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r7,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r22,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r22,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r15,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,436(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x880b43d8
	ctx.lr = 0x880BA1F8;
	sub_880B43D8(ctx, base);
	// b 0x880ba280
	goto loc_880BA280;
loc_880BA1FC:
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r28,r1,352
	ctx.r28.s64 = ctx.r1.s64 + 352;
	// lwz r29,304(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// lwz r27,296(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3028
	ctx.lr = 0x880BA280;
	sub_880B3028(ctx, base);
loc_880BA280:
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
loc_880BA284:
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b9a70
	if (!ctx.cr6.lt) goto loc_880B9A70;
	// lwz r10,7548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,544(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthx r20,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u16);
	// stw r7,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r7.u32);
	// lwz r6,7552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// sthx r20,r9,r6
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r20.u16);
	// b 0x880ba2c4
	goto loc_880BA2C4;
loc_880BA2B8:
	// lwz r26,260(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r24,288(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r23,276(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_880BA2C4:
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba374
	if (ctx.cr6.eq) goto loc_880BA374;
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7544(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7540(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880BA300;
	sub_88243CB0(ctx, base);
	// lwz r10,28040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba9f0
	if (ctx.cr6.eq) goto loc_880BA9F0;
	// lwz r11,472(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba9f0
	if (ctx.cr6.eq) goto loc_880BA9F0;
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba9f0
	if (!ctx.cr6.eq) goto loc_880BA9F0;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba9f0
	if (!ctx.cr6.eq) goto loc_880BA9F0;
	// stw r24,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// stw r23,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// bne cr6,0x880ba4e0
	if (!ctx.cr6.eq) goto loc_880BA4E0;
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
loc_880BA348:
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,7540(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// lwz r7,512(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// sthx r11,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
	// lwz r6,240(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r5,7544(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// sthx r6,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
loc_880BA374:
	// lwz r11,640(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r9,500(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r6,28044(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// stw r8,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r8.u32);
	// stw r7,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// beq cr6,0x880ba3ec
	if (ctx.cr6.eq) goto loc_880BA3EC;
	// lwz r11,648(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r10,636(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r9,460(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r4,628(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// lwz r11,652(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// stw r8,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r8.u32);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r5,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r5.u32);
	// stw r3,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// stw r10,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// stw r9,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r9.u32);
	// stw r8,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r8.u32);
loc_880BA3EC:
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r16,r16,276
	ctx.r16.s64 = ctx.r16.s64 + 276;
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// stw r15,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r15.u32);
	// stw r16,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r16.u32);
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r7.u32, ctx.xer);
	// stw r11,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// blt cr6,0x880b5900
	if (ctx.cr6.lt) goto loc_880B5900;
loc_880BA410:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// lwz r10,560(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r9,544(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,512(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r4,504(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r8,1160(r1)
	REX_STORE_U64(ctx.r1.u32 + 1160, ctx.r8.u64);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r5,1136(r1)
	REX_STORE_U64(ctx.r1.u32 + 1136, ctx.r5.u64);
	// std r3,1144(r1)
	REX_STORE_U64(ctx.r1.u32 + 1144, ctx.r3.u64);
	// std r11,1128(r1)
	REX_STORE_U64(ctx.r1.u32 + 1128, ctx.r11.u64);
	// std r10,1152(r1)
	REX_STORE_U64(ctx.r1.u32 + 1152, ctx.r10.u64);
	// lwz r9,7668(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 7668);
	// stw r14,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r14.u32);
	// cmplw cr6,r14,r9
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r9.u32, ctx.xer);
	// lfd f0,1160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 1160);
	// lfd f13,1136(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 1136);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,1144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 1144);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f9,1128(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 1128);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfd f7,1152(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 1152);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fadd f31,f12,f31
	ctx.f31.f64 = ctx.f12.f64 + ctx.f31.f64;
	// fadd f30,f10,f30
	ctx.f30.f64 = ctx.f10.f64 + ctx.f30.f64;
	// fadd f29,f8,f29
	ctx.f29.f64 = ctx.f8.f64 + ctx.f29.f64;
	// fadd f28,f6,f28
	ctx.f28.f64 = ctx.f6.f64 + ctx.f28.f64;
	// fadd f27,f5,f27
	ctx.f27.f64 = ctx.f5.f64 + ctx.f27.f64;
	// blt cr6,0x880b57cc
	if (ctx.cr6.lt) goto loc_880B57CC;
loc_880BA49C:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,7676(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 7676);
	// lwz r9,7684(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 7684);
	// lwz r8,7692(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 7692);
	// lwz r7,7700(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 7700);
	// lwz r6,7708(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 7708);
	// lwz r5,7716(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 7716);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stfd f31,0(r9)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.f31.u64);
	// stfd f30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.f30.u64);
	// stfd f29,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.f29.u64);
	// stfd f28,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f28.u64);
	// stfd f27,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f27.u64);
	// addi r1,r1,7632
	ctx.r1.s64 = ctx.r1.s64 + 7632;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x880BA4DC;
	__restfpr_27(ctx, base);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880BA4E0:
	// lwz r11,784(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba81c
	if (ctx.cr6.eq) goto loc_880BA81C;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,800(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,796(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// lwz r8,792(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r28,r9,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880ba6b4
	if (!ctx.cr6.lt) goto loc_880BA6B4;
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba674
	if (ctx.cr6.eq) goto loc_880BA674;
	// lwz r30,272(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r26,256(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x880ba5ac
	goto loc_880BA5AC;
loc_880BA58C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880ba5cc
	if (!ctx.cr6.eq) goto loc_880BA5CC;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x880ba5cc
	if (!ctx.cr6.eq) goto loc_880BA5CC;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba5cc
	if (!ctx.cr6.eq) goto loc_880BA5CC;
loc_880BA5AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA5C4;
	sub_88085E60(ctx, base);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba63c
	goto loc_880BA63C;
loc_880BA5CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA5E4;
	sub_88085E60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA600;
	sub_88085E60(ctx, base);
	// add r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA61C;
	sub_88085E60(ctx, base);
	// add r26,r24,r3
	ctx.r26.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA638;
	sub_88085E60(ctx, base);
	// add r30,r26,r3
	ctx.r30.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880BA63C:
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
	// bl 0x88085e60
	ctx.lr = 0x880BA654;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA674:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba9d8
	goto loc_880BA9D8;
loc_880BA6B4:
	// lwz r9,28020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ba7dc
	if (ctx.cr6.eq) goto loc_880BA7DC;
	// lwz r28,272(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r26,256(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880ba714
	goto loc_880BA714;
loc_880BA6F4:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r28
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880ba734
	if (!ctx.cr6.eq) goto loc_880BA734;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x880ba734
	if (!ctx.cr6.eq) goto loc_880BA734;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba734
	if (!ctx.cr6.eq) goto loc_880BA734;
loc_880BA714:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA72C;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba7a4
	goto loc_880BA7A4;
loc_880BA734:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA74C;
	sub_88085E60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA768;
	sub_88085E60(ctx, base);
	// add r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA784;
	sub_88085E60(ctx, base);
	// add r26,r24,r3
	ctx.r26.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA7A0;
	sub_88085E60(ctx, base);
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880BA7A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA7BC;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA7DC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba9d8
	goto loc_880BA9D8;
loc_880BA81C:
	// lwz r11,28020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba968
	if (ctx.cr6.eq) goto loc_880BA968;
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880ba880
	goto loc_880BA880;
loc_880BA85C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba8b0
	if (!ctx.cr6.eq) goto loc_880BA8B0;
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880ba8b0
	if (!ctx.cr6.eq) goto loc_880BA8B0;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba8b0
	if (!ctx.cr6.eq) goto loc_880BA8B0;
loc_880BA880:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA8A8;
	sub_88085E60(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba930
	goto loc_880BA930;
loc_880BA8B0:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA8D8;
	sub_88085E60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA8F4;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA910;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA92C;
	sub_88085E60(ctx, base);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880BA930:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA948;
	sub_88085E60(ctx, base);
	// lwz r11,112(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA968:
	// lwz r11,792(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r10,796(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
	// subf r8,r10,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r10.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba9d8
	goto loc_880BA9D8;
loc_880BA9D0:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880BA9D8:
	// lwz r10,19232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r8,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA9F0:
	// lwz r11,148(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r9,r1,248
	ctx.r9.s64 = ctx.r1.s64 + 248;
	// lwz r8,312(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r28,296(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880baaa4
	if (ctx.cr6.eq) goto loc_880BAAA4;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// lwz r30,304(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r27,r1,784
	ctx.r27.s64 = ctx.r1.s64 + 784;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r7,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r21,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// stw r22,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r15,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,436(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x880b43d8
	ctx.lr = 0x880BAAA0;
	sub_880B43D8(ctx, base);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BAAA4:
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// lwz r29,304(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r21,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3028
	ctx.lr = 0x880BAB24;
	sub_880B3028(ctx, base);
loc_880BAB24:
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880ba348
	if (!ctx.cr6.lt) goto loc_880BA348;
	// lwz r10,7540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,512(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthx r20,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u16);
	// stw r7,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r7.u32);
	// lwz r6,7544(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// sthx r20,r9,r6
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r20.u16);
	// b 0x880ba374
	goto loc_880BA374;
}

DEFINE_REX_FUNC(sub_8815AE78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815aef8
	if (ctx.cr6.eq) goto loc_8815AEF8;
	// lwz r11,20684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815aee4
	if (ctx.cr6.eq) goto loc_8815AEE4;
	// lwz r11,21700(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21700);
	// addi r7,r3,21152
	ctx.r7.s64 = ctx.r3.s64 + 21152;
	// addi r6,r3,21164
	ctx.r6.s64 = ctx.r3.s64 + 21164;
	// addi r5,r3,21176
	ctx.r5.s64 = ctx.r3.s64 + 21176;
	// stw r7,2416(r3)
	REX_STORE_U32(ctx.r3.u32 + 2416, ctx.r7.u32);
	// addi r4,r3,21188
	ctx.r4.s64 = ctx.r3.s64 + 21188;
	// stw r6,2420(r3)
	REX_STORE_U32(ctx.r3.u32 + 2420, ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,2424(r3)
	REX_STORE_U32(ctx.r3.u32 + 2424, ctx.r5.u32);
	// stw r4,2428(r3)
	REX_STORE_U32(ctx.r3.u32 + 2428, ctx.r4.u32);
	// beq cr6,0x8815aed0
	if (ctx.cr6.eq) goto loc_8815AED0;
	// addi r11,r3,21104
	ctx.r11.s64 = ctx.r3.s64 + 21104;
	// addi r10,r3,21116
	ctx.r10.s64 = ctx.r3.s64 + 21116;
	// addi r9,r3,21128
	ctx.r9.s64 = ctx.r3.s64 + 21128;
	// addi r8,r3,21140
	ctx.r8.s64 = ctx.r3.s64 + 21140;
	// b 0x8815af48
	goto loc_8815AF48;
loc_8815AED0:
	// addi r11,r3,21200
	ctx.r11.s64 = ctx.r3.s64 + 21200;
	// addi r10,r3,21212
	ctx.r10.s64 = ctx.r3.s64 + 21212;
	// addi r9,r3,21224
	ctx.r9.s64 = ctx.r3.s64 + 21224;
	// addi r8,r3,21236
	ctx.r8.s64 = ctx.r3.s64 + 21236;
	// b 0x8815af48
	goto loc_8815AF48;
loc_8815AEE4:
	// addi r11,r3,21200
	ctx.r11.s64 = ctx.r3.s64 + 21200;
	// addi r10,r3,21212
	ctx.r10.s64 = ctx.r3.s64 + 21212;
	// addi r9,r3,21224
	ctx.r9.s64 = ctx.r3.s64 + 21224;
	// addi r8,r3,21236
	ctx.r8.s64 = ctx.r3.s64 + 21236;
	// b 0x8815af28
	goto loc_8815AF28;
loc_8815AEF8:
	// lwz r11,22304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815af18
	if (ctx.cr6.eq) goto loc_8815AF18;
	// addi r11,r3,22360
	ctx.r11.s64 = ctx.r3.s64 + 22360;
	// addi r10,r3,22372
	ctx.r10.s64 = ctx.r3.s64 + 22372;
	// addi r9,r3,22384
	ctx.r9.s64 = ctx.r3.s64 + 22384;
	// addi r8,r3,22396
	ctx.r8.s64 = ctx.r3.s64 + 22396;
	// b 0x8815af48
	goto loc_8815AF48;
loc_8815AF18:
	// addi r11,r3,2332
	ctx.r11.s64 = ctx.r3.s64 + 2332;
	// addi r10,r3,2344
	ctx.r10.s64 = ctx.r3.s64 + 2344;
	// addi r9,r3,2356
	ctx.r9.s64 = ctx.r3.s64 + 2356;
	// addi r8,r3,2368
	ctx.r8.s64 = ctx.r3.s64 + 2368;
loc_8815AF28:
	// addi r4,r3,21188
	ctx.r4.s64 = ctx.r3.s64 + 21188;
	// addi r5,r3,21176
	ctx.r5.s64 = ctx.r3.s64 + 21176;
	// addi r6,r3,21164
	ctx.r6.s64 = ctx.r3.s64 + 21164;
	// stw r4,2428(r3)
	REX_STORE_U32(ctx.r3.u32 + 2428, ctx.r4.u32);
	// addi r7,r3,21152
	ctx.r7.s64 = ctx.r3.s64 + 21152;
	// stw r5,2424(r3)
	REX_STORE_U32(ctx.r3.u32 + 2424, ctx.r5.u32);
	// stw r6,2420(r3)
	REX_STORE_U32(ctx.r3.u32 + 2420, ctx.r6.u32);
	// stw r7,2416(r3)
	REX_STORE_U32(ctx.r3.u32 + 2416, ctx.r7.u32);
loc_8815AF48:
	// stw r11,2400(r3)
	REX_STORE_U32(ctx.r3.u32 + 2400, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,2404(r3)
	REX_STORE_U32(ctx.r3.u32 + 2404, ctx.r10.u32);
	// stw r9,2408(r3)
	REX_STORE_U32(ctx.r3.u32 + 2408, ctx.r9.u32);
	// stw r8,2412(r3)
	REX_STORE_U32(ctx.r3.u32 + 2412, ctx.r8.u32);
	// stw r11,2380(r3)
	REX_STORE_U32(ctx.r3.u32 + 2380, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8815D398) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8815D3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d4bc
	if (ctx.cr6.eq) goto loc_8815D4BC;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8815d480
	if (ctx.cr6.eq) goto loc_8815D480;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d3d8
	if (!ctx.cr6.eq) goto loc_8815D3D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8815d3f0
	goto loc_8815D3F0;
loc_8815D3D8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r30,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8815D3F0:
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8815d414
	if (ctx.cr6.eq) goto loc_8815D414;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stwx r30,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8815D414:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815d480
	if (ctx.cr6.eq) goto loc_8815D480;
loc_8815D41C:
	// lwz r10,36(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8815e530
	ctx.lr = 0x8815D42C;
	sub_8815E530(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d440
	if (!ctx.cr6.eq) goto loc_8815D440;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8815d458
	goto loc_8815D458;
loc_8815D440:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r30,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8815D458:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8815d478
	if (ctx.cr6.eq) goto loc_8815D478;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stwx r30,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8815D478:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815d41c
	if (!ctx.cr6.eq) goto loc_8815D41C;
loc_8815D480:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x881c4560
	ctx.lr = 0x8815D488;
	sub_881C4560(ctx, base);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x881c4560
	ctx.lr = 0x8815D490;
	sub_881C4560(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d4a4
	if (ctx.cr6.eq) goto loc_8815D4A4;
	// bl 0x8815ba70
	ctx.lr = 0x8815D4A0;
	sub_8815BA70(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_8815D4A4:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x88061460
	ctx.lr = 0x8815D4B4;
	sub_88061460(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88052278
	ctx.lr = 0x8815D4BC;
	sub_88052278(ctx, base);
loc_8815D4BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E6F0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r8,3(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r6,2(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r7,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// stb r8,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r6,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8815F318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8815F320;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x8815f39c
	if (!ctx.cr6.lt) goto loc_8815F39C;
loc_8815F344:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f39c
	if (ctx.cr6.eq) goto loc_8815F39C;
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
	// bge 0x8815f38c
	if (!ctx.cr0.lt) goto loc_8815F38C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F38C;
	sub_88156678(ctx, base);
loc_8815F38C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f344
	if (ctx.cr6.gt) goto loc_8815F344;
loc_8815F39C:
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
	// bge 0x8815f3d4
	if (!ctx.cr0.lt) goto loc_8815F3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F3D4;
	sub_88156678(ctx, base);
loc_8815F3D4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8815f8bc
	if (!ctx.cr6.eq) goto loc_8815F8BC;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8815f450
	if (!ctx.cr6.lt) goto loc_8815F450;
loc_8815F3F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f450
	if (ctx.cr6.eq) goto loc_8815F450;
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
	// bge 0x8815f440
	if (!ctx.cr0.lt) goto loc_8815F440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F440;
	sub_88156678(ctx, base);
loc_8815F440:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f3f8
	if (ctx.cr6.gt) goto loc_8815F3F8;
loc_8815F450:
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
	// bge 0x8815f488
	if (!ctx.cr0.lt) goto loc_8815F488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F488;
	sub_88156678(ctx, base);
loc_8815F488:
	// cmplwi cr6,r30,182
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 182, ctx.xer);
	// bne cr6,0x8815f8bc
	if (!ctx.cr6.eq) goto loc_8815F8BC;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8815f504
	if (!ctx.cr6.lt) goto loc_8815F504;
loc_8815F4AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f504
	if (ctx.cr6.eq) goto loc_8815F504;
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
	// bge 0x8815f4f4
	if (!ctx.cr0.lt) goto loc_8815F4F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F4F4;
	sub_88156678(ctx, base);
loc_8815F4F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f4ac
	if (ctx.cr6.gt) goto loc_8815F4AC;
loc_8815F504:
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
	// bge 0x8815f53c
	if (!ctx.cr0.lt) goto loc_8815F53C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F53C;
	sub_88156678(ctx, base);
loc_8815F53C:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,288(r26)
	REX_STORE_U32(ctx.r26.u32 + 288, ctx.r30.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_8815F548:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f5bc
	if (!ctx.cr6.lt) goto loc_8815F5BC;
loc_8815F564:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f5bc
	if (ctx.cr6.eq) goto loc_8815F5BC;
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
	// bge 0x8815f5ac
	if (!ctx.cr0.lt) goto loc_8815F5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F5AC;
	sub_88156678(ctx, base);
loc_8815F5AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f564
	if (ctx.cr6.gt) goto loc_8815F564;
loc_8815F5BC:
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
	// bge 0x8815f5f4
	if (!ctx.cr0.lt) goto loc_8815F5F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F5F4;
	sub_88156678(ctx, base);
loc_8815F5F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8815f604
	if (ctx.cr6.eq) goto loc_8815F604;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8815f548
	goto loc_8815F548;
loc_8815F604:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r11,3656(r26)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r26.u32 + 3656);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f668
	if (!ctx.cr6.lt) goto loc_8815F668;
loc_8815F628:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f668
	if (ctx.cr6.eq) goto loc_8815F668;
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
	// bge 0x8815f658
	if (!ctx.cr0.lt) goto loc_8815F658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F658;
	sub_88156678(ctx, base);
loc_8815F658:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f628
	if (ctx.cr6.gt) goto loc_8815F628;
loc_8815F668:
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
	// bge 0x8815f68c
	if (!ctx.cr0.lt) goto loc_8815F68C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F68C;
	sub_88156678(ctx, base);
loc_8815F68C:
	// lwz r30,84(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,3688(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 3688);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8815f6b0
	if (!ctx.cr6.gt) goto loc_8815F6B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8815f75c
	goto loc_8815F75C;
loc_8815F6B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8815f6c0
	if (!ctx.cr6.eq) goto loc_8815F6C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8815f75c
	goto loc_8815F75C;
loc_8815F6C0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8815f720
	if (!ctx.cr6.gt) goto loc_8815F720;
loc_8815F6C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f720
	if (ctx.cr6.eq) goto loc_8815F720;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8815f710
	if (!ctx.cr0.lt) goto loc_8815F710;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F710;
	sub_88156678(ctx, base);
loc_8815F710:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f6c8
	if (ctx.cr6.gt) goto loc_8815F6C8;
loc_8815F720:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8815f758
	if (!ctx.cr0.lt) goto loc_8815F758;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F758;
	sub_88156678(ctx, base);
loc_8815F758:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8815F75C:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f7b8
	if (!ctx.cr6.lt) goto loc_8815F7B8;
loc_8815F778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f7b8
	if (ctx.cr6.eq) goto loc_8815F7B8;
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
	// bge 0x8815f7a8
	if (!ctx.cr0.lt) goto loc_8815F7A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F7A8;
	sub_88156678(ctx, base);
loc_8815F7A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f778
	if (ctx.cr6.gt) goto loc_8815F778;
loc_8815F7B8:
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
	// bge 0x8815f7dc
	if (!ctx.cr0.lt) goto loc_8815F7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F7DC;
	sub_88156678(ctx, base);
loc_8815F7DC:
	// lwz r11,3628(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3628);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ld r10,3656(r26)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r26.u32 + 3656);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ld r8,3664(r26)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r26.u32 + 3664);
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mulld r11,r9,r27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r27.u64);
	// std r27,3656(r26)
	REX_STORE_U64(ctx.r26.u32 + 3656, ctx.r27.u64);
	// std r10,3672(r26)
	REX_STORE_U64(ctx.r26.u32 + 3672, ctx.r10.u64);
	// std r8,3680(r26)
	REX_STORE_U64(ctx.r26.u32 + 3680, ctx.r8.u64);
	// std r10,3664(r26)
	REX_STORE_U64(ctx.r26.u32 + 3664, ctx.r10.u64);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r7,3632(r26)
	REX_STORE_U64(ctx.r26.u32 + 3632, ctx.r7.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f87c
	if (!ctx.cr6.lt) goto loc_8815F87C;
loc_8815F824:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f87c
	if (ctx.cr6.eq) goto loc_8815F87C;
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
	// bge 0x8815f86c
	if (!ctx.cr0.lt) goto loc_8815F86C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F86C;
	sub_88156678(ctx, base);
loc_8815F86C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f824
	if (ctx.cr6.gt) goto loc_8815F824;
loc_8815F87C:
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
	// bge 0x8815f8b4
	if (!ctx.cr0.lt) goto loc_8815F8B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F8B4;
	sub_88156678(ctx, base);
loc_8815F8B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8815f8c8
	if (!ctx.cr6.eq) goto loc_8815F8C8;
loc_8815F8BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8815F8C8:
	// lwz r11,288(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8815f988
	if (!ctx.cr6.eq) goto loc_8815F988;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815f948
	if (!ctx.cr6.lt) goto loc_8815F948;
loc_8815F8F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f948
	if (ctx.cr6.eq) goto loc_8815F948;
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
	// bge 0x8815f938
	if (!ctx.cr0.lt) goto loc_8815F938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F938;
	sub_88156678(ctx, base);
loc_8815F938:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f8f0
	if (ctx.cr6.gt) goto loc_8815F8F0;
loc_8815F948:
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
	// bge 0x8815f980
	if (!ctx.cr0.lt) goto loc_8815F980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F980;
	sub_88156678(ctx, base);
loc_8815F980:
	// stw r30,3960(r26)
	REX_STORE_U32(ctx.r26.u32 + 3960, ctx.r30.u32);
	// b 0x8815f990
	goto loc_8815F990;
loc_8815F988:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3960(r26)
	REX_STORE_U32(ctx.r26.u32 + 3960, ctx.r11.u32);
loc_8815F990:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8815f9e8
	if (!ctx.cr6.lt) goto loc_8815F9E8;
loc_8815F9A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815f9e8
	if (ctx.cr6.eq) goto loc_8815F9E8;
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
	// bge 0x8815f9d8
	if (!ctx.cr0.lt) goto loc_8815F9D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815F9D8;
	sub_88156678(ctx, base);
loc_8815F9D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815f9a8
	if (ctx.cr6.gt) goto loc_8815F9A8;
loc_8815F9E8:
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
	// bge 0x8815fa0c
	if (!ctx.cr0.lt) goto loc_8815FA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FA0C;
	sub_88156678(ctx, base);
loc_8815FA0C:
	// lwz r11,288(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8815fad8
	if (!ctx.cr6.eq) goto loc_8815FAD8;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// bge cr6,0x8815fa8c
	if (!ctx.cr6.lt) goto loc_8815FA8C;
loc_8815FA34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815fa8c
	if (ctx.cr6.eq) goto loc_8815FA8C;
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
	// bge 0x8815fa7c
	if (!ctx.cr0.lt) goto loc_8815FA7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FA7C;
	sub_88156678(ctx, base);
loc_8815FA7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815fa34
	if (ctx.cr6.gt) goto loc_8815FA34;
loc_8815FA8C:
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
	// bge 0x8815fac4
	if (!ctx.cr0.lt) goto loc_8815FAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FAC4;
	sub_88156678(ctx, base);
loc_8815FAC4:
	// stw r30,248(r26)
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,3616(r26)
	REX_STORE_U32(ctx.r26.u32 + 3616, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8815FAD8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8815fc58
	if (!ctx.cr6.eq) goto loc_8815FC58;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
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
	// bge cr6,0x8815fb54
	if (!ctx.cr6.lt) goto loc_8815FB54;
loc_8815FAFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815fb54
	if (ctx.cr6.eq) goto loc_8815FB54;
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
	// bge 0x8815fb44
	if (!ctx.cr0.lt) goto loc_8815FB44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FB44;
	sub_88156678(ctx, base);
loc_8815FB44:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815fafc
	if (ctx.cr6.gt) goto loc_8815FAFC;
loc_8815FB54:
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
	// bge 0x8815fb8c
	if (!ctx.cr0.lt) goto loc_8815FB8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FB8C;
	sub_88156678(ctx, base);
loc_8815FB8C:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,248(r26)
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r29.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8815fc04
	if (!ctx.cr6.lt) goto loc_8815FC04;
loc_8815FBAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815fc04
	if (ctx.cr6.eq) goto loc_8815FC04;
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
	// bge 0x8815fbf4
	if (!ctx.cr0.lt) goto loc_8815FBF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FBF4;
	sub_88156678(ctx, base);
loc_8815FBF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815fbac
	if (ctx.cr6.gt) goto loc_8815FBAC;
loc_8815FC04:
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
	// bge 0x8815fc3c
	if (!ctx.cr0.lt) goto loc_8815FC3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815FC3C;
	sub_88156678(ctx, base);
loc_8815FC3C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,3616(r26)
	REX_STORE_U32(ctx.r26.u32 + 3616, ctx.r30.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// stw r9,3624(r26)
	REX_STORE_U32(ctx.r26.u32 + 3624, ctx.r9.u32);
	// stw r8,3620(r26)
	REX_STORE_U32(ctx.r26.u32 + 3620, ctx.r8.u32);
loc_8815FC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88179A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88179A90;
	__savegprlr_29(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x88179fcc
	if (!ctx.cr6.gt) goto loc_88179FCC;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x88179fcc
	if (!ctx.cr6.gt) goto loc_88179FCC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f13,-64(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfs f0,6728(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,7000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsubs f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// bgt cr6,0x88179af4
	if (ctx.cr6.gt) goto loc_88179AF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88179AF4:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stfd f0,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r5,-60(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfd f0,12088(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// lfs f9,6708(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x88179b74
	if (ctx.cr6.lt) goto loc_88179B74;
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_88179B38:
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
	// blt cr6,0x88179b38
	if (ctx.cr6.lt) goto loc_88179B38;
loc_88179B74:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88179bb0
	if (!ctx.cr6.lt) goto loc_88179BB0;
	// fadds f12,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_88179BA0:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88179ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88179BA0;
loc_88179BB0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f12,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x88179bd4
	if (ctx.cr6.gt) goto loc_88179BD4;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
loc_88179BD4:
	// fsubs f8,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// fsubs f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// li r5,-4
	ctx.r5.s64 = -4;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r31,-60(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// fdivs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// bge cr6,0x88179d38
	if (!ctx.cr6.lt) goto loc_88179D38;
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x88179cec
	if (ctx.cr6.lt) goto loc_88179CEC;
	// addi r6,r31,-3
	ctx.r6.s64 = ctx.r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_88179C14:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// std r8,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// lfd f6,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r30.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r29,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r29.u64);
	// lfd f3,-48(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f8,-64(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f8,-40(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f7,f3
	ctx.f7.f64 = double(ctx.f3.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fsubs f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f8,f6,f12,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f6,f4,f12,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f1.f64)));
	// fctiwz f5,f3
	ctx.f5.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f5,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f8,f6,f0
	ctx.f8.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f7,f4
	ctx.f7.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f7,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f7.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fctiwz f6,f3
	ctx.f6.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f6,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f5.u32);
	// blt cr6,0x88179c14
	if (ctx.cr6.lt) goto loc_88179C14;
loc_88179CEC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88179d38
	if (!ctx.cr6.lt) goto loc_88179D38;
	// subf r9,r11,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88179D00:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f8,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f4,f5,f12,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fadd f3,f4,f0
	ctx.f3.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fctiwz f8,f3
	ctx.f8.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f8,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88179d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88179D00;
loc_88179D38:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f13,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x88179d5c
	if (ctx.cr6.gt) goto loc_88179D5C;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_88179D5C:
	// fctiwz f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f8.u64);
	// fsubs f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lwz r31,-36(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88179eb8
	if (!ctx.cr6.lt) goto loc_88179EB8;
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x88179e6c
	if (ctx.cr6.lt) goto loc_88179E6C;
	// addi r6,r31,-3
	ctx.r6.s64 = ctx.r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_88179D94:
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r30.u64);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f6,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f8,-56(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f5,f10,f2
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f8,f4,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f10,f5,f13,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f6,f12,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f3,f7,f13,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f5,f10,f0
	ctx.f5.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fadd f12,f6,f0
	ctx.f12.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f7,f3,f0
	ctx.f7.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f8,f4
	ctx.f8.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// fctiwz f10,f5
	ctx.f10.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f10,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f3,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f3.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f7,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f7.u32);
	// blt cr6,0x88179d94
	if (ctx.cr6.lt) goto loc_88179D94;
loc_88179E6C:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88179eb8
	if (!ctx.cr6.lt) goto loc_88179EB8;
	// subf r9,r11,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88179E80:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fmadds f6,f7,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x88179e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88179E80;
loc_88179EB8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88179ef8
	if (!ctx.cr6.lt) goto loc_88179EF8;
	// fadds f13,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f11.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_88179EDC:
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
	// blt cr6,0x88179edc
	if (ctx.cr6.lt) goto loc_88179EDC;
loc_88179EF8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88179f34
	if (!ctx.cr6.gt) goto loc_88179F34;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_88179F18:
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
	// blt cr6,0x88179f18
	if (ctx.cr6.lt) goto loc_88179F18;
loc_88179F34:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a05c
	if (!ctx.cr6.gt) goto loc_8817A05C;
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
loc_88179F50:
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
	// std r6,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
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
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f6,-48(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
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
	// blt cr6,0x88179f50
	if (ctx.cr6.lt) goto loc_88179F50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88179FCC:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a05c
	if (!ctx.cr6.gt) goto loc_8817A05C;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,12088(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f9.u64);
	// fadd f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f6.u64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f5.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r9,-52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r7,-44(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
loc_8817A028:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
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
	// blt cr6,0x8817a028
	if (ctx.cr6.lt) goto loc_8817A028;
loc_8817A05C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88186770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88186778;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// lwz r10,140(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r21,272(r25)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r25.u32 + 272);
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,22344(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 22344);
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r24,r22,r26
	ctx.r24.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r26.s32);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rldicl r20,r9,1,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// bge 0x881867d4
	if (!ctx.cr0.lt) goto loc_881867D4;
	// bl 0x88156678
	ctx.lr = 0x881867D4;
	sub_88156678(ctx, base);
loc_881867D4:
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88186848
	if (!ctx.cr6.lt) goto loc_88186848;
loc_881867F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88186848
	if (ctx.cr6.eq) goto loc_88186848;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88186838
	if (!ctx.cr0.lt) goto loc_88186838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186838;
	sub_88156678(ctx, base);
loc_88186838:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881867f0
	if (ctx.cr6.gt) goto loc_881867F0;
loc_88186848:
	// subfic r11,r29,64
	ctx.xer.ca = ctx.r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r29.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88186880
	if (!ctx.cr0.lt) goto loc_88186880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88186880;
	sub_88156678(ctx, base);
loc_88186880:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x88186b6c
	if (ctx.cr6.eq) goto loc_88186B6C;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x88186a4c
	if (ctx.cr6.eq) goto loc_88186A4C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x88186a30
	if (ctx.cr6.eq) goto loc_88186A30;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x881868c0
	if (!ctx.cr0.lt) goto loc_881868C0;
	// bl 0x88156678
	ctx.lr = 0x881868C0;
	sub_88156678(ctx, base);
loc_881868C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881869ec
	if (ctx.cr6.eq) goto loc_881869EC;
	// clrlwi r31,r24,31
	ctx.r31.u64 = ctx.r24.u32 & 0x1;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// beq cr6,0x8818690c
	if (ctx.cr6.eq) goto loc_8818690C;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186904
	if (!ctx.cr0.lt) goto loc_88186904;
	// bl 0x88156678
	ctx.lr = 0x88186904;
	sub_88156678(ctx, base);
loc_88186904:
	// stb r29,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8818690C:
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88186cfc
	if (!ctx.cr6.lt) goto loc_88186CFC;
	// subf r11,r31,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_88186924:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x8818694c
	if (!ctx.cr0.lt) goto loc_8818694C;
	// bl 0x88156678
	ctx.lr = 0x8818694C;
	sub_88156678(ctx, base);
loc_8818694C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881869d4
	if (ctx.cr6.eq) goto loc_881869D4;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x8818697c
	if (!ctx.cr0.lt) goto loc_8818697C;
	// bl 0x88156678
	ctx.lr = 0x8818697C;
	sub_88156678(ctx, base);
loc_8818697C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186990
	if (ctx.cr6.eq) goto loc_88186990;
	// stb r28,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stbu r28,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x881869dc
	goto loc_881869DC;
loc_88186990:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x881869b8
	if (!ctx.cr0.lt) goto loc_881869B8;
	// bl 0x88156678
	ctx.lr = 0x881869B8;
	sub_88156678(ctx, base);
loc_881869B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881869cc
	if (ctx.cr6.eq) goto loc_881869CC;
	// stb r19,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
	// stbu r28,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x881869dc
	goto loc_881869DC;
loc_881869CC:
	// stb r28,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x881869d8
	goto loc_881869D8;
loc_881869D4:
	// stb r19,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
loc_881869D8:
	// stbu r19,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r30.u32 = ea;
loc_881869DC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88186924
	if (!ctx.cr0.eq) goto loc_88186924;
	// b 0x88186cfc
	goto loc_88186CFC;
loc_881869EC:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186a14
	if (!ctx.cr0.lt) goto loc_88186A14;
	// bl 0x88156678
	ctx.lr = 0x88186A14;
	sub_88156678(ctx, base);
loc_88186A14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186cfc
	if (ctx.cr6.eq) goto loc_88186CFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x881856c8
	ctx.lr = 0x88186A2C;
	sub_881856C8(ctx, base);
	// b 0x88186cfc
	goto loc_88186CFC;
loc_88186A30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881856c8
	ctx.lr = 0x88186A3C;
	sub_881856C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88186cfc
	if (ctx.cr6.eq) goto loc_88186CFC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88186A4C:
	// clrlwi r29,r24,31
	ctx.r29.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88186a88
	if (ctx.cr6.eq) goto loc_88186A88;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186a80
	if (!ctx.cr0.lt) goto loc_88186A80;
	// bl 0x88156678
	ctx.lr = 0x88186A80;
	sub_88156678(ctx, base);
loc_88186A80:
	// stb r31,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_88186A88:
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88186cfc
	if (!ctx.cr6.lt) goto loc_88186CFC;
	// subf r11,r29,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_88186AA4:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186acc
	if (!ctx.cr0.lt) goto loc_88186ACC;
	// bl 0x88156678
	ctx.lr = 0x88186ACC;
	sub_88156678(ctx, base);
loc_88186ACC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186b54
	if (ctx.cr6.eq) goto loc_88186B54;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186afc
	if (!ctx.cr0.lt) goto loc_88186AFC;
	// bl 0x88156678
	ctx.lr = 0x88186AFC;
	sub_88156678(ctx, base);
loc_88186AFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186b10
	if (ctx.cr6.eq) goto loc_88186B10;
	// stb r28,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stbu r28,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x88186b5c
	goto loc_88186B5C;
loc_88186B10:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186b38
	if (!ctx.cr0.lt) goto loc_88186B38;
	// bl 0x88156678
	ctx.lr = 0x88186B38;
	sub_88156678(ctx, base);
loc_88186B38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186b4c
	if (ctx.cr6.eq) goto loc_88186B4C;
	// stb r19,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
	// stbu r28,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// b 0x88186b5c
	goto loc_88186B5C;
loc_88186B4C:
	// stb r28,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x88186b58
	goto loc_88186B58;
loc_88186B54:
	// stb r19,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r19.u8);
loc_88186B58:
	// stbu r19,1(r30)
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r30.u32 = ea;
loc_88186B5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88186aa4
	if (!ctx.cr0.eq) goto loc_88186AA4;
	// b 0x88186cfc
	goto loc_88186CFC;
loc_88186B6C:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186b94
	if (!ctx.cr0.lt) goto loc_88186B94;
	// bl 0x88156678
	ctx.lr = 0x88186B94;
	sub_88156678(ctx, base);
loc_88186B94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186c4c
	if (ctx.cr6.eq) goto loc_88186C4C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186cfc
	if (!ctx.cr6.gt) goto loc_88186CFC;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_88186BA8:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186bd0
	if (!ctx.cr0.lt) goto loc_88186BD0;
	// bl 0x88156678
	ctx.lr = 0x88186BD0;
	sub_88156678(ctx, base);
loc_88186BD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186c24
	if (ctx.cr6.eq) goto loc_88186C24;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186c3c
	if (!ctx.cr6.gt) goto loc_88186C3C;
	// subf r28,r26,r30
	ctx.r28.u64 = ctx.r30.u64 - ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_88186BE8:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186c10
	if (!ctx.cr0.lt) goto loc_88186C10;
	// bl 0x88156678
	ctx.lr = 0x88186C10;
	sub_88156678(ctx, base);
loc_88186C10:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbux r11,r28,r26
	ea = ctx.r28.u32 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
	// bne 0x88186be8
	if (!ctx.cr0.eq) goto loc_88186BE8;
	// b 0x88186c3c
	goto loc_88186C3C;
loc_88186C24:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186c3c
	if (!ctx.cr6.gt) goto loc_88186C3C;
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_88186C34:
	// stbux r19,r11,r26
	ea = ctx.r11.u32 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88186c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88186C34;
loc_88186C3C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x88186ba8
	if (!ctx.cr0.eq) goto loc_88186BA8;
	// b 0x88186cfc
	goto loc_88186CFC;
loc_88186C4C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186cfc
	if (!ctx.cr6.gt) goto loc_88186CFC;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_88186C58:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// bge 0x88186c80
	if (!ctx.cr0.lt) goto loc_88186C80;
	// bl 0x88156678
	ctx.lr = 0x88186C80;
	sub_88156678(ctx, base);
loc_88186C80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88186cd4
	if (ctx.cr6.eq) goto loc_88186CD4;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186cf0
	if (!ctx.cr6.gt) goto loc_88186CF0;
loc_88186C94:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
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
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88186cbc
	if (!ctx.cr0.lt) goto loc_88186CBC;
	// bl 0x88156678
	ctx.lr = 0x88186CBC;
	sub_88156678(ctx, base);
loc_88186CBC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stbx r11,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88186c94
	if (ctx.cr6.lt) goto loc_88186C94;
	// b 0x88186cf0
	goto loc_88186CF0;
loc_88186CD4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186cf0
	if (!ctx.cr6.gt) goto loc_88186CF0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_88186CE4:
	// stbx r19,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r19.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88186ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88186CE4;
loc_88186CF0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x88186c58
	if (!ctx.cr0.eq) goto loc_88186C58;
loc_88186CFC:
	// lwz r10,22344(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 22344);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88186dac
	if (ctx.cr6.eq) goto loc_88186DAC;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88186de0
	if (!ctx.cr6.gt) goto loc_88186DE0;
loc_88186D14:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88186d9c
	if (!ctx.cr6.gt) goto loc_88186D9C;
	// subfic r8,r26,1
	ctx.xer.ca = ctx.r26.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r26.u64;
loc_88186D24:
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88186d74
	if (ctx.cr0.eq) goto loc_88186D74;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88186d40
	if (!ctx.cr6.eq) goto loc_88186D40;
	// lbz r11,-1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x88186d78
	goto loc_88186D78;
loc_88186D40:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88186d58
	if (!ctx.cr6.eq) goto loc_88186D58;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x88186d78
	goto loc_88186D78;
loc_88186D58:
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// lbz r4,-1(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x88186d78
	if (ctx.cr6.eq) goto loc_88186D78;
loc_88186D74:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_88186D78:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x88186d24
	if (ctx.cr6.lt) goto loc_88186D24;
loc_88186D9C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88186d14
	if (ctx.cr6.lt) goto loc_88186D14;
	// b 0x88186de0
	goto loc_88186DE0;
loc_88186DAC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88186de0
	if (ctx.cr6.eq) goto loc_88186DE0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x88186de0
	if (!ctx.cr6.gt) goto loc_88186DE0;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_88186DC4:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88186dc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88186DC4;
loc_88186DE0:
	// lwz r11,140(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,136(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// li r22,3
	ctx.r22.s64 = 3;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lwz r20,22344(r25)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r25.u32 + 22344);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r24,r10,32768
	ctx.r24.u64 = ctx.r10.u64 | 32768;
	// subf r23,r7,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r7.u64;
	// ble 0x8818723c
	if (!ctx.cr0.gt) goto loc_8818723C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_88186E18:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8818704c
	if (!ctx.cr6.gt) goto loc_8818704C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_88186E28:
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88186fe0
	if (!ctx.cr6.eq) goto loc_88186FE0;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88186e50
	if (!ctx.cr0.eq) goto loc_88186E50;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x88186f78
	goto loc_88186F78;
loc_88186E50:
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
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88186f3c
	if (ctx.cr6.lt) goto loc_88186F3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
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
	// bge cr6,0x88186f34
	if (!ctx.cr6.lt) goto loc_88186F34;
loc_88186E9C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88186ec8
	if (ctx.cr6.lt) goto loc_88186EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88186EB8;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88186e9c
	if (ctx.cr6.eq) goto loc_88186E9C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x88186f74
	goto loc_88186F74;
loc_88186EC8:
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
loc_88186F34:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x88186f74
	goto loc_88186F74;
loc_88186F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88186F44;
	sub_88156500(ctx, base);
loc_88186F44:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x88186F5C;
	sub_88156500(ctx, base);
	// add r10,r29,r24
	ctx.r10.u64 = ctx.r29.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88186f44
	if (ctx.cr6.lt) goto loc_88186F44;
loc_88186F74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88186F78:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// rlwimi r9,r11,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r21
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r4,r7,31,0,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x80000000) | (ctx.r4.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r4,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r4.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r10,r6,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x88187038
	goto loc_88187038;
loc_88186FE0:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 2147483648;
	// stwx r5,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r21
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 2147483648;
loc_88187038:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// stwx r10,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u32);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x88186e28
	if (ctx.cr6.lt) goto loc_88186E28;
loc_8818704C:
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88187220
	if (ctx.cr6.eq) goto loc_88187220;
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881871e8
	if (!ctx.cr6.eq) goto loc_881871E8;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88187084
	if (!ctx.cr0.eq) goto loc_88187084;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x881871a8
	goto loc_881871A8;
loc_88187084:
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
	// blt cr6,0x88187170
	if (ctx.cr6.lt) goto loc_88187170;
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
	// bge cr6,0x88187168
	if (!ctx.cr6.lt) goto loc_88187168;
loc_881870D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881870fc
	if (ctx.cr6.lt) goto loc_881870FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881870EC;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881870d0
	if (ctx.cr6.eq) goto loc_881870D0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881871a8
	goto loc_881871A8;
loc_881870FC:
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
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88187168:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881871a8
	goto loc_881871A8;
loc_88187170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88187178;
	sub_88156500(ctx, base);
loc_88187178:
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
	ctx.lr = 0x88187190;
	sub_88156500(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187178
	if (ctx.cr6.lt) goto loc_88187178;
loc_881871A8:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 2;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r7,r30,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r7,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r7.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r5,r9,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r5,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// b 0x88187220
	goto loc_88187220;
loc_881871E8:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r9.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 2147483648;
	// stwx r6,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r6.u32);
loc_88187220:
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bne 0x88186e18
	if (!ctx.cr0.eq) goto loc_88186E18;
loc_8818723C:
	// lwz r11,140(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 140);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88187590
	if (ctx.cr6.eq) goto loc_88187590;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881873fc
	if (!ctx.cr6.gt) goto loc_881873FC;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8818726C:
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881873d8
	if (!ctx.cr6.eq) goto loc_881873D8;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88187294
	if (!ctx.cr0.eq) goto loc_88187294;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x881873b8
	goto loc_881873B8;
loc_88187294:
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
	// blt cr6,0x88187380
	if (ctx.cr6.lt) goto loc_88187380;
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
	// bge cr6,0x88187378
	if (!ctx.cr6.lt) goto loc_88187378;
loc_881872E0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8818730c
	if (ctx.cr6.lt) goto loc_8818730C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881872FC;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881872e0
	if (ctx.cr6.eq) goto loc_881872E0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881873b8
	goto loc_881873B8;
loc_8818730C:
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
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88187378:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881873b8
	goto loc_881873B8;
loc_88187380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88187388;
	sub_88156500(ctx, base);
loc_88187388:
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
	ctx.lr = 0x881873A0;
	sub_88156500(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187388
	if (ctx.cr6.lt) goto loc_88187388;
loc_881873B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r9,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r9.u32);
	// b 0x881873f0
	goto loc_881873F0;
loc_881873D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r8.u32);
loc_881873F0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// bne 0x8818726c
	if (!ctx.cr0.eq) goto loc_8818726C;
loc_881873FC:
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88187590
	if (ctx.cr6.eq) goto loc_88187590;
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88187578
	if (!ctx.cr6.eq) goto loc_88187578;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = ctx.r25.u32 > 4294944947;
	ctx.r11.s64 = ctx.r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88187430
	if (!ctx.cr0.eq) goto loc_88187430;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// b 0x88187554
	goto loc_88187554;
loc_88187430:
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
	// blt cr6,0x8818751c
	if (ctx.cr6.lt) goto loc_8818751C;
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
	// bge cr6,0x88187514
	if (!ctx.cr6.lt) goto loc_88187514;
loc_8818747C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881874a8
	if (ctx.cr6.lt) goto loc_881874A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88187498;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8818747c
	if (ctx.cr6.eq) goto loc_8818747C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88187554
	goto loc_88187554;
loc_881874A8:
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
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88187514:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88187554
	goto loc_88187554;
loc_8818751C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88187524;
	sub_88156500(ctx, base);
loc_88187524:
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
	ctx.lr = 0x8818753C;
	sub_88156500(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88187524
	if (ctx.cr6.lt) goto loc_88187524;
loc_88187554:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwimi r10,r30,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r10,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88187578:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r9.u32);
loc_88187590:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A8FB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,14860(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r9,212(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r5,3840(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// lwz r4,3836(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// lwz r3,3832(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3832);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// b 0x881a8f20
	sub_881A8F20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A95C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881A95D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a976c
	if (ctx.cr6.eq) goto loc_881A976C;
	// lwz r10,20684(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a976c
	if (!ctx.cr6.eq) goto loc_881A976C;
	// lwz r11,15116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15116);
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881a9830
	if (!ctx.cr6.eq) goto loc_881A9830;
	// lwz r7,3776(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r29,184(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,15920(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 15920);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,172(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,220(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x881A9650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r7,20680(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,168(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r29,15916(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,176(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r27,r7,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// srawi r7,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 1;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x881A96B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,20680(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r30,184(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r27,r6,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r29,15920(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15920);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,172(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,3776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// srawi r6,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x881A9708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,20680(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,168(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,15916(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// rlwinm r27,r4,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x881A9764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881A976C:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r5,184(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,15920(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15920);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// lwz r11,3776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// and r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 & ctx.r4.u64;
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mullw r4,r6,r30
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,172(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x881A97CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cntlzw r25,r11
	ctx.r25.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,208(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r27,196(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r26,168(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// srawi r28,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 1;
	// lwz r31,15916(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 15916);
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// rlwinm r31,r25,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x1;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x881A9830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A9830:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ACE30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881ACE38;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r27,r10,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ace64
	if (ctx.cr6.eq) goto loc_881ACE64;
	// lwz r10,15684(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15684);
	// bl 0x881abe40
	ctx.lr = 0x881ACE5C;
	sub_881ABE40(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881ACE64:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881abe40
	ctx.lr = 0x881ACE74;
	sub_881ABE40(ctx, base);
	// lwz r30,724(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881aceac
	if (!ctx.cr6.gt) goto loc_881ACEAC;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_881ACE88:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881ACE98;
	sub_880547A0(ctx, base);
	// lwz r11,15684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne 0x881ace88
	if (!ctx.cr0.eq) goto loc_881ACE88;
loc_881ACEAC:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AD278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881AD280;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881ad300
	if (!ctx.cr6.lt) goto loc_881AD300;
loc_881AD2A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ad300
	if (ctx.cr6.eq) goto loc_881AD300;
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
	// bge 0x881ad2f0
	if (!ctx.cr0.lt) goto loc_881AD2F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AD2F0;
	sub_88156678(ctx, base);
loc_881AD2F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ad2a8
	if (ctx.cr6.gt) goto loc_881AD2A8;
loc_881AD300:
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
	// bge 0x881ad338
	if (!ctx.cr0.lt) goto loc_881AD338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AD338;
	sub_88156678(ctx, base);
loc_881AD338:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x881ad3f4
	if (!ctx.cr6.eq) goto loc_881AD3F4;
	// lwz r31,84(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
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
	// bge cr6,0x881ad3b4
	if (!ctx.cr6.lt) goto loc_881AD3B4;
loc_881AD35C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ad3b4
	if (ctx.cr6.eq) goto loc_881AD3B4;
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
	// bge 0x881ad3a4
	if (!ctx.cr0.lt) goto loc_881AD3A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AD3A4;
	sub_88156678(ctx, base);
loc_881AD3A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ad35c
	if (ctx.cr6.gt) goto loc_881AD35C;
loc_881AD3B4:
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
	// bge 0x881ad3ec
	if (!ctx.cr0.lt) goto loc_881AD3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AD3EC;
	sub_88156678(ctx, base);
loc_881AD3EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x881ad400
	goto loc_881AD400;
loc_881AD3F4:
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_881AD400:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x881ad410
	if (!ctx.cr6.eq) goto loc_881AD410;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_881AD410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B0D38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x881b0d84
	if (!ctx.cr6.gt) goto loc_881B0D84;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B0D58:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881b0d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0D58;
loc_881B0D84:
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// ble cr6,0x881b0e0c
	if (!ctx.cr6.gt) goto loc_881B0E0C;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B0DE4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881b0de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0DE4;
loc_881B0E0C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881B0E30:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x881b0e54
	if (!ctx.cr6.gt) goto loc_881B0E54;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_881B0E54:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b0e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0E30;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881B2480) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B2488;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,356(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// ble cr6,0x881b267c
	if (!ctx.cr6.gt) goto loc_881B267C;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r18,r4,r11
	ctx.r18.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r15,r7,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r19,r8,r11
	ctx.r19.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r17,r9,r11
	ctx.r17.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r16,r7,r11
	ctx.r16.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r22,r11,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r11,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r20,r3,r6
	ctx.r20.u64 = ctx.r6.u64 - ctx.r3.u64;
	// li r14,255
	ctx.r14.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
loc_881B24F4:
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r23,r20,r3
	ctx.r23.u64 = ctx.r20.u64 + ctx.r3.u64;
	// add r9,r21,r8
	ctx.r9.u64 = ctx.r21.u64 + ctx.r8.u64;
	// add r30,r31,r6
	ctx.r30.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lbzx r29,r22,r8
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// mulli r30,r30,14
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// lbzx r8,r21,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r8.u32);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// mulli r31,r6,11
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(11));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r6,r8,63
	ctx.r6.s64 = ctx.r8.s64 + 63;
	// srawi r8,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 7;
	// stw r8,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// ble cr6,0x881b25d0
	if (!ctx.cr6.gt) goto loc_881B25D0;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r5,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r5.u64;
	// subf r31,r5,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r5.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_881B257C:
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r28,0(r9)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r25,r8,r11
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r27,r6,r28
	ctx.r27.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lbzux r6,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzux r28,r30,r5
	ea = ctx.r30.u32 + ctx.r5.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mulli r26,r27,14
	ctx.r26.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(14));
	// lbz r27,0(r8)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// mulli r27,r27,11
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(11));
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r6,r27,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r27.u64;
	// addi r6,r6,63
	ctx.r6.s64 = ctx.r6.s64 + 63;
	// srawi r6,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 7;
	// stwu r6,8(r29)
	ea = 8 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r29.u32 = ea;
	// bdnz 0x881b257c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B257C;
loc_881B25D0:
	// lbzx r8,r16,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r9,r18,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r3.u32);
	// lbzx r6,r19,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r3.u32);
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r31,r17,r3
	ctx.r31.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r3.u32);
	// mulli r30,r30,14
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mulli r6,r8,11
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r9,63
	ctx.r8.s64 = ctx.r9.s64 + 63;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// stwx r6,r15,r24
	REX_STORE_U32(ctx.r15.u32 + ctx.r24.u32, ctx.r6.u32);
	// ble cr6,0x881b2660
	if (!ctx.cr6.gt) goto loc_881B2660;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881B2630:
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881b2648
	if (!ctx.cr6.gt) goto loc_881B2648;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r14
	ctx.r8.u64 = ctx.r8.u64 & ctx.r14.u64;
loc_881B2648:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// stb r8,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// bdnz 0x881b2630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2630;
loc_881B2660:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne 0x881b24f4
	if (!ctx.cr0.eq) goto loc_881B24F4;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r27,300(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_881B267C:
	// lwz r31,324(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r28,332(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x881b26ec
	if (!ctx.cr6.gt) goto loc_881B26EC;
	// lwz r10,268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_881B26A0:
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8813a8c0
	ctx.lr = 0x881B26B0;
	sub_8813A8C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b26a0
	if (!ctx.cr0.eq) goto loc_881B26A0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x881b26ec
	if (!ctx.cr6.gt) goto loc_881B26EC;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r30,r27,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r27.u64;
loc_881B26D0:
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8813a8c0
	ctx.lr = 0x881B26E0;
	sub_8813A8C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b26d0
	if (!ctx.cr0.eq) goto loc_881B26D0;
loc_881B26EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B6F48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v60,v62,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsplth v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vsplth v11,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,48
	ctx.r6.s64 = 48;
	// stvx128 v60,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881BA970) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881BA978;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r8.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,1836(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1836);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,16(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r25,1764(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// stw r7,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r22,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r22.u16);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x88052d90
	ctx.lr = 0x881BA9E0;
	sub_88052D90(ctx, base);
	// lwz r7,20760(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 20760);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881baa34
	if (ctx.cr6.eq) goto loc_881BAA34;
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881baa00
	if (ctx.cr6.eq) goto loc_881BAA00;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881baa34
	if (!ctx.cr6.eq) goto loc_881BAA34;
loc_881BAA00:
	// lwz r11,500(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881baa2c
	if (ctx.cr6.eq) goto loc_881BAA2C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881baa24
	if (ctx.cr6.eq) goto loc_881BAA24;
	// lwz r11,1820(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1820);
	// b 0x881baa30
	goto loc_881BAA30;
loc_881BAA24:
	// lwz r11,1824(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1824);
	// b 0x881baa30
	goto loc_881BAA30;
loc_881BAA2C:
	// lwz r11,1816(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1816);
loc_881BAA30:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_881BAA34:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bge cr6,0x881baa50
	if (!ctx.cr6.lt) goto loc_881BAA50;
	// lwz r5,2096(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2096);
	// b 0x881baa54
	goto loc_881BAA54;
loc_881BAA50:
	// lwz r5,2100(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2100);
loc_881BAA54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BAA5C;
	sub_881C6198(ctx, base);
	// lwz r11,1764(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// sth r22,2(r25)
	REX_STORE_U16(ctx.r25.u32 + 2, ctx.r22.u16);
	// sth r10,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bb740
	if (!ctx.cr6.eq) goto loc_881BB740;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881bb54c
	if (ctx.cr6.eq) goto loc_881BB54C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r15,3
	ctx.r15.s64 = 3;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,40(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r23,0(r10)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,28(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// lwz r20,32(r10)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r14,20(r10)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r16,24(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r17,4(r10)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_881BAAD0:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x881baae8
	if (!ctx.cr6.eq) goto loc_881BAAE8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r15,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x881bac0c
	goto loc_881BAC0C;
loc_881BAAE8:
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881babd4
	if (ctx.cr6.lt) goto loc_881BABD4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
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
	// bge cr6,0x881babcc
	if (!ctx.cr6.lt) goto loc_881BABCC;
loc_881BAB34:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bab60
	if (ctx.cr6.lt) goto loc_881BAB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BAB50;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bab34
	if (ctx.cr6.eq) goto loc_881BAB34;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bac0c
	goto loc_881BAC0C;
loc_881BAB60:
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
loc_881BABCC:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bac0c
	goto loc_881BAC0C;
loc_881BABD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BABDC;
	sub_88156500(ctx, base);
loc_881BABDC:
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
	ctx.lr = 0x881BABF4;
	sub_88156500(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881babdc
	if (ctx.cr6.lt) goto loc_881BABDC;
loc_881BAC0C:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// bgt cr6,0x881bb540
	if (ctx.cr6.gt) goto loc_881BB540;
	// beq cr6,0x881bac8c
	if (ctx.cr6.eq) goto loc_881BAC8C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// subfc r11,r21,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r21.u32;
	ctx.r11.u64 = ctx.r31.u64 - ctx.r21.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lbzx r28,r31,r20
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// subfze r24,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r24.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bac6c
	if (!ctx.cr0.lt) goto loc_881BAC6C;
	// bl 0x88156678
	ctx.lr = 0x881BAC6C;
	sub_88156678(ctx, base);
loc_881BAC6C:
	// lbzx r11,r31,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881bac84
	if (ctx.cr6.eq) goto loc_881BAC84;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BAC84:
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BAC8C:
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
	// bge 0x881bacb0
	if (!ctx.cr0.lt) goto loc_881BACB0;
	// bl 0x88156678
	ctx.lr = 0x881BACB0;
	sub_88156678(ctx, base);
loc_881BACB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bae8c
	if (ctx.cr6.eq) goto loc_881BAE8C;
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x881bacdc
	if (!ctx.cr6.eq) goto loc_881BACDC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r15,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x881bae00
	goto loc_881BAE00;
loc_881BACDC:
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881badc8
	if (ctx.cr6.lt) goto loc_881BADC8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
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
	// bge cr6,0x881badc0
	if (!ctx.cr6.lt) goto loc_881BADC0;
loc_881BAD28:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bad54
	if (ctx.cr6.lt) goto loc_881BAD54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BAD44;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bad28
	if (ctx.cr6.eq) goto loc_881BAD28;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bae00
	goto loc_881BAE00;
loc_881BAD54:
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
loc_881BADC0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bae00
	goto loc_881BAE00;
loc_881BADC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BADD0;
	sub_88156500(ctx, base);
loc_881BADD0:
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
	ctx.lr = 0x881BADE8;
	sub_88156500(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881badd0
	if (ctx.cr6.lt) goto loc_881BADD0;
loc_881BAE00:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x881bb540
	if (ctx.cr6.eq) goto loc_881BB540;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// lbzx r28,r11,r20
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x881bae48
	if (ctx.cr6.lt) goto loc_881BAE48;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x881bae4c
	goto loc_881BAE4C;
loc_881BAE48:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881BAE4C:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x881bae7c
	if (!ctx.cr0.lt) goto loc_881BAE7C;
	// bl 0x88156678
	ctx.lr = 0x881BAE7C;
	sub_88156678(ctx, base);
loc_881BAE7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881bb4dc
	if (ctx.cr6.eq) goto loc_881BB4DC;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BAE8C:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
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
	// bge 0x881baeb4
	if (!ctx.cr0.lt) goto loc_881BAEB4;
	// bl 0x88156678
	ctx.lr = 0x881BAEB4;
	sub_88156678(ctx, base);
loc_881BAEB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bb090
	if (ctx.cr6.eq) goto loc_881BB090;
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x881baee0
	if (!ctx.cr6.eq) goto loc_881BAEE0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r15,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x881bb004
	goto loc_881BB004;
loc_881BAEE0:
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bafcc
	if (ctx.cr6.lt) goto loc_881BAFCC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
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
	// bge cr6,0x881bafc4
	if (!ctx.cr6.lt) goto loc_881BAFC4;
loc_881BAF2C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881baf58
	if (ctx.cr6.lt) goto loc_881BAF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BAF48;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881baf2c
	if (ctx.cr6.eq) goto loc_881BAF2C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bb004
	goto loc_881BB004;
loc_881BAF58:
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
loc_881BAFC4:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bb004
	goto loc_881BB004;
loc_881BAFCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BAFD4;
	sub_88156500(ctx, base);
loc_881BAFD4:
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
	ctx.lr = 0x881BAFEC;
	sub_88156500(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bafd4
	if (ctx.cr6.lt) goto loc_881BAFD4;
loc_881BB004:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x881bb540
	if (ctx.cr6.eq) goto loc_881BB540;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// lbzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// lwz r9,1936(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1936);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// blt cr6,0x881bb050
	if (ctx.cr6.lt) goto loc_881BB050;
	// lbzx r10,r31,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r16.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x881bb054
	goto loc_881BB054;
loc_881BB050:
	// lbzx r10,r31,r14
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r14.u32);
loc_881BB054:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x881bb080
	if (!ctx.cr0.lt) goto loc_881BB080;
	// bl 0x88156678
	ctx.lr = 0x881BB080;
	sub_88156678(ctx, base);
loc_881BB080:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881bb4dc
	if (ctx.cr6.eq) goto loc_881BB4DC;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB090:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
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
	// bge 0x881bb0b8
	if (!ctx.cr0.lt) goto loc_881BB0B8;
	// bl 0x88156678
	ctx.lr = 0x881BB0B8;
	sub_88156678(ctx, base);
loc_881BB0B8:
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x881bb37c
	if (ctx.cr6.lt) goto loc_881BB37C;
	// lwz r11,1948(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bb0e0
	if (ctx.cr6.eq) goto loc_881BB0E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b8060
	ctx.lr = 0x881BB0DC;
	sub_881B8060(ctx, base);
	// stw r22,1948(r27)
	REX_STORE_U32(ctx.r27.u32 + 1948, ctx.r22.u32);
loc_881BB0E0:
	// lwz r30,84(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r31,1956(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881bb104
	if (!ctx.cr6.gt) goto loc_881BB104;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bb1b0
	goto loc_881BB1B0;
loc_881BB104:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bb114
	if (!ctx.cr6.eq) goto loc_881BB114;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bb1b0
	goto loc_881BB1B0;
loc_881BB114:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bb174
	if (!ctx.cr6.gt) goto loc_881BB174;
loc_881BB11C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb174
	if (ctx.cr6.eq) goto loc_881BB174;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bb164
	if (!ctx.cr0.lt) goto loc_881BB164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB164;
	sub_88156678(ctx, base);
loc_881BB164:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb11c
	if (ctx.cr6.gt) goto loc_881BB11C;
loc_881BB174:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bb1ac
	if (!ctx.cr0.lt) goto loc_881BB1AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB1AC;
	sub_88156678(ctx, base);
loc_881BB1AC:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_881BB1B0:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
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
	// bge 0x881bb1d8
	if (!ctx.cr0.lt) goto loc_881BB1D8;
	// bl 0x88156678
	ctx.lr = 0x881BB1D8;
	sub_88156678(ctx, base);
loc_881BB1D8:
	// lwz r30,84(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,1952(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 1952);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881bb2c0
	if (ctx.cr6.eq) goto loc_881BB2C0;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bb208
	if (!ctx.cr6.gt) goto loc_881BB208;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bb21c
	if (!ctx.cr6.eq) goto loc_881BB21C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB21C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bb27c
	if (!ctx.cr6.gt) goto loc_881BB27C;
loc_881BB224:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb27c
	if (ctx.cr6.eq) goto loc_881BB27C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bb26c
	if (!ctx.cr0.lt) goto loc_881BB26C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB26C;
	sub_88156678(ctx, base);
loc_881BB26C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb224
	if (ctx.cr6.gt) goto loc_881BB224;
loc_881BB27C:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bb2b4
	if (!ctx.cr0.lt) goto loc_881BB2B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB2B4;
	sub_88156678(ctx, base);
loc_881BB2B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB2C0:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bb2d0
	if (!ctx.cr6.gt) goto loc_881BB2D0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB2D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bb2e0
	if (!ctx.cr6.eq) goto loc_881BB2E0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB2E0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bb340
	if (!ctx.cr6.gt) goto loc_881BB340;
loc_881BB2E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb340
	if (ctx.cr6.eq) goto loc_881BB340;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bb330
	if (!ctx.cr0.lt) goto loc_881BB330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB330;
	sub_88156678(ctx, base);
loc_881BB330:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb2e8
	if (ctx.cr6.gt) goto loc_881BB2E8;
loc_881BB340:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bb4dc
	if (!ctx.cr0.lt) goto loc_881BB4DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB378;
	sub_88156678(ctx, base);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB37C:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881bb3f0
	if (!ctx.cr6.lt) goto loc_881BB3F0;
loc_881BB398:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb3f0
	if (ctx.cr6.eq) goto loc_881BB3F0;
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
	// bge 0x881bb3e0
	if (!ctx.cr0.lt) goto loc_881BB3E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB3E0;
	sub_88156678(ctx, base);
loc_881BB3E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb398
	if (ctx.cr6.gt) goto loc_881BB398;
loc_881BB3F0:
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
	// bge 0x881bb428
	if (!ctx.cr0.lt) goto loc_881BB428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB428;
	sub_88156678(ctx, base);
loc_881BB428:
	// lwz r31,84(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881bb4a0
	if (!ctx.cr6.lt) goto loc_881BB4A0;
loc_881BB448:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb4a0
	if (ctx.cr6.eq) goto loc_881BB4A0;
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
	// bge 0x881bb490
	if (!ctx.cr0.lt) goto loc_881BB490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB490;
	sub_88156678(ctx, base);
loc_881BB490:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb448
	if (ctx.cr6.gt) goto loc_881BB448;
loc_881BB4A0:
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
	// bge 0x881bb4d8
	if (!ctx.cr0.lt) goto loc_881BB4D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB4D8;
	sub_88156678(ctx, base);
loc_881BB4D8:
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
loc_881BB4DC:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// add r10,r28,r18
	ctx.r10.u64 = ctx.r28.u64 + ctx.r18.u64;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x881bb540
	if (ctx.cr6.eq) goto loc_881BB540;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r18,r10,1
	ctx.r18.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lbzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// sth r3,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// sthx r5,r4,r8
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r5.u16);
	// sthx r31,r9,r25
	REX_STORE_U16(ctx.r9.u32 + ctx.r25.u32, ctx.r31.u16);
	// bne cr6,0x881bb54c
	if (!ctx.cr6.eq) goto loc_881BB54C;
	// lwz r28,104(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x881baad0
	goto loc_881BAAD0;
loc_881BB540:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BB54C:
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881bb610
	if (ctx.cr6.eq) goto loc_881BB610;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bb56c
	if (ctx.cr6.eq) goto loc_881BB56C;
	// lwz r11,1924(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1924);
	// b 0x881bb570
	goto loc_881BB570;
loc_881BB56C:
	// lwz r11,1920(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1920);
loc_881BB570:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,484(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r8.u16);
	// beq cr6,0x881bb610
	if (ctx.cr6.eq) goto loc_881BB610;
	// li r10,7
	ctx.r10.s64 = 7;
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881BB5A8:
	// slw r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb5d8
	if (ctx.cr6.eq) goto loc_881BB5D8;
	// lhz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sthx r3,r10,r25
	REX_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r3.u16);
	// b 0x881bb600
	goto loc_881BB600;
loc_881BB5D8:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lhz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// sthx r10,r4,r3
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u16);
	// sthx r9,r31,r25
	REX_STORE_U16(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u16);
loc_881BB600:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x881bb5a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BB5A8;
	// b 0x881bb614
	goto loc_881BB614;
loc_881BB610:
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_881BB614:
	// lhz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r10,492(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// sth r7,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r7.u16);
	// lhz r6,2(r25)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 2);
	// sth r6,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lhz r5,16(r25)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 16);
	// sth r5,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r5.u16);
	// lhz r4,4(r25)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 4);
	// sth r4,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lhz r3,32(r25)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + 32);
	// sth r3,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r3.u16);
	// lhz r9,6(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 6);
	// sth r9,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// lhz r7,48(r25)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 48);
	// sth r7,22(r10)
	REX_STORE_U16(ctx.r10.u32 + 22, ctx.r7.u16);
	// lhz r6,8(r25)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 8);
	// sth r6,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// lhz r5,64(r25)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 64);
	// sth r5,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r5.u16);
	// lhz r4,10(r25)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 10);
	// sth r4,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// lhz r3,80(r25)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + 80);
	// sth r3,26(r10)
	REX_STORE_U16(ctx.r10.u32 + 26, ctx.r3.u16);
	// lhz r9,12(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 12);
	// sth r9,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// lhz r7,96(r25)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 96);
	// sth r7,28(r10)
	REX_STORE_U16(ctx.r10.u32 + 28, ctx.r7.u16);
	// lhz r6,14(r25)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 14);
	// sth r6,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r6.u16);
	// lhz r5,112(r25)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 112);
	// sth r5,30(r10)
	REX_STORE_U16(ctx.r10.u32 + 30, ctx.r5.u16);
	// lhz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// sth r10,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
	// ble cr6,0x881bb718
	if (!ctx.cr6.gt) goto loc_881BB718;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
loc_881BB6D0:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// srawi r11,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 15;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// xor r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subfic r4,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r4,r11,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// sthx r11,r10,r25
	REX_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r11.u16);
	// bdnz 0x881bb6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BB6D0;
loc_881BB718:
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r10,3216(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3216);
	// lwz r4,516(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,1944(r27)
	REX_STORE_U32(ctx.r27.u32 + 1944, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,524(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881BB73C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_881BB740:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DDB78) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bne cr6,0x881ddba8
	if (!ctx.cr6.eq) goto loc_881DDBA8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x881ddbf4
	if (!ctx.cr6.eq) goto loc_881DDBF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_881DDBA8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881ddbcc
	if (!ctx.cr6.eq) goto loc_881DDBCC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x881ddc3c
	if (!ctx.cr6.eq) goto loc_881DDC3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_881DDBCC:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x881ddc14
	if (!ctx.cr6.eq) goto loc_881DDC14;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,53
	ctx.r3.s64 = 53;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_881DDBF4:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_881DDC14:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,71
	ctx.r3.s64 = 71;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_881DDC3C:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x881ddc5c
	if (!ctx.cr6.eq) goto loc_881DDC5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_881DDC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881DE698) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881DE6A0;
	__savegprlr_23(ctx, base);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lis r31,0
	ctx.r31.s64 = 0;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// ori r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 32768;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r27,r31,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r31.u64;
	// subf r29,r31,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881de760
	if (!ctx.cr6.gt) goto loc_881DE760;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881DE6E0:
	// sraw r11,r28,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881de750
	if (!ctx.cr6.gt) goto loc_881DE750;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
loc_881DE6FC:
	// sraw r26,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r26.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r26,r26,r8
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// sraw r25,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r25.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r25,r25,r8
	ctx.r25.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// rotlwi r26,r26,24
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 24);
	// sraw r24,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r24.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r24,r24,r8
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r8.u32);
	// rotlwi r25,r25,16
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 16);
	// sraw r23,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r23.s64 = ctx.r11.s32 >> temp.u32;
	// or r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 | ctx.r26.u64;
	// lbzx r25,r23,r8
	ctx.r25.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r8.u32);
	// rotlwi r24,r24,8
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// or r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 | ctx.r26.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// or r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 | ctx.r26.u64;
	// stwu r26,-4(r30)
	ea = -4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x881de6fc
	if (ctx.cr6.lt) goto loc_881DE6FC;
loc_881DE750:
	// add r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881de6e0
	if (ctx.cr6.lt) goto loc_881DE6E0;
loc_881DE760:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DF930) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DF938;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,372(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881df984
	if (!ctx.cr6.eq) goto loc_881DF984;
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// b 0x881df98c
	goto loc_881DF98C;
loc_881DF984:
	// srawi r11,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_881DF98C:
	// lwz r28,380(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881df9ac
	if (ctx.cr6.eq) goto loc_881DF9AC;
	// srawi r6,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 1;
loc_881DF9AC:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r16,356(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,364(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r21,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF0000;
	// lwz r26,396(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r9,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r31,r16,-1
	ctx.r31.s64 = ctx.r16.s64 + -1;
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// addi r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r25,0
	ctx.r25.s64 = 0;
	// clrlwi r24,r27,30
	ctx.r24.u64 = ctx.r27.u32 & 0x3;
	// andc r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// andc r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// ori r27,r25,32768
	ctx.r27.u64 = ctx.r25.u64 | 32768;
	// divw r25,r7,r31
	ctx.r25.u64 = uint32_t((ctx.r31.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r7.s32 / ctx.r31.s32 : 0);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r3,r30
	ctx.r15.u64 = uint32_t((ctx.r30.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r3.s32 / ctx.r30.s32 : 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x881dfa94
	if (!ctx.cr6.eq) goto loc_881DFA94;
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881dfa94
	if (!ctx.cr6.eq) goto loc_881DFA94;
	// srawi r11,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 1;
	// li r30,17
	ctx.r30.s64 = 17;
	// rlwinm r24,r15,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r25,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r3,r26,-3
	ctx.r3.s64 = ctx.r26.s64 + -3;
	// bl 0x881de898
	ctx.lr = 0x881DFA64;
	sub_881DE898(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// bl 0x881de898
	ctx.lr = 0x881DFA8C;
	sub_881DE898(ctx, base);
	// lwz r17,116(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x881dfb50
	goto loc_881DFB50;
loc_881DFA94:
	// srawi r9,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 4;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r18,r27,r8
	ctx.r18.u64 = ctx.r8.u64 - ctx.r27.u64;
	// cmpw cr6,r18,r27
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881dfb50
	if (ctx.cr6.lt) goto loc_881DFB50;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// lwz r23,404(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r19,r15,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r28,r27,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_881DFAD4:
	// srawi r9,r24,17
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881dfb30
	if (ctx.cr6.lt) goto loc_881DFB30;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r31,r3,r20
	ctx.r31.u64 = ctx.r3.u64 + ctx.r20.u64;
	// add r30,r7,r23
	ctx.r30.u64 = ctx.r7.u64 + ctx.r23.u64;
	// rlwinm r29,r25,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_881DFAFC:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r14,r3,r9
	ctx.r14.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	ctx.r14.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r26
	REX_STORE_U8(ctx.r8.u32 + ctx.r26.u32, ctx.r14.u8);
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x881dfafc
	if (!ctx.cr6.gt) goto loc_881DFAFC;
	// lwz r29,364(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r14,292(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_881DFB30:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x881dfad4
	if (!ctx.cr6.gt) goto loc_881DFAD4;
	// lwz r19,300(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r23,372(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,380(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
loc_881DFB50:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881dfba8
	if (!ctx.cr6.eq) goto loc_881DFBA8;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881dfba8
	if (!ctx.cr6.eq) goto loc_881DFBA8;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,340(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r14,-3
	ctx.r3.s64 = ctx.r14.s64 + -3;
	// bl 0x881de898
	ctx.lr = 0x881DFBA0;
	sub_881DE898(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881DFBA8:
	// srawi r11,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 4;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r27,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r27.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881dfc50
	if (ctx.cr6.lt) goto loc_881DFC50;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_881DFBE4:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + ctx.r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881dfc40
	if (ctx.cr6.lt) goto loc_881DFC40;
	// lwz r7,340(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r6,r26
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + ctx.r19.u64;
	// add r6,r9,r19
	ctx.r6.u64 = ctx.r9.u64 + ctx.r19.u64;
loc_881DFC1C:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r26,r7,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r26,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r26.u8);
	// stbx r9,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// ble cr6,0x881dfc1c
	if (!ctx.cr6.gt) goto loc_881DFC1C;
loc_881DFC40:
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881dfbe4
	if (!ctx.cr6.gt) goto loc_881DFBE4;
loc_881DFC50:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E3CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881E3CF0;
	__savegprlr_25(ctx, base);
	// lwz r26,92(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// rlwinm r10,r8,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,33
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 33, ctx.xer);
	// bgt cr6,0x881e3de4
	if (ctx.cr6.gt) goto loc_881E3DE4;
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r27,r6,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r25,4
	ctx.r25.s64 = 4;
loc_881E3D24:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881e3d6c
	if (!ctx.cr6.gt) goto loc_881E3D6C;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r11,r27,r6
	ctx.r11.u64 = ctx.r27.u64 + ctx.r6.u64;
loc_881E3D4C:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881e3d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3D4C;
loc_881E3D6C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e3dd8
	if (!ctx.cr6.gt) goto loc_881E3DD8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
loc_881E3D80:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// srawi. r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x881e3dbc
	if (!ctx.cr0.lt) goto loc_881E3DBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x881e3dc8
	goto loc_881E3DC8;
loc_881E3DBC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881e3dc8
	if (!ctx.cr6.gt) goto loc_881E3DC8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_881E3DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbux r11,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x881e3d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3D80;
loc_881E3DD8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x881e3d24
	if (!ctx.cr0.eq) goto loc_881E3D24;
loc_881E3DE4:
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E6F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881E6F90;
	__savegprlr_18(ctx, base);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,-64
	ctx.r30.s64 = -64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r29,r11,-25424
	ctx.r29.s64 = ctx.r11.s64 + -25424;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// li r28,-48
	ctx.r28.s64 = -48;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// li r26,-16
	ctx.r26.s64 = -16;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// li r27,-32
	ctx.r27.s64 = -32;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lvx128 v7,r29,r30
	ea = (ctx.r29.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r29,r26
	ea = (ctx.r29.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r29,r27
	ea = (ctx.r29.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r20,r6,0,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r26,16
	ctx.r26.s64 = 16;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// add r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881e70b0
	if (!ctx.cr6.gt) goto loc_881E70B0;
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881E7024:
	// lvrx128 v63,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r26,r29
	temp.u32 = ctx.r26.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v5,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v4,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v23,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v20,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v19,v23,v21
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v18,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvlx128 v59,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r31,r26
	ea = ctx.r31.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x881e7024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7024;
loc_881E70B0:
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 + ctx.r3.u64;
	// rlwinm r3,r3,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e7108
	if (!ctx.cr6.lt) goto loc_881E7108;
	// subf r31,r11,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_881E70D0:
	// srawi r31,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 7;
	// clrlwi r27,r3,25
	ctx.r27.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// subfic r29,r27,128
	ctx.xer.ca = ctx.r27.u32 <= 128;
	ctx.r29.u64 = static_cast<uint64_t>(128) - ctx.r27.u64;
	// lbzx r25,r31,r30
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// lbzx r31,r28,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mullw r29,r25,r29
	ctx.r29.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// mullw r31,r31,r27
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// srawi r31,r31,7
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 7;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e70d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E70D0;
loc_881E7108:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7130
	if (!ctx.cr6.lt) goto loc_881E7130;
	// subf r31,r11,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_881E7118:
	// srawi r31,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 7;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lbzx r31,r31,r30
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e7118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7118;
loc_881E7130:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r23,r30,r9
	ctx.r23.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881e7844
	if (!ctx.cr6.lt) goto loc_881E7844;
	// addi r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 1;
loc_881E7148:
	// clrlwi r11,r18,30
	ctx.r11.u64 = ctx.r18.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x881e7834
	if (ctx.cr6.gt) goto loc_881E7834;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e7734
	if (ctx.cr6.eq) goto loc_881E7734;
	// bdz 0x881e716c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881E716C;
	// bdz 0x881e735c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881E735C;
	// b 0x881e754c
	goto loc_881E754C;
loc_881E716C:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881e728c
	if (!ctx.cr6.gt) goto loc_881E728C;
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_881E71A8:
	// lvrx128 v58,r25,r5
	temp.u32 = ctx.r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v57,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v55,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r26,r31
	temp.u32 = ctx.r26.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r26,r28
	temp.u32 = ctx.r26.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v19,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v18,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v15,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v3,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v5,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v2,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v31,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvlx128 v52,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// vaddshs v28,v17,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvrx128 v52,r11,r26
	ea = ctx.r11.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vsrah v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvlx128 v51,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r27,r26
	ea = ctx.r27.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x881e71a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E71A8;
loc_881E728C:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e72e4
	if (!ctx.cr6.lt) goto loc_881E72E4;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E72AC:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	ctx.r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = ctx.r29.u32 <= 128;
	ctx.r31.u64 = static_cast<uint64_t>(128) - ctx.r29.u64;
	// lbzx r28,r5,r23
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x881e72ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E72AC;
loc_881E72E4:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e730c
	if (!ctx.cr6.lt) goto loc_881E730C;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E72F4:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x881e72f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E72F4;
loc_881E730C:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7820
	if (!ctx.cr6.lt) goto loc_881E7820;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r30.u64;
	// add r11,r30,r22
	ctx.r11.u64 = ctx.r30.u64 + ctx.r22.u64;
	// subf r29,r22,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r22.u64;
	// subf r28,r22,r21
	ctx.r28.u64 = ctx.r21.u64 - ctx.r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E7328:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r5,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// rotlwi r30,r3,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e7328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7328;
	// b 0x881e7820
	goto loc_881E7820;
loc_881E735C:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881e747c
	if (!ctx.cr6.gt) goto loc_881E747C;
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_881E7398:
	// lvrx128 v50,r25,r5
	temp.u32 = ctx.r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v49,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v47,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r26,r31
	temp.u32 = ctx.r26.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r26,r28
	temp.u32 = ctx.r26.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v19,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v18,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v15,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v3,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v5,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v2,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v31,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvlx128 v44,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vaddshs v28,v17,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvrx128 v44,r11,r26
	ea = ctx.r11.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vsrah v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvlx128 v43,r11,r29
	ea = ctx.r11.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r27,r26
	ea = ctx.r27.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x881e7398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7398;
loc_881E747C:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e74d4
	if (!ctx.cr6.lt) goto loc_881E74D4;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E749C:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	ctx.r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = ctx.r29.u32 <= 128;
	ctx.r31.u64 = static_cast<uint64_t>(128) - ctx.r29.u64;
	// lbzx r28,r5,r23
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x881e749c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E749C;
loc_881E74D4:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e74fc
	if (!ctx.cr6.lt) goto loc_881E74FC;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E74E4:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x881e74e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E74E4;
loc_881E74FC:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7820
	if (!ctx.cr6.lt) goto loc_881E7820;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r30.u64;
	// add r11,r30,r22
	ctx.r11.u64 = ctx.r30.u64 + ctx.r22.u64;
	// subf r29,r22,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r22.u64;
	// subf r28,r22,r21
	ctx.r28.u64 = ctx.r21.u64 - ctx.r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E7518:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r5,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r30,r3,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e7518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7518;
	// b 0x881e7820
	goto loc_881E7820;
loc_881E754C:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881e766c
	if (!ctx.cr6.gt) goto loc_881E766C;
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_881E7588:
	// lvrx128 v42,r25,r5
	temp.u32 = ctx.r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v41,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvlx128 v40,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v39,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r26,r31
	temp.u32 = ctx.r26.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r26,r28
	temp.u32 = ctx.r26.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v4,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v2,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v20,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v18,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v17,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v21,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v2,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v31,v15,v26
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v36,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v28,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvrx128 v36,r11,r26
	ea = ctx.r11.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvlx128 v35,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r27,r26
	ea = ctx.r27.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x881e7588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7588;
loc_881E766C:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x881e76c4
	if (!ctx.cr6.lt) goto loc_881E76C4;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E768C:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	ctx.r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = ctx.r29.u32 <= 128;
	ctx.r31.u64 = static_cast<uint64_t>(128) - ctx.r29.u64;
	// lbzx r28,r5,r23
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x881e768c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E768C;
loc_881E76C4:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e76ec
	if (!ctx.cr6.lt) goto loc_881E76EC;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E76D4:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x881e76d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E76D4;
loc_881E76EC:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7834
	if (!ctx.cr6.lt) goto loc_881E7834;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r30.u64;
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// subf r31,r4,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r4.u64;
	// subf r30,r4,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E7708:
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r3,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r3,r3,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r3.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e7708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7708;
	// b 0x881e7834
	goto loc_881E7834;
loc_881E7734:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881e77dc
	if (!ctx.cr6.gt) goto loc_881E77DC;
	// addi r5,r20,-1
	ctx.r5.s64 = ctx.r20.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// subf r5,r4,r22
	ctx.r5.u64 = ctx.r22.u64 - ctx.r4.u64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r4,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r4.u64;
	// rlwinm r27,r31,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_881E7768:
	// lvrx128 v34,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r5,r11
	ctx.r31.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vor128 v4,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvlx128 v32,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r29,r31
	temp.u32 = ctx.r29.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v30,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v26,v31,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v24,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v23,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v22,v1,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsrah v21,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// stvlx128 v62,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v62,r30,r26
	ea = ctx.r30.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// bdnz 0x881e7768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7768;
loc_881E77DC:
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7820
	if (!ctx.cr6.lt) goto loc_881E7820;
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r11,r27,r22
	ctx.r11.u64 = ctx.r27.u64 + ctx.r22.u64;
	// subf r31,r22,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r22.u64;
	// subf r30,r22,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_881E77F8:
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r3,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r3,r3,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r3.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e77f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E77F8;
loc_881E7820:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// add r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 + ctx.r9.u64;
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
loc_881E7834:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r21,r21,r8
	ctx.r21.u64 = ctx.r21.u64 + ctx.r8.u64;
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881e7148
	if (ctx.cr6.lt) goto loc_881E7148;
loc_881E7844:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restvmx_113) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_124) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restfpr_15) {
	REX_FUNC_PROLOGUE();
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f15.u64 = REX_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F0928) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r11,24320
	ctx.r30.s64 = ctx.r11.s64 + 24320;
	// b 0x881f0970
	goto loc_881F0970;
loc_881F0970:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x881ef720
	ctx.lr = 0x881F0984;
	sub_881EF720(ctx, base);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r30,r10,24320
	ctx.r30.s64 = ctx.r10.s64 + 24320;
	// addi r10,r11,24324
	ctx.r10.s64 = ctx.r11.s64 + 24324;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881F1590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881F1598;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x881f15dc
	if (!ctx.cr6.eq) goto loc_881F15DC;
	// bl 0x88052a00
	ctx.lr = 0x881F15BC;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F15C8;
	sub_880529C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f16ac
	goto loc_881F16AC;
loc_881F15DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881f15f4
	if (ctx.cr6.lt) goto loc_881F15F4;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881f1618
	if (ctx.cr6.lt) goto loc_881F1618;
loc_881F15F4:
	// bl 0x88052a00
	ctx.lr = 0x881F15F8;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880529c8
	ctx.lr = 0x881F1604;
	sub_880529C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F1610;
	sub_880523E8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f16ac
	goto loc_881F16AC;
loc_881F1618:
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
	// beq 0x881f15f4
	if (ctx.cr0.eq) goto loc_881F15F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1b20
	ctx.lr = 0x881F164C;
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
	// beq 0x881f167c
	if (ctx.cr0.eq) goto loc_881F167C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f1348
	ctx.lr = 0x881F1674;
	sub_881F1348(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x881f169c
	goto loc_881F169C;
loc_881F167C:
	// bl 0x880529c8
	ctx.lr = 0x881F1680;
	sub_880529C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x88052a00
	ctx.lr = 0x881F168C;
	sub_88052A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_881F169C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x881f16d4
	ctx.lr = 0x881F16A8;
	sub_881F16D4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F16AC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881FCBB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// stvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v126,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v125,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v124,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v123,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v122,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v121,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v120,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v119,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v118,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v117,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v116,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v115,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v114,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v113,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v112,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v111,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v110,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v109,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v108,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v107,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v106,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v105,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v104,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v103,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v102,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v101,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v100,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v99,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v98,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v97,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v96,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v95,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v94,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v93,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v92,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v91,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v90,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v89,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v88,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v87,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v86,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v85,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v84,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v83,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v82,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v81,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v80,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v79,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v78,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v77,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v76,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v75,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v74,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v73,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v72,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v71,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v70,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v69,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v68,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v67,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v66,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v64,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v54,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v39,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v37,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v126,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v125,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v124,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v123,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v122,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v121,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v120,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v119,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v118,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v117,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v116,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v115,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v114,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v113,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v112,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v111,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v110,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v109,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v108,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v107,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v106,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v105,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v104,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v103,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v102,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v101,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v100,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v99,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v98,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v97,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v96,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v95,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v94,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v93,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v92,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v91,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v90,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v89,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v88,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v87,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v86,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v85,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v84,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v83,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v82,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v81,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v80,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v79,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v78,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v77,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v76,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v75,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v74,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v73,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v65,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v64,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v51,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v49,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v48,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v46,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v43,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v41,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v40,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v38,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v37,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v36,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v35,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v32,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8821DA20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821DA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821DA4C;
	sub_8821B4B8(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821bd90
	ctx.lr = 0x8821DA68;
	sub_8821BD90(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821E278;
	__savegprlr_29(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821E29C;
	sub_8821B4B8(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821c030
	ctx.lr = 0x8821E2B8;
	sub_8821C030(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E2C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,96
	ctx.r7.s64 = 96;
	// li r8,144
	ctx.r8.s64 = 144;
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// li r9,192
	ctx.r9.s64 = 192;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r11,288
	ctx.r11.s64 = 288;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8821E488) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x8821e5c4
	if (!ctx.cr6.eq) goto loc_8821E5C4;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,4
	ctx.r31.s64 = 4;
	// vperm128 v63,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// lwz r9,25784(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 25784);
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v62,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vperm128 v59,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v58,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r5,r31
	ea = (ctx.r5.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v57,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v54,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v62,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v53,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r3,0
	ctx.r3.s64 = 0;
	// vperm128 v52,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v53,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v51,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v48,v49,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v62,v50,v51,v3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vperm128 v47,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vperm128 v46,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v47,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r8,r31
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v45,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v63,v44,v45,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v43,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v42,v41,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v40,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v43,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8821E5C4:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v38,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v35,v39,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v36,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v34,v38,v36,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v35,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v34,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v32,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v32,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v60,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v61,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v60,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v56,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v57,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v56,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v53,v55,v54,v4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v52,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v52,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v49,v51,v50,v3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v48,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v45,v47,v46,v2
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v44,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v44,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v41,v42,v43,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v40,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v36,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v39,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v37,v39,v38,v7
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v37,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_882243B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88222908
	sub_88222908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88224620) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88224628;
	__savegprlr_14(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88224ad0
	if (ctx.cr6.eq) goto loc_88224AD0;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x8822490c
	if (ctx.cr6.eq) goto loc_8822490C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224898
	if (!ctx.cr6.gt) goto loc_88224898;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	ctx.r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	ctx.r15.s64 = 144;
	// li r16,192
	ctx.r16.s64 = 192;
	// li r17,240
	ctx.r17.s64 = 240;
	// li r18,-80
	ctx.r18.s64 = -80;
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r20,64
	ctx.r20.s64 = 64;
	// li r21,112
	ctx.r21.s64 = 112;
	// li r22,160
	ctx.r22.s64 = 160;
	// li r23,208
	ctx.r23.s64 = 208;
	// li r24,256
	ctx.r24.s64 = 256;
loc_882246C0:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	ctx.r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	ctx.r27.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	ctx.r25.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (ctx.r29.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x882246c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882246C0;
	// lwz r28,1068(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88224898:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224b90
	if (!ctx.cr6.gt) goto loc_88224B90;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_882248CC:
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = ctx.r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// sth r3,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x882248cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882248CC;
	// b 0x88224b90
	goto loc_88224B90;
loc_8822490C:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	ctx.r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	ctx.r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r5,4
	ctx.r5.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88224A90:
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88224a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88224A90;
	// b 0x88224b90
	goto loc_88224B90;
loc_88224AD0:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	ctx.r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88224B90:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88223088
	ctx.lr = 0x88224BA8;
	sub_88223088(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

