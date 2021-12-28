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
void Module_phys2d::initFunctions_11() {
	using _method_136 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsAwake >;
	addExtern<DAS_CALL_METHOD(_method_136)>(*this,lib,"IsAwake",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const , &b2Body::IsAwake >::invoke")
		->args({"self"});
	using _method_137 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetEnabled >;
	addExtern<DAS_CALL_METHOD(_method_137)>(*this,lib,"SetEnabled",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool) , &b2Body::SetEnabled >::invoke")
		->args({"self","flag"});
	using _method_138 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsEnabled >;
	addExtern<DAS_CALL_METHOD(_method_138)>(*this,lib,"IsEnabled",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const , &b2Body::IsEnabled >::invoke")
		->args({"self"});
	using _method_139 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetFixedRotation >;
	addExtern<DAS_CALL_METHOD(_method_139)>(*this,lib,"SetFixedRotation",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool) , &b2Body::SetFixedRotation >::invoke")
		->args({"self","flag"});
	using _method_140 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsFixedRotation >;
	addExtern<DAS_CALL_METHOD(_method_140)>(*this,lib,"IsFixedRotation",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const , &b2Body::IsFixedRotation >::invoke")
		->args({"self"});
	using _method_141 = das::das_call_member< b2Fixture * (b2Body::*)(),&b2Body::GetFixtureList >;
	addExtern<DAS_CALL_METHOD(_method_141)>(*this,lib,"GetFixtureList",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Body::*)() , &b2Body::GetFixtureList >::invoke")
		->args({"self"});
	using _method_142 = das::das_call_member< const b2Fixture * (b2Body::*)() const,&b2Body::GetFixtureList >;
	addExtern<DAS_CALL_METHOD(_method_142)>(*this,lib,"GetFixtureList",SideEffects::worstDefault,"das_call_member< const b2Fixture * (b2Body::*)() const , &b2Body::GetFixtureList >::invoke")
		->args({"self"});
	using _method_143 = das::das_call_member< b2JointEdge * (b2Body::*)(),&b2Body::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_143)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< b2JointEdge * (b2Body::*)() , &b2Body::GetJointList >::invoke")
		->args({"self"});
	using _method_144 = das::das_call_member< const b2JointEdge * (b2Body::*)() const,&b2Body::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_144)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< const b2JointEdge * (b2Body::*)() const , &b2Body::GetJointList >::invoke")
		->args({"self"});
	using _method_145 = das::das_call_member< b2ContactEdge * (b2Body::*)(),&b2Body::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_145)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< b2ContactEdge * (b2Body::*)() , &b2Body::GetContactList >::invoke")
		->args({"self"});
	using _method_146 = das::das_call_member< const b2ContactEdge * (b2Body::*)() const,&b2Body::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_146)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< const b2ContactEdge * (b2Body::*)() const , &b2Body::GetContactList >::invoke")
		->args({"self"});
	using _method_147 = das::das_call_member< b2Body * (b2Body::*)(),&b2Body::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_147)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Body * (b2Body::*)() , &b2Body::GetNext >::invoke")
		->args({"self"});
	using _method_148 = das::das_call_member< const b2Body * (b2Body::*)() const,&b2Body::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_148)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Body * (b2Body::*)() const , &b2Body::GetNext >::invoke")
		->args({"self"});
	using _method_149 = das::das_call_member< b2BodyUserData & (b2Body::*)(),&b2Body::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_149), SimNode_ExtFuncCallRef>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< b2BodyUserData & (b2Body::*)() , &b2Body::GetUserData >::invoke")
		->args({"self"});
	using _method_150 = das::das_call_member< b2World * (b2Body::*)(),&b2Body::GetWorld >;
	addExtern<DAS_CALL_METHOD(_method_150)>(*this,lib,"GetWorld",SideEffects::worstDefault,"das_call_member< b2World * (b2Body::*)() , &b2Body::GetWorld >::invoke")
		->args({"self"});
	using _method_151 = das::das_call_member< const b2World * (b2Body::*)() const,&b2Body::GetWorld >;
	addExtern<DAS_CALL_METHOD(_method_151)>(*this,lib,"GetWorld",SideEffects::worstDefault,"das_call_member< const b2World * (b2Body::*)() const , &b2Body::GetWorld >::invoke")
		->args({"self"});
	using _method_152 = das::das_call_member< void (b2Body::*)(),&b2Body::Dump >;
	addExtern<DAS_CALL_METHOD(_method_152)>(*this,lib,"Dump",SideEffects::worstDefault,"das_call_member< void (b2Body::*)() , &b2Body::Dump >::invoke")
		->args({"self"});
	addCtorAndUsing<b2Filter>(*this,lib,"b2Filter","b2Filter");
	addCtorAndUsing<b2FixtureDef>(*this,lib,"b2FixtureDef","b2FixtureDef");
	using _method_153 = das::das_call_member< b2Shape::Type (b2Fixture::*)() const,&b2Fixture::GetType >;
	addExtern<DAS_CALL_METHOD(_method_153)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2Shape::Type (b2Fixture::*)() const , &b2Fixture::GetType >::invoke")
		->args({"self"});
}
}

