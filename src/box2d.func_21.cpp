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
void Module_box2d::initFunctions_21() {
	using _method_311 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_311), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_312 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAxisA >;
	addExtern<DAS_CALL_METHOD(_method_312), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAxisA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLocalAxisA >::invoke")
		->args({"self"});
	using _method_313 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_313)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_314 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointTranslation >;
	addExtern<DAS_CALL_METHOD(_method_314)>(*this,lib,"GetJointTranslation",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetJointTranslation >::invoke")
		->args({"self"});
	using _method_315 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointSpeed >;
	addExtern<DAS_CALL_METHOD(_method_315)>(*this,lib,"GetJointSpeed",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetJointSpeed >::invoke")
		->args({"self"});
	using _method_316 = das::das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_316)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2PrismaticJoint::*)() const , &b2PrismaticJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_317 = das::das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_317)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(bool) , &b2PrismaticJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_318 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_318)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_319 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_319)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_320 = das::das_call_member< void (b2PrismaticJoint::*)(float,float),&b2PrismaticJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_320)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float,float) , &b2PrismaticJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_321 = das::das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_321)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2PrismaticJoint::*)() const , &b2PrismaticJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_322 = das::das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_322)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(bool) , &b2PrismaticJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_323 = das::das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_323)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float) , &b2PrismaticJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_324 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_324)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_325 = das::das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMaxMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_325)>(*this,lib,"SetMaxMotorForce",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float) , &b2PrismaticJoint::SetMaxMotorForce >::invoke")
		->args({"self","force"});
	using _method_326 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMaxMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_326)>(*this,lib,"GetMaxMotorForce",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetMaxMotorForce >::invoke")
		->args({"self"});
	using _method_327 = das::das_call_member< float (b2PrismaticJoint::*)(float) const,&b2PrismaticJoint::GetMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_327)>(*this,lib,"GetMotorForce",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)(float) const , &b2PrismaticJoint::GetMotorForce >::invoke")
		->args({"self","inv_dt"});
	addCtorAndUsing<b2PulleyJointDef>(*this,lib,"b2PulleyJointDef","b2PulleyJointDef");
	using _method_328 = das::das_call_member< void (b2PulleyJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,float),&b2PulleyJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_328)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2PulleyJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,float) , &b2PulleyJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","groundAnchorA","groundAnchorB","anchorA","anchorB","ratio"});
	using _method_329 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_329),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetGroundAnchorA",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const , &b2PulleyJoint::GetGroundAnchorA >::invoke")
		->args({"self"});
}
}

