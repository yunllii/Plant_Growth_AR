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

// PhotonPlayer
struct PhotonPlayer_t4120608827;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"

// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,System.String)
extern "C"  void PhotonPlayer__ctor_m3424007814 (PhotonPlayer_t4120608827 * __this, bool ___isLocal0, int32_t ___actorID1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer__ctor_m3155313380 (PhotonPlayer_t4120608827 * __this, bool ___isLocal0, int32_t ___actorID1, Hashtable_t995404622 * ___properties2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
extern "C"  int32_t PhotonPlayer_get_ID_m3563553162 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_NickName()
extern "C"  String_t* PhotonPlayer_get_NickName_m855274760 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_NickName(System.String)
extern "C"  void PhotonPlayer_set_NickName_m3611286621 (PhotonPlayer_t4120608827 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_UserId()
extern "C"  String_t* PhotonPlayer_get_UserId_m3210796350 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_UserId(System.String)
extern "C"  void PhotonPlayer_set_UserId_m2975414553 (PhotonPlayer_t4120608827 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_IsMasterClient()
extern "C"  bool PhotonPlayer_get_IsMasterClient_m227577706 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_IsInactive()
extern "C"  bool PhotonPlayer_get_IsInactive_m928298514 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_IsInactive(System.Boolean)
extern "C"  void PhotonPlayer_set_IsInactive_m1551257769 (PhotonPlayer_t4120608827 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_CustomProperties()
extern "C"  Hashtable_t995404622 * PhotonPlayer_get_CustomProperties_m3863542584 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_CustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_set_CustomProperties_m2989669301 (PhotonPlayer_t4120608827 * __this, Hashtable_t995404622 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_AllProperties()
extern "C"  Hashtable_t995404622 * PhotonPlayer_get_AllProperties_m2185502218 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Object)
extern "C"  bool PhotonPlayer_Equals_m1539934999 (PhotonPlayer_t4120608827 * __this, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::GetHashCode()
extern "C"  int32_t PhotonPlayer_GetHashCode_m2198586669 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalChangeLocalID(System.Int32)
extern "C"  void PhotonPlayer_InternalChangeLocalID_m4267563626 (PhotonPlayer_t4120608827 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_InternalCacheProperties_m2461319966 (PhotonPlayer_t4120608827 * __this, Hashtable_t995404622 * ___properties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void PhotonPlayer_SetCustomProperties_m695665853 (PhotonPlayer_t4120608827 * __this, Hashtable_t995404622 * ___propertiesToSet0, Hashtable_t995404622 * ___expectedValues1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Find(System.Int32)
extern "C"  PhotonPlayer_t4120608827 * PhotonPlayer_Find_m980280912 (Il2CppObject * __this /* static, unused */, int32_t ___ID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Get(System.Int32)
extern "C"  PhotonPlayer_t4120608827 * PhotonPlayer_Get_m528369423 (PhotonPlayer_t4120608827 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNext()
extern "C"  PhotonPlayer_t4120608827 * PhotonPlayer_GetNext_m482201981 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(PhotonPlayer)
extern "C"  PhotonPlayer_t4120608827 * PhotonPlayer_GetNextFor_m1421830979 (PhotonPlayer_t4120608827 * __this, PhotonPlayer_t4120608827 * ___currentPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(System.Int32)
extern "C"  PhotonPlayer_t4120608827 * PhotonPlayer_GetNextFor_m2600278243 (PhotonPlayer_t4120608827 * __this, int32_t ___currentPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::CompareTo(PhotonPlayer)
extern "C"  int32_t PhotonPlayer_CompareTo_m370481781 (PhotonPlayer_t4120608827 * __this, PhotonPlayer_t4120608827 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::CompareTo(System.Int32)
extern "C"  int32_t PhotonPlayer_CompareTo_m113203737 (PhotonPlayer_t4120608827 * __this, int32_t ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(PhotonPlayer)
extern "C"  bool PhotonPlayer_Equals_m517641026 (PhotonPlayer_t4120608827 * __this, PhotonPlayer_t4120608827 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Int32)
extern "C"  bool PhotonPlayer_Equals_m570166 (PhotonPlayer_t4120608827 * __this, int32_t ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToString()
extern "C"  String_t* PhotonPlayer_ToString_m2975212349 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToStringFull()
extern "C"  String_t* PhotonPlayer_ToStringFull_m3648993684 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_name()
extern "C"  String_t* PhotonPlayer_get_name_m3744791437 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_name(System.String)
extern "C"  void PhotonPlayer_set_name_m592942212 (PhotonPlayer_t4120608827 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_userId()
extern "C"  String_t* PhotonPlayer_get_userId_m3211872350 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_userId(System.String)
extern "C"  void PhotonPlayer_set_userId_m573996921 (PhotonPlayer_t4120608827 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isLocal()
extern "C"  bool PhotonPlayer_get_isLocal_m1238256428 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isMasterClient()
extern "C"  bool PhotonPlayer_get_isMasterClient_m765460170 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isInactive()
extern "C"  bool PhotonPlayer_get_isInactive_m1359105586 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_isInactive(System.Boolean)
extern "C"  void PhotonPlayer_set_isInactive_m4220206345 (PhotonPlayer_t4120608827 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_customProperties()
extern "C"  Hashtable_t995404622 * PhotonPlayer_get_customProperties_m4032307544 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_customProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_set_customProperties_m3187574741 (PhotonPlayer_t4120608827 * __this, Hashtable_t995404622 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_allProperties()
extern "C"  Hashtable_t995404622 * PhotonPlayer_get_allProperties_m2813508266 (PhotonPlayer_t4120608827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
