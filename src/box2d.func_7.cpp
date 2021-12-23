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
void Module_box2d::initFunctions_7() {
	using _method_84 = das::das_call_member< int (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeBalance >;
	addExtern<DAS_CALL_METHOD(_method_84)>(*this,lib,"GetTreeBalance",SideEffects::worstDefault,"das_call_member< int (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeBalance >::invoke")
		->args({"self"});
	using _method_85 = das::das_call_member< float (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeQuality >;
	addExtern<DAS_CALL_METHOD(_method_85)>(*this,lib,"GetTreeQuality",SideEffects::worstDefault,"das_call_member< float (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeQuality >::invoke")
		->args({"self"});
	using _method_86 = das::das_call_member< void (b2BroadPhase::*)(const b2Vec2 &),&b2BroadPhase::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_86)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2BroadPhase::*)(const b2Vec2 &),&b2BroadPhase::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	using _method_87 = das::das_call_member< b2Fixture * (b2Body::*)(const b2FixtureDef *),&b2Body::CreateFixture >;
	addExtern<DAS_CALL_METHOD(_method_87)>(*this,lib,"CreateFixture",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Body::*)(const b2FixtureDef *),&b2Body::CreateFixture >::invoke")
		->args({"self","def"});
	using _method_88 = das::das_call_member< b2Fixture * (b2Body::*)(const b2Shape *,float),&b2Body::CreateFixture >;
	addExtern<DAS_CALL_METHOD(_method_88)>(*this,lib,"CreateFixture",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Body::*)(const b2Shape *,float),&b2Body::CreateFixture >::invoke")
		->args({"self","shape","density"});
	using _method_89 = das::das_call_member< void (b2Body::*)(b2Fixture *),&b2Body::DestroyFixture >;
	addExtern<DAS_CALL_METHOD(_method_89)>(*this,lib,"DestroyFixture",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(b2Fixture *),&b2Body::DestroyFixture >::invoke")
		->args({"self","fixture"});
	using _method_90 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,float),&b2Body::SetTransform >;
	addExtern<DAS_CALL_METHOD(_method_90)>(*this,lib,"SetTransform",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,float),&b2Body::SetTransform >::invoke")
		->args({"self","position","angle"});
	using _method_91 = das::das_call_member< const b2Transform & (b2Body::*)() const,&b2Body::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_91), SimNode_ExtFuncCallRef>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< const b2Transform & (b2Body::*)() const,&b2Body::GetTransform >::invoke")
		->args({"self"});
	using _method_92 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetPosition >;
	addExtern<DAS_CALL_METHOD(_method_92), SimNode_ExtFuncCallRef>(*this,lib,"GetPosition",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetPosition >::invoke")
		->args({"self"});
	using _method_93 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_93)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const,&b2Body::GetAngle >::invoke")
		->args({"self"});
	using _method_94 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetWorldCenter >;
	addExtern<DAS_CALL_METHOD(_method_94), SimNode_ExtFuncCallRef>(*this,lib,"GetWorldCenter",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetWorldCenter >::invoke")
		->args({"self"});
	using _method_95 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLocalCenter >;
	addExtern<DAS_CALL_METHOD(_method_95), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalCenter",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLocalCenter >::invoke")
		->args({"self"});
	using _method_96 = das::das_call_member< void (b2Body::*)(const b2Vec2 &),&b2Body::SetLinearVelocity >;
	addExtern<DAS_CALL_METHOD(_method_96)>(*this,lib,"SetLinearVelocity",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &),&b2Body::SetLinearVelocity >::invoke")
		->args({"self","v"});
	using _method_97 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLinearVelocity >;
	addExtern<DAS_CALL_METHOD(_method_97), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearVelocity",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLinearVelocity >::invoke")
		->args({"self"});
	using _method_98 = das::das_call_member< void (b2Body::*)(float),&b2Body::SetAngularVelocity >;
	addExtern<DAS_CALL_METHOD(_method_98)>(*this,lib,"SetAngularVelocity",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float),&b2Body::SetAngularVelocity >::invoke")
		->args({"self","omega"});
	using _method_99 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngularVelocity >;
	addExtern<DAS_CALL_METHOD(_method_99)>(*this,lib,"GetAngularVelocity",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const,&b2Body::GetAngularVelocity >::invoke")
		->args({"self"});
	using _method_100 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyForce >;
	addExtern<DAS_CALL_METHOD(_method_100)>(*this,lib,"ApplyForce",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyForce >::invoke")
		->args({"self","force","point","wake"});
	using _method_101 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,bool),&b2Body::ApplyForceToCenter >;
	addExtern<DAS_CALL_METHOD(_method_101)>(*this,lib,"ApplyForceToCenter",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,bool),&b2Body::ApplyForceToCenter >::invoke")
		->args({"self","force","wake"});
	using _method_102 = das::das_call_member< void (b2Body::*)(float,bool),&b2Body::ApplyTorque >;
	addExtern<DAS_CALL_METHOD(_method_102)>(*this,lib,"ApplyTorque",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float,bool),&b2Body::ApplyTorque >::invoke")
		->args({"self","torque","wake"});
	using _method_103 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyLinearImpulse >;
	addExtern<DAS_CALL_METHOD(_method_103)>(*this,lib,"ApplyLinearImpulse",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyLinearImpulse >::invoke")
		->args({"self","impulse","point","wake"});
}
}

