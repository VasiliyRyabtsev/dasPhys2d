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
void Module_phys2d::initFunctions_6() {
	using _method_40 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >;
	addExtern<DAS_CALL_METHOD(_method_40)>(*this,lib,"CreateChain",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &) , &b2ChainShape::CreateChain >::invoke")
		->args({"self","vertices","count","prevVertex","nextVertex"});
	addExtern< b2Shape * (*)(const b2ChainShape &,b2BlockAllocator *) , _phys2d_virtual_0_Clone >(*this,lib,"Clone",SideEffects::worstDefault,"_phys2d_virtual_0_Clone")
		->args({"self","allocator"});
	addExtern< int (*)(const b2ChainShape &) , _phys2d_virtual_1_GetChildCount >(*this,lib,"GetChildCount",SideEffects::worstDefault,"_phys2d_virtual_1_GetChildCount")
		->args({"self"});
	using _method_43 = das::das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >;
	addExtern<DAS_CALL_METHOD(_method_43)>(*this,lib,"GetChildEdge",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const , &b2ChainShape::GetChildEdge >::invoke")
		->args({"self","edge","index"});
	addExtern< bool (*)(const b2ChainShape &,const b2Transform &,const b2Vec2 &) , _phys2d_virtual_2_TestPoint >(*this,lib,"TestPoint",SideEffects::worstDefault,"_phys2d_virtual_2_TestPoint")
		->args({"self","transform","p"});
	addExtern< bool (*)(const b2ChainShape &,b2RayCastOutput *,const b2RayCastInput &,const b2Transform &,int) , _phys2d_virtual_3_RayCast >(*this,lib,"RayCast",SideEffects::worstDefault,"_phys2d_virtual_3_RayCast")
		->args({"self","output","input","transform","childIndex"});
	addExtern< void (*)(const b2ChainShape &,b2AABB *,const b2Transform &,int) , _phys2d_virtual_4_ComputeAABB >(*this,lib,"ComputeAABB",SideEffects::worstDefault,"_phys2d_virtual_4_ComputeAABB")
		->args({"self","aabb","transform","childIndex"});
	addExtern< void (*)(const b2ChainShape &,b2MassData *,float) , _phys2d_virtual_5_ComputeMass >(*this,lib,"ComputeMass",SideEffects::worstDefault,"_phys2d_virtual_5_ComputeMass")
		->args({"self","massData","density"});
	addCtorAndUsing<b2CircleShape>(*this,lib,"b2CircleShape","b2CircleShape");
	addExtern< b2Shape * (*)(const b2CircleShape &,b2BlockAllocator *) , _phys2d_virtual_6_Clone >(*this,lib,"Clone",SideEffects::worstDefault,"_phys2d_virtual_6_Clone")
		->args({"self","allocator"});
	addExtern< int (*)(const b2CircleShape &) , _phys2d_virtual_7_GetChildCount >(*this,lib,"GetChildCount",SideEffects::worstDefault,"_phys2d_virtual_7_GetChildCount")
		->args({"self"});
	addExtern< bool (*)(const b2CircleShape &,const b2Transform &,const b2Vec2 &) , _phys2d_virtual_8_TestPoint >(*this,lib,"TestPoint",SideEffects::worstDefault,"_phys2d_virtual_8_TestPoint")
		->args({"self","transform","p"});
	addExtern< bool (*)(const b2CircleShape &,b2RayCastOutput *,const b2RayCastInput &,const b2Transform &,int) , _phys2d_virtual_9_RayCast >(*this,lib,"RayCast",SideEffects::worstDefault,"_phys2d_virtual_9_RayCast")
		->args({"self","output","input","transform","childIndex"});
	addExtern< void (*)(const b2CircleShape &,b2AABB *,const b2Transform &,int) , _phys2d_virtual_10_ComputeAABB >(*this,lib,"ComputeAABB",SideEffects::worstDefault,"_phys2d_virtual_10_ComputeAABB")
		->args({"self","aabb","transform","childIndex"});
	addExtern< void (*)(const b2CircleShape &,b2MassData *,float) , _phys2d_virtual_11_ComputeMass >(*this,lib,"ComputeMass",SideEffects::worstDefault,"_phys2d_virtual_11_ComputeMass")
		->args({"self","massData","density"});
	addCtorAndUsing<b2EdgeShape>(*this,lib,"b2EdgeShape","b2EdgeShape");
	using _method_54 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetOneSided >;
	addExtern<DAS_CALL_METHOD(_method_54)>(*this,lib,"SetOneSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &) , &b2EdgeShape::SetOneSided >::invoke")
		->args({"self","v0","v1","v2","v3"});
	using _method_55 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetTwoSided >;
	addExtern<DAS_CALL_METHOD(_method_55)>(*this,lib,"SetTwoSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &) , &b2EdgeShape::SetTwoSided >::invoke")
		->args({"self","v1","v2"});
	addExtern< b2Shape * (*)(const b2EdgeShape &,b2BlockAllocator *) , _phys2d_virtual_12_Clone >(*this,lib,"Clone",SideEffects::worstDefault,"_phys2d_virtual_12_Clone")
		->args({"self","allocator"});
	addExtern< int (*)(const b2EdgeShape &) , _phys2d_virtual_13_GetChildCount >(*this,lib,"GetChildCount",SideEffects::worstDefault,"_phys2d_virtual_13_GetChildCount")
		->args({"self"});
}
}

