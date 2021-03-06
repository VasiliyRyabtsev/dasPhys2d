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
void Module_phys2d::initFunctions_10() {
	using _method_114 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool),&b2Body::ApplyLinearImpulse >;
	addExtern<DAS_CALL_METHOD(_method_114)>(*this,lib,"ApplyLinearImpulse",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,const b2Vec2 &,bool) , &b2Body::ApplyLinearImpulse >::invoke")
		->args({"self","impulse","point","wake"});
	using _method_115 = das::das_call_member< void (b2Body::*)(const b2Vec2 &,bool),&b2Body::ApplyLinearImpulseToCenter >;
	addExtern<DAS_CALL_METHOD(_method_115)>(*this,lib,"ApplyLinearImpulseToCenter",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2Vec2 &,bool) , &b2Body::ApplyLinearImpulseToCenter >::invoke")
		->args({"self","impulse","wake"});
	using _method_116 = das::das_call_member< void (b2Body::*)(float,bool),&b2Body::ApplyAngularImpulse >;
	addExtern<DAS_CALL_METHOD(_method_116)>(*this,lib,"ApplyAngularImpulse",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float,bool) , &b2Body::ApplyAngularImpulse >::invoke")
		->args({"self","impulse","wake"});
	using _method_117 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetMass >;
	addExtern<DAS_CALL_METHOD(_method_117)>(*this,lib,"GetMass",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetMass >::invoke")
		->args({"self"});
	using _method_118 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetInertia >;
	addExtern<DAS_CALL_METHOD(_method_118)>(*this,lib,"GetInertia",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetInertia >::invoke")
		->args({"self"});
	using _method_119 = das::das_call_member< void (b2Body::*)(b2MassData *) const,&b2Body::GetMassData >;
	addExtern<DAS_CALL_METHOD(_method_119)>(*this,lib,"GetMassData",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(b2MassData *) const , &b2Body::GetMassData >::invoke")
		->args({"self","data"});
	using _method_120 = das::das_call_member< void (b2Body::*)(const b2MassData *),&b2Body::SetMassData >;
	addExtern<DAS_CALL_METHOD(_method_120)>(*this,lib,"SetMassData",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(const b2MassData *) , &b2Body::SetMassData >::invoke")
		->args({"self","data"});
	using _method_121 = das::das_call_member< void (b2Body::*)(),&b2Body::ResetMassData >;
	addExtern<DAS_CALL_METHOD(_method_121)>(*this,lib,"ResetMassData",SideEffects::worstDefault,"das_call_member< void (b2Body::*)() , &b2Body::ResetMassData >::invoke")
		->args({"self"});
	using _method_122 = das::das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const,&b2Body::GetWorldPoint >;
	addExtern<DAS_CALL_METHOD(_method_122)>(*this,lib,"GetWorldPoint",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const , &b2Body::GetWorldPoint >::invoke")
		->args({"self","localPoint"});
	using _method_123 = das::das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const,&b2Body::GetWorldVector >;
	addExtern<DAS_CALL_METHOD(_method_123)>(*this,lib,"GetWorldVector",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const , &b2Body::GetWorldVector >::invoke")
		->args({"self","localVector"});
	using _method_124 = das::das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const,&b2Body::GetLocalPoint >;
	addExtern<DAS_CALL_METHOD(_method_124)>(*this,lib,"GetLocalPoint",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const , &b2Body::GetLocalPoint >::invoke")
		->args({"self","worldPoint"});
	using _method_125 = das::das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const,&b2Body::GetLocalVector >;
	addExtern<DAS_CALL_METHOD(_method_125)>(*this,lib,"GetLocalVector",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const , &b2Body::GetLocalVector >::invoke")
		->args({"self","worldVector"});
	using _method_126 = das::das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const,&b2Body::GetLinearVelocityFromWorldPoint >;
	addExtern<DAS_CALL_METHOD(_method_126)>(*this,lib,"GetLinearVelocityFromWorldPoint",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const , &b2Body::GetLinearVelocityFromWorldPoint >::invoke")
		->args({"self","worldPoint"});
	using _method_127 = das::das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const,&b2Body::GetLinearVelocityFromLocalPoint >;
	addExtern<DAS_CALL_METHOD(_method_127)>(*this,lib,"GetLinearVelocityFromLocalPoint",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Body::*)(const b2Vec2 &) const , &b2Body::GetLinearVelocityFromLocalPoint >::invoke")
		->args({"self","localPoint"});
	using _method_128 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetLinearDamping >;
	addExtern<DAS_CALL_METHOD(_method_128)>(*this,lib,"GetLinearDamping",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetLinearDamping >::invoke")
		->args({"self"});
	using _method_129 = das::das_call_member< void (b2Body::*)(float),&b2Body::SetLinearDamping >;
	addExtern<DAS_CALL_METHOD(_method_129)>(*this,lib,"SetLinearDamping",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float) , &b2Body::SetLinearDamping >::invoke")
		->args({"self","linearDamping"});
	using _method_130 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetAngularDamping >;
	addExtern<DAS_CALL_METHOD(_method_130)>(*this,lib,"GetAngularDamping",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetAngularDamping >::invoke")
		->args({"self"});
	using _method_131 = das::das_call_member< void (b2Body::*)(float),&b2Body::SetAngularDamping >;
	addExtern<DAS_CALL_METHOD(_method_131)>(*this,lib,"SetAngularDamping",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float) , &b2Body::SetAngularDamping >::invoke")
		->args({"self","angularDamping"});
	using _method_132 = das::das_call_member< float (b2Body::*)() const,&b2Body::GetGravityScale >;
	addExtern<DAS_CALL_METHOD(_method_132)>(*this,lib,"GetGravityScale",SideEffects::worstDefault,"das_call_member< float (b2Body::*)() const , &b2Body::GetGravityScale >::invoke")
		->args({"self"});
	using _method_133 = das::das_call_member< void (b2Body::*)(float),&b2Body::SetGravityScale >;
	addExtern<DAS_CALL_METHOD(_method_133)>(*this,lib,"SetGravityScale",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(float) , &b2Body::SetGravityScale >::invoke")
		->args({"self","scale"});
}
}

