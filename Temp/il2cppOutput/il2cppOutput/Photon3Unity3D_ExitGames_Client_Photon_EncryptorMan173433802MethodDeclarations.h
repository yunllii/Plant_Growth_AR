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

// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t173433802;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] ExitGames.Client.Photon.EncryptorManaged.Decryptor::DecryptBufferWithIV(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  ByteU5BU5D_t3397334013* Decryptor_DecryptBufferWithIV_m897463263 (Decryptor_t173433802 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___len2, int32_t* ___outLen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EncryptorManaged.Decryptor::CheckHMAC(System.Byte[],System.Int32)
extern "C"  bool Decryptor_CheckHMAC_m3168705730 (Decryptor_t173433802 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EncryptorManaged.Decryptor::.ctor()
extern "C"  void Decryptor__ctor_m1958306343 (Decryptor_t173433802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
