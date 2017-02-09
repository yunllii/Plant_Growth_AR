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

// Room
struct Room_t1042398373;
// RoomInfo
struct RoomInfo_t4257638335;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Room1042398373.h"
#include "AssemblyU2DCSharp_RoomInfo4257638335.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"

// System.Void TurnExtensions::SetTurn(Room,System.Int32,System.Boolean)
extern "C"  void TurnExtensions_SetTurn_m2300645056 (Il2CppObject * __this /* static, unused */, Room_t1042398373 * ___room0, int32_t ___turn1, bool ___setStartTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TurnExtensions::GetTurn(RoomInfo)
extern "C"  int32_t TurnExtensions_GetTurn_m3080831776 (Il2CppObject * __this /* static, unused */, RoomInfo_t4257638335 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TurnExtensions::GetTurnStart(RoomInfo)
extern "C"  int32_t TurnExtensions_GetTurnStart_m229061492 (Il2CppObject * __this /* static, unused */, RoomInfo_t4257638335 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TurnExtensions::GetFinishedTurn(PhotonPlayer)
extern "C"  int32_t TurnExtensions_GetFinishedTurn_m1274666106 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurnExtensions::SetFinishedTurn(PhotonPlayer,System.Int32)
extern "C"  void TurnExtensions_SetFinishedTurn_m1098184701 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t4120608827 * ___player0, int32_t ___turn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurnExtensions::.cctor()
extern "C"  void TurnExtensions__cctor_m2011054491 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
