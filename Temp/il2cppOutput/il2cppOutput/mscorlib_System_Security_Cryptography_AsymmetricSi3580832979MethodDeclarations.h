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

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct AsymmetricSignatureDeformatter_t3580832979;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259.h"

// System.Void System.Security.Cryptography.AsymmetricSignatureDeformatter::.ctor()
extern "C"  void AsymmetricSignatureDeformatter__ctor_m3155418292 (AsymmetricSignatureDeformatter_t3580832979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.AsymmetricSignatureDeformatter::VerifySignature(System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  bool AsymmetricSignatureDeformatter_VerifySignature_m1342699134 (AsymmetricSignatureDeformatter_t3580832979 * __this, HashAlgorithm_t2624936259 * ___hash0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
