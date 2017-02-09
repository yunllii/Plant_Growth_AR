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

// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t1736907404;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.EncryptorManaged.Encryptor::Encrypt(System.Byte[],System.Int32,System.Byte[],System.Int32&)
extern "C"  void Encryptor_Encrypt_m4035422444 (Encryptor_t1736907404 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___len1, ByteU5BU5D_t3397334013* ___output2, int32_t* ___offset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EncryptorManaged.Encryptor::FinishHMAC(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Encryptor_FinishHMAC_m3861368480 (Encryptor_t1736907404 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EncryptorManaged.Encryptor::.ctor()
extern "C"  void Encryptor__ctor_m1974303017 (Encryptor_t1736907404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EncryptorManaged.Encryptor::.cctor()
extern "C"  void Encryptor__cctor_m488176286 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
