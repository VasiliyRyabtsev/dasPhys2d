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
void Module_box2d::initFunctions_15() {
	using _method_241 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_241)>(*this,lib,"GetAutoClearForces",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetAutoClearForces >::invoke")
		->args({"self"});
	using _method_242 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_242)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	using _method_243 = das::das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >;
	addExtern<DAS_CALL_METHOD(_method_243), SimNode_ExtFuncCallRef>(*this,lib,"GetContactManager",SideEffects::worstDefault,"das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >::invoke")
		->args({"self"});
	using _method_244 = das::das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >;
	addExtern<DAS_CALL_METHOD(_method_244), SimNode_ExtFuncCallRef>(*this,lib,"GetProfile",SideEffects::worstDefault,"das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >::invoke")
		->args({"self"});
	using _method_245 = das::das_call_member< void (b2World::*)(),&b2World::Dump >;
	addExtern<DAS_CALL_METHOD(_method_245)>(*this,lib,"Dump",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::Dump >::invoke")
		->args({"self"});
	addExtern<void (*)(float &,float &,float,float,const b2Body *,const b2Body *),b2LinearStiffness>(*this,lib,"b2LinearStiffness",SideEffects::worstDefault,"b2LinearStiffness")
		->args({"stiffness","damping","frequencyHertz","dampingRatio","bodyA","bodyB"});
	addExtern<void (*)(float &,float &,float,float,const b2Body *,const b2Body *),b2AngularStiffness>(*this,lib,"b2AngularStiffness",SideEffects::worstDefault,"b2AngularStiffness")
		->args({"stiffness","damping","frequencyHertz","dampingRatio","bodyA","bodyB"});
	using _method_246 = das::das_call_member< b2JointType (b2Joint::*)() const,&b2Joint::GetType >;
	addExtern<DAS_CALL_METHOD(_method_246)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2JointType (b2Joint::*)() const,&b2Joint::GetType >::invoke")
		->args({"self"});
	using _method_247 = das::das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyA >;
	addExtern<DAS_CALL_METHOD(_method_247)>(*this,lib,"GetBodyA",SideEffects::worstDefault,"das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyA >::invoke")
		->args({"self"});
	using _method_248 = das::das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyB >;
	addExtern<DAS_CALL_METHOD(_method_248)>(*this,lib,"GetBodyB",SideEffects::worstDefault,"das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyB >::invoke")
		->args({"self"});
	using _method_249 = das::das_call_member< b2Joint * (b2Joint::*)(),&b2Joint::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_249)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Joint * (b2Joint::*)(),&b2Joint::GetNext >::invoke")
		->args({"self"});
	using _method_250 = das::das_call_member< const b2Joint * (b2Joint::*)() const,&b2Joint::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_250)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Joint * (b2Joint::*)() const,&b2Joint::GetNext >::invoke")
		->args({"self"});
	using _method_251 = das::das_call_member< b2JointUserData & (b2Joint::*)(),&b2Joint::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_251), SimNode_ExtFuncCallRef>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< b2JointUserData & (b2Joint::*)(),&b2Joint::GetUserData >::invoke")
		->args({"self"});
	using _method_252 = das::das_call_member< bool (b2Joint::*)() const,&b2Joint::IsEnabled >;
	addExtern<DAS_CALL_METHOD(_method_252)>(*this,lib,"IsEnabled",SideEffects::worstDefault,"das_call_member< bool (b2Joint::*)() const,&b2Joint::IsEnabled >::invoke")
		->args({"self"});
	using _method_253 = das::das_call_member< bool (b2Joint::*)() const,&b2Joint::GetCollideConnected >;
	addExtern<DAS_CALL_METHOD(_method_253)>(*this,lib,"GetCollideConnected",SideEffects::worstDefault,"das_call_member< bool (b2Joint::*)() const,&b2Joint::GetCollideConnected >::invoke")
		->args({"self"});
	using _method_254 = das::das_call_member< void (b2DistanceJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2DistanceJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_254)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2DistanceJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2DistanceJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchorA","anchorB"});
	using _method_255 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_255), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_256 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_256), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_257 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLength >;
	addExtern<DAS_CALL_METHOD(_method_257)>(*this,lib,"GetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLength >::invoke")
		->args({"self"});
	using _method_258 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetLength >;
	addExtern<DAS_CALL_METHOD(_method_258)>(*this,lib,"SetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetLength >::invoke")
		->args({"self","length"});
}
}

