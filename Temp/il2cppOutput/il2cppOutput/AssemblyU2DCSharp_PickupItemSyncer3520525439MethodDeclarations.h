﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PickupItemSyncer
struct PickupItemSyncer_t3520525439;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void PickupItemSyncer::.ctor()
extern "C"  void PickupItemSyncer__ctor_m1589025982 (PickupItemSyncer_t3520525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PickupItemSyncer_OnPhotonPlayerConnected_m4041886334 (PickupItemSyncer_t3520525439 * __this, PhotonPlayer_t4120608827 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnJoinedRoom()
extern "C"  void PickupItemSyncer_OnJoinedRoom_m356071831 (PickupItemSyncer_t3520525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
extern "C"  void PickupItemSyncer_AskForPickupItemSpawnTimes_m4060093272 (PickupItemSyncer_t3520525439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
extern "C"  void PickupItemSyncer_RequestForPickupTimes_m3398394985 (PickupItemSyncer_t3520525439 * __this, PhotonMessageInfo_t13590565  ___msgInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupItems(PhotonMessageInfo)
extern "C"  void PickupItemSyncer_RequestForPickupItems_m1193635933 (PickupItemSyncer_t3520525439 * __this, PhotonMessageInfo_t13590565  ___msgInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
extern "C"  void PickupItemSyncer_SendPickedUpItems_m3407434898 (PickupItemSyncer_t3520525439 * __this, PhotonPlayer_t4120608827 * ___targetPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
extern "C"  void PickupItemSyncer_PickupItemInit_m2133736866 (PickupItemSyncer_t3520525439 * __this, double ___timeBase0, SingleU5BU5D_t577127397* ___inactivePickupsAndTimes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
