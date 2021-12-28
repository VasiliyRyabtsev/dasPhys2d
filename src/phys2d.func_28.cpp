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
void Module_phys2d::initFunctions_28() {
	using _method_452 = das::das_call_member< float (b2WheelJoint::*)() const,&b2WheelJoint::GetDamping >;
	addExtern<DAS_CALL_METHOD(_method_452)>(*this,lib,"GetDamping",SideEffects::worstDefault,"das_call_member< float (b2WheelJoint::*)() const , &b2WheelJoint::GetDamping >::invoke")
		->args({"self"});
	addExtern< void (*)(b2WheelJoint &) , _phys2d_virtual_86_Dump >(*this,lib,"Dump",SideEffects::worstDefault,"_phys2d_virtual_86_Dump")
		->args({"self"});
	addExtern< void (*)(const b2WheelJoint &,b2Draw *) , _phys2d_virtual_87_Draw >(*this,lib,"Draw",SideEffects::worstDefault,"_phys2d_virtual_87_Draw")
		->args({"self","draw"});
}
}

