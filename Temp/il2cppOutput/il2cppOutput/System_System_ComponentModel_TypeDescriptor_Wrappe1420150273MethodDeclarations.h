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

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct WrappedTypeDescriptionProvider_t1420150273;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;
// System.Object
struct Il2CppObject;
// System.IServiceProvider
struct IServiceProvider_t2397848447;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid2438624375.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void WrappedTypeDescriptionProvider__ctor_m25523371 (WrappedTypeDescriptionProvider_t1420150273 * __this, TypeDescriptionProvider_t2438624375 * ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::get_Wrapped()
extern "C"  TypeDescriptionProvider_t2438624375 * WrappedTypeDescriptionProvider_get_Wrapped_m2865310604 (WrappedTypeDescriptionProvider_t1420150273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::set_Wrapped(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void WrappedTypeDescriptionProvider_set_Wrapped_m1337860563 (WrappedTypeDescriptionProvider_t1420150273 * __this, TypeDescriptionProvider_t2438624375 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_CreateInstance_m3993888789 (WrappedTypeDescriptionProvider_t1420150273 * __this, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t1664964607* ___argTypes2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetCache(System.Object)
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_GetCache_m917338919 (WrappedTypeDescriptionProvider_t1420150273 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_GetExtendedTypeDescriptor_m2175382568 (WrappedTypeDescriptionProvider_t1420150273 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C"  String_t* WrappedTypeDescriptionProvider_GetFullComponentName_m2682470015 (WrappedTypeDescriptionProvider_t1420150273 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C"  Type_t * WrappedTypeDescriptionProvider_GetReflectionType_m2404239033 (WrappedTypeDescriptionProvider_t1420150273 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_GetTypeDescriptor_m1557092808 (WrappedTypeDescriptionProvider_t1420150273 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
