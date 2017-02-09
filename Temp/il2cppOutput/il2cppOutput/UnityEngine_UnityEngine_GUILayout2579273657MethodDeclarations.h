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

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1194435593;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3486805455;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t4183744904;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction3486805455.h"

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m2402986769 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___image0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m3466110979 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m616748838 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3790214718 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Box_m3664870224 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoBox(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoBox_m3374299019 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m3322709003 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1965952312 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m1976649007 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m1577258936 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m1395012445 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___maxLength1, bool ___multiline2, GUIStyle_t1799908754 * ___style3, GUILayoutOptionU5BU5D_t2108882777* ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Toggle_m3870477298 (Il2CppObject * __this /* static, unused */, bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoToggle_m1070689199 (Il2CppObject * __this /* static, unused */, bool ___value0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, GUILayoutOptionU5BU5D_t2108882777* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m3384492769 (Il2CppObject * __this /* static, unused */, int32_t ___selected0, StringU5BU5D_t1642385972* ___texts1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m821436721 (Il2CppObject * __this /* static, unused */, int32_t ___selected0, GUIContentU5BU5D_t1194435593* ___contents1, GUIStyle_t1799908754 * ___style2, GUILayoutOptionU5BU5D_t2108882777* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_HorizontalSlider_m2178689167 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t2108882777* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_DoHorizontalSlider_m814227090 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUIStyle_t1799908754 * ___slider3, GUIStyle_t1799908754 * ___thumb4, GUILayoutOptionU5BU5D_t2108882777* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m1087863221 (Il2CppObject * __this /* static, unused */, float ___pixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C"  void GUILayout_FlexibleSpace_m2019304577 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m212592284 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2108882777* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m4254247010 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m4258536965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m3700184690 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t2108882777* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m1515022372 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m297596185 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m3297699023 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___screenRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m1017899184 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___screenRect0, GUIStyle_t1799908754 * ___style1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m2728230265 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___screenRect0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m1904221074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t2243707579  GUILayout_BeginScrollView_m4280181007 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___scrollPosition0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t2243707579  GUILayout_BeginScrollView_m3658586336 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___scrollPosition0, bool ___alwaysShowHorizontal1, bool ___alwaysShowVertical2, GUIStyle_t1799908754 * ___horizontalScrollbar3, GUIStyle_t1799908754 * ___verticalScrollbar4, GUIStyle_t1799908754 * ___background5, GUILayoutOptionU5BU5D_t2108882777* ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m1883730923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m630360730 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t3681755626  GUILayout_Window_m478317676 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t3681755626  ___screenRect1, WindowFunction_t3486805455 * ___func2, String_t* ___text3, GUILayoutOptionU5BU5D_t2108882777* ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t3681755626  GUILayout_DoWindow_m281510993 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t3681755626  ___screenRect1, WindowFunction_t3486805455 * ___func2, GUIContent_t4210063000 * ___content3, GUIStyle_t1799908754 * ___style4, GUILayoutOptionU5BU5D_t2108882777* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_Width_m261136689 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_Height_m607115982 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_ExpandWidth_m2515540937 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_ExpandHeight_m3157662872 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
