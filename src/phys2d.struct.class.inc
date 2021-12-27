// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

struct b2BodyUserData_GeneratedAnnotation : ManagedStructureAnnotation<b2BodyUserData> {
	b2BodyUserData_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2BodyUserData", ml, "b2BodyUserData") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(pointer)>("pointer","pointer");
	}
};

struct b2FixtureUserData_GeneratedAnnotation : ManagedStructureAnnotation<b2FixtureUserData> {
	b2FixtureUserData_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2FixtureUserData", ml, "b2FixtureUserData") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(pointer)>("pointer","pointer");
	}
};

struct b2JointUserData_GeneratedAnnotation : ManagedStructureAnnotation<b2JointUserData> {
	b2JointUserData_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2JointUserData", ml, "b2JointUserData") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(pointer)>("pointer","pointer");
	}
};

struct b2Version_GeneratedAnnotation : ManagedStructureAnnotation<b2Version> {
	b2Version_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Version", ml, "b2Version") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(major)>("major","major");
		addField<DAS_BIND_MANAGED_FIELD(minor)>("minor","minor");
		addField<DAS_BIND_MANAGED_FIELD(revision)>("revision","revision");
	}
};

struct b2Vec2_GeneratedAnnotation : ManagedStructureAnnotation<b2Vec2> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	b2Vec2_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Vec2", ml, "b2Vec2") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
	}
};

struct b2Vec3_GeneratedAnnotation : ManagedStructureAnnotation<b2Vec3> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	b2Vec3_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Vec3", ml, "b2Vec3") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(z)>("z","z");
	}
};

struct b2Mat22_GeneratedAnnotation : ManagedStructureAnnotation<b2Mat22> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	b2Mat22_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Mat22", ml, "b2Mat22") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(ex)>("ex","ex");
		addField<DAS_BIND_MANAGED_FIELD(ey)>("ey","ey");
	}
};

struct b2Mat33_GeneratedAnnotation : ManagedStructureAnnotation<b2Mat33> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	b2Mat33_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Mat33", ml, "b2Mat33") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(ex)>("ex","ex");
		addField<DAS_BIND_MANAGED_FIELD(ey)>("ey","ey");
		addField<DAS_BIND_MANAGED_FIELD(ez)>("ez","ez");
	}
};

struct b2Rot_GeneratedAnnotation : ManagedStructureAnnotation<b2Rot> {
	b2Rot_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Rot", ml, "b2Rot") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(s)>("s","s");
		addField<DAS_BIND_MANAGED_FIELD(c)>("c","c");
	}
};

struct b2Transform_GeneratedAnnotation : ManagedStructureAnnotation<b2Transform> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	b2Transform_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Transform", ml, "b2Transform") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(p)>("p","p");
		addField<DAS_BIND_MANAGED_FIELD(q)>("q","q");
	}
};

struct b2Sweep_GeneratedAnnotation : ManagedStructureAnnotation<b2Sweep> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	b2Sweep_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Sweep", ml, "b2Sweep") {
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

struct b2Color_GeneratedAnnotation : ManagedStructureAnnotation<b2Color> {
	b2Color_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Color", ml, "b2Color") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(r)>("r","r");
		addField<DAS_BIND_MANAGED_FIELD(g)>("g","g");
		addField<DAS_BIND_MANAGED_FIELD(b)>("b","b");
		addField<DAS_BIND_MANAGED_FIELD(a)>("a","a");
	}
};

struct b2Draw_GeneratedAnnotation : ManagedStructureAnnotation<b2Draw> {
	b2Draw_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Draw", ml, "b2Draw") {
	}
	void init () {
	}
};

struct b2Timer_GeneratedAnnotation : ManagedStructureAnnotation<b2Timer> {
	b2Timer_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Timer", ml, "b2Timer") {
	}
	void init () {
	}
};

struct b2ContactFeature_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactFeature> {
	b2ContactFeature_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactFeature", ml, "b2ContactFeature") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(indexA)>("indexA","indexA");
		addField<DAS_BIND_MANAGED_FIELD(indexB)>("indexB","indexB");
		addField<DAS_BIND_MANAGED_FIELD(typeA)>("typeA","typeA");
		addField<DAS_BIND_MANAGED_FIELD(typeB)>("typeB","typeB");
	}
};

