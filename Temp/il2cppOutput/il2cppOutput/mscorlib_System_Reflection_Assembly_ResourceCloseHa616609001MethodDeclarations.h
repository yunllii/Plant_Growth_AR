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

// System.Reflection.Assembly/ResourceCloseHandler
struct ResourceCloseHandler_t616609001;
// System.Reflection.Module
struct Module_t4282841206;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.Reflection.Assembly/ResourceCloseHandler::.ctor(System.Reflection.Module)
extern "C"  void ResourceCloseHandler__ctor_m638358783 (ResourceCloseHandler_t616609001 * __this, Module_t4282841206 * ___module0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly/ResourceCloseHandler::OnClose(System.Object,System.EventArgs)
extern "C"  void ResourceCloseHandler_OnClose_m168405420 (ResourceCloseHandler_t616609001 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
