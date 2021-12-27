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
	addCtorAndUsing<b2Vec2>(*this,lib,"b2Vec2","b2Vec2");
	addCtorAndUsing<b2Vec2,float,float>(*this,lib,"b2Vec2","b2Vec2")
		->args({"xIn","yIn"});
	using _method_1 = das::das_call_member< void (b2Vec2::*)(),&b2Vec2::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_1)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Vec2::*)() , &b2Vec2::SetZero >::invoke")
		->args({"self"});
	using _method_2 = das::das_call_member< void (b2Vec2::*)(float,float),&b2Vec2::Set >;
	addExtern<DAS_CALL_METHOD(_method_2)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Vec2::*)(float,float) , &b2Vec2::Set >::invoke")
		->args({"self","x_","y_"});
	using _method_3 = das::das_call_member< b2Vec2 (b2Vec2::*)() const,&b2Vec2::operator- >;
	addExtern<DAS_CALL_METHOD(_method_3),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"-",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Vec2::*)() const , &b2Vec2::operator- >::invoke")
		->args({"self"});
	using _method_4 = das::das_call_member< float (b2Vec2::*)(int) const,&b2Vec2::operator() >;
	addExtern<DAS_CALL_METHOD(_method_4)>(*this,lib,"()",SideEffects::worstDefault,"das_call_member< float (b2Vec2::*)(int) const , &b2Vec2::operator() >::invoke")
		->args({"self","i"});
	using _method_5 = das::das_call_member< float & (b2Vec2::*)(int),&b2Vec2::operator() >;
	addExtern<DAS_CALL_METHOD(_method_5), SimNode_ExtFuncCallRef>(*this,lib,"()",SideEffects::worstDefault,"das_call_member< float & (b2Vec2::*)(int) , &b2Vec2::operator() >::invoke")
		->args({"self","i"});
	using _method_6 = das::das_call_member< void (b2Vec2::*)(const b2Vec2 &),&b2Vec2::operator+= >;
	addExtern<DAS_CALL_METHOD(_method_6)>(*this,lib,"+=",SideEffects::worstDefault,"das_call_member< void (b2Vec2::*)(const b2Vec2 &) , &b2Vec2::operator+= >::invoke")
		->args({"self","v"});
	using _method_7 = das::das_call_member< void (b2Vec2::*)(const b2Vec2 &),&b2Vec2::operator-= >;
	addExtern<DAS_CALL_METHOD(_method_7)>(*this,lib,"-=",SideEffects::worstDefault,"das_call_member< void (b2Vec2::*)(const b2Vec2 &) , &b2Vec2::operator-= >::invoke")
		->args({"self","v"});
	using _method_8 = das::das_call_member< void (b2Vec2::*)(float),&b2Vec2::operator*= >;
	addExtern<DAS_CALL_METHOD(_method_8)>(*this,lib,"*=",SideEffects::worstDefault,"das_call_member< void (b2Vec2::*)(float) , &b2Vec2::operator*= >::invoke")
		->args({"self","a"});
}
}

