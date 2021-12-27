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
void Module_box2d::initFunctions_7() {
//	using _method_56 = das::das_call_member< b2Shape::Type (b2Shape::*)() const,&b2Shape::GetType >;
//	addExtern<DAS_CALL_METHOD(_method_56)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2Shape::Type (b2Shape::*)() const , &b2Shape::GetType >::invoke")
//		->args({"self"});
	addCtorAndUsing<b2ChainShape>(*this,lib,"b2ChainShape","b2ChainShape");
	using _method_57 = das::das_call_member< void (b2ChainShape::*)(),&b2ChainShape::Clear >;
	addExtern<DAS_CALL_METHOD(_method_57)>(*this,lib,"Clear",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)() , &b2ChainShape::Clear >::invoke")
		->args({"self"});
	using _method_58 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int),&b2ChainShape::CreateLoop >;
	addExtern<DAS_CALL_METHOD(_method_58)>(*this,lib,"CreateLoop",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int) , &b2ChainShape::CreateLoop >::invoke")
		->args({"self","vertices","count"});
	using _method_59 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >;
	addExtern<DAS_CALL_METHOD(_method_59)>(*this,lib,"CreateChain",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &) , &b2ChainShape::CreateChain >::invoke")
		->args({"self","vertices","count","prevVertex","nextVertex"});
	using _method_60 = das::das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >;
	addExtern<DAS_CALL_METHOD(_method_60)>(*this,lib,"GetChildEdge",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const , &b2ChainShape::GetChildEdge >::invoke")
		->args({"self","edge","index"});
	addCtorAndUsing<b2CircleShape>(*this,lib,"b2CircleShape","b2CircleShape");
	addCtorAndUsing<b2EdgeShape>(*this,lib,"b2EdgeShape","b2EdgeShape");
	using _method_61 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetOneSided >;
	addExtern<DAS_CALL_METHOD(_method_61)>(*this,lib,"SetOneSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &) , &b2EdgeShape::SetOneSided >::invoke")
		->args({"self","v0","v1","v2","v3"});
	using _method_62 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetTwoSided >;
	addExtern<DAS_CALL_METHOD(_method_62)>(*this,lib,"SetTwoSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &) , &b2EdgeShape::SetTwoSided >::invoke")
		->args({"self","v1","v2"});
	addCtorAndUsing<b2PolygonShape>(*this,lib,"b2PolygonShape","b2PolygonShape");
	using _method_63 = das::das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int),&b2PolygonShape::Set >;
	addExtern<DAS_CALL_METHOD(_method_63)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int) , &b2PolygonShape::Set >::invoke")
		->args({"self","points","count"});
	using _method_64 = das::das_call_member< void (b2PolygonShape::*)(float,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_64)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float) , &b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy"});
	using _method_65 = das::das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_65)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float) , &b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy","center","angle"});
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
}
}

