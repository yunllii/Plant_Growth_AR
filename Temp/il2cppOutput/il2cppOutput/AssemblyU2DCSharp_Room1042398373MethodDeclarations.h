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
// System.String
struct String_t;
// RoomOptions
struct RoomOptions_t590971513;
// System.String[]
struct StringU5BU5D_t1642385972;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_RoomOptions590971513.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"

// System.Void Room::.ctor(System.String,RoomOptions)
extern "C"  void Room__ctor_m3354368421 (Room_t1042398373 * __this, String_t* ___roomName0, RoomOptions_t590971513 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_Name()
extern "C"  String_t* Room_get_Name_m428856059 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_Name(System.String)
extern "C"  void Room_set_Name_m2983234896 (Room_t1042398373 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_IsOpen()
extern "C"  bool Room_get_IsOpen_m3964022663 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_IsOpen(System.Boolean)
extern "C"  void Room_set_IsOpen_m342223208 (Room_t1042398373 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_IsVisible()
extern "C"  bool Room_get_IsVisible_m847148857 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_IsVisible(System.Boolean)
extern "C"  void Room_set_IsVisible_m2193730042 (Room_t1042398373 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_PropertiesListedInLobby()
extern "C"  StringU5BU5D_t1642385972* Room_get_PropertiesListedInLobby_m4045389113 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_PropertiesListedInLobby(System.String[])
extern "C"  void Room_set_PropertiesListedInLobby_m4264137750 (Room_t1042398373 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_AutoCleanUp()
extern "C"  bool Room_get_AutoCleanUp_m245140402 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_MaxPlayers()
extern "C"  int32_t Room_get_MaxPlayers_m1731639659 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_MaxPlayers(System.Int32)
extern "C"  void Room_set_MaxPlayers_m1038580396 (Room_t1042398373 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_PlayerCount()
extern "C"  int32_t Room_get_PlayerCount_m3307151539 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_ExpectedUsers()
extern "C"  StringU5BU5D_t1642385972* Room_get_ExpectedUsers_m69043462 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_MasterClientId()
extern "C"  int32_t Room_get_MasterClientId_m2153691839 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_MasterClientId(System.Int32)
extern "C"  void Room_set_MasterClientId_m2673685936 (Room_t1042398373 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Room_SetCustomProperties_m1192882299 (Room_t1042398373 * __this, Hashtable_t995404622 * ___propertiesToSet0, Hashtable_t995404622 * ___expectedValues1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
extern "C"  void Room_SetPropertiesListedInLobby_m2002080373 (Room_t1042398373 * __this, StringU5BU5D_t1642385972* ___propsListedInLobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::ClearExpectedUsers()
extern "C"  void Room_ClearExpectedUsers_m3314677313 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
extern "C"  String_t* Room_ToString_m267078423 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
extern "C"  String_t* Room_ToStringFull_m1030785812 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
extern "C"  String_t* Room_get_name_m428823387 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
extern "C"  void Room_set_name_m3522300528 (Room_t1042398373 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
extern "C"  bool Room_get_open_m589357817 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
extern "C"  void Room_set_open_m2838582848 (Room_t1042398373 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
extern "C"  bool Room_get_visible_m3836177831 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
extern "C"  void Room_set_visible_m2879293778 (Room_t1042398373 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
extern "C"  StringU5BU5D_t1642385972* Room_get_propertiesListedInLobby_m1769491161 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
extern "C"  void Room_set_propertiesListedInLobby_m3395474742 (Room_t1042398373 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
extern "C"  bool Room_get_autoCleanUp_m4101686738 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
extern "C"  int32_t Room_get_maxPlayers_m2910163467 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
extern "C"  void Room_set_maxPlayers_m465477324 (Room_t1042398373 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
extern "C"  int32_t Room_get_playerCount_m1250348883 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_expectedUsers()
extern "C"  StringU5BU5D_t1642385972* Room_get_expectedUsers_m703805926 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_masterClientId()
extern "C"  int32_t Room_get_masterClientId_m3024603999 (Room_t1042398373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_masterClientId(System.Int32)
extern "C"  void Room_set_masterClientId_m113542096 (Room_t1042398373 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
