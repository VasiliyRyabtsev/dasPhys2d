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
void Module_phys2d::initFunctions_7() {
	using _method_59 = das::das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int),&b2PolygonShape::Set >;
	addExtern<DAS_CALL_METHOD(_method_59)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int) , &b2PolygonShape::Set >::invoke")
		->args({"self","points","count"});
	using _method_60 = das::das_call_member< void (b2PolygonShape::*)(float,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_60)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float) , &b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy"});
	using _method_61 = das::das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_61)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float) , &b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy","center","angle"});
	addExtern< bool (*)(const b2PolygonShape &,const b2Transform &,const b2Vec2 &) , _phys2d_virtual_20_TestPoint >(*this,lib,"TestPoint",SideEffects::worstDefault,"_phys2d_virtual_20_TestPoint")
		->args({"self","transform","p"});
	addExtern< bool (*)(const b2PolygonShape &,b2RayCastOutput *,const b2RayCastInput &,const b2Transform &,int) , _phys2d_virtual_21_RayCast >(*this,lib,"RayCast",SideEffects::worstDefault,"_phys2d_virtual_21_RayCast")
		->args({"self","output","input","transform","childIndex"});
	addExtern< void (*)(const b2PolygonShape &,b2AABB *,const b2Transform &,int) , _phys2d_virtual_22_ComputeAABB >(*this,lib,"ComputeAABB",SideEffects::worstDefault,"_phys2d_virtual_22_ComputeAABB")
		->args({"self","aabb","transform","childIndex"});
	addExtern< void (*)(const b2PolygonShape &,b2MassData *,float) , _phys2d_virtual_23_ComputeMass >(*this,lib,"ComputeMass",SideEffects::worstDefault,"_phys2d_virtual_23_ComputeMass")
		->args({"self","massData","density"});
	using _method_66 = das::das_call_member< bool (b2PolygonShape::*)() const,&b2PolygonShape::Validate >;
	addExtern<DAS_CALL_METHOD(_method_66)>(*this,lib,"Validate",SideEffects::worstDefault,"das_call_member< bool (b2PolygonShape::*)() const , &b2PolygonShape::Validate >::invoke")
		->args({"self"});
	using _method_67 = das::das_call_member< bool (b2TreeNode::*)() const,&b2TreeNode::IsLeaf >;
	addExtern<DAS_CALL_METHOD(_method_67)>(*this,lib,"IsLeaf",SideEffects::worstDefault,"das_call_member< bool (b2TreeNode::*)() const , &b2TreeNode::IsLeaf >::invoke")
		->args({"self"});
	addCtorAndUsing<b2DynamicTree>(*this,lib,"b2DynamicTree","b2DynamicTree");
	using _method_68 = das::das_call_member< int (b2DynamicTree::*)(const b2AABB &,void *),&b2DynamicTree::CreateProxy >;
	addExtern<DAS_CALL_METHOD(_method_68)>(*this,lib,"CreateProxy",SideEffects::worstDefault,"das_call_member< int (b2DynamicTree::*)(const b2AABB &,void *) , &b2DynamicTree::CreateProxy >::invoke")
		->args({"self","aabb","userData"});
	using _method_69 = das::das_call_member< void (b2DynamicTree::*)(int),&b2DynamicTree::DestroyProxy >;
	addExtern<DAS_CALL_METHOD(_method_69)>(*this,lib,"DestroyProxy",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)(int) , &b2DynamicTree::DestroyProxy >::invoke")
		->args({"self","proxyId"});
	using _method_70 = das::das_call_member< bool (b2DynamicTree::*)(int,const b2AABB &,const b2Vec2 &),&b2DynamicTree::MoveProxy >;
	addExtern<DAS_CALL_METHOD(_method_70)>(*this,lib,"MoveProxy",SideEffects::worstDefault,"das_call_member< bool (b2DynamicTree::*)(int,const b2AABB &,const b2Vec2 &) , &b2DynamicTree::MoveProxy >::invoke")
		->args({"self","proxyId","aabb1","displacement"});
	using _method_71 = das::das_call_member< void * (b2DynamicTree::*)(int) const,&b2DynamicTree::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_71)>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< void * (b2DynamicTree::*)(int) const , &b2DynamicTree::GetUserData >::invoke")
		->args({"self","proxyId"});
	using _method_72 = das::das_call_member< bool (b2DynamicTree::*)(int) const,&b2DynamicTree::WasMoved >;
	addExtern<DAS_CALL_METHOD(_method_72)>(*this,lib,"WasMoved",SideEffects::worstDefault,"das_call_member< bool (b2DynamicTree::*)(int) const , &b2DynamicTree::WasMoved >::invoke")
		->args({"self","proxyId"});
	using _method_73 = das::das_call_member< void (b2DynamicTree::*)(int),&b2DynamicTree::ClearMoved >;
	addExtern<DAS_CALL_METHOD(_method_73)>(*this,lib,"ClearMoved",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)(int) , &b2DynamicTree::ClearMoved >::invoke")
		->args({"self","proxyId"});
	using _method_74 = das::das_call_member< const b2AABB & (b2DynamicTree::*)(int) const,&b2DynamicTree::GetFatAABB >;
	addExtern<DAS_CALL_METHOD(_method_74), SimNode_ExtFuncCallRef>(*this,lib,"GetFatAABB",SideEffects::worstDefault,"das_call_member< const b2AABB & (b2DynamicTree::*)(int) const , &b2DynamicTree::GetFatAABB >::invoke")
		->args({"self","proxyId"});
	using _method_75 = das::das_call_member< void (b2DynamicTree::*)() const,&b2DynamicTree::Validate >;
	addExtern<DAS_CALL_METHOD(_method_75)>(*this,lib,"Validate",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)() const , &b2DynamicTree::Validate >::invoke")
		->args({"self"});
	using _method_76 = das::das_call_member< int (b2DynamicTree::*)() const,&b2DynamicTree::GetHeight >;
	addExtern<DAS_CALL_METHOD(_method_76)>(*this,lib,"GetHeight",SideEffects::worstDefault,"das_call_member< int (b2DynamicTree::*)() const , &b2DynamicTree::GetHeight >::invoke")
		->args({"self"});
	using _method_77 = das::das_call_member< int (b2DynamicTree::*)() const,&b2DynamicTree::GetMaxBalance >;
	addExtern<DAS_CALL_METHOD(_method_77)>(*this,lib,"GetMaxBalance",SideEffects::worstDefault,"das_call_member< int (b2DynamicTree::*)() const , &b2DynamicTree::GetMaxBalance >::invoke")
		->args({"self"});
}
}

