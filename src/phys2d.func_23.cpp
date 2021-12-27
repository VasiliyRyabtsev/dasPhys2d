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
void Module_phys2d::initFunctions_23() {
	using _method_349 = das::das_call_member< void (b2RevoluteJoint::*)(float),&b2RevoluteJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_349)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float) , &b2RevoluteJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_350 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_350)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_351 = das::das_call_member< void (b2RevoluteJoint::*)(float),&b2RevoluteJoint::SetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_351)>(*this,lib,"SetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float) , &b2RevoluteJoint::SetMaxMotorTorque >::invoke")
		->args({"self","torque"});
	using _method_352 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetMaxMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_352)>(*this,lib,"GetMaxMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetMaxMotorTorque >::invoke")
		->args({"self"});
	using _method_353 = das::das_call_member< float (b2RevoluteJoint::*)(float) const,&b2RevoluteJoint::GetMotorTorque >;
	addExtern<DAS_CALL_METHOD(_method_353)>(*this,lib,"GetMotorTorque",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)(float) const , &b2RevoluteJoint::GetMotorTorque >::invoke")
		->args({"self","inv_dt"});
	addCtorAndUsing<b2WeldJointDef>(*this,lib,"b2WeldJointDef","b2WeldJointDef");
	using _method_354 = das::das_call_member< void (b2WeldJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2WeldJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_354)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WeldJointDef::*)(b2Body *,b2Body *,const b2Vec2 &) , &b2WeldJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	using _method_355 = das::das_call_member< const b2Vec2 & (b2WeldJoint::*)() const,&b2WeldJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_355), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WeldJoint::*)() const , &b2WeldJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_356 = das::das_call_member< const b2Vec2 & (b2WeldJoint::*)() const,&b2WeldJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_356), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WeldJoint::*)() const , &b2WeldJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_357 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_357)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_358 = das::das_call_member< void (b2WeldJoint::*)(float),&b2WeldJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_358)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2WeldJoint::*)(float) , &b2WeldJoint::SetStiffness >::invoke")
		->args({"self","hz"});
	using _method_359 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_359)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_360 = das::das_call_member< void (b2WeldJoint::*)(float),&b2WeldJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_360)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2WeldJoint::*)(float) , &b2WeldJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_361 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_361)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetDamping >::invoke")
		->args({"self"});
	addCtorAndUsing<b2WheelJointDef>(*this,lib,"b2WheelJointDef","b2WheelJointDef");
	using _method_362 = das::das_call_member< void (b2WheelJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2WheelJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_362)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WheelJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2WheelJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor","axis"});
	using _method_363 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_363), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_364 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_364), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_365 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAxisA >;
	addExtern<DAS_CALL_METHOD(_method_365), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAxisA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAxisA >::invoke")
		->args({"self"});
	using _method_366 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetJointTranslation >;
	addExtern<DAS_CALL_METHOD(_method_366)>(*this,lib,"GetJointTranslation",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetJointTranslation >::invoke")
		->args({"self"});
}
}

