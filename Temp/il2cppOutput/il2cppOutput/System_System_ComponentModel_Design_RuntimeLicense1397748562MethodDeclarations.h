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

// System.ComponentModel.Design.RuntimeLicenseContext
struct RuntimeLicenseContext_t1397748562;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.ComponentModel.Design.RuntimeLicenseContext::.ctor()
extern "C"  void RuntimeLicenseContext__ctor_m2976616531 (RuntimeLicenseContext_t1397748562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::LoadKeys()
extern "C"  void RuntimeLicenseContext_LoadKeys_m3957680701 (RuntimeLicenseContext_t1397748562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::LoadAssemblyLicenses(System.Collections.Hashtable,System.Reflection.Assembly)
extern "C"  void RuntimeLicenseContext_LoadAssemblyLicenses_m1038595207 (RuntimeLicenseContext_t1397748562 * __this, Hashtable_t909839986 * ___targetkeys0, Assembly_t4268412390 * ___asm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.RuntimeLicenseContext::GetSavedLicenseKey(System.Type,System.Reflection.Assembly)
extern "C"  String_t* RuntimeLicenseContext_GetSavedLicenseKey_m766227648 (RuntimeLicenseContext_t1397748562 * __this, Type_t * ___type0, Assembly_t4268412390 * ___resourceAssembly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::SetSavedLicenseKey(System.Type,System.String)
extern "C"  void RuntimeLicenseContext_SetSavedLicenseKey_m2519129061 (RuntimeLicenseContext_t1397748562 * __this, Type_t * ___type0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
