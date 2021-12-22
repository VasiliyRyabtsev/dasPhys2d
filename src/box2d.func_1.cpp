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
	addExtern<b2Vec2 (*)(const b2Mat33 &,const b2Vec2 &),b2Mul22,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul22",SideEffects::worstDefault,"b2Mul22")
		->args({"A","v"});
	addExtern<b2Rot (*)(const b2Rot &,const b2Rot &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"q","r"});
	addExtern<b2Rot (*)(const b2Rot &,const b2Rot &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"q","r"});
	addExtern<b2Vec2 (*)(const b2Rot &,const b2Vec2 &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"q","v"});
	addExtern<b2Vec2 (*)(const b2Rot &,const b2Vec2 &),b2MulT,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2MulT",SideEffects::worstDefault,"b2MulT")
		->args({"q","v"});
	addExtern<b2Vec2 (*)(const b2Transform &,const b2Vec2 &),b2Mul,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"b2Mul",SideEffects::worstDefault,"b2Mul")
		->args({"T","v"});
}
}

