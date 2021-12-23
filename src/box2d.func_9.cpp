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
void Module_box2d::initFunctions_9() {
	using _method_124 = das::das_call_member< b2BodyType (b2Body::*)() const,&b2Body::GetType >;
	addExtern<DAS_CALL_METHOD(_method_124)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2BodyType (b2Body::*)() const,&b2Body::GetType >::invoke")
		->args({"self"});
	using _method_125 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetBullet >;
	addExtern<DAS_CALL_METHOD(_method_125)>(*this,lib,"SetBullet",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool),&b2Body::SetBullet >::invoke")
		->args({"self","flag"});
	using _method_126 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsBullet >;
	addExtern<DAS_CALL_METHOD(_method_126)>(*this,lib,"IsBullet",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const,&b2Body::IsBullet >::invoke")
		->args({"self"});
	using _method_127 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetSleepingAllowed >;
	addExtern<DAS_CALL_METHOD(_method_127)>(*this,lib,"SetSleepingAllowed",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool),&b2Body::SetSleepingAllowed >::invoke")
		->args({"self","flag"});
	using _method_128 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsSleepingAllowed >;
	addExtern<DAS_CALL_METHOD(_method_128)>(*this,lib,"IsSleepingAllowed",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const,&b2Body::IsSleepingAllowed >::invoke")
		->args({"self"});
	using _method_129 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetAwake >;
	addExtern<DAS_CALL_METHOD(_method_129)>(*this,lib,"SetAwake",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool),&b2Body::SetAwake >::invoke")
		->args({"self","flag"});
	using _method_130 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsAwake >;
	addExtern<DAS_CALL_METHOD(_method_130)>(*this,lib,"IsAwake",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const,&b2Body::IsAwake >::invoke")
		->args({"self"});
	using _method_131 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetEnabled >;
	addExtern<DAS_CALL_METHOD(_method_131)>(*this,lib,"SetEnabled",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool),&b2Body::SetEnabled >::invoke")
		->args({"self","flag"});
	using _method_132 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsEnabled >;
	addExtern<DAS_CALL_METHOD(_method_132)>(*this,lib,"IsEnabled",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const,&b2Body::IsEnabled >::invoke")
		->args({"self"});
	using _method_133 = das::das_call_member< void (b2Body::*)(bool),&b2Body::SetFixedRotation >;
	addExtern<DAS_CALL_METHOD(_method_133)>(*this,lib,"SetFixedRotation",SideEffects::worstDefault,"das_call_member< void (b2Body::*)(bool),&b2Body::SetFixedRotation >::invoke")
		->args({"self","flag"});
	using _method_134 = das::das_call_member< bool (b2Body::*)() const,&b2Body::IsFixedRotation >;
	addExtern<DAS_CALL_METHOD(_method_134)>(*this,lib,"IsFixedRotation",SideEffects::worstDefault,"das_call_member< bool (b2Body::*)() const,&b2Body::IsFixedRotation >::invoke")
		->args({"self"});
	using _method_135 = das::das_call_member< b2Fixture * (b2Body::*)(),&b2Body::GetFixtureList >;
	addExtern<DAS_CALL_METHOD(_method_135)>(*this,lib,"GetFixtureList",SideEffects::worstDefault,"das_call_member< b2Fixture * (b2Body::*)(),&b2Body::GetFixtureList >::invoke")
		->args({"self"});
	using _method_136 = das::das_call_member< const b2Fixture * (b2Body::*)() const,&b2Body::GetFixtureList >;
	addExtern<DAS_CALL_METHOD(_method_136)>(*this,lib,"GetFixtureList",SideEffects::worstDefault,"das_call_member< const b2Fixture * (b2Body::*)() const,&b2Body::GetFixtureList >::invoke")
		->args({"self"});
	using _method_137 = das::das_call_member< b2JointEdge * (b2Body::*)(),&b2Body::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_137)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< b2JointEdge * (b2Body::*)(),&b2Body::GetJointList >::invoke")
		->args({"self"});
	using _method_138 = das::das_call_member< const b2JointEdge * (b2Body::*)() const,&b2Body::GetJointList >;
	addExtern<DAS_CALL_METHOD(_method_138)>(*this,lib,"GetJointList",SideEffects::worstDefault,"das_call_member< const b2JointEdge * (b2Body::*)() const,&b2Body::GetJointList >::invoke")
		->args({"self"});
	using _method_139 = das::das_call_member< b2ContactEdge * (b2Body::*)(),&b2Body::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_139)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< b2ContactEdge * (b2Body::*)(),&b2Body::GetContactList >::invoke")
		->args({"self"});
	using _method_140 = das::das_call_member< const b2ContactEdge * (b2Body::*)() const,&b2Body::GetContactList >;
	addExtern<DAS_CALL_METHOD(_method_140)>(*this,lib,"GetContactList",SideEffects::worstDefault,"das_call_member< const b2ContactEdge * (b2Body::*)() const,&b2Body::GetContactList >::invoke")
		->args({"self"});
	using _method_141 = das::das_call_member< b2Body * (b2Body::*)(),&b2Body::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_141)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Body * (b2Body::*)(),&b2Body::GetNext >::invoke")
		->args({"self"});
	using _method_142 = das::das_call_member< const b2Body * (b2Body::*)() const,&b2Body::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_142)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Body * (b2Body::*)() const,&b2Body::GetNext >::invoke")
		->args({"self"});
	using _method_143 = das::das_call_member< b2BodyUserData & (b2Body::*)(),&b2Body::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_143), SimNode_ExtFuncCallRef>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< b2BodyUserData & (b2Body::*)(),&b2Body::GetUserData >::invoke")
		->args({"self"});
}
}

