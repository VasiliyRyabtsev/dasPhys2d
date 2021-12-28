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
#include "phys2d.func.aot.decl.inc"
void Module_phys2d::initFunctions_15() {
	using _method_209 = das::das_call_member< void (b2ContactManager::*)(b2Contact *),&b2ContactManager::Destroy >;
	addExtern<DAS_CALL_METHOD(_method_209)>(*this,lib,"Destroy",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)(b2Contact *) , &b2ContactManager::Destroy >::invoke")
		->args({"self","c"});
	using _method_210 = das::das_call_member< void (b2ContactManager::*)(),&b2ContactManager::Collide >;
	addExtern<DAS_CALL_METHOD(_method_210)>(*this,lib,"Collide",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)() , &b2ContactManager::Collide >::invoke")
		->args({"self"});
	addCtorAndUsing<b2StackAllocator>(*this,lib,"b2StackAllocator","b2StackAllocator");
	using _method_211 = das::das_call_member< void * (b2StackAllocator::*)(int),&b2StackAllocator::Allocate >;
	addExtern<DAS_CALL_METHOD(_method_211)>(*this,lib,"Allocate",SideEffects::worstDefault,"das_call_member< void * (b2StackAllocator::*)(int) , &b2StackAllocator::Allocate >::invoke")
		->args({"self","size"});
	using _method_212 = das::das_call_member< void (b2StackAllocator::*)(void *),&b2StackAllocator::Free >;
	addExtern<DAS_CALL_METHOD(_method_212)>(*this,lib,"Free",SideEffects::worstDefault,"das_call_member< void (b2StackAllocator::*)(void *) , &b2StackAllocator::Free >::invoke")
		->args({"self","p"});
	using _method_213 = das::das_call_member< int (b2StackAllocator::*)() const,&b2StackAllocator::GetMaxAllocation >;
	addExtern<DAS_CALL_METHOD(_method_213)>(*this,lib,"GetMaxAllocation",SideEffects::worstDefault,"das_call_member< int (b2StackAllocator::*)() const , &b2StackAllocator::GetMaxAllocation >::invoke")
		->args({"self"});
	addExtern< bool (*)(b2ContactFilter &,b2Fixture *,b2Fixture *) , _phys2d_virtual_24_ShouldCollide >(*this,lib,"ShouldCollide",SideEffects::worstDefault,"_phys2d_virtual_24_ShouldCollide")
		->args({"self","fixtureA","fixtureB"});
	addExtern< void (*)(b2ContactListener &,b2Contact *) , _phys2d_virtual_25_BeginContact >(*this,lib,"BeginContact",SideEffects::worstDefault,"_phys2d_virtual_25_BeginContact")
		->args({"self","contact"});
	addExtern< void (*)(b2ContactListener &,b2Contact *) , _phys2d_virtual_26_EndContact >(*this,lib,"EndContact",SideEffects::worstDefault,"_phys2d_virtual_26_EndContact")
		->args({"self","contact"});
	addExtern< void (*)(b2ContactListener &,b2Contact *,const b2Manifold *) , _phys2d_virtual_27_PreSolve >(*this,lib,"PreSolve",SideEffects::worstDefault,"_phys2d_virtual_27_PreSolve")
		->args({"self","contact","oldManifold"});
	addExtern< void (*)(b2ContactListener &,b2Contact *,const b2ContactImpulse *) , _phys2d_virtual_28_PostSolve >(*this,lib,"PostSolve",SideEffects::worstDefault,"_phys2d_virtual_28_PostSolve")
		->args({"self","contact","impulse"});
	addCtorAndUsing<b2World,const b2Vec2 &>(*this,lib,"b2World","b2World")
		->args({"gravity"});
	using _method_219 = das::das_call_member< void (b2World::*)(b2DestructionListener *),&b2World::SetDestructionListener >;
	addExtern<DAS_CALL_METHOD(_method_219)>(*this,lib,"SetDestructionListener",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2DestructionListener *) , &b2World::SetDestructionListener >::invoke")
		->args({"self","listener"});
	using _method_220 = das::das_call_member< void (b2World::*)(b2ContactFilter *),&b2World::SetContactFilter >;
	addExtern<DAS_CALL_METHOD(_method_220)>(*this,lib,"SetContactFilter",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2ContactFilter *) , &b2World::SetContactFilter >::invoke")
		->args({"self","filter"});
	using _method_221 = das::das_call_member< void (b2World::*)(b2ContactListener *),&b2World::SetContactListener >;
	addExtern<DAS_CALL_METHOD(_method_221)>(*this,lib,"SetContactListener",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2ContactListener *) , &b2World::SetContactListener >::invoke")
		->args({"self","listener"});
	using _method_222 = das::das_call_member< void (b2World::*)(b2Draw *),&b2World::SetDebugDraw >;
	addExtern<DAS_CALL_METHOD(_method_222)>(*this,lib,"SetDebugDraw",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Draw *) , &b2World::SetDebugDraw >::invoke")
		->args({"self","debugDraw"});
	using _method_223 = das::das_call_member< b2Body * (b2World::*)(const b2BodyDef *),&b2World::CreateBody >;
	addExtern<DAS_CALL_METHOD(_method_223)>(*this,lib,"CreateBody",SideEffects::worstDefault,"das_call_member< b2Body * (b2World::*)(const b2BodyDef *) , &b2World::CreateBody >::invoke")
		->args({"self","def"});
	using _method_224 = das::das_call_member< void (b2World::*)(b2Body *),&b2World::DestroyBody >;
	addExtern<DAS_CALL_METHOD(_method_224)>(*this,lib,"DestroyBody",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Body *) , &b2World::DestroyBody >::invoke")
		->args({"self","body"});
	using _method_225 = das::das_call_member< b2Joint * (b2World::*)(const b2JointDef *),&b2World::CreateJoint >;
	addExtern<DAS_CALL_METHOD(_method_225)>(*this,lib,"CreateJoint",SideEffects::worstDefault,"das_call_member< b2Joint * (b2World::*)(const b2JointDef *) , &b2World::CreateJoint >::invoke")
		->args({"self","def"});
	using _method_226 = das::das_call_member< void (b2World::*)(b2Joint *),&b2World::DestroyJoint >;
	addExtern<DAS_CALL_METHOD(_method_226)>(*this,lib,"DestroyJoint",SideEffects::worstDefault,"das_call_member< void (b2World::*)(b2Joint *) , &b2World::DestroyJoint >::invoke")
		->args({"self","joint"});
}
}

