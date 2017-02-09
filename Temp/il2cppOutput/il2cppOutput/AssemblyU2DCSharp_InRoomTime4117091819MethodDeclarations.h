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

// InRoomTime
struct InRoomTime_t4117091819;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"

// System.Void InRoomTime::.ctor()
extern "C"  void InRoomTime__ctor_m3765987976 (InRoomTime_t4117091819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double InRoomTime::get_RoomTime()
extern "C"  double InRoomTime_get_RoomTime_m4013742088 (InRoomTime_t4117091819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InRoomTime::get_RoomTimestamp()
extern "C"  int32_t InRoomTime_get_RoomTimestamp_m2472561184 (InRoomTime_t4117091819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InRoomTime::get_IsRoomTimeSet()
extern "C"  bool InRoomTime_get_IsRoomTimeSet_m1405147561 (InRoomTime_t4117091819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InRoomTime::SetRoomStartTimestamp()
extern "C"  Il2CppObject * InRoomTime_SetRoomStartTimestamp_m3368091583 (InRoomTime_t4117091819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomTime::OnJoinedRoom()
extern "C"  void InRoomTime_OnJoinedRoom_m1820921127 (InRoomTime_t4117091819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomTime::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void InRoomTime_OnMasterClientSwitched_m475166546 (InRoomTime_t4117091819 * __this, PhotonPlayer_t4120608827 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomTime::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void InRoomTime_OnPhotonCustomRoomPropertiesChanged_m3323182926 (InRoomTime_t4117091819 * __this, Hashtable_t995404622 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
