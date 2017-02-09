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

// WorkerInGame
struct WorkerInGame_t3235698221;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void WorkerInGame::.ctor()
extern "C"  void WorkerInGame__ctor_m4113241918 (WorkerInGame_t3235698221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::Awake()
extern "C"  void WorkerInGame_Awake_m1708638153 (WorkerInGame_t3235698221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnGUI()
extern "C"  void WorkerInGame_OnGUI_m2007697374 (WorkerInGame_t3235698221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void WorkerInGame_OnMasterClientSwitched_m2233921640 (WorkerInGame_t3235698221 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnLeftRoom()
extern "C"  void WorkerInGame_OnLeftRoom_m2619439453 (WorkerInGame_t3235698221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnDisconnectedFromPhoton()
extern "C"  void WorkerInGame_OnDisconnectedFromPhoton_m905306444 (WorkerInGame_t3235698221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonInstantiate(PhotonMessageInfo)
extern "C"  void WorkerInGame_OnPhotonInstantiate_m2750820440 (WorkerInGame_t3235698221 * __this, PhotonMessageInfo_t13590565  ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void WorkerInGame_OnPhotonPlayerConnected_m567096826 (WorkerInGame_t3235698221 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void WorkerInGame_OnPhotonPlayerDisconnected_m3983925768 (WorkerInGame_t3235698221 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnFailedToConnectToPhoton()
extern "C"  void WorkerInGame_OnFailedToConnectToPhoton_m3789442160 (WorkerInGame_t3235698221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
