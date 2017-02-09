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

// Region
struct Region_t1621871372;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_CloudRegionFlag3778436051.h"

// System.Void Region::.ctor()
extern "C"  void Region__ctor_m2872743163 (Region_t1621871372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode Region::Parse(System.String)
extern "C"  int32_t Region_Parse_m1283549251 (Il2CppObject * __this /* static, unused */, String_t* ___codeAsString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionFlag Region::ParseFlag(System.String)
extern "C"  int32_t Region_ParseFlag_m3036224740 (Il2CppObject * __this /* static, unused */, String_t* ___codeAsString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Region::ToString()
extern "C"  String_t* Region_ToString_m444682774 (Region_t1621871372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
