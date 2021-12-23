// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#pragma once
#include "b2TypesSetup.h"
namespace das {
class Module_box2d : public Module {
public:
	Module_box2d();
protected:
virtual bool initDependencies() override;
	void initMain ();
	virtual ModuleAotType aotRequire ( TextWriter & tw ) const override;
	#include "box2d.func.decl.inc"
public:
	ModuleLibrary lib;
	bool initialized = false;
};
}

