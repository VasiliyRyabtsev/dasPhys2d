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
	using _method_33 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetXAxis >;
	addExtern<DAS_CALL_METHOD(_method_33),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetXAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetXAxis >::invoke")
		->args({"self"});
	using _method_34 = das::das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetYAxis >;
	addExtern<DAS_CALL_METHOD(_method_34),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetYAxis",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Rot::*)() const,&b2Rot::GetYAxis >::invoke")
		->args({"self"});
	using _method_35 = das::das_call_member< void (b2Transform::*)(),&b2Transform::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_35)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)(),&b2Transform::SetIdentity >::invoke")
		->args({"self"});
	using _method_36 = das::das_call_member< void (b2Transform::*)(const b2Vec2 &,float),&b2Transform::Set >;
	addExtern<DAS_CALL_METHOD(_method_36)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Transform::*)(const b2Vec2 &,float),&b2Transform::Set >::invoke")
		->args({"self","position","angle"});
	using _method_37 = das::das_call_member< void (b2Sweep::*)(b2Transform *,float) const,&b2Sweep::GetTransform >;
	addExtern<DAS_CALL_METHOD(_method_37)>(*this,lib,"GetTransform",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(b2Transform *,float) const,&b2Sweep::GetTransform >::invoke")
		->args({"self","transform","beta"});
	using _method_38 = das::das_call_member< void (b2Sweep::*)(float),&b2Sweep::Advance >;
	addExtern<DAS_CALL_METHOD(_method_38)>(*this,lib,"Advance",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(float),&b2Sweep::Advance >::invoke")
		->args({"self","alpha"});
	using _method_39 = das::das_call_member< void (b2Sweep::*)(),&b2Sweep::Normalize >;
	addExtern<DAS_CALL_METHOD(_method_39)>(*this,lib,"Normalize",SideEffects::worstDefault,"das_call_member< void (b2Sweep::*)(),&b2Sweep::Normalize >::invoke")
		->args({"self"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2Dot>(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2Cross>(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","b"});
	addExtern<b2Vec2 (*)(const b2Vec2 &,float),b2Cross,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","s"});
	addExtern<b2Vec2 (*)(float,const b2Vec2 &),b2Cross,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"s","a"});
	addExtern<b2Vec2 (*)(const b2Mat22 &,const b2Vec2 &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","v"});
	addExtern<b2Vec2 (*)(const b2Mat22 &,const b2Vec2 &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","v"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2Distance>(*this,lib,"b2Distance",SideEffects::worstDefault,"b2Distance")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2DistanceSquared>(*this,lib,"b2DistanceSquared",SideEffects::worstDefault,"b2DistanceSquared")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec3 &,const b2Vec3 &),b2Dot>(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
	addExtern<b2Vec3 (*)(const b2Vec3 &,const b2Vec3 &),b2Cross,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","b"});
	addExtern<b2Mat22 (*)(const b2Mat22 &,const b2Mat22 &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","B"});
	addExtern<b2Mat22 (*)(const b2Mat22 &,const b2Mat22 &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","B"});
	addExtern<b2Vec3 (*)(const b2Mat33 &,const b2Vec3 &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","v"});
}
}

