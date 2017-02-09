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

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct PKCS1MaskGenerationMethod_t3159630323;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.PKCS1MaskGenerationMethod::.ctor()
extern "C"  void PKCS1MaskGenerationMethod__ctor_m2478578298 (PKCS1MaskGenerationMethod_t3159630323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::get_HashName()
extern "C"  String_t* PKCS1MaskGenerationMethod_get_HashName_m1488155769 (PKCS1MaskGenerationMethod_t3159630323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PKCS1MaskGenerationMethod::set_HashName(System.String)
extern "C"  void PKCS1MaskGenerationMethod_set_HashName_m810450156 (PKCS1MaskGenerationMethod_t3159630323 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PKCS1MaskGenerationMethod::GenerateMask(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PKCS1MaskGenerationMethod_GenerateMask_m2455034921 (PKCS1MaskGenerationMethod_t3159630323 * __this, ByteU5BU5D_t3397334013* ___rgbSeed0, int32_t ___cbReturn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
