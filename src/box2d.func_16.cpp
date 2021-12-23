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
void Module_box2d::initFunctions_16() {
	using _method_259 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_259)>(*this,lib,"GetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMinLength >::invoke")
		->args({"self"});
	using _method_260 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_260)>(*this,lib,"SetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMinLength >::invoke")
		->args({"self","minLength"});
	using _method_261 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMaxLength >;
	addExtern<DAS_CALL_METHOD(_method_261)>(*this,lib,"GetMaxLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMaxLength >::invoke")
		->args({"self"});
	using _method_262 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMaxLength >;
	addExtern<DAS_CALL_METHOD(_method_262)>(*this,lib,"SetMaxLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMaxLength >::invoke")
		->args({"self","maxLength"});
	using _method_263 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetCurrentLength >;
	addExtern<DAS_CALL_METHOD(_method_263)>(*this,lib,"GetCurrentLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetCurrentLength >::invoke")
		->args({"self"});
	using _method_264 = das::das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_264)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_265 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_265)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_266 = das::das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_266)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_267 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_267)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetDamping >::invoke")
		->args({"self"});
	using _method_268 = das::das_call_member< void (b2FrictionJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2FrictionJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_268)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2FrictionJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2FrictionJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	using _method_269 = das::das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_269), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_270 = das::das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_270), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_271 = das::das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_271)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_272 = das::das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_272)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_273 = das::das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_273)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_274 = das::das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_274)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxTorque >::invoke")
		->args({"self"});
	using _method_275 = das::das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint1 >;
	addExtern<DAS_CALL_METHOD(_method_275)>(*this,lib,"GetJoint1",SideEffects::worstDefault,"das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint1 >::invoke")
		->args({"self"});
	using _method_276 = das::das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint2 >;
	addExtern<DAS_CALL_METHOD(_method_276)>(*this,lib,"GetJoint2",SideEffects::worstDefault,"das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint2 >::invoke")
		->args({"self"});
	using _method_277 = das::das_call_member< void (b2GearJoint::*)(float),&b2GearJoint::SetRatio >;
	addExtern<DAS_CALL_METHOD(_method_277)>(*this,lib,"SetRatio",SideEffects::worstDefault,"das_call_member< void (b2GearJoint::*)(float),&b2GearJoint::SetRatio >::invoke")
		->args({"self","ratio"});
	using _method_278 = das::das_call_member< float (b2GearJoint::*)() const,&b2GearJoint::GetRatio >;
	addExtern<DAS_CALL_METHOD(_method_278)>(*this,lib,"GetRatio",SideEffects::worstDefault,"das_call_member< float (b2GearJoint::*)() const,&b2GearJoint::GetRatio >::invoke")
		->args({"self"});
}
}

