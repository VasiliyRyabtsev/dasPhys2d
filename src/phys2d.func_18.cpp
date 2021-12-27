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
void Module_phys2d::initFunctions_18() {
	using _method_257 = das::das_call_member< b2JointType (b2Joint::*)() const,&b2Joint::GetType >;
	addExtern<DAS_CALL_METHOD(_method_257)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2JointType (b2Joint::*)() const , &b2Joint::GetType >::invoke")
		->args({"self"});
	using _method_258 = das::das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyA >;
	addExtern<DAS_CALL_METHOD(_method_258)>(*this,lib,"GetBodyA",SideEffects::worstDefault,"das_call_member< b2Body * (b2Joint::*)() , &b2Joint::GetBodyA >::invoke")
		->args({"self"});
	using _method_259 = das::das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyB >;
	addExtern<DAS_CALL_METHOD(_method_259)>(*this,lib,"GetBodyB",SideEffects::worstDefault,"das_call_member< b2Body * (b2Joint::*)() , &b2Joint::GetBodyB >::invoke")
		->args({"self"});
	using _method_260 = das::das_call_member< b2Joint * (b2Joint::*)(),&b2Joint::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_260)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Joint * (b2Joint::*)() , &b2Joint::GetNext >::invoke")
		->args({"self"});
	using _method_261 = das::das_call_member< const b2Joint * (b2Joint::*)() const,&b2Joint::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_261)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Joint * (b2Joint::*)() const , &b2Joint::GetNext >::invoke")
		->args({"self"});
	using _method_262 = das::das_call_member< b2JointUserData & (b2Joint::*)(),&b2Joint::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_262), SimNode_ExtFuncCallRef>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< b2JointUserData & (b2Joint::*)() , &b2Joint::GetUserData >::invoke")
		->args({"self"});
	using _method_263 = das::das_call_member< bool (b2Joint::*)() const,&b2Joint::IsEnabled >;
	addExtern<DAS_CALL_METHOD(_method_263)>(*this,lib,"IsEnabled",SideEffects::worstDefault,"das_call_member< bool (b2Joint::*)() const , &b2Joint::IsEnabled >::invoke")
		->args({"self"});
	using _method_264 = das::das_call_member< bool (b2Joint::*)() const,&b2Joint::GetCollideConnected >;
	addExtern<DAS_CALL_METHOD(_method_264)>(*this,lib,"GetCollideConnected",SideEffects::worstDefault,"das_call_member< bool (b2Joint::*)() const , &b2Joint::GetCollideConnected >::invoke")
		->args({"self"});
	addCtorAndUsing<b2DistanceJointDef>(*this,lib,"b2DistanceJointDef","b2DistanceJointDef");
	using _method_265 = das::das_call_member< void (b2DistanceJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2DistanceJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_265)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2DistanceJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2DistanceJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchorA","anchorB"});
	using _method_266 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_266), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_267 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_267), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_268 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLength >;
	addExtern<DAS_CALL_METHOD(_method_268)>(*this,lib,"GetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLength >::invoke")
		->args({"self"});
	using _method_269 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetLength >;
	addExtern<DAS_CALL_METHOD(_method_269)>(*this,lib,"SetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetLength >::invoke")
		->args({"self","length"});
	using _method_270 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_270)>(*this,lib,"GetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetMinLength >::invoke")
		->args({"self"});
	using _method_271 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_271)>(*this,lib,"SetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetMinLength >::invoke")
		->args({"self","minLength"});
	using _method_272 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMaxLength >;
	addExtern<DAS_CALL_METHOD(_method_272)>(*this,lib,"GetMaxLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetMaxLength >::invoke")
		->args({"self"});
	using _method_273 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMaxLength >;
	addExtern<DAS_CALL_METHOD(_method_273)>(*this,lib,"SetMaxLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetMaxLength >::invoke")
		->args({"self","maxLength"});
	using _method_274 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetCurrentLength >;
	addExtern<DAS_CALL_METHOD(_method_274)>(*this,lib,"GetCurrentLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetCurrentLength >::invoke")
		->args({"self"});
	using _method_275 = das::das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_275)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
}
}

