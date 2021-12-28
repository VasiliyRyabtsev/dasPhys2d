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
	using _method_434 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_434)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_435 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_435)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_436 = das::das_call_member< void (b2WheelJoint::*)(float,float),&b2WheelJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_436)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float,float) , &b2WheelJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_437 = das::das_call_member< bool (b2WheelJoint::*)() const,&b2WheelJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_437)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2WheelJoint::*)() const , &b2WheelJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_438 = das::das_call_member< void (b2WheelJoint::*)(bool),&b2WheelJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_438)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(bool) , &b2WheelJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_439 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_439)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_440 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_440)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_441 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_441)>(*this,lib,"SetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetMaxMotorTorque >::invoke")
		->args({"self","torque"});
	using _method_442 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_442)>(*this,lib,"GetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetMaxMotorTorque >::invoke")
		->args({"self"});
	using _method_443 = das::das_call_member< float (b2WheelJoint::*)(float) const,&b2WheelJoint::GetMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_443)>(*this,lib,"GetMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)(float) const , &b2WheelJoint::GetMotorTorque >::invoke")
		->args({"self","inv_dt"});
	using _method_444 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_444)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_445 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_445)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_446 = das::das_call_member< void (b2WheelJoint::*)(float),&b2WheelJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_446)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2WheelJoint::*)(float) , &b2WheelJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_447 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_447)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetDamping >::invoke")
		->args({"self"});
	addExtern< void (*)(b2WheelJoint &) , _phys2d_virtual_86_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_86_Dump")
		->args({"self"});
	addExtern< void (*)(const b2WheelJoint &,b2Draw *) , _phys2d_virtual_87_Draw >(*this,lib,"Draw",SideEffects::worstDefault,"_phys2d_virtual_87_Draw")
		->args({"self","draw"});
}
}

