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
void Module_box2d::initFunctions_5() {
	using _method_51 = das::das_call_member< void (b2World::*)(b2Draw *),&b2World::SetDebugDraw >;
	addExtern<DAS_CALL_METHOD(_method_51)>(*this,lib,"SetDebugDraw",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Draw *),&b2World::SetDebugDraw >::invoke")
		->args({"self","debugDraw"});
	using _method_52 = das::das_call_member< b2Body * (b2World::*)(const b2BodyDef *),&b2World::CreateBody >;
	addExtern<DAS_CALL_METHOD(_method_52)>(*this,lib,"CreateBody",SideEffects::worstDefault,"das_call_member< b2Body * (b2World::*)(const b2BodyDef *),&b2World::CreateBody >::invoke")
		->args({"self","def"});
	using _method_53 = das::das_call_member< void (b2World::*)(b2Body *),&b2World::DestroyBody >;
	addExtern<DAS_CALL_METHOD(_method_53)>(*this,lib,"DestroyBody",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Body *),&b2World::DestroyBody >::invoke")
		->args({"self","body"});
	using _method_54 = das::das_call_member< b2Joint * (b2World::*)(const b2JointDef *),&b2World::CreateJoint >;
	addExtern<DAS_CALL_METHOD(_method_54)>(*this,lib,"CreateJoint",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)(const b2JointDef *),&b2World::CreateJoint >::invoke")
		->args({"self","def"});
	using _method_55 = das::das_call_member< void (b2World::*)(b2Joint *),&b2World::DestroyJoint >;
	addExtern<DAS_CALL_METHOD(_method_55)>(*this,lib,"DestroyJoint",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Joint *),&b2World::DestroyJoint >::invoke")
		->args({"self","joint"});
	using _method_56 = das::das_call_member< void (b2World::*)(float,int,int),&b2World::Step >;
	addExtern<DAS_CALL_METHOD(_method_56)>(*this,lib,"Step",SideEffects::worstDefault,"das_call_member< void (b2World::*)(float,int,int),&b2World::Step >::invoke")
		->args({"self","timeStep","velocityIterations","positionIterations"});
	using _method_57 = das::das_call_member< void (b2World::*)(),&b2World::ClearForces >;
	addExtern<DAS_CALL_METHOD(_method_57)>(*this,lib,"ClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::ClearForces >::invoke")
		->args({"self"});
	using _method_58 = das::das_call_member< void (b2World::*)(),&b2World::DebugDraw >;
	addExtern<DAS_CALL_METHOD(_method_58)>(*this,lib,"DebugDraw",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::DebugDraw >::invoke")
		->args({"self"});
	//using _method_59 = das::das_call_member< void (b2World::*)(b2RayCastCallback *,const b2Vec2 &,const b2Vec2 &) const,&b2World::RayCast >;
	//addExtern<DAS_CALL_METHOD(_method_59)>(*this,lib,"RayCast",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2RayCastCallback *,const b2Vec2 &,const b2Vec2 &) const,&b2World::RayCast >::invoke")
	//	->args({"self","callback","point1","point2"});
	using _method_60 = das::das_call_member< b2Body * (b2World::*)(),&b2World::GetBodyList >;
	addExtern<DAS_CALL_METHOD(_method_60)>(*this,lib,"GetBodyList",SideEffects::worstDefault,"das_call_member< b2Body * (b2World::*)(),&b2World::GetBodyList >::invoke")
		->args({"self"});
	using _method_61 = das::das_call_member< const b2Body * (b2World::*)() const,&b2World::GetBodyList >;
	addExtern<DAS_CALL_METHOD(_method_61)>(*this,lib,"GetBodyList",SideEffects::worstDefault,"das_call_member< const b2Body * (b2World::*)() const,&b2World::GetBodyList >::invoke")
		->args({"self"});
	using _method_62 = das::das_call_member< b2Joint * (b2World::*)(),&b2World::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_62)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)(),&b2World::GetJointList >::invoke")
		->args({"self"});
	using _method_63 = das::das_call_member< const b2Joint * (b2World::*)() const,&b2World::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_63)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< const b2Joint * (b2World::*)() const,&b2World::GetJointList >::invoke")
		->args({"self"});
	//using _method_64 = das::das_call_member< const b2Contact * (b2World::*)() const,&b2World::GetContactList >;
	//addExtern<DAS_CALL_METHOD(_method_64)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< const b2Contact * (b2World::*)() const,&b2World::GetContactList >::invoke")
	//	->args({"self"});
	using _method_65 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAllowSleeping >;
	addExtern<DAS_CALL_METHOD(_method_65)>(*this,lib,"SetAllowSleeping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetAllowSleeping >::invoke")
		->args({"self","flag"});
	using _method_66 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAllowSleeping >;
	addExtern<DAS_CALL_METHOD(_method_66)>(*this,lib,"GetAllowSleeping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetAllowSleeping >::invoke")
		->args({"self"});
	using _method_67 = das::das_call_member< void (b2World::*)(bool),&b2World::SetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_67)>(*this,lib,"SetWarmStarting",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetWarmStarting >::invoke")
		->args({"self","flag"});
	using _method_68 = das::das_call_member< bool (b2World::*)() const,&b2World::GetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_68)>(*this,lib,"GetWarmStarting",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetWarmStarting >::invoke")
		->args({"self"});
	using _method_69 = das::das_call_member< void (b2World::*)(bool),&b2World::SetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_69)>(*this,lib,"SetContinuousPhysics",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetContinuousPhysics >::invoke")
		->args({"self","flag"});
	using _method_70 = das::das_call_member< bool (b2World::*)() const,&b2World::GetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_70)>(*this,lib,"GetContinuousPhysics",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetContinuousPhysics >::invoke")
		->args({"self"});
}
}

