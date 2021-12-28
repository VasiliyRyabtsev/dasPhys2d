#pragma once

#include <daScript/daScript.h>
#include <box2d/b2_math.h>


namespace das
{
  #define MAKE_TYPE_FACTORY_ALIAS(TYPE, DAS_DECL_TYPE, DAS_TYPE)\
    template <> struct typeFactory<TYPE>\
    {\
      static TypeDeclPtr make(const ModuleLibrary &lib)\
      {\
        (void)lib;\
        auto t = make_smart<TypeDecl>(Type::DAS_DECL_TYPE);\
        t->alias = #TYPE;\
        t->aotAlias = true;\
        return t;\
      }\
    };\
    template <> struct typeName<TYPE> { static string name() { return #TYPE; } };\
    template <> struct das_alias<TYPE> : das::das_alias_vec<TYPE, DAS_TYPE> {};\

  MAKE_TYPE_FACTORY_ALIAS(b2Vec3, tFloat3, float3)
  MAKE_TYPE_FACTORY_ALIAS(b2Vec2, tFloat2, float2)

  #undef MAKE_TYPE_FACTORY_ALIAS
  // typedef Matrix<float2, 2> float2x2;

  // template <> struct das_alias<b2Mat22> : das::das_alias_vec<b2Mat22, float2x2> {};
  template <> struct das_alias<b2Mat33> : das::das_alias_vec<b2Mat33, float3x3> {};

  template <>
  struct typeFactory<b2Mat33>
  {
    static TypeDeclPtr make(const ModuleLibrary &lib)
    {
      auto t = typeFactory<das::float3x3>::make(lib);
      t->alias = "b2Mat33";
      t->aotAlias = true;
      return t;
    }
  };
  template <>
  struct typeName<b2Mat33>
  {
      static string name() { return "b2Mat33"; }
  };

  //aliasing
  template<> struct ToBasicType<b2Vec2>        { enum { type = Type::tFloat2 }; };
  template<> struct cast <b2Vec2>  : cast_fVec_half<b2Vec2> {};

  template<> struct ToBasicType<b2Vec3>        { enum { type = Type::tFloat3 }; };
  template<> struct cast <b2Vec3>  : cast_fVec<b2Vec3> {};
};

