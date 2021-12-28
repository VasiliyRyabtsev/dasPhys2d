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
void Module_phys2d::initFunctions_26() {
	using _method_415 = das::das_call_member< void (b2WeldJoint::*)(float),&b2WeldJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_415)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2WeldJoint::*)(float) , &b2WeldJoint::SetStiffness >::invoke")
		->args({"self","hz"});
	using _method_416 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_416)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_417 = das::das_call_member< void (b2WeldJoint::*)(float),&b2WeldJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_417)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2WeldJoint::*)(float) , &b2WeldJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_418 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_418)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetDamping >::invoke")
		->args({"self"});
	addExtern< void (*)(b2WeldJoint &) , _phys2d_virtual_81_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_81_Dump")
		->args({"self"});
	addCtorAndUsing<b2WheelJointDef>(*this,lib,"b2WheelJointDef","b2WheelJointDef");
	using _method_420 = das::das_call_member< void (b2WheelJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2WheelJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_420)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WheelJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2WheelJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor","axis"});
	addExtern< b2Vec2 (*)(const b2WheelJoint &) , _phys2d_virtual_82_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_82_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2WheelJoint &) , _phys2d_virtual_83_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_83_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2WheelJoint &,float) , _phys2d_virtual_84_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_84_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2WheelJoint &,float) , _phys2d_virtual_85_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_85_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_425 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_425), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_426 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_426), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_427 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAxisA >;
	addExtern<DAS_CALL_METHOD(_method_427), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAxisA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAxisA >::invoke")
		->args({"self"});
	using _method_428 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointTranslation >;
	addExtern<DAS_CALL_METHOD(_method_428)>(*this,lib,"GetJointTranslation",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointTranslation >::invoke")
		->args({"self"});
	using _method_429 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointLinearSpeed >;
	addExtern<DAS_CALL_METHOD(_method_429)>(*this,lib,"GetJointLinearSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointLinearSpeed >::invoke")
		->args({"self"});
	using _method_430 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointAngle >;
	addExtern<DAS_CALL_METHOD(_method_430)>(*this,lib,"GetJointAngle",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointAngle >::invoke")
		->args({"self"});
	using _method_431 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointAngularSpeed >;
	addExtern<DAS_CALL_METHOD(_method_431)>(*this,lib,"GetJointAngularSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointAngularSpeed >::invoke")
		->args({"self"});
	using _method_432 = das::das_call_member< bool (b2WheelJoint::*)() const,&b2WheelJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_432)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2WheelJoint::*)() const , &b2WheelJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_433 = das::das_call_member< void (b2WheelJoint::*)(bool),&b2WheelJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_433)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(bool) , &b2WheelJoint::EnableLimit >::invoke")
		->args({"self","flag"});
}
}

