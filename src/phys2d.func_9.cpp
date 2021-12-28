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
void Module_phys2d::initFunctions_9() {
	using _method_95 = das::das_call_member< int (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeBalance >;
	addExtern<DAS_CALL_METHOD(_method_95)>(*this,lib,"GetTreeBalance",SideEffects::worstDefault,"das_call_member< int (b2BroadPhase::*)() const , &b2BroadPhase::GetTreeBalance >::invoke")
		->args({"self"});
	using _method_96 = das::das_call_member< float (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeQuality >;
	addExtern<DAS_CALL_METHOD(_method_96)>(*this,lib,"GetTreeQuality",SideEffects::worstDefault,"das_call_member< float (b2BroadPhase::*)() const , &b2BroadPhase::GetTreeQuality >::invoke")
		->args({"self"});
	using _method_97 = das::das_call_member< void (b2BroadPhase::*)(const b2Vec2 &),&b2BroadPhase::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_97)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2BroadPhase::*)(const b2Vec2 &) , &b2BroadPhase::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	addCtorAndUsing<b2BodyDef>(*this,lib,"b2BodyDef","b2BodyDef");
	using _method_98 = das::das_call_member< b2Fixture * (b2Body::*)(const b2FixtureDef *),&b2Body::CreateFixture >;
	addExtern<DAS_CALL_METHOD(_method_98)>(*this,lib,"CreateFixture",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Body::*)(const b2FixtureDef *) , &b2Body::CreateFixture >::invoke")
		->args({"self","def"});
	using _method_99 = das::das_call_member< b2Fixture * (b2Body::*)(const b2Shape *,float),&b2Body::CreateFixture >;
	addExtern<DAS_CALL_METHOD(_method_99)>(*this,lib,"CreateFixture",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Body::*)(const b2Shape *,float) , &b2Body::CreateFixture >::invoke")
		->args({"self","shape","density"});
	using _method_100 = das::das_call_member< void (b2Body::*)(b2Fixture *),&b2Body::DestroyFixture >;
	addExtern<DAS_CALL_METHOD(_method_100)>(*this,lib,"DestroyFixture",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(b2Fixture *) , &b2Body::DestroyFixture >::invoke")
		->args({"self","fixture"});
	using _method_101 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,float),&b2Body::SetTransform >;
	addExtern<DAS_CALL_METHOD(_method_101)>(*this,lib,"SetTransform",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,float) , &b2Body::SetTransform >::invoke")
		->args({"self","position","angle"});
	using _method_102 = das::das_call_member< const b2Transform & (b2Body::*)() const,&b2Body::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_102), SimNode_ExtFuncCallRef>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< const b2Transform & (b2Body::*)() const , &b2Body::GetTransform >::invoke")
		->args({"self"});
	using _method_103 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetPosition >;
	addExtern<DAS_CALL_METHOD(_method_103), SimNode_ExtFuncCallRef>(*this,lib,"GetPosition",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetPosition >::invoke")
		->args({"self"});
	using _method_104 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_104)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetAngle >::invoke")
		->args({"self"});
	using _method_105 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetWorldCenter >;
	addExtern<DAS_CALL_METHOD(_method_105), SimNode_ExtFuncCallRef>(*this,lib,"GetWorldCenter",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetWorldCenter >::invoke")
		->args({"self"});
	using _method_106 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLocalCenter >;
	addExtern<DAS_CALL_METHOD(_method_106), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalCenter",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetLocalCenter >::invoke")
		->args({"self"});
	using _method_107 = das::das_call_member< void (b2Body::*)(const b2Vec2 &),&b2Body::SetLinearVelocity >;
	addExtern<DAS_CALL_METHOD(_method_107)>(*this,lib,"SetLinearVelocity",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &) , &b2Body::SetLinearVelocity >::invoke")
		->args({"self","v"});
	using _method_108 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLinearVelocity >;
	addExtern<DAS_CALL_METHOD(_method_108), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearVelocity",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetLinearVelocity >::invoke")
		->args({"self"});
	using _method_109 = das::das_call_member< void (b2Body::*)(float),&b2Body::SetAngularVelocity >;
	addExtern<DAS_CALL_METHOD(_method_109)>(*this,lib,"SetAngularVelocity",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float) , &b2Body::SetAngularVelocity >::invoke")
		->args({"self","omega"});
	using _method_110 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngularVelocity >;
	addExtern<DAS_CALL_METHOD(_method_110)>(*this,lib,"GetAngularVelocity",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetAngularVelocity >::invoke")
		->args({"self"});
	using _method_111 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyForce >;
	addExtern<DAS_CALL_METHOD(_method_111)>(*this,lib,"ApplyForce",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool) , &b2Body::ApplyForce >::invoke")
		->args({"self","force","point","wake"});
	using _method_112 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,bool),&b2Body::ApplyForceToCenter >;
	addExtern<DAS_CALL_METHOD(_method_112)>(*this,lib,"ApplyForceToCenter",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,bool) , &b2Body::ApplyForceToCenter >::invoke")
		->args({"self","force","wake"});
	using _method_113 = das::das_call_member< void (b2Body::*)(float,bool),&b2Body::ApplyTorque >;
	addExtern<DAS_CALL_METHOD(_method_113)>(*this,lib,"ApplyTorque",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float,bool) , &b2Body::ApplyTorque >::invoke")
		->args({"self","torque","wake"});
}
}

