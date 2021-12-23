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
	using _method_13 = das::das_call_member< b2Vec2 (b2Vec2::*)() const,&b2Vec2::Skew >;
	addExtern<DAS_CALL_METHOD(_method_13),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Skew",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Vec2::*)() const,&b2Vec2::Skew >::invoke")
		->args({"self"});
	using _method_14 = das::das_call_member< void (b2Vec3::*)(),&b2Vec3::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_14)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(),&b2Vec3::SetZero >::invoke")
		->args({"self"});
	using _method_15 = das::das_call_member< void (b2Vec3::*)(float,float,float),&b2Vec3::Set >;
	addExtern<DAS_CALL_METHOD(_method_15)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(float,float,float),&b2Vec3::Set >::invoke")
		->args({"self","x_","y_","z_"});
	using _method_16 = das::das_call_member< b2Vec3 (b2Vec3::*)() const,&b2Vec3::operator- >;
	addExtern<DAS_CALL_METHOD(_method_16),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"-",SideEffects::worstDefault,"das_call_member< b2Vec3 (b2Vec3::*)() const,&b2Vec3::operator- >::invoke")
		->args({"self"});
	using _method_17 = das::das_call_member< void (b2Vec3::*)(const b2Vec3 &),&b2Vec3::operator+= >;
	addExtern<DAS_CALL_METHOD(_method_17)>(*this,lib,"+=",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(const b2Vec3 &),&b2Vec3::operator+= >::invoke")
		->args({"self","v"});
	using _method_18 = das::das_call_member< void (b2Vec3::*)(const b2Vec3 &),&b2Vec3::operator-= >;
	addExtern<DAS_CALL_METHOD(_method_18)>(*this,lib,"-=",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(const b2Vec3 &),&b2Vec3::operator-= >::invoke")
		->args({"self","v"});
	using _method_19 = das::das_call_member< void (b2Vec3::*)(float),&b2Vec3::operator*= >;
	addExtern<DAS_CALL_METHOD(_method_19)>(*this,lib,"*=",SideEffects::worstDefault,"das_call_member< void (b2Vec3::*)(float),&b2Vec3::operator*= >::invoke")
		->args({"self","s"});
	using _method_20 = das::das_call_member< void (b2Mat22::*)(const b2Vec2 &,const b2Vec2 &),&b2Mat22::Set >;
	addExtern<DAS_CALL_METHOD(_method_20)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)(const b2Vec2 &,const b2Vec2 &),&b2Mat22::Set >::invoke")
		->args({"self","c1","c2"});
	using _method_21 = das::das_call_member< void (b2Mat22::*)(),&b2Mat22::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_21)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)(),&b2Mat22::SetIdentity >::invoke")
		->args({"self"});
	using _method_22 = das::das_call_member< void (b2Mat22::*)(),&b2Mat22::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_22)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Mat22::*)(),&b2Mat22::SetZero >::invoke")
		->args({"self"});
	using _method_23 = das::das_call_member< b2Mat22 (b2Mat22::*)() const,&b2Mat22::GetInverse >;
	addExtern<DAS_CALL_METHOD(_method_23),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetInverse",SideEffects::worstDefault,"das_call_member< b2Mat22 (b2Mat22::*)() const,&b2Mat22::GetInverse >::invoke")
		->args({"self"});
	using _method_24 = das::das_call_member< b2Vec2 (b2Mat22::*)(const b2Vec2 &) const,&b2Mat22::Solve >;
	addExtern<DAS_CALL_METHOD(_method_24),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Solve",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Mat22::*)(const b2Vec2 &) const,&b2Mat22::Solve >::invoke")
		->args({"self","b"});
	using _method_25 = das::das_call_member< void (b2Mat33::*)(),&b2Mat33::SetZero >;
	addExtern<DAS_CALL_METHOD(_method_25)>(*this,lib,"SetZero",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(),&b2Mat33::SetZero >::invoke")
		->args({"self"});
	using _method_26 = das::das_call_member< b2Vec3 (b2Mat33::*)(const b2Vec3 &) const,&b2Mat33::Solve33 >;
	addExtern<DAS_CALL_METHOD(_method_26),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Solve33",SideEffects::worstDefault,"das_call_member< b2Vec3 (b2Mat33::*)(const b2Vec3 &) const,&b2Mat33::Solve33 >::invoke")
		->args({"self","b"});
	using _method_27 = das::das_call_member< b2Vec2 (b2Mat33::*)(const b2Vec2 &) const,&b2Mat33::Solve22 >;
	addExtern<DAS_CALL_METHOD(_method_27),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"Solve22",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2Mat33::*)(const b2Vec2 &) const,&b2Mat33::Solve22 >::invoke")
		->args({"self","b"});
	using _method_28 = das::das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetInverse22 >;
	addExtern<DAS_CALL_METHOD(_method_28)>(*this,lib,"GetInverse22",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetInverse22 >::invoke")
		->args({"self","M"});
	using _method_29 = das::das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetSymInverse33 >;
	addExtern<DAS_CALL_METHOD(_method_29)>(*this,lib,"GetSymInverse33",SideEffects::worstDefault,"das_call_member< void (b2Mat33::*)(b2Mat33 *) const,&b2Mat33::GetSymInverse33 >::invoke")
		->args({"self","M"});
	using _method_30 = das::das_call_member< void (b2Rot::*)(float),&b2Rot::Set >;
	addExtern<DAS_CALL_METHOD(_method_30)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)(float),&b2Rot::Set >::invoke")
		->args({"self","angle"});
	using _method_31 = das::das_call_member< void (b2Rot::*)(),&b2Rot::SetIdentity >;
	addExtern<DAS_CALL_METHOD(_method_31)>(*this,lib,"SetIdentity",SideEffects::worstDefault,"das_call_member< void (b2Rot::*)(),&b2Rot::SetIdentity >::invoke")
		->args({"self"});
	using _method_32 = das::das_call_member< float (b2Rot::*)() const,&b2Rot::GetAngle >;
	addExtern<DAS_CALL_METHOD(_method_32)>(*this,lib,"GetAngle",SideEffects::worstDefault,"das_call_member< float (b2Rot::*)() const,&b2Rot::GetAngle >::invoke")
		->args({"self"});
}
}

