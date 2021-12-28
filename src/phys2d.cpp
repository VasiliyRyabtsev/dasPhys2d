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
#include "phys2d.struct.impl.inc"
namespace das {
#include "phys2d.enum.class.inc"
#include "phys2d.struct.class.inc"
#include "phys2d.func.aot.inc"
Module_phys2d::Module_phys2d() : Module("phys2d") {
}
bool Module_phys2d::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	initAotAlias();
	#include "phys2d.enum.add.inc"
	#include "phys2d.dummy.add.inc"
	#include "phys2d.struct.add.inc"
	#include "phys2d.struct.postadd.inc"
	#include "phys2d.alias.add.inc"
	#include "phys2d.func.reg.inc"
	initMain();
	return true;
}
}
REGISTER_MODULE_IN_NAMESPACE(Module_phys2d,das);

