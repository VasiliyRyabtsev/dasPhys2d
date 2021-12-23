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

struct b2MassData_GeneratedAnnotation : ManagedStructureAnnotation<b2MassData> {
	b2MassData_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2MassData", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(mass)>("mass","mass");
		addField<DAS_BIND_MANAGED_FIELD(center)>("center","center");
		addField<DAS_BIND_MANAGED_FIELD(I)>("I","I");
	}
};

struct b2Shape_GeneratedAnnotation : ManagedStructureAnnotation<b2Shape> {
	b2Shape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Shape", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_type)>("m_type","m_type");
		addField<DAS_BIND_MANAGED_FIELD(m_radius)>("m_radius","m_radius");
	}
};

struct b2ChainShape_GeneratedAnnotation : ManagedStructureAnnotation<b2ChainShape> {
	b2ChainShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ChainShape", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_vertices)>("m_vertices","m_vertices");
		addField<DAS_BIND_MANAGED_FIELD(m_count)>("m_count","m_count");
		addField<DAS_BIND_MANAGED_FIELD(m_prevVertex)>("m_prevVertex","m_prevVertex");
		addField<DAS_BIND_MANAGED_FIELD(m_nextVertex)>("m_nextVertex","m_nextVertex");
	}
};

struct b2CircleShape_GeneratedAnnotation : ManagedStructureAnnotation<b2CircleShape> {
	b2CircleShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2CircleShape", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_p)>("m_p","m_p");
	}
};

struct b2EdgeShape_GeneratedAnnotation : ManagedStructureAnnotation<b2EdgeShape> {
	b2EdgeShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2EdgeShape", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_vertex1)>("m_vertex1","m_vertex1");
		addField<DAS_BIND_MANAGED_FIELD(m_vertex2)>("m_vertex2","m_vertex2");
		addField<DAS_BIND_MANAGED_FIELD(m_vertex0)>("m_vertex0","m_vertex0");
		addField<DAS_BIND_MANAGED_FIELD(m_vertex3)>("m_vertex3","m_vertex3");
		addField<DAS_BIND_MANAGED_FIELD(m_oneSided)>("m_oneSided","m_oneSided");
	}
};

struct b2PolygonShape_GeneratedAnnotation : ManagedStructureAnnotation<b2PolygonShape> {
	b2PolygonShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2PolygonShape", ml) {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_centroid)>("m_centroid","m_centroid");
		addField<DAS_BIND_MANAGED_FIELD(m_vertices)>("m_vertices","m_vertices");
		addField<DAS_BIND_MANAGED_FIELD(m_normals)>("m_normals","m_normals");
		addField<DAS_BIND_MANAGED_FIELD(m_count)>("m_count","m_count");
	}
};

struct b2World_GeneratedAnnotation : ManagedStructureAnnotation<b2World> {
	b2World_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2World", ml) {
	}
	void init () {
	}
};

