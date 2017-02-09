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

// InRoomRoundTimer
struct InRoomRoundTimer_t2145612055;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"

// System.Void InRoomRoundTimer::.ctor()
extern "C"  void InRoomRoundTimer__ctor_m3481733288 (InRoomRoundTimer_t2145612055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::StartRoundNow()
extern "C"  void InRoomRoundTimer_StartRoundNow_m2899351016 (InRoomRoundTimer_t2145612055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnJoinedRoom()
extern "C"  void InRoomRoundTimer_OnJoinedRoom_m2248476055 (InRoomRoundTimer_t2145612055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m3189640166 (InRoomRoundTimer_t2145612055 * __this, Hashtable_t995404622 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void InRoomRoundTimer_OnMasterClientSwitched_m3307614910 (InRoomRoundTimer_t2145612055 * __this, PhotonPlayer_t4120608827 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::Update()
extern "C"  void InRoomRoundTimer_Update_m1933442359 (InRoomRoundTimer_t2145612055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnGUI()
extern "C"  void InRoomRoundTimer_OnGUI_m1699629156 (InRoomRoundTimer_t2145612055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
