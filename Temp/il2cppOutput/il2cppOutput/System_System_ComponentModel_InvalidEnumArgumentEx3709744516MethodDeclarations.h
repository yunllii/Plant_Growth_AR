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

// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t3709744516;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
extern "C"  void InvalidEnumArgumentException__ctor_m2412961433 (InvalidEnumArgumentException_t3709744516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
extern "C"  void InvalidEnumArgumentException__ctor_m3345705171 (InvalidEnumArgumentException_t3709744516 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
extern "C"  void InvalidEnumArgumentException__ctor_m2182550285 (InvalidEnumArgumentException_t3709744516 * __this, String_t* ___argumentName0, int32_t ___invalidValue1, Type_t * ___enumClass2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Exception)
extern "C"  void InvalidEnumArgumentException__ctor_m2945312339 (InvalidEnumArgumentException_t3709744516 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidEnumArgumentException__ctor_m1156511804 (InvalidEnumArgumentException_t3709744516 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
