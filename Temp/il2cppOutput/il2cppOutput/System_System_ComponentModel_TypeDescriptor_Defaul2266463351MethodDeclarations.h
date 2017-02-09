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

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t2266463351;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid2438624375.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptionProvider,System.Type,System.Object)
extern "C"  void DefaultTypeDescriptor__ctor_m493165998 (DefaultTypeDescriptor_t2266463351 * __this, TypeDescriptionProvider_t2438624375 * ___owner0, Type_t * ___objectType1, Il2CppObject * ___instance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetAttributes()
extern "C"  AttributeCollection_t1925812292 * DefaultTypeDescriptor_GetAttributes_m2085500686 (DefaultTypeDescriptor_t2266463351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetClassName()
extern "C"  String_t* DefaultTypeDescriptor_GetClassName_m2376134073 (DefaultTypeDescriptor_t2266463351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetDefaultProperty()
extern "C"  PropertyDescriptor_t4250402154 * DefaultTypeDescriptor_GetDefaultProperty_m3896027783 (DefaultTypeDescriptor_t2266463351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetProperties()
extern "C"  PropertyDescriptorCollection_t3166009492 * DefaultTypeDescriptor_GetProperties_m972046092 (DefaultTypeDescriptor_t2266463351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
