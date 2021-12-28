// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "phys2d.h"
#include "need_phys2d.h"
namespace das {
#include "phys2d.func.aot.decl.inc"
void Module_phys2d::initFunctions_22() {
	using _method_339 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_339)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const , &b2MouseJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_340 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_340)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float) , &b2MouseJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_341 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_341)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const , &b2MouseJoint::GetDamping >::invoke")
		->args({"self"});
	addExtern< void (*)(b2MouseJoint &) , _phys2d_virtual_57_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_57_Dump")
		->args({"self"});
	addExtern< void (*)(b2MouseJoint &,const b2Vec2 &) , _phys2d_virtual_58_ShiftOrigin >(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"_phys2d_virtual_58_ShiftOrigin")
		->args({"self","newOrigin"});
	addCtorAndUsing<b2PrismaticJointDef>(*this,lib,"b2PrismaticJointDef","b2PrismaticJointDef");
	using _method_344 = das::das_call_member< void (b2PrismaticJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2PrismaticJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_344)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2PrismaticJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor","axis"});
	addExtern< b2Vec2 (*)(const b2PrismaticJoint &) , _phys2d_virtual_59_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_59_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2PrismaticJoint &) , _phys2d_virtual_60_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_60_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2PrismaticJoint &,float) , _phys2d_virtual_61_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_61_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2PrismaticJoint &,float) , _phys2d_virtual_62_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_62_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_349 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_349), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_350 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_350), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_351 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAxisA >;
	addExtern<DAS_CALL_METHOD(_method_351), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAxisA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLocalAxisA >::invoke")
		->args({"self"});
	using _method_352 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_352)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_353 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointTranslation >;
	addExtern<DAS_CALL_METHOD(_method_353)>(*this,lib,"GetJointTranslation",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetJointTranslation >::invoke")
		->args({"self"});
	using _method_354 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointSpeed >;
	addExtern<DAS_CALL_METHOD(_method_354)>(*this,lib,"GetJointSpeed",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetJointSpeed >::invoke")
		->args({"self"});
	using _method_355 = das::das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_355)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2PrismaticJoint::*)() const , &b2PrismaticJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_356 = das::das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_356)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(bool) , &b2PrismaticJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_357 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_357)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLowerLimit >::invoke")
		->args({"self"});
}
}

