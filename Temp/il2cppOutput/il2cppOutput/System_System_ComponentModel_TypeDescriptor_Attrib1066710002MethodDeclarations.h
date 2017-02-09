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

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct AttributeProvider_t1066710002;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid2438624375.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.TypeDescriptor/AttributeProvider::.ctor(System.Attribute[],System.ComponentModel.TypeDescriptionProvider)
extern "C"  void AttributeProvider__ctor_m2926712501 (AttributeProvider_t1066710002 * __this, AttributeU5BU5D_t4255796347* ___attributes0, TypeDescriptionProvider_t2438624375 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/AttributeProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * AttributeProvider_GetTypeDescriptor_m208552741 (AttributeProvider_t1066710002 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
