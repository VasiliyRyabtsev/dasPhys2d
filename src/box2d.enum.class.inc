// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated
/*
class Enumeration_b2ContactFeature_Type : public das::Enumeration {
public:
	Enumeration_b2ContactFeature_Type() : das::Enumeration("b2ContactFeature_Type") {
		external = true;
		cppName = "b2ContactFeature::Type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("e_vertex", "e_vertex", int64_t(b2ContactFeature::Type::e_vertex), das::LineInfo());
		addIEx("e_face", "e_face", int64_t(b2ContactFeature::Type::e_face), das::LineInfo());
	}
};

class Enumeration_b2Manifold_Type : public das::Enumeration {
public:
	Enumeration_b2Manifold_Type() : das::Enumeration("b2Manifold_Type") {
		external = true;
		cppName = "b2Manifold::Type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("e_circles", "e_circles", int64_t(b2Manifold::Type::e_circles), das::LineInfo());
		addIEx("e_faceA", "e_faceA", int64_t(b2Manifold::Type::e_faceA), das::LineInfo());
		addIEx("e_faceB", "e_faceB", int64_t(b2Manifold::Type::e_faceB), das::LineInfo());
	}
};
*/
class Enumeration_b2PointState : public das::Enumeration {
public:
	Enumeration_b2PointState() : das::Enumeration("b2PointState") {
		external = true;
		cppName = "b2PointState";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("b2_nullState", "b2_nullState", int64_t(b2PointState::b2_nullState), das::LineInfo());
		addIEx("b2_addState", "b2_addState", int64_t(b2PointState::b2_addState), das::LineInfo());
		addIEx("b2_persistState", "b2_persistState", int64_t(b2PointState::b2_persistState), das::LineInfo());
		addIEx("b2_removeState", "b2_removeState", int64_t(b2PointState::b2_removeState), das::LineInfo());
	}
};
/*
class Enumeration_b2Shape_Type : public das::Enumeration {
public:
	Enumeration_b2Shape_Type() : das::Enumeration("b2Shape_Type") {
		external = true;
		cppName = "b2Shape::Type";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("e_circle", "e_circle", int64_t(b2Shape::Type::e_circle), das::LineInfo());
		addIEx("e_edge", "e_edge", int64_t(b2Shape::Type::e_edge), das::LineInfo());
		addIEx("e_polygon", "e_polygon", int64_t(b2Shape::Type::e_polygon), das::LineInfo());
		addIEx("e_chain", "e_chain", int64_t(b2Shape::Type::e_chain), das::LineInfo());
		addIEx("e_typeCount", "e_typeCount", int64_t(b2Shape::Type::e_typeCount), das::LineInfo());
	}
};
*/
class Enumeration_b2BodyType : public das::Enumeration {
public:
	Enumeration_b2BodyType() : das::Enumeration("b2BodyType") {
		external = true;
		cppName = "b2BodyType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("b2_staticBody", "b2_staticBody", int64_t(b2BodyType::b2_staticBody), das::LineInfo());
		addIEx("b2_kinematicBody", "b2_kinematicBody", int64_t(b2BodyType::b2_kinematicBody), das::LineInfo());
		addIEx("b2_dynamicBody", "b2_dynamicBody", int64_t(b2BodyType::b2_dynamicBody), das::LineInfo());
	}
};

class Enumeration_b2JointType : public das::Enumeration {
public:
	Enumeration_b2JointType() : das::Enumeration("b2JointType") {
		external = true;
		cppName = "b2JointType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("e_unknownJoint", "e_unknownJoint", int64_t(b2JointType::e_unknownJoint), das::LineInfo());
		addIEx("e_revoluteJoint", "e_revoluteJoint", int64_t(b2JointType::e_revoluteJoint), das::LineInfo());
		addIEx("e_prismaticJoint", "e_prismaticJoint", int64_t(b2JointType::e_prismaticJoint), das::LineInfo());
		addIEx("e_distanceJoint", "e_distanceJoint", int64_t(b2JointType::e_distanceJoint), das::LineInfo());
		addIEx("e_pulleyJoint", "e_pulleyJoint", int64_t(b2JointType::e_pulleyJoint), das::LineInfo());
		addIEx("e_mouseJoint", "e_mouseJoint", int64_t(b2JointType::e_mouseJoint), das::LineInfo());
		addIEx("e_gearJoint", "e_gearJoint", int64_t(b2JointType::e_gearJoint), das::LineInfo());
		addIEx("e_wheelJoint", "e_wheelJoint", int64_t(b2JointType::e_wheelJoint), das::LineInfo());
		addIEx("e_weldJoint", "e_weldJoint", int64_t(b2JointType::e_weldJoint), das::LineInfo());
		addIEx("e_frictionJoint", "e_frictionJoint", int64_t(b2JointType::e_frictionJoint), das::LineInfo());
		addIEx("e_ropeJoint", "e_ropeJoint", int64_t(b2JointType::e_ropeJoint), das::LineInfo());
		addIEx("e_motorJoint", "e_motorJoint", int64_t(b2JointType::e_motorJoint), das::LineInfo());
	}
};

