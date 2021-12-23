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
void Module_box2d::initFunctions_4() {
	addExtern<b2Transform (*)(const b2Transform &,const b2Transform &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","B"});
	addExtern<b2Transform (*)(const b2Transform &,const b2Transform &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","B"});
	addExtern<b2Vec2 (*)(const b2Vec2 &),b2Abs,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Abs",SideEffects::worstDefault,"b2Abs")
		->args({"a"});
	addExtern<b2Mat22 (*)(const b2Mat22 &),b2Abs,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Abs",SideEffects::worstDefault,"b2Abs")
		->args({"A"});
	addExtern<b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &),b2Min,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Min",SideEffects::worstDefault,"b2Min")
		->args({"a","b"});
	addExtern<b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &),b2Max,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Max",SideEffects::worstDefault,"b2Max")
		->args({"a","b"});
	addExtern<b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),b2Clamp,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Clamp",SideEffects::worstDefault,"b2Clamp")
		->args({"a","low","high"});
	addExtern<unsigned int (*)(unsigned int),b2NextPowerOfTwo>(*this,lib,"b2NextPowerOfTwo",SideEffects::worstDefault,"b2NextPowerOfTwo")
		->args({"x"});
	addExtern<bool (*)(unsigned int),b2IsPowerOfTwo>(*this,lib,"b2IsPowerOfTwo",SideEffects::worstDefault,"b2IsPowerOfTwo")
		->args({"x"});
	using _method_40 = das::das_call_member< b2Shape::Type (b2Shape::*)() const,&b2Shape::GetType >;
	addExtern<DAS_CALL_METHOD(_method_40)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2Shape::Type (b2Shape::*)() const,&b2Shape::GetType >::invoke")
		->args({"self"});
	using _method_41 = das::das_call_member< void (b2ChainShape::*)(),&b2ChainShape::Clear >;
	addExtern<DAS_CALL_METHOD(_method_41)>(*this,lib,"Clear",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(),&b2ChainShape::Clear >::invoke")
		->args({"self"});
	using _method_42 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int),&b2ChainShape::CreateLoop >;
	addExtern<DAS_CALL_METHOD(_method_42)>(*this,lib,"CreateLoop",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int),&b2ChainShape::CreateLoop >::invoke")
		->args({"self","vertices","count"});
	using _method_43 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >;
	addExtern<DAS_CALL_METHOD(_method_43)>(*this,lib,"CreateChain",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >::invoke")
		->args({"self","vertices","count","prevVertex","nextVertex"});
	using _method_44 = das::das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >;
	addExtern<DAS_CALL_METHOD(_method_44)>(*this,lib,"GetChildEdge",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >::invoke")
		->args({"self","edge","index"});
	using _method_45 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetOneSided >;
	addExtern<DAS_CALL_METHOD(_method_45)>(*this,lib,"SetOneSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetOneSided >::invoke")
		->args({"self","v0","v1","v2","v3"});
	using _method_46 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetTwoSided >;
	addExtern<DAS_CALL_METHOD(_method_46)>(*this,lib,"SetTwoSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetTwoSided >::invoke")
		->args({"self","v1","v2"});
	using _method_47 = das::das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int),&b2PolygonShape::Set >;
	addExtern<DAS_CALL_METHOD(_method_47)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int),&b2PolygonShape::Set >::invoke")
		->args({"self","points","count"});
	using _method_48 = das::das_call_member< void (b2PolygonShape::*)(float,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_48)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float),&b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy"});
	using _method_49 = das::das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_49)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float),&b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy","center","angle"});
	using _method_50 = das::das_call_member< bool (b2PolygonShape::*)() const,&b2PolygonShape::Validate >;
	addExtern<DAS_CALL_METHOD(_method_50)>(*this,lib,"Validate",SideEffects::worstDefault,"das_call_member< bool (b2PolygonShape::*)() const,&b2PolygonShape::Validate >::invoke")
		->args({"self"});
}
}

