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
void Module_phys2d::initFunctions_24() {
	using _method_377 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetLengthB >;
	addExtern<DAS_CALL_METHOD(_method_377)>(*this,lib,"GetLengthB",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetLengthB >::invoke")
		->args({"self"});
	using _method_378 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetRatio >;
	addExtern<DAS_CALL_METHOD(_method_378)>(*this,lib,"GetRatio",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetRatio >::invoke")
		->args({"self"});
	using _method_379 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthA >;
	addExtern<DAS_CALL_METHOD(_method_379)>(*this,lib,"GetCurrentLengthA",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetCurrentLengthA >::invoke")
		->args({"self"});
	using _method_380 = das::das_call_member< float (b2PulleyJoint::*)() const,&b2PulleyJoint::GetCurrentLengthB >;
	addExtern<DAS_CALL_METHOD(_method_380)>(*this,lib,"GetCurrentLengthB",SideEffects::worstDefault,"das_call_member< float (b2PulleyJoint::*)() const , &b2PulleyJoint::GetCurrentLengthB >::invoke")
		->args({"self"});
	addExtern< void (*)(b2PulleyJoint &) , _phys2d_virtual_69_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_69_Dump")
		->args({"self"});
	addExtern< void (*)(b2PulleyJoint &,const b2Vec2 &) , _phys2d_virtual_70_ShiftOrigin >(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"_phys2d_virtual_70_ShiftOrigin")
		->args({"self","newOrigin"});
	addCtorAndUsing<b2RevoluteJointDef>(*this,lib,"b2RevoluteJointDef","b2RevoluteJointDef");
	using _method_383 = das::das_call_member< void (b2RevoluteJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2RevoluteJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_383)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJointDef::*)(b2Body *,b2Body *,const b2Vec2 &) , &b2RevoluteJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	addExtern< b2Vec2 (*)(const b2RevoluteJoint &) , _phys2d_virtual_71_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_71_GetAnchorA")
		->args({"self"});
	addExtern< b2Vec2 (*)(const b2RevoluteJoint &) , _phys2d_virtual_72_GetAnchorB >(*this,lib,"GetAnchorB",SideEffects::worstDefault,"_phys2d_virtual_72_GetAnchorB")
		->args({"self"});
	using _method_386 = das::das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_386), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_387 = das::das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_387), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_388 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetReferenceAngle >;
	addExtern<DAS_CALL_METHOD(_method_388)>(*this,lib,"GetReferenceAngle",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetReferenceAngle >::invoke")
		->args({"self"});
	using _method_389 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointAngle >;
	addExtern<DAS_CALL_METHOD(_method_389)>(*this,lib,"GetJointAngle",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetJointAngle >::invoke")
		->args({"self"});
	using _method_390 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetJointSpeed >;
	addExtern<DAS_CALL_METHOD(_method_390)>(*this,lib,"GetJointSpeed",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetJointSpeed >::invoke")
		->args({"self"});
	using _method_391 = das::das_call_member< bool (b2RevoluteJoint::*)() const,&b2RevoluteJoint::IsLimitEnabled >;
	addExtern<DAS_CALL_METHOD(_method_391)>(*this,lib,"IsLimitEnabled",SideEffects::worstDefault,"das_call_member< bool (b2RevoluteJoint::*)() const , &b2RevoluteJoint::IsLimitEnabled >::invoke")
		->args({"self"});
	using _method_392 = das::das_call_member< void (b2RevoluteJoint::*)(bool),&b2RevoluteJoint::EnableLimit >;
	addExtern<DAS_CALL_METHOD(_method_392)>(*this,lib,"EnableLimit",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(bool) , &b2RevoluteJoint::EnableLimit >::invoke")
		->args({"self","flag"});
	using _method_393 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetLowerLimit >;
	addExtern<DAS_CALL_METHOD(_method_393)>(*this,lib,"GetLowerLimit",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetLowerLimit >::invoke")
		->args({"self"});
	using _method_394 = das::das_call_member< float (b2RevoluteJoint::*)() const,&b2RevoluteJoint::GetUpperLimit >;
	addExtern<DAS_CALL_METHOD(_method_394)>(*this,lib,"GetUpperLimit",SideEffects::worstDefault,"das_call_member< float (b2RevoluteJoint::*)() const , &b2RevoluteJoint::GetUpperLimit >::invoke")
		->args({"self"});
	using _method_395 = das::das_call_member< void (b2RevoluteJoint::*)(float,float),&b2RevoluteJoint::SetLimits >;
	addExtern<DAS_CALL_METHOD(_method_395)>(*this,lib,"SetLimits",SideEffects::worstDefault,"das_call_member< void (b2RevoluteJoint::*)(float,float) , &b2RevoluteJoint::SetLimits >::invoke")
		->args({"self","lower","upper"});
}
}

