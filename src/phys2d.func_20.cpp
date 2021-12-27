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
void Module_phys2d::initFunctions_20() {
	using _method_293 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_293)>(*this,lib,"SetAngularOffset",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetAngularOffset >::invoke")
		->args({"self","angularOffset"});
	using _method_294 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetAngularOffset >;
	addExtern<DAS_CALL_METHOD(_method_294)>(*this,lib,"GetAngularOffset",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetAngularOffset >::invoke")
		->args({"self"});
	using _method_295 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_295)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_296 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_296)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_297 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_297)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_298 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_298)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetMaxTorque >::invoke")
		->args({"self"});
	using _method_299 = das::das_call_member< void (b2MotorJoint::*)(float),&b2MotorJoint::SetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_299)>(*this,lib,"SetCorrectionFactor",SideEffects::worstDefault,"das_call_member< void (b2MotorJoint::*)(float) , &b2MotorJoint::SetCorrectionFactor >::invoke")
		->args({"self","factor"});
	using _method_300 = das::das_call_member< float (b2MotorJoint::*)() const,&b2MotorJoint::GetCorrectionFactor >;
	addExtern<DAS_CALL_METHOD(_method_300)>(*this,lib,"GetCorrectionFactor",SideEffects::worstDefault,"das_call_member< float (b2MotorJoint::*)() const , &b2MotorJoint::GetCorrectionFactor >::invoke")
		->args({"self"});
	addCtorAndUsing<b2MouseJointDef>(*this,lib,"b2MouseJointDef","b2MouseJointDef");
	using _method_301 = das::das_call_member< void (b2MouseJoint::*)(const b2Vec2 &),&b2MouseJoint::SetTarget >;
	addExtern<DAS_CALL_METHOD(_method_301)>(*this,lib,"SetTarget",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(const b2Vec2 &) , &b2MouseJoint::SetTarget >::invoke")
		->args({"self","target"});
	using _method_302 = das::das_call_member< const b2Vec2 & (b2MouseJoint::*)() const,&b2MouseJoint::GetTarget >;
	addExtern<DAS_CALL_METHOD(_method_302), SimNode_ExtFuncCallRef>(*this,lib,"GetTarget",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2MouseJoint::*)() const , &b2MouseJoint::GetTarget >::invoke")
		->args({"self"});
	using _method_303 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_303)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float) , &b2MouseJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_304 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_304)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const , &b2MouseJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_305 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_305)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float) , &b2MouseJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_306 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_306)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const , &b2MouseJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_307 = das::das_call_member< void (b2MouseJoint::*)(float),&b2MouseJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_307)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2MouseJoint::*)(float) , &b2MouseJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_308 = das::das_call_member< float (b2MouseJoint::*)() const,&b2MouseJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_308)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2MouseJoint::*)() const , &b2MouseJoint::GetDamping >::invoke")
		->args({"self"});
	addCtorAndUsing<b2PrismaticJointDef>(*this,lib,"b2PrismaticJointDef","b2PrismaticJointDef");
	using _method_309 = das::das_call_member< void (b2PrismaticJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2PrismaticJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_309)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2PrismaticJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor","axis"});
	using _method_310 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_310), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
}
}

