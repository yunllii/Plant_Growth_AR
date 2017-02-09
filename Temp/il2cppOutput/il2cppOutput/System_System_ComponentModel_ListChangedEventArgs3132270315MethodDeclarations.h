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

// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t3132270315;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_ListChangedType3463990274.h"
#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"

// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32)
extern "C"  void ListChangedEventArgs__ctor_m1863209976 (ListChangedEventArgs_t3132270315 * __this, int32_t ___listChangedType0, int32_t ___newIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.ComponentModel.PropertyDescriptor)
extern "C"  void ListChangedEventArgs__ctor_m4263415498 (ListChangedEventArgs_t3132270315 * __this, int32_t ___listChangedType0, PropertyDescriptor_t4250402154 * ___propDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.Int32)
extern "C"  void ListChangedEventArgs__ctor_m2492526393 (ListChangedEventArgs_t3132270315 * __this, int32_t ___listChangedType0, int32_t ___newIndex1, int32_t ___oldIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.ComponentModel.PropertyDescriptor)
extern "C"  void ListChangedEventArgs__ctor_m2080125025 (ListChangedEventArgs_t3132270315 * __this, int32_t ___listChangedType0, int32_t ___newIndex1, PropertyDescriptor_t4250402154 * ___propDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::get_ListChangedType()
extern "C"  int32_t ListChangedEventArgs_get_ListChangedType_m2933154239 (ListChangedEventArgs_t3132270315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_OldIndex()
extern "C"  int32_t ListChangedEventArgs_get_OldIndex_m3562107238 (ListChangedEventArgs_t3132270315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_NewIndex()
extern "C"  int32_t ListChangedEventArgs_get_NewIndex_m1190415009 (ListChangedEventArgs_t3132270315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::get_PropertyDescriptor()
extern "C"  PropertyDescriptor_t4250402154 * ListChangedEventArgs_get_PropertyDescriptor_m1928905731 (ListChangedEventArgs_t3132270315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
