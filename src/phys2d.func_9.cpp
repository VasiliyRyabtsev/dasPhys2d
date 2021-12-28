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
	using _method_96 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,float),&b2Body::SetTransform >;
	addExtern<DAS_CALL_METHOD(_method_96)>(*this,lib,"SetTransform",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,float) , &b2Body::SetTransform >::invoke")
		->args({"self","position","angle"});
	using _method_97 = das::das_call_member< const b2Transform & (b2Body::*)() const,&b2Body::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_97), SimNode_ExtFuncCallRef>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< const b2Transform & (b2Body::*)() const , &b2Body::GetTransform >::invoke")
		->args({"self"});
	using _method_98 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetPosition >;
	addExtern<DAS_CALL_METHOD(_method_98), SimNode_ExtFuncCallRef>(*this,lib,"GetPosition",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetPosition >::invoke")
		->args({"self"});
	using _method_99 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_99)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetAngle >::invoke")
		->args({"self"});
	using _method_100 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetWorldCenter >;
	addExtern<DAS_CALL_METHOD(_method_100), SimNode_ExtFuncCallRef>(*this,lib,"GetWorldCenter",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetWorldCenter >::invoke")
		->args({"self"});
	using _method_101 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLocalCenter >;
	addExtern<DAS_CALL_METHOD(_method_101), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalCenter",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetLocalCenter >::invoke")
		->args({"self"});
	using _method_102 = das::das_call_member< void (b2Body::*)(const b2Vec2 &),&b2Body::SetLinearVelocity >;
	addExtern<DAS_CALL_METHOD(_method_102)>(*this,lib,"SetLinearVelocity",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &) , &b2Body::SetLinearVelocity >::invoke")
		->args({"self","v"});
	using _method_103 = das::das_call_member< const b2Vec2 & (b2Body::*)() const,&b2Body::GetLinearVelocity >;
	addExtern<DAS_CALL_METHOD(_method_103), SimNode_ExtFuncCallRef>(*this,lib,"GetLinearVelocity",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2Body::*)() const , &b2Body::GetLinearVelocity >::invoke")
		->args({"self"});
	using _method_104 = das::das_call_member< void (b2Body::*)(float),&b2Body::SetAngularVelocity >;
	addExtern<DAS_CALL_METHOD(_method_104)>(*this,lib,"SetAngularVelocity",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float) , &b2Body::SetAngularVelocity >::invoke")
		->args({"self","omega"});
	using _method_105 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngularVelocity >;
	addExtern<DAS_CALL_METHOD(_method_105)>(*this,lib,"GetAngularVelocity",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetAngularVelocity >::invoke")
		->args({"self"});
	using _method_106 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyForce >;
	addExtern<DAS_CALL_METHOD(_method_106)>(*this,lib,"ApplyForce",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool) , &b2Body::ApplyForce >::invoke")
		->args({"self","force","point","wake"});
	using _method_107 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,bool),&b2Body::ApplyForceToCenter >;
	addExtern<DAS_CALL_METHOD(_method_107)>(*this,lib,"ApplyForceToCenter",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,bool) , &b2Body::ApplyForceToCenter >::invoke")
		->args({"self","force","wake"});
	using _method_108 = das::das_call_member< void (b2Body::*)(float,bool),&b2Body::ApplyTorque >;
	addExtern<DAS_CALL_METHOD(_method_108)>(*this,lib,"ApplyTorque",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float,bool) , &b2Body::ApplyTorque >::invoke")
		->args({"self","torque","wake"});
	using _method_109 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyLinearImpulse >;
	addExtern<DAS_CALL_METHOD(_method_109)>(*this,lib,"ApplyLinearImpulse",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool) , &b2Body::ApplyLinearImpulse >::invoke")
		->args({"self","impulse","point","wake"});
	using _method_110 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,bool),&b2Body::ApplyLinearImpulseToCenter >;
	addExtern<DAS_CALL_METHOD(_method_110)>(*this,lib,"ApplyLinearImpulseToCenter",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,bool) , &b2Body::ApplyLinearImpulseToCenter >::invoke")
		->args({"self","impulse","wake"});
	using _method_111 = das::das_call_member< void (b2Body::*)(float,bool),&b2Body::ApplyAngularImpulse >;
	addExtern<DAS_CALL_METHOD(_method_111)>(*this,lib,"ApplyAngularImpulse",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float,bool) , &b2Body::ApplyAngularImpulse >::invoke")
		->args({"self","impulse","wake"});
	using _method_112 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetMass >;
	addExtern<DAS_CALL_METHOD(_method_112)>(*this,lib,"GetMass",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetMass >::invoke")
		->args({"self"});
	using _method_113 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetInertia >;
	addExtern<DAS_CALL_METHOD(_method_113)>(*this,lib,"GetInertia",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetInertia >::invoke")
		->args({"self"});
	using _method_114 = das::das_call_member< void (b2Body::*)(b2MassData *) const,&b2Body::GetMassData >;
	addExtern<DAS_CALL_METHOD(_method_114)>(*this,lib,"GetMassData",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(b2MassData *) const , &b2Body::GetMassData >::invoke")
		->args({"self","data"});
	using _method_115 = das::das_call_member< void (b2Body::*)(const b2MassData *),&b2Body::SetMassData >;
	addExtern<DAS_CALL_METHOD(_method_115)>(*this,lib,"SetMassData",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2MassData *) , &b2Body::SetMassData >::invoke")
		->args({"self","data"});
}
}

