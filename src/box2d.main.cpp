#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "box2d.h"


//MAKE_EXTERNAL_TYPE_FACTORY(float2x2, das::float2x2)

namespace das {

void Module_box2d::initMain() {
}

ModuleAotType Module_box2d::aotRequire(TextWriter& /*tw*/) const {
	return ModuleAotType::no_aot;
}

}