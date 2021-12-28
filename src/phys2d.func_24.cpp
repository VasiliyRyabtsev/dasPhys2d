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
void Module_phys2d::initFunctions_24() {
	addExtern< b2Vec2 (*)(const b2PulleyJoint &) , _phys2d_virtual_65_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_65_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2PulleyJoint &) , _phys2d_virtual_66_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_66_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2PulleyJoint &,float) , _phys2d_virtual_67_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_67_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2PulleyJoint &,float) , _phys2d_virtual_68_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_68_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_379 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_379)>(*this,lib,"GetGroundAnchorA",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const , &b2PulleyJoint::GetGroundAnchorA >::invoke")
		->args({"self"});
	using _method_380 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_380)>(*this,lib,"GetGroundAnchorB",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const , &b2PulleyJoint::GetGroundAnchorB >::invoke")
		->args({"self"});
	using _method_381 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthA >;
	addExtern<DAS_CALL_METHOD(_method_381)>(*this,lib,"GetLengthA",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetLengthA >::invoke")
		->args({"self"});
	using _method_382 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthB >;
	addExtern<DAS_CALL_METHOD(_method_382)>(*this,lib,"GetLengthB",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetLengthB >::invoke")
		->args({"self"});
	using _method_383 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetRatio >;
	addExtern<DAS_CALL_METHOD(_method_383)>(*this,lib,"GetRatio",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetRatio >::invoke")
		->args({"self"});
	using _method_384 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthA >;
	addExtern<DAS_CALL_METHOD(_method_384)>(*this,lib,"GetCurrentLengthA",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetCurrentLengthA >::invoke")
		->args({"self"});
	using _method_385 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthB >;
	addExtern<DAS_CALL_METHOD(_method_385)>(*this,lib,"GetCurrentLengthB",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetCurrentLengthB >::invoke")
		->args({"self"});
	addExtern< void (*)(b2PulleyJoint &) , _phys2d_virtual_69_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_69_Dump")
		->args({"self"});
	addExtern< void (*)(b2PulleyJoint &,const b2Vec2 &) , _phys2d_virtual_70_ShiftOrigin >(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"_phys2d_virtual_70_ShiftOrigin")
		->args({"self","newOrigin"});
	addCtorAndUsing<b2RevoluteJointDef>(*this,lib,"b2RevoluteJointDef","b2RevoluteJointDef");
	using _method_388 = das::das_call_member< void (b2RevoluteJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2RevoluteJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_388)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJointDef::*)(b2Body *,b2Body *,const b2Vec2 &) , &b2RevoluteJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	addExtern< b2Vec2 (*)(const b2RevoluteJoint &) , _phys2d_virtual_71_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_71_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2RevoluteJoint &) , _phys2d_virtual_72_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_72_GetAnchorB")
		->args({"self"});
	using _method_391 = das::das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_391), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_392 = das::das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_392), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_393 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_393)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetReferenceAngle >::invoke")
		->args({"self"});
}
}