struct b2ContactID_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactID> {
	b2ContactID_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactID", ml, "b2ContactID") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(cf)>("cf","cf");
		addField<DAS_BIND_MANAGED_FIELD(key)>("key","key");
	}
};

struct b2ManifoldPoint_GeneratedAnnotation : ManagedStructureAnnotation<b2ManifoldPoint> {
	b2ManifoldPoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ManifoldPoint", ml, "b2ManifoldPoint") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localPoint)>("localPoint","localPoint");
		addField<DAS_BIND_MANAGED_FIELD(normalImpulse)>("normalImpulse","normalImpulse");
		addField<DAS_BIND_MANAGED_FIELD(tangentImpulse)>("tangentImpulse","tangentImpulse");
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
	}
};

struct b2Manifold_GeneratedAnnotation : ManagedStructureAnnotation<b2Manifold> {
	b2Manifold_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Manifold", ml, "b2Manifold") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(points)>("points","points");
		addField<DAS_BIND_MANAGED_FIELD(localNormal)>("localNormal","localNormal");
		addField<DAS_BIND_MANAGED_FIELD(localPoint)>("localPoint","localPoint");
		addField<DAS_BIND_MANAGED_FIELD(type)>("_type","type");
		addField<DAS_BIND_MANAGED_FIELD(pointCount)>("pointCount","pointCount");
	}
};

struct b2WorldManifold_GeneratedAnnotation : ManagedStructureAnnotation<b2WorldManifold> {
	b2WorldManifold_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2WorldManifold", ml, "b2WorldManifold") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(normal)>("normal","normal");
		addField<DAS_BIND_MANAGED_FIELD(points)>("points","points");
		addField<DAS_BIND_MANAGED_FIELD(separations)>("separations","separations");
	}
};

struct b2ClipVertex_GeneratedAnnotation : ManagedStructureAnnotation<b2ClipVertex> {
	b2ClipVertex_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ClipVertex", ml, "b2ClipVertex") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(v)>("v","v");
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
	}
};

struct b2RayCastInput_GeneratedAnnotation : ManagedStructureAnnotation<b2RayCastInput> {
	b2RayCastInput_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2RayCastInput", ml, "b2RayCastInput") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(p1)>("p1","p1");
		addField<DAS_BIND_MANAGED_FIELD(p2)>("p2","p2");
		addField<DAS_BIND_MANAGED_FIELD(maxFraction)>("maxFraction","maxFraction");
	}
};

struct b2RayCastOutput_GeneratedAnnotation : ManagedStructureAnnotation<b2RayCastOutput> {
	b2RayCastOutput_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2RayCastOutput", ml, "b2RayCastOutput") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(normal)>("normal","normal");
		addField<DAS_BIND_MANAGED_FIELD(fraction)>("fraction","fraction");
	}
};

struct b2AABB_GeneratedAnnotation : ManagedStructureAnnotation<b2AABB> {
	b2AABB_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2AABB", ml, "b2AABB") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(lowerBound)>("lowerBound","lowerBound");
		addField<DAS_BIND_MANAGED_FIELD(upperBound)>("upperBound","upperBound");
	}
};

struct b2MassData_GeneratedAnnotation : ManagedStructureAnnotation<b2MassData> {
	b2MassData_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2MassData", ml, "b2MassData") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(mass)>("mass","mass");
		addField<DAS_BIND_MANAGED_FIELD(center)>("center","center");
		addField<DAS_BIND_MANAGED_FIELD(I)>("I","I");
	}
};

struct b2Shape_GeneratedAnnotation : ManagedStructureAnnotation<b2Shape> {
	b2Shape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Shape", ml, "b2Shape") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_type)>("m_type","m_type");
		addField<DAS_BIND_MANAGED_FIELD(m_radius)>("m_radius","m_radius");
	}
};

struct b2ChainShape_GeneratedAnnotation : ManagedStructureAnnotation<b2ChainShape> {
	b2ChainShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ChainShape", ml, "b2ChainShape") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_vertices)>("m_vertices","m_vertices");
		addField<DAS_BIND_MANAGED_FIELD(m_count)>("m_count","m_count");
		addField<DAS_BIND_MANAGED_FIELD(m_prevVertex)>("m_prevVertex","m_prevVertex");
		addField<DAS_BIND_MANAGED_FIELD(m_nextVertex)>("m_nextVertex","m_nextVertex");
	}
};

