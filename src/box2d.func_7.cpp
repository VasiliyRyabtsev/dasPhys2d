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
void Module_box2d::initFunctions_7() {
	//using _method_91 = das::das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >;
	//addExtern<DAS_CALL_METHOD(_method_91), SimNode_ExtFuncCallRef>(*this,lib,"GetContactManager",SideEffects::worstDefault,"das_call_member< const b2ContactManager & (b2World::*)() const,&b2World::GetContactManager >::invoke")
	//	->args({"self"});
	//using _method_92 = das::das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >;
	//addExtern<DAS_CALL_METHOD(_method_92), SimNode_ExtFuncCallRef>(*this,lib,"GetProfile",SideEffects::worstDefault,"das_call_member< const b2Profile & (b2World::*)() const,&b2World::GetProfile >::invoke")
	//	->args({"self"});
	using _method_93 = das::das_call_member< void (b2World::*)(),&b2World::Dump >;
	addExtern<DAS_CALL_METHOD(_method_93)>(*this,lib,"Dump",SideEffects::worstDefault,"das_call_member< void (b2World::*)(),&b2World::Dump >::invoke")
		->args({"self"});
}
}

