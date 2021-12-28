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
void Module_phys2d::initFunctions_12() {
	using _method_154 = das::das_call_member< b2Shape * (b2Fixture::*)(),&b2Fixture::GetShape >;
	addExtern<DAS_CALL_METHOD(_method_154)>(*this,lib,"GetShape",SideEffects::worstDefault,"das_call_member< b2Shape * (b2Fixture::*)() , &b2Fixture::GetShape >::invoke")
		->args({"self"});
	using _method_155 = das::das_call_member< const b2Shape * (b2Fixture::*)() const,&b2Fixture::GetShape >;
	addExtern<DAS_CALL_METHOD(_method_155)>(*this,lib,"GetShape",SideEffects::worstDefault,"das_call_member< const b2Shape * (b2Fixture::*)() const , &b2Fixture::GetShape >::invoke")
		->args({"self"});
	using _method_156 = das::das_call_member< void (b2Fixture::*)(bool),&b2Fixture::SetSensor >;
	addExtern<DAS_CALL_METHOD(_method_156)>(*this,lib,"SetSensor",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(bool) , &b2Fixture::SetSensor >::invoke")
		->args({"self","sensor"});
	using _method_157 = das::das_call_member< bool (b2Fixture::*)() const,&b2Fixture::IsSensor >;
	addExtern<DAS_CALL_METHOD(_method_157)>(*this,lib,"IsSensor",SideEffects::worstDefault,"das_call_member< bool (b2Fixture::*)() const , &b2Fixture::IsSensor >::invoke")
		->args({"self"});
	using _method_158 = das::das_call_member< void (b2Fixture::*)(const b2Filter &),&b2Fixture::SetFilterData >;
	addExtern<DAS_CALL_METHOD(_method_158)>(*this,lib,"SetFilterData",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(const b2Filter &) , &b2Fixture::SetFilterData >::invoke")
		->args({"self","filter"});
	using _method_159 = das::das_call_member< const b2Filter & (b2Fixture::*)() const,&b2Fixture::GetFilterData >;
	addExtern<DAS_CALL_METHOD(_method_159), SimNode_ExtFuncCallRef>(*this,lib,"GetFilterData",SideEffects::worstDefault,"das_call_member< const b2Filter & (b2Fixture::*)() const , &b2Fixture::GetFilterData >::invoke")
		->args({"self"});
	using _method_160 = das::das_call_member< void (b2Fixture::*)(),&b2Fixture::Refilter >;
	addExtern<DAS_CALL_METHOD(_method_160)>(*this,lib,"Refilter",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)() , &b2Fixture::Refilter >::invoke")
		->args({"self"});
	using _method_161 = das::das_call_member< b2Body * (b2Fixture::*)(),&b2Fixture::GetBody >;
	addExtern<DAS_CALL_METHOD(_method_161)>(*this,lib,"GetBody",SideEffects::worstDefault,"das_call_member< b2Body * (b2Fixture::*)() , &b2Fixture::GetBody >::invoke")
		->args({"self"});
	using _method_162 = das::das_call_member< const b2Body * (b2Fixture::*)() const,&b2Fixture::GetBody >;
	addExtern<DAS_CALL_METHOD(_method_162)>(*this,lib,"GetBody",SideEffects::worstDefault,"das_call_member< const b2Body * (b2Fixture::*)() const , &b2Fixture::GetBody >::invoke")
		->args({"self"});
	using _method_163 = das::das_call_member< b2Fixture * (b2Fixture::*)(),&b2Fixture::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_163)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Fixture::*)() , &b2Fixture::GetNext >::invoke")
		->args({"self"});
	using _method_164 = das::das_call_member< const b2Fixture * (b2Fixture::*)() const,&b2Fixture::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_164)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Fixture * (b2Fixture::*)() const , &b2Fixture::GetNext >::invoke")
		->args({"self"});
	using _method_165 = das::das_call_member< b2FixtureUserData & (b2Fixture::*)(),&b2Fixture::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_165), SimNode_ExtFuncCallRef>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< b2FixtureUserData & (b2Fixture::*)() , &b2Fixture::GetUserData >::invoke")
		->args({"self"});
	using _method_166 = das::das_call_member< bool (b2Fixture::*)(const b2Vec2 &) const,&b2Fixture::TestPoint >;
	addExtern<DAS_CALL_METHOD(_method_166)>(*this,lib,"TestPoint",SideEffects::worstDefault,"das_call_member< bool (b2Fixture::*)(const b2Vec2 &) const , &b2Fixture::TestPoint >::invoke")
		->args({"self","p"});
	using _method_167 = das::das_call_member< bool (b2Fixture::*)(b2RayCastOutput *,const b2RayCastInput &,int) const,&b2Fixture::RayCast >;
	addExtern<DAS_CALL_METHOD(_method_167)>(*this,lib,"RayCast",SideEffects::worstDefault,"das_call_member< bool (b2Fixture::*)(b2RayCastOutput *,const b2RayCastInput &,int) const , &b2Fixture::RayCast >::invoke")
		->args({"self","output","input","childIndex"});
	using _method_168 = das::das_call_member< void (b2Fixture::*)(b2MassData *) const,&b2Fixture::GetMassData >;
	addExtern<DAS_CALL_METHOD(_method_168)>(*this,lib,"GetMassData",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(b2MassData *) const , &b2Fixture::GetMassData >::invoke")
		->args({"self","massData"});
	using _method_169 = das::das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetDensity >;
	addExtern<DAS_CALL_METHOD(_method_169)>(*this,lib,"SetDensity",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(float) , &b2Fixture::SetDensity >::invoke")
		->args({"self","density"});
	using _method_170 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetDensity >;
	addExtern<DAS_CALL_METHOD(_method_170)>(*this,lib,"GetDensity",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const , &b2Fixture::GetDensity >::invoke")
		->args({"self"});
	using _method_171 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetFriction >;
	addExtern<DAS_CALL_METHOD(_method_171)>(*this,lib,"GetFriction",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const , &b2Fixture::GetFriction >::invoke")
		->args({"self"});
	using _method_172 = das::das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetFriction >;
	addExtern<DAS_CALL_METHOD(_method_172)>(*this,lib,"SetFriction",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(float) , &b2Fixture::SetFriction >::invoke")
		->args({"self","friction"});
	using _method_173 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetRestitution >;
	addExtern<DAS_CALL_METHOD(_method_173)>(*this,lib,"GetRestitution",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const , &b2Fixture::GetRestitution >::invoke")
		->args({"self"});
}
}

