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
void Module_box2d::initFunctions_17() {
	using _method_279 = das::das_call_member< void (b2MotorJointDef::*)(b2Body *,b2Body *),&b2MotorJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_279)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2MotorJointDef::*)(b2Body *,b2Body *),&b2MotorJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB"});
	using _method_280 = das::das_call_member< void (b2MotorJoint::*)(const b2Vec2 &),&b2MotorJoint::SetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_280)>(*this,lib,"SetLinearOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(const b2Vec2 &),&b2MotorJoint::SetLinearOffset >::invoke")
		->args({"self","linearOffset"});
	using _method_281 = das::das_call_member< const b2Vec2 & (b2MotorJoint::*)() const,&b2MotorJoint::GetLinearOffset >;
	addExtern<DAS_CALL_METHOD(_method_281), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearOffset",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MotorJoint::*)() const,&b2MotorJoint::GetLinearOffset >::invoke")
		->args({"self"});
	using _method_282 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_282)>(*this,lib,"SetAngularOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetAngularOffset >::invoke")
		->args({"self","angularOffset"});
	using _method_283 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_283)>(*this,lib,"GetAngularOffset",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetAngularOffset >::invoke")
		->args({"self"});
	using _method_284 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_284)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_285 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_285)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_286 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_286)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_287 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_287)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxTorque >::invoke")
		->args({"self"});
	using _method_288 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_288)>(*this,lib,"SetCorrectionFactor",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetCorrectionFactor >::invoke")
		->args({"self","factor"});
	using _method_289 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_289)>(*this,lib,"GetCorrectionFactor",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetCorrectionFactor >::invoke")
		->args({"self"});
	using _method_290 = das::das_call_member< void (b2MouseJoint::*)(const b2Vec2 &),&b2MouseJoint::SetTarget >;
	addExtern<DAS_CALL_METHOD(_method_290)>(*this,lib,"SetTarget",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(const b2Vec2 &),&b2MouseJoint::SetTarget >::invoke")
		->args({"self","target"});
	using _method_291 = das::das_call_member< const b2Vec2 & (b2MouseJoint::*)() const,&b2MouseJoint::GetTarget >;
	addExtern<DAS_CALL_METHOD(_method_291), SimNode_ExtFuncCallRef>(*this,lib,"GetTarget",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MouseJoint::*)() const,&b2MouseJoint::GetTarget >::invoke")
		->args({"self"});
	using _method_292 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_292)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_293 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_293)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_294 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_294)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_295 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_295)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_296 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_296)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_297 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_297)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetDamping >::invoke")
		->args({"self"});
	using _method_298 = das::das_call_member< void (b2PrismaticJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2PrismaticJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_298)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2PrismaticJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor","axis"});
}
}

