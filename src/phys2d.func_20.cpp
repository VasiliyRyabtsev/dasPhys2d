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
void Module_phys2d::initFunctions_20() {
	addExtern< b2Vec2 (*)(const b2FrictionJoint &) , _phys2d_virtual_39_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_39_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2FrictionJoint &,float) , _phys2d_virtual_40_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_40_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2FrictionJoint &,float) , _phys2d_virtual_41_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_41_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_303 = das::das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_303), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const , &b2FrictionJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_304 = das::das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const,&b2FrictionJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_304), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2FrictionJoint::*)() const , &b2FrictionJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_305 = das::das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_305)>(*this,lib,"SetMaxForce",SideEffects::worstDefault,"das_call_member< void (b2FrictionJoint::*)(float) , &b2FrictionJoint::SetMaxForce >::invoke")
		->args({"self","force"});
	using _method_306 = das::das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxForce >;
	addExtern<DAS_CALL_METHOD(_method_306)>(*this,lib,"GetMaxForce",SideEffects::worstDefault,"das_call_member< float (b2FrictionJoint::*)() const , &b2FrictionJoint::GetMaxForce >::invoke")
		->args({"self"});
	using _method_307 = das::das_call_member< void (b2FrictionJoint::*)(float),&b2FrictionJoint::SetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_307)>(*this,lib,"SetMaxTorque",SideEffects::worstDefault,"das_call_member< void (b2FrictionJoint::*)(float) , &b2FrictionJoint::SetMaxTorque >::invoke")
		->args({"self","torque"});
	using _method_308 = das::das_call_member< float (b2FrictionJoint::*)() const,&b2FrictionJoint::GetMaxTorque >;
	addExtern<DAS_CALL_METHOD(_method_308)>(*this,lib,"GetMaxTorque",SideEffects::worstDefault,"das_call_member< float (b2FrictionJoint::*)() const , &b2FrictionJoint::GetMaxTorque >::invoke")
		->args({"self"});
	addExtern< void (*)(b2FrictionJoint &) , _phys2d_virtual_42_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_42_Dump")
		->args({"self"});
	addCtorAndUsing<b2GearJointDef>(*this,lib,"b2GearJointDef","b2GearJointDef");
	addExtern< b2Vec2 (*)(const b2GearJoint &) , _phys2d_virtual_43_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_43_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2GearJoint &) , _phys2d_virtual_44_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_44_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2GearJoint &,float) , _phys2d_virtual_45_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_45_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2GearJoint &,float) , _phys2d_virtual_46_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_46_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_314 = das::das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint1 >;
	addExtern<DAS_CALL_METHOD(_method_314)>(*this,lib,"GetJoint1",SideEffects::worstDefault,"das_call_member< b2Joint * (b2GearJoint::*)() , &b2GearJoint::GetJoint1 >::invoke")
		->args({"self"});
	using _method_315 = das::das_call_member< b2Joint * (b2GearJoint::*)(),&b2GearJoint::GetJoint2 >;
	addExtern<DAS_CALL_METHOD(_method_315)>(*this,lib,"GetJoint2",SideEffects::worstDefault,"das_call_member< b2Joint * (b2GearJoint::*)() , &b2GearJoint::GetJoint2 >::invoke")
		->args({"self"});
	using _method_316 = das::das_call_member< void (b2GearJoint::*)(float),&b2GearJoint::SetRatio >;
	addExtern<DAS_CALL_METHOD(_method_316)>(*this,lib,"SetRatio",SideEffects::worstDefault,"das_call_member< void (b2GearJoint::*)(float) , &b2GearJoint::SetRatio >::invoke")
		->args({"self","ratio"});
	using _method_317 = das::das_call_member< float (b2GearJoint::*)() const,&b2GearJoint::GetRatio >;
	addExtern<DAS_CALL_METHOD(_method_317)>(*this,lib,"GetRatio",SideEffects::worstDefault,"das_call_member< float (b2GearJoint::*)() const , &b2GearJoint::GetRatio >::invoke")
		->args({"self"});
	addExtern< void (*)(b2GearJoint &) , _phys2d_virtual_47_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_47_Dump")
		->args({"self"});
}
}

