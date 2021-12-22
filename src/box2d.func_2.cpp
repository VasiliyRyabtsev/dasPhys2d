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
void Module_box2d::initFunctions_2() {
	addExtern<b2Vec2 (*)(const b2Transform &,const b2Vec2 &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"T","v"});
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
}
}

