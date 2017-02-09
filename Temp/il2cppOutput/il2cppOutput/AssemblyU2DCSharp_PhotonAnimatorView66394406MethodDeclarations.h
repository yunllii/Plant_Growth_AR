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

// PhotonAnimatorView
struct PhotonAnimatorView_t66394406;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t2781148666;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t2038791948;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeTy2623161407.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType3067826674.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void PhotonAnimatorView::.ctor()
extern "C"  void PhotonAnimatorView__ctor_m4254504963 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
extern "C"  void PhotonAnimatorView_Awake_m2371652134 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
extern "C"  void PhotonAnimatorView_Update_m3405445940 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::CacheDiscreteTriggers()
extern "C"  void PhotonAnimatorView_CacheDiscreteTriggers_m4290714915 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
extern "C"  bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m3499674257 (PhotonAnimatorView_t66394406 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
extern "C"  bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m1149491924 (PhotonAnimatorView_t66394406 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
extern "C"  List_1_t2781148666 * PhotonAnimatorView_GetSynchronizedLayers_m3487730404 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
extern "C"  List_1_t2038791948 * PhotonAnimatorView_GetSynchronizedParameters_m2000572516 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
extern "C"  int32_t PhotonAnimatorView_GetLayerSynchronizeType_m1754042599 (PhotonAnimatorView_t66394406 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
extern "C"  int32_t PhotonAnimatorView_GetParameterSynchronizeType_m3020895554 (PhotonAnimatorView_t66394406 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
extern "C"  void PhotonAnimatorView_SetLayerSynchronized_m1993865174 (PhotonAnimatorView_t66394406 * __this, int32_t ___layerIndex0, int32_t ___synchronizeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
extern "C"  void PhotonAnimatorView_SetParameterSynchronized_m3822547655 (PhotonAnimatorView_t66394406 * __this, String_t* ___name0, int32_t ___type1, int32_t ___synchronizeType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
extern "C"  void PhotonAnimatorView_SerializeDataContinuously_m4085950893 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
extern "C"  void PhotonAnimatorView_DeserializeDataContinuously_m3755947722 (PhotonAnimatorView_t66394406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
extern "C"  void PhotonAnimatorView_SerializeDataDiscretly_m2723946766 (PhotonAnimatorView_t66394406 * __this, PhotonStream_t2436786422 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
extern "C"  void PhotonAnimatorView_DeserializeDataDiscretly_m3093575353 (PhotonAnimatorView_t66394406 * __this, PhotonStream_t2436786422 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
extern "C"  void PhotonAnimatorView_SerializeSynchronizationTypeState_m2900677464 (PhotonAnimatorView_t66394406 * __this, PhotonStream_t2436786422 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
extern "C"  void PhotonAnimatorView_DeserializeSynchronizationTypeState_m3788538555 (PhotonAnimatorView_t66394406 * __this, PhotonStream_t2436786422 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonAnimatorView_OnPhotonSerializeView_m4148537682 (PhotonAnimatorView_t66394406 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
