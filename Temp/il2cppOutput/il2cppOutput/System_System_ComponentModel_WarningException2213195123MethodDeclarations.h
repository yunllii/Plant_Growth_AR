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

// System.ComponentModel.WarningException
struct WarningException_t2213195123;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.ComponentModel.WarningException::.ctor(System.String)
extern "C"  void WarningException__ctor_m2392266936 (WarningException_t2213195123 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.String,System.String)
extern "C"  void WarningException__ctor_m1008291596 (WarningException_t2213195123 * __this, String_t* ___message0, String_t* ___helpUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.String,System.String,System.String)
extern "C"  void WarningException__ctor_m2551434232 (WarningException_t2213195123 * __this, String_t* ___message0, String_t* ___helpUrl1, String_t* ___helpTopic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor()
extern "C"  void WarningException__ctor_m547502538 (WarningException_t2213195123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.String,System.Exception)
extern "C"  void WarningException__ctor_m2071590072 (WarningException_t2213195123 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WarningException__ctor_m2424442125 (WarningException_t2213195123 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WarningException_GetObjectData_m1374776898 (WarningException_t2213195123 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.WarningException::get_HelpTopic()
extern "C"  String_t* WarningException_get_HelpTopic_m2507430108 (WarningException_t2213195123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.WarningException::get_HelpUrl()
extern "C"  String_t* WarningException_get_HelpUrl_m1493168938 (WarningException_t2213195123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
