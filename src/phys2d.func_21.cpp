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
void Module_phys2d::initFunctions_21() {
	addCtorAndUsing<b2MotorJointDef>(*this,lib,"b2MotorJointDef","b2MotorJointDef");
	using _method_319 = das::das_call_member< void (b2MotorJointDef::*)(b2Body *,b2Body *),&b2MotorJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_319)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2MotorJointDef::*)(b2Body *,b2Body *) , &b2MotorJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB"});
	addExtern< b2Vec2 (*)(const b2MotorJoint &) , _phys2d_virtual_48_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_48_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2MotorJoint &) , _phys2d_virtual_49_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_49_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2MotorJoint &,float) , _phys2d_virtual_50_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_50_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2MotorJoint &,float) , _phys2d_virtual_51_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_51_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_324 = das::das_call_member< void (b2MotorJoint::*)(const b2Vec2 &),&b2MotorJoint::SetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_324)>(*this,lib,"SetLinearOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(const b2Vec2 &) , &b2MotorJoint::SetLinearOffset >::invoke")
		->args({"self","linearOffset"});
	using _method_325 = das::das_call_member< const b2Vec2 & (b2MotorJoint::*)() const,&b2MotorJoint::GetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_325), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearOffset",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MotorJoint::*)() const , &b2MotorJoint::GetLinearOffset >::invoke")
		->args({"self"});
	using _method_326 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_326)>(*this,lib,"SetAngularOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetAngularOffset >::invoke")
		->args({"self","angularOffset"});
	using _method_327 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_327)>(*this,lib,"GetAngularOffset",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetAngularOffset >::invoke")
		->args({"self"});
	using _method_328 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_328)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_329 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_329)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_330 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_330)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_331 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_331)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetMaxTorque >::invoke")
		->args({"self"});
	using _method_332 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_332)>(*this,lib,"SetCorrectionFactor",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetCorrectionFactor >::invoke")
		->args({"self","factor"});
	using _method_333 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_333)>(*this,lib,"GetCorrectionFactor",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetCorrectionFactor >::invoke")
		->args({"self"});
	addExtern< void (*)(b2MotorJoint &) , _phys2d_virtual_52_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_52_Dump")
		->args({"self"});
	addCtorAndUsing<b2MouseJointDef>(*this,lib,"b2MouseJointDef","b2MouseJointDef");
	addExtern< b2Vec2 (*)(const b2MouseJoint &) , _phys2d_virtual_53_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_53_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2MouseJoint &) , _phys2d_virtual_54_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_54_GetAnchorB")
		->args({"self"});
}
}

