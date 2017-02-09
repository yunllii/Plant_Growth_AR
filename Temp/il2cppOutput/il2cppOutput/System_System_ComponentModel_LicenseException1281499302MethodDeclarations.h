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

// System.ComponentModel.LicenseException
struct LicenseException_t1281499302;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.ComponentModel.LicenseException::.ctor(System.Type)
extern "C"  void LicenseException__ctor_m3898750578 (LicenseException_t1281499302 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object)
extern "C"  void LicenseException__ctor_m2878763216 (LicenseException_t1281499302 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String)
extern "C"  void LicenseException__ctor_m2562645180 (LicenseException_t1281499302 * __this, Type_t * ___type0, Il2CppObject * ___instance1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String,System.Exception)
extern "C"  void LicenseException__ctor_m4017908452 (LicenseException_t1281499302 * __this, Type_t * ___type0, Il2CppObject * ___instance1, String_t* ___message2, Exception_t1927440687 * ___innerException3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LicenseException__ctor_m3971094942 (LicenseException_t1281499302 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LicenseException_GetObjectData_m783757671 (LicenseException_t1281499302 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.LicenseException::get_LicensedType()
extern "C"  Type_t * LicenseException_get_LicensedType_m3163272981 (LicenseException_t1281499302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