struct b2CircleShape_GeneratedAnnotation : ManagedStructureAnnotation<b2CircleShape> {
	b2CircleShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2CircleShape", ml, "b2CircleShape") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_p)>("m_p","m_p");
	}
};

struct b2EdgeShape_GeneratedAnnotation : ManagedStructureAnnotation<b2EdgeShape> {
	b2EdgeShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2EdgeShape", ml, "b2EdgeShape") {
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
	b2PolygonShape_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2PolygonShape", ml, "b2PolygonShape") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_centroid)>("m_centroid","m_centroid");
		addField<DAS_BIND_MANAGED_FIELD(m_vertices)>("m_vertices","m_vertices");
		addField<DAS_BIND_MANAGED_FIELD(m_normals)>("m_normals","m_normals");
		addField<DAS_BIND_MANAGED_FIELD(m_count)>("m_count","m_count");
	}
};

struct b2TreeNode_GeneratedAnnotation : ManagedStructureAnnotation<b2TreeNode> {
	b2TreeNode_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2TreeNode", ml, "b2TreeNode") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(aabb)>("aabb","aabb");
		addField<DAS_BIND_MANAGED_FIELD(userData)>("userData","userData");
		addField<DAS_BIND_MANAGED_FIELD(child1)>("child1","child1");
		addField<DAS_BIND_MANAGED_FIELD(child2)>("child2","child2");
		addField<DAS_BIND_MANAGED_FIELD(height)>("height","height");
		addField<DAS_BIND_MANAGED_FIELD(moved)>("moved","moved");
	}
};

struct b2DynamicTree_GeneratedAnnotation : ManagedStructureAnnotation<b2DynamicTree> {
	b2DynamicTree_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2DynamicTree", ml, "b2DynamicTree") {
	}
	void init () {
	}
};

struct b2Pair_GeneratedAnnotation : ManagedStructureAnnotation<b2Pair> {
	b2Pair_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Pair", ml, "b2Pair") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(proxyIdA)>("proxyIdA","proxyIdA");
		addField<DAS_BIND_MANAGED_FIELD(proxyIdB)>("proxyIdB","proxyIdB");
	}
};

struct b2BroadPhase_GeneratedAnnotation : ManagedStructureAnnotation<b2BroadPhase> {
	b2BroadPhase_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2BroadPhase", ml, "b2BroadPhase") {
	}
	void init () {
	}
};

struct b2BodyDef_GeneratedAnnotation : ManagedStructureAnnotation<b2BodyDef> {
	b2BodyDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2BodyDef", ml, "b2BodyDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(type)>("_type","type");
		addField<DAS_BIND_MANAGED_FIELD(position)>("position","position");
		addField<DAS_BIND_MANAGED_FIELD(angle)>("angle","angle");
		addField<DAS_BIND_MANAGED_FIELD(linearVelocity)>("linearVelocity","linearVelocity");
		addField<DAS_BIND_MANAGED_FIELD(angularVelocity)>("angularVelocity","angularVelocity");
		addField<DAS_BIND_MANAGED_FIELD(linearDamping)>("linearDamping","linearDamping");
		addField<DAS_BIND_MANAGED_FIELD(angularDamping)>("angularDamping","angularDamping");
		addField<DAS_BIND_MANAGED_FIELD(allowSleep)>("allowSleep","allowSleep");
		addField<DAS_BIND_MANAGED_FIELD(awake)>("awake","awake");
		addField<DAS_BIND_MANAGED_FIELD(fixedRotation)>("fixedRotation","fixedRotation");
		addField<DAS_BIND_MANAGED_FIELD(bullet)>("bullet","bullet");
		addField<DAS_BIND_MANAGED_FIELD(enabled)>("enabled","enabled");
		addField<DAS_BIND_MANAGED_FIELD(userData)>("userData","userData");
		addField<DAS_BIND_MANAGED_FIELD(gravityScale)>("gravityScale","gravityScale");
	}
};

struct b2Body_GeneratedAnnotation : ManagedStructureAnnotation<b2Body> {
	b2Body_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Body", ml, "b2Body") {
	}
	void init () {
	}
};

