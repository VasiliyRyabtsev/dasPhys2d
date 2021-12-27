// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "box2d.h"
#include "need_box2d.h"
namespace das {
void Module_box2d::initFunctions_19() {
	using _method_276 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_276)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_277 = das::das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_277)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_278 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_278)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetDamping >::invoke")
		->args({"self"});
	addCtorAndUsing<b2FrictionJointDef>(*this,lib,"b2FrictionJointDef","b2FrictionJointDef");
	using _method_279 = das::das_call_member< void (b2FrictionJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2FrictionJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_279)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2FrictionJointDef::*)(b2Body *,b2Body *,const b2Vec2 &) , &b2FrictionJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	using _method_280 = das::das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_280), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const , &b2FrictionJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_281 = das::das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_281), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const , &b2FrictionJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_282 = das::das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_282)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2FrictionJoint::*)(float) , &b2FrictionJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_283 = das::das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_283)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2FrictionJoint::*)() const , &b2FrictionJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_284 = das::das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_284)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2FrictionJoint::*)(float) , &b2FrictionJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_285 = das::das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_285)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2FrictionJoint::*)() const , &b2FrictionJoint::GetMaxTorque >::invoke")
		->args({"self"});
	addCtorAndUsing<b2GearJointDef>(*this,lib,"b2GearJointDef","b2GearJointDef");
	using _method_286 = das::das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint1 >;
	addExtern<DAS_CALL_METHOD(_method_286)>(*this,lib,"GetJoint1",SideEffects::worstDefault,"das_call_member< b2Joint * (b2GearJoint::*)() , &b2GearJoint::GetJoint1 >::invoke")
		->args({"self"});
	using _method_287 = das::das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint2 >;
	addExtern<DAS_CALL_METHOD(_method_287)>(*this,lib,"GetJoint2",SideEffects::worstDefault,"das_call_member< b2Joint * (b2GearJoint::*)() , &b2GearJoint::GetJoint2 >::invoke")
		->args({"self"});
	using _method_288 = das::das_call_member< void (b2GearJoint::*)(float),&b2GearJoint::SetRatio >;
	addExtern<DAS_CALL_METHOD(_method_288)>(*this,lib,"SetRatio",SideEffects::worstDefault,"das_call_member< void (b2GearJoint::*)(float) , &b2GearJoint::SetRatio >::invoke")
		->args({"self","ratio"});
	using _method_289 = das::das_call_member< float (b2GearJoint::*)() const,&b2GearJoint::GetRatio >;
	addExtern<DAS_CALL_METHOD(_method_289)>(*this,lib,"GetRatio",SideEffects::worstDefault,"das_call_member< float (b2GearJoint::*)() const , &b2GearJoint::GetRatio >::invoke")
		->args({"self"});
	addCtorAndUsing<b2MotorJointDef>(*this,lib,"b2MotorJointDef","b2MotorJointDef");
	using _method_290 = das::das_call_member< void (b2MotorJointDef::*)(b2Body *,b2Body *),&b2MotorJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_290)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2MotorJointDef::*)(b2Body *,b2Body *) , &b2MotorJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB"});
	using _method_291 = das::das_call_member< void (b2MotorJoint::*)(const b2Vec2 &),&b2MotorJoint::SetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_291)>(*this,lib,"SetLinearOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(const b2Vec2 &) , &b2MotorJoint::SetLinearOffset >::invoke")
		->args({"self","linearOffset"});
	using _method_292 = das::das_call_member< const b2Vec2 & (b2MotorJoint::*)() const,&b2MotorJoint::GetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_292), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearOffset",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MotorJoint::*)() const , &b2MotorJoint::GetLinearOffset >::invoke")
		->args({"self"});
}
}

