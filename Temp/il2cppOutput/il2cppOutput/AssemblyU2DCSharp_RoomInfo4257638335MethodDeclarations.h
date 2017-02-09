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

// RoomInfo
struct RoomInfo_t4257638335;
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

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo__ctor_m3481734110 (RoomInfo_t4257638335 * __this, String_t* ___roomName0, Hashtable_t995404622 * ___properties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C"  bool RoomInfo_get_removedFromList_m465545821 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C"  void RoomInfo_set_removedFromList_m3800232084 (RoomInfo_t4257638335 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C"  bool RoomInfo_get_serverSideMasterClient_m4105012014 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C"  void RoomInfo_set_serverSideMasterClient_m2680136575 (RoomInfo_t4257638335 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_CustomProperties()
extern "C"  Hashtable_t995404622 * RoomInfo_get_CustomProperties_m3639800824 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_Name()
extern "C"  String_t* RoomInfo_get_Name_m373400081 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_PlayerCount()
extern "C"  int32_t RoomInfo_get_PlayerCount_m2691121645 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_PlayerCount(System.Int32)
extern "C"  void RoomInfo_set_PlayerCount_m3999841196 (RoomInfo_t4257638335 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_IsLocalClientInside()
extern "C"  bool RoomInfo_get_IsLocalClientInside_m908504117 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_IsLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_IsLocalClientInside_m3613644776 (RoomInfo_t4257638335 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_MaxPlayers()
extern "C"  uint8_t RoomInfo_get_MaxPlayers_m2448471509 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_IsOpen()
extern "C"  bool RoomInfo_get_IsOpen_m3234785473 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_IsVisible()
extern "C"  bool RoomInfo_get_IsVisible_m1120265419 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
extern "C"  bool RoomInfo_Equals_m1350341559 (RoomInfo_t4257638335 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
extern "C"  int32_t RoomInfo_GetHashCode_m876321929 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
extern "C"  String_t* RoomInfo_ToString_m55344057 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
extern "C"  String_t* RoomInfo_ToStringFull_m4179055980 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo_InternalCacheProperties_m1924544098 (RoomInfo_t4257638335 * __this, Hashtable_t995404622 * ___propertiesToCache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C"  Hashtable_t995404622 * RoomInfo_get_customProperties_m2042309848 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
extern "C"  String_t* RoomInfo_get_name_m373358961 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
extern "C"  int32_t RoomInfo_get_playerCount_m1445439757 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C"  void RoomInfo_set_playerCount_m2640786252 (RoomInfo_t4257638335 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C"  bool RoomInfo_get_isLocalClientInside_m2765523925 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_isLocalClientInside_m43680840 (RoomInfo_t4257638335 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
extern "C"  uint8_t RoomInfo_get_maxPlayers_m3627137461 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
extern "C"  bool RoomInfo_get_open_m3784196203 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
extern "C"  bool RoomInfo_get_visible_m3015228801 (RoomInfo_t4257638335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
