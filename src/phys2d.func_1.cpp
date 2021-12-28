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
void Module_phys2d::initFunctions_1() {
	addCtorAndUsing<b2BodyUserData>(*this,lib,"b2BodyUserData","b2BodyUserData");
	addCtorAndUsing<b2FixtureUserData>(*this,lib,"b2FixtureUserData","b2FixtureUserData");
	addCtorAndUsing<b2JointUserData>(*this,lib,"b2JointUserData","b2JointUserData");
	addExtern< void * (*)(int) , b2Alloc_Default >(*this,lib,"b2Alloc_Default",SideEffects::worstDefault,"b2Alloc_Default")
		->args({"size"});
	addExtern< void (*)(void *) , b2Free_Default >(*this,lib,"b2Free_Default",SideEffects::worstDefault,"b2Free_Default")
		->args({"mem"});
	addExtern< void * (*)(int) , b2Alloc >(*this,lib,"b2Alloc",SideEffects::worstDefault,"b2Alloc")
		->args({"size"});
	addExtern< void (*)(void *) , b2Free >(*this,lib,"b2Free",SideEffects::worstDefault,"b2Free")
		->args({"mem"});
	addExtern< void (*)(const char *) , b2OpenDump >(*this,lib,"b2OpenDump",SideEffects::worstDefault,"b2OpenDump")
		->args({"fileName"});
	addExtern< void (*)() , b2CloseDump >(*this,lib,"b2CloseDump",SideEffects::worstDefault,"b2CloseDump");
	addExtern< bool (*)(float) , b2IsValid >(*this,lib,"b2IsValid",SideEffects::worstDefault,"b2IsValid")
		->args({"x"});
	addCtorAndUsing<b2Mat22>(*this,lib,"b2Mat22","b2Mat22");
	addCtorAndUsing<b2Mat22,const b2Vec2 &,const b2Vec2 &>(*this,lib,"b2Mat22","b2Mat22")
		->args({"c1","c2"});
	addCtorAndUsing<b2Mat22,float,float,float,float>(*this,lib,"b2Mat22","b2Mat22")
		->args({"a11","a12","a21","a22"});
	using _method_1 = das::das_call_member< void (b2Mat22::*)(const b2Vec2 &,const b2Vec2 &),&b2Mat22::Set >;
	addExtern<DAS_CALL_METHOD(_method_1)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)(const b2Vec2 &,const b2Vec2 &) , &b2Mat22::Set >::invoke")
		->args({"self","c1","c2"});
	using _method_2 = das::das_call_member< void (b2Mat22::*)(),&b2Mat22::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_2)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)() , &b2Mat22::SetIdentity >::invoke")
		->args({"self"});
	using _method_3 = das::das_call_member< void (b2Mat22::*)(),&b2Mat22::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_3)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)() , &b2Mat22::SetZero >::invoke")
		->args({"self"});
	using _method_4 = das::das_call_member< b2Mat22 (b2Mat22::*)() const,&b2Mat22::GetInverse >;
	addExtern<DAS_CALL_METHOD(_method_4),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetInverse",SideEffects::worstDefault,"das_call_member< b2Mat22 (b2Mat22::*)() const , &b2Mat22::GetInverse >::invoke")
		->args({"self"});
	using _method_5 = das::das_call_member< b2Vec2 (b2Mat22::*)(const b2Vec2 &) const,&b2Mat22::Solve >;
	addExtern<DAS_CALL_METHOD(_method_5)>(*this,lib,"Solve",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Mat22::*)(const b2Vec2 &) const , &b2Mat22::Solve >::invoke")
		->args({"self","b"});
	addCtorAndUsing<b2Mat33>(*this,lib,"b2Mat33","b2Mat33");
	addCtorAndUsing<b2Mat33,const b2Vec3 &,const b2Vec3 &,const b2Vec3 &>(*this,lib,"b2Mat33","b2Mat33")
		->args({"c1","c2","c3"});
}
}

