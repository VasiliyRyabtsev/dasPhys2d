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
void Module_phys2d::initFunctions_27() {
	using _method_432 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAxisA >;
	addExtern<DAS_CALL_METHOD(_method_432), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAxisA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAxisA >::invoke")
		->args({"self"});
	using _method_433 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointTranslation >;
	addExtern<DAS_CALL_METHOD(_method_433)>(*this,lib,"GetJointTranslation",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointTranslation >::invoke")
		->args({"self"});
	using _method_434 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointLinearSpeed >;
	addExtern<DAS_CALL_METHOD(_method_434)>(*this,lib,"GetJointLinearSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointLinearSpeed >::invoke")
		->args({"self"});
	using _method_435 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointAngle >;
	addExtern<DAS_CALL_METHOD(_method_435)>(*this,lib,"GetJointAngle",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointAngle >::invoke")
		->args({"self"});
	using _method_436 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointAngularSpeed >;
	addExtern<DAS_CALL_METHOD(_method_436)>(*this,lib,"GetJointAngularSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointAngularSpeed >::invoke")
		->args({"self"});
	using _method_437 = das::das_call_member< bool (b2WheelJoint::*)() const,&b2WheelJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_437)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2WheelJoint::*)() const , &b2WheelJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_438 = das::das_call_member< void (b2WheelJoint::*)(bool),&b2WheelJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_438)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(bool) , &b2WheelJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_439 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_439)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_440 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_440)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_441 = das::das_call_member< void (b2WheelJoint::*)(float,float),&b2WheelJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_441)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float,float) , &b2WheelJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_442 = das::das_call_member< bool (b2WheelJoint::*)() const,&b2WheelJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_442)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2WheelJoint::*)() const , &b2WheelJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_443 = das::das_call_member< void (b2WheelJoint::*)(bool),&b2WheelJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_443)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(bool) , &b2WheelJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_444 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_444)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_445 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_445)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_446 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_446)>(*this,lib,"SetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetMaxMotorTorque >::invoke")
		->args({"self","torque"});
	using _method_447 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_447)>(*this,lib,"GetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetMaxMotorTorque >::invoke")
		->args({"self"});
	using _method_448 = das::das_call_member< float (b2WheelJoint::*)(float) const,&b2WheelJoint::GetMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_448)>(*this,lib,"GetMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)(float) const , &b2WheelJoint::GetMotorTorque >::invoke")
		->args({"self","inv_dt"});
	using _method_449 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_449)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_450 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_450)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_451 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_451)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetDamping >::invoke")
		->args({"self","damping"});
}
}

