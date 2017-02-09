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

// GameLogic
struct GameLogic_t2306947540;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"

// System.Void GameLogic::.ctor()
extern "C"  void GameLogic__ctor_m2898980063 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Start()
extern "C"  void GameLogic_Start_m1915835419 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnJoinedRoom()
extern "C"  void GameLogic_OnJoinedRoom_m1488357628 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void GameLogic_OnPhotonPlayerConnected_m864393425 (GameLogic_t2306947540 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TagPlayer(System.Int32)
extern "C"  void GameLogic_TagPlayer_m1374628795 (Il2CppObject * __this /* static, unused */, int32_t ___playerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TaggedPlayer(System.Int32)
extern "C"  void GameLogic_TaggedPlayer_m1488357241 (GameLogic_t2306947540 * __this, int32_t ___playerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void GameLogic_OnPhotonPlayerDisconnected_m992454639 (GameLogic_t2306947540 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnMasterClientSwitched()
extern "C"  void GameLogic_OnMasterClientSwitched_m1996450470 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::.cctor()
extern "C"  void GameLogic__cctor_m3901265130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
