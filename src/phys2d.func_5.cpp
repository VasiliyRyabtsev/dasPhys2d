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
void Module_phys2d::initFunctions_5() {
	using _method_31 = das::das_call_member< bool (b2AABB::*)(b2RayCastOutput *,const b2RayCastInput &) const,&b2AABB::RayCast >;
	addExtern<DAS_CALL_METHOD(_method_31)>(*this,lib,"RayCast",SideEffects::worstDefault,"das_call_member< bool (b2AABB::*)(b2RayCastOutput *,const b2RayCastInput &) const , &b2AABB::RayCast >::invoke")
		->args({"self","output","input"});
	addExtern< void (*)(b2Manifold *,const b2CircleShape *,const b2Transform &,const b2CircleShape *,const b2Transform &) , b2CollideCircles >(*this,lib,"b2CollideCircles",SideEffects::worstDefault,"b2CollideCircles")
		->args({"manifold","circleA","xfA","circleB","xfB"});
	addExtern< void (*)(b2Manifold *,const b2PolygonShape *,const b2Transform &,const b2CircleShape *,const b2Transform &) , b2CollidePolygonAndCircle >(*this,lib,"b2CollidePolygonAndCircle",SideEffects::worstDefault,"b2CollidePolygonAndCircle")
		->args({"manifold","polygonA","xfA","circleB","xfB"});
	addExtern< void (*)(b2Manifold *,const b2PolygonShape *,const b2Transform &,const b2PolygonShape *,const b2Transform &) , b2CollidePolygons >(*this,lib,"b2CollidePolygons",SideEffects::worstDefault,"b2CollidePolygons")
		->args({"manifold","polygonA","xfA","polygonB","xfB"});
	addExtern< void (*)(b2Manifold *,const b2EdgeShape *,const b2Transform &,const b2CircleShape *,const b2Transform &) , b2CollideEdgeAndCircle >(*this,lib,"b2CollideEdgeAndCircle",SideEffects::worstDefault,"b2CollideEdgeAndCircle")
		->args({"manifold","polygonA","xfA","circleB","xfB"});
	addExtern< void (*)(b2Manifold *,const b2EdgeShape *,const b2Transform &,const b2PolygonShape *,const b2Transform &) , b2CollideEdgeAndPolygon >(*this,lib,"b2CollideEdgeAndPolygon",SideEffects::worstDefault,"b2CollideEdgeAndPolygon")
		->args({"manifold","edgeA","xfA","circleB","xfB"});
	addExtern< int (*)(b2ClipVertex [2],b2ClipVertex const[2],const b2Vec2 &,float,int) , b2ClipSegmentToLine >(*this,lib,"b2ClipSegmentToLine",SideEffects::worstDefault,"b2ClipSegmentToLine")
		->args({"vOut","vIn","normal","offset","vertexIndexA"});
	addExtern< bool (*)(const b2Shape *,int,const b2Shape *,int,const b2Transform &,const b2Transform &) , b2TestOverlap >(*this,lib,"b2TestOverlap",SideEffects::worstDefault,"b2TestOverlap")
		->args({"shapeA","indexA","shapeB","indexB","xfA","xfB"});
	addExtern< bool (*)(const b2AABB &,const b2AABB &) , b2TestOverlap >(*this,lib,"b2TestOverlap",SideEffects::worstDefault,"b2TestOverlap")
		->args({"a","b"});
	using _method_32 = das::das_call_member< b2Shape::Type (b2Shape::*)() const,&b2Shape::GetType >;
	addExtern<DAS_CALL_METHOD(_method_32)>(*this,lib,"GetType",SideEffects::worstDefault,"das_call_member< b2Shape::Type (b2Shape::*)() const , &b2Shape::GetType >::invoke")
		->args({"self"});
	addCtorAndUsing<b2ChainShape>(*this,lib,"b2ChainShape","b2ChainShape");
	using _method_33 = das::das_call_member< void (b2ChainShape::*)(),&b2ChainShape::Clear >;
	addExtern<DAS_CALL_METHOD(_method_33)>(*this,lib,"Clear",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)() , &b2ChainShape::Clear >::invoke")
		->args({"self"});
	using _method_34 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int),&b2ChainShape::CreateLoop >;
	addExtern<DAS_CALL_METHOD(_method_34)>(*this,lib,"CreateLoop",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int) , &b2ChainShape::CreateLoop >::invoke")
		->args({"self","vertices","count"});
	using _method_35 = das::das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &),&b2ChainShape::CreateChain >;
	addExtern<DAS_CALL_METHOD(_method_35)>(*this,lib,"CreateChain",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(const b2Vec2 *,int,const b2Vec2 &,const b2Vec2 &) , &b2ChainShape::CreateChain >::invoke")
		->args({"self","vertices","count","prevVertex","nextVertex"});
	addExtern< b2Shape * (*)(const b2ChainShape &,b2BlockAllocator *) , _phys2d_virtual_0_Clone >(*this,lib,"Clone",SideEffects::worstDefault,"_phys2d_virtual_0_Clone")
		->args({"self","allocator"});
	addExtern< int (*)(const b2ChainShape &) , _phys2d_virtual_1_GetChildCount >(*this,lib,"GetChildCount",SideEffects::worstDefault,"_phys2d_virtual_1_GetChildCount")
		->args({"self"});
	using _method_38 = das::das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const,&b2ChainShape::GetChildEdge >;
	addExtern<DAS_CALL_METHOD(_method_38)>(*this,lib,"GetChildEdge",SideEffects::worstDefault,"das_call_member< void (b2ChainShape::*)(b2EdgeShape *,int) const , &b2ChainShape::GetChildEdge >::invoke")
		->args({"self","edge","index"});
	addExtern< bool (*)(const b2ChainShape &,const b2Transform &,const b2Vec2 &) , _phys2d_virtual_2_TestPoint >(*this,lib,"TestPoint",SideEffects::worstDefault,"_phys2d_virtual_2_TestPoint")
		->args({"self","transform","p"});
	addExtern< bool (*)(const b2ChainShape &,b2RayCastOutput *,const b2RayCastInput &,const b2Transform &,int) , _phys2d_virtual_3_RayCast >(*this,lib,"RayCast",SideEffects::worstDefault,"_phys2d_virtual_3_RayCast")
		->args({"self","output","input","transform","childIndex"});
	addExtern< void (*)(const b2ChainShape &,b2AABB *,const b2Transform &,int) , _phys2d_virtual_4_ComputeAABB >(*this,lib,"ComputeAABB",SideEffects::worstDefault,"_phys2d_virtual_4_ComputeAABB")
		->args({"self","aabb","transform","childIndex"});
}
}

