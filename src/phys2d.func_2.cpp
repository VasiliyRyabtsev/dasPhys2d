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
	using _method_6 = das::das_call_member< void (b2Rot::*)(float),&b2Rot::Set >;
	addExtern<DAS_CALL_METHOD(_method_6)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)(float) , &b2Rot::Set >::invoke")
		->args({"self","angle"});
	using _method_7 = das::das_call_member< void (b2Rot::*)(),&b2Rot::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_7)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)() , &b2Rot::SetIdentity >::invoke")
		->args({"self"});
	using _method_8 = das::das_call_member< float (b2Rot::*)() const,&b2Rot::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_8)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Rot::*)() const , &b2Rot::GetAngle >::invoke")
		->args({"self"});
	using _method_9 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetXAxis >;
	addExtern<DAS_CALL_METHOD(_method_9)>(*this,lib,"GetXAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const , &b2Rot::GetXAxis >::invoke")
		->args({"self"});
	using _method_10 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetYAxis >;
	addExtern<DAS_CALL_METHOD(_method_10)>(*this,lib,"GetYAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const , &b2Rot::GetYAxis >::invoke")
		->args({"self"});
	addCtorAndUsing<b2Transform>(*this,lib,"b2Transform","b2Transform");
	addCtorAndUsing<b2Transform,const b2Vec2 &,const b2Rot &>(*this,lib,"b2Transform","b2Transform")
		->args({"position","rotation"});
	using _method_11 = das::das_call_member< void (b2Transform::*)(),&b2Transform::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_11)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)() , &b2Transform::SetIdentity >::invoke")
		->args({"self"});
	using _method_12 = das::das_call_member< void (b2Transform::*)(const b2Vec2 &,float),&b2Transform::Set >;
	addExtern<DAS_CALL_METHOD(_method_12)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)(const b2Vec2 &,float) , &b2Transform::Set >::invoke")
		->args({"self","position","angle"});
	using _method_13 = das::das_call_member< void (b2Sweep::*)(b2Transform *,float) const,&b2Sweep::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_13)>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(b2Transform *,float) const , &b2Sweep::GetTransform >::invoke")
		->args({"self","transform","beta"});
	using _method_14 = das::das_call_member< void (b2Sweep::*)(float),&b2Sweep::Advance >;
	addExtern<DAS_CALL_METHOD(_method_14)>(*this,lib,"Advance",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(float) , &b2Sweep::Advance >::invoke")
		->args({"self","alpha"});
	using _method_15 = das::das_call_member< void (b2Sweep::*)(),&b2Sweep::Normalize >;
	addExtern<DAS_CALL_METHOD(_method_15)>(*this,lib,"Normalize",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)() , &b2Sweep::Normalize >::invoke")
		->args({"self"});
	addExtern< float (*)(const b2Vec2 &,const b2Vec2 &) , b2Dot >(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
	addExtern< float (*)(const b2Vec2 &,const b2Vec2 &) , b2Cross >(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","b"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,float) , b2Cross >(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","s"});
	addExtern< b2Vec2 (*)(float,const b2Vec2 &) , b2Cross >(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"s","a"});
	addExtern< b2Vec2 (*)(const b2Mat22 &,const b2Vec2 &) , b2Mul >(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","v"});
	addExtern< b2Vec2 (*)(const b2Mat22 &,const b2Vec2 &) , b2MulT >(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","v"});
	addExtern< float (*)(const b2Vec2 &,const b2Vec2 &) , b2Distance >(*this,lib,"b2Distance",SideEffects::worstDefault,"b2Distance")
		->args({"a","b"});
	addExtern< float (*)(const b2Vec2 &,const b2Vec2 &) , b2DistanceSquared >(*this,lib,"b2DistanceSquared",SideEffects::worstDefault,"b2DistanceSquared")
		->args({"a","b"});
}
}

