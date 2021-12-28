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
void Module_phys2d::initFunctions_18() {
	using _method_264 = das::das_call_member< b2Body * (b2Joint::*)(),&b2Joint::GetBodyB >;
	addExtern<DAS_CALL_METHOD(_method_264)>(*this,lib,"GetBodyB",SideEffects::worstDefault,"das_call_member< b2Body * (b2Joint::*)() , &b2Joint::GetBodyB >::invoke")
		->args({"self"});
	using _method_265 = das::das_call_member< b2Joint * (b2Joint::*)(),&b2Joint::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_265)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< b2Joint * (b2Joint::*)() , &b2Joint::GetNext >::invoke")
		->args({"self"});
	using _method_266 = das::das_call_member< const b2Joint * (b2Joint::*)() const,&b2Joint::GetNext >;
	addExtern<DAS_CALL_METHOD(_method_266)>(*this,lib,"GetNext",SideEffects::worstDefault,"das_call_member< const b2Joint * (b2Joint::*)() const , &b2Joint::GetNext >::invoke")
		->args({"self"});
	using _method_267 = das::das_call_member< b2JointUserData & (b2Joint::*)(),&b2Joint::GetUserData >;
	addExtern<DAS_CALL_METHOD(_method_267), SimNode_ExtFuncCallRef>(*this,lib,"GetUserData",SideEffects::worstDefault,"das_call_member< b2JointUserData & (b2Joint::*)() , &b2Joint::GetUserData >::invoke")
		->args({"self"});
	using _method_268 = das::das_call_member< bool (b2Joint::*)() const,&b2Joint::IsEnabled >;
	addExtern<DAS_CALL_METHOD(_method_268)>(*this,lib,"IsEnabled",SideEffects::worstDefault,"das_call_member< bool (b2Joint::*)() const , &b2Joint::IsEnabled >::invoke")
		->args({"self"});
	using _method_269 = das::das_call_member< bool (b2Joint::*)() const,&b2Joint::GetCollideConnected >;
	addExtern<DAS_CALL_METHOD(_method_269)>(*this,lib,"GetCollideConnected",SideEffects::worstDefault,"das_call_member< bool (b2Joint::*)() const , &b2Joint::GetCollideConnected >::invoke")
		->args({"self"});
	addExtern< void (*)(b2Joint &) , _phys2d_virtual_29_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_29_Dump")
		->args({"self"});
	addExtern< void (*)(b2Joint &,const b2Vec2 &) , _phys2d_virtual_30_ShiftOrigin >(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"_phys2d_virtual_30_ShiftOrigin")
		->args({"self","newOrigin"});
	addExtern< void (*)(const b2Joint &,b2Draw *) , _phys2d_virtual_31_Draw >(*this,lib,"Draw",SideEffects::worstDefault,"_phys2d_virtual_31_Draw")
		->args({"self","draw"});
	addCtorAndUsing<b2DistanceJointDef>(*this,lib,"b2DistanceJointDef","b2DistanceJointDef");
	using _method_273 = das::das_call_member< void (b2DistanceJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2DistanceJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_273)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2DistanceJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2DistanceJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchorA","anchorB"});
	addExtern< b2Vec2 (*)(const b2DistanceJoint &) , _phys2d_virtual_32_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_32_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2DistanceJoint &) , _phys2d_virtual_33_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_33_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2DistanceJoint &,float) , _phys2d_virtual_34_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_34_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2DistanceJoint &,float) , _phys2d_virtual_35_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_35_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_278 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_278), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_279 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_279), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_280 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLength >;
	addExtern<DAS_CALL_METHOD(_method_280)>(*this,lib,"GetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLength >::invoke")
		->args({"self"});
	using _method_281 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetLength >;
	addExtern<DAS_CALL_METHOD(_method_281)>(*this,lib,"SetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetLength >::invoke")
		->args({"self","length"});
	using _method_282 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_282)>(*this,lib,"GetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetMinLength >::invoke")
		->args({"self"});
}
}

