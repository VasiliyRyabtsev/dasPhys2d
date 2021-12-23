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
void Module_box2d::initFunctions_14() {
	using _method_221 = das::das_call_member< const b2Contact * (b2World::*)() const,&b2World::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_221)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< const b2Contact * (b2World::*)() const,&b2World::GetContactList >::invoke")
		->args({"self"});
	using _method_222 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAllowSleeping >;
	addExtern<DAS_CALL_METHOD(_method_222)>(*this,lib,"SetAllowSleeping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetAllowSleeping >::invoke")
		->args({"self","flag"});
	using _method_223 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAllowSleeping >;
	addExtern<DAS_CALL_METHOD(_method_223)>(*this,lib,"GetAllowSleeping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetAllowSleeping >::invoke")
		->args({"self"});
	using _method_224 = das::das_call_member< void (b2World::*)(bool),&b2World::SetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_224)>(*this,lib,"SetWarmStarting",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetWarmStarting >::invoke")
		->args({"self","flag"});
	using _method_225 = das::das_call_member< bool (b2World::*)() const,&b2World::GetWarmStarting >;
	addExtern<DAS_CALL_METHOD(_method_225)>(*this,lib,"GetWarmStarting",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetWarmStarting >::invoke")
		->args({"self"});
	using _method_226 = das::das_call_member< void (b2World::*)(bool),&b2World::SetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_226)>(*this,lib,"SetContinuousPhysics",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetContinuousPhysics >::invoke")
		->args({"self","flag"});
	using _method_227 = das::das_call_member< bool (b2World::*)() const,&b2World::GetContinuousPhysics >;
	addExtern<DAS_CALL_METHOD(_method_227)>(*this,lib,"GetContinuousPhysics",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetContinuousPhysics >::invoke")
		->args({"self"});
	using _method_228 = das::das_call_member< void (b2World::*)(bool),&b2World::SetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_228)>(*this,lib,"SetSubStepping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetSubStepping >::invoke")
		->args({"self","flag"});
	using _method_229 = das::das_call_member< bool (b2World::*)() const,&b2World::GetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_229)>(*this,lib,"GetSubStepping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetSubStepping >::invoke")
		->args({"self"});
	using _method_230 = das::das_call_member< int (b2World::*)() const,&b2World::GetProxyCount >;
	addExtern<DAS_CALL_METHOD(_method_230)>(*this,lib,"GetProxyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetProxyCount >::invoke")
		->args({"self"});
	using _method_231 = das::das_call_member< int (b2World::*)() const,&b2World::GetBodyCount >;
	addExtern<DAS_CALL_METHOD(_method_231)>(*this,lib,"GetBodyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetBodyCount >::invoke")
		->args({"self"});
	using _method_232 = das::das_call_member< int (b2World::*)() const,&b2World::GetJointCount >;
	addExtern<DAS_CALL_METHOD(_method_232)>(*this,lib,"GetJointCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetJointCount >::invoke")
		->args({"self"});
	using _method_233 = das::das_call_member< int (b2World::*)() const,&b2World::GetContactCount >;
	addExtern<DAS_CALL_METHOD(_method_233)>(*this,lib,"GetContactCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetContactCount >::invoke")
		->args({"self"});
	using _method_234 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeHeight >;
	addExtern<DAS_CALL_METHOD(_method_234)>(*this,lib,"GetTreeHeight",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetTreeHeight >::invoke")
		->args({"self"});
	using _method_235 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeBalance >;
	addExtern<DAS_CALL_METHOD(_method_235)>(*this,lib,"GetTreeBalance",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetTreeBalance >::invoke")
		->args({"self"});
	using _method_236 = das::das_call_member< float (b2World::*)() const,&b2World::GetTreeQuality >;
	addExtern<DAS_CALL_METHOD(_method_236)>(*this,lib,"GetTreeQuality",SideEffects::worstDefault,"das_call_member< float (b2World::*)() const,&b2World::GetTreeQuality >::invoke")
		->args({"self"});
	using _method_237 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::SetGravity >;
	addExtern<DAS_CALL_METHOD(_method_237)>(*this,lib,"SetGravity",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::SetGravity >::invoke")
		->args({"self","gravity"});
	using _method_238 = das::das_call_member< b2Vec2 (b2World::*)() const,&b2World::GetGravity >;
	addExtern<DAS_CALL_METHOD(_method_238),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetGravity",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2World::*)() const,&b2World::GetGravity >::invoke")
		->args({"self"});
	using _method_239 = das::das_call_member< bool (b2World::*)() const,&b2World::IsLocked >;
	addExtern<DAS_CALL_METHOD(_method_239)>(*this,lib,"IsLocked",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::IsLocked >::invoke")
		->args({"self"});
	using _method_240 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_240)>(*this,lib,"SetAutoClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetAutoClearForces >::invoke")
		->args({"self","flag"});
}
}