struct b2Filter_GeneratedAnnotation : ManagedStructureAnnotation<b2Filter> {
	b2Filter_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Filter", ml, "b2Filter") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(categoryBits)>("categoryBits","categoryBits");
		addField<DAS_BIND_MANAGED_FIELD(maskBits)>("maskBits","maskBits");
		addField<DAS_BIND_MANAGED_FIELD(groupIndex)>("groupIndex","groupIndex");
	}
};

struct b2FixtureDef_GeneratedAnnotation : ManagedStructureAnnotation<b2FixtureDef> {
	b2FixtureDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2FixtureDef", ml, "b2FixtureDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(shape)>("shape","shape");
		addField<DAS_BIND_MANAGED_FIELD(userData)>("userData","userData");
		addField<DAS_BIND_MANAGED_FIELD(friction)>("friction","friction");
		addField<DAS_BIND_MANAGED_FIELD(restitution)>("restitution","restitution");
		addField<DAS_BIND_MANAGED_FIELD(restitutionThreshold)>("restitutionThreshold","restitutionThreshold");
		addField<DAS_BIND_MANAGED_FIELD(density)>("density","density");
		addField<DAS_BIND_MANAGED_FIELD(isSensor)>("isSensor","isSensor");
		addField<DAS_BIND_MANAGED_FIELD(filter)>("filter","filter");
	}
};

struct b2FixtureProxy_GeneratedAnnotation : ManagedStructureAnnotation<b2FixtureProxy> {
	b2FixtureProxy_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2FixtureProxy", ml, "b2FixtureProxy") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(aabb)>("aabb","aabb");
		addField<DAS_BIND_MANAGED_FIELD(fixture)>("fixture","fixture");
		addField<DAS_BIND_MANAGED_FIELD(childIndex)>("childIndex","childIndex");
		addField<DAS_BIND_MANAGED_FIELD(proxyId)>("proxyId","proxyId");
	}
};

struct b2Fixture_GeneratedAnnotation : ManagedStructureAnnotation<b2Fixture> {
	b2Fixture_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Fixture", ml, "b2Fixture") {
	}
	void init () {
	}
};

struct b2ContactRegister_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactRegister> {
	b2ContactRegister_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactRegister", ml, "b2ContactRegister") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(primary)>("primary","primary");
	}
};

struct b2ContactEdge_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactEdge> {
	b2ContactEdge_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactEdge", ml, "b2ContactEdge") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(other)>("other","other");
		addField<DAS_BIND_MANAGED_FIELD(contact)>("contact","contact");
		addField<DAS_BIND_MANAGED_FIELD(prev)>("prev","prev");
		addField<DAS_BIND_MANAGED_FIELD(next)>("next","next");
	}
};

struct b2Contact_GeneratedAnnotation : ManagedStructureAnnotation<b2Contact> {
	b2Contact_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Contact", ml, "b2Contact") {
	}
	void init () {
	}
};

struct b2Profile_GeneratedAnnotation : ManagedStructureAnnotation<b2Profile> {
	b2Profile_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Profile", ml, "b2Profile") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(step)>("step","step");
		addField<DAS_BIND_MANAGED_FIELD(collide)>("collide","collide");
		addField<DAS_BIND_MANAGED_FIELD(solve)>("solve","solve");
		addField<DAS_BIND_MANAGED_FIELD(solveInit)>("solveInit","solveInit");
		addField<DAS_BIND_MANAGED_FIELD(solveVelocity)>("solveVelocity","solveVelocity");
		addField<DAS_BIND_MANAGED_FIELD(solvePosition)>("solvePosition","solvePosition");
		addField<DAS_BIND_MANAGED_FIELD(broadphase)>("broadphase","broadphase");
		addField<DAS_BIND_MANAGED_FIELD(solveTOI)>("solveTOI","solveTOI");
	}
};

struct b2SolverData_GeneratedAnnotation : ManagedStructureAnnotation<b2SolverData> {
	b2SolverData_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2SolverData", ml, "b2SolverData") {
	}
	void init () {
	}
};

struct b2BlockAllocator_GeneratedAnnotation : ManagedStructureAnnotation<b2BlockAllocator> {
	b2BlockAllocator_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2BlockAllocator", ml, "b2BlockAllocator") {
	}
	void init () {
	}
};

