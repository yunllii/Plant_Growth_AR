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

// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t1773348698;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[])
extern "C"  void Rfc2898DeriveBytes__ctor_m2363771656 (Rfc2898DeriveBytes_t1773348698 * __this, String_t* ___password0, ByteU5BU5D_t3397334013* ___salt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[],System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m3326438931 (Rfc2898DeriveBytes_t1773348698 * __this, String_t* ___password0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.Byte[],System.Byte[],System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m4134458404 (Rfc2898DeriveBytes_t1773348698 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m1229881860 (Rfc2898DeriveBytes_t1773348698 * __this, String_t* ___password0, int32_t ___saltSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void Rfc2898DeriveBytes__ctor_m4047862825 (Rfc2898DeriveBytes_t1773348698 * __this, String_t* ___password0, int32_t ___saltSize1, int32_t ___iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::get_IterationCount()
extern "C"  int32_t Rfc2898DeriveBytes_get_IterationCount_m3255079814 (Rfc2898DeriveBytes_t1773348698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::set_IterationCount(System.Int32)
extern "C"  void Rfc2898DeriveBytes_set_IterationCount_m2410037731 (Rfc2898DeriveBytes_t1773348698 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::get_Salt()
extern "C"  ByteU5BU5D_t3397334013* Rfc2898DeriveBytes_get_Salt_m1615940008 (Rfc2898DeriveBytes_t1773348698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::set_Salt(System.Byte[])
extern "C"  void Rfc2898DeriveBytes_set_Salt_m3702553367 (Rfc2898DeriveBytes_t1773348698 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::F(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Rfc2898DeriveBytes_F_m1877554960 (Rfc2898DeriveBytes_t1773348698 * __this, ByteU5BU5D_t3397334013* ___s0, int32_t ___c1, int32_t ___i2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Rfc2898DeriveBytes_GetBytes_m2724624361 (Rfc2898DeriveBytes_t1773348698 * __this, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::Reset()
extern "C"  void Rfc2898DeriveBytes_Reset_m1342281662 (Rfc2898DeriveBytes_t1773348698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
