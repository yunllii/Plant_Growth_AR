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

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct RSAPKCS1KeyExchangeDeformatter_t2821070181;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.String
struct String_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor()
extern "C"  void RSAPKCS1KeyExchangeDeformatter__ctor_m2507452758 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter__ctor_m3515064346 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::get_Parameters()
extern "C"  String_t* RSAPKCS1KeyExchangeDeformatter_get_Parameters_m2381239434 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::set_Parameters(System.String)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_set_Parameters_m1945682777 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::get_RNG()
extern "C"  RandomNumberGenerator_t2510243513 * RSAPKCS1KeyExchangeDeformatter_get_RNG_m2912078617 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::set_RNG(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_set_RNG_m3155269132 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, RandomNumberGenerator_t2510243513 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSAPKCS1KeyExchangeDeformatter_DecryptKeyExchange_m2886949892 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, ByteU5BU5D_t3397334013* ___rgbIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_SetKey_m1925328451 (RSAPKCS1KeyExchangeDeformatter_t2821070181 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
