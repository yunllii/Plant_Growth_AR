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
// PhotonView
struct PhotonView_t899863581;
// System.String
struct String_t;
// PhotonMessageInfo
struct PhotonMessageInfo_t13590565;
struct PhotonMessageInfo_t13590565_marshaled_pinvoke;
struct PhotonMessageInfo_t13590565_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_PhotonView899863581.h"

// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
extern "C"  void PhotonMessageInfo__ctor_m1813679655 (PhotonMessageInfo_t13590565 * __this, PhotonPlayer_t4120608827 * ___player0, int32_t ___timestamp1, PhotonView_t899863581 * ___view2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
extern "C"  double PhotonMessageInfo_get_timestamp_m1174103746 (PhotonMessageInfo_t13590565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
extern "C"  String_t* PhotonMessageInfo_ToString_m2964333707 (PhotonMessageInfo_t13590565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct PhotonMessageInfo_t13590565;
struct PhotonMessageInfo_t13590565_marshaled_pinvoke;

extern "C" void PhotonMessageInfo_t13590565_marshal_pinvoke(const PhotonMessageInfo_t13590565& unmarshaled, PhotonMessageInfo_t13590565_marshaled_pinvoke& marshaled);
extern "C" void PhotonMessageInfo_t13590565_marshal_pinvoke_back(const PhotonMessageInfo_t13590565_marshaled_pinvoke& marshaled, PhotonMessageInfo_t13590565& unmarshaled);
extern "C" void PhotonMessageInfo_t13590565_marshal_pinvoke_cleanup(PhotonMessageInfo_t13590565_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct PhotonMessageInfo_t13590565;
struct PhotonMessageInfo_t13590565_marshaled_com;

extern "C" void PhotonMessageInfo_t13590565_marshal_com(const PhotonMessageInfo_t13590565& unmarshaled, PhotonMessageInfo_t13590565_marshaled_com& marshaled);
extern "C" void PhotonMessageInfo_t13590565_marshal_com_back(const PhotonMessageInfo_t13590565_marshaled_com& marshaled, PhotonMessageInfo_t13590565& unmarshaled);
extern "C" void PhotonMessageInfo_t13590565_marshal_com_cleanup(PhotonMessageInfo_t13590565_marshaled_com& marshaled);
