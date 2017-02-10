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

// System.Runtime.InteropServices.HandleCollector
struct HandleCollector_t1994147477;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.InteropServices.HandleCollector::.ctor(System.String,System.Int32)
extern "C"  void HandleCollector__ctor_m3314435530 (HandleCollector_t1994147477 * __this, String_t* ___name0, int32_t ___initialThreshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.HandleCollector::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void HandleCollector__ctor_m2995166471 (HandleCollector_t1994147477 * __this, String_t* ___name0, int32_t ___initialThreshold1, int32_t ___maximumThreshold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.HandleCollector::get_Count()
extern "C"  int32_t HandleCollector_get_Count_m3616622921 (HandleCollector_t1994147477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.HandleCollector::get_InitialThreshold()
extern "C"  int32_t HandleCollector_get_InitialThreshold_m680859983 (HandleCollector_t1994147477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.HandleCollector::get_MaximumThreshold()
extern "C"  int32_t HandleCollector_get_MaximumThreshold_m1939631573 (HandleCollector_t1994147477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.HandleCollector::get_Name()
extern "C"  String_t* HandleCollector_get_Name_m1920967056 (HandleCollector_t1994147477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.HandleCollector::Add()
extern "C"  void HandleCollector_Add_m1173341632 (HandleCollector_t1994147477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.HandleCollector::Remove()
extern "C"  void HandleCollector_Remove_m1328079655 (HandleCollector_t1994147477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
