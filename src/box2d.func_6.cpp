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
	using _method_71 = das::das_call_member< void (b2World::*)(bool),&b2World::SetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_71)>(*this,lib,"SetSubStepping",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetSubStepping >::invoke")
		->args({"self","flag"});
	using _method_72 = das::das_call_member< bool (b2World::*)() const,&b2World::GetSubStepping >;
	addExtern<DAS_CALL_METHOD(_method_72)>(*this,lib,"GetSubStepping",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetSubStepping >::invoke")
		->args({"self"});
	using _method_73 = das::das_call_member< int (b2World::*)() const,&b2World::GetProxyCount >;
	addExtern<DAS_CALL_METHOD(_method_73)>(*this,lib,"GetProxyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetProxyCount >::invoke")
		->args({"self"});
	using _method_74 = das::das_call_member< int (b2World::*)() const,&b2World::GetBodyCount >;
	addExtern<DAS_CALL_METHOD(_method_74)>(*this,lib,"GetBodyCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetBodyCount >::invoke")
		->args({"self"});
	using _method_75 = das::das_call_member< int (b2World::*)() const,&b2World::GetJointCount >;
	addExtern<DAS_CALL_METHOD(_method_75)>(*this,lib,"GetJointCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetJointCount >::invoke")
		->args({"self"});
	using _method_76 = das::das_call_member< int (b2World::*)() const,&b2World::GetContactCount >;
	addExtern<DAS_CALL_METHOD(_method_76)>(*this,lib,"GetContactCount",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetContactCount >::invoke")
		->args({"self"});
	using _method_77 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeHeight >;
	addExtern<DAS_CALL_METHOD(_method_77)>(*this,lib,"GetTreeHeight",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetTreeHeight >::invoke")
		->args({"self"});
	using _method_78 = das::das_call_member< int (b2World::*)() const,&b2World::GetTreeBalance >;
	addExtern<DAS_CALL_METHOD(_method_78)>(*this,lib,"GetTreeBalance",SideEffects::worstDefault,"das_call_member< int (b2World::*)() const,&b2World::GetTreeBalance >::invoke")
		->args({"self"});
	using _method_79 = das::das_call_member< float (b2World::*)() const,&b2World::GetTreeQuality >;
	addExtern<DAS_CALL_METHOD(_method_79)>(*this,lib,"GetTreeQuality",SideEffects::worstDefault,"das_call_member< float (b2World::*)() const,&b2World::GetTreeQuality >::invoke")
		->args({"self"});
	using _method_80 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::SetGravity >;
	addExtern<DAS_CALL_METHOD(_method_80)>(*this,lib,"SetGravity",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::SetGravity >::invoke")
		->args({"self","gravity"});
	using _method_81 = das::das_call_member< b2Vec2 (b2World::*)() const,&b2World::GetGravity >;
	addExtern<DAS_CALL_METHOD(_method_81),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"GetGravity",SideEffects::worstDefault,"das_call_member< b2Vec2 (b2World::*)() const,&b2World::GetGravity >::invoke")
		->args({"self"});
	using _method_82 = das::das_call_member< bool (b2World::*)() const,&b2World::IsLocked >;
	addExtern<DAS_CALL_METHOD(_method_82)>(*this,lib,"IsLocked",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::IsLocked >::invoke")
		->args({"self"});
	using _method_83 = das::das_call_member< void (b2World::*)(bool),&b2World::SetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_83)>(*this,lib,"SetAutoClearForces",SideEffects::worstDefault,"das_call_member< void (b2World::*)(bool),&b2World::SetAutoClearForces >::invoke")
		->args({"self","flag"});
	using _method_84 = das::das_call_member< bool (b2World::*)() const,&b2World::GetAutoClearForces >;
	addExtern<DAS_CALL_METHOD(_method_84)>(*this,lib,"GetAutoClearForces",SideEffects::worstDefault,"das_call_member< bool (b2World::*)() const,&b2World::GetAutoClearForces >::invoke")
		->args({"self"});
	using _method_85 = das::das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::ShiftOrigin >;
	addExtern<DAS_CALL_METHOD(_method_85)>(*this,lib,"ShiftOrigin",SideEffects::worstDefault,"das_call_member< void (b2World::*)(const b2Vec2 &),&b2World::ShiftOrigin >::invoke")
		->args({"self","newOrigin"});
	//using _method_86 = das::das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >;
	//addExtern<DAS_CALL_METHOD(_method_86), SimNode_ExtFuncCallRef>(*this,lib,"GetContactManager",SideEffects::worstDefault,"das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >::invoke")
	//	->args({"self"});
	//using _method_87 = das::das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >;
	//addExtern<DAS_CALL_METHOD(_method_87), SimNode_ExtFuncCallRef>(*this,lib,"GetProfile",SideEffects::worstDefault,"das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >::invoke")
	//	->args({"self"});
	using _method_88 = das::das_call_member< void (b2World::*)(),&b2World::Dump >;
	addExtern<DAS_CALL_METHOD(_method_88)>(*this,lib,"Dump",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::Dump >::invoke")
		->args({"self"});
}
}

