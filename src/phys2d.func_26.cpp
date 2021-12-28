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
void Module_phys2d::initFunctions_26() {
	addExtern< b2Vec2 (*)(const b2WeldJoint &) , _phys2d_virtual_77_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_77_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2WeldJoint &) , _phys2d_virtual_78_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_78_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2WeldJoint &,float) , _phys2d_virtual_79_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_79_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2WeldJoint &,float) , _phys2d_virtual_80_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_80_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_417 = das::das_call_member< const b2Vec2 & (b2WeldJoint::*)() const,&b2WeldJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_417), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WeldJoint::*)() const , &b2WeldJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_418 = das::das_call_member< const b2Vec2 & (b2WeldJoint::*)() const,&b2WeldJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_418), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WeldJoint::*)() const , &b2WeldJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_419 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_419)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_420 = das::das_call_member< void (b2WeldJoint::*)(float),&b2WeldJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_420)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2WeldJoint::*)(float) , &b2WeldJoint::SetStiffness >::invoke")
		->args({"self","hz"});
	using _method_421 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_421)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_422 = das::das_call_member< void (b2WeldJoint::*)(float),&b2WeldJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_422)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2WeldJoint::*)(float) , &b2WeldJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_423 = das::das_call_member< float (b2WeldJoint::*)() const,&b2WeldJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_423)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2WeldJoint::*)() const , &b2WeldJoint::GetDamping >::invoke")
		->args({"self"});
	addExtern< void (*)(b2WeldJoint &) , _phys2d_virtual_81_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_81_Dump")
		->args({"self"});
	addCtorAndUsing<b2WheelJointDef>(*this,lib,"b2WheelJointDef","b2WheelJointDef");
	using _method_425 = das::das_call_member< void (b2WheelJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &),&b2WheelJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_425)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2WheelJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &) , &b2WheelJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor","axis"});
	addExtern< b2Vec2 (*)(const b2WheelJoint &) , _phys2d_virtual_82_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_82_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2WheelJoint &) , _phys2d_virtual_83_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_83_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2WheelJoint &,float) , _phys2d_virtual_84_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_84_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2WheelJoint &,float) , _phys2d_virtual_85_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_85_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_430 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_430), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_431 = das::das_call_member< const b2Vec2 & (b2WheelJoint::*)() const,&b2WheelJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_431), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2WheelJoint::*)() const , &b2WheelJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
}
}