struct b2ContactManager_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactManager> {
	b2ContactManager_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactManager", ml, "b2ContactManager") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m_broadPhase)>("m_broadPhase","m_broadPhase");
		addField<DAS_BIND_MANAGED_FIELD(m_contactList)>("m_contactList","m_contactList");
		addField<DAS_BIND_MANAGED_FIELD(m_contactCount)>("m_contactCount","m_contactCount");
		addField<DAS_BIND_MANAGED_FIELD(m_contactFilter)>("m_contactFilter","m_contactFilter");
		addField<DAS_BIND_MANAGED_FIELD(m_contactListener)>("m_contactListener","m_contactListener");
		addField<DAS_BIND_MANAGED_FIELD(m_allocator)>("m_allocator","m_allocator");
	}
};

struct b2StackEntry_GeneratedAnnotation : ManagedStructureAnnotation<b2StackEntry> {
	b2StackEntry_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2StackEntry", ml, "b2StackEntry") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(size)>("size","size");
		addField<DAS_BIND_MANAGED_FIELD(usedMalloc)>("usedMalloc","usedMalloc");
	}
};

struct b2StackAllocator_GeneratedAnnotation : ManagedStructureAnnotation<b2StackAllocator> {
	b2StackAllocator_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2StackAllocator", ml, "b2StackAllocator") {
	}
	void init () {
	}
};

struct b2DestructionListener_GeneratedAnnotation : ManagedStructureAnnotation<b2DestructionListener> {
	b2DestructionListener_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2DestructionListener", ml, "b2DestructionListener") {
	}
	void init () {
	}
};

struct b2ContactFilter_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactFilter> {
	b2ContactFilter_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactFilter", ml, "b2ContactFilter") {
	}
	void init () {
	}
};

struct b2ContactImpulse_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactImpulse> {
	b2ContactImpulse_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactImpulse", ml, "b2ContactImpulse") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(normalImpulses)>("normalImpulses","normalImpulses");
		addField<DAS_BIND_MANAGED_FIELD(tangentImpulses)>("tangentImpulses","tangentImpulses");
		addField<DAS_BIND_MANAGED_FIELD(count)>("count","count");
	}
};

struct b2ContactListener_GeneratedAnnotation : ManagedStructureAnnotation<b2ContactListener> {
	b2ContactListener_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2ContactListener", ml, "b2ContactListener") {
	}
	void init () {
	}
};

struct b2QueryCallback_GeneratedAnnotation : ManagedStructureAnnotation<b2QueryCallback> {
	b2QueryCallback_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2QueryCallback", ml, "b2QueryCallback") {
	}
	void init () {
	}
};

struct b2RayCastCallback_GeneratedAnnotation : ManagedStructureAnnotation<b2RayCastCallback> {
	b2RayCastCallback_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2RayCastCallback", ml, "b2RayCastCallback") {
	}
	void init () {
	}
};

struct b2World_GeneratedAnnotation : ManagedStructureAnnotation<b2World> {
	b2World_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2World", ml, "b2World") {
	}
	void init () {
	}
};

struct b2Jacobian_GeneratedAnnotation : ManagedStructureAnnotation<b2Jacobian> {
	b2Jacobian_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Jacobian", ml, "b2Jacobian") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(linear)>("linear","linear");
		addField<DAS_BIND_MANAGED_FIELD(angularA)>("angularA","angularA");
		addField<DAS_BIND_MANAGED_FIELD(angularB)>("angularB","angularB");
	}
};

struct b2JointEdge_GeneratedAnnotation : ManagedStructureAnnotation<b2JointEdge> {
	b2JointEdge_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2JointEdge", ml, "b2JointEdge") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(other)>("other","other");
		addField<DAS_BIND_MANAGED_FIELD(joint)>("joint","joint");
		addField<DAS_BIND_MANAGED_FIELD(prev)>("prev","prev");
		addField<DAS_BIND_MANAGED_FIELD(next)>("next","next");
	}
};

struct b2JointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2JointDef> {
	b2JointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2JointDef", ml, "b2JointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(type)>("_type","type");
		addField<DAS_BIND_MANAGED_FIELD(userData)>("userData","userData");
		addField<DAS_BIND_MANAGED_FIELD(bodyA)>("bodyA","bodyA");
		addField<DAS_BIND_MANAGED_FIELD(bodyB)>("bodyB","bodyB");
		addField<DAS_BIND_MANAGED_FIELD(collideConnected)>("collideConnected","collideConnected");
	}
};

