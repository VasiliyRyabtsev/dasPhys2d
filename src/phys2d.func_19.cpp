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
void Module_phys2d::initFunctions_19() {
	addExtern< b2Vec2 (*)(const b2DistanceJoint &,float) , _phys2d_virtual_34_GetReactionForce >(*this,lib,"GetReactionForce",SideEffects::worstDefault,"_phys2d_virtual_34_GetReactionForce")
		->args({"self","inv_dt"});
	addExtern< float (*)(const b2DistanceJoint &,float) , _phys2d_virtual_35_GetReactionTorque >(*this,lib,"GetReactionTorque",SideEffects::worstDefault,"_phys2d_virtual_35_GetReactionTorque")
		->args({"self","inv_dt"});
	using _method_283 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorA >;
	addExtern<DAS_CALL_METHOD(_method_283), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorA",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLocalAnchorA >::invoke")
		->args({"self"});
	using _method_284 = das::das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLocalAnchorB >;
	addExtern<DAS_CALL_METHOD(_method_284), SimNode_ExtFuncCallRef>(*this,lib,"GetLocalAnchorB",SideEffects::worstDefault,"das_call_member< const b2Vec2 & (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLocalAnchorB >::invoke")
		->args({"self"});
	using _method_285 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetLength >;
	addExtern<DAS_CALL_METHOD(_method_285)>(*this,lib,"GetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetLength >::invoke")
		->args({"self"});
	using _method_286 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetLength >;
	addExtern<DAS_CALL_METHOD(_method_286)>(*this,lib,"SetLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetLength >::invoke")
		->args({"self","length"});
	using _method_287 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_287)>(*this,lib,"GetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetMinLength >::invoke")
		->args({"self"});
	using _method_288 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMinLength >;
	addExtern<DAS_CALL_METHOD(_method_288)>(*this,lib,"SetMinLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetMinLength >::invoke")
		->args({"self","minLength"});
	using _method_289 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetMaxLength >;
	addExtern<DAS_CALL_METHOD(_method_289)>(*this,lib,"GetMaxLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetMaxLength >::invoke")
		->args({"self"});
	using _method_290 = das::das_call_member< float (b2DistanceJoint::*)(float),&b2DistanceJoint::SetMaxLength >;
	addExtern<DAS_CALL_METHOD(_method_290)>(*this,lib,"SetMaxLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetMaxLength >::invoke")
		->args({"self","maxLength"});
	using _method_291 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetCurrentLength >;
	addExtern<DAS_CALL_METHOD(_method_291)>(*this,lib,"GetCurrentLength",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetCurrentLength >::invoke")
		->args({"self"});
	using _method_292 = das::das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_292)>(*this,lib,"SetStiffness",SideEffects::worstDefault,"das_call_member< void (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetStiffness >::invoke")
		->args({"self","stiffness"});
	using _method_293 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetStiffness >;
	addExtern<DAS_CALL_METHOD(_method_293)>(*this,lib,"GetStiffness",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetStiffness >::invoke")
		->args({"self"});
	using _method_294 = das::das_call_member< void (b2DistanceJoint::*)(float),&b2DistanceJoint::SetDamping >;
	addExtern<DAS_CALL_METHOD(_method_294)>(*this,lib,"SetDamping",SideEffects::worstDefault,"das_call_member< void (b2DistanceJoint::*)(float) , &b2DistanceJoint::SetDamping >::invoke")
		->args({"self","damping"});
	using _method_295 = das::das_call_member< float (b2DistanceJoint::*)() const,&b2DistanceJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_295)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2DistanceJoint::*)() const , &b2DistanceJoint::GetDamping >::invoke")
		->args({"self"});
	addExtern< void (*)(b2DistanceJoint &) , _phys2d_virtual_36_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_36_Dump")
		->args({"self"});
	addExtern< void (*)(const b2DistanceJoint &,b2Draw *) , _phys2d_virtual_37_Draw >(*this,lib,"Draw",SideEffects::worstDefault,"_phys2d_virtual_37_Draw")
		->args({"self","draw"});
	addCtorAndUsing<b2FrictionJointDef>(*this,lib,"b2FrictionJointDef","b2FrictionJointDef");
	using _method_298 = das::das_call_member< void (b2FrictionJointDef::*)(b2Body *,b2Body *,const b2Vec2 &),&b2FrictionJointDef::Initialize >;
	addExtern<DAS_CALL_METHOD(_method_298)>(*this,lib,"Initialize",SideEffects::worstDefault,"das_call_member< void (b2FrictionJointDef::*)(b2Body *,b2Body *,const b2Vec2 &) , &b2FrictionJointDef::Initialize >::invoke")
		->args({"self","bodyA","bodyB","anchor"});
	addExtern< b2Vec2 (*)(const b2FrictionJoint &) , _phys2d_virtual_38_GetAnchorA >(*this,lib,"GetAnchorA",SideEffects::worstDefault,"_phys2d_virtual_38_GetAnchorA")
		->args({"self"});
}
}

