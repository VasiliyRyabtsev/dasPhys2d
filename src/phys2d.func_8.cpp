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
void Module_phys2d::initFunctions_8() {
	using _method_76 = das::das_call_member< void * (b2DynamicTree::*)(int) const,&b2DynamicTree::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_76)>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< void * (b2DynamicTree::*)(int) const , &b2DynamicTree::GetUserData >::invoke")
		->args({"self","proxyId"});
	using _method_77 = das::das_call_member< bool (b2DynamicTree::*)(int) const,&b2DynamicTree::WasMoved >;
	addExtern<DAS_CALL_METHOD(_method_77)>(*this,lib,"WasMoved",SideEffects::worstDefault,"das_call_member< bool (b2DynamicTree::*)(int) const , &b2DynamicTree::WasMoved >::invoke")
		->args({"self","proxyId"});
	using _method_78 = das::das_call_member< void (b2DynamicTree::*)(int),&b2DynamicTree::ClearMoved >;
	addExtern<DAS_CALL_METHOD(_method_78)>(*this,lib,"ClearMoved",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)(int) , &b2DynamicTree::ClearMoved >::invoke")
		->args({"self","proxyId"});
	using _method_79 = das::das_call_member< const b2AABB & (b2DynamicTree::*)(int) const,&b2DynamicTree::GetFatAABB >;
	addExtern<DAS_CALL_METHOD(_method_79), SimNode_ExtFuncCallRef>(*this,lib,"GetFatAABB",SideEffects::worstDefault,"das_call_member< const b2AABB & (b2DynamicTree::*)(int) const , &b2DynamicTree::GetFatAABB >::invoke")
		->args({"self","proxyId"});
	using _method_80 = das::das_call_member< void (b2DynamicTree::*)() const,&b2DynamicTree::Validate >;
	addExtern<DAS_CALL_METHOD(_method_80)>(*this,lib,"Validate",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)() const , &b2DynamicTree::Validate >::invoke")
		->args({"self"});
	using _method_81 = das::das_call_member< int (b2DynamicTree::*)() const,&b2DynamicTree::GetHeight >;
	addExtern<DAS_CALL_METHOD(_method_81)>(*this,lib,"GetHeight",SideEffects::worstDefault,"das_call_member< int (b2DynamicTree::*)() const , &b2DynamicTree::GetHeight >::invoke")
		->args({"self"});
	using _method_82 = das::das_call_member< int (b2DynamicTree::*)() const,&b2DynamicTree::GetMaxBalance >;
	addExtern<DAS_CALL_METHOD(_method_82)>(*this,lib,"GetMaxBalance",SideEffects::worstDefault,"das_call_member< int (b2DynamicTree::*)() const , &b2DynamicTree::GetMaxBalance >::invoke")
		->args({"self"});
	using _method_83 = das::das_call_member< float (b2DynamicTree::*)() const,&b2DynamicTree::GetAreaRatio >;
	addExtern<DAS_CALL_METHOD(_method_83)>(*this,lib,"GetAreaRatio",SideEffects::worstDefault,"das_call_member< float (b2DynamicTree::*)() const , &b2DynamicTree::GetAreaRatio >::invoke")
		->args({"self"});
	using _method_84 = das::das_call_member< void (b2DynamicTree::*)(),&b2DynamicTree::RebuildBottomUp >;
	addExtern<DAS_CALL_METHOD(_method_84)>(*this,lib,"RebuildBottomUp",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)() , &b2DynamicTree::RebuildBottomUp >::invoke")
		->args({"self"});
	using _method_85 = das::das_call_member< void (b2DynamicTree::*)(const b2Vec2 &),&b2DynamicTree::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_85)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)(const b2Vec2 &) , &b2DynamicTree::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	addCtorAndUsing<b2BroadPhase>(*this,lib,"b2BroadPhase","b2BroadPhase");
	using _method_86 = das::das_call_member< int (b2BroadPhase::*)(const b2AABB &,void *),&b2BroadPhase::CreateProxy >;
	addExtern<DAS_CALL_METHOD(_method_86)>(*this,lib,"CreateProxy",SideEffects::worstDefault,"das_call_member< int (b2BroadPhase::*)(const b2AABB &,void *) , &b2BroadPhase::CreateProxy >::invoke")
		->args({"self","aabb","userData"});
	using _method_87 = das::das_call_member< void (b2BroadPhase::*)(int),&b2BroadPhase::DestroyProxy >;
	addExtern<DAS_CALL_METHOD(_method_87)>(*this,lib,"DestroyProxy",SideEffects::worstDefault,"das_call_member< void (b2BroadPhase::*)(int) , &b2BroadPhase::DestroyProxy >::invoke")
		->args({"self","proxyId"});
	using _method_88 = das::das_call_member< void (b2BroadPhase::*)(int,const b2AABB &,const b2Vec2 &),&b2BroadPhase::MoveProxy >;
	addExtern<DAS_CALL_METHOD(_method_88)>(*this,lib,"MoveProxy",SideEffects::worstDefault,"das_call_member< void (b2BroadPhase::*)(int,const b2AABB &,const b2Vec2 &) , &b2BroadPhase::MoveProxy >::invoke")
		->args({"self","proxyId","aabb","displacement"});
	using _method_89 = das::das_call_member< void (b2BroadPhase::*)(int),&b2BroadPhase::TouchProxy >;
	addExtern<DAS_CALL_METHOD(_method_89)>(*this,lib,"TouchProxy",SideEffects::worstDefault,"das_call_member< void (b2BroadPhase::*)(int) , &b2BroadPhase::TouchProxy >::invoke")
		->args({"self","proxyId"});
	using _method_90 = das::das_call_member< const b2AABB & (b2BroadPhase::*)(int) const,&b2BroadPhase::GetFatAABB >;
	addExtern<DAS_CALL_METHOD(_method_90), SimNode_ExtFuncCallRef>(*this,lib,"GetFatAABB",SideEffects::worstDefault,"das_call_member< const b2AABB & (b2BroadPhase::*)(int) const , &b2BroadPhase::GetFatAABB >::invoke")
		->args({"self","proxyId"});
	using _method_91 = das::das_call_member< void * (b2BroadPhase::*)(int) const,&b2BroadPhase::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_91)>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< void * (b2BroadPhase::*)(int) const , &b2BroadPhase::GetUserData >::invoke")
		->args({"self","proxyId"});
	using _method_92 = das::das_call_member< bool (b2BroadPhase::*)(int,int) const,&b2BroadPhase::TestOverlap >;
	addExtern<DAS_CALL_METHOD(_method_92)>(*this,lib,"TestOverlap",SideEffects::worstDefault,"das_call_member< bool (b2BroadPhase::*)(int,int) const , &b2BroadPhase::TestOverlap >::invoke")
		->args({"self","proxyIdA","proxyIdB"});
	using _method_93 = das::das_call_member< int (b2BroadPhase::*)() const,&b2BroadPhase::GetProxyCount >;
	addExtern<DAS_CALL_METHOD(_method_93)>(*this,lib,"GetProxyCount",SideEffects::worstDefault,"das_call_member< int (b2BroadPhase::*)() const , &b2BroadPhase::GetProxyCount >::invoke")
		->args({"self"});
	using _method_94 = das::das_call_member< int (b2BroadPhase::*)() const,&b2BroadPhase::GetTreeHeight >;
	addExtern<DAS_CALL_METHOD(_method_94)>(*this,lib,"GetTreeHeight",SideEffects::worstDefault,"das_call_member< int (b2BroadPhase::*)() const , &b2BroadPhase::GetTreeHeight >::invoke")
		->args({"self"});
}
}