struct b2Joint_GeneratedAnnotation : ManagedStructureAnnotation<b2Joint> {
	b2Joint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2Joint", ml, "b2Joint") {
	}
	void init () {
	}
};

struct b2DistanceJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2DistanceJointDef> {
	b2DistanceJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2DistanceJointDef", ml, "b2DistanceJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(length)>("length","length");
		addField<DAS_BIND_MANAGED_FIELD(minLength)>("minLength","minLength");
		addField<DAS_BIND_MANAGED_FIELD(maxLength)>("maxLength","maxLength");
		addField<DAS_BIND_MANAGED_FIELD(stiffness)>("stiffness","stiffness");
		addField<DAS_BIND_MANAGED_FIELD(damping)>("damping","damping");
	}
};

struct b2DistanceJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2DistanceJoint> {
	b2DistanceJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2DistanceJoint", ml, "b2DistanceJoint") {
	}
	void init () {
	}
};

struct b2FrictionJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2FrictionJointDef> {
	b2FrictionJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2FrictionJointDef", ml, "b2FrictionJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(maxForce)>("maxForce","maxForce");
		addField<DAS_BIND_MANAGED_FIELD(maxTorque)>("maxTorque","maxTorque");
	}
};

struct b2FrictionJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2FrictionJoint> {
	b2FrictionJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2FrictionJoint", ml, "b2FrictionJoint") {
	}
	void init () {
	}
};

struct b2GearJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2GearJointDef> {
	b2GearJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2GearJointDef", ml, "b2GearJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(joint1)>("joint1","joint1");
		addField<DAS_BIND_MANAGED_FIELD(joint2)>("joint2","joint2");
		addField<DAS_BIND_MANAGED_FIELD(ratio)>("ratio","ratio");
	}
};

struct b2GearJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2GearJoint> {
	b2GearJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2GearJoint", ml, "b2GearJoint") {
	}
	void init () {
	}
};

struct b2MotorJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2MotorJointDef> {
	b2MotorJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2MotorJointDef", ml, "b2MotorJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(linearOffset)>("linearOffset","linearOffset");
		addField<DAS_BIND_MANAGED_FIELD(angularOffset)>("angularOffset","angularOffset");
		addField<DAS_BIND_MANAGED_FIELD(maxForce)>("maxForce","maxForce");
		addField<DAS_BIND_MANAGED_FIELD(maxTorque)>("maxTorque","maxTorque");
		addField<DAS_BIND_MANAGED_FIELD(correctionFactor)>("correctionFactor","correctionFactor");
	}
};

struct b2MotorJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2MotorJoint> {
	b2MotorJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2MotorJoint", ml, "b2MotorJoint") {
	}
	void init () {
	}
};

struct b2MouseJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2MouseJointDef> {
	b2MouseJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2MouseJointDef", ml, "b2MouseJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(target)>("target","target");
		addField<DAS_BIND_MANAGED_FIELD(maxForce)>("maxForce","maxForce");
		addField<DAS_BIND_MANAGED_FIELD(stiffness)>("stiffness","stiffness");
		addField<DAS_BIND_MANAGED_FIELD(damping)>("damping","damping");
	}
};

struct b2MouseJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2MouseJoint> {
	b2MouseJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2MouseJoint", ml, "b2MouseJoint") {
	}
	void init () {
	}
};

struct b2PrismaticJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2PrismaticJointDef> {
	b2PrismaticJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2PrismaticJointDef", ml, "b2PrismaticJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(localAxisA)>("localAxisA","localAxisA");
		addField<DAS_BIND_MANAGED_FIELD(referenceAngle)>("referenceAngle","referenceAngle");
		addField<DAS_BIND_MANAGED_FIELD(enableLimit)>("enableLimit","enableLimit");
		addField<DAS_BIND_MANAGED_FIELD(lowerTranslation)>("lowerTranslation","lowerTranslation");
		addField<DAS_BIND_MANAGED_FIELD(upperTranslation)>("upperTranslation","upperTranslation");
		addField<DAS_BIND_MANAGED_FIELD(enableMotor)>("enableMotor","enableMotor");
		addField<DAS_BIND_MANAGED_FIELD(maxMotorForce)>("maxMotorForce","maxMotorForce");
		addField<DAS_BIND_MANAGED_FIELD(motorSpeed)>("motorSpeed","motorSpeed");
	}
};

