#include "daScript/misc/platform.h"
#include "daScript/misc/string_writer.h"

#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/ast/ast_handle.h"

#include "dasBox2d.h"


namespace das
{


struct b2Vec2TypeAnnotation : ManagedStructureAnnotation <b2Vec2> {
    b2Vec2TypeAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Vec2",ml) {
        addField<DAS_BIND_MANAGED_FIELD(x)>("x", "x");
        addField<DAS_BIND_MANAGED_FIELD(x)>("y", "y");
    }
    virtual bool isLocal() const override { return true; }  // this ref-value can appear as local variable in das
    virtual bool canCopy() const override { return true; }  // this ref-value can be copied
    virtual bool canMove() const override { return true; }  // this ref-value can be moved
};


class Module_Box2d : public Module {
public:
    Module_Box2d() : Module("box2d") {
        ModuleLibrary lib;
        lib.addModule(this);
        lib.addBuiltInModule();
        addAnnotation(make_smart<b2Vec2TypeAnnotation>(lib));
    }

    // virtual ModuleAotType aotRequire ( TextWriter & tw ) const override {
    //     tw << "#include \"../modules/dasBox2d/src/dasBox2d.h\"\n";
    //     return ModuleAotType::cpp;
    // }

    virtual ~Module_Box2d() {
    }
};

} // das


REGISTER_MODULE_IN_NAMESPACE(Module_Box2d, das);

MAKE_TYPE_FACTORY(b2Vec2, b2Vec2);
