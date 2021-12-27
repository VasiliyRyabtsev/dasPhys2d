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
#include "box2d.struct.impl.inc"
namespace das {
#include "box2d.enum.class.inc"
#include "box2d.struct.class.inc"
Module_box2d::Module_box2d() : Module("box2d") {
}
bool Module_box2d::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	#include "box2d.enum.add.inc"
	#include "box2d.dummy.add.inc"
	#include "box2d.struct.add.inc"
	#include "box2d.struct.postadd.inc"
	#include "box2d.alias.add.inc"
	#include "box2d.func.reg.inc"
	initMain();
	return true;
}
}
REGISTER_MODULE_IN_NAMESPACE(Module_box2d,das);

