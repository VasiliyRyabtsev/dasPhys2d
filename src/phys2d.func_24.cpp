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
void Module_phys2d::initFunctions_24() {
	using _method_367 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointLinearSpeed >;
	addExtern<DAS_CALL_METHOD(_method_367)>(*this,lib,"GetJointLinearSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointLinearSpeed >::invoke")
		->args({"self"});
	using _method_368 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointAngle >;
	addExtern<DAS_CALL_METHOD(_method_368)>(*this,lib,"GetJointAngle",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointAngle >::invoke")
		->args({"self"});
	using _method_369 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointAngularSpeed >;
	addExtern<DAS_CALL_METHOD(_method_369)>(*this,lib,"GetJointAngularSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointAngularSpeed >::invoke")
		->args({"self"});
	using _method_370 = das::das_call_member< bool (b2WheelJoint::*)() const,&b2WheelJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_370)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2WheelJoint::*)() const , &b2WheelJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_371 = das::das_call_member< void (b2WheelJoint::*)(bool),&b2WheelJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_371)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(bool) , &b2WheelJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_372 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_372)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_373 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_373)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_374 = das::das_call_member< void (b2WheelJoint::*)(float,float),&b2WheelJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_374)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float,float) , &b2WheelJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_375 = das::das_call_member< bool (b2WheelJoint::*)() const,&b2WheelJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_375)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2WheelJoint::*)() const , &b2WheelJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_376 = das::das_call_member< void (b2WheelJoint::*)(bool),&b2WheelJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_376)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(bool) , &b2WheelJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_377 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_377)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_378 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_378)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_379 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_379)>(*this,lib,"SetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetMaxMotorTorque >::invoke")
		->args({"self","torque"});
	using _method_380 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_380)>(*this,lib,"GetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetMaxMotorTorque >::invoke")
		->args({"self"});
	using _method_381 = das::das_call_member< float (b2WheelJoint::*)(float) const,&b2WheelJoint::GetMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_381)>(*this,lib,"GetMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)(float) const , &b2WheelJoint::GetMotorTorque >::invoke")
		->args({"self","inv_dt"});
	using _method_382 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_382)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_383 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_383)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_384 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_384)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_385 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_385)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetDamping >::invoke")
		->args({"self"});
}
}

