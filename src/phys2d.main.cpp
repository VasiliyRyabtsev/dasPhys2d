#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "phys2d.h"


namespace das {

void Module_phys2d::initMain() {
}

ModuleAotType Module_phys2d::aotRequire(TextWriter& /*tw*/) const {
	return ModuleAotType::no_aot;
}

void Module_phys2d::initAotAlias() {
	addAlias(typeFactory<b2Vec2>::make(lib));
	addAlias(typeFactory<b2Vec3>::make(lib));
	// addAlias(typeFactory<b2Mat22>::make(lib));
	// addAlias(typeFactory<b2Mat33>::make(lib));
}

}