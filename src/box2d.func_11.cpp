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
void Module_box2d::initFunctions_11() {
	using _method_164 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetDensity >;
	addExtern<DAS_CALL_METHOD(_method_164)>(*this,lib,"GetDensity",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetDensity >::invoke")
		->args({"self"});
	using _method_165 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetFriction >;
	addExtern<DAS_CALL_METHOD(_method_165)>(*this,lib,"GetFriction",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetFriction >::invoke")
		->args({"self"});
	using _method_166 = das::das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetFriction >;
	addExtern<DAS_CALL_METHOD(_method_166)>(*this,lib,"SetFriction",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetFriction >::invoke")
		->args({"self","friction"});
	using _method_167 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetRestitution >;
	addExtern<DAS_CALL_METHOD(_method_167)>(*this,lib,"GetRestitution",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetRestitution >::invoke")
		->args({"self"});
	using _method_168 = das::das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetRestitution >;
	addExtern<DAS_CALL_METHOD(_method_168)>(*this,lib,"SetRestitution",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetRestitution >::invoke")
		->args({"self","restitution"});
	using _method_169 = das::das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetRestitutionThreshold >;
	addExtern<DAS_CALL_METHOD(_method_169)>(*this,lib,"GetRestitutionThreshold",SideEffects::worstDefault,"das_call_member< float (b2Fixture::*)() const,&b2Fixture::GetRestitutionThreshold >::invoke")
		->args({"self"});
	using _method_170 = das::das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetRestitutionThreshold >;
	addExtern<DAS_CALL_METHOD(_method_170)>(*this,lib,"SetRestitutionThreshold",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(float),&b2Fixture::SetRestitutionThreshold >::invoke")
		->args({"self","threshold"});
	using _method_171 = das::das_call_member< const b2AABB & (b2Fixture::*)(int) const,&b2Fixture::GetAABB >;
	addExtern<DAS_CALL_METHOD(_method_171), SimNode_ExtFuncCallRef>(*this,lib,"GetAABB",SideEffects::worstDefault,"das_call_member< const b2AABB & (b2Fixture::*)(int) const,&b2Fixture::GetAABB >::invoke")
		->args({"self","childIndex"});
	using _method_172 = das::das_call_member< void (b2Fixture::*)(int),&b2Fixture::Dump >;
	addExtern<DAS_CALL_METHOD(_method_172)>(*this,lib,"Dump",SideEffects::worstDefault,"das_call_member< void (b2Fixture::*)(int),&b2Fixture::Dump >::invoke")
		->args({"self","bodyIndex"});
	addExtern<float (*)(float,float),b2MixFriction>(*this,lib,"b2MixFriction",SideEffects::worstDefault,"b2MixFriction")
		->args({"friction1","friction2"});
	addExtern<float (*)(float,float),b2MixRestitution>(*this,lib,"b2MixRestitution",SideEffects::worstDefault,"b2MixRestitution")
		->args({"restitution1","restitution2"});
	addExtern<float (*)(float,float),b2MixRestitutionThreshold>(*this,lib,"b2MixRestitutionThreshold",SideEffects::worstDefault,"b2MixRestitutionThreshold")
		->args({"threshold1","threshold2"});
	using _method_173 = das::das_call_member< b2Manifold * (b2Contact::*)(),&b2Contact::GetManifold >;
	addExtern<DAS_CALL_METHOD(_method_173)>(*this,lib,"GetManifold",SideEffects::worstDefault,"das_call_member< b2Manifold * (b2Contact::*)(),&b2Contact::GetManifold >::invoke")
		->args({"self"});
	using _method_174 = das::das_call_member< const b2Manifold * (b2Contact::*)() const,&b2Contact::GetManifold >;
	addExtern<DAS_CALL_METHOD(_method_174)>(*this,lib,"GetManifold",SideEffects::worstDefault,"das_call_member< const b2Manifold * (b2Contact::*)() const,&b2Contact::GetManifold >::invoke")
		->args({"self"});
	//using _method_175 = das::das_call_member< void (b2Contact::*)(b2WorldManifold *) const,&b2Contact::GetWorldManifold >;
	//addExtern<DAS_CALL_METHOD(_method_175)>(*this,lib,"GetWorldManifold",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)(b2WorldManifold *) const,&b2Contact::GetWorldManifold >::invoke")
	//	->args({"self","worldManifold"});
	using _method_176 = das::das_call_member< bool (b2Contact::*)() const,&b2Contact::IsTouching >;
	addExtern<DAS_CALL_METHOD(_method_176)>(*this,lib,"IsTouching",SideEffects::worstDefault,"das_call_member< bool (b2Contact::*)() const,&b2Contact::IsTouching >::invoke")
		->args({"self"});
	using _method_177 = das::das_call_member< void (b2Contact::*)(bool),&b2Contact::SetEnabled >;
	addExtern<DAS_CALL_METHOD(_method_177)>(*this,lib,"SetEnabled",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)(bool),&b2Contact::SetEnabled >::invoke")
		->args({"self","flag"});
	using _method_178 = das::das_call_member< bool (b2Contact::*)() const,&b2Contact::IsEnabled >;
	addExtern<DAS_CALL_METHOD(_method_178)>(*this,lib,"IsEnabled",SideEffects::worstDefault,"das_call_member< bool (b2Contact::*)() const,&b2Contact::IsEnabled >::invoke")
		->args({"self"});
	using _method_179 = das::das_call_member< b2Contact * (b2Contact::*)(),&b2Contact::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_179)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Contact * (b2Contact::*)(),&b2Contact::GetNext >::invoke")
		->args({"self"});
	using _method_180 = das::das_call_member< const b2Contact * (b2Contact::*)() const,&b2Contact::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_180)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Contact * (b2Contact::*)() const,&b2Contact::GetNext >::invoke")
		->args({"self"});
}
}

