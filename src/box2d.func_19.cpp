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
	using _method_319 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_319),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetGroundAnchorB",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorB >::invoke")
		->args({"self"});
	using _method_320 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthA >;
	addExtern<DAS_CALL_METHOD(_method_320)>(*this,lib,"GetLengthA",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthA >::invoke")
		->args({"self"});
	using _method_321 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthB >;
	addExtern<DAS_CALL_METHOD(_method_321)>(*this,lib,"GetLengthB",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthB >::invoke")
		->args({"self"});
	using _method_322 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetRatio >;
	addExtern<DAS_CALL_METHOD(_method_322)>(*this,lib,"GetRatio",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetRatio >::invoke")
		->args({"self"});
	using _method_323 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthA >;
	addExtern<DAS_CALL_METHOD(_method_323)>(*this,lib,"GetCurrentLengthA",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthA >::invoke")
		->args({"self"});
	using _method_324 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthB >;
	addExtern<DAS_CALL_METHOD(_method_324)>(*this,lib,"GetCurrentLengthB",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthB >::invoke")
		->args({"self"});
	using _method_325 = das::das_call_member< void (b2RevoluteJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2RevoluteJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_325)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2RevoluteJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	using _method_326 = das::das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_326), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_327 = das::das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_327), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_328 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_328)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_329 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointAngle >;
	addExtern<DAS_CALL_METHOD(_method_329)>(*this,lib,"GetJointAngle",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointAngle >::invoke")
		->args({"self"});
	using _method_330 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointSpeed >;
	addExtern<DAS_CALL_METHOD(_method_330)>(*this,lib,"GetJointSpeed",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointSpeed >::invoke")
		->args({"self"});
	using _method_331 = das::das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_331)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_332 = das::das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_332)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_333 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_333)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_334 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_334)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_335 = das::das_call_member< void (b2RevoluteJoint::*)(float,float),&b2RevoluteJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_335)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float,float),&b2RevoluteJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_336 = das::das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_336)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_337 = das::das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_337)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_338 = das::das_call_member< void (b2RevoluteJoint::*)(float),&b2RevoluteJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_338)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float),&b2RevoluteJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
}
}

