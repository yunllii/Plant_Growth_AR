#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3749827553;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Collections.IList
struct IList_t3321498491;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.IComparer
struct IComparer_t3952557350;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_ComponentModel_MemberDescriptor3749827553.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m3542507155 (MemberDescriptor_t3749827553 * __this, String_t* ___name0, AttributeU5BU5D_t4255796347* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m4272496319 (MemberDescriptor_t3749827553 * __this, MemberDescriptor_t3749827553 * ___reference0, AttributeU5BU5D_t4255796347* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String)
extern "C"  void MemberDescriptor__ctor_m2523793810 (MemberDescriptor_t3749827553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C"  void MemberDescriptor__ctor_m2998904554 (MemberDescriptor_t3749827553 * __this, MemberDescriptor_t3749827553 * ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C"  AttributeU5BU5D_t4255796347* MemberDescriptor_get_AttributeArray_m1073039082 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::set_AttributeArray(System.Attribute[])
extern "C"  void MemberDescriptor_set_AttributeArray_m3051751057 (MemberDescriptor_t3749827553 * __this, AttributeU5BU5D_t4255796347* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void MemberDescriptor_FillAttributes_m1330134695 (MemberDescriptor_t3749827553 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C"  AttributeCollection_t1925812292 * MemberDescriptor_get_Attributes_m217354542 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C"  AttributeCollection_t1925812292 * MemberDescriptor_CreateAttributeCollection_m1853675332 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Category()
extern "C"  String_t* MemberDescriptor_get_Category_m675210230 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Description()
extern "C"  String_t* MemberDescriptor_get_Description_m2927336934 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_DesignTimeOnly()
extern "C"  bool MemberDescriptor_get_DesignTimeOnly_m2665647146 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_DisplayName()
extern "C"  String_t* MemberDescriptor_get_DisplayName_m2802953773 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C"  String_t* MemberDescriptor_get_Name_m1191562727 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_IsBrowsable()
extern "C"  bool MemberDescriptor_get_IsBrowsable_m741102112 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::get_NameHashCode()
extern "C"  int32_t MemberDescriptor_get_NameHashCode_m3993767475 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C"  int32_t MemberDescriptor_GetHashCode_m573108599 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C"  bool MemberDescriptor_Equals_m2946310549 (MemberDescriptor_t3749827553 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.MemberDescriptor::GetSite(System.Object)
extern "C"  Il2CppObject * MemberDescriptor_GetSite_m777166795 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvokee(System.Type,System.Object)
extern "C"  Il2CppObject * MemberDescriptor_GetInvokee_m773829007 (Il2CppObject * __this /* static, unused */, Type_t * ___componentClass0, Il2CppObject * ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C"  Il2CppObject * MemberDescriptor_GetInvocationTarget_m1322672463 (MemberDescriptor_t3749827553 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type)
extern "C"  MethodInfo_t * MemberDescriptor_FindMethod_m844568737 (Il2CppObject * __this /* static, unused */, Type_t * ___componentClass0, String_t* ___name1, TypeU5BU5D_t1664964607* ___args2, Type_t * ___returnType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type,System.Boolean)
extern "C"  MethodInfo_t * MemberDescriptor_FindMethod_m180336576 (Il2CppObject * __this /* static, unused */, Type_t * ___componentClass0, String_t* ___name1, TypeU5BU5D_t1664964607* ___args2, Type_t * ___returnType3, bool ___publicOnly4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.MemberDescriptor::get_DefaultComparer()
extern "C"  Il2CppObject * MemberDescriptor_get_DefaultComparer_m4279906238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
