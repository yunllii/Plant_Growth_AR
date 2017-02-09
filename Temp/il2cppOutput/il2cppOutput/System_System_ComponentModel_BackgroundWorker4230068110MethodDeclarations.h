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

// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t4230068110;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t941110040;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t839864825;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t2492476920;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1185541675;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t62745097;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t711712958;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3512304465;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_DoWorkEventHandler941110040.h"
#include "System_System_ComponentModel_ProgressChangedEventHa839864825.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve2492476920.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_AsyncOperation1185541675.h"
#include "mscorlib_System_Threading_SendOrPostCallback296893742.h"
#include "System_System_ComponentModel_DoWorkEventArgs62745097.h"
#include "System_System_ComponentModel_ProgressChangedEventAr711712958.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve3512304465.h"

// System.Void System.ComponentModel.BackgroundWorker::.ctor()
extern "C"  void BackgroundWorker__ctor_m1094278231 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C"  void BackgroundWorker_add_DoWork_m2672114792 (BackgroundWorker_t4230068110 * __this, DoWorkEventHandler_t941110040 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C"  void BackgroundWorker_remove_DoWork_m2299839231 (BackgroundWorker_t4230068110 * __this, DoWorkEventHandler_t941110040 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C"  void BackgroundWorker_add_ProgressChanged_m2246518738 (BackgroundWorker_t4230068110 * __this, ProgressChangedEventHandler_t839864825 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C"  void BackgroundWorker_remove_ProgressChanged_m2237019227 (BackgroundWorker_t4230068110 * __this, ProgressChangedEventHandler_t839864825 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C"  void BackgroundWorker_add_RunWorkerCompleted_m2828676360 (BackgroundWorker_t4230068110 * __this, RunWorkerCompletedEventHandler_t2492476920 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C"  void BackgroundWorker_remove_RunWorkerCompleted_m414933983 (BackgroundWorker_t4230068110 * __this, RunWorkerCompletedEventHandler_t2492476920 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_CancellationPending()
extern "C"  bool BackgroundWorker_get_CancellationPending_m39235810 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_IsBusy()
extern "C"  bool BackgroundWorker_get_IsBusy_m636771537 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerReportsProgress()
extern "C"  bool BackgroundWorker_get_WorkerReportsProgress_m3233809058 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerReportsProgress(System.Boolean)
extern "C"  void BackgroundWorker_set_WorkerReportsProgress_m1300333679 (BackgroundWorker_t4230068110 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerSupportsCancellation()
extern "C"  bool BackgroundWorker_get_WorkerSupportsCancellation_m1350619959 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerSupportsCancellation(System.Boolean)
extern "C"  void BackgroundWorker_set_WorkerSupportsCancellation_m1199182366 (BackgroundWorker_t4230068110 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CancelAsync()
extern "C"  void BackgroundWorker_CancelAsync_m3954754031 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32)
extern "C"  void BackgroundWorker_ReportProgress_m156785401 (BackgroundWorker_t4230068110 * __this, int32_t ___percentProgress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32,System.Object)
extern "C"  void BackgroundWorker_ReportProgress_m1138486123 (BackgroundWorker_t4230068110 * __this, int32_t ___percentProgress0, Il2CppObject * ___userState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync()
extern "C"  void BackgroundWorker_RunWorkerAsync_m3901459818 (BackgroundWorker_t4230068110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ProcessWorker(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C"  void BackgroundWorker_ProcessWorker_m3927842777 (BackgroundWorker_t4230068110 * __this, Il2CppObject * ___argument0, AsyncOperation_t1185541675 * ___async1, SendOrPostCallback_t296893742 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CompleteWorker(System.Object)
extern "C"  void BackgroundWorker_CompleteWorker_m4246663922 (BackgroundWorker_t4230068110 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync(System.Object)
extern "C"  void BackgroundWorker_RunWorkerAsync_m361888218 (BackgroundWorker_t4230068110 * __this, Il2CppObject * ___argument0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnDoWork(System.ComponentModel.DoWorkEventArgs)
extern "C"  void BackgroundWorker_OnDoWork_m3232070558 (BackgroundWorker_t4230068110 * __this, DoWorkEventArgs_t62745097 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnProgressChanged(System.ComponentModel.ProgressChangedEventArgs)
extern "C"  void BackgroundWorker_OnProgressChanged_m1056667164 (BackgroundWorker_t4230068110 * __this, ProgressChangedEventArgs_t711712958 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnRunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C"  void BackgroundWorker_OnRunWorkerCompleted_m1949190078 (BackgroundWorker_t4230068110 * __this, RunWorkerCompletedEventArgs_t3512304465 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<ReportProgress>m__0(System.Object)
extern "C"  void BackgroundWorker_U3CReportProgressU3Em__0_m1946665309 (BackgroundWorker_t4230068110 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<CompleteWorker>m__1(System.Object)
extern "C"  void BackgroundWorker_U3CCompleteWorkerU3Em__1_m3058548786 (BackgroundWorker_t4230068110 * __this, Il2CppObject * ___darg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
