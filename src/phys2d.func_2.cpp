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
void Module_phys2d::initFunctions_2() {
	using _method_6 = das::das_call_member< void (b2Mat33::*)(),&b2Mat33::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_6)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)() , &b2Mat33::SetZero >::invoke")
		->args({"self"});
	using _method_7 = das::das_call_member< b2Vec3 (b2Mat33::*)(const b2Vec3 &) const,&b2Mat33::Solve33 >;
	addExtern<DAS_CALL_METHOD(_method_7)>(*this,lib,"Solve33",SideEffects::worstDefault,"das_call_member< b2Vec3 (b2Mat33::*)(const b2Vec3 &) const , &b2Mat33::Solve33 >::invoke")
		->args({"self","b"});
	using _method_8 = das::das_call_member< b2Vec2 (b2Mat33::*)(const b2Vec2 &) const,&b2Mat33::Solve22 >;
	addExtern<DAS_CALL_METHOD(_method_8)>(*this,lib,"Solve22",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Mat33::*)(const b2Vec2 &) const , &b2Mat33::Solve22 >::invoke")
		->args({"self","b"});
	using _method_9 = das::das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetInverse22 >;
	addExtern<DAS_CALL_METHOD(_method_9)>(*this,lib,"GetInverse22",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(b2Mat33 *) const , &b2Mat33::GetInverse22 >::invoke")
		->args({"self","M"});
	using _method_10 = das::das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetSymInverse33 >;
	addExtern<DAS_CALL_METHOD(_method_10)>(*this,lib,"GetSymInverse33",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(b2Mat33 *) const , &b2Mat33::GetSymInverse33 >::invoke")
		->args({"self","M"});
	addCtorAndUsing<b2Rot>(*this,lib,"b2Rot","b2Rot");
	addCtorAndUsing<b2Rot,float>(*this,lib,"b2Rot","b2Rot")
		->args({"angle"});
	using _method_11 = das::das_call_member< void (b2Rot::*)(float),&b2Rot::Set >;
	addExtern<DAS_CALL_METHOD(_method_11)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)(float) , &b2Rot::Set >::invoke")
		->args({"self","angle"});
	using _method_12 = das::das_call_member< void (b2Rot::*)(),&b2Rot::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_12)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)() , &b2Rot::SetIdentity >::invoke")
		->args({"self"});
	using _method_13 = das::das_call_member< float (b2Rot::*)() const,&b2Rot::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_13)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Rot::*)() const , &b2Rot::GetAngle >::invoke")
		->args({"self"});
	using _method_14 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetXAxis >;
	addExtern<DAS_CALL_METHOD(_method_14)>(*this,lib,"GetXAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const , &b2Rot::GetXAxis >::invoke")
		->args({"self"});
	using _method_15 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetYAxis >;
	addExtern<DAS_CALL_METHOD(_method_15)>(*this,lib,"GetYAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const , &b2Rot::GetYAxis >::invoke")
		->args({"self"});
	addCtorAndUsing<b2Transform>(*this,lib,"b2Transform","b2Transform");
	addCtorAndUsing<b2Transform,const b2Vec2 &,const b2Rot &>(*this,lib,"b2Transform","b2Transform")
		->args({"position","rotation"});
	using _method_16 = das::das_call_member< void (b2Transform::*)(),&b2Transform::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_16)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)() , &b2Transform::SetIdentity >::invoke")
		->args({"self"});
	using _method_17 = das::das_call_member< void (b2Transform::*)(const b2Vec2 &,float),&b2Transform::Set >;
	addExtern<DAS_CALL_METHOD(_method_17)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)(const b2Vec2 &,float) , &b2Transform::Set >::invoke")
		->args({"self","position","angle"});
	using _method_18 = das::das_call_member< void (b2Sweep::*)(b2Transform *,float) const,&b2Sweep::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_18)>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(b2Transform *,float) const , &b2Sweep::GetTransform >::invoke")
		->args({"self","transform","beta"});
	using _method_19 = das::das_call_member< void (b2Sweep::*)(float),&b2Sweep::Advance >;
	addExtern<DAS_CALL_METHOD(_method_19)>(*this,lib,"Advance",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(float) , &b2Sweep::Advance >::invoke")
		->args({"self","alpha"});
	using _method_20 = das::das_call_member< void (b2Sweep::*)(),&b2Sweep::Normalize >;
	addExtern<DAS_CALL_METHOD(_method_20)>(*this,lib,"Normalize",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)() , &b2Sweep::Normalize >::invoke")
		->args({"self"});
	addExtern< float (*)(const b2Vec2 &,const b2Vec2 &) , b2Dot >(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
}
}

