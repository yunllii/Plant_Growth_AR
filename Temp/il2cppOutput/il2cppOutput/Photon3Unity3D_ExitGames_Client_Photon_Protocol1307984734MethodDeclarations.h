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

// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t1159648263;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t212185564;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SerializeSt1159648263.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DeserializeS212185564.h"

// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool Protocol_TryRegisterType_m3700163529 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, uint8_t ___typeCode1, SerializeStreamMethod_t1159648263 * ___serializeFunction2, DeserializeStreamMethod_t212185564 * ___deserializeFunction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m2684343985 (Il2CppObject * __this /* static, unused */, int16_t ___value0, ByteU5BU5D_t3397334013* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m1727463231 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t3397334013* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Single,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m1179584083 (Il2CppObject * __this /* static, unused */, float ___value0, ByteU5BU5D_t3397334013* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m1562500108 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, ByteU5BU5D_t3397334013* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m1042189978 (Il2CppObject * __this /* static, unused */, int16_t* ___value0, ByteU5BU5D_t3397334013* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Single&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m2794751626 (Il2CppObject * __this /* static, unused */, float* ___value0, ByteU5BU5D_t3397334013* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
extern "C"  void Protocol__cctor_m745332547 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
