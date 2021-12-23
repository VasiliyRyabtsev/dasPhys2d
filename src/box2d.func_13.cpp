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
void Module_box2d::initFunctions_13() {
	using _method_201 = das::das_call_member< void (b2ContactManager::*)(void *,void *),&b2ContactManager::AddPair >;
	addExtern<DAS_CALL_METHOD(_method_201)>(*this,lib,"AddPair",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)(void *,void *),&b2ContactManager::AddPair >::invoke")
		->args({"self","proxyUserDataA","proxyUserDataB"});
	using _method_202 = das::das_call_member< void (b2ContactManager::*)(),&b2ContactManager::FindNewContacts >;
	addExtern<DAS_CALL_METHOD(_method_202)>(*this,lib,"FindNewContacts",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)(),&b2ContactManager::FindNewContacts >::invoke")
		->args({"self"});
	using _method_203 = das::das_call_member< void (b2ContactManager::*)(b2Contact *),&b2ContactManager::Destroy >;
	addExtern<DAS_CALL_METHOD(_method_203)>(*this,lib,"Destroy",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)(b2Contact *),&b2ContactManager::Destroy >::invoke")
		->args({"self","c"});
	using _method_204 = das::das_call_member< void (b2ContactManager::*)(),&b2ContactManager::Collide >;
	addExtern<DAS_CALL_METHOD(_method_204)>(*this,lib,"Collide",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)(),&b2ContactManager::Collide >::invoke")
		->args({"self"});
	using _method_205 = das::das_call_member< void * (b2StackAllocator::*)(int),&b2StackAllocator::Allocate >;
	addExtern<DAS_CALL_METHOD(_method_205)>(*this,lib,"Allocate",SideEffects::worstDefault,"das_call_member< void * (b2StackAllocator::*)(int),&b2StackAllocator::Allocate >::invoke")
		->args({"self","size"});
	using _method_206 = das::das_call_member< void (b2StackAllocator::*)(void *),&b2StackAllocator::Free >;
	addExtern<DAS_CALL_METHOD(_method_206)>(*this,lib,"Free",SideEffects::worstDefault,"das_call_member< void (b2StackAllocator::*)(void *),&b2StackAllocator::Free >::invoke")
		->args({"self","p"});
	using _method_207 = das::das_call_member< int (b2StackAllocator::*)() const,&b2StackAllocator::GetMaxAllocation >;
	addExtern<DAS_CALL_METHOD(_method_207)>(*this,lib,"GetMaxAllocation",SideEffects::worstDefault,"das_call_member< int (b2StackAllocator::*)() const,&b2StackAllocator::GetMaxAllocation >::invoke")
		->args({"self"});
	using _method_208 = das::das_call_member< void (b2World::*)(b2Draw *),&b2World::SetDebugDraw >;
	addExtern<DAS_CALL_METHOD(_method_208)>(*this,lib,"SetDebugDraw",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Draw *),&b2World::SetDebugDraw >::invoke")
		->args({"self","debugDraw"});
	using _method_209 = das::das_call_member< b2Body * (b2World::*)(const b2BodyDef *),&b2World::CreateBody >;
	addExtern<DAS_CALL_METHOD(_method_209)>(*this,lib,"CreateBody",SideEffects::worstDefault,"das_call_member< b2Body * (b2World::*)(const b2BodyDef *),&b2World::CreateBody >::invoke")
		->args({"self","def"});
	using _method_210 = das::das_call_member< void (b2World::*)(b2Body *),&b2World::DestroyBody >;
	addExtern<DAS_CALL_METHOD(_method_210)>(*this,lib,"DestroyBody",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Body *),&b2World::DestroyBody >::invoke")
		->args({"self","body"});
	using _method_211 = das::das_call_member< b2Joint * (b2World::*)(const b2JointDef *),&b2World::CreateJoint >;
	addExtern<DAS_CALL_METHOD(_method_211)>(*this,lib,"CreateJoint",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)(const b2JointDef *),&b2World::CreateJoint >::invoke")
		->args({"self","def"});
	using _method_212 = das::das_call_member< void (b2World::*)(b2Joint *),&b2World::DestroyJoint >;
	addExtern<DAS_CALL_METHOD(_method_212)>(*this,lib,"DestroyJoint",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Joint *),&b2World::DestroyJoint >::invoke")
		->args({"self","joint"});
	using _method_213 = das::das_call_member< void (b2World::*)(float,int,int),&b2World::Step >;
	addExtern<DAS_CALL_METHOD(_method_213)>(*this,lib,"Step",SideEffects::worstDefault,"das_call_member< void (b2World::*)(float,int,int),&b2World::Step >::invoke")
		->args({"self","timeStep","velocityIterations","positionIterations"});
	using _method_214 = das::das_call_member< void (b2World::*)(),&b2World::ClearForces >;
	addExtern<DAS_CALL_METHOD(_method_214)>(*this,lib,"ClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::ClearForces >::invoke")
		->args({"self"});
	using _method_215 = das::das_call_member< void (b2World::*)(),&b2World::DebugDraw >;
	addExtern<DAS_CALL_METHOD(_method_215)>(*this,lib,"DebugDraw",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::DebugDraw >::invoke")
		->args({"self"});
	using _method_216 = das::das_call_member< b2Body * (b2World::*)(),&b2World::GetBodyList >;
	addExtern<DAS_CALL_METHOD(_method_216)>(*this,lib,"GetBodyList",SideEffects::worstDefault,"das_call_member< b2Body * (b2World::*)(),&b2World::GetBodyList >::invoke")
		->args({"self"});
	using _method_217 = das::das_call_member< const b2Body * (b2World::*)() const,&b2World::GetBodyList >;
	addExtern<DAS_CALL_METHOD(_method_217)>(*this,lib,"GetBodyList",SideEffects::worstDefault,"das_call_member< const b2Body * (b2World::*)() const,&b2World::GetBodyList >::invoke")
		->args({"self"});
	using _method_218 = das::das_call_member< b2Joint * (b2World::*)(),&b2World::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_218)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)(),&b2World::GetJointList >::invoke")
		->args({"self"});
	using _method_219 = das::das_call_member< const b2Joint * (b2World::*)() const,&b2World::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_219)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< const b2Joint * (b2World::*)() const,&b2World::GetJointList >::invoke")
		->args({"self"});
	using _method_220 = das::das_call_member< b2Contact * (b2World::*)(),&b2World::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_220)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< b2Contact * (b2World::*)(),&b2World::GetContactList >::invoke")
		->args({"self"});
}
}