struct b2PrismaticJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2PrismaticJoint> {
	b2PrismaticJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2PrismaticJoint", ml, "b2PrismaticJoint") {
	}
	void init () {
	}
};

struct b2PulleyJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2PulleyJointDef> {
	b2PulleyJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2PulleyJointDef", ml, "b2PulleyJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(groundAnchorA)>("groundAnchorA","groundAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(groundAnchorB)>("groundAnchorB","groundAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(lengthA)>("lengthA","lengthA");
		addField<DAS_BIND_MANAGED_FIELD(lengthB)>("lengthB","lengthB");
		addField<DAS_BIND_MANAGED_FIELD(ratio)>("ratio","ratio");
	}
};

struct b2PulleyJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2PulleyJoint> {
	b2PulleyJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2PulleyJoint", ml, "b2PulleyJoint") {
	}
	void init () {
	}
};

struct b2RevoluteJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2RevoluteJointDef> {
	b2RevoluteJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2RevoluteJointDef", ml, "b2RevoluteJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(referenceAngle)>("referenceAngle","referenceAngle");
		addField<DAS_BIND_MANAGED_FIELD(enableLimit)>("enableLimit","enableLimit");
		addField<DAS_BIND_MANAGED_FIELD(lowerAngle)>("lowerAngle","lowerAngle");
		addField<DAS_BIND_MANAGED_FIELD(upperAngle)>("upperAngle","upperAngle");
		addField<DAS_BIND_MANAGED_FIELD(enableMotor)>("enableMotor","enableMotor");
		addField<DAS_BIND_MANAGED_FIELD(motorSpeed)>("motorSpeed","motorSpeed");
		addField<DAS_BIND_MANAGED_FIELD(maxMotorTorque)>("maxMotorTorque","maxMotorTorque");
	}
};

struct b2RevoluteJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2RevoluteJoint> {
	b2RevoluteJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2RevoluteJoint", ml, "b2RevoluteJoint") {
	}
	void init () {
	}
};

struct b2WeldJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2WeldJointDef> {
	b2WeldJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2WeldJointDef", ml, "b2WeldJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(referenceAngle)>("referenceAngle","referenceAngle");
		addField<DAS_BIND_MANAGED_FIELD(stiffness)>("stiffness","stiffness");
		addField<DAS_BIND_MANAGED_FIELD(damping)>("damping","damping");
	}
};

struct b2WeldJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2WeldJoint> {
	b2WeldJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2WeldJoint", ml, "b2WeldJoint") {
	}
	void init () {
	}
};

struct b2WheelJointDef_GeneratedAnnotation : ManagedStructureAnnotation<b2WheelJointDef> {
	b2WheelJointDef_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2WheelJointDef", ml, "b2WheelJointDef") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(localAnchorA)>("localAnchorA","localAnchorA");
		addField<DAS_BIND_MANAGED_FIELD(localAnchorB)>("localAnchorB","localAnchorB");
		addField<DAS_BIND_MANAGED_FIELD(localAxisA)>("localAxisA","localAxisA");
		addField<DAS_BIND_MANAGED_FIELD(enableLimit)>("enableLimit","enableLimit");
		addField<DAS_BIND_MANAGED_FIELD(lowerTranslation)>("lowerTranslation","lowerTranslation");
		addField<DAS_BIND_MANAGED_FIELD(upperTranslation)>("upperTranslation","upperTranslation");
		addField<DAS_BIND_MANAGED_FIELD(enableMotor)>("enableMotor","enableMotor");
		addField<DAS_BIND_MANAGED_FIELD(maxMotorTorque)>("maxMotorTorque","maxMotorTorque");
		addField<DAS_BIND_MANAGED_FIELD(motorSpeed)>("motorSpeed","motorSpeed");
		addField<DAS_BIND_MANAGED_FIELD(stiffness)>("stiffness","stiffness");
		addField<DAS_BIND_MANAGED_FIELD(damping)>("damping","damping");
	}
};

struct b2WheelJoint_GeneratedAnnotation : ManagedStructureAnnotation<b2WheelJoint> {
	b2WheelJoint_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("b2WheelJoint", ml, "b2WheelJoint") {
	}
	void init () {
	}
};

