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
void Module_phys2d::initFunctions_4() {
	addExtern< b2Transform (*)(const b2Transform &,const b2Transform &) , b2MulT ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","B"});
	addExtern< b2Vec2 (*)(const b2Vec2 &) , b2Abs >(*this,lib,"b2Abs",SideEffects::worstDefault,"b2Abs")
		->args({"a"});
	addExtern< b2Mat22 (*)(const b2Mat22 &) , b2Abs ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Abs",SideEffects::worstDefault,"b2Abs")
		->args({"A"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &) , b2Min >(*this,lib,"b2Min",SideEffects::worstDefault,"b2Min")
		->args({"a","b"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &) , b2Max >(*this,lib,"b2Max",SideEffects::worstDefault,"b2Max")
		->args({"a","b"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &) , b2Clamp >(*this,lib,"b2Clamp",SideEffects::worstDefault,"b2Clamp")
		->args({"a","low","high"});
	addExtern< unsigned int (*)(unsigned int) , b2NextPowerOfTwo >(*this,lib,"b2NextPowerOfTwo",SideEffects::worstDefault,"b2NextPowerOfTwo")
		->args({"x"});
	addExtern< bool (*)(unsigned int) , b2IsPowerOfTwo >(*this,lib,"b2IsPowerOfTwo",SideEffects::worstDefault,"b2IsPowerOfTwo")
		->args({"x"});
	addCtorAndUsing<b2Color>(*this,lib,"b2Color","b2Color");
	addCtorAndUsing<b2Color,float,float,float,float>(*this,lib,"b2Color","b2Color")
		->args({"rIn","gIn","bIn","aIn"})
		->arg_init(3,make_smart<ExprConstFloat>(1.00000000000000000));
	using _method_21 = das::das_call_member< void (b2Color::*)(float,float,float,float),&b2Color::Set >;
	addExtern<DAS_CALL_METHOD(_method_21)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Color::*)(float,float,float,float) , &b2Color::Set >::invoke")
		->args({"self","rIn","gIn","bIn","aIn"})
		->arg_init(4,make_smart<ExprConstFloat>(1.00000000000000000));
	using _method_22 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::SetFlags >;
	addExtern<DAS_CALL_METHOD(_method_22)>(*this,lib,"SetFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::SetFlags >::invoke")
		->args({"self","flags"});
	using _method_23 = das::das_call_member< unsigned int (b2Draw::*)() const,&b2Draw::GetFlags >;
	addExtern<DAS_CALL_METHOD(_method_23)>(*this,lib,"GetFlags",SideEffects::worstDefault,"das_call_member< unsigned int (b2Draw::*)() const , &b2Draw::GetFlags >::invoke")
		->args({"self"});
	using _method_24 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::AppendFlags >;
	addExtern<DAS_CALL_METHOD(_method_24)>(*this,lib,"AppendFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::AppendFlags >::invoke")
		->args({"self","flags"});
	using _method_25 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::ClearFlags >;
	addExtern<DAS_CALL_METHOD(_method_25)>(*this,lib,"ClearFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::ClearFlags >::invoke")
		->args({"self","flags"});
	addCtorAndUsing<b2Timer>(*this,lib,"b2Timer","b2Timer");
	using _method_26 = das::das_call_member< void (b2Timer::*)(),&b2Timer::Reset >;
	addExtern<DAS_CALL_METHOD(_method_26)>(*this,lib,"Reset",SideEffects::worstDefault,"das_call_member< void (b2Timer::*)() , &b2Timer::Reset >::invoke")
		->args({"self"});
	using _method_27 = das::das_call_member< float (b2Timer::*)() const,&b2Timer::GetMilliseconds >;
	addExtern<DAS_CALL_METHOD(_method_27)>(*this,lib,"GetMilliseconds",SideEffects::worstDefault,"das_call_member< float (b2Timer::*)() const , &b2Timer::GetMilliseconds >::invoke")
		->args({"self"});
	using _method_28 = das::das_call_member< void (b2WorldManifold::*)(const b2Manifold *,const b2Transform &,float,const b2Transform &,float),&b2WorldManifold::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_28)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WorldManifold::*)(const b2Manifold *,const b2Transform &,float,const b2Transform &,float) , &b2WorldManifold::Initialize >::invoke")
		->args({"self","manifold","xfA","radiusA","xfB","radiusB"});
	addExtern< void (*)(b2PointState [2],b2PointState [2],const b2Manifold *,const b2Manifold *) , b2GetPointStates >(*this,lib,"b2GetPointStates",SideEffects::worstDefault,"b2GetPointStates")
		->args({"state1","state2","manifold1","manifold2"});
}
}

