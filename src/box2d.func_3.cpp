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
void Module_box2d::initFunctions_3() {
	using _method_24 = das::das_call_member< b2Vec2 (b2Mat22::*)(const b2Vec2 &) const,&b2Mat22::Solve >;
	addExtern<DAS_CALL_METHOD(_method_24),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Solve",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Mat22::*)(const b2Vec2 &) const , &b2Mat22::Solve >::invoke")
		->args({"self","b"});
	addCtorAndUsing<b2Mat33>(*this,lib,"b2Mat33","b2Mat33");
	addCtorAndUsing<b2Mat33,const b2Vec3 &,const b2Vec3 &,const b2Vec3 &>(*this,lib,"b2Mat33","b2Mat33")
		->args({"c1","c2","c3"});
	using _method_25 = das::das_call_member< void (b2Mat33::*)(),&b2Mat33::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_25)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)() , &b2Mat33::SetZero >::invoke")
		->args({"self"});
	using _method_26 = das::das_call_member< b2Vec3 (b2Mat33::*)(const b2Vec3 &) const,&b2Mat33::Solve33 >;
	addExtern<DAS_CALL_METHOD(_method_26),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Solve33",SideEffects::worstDefault,"das_call_member< b2Vec3 (b2Mat33::*)(const b2Vec3 &) const , &b2Mat33::Solve33 >::invoke")
		->args({"self","b"});
	using _method_27 = das::das_call_member< b2Vec2 (b2Mat33::*)(const b2Vec2 &) const,&b2Mat33::Solve22 >;
	addExtern<DAS_CALL_METHOD(_method_27),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Solve22",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Mat33::*)(const b2Vec2 &) const , &b2Mat33::Solve22 >::invoke")
		->args({"self","b"});
	using _method_28 = das::das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetInverse22 >;
	addExtern<DAS_CALL_METHOD(_method_28)>(*this,lib,"GetInverse22",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(b2Mat33 *) const , &b2Mat33::GetInverse22 >::invoke")
		->args({"self","M"});
	using _method_29 = das::das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetSymInverse33 >;
	addExtern<DAS_CALL_METHOD(_method_29)>(*this,lib,"GetSymInverse33",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(b2Mat33 *) const , &b2Mat33::GetSymInverse33 >::invoke")
		->args({"self","M"});
	addCtorAndUsing<b2Rot>(*this,lib,"b2Rot","b2Rot");
	addCtorAndUsing<b2Rot,float>(*this,lib,"b2Rot","b2Rot")
		->args({"angle"});
	using _method_30 = das::das_call_member< void (b2Rot::*)(float),&b2Rot::Set >;
	addExtern<DAS_CALL_METHOD(_method_30)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)(float) , &b2Rot::Set >::invoke")
		->args({"self","angle"});
	using _method_31 = das::das_call_member< void (b2Rot::*)(),&b2Rot::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_31)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)() , &b2Rot::SetIdentity >::invoke")
		->args({"self"});
	using _method_32 = das::das_call_member< float (b2Rot::*)() const,&b2Rot::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_32)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Rot::*)() const , &b2Rot::GetAngle >::invoke")
		->args({"self"});
	using _method_33 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetXAxis >;
	addExtern<DAS_CALL_METHOD(_method_33),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetXAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const , &b2Rot::GetXAxis >::invoke")
		->args({"self"});
	using _method_34 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetYAxis >;
	addExtern<DAS_CALL_METHOD(_method_34),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetYAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const , &b2Rot::GetYAxis >::invoke")
		->args({"self"});
	addCtorAndUsing<b2Transform>(*this,lib,"b2Transform","b2Transform");
	addCtorAndUsing<b2Transform,const b2Vec2 &,const b2Rot &>(*this,lib,"b2Transform","b2Transform")
		->args({"position","rotation"});
	using _method_35 = das::das_call_member< void (b2Transform::*)(),&b2Transform::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_35)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)() , &b2Transform::SetIdentity >::invoke")
		->args({"self"});
	using _method_36 = das::das_call_member< void (b2Transform::*)(const b2Vec2 &,float),&b2Transform::Set >;
	addExtern<DAS_CALL_METHOD(_method_36)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)(const b2Vec2 &,float) , &b2Transform::Set >::invoke")
		->args({"self","position","angle"});
	using _method_37 = das::das_call_member< void (b2Sweep::*)(b2Transform *,float) const,&b2Sweep::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_37)>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(b2Transform *,float) const , &b2Sweep::GetTransform >::invoke")
		->args({"self","transform","beta"});
}
}

