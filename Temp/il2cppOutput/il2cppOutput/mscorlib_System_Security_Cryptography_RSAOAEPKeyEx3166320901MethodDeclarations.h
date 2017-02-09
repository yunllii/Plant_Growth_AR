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

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct RSAOAEPKeyExchangeFormatter_t3166320901;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor()
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m99036864 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m1081246568 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Parameter()
extern "C"  ByteU5BU5D_t3397334013* RSAOAEPKeyExchangeFormatter_get_Parameter_m1341843156 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::set_Parameter(System.Byte[])
extern "C"  void RSAOAEPKeyExchangeFormatter_set_Parameter_m4192178407 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Parameters()
extern "C"  String_t* RSAOAEPKeyExchangeFormatter_get_Parameters_m492144098 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Rng()
extern "C"  RandomNumberGenerator_t2510243513 * RSAOAEPKeyExchangeFormatter_get_Rng_m4154110033 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::set_Rng(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAOAEPKeyExchangeFormatter_set_Rng_m1935532510 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, RandomNumberGenerator_t2510243513 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSAOAEPKeyExchangeFormatter_CreateKeyExchange_m976311703 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, ByteU5BU5D_t3397334013* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::CreateKeyExchange(System.Byte[],System.Type)
extern "C"  ByteU5BU5D_t3397334013* RSAOAEPKeyExchangeFormatter_CreateKeyExchange_m1372020066 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, ByteU5BU5D_t3397334013* ___rgbData0, Type_t * ___symAlgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter_SetKey_m4036155755 (RSAOAEPKeyExchangeFormatter_t3166320901 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
