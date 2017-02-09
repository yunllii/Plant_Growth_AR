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

// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t3747118964;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffe3747118964.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void CustomTypes::Register()
extern "C"  void CustomTypes_Register_m3040420346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector3_m3644821973 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeVector3_m1238599076 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector2_m496718448 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeVector2_m670238917 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializeQuaternion_m3727708791 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeQuaternion_m1529678224 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t CustomTypes_SerializePhotonPlayer_m3719607848 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___outStream0, Il2CppObject * ___customobject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(ExitGames.Client.Photon.StreamBuffer,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializePhotonPlayer_m3262327675 (Il2CppObject * __this /* static, unused */, StreamBuffer_t3747118964 * ___inStream0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::.cctor()
extern "C"  void CustomTypes__cctor_m2900758702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
