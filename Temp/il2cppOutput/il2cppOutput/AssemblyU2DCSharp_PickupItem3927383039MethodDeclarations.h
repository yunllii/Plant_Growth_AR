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

// PickupItem
struct PickupItem_t3927383039;
// UnityEngine.Collider
struct Collider_t3497673348;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PickupItem::.ctor()
extern "C"  void PickupItem__ctor_m486102622 (PickupItem_t3927383039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
extern "C"  int32_t PickupItem_get_ViewID_m1982109433 (PickupItem_t3927383039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PickupItem_OnTriggerEnter_m4154773282 (PickupItem_t3927383039 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PickupItem_OnPhotonSerializeView_m1587141207 (PickupItem_t3927383039 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
extern "C"  void PickupItem_Pickup_m2883926604 (PickupItem_t3927383039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
extern "C"  void PickupItem_Drop_m1771854767 (PickupItem_t3927383039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern "C"  void PickupItem_Drop_m1173218614 (PickupItem_t3927383039 * __this, Vector3_t2243707580  ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern "C"  void PickupItem_PunPickup_m1371274098 (PickupItem_t3927383039 * __this, PhotonMessageInfo_t13590565  ___msgInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
extern "C"  void PickupItem_PickedUp_m691539766 (PickupItem_t3927383039 * __this, float ___timeUntilRespawn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C"  void PickupItem_PunRespawn_m1189506618 (PickupItem_t3927383039 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
extern "C"  void PickupItem_PunRespawn_m293176613 (PickupItem_t3927383039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
extern "C"  void PickupItem__cctor_m2536507345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
