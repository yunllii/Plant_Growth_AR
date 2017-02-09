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

// PhotonView
struct PhotonView_t899863581;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// PhotonStream
struct PhotonStream_t2436786422;
// UnityEngine.Component
struct Component_t3819376471;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_PhotonTargets112131816.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PhotonView::.ctor()
extern "C"  void PhotonView__ctor_m3140130606 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
extern "C"  int32_t PhotonView_get_prefix_m723691679 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
extern "C"  void PhotonView_set_prefix_m2613589360 (PhotonView_t899863581 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
extern "C"  ObjectU5BU5D_t3614634134* PhotonView_get_instantiationData_m2092032589 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
extern "C"  void PhotonView_set_instantiationData_m1946711596 (PhotonView_t899863581 * __this, ObjectU5BU5D_t3614634134* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
extern "C"  int32_t PhotonView_get_viewID_m2945985599 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
extern "C"  void PhotonView_set_viewID_m657931668 (PhotonView_t899863581 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
extern "C"  bool PhotonView_get_isSceneView_m2094347122 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
extern "C"  PhotonPlayer_t4120608827 * PhotonView_get_owner_m1119604144 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
extern "C"  int32_t PhotonView_get_OwnerActorNr_m686923125 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
extern "C"  bool PhotonView_get_isOwnerActive_m3326017258 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
extern "C"  int32_t PhotonView_get_CreatorActorNr_m388159674 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C"  bool PhotonView_get_isMine_m2092251276 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
extern "C"  void PhotonView_Awake_m3771804825 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
extern "C"  void PhotonView_RequestOwnership_m3274079310 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
extern "C"  void PhotonView_TransferOwnership_m2266283397 (PhotonView_t899863581 * __this, PhotonPlayer_t4120608827 * ___newOwner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
extern "C"  void PhotonView_TransferOwnership_m342951241 (PhotonView_t899863581 * __this, int32_t ___newOwnerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PhotonView_OnMasterClientSwitched_m3780324920 (PhotonView_t899863581 * __this, PhotonPlayer_t4120608827 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
extern "C"  void PhotonView_OnDestroy_m768494787 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_SerializeView_m3298042120 (PhotonView_t899863581 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_DeserializeView_m2007692571 (PhotonView_t899863581 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_DeserializeComponent_m133010701 (PhotonView_t899863581 * __this, Component_t3819376471 * ___component0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_SerializeComponent_m548572674 (PhotonView_t899863581 * __this, Component_t3819376471 * ___component0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonView_ExecuteComponentOnSerialize_m2791353298 (PhotonView_t899863581 * __this, Component_t3819376471 * ___component0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RefreshRpcMonoBehaviourCache()
extern "C"  void PhotonView_RefreshRpcMonoBehaviourCache_m3717406774 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C"  void PhotonView_RPC_m367969803 (PhotonView_t899863581 * __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t3614634134* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void PhotonView_RpcSecure_m550354699 (PhotonView_t899863581 * __this, String_t* ___methodName0, int32_t ___target1, bool ___encrypt2, ObjectU5BU5D_t3614634134* ___parameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
extern "C"  void PhotonView_RPC_m3448540762 (PhotonView_t899863581 * __this, String_t* ___methodName0, PhotonPlayer_t4120608827 * ___targetPlayer1, ObjectU5BU5D_t3614634134* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void PhotonView_RpcSecure_m694142414 (PhotonView_t899863581 * __this, String_t* ___methodName0, PhotonPlayer_t4120608827 * ___targetPlayer1, bool ___encrypt2, ObjectU5BU5D_t3614634134* ___parameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C"  PhotonView_t899863581 * PhotonView_Get_m1618973720 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
extern "C"  PhotonView_t899863581 * PhotonView_Get_m3074363662 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
extern "C"  PhotonView_t899863581 * PhotonView_Find_m2014178660 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
extern "C"  String_t* PhotonView_ToString_m825647863 (PhotonView_t899863581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
