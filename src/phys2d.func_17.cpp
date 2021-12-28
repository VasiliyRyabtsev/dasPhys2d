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
void Module_phys2d::initFunctions_17() {
	using _method_245 = das::das_call_member< void (b2World::*)(bool),&b2World::SetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_245)>(*this,lib,"SetWarmStarting",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetWarmStarting >::invoke")
		->args({"self","flag"});
	using _method_246 = das::das_call_member< bool (b2World::*)() const,&b2World::GetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_246)>(*this,lib,"GetWarmStarting",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetWarmStarting >::invoke")
		->args({"self"});
	using _method_247 = das::das_call_member< void (b2World::*)(bool),&b2World::SetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_247)>(*this,lib,"SetContinuousPhysics",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetContinuousPhysics >::invoke")
		->args({"self","flag"});
	using _method_248 = das::das_call_member< bool (b2World::*)() const,&b2World::GetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_248)>(*this,lib,"GetContinuousPhysics",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetContinuousPhysics >::invoke")
		->args({"self"});
	using _method_249 = das::das_call_member< void (b2World::*)(bool),&b2World::SetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_249)>(*this,lib,"SetSubStepping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetSubStepping >::invoke")
		->args({"self","flag"});
	using _method_250 = das::das_call_member< bool (b2World::*)() const,&b2World::GetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_250)>(*this,lib,"GetSubStepping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetSubStepping >::invoke")
		->args({"self"});
	using _method_251 = das::das_call_member< int (b2World::*)() const,&b2World::GetProxyCount >;
	addExtern<DAS_CALL_METHOD(_method_251)>(*this,lib,"GetProxyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetProxyCount >::invoke")
		->args({"self"});
	using _method_252 = das::das_call_member< int (b2World::*)() const,&b2World::GetBodyCount >;
	addExtern<DAS_CALL_METHOD(_method_252)>(*this,lib,"GetBodyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetBodyCount >::invoke")
		->args({"self"});
	using _method_253 = das::das_call_member< int (b2World::*)() const,&b2World::GetJointCount >;
	addExtern<DAS_CALL_METHOD(_method_253)>(*this,lib,"GetJointCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetJointCount >::invoke")
		->args({"self"});
	using _method_254 = das::das_call_member< int (b2World::*)() const,&b2World::GetContactCount >;
	addExtern<DAS_CALL_METHOD(_method_254)>(*this,lib,"GetContactCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetContactCount >::invoke")
		->args({"self"});
	using _method_255 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeHeight >;
	addExtern<DAS_CALL_METHOD(_method_255)>(*this,lib,"GetTreeHeight",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetTreeHeight >::invoke")
		->args({"self"});
	using _method_256 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeBalance >;
	addExtern<DAS_CALL_METHOD(_method_256)>(*this,lib,"GetTreeBalance",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetTreeBalance >::invoke")
		->args({"self"});
	using _method_257 = das::das_call_member< float (b2World::*)() const,&b2World::GetTreeQuality >;
	addExtern<DAS_CALL_METHOD(_method_257)>(*this,lib,"GetTreeQuality",SideEffects::worstDefault,"das_call_member< float (b2World::*)() const , &b2World::GetTreeQuality >::invoke")
		->args({"self"});
	using _method_258 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::SetGravity >;
	addExtern<DAS_CALL_METHOD(_method_258)>(*this,lib,"SetGravity",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &) , &b2World::SetGravity >::invoke")
		->args({"self","gravity"});
	using _method_259 = das::das_call_member< b2Vec2 (b2World::*)() const,&b2World::GetGravity >;
	addExtern<DAS_CALL_METHOD(_method_259)>(*this,lib,"GetGravity",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2World::*)() const , &b2World::GetGravity >::invoke")
		->args({"self"});
	using _method_260 = das::das_call_member< bool (b2World::*)() const,&b2World::IsLocked >;
	addExtern<DAS_CALL_METHOD(_method_260)>(*this,lib,"IsLocked",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::IsLocked >::invoke")
		->args({"self"});
	using _method_261 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_261)>(*this,lib,"SetAutoClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetAutoClearForces >::invoke")
		->args({"self","flag"});
	using _method_262 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_262)>(*this,lib,"GetAutoClearForces",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetAutoClearForces >::invoke")
		->args({"self"});
	using _method_263 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_263)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &) , &b2World::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	using _method_264 = das::das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >;
	addExtern<DAS_CALL_METHOD(_method_264), SimNode_ExtFuncCallRef>(*this,lib,"GetContactManager",SideEffects::worstDefault,"das_call_member< const b2ContactManager & (b2World::*)() const , &b2World::GetContactManager >::invoke")
		->args({"self"});
}
}

