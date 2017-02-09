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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t4167037264;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor()
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m2201927717 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m2529911523 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::get_Rng()
extern "C"  RandomNumberGenerator_t2510243513 * RSAPKCS1KeyExchangeFormatter_get_Rng_m298251470 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::set_Rng(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAPKCS1KeyExchangeFormatter_set_Rng_m2708471163 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, RandomNumberGenerator_t2510243513 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::get_Parameters()
extern "C"  String_t* RSAPKCS1KeyExchangeFormatter_get_Parameters_m2665326691 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m1122286094 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, ByteU5BU5D_t3397334013* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[],System.Type)
extern "C"  ByteU5BU5D_t3397334013* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m2919516741 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, ByteU5BU5D_t3397334013* ___rgbData0, Type_t * ___symAlgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m3575964424 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetKey_m3105073466 (RSAPKCS1KeyExchangeFormatter_t4167037264 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
