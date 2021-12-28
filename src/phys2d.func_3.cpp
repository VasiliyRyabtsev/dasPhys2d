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
void Module_phys2d::initFunctions_3() {
	addExtern< float (*)(const b2Vec3 &,const b2Vec3 &) , b2Dot >(*this,lib,"b2Dot",SideEffects::worstDefault,"b2Dot")
		->args({"a","b"});
	addExtern< b2Vec3 (*)(const b2Vec3 &,const b2Vec3 &) , b2Cross >(*this,lib,"b2Cross",SideEffects::worstDefault,"b2Cross")
		->args({"a","b"});
	addExtern< b2Mat22 (*)(const b2Mat22 &,const b2Mat22 &) , b2Mul ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","B"});
	addExtern< b2Mat22 (*)(const b2Mat22 &,const b2Mat22 &) , b2MulT ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"A","B"});
	addExtern< b2Vec3 (*)(const b2Mat33 &,const b2Vec3 &) , b2Mul >(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","v"});
	addExtern< b2Vec2 (*)(const b2Mat33 &,const b2Vec2 &) , b2Mul22 >(*this,lib,"b2Mul22",SideEffects::worstDefault,"b2Mul22")
		->args({"A","v"});
	addExtern< b2Rot (*)(const b2Rot &,const b2Rot &) , b2Mul ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"q","r"});
	addExtern< b2Rot (*)(const b2Rot &,const b2Rot &) , b2MulT ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"q","r"});
	addExtern< b2Vec2 (*)(const b2Rot &,const b2Vec2 &) , b2Mul >(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"q","v"});
	addExtern< b2Vec2 (*)(const b2Rot &,const b2Vec2 &) , b2MulT >(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"q","v"});
	addExtern< b2Vec2 (*)(const b2Transform &,const b2Vec2 &) , b2Mul >(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"T","v"});
	addExtern< b2Vec2 (*)(const b2Transform &,const b2Vec2 &) , b2MulT >(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"T","v"});
	addExtern< b2Transform (*)(const b2Transform &,const b2Transform &) , b2Mul ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"A","B"});
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
}
}

