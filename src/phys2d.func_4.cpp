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
	addExtern< bool (*)(unsigned int) , b2IsPowerOfTwo >(*this,lib,"b2IsPowerOfTwo",SideEffects::worstDefault,"b2IsPowerOfTwo")
		->args({"x"});
	addCtorAndUsing<b2Color>(*this,lib,"b2Color","b2Color");
	addCtorAndUsing<b2Color,float,float,float,float>(*this,lib,"b2Color","b2Color")
		->args({"rIn","gIn","bIn","aIn"})
		->arg_init(3,make_smart<ExprConstFloat>(1.00000000000000000));
	using _method_16 = das::das_call_member< void (b2Color::*)(float,float,float,float),&b2Color::Set >;
	addExtern<DAS_CALL_METHOD(_method_16)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2Color::*)(float,float,float,float) , &b2Color::Set >::invoke")
		->args({"self","rIn","gIn","bIn","aIn"})
		->arg_init(4,make_smart<ExprConstFloat>(1.00000000000000000));
	using _method_17 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::SetFlags >;
	addExtern<DAS_CALL_METHOD(_method_17)>(*this,lib,"SetFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::SetFlags >::invoke")
		->args({"self","flags"});
	using _method_18 = das::das_call_member< unsigned int (b2Draw::*)() const,&b2Draw::GetFlags >;
	addExtern<DAS_CALL_METHOD(_method_18)>(*this,lib,"GetFlags",SideEffects::worstDefault,"das_call_member< unsigned int (b2Draw::*)() const , &b2Draw::GetFlags >::invoke")
		->args({"self"});
	using _method_19 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::AppendFlags >;
	addExtern<DAS_CALL_METHOD(_method_19)>(*this,lib,"AppendFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::AppendFlags >::invoke")
		->args({"self","flags"});
	using _method_20 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::ClearFlags >;
	addExtern<DAS_CALL_METHOD(_method_20)>(*this,lib,"ClearFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int) , &b2Draw::ClearFlags >::invoke")
		->args({"self","flags"});
	addCtorAndUsing<b2Timer>(*this,lib,"b2Timer","b2Timer");
	using _method_21 = das::das_call_member< void (b2Timer::*)(),&b2Timer::Reset >;
	addExtern<DAS_CALL_METHOD(_method_21)>(*this,lib,"Reset",SideEffects::worstDefault,"das_call_member< void (b2Timer::*)() , &b2Timer::Reset >::invoke")
		->args({"self"});
	using _method_22 = das::das_call_member< float (b2Timer::*)() const,&b2Timer::GetMilliseconds >;
	addExtern<DAS_CALL_METHOD(_method_22)>(*this,lib,"GetMilliseconds",SideEffects::worstDefault,"das_call_member< float (b2Timer::*)() const , &b2Timer::GetMilliseconds >::invoke")
		->args({"self"});
	using _method_23 = das::das_call_member< void (b2WorldManifold::*)(const b2Manifold *,const b2Transform &,float,const b2Transform &,float),&b2WorldManifold::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_23)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WorldManifold::*)(const b2Manifold *,const b2Transform &,float,const b2Transform &,float) , &b2WorldManifold::Initialize >::invoke")
		->args({"self","manifold","xfA","radiusA","xfB","radiusB"});
	addExtern< void (*)(b2PointState [2],b2PointState [2],const b2Manifold *,const b2Manifold *) , b2GetPointStates >(*this,lib,"b2GetPointStates",SideEffects::worstDefault,"b2GetPointStates")
		->args({"state1","state2","manifold1","manifold2"});
	using _method_24 = das::das_call_member< bool (b2AABB::*)() const,&b2AABB::IsValid >;
	addExtern<DAS_CALL_METHOD(_method_24)>(*this,lib,"IsValid",SideEffects::worstDefault,"das_call_member< bool (b2AABB::*)() const , &b2AABB::IsValid >::invoke")
		->args({"self"});
	using _method_25 = das::das_call_member< b2Vec2 (b2AABB::*)() const,&b2AABB::GetCenter >;
	addExtern<DAS_CALL_METHOD(_method_25)>(*this,lib,"GetCenter",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2AABB::*)() const , &b2AABB::GetCenter >::invoke")
		->args({"self"});
	using _method_26 = das::das_call_member< b2Vec2 (b2AABB::*)() const,&b2AABB::GetExtents >;
	addExtern<DAS_CALL_METHOD(_method_26)>(*this,lib,"GetExtents",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2AABB::*)() const , &b2AABB::GetExtents >::invoke")
		->args({"self"});
	using _method_27 = das::das_call_member< float (b2AABB::*)() const,&b2AABB::GetPerimeter >;
	addExtern<DAS_CALL_METHOD(_method_27)>(*this,lib,"GetPerimeter",SideEffects::worstDefault,"das_call_member< float (b2AABB::*)() const , &b2AABB::GetPerimeter >::invoke")
		->args({"self"});
	using _method_28 = das::das_call_member< void (b2AABB::*)(const b2AABB &),&b2AABB::Combine >;
	addExtern<DAS_CALL_METHOD(_method_28)>(*this,lib,"Combine",SideEffects::worstDefault,"das_call_member< void (b2AABB::*)(const b2AABB &) , &b2AABB::Combine >::invoke")
		->args({"self","aabb"});
	using _method_29 = das::das_call_member< void (b2AABB::*)(const b2AABB &,const b2AABB &),&b2AABB::Combine >;
	addExtern<DAS_CALL_METHOD(_method_29)>(*this,lib,"Combine",SideEffects::worstDefault,"das_call_member< void (b2AABB::*)(const b2AABB &,const b2AABB &) , &b2AABB::Combine >::invoke")
		->args({"self","aabb1","aabb2"});
	using _method_30 = das::das_call_member< bool (b2AABB::*)(const b2AABB &) const,&b2AABB::Contains >;
	addExtern<DAS_CALL_METHOD(_method_30)>(*this,lib,"Contains",SideEffects::worstDefault,"das_call_member< bool (b2AABB::*)(const b2AABB &) const , &b2AABB::Contains >::invoke")
		->args({"self","aabb"});
}
}

