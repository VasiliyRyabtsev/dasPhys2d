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
void Module_phys2d::initFunctions_17() {
	using _method_240 = das::das_call_member< bool (b2World::*)() const,&b2World::GetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_240)>(*this,lib,"GetSubStepping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetSubStepping >::invoke")
		->args({"self"});
	using _method_241 = das::das_call_member< int (b2World::*)() const,&b2World::GetProxyCount >;
	addExtern<DAS_CALL_METHOD(_method_241)>(*this,lib,"GetProxyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetProxyCount >::invoke")
		->args({"self"});
	using _method_242 = das::das_call_member< int (b2World::*)() const,&b2World::GetBodyCount >;
	addExtern<DAS_CALL_METHOD(_method_242)>(*this,lib,"GetBodyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetBodyCount >::invoke")
		->args({"self"});
	using _method_243 = das::das_call_member< int (b2World::*)() const,&b2World::GetJointCount >;
	addExtern<DAS_CALL_METHOD(_method_243)>(*this,lib,"GetJointCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetJointCount >::invoke")
		->args({"self"});
	using _method_244 = das::das_call_member< int (b2World::*)() const,&b2World::GetContactCount >;
	addExtern<DAS_CALL_METHOD(_method_244)>(*this,lib,"GetContactCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetContactCount >::invoke")
		->args({"self"});
	using _method_245 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeHeight >;
	addExtern<DAS_CALL_METHOD(_method_245)>(*this,lib,"GetTreeHeight",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetTreeHeight >::invoke")
		->args({"self"});
	using _method_246 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeBalance >;
	addExtern<DAS_CALL_METHOD(_method_246)>(*this,lib,"GetTreeBalance",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const , &b2World::GetTreeBalance >::invoke")
		->args({"self"});
	using _method_247 = das::das_call_member< float (b2World::*)() const,&b2World::GetTreeQuality >;
	addExtern<DAS_CALL_METHOD(_method_247)>(*this,lib,"GetTreeQuality",SideEffects::worstDefault,"das_call_member< float (b2World::*)() const , &b2World::GetTreeQuality >::invoke")
		->args({"self"});
	using _method_248 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::SetGravity >;
	addExtern<DAS_CALL_METHOD(_method_248)>(*this,lib,"SetGravity",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &) , &b2World::SetGravity >::invoke")
		->args({"self","gravity"});
	using _method_249 = das::das_call_member< b2Vec2 (b2World::*)() const,&b2World::GetGravity >;
	addExtern<DAS_CALL_METHOD(_method_249),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetGravity",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2World::*)() const , &b2World::GetGravity >::invoke")
		->args({"self"});
	using _method_250 = das::das_call_member< bool (b2World::*)() const,&b2World::IsLocked >;
	addExtern<DAS_CALL_METHOD(_method_250)>(*this,lib,"IsLocked",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::IsLocked >::invoke")
		->args({"self"});
	using _method_251 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_251)>(*this,lib,"SetAutoClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool) , &b2World::SetAutoClearForces >::invoke")
		->args({"self","flag"});
	using _method_252 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_252)>(*this,lib,"GetAutoClearForces",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const , &b2World::GetAutoClearForces >::invoke")
		->args({"self"});
	using _method_253 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_253)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &) , &b2World::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	using _method_254 = das::das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >;
	addExtern<DAS_CALL_METHOD(_method_254), SimNode_ExtFuncCallRef>(*this,lib,"GetContactManager",SideEffects::worstDefault,"das_call_member< const b2ContactManager & (b2World::*)() const , &b2World::GetContactManager >::invoke")
		->args({"self"});
	using _method_255 = das::das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >;
	addExtern<DAS_CALL_METHOD(_method_255), SimNode_ExtFuncCallRef>(*this,lib,"GetProfile",SideEffects::worstDefault,"das_call_member< const b2Profile & (b2World::*)() const , &b2World::GetProfile >::invoke")
		->args({"self"});
	using _method_256 = das::das_call_member< void (b2World::*)(),&b2World::Dump >;
	addExtern<DAS_CALL_METHOD(_method_256)>(*this,lib,"Dump",SideEffects::worstDefault,"das_call_member< void (b2World::*)() , &b2World::Dump >::invoke")
		->args({"self"});
	addCtorAndUsing<b2JointDef>(*this,lib,"b2JointDef","b2JointDef");
	addExtern< void (*)(float &,float &,float,float,const b2Body *,const b2Body *) , b2LinearStiffness >(*this,lib,"b2LinearStiffness",SideEffects::worstDefault,"b2LinearStiffness")
		->args({"stiffness","damping","frequencyHertz","dampingRatio","bodyA","bodyB"});
	addExtern< void (*)(float &,float &,float,float,const b2Body *,const b2Body *) , b2AngularStiffness >(*this,lib,"b2AngularStiffness",SideEffects::worstDefault,"b2AngularStiffness")
		->args({"stiffness","damping","frequencyHertz","dampingRatio","bodyA","bodyB"});
}
}

