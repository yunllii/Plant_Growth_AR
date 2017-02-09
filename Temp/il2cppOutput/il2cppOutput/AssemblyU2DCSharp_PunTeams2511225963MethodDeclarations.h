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

// PunTeams
struct PunTeams_t2511225963;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"

// System.Void PunTeams::.ctor()
extern "C"  void PunTeams__ctor_m1308971250 (PunTeams_t2511225963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::Start()
extern "C"  void PunTeams_Start_m1423046614 (PunTeams_t2511225963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnDisable()
extern "C"  void PunTeams_OnDisable_m3881962211 (PunTeams_t2511225963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnJoinedRoom()
extern "C"  void PunTeams_OnJoinedRoom_m736144195 (PunTeams_t2511225963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnLeftRoom()
extern "C"  void PunTeams_OnLeftRoom_m2495644179 (PunTeams_t2511225963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C"  void PunTeams_OnPhotonPlayerPropertiesChanged_m2269603965 (PunTeams_t2511225963 * __this, ObjectU5BU5D_t3614634134* ___playerAndUpdatedProps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PunTeams_OnPhotonPlayerDisconnected_m2498061324 (PunTeams_t2511225963 * __this, PhotonPlayer_t4120608827 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PunTeams_OnPhotonPlayerConnected_m527918058 (PunTeams_t2511225963 * __this, PhotonPlayer_t4120608827 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTeams::UpdateTeams()
extern "C"  void PunTeams_UpdateTeams_m3021726269 (PunTeams_t2511225963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
