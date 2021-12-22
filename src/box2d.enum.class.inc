// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

class Enumeration_Type : public das::Enumeration {
public:
	Enumeration_Type() : das::Enumeration("Type") {
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

