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
void Module_box2d::initFunctions_6() {
	using _method_45 = das::das_call_member< void (b2Timer::*)(),&b2Timer::Reset >;
	addExtern<DAS_CALL_METHOD(_method_45)>(*this,lib,"Reset",SideEffects::worstDefault,"das_call_member< void (b2Timer::*)() , &b2Timer::Reset >::invoke")
		->args({"self"});
	using _method_46 = das::das_call_member< float (b2Timer::*)() const,&b2Timer::GetMilliseconds >;
	addExtern<DAS_CALL_METHOD(_method_46)>(*this,lib,"GetMilliseconds",SideEffects::worstDefault,"das_call_member< float (b2Timer::*)() const , &b2Timer::GetMilliseconds >::invoke")
		->args({"self"});
	using _method_47 = das::das_call_member< void (b2WorldManifold::*)(const b2Manifold *,const b2Transform &,float,const b2Transform &,float),&b2WorldManifold::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_47)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WorldManifold::*)(const b2Manifold *,const b2Transform &,float,const b2Transform &,float) , &b2WorldManifold::Initialize >::invoke")
		->args({"self","manifold","xfA","radiusA","xfB","radiusB"});
	addExtern< void (*)(b2PointState [2],b2PointState [2],const b2Manifold *,const b2Manifold *) , b2GetPointStates >(*this,lib,"b2GetPointStates",SideEffects::worstDefault,"b2GetPointStates")
		->args({"state1","state2","manifold1","manifold2"});
	using _method_48 = das::das_call_member< bool (b2AABB::*)() const,&b2AABB::IsValid >;
	addExtern<DAS_CALL_METHOD(_method_48)>(*this,lib,"IsValid",SideEffects::worstDefault,"das_call_member< bool (b2AABB::*)() const , &b2AABB::IsValid >::invoke")
		->args({"self"});
	using _method_49 = das::das_call_member< b2Vec2 (b2AABB::*)() const,&b2AABB::GetCenter >;
	addExtern<DAS_CALL_METHOD(_method_49),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetCenter",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2AABB::*)() const , &b2AABB::GetCenter >::invoke")
		->args({"self"});
	using _method_50 = das::das_call_member< b2Vec2 (b2AABB::*)() const,&b2AABB::GetExtents >;
	addExtern<DAS_CALL_METHOD(_method_50),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetExtents",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2AABB::*)() const , &b2AABB::GetExtents >::invoke")
		->args({"self"});
	using _method_51 = das::das_call_member< float (b2AABB::*)() const,&b2AABB::GetPerimeter >;
	addExtern<DAS_CALL_METHOD(_method_51)>(*this,lib,"GetPerimeter",SideEffects::worstDefault,"das_call_member< float (b2AABB::*)() const , &b2AABB::GetPerimeter >::invoke")
		->args({"self"});
	using _method_52 = das::das_call_member< void (b2AABB::*)(const b2AABB &),&b2AABB::Combine >;
	addExtern<DAS_CALL_METHOD(_method_52)>(*this,lib,"Combine",SideEffects::worstDefault,"das_call_member< void (b2AABB::*)(const b2AABB &) , &b2AABB::Combine >::invoke")
		->args({"self","aabb"});
	using _method_53 = das::das_call_member< void (b2AABB::*)(const b2AABB &,const b2AABB &),&b2AABB::Combine >;
	addExtern<DAS_CALL_METHOD(_method_53)>(*this,lib,"Combine",SideEffects::worstDefault,"das_call_member< void (b2AABB::*)(const b2AABB &,const b2AABB &) , &b2AABB::Combine >::invoke")
		->args({"self","aabb1","aabb2"});
	using _method_54 = das::das_call_member< bool (b2AABB::*)(const b2AABB &) const,&b2AABB::Contains >;
	addExtern<DAS_CALL_METHOD(_method_54)>(*this,lib,"Contains",SideEffects::worstDefault,"das_call_member< bool (b2AABB::*)(const b2AABB &) const , &b2AABB::Contains >::invoke")
		->args({"self","aabb"});
	using _method_55 = das::das_call_member< bool (b2AABB::*)(b2RayCastOutput *,const b2RayCastInput &) const,&b2AABB::RayCast >;
	addExtern<DAS_CALL_METHOD(_method_55)>(*this,lib,"RayCast",SideEffects::worstDefault,"das_call_member< bool (b2AABB::*)(b2RayCastOutput *,const b2RayCastInput &) const , &b2AABB::RayCast >::invoke")
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
}
}

