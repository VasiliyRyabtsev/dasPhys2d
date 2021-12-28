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
	using _method_320 = das::das_call_member< const b2Vec2 & (b2MotorJoint::*)() const,&b2MotorJoint::GetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_320), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearOffset",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MotorJoint::*)() const , &b2MotorJoint::GetLinearOffset >::invoke")
		->args({"self"});
	using _method_321 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_321)>(*this,lib,"SetAngularOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetAngularOffset >::invoke")
		->args({"self","angularOffset"});
	using _method_322 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_322)>(*this,lib,"GetAngularOffset",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetAngularOffset >::invoke")
		->args({"self"});
	using _method_323 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_323)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_324 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_324)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_325 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_325)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_326 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_326)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetMaxTorque >::invoke")
		->args({"self"});
	using _method_327 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_327)>(*this,lib,"SetCorrectionFactor",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetCorrectionFactor >::invoke")
		->args({"self","factor"});
	using _method_328 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_328)>(*this,lib,"GetCorrectionFactor",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetCorrectionFactor >::invoke")
		->args({"self"});
	addExtern< void (*)(b2MotorJoint &) , _phys2d_virtual_52_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_52_Dump")
		->args({"self"});
	addCtorAndUsing<b2MouseJointDef>(*this,lib,"b2MouseJointDef","b2MouseJointDef");
	addExtern< b2Vec2 (*)(const b2MouseJoint &) , _phys2d_virtual_53_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_53_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2MouseJoint &) , _phys2d_virtual_54_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_54_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2MouseJoint &,float) , _phys2d_virtual_55_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_55_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2MouseJoint &,float) , _phys2d_virtual_56_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_56_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_334 = das::das_call_member< void (b2MouseJoint::*)(const b2Vec2 &),&b2MouseJoint::SetTarget >;
	addExtern<DAS_CALL_METHOD(_method_334)>(*this,lib,"SetTarget",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(const b2Vec2 &) , &b2MouseJoint::SetTarget >::invoke")
		->args({"self","target"});
	using _method_335 = das::das_call_member< const b2Vec2 & (b2MouseJoint::*)() const,&b2MouseJoint::GetTarget >;
	addExtern<DAS_CALL_METHOD(_method_335), SimNode_ExtFuncCallRef>(*this,lib,"GetTarget",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MouseJoint::*)() const , &b2MouseJoint::GetTarget >::invoke")
		->args({"self"});
	using _method_336 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_336)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float) , &b2MouseJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_337 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_337)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const , &b2MouseJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_338 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_338)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float) , &b2MouseJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
}
}

