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
void Module_phys2d::initFunctions_14() {
	using _method_191 = das::das_call_member< const b2Fixture * (b2Contact::*)() const,&b2Contact::GetFixtureB >;
	addExtern<DAS_CALL_METHOD(_method_191)>(*this,lib,"GetFixtureB",SideEffects::worstDefault,"das_call_member< const b2Fixture * (b2Contact::*)() const , &b2Contact::GetFixtureB >::invoke")
		->args({"self"});
	using _method_192 = das::das_call_member< int (b2Contact::*)() const,&b2Contact::GetChildIndexB >;
	addExtern<DAS_CALL_METHOD(_method_192)>(*this,lib,"GetChildIndexB",SideEffects::worstDefault,"das_call_member< int (b2Contact::*)() const , &b2Contact::GetChildIndexB >::invoke")
		->args({"self"});
	using _method_193 = das::das_call_member< void (b2Contact::*)(float),&b2Contact::SetFriction >;
	addExtern<DAS_CALL_METHOD(_method_193)>(*this,lib,"SetFriction",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)(float) , &b2Contact::SetFriction >::invoke")
		->args({"self","friction"});
	using _method_194 = das::das_call_member< float (b2Contact::*)() const,&b2Contact::GetFriction >;
	addExtern<DAS_CALL_METHOD(_method_194)>(*this,lib,"GetFriction",SideEffects::worstDefault,"das_call_member< float (b2Contact::*)() const , &b2Contact::GetFriction >::invoke")
		->args({"self"});
	using _method_195 = das::das_call_member< void (b2Contact::*)(),&b2Contact::ResetFriction >;
	addExtern<DAS_CALL_METHOD(_method_195)>(*this,lib,"ResetFriction",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)() , &b2Contact::ResetFriction >::invoke")
		->args({"self"});
	using _method_196 = das::das_call_member< void (b2Contact::*)(float),&b2Contact::SetRestitution >;
	addExtern<DAS_CALL_METHOD(_method_196)>(*this,lib,"SetRestitution",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)(float) , &b2Contact::SetRestitution >::invoke")
		->args({"self","restitution"});
	using _method_197 = das::das_call_member< float (b2Contact::*)() const,&b2Contact::GetRestitution >;
	addExtern<DAS_CALL_METHOD(_method_197)>(*this,lib,"GetRestitution",SideEffects::worstDefault,"das_call_member< float (b2Contact::*)() const , &b2Contact::GetRestitution >::invoke")
		->args({"self"});
	using _method_198 = das::das_call_member< void (b2Contact::*)(),&b2Contact::ResetRestitution >;
	addExtern<DAS_CALL_METHOD(_method_198)>(*this,lib,"ResetRestitution",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)() , &b2Contact::ResetRestitution >::invoke")
		->args({"self"});
	using _method_199 = das::das_call_member< void (b2Contact::*)(float),&b2Contact::SetRestitutionThreshold >;
	addExtern<DAS_CALL_METHOD(_method_199)>(*this,lib,"SetRestitutionThreshold",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)(float) , &b2Contact::SetRestitutionThreshold >::invoke")
		->args({"self","threshold"});
	using _method_200 = das::das_call_member< float (b2Contact::*)() const,&b2Contact::GetRestitutionThreshold >;
	addExtern<DAS_CALL_METHOD(_method_200)>(*this,lib,"GetRestitutionThreshold",SideEffects::worstDefault,"das_call_member< float (b2Contact::*)() const , &b2Contact::GetRestitutionThreshold >::invoke")
		->args({"self"});
	using _method_201 = das::das_call_member< void (b2Contact::*)(),&b2Contact::ResetRestitutionThreshold >;
	addExtern<DAS_CALL_METHOD(_method_201)>(*this,lib,"ResetRestitutionThreshold",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)() , &b2Contact::ResetRestitutionThreshold >::invoke")
		->args({"self"});
	using _method_202 = das::das_call_member< void (b2Contact::*)(float),&b2Contact::SetTangentSpeed >;
	addExtern<DAS_CALL_METHOD(_method_202)>(*this,lib,"SetTangentSpeed",SideEffects::worstDefault,"das_call_member< void (b2Contact::*)(float) , &b2Contact::SetTangentSpeed >::invoke")
		->args({"self","speed"});
	using _method_203 = das::das_call_member< float (b2Contact::*)() const,&b2Contact::GetTangentSpeed >;
	addExtern<DAS_CALL_METHOD(_method_203)>(*this,lib,"GetTangentSpeed",SideEffects::worstDefault,"das_call_member< float (b2Contact::*)() const , &b2Contact::GetTangentSpeed >::invoke")
		->args({"self"});
	addCtorAndUsing<b2BlockAllocator>(*this,lib,"b2BlockAllocator","b2BlockAllocator");
	using _method_204 = das::das_call_member< void * (b2BlockAllocator::*)(int),&b2BlockAllocator::Allocate >;
	addExtern<DAS_CALL_METHOD(_method_204)>(*this,lib,"Allocate",SideEffects::worstDefault,"das_call_member< void * (b2BlockAllocator::*)(int) , &b2BlockAllocator::Allocate >::invoke")
		->args({"self","size"});
	using _method_205 = das::das_call_member< void (b2BlockAllocator::*)(void *,int),&b2BlockAllocator::Free >;
	addExtern<DAS_CALL_METHOD(_method_205)>(*this,lib,"Free",SideEffects::worstDefault,"das_call_member< void (b2BlockAllocator::*)(void *,int) , &b2BlockAllocator::Free >::invoke")
		->args({"self","p","size"});
	using _method_206 = das::das_call_member< void (b2BlockAllocator::*)(),&b2BlockAllocator::Clear >;
	addExtern<DAS_CALL_METHOD(_method_206)>(*this,lib,"Clear",SideEffects::worstDefault,"das_call_member< void (b2BlockAllocator::*)() , &b2BlockAllocator::Clear >::invoke")
		->args({"self"});
	addCtorAndUsing<b2ContactManager>(*this,lib,"b2ContactManager","b2ContactManager");
	using _method_207 = das::das_call_member< void (b2ContactManager::*)(void *,void *),&b2ContactManager::AddPair >;
	addExtern<DAS_CALL_METHOD(_method_207)>(*this,lib,"AddPair",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)(void *,void *) , &b2ContactManager::AddPair >::invoke")
		->args({"self","proxyUserDataA","proxyUserDataB"});
	using _method_208 = das::das_call_member< void (b2ContactManager::*)(),&b2ContactManager::FindNewContacts >;
	addExtern<DAS_CALL_METHOD(_method_208)>(*this,lib,"FindNewContacts",SideEffects::worstDefault,"das_call_member< void (b2ContactManager::*)() , &b2ContactManager::FindNewContacts >::invoke")
		->args({"self"});
}
}

