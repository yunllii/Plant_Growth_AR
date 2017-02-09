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

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct AsymmetricSignatureFormatter_t4058014248;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259.h"

// System.Void System.Security.Cryptography.AsymmetricSignatureFormatter::.ctor()
extern "C"  void AsymmetricSignatureFormatter__ctor_m1416079717 (AsymmetricSignatureFormatter_t4058014248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsymmetricSignatureFormatter::CreateSignature(System.Security.Cryptography.HashAlgorithm)
extern "C"  ByteU5BU5D_t3397334013* AsymmetricSignatureFormatter_CreateSignature_m3205623747 (AsymmetricSignatureFormatter_t4058014248 * __this, HashAlgorithm_t2624936259 * ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
