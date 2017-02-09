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

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t3980897534;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3486805455;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction3486805455.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
extern "C"  void LayoutedWindow__ctor_m248691487 (LayoutedWindow_t3980897534 * __this, WindowFunction_t3486805455 * ___f0, Rect_t3681755626  ___screenRect1, GUIContent_t4210063000 * ___content2, GUILayoutOptionU5BU5D_t2108882777* ___options3, GUIStyle_t1799908754 * ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
extern "C"  void LayoutedWindow_DoWindow_m565295080 (LayoutedWindow_t3980897534 * __this, int32_t ___windowID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
