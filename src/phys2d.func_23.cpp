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
void Module_phys2d::initFunctions_23() {
	using _method_358 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_358)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_359 = das::das_call_member< void (b2PrismaticJoint::*)(float,float),&b2PrismaticJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_359)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float,float) , &b2PrismaticJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
	using _method_360 = das::das_call_member< bool (b2PrismaticJoint::*)() const,&b2PrismaticJoint::IsMotorEnabled >;
	addExtern<DAS_CALL_METHOD(_method_360)>(*this,lib,"IsMotorEnabled",SideEffects::worstDefault,"das_call_member< bool (b2PrismaticJoint::*)() const , &b2PrismaticJoint::IsMotorEnabled >::invoke")
		->args({"self"});
	using _method_361 = das::das_call_member< void (b2PrismaticJoint::*)(bool),&b2PrismaticJoint::EnableMotor >;
	addExtern<DAS_CALL_METHOD(_method_361)>(*this,lib,"EnableMotor",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(bool) , &b2PrismaticJoint::EnableMotor >::invoke")
		->args({"self","flag"});
	using _method_362 = das::das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_362)>(*this,lib,"SetMotorSpeed",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float) , &b2PrismaticJoint::SetMotorSpeed >::invoke")
		->args({"self","speed"});
	using _method_363 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMotorSpeed >;
	addExtern<DAS_CALL_METHOD(_method_363)>(*this,lib,"GetMotorSpeed",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetMotorSpeed >::invoke")
		->args({"self"});
	using _method_364 = das::das_call_member< void (b2PrismaticJoint::*)(float),&b2PrismaticJoint::SetMaxMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_364)>(*this,lib,"SetMaxMotorForce",SideEffects::worstDefault,"das_call_member< void (b2PrismaticJoint::*)(float) , &b2PrismaticJoint::SetMaxMotorForce >::invoke")
		->args({"self","force"});
	using _method_365 = das::das_call_member< float (b2PrismaticJoint::*)() const,&b2PrismaticJoint::GetMaxMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_365)>(*this,lib,"GetMaxMotorForce",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)() const , &b2PrismaticJoint::GetMaxMotorForce >::invoke")
		->args({"self"});
	using _method_366 = das::das_call_member< float (b2PrismaticJoint::*)(float) const,&b2PrismaticJoint::GetMotorForce >;
	addExtern<DAS_CALL_METHOD(_method_366)>(*this,lib,"GetMotorForce",SideEffects::worstDefault,"das_call_member< float (b2PrismaticJoint::*)(float) const , &b2PrismaticJoint::GetMotorForce >::invoke")
		->args({"self","inv_dt"});
	addExtern< void (*)(b2PrismaticJoint &) , _phys2d_virtual_63_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_63_Dump")
		->args({"self"});
	addExtern< void (*)(const b2PrismaticJoint &,b2Draw *) , _phys2d_virtual_64_Draw >(*this,lib,"Draw",SideEffects::worstDefault,"_phys2d_virtual_64_Draw")
		->args({"self","draw"});
	addCtorAndUsing<b2PulleyJointDef>(*this,lib,"b2PulleyJointDef","b2PulleyJointDef");
	using _method_369 = das::das_call_member< void (b2PulleyJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,float),&b2PulleyJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_369)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2PulleyJointDef::*)(b2Body *,b2Body *,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,const b2Vec2 &,float) , &b2PulleyJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","groundAnchorA","groundAnchorB","anchorA","anchorB","ratio"});
	addExtern< b2Vec2 (*)(const b2PulleyJoint &) , _phys2d_virtual_65_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_65_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2PulleyJoint &) , _phys2d_virtual_66_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_66_GetAnchorB")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2PulleyJoint &,float) , _phys2d_virtual_67_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_67_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2PulleyJoint &,float) , _phys2d_virtual_68_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_68_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_374 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_374)>(*this,lib,"GetGroundAnchorA",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const , &b2PulleyJoint::GetGroundAnchorA >::invoke")
		->args({"self"});
	using _method_375 = das::das_call_member< b2Vec2 (b2PulleyJoint::*)() const,&b2PulleyJoint::GetGroundAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_375)>(*this,lib,"GetGroundAnchorB",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2PulleyJoint::*)() const , &b2PulleyJoint::GetGroundAnchorB >::invoke")
		->args({"self"});
	using _method_376 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthA >;
	addExtern<DAS_CALL_METHOD(_method_376)>(*this,lib,"GetLengthA",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetLengthA >::invoke")
		->args({"self"});
}
}

