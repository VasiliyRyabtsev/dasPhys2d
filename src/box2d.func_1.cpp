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
void Module_box2d::initFunctions_1() {
	addExtern<bool (*)(float),b2IsValid>(*this,lib,"b2IsValid",SideEffects::worstDefault,"b2IsValid")
		->args({"x"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2Dot>(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2Cross>(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2Distance>(*this,lib,"b2Distance",SideEffects::worstDefault,"b2Distance")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec2 &,const b2Vec2 &),b2DistanceSquared>(*this,lib,"b2DistanceSquared",SideEffects::worstDefault,"b2DistanceSquared")
		->args({"a","b"});
	addExtern<float (*)(const b2Vec3 &,const b2Vec3 &),b2Dot>(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
	addExtern<b2Rot (*)(const b2Rot &,const b2Rot &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"q","r"});
	addExtern<b2Rot (*)(const b2Rot &,const b2Rot &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"q","r"});
	addExtern<b2Transform (*)(const b2Transform &,const b2Transform &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","B"});
	addExtern<b2Transform (*)(const b2Transform &,const b2Transform &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","B"});
	addExtern<unsigned int (*)(unsigned int),b2NextPowerOfTwo>(*this,lib,"b2NextPowerOfTwo",SideEffects::worstDefault,"b2NextPowerOfTwo")
		->args({"x"});
	addExtern<bool (*)(unsigned int),b2IsPowerOfTwo>(*this,lib,"b2IsPowerOfTwo",SideEffects::worstDefault,"b2IsPowerOfTwo")
		->args({"x"});
}
}

