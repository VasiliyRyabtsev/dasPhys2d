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
void Module_box2d::initFunctions_5() {
	addExtern< b2Vec2 (*)(const b2Transform &,const b2Vec2 &) , b2Mul ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"T","v"});
	addExtern< b2Vec2 (*)(const b2Transform &,const b2Vec2 &) , b2MulT ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"T","v"});
	addExtern< b2Transform (*)(const b2Transform &,const b2Transform &) , b2Mul ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","B"});
	addExtern< b2Transform (*)(const b2Transform &,const b2Transform &) , b2MulT ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","B"});
	addExtern< b2Vec2 (*)(const b2Vec2 &) , b2Abs ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Abs",SideEffects::worstDefault,"b2Abs")
		->args({"a"});
	addExtern< b2Mat22 (*)(const b2Mat22 &) , b2Abs ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Abs",SideEffects::worstDefault,"b2Abs")
		->args({"A"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &) , b2Min ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Min",SideEffects::worstDefault,"b2Min")
		->args({"a","b"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &) , b2Max ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Max",SideEffects::worstDefault,"b2Max")
		->args({"a","b"});
	addExtern< b2Vec2 (*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &) , b2Clamp ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Clamp",SideEffects::worstDefault,"b2Clamp")
		->args({"a","low","high"});
	addExtern< unsigned int (*)(unsigned int) , b2NextPowerOfTwo >(*this,lib,"b2NextPowerOfTwo",SideEffects::worstDefault,"b2NextPowerOfTwo")
		->args({"x"});
	addExtern< bool (*)(unsigned int) , b2IsPowerOfTwo >(*this,lib,"b2IsPowerOfTwo",SideEffects::worstDefault,"b2IsPowerOfTwo")
		->args({"x"});
	addCtorAndUsing<b2Color>(*this,lib,"b2Color","b2Color");
	addCtorAndUsing<b2Color,float,float,float,float>(*this,lib,"b2Color","b2Color")
		->args({"rIn","gIn","bIn","aIn"})
		->arg_init(3,make_smart<ExprConstFloat>(1.00000000000000000));
	using _method_40 = das::das_call_member< void (b2Color::*)(float,float,float,float),&b2Color::Set >;
	addExtern<DAS_CALL_METHOD(_method_40)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Color::*)(float,float,float,float) , &b2Color::Set >::invoke")
		->args({"self","rIn","gIn","bIn","aIn"})
		->arg_init(4,make_smart<ExprConstFloat>(1.00000000000000000));
	//addCtorAndUsing<b2Draw>(*this,lib,"b2Draw","b2Draw");
	using _method_41 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::SetFlags >;
	addExtern<DAS_CALL_METHOD(_method_41)>(*this,lib,"SetFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::SetFlags >::invoke")
		->args({"self","flags"});
	using _method_42 = das::das_call_member< unsigned int (b2Draw::*)() const,&b2Draw::GetFlags >;
	addExtern<DAS_CALL_METHOD(_method_42)>(*this,lib,"GetFlags",SideEffects::worstDefault,"das_call_member< unsigned int (b2Draw::*)() const , &b2Draw::GetFlags >::invoke")
		->args({"self"});
	using _method_43 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::AppendFlags >;
	addExtern<DAS_CALL_METHOD(_method_43)>(*this,lib,"AppendFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::AppendFlags >::invoke")
		->args({"self","flags"});
	using _method_44 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::ClearFlags >;
	addExtern<DAS_CALL_METHOD(_method_44)>(*this,lib,"ClearFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::ClearFlags >::invoke")
		->args({"self","flags"});
	addCtorAndUsing<b2Timer>(*this,lib,"b2Timer","b2Timer");
}
}

