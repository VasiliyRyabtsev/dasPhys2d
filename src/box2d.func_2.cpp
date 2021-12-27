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
	using _method_9 = das::das_call_member< float (b2Vec2::*)() const,&b2Vec2::Length >;
	addExtern<DAS_CALL_METHOD(_method_9)>(*this,lib,"Length",SideEffects::worstDefault,"das_call_member< float (b2Vec2::*)() const , &b2Vec2::Length >::invoke")
		->args({"self"});
	using _method_10 = das::das_call_member< float (b2Vec2::*)() const,&b2Vec2::LengthSquared >;
	addExtern<DAS_CALL_METHOD(_method_10)>(*this,lib,"LengthSquared",SideEffects::worstDefault,"das_call_member< float (b2Vec2::*)() const , &b2Vec2::LengthSquared >::invoke")
		->args({"self"});
	using _method_11 = das::das_call_member< float (b2Vec2::*)(),&b2Vec2::Normalize >;
	addExtern<DAS_CALL_METHOD(_method_11)>(*this,lib,"Normalize",SideEffects::worstDefault,"das_call_member< float (b2Vec2::*)() , &b2Vec2::Normalize >::invoke")
		->args({"self"});
	using _method_12 = das::das_call_member< bool (b2Vec2::*)() const,&b2Vec2::IsValid >;
	addExtern<DAS_CALL_METHOD(_method_12)>(*this,lib,"IsValid",SideEffects::worstDefault,"das_call_member< bool (b2Vec2::*)() const , &b2Vec2::IsValid >::invoke")
		->args({"self"});
	using _method_13 = das::das_call_member< b2Vec2 (b2Vec2::*)() const,&b2Vec2::Skew >;
	addExtern<DAS_CALL_METHOD(_method_13),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Skew",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Vec2::*)() const , &b2Vec2::Skew >::invoke")
		->args({"self"});
	addCtorAndUsing<b2Vec3>(*this,lib,"b2Vec3","b2Vec3");
	addCtorAndUsing<b2Vec3,float,float,float>(*this,lib,"b2Vec3","b2Vec3")
		->args({"xIn","yIn","zIn"});
	using _method_14 = das::das_call_member< void (b2Vec3::*)(),&b2Vec3::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_14)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)() , &b2Vec3::SetZero >::invoke")
		->args({"self"});
	using _method_15 = das::das_call_member< void (b2Vec3::*)(float,float,float),&b2Vec3::Set >;
	addExtern<DAS_CALL_METHOD(_method_15)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(float,float,float) , &b2Vec3::Set >::invoke")
		->args({"self","x_","y_","z_"});
	using _method_16 = das::das_call_member< b2Vec3 (b2Vec3::*)() const,&b2Vec3::operator- >;
	addExtern<DAS_CALL_METHOD(_method_16),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"-",SideEffects::worstDefault,"das_call_member< b2Vec3 (b2Vec3::*)() const , &b2Vec3::operator- >::invoke")
		->args({"self"});
	using _method_17 = das::das_call_member< void (b2Vec3::*)(const b2Vec3 &),&b2Vec3::operator+= >;
	addExtern<DAS_CALL_METHOD(_method_17)>(*this,lib,"+=",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(const b2Vec3 &) , &b2Vec3::operator+= >::invoke")
		->args({"self","v"});
	using _method_18 = das::das_call_member< void (b2Vec3::*)(const b2Vec3 &),&b2Vec3::operator-= >;
	addExtern<DAS_CALL_METHOD(_method_18)>(*this,lib,"-=",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(const b2Vec3 &) , &b2Vec3::operator-= >::invoke")
		->args({"self","v"});
	using _method_19 = das::das_call_member< void (b2Vec3::*)(float),&b2Vec3::operator*= >;
	addExtern<DAS_CALL_METHOD(_method_19)>(*this,lib,"*=",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(float) , &b2Vec3::operator*= >::invoke")
		->args({"self","s"});
	addCtorAndUsing<b2Mat22>(*this,lib,"b2Mat22","b2Mat22");
	addCtorAndUsing<b2Mat22,const b2Vec2 &,const b2Vec2 &>(*this,lib,"b2Mat22","b2Mat22")
		->args({"c1","c2"});
	addCtorAndUsing<b2Mat22,float,float,float,float>(*this,lib,"b2Mat22","b2Mat22")
		->args({"a11","a12","a21","a22"});
	using _method_20 = das::das_call_member< void (b2Mat22::*)(const b2Vec2 &,const b2Vec2 &),&b2Mat22::Set >;
	addExtern<DAS_CALL_METHOD(_method_20)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)(const b2Vec2 &,const b2Vec2 &) , &b2Mat22::Set >::invoke")
		->args({"self","c1","c2"});
	using _method_21 = das::das_call_member< void (b2Mat22::*)(),&b2Mat22::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_21)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)() , &b2Mat22::SetIdentity >::invoke")
		->args({"self"});
	using _method_22 = das::das_call_member< void (b2Mat22::*)(),&b2Mat22::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_22)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)() , &b2Mat22::SetZero >::invoke")
		->args({"self"});
	using _method_23 = das::das_call_member< b2Mat22 (b2Mat22::*)() const,&b2Mat22::GetInverse >;
	addExtern<DAS_CALL_METHOD(_method_23),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetInverse",SideEffects::worstDefault,"das_call_member< b2Mat22 (b2Mat22::*)() const , &b2Mat22::GetInverse >::invoke")
		->args({"self"});
}
}

