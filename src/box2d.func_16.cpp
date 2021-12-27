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
	using _method_220 = das::das_call_member< b2Joint * (b2World::*)(const b2JointDef *),&b2World::CreateJoint >;
	addExtern<DAS_CALL_METHOD(_method_220)>(*this,lib,"CreateJoint",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)(const b2JointDef *) , &b2World::CreateJoint >::invoke")
		->args({"self","def"});
	using _method_221 = das::das_call_member< void (b2World::*)(b2Joint *),&b2World::DestroyJoint >;
	addExtern<DAS_CALL_METHOD(_method_221)>(*this,lib,"DestroyJoint",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Joint *) , &b2World::DestroyJoint >::invoke")
		->args({"self","joint"});
	using _method_222 = das::das_call_member< void (b2World::*)(float,int,int),&b2World::Step >;
	addExtern<DAS_CALL_METHOD(_method_222)>(*this,lib,"Step",SideEffects::worstDefault,"das_call_member< void (b2World::*)(float,int,int) , &b2World::Step >::invoke")
		->args({"self","timeStep","velocityIterations","positionIterations"});
	using _method_223 = das::das_call_member< void (b2World::*)(),&b2World::ClearForces >;
	addExtern<DAS_CALL_METHOD(_method_223)>(*this,lib,"ClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)() , &b2World::ClearForces >::invoke")
		->args({"self"});
	using _method_224 = das::das_call_member< void (b2World::*)(),&b2World::DebugDraw >;
	addExtern<DAS_CALL_METHOD(_method_224)>(*this,lib,"DebugDraw",SideEffects::worstDefault,"das_call_member< void (b2World::*)() , &b2World::DebugDraw >::invoke")
		->args({"self"});
	using _method_225 = das::das_call_member< void (b2World::*)(b2QueryCallback *,const b2AABB &) const,&b2World::QueryAABB >;
	addExtern<DAS_CALL_METHOD(_method_225)>(*this,lib,"QueryAABB",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2QueryCallback *,const b2AABB &) const , &b2World::QueryAABB >::invoke")
		->args({"self","callback","aabb"});
	using _method_226 = das::das_call_member< void (b2World::*)(b2RayCastCallback *,const b2Vec2 &,const b2Vec2 &) const,&b2World::RayCast >;
	addExtern<DAS_CALL_METHOD(_method_226)>(*this,lib,"RayCast",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2RayCastCallback *,const b2Vec2 &,const b2Vec2 &) const , &b2World::RayCast >::invoke")
		->args({"self","callback","point1","point2"});
	using _method_227 = das::das_call_member< b2Body * (b2World::*)(),&b2World::GetBodyList >;
	addExtern<DAS_CALL_METHOD(_method_227)>(*this,lib,"GetBodyList",SideEffects::worstDefault,"das_call_member< b2Body * (b2World::*)() , &b2World::GetBodyList >::invoke")
		->args({"self"});
	using _method_228 = das::das_call_member< const b2Body * (b2World::*)() const,&b2World::GetBodyList >;
	addExtern<DAS_CALL_METHOD(_method_228)>(*this,lib,"GetBodyList",SideEffects::worstDefault,"das_call_member< const b2Body * (b2World::*)() const , &b2World::GetBodyList >::invoke")
		->args({"self"});
	using _method_229 = das::das_call_member< b2Joint * (b2World::*)(),&b2World::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_229)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)() , &b2World::GetJointList >::invoke")
		->args({"self"});
	using _method_230 = das::das_call_member< const b2Joint * (b2World::*)() const,&b2World::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_230)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< const b2Joint * (b2World::*)() const , &b2World::GetJointList >::invoke")
		->args({"self"});
	using _method_231 = das::das_call_member< b2Contact * (b2World::*)(),&b2World::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_231)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< b2Contact * (b2World::*)() , &b2World::GetContactList >::invoke")
		->args({"self"});
	using _method_232 = das::das_call_member< const b2Contact * (b2World::*)() const,&b2World::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_232)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< const b2Contact * (b2World::*)() const , &b2World::GetContactList >::invoke")
		->args({"self"});
	using _method_233 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAllowSleeping >;
	addExtern<DAS_CALL_METHOD(_method_233)>(*this,lib,"SetAllowSleeping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetAllowSleeping >::invoke")
		->args({"self","flag"});
	using _method_234 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAllowSleeping >;
	addExtern<DAS_CALL_METHOD(_method_234)>(*this,lib,"GetAllowSleeping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetAllowSleeping >::invoke")
		->args({"self"});
	using _method_235 = das::das_call_member< void (b2World::*)(bool),&b2World::SetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_235)>(*this,lib,"SetWarmStarting",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetWarmStarting >::invoke")
		->args({"self","flag"});
	using _method_236 = das::das_call_member< bool (b2World::*)() const,&b2World::GetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_236)>(*this,lib,"GetWarmStarting",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetWarmStarting >::invoke")
		->args({"self"});
	using _method_237 = das::das_call_member< void (b2World::*)(bool),&b2World::SetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_237)>(*this,lib,"SetContinuousPhysics",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetContinuousPhysics >::invoke")
		->args({"self","flag"});
	using _method_238 = das::das_call_member< bool (b2World::*)() const,&b2World::GetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_238)>(*this,lib,"GetContinuousPhysics",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetContinuousPhysics >::invoke")
		->args({"self"});
	using _method_239 = das::das_call_member< void (b2World::*)(bool),&b2World::SetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_239)>(*this,lib,"SetSubStepping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetSubStepping >::invoke")
		->args({"self","flag"});
}
}

