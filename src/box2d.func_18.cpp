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
void Module_box2d::initFunctions_18() {
	using _method_299 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_299), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_300 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_300), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_301 = das::das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAxisA >;
	addExtern<DAS_CALL_METHOD(_method_301), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAxisA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLocalAxisA >::invoke")
		->args({"self"});
	using _method_302 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_302)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_303 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointTranslation >;
	addExtern<DAS_CALL_METHOD(_method_303)>(*this,lib,"GetJointTranslation",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointTranslation >::invoke")
		->args({"self"});
	using _method_304 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointSpeed >;
	addExtern<DAS_CALL_METHOD(_method_304)>(*this,lib,"GetJointSpeed",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetJointSpeed >::invoke")
		->args({"self"});
	using _method_305 = das::das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_305)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_306 = das::das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_306)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_307 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_307)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_308 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_308)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_309 = das::das_call_member< void (b2PrismaticJoint::*)(float,float),&b2PrismaticJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_309)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float,float),&b2PrismaticJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_310 = das::das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_310)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_311 = das::das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_311)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_312 = das::das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_312)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_313 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_313)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_314 = das::das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMaxMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_314)>(*this,lib,"SetMaxMotorForce",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMaxMotorForce >::invoke")
		->args({"self","force"});
	using _method_315 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMaxMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_315)>(*this,lib,"GetMaxMotorForce",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMaxMotorForce >::invoke")
		->args({"self"});
	using _method_316 = das::das_call_member< float (b2PrismaticJoint::*)(float) const,&b2PrismaticJoint::GetMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_316)>(*this,lib,"GetMotorForce",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)(float) const,&b2PrismaticJoint::GetMotorForce >::invoke")
		->args({"self","inv_dt"});
	using _method_317 = das::das_call_member< void (b2PulleyJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,float),&b2PulleyJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_317)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2PulleyJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,float),&b2PulleyJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","groundAnchorA","groundAnchorB","anchorA","anchorB","ratio"});
	using _method_318 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_318),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetGroundAnchorA",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorA >::invoke")
		->args({"self"});
}
}

