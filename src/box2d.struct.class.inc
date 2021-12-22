// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

struct b2Vec2_GeneratedAnnotation : ManagedStructureAnnotation<b2Vec2> {
	b2Vec2_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Vec2", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
	}
};

struct b2Vec3_GeneratedAnnotation : ManagedStructureAnnotation<b2Vec3> {
	b2Vec3_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Vec3", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(z)>("z","z");
	}
};

struct b2Mat22_GeneratedAnnotation : ManagedStructureAnnotation<b2Mat22> {
	b2Mat22_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Mat22", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(ex)>("ex","ex");
		addField<DAS_BIND_MANAGED_FIELD(ey)>("ey","ey");
	}
};

struct b2Mat33_GeneratedAnnotation : ManagedStructureAnnotation<b2Mat33> {
	b2Mat33_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Mat33", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(ex)>("ex","ex");
		addField<DAS_BIND_MANAGED_FIELD(ey)>("ey","ey");
		addField<DAS_BIND_MANAGED_FIELD(ez)>("ez","ez");
	}
};

struct b2Rot_GeneratedAnnotation : ManagedStructureAnnotation<b2Rot> {
	b2Rot_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Rot", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(s)>("s","s");
		addField<DAS_BIND_MANAGED_FIELD(c)>("c","c");
	}
};

struct b2Transform_GeneratedAnnotation : ManagedStructureAnnotation<b2Transform> {
	b2Transform_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Transform", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(p)>("p","p");
		addField<DAS_BIND_MANAGED_FIELD(q)>("q","q");
	}
};

struct b2Sweep_GeneratedAnnotation : ManagedStructureAnnotation<b2Sweep> {
	b2Sweep_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Sweep", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localCenter)>("localCenter","localCenter");
		addField<DAS_BIND_MANAGED_FIELD(c0)>("c0","c0");
		addField<DAS_BIND_MANAGED_FIELD(c)>("c","c");
		addField<DAS_BIND_MANAGED_FIELD(a0)>("a0","a0");
		addField<DAS_BIND_MANAGED_FIELD(a)>("a","a");
		addField<DAS_BIND_MANAGED_FIELD(alpha0)>("alpha0","alpha0");
	}
};

