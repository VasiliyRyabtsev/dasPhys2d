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
void Module_box2d::initFunctions_5() {
	using _method_44 = das::das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::ClearFlags >;
	addExtern<DAS_CALL_METHOD(_method_44)>(*this,lib,"ClearFlags",SideEffects::worstDefault,"das_call_member< void (b2Draw::*)(unsigned int),&b2Draw::ClearFlags >::invoke")
		->args({"self","flags"});
	using _method_45 = das::das_call_member< void (b2Timer::*)(),&b2Timer::Reset >;
	addExtern<DAS_CALL_METHOD(_method_45)>(*this,lib,"Reset",SideEffects::worstDefault,"das_call_member< void (b2Timer::*)(),&b2Timer::Reset >::invoke")
		->args({"self"});
	using _method_46 = das::das_call_member< float (b2Timer::*)() const,&b2Timer::GetMilliseconds >;
	addExtern<DAS_CALL_METHOD(_method_46)>(*this,lib,"GetMilliseconds",SideEffects::worstDefault,"das_call_member< float (b2Timer::*)() const,&b2Timer::GetMilliseconds >::invoke")
		->args({"self"});
	using _method_47 = das::das_call_member< b2Shape::Type (b2Shape::*)() const,&b2Shape::GetType >;
	addExtern<DAS_CALL_METHOD(_method_47)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2Shape::Type (b2Shape::*)() const,&b2Shape::GetType >::invoke")
		->args({"self"});
	using _method_48 = das::das_call_member< void (b2ChainShape::*)(),&b2ChainShape::Clear >;
	addExtern<DAS_CALL_METHOD(_method_48)>(*this,lib,"Clear",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(),&b2ChainShape::Clear >::invoke")
		->args({"self"});
	using _method_49 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int),&b2ChainShape::CreateLoop >;
	addExtern<DAS_CALL_METHOD(_method_49)>(*this,lib,"CreateLoop",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int),&b2ChainShape::CreateLoop >::invoke")
		->args({"self","vertices","count"});
	using _method_50 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >;
	addExtern<DAS_CALL_METHOD(_method_50)>(*this,lib,"CreateChain",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >::invoke")
		->args({"self","vertices","count","prevVertex","nextVertex"});
	using _method_51 = das::das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >;
	addExtern<DAS_CALL_METHOD(_method_51)>(*this,lib,"GetChildEdge",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >::invoke")
		->args({"self","edge","index"});
	using _method_52 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetOneSided >;
	addExtern<DAS_CALL_METHOD(_method_52)>(*this,lib,"SetOneSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetOneSided >::invoke")
		->args({"self","v0","v1","v2","v3"});
	using _method_53 = das::das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetTwoSided >;
	addExtern<DAS_CALL_METHOD(_method_53)>(*this,lib,"SetTwoSided",SideEffects::worstDefault,"das_call_member< void (b2EdgeShape::*)(const b2Vec2 &,const b2Vec2 &),&b2EdgeShape::SetTwoSided >::invoke")
		->args({"self","v1","v2"});
	using _method_54 = das::das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int),&b2PolygonShape::Set >;
	addExtern<DAS_CALL_METHOD(_method_54)>(*this,lib,"Set",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(const b2Vec2 *,int),&b2PolygonShape::Set >::invoke")
		->args({"self","points","count"});
	using _method_55 = das::das_call_member< void (b2PolygonShape::*)(float,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_55)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float),&b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy"});
	using _method_56 = das::das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float),&b2PolygonShape::SetAsBox >;
	addExtern<DAS_CALL_METHOD(_method_56)>(*this,lib,"SetAsBox",SideEffects::worstDefault,"das_call_member< void (b2PolygonShape::*)(float,float,const b2Vec2 &,float),&b2PolygonShape::SetAsBox >::invoke")
		->args({"self","hx","hy","center","angle"});
	using _method_57 = das::das_call_member< bool (b2PolygonShape::*)() const,&b2PolygonShape::Validate >;
	addExtern<DAS_CALL_METHOD(_method_57)>(*this,lib,"Validate",SideEffects::worstDefault,"das_call_member< bool (b2PolygonShape::*)() const,&b2PolygonShape::Validate >::invoke")
		->args({"self"});
	//using _method_58 = das::das_call_member< void (*)(const type-parameter-0-0 &),&Push >;
	//addExtern<DAS_CALL_METHOD(_method_58)>(*this,lib,"Push",SideEffects::worstDefault,"das_call_member< void (*)(const type-parameter-0-0 &),&Push >::invoke")
	//	->args({"self","element"});
	//using _method_59 = das::das_call_member< type-parameter-0-0 (*)(),&Pop >;
	//addExtern<DAS_CALL_METHOD(_method_59)>(*this,lib,"Pop",SideEffects::worstDefault,"das_call_member< type-parameter-0-0 (*)(),&Pop >::invoke")
	//	->args({"self"});
	//using _method_60 = das::das_call_member< int (*)(),&GetCount >;
	//addExtern<DAS_CALL_METHOD(_method_60)>(*this,lib,"GetCount",SideEffects::worstDefault,"das_call_member< int (*)(),&GetCount >::invoke")
	//	->args({"self"});
	using _method_61 = das::das_call_member< bool (b2TreeNode::*)() const,&b2TreeNode::IsLeaf >;
	addExtern<DAS_CALL_METHOD(_method_61)>(*this,lib,"IsLeaf",SideEffects::worstDefault,"das_call_member< bool (b2TreeNode::*)() const,&b2TreeNode::IsLeaf >::invoke")
		->args({"self"});
	using _method_62 = das::das_call_member< int (b2DynamicTree::*)(const b2AABB &,void *),&b2DynamicTree::CreateProxy >;
	addExtern<DAS_CALL_METHOD(_method_62)>(*this,lib,"CreateProxy",SideEffects::worstDefault,"das_call_member< int (b2DynamicTree::*)(const b2AABB &,void *),&b2DynamicTree::CreateProxy >::invoke")
		->args({"self","aabb","userData"});
	using _method_63 = das::das_call_member< void (b2DynamicTree::*)(int),&b2DynamicTree::DestroyProxy >;
	addExtern<DAS_CALL_METHOD(_method_63)>(*this,lib,"DestroyProxy",SideEffects::worstDefault,"das_call_member< void (b2DynamicTree::*)(int),&b2DynamicTree::DestroyProxy >::invoke")
		->args({"self","proxyId"});
}
}

