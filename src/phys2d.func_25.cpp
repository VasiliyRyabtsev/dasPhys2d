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
void Module_phys2d::initFunctions_25() {
	using _method_394 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointAngle >;
	addExtern<DAS_CALL_METHOD(_method_394)>(*this,lib,"GetJointAngle",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetJointAngle >::invoke")
		->args({"self"});
	using _method_395 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointSpeed >;
	addExtern<DAS_CALL_METHOD(_method_395)>(*this,lib,"GetJointSpeed",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetJointSpeed >::invoke")
		->args({"self"});
	using _method_396 = das::das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_396)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2RevoluteJoint::*)() const , &b2RevoluteJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_397 = das::das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_397)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(bool) , &b2RevoluteJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_398 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_398)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_399 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_399)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_400 = das::das_call_member< void (b2RevoluteJoint::*)(float,float),&b2RevoluteJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_400)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float,float) , &b2RevoluteJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_401 = das::das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_401)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2RevoluteJoint::*)() const , &b2RevoluteJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_402 = das::das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_402)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(bool) , &b2RevoluteJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_403 = das::das_call_member< void (b2RevoluteJoint::*)(float),&b2RevoluteJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_403)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float) , &b2RevoluteJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_404 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_404)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_405 = das::das_call_member< void (b2RevoluteJoint::*)(float),&b2RevoluteJoint::SetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_405)>(*this,lib,"SetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float) , &b2RevoluteJoint::SetMaxMotorTorque >::invoke")
		->args({"self","torque"});
	using _method_406 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_406)>(*this,lib,"GetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetMaxMotorTorque >::invoke")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2RevoluteJoint &,float) , _phys2d_virtual_73_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_73_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2RevoluteJoint &,float) , _phys2d_virtual_74_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_74_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_409 = das::das_call_member< float (b2RevoluteJoint::*)(float) const,&b2RevoluteJoint::GetMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_409)>(*this,lib,"GetMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)(float) const , &b2RevoluteJoint::GetMotorTorque >::invoke")
		->args({"self","inv_dt"});
	addExtern< void (*)(b2RevoluteJoint &) , _phys2d_virtual_75_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_75_Dump")
		->args({"self"});
	addExtern< void (*)(const b2RevoluteJoint &,b2Draw *) , _phys2d_virtual_76_Draw >(*this,lib,"Draw",SideEffects::worstDefault,"_phys2d_virtual_76_Draw")
		->args({"self","draw"});
	addCtorAndUsing<b2WeldJointDef>(*this,lib,"b2WeldJointDef","b2WeldJointDef");
	using _method_412 = das::das_call_member< void (b2WeldJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2WeldJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_412)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WeldJointDef::*)(b2Body *,b2Body *,const b2Vec2 &) , &b2WeldJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
}
}

